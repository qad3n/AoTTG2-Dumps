// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.NativeSliceExtensions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
