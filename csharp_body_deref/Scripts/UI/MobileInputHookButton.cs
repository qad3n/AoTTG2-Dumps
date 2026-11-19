// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileInputHookButton
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileInputHookButton.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000740")]
public class MobileInputHookButton : MobileInputHoldControl
{
	[Token(Token = "0x4002471")]
	private const string HookLeftActionId = "Human.HookLeft";

	[Token(Token = "0x4002472")]
	private const string HookRightActionId = "Human.HookRight";

	[Token(Token = "0x4002473")]
	[FieldOffset(Offset = "0x78")]
	private MobileInput _activeHookInput;

	[Token(Token = "0x4002474")]
	[FieldOffset(Offset = "0x80")]
	private MobileInput _leftHookInput;

	[Token(Token = "0x4002475")]
	[FieldOffset(Offset = "0x88")]
	private MobileInput _rightHookInput;

	[Token(Token = "0x600465C")]
	[Address(RVA = "0x5B6A010", Offset = "0x5B69010", VA = "0x5B6A010")]
	public void SetupHookButton(RectTransform rect, MobileInputSkin normalSkin, MobileInputSkin pressedSkin, MobileInputControlShape shape)
	{
	}

	[Token(Token = "0x600465D")]
	[Address(RVA = "0x5B6F080", Offset = "0x5B6E080", VA = "0x5B6F080", Slot = "8")]
	protected override void OnControlPressed()
	{
	}

	[Token(Token = "0x600465E")]
	[Address(RVA = "0x5B6F2B0", Offset = "0x5B6E2B0", VA = "0x5B6F2B0", Slot = "9")]
	protected override void OnControlReleased()
	{
	}

	[Token(Token = "0x600465F")]
	[Address(RVA = "0x5B6F2E0", Offset = "0x5B6E2E0", VA = "0x5B6F2E0", Slot = "10")]
	protected override bool IsInputHeldByControl(MobileInput input)
	{
		return default(bool);
	}

	[Token(Token = "0x6004660")]
	[Address(RVA = "0x5B6F0E0", Offset = "0x5B6E0E0", VA = "0x5B6F0E0")]
	private MobileInput ChooseHookInput()
	{
		return null;
	}

	[Token(Token = "0x6004661")]
	[Address(RVA = "0x5B6EFD0", Offset = "0x5B6DFD0", VA = "0x5B6EFD0")]
	private void CacheInputs()
	{
	}

	[Token(Token = "0x6004662")]
	[Address(RVA = "0x5B6F2F0", Offset = "0x5B6E2F0", VA = "0x5B6F2F0")]
	private Human GetCurrentHuman()
	{
		return null;
	}

	[Token(Token = "0x6004663")]
	[Address(RVA = "0x5B6F3B0", Offset = "0x5B6E3B0", VA = "0x5B6F3B0")]
	private bool IsCameraLookHumanRight(Human human)
	{
		return default(bool);
	}

	[Token(Token = "0x6004664")]
	[Address(RVA = "0x5B6F520", Offset = "0x5B6E520", VA = "0x5B6F520")]
	public MobileInputHookButton()
	{
	}
}
