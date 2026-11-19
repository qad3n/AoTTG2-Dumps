// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.StringBuilderCache
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x200028D")]
internal static class StringBuilderCache
{
	[Token(Token = "0x4000B13")]
	[ThreadStatic]
	private static StringBuilder t_cachedInstance;

	[Token(Token = "0x600166F")]
	[Address(RVA = "0x5311580", Offset = "0x5310580", VA = "0x5311580")]
	public static StringBuilder Acquire(int capacity = 16)
	{
		return null;
	}

	[Token(Token = "0x6001670")]
	[Address(RVA = "0x5311640", Offset = "0x5310640", VA = "0x5311640")]
	public static void Release(StringBuilder sb)
	{
	}

	[Token(Token = "0x6001671")]
	[Address(RVA = "0x53116C0", Offset = "0x53106C0", VA = "0x53116C0")]
	public static string GetStringAndRelease(StringBuilder sb)
	{
		return null;
	}
}
