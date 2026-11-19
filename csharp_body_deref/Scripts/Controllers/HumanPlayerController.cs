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

[Token(Token = "0x2000683")]
internal class HumanPlayerController : BasePlayerController, IHumanController
{
	[Token(Token = "0x4001D37")]
	[FieldOffset(Offset = "0x58")]
	protected Human _human;

	[Token(Token = "0x4001D38")]
	[FieldOffset(Offset = "0x60")]
	protected float _reelOutScrollTimeLeft;

	[Token(Token = "0x4001D39")]
	[FieldOffset(Offset = "0x64")]
	protected float _reelInScrollCooldownLeft;

	[Token(Token = "0x4001D3A")]
	[FieldOffset(Offset = "0x68")]
	protected float _reelInScrollCooldown;

	[Token(Token = "0x4001D3B")]
	[FieldOffset(Offset = "0x70")]
	protected HumanInputSettings _humanInput;

	[Token(Token = "0x4001D3C")]
	[FieldOffset(Offset = "0x78")]
	protected Dictionary<HumanDashDirection, KeybindSetting> _dashKeys;

	[Token(Token = "0x4001D3D")]
	[FieldOffset(Offset = "0x80")]
	protected Dictionary<HumanDashDirection, float> _dashTimes;

	[Token(Token = "0x4001D3E")]
	[FieldOffset(Offset = "0x0")]
	protected static LayerMask HookMask;

	[Token(Token = "0x4001D3F")]
	[FieldOffset(Offset = "0x88")]
	private HashSet<HumanState> _illegalWeaponStates;

	[Token(Token = "0x6003EEF")]
	[Address(RVA = "0x5AAAAE0", Offset = "0x5AA9AE0", VA = "0x5AAAAE0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003EF0")]
	[Address(RVA = "0x5AAAB80", Offset = "0x5AA9B80", VA = "0x5AAAB80")]
	private void SetupDash()
	{
	}

	[Token(Token = "0x6003EF1")]
	[Address(RVA = "0x5AAAD70", Offset = "0x5AA9D70", VA = "0x5AAAD70", Slot = "6")]
	protected override void Update()
	{
	}

	[Token(Token = "0x6003EF2")]
	[Address(RVA = "0x5AAADA0", Offset = "0x5AA9DA0", VA = "0x5AAADA0", Slot = "8")]
	protected override void UpdateMovementInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003EF3")]
	[Address(RVA = "0x5AAB300", Offset = "0x5AAA300", VA = "0x5AAB300", Slot = "9")]
	protected override void UpdateUI(bool inMenu)
	{
	}

	[Token(Token = "0x6003EF4")]
	[Address(RVA = "0x5AAC970", Offset = "0x5AAB970", VA = "0x5AAC970")]
	private Quaternion GetHookArrowRotation(bool left, Vector3 position)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6003EF5")]
	[Address(RVA = "0x5AACA00", Offset = "0x5AABA00", VA = "0x5AACA00")]
	private void UpdateHookInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003EF6")]
	[Address(RVA = "0x5AACFE0", Offset = "0x5AABFE0", VA = "0x5AACFE0")]
	private void TestScore()
	{
	}

	[Token(Token = "0x6003EF7")]
	[Address(RVA = "0x5AAD0F0", Offset = "0x5AAC0F0", VA = "0x5AAD0F0", Slot = "7")]
	protected override void UpdateActionInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003EF8")]
	[Address(RVA = "0x5AAF110", Offset = "0x5AAE110", VA = "0x5AAF110")]
	private bool SwapTSInput()
	{
		return default(bool);
	}

	[Token(Token = "0x6003EF9")]
	[Address(RVA = "0x5AAEF70", Offset = "0x5AADF70", VA = "0x5AAEF70")]
	private KeybindSetting GetAttackInput()
	{
		return null;
	}

	[Token(Token = "0x6003EFA")]
	[Address(RVA = "0x5AAEFB0", Offset = "0x5AADFB0", VA = "0x5AAEFB0")]
	private KeybindSetting GetSpecialInput()
	{
		return null;
	}

	[Token(Token = "0x6003EFB")]
	[Address(RVA = "0x5AAEFF0", Offset = "0x5AADFF0", VA = "0x5AAEFF0")]
	private bool IsSheathedWeaponSpecial()
	{
		return default(bool);
	}

	[Token(Token = "0x6003EFC")]
	[Address(RVA = "0x5AAEED0", Offset = "0x5AADED0", VA = "0x5AAEED0")]
	private void UpdateSheatheInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003EFD")]
	[Address(RVA = "0x5AAF1B0", Offset = "0x5AAE1B0", VA = "0x5AAF1B0")]
	private void ToggleUI()
	{
	}

	[Token(Token = "0x6003EFE")]
	[Address(RVA = "0x5AADC90", Offset = "0x5AACC90", VA = "0x5AADC90")]
	private void UpdateReelInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003EFF")]
	[Address(RVA = "0x5AAE270", Offset = "0x5AAD270", VA = "0x5AAE270")]
	private void UpdateDashInput(bool inMenu)
	{
	}

	[Token(Token = "0x6003F00")]
	[Address(RVA = "0x5AAF280", Offset = "0x5AAE280", VA = "0x5AAF280")]
	private float GetDashAngle(HumanDashDirection direction)
	{
		return default(float);
	}

	[Token(Token = "0x6003F01")]
	[Address(RVA = "0x5AACF60", Offset = "0x5AABF60", VA = "0x5AACF60")]
	private bool IsSpin3Special()
	{
		return default(bool);
	}

	[Token(Token = "0x6003F02")]
	[Address(RVA = "0x5AAF2E0", Offset = "0x5AAE2E0", VA = "0x5AAF2E0", Slot = "10")]
	public bool MovingLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x6003F03")]
	[Address(RVA = "0x5AAF340", Offset = "0x5AAE340", VA = "0x5AAF340", Slot = "11")]
	public bool MovingRight()
	{
		return default(bool);
	}

	[Token(Token = "0x6003F04")]
	[Address(RVA = "0x5AAF3A0", Offset = "0x5AAE3A0", VA = "0x5AAF3A0", Slot = "12")]
	public bool UsingGas()
	{
		return default(bool);
	}

	[Token(Token = "0x6003F05")]
	[Address(RVA = "0x5AAF400", Offset = "0x5AAE400", VA = "0x5AAF400", Slot = "13")]
	public bool HookingLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x6003F06")]
	[Address(RVA = "0x5AAF460", Offset = "0x5AAE460", VA = "0x5AAF460", Slot = "14")]
	public bool HookingRight()
	{
		return default(bool);
	}

	[Token(Token = "0x6003F07")]
	[Address(RVA = "0x5AAF4C0", Offset = "0x5AAE4C0", VA = "0x5AAF4C0", Slot = "15")]
	public bool HookingBoth()
	{
		return default(bool);
	}

	[Token(Token = "0x6003F08")]
	[Address(RVA = "0x5AAF520", Offset = "0x5AAE520", VA = "0x5AAF520", Slot = "16")]
	public Vector3 GetAimPoint()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003F09")]
	[Address(RVA = "0x5AAF6A0", Offset = "0x5AAE6A0", VA = "0x5AAF6A0")]
	public HumanPlayerController()
	{
	}
}
