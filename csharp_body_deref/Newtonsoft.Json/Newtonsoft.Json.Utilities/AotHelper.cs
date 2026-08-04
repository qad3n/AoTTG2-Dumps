// ==================== AoTTG2 cross-reference ====================
// Type: Newtonsoft.Json.Utilities.AotHelper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Newtonsoft.Json.Utilities;

[Token(Token = "0x200008F")]
public static class AotHelper
{
	[Token(Token = "0x4000360")]
	[FieldOffset(Offset = "0x0")]
	private static bool s_alwaysFalse;

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x3DA9700", Offset = "0x3DA9700", VA = "0x3DA9700")]
	public static void Ensure(Action action)
	{
	}

	[Token(Token = "0x60004CE")]
	public static void EnsureType<T>() where T : new()
	{
	}

	[Token(Token = "0x60004CF")]
	public static void EnsureList<T>()
	{
	}

	[Token(Token = "0x60004D0")]
	public static void EnsureDictionary<TKey, TValue>()
	{
	}

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x3DA9890", Offset = "0x3DA9890", VA = "0x3DA9890")]
	public static bool IsFalse()
	{
		return default(bool);
	}
}
