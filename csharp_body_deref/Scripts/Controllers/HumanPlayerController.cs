// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.HumanPlayerController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/HumanPlayerController.c
// Prior real C# source (older reference): Assets/Scripts/Controllers/HumanPlayerController.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace Controllers;

[Token(Token = "0x20004CD")]
internal class HumanPlayerController : BasePlayerController, IHumanController
{
	[Token(Token = "0x4001531")]
	[FieldOffset(Offset = "0x58")]
	protected Human _human;

	[Token(Token = "0x4001532")]
	[FieldOffset(Offset = "0x60")]
	protected float _reelOutScrollTimeLeft;

	[Token(Token = "0x4001533")]
	[FieldOffset(Offset = "0x64")]
	protected float _reelInScrollCooldownLeft;

	[Token(Token = "0x4001534")]
	[FieldOffset(Offset = "0x68")]
	protected float _reelInScrollCooldown;

	[Token(Token = "0x4001535")]
	[FieldOffset(Offset = "0x70")]
	protected HumanInputSettings _humanInput;

	[Token(Token = "0x4001536")]
	[FieldOffset(Offset = "0x78")]
	protected Dictionary<HumanDashDirection, KeybindSetting> _dashKeys;

	[Token(Token = "0x4001537")]
	[FieldOffset(Offset = "0x80")]
	protected Dictionary<HumanDashDirection, float> _dashTimes;

	[Token(Token = "0x4001538")]
	[FieldOffset(Offset = "0x0")]
	protected static LayerMask HookMask;

	[Token(Token = "0x4001539")]
	[FieldOffset(Offset = "0x88")]
	private HashSet<HumanState> _illegalWeaponStates;

	[Token(Token = "0x60032AA")]
	[Address(RVA = "0x4197580", Offset = "0x4197580", VA = "0x4197580", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60032AB")]
	[Address(RVA = "0x4197610", Offset = "0x4197610", VA = "0x4197610")]
	private void SetupDash()
	{
	}

	[Token(Token = "0x60032AC")]
	[Address(RVA = "0x4197800", Offset = "0x4197800", VA = "0x4197800", Slot = "6")]
	protected override void Update()
	{
	}

	[Token(Token = "0x60032AD")]
	[Address(RVA = "0x4197820", Offset = "0x4197820", VA = "0x4197820", Slot = "8")]
	protected override void UpdateMovementInput(bool inMenu)
	{
	}

	[Token(Token = "0x60032AE")]
	[Address(RVA = "0x4197E60", Offset = "0x4197E60", VA = "0x4197E60", Slot = "9")]
	protected override void UpdateUI(bool inMenu)
	{
	}

	[Token(Token = "0x60032AF")]
	[Address(RVA = "0x4199410", Offset = "0x4199410", VA = "0x4199410")]
	private Quaternion GetHookArrowRotation(bool left, Vector3 position)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x60032B0")]
	[Address(RVA = "0x41994A0", Offset = "0x41994A0", VA = "0x41994A0")]
	private void UpdateHookInput(bool inMenu)
	{
	}

	[Token(Token = "0x60032B1")]
	[Address(RVA = "0x4199AE0", Offset = "0x4199AE0", VA = "0x4199AE0")]
	private void TestScore()
	{
	}

	[Token(Token = "0x60032B2")]
	[Address(RVA = "0x4199BF0", Offset = "0x4199BF0", VA = "0x4199BF0", Slot = "7")]
	protected override void UpdateActionInput(bool inMenu)
	{
	}

	[Token(Token = "0x60032B3")]
	[Address(RVA = "0x419C130", Offset = "0x419C130", VA = "0x419C130")]
	private void ToggleUI()
	{
	}

	[Token(Token = "0x60032B4")]
	[Address(RVA = "0x419A880", Offset = "0x419A880", VA = "0x419A880")]
	private void UpdateReelInput(bool inMenu)
	{
	}

	[Token(Token = "0x60032B5")]
	[Address(RVA = "0x419AEF0", Offset = "0x419AEF0", VA = "0x419AEF0")]
	private void UpdateDashInput(bool inMenu)
	{
	}

	[Token(Token = "0x60032B6")]
	[Address(RVA = "0x419C200", Offset = "0x419C200", VA = "0x419C200")]
	private float GetDashAngle(HumanDashDirection direction)
	{
		return default(float);
	}

	[Token(Token = "0x60032B7")]
	[Address(RVA = "0x4199A60", Offset = "0x4199A60", VA = "0x4199A60")]
	private bool IsSpin3Special()
	{
		return default(bool);
	}

	[Token(Token = "0x60032B8")]
	[Address(RVA = "0x419C4C0", Offset = "0x419C4C0", VA = "0x419C4C0", Slot = "10")]
	public bool MovingLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x60032B9")]
	[Address(RVA = "0x419C520", Offset = "0x419C520", VA = "0x419C520", Slot = "11")]
	public bool MovingRight()
	{
		return default(bool);
	}

	[Token(Token = "0x60032BA")]
	[Address(RVA = "0x419C580", Offset = "0x419C580", VA = "0x419C580", Slot = "12")]
	public bool UsingGas()
	{
		return default(bool);
	}

	[Token(Token = "0x60032BB")]
	[Address(RVA = "0x419C5E0", Offset = "0x419C5E0", VA = "0x419C5E0", Slot = "13")]
	public bool HookingLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x60032BC")]
	[Address(RVA = "0x419C640", Offset = "0x419C640", VA = "0x419C640", Slot = "14")]
	public bool HookingRight()
	{
		return default(bool);
	}

	[Token(Token = "0x60032BD")]
	[Address(RVA = "0x419C6A0", Offset = "0x419C6A0", VA = "0x419C6A0", Slot = "15")]
	public bool HookingBoth()
	{
		return default(bool);
	}

	[Token(Token = "0x60032BE")]
	[Address(RVA = "0x419C700", Offset = "0x419C700", VA = "0x419C700")]
	public HumanPlayerController()
	{
	}
}
