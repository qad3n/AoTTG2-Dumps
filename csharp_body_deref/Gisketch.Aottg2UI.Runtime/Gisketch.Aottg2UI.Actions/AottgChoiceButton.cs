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

[Token(Token = "0x20000C3")]
public sealed class AottgChoiceButton : Button
{
	[Token(Token = "0x4000404")]
	[FieldOffset(Offset = "0x108")]
	private AottgChoiceControl _control;

	[Token(Token = "0x4000405")]
	[FieldOffset(Offset = "0x110")]
	private bool _selectMode;

	[Token(Token = "0x6000617")]
	[Address(RVA = "0x5294550", Offset = "0x5293550", VA = "0x5294550")]
	public void Setup(AottgChoiceControl control, bool selectMode)
	{
	}

	[Token(Token = "0x6000618")]
	[Address(RVA = "0x5294580", Offset = "0x5293580", VA = "0x5294580", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x6000619")]
	[Address(RVA = "0x52946F0", Offset = "0x52936F0", VA = "0x52946F0", Slot = "42")]
	public override void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x600061A")]
	[Address(RVA = "0x5294860", Offset = "0x5293860", VA = "0x5294860", Slot = "31")]
	public override void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x600061B")]
	[Address(RVA = "0x5294A00", Offset = "0x5293A00", VA = "0x5294A00")]
	public AottgChoiceButton()
	{
	}
}
