using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x2000025")]
internal static class StringBuilderCache
{
	[Token(Token = "0x400005E")]
	[ThreadStatic]
	private static StringBuilder t_cachedInstance;

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x4691F80", Offset = "0x4691F80", VA = "0x4691F80")]
	public static StringBuilder Acquire(int capacity = 16)
	{
		return null;
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x4696AA0", Offset = "0x4696AA0", VA = "0x4696AA0")]
	public static void Release(StringBuilder sb)
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x4692040", Offset = "0x4692040", VA = "0x4692040")]
	public static string GetStringAndRelease(StringBuilder sb)
	{
		return null;
	}
}
