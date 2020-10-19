note
	description: "Summary description for {MPACK_FUNCTIONS}."
	date: "$Date$"
	revision: "$Revision$"

class
	MPACK_FUNCTIONS

inherit

	MPACK_FUNCTIONS_API
		rename
			mpack_expect_utf8_cstr as mpack_expect_utf8_cstr_api
		end


feature -- Access



	mpack_expect_utf8_cstr (reader: MPACK_READER_T_STRUCT_API; buf: STRING)
		do
			c_mpack_expect_utf8_cstr (reader.item, buf.area.base_address, buf.count.to_natural_32)
		ensure
			instance_free: class
		end


end
