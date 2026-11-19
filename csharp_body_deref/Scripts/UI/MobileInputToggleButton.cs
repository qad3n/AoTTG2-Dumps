// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputToggleButton
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputToggleButton.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000746")]
public class MobileInputToggleButton : MonoBehaviour, IPointerClickHandler, IEventSystemHandler
{
	[Token(Token = "0x40024A2")]
	[FieldOffset(Offset = "0x20")]
	private MobileInput[] _inputs;

	[Token(Token = "0x40024A3")]
	[FieldOffset(Offset = "0x28")]
	private Image _image;

	[Token(Token = "0x40024A4")]
	[FieldOffset(Offset = "0x30")]
	private MobileInputSkin _offSkin;

	[Token(Token = "0x40024A5")]
	[FieldOffset(Offset = "0x38")]
	private MobileInputSkin _onSkin;

	[Token(Token = "0x40024A6")]
	[FieldOffset(Offset = "0x40")]
	private MobileInputControlShape _shape;

	[Token(Token = "0x40024A7")]
	[FieldOffset(Offset = "0x44")]
	private bool _active;

	[Token(Token = "0x60046A4")]
	[Address(RVA = "0x5B6D0C0", Offset = "0x5B6C0C0", VA = "0x5B6D0C0")]
	public void Setup(MobileInput[] inputs, MobileInputSkin offSkin, MobileInputSkin onSkin, MobileInputControlShape shape)
	{
	}

	[Token(Token = "0x60046A5")]
	[Address(RVA = "0x5B71A80", Offset = "0x5B70A80", VA = "0x5B71A80")]
	private void OnEnable()
	{
	}

	[Token(Token = "0x60046A6")]
	[Address(RVA = "0x5B71B10", Offset = "0x5B70B10", VA = "0x5B71B10")]
	private void OnDisable()
	{
	}

	[Token(Token = "0x60046A7")]
	[Address(RVA = "0x5B71C90", Offset = "0x5B70C90", VA = "0x5B71C90")]
	private void OnStateCleared()
	{
	}

	[Token(Token = "0x60046A8")]
	[Address(RVA = "0x5B71CA0", Offset = "0x5B70CA0", VA = "0x5B71CA0", Slot = "4")]
	public void OnPointerClick(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60046A9")]
	[Address(RVA = "0x5B71C10", Offset = "0x5B70C10", VA = "0x5B71C10")]
	private void SetActive(bool active)
	{
	}

	[Token(Token = "0x60046AA")]
	[Address(RVA = "0x5B719E0", Offset = "0x5B709E0", VA = "0x5B719E0")]
	private void RefreshColor()
	{
	}

	[Token(Token = "0x60046AB")]
	[Address(RVA = "0x5B71D20", Offset = "0x5B70D20", VA = "0x5B71D20")]
	public MobileInputToggleButton()
	{
	}
}
