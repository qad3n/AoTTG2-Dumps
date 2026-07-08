using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000CF")]
internal static class BufferUtils
{
	[Token(Token = "0x6000644")]
	[Address(RVA = "0x3AC5E30", Offset = "0x3AC5E30", VA = "0x3AC5E30")]
	public static char[] RentBuffer(IArrayPool<char>? bufferPool, int minSize)
	{
		return null;
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x3AC5EF0", Offset = "0x3AC5EF0", VA = "0x3AC5EF0")]
	public static void ReturnBuffer(IArrayPool<char>? bufferPool, char[]? buffer)
	{
	}

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x3AC5FB0", Offset = "0x3AC5FB0", VA = "0x3AC5FB0")]
	public static char[]? EnsureBufferSize(IArrayPool<char>? bufferPool, int size, char[]? buffer)
	{
		return null;
	}
}
