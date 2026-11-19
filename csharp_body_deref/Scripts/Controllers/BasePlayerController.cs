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

[Token(Token = "0x2000679")]
internal class BasePlayerController : MonoBehaviour
{
	[Token(Token = "0x4001CC4")]
	[FieldOffset(Offset = "0x20")]
	protected GeneralInputSettings _generalInput;

	[Token(Token = "0x4001CC5")]
	[FieldOffset(Offset = "0x28")]
	protected InteractionInputSettings _interactionInput;

	[Token(Token = "0x4001CC6")]
	[FieldOffset(Offset = "0x30")]
	protected InGameMenu _inGameMenu;

	[Token(Token = "0x4001CC7")]
	[FieldOffset(Offset = "0x38")]
	protected BaseCharacter _character;

	[Token(Token = "0x4001CC8")]
	[FieldOffset(Offset = "0x40")]
	protected InGameManager _gameManager;

	[Token(Token = "0x4001CC9")]
	[FieldOffset(Offset = "0x48")]
	protected bool _autorun;

	[Token(Token = "0x4001CCA")]
	[FieldOffset(Offset = "0x49")]
	public bool HideCursor;

	[Token(Token = "0x4001CCB")]
	[FieldOffset(Offset = "0x50")]
	private string[] _quickSelectOptions;

	[Token(Token = "0x6003E4A")]
	[Address(RVA = "0x5A9A060", Offset = "0x5A99060", VA = "0x5A9A060", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6003E4B")]
	[Address(RVA = "0x5A9E1C0", Offset = "0x5A9D1C0", VA = "0x5A9E1C0", Slot = "5")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x6003E4C")]
	[Address(RVA = "0x5A9E1D0", Offset = "0x5A9D1D0", VA = "0x5A9E1D0", Slot = "6")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6003E4D")]
	[Address(RVA = "0x5A9A8D0", Offset = "0x5A998D0", VA = "0x5A9A8D0", Slot = "7")]
	protected virtual void UpdateActionInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003E4E")]
	[Address(RVA = "0x5A9E570", Offset = "0x5A9D570", VA = "0x5A9E570", Slot = "8")]
	protected virtual void UpdateMovementInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003E4F")]
	[Address(RVA = "0x5A9E310", Offset = "0x5A9D310", VA = "0x5A9E310")]
	protected void UpdateMenuInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003E50")]
	[Address(RVA = "0x5A9E7C0", Offset = "0x5A9D7C0", VA = "0x5A9E7C0", Slot = "9")]
	protected virtual void UpdateUI(bool inMenu)
	{
	}

	[Token(Token = "0x6003E51")]
	[Address(RVA = "0x5A9E7D0", Offset = "0x5A9D7D0", VA = "0x5A9E7D0")]
	protected float GetTargetAngle(int forward, int right)
	{
		return default(float);
	}

	[Token(Token = "0x6003E52")]
	[Address(RVA = "0x5A9AD80", Offset = "0x5A99D80", VA = "0x5A9AD80")]
	protected float[] GetAimAngles()
	{
		return null;
	}

	[Token(Token = "0x6003E53")]
	[Address(RVA = "0x5A9E8A0", Offset = "0x5A9D8A0", VA = "0x5A9E8A0")]
	protected float GetTargetAngle(Vector3 direction)
	{
		return default(float);
	}

	[Token(Token = "0x6003E54")]
	[Address(RVA = "0x5A9B160", Offset = "0x5A9A160", VA = "0x5A9B160")]
	public BasePlayerController()
	{
	}
}
