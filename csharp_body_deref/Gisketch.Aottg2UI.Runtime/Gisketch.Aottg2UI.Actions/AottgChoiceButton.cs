// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.AottgChoiceButton
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/AottgChoiceButton.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x200009D")]
public sealed class AottgChoiceButton : Button
{
	[Token(Token = "0x400032F")]
	[FieldOffset(Offset = "0x108")]
	private AottgChoiceControl _control;

	[Token(Token = "0x4000330")]
	[FieldOffset(Offset = "0x110")]
	private bool _selectMode;

	[Token(Token = "0x600048D")]
	[Address(RVA = "0x3A89D80", Offset = "0x3A89D80", VA = "0x3A89D80")]
	public void Setup(AottgChoiceControl control, bool selectMode)
	{
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x3A89DB0", Offset = "0x3A89DB0", VA = "0x3A89DB0", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x3A89F20", Offset = "0x3A89F20", VA = "0x3A89F20", Slot = "42")]
	public override void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x6000490")]
	[Address(RVA = "0x3A8A090", Offset = "0x3A8A090", VA = "0x3A8A090", Slot = "31")]
	public override void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x6000491")]
	[Address(RVA = "0x3A8A210", Offset = "0x3A8A210", VA = "0x3A8A210")]
	public AottgChoiceButton()
	{
	}
}
