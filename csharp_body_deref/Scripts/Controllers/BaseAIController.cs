// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.BaseAIController
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Controllers/BaseAIController.c
// Prior real C# source (older reference): Assets/Scripts/Controllers/BaseAIController.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.AI;

namespace Controllers;

[Token(Token = "0x2000619")]
internal class BaseAIController : MonoBehaviour
{
	[Token(Token = "0x4001B0B")]
	protected const float NavMeshSearchRange = 100f;

	[Token(Token = "0x4001B0C")]
	protected const float ReacquireDelay = 1f;

	[Token(Token = "0x4001B0D")]
	protected const float ReacquireFailDelay = 5f;

	[Token(Token = "0x4001B0E")]
	protected const float RepathDelay = 0.2f;

	[Token(Token = "0x4001B0F")]
	[FieldOffset(Offset = "0x20")]
	protected BaseCharacter _character;

	[Token(Token = "0x4001B10")]
	[FieldOffset(Offset = "0x28")]
	public bool _usePathfinding;

	[Token(Token = "0x4001B11")]
	[FieldOffset(Offset = "0x30")]
	protected NavMeshAgent _agent;

	[Token(Token = "0x4001B12")]
	[FieldOffset(Offset = "0x38")]
	protected bool _setTargetThisFrame;

	[Token(Token = "0x4001B13")]
	[FieldOffset(Offset = "0x3C")]
	private float _reacquireTimeLeft;

	[Token(Token = "0x4001B14")]
	[FieldOffset(Offset = "0x40")]
	private float _repathTimeLeft;

	[Token(Token = "0x4001B15")]
	[FieldOffset(Offset = "0x44")]
	public float DetectRange;

	[Token(Token = "0x4001B16")]
	[FieldOffset(Offset = "0x48")]
	public float FocusTime;

	[Token(Token = "0x4001B17")]
	[FieldOffset(Offset = "0x4C")]
	public float FocusRange;

	[Token(Token = "0x4001B18")]
	[FieldOffset(Offset = "0x50")]
	protected ITargetable _enemy;

	[Token(Token = "0x4001B19")]
	[FieldOffset(Offset = "0x58")]
	protected float _focusTimeLeft;

	[Token(Token = "0x4001B1A")]
	[FieldOffset(Offset = "0x5C")]
	protected float _updateEnemyTimeLeft;

	[Token(Token = "0x4001B1B")]
	[FieldOffset(Offset = "0x60")]
	protected bool _automaticTargeting;

	[Token(Token = "0x4001B1C")]
	[FieldOffset(Offset = "0x64")]
	protected Vector3 _moveToPosition;

	[Token(Token = "0x4001B1D")]
	[FieldOffset(Offset = "0x70")]
	protected bool _moveToActive;

	[Token(Token = "0x4001B1E")]
	[FieldOffset(Offset = "0x74")]
	protected float _moveToRange;

	[Token(Token = "0x4001B1F")]
	[FieldOffset(Offset = "0x78")]
	protected bool _moveToIgnoreEnemies;

	[Token(Token = "0x4001B20")]
	[FieldOffset(Offset = "0x80")]
	protected ITargetable _moveToTarget;

	[Token(Token = "0x4001B21")]
	[FieldOffset(Offset = "0x88")]
	protected float _idleTimeLeft;

	[Token(Token = "0x4001B22")]
	[FieldOffset(Offset = "0x8C")]
	private bool _aiEnabled;

	[Token(Token = "0x17000A9B")]
	public bool AIEnabled
	{
		[Token(Token = "0x6003B99")]
		[Address(RVA = "0x1CD39F0", Offset = "0x1CD1FF0", VA = "0x181CD39F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003B9A")]
		[Address(RVA = "0x20F2720", Offset = "0x20F0D20", VA = "0x1820F2720")]
		set
		{
		}
	}

	[Token(Token = "0x17000A9C")]
	public bool IsWalking
	{
		[Token(Token = "0x6003B9B")]
		[Address(RVA = "0x20F2660", Offset = "0x20F0C60", VA = "0x1820F2660")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003B9C")]
		[Address(RVA = "0x20F2860", Offset = "0x20F0E60", VA = "0x1820F2860")]
		set
		{
		}
	}

	[Token(Token = "0x17000A9D")]
	public bool UsePathfinding
	{
		[Token(Token = "0x6003B9D")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6003B9E")]
		[Address(RVA = "0x20F2980", Offset = "0x20F0F80", VA = "0x1820F2980")]
		set
		{
		}
	}

	[Token(Token = "0x6003B9F")]
	[Address(RVA = "0x20F18A0", Offset = "0x20EFEA0", VA = "0x1820F18A0")]
	public ITargetable GetTarget()
	{
		return null;
	}

	[Token(Token = "0x6003BA0")]
	[Address(RVA = "0x20F1A00", Offset = "0x20F0000", VA = "0x1820F1A00")]
	public static bool IsValidTarget(ITargetable target)
	{
		return default(bool);
	}

	[Token(Token = "0x6003BA1")]
	[Address(RVA = "0x20F2050", Offset = "0x20F0650", VA = "0x1820F2050")]
	public void SetTarget(ITargetable target, float focusDuration = 0f)
	{
	}

	[Token(Token = "0x6003BA2")]
	[Address(RVA = "0x20F04F0", Offset = "0x20EEAF0", VA = "0x1820F04F0")]
	protected void AssignTarget(ITargetable target, float focusDuration = 0f)
	{
	}

	[Token(Token = "0x6003BA3")]
	[Address(RVA = "0x20F0740", Offset = "0x20EED40", VA = "0x1820F0740")]
	public void ClearTarget()
	{
	}

	[Token(Token = "0x6003BA4")]
	[Address(RVA = "0x20F2030", Offset = "0x20F0630", VA = "0x1820F2030")]
	public void SetDetectRange(float range)
	{
	}

	[Token(Token = "0x6003BA5")]
	[Address(RVA = "0x20F1150", Offset = "0x20EF750", VA = "0x1820F1150")]
	public ITargetable GetNearestEnemy()
	{
		return null;
	}

	[Token(Token = "0x6003BA6")]
	[Address(RVA = "0x20F2160", Offset = "0x20F0760", VA = "0x1820F2160")]
	public void TargetNearestEnemy(float focusDuration = 0f)
	{
	}

	[Token(Token = "0x6003BA7")]
	[Address(RVA = "0x20F2380", Offset = "0x20F0980", VA = "0x1820F2380")]
	protected void UpdateTargeting()
	{
	}

	[Token(Token = "0x6003BA8")]
	[Address(RVA = "0x20F1BE0", Offset = "0x20F01E0", VA = "0x1820F1BE0")]
	public void MoveTo(Vector3 position, float range, bool ignoreEnemies = false)
	{
	}

	[Token(Token = "0x6003BA9")]
	[Address(RVA = "0x20F1AB0", Offset = "0x20F00B0", VA = "0x1820F1AB0")]
	public void MoveToTarget(ITargetable target, float range, bool ignoreEnemies = false)
	{
	}

	[Token(Token = "0x6003BAA")]
	[Address(RVA = "0x20F0600", Offset = "0x20EEC00", VA = "0x1820F0600")]
	private void BeginMove(Vector3 position, float range, bool ignoreEnemies)
	{
	}

	[Token(Token = "0x6003BAB")]
	[Address(RVA = "0x20F2230", Offset = "0x20F0830", VA = "0x1820F2230")]
	protected void UpdateMoveTarget()
	{
	}

	[Token(Token = "0x6003BAC")]
	[Address(RVA = "0x20F18D0", Offset = "0x20EFED0", VA = "0x1820F18D0")]
	public void IdleFor(float time = 1f / 0f)
	{
	}

	[Token(Token = "0x6003BAD")]
	[Address(RVA = "0x20F05B0", Offset = "0x20EEBB0", VA = "0x1820F05B0", Slot = "4")]
	protected virtual void Awake()
	{
	}

	[Token(Token = "0x6003BAE")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	protected virtual void Start()
	{
	}

	[Token(Token = "0x6003BAF")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "6")]
	protected virtual void FixedUpdate()
	{
	}

	[Token(Token = "0x6003BB0")]
	[Address(RVA = "0x20F0E00", Offset = "0x20EF400", VA = "0x1820F0E00", Slot = "7")]
	protected virtual float GetAgentSpeed()
	{
		return default(float);
	}

	[Token(Token = "0x6003BB1")]
	[Address(RVA = "0x20F07E0", Offset = "0x20EEDE0", VA = "0x1820F07E0")]
	protected void CreateAgent(CapsuleCollider collider, float acceleration, ObstacleAvoidanceType obstacleAvoidance)
	{
	}

	[Token(Token = "0x6003BB2")]
	[Address(RVA = "0x20F1FB0", Offset = "0x20F05B0", VA = "0x1820F1FB0")]
	protected void SetAgentDestination(Vector3 position)
	{
	}

	[Token(Token = "0x6003BB3")]
	[Address(RVA = "0x20F0A80", Offset = "0x20EF080", VA = "0x1820F0A80")]
	protected Vector3 GetAgentNavDirection(Vector3 target)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003BB4")]
	[Address(RVA = "0x20F0EB0", Offset = "0x20EF4B0", VA = "0x1820F0EB0")]
	private Vector3 GetDirectionTowardsNavMesh()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003BB5")]
	[Address(RVA = "0x20F1F20", Offset = "0x20F0520", VA = "0x1820F1F20")]
	private bool SampleAgentMesh(Vector3 position, out NavMeshHit hit)
	{
		return default(bool);
	}

	[Token(Token = "0x6003BB6")]
	[Address(RVA = "0x20F1C60", Offset = "0x20F0260", VA = "0x1820F1C60", Slot = "8")]
	protected virtual void RefreshAgent()
	{
	}

	[Token(Token = "0x6003BB7")]
	[Address(RVA = "0x20F2120", Offset = "0x20F0720", VA = "0x1820F2120")]
	private void SyncAgentPosition(Vector3 position)
	{
	}

	[Token(Token = "0x6003BB8")]
	[Address(RVA = "0x20F1550", Offset = "0x20EFB50", VA = "0x1820F1550")]
	protected float GetTargetAngle(Vector3 direction)
	{
		return default(float);
	}

	[Token(Token = "0x6003BB9")]
	[Address(RVA = "0x20F1850", Offset = "0x20EFE50", VA = "0x1820F1850")]
	protected Quaternion GetTargetRotation(float angle)
	{
		return default(Quaternion);
	}

	[Token(Token = "0x6003BBA")]
	[Address(RVA = "0x20F1770", Offset = "0x20EFD70", VA = "0x1820F1770")]
	protected Vector3 GetTargetDirection(float angle)
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003BBB")]
	[Address(RVA = "0x20F2630", Offset = "0x20F0C30", VA = "0x1820F2630")]
	public BaseAIController()
	{
	}
}
