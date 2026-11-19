// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HookUseable
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/HookUseable.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HookUseable.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006AC")]
internal class HookUseable : HoldUseable
{
	[Token(Token = "0x4001E27")]
	[FieldOffset(Offset = "0x3C")]
	public bool Enabled;

	[Token(Token = "0x4001E28")]
	[FieldOffset(Offset = "0x40")]
	public List<Hook> Hooks;

	[Token(Token = "0x4001E29")]
	[FieldOffset(Offset = "0x48")]
	public bool HookBoth;

	[Token(Token = "0x4001E2A")]
	[FieldOffset(Offset = "0x50")]
	private Hook _activeHook;

	[Token(Token = "0x4001E2B")]
	[FieldOffset(Offset = "0x58")]
	private bool _left;

	[Token(Token = "0x4001E2C")]
	[FieldOffset(Offset = "0x5C")]
	private float _hookSpeed;

	[Token(Token = "0x6004097")]
	[Address(RVA = "0x5AEE0C0", Offset = "0x5AED0C0", VA = "0x5AEE0C0")]
	public HookUseable(BaseCharacter owner, bool left, bool gun)
	{
	}

	[Token(Token = "0x6004098")]
	[Address(RVA = "0x5AEE580", Offset = "0x5AED580", VA = "0x5AEE580")]
	public List<Renderer> GetRenderers()
	{
		return null;
	}

	[Token(Token = "0x6004099")]
	[Address(RVA = "0x5AEE7A0", Offset = "0x5AED7A0", VA = "0x5AEE7A0")]
	public bool IsHooked()
	{
		return default(bool);
	}

	[Token(Token = "0x600409A")]
	[Address(RVA = "0x5AEE810", Offset = "0x5AED810", VA = "0x5AEE810")]
	public bool HasHook()
	{
		return default(bool);
	}

	[Token(Token = "0x600409B")]
	[Address(RVA = "0x5AEE880", Offset = "0x5AED880", VA = "0x5AEE880")]
	public bool IsHooking()
	{
		return default(bool);
	}

	[Token(Token = "0x600409C")]
	[Address(RVA = "0x5AEE8F0", Offset = "0x5AED8F0", VA = "0x5AEE8F0")]
	public bool IsReady()
	{
		return default(bool);
	}

	[Token(Token = "0x600409D")]
	[Address(RVA = "0x5AEE960", Offset = "0x5AED960", VA = "0x5AEE960")]
	public HookState GetHookState()
	{
		return default(HookState);
	}

	[Token(Token = "0x600409E")]
	[Address(RVA = "0x5AEE980", Offset = "0x5AED980", VA = "0x5AEE980")]
	public Vector3 GetHookPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x600409F")]
	[Address(RVA = "0x5AEEA30", Offset = "0x5AEDA30", VA = "0x5AEEA30")]
	public Vector3? GetCLHookPosition()
	{
		return null;
	}

	[Token(Token = "0x60040A0")]
	[Address(RVA = "0x5AEEAE0", Offset = "0x5AEDAE0", VA = "0x5AEEAE0")]
	public bool IsHookOffset()
	{
		return default(bool);
	}

	[Token(Token = "0x60040A1")]
	[Address(RVA = "0x5AEEB50", Offset = "0x5AEDB50", VA = "0x5AEEB50")]
	public Transform GetHookParent()
	{
		return null;
	}

	[Token(Token = "0x60040A2")]
	[Address(RVA = "0x5AEEB70", Offset = "0x5AEDB70", VA = "0x5AEEB70")]
	public BaseCharacter GetHookCharacter()
	{
		return null;
	}

	[Token(Token = "0x60040A3")]
	[Address(RVA = "0x5AEEB90", Offset = "0x5AEDB90", VA = "0x5AEEB90")]
	public void DisableActiveHook()
	{
	}

	[Token(Token = "0x60040A4")]
	[Address(RVA = "0x5AEEC20", Offset = "0x5AEDC20", VA = "0x5AEEC20")]
	public void DisableAnyHook()
	{
	}

	[Token(Token = "0x60040A5")]
	[Address(RVA = "0x5AEECC0", Offset = "0x5AEDCC0", VA = "0x5AEECC0")]
	public void MoveHookParents(Transform from, Transform to)
	{
	}

	[Token(Token = "0x60040A6")]
	[Address(RVA = "0x5AEEE10", Offset = "0x5AEDE10", VA = "0x5AEEE10")]
	public void DestroyHooks()
	{
	}

	[Token(Token = "0x60040A7")]
	[Address(RVA = "0x5AEF000", Offset = "0x5AEE000", VA = "0x5AEF000", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x60040A8")]
	[Address(RVA = "0x5AEF8D0", Offset = "0x5AEE8D0", VA = "0x5AEF8D0", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x60040A9")]
	[Address(RVA = "0x5AEF8E0", Offset = "0x5AEE8E0", VA = "0x5AEF8E0")]
	public void FixedUpdateMock()
	{
	}

	[Token(Token = "0x60040AA")]
	[Address(RVA = "0x5AEF010", Offset = "0x5AEE010", VA = "0x5AEF010")]
	private void StartHook()
	{
	}

	[Token(Token = "0x60040AB")]
	[Address(RVA = "0x5AEFBF0", Offset = "0x5AEEBF0", VA = "0x5AEFBF0", Slot = "10")]
	protected override void Deactivate()
	{
	}

	[Token(Token = "0x60040AC")]
	[Address(RVA = "0x5AEF960", Offset = "0x5AEE960", VA = "0x5AEF960")]
	private Hook FindAvailableHook()
	{
		return null;
	}
}
