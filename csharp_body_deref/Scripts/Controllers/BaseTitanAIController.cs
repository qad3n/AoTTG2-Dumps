// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.BaseTitanAIController
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Controllers/BaseTitanAIController.c
// Prior real C# source (older reference): Assets/Scripts/Controllers/BaseTitanAIController.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Controllers;

[Token(Token = "0x200061B")]
internal class BaseTitanAIController : BaseAIController
{
	[Token(Token = "0x4001B2B")]
	[FieldOffset(Offset = "0x90")]
	protected BaseTitan _titan;

	[Token(Token = "0x4001B2C")]
	[FieldOffset(Offset = "0x98")]
	public TitanAIState AIState;

	[Token(Token = "0x4001B2D")]
	[FieldOffset(Offset = "0x9C")]
	public bool SmartAttack;

	[Token(Token = "0x4001B2E")]
	[FieldOffset(Offset = "0xA0")]
	public float CloseAttackRange;

	[Token(Token = "0x4001B2F")]
	[FieldOffset(Offset = "0xA4")]
	public float FarAttackMinRange;

	[Token(Token = "0x4001B30")]
	[FieldOffset(Offset = "0xA8")]
	public float FarAttackMaxRange;

	[Token(Token = "0x4001B31")]
	[FieldOffset(Offset = "0xAC")]
	public float FarAttackCooldown;

	[Token(Token = "0x4001B32")]
	[FieldOffset(Offset = "0xB0")]
	public float AttackWait;

	[Token(Token = "0x4001B33")]
	[FieldOffset(Offset = "0xB4")]
	public float ChaseAngleTimeMin;

	[Token(Token = "0x4001B34")]
	[FieldOffset(Offset = "0xB8")]
	public float ChaseAngleTimeMax;

	[Token(Token = "0x4001B35")]
	[FieldOffset(Offset = "0xBC")]
	public float ChaseAngleMinRange;

	[Token(Token = "0x4001B36")]
	[FieldOffset(Offset = "0xC0")]
	public bool IsRun;

	[Token(Token = "0x4001B37")]
	[FieldOffset(Offset = "0xC1")]
	public bool IsTurn;

	[Token(Token = "0x4001B38")]
	[FieldOffset(Offset = "0xC4")]
	public float TurnAngle;

	[Token(Token = "0x4001B39")]
	[FieldOffset(Offset = "0xC8")]
	protected float _moveAngle;

	[Token(Token = "0x4001B3A")]
	[FieldOffset(Offset = "0xCC")]
	protected float _moveToTimeout;

	[Token(Token = "0x4001B3B")]
	[FieldOffset(Offset = "0xD0")]
	protected bool _moveToExact;

	[Token(Token = "0x4001B3C")]
	[FieldOffset(Offset = "0xD8")]
	protected Action _moveToCallback;

	[Token(Token = "0x4001B3D")]
	[FieldOffset(Offset = "0xE0")]
	public Dictionary<string, float> AttackChances;

	[Token(Token = "0x4001B3E")]
	[FieldOffset(Offset = "0xE8")]
	public Dictionary<string, string> AttackGroups;

	[Token(Token = "0x4001B3F")]
	[FieldOffset(Offset = "0xF0")]
	public Dictionary<string, TitanAttackInfo> AttackInfos;

	[Token(Token = "0x4001B40")]
	[FieldOffset(Offset = "0xF8")]
	protected float _stateTimeLeft;

	[Token(Token = "0x4001B41")]
	[FieldOffset(Offset = "0xFC")]
	protected float _rangedCooldownLeft;

	[Token(Token = "0x4001B42")]
	[FieldOffset(Offset = "0x100")]
	protected float _attackRange;

	[Token(Token = "0x4001B43")]
	[FieldOffset(Offset = "0x108")]
	protected string _attack;

	[Token(Token = "0x4001B44")]
	[FieldOffset(Offset = "0x110")]
	protected float _attackCooldownLeft;

	[Token(Token = "0x4001B45")]
	[FieldOffset(Offset = "0x114")]
	protected float _waitAttackTimeLeft;

	[Token(Token = "0x4001B46")]
	[FieldOffset(Offset = "0x118")]
	protected float _enemyDistance;

	[Token(Token = "0x4001B47")]
	private const float MovementRecoveryDelay = 0.5f;

	[Token(Token = "0x4001B48")]
	[FieldOffset(Offset = "0x11C")]
	private float _lowMovementSpeedTime;

	[Token(Token = "0x4001B49")]
	[FieldOffset(Offset = "0x120")]
	private float _recoveryTimeLeft;

	[Token(Token = "0x4001B4A")]
	[FieldOffset(Offset = "0x124")]
	private float _recoveryTurnAngle;

	[Token(Token = "0x4001B4B")]
	[FieldOffset(Offset = "0x128")]
	private float _recoveryHeading;

	[Token(Token = "0x4001B4C")]
	private const float ObstacleCheckInterval = 0.2f;

	[Token(Token = "0x4001B4D")]
	private const float ObstacleLookAheadTime = 0.6f;

	[Token(Token = "0x4001B4E")]
	[FieldOffset(Offset = "0x0")]
	private static readonly float[] AvoidProbeAngles;

	[Token(Token = "0x4001B4F")]
	private const float WalkableNormalY = 0.6f;

	[Token(Token = "0x4001B50")]
	[FieldOffset(Offset = "0x12C")]
	private float _obstacleCheckTimeLeft;

	[Token(Token = "0x4001B51")]
	[FieldOffset(Offset = "0x130")]
	private float _avoidAngle;

	[Token(Token = "0x4001B52")]
	[FieldOffset(Offset = "0x134")]
	private float _avoidHeading;

	[Token(Token = "0x4001B53")]
	[FieldOffset(Offset = "0x138")]
	private float _avoidedTargetAngle;

	[Token(Token = "0x4001B54")]
	[FieldOffset(Offset = "0x140")]
	private CapsuleCollider _mainCollider;

	[Token(Token = "0x4001B55")]
	[FieldOffset(Offset = "0x148")]
	private LayerMask _losLayer;

	[Token(Token = "0x17000A9E")]
	protected virtual bool _scriptedAI
	{
		[Token(Token = "0x6003BC7")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A9F")]
	protected virtual bool _stationaryAI
	{
		[Token(Token = "0x6003BC8")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003BC9")]
	[Address(RVA = "0x20F3F40", Offset = "0x20F2540", VA = "0x1820F3F40", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003BCA")]
	[Address(RVA = "0x20F59B0", Offset = "0x20F3FB0", VA = "0x1820F59B0", Slot = "7")]
	protected override float GetAgentSpeed()
	{
		return default(float);
	}

	[Token(Token = "0x6003BCB")]
	[Address(RVA = "0x20F8990", Offset = "0x20F6F90", VA = "0x1820F8990", Slot = "5")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6003BCC")]
	[Address(RVA = "0x20F40B0", Offset = "0x20F26B0", VA = "0x1820F40B0")]
	internal void BeginMove()
	{
	}

	[Token(Token = "0x6003BCD")]
	[Address(RVA = "0x20F45F0", Offset = "0x20F2BF0", VA = "0x1820F45F0")]
	internal void EndForcedIdle()
	{
	}

	[Token(Token = "0x6003BCE")]
	[Address(RVA = "0x20F8910", Offset = "0x20F6F10", VA = "0x1820F8910")]
	internal void ResetCommandState()
	{
	}

	[Token(Token = "0x6003BCF")]
	[Address(RVA = "0x20F8280", Offset = "0x20F6880", VA = "0x1820F8280")]
	public void MoveToCallback(Action action, Vector3 position, float range, bool ignore)
	{
	}

	[Token(Token = "0x6003BD0")]
	[Address(RVA = "0x20F85A0", Offset = "0x20F6BA0", VA = "0x1820F85A0")]
	public void MoveToExact(Vector3 position, float range = 10f, float timeoutPadding = 1f)
	{
	}

	[Token(Token = "0x6003BD1")]
	[Address(RVA = "0x20F8540", Offset = "0x20F6B40", VA = "0x1820F8540")]
	public void MoveToExactCallback(Action action, Vector3 position, float range = 10f, float timeoutPadding = 1f)
	{
	}

	[Token(Token = "0x6003BD2")]
	[Address(RVA = "0x20F4120", Offset = "0x20F2720", VA = "0x1820F4120")]
	public void CancelOrder()
	{
	}

	[Token(Token = "0x6003BD3")]
	[Address(RVA = "0x20F58E0", Offset = "0x20F3EE0", VA = "0x1820F58E0")]
	public void ForceIdle(float time)
	{
	}

	[Token(Token = "0x6003BD4")]
	[Address(RVA = "0x20F7820", Offset = "0x20F5E20", VA = "0x1820F7820", Slot = "11")]
	public virtual void Init(JSONNode data)
	{
	}

	[Token(Token = "0x6003BD5")]
	[Address(RVA = "0x20F18A0", Offset = "0x20EFEA0", VA = "0x1820F18A0")]
	public ITargetable GetEnemy()
	{
		return null;
	}

	[Token(Token = "0x6003BD6")]
	[Address(RVA = "0x20F2050", Offset = "0x20F0650", VA = "0x1820F2050")]
	public void SetEnemy(ITargetable enemy, float focusTime = 0f)
	{
	}

	[Token(Token = "0x6003BD7")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "12")]
	protected virtual void UpdateScriptedAI()
	{
	}

	[Token(Token = "0x6003BD8")]
	[Address(RVA = "0x20F4910", Offset = "0x20F2F10", VA = "0x1820F4910", Slot = "6")]
	protected override void FixedUpdate()
	{
	}

	[Token(Token = "0x6003BD9")]
	[Address(RVA = "0x20F8920", Offset = "0x20F6F20", VA = "0x1820F8920")]
	private void ResetMovementRecovery()
	{
	}

	[Token(Token = "0x6003BDA")]
	[Address(RVA = "0x20F8E60", Offset = "0x20F7460", VA = "0x1820F8E60")]
	private void UpdateMovementRecovery()
	{
	}

	[Token(Token = "0x6003BDB")]
	[Address(RVA = "0x20F3C60", Offset = "0x20F2260", VA = "0x1820F3C60")]
	private void ApplyObstacleAvoidance(float speed)
	{
	}

	[Token(Token = "0x6003BDC")]
	[Address(RVA = "0x20F59E0", Offset = "0x20F3FE0", VA = "0x1820F59E0")]
	private float GetAvoidAngle(float heading, float speed)
	{
		return default(float);
	}

	[Token(Token = "0x6003BDD")]
	[Address(RVA = "0x20F41A0", Offset = "0x20F27A0", VA = "0x1820F41A0")]
	private bool CastObstacle(Vector3 direction, float lookAhead, float radiusScale, out RaycastHit hit)
	{
		return default(bool);
	}

	[Token(Token = "0x6003BDE")]
	[Address(RVA = "0x20F6360", Offset = "0x20F4960", VA = "0x1820F6360")]
	private float GetObstacleSide(Vector3 direction, Vector3 point)
	{
		return default(float);
	}

	[Token(Token = "0x6003BDF")]
	[Address(RVA = "0x20F62A0", Offset = "0x20F48A0", VA = "0x1820F62A0")]
	private static Vector3 GetHeadingDirection(float heading)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003BE0")]
	[Address(RVA = "0x20F8900", Offset = "0x20F6F00", VA = "0x1820F8900", Slot = "8")]
	protected override void RefreshAgent()
	{
	}

	[Token(Token = "0x6003BE1")]
	[Address(RVA = "0x20F6070", Offset = "0x20F4670", VA = "0x1820F6070")]
	protected float GetEnemyAngle(ITargetable enemy)
	{
		return default(float);
	}

	[Token(Token = "0x6003BE2")]
	[Address(RVA = "0x20F5F40", Offset = "0x20F4540", VA = "0x1820F5F40")]
	protected float GetChaseAngle(Vector3 position, bool useMoveAngle)
	{
		return default(float);
	}

	[Token(Token = "0x6003BE3")]
	[Address(RVA = "0x20F5E30", Offset = "0x20F4430", VA = "0x1820F5E30")]
	protected float GetChaseAngleGivenDirection(Vector3 direction, bool useMoveAngle)
	{
		return default(float);
	}

	[Token(Token = "0x6003BE4")]
	[Address(RVA = "0x20F5940", Offset = "0x20F3F40", VA = "0x1820F5940")]
	protected float GetAgentNavAngle(Vector3 target, bool useMoveAngle)
	{
		return default(float);
	}

	[Token(Token = "0x6003BE5")]
	[Address(RVA = "0x20F7060", Offset = "0x20F5660", VA = "0x1820F7060")]
	protected bool HasClearLineOfSight(Vector3 target)
	{
		return default(bool);
	}

	[Token(Token = "0x6003BE6")]
	[Address(RVA = "0x20F74C0", Offset = "0x20F5AC0", VA = "0x1820F74C0")]
	protected bool HasLineOfSight(Vector3 start, Vector3 target)
	{
		return default(bool);
	}

	[Token(Token = "0x6003BE7")]
	[Address(RVA = "0x20F7670", Offset = "0x20F5C70", VA = "0x1820F7670")]
	public bool HasRockThrowLineOfSight(Vector3 start, BaseCharacter target)
	{
		return default(bool);
	}

	[Token(Token = "0x6003BE8")]
	[Address(RVA = "0x20F4610", Offset = "0x20F2C10", VA = "0x1820F4610")]
	public BaseCharacter FindRockThrowTarget(Vector3 start, bool requireLineOfSight)
	{
		return null;
	}

	[Token(Token = "0x6003BE9")]
	[Address(RVA = "0x20F8150", Offset = "0x20F6750", VA = "0x1820F8150")]
	protected bool IsCrawler()
	{
		return default(bool);
	}

	[Token(Token = "0x6003BEA")]
	[Address(RVA = "0x20F8200", Offset = "0x20F6800", VA = "0x1820F8200")]
	protected bool IsShifter()
	{
		return default(bool);
	}

	[Token(Token = "0x6003BEB")]
	[Address(RVA = "0x20F4510", Offset = "0x20F2B10", VA = "0x1820F4510")]
	private void CompleteMove()
	{
	}

	[Token(Token = "0x6003BEC")]
	[Address(RVA = "0x20F77B0", Offset = "0x20F5DB0", VA = "0x1820F77B0")]
	protected void Idle()
	{
	}

	[Token(Token = "0x6003BED")]
	[Address(RVA = "0x20F9620", Offset = "0x20F7C20", VA = "0x1820F9620")]
	protected void Wander()
	{
	}

	[Token(Token = "0x6003BEE")]
	[Address(RVA = "0x20F8930", Offset = "0x20F6F30", VA = "0x1820F8930")]
	protected void Sit()
	{
	}

	[Token(Token = "0x6003BEF")]
	[Address(RVA = "0x20F8320", Offset = "0x20F6920", VA = "0x1820F8320")]
	protected void MoveToEnemy(bool avoidCollisions = true)
	{
	}

	[Token(Token = "0x6003BF0")]
	[Address(RVA = "0x20F8A30", Offset = "0x20F7030", VA = "0x1820F8A30")]
	protected void TargetEnemy()
	{
	}

	[Token(Token = "0x6003BF1")]
	[Address(RVA = "0x20F8790", Offset = "0x20F6D90", VA = "0x1820F8790")]
	protected void MoveToPosition()
	{
	}

	[Token(Token = "0x6003BF2")]
	[Address(RVA = "0x20F3E00", Offset = "0x20F2400", VA = "0x1820F3E00")]
	protected void Attack(List<string> validAttacks)
	{
	}

	[Token(Token = "0x6003BF3")]
	[Address(RVA = "0x20F95E0", Offset = "0x20F7BE0", VA = "0x1820F95E0")]
	protected void WaitAttack(float waitTime)
	{
	}

	[Token(Token = "0x6003BF4")]
	[Address(RVA = "0x20F8B40", Offset = "0x20F7140", VA = "0x1820F8B40")]
	private bool TryCloseAction()
	{
		return default(bool);
	}

	[Token(Token = "0x6003BF5")]
	[Address(RVA = "0x20F8CE0", Offset = "0x20F72E0", VA = "0x1820F8CE0")]
	private void TurnToEnemy()
	{
	}

	[Token(Token = "0x6003BF6")]
	[Address(RVA = "0x20F63F0", Offset = "0x20F49F0", VA = "0x1820F63F0")]
	private string GetRandomAttack(List<string> validAttacks)
	{
		return null;
	}

	[Token(Token = "0x6003BF7")]
	[Address(RVA = "0x20F6900", Offset = "0x20F4F00", VA = "0x1820F6900", Slot = "13")]
	protected virtual List<string> GetValidAttacks(bool farOnly = false)
	{
		return null;
	}

	[Token(Token = "0x6003BF8")]
	[Address(RVA = "0x20F98A0", Offset = "0x20F7EA0", VA = "0x1820F98A0")]
	public BaseTitanAIController()
	{
	}
}
