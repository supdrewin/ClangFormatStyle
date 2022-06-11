#pragma once

namespace nested
{
	namespace one
	{
		inline void no_op ( ) { }
	}  // namespace one

	namespace no_empty
	{
		void no_op ( );

		template <typename T>
		T add ( T a, T b );
	}  // namespace no_empty

	namespace empty
	{
	}
}  // namespace nested
