using System;
using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;
using UnityEngine.AI;

namespace Controllers;

[Token(Token = "0x2000481")]
internal class BaseTitanAIController : BaseAIController
{
	[Token(Token = "0x40013C8")]
	[FieldOffset(Offset = "0x28")]
	protected BaseTitan _titan;

	[Token(Token = "0x40013C9")]
	[FieldOffset(Offset = "0x30")]
	public TitanAIState AIState;

	[Token(Token = "0x40013CA")]
	[FieldOffset(Offset = "0x34")]
	public bool SmartAttack;

	[Token(Token = "0x40013CB")]
	[FieldOffset(Offset = "0x38")]
	public float DetectRange;

	[Token(Token = "0x40013CC")]
	[FieldOffset(Offset = "0x3C")]
	public float CloseAttackRange;

	[Token(Token = "0x40013CD")]
	[FieldOffset(Offset = "0x40")]
	public float FarAttackMinRange;

	[Token(Token = "0x40013CE")]
	[FieldOffset(Offset = "0x44")]
	public float FarAttackMaxRange;

	[Token(Token = "0x40013CF")]
	[FieldOffset(Offset = "0x48")]
	public float FarAttackCooldown;

	[Token(Token = "0x40013D0")]
	[FieldOffset(Offset = "0x4C")]
	public float FocusRange;

	[Token(Token = "0x40013D1")]
	[FieldOffset(Offset = "0x50")]
	public float FocusTime;

	[Token(Token = "0x40013D2")]
	[FieldOffset(Offset = "0x54")]
	public float AttackWait;

	[Token(Token = "0x40013D3")]
	[FieldOffset(Offset = "0x58")]
	public float ChaseAngleTimeMin;

	[Token(Token = "0x40013D4")]
	[FieldOffset(Offset = "0x5C")]
	public float ChaseAngleTimeMax;

	[Token(Token = "0x40013D5")]
	[FieldOffset(Offset = "0x60")]
	public float ChaseAngleMinRange;

	[Token(Token = "0x40013D6")]
	[FieldOffset(Offset = "0x64")]
	public bool IsRun;

	[Token(Token = "0x40013D7")]
	[FieldOffset(Offset = "0x65")]
	public bool IsTurn;

	[Token(Token = "0x40013D8")]
	[FieldOffset(Offset = "0x68")]
	public float TurnAngle;

	[Token(Token = "0x40013D9")]
	[FieldOffset(Offset = "0x6C")]
	protected Vector3 _moveToPosition;

	[Token(Token = "0x40013DA")]
	[FieldOffset(Offset = "0x78")]
	protected float _moveAngle;

	[Token(Token = "0x40013DB")]
	[FieldOffset(Offset = "0x7C")]
	protected bool _moveToActive;

	[Token(Token = "0x40013DC")]
	[FieldOffset(Offset = "0x80")]
	protected float _moveToRange;

	[Token(Token = "0x40013DD")]
	[FieldOffset(Offset = "0x84")]
	protected bool _moveToIgnoreEnemies;

	[Token(Token = "0x40013DE")]
	[FieldOffset(Offset = "0x88")]
	protected float _moveToTimeout;

	[Token(Token = "0x40013DF")]
	[FieldOffset(Offset = "0x8C")]
	protected bool _moveToExact;

	[Token(Token = "0x40013E0")]
	[FieldOffset(Offset = "0x90")]
	protected Action _moveToCallback;

	[Token(Token = "0x40013E1")]
	[FieldOffset(Offset = "0x98")]
	public Dictionary<string, float> AttackChances;

	[Token(Token = "0x40013E2")]
	[FieldOffset(Offset = "0xA0")]
	public Dictionary<string, string> AttackGroups;

	[Token(Token = "0x40013E3")]
	[FieldOffset(Offset = "0xA8")]
	public Dictionary<string, TitanAttackInfo> AttackInfos;

	[Token(Token = "0x40013E4")]
	[FieldOffset(Offset = "0xB0")]
	protected float _stateTimeLeft;

	[Token(Token = "0x40013E5")]
	[FieldOffset(Offset = "0xB4")]
	protected float _focusTimeLeft;

	[Token(Token = "0x40013E6")]
	[FieldOffset(Offset = "0xB8")]
	protected float _rangedCooldownLeft;

	[Token(Token = "0x40013E7")]
	[FieldOffset(Offset = "0xBC")]
	protected float _attackRange;

	[Token(Token = "0x40013E8")]
	[FieldOffset(Offset = "0xC0")]
	protected ITargetable _enemy;

	[Token(Token = "0x40013E9")]
	[FieldOffset(Offset = "0xC8")]
	protected string _attack;

	[Token(Token = "0x40013EA")]
	[FieldOffset(Offset = "0xD0")]
	protected float _attackCooldownLeft;

	[Token(Token = "0x40013EB")]
	[FieldOffset(Offset = "0xD4")]
	protected float _waitAttackTimeLeft;

	[Token(Token = "0x40013EC")]
	[FieldOffset(Offset = "0xD8")]
	protected float _enemyDistance;

	[Token(Token = "0x40013ED")]
	[FieldOffset(Offset = "0xDC")]
	protected bool _isAIEnabled;

	[Token(Token = "0x40013EE")]
	[FieldOffset(Offset = "0xDD")]
	public bool _usePathfinding;

	[Token(Token = "0x40013EF")]
	[FieldOffset(Offset = "0xE0")]
	private NavMeshAgent _agent;

	[Token(Token = "0x40013F0")]
	[FieldOffset(Offset = "0xE8")]
	private CapsuleCollider _mainCollider;

	[Token(Token = "0x40013F1")]
	[FieldOffset(Offset = "0xF0")]
	private bool _setTargetThisFrame;

	[Token(Token = "0x40013F2")]
	[FieldOffset(Offset = "0xF4")]
	private LayerMask _losLayer;

	[Token(Token = "0x17000939")]
	protected virtual bool _scriptedAI
	{
		[Token(Token = "0x6003029")]
		[Address(RVA = "0x3E7ED60", Offset = "0x3E7ED60", VA = "0x3E7ED60", Slot = "7")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700093A")]
	protected virtual bool _stationaryAI
	{
		[Token(Token = "0x600302A")]
		[Address(RVA = "0x3E7ED70", Offset = "0x3E7ED70", VA = "0x3E7ED70", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700093B")]
	public bool AIEnabled
	{
		[Token(Token = "0x600302B")]
		[Address(RVA = "0x3E7ED80", Offset = "0x3E7ED80", VA = "0x3E7ED80")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600302C")]
		[Address(RVA = "0x3E7ED90", Offset = "0x3E7ED90", VA = "0x3E7ED90")]
		set
		{
		}
	}

	[Token(Token = "0x600302D")]
	[Address(RVA = "0x3E7EE40", Offset = "0x3E7EE40", VA = "0x3E7EE40", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x600302E")]
	[Address(RVA = "0x3E7F020", Offset = "0x3E7F020", VA = "0x3E7F020", Slot = "5")]
	protected override void Start()
	{
	}

	[Token(Token = "0x600302F")]
	[Address(RVA = "0x3E7F380", Offset = "0x3E7F380", VA = "0x3E7F380")]
	public void MoveTo(Vector3 position, float range, bool ignore)
	{
	}

	[Token(Token = "0x6003030")]
	[Address(RVA = "0x3E7F3B0", Offset = "0x3E7F3B0", VA = "0x3E7F3B0")]
	public void MoveToCallback(Action action, Vector3 position, float range, bool ignore)
	{
	}

	[Token(Token = "0x6003031")]
	[Address(RVA = "0x3E7F3F0", Offset = "0x3E7F3F0", VA = "0x3E7F3F0")]
	public void MoveToExact(Vector3 position, float range = 10f, float timeoutPadding = 1f)
	{
	}

	[Token(Token = "0x6003032")]
	[Address(RVA = "0x3E7F550", Offset = "0x3E7F550", VA = "0x3E7F550")]
	public void MoveToExactCallback(Action action, Vector3 position, float range = 10f, float timeoutPadding = 1f)
	{
	}

	[Token(Token = "0x6003033")]
	[Address(RVA = "0x3E7F6D0", Offset = "0x3E7F6D0", VA = "0x3E7F6D0")]
	public void CancelOrder()
	{
	}

	[Token(Token = "0x6003034")]
	[Address(RVA = "0x3E7F740", Offset = "0x3E7F740", VA = "0x3E7F740")]
	public void ForceIdle(float time)
	{
	}

	[Token(Token = "0x6003035")]
	[Address(RVA = "0x3E7F7B0", Offset = "0x3E7F7B0", VA = "0x3E7F7B0", Slot = "9")]
	public virtual void Init(JSONNode data)
	{
	}

	[Token(Token = "0x6003036")]
	[Address(RVA = "0x3E80180", Offset = "0x3E80180", VA = "0x3E80180")]
	public void SetDetectRange(float range)
	{
	}

	[Token(Token = "0x6003037")]
	[Address(RVA = "0x3E80190", Offset = "0x3E80190", VA = "0x3E80190")]
	public ITargetable GetEnemy()
	{
		return null;
	}

	[Token(Token = "0x6003038")]
	[Address(RVA = "0x3E801A0", Offset = "0x3E801A0", VA = "0x3E801A0")]
	public void SetEnemy(ITargetable enemy, float focusTime = 0f)
	{
	}

	[Token(Token = "0x6003039")]
	[Address(RVA = "0x3E801F0", Offset = "0x3E801F0", VA = "0x3E801F0")]
	public void SetAgentDestination(Vector3 position)
	{
	}

	[Token(Token = "0x600303A")]
	[Address(RVA = "0x3E80220", Offset = "0x3E80220", VA = "0x3E80220", Slot = "10")]
	protected virtual void UpdateScriptedAI()
	{
	}

	[Token(Token = "0x600303B")]
	[Address(RVA = "0x3E80230", Offset = "0x3E80230", VA = "0x3E80230", Slot = "6")]
	protected override void FixedUpdate()
	{
	}

	[Token(Token = "0x600303C")]
	[Address(RVA = "0x3E819B0", Offset = "0x3E819B0", VA = "0x3E819B0")]
	protected void RefreshAgent()
	{
	}

	[Token(Token = "0x600303D")]
	[Address(RVA = "0x3E82830", Offset = "0x3E82830", VA = "0x3E82830")]
	protected float GetEnemyAngle(ITargetable enemy)
	{
		return default(float);
	}

	[Token(Token = "0x600303E")]
	[Address(RVA = "0x3E81760", Offset = "0x3E81760", VA = "0x3E81760")]
	protected float GetChaseAngle(Vector3 position, bool useMoveAngle)
	{
		return default(float);
	}

	[Token(Token = "0x600303F")]
	[Address(RVA = "0x3E830D0", Offset = "0x3E830D0", VA = "0x3E830D0")]
	protected float GetChaseAngleGivenDirection(Vector3 direction, bool useMoveAngle)
	{
		return default(float);
	}

	[Token(Token = "0x6003040")]
	[Address(RVA = "0x3E831E0", Offset = "0x3E831E0", VA = "0x3E831E0")]
	protected Vector3 GetDirectionTowardsNavMesh()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003041")]
	[Address(RVA = "0x3E83490", Offset = "0x3E83490", VA = "0x3E83490")]
	protected float GetAgentNavAngle(Vector3 target)
	{
		return default(float);
	}

	[Token(Token = "0x6003042")]
	[Address(RVA = "0x3E82CB0", Offset = "0x3E82CB0", VA = "0x3E82CB0")]
	protected bool HasClearLineOfSight(Vector3 target)
	{
		return default(bool);
	}

	[Token(Token = "0x6003043")]
	[Address(RVA = "0x3E83AC0", Offset = "0x3E83AC0", VA = "0x3E83AC0")]
	protected bool HasLineOfSight(Vector3 start, Vector3 target)
	{
		return default(bool);
	}

	[Token(Token = "0x6003044")]
	[Address(RVA = "0x3E82040", Offset = "0x3E82040", VA = "0x3E82040")]
	protected bool IsCrawler()
	{
		return default(bool);
	}

	[Token(Token = "0x6003045")]
	[Address(RVA = "0x3E820B0", Offset = "0x3E820B0", VA = "0x3E820B0")]
	protected bool IsShifter()
	{
		return default(bool);
	}

	[Token(Token = "0x6003046")]
	[Address(RVA = "0x3E7EDF0", Offset = "0x3E7EDF0", VA = "0x3E7EDF0")]
	protected void Idle()
	{
	}

	[Token(Token = "0x6003047")]
	[Address(RVA = "0x3E82160", Offset = "0x3E82160", VA = "0x3E82160")]
	protected void Wander()
	{
	}

	[Token(Token = "0x6003048")]
	[Address(RVA = "0x3E82110", Offset = "0x3E82110", VA = "0x3E82110")]
	protected void Sit()
	{
	}

	[Token(Token = "0x6003049")]
	[Address(RVA = "0x3E824D0", Offset = "0x3E824D0", VA = "0x3E824D0")]
	protected void MoveToEnemy(bool avoidCollisions = true)
	{
	}

	[Token(Token = "0x600304A")]
	[Address(RVA = "0x3E82FF0", Offset = "0x3E82FF0", VA = "0x3E82FF0")]
	protected void TargetEnemy()
	{
	}

	[Token(Token = "0x600304B")]
	[Address(RVA = "0x3E81680", Offset = "0x3E81680", VA = "0x3E81680")]
	protected void MoveToPosition()
	{
	}

	[Token(Token = "0x600304C")]
	[Address(RVA = "0x3E826A0", Offset = "0x3E826A0", VA = "0x3E826A0")]
	protected void Attack(List<string> validAttacks)
	{
	}

	[Token(Token = "0x600304D")]
	[Address(RVA = "0x3E82800", Offset = "0x3E82800", VA = "0x3E82800")]
	protected void WaitAttack()
	{
	}

	[Token(Token = "0x600304E")]
	[Address(RVA = "0x3E81BA0", Offset = "0x3E81BA0", VA = "0x3E81BA0")]
	protected ITargetable FindNearestEnemy()
	{
		return null;
	}

	[Token(Token = "0x600304F")]
	[Address(RVA = "0x3E83D70", Offset = "0x3E83D70", VA = "0x3E83D70")]
	private string GetRandomAttack(List<string> validAttacks)
	{
		return null;
	}

	[Token(Token = "0x6003050")]
	[Address(RVA = "0x3E84700", Offset = "0x3E84700", VA = "0x3E84700", Slot = "11")]
	protected virtual List<string> GetValidAttacks(bool farOnly = false)
	{
		return null;
	}

	[Token(Token = "0x6003051")]
	[Address(RVA = "0x3E850B0", Offset = "0x3E850B0", VA = "0x3E850B0")]
	public BaseTitanAIController()
	{
	}
}
