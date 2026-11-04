// ==================== AoTTG2 cross-reference ====================
// Type: Settings.PresetDefinition
// Update status: NEW in this game update
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
[Token(Token = "0x200007C")]
public class PresetDefinition
{
	[Token(Token = "0x4000268")]
	[FieldOffset(Offset = "0x10")]
	public string Category;

	[Token(Token = "0x4000269")]
	[FieldOffset(Offset = "0x18")]
	public string SubCategory;

	[Token(Token = "0x400026A")]
	[FieldOffset(Offset = "0x20")]
	public string Name;

	[Token(Token = "0x400026B")]
	[FieldOffset(Offset = "0x28")]
	public string Description;

	[Token(Token = "0x400026C")]
	[FieldOffset(Offset = "0x30")]
	public string Extends;

	[Token(Token = "0x400026D")]
	[FieldOffset(Offset = "0x38")]
	public List<string> UIRules;

	[Token(Token = "0x400026E")]
	[FieldOffset(Offset = "0x40")]
	public Dictionary<string, List<string>> Variants;

	[Token(Token = "0x400026F")]
	[FieldOffset(Offset = "0x48")]
	public List<ExperienceUISection> UISections;

	[NonSerialized]
	[Token(Token = "0x4000270")]
	[FieldOffset(Offset = "0x50")]
	private List<UIRule> _uiRules;

	[NonSerialized]
	[Token(Token = "0x4000271")]
	[FieldOffset(Offset = "0x58")]
	private UIRule _mapRule;

	[NonSerialized]
	[Token(Token = "0x4000272")]
	[FieldOffset(Offset = "0x60")]
	private UIRule _modeRule;

	[Token(Token = "0x1700008C")]
	public string DefaultVariant
	{
		[Token(Token = "0x600034A")]
		[Address(RVA = "0x1DC8930", Offset = "0x1DC6F30", VA = "0x181DC8930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008D")]
	public List<UIRule> UIRulesObject
	{
		[Token(Token = "0x600034D")]
		[Address(RVA = "0x1DC8E20", Offset = "0x1DC7420", VA = "0x181DC8E20")]
		get
		{
			return null;
		}
		[Token(Token = "0x600034E")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700008E")]
	public UIRule MapRule
	{
		[Token(Token = "0x600034F")]
		[Address(RVA = "0x1DC8AE0", Offset = "0x1DC70E0", VA = "0x181DC8AE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008F")]
	public UIRule ModeRule
	{
		[Token(Token = "0x6000350")]
		[Address(RVA = "0x1DC8C80", Offset = "0x1DC7280", VA = "0x181DC8C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600034B")]
	[Address(RVA = "0x1DC79C0", Offset = "0x1DC5FC0", VA = "0x181DC79C0")]
	public static PresetDefinition FromJson(string json)
	{
		return null;
	}

	[Token(Token = "0x600034C")]
	[Address(RVA = "0x1DC7C10", Offset = "0x1DC6210", VA = "0x181DC7C10")]
	internal static Dictionary<string, List<string>> ReadVariants(JSONNode experience)
	{
		return null;
	}

	[Token(Token = "0x6000351")]
	[Address(RVA = "0x1DC7AB0", Offset = "0x1DC60B0", VA = "0x181DC7AB0")]
	private UIRule GetRule(string id)
	{
		return null;
	}

	[Token(Token = "0x6000352")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public PresetDefinition()
	{
	}
}
