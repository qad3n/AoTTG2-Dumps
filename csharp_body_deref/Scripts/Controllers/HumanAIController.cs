// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.HumanAIController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/HumanAIController.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.AI;

namespace Controllers;

[Token(Token = "0x20004CA")]
internal class HumanAIController : BaseAIController, IHumanController
{
	[Token(Token = "0x4001514")]
	private const float WalkMovementScale = 0.25f;

	[Token(Token = "0x4001515")]
	[FieldOffset(Offset = "0x28")]
	protected Human _human;

	[Token(Token = "0x4001516")]
	[FieldOffset(Offset = "0x30")]
	public float DetectRange;

	[Token(Token = "0x4001517")]
	[FieldOffset(Offset = "0x0")]
	protected static LayerMask HookMask;

	[Token(Token = "0x4001518")]
	[FieldOffset(Offset = "0x34")]
	protected float _movingLeft;

	[Token(Token = "0x4001519")]
	[FieldOffset(Offset = "0x38")]
	protected Vector3 AimDirection;

	[Token(Token = "0x400151A")]
	[FieldOffset(Offset = "0x44")]
	protected Vector3 AimPoint;

	[Token(Token = "0x400151B")]
	[FieldOffset(Offset = "0x50")]
	protected bool _usingGas;

	[Token(Token = "0x400151C")]
	[FieldOffset(Offset = "0x51")]
	protected bool _hookingLeft;

	[Token(Token = "0x400151D")]
	[FieldOffset(Offset = "0x52")]
	protected bool _hookingRight;

	[Token(Token = "0x400151E")]
	[FieldOffset(Offset = "0x58")]
	protected ITargetable _target;

	[Token(Token = "0x400151F")]
	[FieldOffset(Offset = "0x60")]
	public Vector3 TargetPosition;

	[Token(Token = "0x4001520")]
	[FieldOffset(Offset = "0x6C")]
	public Vector3 TargetDirection;

	[Token(Token = "0x4001521")]
	[FieldOffset(Offset = "0x78")]
	protected Vector3? _targetLastPosition;

	[Token(Token = "0x4001522")]
	[FieldOffset(Offset = "0x88")]
	public Vector3 TargetVelocity;

	[Token(Token = "0x4001523")]
	[FieldOffset(Offset = "0x98")]
	public HumanAIState AIState;

	[Token(Token = "0x4001524")]
	[FieldOffset(Offset = "0xA0")]
	public HumanAICallback Callbacks;

	[Token(Token = "0x4001525")]
	[FieldOffset(Offset = "0xA8")]
	public Dictionary<string, HumanAIState> AIStates;

	[Token(Token = "0x4001526")]
	[FieldOffset(Offset = "0xB0")]
	public bool _usePathfinding;

	[Token(Token = "0x4001527")]
	[FieldOffset(Offset = "0xB8")]
	protected NavMeshAgent _agent;

	[Token(Token = "0x4001528")]
	[FieldOffset(Offset = "0xC0")]
	protected float _moveAngle;

	[Token(Token = "0x4001529")]
	[FieldOffset(Offset = "0xC4")]
	protected bool _setTargetThisFrame;

	[Token(Token = "0x400152A")]
	[FieldOffset(Offset = "0xC8")]
	private HashSet<HumanState> _illegalWeaponStates;

	[Token(Token = "0x170009A6")]
	public ITargetable Target
	{
		[Token(Token = "0x600326F")]
		[Address(RVA = "0x41935C0", Offset = "0x41935C0", VA = "0x41935C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003270")]
		[Address(RVA = "0x41935D0", Offset = "0x41935D0", VA = "0x41935D0")]
		set
		{
		}
	}

	[Token(Token = "0x6003271")]
	[Address(RVA = "0x4193720", Offset = "0x4193720", VA = "0x4193720", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003272")]
	[Address(RVA = "0x4193890", Offset = "0x4193890", VA = "0x4193890", Slot = "5")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6003273")]
	[Address(RVA = "0x4193D60", Offset = "0x4193D60", VA = "0x4193D60")]
	protected void BeforeFixedUpdate()
	{
	}

	[Token(Token = "0x6003274")]
	[Address(RVA = "0x4194060", Offset = "0x4194060", VA = "0x4194060")]
	public ITargetable FindNearestEnemy()
	{
		return null;
	}

	[Token(Token = "0x6003275")]
	[Address(RVA = "0x4194500", Offset = "0x4194500", VA = "0x4194500")]
	protected void FixedUpdateTargetStatus()
	{
	}

	[Token(Token = "0x6003276")]
	[Address(RVA = "0x4194710", Offset = "0x4194710", VA = "0x4194710", Slot = "6")]
	protected override void FixedUpdate()
	{
	}

	[Token(Token = "0x6003277")]
	[Address(RVA = "0x41947E0", Offset = "0x41947E0", VA = "0x41947E0")]
	protected bool CanMove()
	{
		return default(bool);
	}

	[Token(Token = "0x6003278")]
	[Address(RVA = "0x4194960", Offset = "0x4194960", VA = "0x4194960")]
	private bool IsSpin3Special()
	{
		return default(bool);
	}

	[Token(Token = "0x6003279")]
	[Address(RVA = "0x41949E0", Offset = "0x41949E0", VA = "0x41949E0", Slot = "7")]
	public bool MovingLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x600327A")]
	[Address(RVA = "0x41949F0", Offset = "0x41949F0", VA = "0x41949F0", Slot = "8")]
	public bool MovingRight()
	{
		return default(bool);
	}

	[Token(Token = "0x600327B")]
	[Address(RVA = "0x4194A00", Offset = "0x4194A00", VA = "0x4194A00", Slot = "9")]
	public bool UsingGas()
	{
		return default(bool);
	}

	[Token(Token = "0x600327C")]
	[Address(RVA = "0x4194A10", Offset = "0x4194A10", VA = "0x4194A10", Slot = "10")]
	public bool HookingLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x600327D")]
	[Address(RVA = "0x4194A20", Offset = "0x4194A20", VA = "0x4194A20", Slot = "11")]
	public bool HookingRight()
	{
		return default(bool);
	}

	[Token(Token = "0x600327E")]
	[Address(RVA = "0x4194A30", Offset = "0x4194A30", VA = "0x4194A30", Slot = "12")]
	public bool HookingBoth()
	{
		return default(bool);
	}

	[Token(Token = "0x600327F")]
	[Address(RVA = "0x4194A40", Offset = "0x4194A40", VA = "0x4194A40", Slot = "13")]
	public Vector3 GetAimPoint()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003280")]
	[Address(RVA = "0x4194A50", Offset = "0x4194A50", VA = "0x4194A50")]
	public void Move(Vector3? direction)
	{
	}

	[Token(Token = "0x6003281")]
	[Address(RVA = "0x4194DA0", Offset = "0x4194DA0", VA = "0x4194DA0")]
	private float GetMovementScale()
	{
		return default(float);
	}

	[Token(Token = "0x6003282")]
	[Address(RVA = "0x4194DF0", Offset = "0x4194DF0", VA = "0x4194DF0")]
	public void AimAt(Vector3? position)
	{
	}

	[Token(Token = "0x6003283")]
	[Address(RVA = "0x4194EF0", Offset = "0x4194EF0", VA = "0x4194EF0")]
	public void Jump()
	{
	}

	[Token(Token = "0x6003284")]
	[Address(RVA = "0x4194F60", Offset = "0x4194F60", VA = "0x4194F60")]
	public void HorseMount(bool mount = true)
	{
	}

	[Token(Token = "0x6003285")]
	[Address(RVA = "0x4195210", Offset = "0x4195210", VA = "0x4195210")]
	public void Dodge()
	{
	}

	[Token(Token = "0x6003286")]
	[Address(RVA = "0x4195270", Offset = "0x4195270", VA = "0x4195270")]
	public void Reload()
	{
	}

	[Token(Token = "0x6003287")]
	[Address(RVA = "0x41952C0", Offset = "0x41952C0", VA = "0x41952C0")]
	public void UseGas(bool useGas)
	{
	}

	[Token(Token = "0x6003288")]
	[Address(RVA = "0x41952D0", Offset = "0x41952D0", VA = "0x41952D0")]
	public void HorseWalk(bool isWalk)
	{
	}

	[Token(Token = "0x6003289")]
	[Address(RVA = "0x41952F0", Offset = "0x41952F0", VA = "0x41952F0")]
	public void Dash(Vector3 direction)
	{
	}

	[Token(Token = "0x600328A")]
	[Address(RVA = "0x4195380", Offset = "0x4195380", VA = "0x4195380")]
	public void Reel(int reelAxis)
	{
	}

	[Token(Token = "0x600328B")]
	[Address(RVA = "0x41953D0", Offset = "0x41953D0", VA = "0x41953D0")]
	public void LaunchHookLeft(Vector3 aimPoint)
	{
	}

	[Token(Token = "0x600328C")]
	[Address(RVA = "0x4195880", Offset = "0x4195880", VA = "0x4195880")]
	public void ReleaseHookLeft()
	{
	}

	[Token(Token = "0x600328D")]
	[Address(RVA = "0x4195890", Offset = "0x4195890", VA = "0x4195890")]
	public void LaunchHookRight(Vector3 aimPoint)
	{
	}

	[Token(Token = "0x600328E")]
	[Address(RVA = "0x41959E0", Offset = "0x41959E0", VA = "0x41959E0")]
	public void ReleaseHookRight()
	{
	}

	[Token(Token = "0x600328F")]
	[Address(RVA = "0x41959F0", Offset = "0x41959F0", VA = "0x41959F0")]
	public void ReleaseHookAll()
	{
	}

	[Token(Token = "0x6003290")]
	[Address(RVA = "0x4195520", Offset = "0x4195520", VA = "0x4195520")]
	protected void UpdateHookInput()
	{
	}

	[Token(Token = "0x6003291")]
	[Address(RVA = "0x4195A00", Offset = "0x4195A00", VA = "0x4195A00")]
	public void Attack(bool attackOn)
	{
	}

	[Token(Token = "0x6003292")]
	[Address(RVA = "0x4195B50", Offset = "0x4195B50", VA = "0x4195B50")]
	public void ActivateSpecial(bool activate)
	{
	}

	[Token(Token = "0x6003293")]
	[Address(RVA = "0x4195D30", Offset = "0x4195D30", VA = "0x4195D30")]
	public float GetAgentNavAngle(Vector3 target)
	{
		return default(float);
	}

	[Token(Token = "0x6003294")]
	[Address(RVA = "0x4196390", Offset = "0x4196390", VA = "0x4196390")]
	protected Vector3 GetDirectionTowardsNavMesh()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003295")]
	[Address(RVA = "0x4196640", Offset = "0x4196640", VA = "0x4196640")]
	protected float GetChaseAngleGivenDirection(Vector3 direction, bool useMoveAngle)
	{
		return default(float);
	}

	[Token(Token = "0x6003296")]
	[Address(RVA = "0x4196360", Offset = "0x4196360", VA = "0x4196360")]
	public void SetAgentDestination(Vector3 position)
	{
	}

	[Token(Token = "0x6003297")]
	[Address(RVA = "0x4196750", Offset = "0x4196750", VA = "0x4196750")]
	public void RefreshAgent()
	{
	}

	[Token(Token = "0x6003298")]
	[Address(RVA = "0x4196940", Offset = "0x4196940", VA = "0x4196940")]
	public float GetChaseAngle(Vector3 position, bool useMoveAngle)
	{
		return default(float);
	}

	[Token(Token = "0x6003299")]
	[Address(RVA = "0x4196B90", Offset = "0x4196B90", VA = "0x4196B90")]
	public void MoveToPosition()
	{
	}

	[Token(Token = "0x600329A")]
	[Address(RVA = "0x4196DA0", Offset = "0x4196DA0", VA = "0x4196DA0")]
	public void SwitchAIState(HumanAIState aiState)
	{
	}

	[Token(Token = "0x600329B")]
	[Address(RVA = "0x4193D00", Offset = "0x4193D00", VA = "0x4193D00")]
	public void SetAIState(string name, HumanAIState aiState)
	{
	}

	[Token(Token = "0x600329C")]
	[Address(RVA = "0x4196E10", Offset = "0x4196E10", VA = "0x4196E10")]
	public bool HasAIState(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600329D")]
	[Address(RVA = "0x4196E60", Offset = "0x4196E60", VA = "0x4196E60")]
	public HumanAIState GetAIState(string name)
	{
		return null;
	}

	[Token(Token = "0x600329E")]
	[Address(RVA = "0x4196EB0", Offset = "0x4196EB0", VA = "0x4196EB0")]
	public void MoveTo(Vector3 position, float range)
	{
	}

	[Token(Token = "0x600329F")]
	[Address(RVA = "0x4197000", Offset = "0x4197000", VA = "0x4197000")]
	public void MoveToTarget(ITargetable targetable, float range)
	{
	}

	[Token(Token = "0x60032A0")]
	[Address(RVA = "0x4197130", Offset = "0x4197130", VA = "0x4197130")]
	public void Idle()
	{
	}

	[Token(Token = "0x60032A1")]
	[Address(RVA = "0x41971B0", Offset = "0x41971B0", VA = "0x41971B0")]
	public HumanAIController()
	{
	}
}
