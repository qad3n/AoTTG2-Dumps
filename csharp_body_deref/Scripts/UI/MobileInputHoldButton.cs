// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputHoldButton
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputHoldButton.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x200073D")]
public class MobileInputHoldButton : MobileInputHoldControl
{
	[Token(Token = "0x4002462")]
	[FieldOffset(Offset = "0x78")]
	private MobileInput[] _inputs;

	[Token(Token = "0x6004641")]
	[Address(RVA = "0x5B6A720", Offset = "0x5B69720", VA = "0x5B6A720")]
	public void SetupHoldButton(RectTransform rect, MobileInput[] inputs, MobileInputSkin normalSkin, MobileInputSkin pressedSkin, MobileInputControlShape shape)
	{
	}

	[Token(Token = "0x6004642")]
	[Address(RVA = "0x5B6E1B0", Offset = "0x5B6D1B0", VA = "0x5B6E1B0", Slot = "8")]
	protected override void OnControlPressed()
	{
	}

	[Token(Token = "0x6004643")]
	[Address(RVA = "0x5B6E210", Offset = "0x5B6D210", VA = "0x5B6E210", Slot = "9")]
	protected override void OnControlReleased()
	{
	}

	[Token(Token = "0x6004644")]
	[Address(RVA = "0x5B6E270", Offset = "0x5B6D270", VA = "0x5B6E270", Slot = "10")]
	protected override bool IsInputHeldByControl(MobileInput input)
	{
		return default(bool);
	}

	[Token(Token = "0x6004645")]
	[Address(RVA = "0x5B6E2F0", Offset = "0x5B6D2F0", VA = "0x5B6E2F0")]
	public MobileInputHoldButton()
	{
	}
}
