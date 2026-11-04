// ==================== AoTTG2 cross-reference ====================
// Type: UI.ButtonPopupSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ButtonPopupSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/ButtonPopupSettingElement.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000742")]
internal class ButtonPopupSettingElement : BaseSettingElement
{
	[Token(Token = "0x400240D")]
	[FieldOffset(Offset = "0x38")]
	private Text _label;

	[Token(Token = "0x400240E")]
	[FieldOffset(Offset = "0x40")]
	protected BasePopup _popup;

	[Token(Token = "0x17000CC1")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x60046F9")]
		[Address(RVA = "0x2202560", Offset = "0x2200B60", VA = "0x182202560", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60046FA")]
	[Address(RVA = "0x2201FD0", Offset = "0x22005D0", VA = "0x182201FD0")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, BasePopup popup, string tooltip, float elementWidth, float elementHeight)
	{
	}

	[Token(Token = "0x60046FB")]
	[Address(RVA = "0x2201FA0", Offset = "0x22005A0", VA = "0x182201FA0")]
	private void OnClick()
	{
	}

	[Token(Token = "0x60046FC")]
	[Address(RVA = "0x22024C0", Offset = "0x2200AC0", VA = "0x1822024C0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x60046FD")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	public ButtonPopupSettingElement()
	{
	}
}
