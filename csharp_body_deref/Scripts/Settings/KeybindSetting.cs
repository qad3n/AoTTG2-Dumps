// ==================== AoTTG2 cross-reference ====================
// Type: Settings.KeybindSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/KeybindSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/KeybindSetting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Settings;

[Token(Token = "0x20000B9")]
internal class KeybindSetting : BaseSetting
{
	[Token(Token = "0x4000494")]
	[FieldOffset(Offset = "0x10")]
	public List<InputKey> InputKeys;

	[Token(Token = "0x4000495")]
	[FieldOffset(Offset = "0x18")]
	protected string[] _defaultKeyStrings;

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x40F38C0", Offset = "0x40F38C0", VA = "0x40F38C0")]
	public KeybindSetting(string[] defaultKeyStrings)
	{
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x4101230", Offset = "0x4101230", VA = "0x4101230")]
	public bool ContainsEnter()
	{
		return default(bool);
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x41013E0", Offset = "0x41013E0", VA = "0x41013E0", Slot = "4")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x41013F0", Offset = "0x41013F0", VA = "0x41013F0")]
	protected void LoadFromStringArray(string[] keyStrings)
	{
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x4101540", Offset = "0x4101540", VA = "0x4101540", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x4101870", Offset = "0x4101870", VA = "0x4101870")]
	public bool Contains(InputKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x4101260", Offset = "0x4101260", VA = "0x4101260")]
	public bool Contains(KeyCode key)
	{
		return default(bool);
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x4101A00", Offset = "0x4101A00", VA = "0x4101A00")]
	public bool GetKeyDown(bool cl = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x4101BF0", Offset = "0x4101BF0", VA = "0x4101BF0")]
	public bool GetKey(bool cl = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x4101E30", Offset = "0x4101E30", VA = "0x4101E30")]
	public bool GetKeyUp(bool cl = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x4102020", Offset = "0x4102020", VA = "0x4102020", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x4102290", Offset = "0x4102290", VA = "0x4102290", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}
}
