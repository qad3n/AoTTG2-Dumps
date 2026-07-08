using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace Controllers;

[Token(Token = "0x2000488")]
internal class HumanPlayerController : BasePlayerController, IHumanController
{
	[Token(Token = "0x4001420")]
	[FieldOffset(Offset = "0x58")]
	protected Human _human;

	[Token(Token = "0x4001421")]
	[FieldOffset(Offset = "0x60")]
	protected float _reelOutScrollTimeLeft;

	[Token(Token = "0x4001422")]
	[FieldOffset(Offset = "0x64")]
	protected float _reelInScrollCooldownLeft;

	[Token(Token = "0x4001423")]
	[FieldOffset(Offset = "0x68")]
	protected float _reelInScrollCooldown;

	[Token(Token = "0x4001424")]
	[FieldOffset(Offset = "0x70")]
	protected HumanInputSettings _humanInput;

	[Token(Token = "0x4001425")]
	[FieldOffset(Offset = "0x78")]
	protected Dictionary<HumanDashDirection, KeybindSetting> _dashKeys;

	[Token(Token = "0x4001426")]
	[FieldOffset(Offset = "0x80")]
	protected Dictionary<HumanDashDirection, float> _dashTimes;

	[Token(Token = "0x4001427")]
	[FieldOffset(Offset = "0x0")]
	protected static LayerMask HookMask;

	[Token(Token = "0x4001428")]
	[FieldOffset(Offset = "0x88")]
	private HashSet<HumanState> _illegalWeaponStates;

	[Token(Token = "0x600309D")]
	[Address(RVA = "0x3E8AFE0", Offset = "0x3E8AFE0", VA = "0x3E8AFE0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600309E")]
	[Address(RVA = "0x3E8B070", Offset = "0x3E8B070", VA = "0x3E8B070")]
	private void SetupDash()
	{
	}

	[Token(Token = "0x600309F")]
	[Address(RVA = "0x3E8B260", Offset = "0x3E8B260", VA = "0x3E8B260", Slot = "6")]
	protected override void Update()
	{
	}

	[Token(Token = "0x60030A0")]
	[Address(RVA = "0x3E8B280", Offset = "0x3E8B280", VA = "0x3E8B280", Slot = "8")]
	protected override void UpdateMovementInput(bool inMenu)
	{
	}

	[Token(Token = "0x60030A1")]
	[Address(RVA = "0x3E8B8C0", Offset = "0x3E8B8C0", VA = "0x3E8B8C0", Slot = "9")]
	protected override void UpdateUI(bool inMenu)
	{
	}

	[Token(Token = "0x60030A2")]
	[Address(RVA = "0x3E8CE70", Offset = "0x3E8CE70", VA = "0x3E8CE70")]
	private Quaternion GetHookArrowRotation(bool left, Vector3 position)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x60030A3")]
	[Address(RVA = "0x3E8CF00", Offset = "0x3E8CF00", VA = "0x3E8CF00")]
	private void UpdateHookInput(bool inMenu)
	{
	}

	[Token(Token = "0x60030A4")]
	[Address(RVA = "0x3E8D540", Offset = "0x3E8D540", VA = "0x3E8D540")]
	private void TestScore()
	{
	}

	[Token(Token = "0x60030A5")]
	[Address(RVA = "0x3E8D650", Offset = "0x3E8D650", VA = "0x3E8D650", Slot = "7")]
	protected override void UpdateActionInput(bool inMenu)
	{
	}

	[Token(Token = "0x60030A6")]
	[Address(RVA = "0x3E8FB90", Offset = "0x3E8FB90", VA = "0x3E8FB90")]
	private void ToggleUI()
	{
	}

	[Token(Token = "0x60030A7")]
	[Address(RVA = "0x3E8E2E0", Offset = "0x3E8E2E0", VA = "0x3E8E2E0")]
	private void UpdateReelInput(bool inMenu)
	{
	}

	[Token(Token = "0x60030A8")]
	[Address(RVA = "0x3E8E950", Offset = "0x3E8E950", VA = "0x3E8E950")]
	private void UpdateDashInput(bool inMenu)
	{
	}

	[Token(Token = "0x60030A9")]
	[Address(RVA = "0x3E8FC60", Offset = "0x3E8FC60", VA = "0x3E8FC60")]
	private float GetDashAngle(HumanDashDirection direction)
	{
		return default(float);
	}

	[Token(Token = "0x60030AA")]
	[Address(RVA = "0x3E8D4C0", Offset = "0x3E8D4C0", VA = "0x3E8D4C0")]
	private bool IsSpin3Special()
	{
		return default(bool);
	}

	[Token(Token = "0x60030AB")]
	[Address(RVA = "0x3E8FF20", Offset = "0x3E8FF20", VA = "0x3E8FF20", Slot = "10")]
	public bool MovingLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x60030AC")]
	[Address(RVA = "0x3E8FF80", Offset = "0x3E8FF80", VA = "0x3E8FF80", Slot = "11")]
	public bool MovingRight()
	{
		return default(bool);
	}

	[Token(Token = "0x60030AD")]
	[Address(RVA = "0x3E8FFE0", Offset = "0x3E8FFE0", VA = "0x3E8FFE0", Slot = "12")]
	public bool UsingGas()
	{
		return default(bool);
	}

	[Token(Token = "0x60030AE")]
	[Address(RVA = "0x3E90040", Offset = "0x3E90040", VA = "0x3E90040", Slot = "13")]
	public bool HookingLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x60030AF")]
	[Address(RVA = "0x3E900A0", Offset = "0x3E900A0", VA = "0x3E900A0", Slot = "14")]
	public bool HookingRight()
	{
		return default(bool);
	}

	[Token(Token = "0x60030B0")]
	[Address(RVA = "0x3E90100", Offset = "0x3E90100", VA = "0x3E90100", Slot = "15")]
	public bool HookingBoth()
	{
		return default(bool);
	}

	[Token(Token = "0x60030B1")]
	[Address(RVA = "0x3E90160", Offset = "0x3E90160", VA = "0x3E90160")]
	public HumanPlayerController()
	{
	}
}
