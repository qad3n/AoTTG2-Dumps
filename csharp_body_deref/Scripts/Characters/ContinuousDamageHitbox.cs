// ==================== AoTTG2 cross-reference ====================
// Type: Characters.ContinuousDamageHitbox
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/ContinuousDamageHitbox.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using CustomLogic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004E6")]
internal class ContinuousDamageHitbox : BaseHitbox
{
	[Token(Token = "0x40015BC")]
	[FieldOffset(Offset = "0x60")]
	public int DamagePerSecond;

	[Token(Token = "0x40015BD")]
	[FieldOffset(Offset = "0x64")]
	public float DamageInterval;

	[Token(Token = "0x40015BE")]
	[FieldOffset(Offset = "0x68")]
	private Dictionary<BaseCharacter, float> _characterDamageTimers;

	[Token(Token = "0x40015BF")]
	[FieldOffset(Offset = "0x70")]
	private Dictionary<BaseCharacter, Collider> _characterColliders;

	[Token(Token = "0x40015C0")]
	[FieldOffset(Offset = "0x78")]
	private HashSet<BaseCharacter> _charactersInside;

	[Token(Token = "0x40015C1")]
	[FieldOffset(Offset = "0x80")]
	private Dictionary<CustomLogicCollisionHandler, float> _handlerDamageTimers;

	[Token(Token = "0x40015C2")]
	[FieldOffset(Offset = "0x88")]
	private Dictionary<CustomLogicCollisionHandler, Collider> _handlerColliders;

	[Token(Token = "0x40015C3")]
	[FieldOffset(Offset = "0x90")]
	private HashSet<CustomLogicCollisionHandler> _handlersInside;

	[Token(Token = "0x60033C8")]
	[Address(RVA = "0x41AA800", Offset = "0x41AA800", VA = "0x41AA800")]
	public static ContinuousDamageHitbox CreateContinuous(BaseCharacter owner, GameObject obj, Collider collider, int damagePerSecond, float damageInterval)
	{
		return null;
	}

	[Token(Token = "0x60033C9")]
	[Address(RVA = "0x41AA9C0", Offset = "0x41AA9C0", VA = "0x41AA9C0")]
	public new void Activate(float delay = 0f, float length = 0f)
	{
	}

	[Token(Token = "0x60033CA")]
	[Address(RVA = "0x41AA8B0", Offset = "0x41AA8B0", VA = "0x41AA8B0")]
	public new void Deactivate()
	{
	}

	[Token(Token = "0x60033CB")]
	[Address(RVA = "0x41AAAF0", Offset = "0x41AAAF0", VA = "0x41AAAF0", Slot = "4")]
	protected override void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x60033CC")]
	[Address(RVA = "0x41AADE0", Offset = "0x41AADE0", VA = "0x41AADE0", Slot = "5")]
	protected override void OnTriggerStay(Collider other)
	{
	}

	[Token(Token = "0x60033CD")]
	[Address(RVA = "0x41AB0D0", Offset = "0x41AB0D0", VA = "0x41AB0D0", Slot = "9")]
	protected virtual void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x60033CE")]
	[Address(RVA = "0x41AB370", Offset = "0x41AB370", VA = "0x41AB370", Slot = "10")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x60033CF")]
	[Address(RVA = "0x41AC230", Offset = "0x41AC230", VA = "0x41AC230", Slot = "7")]
	protected override void OnHit(BaseCharacter victim, Collider collider)
	{
	}

	[Token(Token = "0x60033D0")]
	[Address(RVA = "0x41AC2B0", Offset = "0x41AC2B0", VA = "0x41AC2B0", Slot = "8")]
	protected override void OnHit(CustomLogicCollisionHandler handler, Collider collider)
	{
	}

	[Token(Token = "0x60033D1")]
	[Address(RVA = "0x41AC330", Offset = "0x41AC330", VA = "0x41AC330")]
	public ContinuousDamageHitbox()
	{
	}
}
