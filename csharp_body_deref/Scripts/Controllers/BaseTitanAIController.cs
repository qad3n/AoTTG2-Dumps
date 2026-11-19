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

[Token(Token = "0x200067A")]
internal class BaseTitanAIController : BaseAIController
{
	[Token(Token = "0x4001CCC")]
	[FieldOffset(Offset = "0x90")]
	protected BaseTitan _titan;

	[Token(Token = "0x4001CCD")]
	[FieldOffset(Offset = "0x98")]
	public TitanAIState AIState;

	[Token(Token = "0x4001CCE")]
	[FieldOffset(Offset = "0x9C")]
	public bool SmartAttack;

	[Token(Token = "0x4001CCF")]
	[FieldOffset(Offset = "0xA0")]
	private readonly List<string> _validAttacks;

	[Token(Token = "0x4001CD0")]
	[FieldOffset(Offset = "0xA8")]
	private readonly Dictionary<string, int> _attackGroupCounts;

	[Token(Token = "0x4001CD1")]
	[FieldOffset(Offset = "0xB0")]
	public float CloseAttackRange;

	[Token(Token = "0x4001CD2")]
	[FieldOffset(Offset = "0xB4")]
	public float FarAttackMinRange;

	[Token(Token = "0x4001CD3")]
	[FieldOffset(Offset = "0xB8")]
	public float FarAttackMaxRange;

	[Token(Token = "0x4001CD4")]
	[FieldOffset(Offset = "0xBC")]
	public float FarAttackCooldown;

	[Token(Token = "0x4001CD5")]
	[FieldOffset(Offset = "0xC0")]
	public float AttackWait;

	[Token(Token = "0x4001CD6")]
	[FieldOffset(Offset = "0xC4")]
	public float ChaseAngleTimeMin;

	[Token(Token = "0x4001CD7")]
	[FieldOffset(Offset = "0xC8")]
	public float ChaseAngleTimeMax;

	[Token(Token = "0x4001CD8")]
	[FieldOffset(Offset = "0xCC")]
	public float ChaseAngleMinRange;

	[Token(Token = "0x4001CD9")]
	[FieldOffset(Offset = "0xD0")]
	public bool IsRun;

	[Token(Token = "0x4001CDA")]
	[FieldOffset(Offset = "0xD1")]
	public bool IsTurn;

	[Token(Token = "0x4001CDB")]
	[FieldOffset(Offset = "0xD4")]
	public float TurnAngle;

	[Token(Token = "0x4001CDC")]
	[FieldOffset(Offset = "0xD8")]
	protected float _moveAngle;

	[Token(Token = "0x4001CDD")]
	[FieldOffset(Offset = "0xDC")]
	protected float _moveToTimeout;

	[Token(Token = "0x4001CDE")]
	[FieldOffset(Offset = "0xE0")]
	protected bool _moveToExact;

	[Token(Token = "0x4001CDF")]
	[FieldOffset(Offset = "0xE8")]
	protected Action _moveToCallback;

	[Token(Token = "0x4001CE0")]
	[FieldOffset(Offset = "0xF0")]
	public Dictionary<string, float> AttackChances;

	[Token(Token = "0x4001CE1")]
	[FieldOffset(Offset = "0xF8")]
	public Dictionary<string, string> AttackGroups;

	[Token(Token = "0x4001CE2")]
	[FieldOffset(Offset = "0x100")]
	public Dictionary<string, TitanAttackInfo> AttackInfos;

	[Token(Token = "0x4001CE3")]
	[FieldOffset(Offset = "0x108")]
	protected float _stateTimeLeft;

	[Token(Token = "0x4001CE4")]
	[FieldOffset(Offset = "0x10C")]
	protected float _rangedCooldownLeft;

	[Token(Token = "0x4001CE5")]
	[FieldOffset(Offset = "0x110")]
	protected float _attackRange;

	[Token(Token = "0x4001CE6")]
	[FieldOffset(Offset = "0x118")]
	protected string _attack;

	[Token(Token = "0x4001CE7")]
	[FieldOffset(Offset = "0x120")]
	protected float _attackCooldownLeft;

	[Token(Token = "0x4001CE8")]
	[FieldOffset(Offset = "0x124")]
	protected float _waitAttackTimeLeft;

	[Token(Token = "0x4001CE9")]
	[FieldOffset(Offset = "0x128")]
	protected float _enemyDistance;

	[Token(Token = "0x4001CEA")]
	private const float MovementRecoveryDelay = 0.5f;

	[Token(Token = "0x4001CEB")]
	[FieldOffset(Offset = "0x12C")]
	private float _lowMovementSpeedTime;

	[Token(Token = "0x4001CEC")]
	[FieldOffset(Offset = "0x130")]
	private float _recoveryTimeLeft;

	[Token(Token = "0x4001CED")]
	[FieldOffset(Offset = "0x134")]
	private float _recoveryTurnAngle;

	[Token(Token = "0x4001CEE")]
	[FieldOffset(Offset = "0x138")]
	private float _recoveryHeading;

	[Token(Token = "0x4001CEF")]
	private const float ObstacleCheckInterval = 0.2f;

	[Token(Token = "0x4001CF0")]
	private const float ObstacleLookAheadTime = 0.6f;

	[Token(Token = "0x4001CF1")]
	[FieldOffset(Offset = "0x0")]
	private static readonly float[] AvoidProbeAngles;

	[Token(Token = "0x4001CF2")]
	private const float WalkableNormalY = 0.6f;

	[Token(Token = "0x4001CF3")]
	[FieldOffset(Offset = "0x13C")]
	private float _obstacleCheckTimeLeft;

	[Token(Token = "0x4001CF4")]
	[FieldOffset(Offset = "0x140")]
	private float _avoidAngle;

	[Token(Token = "0x4001CF5")]
	[FieldOffset(Offset = "0x144")]
	private float _avoidHeading;

	[Token(Token = "0x4001CF6")]
	[FieldOffset(Offset = "0x148")]
	private float _avoidedTargetAngle;

	[Token(Token = "0x4001CF7")]
	[FieldOffset(Offset = "0x150")]
	private CapsuleCollider _mainCollider;

	[Token(Token = "0x4001CF8")]
	[FieldOffset(Offset = "0x158")]
	private LayerMask _losLayer;

	[Token(Token = "0x17000AE6")]
	protected virtual bool _scriptedAI
	{
		[Token(Token = "0x6003E55")]
		[Address(RVA = "0x5A9EAA0", Offset = "0x5A9DAA0", VA = "0x5A9EAA0", Slot = "9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000AE7")]
	protected virtual bool _stationaryAI
	{
		[Token(Token = "0x6003E56")]
		[Address(RVA = "0x5A9EAB0", Offset = "0x5A9DAB0", VA = "0x5A9EAB0", Slot = "10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003E57")]
	[Address(RVA = "0x5A9EAC0", Offset = "0x5A9DAC0", VA = "0x5A9EAC0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003E58")]
	[Address(RVA = "0x5A9EC30", Offset = "0x5A9DC30", VA = "0x5A9EC30", Slot = "7")]
	protected override float GetAgentSpeed()
	{
		return default(float);
	}

	[Token(Token = "0x6003E59")]
	[Address(RVA = "0x5A9EC50", Offset = "0x5A9DC50", VA = "0x5A9EC50", Slot = "5")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6003E5A")]
	[Address(RVA = "0x5A9CB20", Offset = "0x5A9BB20", VA = "0x5A9CB20")]
	internal void BeginMove()
	{
	}

	[Token(Token = "0x6003E5B")]
	[Address(RVA = "0x5A9BFB0", Offset = "0x5A9AFB0", VA = "0x5A9BFB0")]
	internal void EndForcedIdle()
	{
	}

	[Token(Token = "0x6003E5C")]
	[Address(RVA = "0x5A9B5E0", Offset = "0x5A9A5E0", VA = "0x5A9B5E0")]
	internal void ResetCommandState()
	{
	}

	[Token(Token = "0x6003E5D")]
	[Address(RVA = "0x5A9EDC0", Offset = "0x5A9DDC0", VA = "0x5A9EDC0")]
	public void MoveToCallback(Action action, Vector3 position, float range, bool ignore)
	{
	}

	[Token(Token = "0x6003E5E")]
	[Address(RVA = "0x5A9EE40", Offset = "0x5A9DE40", VA = "0x5A9EE40")]
	public void MoveToExact(Vector3 position, float range = 10f, float timeoutPadding = 1f)
	{
	}

	[Token(Token = "0x6003E5F")]
	[Address(RVA = "0x5A9F020", Offset = "0x5A9E020", VA = "0x5A9F020")]
	public void MoveToExactCallback(Action action, Vector3 position, float range = 10f, float timeoutPadding = 1f)
	{
	}

	[Token(Token = "0x6003E60")]
	[Address(RVA = "0x5A9F050", Offset = "0x5A9E050", VA = "0x5A9F050")]
	public void CancelOrder()
	{
	}

	[Token(Token = "0x6003E61")]
	[Address(RVA = "0x5A9CFB0", Offset = "0x5A9BFB0", VA = "0x5A9CFB0")]
	public void ForceIdle(float time)
	{
	}

	[Token(Token = "0x6003E62")]
	[Address(RVA = "0x5A9F1A0", Offset = "0x5A9E1A0", VA = "0x5A9F1A0", Slot = "11")]
	public virtual void Init(JSONNode data)
	{
	}

	[Token(Token = "0x6003E63")]
	[Address(RVA = "0x5A9FB80", Offset = "0x5A9EB80", VA = "0x5A9FB80")]
	public ITargetable GetEnemy()
	{
		return null;
	}

	[Token(Token = "0x6003E64")]
	[Address(RVA = "0x5A9FBA0", Offset = "0x5A9EBA0", VA = "0x5A9FBA0")]
	public void SetEnemy(ITargetable enemy, float focusTime = 0f)
	{
	}

	[Token(Token = "0x6003E65")]
	[Address(RVA = "0x5A9FBB0", Offset = "0x5A9EBB0", VA = "0x5A9FBB0", Slot = "12")]
	protected virtual void UpdateScriptedAI()
	{
	}

	[Token(Token = "0x6003E66")]
	[Address(RVA = "0x5A9FBC0", Offset = "0x5A9EBC0", VA = "0x5A9FBC0", Slot = "6")]
	protected override void FixedUpdate()
	{
	}

	[Token(Token = "0x6003E67")]
	[Address(RVA = "0x5A9EDA0", Offset = "0x5A9DDA0", VA = "0x5A9EDA0")]
	private void ResetMovementRecovery()
	{
	}

	[Token(Token = "0x6003E68")]
	[Address(RVA = "0x5AA0BC0", Offset = "0x5A9FBC0", VA = "0x5AA0BC0")]
	private void UpdateMovementRecovery()
	{
	}

	[Token(Token = "0x6003E69")]
	[Address(RVA = "0x5AA26D0", Offset = "0x5AA16D0", VA = "0x5AA26D0")]
	private void ApplyObstacleAvoidance(float speed)
	{
	}

	[Token(Token = "0x6003E6A")]
	[Address(RVA = "0x5AA2870", Offset = "0x5AA1870", VA = "0x5AA2870")]
	private bool IsNearEnemy()
	{
		return default(bool);
	}

	[Token(Token = "0x6003E6B")]
	[Address(RVA = "0x5AA2C60", Offset = "0x5AA1C60", VA = "0x5AA2C60")]
	private float GetAvoidAngle(float heading, float speed)
	{
		return default(float);
	}

	[Token(Token = "0x6003E6C")]
	[Address(RVA = "0x5AA2920", Offset = "0x5AA1920", VA = "0x5AA2920")]
	private bool CastObstacle(Vector3 direction, float lookAhead, float radiusScale, out RaycastHit hit)
	{
		return default(bool);
	}

	[Token(Token = "0x6003E6D")]
	[Address(RVA = "0x5AA2BD0", Offset = "0x5AA1BD0", VA = "0x5AA2BD0")]
	private float GetObstacleSide(Vector3 direction, Vector3 point)
	{
		return default(float);
	}

	[Token(Token = "0x6003E6E")]
	[Address(RVA = "0x5AA2890", Offset = "0x5AA1890", VA = "0x5AA2890")]
	private static Vector3 GetHeadingDirection(float heading)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003E6F")]
	[Address(RVA = "0x5AA32D0", Offset = "0x5AA22D0", VA = "0x5AA32D0", Slot = "8")]
	protected override void RefreshAgent()
	{
	}

	[Token(Token = "0x6003E70")]
	[Address(RVA = "0x5AA2100", Offset = "0x5AA1100", VA = "0x5AA2100")]
	protected float GetEnemyAngle(ITargetable enemy)
	{
		return default(float);
	}

	[Token(Token = "0x6003E71")]
	[Address(RVA = "0x5AA0920", Offset = "0x5A9F920", VA = "0x5AA0920")]
	protected float GetChaseAngle(Vector3 position, bool useMoveAngle)
	{
		return default(float);
	}

	[Token(Token = "0x6003E72")]
	[Address(RVA = "0x5AA32E0", Offset = "0x5AA22E0", VA = "0x5AA32E0")]
	protected float GetChaseAngleGivenDirection(Vector3 direction, bool useMoveAngle)
	{
		return default(float);
	}

	[Token(Token = "0x6003E73")]
	[Address(RVA = "0x5AA33E0", Offset = "0x5AA23E0", VA = "0x5AA33E0")]
	protected float GetAgentNavAngle(Vector3 target, bool useMoveAngle)
	{
		return default(float);
	}

	[Token(Token = "0x6003E74")]
	[Address(RVA = "0x5AA1B20", Offset = "0x5AA0B20", VA = "0x5AA1B20")]
	protected bool HasClearLineOfSight(Vector3 target)
	{
		return default(bool);
	}

	[Token(Token = "0x6003E75")]
	[Address(RVA = "0x5AA34F0", Offset = "0x5AA24F0", VA = "0x5AA34F0")]
	protected bool HasLineOfSight(Vector3 start, Vector3 target)
	{
		return default(bool);
	}

	[Token(Token = "0x6003E76")]
	[Address(RVA = "0x5AA37B0", Offset = "0x5AA27B0", VA = "0x5AA37B0")]
	public bool HasRockThrowLineOfSight(Vector3 start, BaseCharacter target)
	{
		return default(bool);
	}

	[Token(Token = "0x6003E77")]
	[Address(RVA = "0x5AA38B0", Offset = "0x5AA28B0", VA = "0x5AA38B0")]
	public BaseCharacter FindRockThrowTarget(Vector3 start, bool requireLineOfSight)
	{
		return null;
	}

	[Token(Token = "0x6003E78")]
	[Address(RVA = "0x5AA11C0", Offset = "0x5AA01C0", VA = "0x5AA11C0")]
	protected bool IsCrawler()
	{
		return default(bool);
	}

	[Token(Token = "0x6003E79")]
	[Address(RVA = "0x5AA1230", Offset = "0x5AA0230", VA = "0x5AA1230")]
	protected bool IsShifter()
	{
		return default(bool);
	}

	[Token(Token = "0x6003E7A")]
	[Address(RVA = "0x5AA0800", Offset = "0x5A9F800", VA = "0x5AA0800")]
	private void CompleteMove()
	{
	}

	[Token(Token = "0x6003E7B")]
	[Address(RVA = "0x5A9ED30", Offset = "0x5A9DD30", VA = "0x5A9ED30")]
	protected void Idle()
	{
	}

	[Token(Token = "0x6003E7C")]
	[Address(RVA = "0x5AA12E0", Offset = "0x5AA02E0", VA = "0x5AA12E0")]
	protected void Wander()
	{
	}

	[Token(Token = "0x6003E7D")]
	[Address(RVA = "0x5AA1290", Offset = "0x5AA0290", VA = "0x5AA1290")]
	protected void Sit()
	{
	}

	[Token(Token = "0x6003E7E")]
	[Address(RVA = "0x5AA1600", Offset = "0x5AA0600", VA = "0x5AA1600")]
	protected void MoveToEnemy(bool avoidCollisions = true)
	{
	}

	[Token(Token = "0x6003E7F")]
	[Address(RVA = "0x5AA1E80", Offset = "0x5AA0E80", VA = "0x5AA1E80")]
	protected void TargetEnemy()
	{
	}

	[Token(Token = "0x6003E80")]
	[Address(RVA = "0x5AA0610", Offset = "0x5A9F610", VA = "0x5AA0610")]
	protected void MoveToPosition()
	{
	}

	[Token(Token = "0x6003E81")]
	[Address(RVA = "0x5AA1F60", Offset = "0x5AA0F60", VA = "0x5AA1F60")]
	protected void Attack(List<string> validAttacks)
	{
	}

	[Token(Token = "0x6003E82")]
	[Address(RVA = "0x5AA41D0", Offset = "0x5AA31D0", VA = "0x5AA41D0")]
	protected void WaitAttack(float waitTime)
	{
	}

	[Token(Token = "0x6003E83")]
	[Address(RVA = "0x5AA1970", Offset = "0x5AA0970", VA = "0x5AA1970")]
	private bool TryCloseAction()
	{
		return default(bool);
	}

	[Token(Token = "0x6003E84")]
	[Address(RVA = "0x5AA25B0", Offset = "0x5AA15B0", VA = "0x5AA25B0")]
	private void TurnToEnemy()
	{
	}

	[Token(Token = "0x6003E85")]
	[Address(RVA = "0x5AA3C20", Offset = "0x5AA2C20", VA = "0x5AA3C20")]
	private string GetRandomAttack(List<string> validAttacks)
	{
		return null;
	}

	[Token(Token = "0x6003E86")]
	[Address(RVA = "0x5AA4200", Offset = "0x5AA3200", VA = "0x5AA4200", Slot = "13")]
	protected virtual List<string> GetValidAttacks(bool farOnly = false)
	{
		return null;
	}

	[Token(Token = "0x6003E87")]
	[Address(RVA = "0x5AA4A70", Offset = "0x5AA3A70", VA = "0x5AA4A70")]
	public BaseTitanAIController()
	{
	}
}
