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
	[Address(RVA = "0x3AB3DB0", Offset = "0x3AB3DB0", VA = "0x3AB3DB0")]
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
	[Address(RVA = "0x3AB3F40", Offset = "0x3AB3F40", VA = "0x3AB3F40")]
	public static bool IsFalse()
	{
		return default(bool);
	}
}
