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

[Token(Token = "0x2000757")]
internal class ToggleGroupSettingElement : BaseSettingElement
{
	[Token(Token = "0x4002469")]
	[FieldOffset(Offset = "0x38")]
	protected ToggleGroup _toggleGroup;

	[Token(Token = "0x400246A")]
	[FieldOffset(Offset = "0x40")]
	protected GameObject _optionsPanel;

	[Token(Token = "0x400246B")]
	[FieldOffset(Offset = "0x48")]
	protected string[] _options;

	[Token(Token = "0x400246C")]
	[FieldOffset(Offset = "0x50")]
	protected List<Toggle> _toggles;

	[Token(Token = "0x400246D")]
	[FieldOffset(Offset = "0x58")]
	private float _checkMarkSizeMultiplier;

	[Token(Token = "0x17000CD3")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x600478A")]
		[Address(RVA = "0x2239020", Offset = "0x2237620", VA = "0x182239020", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600478B")]
	[Address(RVA = "0x2238A80", Offset = "0x2237080", VA = "0x182238A80")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string[] options, string tooltip, float elementWidth, float elementHeight)
	{
	}

	[Token(Token = "0x600478C")]
	[Address(RVA = "0x22382B0", Offset = "0x22368B0", VA = "0x1822382B0")]
	protected Toggle CreateOptionToggle(string option, int index, ElementStyle style, float width, float height)
	{
		return null;
	}

	[Token(Token = "0x600478D")]
	[Address(RVA = "0x2238960", Offset = "0x2236F60", VA = "0x182238960")]
	protected void OnValueChanged(string option, int index, bool value)
	{
	}

	[Token(Token = "0x600478E")]
	[Address(RVA = "0x2238D90", Offset = "0x2237390", VA = "0x182238D90", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x600478F")]
	[Address(RVA = "0x2238890", Offset = "0x2236E90", VA = "0x182238890")]
	private int FindOptionIndex(string option)
	{
		return default(int);
	}

	[Token(Token = "0x6004790")]
	[Address(RVA = "0x2238FA0", Offset = "0x22375A0", VA = "0x182238FA0")]
	public ToggleGroupSettingElement()
	{
	}
}
