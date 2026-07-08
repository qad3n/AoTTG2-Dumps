using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000285")]
internal static class StringBuilderCache
{
	[Token(Token = "0x4000B75")]
	[ThreadStatic]
	private static StringBuilder t_cachedInstance;

	[Token(Token = "0x600162B")]
	[Address(RVA = "0x4E20DB0", Offset = "0x4E20DB0", VA = "0x4E20DB0")]
	public static StringBuilder Acquire(int capacity = 16)
	{
		return null;
	}

	[Token(Token = "0x600162C")]
	[Address(RVA = "0x4E20E80", Offset = "0x4E20E80", VA = "0x4E20E80")]
	public static void Release(StringBuilder sb)
	{
	}

	[Token(Token = "0x600162D")]
	[Address(RVA = "0x4E20F00", Offset = "0x4E20F00", VA = "0x4E20F00")]
	public static string GetStringAndRelease(StringBuilder sb)
	{
		return null;
	}
}
