// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.LowLevel.Unsafe.NativeArrayUnsafeUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.Collections.LowLevel.Unsafe;

[Token(Token = "0x2000062")]
public static class NativeArrayUnsafeUtility
{
	[Token(Token = "0x60000CA")]
	public unsafe static NativeArray<T> ConvertExistingDataToNativeArray<T>(void* dataPointer, int length, Allocator allocator) where T : struct
	{
		return default(NativeArray<T>);
	}

	[Token(Token = "0x60000CB")]
	public unsafe static void* GetUnsafePtr<T>(this NativeArray<T> nativeArray) where T : struct
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x60000CC")]
	public unsafe static void* GetUnsafeReadOnlyPtr<T>(this NativeArray<T> nativeArray) where T : struct
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}
}
