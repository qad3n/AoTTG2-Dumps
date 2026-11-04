// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseTitan
// Update status: CHANGED in this game update
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

[Token(Token = "0x20006AD")]
internal abstract class BaseTitan : BaseCharacter
{
	[Token(Token = "0x20006AE")]
	[CompilerGenerated]
	private sealed class _003CHandleSpawnCollisionCoroutine_003Ed__220 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400200F")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002010")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002011")]
		[FieldOffset(Offset = "0x20")]
		public BaseTitan _003C_003E4__this;

		[Token(Token = "0x4002012")]
		[FieldOffset(Offset = "0x28")]
		public float maxSpeed;

		[Token(Token = "0x4002013")]
		[FieldOffset(Offset = "0x2C")]
		public float time;

		[Token(Token = "0x17000B8B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60041E7")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B8C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60041E9")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60041E4")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CHandleSpawnCollisionCoroutine_003Ed__220(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60041E5")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60041E6")]
		[Address(RVA = "0x2192C00", Offset = "0x2191200", VA = "0x182192C00", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60041E8")]
		[Address(RVA = "0x2192E20", Offset = "0x2191420", VA = "0x182192E20", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x20006AF")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__174 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4002014")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4002015")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4002016")]
		[FieldOffset(Offset = "0x20")]
		public BaseTitan _003C_003E4__this;

		[Token(Token = "0x17000B8D")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60041ED")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000B8E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60041EF")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60041EA")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__174(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60041EB")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60041EC")]
		[Address(RVA = "0x2192FF0", Offset = "0x21915F0", VA = "0x182192FF0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60041EE")]
		[Address(RVA = "0x2193440", Offset = "0x2191A40", VA = "0x182193440", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x4001FC9")]
	[FieldOffset(Offset = "0xF8")]
	public TitanState State;

	[Token(Token = "0x4001FCA")]
	[FieldOffset(Offset = "0x100")]
	public BaseTitanComponentCache BaseTitanCache;

	[Token(Token = "0x4001FCB")]
	[FieldOffset(Offset = "0x108")]
	public TitanColliderToggler TitanColliderToggler;

	[Token(Token = "0x4001FCC")]
	[FieldOffset(Offset = "0x110")]
	public bool IsWalk;

	[Token(Token = "0x4001FCD")]
	[FieldOffset(Offset = "0x111")]
	public bool IsSprint;

	[Token(Token = "0x4001FCE")]
	[FieldOffset(Offset = "0x112")]
	public bool IsSit;

	[Token(Token = "0x4001FCF")]
	[FieldOffset(Offset = "0x118")]
	public Human HoldHuman;

	[Token(Token = "0x4001FD0")]
	[FieldOffset(Offset = "0x120")]
	public bool HoldHumanLeft;

	[Token(Token = "0x4001FD1")]
	[FieldOffset(Offset = "0x124")]
	public float Size;

	[Token(Token = "0x4001FD2")]
	[FieldOffset(Offset = "0x128")]
	public float ClimbCooldown;

	[Token(Token = "0x4001FD3")]
	[FieldOffset(Offset = "0x12C")]
	public float StunTime;

	[Token(Token = "0x4001FD4")]
	[FieldOffset(Offset = "0x130")]
	public float ActionPause;

	[Token(Token = "0x4001FD5")]
	[FieldOffset(Offset = "0x134")]
	public float AttackPause;

	[Token(Token = "0x4001FD6")]
	[FieldOffset(Offset = "0x138")]
	public float TurnPause;

	[Token(Token = "0x4001FD7")]
	[FieldOffset(Offset = "0x13C")]
	public float MaxSprintStamina;

	[Token(Token = "0x4001FD8")]
	[FieldOffset(Offset = "0x140")]
	public float SprintStaminaRecover;

	[Token(Token = "0x4001FD9")]
	[FieldOffset(Offset = "0x144")]
	public float SprintStaminaConsumption;

	[Token(Token = "0x4001FDA")]
	[FieldOffset(Offset = "0x148")]
	public float CurrentSprintStamina;

	[Token(Token = "0x4001FDB")]
	[FieldOffset(Offset = "0x150")]
	public ITargetable TargetEnemy;

	[Token(Token = "0x4001FDC")]
	[FieldOffset(Offset = "0x158")]
	protected BaseTitanAnimations BaseTitanAnimations;

	[Token(Token = "0x4001FDD")]
	[FieldOffset(Offset = "0x160")]
	private LayerMask TitanGroundMaskLayers;

	[Token(Token = "0x4001FDE")]
	[FieldOffset(Offset = "0x164")]
	public float AttackSpeedMultiplier;

	[Token(Token = "0x4001FDF")]
	[FieldOffset(Offset = "0x168")]
	public float ConfusedTime;

	[Token(Token = "0x4001FE0")]
	[FieldOffset(Offset = "0x16C")]
	public float PreviousAttackSpeedMultiplier;

	[Token(Token = "0x4001FE1")]
	[FieldOffset(Offset = "0x170")]
	public Dictionary<string, float> AttackSpeeds;

	[Token(Token = "0x4001FE2")]
	[FieldOffset(Offset = "0x178")]
	public float RunSpeedBase;

	[Token(Token = "0x4001FE3")]
	[FieldOffset(Offset = "0x17C")]
	public float WalkSpeedBase;

	[Token(Token = "0x4001FE4")]
	[FieldOffset(Offset = "0x180")]
	public float RunSpeedPerLevel;

	[Token(Token = "0x4001FE5")]
	[FieldOffset(Offset = "0x184")]
	public float WalkSpeedPerLevel;

	[Token(Token = "0x4001FE6")]
	[FieldOffset(Offset = "0x188")]
	public float JumpForce;

	[Token(Token = "0x4001FE7")]
	[FieldOffset(Offset = "0x18C")]
	public float RotateSpeed;

	[Token(Token = "0x4001FE8")]
	[FieldOffset(Offset = "0x190")]
	public float TurnSpeed;

	[Token(Token = "0x4001FE9")]
	[FieldOffset(Offset = "0x194")]
	public bool SizeScaledTurnSpeed;

	[Token(Token = "0x4001FEA")]
	[FieldOffset(Offset = "0x195")]
	public bool LeftArmDisabled;

	[Token(Token = "0x4001FEB")]
	[FieldOffset(Offset = "0x196")]
	public bool RightArmDisabled;

	[Token(Token = "0x4001FEC")]
	[FieldOffset(Offset = "0x197")]
	public bool LeftHandDisabled;

	[Token(Token = "0x4001FED")]
	[FieldOffset(Offset = "0x198")]
	public bool RightHandDisabled;

	[Token(Token = "0x4001FEE")]
	[FieldOffset(Offset = "0x19C")]
	protected Vector3 LastTargetDirection;

	[Token(Token = "0x4001FEF")]
	[FieldOffset(Offset = "0x1A8")]
	protected Vector3 _wallClimbForward;

	[Token(Token = "0x4001FF0")]
	[FieldOffset(Offset = "0x1B4")]
	protected Quaternion _turnStartRotation;

	[Token(Token = "0x4001FF1")]
	[FieldOffset(Offset = "0x1C4")]
	protected Quaternion _turnTargetRotation;

	[Token(Token = "0x4001FF2")]
	[FieldOffset(Offset = "0x1D4")]
	public Vector3 _jumpDirection;

	[Token(Token = "0x4001FF3")]
	[FieldOffset(Offset = "0x1E0")]
	protected float _maxTurnTime;

	[Token(Token = "0x4001FF4")]
	[FieldOffset(Offset = "0x1E4")]
	protected float _currentTurnTime;

	[Token(Token = "0x4001FF5")]
	[FieldOffset(Offset = "0x1E8")]
	protected float _currentGroundDistance;

	[Token(Token = "0x4001FF6")]
	[FieldOffset(Offset = "0x1EC")]
	protected float _currentCrippleTime;

	[Token(Token = "0x4001FF7")]
	[FieldOffset(Offset = "0x1F0")]
	private float _crippleEndTime;

	[Token(Token = "0x4001FF8")]
	[FieldOffset(Offset = "0x1F4")]
	protected float _currentFallTotalTime;

	[Token(Token = "0x4001FF9")]
	[FieldOffset(Offset = "0x1F8")]
	protected float _currentFallStuckTime;

	[Token(Token = "0x4001FFA")]
	[FieldOffset(Offset = "0x1FC")]
	protected float _disableCooldownLeft;

	[Token(Token = "0x4001FFB")]
	[FieldOffset(Offset = "0x200")]
	protected float _checkGroundTimeLeft;

	[Token(Token = "0x4001FFC")]
	[FieldOffset(Offset = "0x204")]
	protected float _climbCooldownLeft;

	[Token(Token = "0x4001FFD")]
	[FieldOffset(Offset = "0x208")]
	protected Vector3 _startPosition;

	[Token(Token = "0x4001FFE")]
	[FieldOffset(Offset = "0x214")]
	public float _stateTimeLeft;

	[Token(Token = "0x4001FFF")]
	[FieldOffset(Offset = "0x218")]
	protected string _currentAttackAnimation;

	[Token(Token = "0x4002000")]
	[FieldOffset(Offset = "0x220")]
	protected string _currentAttack;

	[Token(Token = "0x4002001")]
	[FieldOffset(Offset = "0x228")]
	protected string _currentStateAnimation;

	[Token(Token = "0x4002002")]
	[FieldOffset(Offset = "0x230")]
	protected float _currentAttackSpeed;

	[Token(Token = "0x4002003")]
	[FieldOffset(Offset = "0x234")]
	protected int _currentAttackStage;

	[Token(Token = "0x4002004")]
	[FieldOffset(Offset = "0x238")]
	protected float _launchTimeLeft;

	[Token(Token = "0x4002005")]
	[FieldOffset(Offset = "0x23C")]
	protected bool _launched;

	[Token(Token = "0x4002006")]
	[FieldOffset(Offset = "0x23D")]
	protected bool _decapitated;

	[Token(Token = "0x4002007")]
	[FieldOffset(Offset = "0x23E")]
	protected bool _needFreshCore;

	[Token(Token = "0x4002008")]
	[FieldOffset(Offset = "0x240")]
	protected Vector3 _attackVelocity;

	[Token(Token = "0x4002009")]
	[FieldOffset(Offset = "0x24C")]
	protected Vector3 _startCoreAttackPosition;

	[Token(Token = "0x400200A")]
	[FieldOffset(Offset = "0x258")]
	protected Vector3 _previousCoreLocalPosition;

	[Token(Token = "0x400200B")]
	[FieldOffset(Offset = "0x264")]
	protected Vector3 _furthestCoreLocalPosition;

	[Token(Token = "0x400200C")]
	[FieldOffset(Offset = "0x270")]
	protected Dictionary<string, float> _rootMotionAnimations;

	[Token(Token = "0x400200D")]
	[FieldOffset(Offset = "0x278")]
	public Dictionary<string, string> AttackAnimations;

	[Token(Token = "0x400200E")]
	[FieldOffset(Offset = "0x280")]
	public bool EnableAI;

	[Token(Token = "0x17000B71")]
	public virtual float DefaultCrippleTime
	{
		[Token(Token = "0x600415D")]
		[Address(RVA = "0x2182A90", Offset = "0x2181090", VA = "0x182182A90", Slot = "121")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B72")]
	public virtual bool CanWallClimb
	{
		[Token(Token = "0x600415E")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "122")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B73")]
	public virtual bool CanSprint
	{
		[Token(Token = "0x600415F")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "123")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B74")]
	public virtual float ComboStunTime
	{
		[Token(Token = "0x6004160")]
		[Address(RVA = "0x20CF430", Offset = "0x20CDA30", VA = "0x1820CF430", Slot = "124")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B75")]
	public virtual float LaunchSizeRatio
	{
		[Token(Token = "0x6004161")]
		[Address(RVA = "0x2182BE0", Offset = "0x21811E0", VA = "0x182182BE0", Slot = "125")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B76")]
	public virtual float LaunchForce
	{
		[Token(Token = "0x6004162")]
		[Address(RVA = "0x2182BD0", Offset = "0x21811D0", VA = "0x182182BD0", Slot = "126")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B77")]
	public virtual float LaunchTime
	{
		[Token(Token = "0x6004163")]
		[Address(RVA = "0x1F0E9C0", Offset = "0x1F0CFC0", VA = "0x181F0E9C0", Slot = "127")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B78")]
	public virtual float PushForce
	{
		[Token(Token = "0x6004164")]
		[Address(RVA = "0x20CF520", Offset = "0x20CDB20", VA = "0x1820CF520", Slot = "128")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B79")]
	public virtual float PushTime
	{
		[Token(Token = "0x6004165")]
		[Address(RVA = "0x21779B0", Offset = "0x2175FB0", VA = "0x1821779B0", Slot = "129")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B7A")]
	protected override float GroundDistance
	{
		[Token(Token = "0x6004166")]
		[Address(RVA = "0x20CF430", Offset = "0x20CDA30", VA = "0x1820CF430", Slot = "68")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B7B")]
	public override LayerMask GroundMask
	{
		[Token(Token = "0x6004167")]
		[Address(RVA = "0x2182B20", Offset = "0x2181120", VA = "0x182182B20", Slot = "67")]
		get
		{
			return default(LayerMask);
		}
	}

	[Token(Token = "0x17000B7C")]
	protected virtual float DefaultRunSpeed
	{
		[Token(Token = "0x6004168")]
		[Address(RVA = "0x2182AB0", Offset = "0x21810B0", VA = "0x182182AB0", Slot = "130")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B7D")]
	protected virtual float DefaultWalkSpeed
	{
		[Token(Token = "0x6004169")]
		[Address(RVA = "0x18B56E0", Offset = "0x18B3CE0", VA = "0x1818B56E0", Slot = "131")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B7E")]
	protected virtual float DefaultJumpForce
	{
		[Token(Token = "0x600416A")]
		[Address(RVA = "0x2182AA0", Offset = "0x21810A0", VA = "0x182182AA0", Slot = "132")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B7F")]
	protected virtual float DefaultRotateSpeed
	{
		[Token(Token = "0x600416B")]
		[Address(RVA = "0x20CF430", Offset = "0x20CDA30", VA = "0x1820CF430", Slot = "133")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B80")]
	protected virtual float SizeMultiplier
	{
		[Token(Token = "0x600416C")]
		[Address(RVA = "0x20CF430", Offset = "0x20CDA30", VA = "0x1820CF430", Slot = "134")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B81")]
	protected virtual float DisableCooldown
	{
		[Token(Token = "0x600416D")]
		[Address(RVA = "0x560480", Offset = "0x55EA80", VA = "0x180560480", Slot = "135")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B82")]
	protected override Vector3 Gravity
	{
		[Token(Token = "0x600416E")]
		[Address(RVA = "0x2182AC0", Offset = "0x21810C0", VA = "0x182182AC0", Slot = "58")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000B83")]
	protected virtual float CheckGroundTime
	{
		[Token(Token = "0x600416F")]
		[Address(RVA = "0x2182A80", Offset = "0x2181080", VA = "0x182182A80", Slot = "136")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B84")]
	protected LayerMask MapObjectMask
	{
		[Token(Token = "0x6004170")]
		[Address(RVA = "0x2182BF0", Offset = "0x21811F0", VA = "0x182182BF0")]
		get
		{
			return default(LayerMask);
		}
	}

	[Token(Token = "0x17000B85")]
	protected virtual string MeleeHitType
	{
		[Token(Token = "0x6004176")]
		[Address(RVA = "0x2182C90", Offset = "0x2181290", VA = "0x182182C90", Slot = "141")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000B86")]
	protected virtual bool BasicAttacksStunOnly
	{
		[Token(Token = "0x6004177")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "142")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B87")]
	public virtual bool TreatAsSmall
	{
		[Token(Token = "0x6004178")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "143")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B88")]
	public float WorldSize
	{
		[Token(Token = "0x6004179")]
		[Address(RVA = "0x217D510", Offset = "0x217BB10", VA = "0x18217D510")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000B89")]
	public bool IsMoving
	{
		[Token(Token = "0x6004185")]
		[Address(RVA = "0x2182B30", Offset = "0x2181130", VA = "0x182182B30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B8A")]
	protected bool IsSitting
	{
		[Token(Token = "0x6004188")]
		[Address(RVA = "0x2182B50", Offset = "0x2181150", VA = "0x182182B50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6004171")]
	[Address(RVA = "0x217D930", Offset = "0x217BF30", VA = "0x18217D930", Slot = "137")]
	public virtual void Init(bool ai, string team, JSONNode data)
	{
	}

	[Token(Token = "0x6004172")]
	[Address(RVA = "0x217B530", Offset = "0x2179B30", VA = "0x18217B530", Slot = "79")]
	protected override void CreateDetection()
	{
	}

	[Token(Token = "0x6004173")]
	[Address(RVA = "0x217D420", Offset = "0x217BA20", VA = "0x18217D420", Slot = "138")]
	protected virtual Dictionary<string, float> GetRootMotionAnimations()
	{
		return null;
	}

	[Token(Token = "0x6004174")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "139")]
	public virtual bool IsGrabAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x6004175")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "140")]
	protected virtual bool IsComboAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x600417A")]
	[Address(RVA = "0x217E4F0", Offset = "0x217CAF0", VA = "0x18217E4F0")]
	protected bool IsKickAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x600417B")]
	[Address(RVA = "0x217E320", Offset = "0x217C920", VA = "0x18217E320")]
	protected bool IsFinisherHit()
	{
		return default(bool);
	}

	[Token(Token = "0x600417C")]
	[Address(RVA = "0x217CD80", Offset = "0x217B380", VA = "0x18217CD80", Slot = "144")]
	protected virtual string GetFinisherReaction(bool kick, bool smallVictim, bool headHit)
	{
		return null;
	}

	[Token(Token = "0x600417D")]
	[Address(RVA = "0x217E3A0", Offset = "0x217C9A0", VA = "0x18217E3A0")]
	protected static bool IsHeadHit(BaseTitan victim, BaseHitbox hitbox, Collider collider)
	{
		return default(bool);
	}

	[Token(Token = "0x600417E")]
	[Address(RVA = "0x217D790", Offset = "0x217BD90", VA = "0x18217D790")]
	protected static bool HasMeleeReaction(string type, string reaction)
	{
		return default(bool);
	}

	[Token(Token = "0x600417F")]
	[Address(RVA = "0x217E2A0", Offset = "0x217C8A0", VA = "0x18217E2A0")]
	protected static bool IsComboStunType(string type)
	{
		return default(bool);
	}

	[Token(Token = "0x6004180")]
	[Address(RVA = "0x217E2E0", Offset = "0x217C8E0", VA = "0x18217E2E0")]
	protected static bool IsDecapitateType(string type)
	{
		return default(bool);
	}

	[Token(Token = "0x6004181")]
	[Address(RVA = "0x217E530", Offset = "0x217CB30", VA = "0x18217E530")]
	protected static bool IsKnockbackType(string type)
	{
		return default(bool);
	}

	[Token(Token = "0x6004182")]
	[Address(RVA = "0x217E570", Offset = "0x217CB70", VA = "0x18217E570")]
	protected static bool IsMeleeHitType(string type)
	{
		return default(bool);
	}

	[Token(Token = "0x6004183")]
	[Address(RVA = "0x217D350", Offset = "0x217B950", VA = "0x18217D350")]
	protected float GetMeleeStunTime(string type)
	{
		return default(float);
	}

	[Token(Token = "0x6004184")]
	[Address(RVA = "0x217CD40", Offset = "0x217B340", VA = "0x18217CD40")]
	public float GetCurrentSpeed()
	{
		return default(float);
	}

	[Token(Token = "0x6004186")]
	[Address(RVA = "0x217ABA0", Offset = "0x21791A0", VA = "0x18217ABA0", Slot = "145")]
	public virtual bool CanAction()
	{
		return default(bool);
	}

	[Token(Token = "0x6004187")]
	[Address(RVA = "0x217AC10", Offset = "0x2179210", VA = "0x18217AC10", Slot = "146")]
	public virtual bool CanEmote()
	{
		return default(bool);
	}

	[Token(Token = "0x6004189")]
	[Address(RVA = "0x217AC50", Offset = "0x2179250", VA = "0x18217AC50", Slot = "147")]
	public virtual bool CanStun()
	{
		return default(bool);
	}

	[Token(Token = "0x600418A")]
	[Address(RVA = "0x217E7F0", Offset = "0x217CDF0", VA = "0x18217E7F0", Slot = "148")]
	public virtual void Jump(Vector3 direction)
	{
	}

	[Token(Token = "0x600418B")]
	[Address(RVA = "0x2180A30", Offset = "0x217F030", VA = "0x182180A30", Slot = "149")]
	public virtual void StartJump()
	{
	}

	[Token(Token = "0x600418C")]
	[Address(RVA = "0x217A7D0", Offset = "0x2178DD0", VA = "0x18217A7D0", Slot = "150")]
	public virtual void Attack(string attack)
	{
	}

	[Token(Token = "0x600418D")]
	[Address(RVA = "0x217ABF0", Offset = "0x21791F0", VA = "0x18217ABF0", Slot = "151")]
	public virtual bool CanAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x600418E")]
	[Address(RVA = "0x217AC70", Offset = "0x2179270", VA = "0x18217AC70")]
	public bool CanUseAttack(TitanAttackInfo attack)
	{
		return default(bool);
	}

	[Token(Token = "0x600418F")]
	[Address(RVA = "0x217F650", Offset = "0x217DC50", VA = "0x18217F650", Slot = "152")]
	public virtual void ResetAttackState(string attack)
	{
	}

	[Token(Token = "0x6004190")]
	[Address(RVA = "0x217CBD0", Offset = "0x217B1D0", VA = "0x18217CBD0")]
	public float GetAttackSpeed(string attack)
	{
		return default(float);
	}

	[Token(Token = "0x6004191")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "153")]
	public virtual void Kick()
	{
	}

	[Token(Token = "0x6004192")]
	[Address(RVA = "0x21812C0", Offset = "0x217F8C0", VA = "0x1821812C0", Slot = "154")]
	public virtual void Stun()
	{
	}

	[Token(Token = "0x6004193")]
	[Address(RVA = "0x21811A0", Offset = "0x217F7A0", VA = "0x1821811A0", Slot = "155")]
	public virtual void Stun(float time, bool refresh)
	{
	}

	[Token(Token = "0x6004194")]
	[Address(RVA = "0x217EE90", Offset = "0x217D490", VA = "0x18217EE90")]
	protected void OnHitTitan(BaseHitbox hitbox, BaseTitan victim, Collider collider, int damage, bool firstHit)
	{
	}

	[Token(Token = "0x6004195")]
	[Address(RVA = "0x217D070", Offset = "0x217B670", VA = "0x18217D070")]
	protected void GetMeleeHit(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x6004196")]
	[Address(RVA = "0x217EE10", Offset = "0x217D410", VA = "0x18217EE10", Slot = "156")]
	protected virtual void OnFinisherKill(Vector3 direction, bool launch, bool decapitate)
	{
	}

	[Token(Token = "0x6004197")]
	[Address(RVA = "0x217ED90", Offset = "0x217D390", VA = "0x18217ED90")]
	protected void Launch(Vector3 direction)
	{
	}

	[Token(Token = "0x6004198")]
	[Address(RVA = "0x217F5B0", Offset = "0x217DBB0", VA = "0x18217F5B0")]
	protected void Push(Vector3 direction)
	{
	}

	[Token(Token = "0x6004199")]
	[Address(RVA = "0x2180100", Offset = "0x217E700", VA = "0x182180100")]
	protected void SetLaunchVelocity(Vector3 velocity, float time)
	{
	}

	[Token(Token = "0x600419A")]
	[Address(RVA = "0x217F810", Offset = "0x217DE10", VA = "0x18217F810", Slot = "157")]
	public virtual void Run()
	{
	}

	[Token(Token = "0x600419B")]
	[Address(RVA = "0x2180950", Offset = "0x217EF50", VA = "0x182180950", Slot = "158")]
	public virtual void Sprint()
	{
	}

	[Token(Token = "0x600419C")]
	[Address(RVA = "0x21826D0", Offset = "0x2180CD0", VA = "0x1821826D0", Slot = "159")]
	public virtual void WallClimb()
	{
	}

	[Token(Token = "0x600419D")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "160")]
	public virtual void Eat()
	{
	}

	[Token(Token = "0x600419E")]
	[Address(RVA = "0x21825F0", Offset = "0x2180BF0", VA = "0x1821825F0", Slot = "161")]
	public virtual void Walk()
	{
	}

	[Token(Token = "0x600419F")]
	[Address(RVA = "0x217D900", Offset = "0x217BF00", VA = "0x18217D900", Slot = "162")]
	public virtual void Idle()
	{
	}

	[Token(Token = "0x60041A0")]
	[Address(RVA = "0x217D890", Offset = "0x217BE90", VA = "0x18217D890", Slot = "163")]
	public virtual void Idle(float fadeTime)
	{
	}

	[Token(Token = "0x60041A1")]
	[Address(RVA = "0x217D830", Offset = "0x217BE30", VA = "0x18217D830", Slot = "164")]
	public virtual void IdleWait(float waitTime)
	{
	}

	[Token(Token = "0x60041A2")]
	[Address(RVA = "0x217E960", Offset = "0x217CF60", VA = "0x18217E960", Slot = "165")]
	public virtual void Land()
	{
	}

	[Token(Token = "0x60041A3")]
	[Address(RVA = "0x217B910", Offset = "0x2179F10", VA = "0x18217B910", Slot = "166")]
	public virtual void Fall()
	{
	}

	[Token(Token = "0x60041A4")]
	[Address(RVA = "0x21813E0", Offset = "0x217F9E0", VA = "0x1821813E0", Slot = "167")]
	public virtual void Turn(Vector3 targetDirection)
	{
	}

	[Token(Token = "0x60041A5")]
	[Address(RVA = "0x2180B40", Offset = "0x217F140", VA = "0x182180B40")]
	protected void StartTurn(Vector3 targetDirection, string animation, float turnTime)
	{
	}

	[Token(Token = "0x60041A6")]
	[Address(RVA = "0x217A960", Offset = "0x2178F60", VA = "0x18217A960", Slot = "168")]
	public virtual void Blind()
	{
	}

	[Token(Token = "0x60041A7")]
	[Address(RVA = "0x217B5A0", Offset = "0x2179BA0", VA = "0x18217B5A0", Slot = "169")]
	public virtual void Cripple(float time = 0f)
	{
	}

	[Token(Token = "0x60041A8")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "80")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x60041A9")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "170")]
	protected virtual void RegenerateWardedWeakSpot()
	{
	}

	[Token(Token = "0x60041AA")]
	[Address(RVA = "0x217CAC0", Offset = "0x217B0C0", VA = "0x18217CAC0", Slot = "81")]
	public override void ForceAnimation(string animation, float fade)
	{
	}

	[Token(Token = "0x60041AB")]
	[Address(RVA = "0x2182580", Offset = "0x2180B80", VA = "0x182182580", Slot = "84")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__174))]
	protected override IEnumerator WaitAndDie()
	{
		return null;
	}

	[Token(Token = "0x60041AC")]
	[Address(RVA = "0x217D510", Offset = "0x217BB10", VA = "0x18217D510")]
	protected float GetSpawnEffectSize()
	{
		return default(float);
	}

	[Token(Token = "0x60041AD")]
	[Address(RVA = "0x217D600", Offset = "0x217BC00", VA = "0x18217D600", Slot = "171")]
	[PunRPC]
	public virtual void GrabRPC(int viewId, bool left, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60041AE")]
	[Address(RVA = "0x2181500", Offset = "0x217FB00", VA = "0x182181500", Slot = "172")]
	[PunRPC]
	public virtual void UngrabRPC(int viewId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60041AF")]
	[Address(RVA = "0x21815E0", Offset = "0x217FBE0", VA = "0x1821815E0", Slot = "173")]
	public virtual void Ungrab()
	{
	}

	[Token(Token = "0x60041B0")]
	[Address(RVA = "0x217B8D0", Offset = "0x2179ED0", VA = "0x18217B8D0", Slot = "174")]
	[PunRPC]
	public virtual void DecreaseAttackSpeedRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60041B1")]
	[Address(RVA = "0x217B1D0", Offset = "0x21797D0", VA = "0x18217B1D0", Slot = "175")]
	public virtual void Confuse()
	{
	}

	[Token(Token = "0x60041B2")]
	[Address(RVA = "0x217F630", Offset = "0x217DC30", VA = "0x18217F630")]
	protected void ResetAttackSpeed()
	{
	}

	[Token(Token = "0x60041B3")]
	[Address(RVA = "0x217F470", Offset = "0x217DA70", VA = "0x18217F470", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x60041B4")]
	[Address(RVA = "0x2180FF0", Offset = "0x217F5F0", VA = "0x182180FF0")]
	protected void StateAction(TitanState state, string animation, float fade = 0.1f, bool deactivateHitboxes = true)
	{
	}

	[Token(Token = "0x60041B5")]
	[Address(RVA = "0x2181080", Offset = "0x217F680", VA = "0x182181080")]
	protected void StateAttack(string animation, float fade = 0.1f, bool deactivateHitboxes = true)
	{
	}

	[Token(Token = "0x60041B6")]
	[Address(RVA = "0x2180EA0", Offset = "0x217F4A0", VA = "0x182180EA0")]
	protected void StateActionWithTime(TitanState state, string animation, float stateTime, float fade = 0.1f, bool deactivateHitboxes = true, float speed = 0f)
	{
	}

	[Token(Token = "0x60041B7")]
	[Address(RVA = "0x217FCE0", Offset = "0x217E2E0", VA = "0x18217FCE0")]
	protected void SetAnimationUpdateMode(bool always)
	{
	}

	[Token(Token = "0x60041B8")]
	[Address(RVA = "0x217A820", Offset = "0x2178E20", VA = "0x18217A820", Slot = "101")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60041B9")]
	[Address(RVA = "0x217B450", Offset = "0x2179A50", VA = "0x18217B450", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x60041BA")]
	[Address(RVA = "0x217B260", Offset = "0x2179860", VA = "0x18217B260", Slot = "176")]
	protected virtual void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x60041BB")]
	[Address(RVA = "0x217CC90", Offset = "0x217B290", VA = "0x18217CC90", Slot = "77")]
	public override Transform GetCameraAnchor()
	{
		return null;
	}

	[Token(Token = "0x60041BC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "177")]
	protected virtual void UpdateDisableArm()
	{
	}

	[Token(Token = "0x60041BD")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "178")]
	public virtual void DisableArm(bool left)
	{
	}

	[Token(Token = "0x60041BE")]
	[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "179")]
	public virtual bool IsToggleColliderActive(Collider collider)
	{
		return default(bool);
	}

	[Token(Token = "0x60041BF")]
	[Address(RVA = "0x2181730", Offset = "0x217FD30", VA = "0x182181730", Slot = "180")]
	protected virtual void UpdateTurn()
	{
	}

	[Token(Token = "0x60041C0")]
	[Address(RVA = "0x217D4B0", Offset = "0x217BAB0", VA = "0x18217D4B0", Slot = "181")]
	protected virtual string GetSitIdleAniamtion()
	{
		return null;
	}

	[Token(Token = "0x60041C1")]
	[Address(RVA = "0x217D480", Offset = "0x217BA80", VA = "0x18217D480", Slot = "182")]
	protected virtual string GetSitFallAnimation()
	{
		return null;
	}

	[Token(Token = "0x60041C2")]
	[Address(RVA = "0x217D4E0", Offset = "0x217BAE0", VA = "0x18217D4E0", Slot = "183")]
	protected virtual string GetSitUpAnimation()
	{
		return null;
	}

	[Token(Token = "0x60041C3")]
	[Address(RVA = "0x217FD10", Offset = "0x217E310", VA = "0x18217FD10")]
	protected void SetDefaultVelocityLerp()
	{
	}

	[Token(Token = "0x60041C4")]
	[Address(RVA = "0x2181800", Offset = "0x217FE00", VA = "0x182181800", Slot = "184")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x60041C5")]
	[Address(RVA = "0x2181180", Offset = "0x217F780", VA = "0x182181180", Slot = "185")]
	public virtual void StopWallClimb()
	{
	}

	[Token(Token = "0x60041C6")]
	[Address(RVA = "0x217B9F0", Offset = "0x2179FF0", VA = "0x18217B9F0", Slot = "113")]
	protected override void FixedUpdate()
	{
	}

	[Token(Token = "0x60041C7")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "186")]
	protected virtual void FixedUpdateAttack()
	{
	}

	[Token(Token = "0x60041C8")]
	[Address(RVA = "0x217FFB0", Offset = "0x217E5B0", VA = "0x18217FFB0")]
	protected void SetDefaultVelocity()
	{
	}

	[Token(Token = "0x60041C9")]
	[Address(RVA = "0x217EC50", Offset = "0x217D250", VA = "0x18217EC50", Slot = "114")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x60041CA")]
	[Address(RVA = "0x217E650", Offset = "0x217CC50", VA = "0x18217E650")]
	protected bool IsPlayingClip(string clip)
	{
		return default(bool);
	}

	[Token(Token = "0x60041CB")]
	[Address(RVA = "0x217ACD0", Offset = "0x21792D0", VA = "0x18217ACD0", Slot = "107")]
	protected override void CheckGround()
	{
	}

	[Token(Token = "0x60041CC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "187")]
	protected virtual void UpdateAttack()
	{
	}

	[Token(Token = "0x60041CD")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "188")]
	protected virtual void UpdateEat()
	{
	}

	[Token(Token = "0x60041CE")]
	[Address(RVA = "0x217B7B0", Offset = "0x2179DB0", VA = "0x18217B7B0", Slot = "189")]
	protected virtual void DeactivateAllHitboxes()
	{
	}

	[Token(Token = "0x60041CF")]
	[Address(RVA = "0x2180370", Offset = "0x217E970", VA = "0x182180370")]
	[PunRPC]
	public void SetSizeRPC(float size, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60041D0")]
	[Address(RVA = "0x217F8F0", Offset = "0x217DEF0", VA = "0x18217F8F0", Slot = "190")]
	protected virtual void ScaleSounds(float size)
	{
	}

	[Token(Token = "0x60041D1")]
	[Address(RVA = "0x2180290", Offset = "0x217E890", VA = "0x182180290", Slot = "191")]
	protected virtual void SetSizeParticles(float size)
	{
	}

	[Token(Token = "0x60041D2")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "192")]
	protected virtual void SetSizeAnimations(float size)
	{
	}

	[Token(Token = "0x60041D3")]
	[Address(RVA = "0x2180540", Offset = "0x217EB40", VA = "0x182180540")]
	public void SetSize(float size)
	{
	}

	[Token(Token = "0x60041D4")]
	[Address(RVA = "0x217CBA0", Offset = "0x217B1A0", VA = "0x18217CBA0", Slot = "193")]
	protected virtual float GetAnimationTime()
	{
		return default(float);
	}

	[Token(Token = "0x60041D5")]
	[Address(RVA = "0x217D020", Offset = "0x217B620", VA = "0x18217D020", Slot = "194")]
	protected virtual float GetHitboxTime(float normalizedLength)
	{
		return default(float);
	}

	[Token(Token = "0x60041D6")]
	[Address(RVA = "0x217B6F0", Offset = "0x2179CF0", VA = "0x18217B6F0", Slot = "195")]
	protected virtual void DamagedGrunt(float chance = 1f)
	{
	}

	[Token(Token = "0x60041D7")]
	[Address(RVA = "0x217D540", Offset = "0x217BB40", VA = "0x18217D540", Slot = "196")]
	protected virtual void GrabGrunt(float chance = 1f)
	{
	}

	[Token(Token = "0x60041D8")]
	[Address(RVA = "0x2180D50", Offset = "0x217F350", VA = "0x182180D50", Slot = "104")]
	protected override void Start()
	{
	}

	[Token(Token = "0x60041D9")]
	[Address(RVA = "0x217D700", Offset = "0x217BD00", VA = "0x18217D700")]
	[IteratorStateMachine(typeof(_003CHandleSpawnCollisionCoroutine_003Ed__220))]
	protected IEnumerator HandleSpawnCollisionCoroutine(float time, float maxSpeed)
	{
		return null;
	}

	[Token(Token = "0x60041DA")]
	[Address(RVA = "0x21812E0", Offset = "0x217F8E0", VA = "0x1821812E0", Slot = "197")]
	protected virtual void ToggleSitPushbox(bool sit)
	{
	}

	[Token(Token = "0x60041DB")]
	[Address(RVA = "0x21816F0", Offset = "0x217FCF0", VA = "0x1821816F0", Slot = "198")]
	protected virtual void UpdateAnimationColliders()
	{
	}

	[Token(Token = "0x60041DC")]
	[Address(RVA = "0x217E6D0", Offset = "0x217CCD0", VA = "0x18217E6D0", Slot = "199")]
	protected virtual bool IsPlayingSitAnimation()
	{
		return default(bool);
	}

	[Token(Token = "0x60041DD")]
	[Address(RVA = "0x217CE00", Offset = "0x217B400", VA = "0x18217CE00", Slot = "118")]
	protected override string GetFootstepAudio(int phase)
	{
		return null;
	}

	[Token(Token = "0x60041DE")]
	[Address(RVA = "0x217CE40", Offset = "0x217B440", VA = "0x18217CE40", Slot = "117")]
	protected override int GetFootstepPhase()
	{
		return default(int);
	}

	[Token(Token = "0x60041DF")]
	[Address(RVA = "0x2180650", Offset = "0x217EC50", VA = "0x182180650", Slot = "200")]
	protected virtual void SpawnShatter(Vector3 position)
	{
	}

	[Token(Token = "0x60041E0")]
	[Address(RVA = "0x217B040", Offset = "0x2179640", VA = "0x18217B040", Slot = "201")]
	public virtual bool CheckNapeAngle(Vector3 hitPosition, float maxAngle)
	{
		return default(bool);
	}

	[Token(Token = "0x60041E1")]
	[Address(RVA = "0x217CCB0", Offset = "0x217B2B0", VA = "0x18217CCB0", Slot = "120")]
	public override Vector3 GetCenterPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x60041E2")]
	[Address(RVA = "0x217CD00", Offset = "0x217B300", VA = "0x18217CD00", Slot = "202")]
	public virtual float GetColliderToggleRadius()
	{
		return default(float);
	}

	[Token(Token = "0x60041E3")]
	[Address(RVA = "0x21827F0", Offset = "0x2180DF0", VA = "0x1821827F0")]
	protected BaseTitan()
	{
	}
}
