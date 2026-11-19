// ==================== AoTTG2 cross-reference ====================
// Type: Settings.PresetDefinition
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/PresetDefinition.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Serializable]
[Token(Token = "0x20000B3")]
public class PresetDefinition
{
	[Token(Token = "0x4000395")]
	[FieldOffset(Offset = "0x10")]
	public string Category;

	[Token(Token = "0x4000396")]
	[FieldOffset(Offset = "0x18")]
	public string SubCategory;

	[Token(Token = "0x4000397")]
	[FieldOffset(Offset = "0x20")]
	public string Name;

	[Token(Token = "0x4000398")]
	[FieldOffset(Offset = "0x28")]
	public string Extends;

	[Token(Token = "0x4000399")]
	[FieldOffset(Offset = "0x30")]
	public List<string> UIRules;

	[Token(Token = "0x400039A")]
	[FieldOffset(Offset = "0x38")]
	public Dictionary<string, List<string>> Variants;

	[Token(Token = "0x400039B")]
	[FieldOffset(Offset = "0x40")]
	public List<ExperienceUISection> UISections;

	[NonSerialized]
	[Token(Token = "0x400039C")]
	[FieldOffset(Offset = "0x48")]
	private List<UIRule> _uiRules;

	[NonSerialized]
	[Token(Token = "0x400039D")]
	[FieldOffset(Offset = "0x50")]
	private UIRule _mapRule;

	[NonSerialized]
	[Token(Token = "0x400039E")]
	[FieldOffset(Offset = "0x58")]
	private UIRule _modeRule;

	[Token(Token = "0x170000A9")]
	public string DefaultVariant
	{
		[Token(Token = "0x60004B5")]
		[Address(RVA = "0x5A39200", Offset = "0x5A38200", VA = "0x5A39200")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AA")]
	public List<UIRule> UIRulesObject
	{
		[Token(Token = "0x60004B8")]
		[Address(RVA = "0x5A3B780", Offset = "0x5A3A780", VA = "0x5A3B780")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004B9")]
		[Address(RVA = "0x5A3B7C0", Offset = "0x5A3A7C0", VA = "0x5A3B7C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	public UIRule MapRule
	{
		[Token(Token = "0x60004BA")]
		[Address(RVA = "0x5A3B7D0", Offset = "0x5A3A7D0", VA = "0x5A3B7D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AC")]
	public UIRule ModeRule
	{
		[Token(Token = "0x60004BB")]
		[Address(RVA = "0x5A3B980", Offset = "0x5A3A980", VA = "0x5A3B980")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x5A393A0", Offset = "0x5A383A0", VA = "0x5A393A0")]
	public static PresetDefinition FromJson(string json)
	{
		return null;
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x5A39460", Offset = "0x5A38460", VA = "0x5A39460")]
	internal static Dictionary<string, List<string>> ReadVariants(JSONNode experience)
	{
		return null;
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x5A3BB30", Offset = "0x5A3AB30", VA = "0x5A3BB30")]
	private UIRule GetRule(string id)
	{
		return null;
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x5A3BCA0", Offset = "0x5A3ACA0", VA = "0x5A3BCA0")]
	public PresetDefinition()
	{
	}
}
