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
[Token(Token = "0x2000164")]
public readonly struct ConsoleKeyInfo
{
	[Token(Token = "0x400054D")]
	[FieldOffset(Offset = "0x0")]
	private readonly char _keyChar;

	[Token(Token = "0x400054E")]
	[FieldOffset(Offset = "0x4")]
	private readonly ConsoleKey _key;

	[Token(Token = "0x400054F")]
	[FieldOffset(Offset = "0x8")]
	private readonly ConsoleModifiers _mods;

	[Token(Token = "0x17000111")]
	public char KeyChar
	{
		[Token(Token = "0x6000C8B")]
		[Address(RVA = "0x846ED0", Offset = "0x8454D0", VA = "0x180846ED0")]
		get
		{
			return default(char);
		}
	}

	[Token(Token = "0x17000112")]
	public ConsoleKey Key
	{
		[Token(Token = "0x6000C8C")]
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
		get
		{
			return default(ConsoleKey);
		}
	}

	[Token(Token = "0x6000C8A")]
	[Address(RVA = "0x1B437F0", Offset = "0x1B41DF0", VA = "0x181B437F0")]
	public ConsoleKeyInfo(char keyChar, ConsoleKey key, bool shift, bool alt, bool control)
	{
	}

	[Token(Token = "0x6000C8D")]
	[Address(RVA = "0x1B43730", Offset = "0x1B41D30", VA = "0x181B43730", Slot = "0")]
	public override bool Equals(object value)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C8E")]
	[Address(RVA = "0x1B43710", Offset = "0x1B41D10", VA = "0x181B43710")]
	public bool Equals(ConsoleKeyInfo obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000C8F")]
	[Address(RVA = "0x1B437D0", Offset = "0x1B41DD0", VA = "0x181B437D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
