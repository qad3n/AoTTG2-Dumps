using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20005A7")]
internal class ButtonPopupSettingElement : BaseSettingElement
{
	[Token(Token = "0x4001B6C")]
	[FieldOffset(Offset = "0x38")]
	private Text _label;

	[Token(Token = "0x4001B6D")]
	[FieldOffset(Offset = "0x40")]
	protected BasePopup _popup;

	[Token(Token = "0x17000B12")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003A31")]
		[Address(RVA = "0x3F80F20", Offset = "0x3F80F20", VA = "0x3F80F20", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003A32")]
	[Address(RVA = "0x3F7EE70", Offset = "0x3F7EE70", VA = "0x3F7EE70")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, BasePopup popup, string tooltip, float elementWidth, float elementHeight)
	{
	}

	[Token(Token = "0x6003A33")]
	[Address(RVA = "0x3F80FA0", Offset = "0x3F80FA0", VA = "0x3F80FA0")]
	private void OnClick()
	{
	}

	[Token(Token = "0x6003A34")]
	[Address(RVA = "0x3F80FD0", Offset = "0x3F80FD0", VA = "0x3F80FD0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003A35")]
	[Address(RVA = "0x3F81060", Offset = "0x3F81060", VA = "0x3F81060")]
	public ButtonPopupSettingElement()
	{
	}
}
