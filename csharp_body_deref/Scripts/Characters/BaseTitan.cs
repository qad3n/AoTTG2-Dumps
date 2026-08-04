// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseTitan
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BaseTitan.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BaseTitan.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using SimpleJSONFixed;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x200054F")]
internal abstract class BaseTitan : BaseCharacter
{
	[Token(Token = "0x2000550")]
	[CompilerGenerated]
	private sealed class _003CHandleSpawnCollisionCoroutine_003Ed__166 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001942")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001943")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001944")]
		[FieldOffset(Offset = "0x20")]
		public BaseTitan _003C_003E4__this;

		[Token(Token = "0x4001945")]
		[FieldOffset(Offset = "0x28")]
		public float maxSpeed;

		[Token(Token = "0x4001946")]
		[FieldOffset(Offset = "0x2C")]
		public float time;

		[Token(Token = "0x17000A3F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600375F")]
			[Address(RVA = "0x4210DD0", Offset = "0x4210DD0", VA = "0x4210DD0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A40")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003761")]
			[Address(RVA = "0x4210E20", Offset = "0x4210E20", VA = "0x4210E20", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600375C")]
		[Address(RVA = "0x4210AC0", Offset = "0x4210AC0", VA = "0x4210AC0")]
		[DebuggerHidden]
		public _003CHandleSpawnCollisionCoroutine_003Ed__166(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600375D")]
		[Address(RVA = "0x4210AE0", Offset = "0x4210AE0", VA = "0x4210AE0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x600375E")]
		[Address(RVA = "0x4210AF0", Offset = "0x4210AF0", VA = "0x4210AF0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003760")]
		[Address(RVA = "0x4210DE0", Offset = "0x4210DE0", VA = "0x4210DE0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x2000551")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__122 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001947")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001948")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001949")]
		[FieldOffset(Offset = "0x20")]
		public BaseTitan _003C_003E4__this;

		[Token(Token = "0x17000A41")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003765")]
			[Address(RVA = "0x4211150", Offset = "0x4211150", VA = "0x4211150", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000A42")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003767")]
			[Address(RVA = "0x42111A0", Offset = "0x42111A0", VA = "0x42111A0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003762")]
		[Address(RVA = "0x4210E30", Offset = "0x4210E30", VA = "0x4210E30")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__122(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003763")]
		[Address(RVA = "0x4210E50", Offset = "0x4210E50", VA = "0x4210E50", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003764")]
		[Address(RVA = "0x4210E60", Offset = "0x4210E60", VA = "0x4210E60", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003766")]
		[Address(RVA = "0x4211160", Offset = "0x4211160", VA = "0x4211160", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001903")]
	[FieldOffset(Offset = "0xF0")]
	public TitanState State;

	[Token(Token = "0x4001904")]
	[FieldOffset(Offset = "0xF8")]
	public BaseTitanComponentCache BaseTitanCache;

	[Token(Token = "0x4001905")]
	[FieldOffset(Offset = "0x100")]
	public TitanColliderToggler TitanColliderToggler;

	[Token(Token = "0x4001906")]
	[FieldOffset(Offset = "0x108")]
	public bool IsWalk;

	[Token(Token = "0x4001907")]
	[FieldOffset(Offset = "0x109")]
	public bool IsSprint;

	[Token(Token = "0x4001908")]
	[FieldOffset(Offset = "0x10A")]
	public bool IsSit;

	[Token(Token = "0x4001909")]
	[FieldOffset(Offset = "0x110")]
	public Human HoldHuman;

	[Token(Token = "0x400190A")]
	[FieldOffset(Offset = "0x118")]
	public bool HoldHumanLeft;

	[Token(Token = "0x400190B")]
	[FieldOffset(Offset = "0x11C")]
	public float Size;

	[Token(Token = "0x400190C")]
	[FieldOffset(Offset = "0x120")]
	public float ClimbCooldown;

	[Token(Token = "0x400190D")]
	[FieldOffset(Offset = "0x124")]
	public float StunTime;

	[Token(Token = "0x400190E")]
	[FieldOffset(Offset = "0x128")]
	public float ActionPause;

	[Token(Token = "0x400190F")]
	[FieldOffset(Offset = "0x12C")]
	public float AttackPause;

	[Token(Token = "0x4001910")]
	[FieldOffset(Offset = "0x130")]
	public float TurnPause;

	[Token(Token = "0x4001911")]
	[FieldOffset(Offset = "0x134")]
	public float MaxSprintStamina;

	[Token(Token = "0x4001912")]
	[FieldOffset(Offset = "0x138")]
	public float SprintStaminaRecover;

	[Token(Token = "0x4001913")]
	[FieldOffset(Offset = "0x13C")]
	public float SprintStaminaConsumption;

	[Token(Token = "0x4001914")]
	[FieldOffset(Offset = "0x140")]
	public float CurrentSprintStamina;

	[Token(Token = "0x4001915")]
	[FieldOffset(Offset = "0x148")]
	public ITargetable TargetEnemy;

	[Token(Token = "0x4001916")]
	[FieldOffset(Offset = "0x150")]
	protected BaseTitanAnimations BaseTitanAnimations;

	[Token(Token = "0x4001917")]
	[FieldOffset(Offset = "0x158")]
	private LayerMask TitanGroundMaskLayers;

	[Token(Token = "0x4001918")]
	[FieldOffset(Offset = "0x15C")]
	public float AttackSpeedMultiplier;

	[Token(Token = "0x4001919")]
	[FieldOffset(Offset = "0x160")]
	public float ConfusedTime;

	[Token(Token = "0x400191A")]
	[FieldOffset(Offset = "0x164")]
	public float PreviousAttackSpeedMultiplier;

	[Token(Token = "0x400191B")]
	[FieldOffset(Offset = "0x168")]
	public Dictionary<string, float> AttackSpeeds;

	[Token(Token = "0x400191C")]
	[FieldOffset(Offset = "0x170")]
	public float RunSpeedBase;

	[Token(Token = "0x400191D")]
	[FieldOffset(Offset = "0x174")]
	public float WalkSpeedBase;

	[Token(Token = "0x400191E")]
	[FieldOffset(Offset = "0x178")]
	public float RunSpeedPerLevel;

	[Token(Token = "0x400191F")]
	[FieldOffset(Offset = "0x17C")]
	public float WalkSpeedPerLevel;

	[Token(Token = "0x4001920")]
	[FieldOffset(Offset = "0x180")]
	public float JumpForce;

	[Token(Token = "0x4001921")]
	[FieldOffset(Offset = "0x184")]
	public float RotateSpeed;

	[Token(Token = "0x4001922")]
	[FieldOffset(Offset = "0x188")]
	public float TurnSpeed;

	[Token(Token = "0x4001923")]
	[FieldOffset(Offset = "0x18C")]
	public bool LeftArmDisabled;

	[Token(Token = "0x4001924")]
	[FieldOffset(Offset = "0x18D")]
	public bool RightArmDisabled;

	[Token(Token = "0x4001925")]
	[FieldOffset(Offset = "0x190")]
	protected Vector3 LastTargetDirection;

	[Token(Token = "0x4001926")]
	[FieldOffset(Offset = "0x19C")]
	protected Vector3 _wallClimbForward;

	[Token(Token = "0x4001927")]
	[FieldOffset(Offset = "0x1A8")]
	protected Quaternion _turnStartRotation;

	[Token(Token = "0x4001928")]
	[FieldOffset(Offset = "0x1B8")]
	protected Quaternion _turnTargetRotation;

	[Token(Token = "0x4001929")]
	[FieldOffset(Offset = "0x1C8")]
	public Vector3 _jumpDirection;

	[Token(Token = "0x400192A")]
	[FieldOffset(Offset = "0x1D4")]
	protected float _maxTurnTime;

	[Token(Token = "0x400192B")]
	[FieldOffset(Offset = "0x1D8")]
	protected float _currentTurnTime;

	[Token(Token = "0x400192C")]
	[FieldOffset(Offset = "0x1DC")]
	protected float _currentGroundDistance;

	[Token(Token = "0x400192D")]
	[FieldOffset(Offset = "0x1E0")]
	protected float _currentCrippleTime;

	[Token(Token = "0x400192E")]
	[FieldOffset(Offset = "0x1E4")]
	protected float _currentFallTotalTime;

	[Token(Token = "0x400192F")]
	[FieldOffset(Offset = "0x1E8")]
	protected float _currentFallStuckTime;

	[Token(Token = "0x4001930")]
	[FieldOffset(Offset = "0x1EC")]
	protected float _disableCooldownLeft;

	[Token(Token = "0x4001931")]
	[FieldOffset(Offset = "0x1F0")]
	protected float _checkGroundTimeLeft;

	[Token(Token = "0x4001932")]
	[FieldOffset(Offset = "0x1F4")]
	protected float _climbCooldownLeft;

	[Token(Token = "0x4001933")]
	[FieldOffset(Offset = "0x1F8")]
	protected Vector3 _startPosition;

	[Token(Token = "0x4001934")]
	[FieldOffset(Offset = "0x204")]
	public float _stateTimeLeft;

	[Token(Token = "0x4001935")]
	[FieldOffset(Offset = "0x208")]
	protected string _currentAttackAnimation;

	[Token(Token = "0x4001936")]
	[FieldOffset(Offset = "0x210")]
	protected string _currentAttack;

	[Token(Token = "0x4001937")]
	[FieldOffset(Offset = "0x218")]
	protected string _currentStateAnimation;

	[Token(Token = "0x4001938")]
	[FieldOffset(Offset = "0x220")]
	protected float _currentAttackSpeed;

	[Token(Token = "0x4001939")]
	[FieldOffset(Offset = "0x224")]
	protected int _currentAttackStage;

	[Token(Token = "0x400193A")]
	[FieldOffset(Offset = "0x228")]
	protected bool _needFreshCore;

	[Token(Token = "0x400193B")]
	[FieldOffset(Offset = "0x22C")]
	protected Vector3 _attackVelocity;

	[Token(Token = "0x400193C")]
	[FieldOffset(Offset = "0x238")]
	protected Vector3 _startCoreAttackPosition;

	[Token(Token = "0x400193D")]
	[FieldOffset(Offset = "0x244")]
	protected Vector3 _previousCoreLocalPosition;

	[Token(Token = "0x400193E")]
	[FieldOffset(Offset = "0x250")]
	protected Vector3 _furthestCoreLocalPosition;

	[Token(Token = "0x400193F")]
	[FieldOffset(Offset = "0x260")]
	protected Dictionary<string, float> _rootMotionAnimations;

	[Token(Token = "0x4001940")]
	[FieldOffset(Offset = "0x268")]
	public Dictionary<string, string> AttackAnimations;

	[Token(Token = "0x4001941")]
	[FieldOffset(Offset = "0x270")]
	public bool EnableAI;

	[Token(Token = "0x17000A31")]
	public virtual float DefaultCrippleTime
	{
		[Token(Token = "0x60036F8")]
		[Address(RVA = "0x420BCA0", Offset = "0x420BCA0", VA = "0x420BCA0", Slot = "110")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A32")]
	public virtual bool CanWallClimb
	{
		[Token(Token = "0x60036F9")]
		[Address(RVA = "0x420BCB0", Offset = "0x420BCB0", VA = "0x420BCB0", Slot = "111")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A33")]
	public virtual bool CanSprint
	{
		[Token(Token = "0x60036FA")]
		[Address(RVA = "0x420BCC0", Offset = "0x420BCC0", VA = "0x420BCC0", Slot = "112")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000A34")]
	protected override float GroundDistance
	{
		[Token(Token = "0x60036FB")]
		[Address(RVA = "0x420BCD0", Offset = "0x420BCD0", VA = "0x420BCD0", Slot = "61")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A35")]
	public override LayerMask GroundMask
	{
		[Token(Token = "0x60036FC")]
		[Address(RVA = "0x420BCE0", Offset = "0x420BCE0", VA = "0x420BCE0", Slot = "60")]
		get
		{
			return default(LayerMask);
		}
	}

	[Token(Token = "0x17000A36")]
	protected virtual float DefaultRunSpeed
	{
		[Token(Token = "0x60036FD")]
		[Address(RVA = "0x420BCF0", Offset = "0x420BCF0", VA = "0x420BCF0", Slot = "113")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A37")]
	protected virtual float DefaultWalkSpeed
	{
		[Token(Token = "0x60036FE")]
		[Address(RVA = "0x420BD00", Offset = "0x420BD00", VA = "0x420BD00", Slot = "114")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A38")]
	protected virtual float DefaultJumpForce
	{
		[Token(Token = "0x60036FF")]
		[Address(RVA = "0x420BD10", Offset = "0x420BD10", VA = "0x420BD10", Slot = "115")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A39")]
	protected virtual float DefaultRotateSpeed
	{
		[Token(Token = "0x6003700")]
		[Address(RVA = "0x420BD20", Offset = "0x420BD20", VA = "0x420BD20", Slot = "116")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A3A")]
	protected virtual float SizeMultiplier
	{
		[Token(Token = "0x6003701")]
		[Address(RVA = "0x420BD30", Offset = "0x420BD30", VA = "0x420BD30", Slot = "117")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A3B")]
	protected virtual float DisableCooldown
	{
		[Token(Token = "0x6003702")]
		[Address(RVA = "0x420BD40", Offset = "0x420BD40", VA = "0x420BD40", Slot = "118")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A3C")]
	protected override Vector3 Gravity
	{
		[Token(Token = "0x6003703")]
		[Address(RVA = "0x420BD50", Offset = "0x420BD50", VA = "0x420BD50", Slot = "58")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000A3D")]
	protected virtual float CheckGroundTime
	{
		[Token(Token = "0x6003704")]
		[Address(RVA = "0x420BDA0", Offset = "0x420BDA0", VA = "0x420BDA0", Slot = "119")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000A3E")]
	protected LayerMask MapObjectMask
	{
		[Token(Token = "0x6003705")]
		[Address(RVA = "0x420BDB0", Offset = "0x420BDB0", VA = "0x420BDB0")]
		get
		{
			return default(LayerMask);
		}
	}

	[Token(Token = "0x6003706")]
	[Address(RVA = "0x42003C0", Offset = "0x42003C0", VA = "0x42003C0", Slot = "120")]
	public virtual void Init(bool ai, string team, JSONNode data)
	{
	}

	[Token(Token = "0x6003707")]
	[Address(RVA = "0x420BE50", Offset = "0x420BE50", VA = "0x420BE50", Slot = "69")]
	protected override void CreateDetection()
	{
	}

	[Token(Token = "0x6003708")]
	[Address(RVA = "0x420BEC0", Offset = "0x420BEC0", VA = "0x420BEC0", Slot = "121")]
	protected virtual Dictionary<string, float> GetRootMotionAnimations()
	{
		return null;
	}

	[Token(Token = "0x6003709")]
	[Address(RVA = "0x420BF20", Offset = "0x420BF20", VA = "0x420BF20", Slot = "122")]
	public virtual bool IsGrabAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x600370A")]
	[Address(RVA = "0x420BF30", Offset = "0x420BF30", VA = "0x420BF30")]
	public float GetCurrentSpeed()
	{
		return default(float);
	}

	[Token(Token = "0x600370B")]
	[Address(RVA = "0x420BF60", Offset = "0x420BF60", VA = "0x420BF60", Slot = "123")]
	public virtual bool CanAction()
	{
		return default(bool);
	}

	[Token(Token = "0x600370C")]
	[Address(RVA = "0x420BFA0", Offset = "0x420BFA0", VA = "0x420BFA0", Slot = "124")]
	public virtual bool CanEmote()
	{
		return default(bool);
	}

	[Token(Token = "0x600370D")]
	[Address(RVA = "0x420C000", Offset = "0x420C000", VA = "0x420C000", Slot = "125")]
	public virtual bool CanStun()
	{
		return default(bool);
	}

	[Token(Token = "0x600370E")]
	[Address(RVA = "0x420C020", Offset = "0x420C020", VA = "0x420C020", Slot = "126")]
	public virtual void Jump(Vector3 direction)
	{
	}

	[Token(Token = "0x600370F")]
	[Address(RVA = "0x420C180", Offset = "0x420C180", VA = "0x420C180", Slot = "127")]
	public virtual void StartJump()
	{
	}

	[Token(Token = "0x6003710")]
	[Address(RVA = "0x420C310", Offset = "0x420C310", VA = "0x420C310", Slot = "128")]
	public virtual void Attack(string attack)
	{
	}

	[Token(Token = "0x6003711")]
	[Address(RVA = "0x420C420", Offset = "0x420C420", VA = "0x420C420", Slot = "129")]
	public virtual bool CanAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x6003712")]
	[Address(RVA = "0x420C440", Offset = "0x420C440", VA = "0x420C440", Slot = "130")]
	public virtual void ResetAttackState(string attack)
	{
	}

	[Token(Token = "0x6003713")]
	[Address(RVA = "0x420C550", Offset = "0x420C550", VA = "0x420C550")]
	public float GetAttackSpeed(string attack)
	{
		return default(float);
	}

	[Token(Token = "0x6003714")]
	[Address(RVA = "0x420C600", Offset = "0x420C600", VA = "0x420C600", Slot = "131")]
	public virtual void Kick()
	{
	}

	[Token(Token = "0x6003715")]
	[Address(RVA = "0x420C610", Offset = "0x420C610", VA = "0x420C610", Slot = "132")]
	public virtual void Stun()
	{
	}

	[Token(Token = "0x6003716")]
	[Address(RVA = "0x420C6F0", Offset = "0x420C6F0", VA = "0x420C6F0", Slot = "133")]
	public virtual void Run()
	{
	}

	[Token(Token = "0x6003717")]
	[Address(RVA = "0x420C7C0", Offset = "0x420C7C0", VA = "0x420C7C0", Slot = "134")]
	public virtual void Sprint()
	{
	}

	[Token(Token = "0x6003718")]
	[Address(RVA = "0x420C890", Offset = "0x420C890", VA = "0x420C890", Slot = "135")]
	public virtual void WallClimb()
	{
	}

	[Token(Token = "0x6003719")]
	[Address(RVA = "0x420C990", Offset = "0x420C990", VA = "0x420C990", Slot = "136")]
	public virtual void Eat()
	{
	}

	[Token(Token = "0x600371A")]
	[Address(RVA = "0x420C9A0", Offset = "0x420C9A0", VA = "0x420C9A0", Slot = "137")]
	public virtual void Walk()
	{
	}

	[Token(Token = "0x600371B")]
	[Address(RVA = "0x420CA70", Offset = "0x420CA70", VA = "0x420CA70", Slot = "138")]
	public virtual void Idle()
	{
	}

	[Token(Token = "0x600371C")]
	[Address(RVA = "0x420CAA0", Offset = "0x420CAA0", VA = "0x420CAA0", Slot = "139")]
	public virtual void Idle(float fadeTime)
	{
	}

	[Token(Token = "0x600371D")]
	[Address(RVA = "0x420CB00", Offset = "0x420CB00", VA = "0x420CB00", Slot = "140")]
	public virtual void IdleWait(float waitTime)
	{
	}

	[Token(Token = "0x600371E")]
	[Address(RVA = "0x420CB60", Offset = "0x420CB60", VA = "0x420CB60", Slot = "141")]
	public virtual void Land()
	{
	}

	[Token(Token = "0x600371F")]
	[Address(RVA = "0x420CD90", Offset = "0x420CD90", VA = "0x420CD90", Slot = "142")]
	public virtual void Fall()
	{
	}

	[Token(Token = "0x6003720")]
	[Address(RVA = "0x420CE50", Offset = "0x420CE50", VA = "0x420CE50", Slot = "143")]
	public virtual void Turn(Vector3 targetDirection)
	{
	}

	[Token(Token = "0x6003721")]
	[Address(RVA = "0x420D060", Offset = "0x420D060", VA = "0x420D060", Slot = "144")]
	public virtual void Blind()
	{
	}

	[Token(Token = "0x6003722")]
	[Address(RVA = "0x420D2E0", Offset = "0x420D2E0", VA = "0x420D2E0", Slot = "145")]
	public virtual void Cripple(float time = 0f)
	{
	}

	[Token(Token = "0x6003723")]
	[Address(RVA = "0x420D4C0", Offset = "0x420D4C0", VA = "0x420D4C0", Slot = "70")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x6003724")]
	[Address(RVA = "0x420D4D0", Offset = "0x420D4D0", VA = "0x420D4D0", Slot = "71")]
	public override void ForceAnimation(string animation, float fade)
	{
	}

	[Token(Token = "0x6003725")]
	[Address(RVA = "0x420D590", Offset = "0x420D590", VA = "0x420D590", Slot = "74")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__122))]
	protected override IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x6003726")]
	[Address(RVA = "0x4203790", Offset = "0x4203790", VA = "0x4203790")]
	protected float GetSpawnEffectSize()
	{
		return default(float);
	}

	[Token(Token = "0x6003727")]
	[Address(RVA = "0x420D600", Offset = "0x420D600", VA = "0x420D600", Slot = "146")]
	[PunRPC]
	public virtual void GrabRPC(int viewId, bool left, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003728")]
	[Address(RVA = "0x420D700", Offset = "0x420D700", VA = "0x420D700", Slot = "147")]
	[PunRPC]
	public virtual void UngrabRPC(int viewId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003729")]
	[Address(RVA = "0x420D7F0", Offset = "0x420D7F0", VA = "0x420D7F0", Slot = "148")]
	public virtual void Ungrab()
	{
	}

	[Token(Token = "0x600372A")]
	[Address(RVA = "0x420D8F0", Offset = "0x420D8F0", VA = "0x420D8F0", Slot = "149")]
	[PunRPC]
	public virtual void DecreaseAttackSpeedRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600372B")]
	[Address(RVA = "0x420D930", Offset = "0x420D930", VA = "0x420D930", Slot = "150")]
	public virtual void Confuse()
	{
	}

	[Token(Token = "0x600372C")]
	[Address(RVA = "0x420D9B0", Offset = "0x420D9B0", VA = "0x420D9B0")]
	protected void ResetAttackSpeed()
	{
	}

	[Token(Token = "0x600372D")]
	[Address(RVA = "0x4206050", Offset = "0x4206050", VA = "0x4206050", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x600372E")]
	[Address(RVA = "0x41FDF50", Offset = "0x41FDF50", VA = "0x41FDF50")]
	protected void StateAction(TitanState state, string animation, float fade = 0.1f, bool deactivateHitboxes = true)
	{
	}

	[Token(Token = "0x600372F")]
	[Address(RVA = "0x420C340", Offset = "0x420C340", VA = "0x420C340")]
	protected void StateAttack(string animation, float fade = 0.1f, bool deactivateHitboxes = true)
	{
	}

	[Token(Token = "0x6003730")]
	[Address(RVA = "0x41FFED0", Offset = "0x41FFED0", VA = "0x41FFED0")]
	protected void StateActionWithTime(TitanState state, string animation, float stateTime, float fade = 0.1f, bool deactivateHitboxes = true)
	{
	}

	[Token(Token = "0x6003731")]
	[Address(RVA = "0x420D9D0", Offset = "0x420D9D0", VA = "0x420D9D0")]
	protected void SetAnimationUpdateMode(bool always)
	{
	}

	[Token(Token = "0x6003732")]
	[Address(RVA = "0x4200DD0", Offset = "0x4200DD0", VA = "0x4200DD0", Slot = "90")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003733")]
	[Address(RVA = "0x41FD9A0", Offset = "0x41FD9A0", VA = "0x41FD9A0", Slot = "68")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x6003734")]
	[Address(RVA = "0x41FDAC0", Offset = "0x41FDAC0", VA = "0x41FDAC0", Slot = "151")]
	protected virtual void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x6003735")]
	[Address(RVA = "0x420D9F0", Offset = "0x420D9F0", VA = "0x420D9F0", Slot = "67")]
	public override Transform GetCameraAnchor()
	{
		return null;
	}

	[Token(Token = "0x6003736")]
	[Address(RVA = "0x420DA10", Offset = "0x420DA10", VA = "0x420DA10", Slot = "152")]
	protected virtual void UpdateDisableArm()
	{
	}

	[Token(Token = "0x6003737")]
	[Address(RVA = "0x420DA20", Offset = "0x420DA20", VA = "0x420DA20", Slot = "153")]
	public virtual void DisableArm(bool left)
	{
	}

	[Token(Token = "0x6003738")]
	[Address(RVA = "0x420DA30", Offset = "0x420DA30", VA = "0x420DA30", Slot = "154")]
	protected virtual void UpdateTurn()
	{
	}

	[Token(Token = "0x6003739")]
	[Address(RVA = "0x420DAD0", Offset = "0x420DAD0", VA = "0x420DAD0", Slot = "155")]
	protected virtual string GetSitIdleAniamtion()
	{
		return null;
	}

	[Token(Token = "0x600373A")]
	[Address(RVA = "0x420DB00", Offset = "0x420DB00", VA = "0x420DB00", Slot = "156")]
	protected virtual string GetSitFallAnimation()
	{
		return null;
	}

	[Token(Token = "0x600373B")]
	[Address(RVA = "0x420DB30", Offset = "0x420DB30", VA = "0x420DB30", Slot = "157")]
	protected virtual string GetSitUpAnimation()
	{
		return null;
	}

	[Token(Token = "0x600373C")]
	[Address(RVA = "0x420DB60", Offset = "0x420DB60", VA = "0x420DB60")]
	protected void SetDefaultVelocityLerp()
	{
	}

	[Token(Token = "0x600373D")]
	[Address(RVA = "0x42019E0", Offset = "0x42019E0", VA = "0x42019E0", Slot = "158")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x600373E")]
	[Address(RVA = "0x420DD90", Offset = "0x420DD90", VA = "0x420DD90", Slot = "159")]
	public virtual void StopWallClimb()
	{
	}

	[Token(Token = "0x600373F")]
	[Address(RVA = "0x420DDB0", Offset = "0x420DDB0", VA = "0x420DDB0", Slot = "102")]
	protected override void FixedUpdate()
	{
	}

	[Token(Token = "0x6003740")]
	[Address(RVA = "0x420F060", Offset = "0x420F060", VA = "0x420F060", Slot = "160")]
	protected virtual void FixedUpdateAttack()
	{
	}

	[Token(Token = "0x6003741")]
	[Address(RVA = "0x420EF40", Offset = "0x420EF40", VA = "0x420EF40")]
	protected void SetDefaultVelocity()
	{
	}

	[Token(Token = "0x6003742")]
	[Address(RVA = "0x41FF780", Offset = "0x41FF780", VA = "0x41FF780", Slot = "103")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x6003743")]
	[Address(RVA = "0x420F070", Offset = "0x420F070", VA = "0x420F070")]
	protected bool IsPlayingClip(string clip)
	{
		return default(bool);
	}

	[Token(Token = "0x6003744")]
	[Address(RVA = "0x420F0E0", Offset = "0x420F0E0", VA = "0x420F0E0", Slot = "96")]
	protected override void CheckGround()
	{
	}

	[Token(Token = "0x6003745")]
	[Address(RVA = "0x420F3F0", Offset = "0x420F3F0", VA = "0x420F3F0", Slot = "161")]
	protected virtual void UpdateAttack()
	{
	}

	[Token(Token = "0x6003746")]
	[Address(RVA = "0x420F400", Offset = "0x420F400", VA = "0x420F400", Slot = "162")]
	protected virtual void UpdateEat()
	{
	}

	[Token(Token = "0x6003747")]
	[Address(RVA = "0x420F410", Offset = "0x420F410", VA = "0x420F410", Slot = "163")]
	protected virtual void DeactivateAllHitboxes()
	{
	}

	[Token(Token = "0x6003748")]
	[Address(RVA = "0x420F570", Offset = "0x420F570", VA = "0x420F570")]
	[PunRPC]
	public void SetSizeRPC(float size, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003749")]
	[Address(RVA = "0x420F710", Offset = "0x420F710", VA = "0x420F710", Slot = "164")]
	protected virtual void ScaleSounds(float size)
	{
	}

	[Token(Token = "0x600374A")]
	[Address(RVA = "0x420FA70", Offset = "0x420FA70", VA = "0x420FA70", Slot = "165")]
	protected virtual void SetSizeParticles(float size)
	{
	}

	[Token(Token = "0x600374B")]
	[Address(RVA = "0x420FB50", Offset = "0x420FB50", VA = "0x420FB50")]
	public void SetSize(float size)
	{
	}

	[Token(Token = "0x600374C")]
	[Address(RVA = "0x420FC50", Offset = "0x420FC50", VA = "0x420FC50", Slot = "166")]
	protected virtual float GetAnimationTime()
	{
		return default(float);
	}

	[Token(Token = "0x600374D")]
	[Address(RVA = "0x420FC70", Offset = "0x420FC70", VA = "0x420FC70", Slot = "167")]
	protected virtual float GetHitboxTime(float normalizedLength)
	{
		return default(float);
	}

	[Token(Token = "0x600374E")]
	[Address(RVA = "0x420FCC0", Offset = "0x420FCC0", VA = "0x420FCC0", Slot = "168")]
	protected virtual void DamagedGrunt(float chance = 1f)
	{
	}

	[Token(Token = "0x600374F")]
	[Address(RVA = "0x420FD80", Offset = "0x420FD80", VA = "0x420FD80", Slot = "169")]
	protected virtual void GrabGrunt(float chance = 1f)
	{
	}

	[Token(Token = "0x6003750")]
	[Address(RVA = "0x41FFBD0", Offset = "0x41FFBD0", VA = "0x41FFBD0", Slot = "93")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6003751")]
	[Address(RVA = "0x420FE40", Offset = "0x420FE40", VA = "0x420FE40")]
	[IteratorStateMachine(typeof(_003CHandleSpawnCollisionCoroutine_003Ed__166))]
	protected IEnumerator HandleSpawnCollisionCoroutine(float time, float maxSpeed)
	{
		return null;
	}

	[Token(Token = "0x6003752")]
	[Address(RVA = "0x420FED0", Offset = "0x420FED0", VA = "0x420FED0", Slot = "170")]
	protected virtual void ToggleSitPushbox(bool sit)
	{
	}

	[Token(Token = "0x6003753")]
	[Address(RVA = "0x420FFC0", Offset = "0x420FFC0", VA = "0x420FFC0", Slot = "171")]
	protected virtual void UpdateAnimationColliders()
	{
	}

	[Token(Token = "0x6003754")]
	[Address(RVA = "0x420FFF0", Offset = "0x420FFF0", VA = "0x420FFF0", Slot = "172")]
	protected virtual bool IsPlayingSitAnimation()
	{
		return default(bool);
	}

	[Token(Token = "0x6003755")]
	[Address(RVA = "0x4210260", Offset = "0x4210260", VA = "0x4210260", Slot = "107")]
	protected override string GetFootstepAudio(int phase)
	{
		return null;
	}

	[Token(Token = "0x6003756")]
	[Address(RVA = "0x42102C0", Offset = "0x42102C0", VA = "0x42102C0", Slot = "106")]
	protected override int GetFootstepPhase()
	{
		return default(int);
	}

	[Token(Token = "0x6003757")]
	[Address(RVA = "0x4210470", Offset = "0x4210470", VA = "0x4210470", Slot = "173")]
	protected virtual void SpawnShatter(Vector3 position)
	{
	}

	[Token(Token = "0x6003758")]
	[Address(RVA = "0x4210720", Offset = "0x4210720", VA = "0x4210720", Slot = "174")]
	public virtual bool CheckNapeAngle(Vector3 hitPosition, float maxAngle)
	{
		return default(bool);
	}

	[Token(Token = "0x6003759")]
	[Address(RVA = "0x4210A60", Offset = "0x4210A60", VA = "0x4210A60", Slot = "109")]
	public override Vector3 GetCenterPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x600375A")]
	[Address(RVA = "0x4210A90", Offset = "0x4210A90", VA = "0x4210A90", Slot = "175")]
	public virtual float GetColliderToggleRadius()
	{
		return default(float);
	}

	[Token(Token = "0x600375B")]
	[Address(RVA = "0x4202CF0", Offset = "0x4202CF0", VA = "0x4202CF0")]
	protected BaseTitan()
	{
	}
}
