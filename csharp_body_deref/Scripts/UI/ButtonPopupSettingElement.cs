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

[Token(Token = "0x20007EA")]
internal class ButtonPopupSettingElement : BaseSettingElement
{
	[Token(Token = "0x400277D")]
	[FieldOffset(Offset = "0x38")]
	private Text _label;

	[Token(Token = "0x400277E")]
	[FieldOffset(Offset = "0x40")]
	protected BasePopup _popup;

	[Token(Token = "0x17000D44")]
	protected override HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004C19")]
		[Address(RVA = "0x5BED750", Offset = "0x5BEC750", VA = "0x5BED750", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004C1A")]
	[Address(RVA = "0x5BED7D0", Offset = "0x5BEC7D0", VA = "0x5BED7D0")]
	public void Setup(BaseSetting setting, ElementStyle style, string title, BasePopup popup, string tooltip, float elementWidth, float elementHeight)
	{
	}

	[Token(Token = "0x6004C1B")]
	[Address(RVA = "0x5BEDC80", Offset = "0x5BECC80", VA = "0x5BEDC80")]
	private void OnClick()
	{
	}

	[Token(Token = "0x6004C1C")]
	[Address(RVA = "0x5BEDCB0", Offset = "0x5BECCB0", VA = "0x5BEDCB0", Slot = "6")]
	public override void SyncElement()
	{
	}

	[Token(Token = "0x6004C1D")]
	[Address(RVA = "0x5BEDD40", Offset = "0x5BECD40", VA = "0x5BEDD40")]
	public ButtonPopupSettingElement()
	{
	}
}
