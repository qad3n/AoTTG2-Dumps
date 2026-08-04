// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.StringBuilderCache
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000285")]
internal static class StringBuilderCache
{
	[Token(Token = "0x4000B75")]
	[ThreadStatic]
	private static StringBuilder t_cachedInstance;

	[Token(Token = "0x600162B")]
	[Address(RVA = "0x3B068D0", Offset = "0x3B068D0", VA = "0x3B068D0")]
	public static StringBuilder Acquire(int capacity = 16)
	{
		return null;
	}

	[Token(Token = "0x600162C")]
	[Address(RVA = "0x3B069A0", Offset = "0x3B069A0", VA = "0x3B069A0")]
	public static void Release(StringBuilder sb)
	{
	}

	[Token(Token = "0x600162D")]
	[Address(RVA = "0x3B06A20", Offset = "0x3B06A20", VA = "0x3B06A20")]
	public static string GetStringAndRelease(StringBuilder sb)
	{
		return null;
	}
}
