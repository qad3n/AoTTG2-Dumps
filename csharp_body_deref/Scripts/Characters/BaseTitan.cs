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

[Token(Token = "0x200050A")]
internal abstract class BaseTitan : BaseCharacter
{
	[Token(Token = "0x200050B")]
	[CompilerGenerated]
	private sealed class _003CHandleSpawnCollisionCoroutine_003Ed__166 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001831")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001832")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001833")]
		[FieldOffset(Offset = "0x20")]
		public BaseTitan _003C_003E4__this;

		[Token(Token = "0x4001834")]
		[FieldOffset(Offset = "0x28")]
		public float maxSpeed;

		[Token(Token = "0x4001835")]
		[FieldOffset(Offset = "0x2C")]
		public float time;

		[Token(Token = "0x170009D5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003551")]
			[Address(RVA = "0x3F04510", Offset = "0x3F04510", VA = "0x3F04510", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009D6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003553")]
			[Address(RVA = "0x3F04560", Offset = "0x3F04560", VA = "0x3F04560", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600354E")]
		[Address(RVA = "0x3F04200", Offset = "0x3F04200", VA = "0x3F04200")]
		[DebuggerHidden]
		public _003CHandleSpawnCollisionCoroutine_003Ed__166(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x600354F")]
		[Address(RVA = "0x3F04220", Offset = "0x3F04220", VA = "0x3F04220", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003550")]
		[Address(RVA = "0x3F04230", Offset = "0x3F04230", VA = "0x3F04230", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003552")]
		[Address(RVA = "0x3F04520", Offset = "0x3F04520", VA = "0x3F04520", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x200050C")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__122 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001836")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001837")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001838")]
		[FieldOffset(Offset = "0x20")]
		public BaseTitan _003C_003E4__this;

		[Token(Token = "0x170009D7")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003557")]
			[Address(RVA = "0x3F04890", Offset = "0x3F04890", VA = "0x3F04890", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170009D8")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003559")]
			[Address(RVA = "0x3F048E0", Offset = "0x3F048E0", VA = "0x3F048E0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6003554")]
		[Address(RVA = "0x3F04570", Offset = "0x3F04570", VA = "0x3F04570")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__122(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6003555")]
		[Address(RVA = "0x3F04590", Offset = "0x3F04590", VA = "0x3F04590", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6003556")]
		[Address(RVA = "0x3F045A0", Offset = "0x3F045A0", VA = "0x3F045A0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6003558")]
		[Address(RVA = "0x3F048A0", Offset = "0x3F048A0", VA = "0x3F048A0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40017F2")]
	[FieldOffset(Offset = "0xF0")]
	public TitanState State;

	[Token(Token = "0x40017F3")]
	[FieldOffset(Offset = "0xF8")]
	public BaseTitanComponentCache BaseTitanCache;

	[Token(Token = "0x40017F4")]
	[FieldOffset(Offset = "0x100")]
	public TitanColliderToggler TitanColliderToggler;

	[Token(Token = "0x40017F5")]
	[FieldOffset(Offset = "0x108")]
	public bool IsWalk;

	[Token(Token = "0x40017F6")]
	[FieldOffset(Offset = "0x109")]
	public bool IsSprint;

	[Token(Token = "0x40017F7")]
	[FieldOffset(Offset = "0x10A")]
	public bool IsSit;

	[Token(Token = "0x40017F8")]
	[FieldOffset(Offset = "0x110")]
	public Human HoldHuman;

	[Token(Token = "0x40017F9")]
	[FieldOffset(Offset = "0x118")]
	public bool HoldHumanLeft;

	[Token(Token = "0x40017FA")]
	[FieldOffset(Offset = "0x11C")]
	public float Size;

	[Token(Token = "0x40017FB")]
	[FieldOffset(Offset = "0x120")]
	public float ClimbCooldown;

	[Token(Token = "0x40017FC")]
	[FieldOffset(Offset = "0x124")]
	public float StunTime;

	[Token(Token = "0x40017FD")]
	[FieldOffset(Offset = "0x128")]
	public float ActionPause;

	[Token(Token = "0x40017FE")]
	[FieldOffset(Offset = "0x12C")]
	public float AttackPause;

	[Token(Token = "0x40017FF")]
	[FieldOffset(Offset = "0x130")]
	public float TurnPause;

	[Token(Token = "0x4001800")]
	[FieldOffset(Offset = "0x134")]
	public float MaxSprintStamina;

	[Token(Token = "0x4001801")]
	[FieldOffset(Offset = "0x138")]
	public float SprintStaminaRecover;

	[Token(Token = "0x4001802")]
	[FieldOffset(Offset = "0x13C")]
	public float SprintStaminaConsumption;

	[Token(Token = "0x4001803")]
	[FieldOffset(Offset = "0x140")]
	public float CurrentSprintStamina;

	[Token(Token = "0x4001804")]
	[FieldOffset(Offset = "0x148")]
	public ITargetable TargetEnemy;

	[Token(Token = "0x4001805")]
	[FieldOffset(Offset = "0x150")]
	protected BaseTitanAnimations BaseTitanAnimations;

	[Token(Token = "0x4001806")]
	[FieldOffset(Offset = "0x158")]
	private LayerMask TitanGroundMaskLayers;

	[Token(Token = "0x4001807")]
	[FieldOffset(Offset = "0x15C")]
	public float AttackSpeedMultiplier;

	[Token(Token = "0x4001808")]
	[FieldOffset(Offset = "0x160")]
	public float ConfusedTime;

	[Token(Token = "0x4001809")]
	[FieldOffset(Offset = "0x164")]
	public float PreviousAttackSpeedMultiplier;

	[Token(Token = "0x400180A")]
	[FieldOffset(Offset = "0x168")]
	public Dictionary<string, float> AttackSpeeds;

	[Token(Token = "0x400180B")]
	[FieldOffset(Offset = "0x170")]
	public float RunSpeedBase;

	[Token(Token = "0x400180C")]
	[FieldOffset(Offset = "0x174")]
	public float WalkSpeedBase;

	[Token(Token = "0x400180D")]
	[FieldOffset(Offset = "0x178")]
	public float RunSpeedPerLevel;

	[Token(Token = "0x400180E")]
	[FieldOffset(Offset = "0x17C")]
	public float WalkSpeedPerLevel;

	[Token(Token = "0x400180F")]
	[FieldOffset(Offset = "0x180")]
	public float JumpForce;

	[Token(Token = "0x4001810")]
	[FieldOffset(Offset = "0x184")]
	public float RotateSpeed;

	[Token(Token = "0x4001811")]
	[FieldOffset(Offset = "0x188")]
	public float TurnSpeed;

	[Token(Token = "0x4001812")]
	[FieldOffset(Offset = "0x18C")]
	public bool LeftArmDisabled;

	[Token(Token = "0x4001813")]
	[FieldOffset(Offset = "0x18D")]
	public bool RightArmDisabled;

	[Token(Token = "0x4001814")]
	[FieldOffset(Offset = "0x190")]
	protected Vector3 LastTargetDirection;

	[Token(Token = "0x4001815")]
	[FieldOffset(Offset = "0x19C")]
	protected Vector3 _wallClimbForward;

	[Token(Token = "0x4001816")]
	[FieldOffset(Offset = "0x1A8")]
	protected Quaternion _turnStartRotation;

	[Token(Token = "0x4001817")]
	[FieldOffset(Offset = "0x1B8")]
	protected Quaternion _turnTargetRotation;

	[Token(Token = "0x4001818")]
	[FieldOffset(Offset = "0x1C8")]
	public Vector3 _jumpDirection;

	[Token(Token = "0x4001819")]
	[FieldOffset(Offset = "0x1D4")]
	protected float _maxTurnTime;

	[Token(Token = "0x400181A")]
	[FieldOffset(Offset = "0x1D8")]
	protected float _currentTurnTime;

	[Token(Token = "0x400181B")]
	[FieldOffset(Offset = "0x1DC")]
	protected float _currentGroundDistance;

	[Token(Token = "0x400181C")]
	[FieldOffset(Offset = "0x1E0")]
	protected float _currentCrippleTime;

	[Token(Token = "0x400181D")]
	[FieldOffset(Offset = "0x1E4")]
	protected float _currentFallTotalTime;

	[Token(Token = "0x400181E")]
	[FieldOffset(Offset = "0x1E8")]
	protected float _currentFallStuckTime;

	[Token(Token = "0x400181F")]
	[FieldOffset(Offset = "0x1EC")]
	protected float _disableCooldownLeft;

	[Token(Token = "0x4001820")]
	[FieldOffset(Offset = "0x1F0")]
	protected float _checkGroundTimeLeft;

	[Token(Token = "0x4001821")]
	[FieldOffset(Offset = "0x1F4")]
	protected float _climbCooldownLeft;

	[Token(Token = "0x4001822")]
	[FieldOffset(Offset = "0x1F8")]
	protected Vector3 _startPosition;

	[Token(Token = "0x4001823")]
	[FieldOffset(Offset = "0x204")]
	public float _stateTimeLeft;

	[Token(Token = "0x4001824")]
	[FieldOffset(Offset = "0x208")]
	protected string _currentAttackAnimation;

	[Token(Token = "0x4001825")]
	[FieldOffset(Offset = "0x210")]
	protected string _currentAttack;

	[Token(Token = "0x4001826")]
	[FieldOffset(Offset = "0x218")]
	protected string _currentStateAnimation;

	[Token(Token = "0x4001827")]
	[FieldOffset(Offset = "0x220")]
	protected float _currentAttackSpeed;

	[Token(Token = "0x4001828")]
	[FieldOffset(Offset = "0x224")]
	protected int _currentAttackStage;

	[Token(Token = "0x4001829")]
	[FieldOffset(Offset = "0x228")]
	protected bool _needFreshCore;

	[Token(Token = "0x400182A")]
	[FieldOffset(Offset = "0x22C")]
	protected Vector3 _attackVelocity;

	[Token(Token = "0x400182B")]
	[FieldOffset(Offset = "0x238")]
	protected Vector3 _startCoreAttackPosition;

	[Token(Token = "0x400182C")]
	[FieldOffset(Offset = "0x244")]
	protected Vector3 _previousCoreLocalPosition;

	[Token(Token = "0x400182D")]
	[FieldOffset(Offset = "0x250")]
	protected Vector3 _furthestCoreLocalPosition;

	[Token(Token = "0x400182E")]
	[FieldOffset(Offset = "0x260")]
	protected Dictionary<string, float> _rootMotionAnimations;

	[Token(Token = "0x400182F")]
	[FieldOffset(Offset = "0x268")]
	public Dictionary<string, string> AttackAnimations;

	[Token(Token = "0x4001830")]
	[FieldOffset(Offset = "0x270")]
	public bool EnableAI;

	[Token(Token = "0x170009C7")]
	public virtual float DefaultCrippleTime
	{
		[Token(Token = "0x60034EA")]
		[Address(RVA = "0x3EFF3E0", Offset = "0x3EFF3E0", VA = "0x3EFF3E0", Slot = "110")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009C8")]
	public virtual bool CanWallClimb
	{
		[Token(Token = "0x60034EB")]
		[Address(RVA = "0x3EFF3F0", Offset = "0x3EFF3F0", VA = "0x3EFF3F0", Slot = "111")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009C9")]
	public virtual bool CanSprint
	{
		[Token(Token = "0x60034EC")]
		[Address(RVA = "0x3EFF400", Offset = "0x3EFF400", VA = "0x3EFF400", Slot = "112")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009CA")]
	protected override float GroundDistance
	{
		[Token(Token = "0x60034ED")]
		[Address(RVA = "0x3EFF410", Offset = "0x3EFF410", VA = "0x3EFF410", Slot = "61")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009CB")]
	public override LayerMask GroundMask
	{
		[Token(Token = "0x60034EE")]
		[Address(RVA = "0x3EFF420", Offset = "0x3EFF420", VA = "0x3EFF420", Slot = "60")]
		get
		{
			return default(LayerMask);
		}
	}

	[Token(Token = "0x170009CC")]
	protected virtual float DefaultRunSpeed
	{
		[Token(Token = "0x60034EF")]
		[Address(RVA = "0x3EFF430", Offset = "0x3EFF430", VA = "0x3EFF430", Slot = "113")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009CD")]
	protected virtual float DefaultWalkSpeed
	{
		[Token(Token = "0x60034F0")]
		[Address(RVA = "0x3EFF440", Offset = "0x3EFF440", VA = "0x3EFF440", Slot = "114")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009CE")]
	protected virtual float DefaultJumpForce
	{
		[Token(Token = "0x60034F1")]
		[Address(RVA = "0x3EFF450", Offset = "0x3EFF450", VA = "0x3EFF450", Slot = "115")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009CF")]
	protected virtual float DefaultRotateSpeed
	{
		[Token(Token = "0x60034F2")]
		[Address(RVA = "0x3EFF460", Offset = "0x3EFF460", VA = "0x3EFF460", Slot = "116")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009D0")]
	protected virtual float SizeMultiplier
	{
		[Token(Token = "0x60034F3")]
		[Address(RVA = "0x3EFF470", Offset = "0x3EFF470", VA = "0x3EFF470", Slot = "117")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009D1")]
	protected virtual float DisableCooldown
	{
		[Token(Token = "0x60034F4")]
		[Address(RVA = "0x3EFF480", Offset = "0x3EFF480", VA = "0x3EFF480", Slot = "118")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009D2")]
	protected override Vector3 Gravity
	{
		[Token(Token = "0x60034F5")]
		[Address(RVA = "0x3EFF490", Offset = "0x3EFF490", VA = "0x3EFF490", Slot = "58")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x170009D3")]
	protected virtual float CheckGroundTime
	{
		[Token(Token = "0x60034F6")]
		[Address(RVA = "0x3EFF4E0", Offset = "0x3EFF4E0", VA = "0x3EFF4E0", Slot = "119")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x170009D4")]
	protected LayerMask MapObjectMask
	{
		[Token(Token = "0x60034F7")]
		[Address(RVA = "0x3EFF4F0", Offset = "0x3EFF4F0", VA = "0x3EFF4F0")]
		get
		{
			return default(LayerMask);
		}
	}

	[Token(Token = "0x60034F8")]
	[Address(RVA = "0x3EF3B00", Offset = "0x3EF3B00", VA = "0x3EF3B00", Slot = "120")]
	public virtual void Init(bool ai, string team, JSONNode data)
	{
	}

	[Token(Token = "0x60034F9")]
	[Address(RVA = "0x3EFF590", Offset = "0x3EFF590", VA = "0x3EFF590", Slot = "69")]
	protected override void CreateDetection()
	{
	}

	[Token(Token = "0x60034FA")]
	[Address(RVA = "0x3EFF600", Offset = "0x3EFF600", VA = "0x3EFF600", Slot = "121")]
	protected virtual Dictionary<string, float> GetRootMotionAnimations()
	{
		return null;
	}

	[Token(Token = "0x60034FB")]
	[Address(RVA = "0x3EFF660", Offset = "0x3EFF660", VA = "0x3EFF660", Slot = "122")]
	public virtual bool IsGrabAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x60034FC")]
	[Address(RVA = "0x3EFF670", Offset = "0x3EFF670", VA = "0x3EFF670")]
	public float GetCurrentSpeed()
	{
		return default(float);
	}

	[Token(Token = "0x60034FD")]
	[Address(RVA = "0x3EFF6A0", Offset = "0x3EFF6A0", VA = "0x3EFF6A0", Slot = "123")]
	public virtual bool CanAction()
	{
		return default(bool);
	}

	[Token(Token = "0x60034FE")]
	[Address(RVA = "0x3EFF6E0", Offset = "0x3EFF6E0", VA = "0x3EFF6E0", Slot = "124")]
	public virtual bool CanEmote()
	{
		return default(bool);
	}

	[Token(Token = "0x60034FF")]
	[Address(RVA = "0x3EFF740", Offset = "0x3EFF740", VA = "0x3EFF740", Slot = "125")]
	public virtual bool CanStun()
	{
		return default(bool);
	}

	[Token(Token = "0x6003500")]
	[Address(RVA = "0x3EFF760", Offset = "0x3EFF760", VA = "0x3EFF760", Slot = "126")]
	public virtual void Jump(Vector3 direction)
	{
	}

	[Token(Token = "0x6003501")]
	[Address(RVA = "0x3EFF8C0", Offset = "0x3EFF8C0", VA = "0x3EFF8C0", Slot = "127")]
	public virtual void StartJump()
	{
	}

	[Token(Token = "0x6003502")]
	[Address(RVA = "0x3EFFA50", Offset = "0x3EFFA50", VA = "0x3EFFA50", Slot = "128")]
	public virtual void Attack(string attack)
	{
	}

	[Token(Token = "0x6003503")]
	[Address(RVA = "0x3EFFB60", Offset = "0x3EFFB60", VA = "0x3EFFB60", Slot = "129")]
	public virtual bool CanAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x6003504")]
	[Address(RVA = "0x3EFFB80", Offset = "0x3EFFB80", VA = "0x3EFFB80", Slot = "130")]
	public virtual void ResetAttackState(string attack)
	{
	}

	[Token(Token = "0x6003505")]
	[Address(RVA = "0x3EFFC90", Offset = "0x3EFFC90", VA = "0x3EFFC90")]
	public float GetAttackSpeed(string attack)
	{
		return default(float);
	}

	[Token(Token = "0x6003506")]
	[Address(RVA = "0x3EFFD40", Offset = "0x3EFFD40", VA = "0x3EFFD40", Slot = "131")]
	public virtual void Kick()
	{
	}

	[Token(Token = "0x6003507")]
	[Address(RVA = "0x3EFFD50", Offset = "0x3EFFD50", VA = "0x3EFFD50", Slot = "132")]
	public virtual void Stun()
	{
	}

	[Token(Token = "0x6003508")]
	[Address(RVA = "0x3EFFE30", Offset = "0x3EFFE30", VA = "0x3EFFE30", Slot = "133")]
	public virtual void Run()
	{
	}

	[Token(Token = "0x6003509")]
	[Address(RVA = "0x3EFFF00", Offset = "0x3EFFF00", VA = "0x3EFFF00", Slot = "134")]
	public virtual void Sprint()
	{
	}

	[Token(Token = "0x600350A")]
	[Address(RVA = "0x3EFFFD0", Offset = "0x3EFFFD0", VA = "0x3EFFFD0", Slot = "135")]
	public virtual void WallClimb()
	{
	}

	[Token(Token = "0x600350B")]
	[Address(RVA = "0x3F000D0", Offset = "0x3F000D0", VA = "0x3F000D0", Slot = "136")]
	public virtual void Eat()
	{
	}

	[Token(Token = "0x600350C")]
	[Address(RVA = "0x3F000E0", Offset = "0x3F000E0", VA = "0x3F000E0", Slot = "137")]
	public virtual void Walk()
	{
	}

	[Token(Token = "0x600350D")]
	[Address(RVA = "0x3F001B0", Offset = "0x3F001B0", VA = "0x3F001B0", Slot = "138")]
	public virtual void Idle()
	{
	}

	[Token(Token = "0x600350E")]
	[Address(RVA = "0x3F001E0", Offset = "0x3F001E0", VA = "0x3F001E0", Slot = "139")]
	public virtual void Idle(float fadeTime)
	{
	}

	[Token(Token = "0x600350F")]
	[Address(RVA = "0x3F00240", Offset = "0x3F00240", VA = "0x3F00240", Slot = "140")]
	public virtual void IdleWait(float waitTime)
	{
	}

	[Token(Token = "0x6003510")]
	[Address(RVA = "0x3F002A0", Offset = "0x3F002A0", VA = "0x3F002A0", Slot = "141")]
	public virtual void Land()
	{
	}

	[Token(Token = "0x6003511")]
	[Address(RVA = "0x3F004D0", Offset = "0x3F004D0", VA = "0x3F004D0", Slot = "142")]
	public virtual void Fall()
	{
	}

	[Token(Token = "0x6003512")]
	[Address(RVA = "0x3F00590", Offset = "0x3F00590", VA = "0x3F00590", Slot = "143")]
	public virtual void Turn(Vector3 targetDirection)
	{
	}

	[Token(Token = "0x6003513")]
	[Address(RVA = "0x3F007A0", Offset = "0x3F007A0", VA = "0x3F007A0", Slot = "144")]
	public virtual void Blind()
	{
	}

	[Token(Token = "0x6003514")]
	[Address(RVA = "0x3F00A20", Offset = "0x3F00A20", VA = "0x3F00A20", Slot = "145")]
	public virtual void Cripple(float time = 0f)
	{
	}

	[Token(Token = "0x6003515")]
	[Address(RVA = "0x3F00C00", Offset = "0x3F00C00", VA = "0x3F00C00", Slot = "70")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x6003516")]
	[Address(RVA = "0x3F00C10", Offset = "0x3F00C10", VA = "0x3F00C10", Slot = "71")]
	public override void ForceAnimation(string animation, float fade)
	{
	}

	[Token(Token = "0x6003517")]
	[Address(RVA = "0x3F00CD0", Offset = "0x3F00CD0", VA = "0x3F00CD0", Slot = "74")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__122))]
	protected override IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x6003518")]
	[Address(RVA = "0x3EF6ED0", Offset = "0x3EF6ED0", VA = "0x3EF6ED0")]
	protected float GetSpawnEffectSize()
	{
		return default(float);
	}

	[Token(Token = "0x6003519")]
	[Address(RVA = "0x3F00D40", Offset = "0x3F00D40", VA = "0x3F00D40", Slot = "146")]
	[PunRPC]
	public virtual void GrabRPC(int viewId, bool left, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600351A")]
	[Address(RVA = "0x3F00E40", Offset = "0x3F00E40", VA = "0x3F00E40", Slot = "147")]
	[PunRPC]
	public virtual void UngrabRPC(int viewId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600351B")]
	[Address(RVA = "0x3F00F30", Offset = "0x3F00F30", VA = "0x3F00F30", Slot = "148")]
	public virtual void Ungrab()
	{
	}

	[Token(Token = "0x600351C")]
	[Address(RVA = "0x3F01030", Offset = "0x3F01030", VA = "0x3F01030", Slot = "149")]
	[PunRPC]
	public virtual void DecreaseAttackSpeedRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600351D")]
	[Address(RVA = "0x3F01070", Offset = "0x3F01070", VA = "0x3F01070", Slot = "150")]
	public virtual void Confuse()
	{
	}

	[Token(Token = "0x600351E")]
	[Address(RVA = "0x3F010F0", Offset = "0x3F010F0", VA = "0x3F010F0")]
	protected void ResetAttackSpeed()
	{
	}

	[Token(Token = "0x600351F")]
	[Address(RVA = "0x3EF9790", Offset = "0x3EF9790", VA = "0x3EF9790", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x6003520")]
	[Address(RVA = "0x3EF1690", Offset = "0x3EF1690", VA = "0x3EF1690")]
	protected void StateAction(TitanState state, string animation, float fade = 0.1f, bool deactivateHitboxes = true)
	{
	}

	[Token(Token = "0x6003521")]
	[Address(RVA = "0x3EFFA80", Offset = "0x3EFFA80", VA = "0x3EFFA80")]
	protected void StateAttack(string animation, float fade = 0.1f, bool deactivateHitboxes = true)
	{
	}

	[Token(Token = "0x6003522")]
	[Address(RVA = "0x3EF3610", Offset = "0x3EF3610", VA = "0x3EF3610")]
	protected void StateActionWithTime(TitanState state, string animation, float stateTime, float fade = 0.1f, bool deactivateHitboxes = true)
	{
	}

	[Token(Token = "0x6003523")]
	[Address(RVA = "0x3F01110", Offset = "0x3F01110", VA = "0x3F01110")]
	protected void SetAnimationUpdateMode(bool always)
	{
	}

	[Token(Token = "0x6003524")]
	[Address(RVA = "0x3EF4510", Offset = "0x3EF4510", VA = "0x3EF4510", Slot = "90")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6003525")]
	[Address(RVA = "0x3EF10E0", Offset = "0x3EF10E0", VA = "0x3EF10E0", Slot = "68")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x6003526")]
	[Address(RVA = "0x3EF1200", Offset = "0x3EF1200", VA = "0x3EF1200", Slot = "151")]
	protected virtual void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x6003527")]
	[Address(RVA = "0x3F01130", Offset = "0x3F01130", VA = "0x3F01130", Slot = "67")]
	public override Transform GetCameraAnchor()
	{
		return null;
	}

	[Token(Token = "0x6003528")]
	[Address(RVA = "0x3F01150", Offset = "0x3F01150", VA = "0x3F01150", Slot = "152")]
	protected virtual void UpdateDisableArm()
	{
	}

	[Token(Token = "0x6003529")]
	[Address(RVA = "0x3F01160", Offset = "0x3F01160", VA = "0x3F01160", Slot = "153")]
	public virtual void DisableArm(bool left)
	{
	}

	[Token(Token = "0x600352A")]
	[Address(RVA = "0x3F01170", Offset = "0x3F01170", VA = "0x3F01170", Slot = "154")]
	protected virtual void UpdateTurn()
	{
	}

	[Token(Token = "0x600352B")]
	[Address(RVA = "0x3F01210", Offset = "0x3F01210", VA = "0x3F01210", Slot = "155")]
	protected virtual string GetSitIdleAniamtion()
	{
		return null;
	}

	[Token(Token = "0x600352C")]
	[Address(RVA = "0x3F01240", Offset = "0x3F01240", VA = "0x3F01240", Slot = "156")]
	protected virtual string GetSitFallAnimation()
	{
		return null;
	}

	[Token(Token = "0x600352D")]
	[Address(RVA = "0x3F01270", Offset = "0x3F01270", VA = "0x3F01270", Slot = "157")]
	protected virtual string GetSitUpAnimation()
	{
		return null;
	}

	[Token(Token = "0x600352E")]
	[Address(RVA = "0x3F012A0", Offset = "0x3F012A0", VA = "0x3F012A0")]
	protected void SetDefaultVelocityLerp()
	{
	}

	[Token(Token = "0x600352F")]
	[Address(RVA = "0x3EF5120", Offset = "0x3EF5120", VA = "0x3EF5120", Slot = "158")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6003530")]
	[Address(RVA = "0x3F014D0", Offset = "0x3F014D0", VA = "0x3F014D0", Slot = "159")]
	public virtual void StopWallClimb()
	{
	}

	[Token(Token = "0x6003531")]
	[Address(RVA = "0x3F014F0", Offset = "0x3F014F0", VA = "0x3F014F0", Slot = "102")]
	protected override void FixedUpdate()
	{
	}

	[Token(Token = "0x6003532")]
	[Address(RVA = "0x3F027A0", Offset = "0x3F027A0", VA = "0x3F027A0", Slot = "160")]
	protected virtual void FixedUpdateAttack()
	{
	}

	[Token(Token = "0x6003533")]
	[Address(RVA = "0x3F02680", Offset = "0x3F02680", VA = "0x3F02680")]
	protected void SetDefaultVelocity()
	{
	}

	[Token(Token = "0x6003534")]
	[Address(RVA = "0x3EF2EC0", Offset = "0x3EF2EC0", VA = "0x3EF2EC0", Slot = "103")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x6003535")]
	[Address(RVA = "0x3F027B0", Offset = "0x3F027B0", VA = "0x3F027B0")]
	protected bool IsPlayingClip(string clip)
	{
		return default(bool);
	}

	[Token(Token = "0x6003536")]
	[Address(RVA = "0x3F02820", Offset = "0x3F02820", VA = "0x3F02820", Slot = "96")]
	protected override void CheckGround()
	{
	}

	[Token(Token = "0x6003537")]
	[Address(RVA = "0x3F02B30", Offset = "0x3F02B30", VA = "0x3F02B30", Slot = "161")]
	protected virtual void UpdateAttack()
	{
	}

	[Token(Token = "0x6003538")]
	[Address(RVA = "0x3F02B40", Offset = "0x3F02B40", VA = "0x3F02B40", Slot = "162")]
	protected virtual void UpdateEat()
	{
	}

	[Token(Token = "0x6003539")]
	[Address(RVA = "0x3F02B50", Offset = "0x3F02B50", VA = "0x3F02B50", Slot = "163")]
	protected virtual void DeactivateAllHitboxes()
	{
	}

	[Token(Token = "0x600353A")]
	[Address(RVA = "0x3F02CB0", Offset = "0x3F02CB0", VA = "0x3F02CB0")]
	[PunRPC]
	public void SetSizeRPC(float size, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600353B")]
	[Address(RVA = "0x3F02E50", Offset = "0x3F02E50", VA = "0x3F02E50", Slot = "164")]
	protected virtual void ScaleSounds(float size)
	{
	}

	[Token(Token = "0x600353C")]
	[Address(RVA = "0x3F031B0", Offset = "0x3F031B0", VA = "0x3F031B0", Slot = "165")]
	protected virtual void SetSizeParticles(float size)
	{
	}

	[Token(Token = "0x600353D")]
	[Address(RVA = "0x3F03290", Offset = "0x3F03290", VA = "0x3F03290")]
	public void SetSize(float size)
	{
	}

	[Token(Token = "0x600353E")]
	[Address(RVA = "0x3F03390", Offset = "0x3F03390", VA = "0x3F03390", Slot = "166")]
	protected virtual float GetAnimationTime()
	{
		return default(float);
	}

	[Token(Token = "0x600353F")]
	[Address(RVA = "0x3F033B0", Offset = "0x3F033B0", VA = "0x3F033B0", Slot = "167")]
	protected virtual float GetHitboxTime(float normalizedLength)
	{
		return default(float);
	}

	[Token(Token = "0x6003540")]
	[Address(RVA = "0x3F03400", Offset = "0x3F03400", VA = "0x3F03400", Slot = "168")]
	protected virtual void DamagedGrunt(float chance = 1f)
	{
	}

	[Token(Token = "0x6003541")]
	[Address(RVA = "0x3F034C0", Offset = "0x3F034C0", VA = "0x3F034C0", Slot = "169")]
	protected virtual void GrabGrunt(float chance = 1f)
	{
	}

	[Token(Token = "0x6003542")]
	[Address(RVA = "0x3EF3310", Offset = "0x3EF3310", VA = "0x3EF3310", Slot = "93")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6003543")]
	[Address(RVA = "0x3F03580", Offset = "0x3F03580", VA = "0x3F03580")]
	[IteratorStateMachine(typeof(_003CHandleSpawnCollisionCoroutine_003Ed__166))]
	protected IEnumerator HandleSpawnCollisionCoroutine(float time, float maxSpeed)
	{
		return null;
	}

	[Token(Token = "0x6003544")]
	[Address(RVA = "0x3F03610", Offset = "0x3F03610", VA = "0x3F03610", Slot = "170")]
	protected virtual void ToggleSitPushbox(bool sit)
	{
	}

	[Token(Token = "0x6003545")]
	[Address(RVA = "0x3F03700", Offset = "0x3F03700", VA = "0x3F03700", Slot = "171")]
	protected virtual void UpdateAnimationColliders()
	{
	}

	[Token(Token = "0x6003546")]
	[Address(RVA = "0x3F03730", Offset = "0x3F03730", VA = "0x3F03730", Slot = "172")]
	protected virtual bool IsPlayingSitAnimation()
	{
		return default(bool);
	}

	[Token(Token = "0x6003547")]
	[Address(RVA = "0x3F039A0", Offset = "0x3F039A0", VA = "0x3F039A0", Slot = "107")]
	protected override string GetFootstepAudio(int phase)
	{
		return null;
	}

	[Token(Token = "0x6003548")]
	[Address(RVA = "0x3F03A00", Offset = "0x3F03A00", VA = "0x3F03A00", Slot = "106")]
	protected override int GetFootstepPhase()
	{
		return default(int);
	}

	[Token(Token = "0x6003549")]
	[Address(RVA = "0x3F03BB0", Offset = "0x3F03BB0", VA = "0x3F03BB0", Slot = "173")]
	protected virtual void SpawnShatter(Vector3 position)
	{
	}

	[Token(Token = "0x600354A")]
	[Address(RVA = "0x3F03E60", Offset = "0x3F03E60", VA = "0x3F03E60", Slot = "174")]
	public virtual bool CheckNapeAngle(Vector3 hitPosition, float maxAngle)
	{
		return default(bool);
	}

	[Token(Token = "0x600354B")]
	[Address(RVA = "0x3F041A0", Offset = "0x3F041A0", VA = "0x3F041A0", Slot = "109")]
	public override Vector3 GetCenterPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x600354C")]
	[Address(RVA = "0x3F041D0", Offset = "0x3F041D0", VA = "0x3F041D0", Slot = "175")]
	public virtual float GetColliderToggleRadius()
	{
		return default(float);
	}

	[Token(Token = "0x600354D")]
	[Address(RVA = "0x3EF6430", Offset = "0x3EF6430", VA = "0x3EF6430")]
	protected BaseTitan()
	{
	}
}
