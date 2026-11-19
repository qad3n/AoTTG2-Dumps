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

namespace Controllers;

[Token(Token = "0x2000680")]
internal class HumanAIController : BaseAIController, IHumanController
{
	[Token(Token = "0x4001D18")]
	private const float WalkMovementScale = 0.25f;

	[Token(Token = "0x4001D19")]
	private const float MovementRecoveryDelay = 0.5f;

	[Token(Token = "0x4001D1A")]
	[FieldOffset(Offset = "0x90")]
	protected Human _human;

	[Token(Token = "0x4001D1B")]
	[FieldOffset(Offset = "0x0")]
	protected static LayerMask HookMask;

	[Token(Token = "0x4001D1C")]
	[FieldOffset(Offset = "0x98")]
	protected float _movingLeft;

	[Token(Token = "0x4001D1D")]
	[FieldOffset(Offset = "0x9C")]
	protected Vector3 AimDirection;

	[Token(Token = "0x4001D1E")]
	[FieldOffset(Offset = "0xA8")]
	protected Vector3 AimPoint;

	[Token(Token = "0x4001D1F")]
	[FieldOffset(Offset = "0xB4")]
	protected bool _usingGas;

	[Token(Token = "0x4001D20")]
	[FieldOffset(Offset = "0xB5")]
	protected bool _hookingLeft;

	[Token(Token = "0x4001D21")]
	[FieldOffset(Offset = "0xB6")]
	protected bool _hookingRight;

	[Token(Token = "0x4001D22")]
	[FieldOffset(Offset = "0xB8")]
	private Vector3 _targetPosition;

	[Token(Token = "0x4001D23")]
	[FieldOffset(Offset = "0xC4")]
	public Vector3 TargetDirection;

	[Token(Token = "0x4001D24")]
	[FieldOffset(Offset = "0xD0")]
	protected Vector3? _targetLastPosition;

	[Token(Token = "0x4001D25")]
	[FieldOffset(Offset = "0xE0")]
	private ITargetable _trackedTarget;

	[Token(Token = "0x4001D26")]
	[FieldOffset(Offset = "0xE8")]
	public Vector3 TargetVelocity;

	[Token(Token = "0x4001D27")]
	[FieldOffset(Offset = "0xF8")]
	public HumanAIState AIState;

	[Token(Token = "0x4001D28")]
	[FieldOffset(Offset = "0x100")]
	public HumanAICallback Callbacks;

	[Token(Token = "0x4001D29")]
	[FieldOffset(Offset = "0x108")]
	public Dictionary<string, HumanAIState> AIStates;

	[Token(Token = "0x4001D2A")]
	[FieldOffset(Offset = "0x110")]
	protected float _moveAngle;

	[Token(Token = "0x4001D2B")]
	[FieldOffset(Offset = "0x114")]
	private float _movementHeading;

	[Token(Token = "0x4001D2C")]
	[FieldOffset(Offset = "0x118")]
	private Vector3? _lastMovementPosition;

	[Token(Token = "0x4001D2D")]
	[FieldOffset(Offset = "0x128")]
	private float _lowMovementSpeedTime;

	[Token(Token = "0x4001D2E")]
	[FieldOffset(Offset = "0x12C")]
	private float _recoveryTimeLeft;

	[Token(Token = "0x4001D2F")]
	[FieldOffset(Offset = "0x130")]
	private float _recoveryTurnAngle;

	[Token(Token = "0x4001D30")]
	[FieldOffset(Offset = "0x138")]
	private HashSet<HumanState> _illegalWeaponStates;

	[Token(Token = "0x17000AF1")]
	public ITargetable Target
	{
		[Token(Token = "0x6003EB1")]
		[Address(RVA = "0x5AA72D0", Offset = "0x5AA62D0", VA = "0x5AA72D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6003EB2")]
		[Address(RVA = "0x5AA72E0", Offset = "0x5AA62E0", VA = "0x5AA72E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000AF2")]
	public Vector3 TargetPosition
	{
		[Token(Token = "0x6003EB3")]
		[Address(RVA = "0x5AA74B0", Offset = "0x5AA64B0", VA = "0x5AA74B0")]
		get
		{
			return default(Vector3);
		}
		[Token(Token = "0x6003EB4")]
		[Address(RVA = "0x5AA74D0", Offset = "0x5AA64D0", VA = "0x5AA74D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000AF3")]
	private bool CanRunCallbacks
	{
		[Token(Token = "0x6003EB5")]
		[Address(RVA = "0x5AA7500", Offset = "0x5AA6500", VA = "0x5AA7500")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003EB6")]
	[Address(RVA = "0x5AA7530", Offset = "0x5AA6530", VA = "0x5AA7530", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003EB7")]
	[Address(RVA = "0x5AA7590", Offset = "0x5AA6590", VA = "0x5AA7590", Slot = "5")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6003EB8")]
	[Address(RVA = "0x5AA7790", Offset = "0x5AA6790", VA = "0x5AA7790")]
	protected void BeforeFixedUpdate()
	{
	}

	[Token(Token = "0x6003EB9")]
	[Address(RVA = "0x5AA7B20", Offset = "0x5AA6B20", VA = "0x5AA7B20")]
	public ITargetable FindNearestEnemy()
	{
		return null;
	}

	[Token(Token = "0x6003EBA")]
	[Address(RVA = "0x5AA7B30", Offset = "0x5AA6B30", VA = "0x5AA7B30")]
	protected void FixedUpdateTargetStatus()
	{
	}

	[Token(Token = "0x6003EBB")]
	[Address(RVA = "0x5AA7DB0", Offset = "0x5AA6DB0", VA = "0x5AA7DB0", Slot = "6")]
	protected override void FixedUpdate()
	{
	}

	[Token(Token = "0x6003EBC")]
	[Address(RVA = "0x5AA8580", Offset = "0x5AA7580", VA = "0x5AA8580")]
	internal void StopInput()
	{
	}

	[Token(Token = "0x6003EBD")]
	[Address(RVA = "0x5AA86E0", Offset = "0x5AA76E0", VA = "0x5AA86E0")]
	protected bool CanMove()
	{
		return default(bool);
	}

	[Token(Token = "0x6003EBE")]
	[Address(RVA = "0x5AA8890", Offset = "0x5AA7890", VA = "0x5AA8890")]
	private bool IsSpin3Special()
	{
		return default(bool);
	}

	[Token(Token = "0x6003EBF")]
	[Address(RVA = "0x5AA8910", Offset = "0x5AA7910", VA = "0x5AA8910", Slot = "9")]
	public bool MovingLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x6003EC0")]
	[Address(RVA = "0x5AA8920", Offset = "0x5AA7920", VA = "0x5AA8920", Slot = "10")]
	public bool MovingRight()
	{
		return default(bool);
	}

	[Token(Token = "0x6003EC1")]
	[Address(RVA = "0x5AA8940", Offset = "0x5AA7940", VA = "0x5AA8940", Slot = "11")]
	public bool UsingGas()
	{
		return default(bool);
	}

	[Token(Token = "0x6003EC2")]
	[Address(RVA = "0x5AA8950", Offset = "0x5AA7950", VA = "0x5AA8950", Slot = "12")]
	public bool HookingLeft()
	{
		return default(bool);
	}

	[Token(Token = "0x6003EC3")]
	[Address(RVA = "0x5AA8960", Offset = "0x5AA7960", VA = "0x5AA8960", Slot = "13")]
	public bool HookingRight()
	{
		return default(bool);
	}

	[Token(Token = "0x6003EC4")]
	[Address(RVA = "0x5AA8970", Offset = "0x5AA7970", VA = "0x5AA8970", Slot = "14")]
	public bool HookingBoth()
	{
		return default(bool);
	}

	[Token(Token = "0x6003EC5")]
	[Address(RVA = "0x5AA8980", Offset = "0x5AA7980", VA = "0x5AA8980", Slot = "15")]
	public Vector3 GetAimPoint()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6003EC6")]
	[Address(RVA = "0x5AA89A0", Offset = "0x5AA79A0", VA = "0x5AA89A0")]
	public void Move(Vector3? direction)
	{
	}

	[Token(Token = "0x6003EC7")]
	[Address(RVA = "0x5AA8D10", Offset = "0x5AA7D10", VA = "0x5AA8D10")]
	private float GetMovementScale()
	{
		return default(float);
	}

	[Token(Token = "0x6003EC8")]
	[Address(RVA = "0x5AA8010", Offset = "0x5AA7010", VA = "0x5AA8010")]
	private void ResetMovementRecovery()
	{
	}

	[Token(Token = "0x6003EC9")]
	[Address(RVA = "0x5AA8060", Offset = "0x5AA7060", VA = "0x5AA8060")]
	private void UpdateMovementRecovery()
	{
	}

	[Token(Token = "0x6003ECA")]
	[Address(RVA = "0x5AA8D60", Offset = "0x5AA7D60", VA = "0x5AA8D60")]
	public void AimAt(Vector3? position)
	{
	}

	[Token(Token = "0x6003ECB")]
	[Address(RVA = "0x5AA8E60", Offset = "0x5AA7E60", VA = "0x5AA8E60")]
	public void Jump()
	{
	}

	[Token(Token = "0x6003ECC")]
	[Address(RVA = "0x5AA8ED0", Offset = "0x5AA7ED0", VA = "0x5AA8ED0")]
	public void HorseMount(bool mount = true)
	{
	}

	[Token(Token = "0x6003ECD")]
	[Address(RVA = "0x5AA9110", Offset = "0x5AA8110", VA = "0x5AA9110")]
	public void Dodge()
	{
	}

	[Token(Token = "0x6003ECE")]
	[Address(RVA = "0x5AA9170", Offset = "0x5AA8170", VA = "0x5AA9170")]
	public void Reload()
	{
	}

	[Token(Token = "0x6003ECF")]
	[Address(RVA = "0x5AA91C0", Offset = "0x5AA81C0", VA = "0x5AA91C0")]
	public void UseGas(bool useGas)
	{
	}

	[Token(Token = "0x6003ED0")]
	[Address(RVA = "0x5AA91D0", Offset = "0x5AA81D0", VA = "0x5AA91D0")]
	public void HorseWalk(bool isWalk)
	{
	}

	[Token(Token = "0x6003ED1")]
	[Address(RVA = "0x5AA91F0", Offset = "0x5AA81F0", VA = "0x5AA91F0")]
	public void Dash(Vector3 direction)
	{
	}

	[Token(Token = "0x6003ED2")]
	[Address(RVA = "0x5AA9280", Offset = "0x5AA8280", VA = "0x5AA9280")]
	public void Reel(int reelAxis)
	{
	}

	[Token(Token = "0x6003ED3")]
	[Address(RVA = "0x5AA92E0", Offset = "0x5AA82E0", VA = "0x5AA92E0")]
	public void LaunchHookLeft(Vector3 aimPoint)
	{
	}

	[Token(Token = "0x6003ED4")]
	[Address(RVA = "0x5AA97C0", Offset = "0x5AA87C0", VA = "0x5AA97C0")]
	public void ReleaseHookLeft()
	{
	}

	[Token(Token = "0x6003ED5")]
	[Address(RVA = "0x5AA97D0", Offset = "0x5AA87D0", VA = "0x5AA97D0")]
	public void LaunchHookRight(Vector3 aimPoint)
	{
	}

	[Token(Token = "0x6003ED6")]
	[Address(RVA = "0x5AA9930", Offset = "0x5AA8930", VA = "0x5AA9930")]
	public void ReleaseHookRight()
	{
	}

	[Token(Token = "0x6003ED7")]
	[Address(RVA = "0x5AA86D0", Offset = "0x5AA76D0", VA = "0x5AA86D0")]
	public void ReleaseHookAll()
	{
	}

	[Token(Token = "0x6003ED8")]
	[Address(RVA = "0x5AA9440", Offset = "0x5AA8440", VA = "0x5AA9440")]
	protected void UpdateHookInput()
	{
	}

	[Token(Token = "0x6003ED9")]
	[Address(RVA = "0x5AA9940", Offset = "0x5AA8940", VA = "0x5AA9940")]
	public void Attack(bool attackOn)
	{
	}

	[Token(Token = "0x6003EDA")]
	[Address(RVA = "0x5AA9AB0", Offset = "0x5AA8AB0", VA = "0x5AA9AB0")]
	public void ActivateSpecial(bool activate)
	{
	}

	[Token(Token = "0x6003EDB")]
	[Address(RVA = "0x5AA9C80", Offset = "0x5AA8C80", VA = "0x5AA9C80")]
	protected float GetChaseAngleGivenDirection(Vector3 direction, bool useMoveAngle)
	{
		return default(float);
	}

	[Token(Token = "0x6003EDC")]
	[Address(RVA = "0x5AA9D80", Offset = "0x5AA8D80", VA = "0x5AA9D80")]
	public float GetChaseAngle(Vector3 position, bool useMoveAngle)
	{
		return default(float);
	}

	[Token(Token = "0x6003EDD")]
	[Address(RVA = "0x5AAA020", Offset = "0x5AA9020", VA = "0x5AAA020")]
	public void MoveToPosition()
	{
	}

	[Token(Token = "0x6003EDE")]
	[Address(RVA = "0x5AAA1E0", Offset = "0x5AA91E0", VA = "0x5AAA1E0")]
	public void SwitchAIState(HumanAIState aiState)
	{
	}

	[Token(Token = "0x6003EDF")]
	[Address(RVA = "0x5AA7730", Offset = "0x5AA6730", VA = "0x5AA7730")]
	public void SetAIState(string name, HumanAIState aiState)
	{
	}

	[Token(Token = "0x6003EE0")]
	[Address(RVA = "0x5AA76D0", Offset = "0x5AA66D0", VA = "0x5AA76D0")]
	public bool HasAIState(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x6003EE1")]
	[Address(RVA = "0x5AAA320", Offset = "0x5AA9320", VA = "0x5AAA320")]
	public HumanAIState GetAIState(string name)
	{
		return null;
	}

	[Token(Token = "0x6003EE2")]
	[Address(RVA = "0x5AA7340", Offset = "0x5AA6340", VA = "0x5AA7340")]
	private void AssignHumanTarget(ITargetable target)
	{
	}

	[Token(Token = "0x6003EE3")]
	[Address(RVA = "0x5AAA370", Offset = "0x5AA9370", VA = "0x5AAA370")]
	internal void BeginMove()
	{
	}

	[Token(Token = "0x6003EE4")]
	[Address(RVA = "0x5AAA5A0", Offset = "0x5AA95A0", VA = "0x5AAA5A0")]
	public void Idle()
	{
	}

	[Token(Token = "0x6003EE5")]
	[Address(RVA = "0x5AAA6E0", Offset = "0x5AA96E0", VA = "0x5AAA6E0")]
	internal void CompleteMove()
	{
	}

	[Token(Token = "0x6003EE6")]
	[Address(RVA = "0x5AAA720", Offset = "0x5AA9720", VA = "0x5AAA720")]
	public HumanAIController()
	{
	}
}
