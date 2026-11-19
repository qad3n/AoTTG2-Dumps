using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000025")]
internal static class StringBuilderCache
{
	[Token(Token = "0x400005E")]
	[ThreadStatic]
	private static StringBuilder t_cachedInstance;

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x5FA3960", Offset = "0x5FA2960", VA = "0x5FA3960")]
	public static StringBuilder Acquire(int capacity = 16)
	{
		return null;
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x5FA8760", Offset = "0x5FA7760", VA = "0x5FA8760")]
	public static void Release(StringBuilder sb)
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x5FA3A10", Offset = "0x5FA2A10", VA = "0x5FA3A10")]
	public static string GetStringAndRelease(StringBuilder sb)
	{
		return null;
	}
}
