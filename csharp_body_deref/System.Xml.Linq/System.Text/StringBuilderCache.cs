using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000025")]
internal static class StringBuilderCache
{
	[Token(Token = "0x400005E")]
	[ThreadStatic]
	private static StringBuilder t_cachedInstance;

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x25E49F0", Offset = "0x25E2FF0", VA = "0x1825E49F0")]
	public static StringBuilder Acquire(int capacity = 16)
	{
		return null;
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x25E4B50", Offset = "0x25E3150", VA = "0x1825E4B50")]
	public static void Release(StringBuilder sb)
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x25E4AC0", Offset = "0x25E30C0", VA = "0x1825E4AC0")]
	public static string GetStringAndRelease(StringBuilder sb)
	{
		return null;
	}
}
