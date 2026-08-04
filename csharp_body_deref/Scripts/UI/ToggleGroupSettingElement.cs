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

[Token(Token = "0x2000601")]
internal class ToggleGroupSettingElement : BaseSettingElement
{
	[Token(Token = "0x4001CD4")]
	[FieldOffset(Offset = "0x38")]
	protected ToggleGroup _toggleGroup;

	[Token(Token = "0x4001CD5")]
	[FieldOffset(Offset = "0x40")]
	protected GameObject _optionsPanel;

	[Token(Token = "0x4001CD6")]
	[FieldOffset(Offset = "0x48")]
	protected string[] _options;

	[Token(Token = "0x4001CD7")]
	[FieldOffset(Offset = "0x50")]
	protected List<Toggle> _toggles;

	[Token(Token = "0x4001CD8")]
	[FieldOffset(Offset = "0x58")]
	private float _checkMarkSizeMultiplier;

	[Token(Token = "0x17000B8E")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003CD1")]
		[Address(RVA = "0x42989F0", Offset = "0x42989F0", VA = "0x42989F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003CD2")]
	[Address(RVA = "0x4298A90", Offset = "0x4298A90", VA = "0x4298A90")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string[] options, string tooltip, float elementWidth, float elementHeight)
	{
	}

	[Token(Token = "0x6003CD3")]
	[Address(RVA = "0x4298D70", Offset = "0x4298D70", VA = "0x4298D70")]
	protected Toggle CreateOptionToggle(string option, int index, ElementStyle style, float width, float height)
	{
		return null;
	}

	[Token(Token = "0x6003CD4")]
	[Address(RVA = "0x4299390", Offset = "0x4299390", VA = "0x4299390")]
	protected void OnValueChanged(string option, int index, bool value)
	{
	}

	[Token(Token = "0x6003CD5")]
	[Address(RVA = "0x42994B0", Offset = "0x42994B0", VA = "0x42994B0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003CD6")]
	[Address(RVA = "0x4299610", Offset = "0x4299610", VA = "0x4299610")]
	private int FindOptionIndex(string option)
	{
		return default(int);
	}

	[Token(Token = "0x6003CD7")]
	[Address(RVA = "0x42996C0", Offset = "0x42996C0", VA = "0x42996C0")]
	public ToggleGroupSettingElement()
	{
	}
}
