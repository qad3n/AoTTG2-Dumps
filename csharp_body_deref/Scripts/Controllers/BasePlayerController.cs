// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.BasePlayerController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/BasePlayerController.c
// Prior real C# source (older reference): Assets/Scripts/Controllers/BasePlayerController.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Characters;
using GameManagers;
using Il2CppDummyDll;
using Settings;
using UI;
using UnityEngine;

namespace Controllers;

[Token(Token = "0x20004C5")]
internal class BasePlayerController : MonoBehaviour
{
	[Token(Token = "0x40014CF")]
	[FieldOffset(Offset = "0x20")]
	protected GeneralInputSettings _generalInput;

	[Token(Token = "0x40014D0")]
	[FieldOffset(Offset = "0x28")]
	protected InteractionInputSettings _interactionInput;

	[Token(Token = "0x40014D1")]
	[FieldOffset(Offset = "0x30")]
	protected InGameMenu _inGameMenu;

	[Token(Token = "0x40014D2")]
	[FieldOffset(Offset = "0x38")]
	protected BaseCharacter _character;

	[Token(Token = "0x40014D3")]
	[FieldOffset(Offset = "0x40")]
	protected InGameManager _gameManager;

	[Token(Token = "0x40014D4")]
	[FieldOffset(Offset = "0x48")]
	protected bool _autorun;

	[Token(Token = "0x40014D5")]
	[FieldOffset(Offset = "0x49")]
	public bool HideCursor;

	[Token(Token = "0x40014D6")]
	[FieldOffset(Offset = "0x50")]
	private string[] _quickSelectOptions;

	[Token(Token = "0x600322B")]
	[Address(RVA = "0x4189240", Offset = "0x4189240", VA = "0x4189240", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x600322C")]
	[Address(RVA = "0x418AAB0", Offset = "0x418AAB0", VA = "0x418AAB0", Slot = "5")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x600322D")]
	[Address(RVA = "0x418AAC0", Offset = "0x418AAC0", VA = "0x418AAC0", Slot = "6")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x600322E")]
	[Address(RVA = "0x4189C20", Offset = "0x4189C20", VA = "0x4189C20", Slot = "7")]
	protected virtual void UpdateActionInput(bool inMenu)
	{
	}

	[Token(Token = "0x600322F")]
	[Address(RVA = "0x418ADE0", Offset = "0x418ADE0", VA = "0x418ADE0", Slot = "8")]
	protected virtual void UpdateMovementInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003230")]
	[Address(RVA = "0x418ABC0", Offset = "0x418ABC0", VA = "0x418ABC0")]
	protected void UpdateMenuInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003231")]
	[Address(RVA = "0x418B000", Offset = "0x418B000", VA = "0x418B000", Slot = "9")]
	protected virtual void UpdateUI(bool inMenu)
	{
	}

	[Token(Token = "0x6003232")]
	[Address(RVA = "0x418B010", Offset = "0x418B010", VA = "0x418B010")]
	protected float GetTargetAngle(int forward, int right)
	{
		return default(float);
	}

	[Token(Token = "0x6003233")]
	[Address(RVA = "0x418A0F0", Offset = "0x418A0F0", VA = "0x418A0F0")]
	protected float[] GetAimAngles()
	{
		return null;
	}

	[Token(Token = "0x6003234")]
	[Address(RVA = "0x418B0D0", Offset = "0x418B0D0", VA = "0x418B0D0")]
	protected float GetTargetAngle(Vector3 direction)
	{
		return default(float);
	}

	[Token(Token = "0x6003235")]
	[Address(RVA = "0x418A4B0", Offset = "0x418A4B0", VA = "0x418A4B0")]
	public BasePlayerController()
	{
	}
}
