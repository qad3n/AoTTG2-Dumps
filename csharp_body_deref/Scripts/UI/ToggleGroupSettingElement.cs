using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005BC")]
internal class ToggleGroupSettingElement : BaseSettingElement
{
	[Token(Token = "0x4001BC1")]
	[FieldOffset(Offset = "0x38")]
	protected ToggleGroup _toggleGroup;

	[Token(Token = "0x4001BC2")]
	[FieldOffset(Offset = "0x40")]
	protected GameObject _optionsPanel;

	[Token(Token = "0x4001BC3")]
	[FieldOffset(Offset = "0x48")]
	protected string[] _options;

	[Token(Token = "0x4001BC4")]
	[FieldOffset(Offset = "0x50")]
	protected List<Toggle> _toggles;

	[Token(Token = "0x4001BC5")]
	[FieldOffset(Offset = "0x58")]
	private float _checkMarkSizeMultiplier;

	[Token(Token = "0x17000B24")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003AC1")]
		[Address(RVA = "0x3F8AA80", Offset = "0x3F8AA80", VA = "0x3F8AA80", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003AC2")]
	[Address(RVA = "0x3F8AB20", Offset = "0x3F8AB20", VA = "0x3F8AB20")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string[] options, string tooltip, float elementWidth, float elementHeight)
	{
	}

	[Token(Token = "0x6003AC3")]
	[Address(RVA = "0x3F8AE00", Offset = "0x3F8AE00", VA = "0x3F8AE00")]
	protected Toggle CreateOptionToggle(string option, int index, ElementStyle style, float width, float height)
	{
		return null;
	}

	[Token(Token = "0x6003AC4")]
	[Address(RVA = "0x3F8B420", Offset = "0x3F8B420", VA = "0x3F8B420")]
	protected void OnValueChanged(string option, int index, bool value)
	{
	}

	[Token(Token = "0x6003AC5")]
	[Address(RVA = "0x3F8B540", Offset = "0x3F8B540", VA = "0x3F8B540", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003AC6")]
	[Address(RVA = "0x3F8B6A0", Offset = "0x3F8B6A0", VA = "0x3F8B6A0")]
	private int FindOptionIndex(string option)
	{
		return default(int);
	}

	[Token(Token = "0x6003AC7")]
	[Address(RVA = "0x3F8B750", Offset = "0x3F8B750", VA = "0x3F8B750")]
	public ToggleGroupSettingElement()
	{
	}
}
