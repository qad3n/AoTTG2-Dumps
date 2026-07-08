using Characters;
using GameManagers;
using Il2CppDummyDll;
using Settings;
using UI;
using UnityEngine;

namespace Controllers;

[Token(Token = "0x2000480")]
internal class BasePlayerController : MonoBehaviour
{
	[Token(Token = "0x40013C0")]
	[FieldOffset(Offset = "0x20")]
	protected GeneralInputSettings _generalInput;

	[Token(Token = "0x40013C1")]
	[FieldOffset(Offset = "0x28")]
	protected InteractionInputSettings _interactionInput;

	[Token(Token = "0x40013C2")]
	[FieldOffset(Offset = "0x30")]
	protected InGameMenu _inGameMenu;

	[Token(Token = "0x40013C3")]
	[FieldOffset(Offset = "0x38")]
	protected BaseCharacter _character;

	[Token(Token = "0x40013C4")]
	[FieldOffset(Offset = "0x40")]
	protected InGameManager _gameManager;

	[Token(Token = "0x40013C5")]
	[FieldOffset(Offset = "0x48")]
	protected bool _autorun;

	[Token(Token = "0x40013C6")]
	[FieldOffset(Offset = "0x49")]
	public bool HideCursor;

	[Token(Token = "0x40013C7")]
	[FieldOffset(Offset = "0x50")]
	private string[] _quickSelectOptions;

	[Token(Token = "0x600301E")]
	[Address(RVA = "0x3E7CD40", Offset = "0x3E7CD40", VA = "0x3E7CD40", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x600301F")]
	[Address(RVA = "0x3E7E5B0", Offset = "0x3E7E5B0", VA = "0x3E7E5B0", Slot = "5")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x6003020")]
	[Address(RVA = "0x3E7E5C0", Offset = "0x3E7E5C0", VA = "0x3E7E5C0", Slot = "6")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6003021")]
	[Address(RVA = "0x3E7D720", Offset = "0x3E7D720", VA = "0x3E7D720", Slot = "7")]
	protected virtual void UpdateActionInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003022")]
	[Address(RVA = "0x3E7E8E0", Offset = "0x3E7E8E0", VA = "0x3E7E8E0", Slot = "8")]
	protected virtual void UpdateMovementInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003023")]
	[Address(RVA = "0x3E7E6C0", Offset = "0x3E7E6C0", VA = "0x3E7E6C0")]
	protected void UpdateMenuInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003024")]
	[Address(RVA = "0x3E7EB00", Offset = "0x3E7EB00", VA = "0x3E7EB00", Slot = "9")]
	protected virtual void UpdateUI(bool inMenu)
	{
	}

	[Token(Token = "0x6003025")]
	[Address(RVA = "0x3E7EB10", Offset = "0x3E7EB10", VA = "0x3E7EB10")]
	protected float GetTargetAngle(int forward, int right)
	{
		return default(float);
	}

	[Token(Token = "0x6003026")]
	[Address(RVA = "0x3E7DBF0", Offset = "0x3E7DBF0", VA = "0x3E7DBF0")]
	protected float[] GetAimAngles()
	{
		return null;
	}

	[Token(Token = "0x6003027")]
	[Address(RVA = "0x3E7EBD0", Offset = "0x3E7EBD0", VA = "0x3E7EBD0")]
	protected float GetTargetAngle(Vector3 direction)
	{
		return default(float);
	}

	[Token(Token = "0x6003028")]
	[Address(RVA = "0x3E7DFB0", Offset = "0x3E7DFB0", VA = "0x3E7DFB0")]
	public BasePlayerController()
	{
	}
}
