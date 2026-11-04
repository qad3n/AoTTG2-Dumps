// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.NativeSliceUnsafeUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000077")]
public static class NativeSliceUnsafeUtility
{
	[Token(Token = "0x600015F")]
	public unsafe static NativeSlice<T> ConvertExistingDataToNativeSlice<T>(void* dataPointer, int stride, int length) where T : struct
	{
		return default(NativeSlice<T>);
	}

	[Token(Token = "0x6000160")]
	public unsafe static void* GetUnsafePtr<T>(this NativeSlice<T> nativeSlice) where T : struct
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000161")]
	public unsafe static void* GetUnsafeReadOnlyPtr<T>(this NativeSlice<T> nativeSlice) where T : struct
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}
}
