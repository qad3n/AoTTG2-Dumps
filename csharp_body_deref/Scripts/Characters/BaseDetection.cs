// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseDetection
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/BaseDetection.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Detection/BaseDetection.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using GameManagers;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000640")]
internal class BaseDetection
{
	[Token(Token = "0x4001C36")]
	[FieldOffset(Offset = "0x10")]
	public bool Detect;

	[Token(Token = "0x4001C37")]
	[FieldOffset(Offset = "0x18")]
	public BaseCharacter ClosestEnemy;

	[Token(Token = "0x4001C38")]
	[FieldOffset(Offset = "0x20")]
	public float ClosestEnemyDistance;

	[Token(Token = "0x4001C39")]
	[FieldOffset(Offset = "0x28")]
	public BaseCharacter Owner;

	[Token(Token = "0x4001C3A")]
	private const float CriticalRange = 200f;

	[Token(Token = "0x4001C3B")]
	private const float MinimumSpeed = 100f;

	[Token(Token = "0x4001C3C")]
	private const float MediumDelay = 0.2f;

	[Token(Token = "0x4001C3D")]
	private const float SlowDelay = 2f;

	[Token(Token = "0x4001C3E")]
	[FieldOffset(Offset = "0x30")]
	private bool _enemiesOnly;

	[Token(Token = "0x4001C3F")]
	[FieldOffset(Offset = "0x31")]
	private bool _titansOnly;

	[Token(Token = "0x4001C40")]
	[FieldOffset(Offset = "0x34")]
	private float _currentMediumTime;

	[Token(Token = "0x4001C41")]
	[FieldOffset(Offset = "0x38")]
	private float _currentSlowTime;

	[Token(Token = "0x4001C42")]
	[FieldOffset(Offset = "0x40")]
	private HashSet<BaseCharacter> _recalculateFast;

	[Token(Token = "0x4001C43")]
	[FieldOffset(Offset = "0x48")]
	private HashSet<BaseCharacter> _recalculateMedium;

	[Token(Token = "0x4001C44")]
	[FieldOffset(Offset = "0x50")]
	private HashSet<BaseCharacter> _recalculateSlow;

	[Token(Token = "0x4001C45")]
	[FieldOffset(Offset = "0x58")]
	private HashSet<BaseCharacter> _tempRecalculateFast;

	[Token(Token = "0x4001C46")]
	[FieldOffset(Offset = "0x60")]
	private HashSet<BaseCharacter> _tempRecalculateMedium;

	[Token(Token = "0x4001C47")]
	[FieldOffset(Offset = "0x68")]
	private HashSet<BaseCharacter> _tempRecalculateSlow;

	[Token(Token = "0x4001C48")]
	[FieldOffset(Offset = "0x70")]
	private InGameManager _inGameManager;

	[Token(Token = "0x17000AD5")]
	protected virtual bool RequireValidTarget
	{
		[Token(Token = "0x6003DB6")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003DB5")]
	[Address(RVA = "0x2110D10", Offset = "0x210F310", VA = "0x182110D10")]
	public BaseDetection(BaseCharacter owner, bool enemiesOnly, bool titansOnly)
	{
	}

	[Token(Token = "0x6003DB7")]
	[Address(RVA = "0x210FD50", Offset = "0x210E350", VA = "0x18210FD50", Slot = "5")]
	public virtual bool IsNullOrDead()
	{
		return default(bool);
	}

	[Token(Token = "0x6003DB8")]
	[Address(RVA = "0x2110500", Offset = "0x210EB00", VA = "0x182110500")]
	public void OnTeamChanged()
	{
	}

	[Token(Token = "0x6003DB9")]
	[Address(RVA = "0x2110010", Offset = "0x210E610", VA = "0x182110010")]
	public void OnCharacterSpawned(BaseCharacter character)
	{
	}

	[Token(Token = "0x6003DBA")]
	[Address(RVA = "0x210FDD0", Offset = "0x210E3D0", VA = "0x18210FDD0")]
	private bool IsValidTeam(BaseCharacter character)
	{
		return default(bool);
	}

	[Token(Token = "0x6003DBB")]
	[Address(RVA = "0x2110170", Offset = "0x210E770", VA = "0x182110170", Slot = "6")]
	public virtual void OnFixedUpdate()
	{
	}

	[Token(Token = "0x6003DBC")]
	[Address(RVA = "0x2110B40", Offset = "0x210F140", VA = "0x182110B40")]
	private void RefreshClosestEnemy(Vector3 myPosition)
	{
	}

	[Token(Token = "0x6003DBD")]
	[Address(RVA = "0x210FE90", Offset = "0x210E490", VA = "0x18210FE90")]
	private void MergeTemp(HashSet<BaseCharacter> main, HashSet<BaseCharacter> temp)
	{
	}

	[Token(Token = "0x6003DBE")]
	[Address(RVA = "0x21107E0", Offset = "0x210EDE0", VA = "0x1821107E0")]
	private void Recalculate(HashSet<BaseCharacter> characters, Vector3 myPosition, float mySpeed)
	{
	}

	[Token(Token = "0x6003DBF")]
	[Address(RVA = "0x210FD30", Offset = "0x210E330", VA = "0x18210FD30", Slot = "7")]
	protected virtual float GetSpeed()
	{
		return default(float);
	}

	[Token(Token = "0x6003DC0")]
	[Address(RVA = "0x210FCE0", Offset = "0x210E2E0", VA = "0x18210FCE0", Slot = "8")]
	protected virtual Vector3 GetPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003DC1")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "9")]
	protected virtual void OnRecalculate(BaseCharacter character, float distance)
	{
	}
}
