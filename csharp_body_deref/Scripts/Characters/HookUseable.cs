using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004B0")]
internal class HookUseable : HoldUseable
{
	[Token(Token = "0x40014FC")]
	[FieldOffset(Offset = "0x3C")]
	public bool Enabled;

	[Token(Token = "0x40014FD")]
	[FieldOffset(Offset = "0x40")]
	public List<Hook> Hooks;

	[Token(Token = "0x40014FE")]
	[FieldOffset(Offset = "0x48")]
	public bool HookBoth;

	[Token(Token = "0x40014FF")]
	[FieldOffset(Offset = "0x50")]
	private Hook _activeHook;

	[Token(Token = "0x4001500")]
	[FieldOffset(Offset = "0x58")]
	private bool _left;

	[Token(Token = "0x4001501")]
	[FieldOffset(Offset = "0x5C")]
	private float _hookSpeed;

	[Token(Token = "0x6003211")]
	[Address(RVA = "0x3EA8820", Offset = "0x3EA8820", VA = "0x3EA8820")]
	public HookUseable(BaseCharacter owner, bool left, bool gun)
	{
	}

	[Token(Token = "0x6003212")]
	[Address(RVA = "0x3EA8CD0", Offset = "0x3EA8CD0", VA = "0x3EA8CD0")]
	public List<Renderer> GetRenderers()
	{
		return null;
	}

	[Token(Token = "0x6003213")]
	[Address(RVA = "0x3EA8F30", Offset = "0x3EA8F30", VA = "0x3EA8F30")]
	public bool IsHooked()
	{
		return default(bool);
	}

	[Token(Token = "0x6003214")]
	[Address(RVA = "0x3EA8FA0", Offset = "0x3EA8FA0", VA = "0x3EA8FA0")]
	public bool HasHook()
	{
		return default(bool);
	}

	[Token(Token = "0x6003215")]
	[Address(RVA = "0x3EA9010", Offset = "0x3EA9010", VA = "0x3EA9010")]
	public bool IsHooking()
	{
		return default(bool);
	}

	[Token(Token = "0x6003216")]
	[Address(RVA = "0x3EA9080", Offset = "0x3EA9080", VA = "0x3EA9080")]
	public bool IsReady()
	{
		return default(bool);
	}

	[Token(Token = "0x6003217")]
	[Address(RVA = "0x3EA90F0", Offset = "0x3EA90F0", VA = "0x3EA90F0")]
	public HookState GetHookState()
	{
		return default(HookState);
	}

	[Token(Token = "0x6003218")]
	[Address(RVA = "0x3EA9110", Offset = "0x3EA9110", VA = "0x3EA9110")]
	public Vector3 GetHookPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003219")]
	[Address(RVA = "0x3EA91C0", Offset = "0x3EA91C0", VA = "0x3EA91C0")]
	public Vector3? GetCLHookPosition()
	{
		return null;
	}

	[Token(Token = "0x600321A")]
	[Address(RVA = "0x3EA9270", Offset = "0x3EA9270", VA = "0x3EA9270")]
	public bool IsHookOffset()
	{
		return default(bool);
	}

	[Token(Token = "0x600321B")]
	[Address(RVA = "0x3EA92E0", Offset = "0x3EA92E0", VA = "0x3EA92E0")]
	public Transform GetHookParent()
	{
		return null;
	}

	[Token(Token = "0x600321C")]
	[Address(RVA = "0x3EA9300", Offset = "0x3EA9300", VA = "0x3EA9300")]
	public BaseCharacter GetHookCharacter()
	{
		return null;
	}

	[Token(Token = "0x600321D")]
	[Address(RVA = "0x3EA9320", Offset = "0x3EA9320", VA = "0x3EA9320")]
	public void DisableActiveHook()
	{
	}

	[Token(Token = "0x600321E")]
	[Address(RVA = "0x3EA93B0", Offset = "0x3EA93B0", VA = "0x3EA93B0")]
	public void DisableAnyHook()
	{
	}

	[Token(Token = "0x600321F")]
	[Address(RVA = "0x3EA9450", Offset = "0x3EA9450", VA = "0x3EA9450")]
	public void LocalClearAllHooks()
	{
	}

	[Token(Token = "0x6003220")]
	[Address(RVA = "0x3EA95E0", Offset = "0x3EA95E0", VA = "0x3EA95E0", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6003221")]
	[Address(RVA = "0x3EA9E30", Offset = "0x3EA9E30", VA = "0x3EA9E30", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x6003222")]
	[Address(RVA = "0x3EA9E40", Offset = "0x3EA9E40", VA = "0x3EA9E40")]
	public void FixedUpdateMock()
	{
	}

	[Token(Token = "0x6003223")]
	[Address(RVA = "0x3EA95F0", Offset = "0x3EA95F0", VA = "0x3EA95F0")]
	private void StartHook()
	{
	}

	[Token(Token = "0x6003224")]
	[Address(RVA = "0x3EAA150", Offset = "0x3EAA150", VA = "0x3EAA150", Slot = "10")]
	protected override void Deactivate()
	{
	}

	[Token(Token = "0x6003225")]
	[Address(RVA = "0x3EA9EC0", Offset = "0x3EA9EC0", VA = "0x3EA9EC0")]
	private Hook FindAvailableHook()
	{
		return null;
	}
}
