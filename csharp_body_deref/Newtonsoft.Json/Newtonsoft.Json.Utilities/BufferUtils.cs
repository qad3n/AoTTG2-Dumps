// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.BufferUtils
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x20000CF")]
internal static class BufferUtils
{
	[Token(Token = "0x6000644")]
	[Address(RVA = "0x3DBB780", Offset = "0x3DBB780", VA = "0x3DBB780")]
	public static char[] RentBuffer(IArrayPool<char>? bufferPool, int minSize)
	{
		return null;
	}

	[Token(Token = "0x6000645")]
	[Address(RVA = "0x3DBB840", Offset = "0x3DBB840", VA = "0x3DBB840")]
	public static void ReturnBuffer(IArrayPool<char>? bufferPool, char[]? buffer)
	{
	}

	[Token(Token = "0x6000646")]
	[Address(RVA = "0x3DBB900", Offset = "0x3DBB900", VA = "0x3DBB900")]
	public static char[]? EnsureBufferSize(IArrayPool<char>? bufferPool, int size, char[]? buffer)
	{
		return null;
	}
}
