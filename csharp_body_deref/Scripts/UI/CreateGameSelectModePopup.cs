// ==================== AoTTG2 cross-reference ====================
// Type: UI.CreateGameSelectModePopup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/CreateGameSelectModePopup.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x20005D0")]
internal class CreateGameSelectModePopup : SelectListPopup
{
	[Token(Token = "0x4001C36")]
	[FieldOffset(Offset = "0x140")]
	private StringSetting _setting;

	[Token(Token = "0x4001C37")]
	[FieldOffset(Offset = "0x148")]
	private UnityAction _onModeSelected;

	[Token(Token = "0x6003B99")]
	[Address(RVA = "0x42780A0", Offset = "0x42780A0", VA = "0x42780A0")]
	public void SetupSelector(StringSetting setting, UnityAction onModeSelected)
	{
	}

	[Token(Token = "0x6003B9A")]
	[Address(RVA = "0x427FD40", Offset = "0x427FD40", VA = "0x427FD40", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x6003B9B")]
	[Address(RVA = "0x42804F0", Offset = "0x42804F0", VA = "0x42804F0")]
	private void OnModeLoaded()
	{
	}

	[Token(Token = "0x6003B9C")]
	[Address(RVA = "0x4280570", Offset = "0x4280570", VA = "0x4280570")]
	public CreateGameSelectModePopup()
	{
	}
}
