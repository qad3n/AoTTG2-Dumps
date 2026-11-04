// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.HumanPlayerController
// Update status: CHANGED in this game update
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

[Token(Token = "0x2000624")]
internal class HumanPlayerController : BasePlayerController, IHumanController
{
	[Token(Token = "0x4001B94")]
	[FieldOffset(Offset = "0x58")]
	protected Human _human;

	[Token(Token = "0x4001B95")]
	[FieldOffset(Offset = "0x60")]
	protected float _reelOutScrollTimeLeft;

	[Token(Token = "0x4001B96")]
	[FieldOffset(Offset = "0x64")]
	protected float _reelInScrollCooldownLeft;

	[Token(Token = "0x4001B97")]
	[FieldOffset(Offset = "0x68")]
	protected float _reelInScrollCooldown;

	[Token(Token = "0x4001B98")]
	[FieldOffset(Offset = "0x70")]
	protected HumanInputSettings _humanInput;

	[Token(Token = "0x4001B99")]
	[FieldOffset(Offset = "0x78")]
	protected Dictionary<HumanDashDirection, KeybindSetting> _dashKeys;

	[Token(Token = "0x4001B9A")]
	[FieldOffset(Offset = "0x80")]
	protected Dictionary<HumanDashDirection, float> _dashTimes;

	[Token(Token = "0x4001B9B")]
	[FieldOffset(Offset = "0x0")]
	protected static LayerMask HookMask;

	[Token(Token = "0x4001B9C")]
	[FieldOffset(Offset = "0x88")]
	private HashSet<HumanState> _illegalWeaponStates;

	[Token(Token = "0x6003C60")]
	[Address(RVA = "0x2117B30", Offset = "0x2116130", VA = "0x182117B30", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003C61")]
	[Address(RVA = "0x2118360", Offset = "0x2116960", VA = "0x182118360")]
	private void SetupDash()
	{
	}

	[Token(Token = "0x6003C62")]
	[Address(RVA = "0x211CAA0", Offset = "0x211B0A0", VA = "0x18211CAA0", Slot = "6")]
	protected override void Update()
	{
	}

	[Token(Token = "0x6003C63")]
	[Address(RVA = "0x211AD40", Offset = "0x2119340", VA = "0x18211AD40", Slot = "8")]
	protected override void UpdateMovementInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003C64")]
	[Address(RVA = "0x211B7B0", Offset = "0x2119DB0", VA = "0x18211B7B0", Slot = "9")]
	protected override void UpdateUI(bool inMenu)
	{
	}

	[Token(Token = "0x6003C65")]
	[Address(RVA = "0x2117E70", Offset = "0x2116470", VA = "0x182117E70")]
	private Quaternion GetHookArrowRotation(bool left, Vector3 position)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6003C66")]
	[Address(RVA = "0x211A830", Offset = "0x2118E30", VA = "0x18211A830")]
	private void UpdateHookInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003C67")]
	[Address(RVA = "0x2118600", Offset = "0x2116C00", VA = "0x182118600")]
	private void TestScore()
	{
	}

	[Token(Token = "0x6003C68")]
	[Address(RVA = "0x2118810", Offset = "0x2116E10", VA = "0x182118810", Slot = "7")]
	protected override void UpdateActionInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003C69")]
	[Address(RVA = "0x2118560", Offset = "0x2116B60", VA = "0x182118560")]
	private bool SwapTSInput()
	{
		return default(bool);
	}

	[Token(Token = "0x6003C6A")]
	[Address(RVA = "0x2117DB0", Offset = "0x21163B0", VA = "0x182117DB0")]
	private KeybindSetting GetAttackInput()
	{
		return null;
	}

	[Token(Token = "0x6003C6B")]
	[Address(RVA = "0x2117F20", Offset = "0x2116520", VA = "0x182117F20")]
	private KeybindSetting GetSpecialInput()
	{
		return null;
	}

	[Token(Token = "0x6003C6C")]
	[Address(RVA = "0x2118080", Offset = "0x2116680", VA = "0x182118080")]
	private bool IsSheathedWeaponSpecial()
	{
		return default(bool);
	}

	[Token(Token = "0x6003C6D")]
	[Address(RVA = "0x211B710", Offset = "0x2119D10", VA = "0x18211B710")]
	private void UpdateSheatheInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003C6E")]
	[Address(RVA = "0x2118730", Offset = "0x2116D30", VA = "0x182118730")]
	private void ToggleUI()
	{
	}

	[Token(Token = "0x6003C6F")]
	[Address(RVA = "0x211B250", Offset = "0x2119850", VA = "0x18211B250")]
	private void UpdateReelInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003C70")]
	[Address(RVA = "0x2119720", Offset = "0x2117D20", VA = "0x182119720")]
	private void UpdateDashInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003C71")]
	[Address(RVA = "0x2117DF0", Offset = "0x21163F0", VA = "0x182117DF0")]
	private float GetDashAngle(HumanDashDirection direction)
	{
		return default(float);
	}

	[Token(Token = "0x6003C72")]
	[Address(RVA = "0x2118200", Offset = "0x2116800", VA = "0x182118200")]
	private bool IsSpin3Special()
	{
		return default(bool);
	}

	[Token(Token = "0x6003C73")]
	[Address(RVA = "0x21182A0", Offset = "0x21168A0", VA = "0x1821182A0", Slot = "10")]
	public bool MovingLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x6003C74")]
	[Address(RVA = "0x2118300", Offset = "0x2116900", VA = "0x182118300", Slot = "11")]
	public bool MovingRight()
	{
		return default(bool);
	}

	[Token(Token = "0x6003C75")]
	[Address(RVA = "0x211CAD0", Offset = "0x211B0D0", VA = "0x18211CAD0", Slot = "12")]
	public bool UsingGas()
	{
		return default(bool);
	}

	[Token(Token = "0x6003C76")]
	[Address(RVA = "0x2117FC0", Offset = "0x21165C0", VA = "0x182117FC0", Slot = "13")]
	public bool HookingLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x6003C77")]
	[Address(RVA = "0x2118020", Offset = "0x2116620", VA = "0x182118020", Slot = "14")]
	public bool HookingRight()
	{
		return default(bool);
	}

	[Token(Token = "0x6003C78")]
	[Address(RVA = "0x2117F60", Offset = "0x2116560", VA = "0x182117F60", Slot = "15")]
	public bool HookingBoth()
	{
		return default(bool);
	}

	[Token(Token = "0x6003C79")]
	[Address(RVA = "0x211CC60", Offset = "0x211B260", VA = "0x18211CC60")]
	public HumanPlayerController()
	{
	}
}
