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
using UnityEngine.AI;

namespace Controllers;

[Token(Token = "0x20004C6")]
internal class BaseTitanAIController : BaseAIController
{
	[Token(Token = "0x40014D7")]
	[FieldOffset(Offset = "0x28")]
	protected BaseTitan _titan;

	[Token(Token = "0x40014D8")]
	[FieldOffset(Offset = "0x30")]
	public TitanAIState AIState;

	[Token(Token = "0x40014D9")]
	public const float UpdateEnemyTime = 0.2f;

	[Token(Token = "0x40014DA")]
	[FieldOffset(Offset = "0x34")]
	public bool SmartAttack;

	[Token(Token = "0x40014DB")]
	[FieldOffset(Offset = "0x38")]
	public float DetectRange;

	[Token(Token = "0x40014DC")]
	[FieldOffset(Offset = "0x3C")]
	public float CloseAttackRange;

	[Token(Token = "0x40014DD")]
	[FieldOffset(Offset = "0x40")]
	public float FarAttackMinRange;

	[Token(Token = "0x40014DE")]
	[FieldOffset(Offset = "0x44")]
	public float FarAttackMaxRange;

	[Token(Token = "0x40014DF")]
	[FieldOffset(Offset = "0x48")]
	public float FarAttackCooldown;

	[Token(Token = "0x40014E0")]
	[FieldOffset(Offset = "0x4C")]
	public float FocusRange;

	[Token(Token = "0x40014E1")]
	[FieldOffset(Offset = "0x50")]
	public float FocusTime;

	[Token(Token = "0x40014E2")]
	[FieldOffset(Offset = "0x54")]
	public float AttackWait;

	[Token(Token = "0x40014E3")]
	[FieldOffset(Offset = "0x58")]
	public float ChaseAngleTimeMin;

	[Token(Token = "0x40014E4")]
	[FieldOffset(Offset = "0x5C")]
	public float ChaseAngleTimeMax;

	[Token(Token = "0x40014E5")]
	[FieldOffset(Offset = "0x60")]
	public float ChaseAngleMinRange;

	[Token(Token = "0x40014E6")]
	[FieldOffset(Offset = "0x64")]
	public bool IsRun;

	[Token(Token = "0x40014E7")]
	[FieldOffset(Offset = "0x65")]
	public bool IsTurn;

	[Token(Token = "0x40014E8")]
	[FieldOffset(Offset = "0x68")]
	public float TurnAngle;

	[Token(Token = "0x40014E9")]
	[FieldOffset(Offset = "0x6C")]
	protected Vector3 _moveToPosition;

	[Token(Token = "0x40014EA")]
	[FieldOffset(Offset = "0x78")]
	protected float _moveAngle;

	[Token(Token = "0x40014EB")]
	[FieldOffset(Offset = "0x7C")]
	protected bool _moveToActive;

	[Token(Token = "0x40014EC")]
	[FieldOffset(Offset = "0x80")]
	protected float _moveToRange;

	[Token(Token = "0x40014ED")]
	[FieldOffset(Offset = "0x84")]
	protected bool _moveToIgnoreEnemies;

	[Token(Token = "0x40014EE")]
	[FieldOffset(Offset = "0x88")]
	protected float _moveToTimeout;

	[Token(Token = "0x40014EF")]
	[FieldOffset(Offset = "0x8C")]
	protected bool _moveToExact;

	[Token(Token = "0x40014F0")]
	[FieldOffset(Offset = "0x90")]
	protected Action _moveToCallback;

	[Token(Token = "0x40014F1")]
	[FieldOffset(Offset = "0x98")]
	public Dictionary<string, float> AttackChances;

	[Token(Token = "0x40014F2")]
	[FieldOffset(Offset = "0xA0")]
	public Dictionary<string, string> AttackGroups;

	[Token(Token = "0x40014F3")]
	[FieldOffset(Offset = "0xA8")]
	public Dictionary<string, TitanAttackInfo> AttackInfos;

	[Token(Token = "0x40014F4")]
	[FieldOffset(Offset = "0xB0")]
	protected float _stateTimeLeft;

	[Token(Token = "0x40014F5")]
	[FieldOffset(Offset = "0xB4")]
	protected float _focusTimeLeft;

	[Token(Token = "0x40014F6")]
	[FieldOffset(Offset = "0xB8")]
	protected float _updateEnemyTimeLeft;

	[Token(Token = "0x40014F7")]
	[FieldOffset(Offset = "0xBC")]
	protected float _rangedCooldownLeft;

	[Token(Token = "0x40014F8")]
	[FieldOffset(Offset = "0xC0")]
	protected float _attackRange;

	[Token(Token = "0x40014F9")]
	[FieldOffset(Offset = "0xC8")]
	protected ITargetable _enemy;

	[Token(Token = "0x40014FA")]
	[FieldOffset(Offset = "0xD0")]
	protected string _attack;

	[Token(Token = "0x40014FB")]
	[FieldOffset(Offset = "0xD8")]
	protected float _attackCooldownLeft;

	[Token(Token = "0x40014FC")]
	[FieldOffset(Offset = "0xDC")]
	protected float _waitAttackTimeLeft;

	[Token(Token = "0x40014FD")]
	[FieldOffset(Offset = "0xE0")]
	protected float _enemyDistance;

	[Token(Token = "0x40014FE")]
	[FieldOffset(Offset = "0xE4")]
	protected bool _isAIEnabled;

	[Token(Token = "0x40014FF")]
	[FieldOffset(Offset = "0xE5")]
	public bool _usePathfinding;

	[Token(Token = "0x4001500")]
	[FieldOffset(Offset = "0xE8")]
	private NavMeshAgent _agent;

	[Token(Token = "0x4001501")]
	[FieldOffset(Offset = "0xF0")]
	private CapsuleCollider _mainCollider;

	[Token(Token = "0x4001502")]
	[FieldOffset(Offset = "0xF8")]
	private bool _setTargetThisFrame;

	[Token(Token = "0x4001503")]
	[FieldOffset(Offset = "0xFC")]
	private LayerMask _losLayer;

	[Token(Token = "0x170009A3")]
	protected virtual bool _scriptedAI
	{
		[Token(Token = "0x6003236")]
		[Address(RVA = "0x418B260", Offset = "0x418B260", VA = "0x418B260", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009A4")]
	protected virtual bool _stationaryAI
	{
		[Token(Token = "0x6003237")]
		[Address(RVA = "0x418B270", Offset = "0x418B270", VA = "0x418B270", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009A5")]
	public bool AIEnabled
	{
		[Token(Token = "0x6003238")]
		[Address(RVA = "0x418B280", Offset = "0x418B280", VA = "0x418B280")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003239")]
		[Address(RVA = "0x418B290", Offset = "0x418B290", VA = "0x418B290")]
		set
		{
		}
	}

	[Token(Token = "0x600323A")]
	[Address(RVA = "0x418B340", Offset = "0x418B340", VA = "0x418B340", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600323B")]
	[Address(RVA = "0x418B520", Offset = "0x418B520", VA = "0x418B520", Slot = "5")]
	protected override void Start()
	{
	}

	[Token(Token = "0x600323C")]
	[Address(RVA = "0x418B880", Offset = "0x418B880", VA = "0x418B880")]
	public void MoveTo(Vector3 position, float range, bool ignore)
	{
	}

	[Token(Token = "0x600323D")]
	[Address(RVA = "0x418B8B0", Offset = "0x418B8B0", VA = "0x418B8B0")]
	public void MoveToCallback(Action action, Vector3 position, float range, bool ignore)
	{
	}

	[Token(Token = "0x600323E")]
	[Address(RVA = "0x418B8F0", Offset = "0x418B8F0", VA = "0x418B8F0")]
	public void MoveToExact(Vector3 position, float range = 10f, float timeoutPadding = 1f)
	{
	}

	[Token(Token = "0x600323F")]
	[Address(RVA = "0x418BA50", Offset = "0x418BA50", VA = "0x418BA50")]
	public void MoveToExactCallback(Action action, Vector3 position, float range = 10f, float timeoutPadding = 1f)
	{
	}

	[Token(Token = "0x6003240")]
	[Address(RVA = "0x418BBD0", Offset = "0x418BBD0", VA = "0x418BBD0")]
	public void CancelOrder()
	{
	}

	[Token(Token = "0x6003241")]
	[Address(RVA = "0x418BC40", Offset = "0x418BC40", VA = "0x418BC40")]
	public void ForceIdle(float time)
	{
	}

	[Token(Token = "0x6003242")]
	[Address(RVA = "0x418BCB0", Offset = "0x418BCB0", VA = "0x418BCB0", Slot = "9")]
	public virtual void Init(JSONNode data)
	{
	}

	[Token(Token = "0x6003243")]
	[Address(RVA = "0x418C680", Offset = "0x418C680", VA = "0x418C680")]
	public void SetDetectRange(float range)
	{
	}

	[Token(Token = "0x6003244")]
	[Address(RVA = "0x418C6A0", Offset = "0x418C6A0", VA = "0x418C6A0")]
	public ITargetable GetEnemy()
	{
		return null;
	}

	[Token(Token = "0x6003245")]
	[Address(RVA = "0x418C6B0", Offset = "0x418C6B0", VA = "0x418C6B0")]
	public void SetEnemy(ITargetable enemy, float focusTime = 0f)
	{
	}

	[Token(Token = "0x6003246")]
	[Address(RVA = "0x418C700", Offset = "0x418C700", VA = "0x418C700")]
	public void SetAgentDestination(Vector3 position)
	{
	}

	[Token(Token = "0x6003247")]
	[Address(RVA = "0x418C730", Offset = "0x418C730", VA = "0x418C730", Slot = "10")]
	protected virtual void UpdateScriptedAI()
	{
	}

	[Token(Token = "0x6003248")]
	[Address(RVA = "0x418C740", Offset = "0x418C740", VA = "0x418C740", Slot = "6")]
	protected override void FixedUpdate()
	{
	}

	[Token(Token = "0x6003249")]
	[Address(RVA = "0x418DF50", Offset = "0x418DF50", VA = "0x418DF50")]
	protected void RefreshAgent()
	{
	}

	[Token(Token = "0x600324A")]
	[Address(RVA = "0x418EDD0", Offset = "0x418EDD0", VA = "0x418EDD0")]
	protected float GetEnemyAngle(ITargetable enemy)
	{
		return default(float);
	}

	[Token(Token = "0x600324B")]
	[Address(RVA = "0x418DD00", Offset = "0x418DD00", VA = "0x418DD00")]
	protected float GetChaseAngle(Vector3 position, bool useMoveAngle)
	{
		return default(float);
	}

	[Token(Token = "0x600324C")]
	[Address(RVA = "0x418F670", Offset = "0x418F670", VA = "0x418F670")]
	protected float GetChaseAngleGivenDirection(Vector3 direction, bool useMoveAngle)
	{
		return default(float);
	}

	[Token(Token = "0x600324D")]
	[Address(RVA = "0x418F780", Offset = "0x418F780", VA = "0x418F780")]
	protected Vector3 GetDirectionTowardsNavMesh()
	{
		return default(Vector3);
	}

	[Token(Token = "0x600324E")]
	[Address(RVA = "0x418FA30", Offset = "0x418FA30", VA = "0x418FA30")]
	protected float GetAgentNavAngle(Vector3 target)
	{
		return default(float);
	}

	[Token(Token = "0x600324F")]
	[Address(RVA = "0x418F250", Offset = "0x418F250", VA = "0x418F250")]
	protected bool HasClearLineOfSight(Vector3 target)
	{
		return default(bool);
	}

	[Token(Token = "0x6003250")]
	[Address(RVA = "0x4190060", Offset = "0x4190060", VA = "0x4190060")]
	protected bool HasLineOfSight(Vector3 start, Vector3 target)
	{
		return default(bool);
	}

	[Token(Token = "0x6003251")]
	[Address(RVA = "0x418E5E0", Offset = "0x418E5E0", VA = "0x418E5E0")]
	protected bool IsCrawler()
	{
		return default(bool);
	}

	[Token(Token = "0x6003252")]
	[Address(RVA = "0x418E650", Offset = "0x418E650", VA = "0x418E650")]
	protected bool IsShifter()
	{
		return default(bool);
	}

	[Token(Token = "0x6003253")]
	[Address(RVA = "0x418B2F0", Offset = "0x418B2F0", VA = "0x418B2F0")]
	protected void Idle()
	{
	}

	[Token(Token = "0x6003254")]
	[Address(RVA = "0x418E700", Offset = "0x418E700", VA = "0x418E700")]
	protected void Wander()
	{
	}

	[Token(Token = "0x6003255")]
	[Address(RVA = "0x418E6B0", Offset = "0x418E6B0", VA = "0x418E6B0")]
	protected void Sit()
	{
	}

	[Token(Token = "0x6003256")]
	[Address(RVA = "0x418EA70", Offset = "0x418EA70", VA = "0x418EA70")]
	protected void MoveToEnemy(bool avoidCollisions = true)
	{
	}

	[Token(Token = "0x6003257")]
	[Address(RVA = "0x418F590", Offset = "0x418F590", VA = "0x418F590")]
	protected void TargetEnemy()
	{
	}

	[Token(Token = "0x6003258")]
	[Address(RVA = "0x418DC20", Offset = "0x418DC20", VA = "0x418DC20")]
	protected void MoveToPosition()
	{
	}

	[Token(Token = "0x6003259")]
	[Address(RVA = "0x418EC40", Offset = "0x418EC40", VA = "0x418EC40")]
	protected void Attack(List<string> validAttacks)
	{
	}

	[Token(Token = "0x600325A")]
	[Address(RVA = "0x418EDA0", Offset = "0x418EDA0", VA = "0x418EDA0")]
	protected void WaitAttack()
	{
	}

	[Token(Token = "0x600325B")]
	[Address(RVA = "0x418E140", Offset = "0x418E140", VA = "0x418E140")]
	protected ITargetable FindNearestEnemy()
	{
		return null;
	}

	[Token(Token = "0x600325C")]
	[Address(RVA = "0x4190310", Offset = "0x4190310", VA = "0x4190310")]
	private string GetRandomAttack(List<string> validAttacks)
	{
		return null;
	}

	[Token(Token = "0x600325D")]
	[Address(RVA = "0x4190CA0", Offset = "0x4190CA0", VA = "0x4190CA0", Slot = "11")]
	protected virtual List<string> GetValidAttacks(bool farOnly = false)
	{
		return null;
	}

	[Token(Token = "0x600325E")]
	[Address(RVA = "0x4191650", Offset = "0x4191650", VA = "0x4191650")]
	public BaseTitanAIController()
	{
	}
}
