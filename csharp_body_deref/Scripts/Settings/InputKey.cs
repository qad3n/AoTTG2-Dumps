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

[Token(Token = "0x200010E")]
internal class InputKey
{
	[Token(Token = "0x4000648")]
	[FieldOffset(Offset = "0x10")]
	protected KeyCode _key;

	[Token(Token = "0x4000649")]
	[FieldOffset(Offset = "0x14")]
	protected bool _isSpecial;

	[Token(Token = "0x400064A")]
	[FieldOffset(Offset = "0x18")]
	protected SpecialKey _special;

	[Token(Token = "0x400064B")]
	[FieldOffset(Offset = "0x1C")]
	protected bool _isModifier;

	[Token(Token = "0x400064C")]
	[FieldOffset(Offset = "0x20")]
	protected KeyCode _modifier;

	[Token(Token = "0x400064D")]
	[FieldOffset(Offset = "0x28")]
	protected HashSet<KeyCode> ModifierKeys;

	[Token(Token = "0x400064E")]
	[FieldOffset(Offset = "0x30")]
	protected HashSet<string> AlphaDigits;

	[Token(Token = "0x60005A3")]
	[Address(RVA = "0x5A559E0", Offset = "0x5A549E0", VA = "0x5A559E0")]
	public InputKey()
	{
	}

	[Token(Token = "0x60005A4")]
	[Address(RVA = "0x5A55C90", Offset = "0x5A54C90", VA = "0x5A55C90")]
	public InputKey(string keyStr)
	{
	}

	[Token(Token = "0x60005A5")]
	[Address(RVA = "0x5A56130", Offset = "0x5A55130", VA = "0x5A56130")]
	public bool MatchesKeyCode(KeyCode key)
	{
		return default(bool);
	}

	[Token(Token = "0x60005A6")]
	[Address(RVA = "0x5A56150", Offset = "0x5A55150", VA = "0x5A56150")]
	public bool ReadNextInput()
	{
		return default(bool);
	}

	[Token(Token = "0x60005A7")]
	[Address(RVA = "0x5A56AE0", Offset = "0x5A55AE0", VA = "0x5A56AE0")]
	public bool GetKeyDown()
	{
		return default(bool);
	}

	[Token(Token = "0x60005A8")]
	[Address(RVA = "0x5A56BC0", Offset = "0x5A55BC0", VA = "0x5A56BC0")]
	public bool GetKey()
	{
		return default(bool);
	}

	[Token(Token = "0x60005A9")]
	[Address(RVA = "0x5A56C80", Offset = "0x5A55C80", VA = "0x5A56C80")]
	public bool GetKeyUp()
	{
		return default(bool);
	}

	[Token(Token = "0x60005AA")]
	[Address(RVA = "0x5A56D40", Offset = "0x5A55D40", VA = "0x5A56D40")]
	public bool IsWheel()
	{
		return default(bool);
	}

	[Token(Token = "0x60005AB")]
	[Address(RVA = "0x5A56D60", Offset = "0x5A55D60", VA = "0x5A56D60")]
	public bool IsNone()
	{
		return default(bool);
	}

	[Token(Token = "0x60005AC")]
	[Address(RVA = "0x5A56D80", Offset = "0x5A55D80", VA = "0x5A56D80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60005AD")]
	[Address(RVA = "0x5A56EB0", Offset = "0x5A55EB0", VA = "0x5A56EB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60005AE")]
	[Address(RVA = "0x5A55F70", Offset = "0x5A54F70", VA = "0x5A55F70")]
	public void LoadFromString(string serializedKey)
	{
	}

	[Token(Token = "0x60005AF")]
	[Address(RVA = "0x5A56BA0", Offset = "0x5A55BA0", VA = "0x5A56BA0")]
	protected bool GetModifier()
	{
		return default(bool);
	}

	[Token(Token = "0x60005B0")]
	[Address(RVA = "0x5A56A70", Offset = "0x5A55A70", VA = "0x5A56A70")]
	protected bool GetSpecial(SpecialKey specialKey)
	{
		return default(bool);
	}
}
