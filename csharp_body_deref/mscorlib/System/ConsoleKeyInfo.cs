using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200013C")]
public readonly struct ConsoleKeyInfo
{
	[Token(Token = "0x40004F0")]
	[FieldOffset(Offset = "0x0")]
	private readonly char _keyChar;

	[Token(Token = "0x40004F1")]
	[FieldOffset(Offset = "0x4")]
	private readonly ConsoleKey _key;

	[Token(Token = "0x40004F2")]
	[FieldOffset(Offset = "0x8")]
	private readonly ConsoleModifiers _mods;

	[Token(Token = "0x17000110")]
	public char KeyChar
	{
		[Token(Token = "0x6000C41")]
		[Address(RVA = "0x4FF65F0", Offset = "0x4FF65F0", VA = "0x4FF65F0")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000111")]
	public ConsoleKey Key
	{
		[Token(Token = "0x6000C42")]
		[Address(RVA = "0x4FF6600", Offset = "0x4FF6600", VA = "0x4FF6600")]
		get
		{
			return default(ConsoleKey);
		}
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x4FF6560", Offset = "0x4FF6560", VA = "0x4FF6560")]
	public ConsoleKeyInfo(char keyChar, ConsoleKey key, bool shift, bool alt, bool control)
	{
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x4FF6610", Offset = "0x4FF6610", VA = "0x4FF6610", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x4FF6690", Offset = "0x4FF6690", VA = "0x4FF6690")]
	public bool Equals(ConsoleKeyInfo obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x4FF66B0", Offset = "0x4FF66B0", VA = "0x4FF66B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
