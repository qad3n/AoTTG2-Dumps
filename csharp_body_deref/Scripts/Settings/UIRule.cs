// ==================== AoTTG2 cross-reference ====================
// Type: Settings.UIRule
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/UIRule.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Settings;

[Serializable]
[Token(Token = "0x20000BA")]
public class UIRule
{
	[Token(Token = "0x40003B1")]
	[FieldOffset(Offset = "0x10")]
	public UIRuleType Type;

	[Token(Token = "0x40003B2")]
	[FieldOffset(Offset = "0x18")]
	public string SettingId;

	[Token(Token = "0x40003B3")]
	[FieldOffset(Offset = "0x20")]
	public object DefaultValue;

	[Token(Token = "0x40003B4")]
	[FieldOffset(Offset = "0x28")]
	public float? Min;

	[Token(Token = "0x40003B5")]
	[FieldOffset(Offset = "0x30")]
	public float? Max;

	[Token(Token = "0x40003B6")]
	[FieldOffset(Offset = "0x38")]
	public List<string> AllowedValues;

	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0x40")]
	public bool DisableEditing;

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x5A3C6C0", Offset = "0x5A3B6C0", VA = "0x5A3C6C0")]
	public bool MatchesAllowedValues(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x5A3C920", Offset = "0x5A3B920", VA = "0x5A3C920")]
	public static bool MatchesRule(object value, UIRule rule)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x5A3CA20", Offset = "0x5A3BA20", VA = "0x5A3CA20")]
	private static bool MatchesDefault(object value, object defaultValue)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x5A3CA80", Offset = "0x5A3BA80", VA = "0x5A3CA80")]
	private static bool MatchesRange(object value, float? min, float? max)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x5A3CBF0", Offset = "0x5A3BBF0", VA = "0x5A3CBF0")]
	private static bool MatchesAllowedValues(object value, List<string> allowedValues)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x5A3CC60", Offset = "0x5A3BC60", VA = "0x5A3CC60")]
	public UIRule()
	{
	}
}
