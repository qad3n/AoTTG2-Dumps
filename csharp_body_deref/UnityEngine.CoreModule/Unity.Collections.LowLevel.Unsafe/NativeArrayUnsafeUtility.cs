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
