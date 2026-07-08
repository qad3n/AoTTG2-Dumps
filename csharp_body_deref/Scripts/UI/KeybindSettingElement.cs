using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005B4")]
internal class KeybindSettingElement : BaseSettingElement
{
	[Token(Token = "0x4001B9F")]
	[FieldOffset(Offset = "0x38")]
	private List<Text> _buttonLabels;

	[Token(Token = "0x4001BA0")]
	[FieldOffset(Offset = "0x40")]
	private KeybindPopup _keybindPopup;

	[Token(Token = "0x17000B1C")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003A85")]
		[Address(RVA = "0x3F85D20", Offset = "0x3F85D20", VA = "0x3F85D20", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003A86")]
	[Address(RVA = "0x3F85DA0", Offset = "0x3F85DA0", VA = "0x3F85DA0")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, KeybindPopup keybindPopup, string tooltip, float elementWidth, float elementHeight, int bindCount)
	{
	}

	[Token(Token = "0x6003A87")]
	[Address(RVA = "0x3F85E40", Offset = "0x3F85E40", VA = "0x3F85E40")]
	private void CreateKeybindButton(int index, ElementStyle style, float width, float height)
	{
	}

	[Token(Token = "0x6003A88")]
	[Address(RVA = "0x3F86330", Offset = "0x3F86330", VA = "0x3F86330")]
	protected void OnButtonClicked(int index)
	{
	}

	[Token(Token = "0x6003A89")]
	[Address(RVA = "0x3F86410", Offset = "0x3F86410", VA = "0x3F86410", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003A8A")]
	[Address(RVA = "0x3F86550", Offset = "0x3F86550", VA = "0x3F86550")]
	public KeybindSettingElement()
	{
	}
}
