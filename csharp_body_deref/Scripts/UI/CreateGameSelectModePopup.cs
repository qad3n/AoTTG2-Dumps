using Il2CppDummyDll;
using Settings;
using UnityEngine.Events;

namespace UI;

[Token(Token = "0x200058B")]
internal class CreateGameSelectModePopup : SelectListPopup
{
	[Token(Token = "0x4001B23")]
	[FieldOffset(Offset = "0x140")]
	private StringSetting _setting;

	[Token(Token = "0x4001B24")]
	[FieldOffset(Offset = "0x148")]
	private UnityAction _onModeSelected;

	[Token(Token = "0x600398A")]
	[Address(RVA = "0x3F6A920", Offset = "0x3F6A920", VA = "0x3F6A920")]
	public void SetupSelector(StringSetting setting, UnityAction onModeSelected)
	{
	}

	[Token(Token = "0x600398B")]
	[Address(RVA = "0x3F72330", Offset = "0x3F72330", VA = "0x3F72330", Slot = "21")]
	public override void Show()
	{
	}

	[Token(Token = "0x600398C")]
	[Address(RVA = "0x3F72AE0", Offset = "0x3F72AE0", VA = "0x3F72AE0")]
	private void OnModeLoaded()
	{
	}

	[Token(Token = "0x600398D")]
	[Address(RVA = "0x3F72B60", Offset = "0x3F72B60", VA = "0x3F72B60")]
	public CreateGameSelectModePopup()
	{
	}
}
