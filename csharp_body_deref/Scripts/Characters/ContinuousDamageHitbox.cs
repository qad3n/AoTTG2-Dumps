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

[Token(Token = "0x200063F")]
internal class ContinuousDamageHitbox : BaseHitbox
{
	[Token(Token = "0x4001C2E")]
	[FieldOffset(Offset = "0x68")]
	public int DamagePerSecond;

	[Token(Token = "0x4001C2F")]
	[FieldOffset(Offset = "0x6C")]
	public float DamageInterval;

	[Token(Token = "0x4001C30")]
	[FieldOffset(Offset = "0x70")]
	private Dictionary<BaseCharacter, float> _characterDamageTimers;

	[Token(Token = "0x4001C31")]
	[FieldOffset(Offset = "0x78")]
	private Dictionary<BaseCharacter, Collider> _characterColliders;

	[Token(Token = "0x4001C32")]
	[FieldOffset(Offset = "0x80")]
	private HashSet<BaseCharacter> _charactersInside;

	[Token(Token = "0x4001C33")]
	[FieldOffset(Offset = "0x88")]
	private Dictionary<CustomLogicCollisionHandler, float> _handlerDamageTimers;

	[Token(Token = "0x4001C34")]
	[FieldOffset(Offset = "0x90")]
	private Dictionary<CustomLogicCollisionHandler, Collider> _handlerColliders;

	[Token(Token = "0x4001C35")]
	[FieldOffset(Offset = "0x98")]
	private HashSet<CustomLogicCollisionHandler> _handlersInside;

	[Token(Token = "0x17000AD4")]
	protected override bool DestroysMap
	{
		[Token(Token = "0x6003DAA")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003DAB")]
	[Address(RVA = "0x2114CE0", Offset = "0x21132E0", VA = "0x182114CE0")]
	public static ContinuousDamageHitbox CreateContinuous(BaseCharacter owner, GameObject obj, Collider collider, int damagePerSecond, float damageInterval)
	{
		return null;
	}

	[Token(Token = "0x6003DAC")]
	[Address(RVA = "0x2114A10", Offset = "0x2113010", VA = "0x182114A10")]
	public new void Activate(float delay = 0f, float length = 0f)
	{
	}

	[Token(Token = "0x6003DAD")]
	[Address(RVA = "0x2114EB0", Offset = "0x21134B0", VA = "0x182114EB0")]
	public new void Deactivate()
	{
	}

	[Token(Token = "0x6003DAE")]
	[Address(RVA = "0x2115110", Offset = "0x2113710", VA = "0x182115110", Slot = "5")]
	protected override void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x6003DAF")]
	[Address(RVA = "0x2115670", Offset = "0x2113C70", VA = "0x182115670", Slot = "6")]
	protected override void OnTriggerStay(Collider other)
	{
	}

	[Token(Token = "0x6003DB0")]
	[Address(RVA = "0x21153F0", Offset = "0x21139F0", VA = "0x1821153F0", Slot = "10")]
	protected virtual void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x6003DB1")]
	[Address(RVA = "0x2115950", Offset = "0x2113F50", VA = "0x182115950", Slot = "11")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6003DB2")]
	[Address(RVA = "0x2115080", Offset = "0x2113680", VA = "0x182115080", Slot = "8")]
	protected override void OnHit(BaseCharacter victim, Collider collider)
	{
	}

	[Token(Token = "0x6003DB3")]
	[Address(RVA = "0x2114FF0", Offset = "0x21135F0", VA = "0x182114FF0", Slot = "9")]
	protected override void OnHit(CustomLogicCollisionHandler handler, Collider collider)
	{
	}

	[Token(Token = "0x6003DB4")]
	[Address(RVA = "0x21162E0", Offset = "0x21148E0", VA = "0x1821162E0")]
	public ContinuousDamageHitbox()
	{
	}
}
