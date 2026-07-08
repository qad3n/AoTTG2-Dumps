using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000025")]
internal static class StringBuilderCache
{
	[Token(Token = "0x400005E")]
	[ThreadStatic]
	private static StringBuilder t_cachedInstance;

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x43416B0", Offset = "0x43416B0", VA = "0x43416B0")]
	public static StringBuilder Acquire(int capacity = 16)
	{
		return null;
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x43461D0", Offset = "0x43461D0", VA = "0x43461D0")]
	public static void Release(StringBuilder sb)
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x4341770", Offset = "0x4341770", VA = "0x4341770")]
	public static string GetStringAndRelease(StringBuilder sb)
	{
		return null;
	}
}
