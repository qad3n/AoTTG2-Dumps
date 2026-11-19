// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.BaseAIController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/BaseAIController.c
// Prior real C# source (older reference): Assets/Scripts/Controllers/BaseAIController.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.AI;

namespace Controllers;

[Token(Token = "0x2000678")]
internal class BaseAIController : MonoBehaviour
{
	[Token(Token = "0x4001CAC")]
	protected const float NavMeshSearchRange = 100f;

	[Token(Token = "0x4001CAD")]
	protected const float ReacquireDelay = 1f;

	[Token(Token = "0x4001CAE")]
	protected const float ReacquireFailDelay = 5f;

	[Token(Token = "0x4001CAF")]
	protected const float RepathDelay = 0.2f;

	[Token(Token = "0x4001CB0")]
	[FieldOffset(Offset = "0x20")]
	protected BaseCharacter _character;

	[Token(Token = "0x4001CB1")]
	[FieldOffset(Offset = "0x28")]
	public bool _usePathfinding;

	[Token(Token = "0x4001CB2")]
	[FieldOffset(Offset = "0x30")]
	protected NavMeshAgent _agent;

	[Token(Token = "0x4001CB3")]
	[FieldOffset(Offset = "0x38")]
	protected bool _setTargetThisFrame;

	[Token(Token = "0x4001CB4")]
	[FieldOffset(Offset = "0x3C")]
	private float _reacquireTimeLeft;

	[Token(Token = "0x4001CB5")]
	[FieldOffset(Offset = "0x40")]
	private float _repathTimeLeft;

	[Token(Token = "0x4001CB6")]
	[FieldOffset(Offset = "0x44")]
	public float DetectRange;

	[Token(Token = "0x4001CB7")]
	[FieldOffset(Offset = "0x48")]
	public float FocusTime;

	[Token(Token = "0x4001CB8")]
	[FieldOffset(Offset = "0x4C")]
	public float FocusRange;

	[Token(Token = "0x4001CB9")]
	[FieldOffset(Offset = "0x50")]
	protected ITargetable _enemy;

	[Token(Token = "0x4001CBA")]
	[FieldOffset(Offset = "0x58")]
	protected float _focusTimeLeft;

	[Token(Token = "0x4001CBB")]
	[FieldOffset(Offset = "0x5C")]
	protected float _updateEnemyTimeLeft;

	[Token(Token = "0x4001CBC")]
	[FieldOffset(Offset = "0x60")]
	protected bool _automaticTargeting;

	[Token(Token = "0x4001CBD")]
	[FieldOffset(Offset = "0x64")]
	protected Vector3 _moveToPosition;

	[Token(Token = "0x4001CBE")]
	[FieldOffset(Offset = "0x70")]
	protected bool _moveToActive;

	[Token(Token = "0x4001CBF")]
	[FieldOffset(Offset = "0x74")]
	protected float _moveToRange;

	[Token(Token = "0x4001CC0")]
	[FieldOffset(Offset = "0x78")]
	protected bool _moveToIgnoreEnemies;

	[Token(Token = "0x4001CC1")]
	[FieldOffset(Offset = "0x80")]
	protected ITargetable _moveToTarget;

	[Token(Token = "0x4001CC2")]
	[FieldOffset(Offset = "0x88")]
	protected float _idleTimeLeft;

	[Token(Token = "0x4001CC3")]
	[FieldOffset(Offset = "0x8C")]
	private bool _aiEnabled;

	[Token(Token = "0x17000AE3")]
	public bool AIEnabled
	{
		[Token(Token = "0x6003E27")]
		[Address(RVA = "0x5A9B340", Offset = "0x5A9A340", VA = "0x5A9B340")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003E28")]
		[Address(RVA = "0x5A9B350", Offset = "0x5A9A350", VA = "0x5A9B350")]
		set
		{
		}
	}

	[Token(Token = "0x17000AE4")]
	public bool IsWalking
	{
		[Token(Token = "0x6003E29")]
		[Address(RVA = "0x5A9B650", Offset = "0x5A9A650", VA = "0x5A9B650")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003E2A")]
		[Address(RVA = "0x5A9B700", Offset = "0x5A9A700", VA = "0x5A9B700")]
		set
		{
		}
	}

	[Token(Token = "0x17000AE5")]
	public bool UsePathfinding
	{
		[Token(Token = "0x6003E2B")]
		[Address(RVA = "0x5A9B800", Offset = "0x5A9A800", VA = "0x5A9B800")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003E2C")]
		[Address(RVA = "0x5A9B810", Offset = "0x5A9A810", VA = "0x5A9B810")]
		set
		{
		}
	}

	[Token(Token = "0x6003E2D")]
	[Address(RVA = "0x5A9BBC0", Offset = "0x5A9ABC0", VA = "0x5A9BBC0")]
	public ITargetable GetTarget()
	{
		return null;
	}

	[Token(Token = "0x6003E2E")]
	[Address(RVA = "0x5A9BBE0", Offset = "0x5A9ABE0", VA = "0x5A9BBE0")]
	public static bool IsValidTarget(ITargetable target)
	{
		return default(bool);
	}

	[Token(Token = "0x6003E2F")]
	[Address(RVA = "0x5A9BCE0", Offset = "0x5A9ACE0", VA = "0x5A9BCE0")]
	public void SetTarget(ITargetable target, float focusDuration = 0f)
	{
	}

	[Token(Token = "0x6003E30")]
	[Address(RVA = "0x5A9BEF0", Offset = "0x5A9AEF0", VA = "0x5A9BEF0")]
	protected void AssignTarget(ITargetable target, float focusDuration = 0f)
	{
	}

	[Token(Token = "0x6003E31")]
	[Address(RVA = "0x5A9B550", Offset = "0x5A9A550", VA = "0x5A9B550")]
	public void ClearTarget()
	{
	}

	[Token(Token = "0x6003E32")]
	[Address(RVA = "0x5A9C020", Offset = "0x5A9B020", VA = "0x5A9C020")]
	public void SetDetectRange(float range)
	{
	}

	[Token(Token = "0x6003E33")]
	[Address(RVA = "0x5A9C040", Offset = "0x5A9B040", VA = "0x5A9C040")]
	public ITargetable GetNearestEnemy()
	{
		return null;
	}

	[Token(Token = "0x6003E34")]
	[Address(RVA = "0x5A9C450", Offset = "0x5A9B450", VA = "0x5A9C450")]
	public void TargetNearestEnemy(float focusDuration = 0f)
	{
	}

	[Token(Token = "0x6003E35")]
	[Address(RVA = "0x5A9C480", Offset = "0x5A9B480", VA = "0x5A9C480")]
	protected void UpdateTargeting()
	{
	}

	[Token(Token = "0x6003E36")]
	[Address(RVA = "0x5A9C840", Offset = "0x5A9B840", VA = "0x5A9C840")]
	public void MoveTo(Vector3 position, float range, bool ignoreEnemies = false)
	{
	}

	[Token(Token = "0x6003E37")]
	[Address(RVA = "0x5A9CA20", Offset = "0x5A9BA20", VA = "0x5A9CA20")]
	public void MoveToTarget(ITargetable target, float range, bool ignoreEnemies = false)
	{
	}

	[Token(Token = "0x6003E38")]
	[Address(RVA = "0x5A9C8A0", Offset = "0x5A9B8A0", VA = "0x5A9C8A0")]
	private void BeginMove(Vector3 position, float range, bool ignoreEnemies)
	{
	}

	[Token(Token = "0x6003E39")]
	[Address(RVA = "0x5A9CC20", Offset = "0x5A9BC20", VA = "0x5A9CC20")]
	protected void UpdateMoveTarget()
	{
	}

	[Token(Token = "0x6003E3A")]
	[Address(RVA = "0x5A9CDC0", Offset = "0x5A9BDC0", VA = "0x5A9CDC0")]
	public void IdleFor(float time = 1f / 0f)
	{
	}

	[Token(Token = "0x6003E3B")]
	[Address(RVA = "0x5A9D050", Offset = "0x5A9C050", VA = "0x5A9D050", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6003E3C")]
	[Address(RVA = "0x5A9D0A0", Offset = "0x5A9C0A0", VA = "0x5A9D0A0", Slot = "5")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x6003E3D")]
	[Address(RVA = "0x5A9D0B0", Offset = "0x5A9C0B0", VA = "0x5A9D0B0", Slot = "6")]
	protected virtual void FixedUpdate()
	{
	}

	[Token(Token = "0x6003E3E")]
	[Address(RVA = "0x5A9D0C0", Offset = "0x5A9C0C0", VA = "0x5A9D0C0", Slot = "7")]
	protected virtual float GetAgentSpeed()
	{
		return default(float);
	}

	[Token(Token = "0x6003E3F")]
	[Address(RVA = "0x5A9B960", Offset = "0x5A9A960", VA = "0x5A9B960")]
	protected void CreateAgent(CapsuleCollider collider, float acceleration, ObstacleAvoidanceType obstacleAvoidance)
	{
	}

	[Token(Token = "0x6003E40")]
	[Address(RVA = "0x5A9D150", Offset = "0x5A9C150", VA = "0x5A9D150")]
	protected void SetAgentDestination(Vector3 position)
	{
	}

	[Token(Token = "0x6003E41")]
	[Address(RVA = "0x5A9D1D0", Offset = "0x5A9C1D0", VA = "0x5A9D1D0")]
	protected Vector3 GetAgentNavDirection(Vector3 target)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003E42")]
	[Address(RVA = "0x5A9D680", Offset = "0x5A9C680", VA = "0x5A9D680")]
	private Vector3 GetDirectionTowardsNavMesh()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003E43")]
	[Address(RVA = "0x5A9D9C0", Offset = "0x5A9C9C0", VA = "0x5A9D9C0")]
	private bool SampleAgentMesh(Vector3 position, out NavMeshHit hit)
	{
		return default(bool);
	}

	[Token(Token = "0x6003E44")]
	[Address(RVA = "0x5A9DA20", Offset = "0x5A9CA20", VA = "0x5A9DA20", Slot = "8")]
	protected virtual void RefreshAgent()
	{
	}

	[Token(Token = "0x6003E45")]
	[Address(RVA = "0x5A9DD20", Offset = "0x5A9CD20", VA = "0x5A9DD20")]
	private void SyncAgentPosition(Vector3 position)
	{
	}

	[Token(Token = "0x6003E46")]
	[Address(RVA = "0x5A9DD40", Offset = "0x5A9CD40", VA = "0x5A9DD40")]
	protected float GetTargetAngle(Vector3 direction)
	{
		return default(float);
	}

	[Token(Token = "0x6003E47")]
	[Address(RVA = "0x5A9DFD0", Offset = "0x5A9CFD0", VA = "0x5A9DFD0")]
	protected Quaternion GetTargetRotation(float angle)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6003E48")]
	[Address(RVA = "0x5A9E010", Offset = "0x5A9D010", VA = "0x5A9E010")]
	protected Vector3 GetTargetDirection(float angle)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003E49")]
	[Address(RVA = "0x5A9E190", Offset = "0x5A9D190", VA = "0x5A9E190")]
	public BaseAIController()
	{
	}
}
