using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005A8")]
internal class ColorSettingElement : BaseSettingElement
{
	[Token(Token = "0x4001B6E")]
	[FieldOffset(Offset = "0x38")]
	private Image _image;

	[Token(Token = "0x4001B6F")]
	[FieldOffset(Offset = "0x40")]
	private ColorPickPopup _colorPickPopup;

	[Token(Token = "0x4001B70")]
	[FieldOffset(Offset = "0x48")]
	private UnityAction _onChangeColor;

	[Token(Token = "0x17000B13")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003A37")]
		[Address(RVA = "0x3F810A0", Offset = "0x3F810A0", VA = "0x3F810A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003A38")]
	[Address(RVA = "0x3F7E7B0", Offset = "0x3F7E7B0", VA = "0x3F7E7B0")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, ColorPickPopup colorPickPopup, string tooltip, float elementWidth, float elementHeight, UnityAction onChangeColor)
	{
	}

	[Token(Token = "0x6003A39")]
	[Address(RVA = "0x3F81120", Offset = "0x3F81120", VA = "0x3F81120")]
	protected void OnButtonClicked()
	{
	}

	[Token(Token = "0x6003A3A")]
	[Address(RVA = "0x3F811A0", Offset = "0x3F811A0", VA = "0x3F811A0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003A3B")]
	[Address(RVA = "0x3F81240", Offset = "0x3F81240", VA = "0x3F81240")]
	public ColorSettingElement()
	{
	}
}
