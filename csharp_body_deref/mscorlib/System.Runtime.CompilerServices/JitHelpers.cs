// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.CompilerServices.JitHelpers
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
