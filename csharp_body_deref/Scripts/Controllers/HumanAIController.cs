using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.AI;

namespace Controllers;

[Token(Token = "0x2000485")]
internal class HumanAIController : BaseAIController, IHumanController
{
	[Token(Token = "0x4001403")]
	private const float WalkMovementScale = 0.25f;

	[Token(Token = "0x4001404")]
	[FieldOffset(Offset = "0x28")]
	protected Human _human;

	[Token(Token = "0x4001405")]
	[FieldOffset(Offset = "0x30")]
	public float DetectRange;

	[Token(Token = "0x4001406")]
	[FieldOffset(Offset = "0x0")]
	protected static LayerMask HookMask;

	[Token(Token = "0x4001407")]
	[FieldOffset(Offset = "0x34")]
	protected float _movingLeft;

	[Token(Token = "0x4001408")]
	[FieldOffset(Offset = "0x38")]
	protected Vector3 AimDirection;

	[Token(Token = "0x4001409")]
	[FieldOffset(Offset = "0x44")]
	protected Vector3 AimPoint;

	[Token(Token = "0x400140A")]
	[FieldOffset(Offset = "0x50")]
	protected bool _usingGas;

	[Token(Token = "0x400140B")]
	[FieldOffset(Offset = "0x51")]
	protected bool _hookingLeft;

	[Token(Token = "0x400140C")]
	[FieldOffset(Offset = "0x52")]
	protected bool _hookingRight;

	[Token(Token = "0x400140D")]
	[FieldOffset(Offset = "0x58")]
	protected ITargetable _target;

	[Token(Token = "0x400140E")]
	[FieldOffset(Offset = "0x60")]
	public Vector3 TargetPosition;

	[Token(Token = "0x400140F")]
	[FieldOffset(Offset = "0x6C")]
	public Vector3 TargetDirection;

	[Token(Token = "0x4001410")]
	[FieldOffset(Offset = "0x78")]
	protected Vector3? _targetLastPosition;

	[Token(Token = "0x4001411")]
	[FieldOffset(Offset = "0x88")]
	public Vector3 TargetVelocity;

	[Token(Token = "0x4001412")]
	[FieldOffset(Offset = "0x98")]
	public HumanAIState AIState;

	[Token(Token = "0x4001413")]
	[FieldOffset(Offset = "0xA0")]
	public HumanAICallback Callbacks;

	[Token(Token = "0x4001414")]
	[FieldOffset(Offset = "0xA8")]
	public Dictionary<string, HumanAIState> AIStates;

	[Token(Token = "0x4001415")]
	[FieldOffset(Offset = "0xB0")]
	public bool _usePathfinding;

	[Token(Token = "0x4001416")]
	[FieldOffset(Offset = "0xB8")]
	protected NavMeshAgent _agent;

	[Token(Token = "0x4001417")]
	[FieldOffset(Offset = "0xC0")]
	protected float _moveAngle;

	[Token(Token = "0x4001418")]
	[FieldOffset(Offset = "0xC4")]
	protected bool _setTargetThisFrame;

	[Token(Token = "0x4001419")]
	[FieldOffset(Offset = "0xC8")]
	private HashSet<HumanState> _illegalWeaponStates;

	[Token(Token = "0x1700093C")]
	public ITargetable Target
	{
		[Token(Token = "0x6003062")]
		[Address(RVA = "0x3E87020", Offset = "0x3E87020", VA = "0x3E87020")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003063")]
		[Address(RVA = "0x3E87030", Offset = "0x3E87030", VA = "0x3E87030")]
		set
		{
		}
	}

	[Token(Token = "0x6003064")]
	[Address(RVA = "0x3E87180", Offset = "0x3E87180", VA = "0x3E87180", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003065")]
	[Address(RVA = "0x3E872F0", Offset = "0x3E872F0", VA = "0x3E872F0", Slot = "5")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6003066")]
	[Address(RVA = "0x3E877C0", Offset = "0x3E877C0", VA = "0x3E877C0")]
	protected void BeforeFixedUpdate()
	{
	}

	[Token(Token = "0x6003067")]
	[Address(RVA = "0x3E87AC0", Offset = "0x3E87AC0", VA = "0x3E87AC0")]
	public ITargetable FindNearestEnemy()
	{
		return null;
	}

	[Token(Token = "0x6003068")]
	[Address(RVA = "0x3E87F60", Offset = "0x3E87F60", VA = "0x3E87F60")]
	protected void FixedUpdateTargetStatus()
	{
	}

	[Token(Token = "0x6003069")]
	[Address(RVA = "0x3E88170", Offset = "0x3E88170", VA = "0x3E88170", Slot = "6")]
	protected override void FixedUpdate()
	{
	}

	[Token(Token = "0x600306A")]
	[Address(RVA = "0x3E88240", Offset = "0x3E88240", VA = "0x3E88240")]
	protected bool CanMove()
	{
		return default(bool);
	}

	[Token(Token = "0x600306B")]
	[Address(RVA = "0x3E883C0", Offset = "0x3E883C0", VA = "0x3E883C0")]
	private bool IsSpin3Special()
	{
		return default(bool);
	}

	[Token(Token = "0x600306C")]
	[Address(RVA = "0x3E88440", Offset = "0x3E88440", VA = "0x3E88440", Slot = "7")]
	public bool MovingLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x600306D")]
	[Address(RVA = "0x3E88450", Offset = "0x3E88450", VA = "0x3E88450", Slot = "8")]
	public bool MovingRight()
	{
		return default(bool);
	}

	[Token(Token = "0x600306E")]
	[Address(RVA = "0x3E88460", Offset = "0x3E88460", VA = "0x3E88460", Slot = "9")]
	public bool UsingGas()
	{
		return default(bool);
	}

	[Token(Token = "0x600306F")]
	[Address(RVA = "0x3E88470", Offset = "0x3E88470", VA = "0x3E88470", Slot = "10")]
	public bool HookingLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x6003070")]
	[Address(RVA = "0x3E88480", Offset = "0x3E88480", VA = "0x3E88480", Slot = "11")]
	public bool HookingRight()
	{
		return default(bool);
	}

	[Token(Token = "0x6003071")]
	[Address(RVA = "0x3E88490", Offset = "0x3E88490", VA = "0x3E88490", Slot = "12")]
	public bool HookingBoth()
	{
		return default(bool);
	}

	[Token(Token = "0x6003072")]
	[Address(RVA = "0x3E884A0", Offset = "0x3E884A0", VA = "0x3E884A0", Slot = "13")]
	public Vector3 GetAimPoint()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003073")]
	[Address(RVA = "0x3E884B0", Offset = "0x3E884B0", VA = "0x3E884B0")]
	public void Move(Vector3? direction)
	{
	}

	[Token(Token = "0x6003074")]
	[Address(RVA = "0x3E88800", Offset = "0x3E88800", VA = "0x3E88800")]
	private float GetMovementScale()
	{
		return default(float);
	}

	[Token(Token = "0x6003075")]
	[Address(RVA = "0x3E88850", Offset = "0x3E88850", VA = "0x3E88850")]
	public void AimAt(Vector3? position)
	{
	}

	[Token(Token = "0x6003076")]
	[Address(RVA = "0x3E88950", Offset = "0x3E88950", VA = "0x3E88950")]
	public void Jump()
	{
	}

	[Token(Token = "0x6003077")]
	[Address(RVA = "0x3E889C0", Offset = "0x3E889C0", VA = "0x3E889C0")]
	public void HorseMount(bool mount = true)
	{
	}

	[Token(Token = "0x6003078")]
	[Address(RVA = "0x3E88C70", Offset = "0x3E88C70", VA = "0x3E88C70")]
	public void Dodge()
	{
	}

	[Token(Token = "0x6003079")]
	[Address(RVA = "0x3E88CD0", Offset = "0x3E88CD0", VA = "0x3E88CD0")]
	public void Reload()
	{
	}

	[Token(Token = "0x600307A")]
	[Address(RVA = "0x3E88D20", Offset = "0x3E88D20", VA = "0x3E88D20")]
	public void UseGas(bool useGas)
	{
	}

	[Token(Token = "0x600307B")]
	[Address(RVA = "0x3E88D30", Offset = "0x3E88D30", VA = "0x3E88D30")]
	public void HorseWalk(bool isWalk)
	{
	}

	[Token(Token = "0x600307C")]
	[Address(RVA = "0x3E88D50", Offset = "0x3E88D50", VA = "0x3E88D50")]
	public void Dash(Vector3 direction)
	{
	}

	[Token(Token = "0x600307D")]
	[Address(RVA = "0x3E88DE0", Offset = "0x3E88DE0", VA = "0x3E88DE0")]
	public void Reel(int reelAxis)
	{
	}

	[Token(Token = "0x600307E")]
	[Address(RVA = "0x3E88E30", Offset = "0x3E88E30", VA = "0x3E88E30")]
	public void LaunchHookLeft(Vector3 aimPoint)
	{
	}

	[Token(Token = "0x600307F")]
	[Address(RVA = "0x3E892E0", Offset = "0x3E892E0", VA = "0x3E892E0")]
	public void ReleaseHookLeft()
	{
	}

	[Token(Token = "0x6003080")]
	[Address(RVA = "0x3E892F0", Offset = "0x3E892F0", VA = "0x3E892F0")]
	public void LaunchHookRight(Vector3 aimPoint)
	{
	}

	[Token(Token = "0x6003081")]
	[Address(RVA = "0x3E89440", Offset = "0x3E89440", VA = "0x3E89440")]
	public void ReleaseHookRight()
	{
	}

	[Token(Token = "0x6003082")]
	[Address(RVA = "0x3E89450", Offset = "0x3E89450", VA = "0x3E89450")]
	public void ReleaseHookAll()
	{
	}

	[Token(Token = "0x6003083")]
	[Address(RVA = "0x3E88F80", Offset = "0x3E88F80", VA = "0x3E88F80")]
	protected void UpdateHookInput()
	{
	}

	[Token(Token = "0x6003084")]
	[Address(RVA = "0x3E89460", Offset = "0x3E89460", VA = "0x3E89460")]
	public void Attack(bool attackOn)
	{
	}

	[Token(Token = "0x6003085")]
	[Address(RVA = "0x3E895B0", Offset = "0x3E895B0", VA = "0x3E895B0")]
	public void ActivateSpecial(bool activate)
	{
	}

	[Token(Token = "0x6003086")]
	[Address(RVA = "0x3E89790", Offset = "0x3E89790", VA = "0x3E89790")]
	public float GetAgentNavAngle(Vector3 target)
	{
		return default(float);
	}

	[Token(Token = "0x6003087")]
	[Address(RVA = "0x3E89DF0", Offset = "0x3E89DF0", VA = "0x3E89DF0")]
	protected Vector3 GetDirectionTowardsNavMesh()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003088")]
	[Address(RVA = "0x3E8A0A0", Offset = "0x3E8A0A0", VA = "0x3E8A0A0")]
	protected float GetChaseAngleGivenDirection(Vector3 direction, bool useMoveAngle)
	{
		return default(float);
	}

	[Token(Token = "0x6003089")]
	[Address(RVA = "0x3E89DC0", Offset = "0x3E89DC0", VA = "0x3E89DC0")]
	public void SetAgentDestination(Vector3 position)
	{
	}

	[Token(Token = "0x600308A")]
	[Address(RVA = "0x3E8A1B0", Offset = "0x3E8A1B0", VA = "0x3E8A1B0")]
	public void RefreshAgent()
	{
	}

	[Token(Token = "0x600308B")]
	[Address(RVA = "0x3E8A3A0", Offset = "0x3E8A3A0", VA = "0x3E8A3A0")]
	public float GetChaseAngle(Vector3 position, bool useMoveAngle)
	{
		return default(float);
	}

	[Token(Token = "0x600308C")]
	[Address(RVA = "0x3E8A5F0", Offset = "0x3E8A5F0", VA = "0x3E8A5F0")]
	public void MoveToPosition()
	{
	}

	[Token(Token = "0x600308D")]
	[Address(RVA = "0x3E8A800", Offset = "0x3E8A800", VA = "0x3E8A800")]
	public void SwitchAIState(HumanAIState aiState)
	{
	}

	[Token(Token = "0x600308E")]
	[Address(RVA = "0x3E87760", Offset = "0x3E87760", VA = "0x3E87760")]
	public void SetAIState(string name, HumanAIState aiState)
	{
	}

	[Token(Token = "0x600308F")]
	[Address(RVA = "0x3E8A870", Offset = "0x3E8A870", VA = "0x3E8A870")]
	public bool HasAIState(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6003090")]
	[Address(RVA = "0x3E8A8C0", Offset = "0x3E8A8C0", VA = "0x3E8A8C0")]
	public HumanAIState GetAIState(string name)
	{
		return null;
	}

	[Token(Token = "0x6003091")]
	[Address(RVA = "0x3E8A910", Offset = "0x3E8A910", VA = "0x3E8A910")]
	public void MoveTo(Vector3 position, float range)
	{
	}

	[Token(Token = "0x6003092")]
	[Address(RVA = "0x3E8AA60", Offset = "0x3E8AA60", VA = "0x3E8AA60")]
	public void MoveToTarget(ITargetable targetable, float range)
	{
	}

	[Token(Token = "0x6003093")]
	[Address(RVA = "0x3E8AB90", Offset = "0x3E8AB90", VA = "0x3E8AB90")]
	public void Idle()
	{
	}

	[Token(Token = "0x6003094")]
	[Address(RVA = "0x3E8AC10", Offset = "0x3E8AC10", VA = "0x3E8AC10")]
	public HumanAIController()
	{
	}
}
