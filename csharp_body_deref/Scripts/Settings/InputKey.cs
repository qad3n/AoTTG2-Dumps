// ==================== AoTTG2 cross-reference ====================
// Type: Settings.InputKey
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/InputKey.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/InputKey.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Settings;

[Token(Token = "0x20000B5")]
internal class InputKey
{
	[Token(Token = "0x4000487")]
	[FieldOffset(Offset = "0x10")]
	protected KeyCode _key;

	[Token(Token = "0x4000488")]
	[FieldOffset(Offset = "0x14")]
	protected bool _isSpecial;

	[Token(Token = "0x4000489")]
	[FieldOffset(Offset = "0x18")]
	protected SpecialKey _special;

	[Token(Token = "0x400048A")]
	[FieldOffset(Offset = "0x1C")]
	protected bool _isModifier;

	[Token(Token = "0x400048B")]
	[FieldOffset(Offset = "0x20")]
	protected KeyCode _modifier;

	[Token(Token = "0x400048C")]
	[FieldOffset(Offset = "0x28")]
	protected HashSet<KeyCode> ModifierKeys;

	[Token(Token = "0x400048D")]
	[FieldOffset(Offset = "0x30")]
	protected HashSet<string> AlphaDigits;

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x40FFAE0", Offset = "0x40FFAE0", VA = "0x40FFAE0")]
	public InputKey()
	{
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x40FFD90", Offset = "0x40FFD90", VA = "0x40FFD90")]
	public InputKey(string keyStr)
	{
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x4100210", Offset = "0x4100210", VA = "0x4100210")]
	public bool MatchesKeyCode(KeyCode key)
	{
		return default(bool);
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x4100230", Offset = "0x4100230", VA = "0x4100230")]
	public bool ReadNextInput()
	{
		return default(bool);
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x4100D20", Offset = "0x4100D20", VA = "0x4100D20")]
	public bool GetKeyDown()
	{
		return default(bool);
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x4100DF0", Offset = "0x4100DF0", VA = "0x4100DF0")]
	public bool GetKey()
	{
		return default(bool);
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x4100EA0", Offset = "0x4100EA0", VA = "0x4100EA0")]
	public bool GetKeyUp()
	{
		return default(bool);
	}

	[Token(Token = "0x60003A1")]
	[Address(RVA = "0x4100F50", Offset = "0x4100F50", VA = "0x4100F50")]
	public bool IsWheel()
	{
		return default(bool);
	}

	[Token(Token = "0x60003A2")]
	[Address(RVA = "0x4100F70", Offset = "0x4100F70", VA = "0x4100F70")]
	public bool IsNone()
	{
		return default(bool);
	}

	[Token(Token = "0x60003A3")]
	[Address(RVA = "0x4100F90", Offset = "0x4100F90", VA = "0x4100F90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60003A4")]
	[Address(RVA = "0x41010B0", Offset = "0x41010B0", VA = "0x41010B0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60003A5")]
	[Address(RVA = "0x4100060", Offset = "0x4100060", VA = "0x4100060")]
	public void LoadFromString(string serializedKey)
	{
	}

	[Token(Token = "0x60003A6")]
	[Address(RVA = "0x4100DD0", Offset = "0x4100DD0", VA = "0x4100DD0")]
	protected bool GetModifier()
	{
		return default(bool);
	}

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x4100CB0", Offset = "0x4100CB0", VA = "0x4100CB0")]
	protected bool GetSpecial(SpecialKey specialKey)
	{
		return default(bool);
	}
}
