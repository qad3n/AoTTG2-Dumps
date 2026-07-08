using System.Collections.Generic;
using GameManagers;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004A2")]
internal class BaseDetection
{
	[Token(Token = "0x40014B3")]
	[FieldOffset(Offset = "0x10")]
	public bool Detect;

	[Token(Token = "0x40014B4")]
	[FieldOffset(Offset = "0x18")]
	public BaseCharacter ClosestEnemy;

	[Token(Token = "0x40014B5")]
	[FieldOffset(Offset = "0x20")]
	public float ClosestEnemyDistance;

	[Token(Token = "0x40014B6")]
	[FieldOffset(Offset = "0x28")]
	public BaseCharacter Owner;

	[Token(Token = "0x40014B7")]
	private const float CriticalRange = 200f;

	[Token(Token = "0x40014B8")]
	private const float MinimumSpeed = 100f;

	[Token(Token = "0x40014B9")]
	private const float MediumDelay = 0.2f;

	[Token(Token = "0x40014BA")]
	private const float SlowDelay = 2f;

	[Token(Token = "0x40014BB")]
	[FieldOffset(Offset = "0x30")]
	private bool _enemiesOnly;

	[Token(Token = "0x40014BC")]
	[FieldOffset(Offset = "0x31")]
	private bool _titansOnly;

	[Token(Token = "0x40014BD")]
	[FieldOffset(Offset = "0x34")]
	private float _currentMediumTime;

	[Token(Token = "0x40014BE")]
	[FieldOffset(Offset = "0x38")]
	private float _currentSlowTime;

	[Token(Token = "0x40014BF")]
	[FieldOffset(Offset = "0x40")]
	private HashSet<BaseCharacter> _recalculateFast;

	[Token(Token = "0x40014C0")]
	[FieldOffset(Offset = "0x48")]
	private HashSet<BaseCharacter> _recalculateMedium;

	[Token(Token = "0x40014C1")]
	[FieldOffset(Offset = "0x50")]
	private HashSet<BaseCharacter> _recalculateSlow;

	[Token(Token = "0x40014C2")]
	[FieldOffset(Offset = "0x58")]
	private HashSet<BaseCharacter> _tempRecalculateFast;

	[Token(Token = "0x40014C3")]
	[FieldOffset(Offset = "0x60")]
	private HashSet<BaseCharacter> _tempRecalculateMedium;

	[Token(Token = "0x40014C4")]
	[FieldOffset(Offset = "0x68")]
	private HashSet<BaseCharacter> _tempRecalculateSlow;

	[Token(Token = "0x40014C5")]
	[FieldOffset(Offset = "0x70")]
	private InGameManager _inGameManager;

	[Token(Token = "0x60031C4")]
	[Address(RVA = "0x3E9FCB0", Offset = "0x3E9FCB0", VA = "0x3E9FCB0")]
	public BaseDetection(BaseCharacter owner, bool enemiesOnly, bool titansOnly)
	{
	}

	[Token(Token = "0x60031C5")]
	[Address(RVA = "0x3EA0380", Offset = "0x3EA0380", VA = "0x3EA0380", Slot = "4")]
	public virtual bool IsNullOrDead()
	{
		return default(bool);
	}

	[Token(Token = "0x60031C6")]
	[Address(RVA = "0x3E93E20", Offset = "0x3E93E20", VA = "0x3E93E20")]
	public void OnTeamChanged()
	{
	}

	[Token(Token = "0x60031C7")]
	[Address(RVA = "0x3EA0260", Offset = "0x3EA0260", VA = "0x3EA0260")]
	public void OnCharacterSpawned(BaseCharacter character)
	{
	}

	[Token(Token = "0x60031C8")]
	[Address(RVA = "0x3EA03F0", Offset = "0x3EA03F0", VA = "0x3EA03F0")]
	private bool IsValidTeam(BaseCharacter character)
	{
		return default(bool);
	}

	[Token(Token = "0x60031C9")]
	[Address(RVA = "0x3EA04A0", Offset = "0x3EA04A0", VA = "0x3EA04A0", Slot = "5")]
	public virtual void OnFixedUpdate()
	{
	}

	[Token(Token = "0x60031CA")]
	[Address(RVA = "0x3EA0B60", Offset = "0x3EA0B60", VA = "0x3EA0B60")]
	private void MergeTemp(HashSet<BaseCharacter> main, HashSet<BaseCharacter> temp)
	{
	}

	[Token(Token = "0x60031CB")]
	[Address(RVA = "0x3EA0620", Offset = "0x3EA0620", VA = "0x3EA0620")]
	private void Recalculate(HashSet<BaseCharacter> characters, Vector3 myPosition, float mySpeed)
	{
	}

	[Token(Token = "0x60031CC")]
	[Address(RVA = "0x3EA0D30", Offset = "0x3EA0D30", VA = "0x3EA0D30", Slot = "6")]
	protected virtual float GetSpeed()
	{
		return default(float);
	}

	[Token(Token = "0x60031CD")]
	[Address(RVA = "0x3EA0D50", Offset = "0x3EA0D50", VA = "0x3EA0D50", Slot = "7")]
	protected virtual Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60031CE")]
	[Address(RVA = "0x3EA0D80", Offset = "0x3EA0D80", VA = "0x3EA0D80", Slot = "8")]
	protected virtual void OnRecalculate(BaseCharacter character, float distance)
	{
	}
}
