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
		[Address(RVA = "0x3CDC110", Offset = "0x3CDC110", VA = "0x3CDC110")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000111")]
	public ConsoleKey Key
	{
		[Token(Token = "0x6000C42")]
		[Address(RVA = "0x3CDC120", Offset = "0x3CDC120", VA = "0x3CDC120")]
		get
		{
			return default(ConsoleKey);
		}
	}

	[Token(Token = "0x6000C40")]
	[Address(RVA = "0x3CDC080", Offset = "0x3CDC080", VA = "0x3CDC080")]
	public ConsoleKeyInfo(char keyChar, ConsoleKey key, bool shift, bool alt, bool control)
	{
	}

	[Token(Token = "0x6000C43")]
	[Address(RVA = "0x3CDC130", Offset = "0x3CDC130", VA = "0x3CDC130", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C44")]
	[Address(RVA = "0x3CDC1B0", Offset = "0x3CDC1B0", VA = "0x3CDC1B0")]
	public bool Equals(ConsoleKeyInfo obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C45")]
	[Address(RVA = "0x3CDC1D0", Offset = "0x3CDC1D0", VA = "0x3CDC1D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
