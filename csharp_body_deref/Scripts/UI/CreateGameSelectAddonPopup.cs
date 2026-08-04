// ==================== AoTTG2 cross-reference ====================
// Type: UI.CreateGameSelectAddonPopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CreateGameSelectAddonPopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x20005C9")]
internal class CreateGameSelectAddonPopup : SelectListPopup
{
	[Token(Token = "0x4001C29")]
	[FieldOffset(Offset = "0x140")]
	private ListSetting<StringSetting> _addons;

	[Token(Token = "0x4001C2A")]
	[FieldOffset(Offset = "0x148")]
	private UnityAction _onAddonSelected;

	[Token(Token = "0x6003B6D")]
	[Address(RVA = "0x427C9A0", Offset = "0x427C9A0", VA = "0x427C9A0")]
	public void SetupSelector(ListSetting<StringSetting> addons, UnityAction onAddonSelected)
	{
	}

	[Token(Token = "0x6003B6E")]
	[Address(RVA = "0x427C9E0", Offset = "0x427C9E0", VA = "0x427C9E0", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6003B6F")]
	[Address(RVA = "0x427D230", Offset = "0x427D230", VA = "0x427D230")]
	private void OnAddonLoaded()
	{
	}

	[Token(Token = "0x6003B70")]
	[Address(RVA = "0x427D470", Offset = "0x427D470", VA = "0x427D470")]
	public CreateGameSelectAddonPopup()
	{
	}
}
