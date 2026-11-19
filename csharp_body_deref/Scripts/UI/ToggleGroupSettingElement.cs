// ==================== AoTTG2 cross-reference ====================
// Type: UI.ToggleGroupSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ToggleGroupSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/ToggleGroupSettingElement.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007FF")]
internal class ToggleGroupSettingElement : BaseSettingElement
{
	[Token(Token = "0x40027DA")]
	[FieldOffset(Offset = "0x38")]
	protected ToggleGroup _toggleGroup;

	[Token(Token = "0x40027DB")]
	[FieldOffset(Offset = "0x40")]
	protected GameObject _optionsPanel;

	[Token(Token = "0x40027DC")]
	[FieldOffset(Offset = "0x48")]
	protected string[] _options;

	[Token(Token = "0x40027DD")]
	[FieldOffset(Offset = "0x50")]
	protected List<Toggle> _toggles;

	[Token(Token = "0x40027DE")]
	[FieldOffset(Offset = "0x58")]
	private float _checkMarkSizeMultiplier;

	[Token(Token = "0x17000D56")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004CAC")]
		[Address(RVA = "0x5BF8170", Offset = "0x5BF7170", VA = "0x5BF8170", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004CAD")]
	[Address(RVA = "0x5BF8210", Offset = "0x5BF7210", VA = "0x5BF8210")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string[] options, string tooltip, float elementWidth, float elementHeight)
	{
	}

	[Token(Token = "0x6004CAE")]
	[Address(RVA = "0x5BF84E0", Offset = "0x5BF74E0", VA = "0x5BF84E0")]
	protected Toggle CreateOptionToggle(string option, int index, ElementStyle style, float width, float height)
	{
		return null;
	}

	[Token(Token = "0x6004CAF")]
	[Address(RVA = "0x5BF8B30", Offset = "0x5BF7B30", VA = "0x5BF8B30")]
	protected void OnValueChanged(string option, int index, bool value)
	{
	}

	[Token(Token = "0x6004CB0")]
	[Address(RVA = "0x5BF8C50", Offset = "0x5BF7C50", VA = "0x5BF8C50", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004CB1")]
	[Address(RVA = "0x5BF8DA0", Offset = "0x5BF7DA0", VA = "0x5BF8DA0")]
	private int FindOptionIndex(string option)
	{
		return default(int);
	}

	[Token(Token = "0x6004CB2")]
	[Address(RVA = "0x5BF8E50", Offset = "0x5BF7E50", VA = "0x5BF8E50")]
	public ToggleGroupSettingElement()
	{
	}
}
