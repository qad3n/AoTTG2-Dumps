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

[Token(Token = "0x20000D3")]
internal class InputKey
{
	[Token(Token = "0x400050A")]
	[FieldOffset(Offset = "0x10")]
	protected KeyCode _key;

	[Token(Token = "0x400050B")]
	[FieldOffset(Offset = "0x14")]
	protected bool _isSpecial;

	[Token(Token = "0x400050C")]
	[FieldOffset(Offset = "0x18")]
	protected SpecialKey _special;

	[Token(Token = "0x400050D")]
	[FieldOffset(Offset = "0x1C")]
	protected bool _isModifier;

	[Token(Token = "0x400050E")]
	[FieldOffset(Offset = "0x20")]
	protected KeyCode _modifier;

	[Token(Token = "0x400050F")]
	[FieldOffset(Offset = "0x28")]
	protected HashSet<KeyCode> ModifierKeys;

	[Token(Token = "0x4000510")]
	[FieldOffset(Offset = "0x30")]
	protected HashSet<string> AlphaDigits;

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x1F1D440", Offset = "0x1F1BA40", VA = "0x181F1D440")]
	public InputKey()
	{
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x1F1D700", Offset = "0x1F1BD00", VA = "0x181F1D700")]
	public InputKey(string keyStr)
	{
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x1F1CB50", Offset = "0x1F1B150", VA = "0x181F1CB50")]
	public bool MatchesKeyCode(KeyCode key)
	{
		return default(bool);
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x1F1CB70", Offset = "0x1F1B170", VA = "0x181F1CB70")]
	public bool ReadNextInput()
	{
		return default(bool);
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x1F1C770", Offset = "0x1F1AD70", VA = "0x181F1C770")]
	public bool GetKeyDown()
	{
		return default(bool);
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x1F1C850", Offset = "0x1F1AE50", VA = "0x181F1C850")]
	public bool GetKey()
	{
		return default(bool);
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x1F1C7E0", Offset = "0x1F1ADE0", VA = "0x181F1C7E0")]
	public bool GetKeyUp()
	{
		return default(bool);
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x1F1C970", Offset = "0x1F1AF70", VA = "0x181F1C970")]
	public bool IsWheel()
	{
		return default(bool);
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x1F1C950", Offset = "0x1F1AF50", VA = "0x181F1C950")]
	public bool IsNone()
	{
		return default(bool);
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x1F1D310", Offset = "0x1F1B910", VA = "0x181F1D310", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x1F1C710", Offset = "0x1F1AD10", VA = "0x181F1C710", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x1F1C990", Offset = "0x1F1AF90", VA = "0x181F1C990")]
	public void LoadFromString(string serializedKey)
	{
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x1F1C8C0", Offset = "0x1F1AEC0", VA = "0x181F1C8C0")]
	protected bool GetModifier()
	{
		return default(bool);
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x1F1C8E0", Offset = "0x1F1AEE0", VA = "0x181F1C8E0")]
	protected bool GetSpecial(SpecialKey specialKey)
	{
		return default(bool);
	}
}
