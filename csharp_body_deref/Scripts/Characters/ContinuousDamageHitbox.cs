using System.Collections.Generic;
using CustomLogic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004A1")]
internal class ContinuousDamageHitbox : BaseHitbox
{
	[Token(Token = "0x40014AB")]
	[FieldOffset(Offset = "0x60")]
	public int DamagePerSecond;

	[Token(Token = "0x40014AC")]
	[FieldOffset(Offset = "0x64")]
	public float DamageInterval;

	[Token(Token = "0x40014AD")]
	[FieldOffset(Offset = "0x68")]
	private Dictionary<BaseCharacter, float> _characterDamageTimers;

	[Token(Token = "0x40014AE")]
	[FieldOffset(Offset = "0x70")]
	private Dictionary<BaseCharacter, Collider> _characterColliders;

	[Token(Token = "0x40014AF")]
	[FieldOffset(Offset = "0x78")]
	private HashSet<BaseCharacter> _charactersInside;

	[Token(Token = "0x40014B0")]
	[FieldOffset(Offset = "0x80")]
	private Dictionary<CustomLogicCollisionHandler, float> _handlerDamageTimers;

	[Token(Token = "0x40014B1")]
	[FieldOffset(Offset = "0x88")]
	private Dictionary<CustomLogicCollisionHandler, Collider> _handlerColliders;

	[Token(Token = "0x40014B2")]
	[FieldOffset(Offset = "0x90")]
	private HashSet<CustomLogicCollisionHandler> _handlersInside;

	[Token(Token = "0x60031BA")]
	[Address(RVA = "0x3E9DF60", Offset = "0x3E9DF60", VA = "0x3E9DF60")]
	public static ContinuousDamageHitbox CreateContinuous(BaseCharacter owner, GameObject obj, Collider collider, int damagePerSecond, float damageInterval)
	{
		return null;
	}

	[Token(Token = "0x60031BB")]
	[Address(RVA = "0x3E9E120", Offset = "0x3E9E120", VA = "0x3E9E120")]
	public new void Activate(float delay = 0f, float length = 0f)
	{
	}

	[Token(Token = "0x60031BC")]
	[Address(RVA = "0x3E9E010", Offset = "0x3E9E010", VA = "0x3E9E010")]
	public new void Deactivate()
	{
	}

	[Token(Token = "0x60031BD")]
	[Address(RVA = "0x3E9E250", Offset = "0x3E9E250", VA = "0x3E9E250", Slot = "4")]
	protected override void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x60031BE")]
	[Address(RVA = "0x3E9E540", Offset = "0x3E9E540", VA = "0x3E9E540", Slot = "5")]
	protected override void OnTriggerStay(Collider other)
	{
	}

	[Token(Token = "0x60031BF")]
	[Address(RVA = "0x3E9E830", Offset = "0x3E9E830", VA = "0x3E9E830", Slot = "9")]
	protected virtual void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x60031C0")]
	[Address(RVA = "0x3E9EAD0", Offset = "0x3E9EAD0", VA = "0x3E9EAD0", Slot = "10")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x60031C1")]
	[Address(RVA = "0x3E9F990", Offset = "0x3E9F990", VA = "0x3E9F990", Slot = "7")]
	protected override void OnHit(BaseCharacter victim, Collider collider)
	{
	}

	[Token(Token = "0x60031C2")]
	[Address(RVA = "0x3E9FA10", Offset = "0x3E9FA10", VA = "0x3E9FA10", Slot = "8")]
	protected override void OnHit(CustomLogicCollisionHandler handler, Collider collider)
	{
	}

	[Token(Token = "0x60031C3")]
	[Address(RVA = "0x3E9FA90", Offset = "0x3E9FA90", VA = "0x3E9FA90")]
	public ContinuousDamageHitbox()
	{
	}
}
