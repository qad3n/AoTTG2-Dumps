using System.Collections.Generic;
using System.Globalization;
using Il2CppDummyDll;
using Settings;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005BB")]
internal class SliderSettingElement : BaseSettingElement
{
	[Token(Token = "0x4001BBE")]
	[FieldOffset(Offset = "0x38")]
	protected Slider _slider;

	[Token(Token = "0x4001BBF")]
	[FieldOffset(Offset = "0x40")]
	protected Text _valueLabel;

	[Token(Token = "0x4001BC0")]
	[FieldOffset(Offset = "0x48")]
	protected NumberFormatInfo _formatInfo;

	[Token(Token = "0x17000B23")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003ABA")]
		[Address(RVA = "0x3F89F00", Offset = "0x3F89F00", VA = "0x3F89F00", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003ABB")]
	[Address(RVA = "0x3F89FA0", Offset = "0x3F89FA0", VA = "0x3F89FA0")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float elementWidth, float elementHeight, int decimalPlaces)
	{
	}

	[Token(Token = "0x6003ABC")]
	[Address(RVA = "0x3F8A6B0", Offset = "0x3F8A6B0", VA = "0x3F8A6B0")]
	protected void OnValueChanged(float value)
	{
	}

	[Token(Token = "0x6003ABD")]
	[Address(RVA = "0x3F8A850", Offset = "0x3F8A850", VA = "0x3F8A850")]
	protected void UpdateValueLabel()
	{
	}

	[Token(Token = "0x6003ABE")]
	[Address(RVA = "0x3F8A950", Offset = "0x3F8A950", VA = "0x3F8A950", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003ABF")]
	[Address(RVA = "0x3F8AA60", Offset = "0x3F8AA60", VA = "0x3F8AA60")]
	public SliderSettingElement()
	{
	}
}
