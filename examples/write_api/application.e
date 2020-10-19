note
	description: "[
		The Write API encodes structured data to MessagePack.
	]"
	date: "$Date$"
	revision: "$Revision$"

class
	APPLICATION

inherit
	ARGUMENTS_32

create
	make

feature {NONE} -- Initialization

	make
			-- Run application.
		local
			error: BOOLEAN
			write: MPACK_WRITER_T_STRUCT_API
			data: POINTER
			size: INTEGER
			c_str: C_STRING
			file: RAW_FILE
		do
				-- encode to memory buffer
			create write.make
			{MPACK_FUNCTIONS}.mpack_writer_init_growable (write, $data, $size)

				-- write the example on the msgpack homepage
			{MPACK_FUNCTIONS}.mpack_start_map (write, 2)
			{MPACK_FUNCTIONS}.mpack_write_cstr (write, "compact")
			{MPACK_FUNCTIONS}.mpack_write_bool (write, 1)
			{MPACK_FUNCTIONS}.mpack_write_cstr (write, "schema")
			{MPACK_FUNCTIONS}.mpack_write_u32 (write, 10)
			{MPACK_FUNCTIONS}.mpack_writer_track_pop (write, {MPACK_TYPE_T_ENUM_API}.mpack_type_map)

				-- finish writing
			if ({MPACK_FUNCTIONS}.mpack_writer_destroy (write) /= {MPACK_ERROR_T_ENUM_API}.mpack_ok) then
				print ("An error occurred encoding the data!%N")
				{EXCEPTIONS}.die (1)
			end

			create c_str.make_by_pointer_and_count (data, size)
			print (c_str.string)
			create file.make_create_read_write ("message.mp")
			file.put_managed_pointer (create {MANAGED_POINTER}.make_from_pointer (data, size), 0, size)
			file.close
		end

end
