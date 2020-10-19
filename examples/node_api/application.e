note
	description: "[The Node API parses a chunk of MessagePack data into an immutable tree of dynamically-typed nodes.]"
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
			tree: MPACK_TREE_T_STRUCT_API
			data: POINTER
			size: INTEGER
			c_str: C_STRING
			file: RAW_FILE
			compact: BOOLEAN
			schema: INTEGER
		do
			create tree.make

				-- parse a file into a node tree
			{MPACK_FUNCTIONS}.mpack_tree_init_filename (tree, "message.mp", 0)
			{MPACK_FUNCTIONS}.mpack_tree_parse (tree)

			if attached {MPACK_FUNCTIONS}.mpack_tree_root (tree) as root then

					-- extract the example data on the msgpack homepage
				if attached {MPACK_FUNCTIONS}.mpack_node_map_cstr (root, "compact") as l_compact then
					compact := {MPACK_FUNCTIONS}.mpack_node_bool (l_compact).to_boolean
				end
				if attached {MPACK_FUNCTIONS}.mpack_node_map_cstr (root, "schema") as l_compact then
					schema := {MPACK_FUNCTIONS}.mpack_node_i32 (l_compact)
				end
					-- clean up and check for errors

				if {MPACK_FUNCTIONS}.mpack_tree_destroy (tree) /= {MPACK_ERROR_T_ENUM_API}.mpack_ok then
					print ("An error occurred decoding the data!%N")
					{EXCEPTIONS}.die (1)

				end
			end
		end

end
