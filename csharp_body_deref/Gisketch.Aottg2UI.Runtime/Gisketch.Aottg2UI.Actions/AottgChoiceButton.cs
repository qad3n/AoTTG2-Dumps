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

[Token(Token = "0x20000BD")]
public sealed class AottgChoiceButton : Button
{
	[Token(Token = "0x40003DD")]
	[FieldOffset(Offset = "0x108")]
	private AottgChoiceControl _control;

	[Token(Token = "0x40003DE")]
	[FieldOffset(Offset = "0x110")]
	private bool _selectMode;

	[Token(Token = "0x60005CA")]
	[Address(RVA = "0x18F4370", Offset = "0x18F2970", VA = "0x1818F4370")]
	public void Setup(AottgChoiceControl control, bool selectMode)
	{
	}

	[Token(Token = "0x60005CB")]
	[Address(RVA = "0x18F42F0", Offset = "0x18F28F0", VA = "0x1818F42F0", Slot = "32")]
	public override void OnPointerDown(PointerEventData eventData)
	{
	}

	[Token(Token = "0x60005CC")]
	[Address(RVA = "0x18F4330", Offset = "0x18F2930", VA = "0x1818F4330", Slot = "42")]
	public override void OnSubmit(BaseEventData eventData)
	{
	}

	[Token(Token = "0x60005CD")]
	[Address(RVA = "0x18F4150", Offset = "0x18F2750", VA = "0x1818F4150", Slot = "31")]
	public override void OnMove(AxisEventData eventData)
	{
	}

	[Token(Token = "0x60005CE")]
	[Address(RVA = "0x18F43B0", Offset = "0x18F29B0", VA = "0x1818F43B0")]
	public AottgChoiceButton()
	{
	}
}
