using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005BE")]
internal class ToggleSettingElement : BaseSettingElement
{
	[Token(Token = "0x4001BC9")]
	[FieldOffset(Offset = "0x38")]
	protected Toggle _toggle;

	[Token(Token = "0x4001BCA")]
	[FieldOffset(Offset = "0x40")]
	private float _checkMarkSizeMultiplier;

	[Token(Token = "0x4001BCB")]
	[FieldOffset(Offset = "0x48")]
	private UnityAction _onValueChanged;

	[Token(Token = "0x17000B25")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003ACA")]
		[Address(RVA = "0x3F8B800", Offset = "0x3F8B800", VA = "0x3F8B800", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003ACB")]
	[Address(RVA = "0x3F8B880", Offset = "0x3F8B880", VA = "0x3F8B880")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip, float elementWidth, float elementHeight, UnityAction onValueChanged)
	{
	}

	[Token(Token = "0x6003ACC")]
	[Address(RVA = "0x3F8BCE0", Offset = "0x3F8BCE0", VA = "0x3F8BCE0")]
	protected void OnValueChanged(bool value)
	{
	}

	[Token(Token = "0x6003ACD")]
	[Address(RVA = "0x3F8BD90", Offset = "0x3F8BD90", VA = "0x3F8BD90", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003ACE")]
	[Address(RVA = "0x3F8BE20", Offset = "0x3F8BE20", VA = "0x3F8BE20")]
	public ToggleSettingElement()
	{
	}
}
