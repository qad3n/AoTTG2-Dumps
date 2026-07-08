using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Settings;

[Token(Token = "0x20000B6")]
internal class KeybindSetting : BaseSetting
{
	[Token(Token = "0x400047A")]
	[FieldOffset(Offset = "0x10")]
	public List<InputKey> InputKeys;

	[Token(Token = "0x400047B")]
	[FieldOffset(Offset = "0x18")]
	protected string[] _defaultKeyStrings;

	[Token(Token = "0x60003A7")]
	[Address(RVA = "0x3E07E30", Offset = "0x3E07E30", VA = "0x3E07E30")]
	public KeybindSetting(string[] defaultKeyStrings)
	{
	}

	[Token(Token = "0x60003A8")]
	[Address(RVA = "0x3E0EE70", Offset = "0x3E0EE70", VA = "0x3E0EE70")]
	public bool ContainsEnter()
	{
		return default(bool);
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x3E0F020", Offset = "0x3E0F020", VA = "0x3E0F020", Slot = "4")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x60003AA")]
	[Address(RVA = "0x3E0F030", Offset = "0x3E0F030", VA = "0x3E0F030")]
	protected void LoadFromStringArray(string[] keyStrings)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x3E0F180", Offset = "0x3E0F180", VA = "0x3E0F180", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x3E0F4B0", Offset = "0x3E0F4B0", VA = "0x3E0F4B0")]
	public bool Contains(InputKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x3E0EEA0", Offset = "0x3E0EEA0", VA = "0x3E0EEA0")]
	public bool Contains(KeyCode key)
	{
		return default(bool);
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x3E0F640", Offset = "0x3E0F640", VA = "0x3E0F640")]
	public bool GetKeyDown(bool cl = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x3E0F820", Offset = "0x3E0F820", VA = "0x3E0F820")]
	public bool GetKey(bool cl = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x3E0FA50", Offset = "0x3E0FA50", VA = "0x3E0FA50")]
	public bool GetKeyUp(bool cl = false)
	{
		return default(bool);
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x3E0FC30", Offset = "0x3E0FC30", VA = "0x3E0FC30", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x3E0FEA0", Offset = "0x3E0FEA0", VA = "0x3E0FEA0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}
}
