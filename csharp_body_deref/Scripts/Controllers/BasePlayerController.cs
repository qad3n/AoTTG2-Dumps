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

[Token(Token = "0x200061A")]
internal class BasePlayerController : MonoBehaviour
{
	[Token(Token = "0x4001B23")]
	[FieldOffset(Offset = "0x20")]
	protected GeneralInputSettings _generalInput;

	[Token(Token = "0x4001B24")]
	[FieldOffset(Offset = "0x28")]
	protected InteractionInputSettings _interactionInput;

	[Token(Token = "0x4001B25")]
	[FieldOffset(Offset = "0x30")]
	protected InGameMenu _inGameMenu;

	[Token(Token = "0x4001B26")]
	[FieldOffset(Offset = "0x38")]
	protected BaseCharacter _character;

	[Token(Token = "0x4001B27")]
	[FieldOffset(Offset = "0x40")]
	protected InGameManager _gameManager;

	[Token(Token = "0x4001B28")]
	[FieldOffset(Offset = "0x48")]
	protected bool _autorun;

	[Token(Token = "0x4001B29")]
	[FieldOffset(Offset = "0x49")]
	public bool HideCursor;

	[Token(Token = "0x4001B2A")]
	[FieldOffset(Offset = "0x50")]
	private string[] _quickSelectOptions;

	[Token(Token = "0x6003BBC")]
	[Address(RVA = "0x20F2AF0", Offset = "0x20F10F0", VA = "0x1820F2AF0", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6003BBD")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x6003BBE")]
	[Address(RVA = "0x20F3970", Offset = "0x20F1F70", VA = "0x1820F3970", Slot = "6")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6003BBF")]
	[Address(RVA = "0x20F32D0", Offset = "0x20F18D0", VA = "0x1820F32D0", Slot = "7")]
	protected virtual void UpdateActionInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003BC0")]
	[Address(RVA = "0x20F36F0", Offset = "0x20F1CF0", VA = "0x1820F36F0", Slot = "8")]
	protected virtual void UpdateMovementInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003BC1")]
	[Address(RVA = "0x20F34B0", Offset = "0x20F1AB0", VA = "0x1820F34B0")]
	protected void UpdateMenuInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003BC2")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	protected virtual void UpdateUI(bool inMenu)
	{
	}

	[Token(Token = "0x6003BC3")]
	[Address(RVA = "0x20F3040", Offset = "0x20F1640", VA = "0x1820F3040")]
	protected float GetTargetAngle(int forward, int right)
	{
		return default(float);
	}

	[Token(Token = "0x6003BC4")]
	[Address(RVA = "0x20F2D40", Offset = "0x20F1340", VA = "0x1820F2D40")]
	protected float[] GetAimAngles()
	{
		return null;
	}

	[Token(Token = "0x6003BC5")]
	[Address(RVA = "0x20F3150", Offset = "0x20F1750", VA = "0x1820F3150")]
	protected float GetTargetAngle(Vector3 direction)
	{
		return default(float);
	}

	[Token(Token = "0x6003BC6")]
	[Address(RVA = "0x20F3AA0", Offset = "0x20F20A0", VA = "0x1820F3AA0")]
	public BasePlayerController()
	{
	}
}
