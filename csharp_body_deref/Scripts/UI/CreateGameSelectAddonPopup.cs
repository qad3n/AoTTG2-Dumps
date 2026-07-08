using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x2000584")]
internal class CreateGameSelectAddonPopup : SelectListPopup
{
	[Token(Token = "0x4001B16")]
	[FieldOffset(Offset = "0x140")]
	private ListSetting<StringSetting> _addons;

	[Token(Token = "0x4001B17")]
	[FieldOffset(Offset = "0x148")]
	private UnityAction _onAddonSelected;

	[Token(Token = "0x600395E")]
	[Address(RVA = "0x3F6EF90", Offset = "0x3F6EF90", VA = "0x3F6EF90")]
	public void SetupSelector(ListSetting<StringSetting> addons, UnityAction onAddonSelected)
	{
	}

	[Token(Token = "0x600395F")]
	[Address(RVA = "0x3F6EFD0", Offset = "0x3F6EFD0", VA = "0x3F6EFD0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6003960")]
	[Address(RVA = "0x3F6F820", Offset = "0x3F6F820", VA = "0x3F6F820")]
	private void OnAddonLoaded()
	{
	}

	[Token(Token = "0x6003961")]
	[Address(RVA = "0x3F6FA60", Offset = "0x3F6FA60", VA = "0x3F6FA60")]
	public CreateGameSelectAddonPopup()
	{
	}
}
