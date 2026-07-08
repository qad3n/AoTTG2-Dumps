using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005AF")]
internal class IconPickSettingElement : BaseSettingElement
{
	[Token(Token = "0x4001B89")]
	[FieldOffset(Offset = "0x38")]
	private Text _label;

	[Token(Token = "0x4001B8A")]
	[FieldOffset(Offset = "0x40")]
	protected string[] _options;

	[Token(Token = "0x17000B19")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003A66")]
		[Address(RVA = "0x3F83780", Offset = "0x3F83780", VA = "0x3F83780", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003A67")]
	[Address(RVA = "0x3F83820", Offset = "0x3F83820", VA = "0x3F83820")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string[] options, string[] iconPaths, string[] tooltips, IconPickPopup iconPickPopup, string tooltip, float elementWidth, float elementHeight, UnityAction onSelect, TooltipPopup tooltipPopup)
	{
	}

	[Token(Token = "0x6003A68")]
	[Address(RVA = "0x3F83D30", Offset = "0x3F83D30", VA = "0x3F83D30", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003A69")]
	[Address(RVA = "0x3F83EF0", Offset = "0x3F83EF0", VA = "0x3F83EF0")]
	public IconPickSettingElement()
	{
	}
}
