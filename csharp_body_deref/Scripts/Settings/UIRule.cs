// ==================== AoTTG2 cross-reference ====================
// Type: Settings.UIRule
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Settings/UIRule.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Settings;

[Serializable]
[Token(Token = "0x2000083")]
public class UIRule
{
	[Token(Token = "0x4000285")]
	[FieldOffset(Offset = "0x10")]
	public UIRuleType Type;

	[Token(Token = "0x4000286")]
	[FieldOffset(Offset = "0x18")]
	public string SettingId;

	[Token(Token = "0x4000287")]
	[FieldOffset(Offset = "0x20")]
	public object DefaultValue;

	[Token(Token = "0x4000288")]
	[FieldOffset(Offset = "0x28")]
	public float? Min;

	[Token(Token = "0x4000289")]
	[FieldOffset(Offset = "0x30")]
	public float? Max;

	[Token(Token = "0x400028A")]
	[FieldOffset(Offset = "0x38")]
	public List<string> AllowedValues;

	[Token(Token = "0x400028B")]
	[FieldOffset(Offset = "0x40")]
	public bool DisableEditing;

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x1DD1D90", Offset = "0x1DD0390", VA = "0x181DD1D90")]
	public bool MatchesAllowedValues(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x1DD20F0", Offset = "0x1DD06F0", VA = "0x181DD20F0")]
	public static bool MatchesRule(object value, UIRule rule)
	{
		return default(bool);
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x1DD1FB0", Offset = "0x1DD05B0", VA = "0x181DD1FB0")]
	private static bool MatchesDefault(object value, object defaultValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x1DD2010", Offset = "0x1DD0610", VA = "0x181DD2010")]
	private static bool MatchesRange(object value, float? min, float? max)
	{
		return default(bool);
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x1DD1D10", Offset = "0x1DD0310", VA = "0x181DD1D10")]
	private static bool MatchesAllowedValues(object value, List<string> allowedValues)
	{
		return default(bool);
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public UIRule()
	{
	}
}
