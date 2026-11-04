// ==================== AoTTG2 cross-reference ====================
// Type: System.Text.StringBuilderCache
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Text;

[Token(Token = "0x20002B5")]
internal static class StringBuilderCache
{
	[Token(Token = "0x4000BB5")]
	[ThreadStatic]
	private static StringBuilder t_cachedInstance;

	[Token(Token = "0x6001697")]
	[Address(RVA = "0x197CAE0", Offset = "0x197B0E0", VA = "0x18197CAE0")]
	public static StringBuilder Acquire(int capacity = 16)
	{
		return null;
	}

	[Token(Token = "0x6001698")]
	[Address(RVA = "0x197CC60", Offset = "0x197B260", VA = "0x18197CC60")]
	public static void Release(StringBuilder sb)
	{
	}

	[Token(Token = "0x6001699")]
	[Address(RVA = "0x197CBC0", Offset = "0x197B1C0", VA = "0x18197CBC0")]
	public static string GetStringAndRelease(StringBuilder sb)
	{
		return null;
	}
}
