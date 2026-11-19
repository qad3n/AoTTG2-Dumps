// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ContinuousDamageHitbox
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/ContinuousDamageHitbox.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using CustomLogic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200069E")]
internal class ContinuousDamageHitbox : BaseHitbox
{
	[Token(Token = "0x4001DD5")]
	[FieldOffset(Offset = "0x68")]
	public int DamagePerSecond;

	[Token(Token = "0x4001DD6")]
	[FieldOffset(Offset = "0x6C")]
	public float DamageInterval;

	[Token(Token = "0x4001DD7")]
	[FieldOffset(Offset = "0x70")]
	private Dictionary<BaseCharacter, float> _characterDamageTimers;

	[Token(Token = "0x4001DD8")]
	[FieldOffset(Offset = "0x78")]
	private Dictionary<BaseCharacter, Collider> _characterColliders;

	[Token(Token = "0x4001DD9")]
	[FieldOffset(Offset = "0x80")]
	private HashSet<BaseCharacter> _charactersInside;

	[Token(Token = "0x4001DDA")]
	[FieldOffset(Offset = "0x88")]
	private Dictionary<CustomLogicCollisionHandler, float> _handlerDamageTimers;

	[Token(Token = "0x4001DDB")]
	[FieldOffset(Offset = "0x90")]
	private Dictionary<CustomLogicCollisionHandler, Collider> _handlerColliders;

	[Token(Token = "0x4001DDC")]
	[FieldOffset(Offset = "0x98")]
	private HashSet<CustomLogicCollisionHandler> _handlersInside;

	[Token(Token = "0x4001DDD")]
	[FieldOffset(Offset = "0xA0")]
	private readonly List<BaseCharacter> _charactersToRemove;

	[Token(Token = "0x4001DDE")]
	[FieldOffset(Offset = "0xA8")]
	private readonly List<CustomLogicCollisionHandler> _handlersToRemove;

	[Token(Token = "0x17000B1C")]
	protected override bool DestroysMap
	{
		[Token(Token = "0x600403C")]
		[Address(RVA = "0x5AE2F90", Offset = "0x5AE1F90", VA = "0x5AE2F90", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600403D")]
	[Address(RVA = "0x5AE2FA0", Offset = "0x5AE1FA0", VA = "0x5AE2FA0")]
	public static ContinuousDamageHitbox CreateContinuous(BaseCharacter owner, GameObject obj, Collider collider, int damagePerSecond, float damageInterval)
	{
		return null;
	}

	[Token(Token = "0x600403E")]
	[Address(RVA = "0x5AE3050", Offset = "0x5AE2050", VA = "0x5AE3050", Slot = "5")]
	public override void Activate(float delay = 0f, float length = 0f)
	{
	}

	[Token(Token = "0x600403F")]
	[Address(RVA = "0x5AE31A0", Offset = "0x5AE21A0", VA = "0x5AE31A0", Slot = "6")]
	public override void Deactivate()
	{
	}

	[Token(Token = "0x6004040")]
	[Address(RVA = "0x5AE3090", Offset = "0x5AE2090", VA = "0x5AE3090")]
	private void ClearOccupants()
	{
	}

	[Token(Token = "0x6004041")]
	[Address(RVA = "0x5AE31C0", Offset = "0x5AE21C0", VA = "0x5AE31C0", Slot = "7")]
	protected override void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x6004042")]
	[Address(RVA = "0x5AE34B0", Offset = "0x5AE24B0", VA = "0x5AE34B0", Slot = "8")]
	protected override void OnTriggerStay(Collider other)
	{
	}

	[Token(Token = "0x6004043")]
	[Address(RVA = "0x5AE37A0", Offset = "0x5AE27A0", VA = "0x5AE37A0", Slot = "12")]
	protected virtual void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x6004044")]
	[Address(RVA = "0x5AE3A40", Offset = "0x5AE2A40", VA = "0x5AE3A40", Slot = "13")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6004045")]
	[Address(RVA = "0x5AE45E0", Offset = "0x5AE35E0", VA = "0x5AE45E0", Slot = "10")]
	protected override void OnHit(BaseCharacter victim, Collider collider)
	{
	}

	[Token(Token = "0x6004046")]
	[Address(RVA = "0x5AE4660", Offset = "0x5AE3660", VA = "0x5AE4660", Slot = "11")]
	protected override void OnHit(CustomLogicCollisionHandler handler, Collider collider)
	{
	}

	[Token(Token = "0x6004047")]
	[Address(RVA = "0x5AE46E0", Offset = "0x5AE36E0", VA = "0x5AE46E0")]
	public ContinuousDamageHitbox()
	{
	}
}
