// ==================== AoTTG2 cross-reference ====================
// Type: System.ConsoleKeyInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200013C")]
public readonly struct ConsoleKeyInfo
{
	[Token(Token = "0x40004AB")]
	[FieldOffset(Offset = "0x0")]
	private readonly char _keyChar;

	[Token(Token = "0x40004AC")]
	[FieldOffset(Offset = "0x4")]
	private readonly ConsoleKey _key;

	[Token(Token = "0x40004AD")]
	[FieldOffset(Offset = "0x8")]
	private readonly ConsoleModifiers _mods;

	[Token(Token = "0x17000111")]
	public char KeyChar
	{
		[Token(Token = "0x6000C66")]
		[Address(RVA = "0x54E0260", Offset = "0x54DF260", VA = "0x54E0260")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000112")]
	public ConsoleKey Key
	{
		[Token(Token = "0x6000C67")]
		[Address(RVA = "0x54E0270", Offset = "0x54DF270", VA = "0x54E0270")]
		get
		{
			return default(ConsoleKey);
		}
	}

	[Token(Token = "0x6000C65")]
	[Address(RVA = "0x54E01D0", Offset = "0x54DF1D0", VA = "0x54E01D0")]
	public ConsoleKeyInfo(char keyChar, ConsoleKey key, bool shift, bool alt, bool control)
	{
	}

	[Token(Token = "0x6000C68")]
	[Address(RVA = "0x54E0280", Offset = "0x54DF280", VA = "0x54E0280", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C69")]
	[Address(RVA = "0x54E0300", Offset = "0x54DF300", VA = "0x54E0300")]
	public bool Equals(ConsoleKeyInfo obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C6A")]
	[Address(RVA = "0x54E0320", Offset = "0x54DF320", VA = "0x54E0320", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
