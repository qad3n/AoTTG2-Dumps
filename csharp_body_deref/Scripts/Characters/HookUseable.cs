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

[Token(Token = "0x200064D")]
internal class HookUseable : HoldUseable
{
	[Token(Token = "0x4001C7B")]
	[FieldOffset(Offset = "0x40")]
	public bool Enabled;

	[Token(Token = "0x4001C7C")]
	[FieldOffset(Offset = "0x48")]
	public List<Hook> Hooks;

	[Token(Token = "0x4001C7D")]
	[FieldOffset(Offset = "0x50")]
	public bool HookBoth;

	[Token(Token = "0x4001C7E")]
	[FieldOffset(Offset = "0x58")]
	private Hook _activeHook;

	[Token(Token = "0x4001C7F")]
	[FieldOffset(Offset = "0x60")]
	private bool _left;

	[Token(Token = "0x4001C80")]
	[FieldOffset(Offset = "0x64")]
	private float _hookSpeed;

	[Token(Token = "0x6003E01")]
	[Address(RVA = "0x21484C0", Offset = "0x2146AC0", VA = "0x1821484C0")]
	public HookUseable(BaseCharacter owner, bool left, bool gun)
	{
	}

	[Token(Token = "0x6003E02")]
	[Address(RVA = "0x2147900", Offset = "0x2145F00", VA = "0x182147900")]
	public List<Renderer> GetRenderers()
	{
		return null;
	}

	[Token(Token = "0x6003E03")]
	[Address(RVA = "0x2147BE0", Offset = "0x21461E0", VA = "0x182147BE0")]
	public bool IsHooked()
	{
		return default(bool);
	}

	[Token(Token = "0x6003E04")]
	[Address(RVA = "0x2147AE0", Offset = "0x21460E0", VA = "0x182147AE0")]
	public bool HasHook()
	{
		return default(bool);
	}

	[Token(Token = "0x6003E05")]
	[Address(RVA = "0x2147C60", Offset = "0x2146260", VA = "0x182147C60")]
	public bool IsHooking()
	{
		return default(bool);
	}

	[Token(Token = "0x6003E06")]
	[Address(RVA = "0x2147CE0", Offset = "0x21462E0", VA = "0x182147CE0")]
	public bool IsReady()
	{
		return default(bool);
	}

	[Token(Token = "0x6003E07")]
	[Address(RVA = "0x21478E0", Offset = "0x2145EE0", VA = "0x1821478E0")]
	public HookState GetHookState()
	{
		return default(HookState);
	}

	[Token(Token = "0x6003E08")]
	[Address(RVA = "0x2147810", Offset = "0x2145E10", VA = "0x182147810")]
	public Vector3 GetHookPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003E09")]
	[Address(RVA = "0x21476F0", Offset = "0x2145CF0", VA = "0x1821476F0")]
	public Vector3? GetCLHookPosition()
	{
		return null;
	}

	[Token(Token = "0x6003E0A")]
	[Address(RVA = "0x2147B60", Offset = "0x2146160", VA = "0x182147B60")]
	public bool IsHookOffset()
	{
		return default(bool);
	}

	[Token(Token = "0x6003E0B")]
	[Address(RVA = "0x21477F0", Offset = "0x2145DF0", VA = "0x1821477F0")]
	public Transform GetHookParent()
	{
		return null;
	}

	[Token(Token = "0x6003E0C")]
	[Address(RVA = "0x21477D0", Offset = "0x2145DD0", VA = "0x1821477D0")]
	public BaseCharacter GetHookCharacter()
	{
		return null;
	}

	[Token(Token = "0x6003E0D")]
	[Address(RVA = "0x2147160", Offset = "0x2145760", VA = "0x182147160")]
	public void DisableActiveHook()
	{
	}

	[Token(Token = "0x6003E0E")]
	[Address(RVA = "0x2147200", Offset = "0x2145800", VA = "0x182147200")]
	public void DisableAnyHook()
	{
	}

	[Token(Token = "0x6003E0F")]
	[Address(RVA = "0x2146F90", Offset = "0x2145590", VA = "0x182146F90")]
	public void DestroyHooks()
	{
	}

	[Token(Token = "0x6003E10")]
	[Address(RVA = "0x2146F80", Offset = "0x2145580", VA = "0x182146F80", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x6003E11")]
	[Address(RVA = "0x2146F80", Offset = "0x2145580", VA = "0x182146F80", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x6003E12")]
	[Address(RVA = "0x2147500", Offset = "0x2145B00", VA = "0x182147500")]
	public void FixedUpdateMock()
	{
	}

	[Token(Token = "0x6003E13")]
	[Address(RVA = "0x2147D70", Offset = "0x2146370", VA = "0x182147D70")]
	private void StartHook()
	{
	}

	[Token(Token = "0x6003E14")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "10")]
	protected override void Deactivate()
	{
	}

	[Token(Token = "0x6003E15")]
	[Address(RVA = "0x21472B0", Offset = "0x21458B0", VA = "0x1821472B0")]
	private Hook FindAvailableHook()
	{
		return null;
	}
}
