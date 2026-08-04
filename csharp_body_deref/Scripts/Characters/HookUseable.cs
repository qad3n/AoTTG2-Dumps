// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HookUseable
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/HookUseable.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/HookUseable.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004F5")]
internal class HookUseable : HoldUseable
{
	[Token(Token = "0x400160D")]
	[FieldOffset(Offset = "0x3C")]
	public bool Enabled;

	[Token(Token = "0x400160E")]
	[FieldOffset(Offset = "0x40")]
	public List<Hook> Hooks;

	[Token(Token = "0x400160F")]
	[FieldOffset(Offset = "0x48")]
	public bool HookBoth;

	[Token(Token = "0x4001610")]
	[FieldOffset(Offset = "0x50")]
	private Hook _activeHook;

	[Token(Token = "0x4001611")]
	[FieldOffset(Offset = "0x58")]
	private bool _left;

	[Token(Token = "0x4001612")]
	[FieldOffset(Offset = "0x5C")]
	private float _hookSpeed;

	[Token(Token = "0x600341F")]
	[Address(RVA = "0x41B50C0", Offset = "0x41B50C0", VA = "0x41B50C0")]
	public HookUseable(BaseCharacter owner, bool left, bool gun)
	{
	}

	[Token(Token = "0x6003420")]
	[Address(RVA = "0x41B5570", Offset = "0x41B5570", VA = "0x41B5570")]
	public List<Renderer> GetRenderers()
	{
		return null;
	}

	[Token(Token = "0x6003421")]
	[Address(RVA = "0x41B57D0", Offset = "0x41B57D0", VA = "0x41B57D0")]
	public bool IsHooked()
	{
		return default(bool);
	}

	[Token(Token = "0x6003422")]
	[Address(RVA = "0x41B5840", Offset = "0x41B5840", VA = "0x41B5840")]
	public bool HasHook()
	{
		return default(bool);
	}

	[Token(Token = "0x6003423")]
	[Address(RVA = "0x41B58B0", Offset = "0x41B58B0", VA = "0x41B58B0")]
	public bool IsHooking()
	{
		return default(bool);
	}

	[Token(Token = "0x6003424")]
	[Address(RVA = "0x41B5920", Offset = "0x41B5920", VA = "0x41B5920")]
	public bool IsReady()
	{
		return default(bool);
	}

	[Token(Token = "0x6003425")]
	[Address(RVA = "0x41B5990", Offset = "0x41B5990", VA = "0x41B5990")]
	public HookState GetHookState()
	{
		return default(HookState);
	}

	[Token(Token = "0x6003426")]
	[Address(RVA = "0x41B59B0", Offset = "0x41B59B0", VA = "0x41B59B0")]
	public Vector3 GetHookPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003427")]
	[Address(RVA = "0x41B5A60", Offset = "0x41B5A60", VA = "0x41B5A60")]
	public Vector3? GetCLHookPosition()
	{
		return null;
	}

	[Token(Token = "0x6003428")]
	[Address(RVA = "0x41B5B10", Offset = "0x41B5B10", VA = "0x41B5B10")]
	public bool IsHookOffset()
	{
		return default(bool);
	}

	[Token(Token = "0x6003429")]
	[Address(RVA = "0x41B5B80", Offset = "0x41B5B80", VA = "0x41B5B80")]
	public Transform GetHookParent()
	{
		return null;
	}

	[Token(Token = "0x600342A")]
	[Address(RVA = "0x41B5BA0", Offset = "0x41B5BA0", VA = "0x41B5BA0")]
	public BaseCharacter GetHookCharacter()
	{
		return null;
	}

	[Token(Token = "0x600342B")]
	[Address(RVA = "0x41B5BC0", Offset = "0x41B5BC0", VA = "0x41B5BC0")]
	public void DisableActiveHook()
	{
	}

	[Token(Token = "0x600342C")]
	[Address(RVA = "0x41B5C50", Offset = "0x41B5C50", VA = "0x41B5C50")]
	public void DisableAnyHook()
	{
	}

	[Token(Token = "0x600342D")]
	[Address(RVA = "0x41B5CF0", Offset = "0x41B5CF0", VA = "0x41B5CF0")]
	public void LocalClearAllHooks()
	{
	}

	[Token(Token = "0x600342E")]
	[Address(RVA = "0x41B5E80", Offset = "0x41B5E80", VA = "0x41B5E80", Slot = "9")]
	protected override void Activate()
	{
	}

	[Token(Token = "0x600342F")]
	[Address(RVA = "0x41B66D0", Offset = "0x41B66D0", VA = "0x41B66D0", Slot = "16")]
	protected override void ActiveFixedUpdate()
	{
	}

	[Token(Token = "0x6003430")]
	[Address(RVA = "0x41B66E0", Offset = "0x41B66E0", VA = "0x41B66E0")]
	public void FixedUpdateMock()
	{
	}

	[Token(Token = "0x6003431")]
	[Address(RVA = "0x41B5E90", Offset = "0x41B5E90", VA = "0x41B5E90")]
	private void StartHook()
	{
	}

	[Token(Token = "0x6003432")]
	[Address(RVA = "0x41B69F0", Offset = "0x41B69F0", VA = "0x41B69F0", Slot = "10")]
	protected override void Deactivate()
	{
	}

	[Token(Token = "0x6003433")]
	[Address(RVA = "0x41B6760", Offset = "0x41B6760", VA = "0x41B6760")]
	private Hook FindAvailableHook()
	{
		return null;
	}
}
