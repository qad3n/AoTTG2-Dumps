using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x200004D")]
public static class NativeSliceExtensions
{
	[Token(Token = "0x60000A4")]
	public static NativeSlice<T> Slice<T>(this NativeArray<T> thisArray, int start, int length) where T : struct
	{
		return default(NativeSlice<T>);
	}

	[Token(Token = "0x60000A5")]
	public static NativeSlice<T> Slice<T>(this NativeSlice<T> thisSlice, int start, int length) where T : struct
	{
		return default(NativeSlice<T>);
	}
}
