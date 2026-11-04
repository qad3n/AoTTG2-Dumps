// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.HumanAIController
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Controllers/HumanAIController.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace Controllers;

[Token(Token = "0x2000621")]
internal class HumanAIController : BaseAIController, IHumanController
{
	[Token(Token = "0x4001B75")]
	private const float WalkMovementScale = 0.25f;

	[Token(Token = "0x4001B76")]
	private const float MovementRecoveryDelay = 0.5f;

	[Token(Token = "0x4001B77")]
	[FieldOffset(Offset = "0x90")]
	protected Human _human;

	[Token(Token = "0x4001B78")]
	[FieldOffset(Offset = "0x0")]
	protected static LayerMask HookMask;

	[Token(Token = "0x4001B79")]
	[FieldOffset(Offset = "0x98")]
	protected float _movingLeft;

	[Token(Token = "0x4001B7A")]
	[FieldOffset(Offset = "0x9C")]
	protected Vector3 AimDirection;

	[Token(Token = "0x4001B7B")]
	[FieldOffset(Offset = "0xA8")]
	protected Vector3 AimPoint;

	[Token(Token = "0x4001B7C")]
	[FieldOffset(Offset = "0xB4")]
	protected bool _usingGas;

	[Token(Token = "0x4001B7D")]
	[FieldOffset(Offset = "0xB5")]
	protected bool _hookingLeft;

	[Token(Token = "0x4001B7E")]
	[FieldOffset(Offset = "0xB6")]
	protected bool _hookingRight;

	[Token(Token = "0x4001B7F")]
	[FieldOffset(Offset = "0xB8")]
	private Vector3 _targetPosition;

	[Token(Token = "0x4001B80")]
	[FieldOffset(Offset = "0xC4")]
	public Vector3 TargetDirection;

	[Token(Token = "0x4001B81")]
	[FieldOffset(Offset = "0xD0")]
	protected Vector3? _targetLastPosition;

	[Token(Token = "0x4001B82")]
	[FieldOffset(Offset = "0xE0")]
	private ITargetable _trackedTarget;

	[Token(Token = "0x4001B83")]
	[FieldOffset(Offset = "0xE8")]
	public Vector3 TargetVelocity;

	[Token(Token = "0x4001B84")]
	[FieldOffset(Offset = "0xF8")]
	public HumanAIState AIState;

	[Token(Token = "0x4001B85")]
	[FieldOffset(Offset = "0x100")]
	public HumanAICallback Callbacks;

	[Token(Token = "0x4001B86")]
	[FieldOffset(Offset = "0x108")]
	public Dictionary<string, HumanAIState> AIStates;

	[Token(Token = "0x4001B87")]
	[FieldOffset(Offset = "0x110")]
	protected float _moveAngle;

	[Token(Token = "0x4001B88")]
	[FieldOffset(Offset = "0x114")]
	private float _movementHeading;

	[Token(Token = "0x4001B89")]
	[FieldOffset(Offset = "0x118")]
	private Vector3? _lastMovementPosition;

	[Token(Token = "0x4001B8A")]
	[FieldOffset(Offset = "0x128")]
	private float _lowMovementSpeedTime;

	[Token(Token = "0x4001B8B")]
	[FieldOffset(Offset = "0x12C")]
	private float _recoveryTimeLeft;

	[Token(Token = "0x4001B8C")]
	[FieldOffset(Offset = "0x130")]
	private float _recoveryTurnAngle;

	[Token(Token = "0x4001B8D")]
	[FieldOffset(Offset = "0x138")]
	private HashSet<HumanState> _illegalWeaponStates;

	[Token(Token = "0x17000AA9")]
	public ITargetable Target
	{
		[Token(Token = "0x6003C22")]
		[Address(RVA = "0x20F18A0", Offset = "0x20EFEA0", VA = "0x1820F18A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003C23")]
		[Address(RVA = "0x2101AD0", Offset = "0x21000D0", VA = "0x182101AD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000AAA")]
	public Vector3 TargetPosition
	{
		[Token(Token = "0x6003C24")]
		[Address(RVA = "0x2101A80", Offset = "0x2100080", VA = "0x182101A80")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6003C25")]
		[Address(RVA = "0x2101AA0", Offset = "0x21000A0", VA = "0x182101AA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000AAB")]
	private bool CanRunCallbacks
	{
		[Token(Token = "0x6003C26")]
		[Address(RVA = "0x2101A50", Offset = "0x2100050", VA = "0x182101A50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003C27")]
	[Address(RVA = "0x20FEAD0", Offset = "0x20FD0D0", VA = "0x1820FEAD0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003C28")]
	[Address(RVA = "0x2100B10", Offset = "0x20FF110", VA = "0x182100B10", Slot = "5")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6003C29")]
	[Address(RVA = "0x20FEB60", Offset = "0x20FD160", VA = "0x1820FEB60")]
	protected void BeforeFixedUpdate()
	{
	}

	[Token(Token = "0x6003C2A")]
	[Address(RVA = "0x20FF4B0", Offset = "0x20FDAB0", VA = "0x1820FF4B0")]
	public ITargetable FindNearestEnemy()
	{
		return null;
	}

	[Token(Token = "0x6003C2B")]
	[Address(RVA = "0x20FF4C0", Offset = "0x20FDAC0", VA = "0x1820FF4C0")]
	protected void FixedUpdateTargetStatus()
	{
	}

	[Token(Token = "0x6003C2C")]
	[Address(RVA = "0x20FF7C0", Offset = "0x20FDDC0", VA = "0x1820FF7C0", Slot = "6")]
	protected override void FixedUpdate()
	{
	}

	[Token(Token = "0x6003C2D")]
	[Address(RVA = "0x2100C30", Offset = "0x20FF230", VA = "0x182100C30")]
	internal void StopInput()
	{
	}

	[Token(Token = "0x6003C2E")]
	[Address(RVA = "0x20FF150", Offset = "0x20FD750", VA = "0x1820FF150")]
	protected bool CanMove()
	{
		return default(bool);
	}

	[Token(Token = "0x6003C2F")]
	[Address(RVA = "0x21000D0", Offset = "0x20FE6D0", VA = "0x1821000D0")]
	private bool IsSpin3Special()
	{
		return default(bool);
	}

	[Token(Token = "0x6003C30")]
	[Address(RVA = "0x2100920", Offset = "0x20FEF20", VA = "0x182100920", Slot = "9")]
	public bool MovingLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x6003C31")]
	[Address(RVA = "0x2100930", Offset = "0x20FEF30", VA = "0x182100930", Slot = "10")]
	public bool MovingRight()
	{
		return default(bool);
	}

	[Token(Token = "0x6003C32")]
	[Address(RVA = "0x2101750", Offset = "0x20FFD50", VA = "0x182101750", Slot = "11")]
	public bool UsingGas()
	{
		return default(bool);
	}

	[Token(Token = "0x6003C33")]
	[Address(RVA = "0x20FFD90", Offset = "0x20FE390", VA = "0x1820FFD90", Slot = "12")]
	public bool HookingLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x6003C34")]
	[Address(RVA = "0x20FFDA0", Offset = "0x20FE3A0", VA = "0x1820FFDA0", Slot = "13")]
	public bool HookingRight()
	{
		return default(bool);
	}

	[Token(Token = "0x6003C35")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "14")]
	public bool HookingBoth()
	{
		return default(bool);
	}

	[Token(Token = "0x6003C36")]
	[Address(RVA = "0xB5B970", Offset = "0xB59F70", VA = "0x180B5B970", Slot = "15")]
	public Vector3 GetAimPoint()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003C37")]
	[Address(RVA = "0x2100550", Offset = "0x20FEB50", VA = "0x182100550")]
	public void Move(Vector3? direction)
	{
	}

	[Token(Token = "0x6003C38")]
	[Address(RVA = "0x20FFCD0", Offset = "0x20FE2D0", VA = "0x1820FFCD0")]
	private float GetMovementScale()
	{
		return default(float);
	}

	[Token(Token = "0x6003C39")]
	[Address(RVA = "0x2100A50", Offset = "0x20FF050", VA = "0x182100A50")]
	private void ResetMovementRecovery()
	{
	}

	[Token(Token = "0x6003C3A")]
	[Address(RVA = "0x2101240", Offset = "0x20FF840", VA = "0x182101240")]
	private void UpdateMovementRecovery()
	{
	}

	[Token(Token = "0x6003C3B")]
	[Address(RVA = "0x20FE650", Offset = "0x20FCC50", VA = "0x1820FE650")]
	public void AimAt(Vector3? position)
	{
	}

	[Token(Token = "0x6003C3C")]
	[Address(RVA = "0x2100170", Offset = "0x20FE770", VA = "0x182100170")]
	public void Jump()
	{
	}

	[Token(Token = "0x6003C3D")]
	[Address(RVA = "0x20FFDB0", Offset = "0x20FE3B0", VA = "0x1820FFDB0")]
	public void HorseMount(bool mount = true)
	{
	}

	[Token(Token = "0x6003C3E")]
	[Address(RVA = "0x20FF430", Offset = "0x20FDA30", VA = "0x1820FF430")]
	public void Dodge()
	{
	}

	[Token(Token = "0x6003C3F")]
	[Address(RVA = "0x21009D0", Offset = "0x20FEFD0", VA = "0x1821009D0")]
	public void Reload()
	{
	}

	[Token(Token = "0x6003C40")]
	[Address(RVA = "0x2101740", Offset = "0x20FFD40", VA = "0x182101740")]
	public void UseGas(bool useGas)
	{
	}

	[Token(Token = "0x6003C41")]
	[Address(RVA = "0x2100010", Offset = "0x20FE610", VA = "0x182100010")]
	public void HorseWalk(bool isWalk)
	{
	}

	[Token(Token = "0x6003C42")]
	[Address(RVA = "0x20FF340", Offset = "0x20FD940", VA = "0x1820FF340")]
	public void Dash(Vector3 direction)
	{
	}

	[Token(Token = "0x6003C43")]
	[Address(RVA = "0x2100950", Offset = "0x20FEF50", VA = "0x182100950")]
	public void Reel(int reelAxis)
	{
	}

	[Token(Token = "0x6003C44")]
	[Address(RVA = "0x21001F0", Offset = "0x20FE7F0", VA = "0x1821001F0")]
	public void LaunchHookLeft(Vector3 aimPoint)
	{
	}

	[Token(Token = "0x6003C45")]
	[Address(RVA = "0x21009B0", Offset = "0x20FEFB0", VA = "0x1821009B0")]
	public void ReleaseHookLeft()
	{
	}

	[Token(Token = "0x6003C46")]
	[Address(RVA = "0x2100290", Offset = "0x20FE890", VA = "0x182100290")]
	public void LaunchHookRight(Vector3 aimPoint)
	{
	}

	[Token(Token = "0x6003C47")]
	[Address(RVA = "0x21009C0", Offset = "0x20FEFC0", VA = "0x1821009C0")]
	public void ReleaseHookRight()
	{
	}

	[Token(Token = "0x6003C48")]
	[Address(RVA = "0x21009A0", Offset = "0x20FEFA0", VA = "0x1821009A0")]
	public void ReleaseHookAll()
	{
	}

	[Token(Token = "0x6003C49")]
	[Address(RVA = "0x2100EC0", Offset = "0x20FF4C0", VA = "0x182100EC0")]
	protected void UpdateHookInput()
	{
	}

	[Token(Token = "0x6003C4A")]
	[Address(RVA = "0x20FE910", Offset = "0x20FCF10", VA = "0x1820FE910")]
	public void Attack(bool attackOn)
	{
	}

	[Token(Token = "0x6003C4B")]
	[Address(RVA = "0x20FE400", Offset = "0x20FCA00", VA = "0x1820FE400")]
	public void ActivateSpecial(bool activate)
	{
	}

	[Token(Token = "0x6003C4C")]
	[Address(RVA = "0x20FFA90", Offset = "0x20FE090", VA = "0x1820FFA90")]
	protected float GetChaseAngleGivenDirection(Vector3 direction, bool useMoveAngle)
	{
		return default(float);
	}

	[Token(Token = "0x6003C4D")]
	[Address(RVA = "0x20FFBA0", Offset = "0x20FE1A0", VA = "0x1820FFBA0")]
	public float GetChaseAngle(Vector3 position, bool useMoveAngle)
	{
		return default(float);
	}

	[Token(Token = "0x6003C4E")]
	[Address(RVA = "0x2100330", Offset = "0x20FE930", VA = "0x182100330")]
	public void MoveToPosition()
	{
	}

	[Token(Token = "0x6003C4F")]
	[Address(RVA = "0x2100D90", Offset = "0x20FF390", VA = "0x182100D90")]
	public void SwitchAIState(HumanAIState aiState)
	{
	}

	[Token(Token = "0x6003C50")]
	[Address(RVA = "0x2100AA0", Offset = "0x20FF0A0", VA = "0x182100AA0")]
	public void SetAIState(string name, HumanAIState aiState)
	{
	}

	[Token(Token = "0x6003C51")]
	[Address(RVA = "0x20FFD30", Offset = "0x20FE330", VA = "0x1820FFD30")]
	public bool HasAIState(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6003C52")]
	[Address(RVA = "0x20FFA30", Offset = "0x20FE030", VA = "0x1820FFA30")]
	public HumanAIState GetAIState(string name)
	{
		return null;
	}

	[Token(Token = "0x6003C53")]
	[Address(RVA = "0x20FE790", Offset = "0x20FCD90", VA = "0x1820FE790")]
	private void AssignHumanTarget(ITargetable target)
	{
	}

	[Token(Token = "0x6003C54")]
	[Address(RVA = "0x20FEF30", Offset = "0x20FD530", VA = "0x1820FEF30")]
	internal void BeginMove()
	{
	}

	[Token(Token = "0x6003C55")]
	[Address(RVA = "0x2100040", Offset = "0x20FE640", VA = "0x182100040")]
	public void Idle()
	{
	}

	[Token(Token = "0x6003C56")]
	[Address(RVA = "0x20FF300", Offset = "0x20FD900", VA = "0x1820FF300")]
	internal void CompleteMove()
	{
	}

	[Token(Token = "0x6003C57")]
	[Address(RVA = "0x2101890", Offset = "0x20FFE90", VA = "0x182101890")]
	public HumanAIController()
	{
	}
}
