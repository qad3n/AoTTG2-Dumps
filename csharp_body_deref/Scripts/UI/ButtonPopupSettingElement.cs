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

[Token(Token = "0x20005EC")]
internal class ButtonPopupSettingElement : BaseSettingElement
{
	[Token(Token = "0x4001C7F")]
	[FieldOffset(Offset = "0x38")]
	private Text _label;

	[Token(Token = "0x4001C80")]
	[FieldOffset(Offset = "0x40")]
	protected BasePopup _popup;

	[Token(Token = "0x17000B7C")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003C41")]
		[Address(RVA = "0x428ED50", Offset = "0x428ED50", VA = "0x428ED50", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003C42")]
	[Address(RVA = "0x428C880", Offset = "0x428C880", VA = "0x428C880")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, BasePopup popup, string tooltip, float elementWidth, float elementHeight)
	{
	}

	[Token(Token = "0x6003C43")]
	[Address(RVA = "0x428EDD0", Offset = "0x428EDD0", VA = "0x428EDD0")]
	private void OnClick()
	{
	}

	[Token(Token = "0x6003C44")]
	[Address(RVA = "0x428EE00", Offset = "0x428EE00", VA = "0x428EE00", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6003C45")]
	[Address(RVA = "0x428EE90", Offset = "0x428EE90", VA = "0x428EE90")]
	public ButtonPopupSettingElement()
	{
	}
}
