using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Settings;

[Token(Token = "0x20000B3")]
internal class InputKey
{
	[Token(Token = "0x400046D")]
	[FieldOffset(Offset = "0x10")]
	protected KeyCode _key;

	[Token(Token = "0x400046E")]
	[FieldOffset(Offset = "0x14")]
	protected bool _isSpecial;

	[Token(Token = "0x400046F")]
	[FieldOffset(Offset = "0x18")]
	protected SpecialKey _special;

	[Token(Token = "0x4000470")]
	[FieldOffset(Offset = "0x1C")]
	protected bool _isModifier;

	[Token(Token = "0x4000471")]
	[FieldOffset(Offset = "0x20")]
	protected KeyCode _modifier;

	[Token(Token = "0x4000472")]
	[FieldOffset(Offset = "0x28")]
	protected HashSet<KeyCode> ModifierKeys;

	[Token(Token = "0x4000473")]
	[FieldOffset(Offset = "0x30")]
	protected HashSet<string> AlphaDigits;

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x3E0D6D0", Offset = "0x3E0D6D0", VA = "0x3E0D6D0")]
	public InputKey()
	{
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x3E0D980", Offset = "0x3E0D980", VA = "0x3E0D980")]
	public InputKey(string keyStr)
	{
	}

	[Token(Token = "0x6000396")]
	[Address(RVA = "0x3E0DE00", Offset = "0x3E0DE00", VA = "0x3E0DE00")]
	public bool MatchesKeyCode(KeyCode key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x3E0DE20", Offset = "0x3E0DE20", VA = "0x3E0DE20")]
	public bool ReadNextInput()
	{
		return default(bool);
	}

	[Token(Token = "0x6000398")]
	[Address(RVA = "0x3E0E910", Offset = "0x3E0E910", VA = "0x3E0E910")]
	public bool GetKeyDown()
	{
		return default(bool);
	}

	[Token(Token = "0x6000399")]
	[Address(RVA = "0x3E0E9E0", Offset = "0x3E0E9E0", VA = "0x3E0E9E0")]
	public bool GetKey()
	{
		return default(bool);
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x3E0EA90", Offset = "0x3E0EA90", VA = "0x3E0EA90")]
	public bool GetKeyUp()
	{
		return default(bool);
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x3E0EB40", Offset = "0x3E0EB40", VA = "0x3E0EB40")]
	public bool IsWheel()
	{
		return default(bool);
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x3E0EB60", Offset = "0x3E0EB60", VA = "0x3E0EB60")]
	public bool IsNone()
	{
		return default(bool);
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x3E0EB80", Offset = "0x3E0EB80", VA = "0x3E0EB80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x3E0ECA0", Offset = "0x3E0ECA0", VA = "0x3E0ECA0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x3E0DC50", Offset = "0x3E0DC50", VA = "0x3E0DC50")]
	public void LoadFromString(string serializedKey)
	{
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x3E0E9C0", Offset = "0x3E0E9C0", VA = "0x3E0E9C0")]
	protected bool GetModifier()
	{
		return default(bool);
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x3E0E8A0", Offset = "0x3E0E8A0", VA = "0x3E0E8A0")]
	protected bool GetSpecial(SpecialKey specialKey)
	{
		return default(bool);
	}
}
