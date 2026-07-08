using Il2CppDummyDll;

namespace System.Runtime.CompilerServices;

[Token(Token = "0x20004A4")]
internal static class JitHelpers
{
	[Token(Token = "0x6002300")]
	internal static T UnsafeCast<T>(object o) where T : class
	{
		return null;
	}

	[Token(Token = "0x6002301")]
	internal static int UnsafeEnumCast<T>(T val) where T : struct
	{
		return default(int);
	}

	[Token(Token = "0x6002302")]
	internal static long UnsafeEnumCastLong<T>(T val) where T : struct
	{
		return default(long);
	}
}
