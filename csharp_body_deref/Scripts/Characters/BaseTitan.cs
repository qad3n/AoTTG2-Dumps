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

[Token(Token = "0x200070C")]
internal abstract class BaseTitan : BaseCharacter
{
	[Token(Token = "0x200070D")]
	[CompilerGenerated]
	private sealed class _003CHandleSpawnCollisionCoroutine_003Ed__228 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40021C3")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40021C4")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40021C5")]
		[FieldOffset(Offset = "0x20")]
		public BaseTitan _003C_003E4__this;

		[Token(Token = "0x40021C6")]
		[FieldOffset(Offset = "0x28")]
		public float maxSpeed;

		[Token(Token = "0x40021C7")]
		[FieldOffset(Offset = "0x2C")]
		public float time;

		[Token(Token = "0x17000BD5")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004485")]
			[Address(RVA = "0x5B2D420", Offset = "0x5B2C420", VA = "0x5B2D420", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000BD6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004487")]
			[Address(RVA = "0x5B2D470", Offset = "0x5B2C470", VA = "0x5B2D470", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6004482")]
		[Address(RVA = "0x5B2C1B0", Offset = "0x5B2B1B0", VA = "0x5B2C1B0")]
		[DebuggerHidden]
		public _003CHandleSpawnCollisionCoroutine_003Ed__228(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6004483")]
		[Address(RVA = "0x5B2D0E0", Offset = "0x5B2C0E0", VA = "0x5B2D0E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6004484")]
		[Address(RVA = "0x5B2D0F0", Offset = "0x5B2C0F0", VA = "0x5B2D0F0", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6004486")]
		[Address(RVA = "0x5B2D430", Offset = "0x5B2C430", VA = "0x5B2D430", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x400217A")]
	[FieldOffset(Offset = "0x100")]
	public TitanState State;

	[Token(Token = "0x400217B")]
	[FieldOffset(Offset = "0x108")]
	public BaseTitanComponentCache BaseTitanCache;

	[Token(Token = "0x400217C")]
	[FieldOffset(Offset = "0x110")]
	public TitanColliderToggler TitanColliderToggler;

	[Token(Token = "0x400217E")]
	[FieldOffset(Offset = "0x120")]
	protected TitanDeathDissolve DeathDissolve;

	[Token(Token = "0x400217F")]
	[FieldOffset(Offset = "0x128")]
	public bool IsWalk;

	[Token(Token = "0x4002180")]
	[FieldOffset(Offset = "0x129")]
	public bool IsSprint;

	[Token(Token = "0x4002181")]
	[FieldOffset(Offset = "0x12A")]
	public bool IsSit;

	[Token(Token = "0x4002182")]
	[FieldOffset(Offset = "0x130")]
	public Human HoldHuman;

	[Token(Token = "0x4002183")]
	[FieldOffset(Offset = "0x138")]
	public bool HoldHumanLeft;

	[Token(Token = "0x4002184")]
	[FieldOffset(Offset = "0x13C")]
	public float Size;

	[Token(Token = "0x4002185")]
	[FieldOffset(Offset = "0x140")]
	public float ClimbCooldown;

	[Token(Token = "0x4002186")]
	[FieldOffset(Offset = "0x144")]
	public float StunTime;

	[Token(Token = "0x4002187")]
	[FieldOffset(Offset = "0x148")]
	public float ActionPause;

	[Token(Token = "0x4002188")]
	[FieldOffset(Offset = "0x14C")]
	public float AttackPause;

	[Token(Token = "0x4002189")]
	[FieldOffset(Offset = "0x150")]
	public float TurnPause;

	[Token(Token = "0x400218A")]
	[FieldOffset(Offset = "0x154")]
	public float MaxSprintStamina;

	[Token(Token = "0x400218B")]
	[FieldOffset(Offset = "0x158")]
	public float SprintStaminaRecover;

	[Token(Token = "0x400218C")]
	[FieldOffset(Offset = "0x15C")]
	public float SprintStaminaConsumption;

	[Token(Token = "0x400218D")]
	[FieldOffset(Offset = "0x160")]
	public float CurrentSprintStamina;

	[Token(Token = "0x400218E")]
	[FieldOffset(Offset = "0x168")]
	public ITargetable TargetEnemy;

	[Token(Token = "0x400218F")]
	[FieldOffset(Offset = "0x170")]
	protected BaseTitanAnimations BaseTitanAnimations;

	[Token(Token = "0x4002190")]
	private const float MaxGroundedFallSpeed = 100f;

	[Token(Token = "0x4002191")]
	[FieldOffset(Offset = "0x178")]
	private LayerMask TitanGroundMaskLayers;

	[Token(Token = "0x4002192")]
	[FieldOffset(Offset = "0x17C")]
	public float AttackSpeedMultiplier;

	[Token(Token = "0x4002193")]
	[FieldOffset(Offset = "0x180")]
	public float ConfusedTime;

	[Token(Token = "0x4002194")]
	[FieldOffset(Offset = "0x184")]
	public float PreviousAttackSpeedMultiplier;

	[Token(Token = "0x4002195")]
	[FieldOffset(Offset = "0x188")]
	public Dictionary<string, float> AttackSpeeds;

	[Token(Token = "0x4002196")]
	[FieldOffset(Offset = "0x190")]
	public float RunSpeedBase;

	[Token(Token = "0x4002197")]
	[FieldOffset(Offset = "0x194")]
	public float WalkSpeedBase;

	[Token(Token = "0x4002198")]
	[FieldOffset(Offset = "0x198")]
	public float RunSpeedPerLevel;

	[Token(Token = "0x4002199")]
	[FieldOffset(Offset = "0x19C")]
	public float WalkSpeedPerLevel;

	[Token(Token = "0x400219A")]
	[FieldOffset(Offset = "0x1A0")]
	public float JumpForce;

	[Token(Token = "0x400219B")]
	[FieldOffset(Offset = "0x1A4")]
	public float RotateSpeed;

	[Token(Token = "0x400219C")]
	[FieldOffset(Offset = "0x1A8")]
	public float TurnSpeed;

	[Token(Token = "0x400219D")]
	[FieldOffset(Offset = "0x1AC")]
	public bool SizeScaledTurnSpeed;

	[Token(Token = "0x400219E")]
	[FieldOffset(Offset = "0x1AD")]
	public bool LeftArmDisabled;

	[Token(Token = "0x400219F")]
	[FieldOffset(Offset = "0x1AE")]
	public bool RightArmDisabled;

	[Token(Token = "0x40021A0")]
	[FieldOffset(Offset = "0x1AF")]
	public bool LeftHandDisabled;

	[Token(Token = "0x40021A1")]
	[FieldOffset(Offset = "0x1B0")]
	public bool RightHandDisabled;

	[Token(Token = "0x40021A2")]
	[FieldOffset(Offset = "0x1B4")]
	protected Vector3 LastTargetDirection;

	[Token(Token = "0x40021A3")]
	[FieldOffset(Offset = "0x1C0")]
	protected Vector3 _wallClimbForward;

	[Token(Token = "0x40021A4")]
	[FieldOffset(Offset = "0x1CC")]
	protected Quaternion _turnStartRotation;

	[Token(Token = "0x40021A5")]
	[FieldOffset(Offset = "0x1DC")]
	protected Quaternion _turnTargetRotation;

	[Token(Token = "0x40021A6")]
	[FieldOffset(Offset = "0x1EC")]
	public Vector3 _jumpDirection;

	[Token(Token = "0x40021A7")]
	[FieldOffset(Offset = "0x1F8")]
	protected float _maxTurnTime;

	[Token(Token = "0x40021A8")]
	[FieldOffset(Offset = "0x1FC")]
	protected float _currentTurnTime;

	[Token(Token = "0x40021A9")]
	[FieldOffset(Offset = "0x200")]
	protected float _currentGroundDistance;

	[Token(Token = "0x40021AA")]
	[FieldOffset(Offset = "0x204")]
	protected float _currentCrippleTime;

	[Token(Token = "0x40021AB")]
	[FieldOffset(Offset = "0x208")]
	private float _crippleEndTime;

	[Token(Token = "0x40021AC")]
	[FieldOffset(Offset = "0x20C")]
	protected float _currentFallTotalTime;

	[Token(Token = "0x40021AD")]
	[FieldOffset(Offset = "0x210")]
	protected float _currentFallStuckTime;

	[Token(Token = "0x40021AE")]
	[FieldOffset(Offset = "0x214")]
	protected float _disableCooldownLeft;

	[Token(Token = "0x40021AF")]
	[FieldOffset(Offset = "0x218")]
	protected float _checkGroundTimeLeft;

	[Token(Token = "0x40021B0")]
	[FieldOffset(Offset = "0x21C")]
	protected float _climbCooldownLeft;

	[Token(Token = "0x40021B1")]
	[FieldOffset(Offset = "0x220")]
	protected Vector3 _startPosition;

	[Token(Token = "0x40021B2")]
	[FieldOffset(Offset = "0x22C")]
	public float _stateTimeLeft;

	[Token(Token = "0x40021B3")]
	[FieldOffset(Offset = "0x230")]
	protected string _currentAttackAnimation;

	[Token(Token = "0x40021B4")]
	[FieldOffset(Offset = "0x238")]
	protected string _currentAttack;

	[Token(Token = "0x40021B5")]
	[FieldOffset(Offset = "0x240")]
	protected string _currentStateAnimation;

	[Token(Token = "0x40021B6")]
	[FieldOffset(Offset = "0x248")]
	protected float _currentAttackSpeed;

	[Token(Token = "0x40021B7")]
	[FieldOffset(Offset = "0x24C")]
	protected int _currentAttackStage;

	[Token(Token = "0x40021B8")]
	[FieldOffset(Offset = "0x250")]
	protected float _launchTimeLeft;

	[Token(Token = "0x40021B9")]
	[FieldOffset(Offset = "0x254")]
	protected bool _launched;

	[Token(Token = "0x40021BA")]
	[FieldOffset(Offset = "0x255")]
	protected bool _decapitated;

	[Token(Token = "0x40021BB")]
	[FieldOffset(Offset = "0x256")]
	protected bool _needFreshCore;

	[Token(Token = "0x40021BC")]
	[FieldOffset(Offset = "0x258")]
	protected Vector3 _attackVelocity;

	[Token(Token = "0x40021BD")]
	[FieldOffset(Offset = "0x264")]
	protected Vector3 _startCoreAttackPosition;

	[Token(Token = "0x40021BE")]
	[FieldOffset(Offset = "0x270")]
	protected Vector3 _previousCoreLocalPosition;

	[Token(Token = "0x40021BF")]
	[FieldOffset(Offset = "0x27C")]
	protected Vector3 _furthestCoreLocalPosition;

	[Token(Token = "0x40021C0")]
	[FieldOffset(Offset = "0x288")]
	protected Dictionary<string, float> _rootMotionAnimations;

	[Token(Token = "0x40021C1")]
	[FieldOffset(Offset = "0x290")]
	public Dictionary<string, string> AttackAnimations;

	[Token(Token = "0x40021C2")]
	[FieldOffset(Offset = "0x298")]
	public bool EnableAI;

	[Token(Token = "0x17000BB9")]
	public bool GoreEnabled
	{
		[Token(Token = "0x60043F7")]
		[Address(RVA = "0x5B252C0", Offset = "0x5B242C0", VA = "0x5B252C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60043F8")]
		[Address(RVA = "0x5B252D0", Offset = "0x5B242D0", VA = "0x5B252D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000BBA")]
	protected bool DeathCollidersDisabled
	{
		[Token(Token = "0x60043F9")]
		[Address(RVA = "0x5B21C10", Offset = "0x5B20C10", VA = "0x5B21C10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BBB")]
	public virtual float DefaultCrippleTime
	{
		[Token(Token = "0x60043FA")]
		[Address(RVA = "0x5B252E0", Offset = "0x5B242E0", VA = "0x5B252E0", Slot = "121")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BBC")]
	public virtual bool CanWallClimb
	{
		[Token(Token = "0x60043FB")]
		[Address(RVA = "0x5B252F0", Offset = "0x5B242F0", VA = "0x5B252F0", Slot = "122")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BBD")]
	public virtual bool CanSprint
	{
		[Token(Token = "0x60043FC")]
		[Address(RVA = "0x5B25300", Offset = "0x5B24300", VA = "0x5B25300", Slot = "123")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BBE")]
	public virtual float ComboStunTime
	{
		[Token(Token = "0x60043FD")]
		[Address(RVA = "0x5B25310", Offset = "0x5B24310", VA = "0x5B25310", Slot = "124")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BBF")]
	public virtual float LaunchSizeRatio
	{
		[Token(Token = "0x60043FE")]
		[Address(RVA = "0x5B25320", Offset = "0x5B24320", VA = "0x5B25320", Slot = "125")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BC0")]
	public virtual float LaunchForce
	{
		[Token(Token = "0x60043FF")]
		[Address(RVA = "0x5B25330", Offset = "0x5B24330", VA = "0x5B25330", Slot = "126")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BC1")]
	public virtual float LaunchTime
	{
		[Token(Token = "0x6004400")]
		[Address(RVA = "0x5B25340", Offset = "0x5B24340", VA = "0x5B25340", Slot = "127")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BC2")]
	public virtual float PushForce
	{
		[Token(Token = "0x6004401")]
		[Address(RVA = "0x5B25350", Offset = "0x5B24350", VA = "0x5B25350", Slot = "128")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BC3")]
	public virtual float PushTime
	{
		[Token(Token = "0x6004402")]
		[Address(RVA = "0x5B25360", Offset = "0x5B24360", VA = "0x5B25360", Slot = "129")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BC4")]
	protected override float GroundDistance
	{
		[Token(Token = "0x6004403")]
		[Address(RVA = "0x5B25370", Offset = "0x5B24370", VA = "0x5B25370", Slot = "68")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BC5")]
	public override LayerMask GroundMask
	{
		[Token(Token = "0x6004404")]
		[Address(RVA = "0x5B25380", Offset = "0x5B24380", VA = "0x5B25380", Slot = "67")]
		get
		{
			return default(LayerMask);
		}
	}

	[Token(Token = "0x17000BC6")]
	protected virtual float DefaultRunSpeed
	{
		[Token(Token = "0x6004405")]
		[Address(RVA = "0x5B25390", Offset = "0x5B24390", VA = "0x5B25390", Slot = "130")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BC7")]
	protected virtual float DefaultWalkSpeed
	{
		[Token(Token = "0x6004406")]
		[Address(RVA = "0x5B253A0", Offset = "0x5B243A0", VA = "0x5B253A0", Slot = "131")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BC8")]
	protected virtual float DefaultJumpForce
	{
		[Token(Token = "0x6004407")]
		[Address(RVA = "0x5B253B0", Offset = "0x5B243B0", VA = "0x5B253B0", Slot = "132")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BC9")]
	protected virtual float DefaultRotateSpeed
	{
		[Token(Token = "0x6004408")]
		[Address(RVA = "0x5B253C0", Offset = "0x5B243C0", VA = "0x5B253C0", Slot = "133")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BCA")]
	protected virtual float SizeMultiplier
	{
		[Token(Token = "0x6004409")]
		[Address(RVA = "0x5B253D0", Offset = "0x5B243D0", VA = "0x5B253D0", Slot = "134")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BCB")]
	protected virtual float DisableCooldown
	{
		[Token(Token = "0x600440A")]
		[Address(RVA = "0x5B253E0", Offset = "0x5B243E0", VA = "0x5B253E0", Slot = "135")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BCC")]
	protected override Vector3 Gravity
	{
		[Token(Token = "0x600440B")]
		[Address(RVA = "0x5B253F0", Offset = "0x5B243F0", VA = "0x5B253F0", Slot = "58")]
		get
		{
			return default(Vector3);
		}
	}

	[Token(Token = "0x17000BCD")]
	protected virtual float CheckGroundTime
	{
		[Token(Token = "0x600440C")]
		[Address(RVA = "0x5B25440", Offset = "0x5B24440", VA = "0x5B25440", Slot = "136")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BCE")]
	protected LayerMask MapObjectMask
	{
		[Token(Token = "0x600440D")]
		[Address(RVA = "0x5B25450", Offset = "0x5B24450", VA = "0x5B25450")]
		get
		{
			return default(LayerMask);
		}
	}

	[Token(Token = "0x17000BCF")]
	protected virtual string MeleeHitType
	{
		[Token(Token = "0x6004413")]
		[Address(RVA = "0x5B25F80", Offset = "0x5B24F80", VA = "0x5B25F80", Slot = "141")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000BD0")]
	protected virtual bool BasicAttacksStunOnly
	{
		[Token(Token = "0x6004414")]
		[Address(RVA = "0x5B25FB0", Offset = "0x5B24FB0", VA = "0x5B25FB0", Slot = "142")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BD1")]
	public virtual bool TreatAsSmall
	{
		[Token(Token = "0x6004415")]
		[Address(RVA = "0x5B25FC0", Offset = "0x5B24FC0", VA = "0x5B25FC0", Slot = "143")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BD2")]
	public float WorldSize
	{
		[Token(Token = "0x6004416")]
		[Address(RVA = "0x5B25FD0", Offset = "0x5B24FD0", VA = "0x5B25FD0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000BD3")]
	public bool IsMoving
	{
		[Token(Token = "0x6004422")]
		[Address(RVA = "0x5B26650", Offset = "0x5B25650", VA = "0x5B26650")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000BD4")]
	protected bool IsSitting
	{
		[Token(Token = "0x6004425")]
		[Address(RVA = "0x5B266E0", Offset = "0x5B256E0", VA = "0x5B266E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600440E")]
	[Address(RVA = "0x5B254F0", Offset = "0x5B244F0", VA = "0x5B254F0", Slot = "137")]
	public virtual void Init(bool ai, string team, JSONNode data)
	{
	}

	[Token(Token = "0x600440F")]
	[Address(RVA = "0x5B25E90", Offset = "0x5B24E90", VA = "0x5B25E90", Slot = "79")]
	protected override void CreateDetection()
	{
	}

	[Token(Token = "0x6004410")]
	[Address(RVA = "0x5B25F00", Offset = "0x5B24F00", VA = "0x5B25F00", Slot = "138")]
	protected virtual Dictionary<string, float> GetRootMotionAnimations()
	{
		return null;
	}

	[Token(Token = "0x6004411")]
	[Address(RVA = "0x5B25F60", Offset = "0x5B24F60", VA = "0x5B25F60", Slot = "139")]
	public virtual bool IsGrabAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x6004412")]
	[Address(RVA = "0x5B25F70", Offset = "0x5B24F70", VA = "0x5B25F70", Slot = "140")]
	protected virtual bool IsComboAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x6004417")]
	[Address(RVA = "0x5B26000", Offset = "0x5B25000", VA = "0x5B26000")]
	protected bool IsKickAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x6004418")]
	[Address(RVA = "0x5B26040", Offset = "0x5B25040", VA = "0x5B26040")]
	protected bool IsFinisherHit()
	{
		return default(bool);
	}

	[Token(Token = "0x6004419")]
	[Address(RVA = "0x5B260B0", Offset = "0x5B250B0", VA = "0x5B260B0", Slot = "144")]
	protected virtual string GetFinisherReaction(bool kick, bool smallVictim, bool headHit)
	{
		return null;
	}

	[Token(Token = "0x600441A")]
	[Address(RVA = "0x5B26120", Offset = "0x5B25120", VA = "0x5B26120")]
	protected static bool IsHeadHit(BaseTitan victim, BaseHitbox hitbox, Collider collider)
	{
		return default(bool);
	}

	[Token(Token = "0x600441B")]
	[Address(RVA = "0x5B26240", Offset = "0x5B25240", VA = "0x5B26240")]
	protected static bool HasMeleeReaction(string type, string reaction)
	{
		return default(bool);
	}

	[Token(Token = "0x600441C")]
	[Address(RVA = "0x5B262D0", Offset = "0x5B252D0", VA = "0x5B262D0")]
	protected static bool IsComboStunType(string type)
	{
		return default(bool);
	}

	[Token(Token = "0x600441D")]
	[Address(RVA = "0x5B26380", Offset = "0x5B25380", VA = "0x5B26380")]
	protected static bool IsDecapitateType(string type)
	{
		return default(bool);
	}

	[Token(Token = "0x600441E")]
	[Address(RVA = "0x5B26430", Offset = "0x5B25430", VA = "0x5B26430")]
	protected static bool IsKnockbackType(string type)
	{
		return default(bool);
	}

	[Token(Token = "0x600441F")]
	[Address(RVA = "0x5B264E0", Offset = "0x5B254E0", VA = "0x5B264E0")]
	protected static bool IsMeleeHitType(string type)
	{
		return default(bool);
	}

	[Token(Token = "0x6004420")]
	[Address(RVA = "0x5B265B0", Offset = "0x5B255B0", VA = "0x5B265B0")]
	protected float GetMeleeStunTime(string type)
	{
		return default(float);
	}

	[Token(Token = "0x6004421")]
	[Address(RVA = "0x5B26620", Offset = "0x5B25620", VA = "0x5B26620")]
	public float GetCurrentSpeed()
	{
		return default(float);
	}

	[Token(Token = "0x6004423")]
	[Address(RVA = "0x5B26660", Offset = "0x5B25660", VA = "0x5B26660", Slot = "145")]
	public virtual bool CanAction()
	{
		return default(bool);
	}

	[Token(Token = "0x6004424")]
	[Address(RVA = "0x5B266A0", Offset = "0x5B256A0", VA = "0x5B266A0", Slot = "146")]
	public virtual bool CanEmote()
	{
		return default(bool);
	}

	[Token(Token = "0x6004426")]
	[Address(RVA = "0x5B26730", Offset = "0x5B25730", VA = "0x5B26730", Slot = "147")]
	public virtual bool CanStun()
	{
		return default(bool);
	}

	[Token(Token = "0x6004427")]
	[Address(RVA = "0x5B26750", Offset = "0x5B25750", VA = "0x5B26750", Slot = "148")]
	public virtual void Jump(Vector3 direction)
	{
	}

	[Token(Token = "0x6004428")]
	[Address(RVA = "0x5B26910", Offset = "0x5B25910", VA = "0x5B26910", Slot = "149")]
	public virtual void StartJump()
	{
	}

	[Token(Token = "0x6004429")]
	[Address(RVA = "0x5B26AA0", Offset = "0x5B25AA0", VA = "0x5B26AA0", Slot = "150")]
	public virtual void Attack(string attack)
	{
	}

	[Token(Token = "0x600442A")]
	[Address(RVA = "0x5B26BC0", Offset = "0x5B25BC0", VA = "0x5B26BC0", Slot = "151")]
	public virtual bool CanAttack()
	{
		return default(bool);
	}

	[Token(Token = "0x600442B")]
	[Address(RVA = "0x5B26BE0", Offset = "0x5B25BE0", VA = "0x5B26BE0")]
	public bool CanUseAttack(TitanAttackInfo attack)
	{
		return default(bool);
	}

	[Token(Token = "0x600442C")]
	[Address(RVA = "0x5B26C30", Offset = "0x5B25C30", VA = "0x5B26C30", Slot = "152")]
	public virtual void ResetAttackState(string attack)
	{
	}

	[Token(Token = "0x600442D")]
	[Address(RVA = "0x5B26D40", Offset = "0x5B25D40", VA = "0x5B26D40")]
	public float GetAttackSpeed(string attack)
	{
		return default(float);
	}

	[Token(Token = "0x600442E")]
	[Address(RVA = "0x5B26DF0", Offset = "0x5B25DF0", VA = "0x5B26DF0", Slot = "153")]
	public virtual void Kick()
	{
	}

	[Token(Token = "0x600442F")]
	[Address(RVA = "0x5B26E00", Offset = "0x5B25E00", VA = "0x5B26E00", Slot = "154")]
	public virtual void Stun()
	{
	}

	[Token(Token = "0x6004430")]
	[Address(RVA = "0x5B26E20", Offset = "0x5B25E20", VA = "0x5B26E20", Slot = "155")]
	public virtual void Stun(float time, bool refresh)
	{
	}

	[Token(Token = "0x6004431")]
	[Address(RVA = "0x5B26F30", Offset = "0x5B25F30", VA = "0x5B26F30")]
	protected void OnHitTitan(BaseHitbox hitbox, BaseTitan victim, Collider collider, int damage, bool firstHit)
	{
	}

	[Token(Token = "0x6004432")]
	[Address(RVA = "0x5B27410", Offset = "0x5B26410", VA = "0x5B27410")]
	protected void GetMeleeHit(int viewId, string name, int damage, string type, string collider)
	{
	}

	[Token(Token = "0x6004433")]
	[Address(RVA = "0x5B27780", Offset = "0x5B26780", VA = "0x5B27780", Slot = "156")]
	protected virtual void OnFinisherKill(Vector3 direction, bool launch, bool decapitate)
	{
	}

	[Token(Token = "0x6004434")]
	[Address(RVA = "0x5B27800", Offset = "0x5B26800", VA = "0x5B27800")]
	protected void Launch(Vector3 direction)
	{
	}

	[Token(Token = "0x6004435")]
	[Address(RVA = "0x5B27700", Offset = "0x5B26700", VA = "0x5B27700")]
	protected void Push(Vector3 direction)
	{
	}

	[Token(Token = "0x6004436")]
	[Address(RVA = "0x5B27880", Offset = "0x5B26880", VA = "0x5B27880")]
	protected void SetLaunchVelocity(Vector3 velocity, float time)
	{
	}

	[Token(Token = "0x6004437")]
	[Address(RVA = "0x5B27A60", Offset = "0x5B26A60", VA = "0x5B27A60", Slot = "157")]
	public virtual void Run()
	{
	}

	[Token(Token = "0x6004438")]
	[Address(RVA = "0x5B27B30", Offset = "0x5B26B30", VA = "0x5B27B30", Slot = "158")]
	public virtual void Sprint()
	{
	}

	[Token(Token = "0x6004439")]
	[Address(RVA = "0x5B27C00", Offset = "0x5B26C00", VA = "0x5B27C00", Slot = "159")]
	public virtual void WallClimb()
	{
	}

	[Token(Token = "0x600443A")]
	[Address(RVA = "0x5B27D10", Offset = "0x5B26D10", VA = "0x5B27D10", Slot = "160")]
	public virtual void Eat()
	{
	}

	[Token(Token = "0x600443B")]
	[Address(RVA = "0x5B27D20", Offset = "0x5B26D20", VA = "0x5B27D20", Slot = "161")]
	public virtual void Walk()
	{
	}

	[Token(Token = "0x600443C")]
	[Address(RVA = "0x5B27DF0", Offset = "0x5B26DF0", VA = "0x5B27DF0", Slot = "162")]
	public virtual void Idle()
	{
	}

	[Token(Token = "0x600443D")]
	[Address(RVA = "0x5B27E20", Offset = "0x5B26E20", VA = "0x5B27E20", Slot = "163")]
	public virtual void Idle(float fadeTime)
	{
	}

	[Token(Token = "0x600443E")]
	[Address(RVA = "0x5B27E80", Offset = "0x5B26E80", VA = "0x5B27E80", Slot = "164")]
	public virtual void IdleWait(float waitTime)
	{
	}

	[Token(Token = "0x600443F")]
	[Address(RVA = "0x5B27EE0", Offset = "0x5B26EE0", VA = "0x5B27EE0", Slot = "165")]
	public virtual void Land()
	{
	}

	[Token(Token = "0x6004440")]
	[Address(RVA = "0x5B28160", Offset = "0x5B27160", VA = "0x5B28160", Slot = "166")]
	public virtual void Fall()
	{
	}

	[Token(Token = "0x6004441")]
	[Address(RVA = "0x5B28220", Offset = "0x5B27220", VA = "0x5B28220", Slot = "167")]
	public virtual void Turn(Vector3 targetDirection)
	{
	}

	[Token(Token = "0x6004442")]
	[Address(RVA = "0x5B28330", Offset = "0x5B27330", VA = "0x5B28330")]
	protected void StartTurn(Vector3 targetDirection, string animation, float turnTime)
	{
	}

	[Token(Token = "0x6004443")]
	[Address(RVA = "0x5B28510", Offset = "0x5B27510", VA = "0x5B28510", Slot = "168")]
	public virtual void Blind()
	{
	}

	[Token(Token = "0x6004444")]
	[Address(RVA = "0x5B286F0", Offset = "0x5B276F0", VA = "0x5B286F0", Slot = "169")]
	public virtual void Cripple(float time = 0f)
	{
	}

	[Token(Token = "0x6004445")]
	[Address(RVA = "0x5B288D0", Offset = "0x5B278D0", VA = "0x5B288D0", Slot = "80")]
	public override void Emote(string emote)
	{
	}

	[Token(Token = "0x6004446")]
	[Address(RVA = "0x5B288E0", Offset = "0x5B278E0", VA = "0x5B288E0", Slot = "170")]
	protected virtual void RegenerateWardedWeakSpot()
	{
	}

	[Token(Token = "0x6004447")]
	[Address(RVA = "0x5B288F0", Offset = "0x5B278F0", VA = "0x5B288F0", Slot = "81")]
	public override void ForceAnimation(string animation, float fade)
	{
	}

	[Token(Token = "0x6004448")]
	[Address(RVA = "0x5B289B0", Offset = "0x5B279B0", VA = "0x5B289B0")]
	protected float GetSpawnEffectSize()
	{
		return default(float);
	}

	[Token(Token = "0x6004449")]
	[Address(RVA = "0x5B289E0", Offset = "0x5B279E0", VA = "0x5B289E0", Slot = "171")]
	[PunRPC]
	public virtual void GrabRPC(int viewId, bool left, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600444A")]
	[Address(RVA = "0x5B28AF0", Offset = "0x5B27AF0", VA = "0x5B28AF0", Slot = "172")]
	[PunRPC]
	public virtual void UngrabRPC(int viewId, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600444B")]
	[Address(RVA = "0x5B28BF0", Offset = "0x5B27BF0", VA = "0x5B28BF0", Slot = "173")]
	public virtual void Ungrab()
	{
	}

	[Token(Token = "0x600444C")]
	[Address(RVA = "0x5B28CF0", Offset = "0x5B27CF0", VA = "0x5B28CF0", Slot = "174")]
	[PunRPC]
	public virtual void DecreaseAttackSpeedRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600444D")]
	[Address(RVA = "0x5B28D30", Offset = "0x5B27D30", VA = "0x5B28D30", Slot = "175")]
	public virtual void Confuse()
	{
	}

	[Token(Token = "0x600444E")]
	[Address(RVA = "0x5B28DC0", Offset = "0x5B27DC0", VA = "0x5B28DC0")]
	protected void ResetAttackSpeed()
	{
	}

	[Token(Token = "0x600444F")]
	[Address(RVA = "0x5B1F4B0", Offset = "0x5B1E4B0", VA = "0x5B1F4B0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x6004450")]
	[Address(RVA = "0x5B268B0", Offset = "0x5B258B0", VA = "0x5B268B0")]
	protected void StateAction(TitanState state, string animation, float fade = 0.1f, bool deactivateHitboxes = true)
	{
	}

	[Token(Token = "0x6004451")]
	[Address(RVA = "0x5B26AE0", Offset = "0x5B25AE0", VA = "0x5B26AE0")]
	protected void StateAttack(string animation, float fade = 0.1f, bool deactivateHitboxes = true)
	{
	}

	[Token(Token = "0x6004452")]
	[Address(RVA = "0x5B20660", Offset = "0x5B1F660", VA = "0x5B20660")]
	protected void StateActionWithTime(TitanState state, string animation, float stateTime, float fade = 0.1f, bool deactivateHitboxes = true, float speed = 0f)
	{
	}

	[Token(Token = "0x6004453")]
	[Address(RVA = "0x5B28DE0", Offset = "0x5B27DE0", VA = "0x5B28DE0")]
	protected void SetAnimationUpdateMode(bool always)
	{
	}

	[Token(Token = "0x6004454")]
	[Address(RVA = "0x5B28E00", Offset = "0x5B27E00", VA = "0x5B28E00", Slot = "101")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x6004455")]
	[Address(RVA = "0x5B211F0", Offset = "0x5B201F0", VA = "0x5B211F0", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
	}

	[Token(Token = "0x6004456")]
	[Address(RVA = "0x5B21320", Offset = "0x5B20320", VA = "0x5B21320", Slot = "176")]
	protected virtual void CreateAnimations(BaseTitanAnimations animations)
	{
	}

	[Token(Token = "0x6004457")]
	[Address(RVA = "0x5B29000", Offset = "0x5B28000", VA = "0x5B29000", Slot = "77")]
	public override Transform GetCameraAnchor()
	{
		return null;
	}

	[Token(Token = "0x6004458")]
	[Address(RVA = "0x5B29020", Offset = "0x5B28020", VA = "0x5B29020", Slot = "177")]
	protected virtual void UpdateDisableArm()
	{
	}

	[Token(Token = "0x6004459")]
	[Address(RVA = "0x5B29030", Offset = "0x5B28030", VA = "0x5B29030", Slot = "178")]
	public virtual void DisableArm(bool left)
	{
	}

	[Token(Token = "0x600445A")]
	[Address(RVA = "0x5B29040", Offset = "0x5B28040", VA = "0x5B29040", Slot = "179")]
	public virtual bool IsToggleColliderActive(Collider collider)
	{
		return default(bool);
	}

	[Token(Token = "0x600445B")]
	[Address(RVA = "0x5B29050", Offset = "0x5B28050", VA = "0x5B29050", Slot = "180")]
	protected virtual void UpdateTurn()
	{
	}

	[Token(Token = "0x600445C")]
	[Address(RVA = "0x5B29100", Offset = "0x5B28100", VA = "0x5B29100", Slot = "181")]
	protected virtual string GetSitIdleAniamtion()
	{
		return null;
	}

	[Token(Token = "0x600445D")]
	[Address(RVA = "0x5B29130", Offset = "0x5B28130", VA = "0x5B29130", Slot = "182")]
	protected virtual string GetSitFallAnimation()
	{
		return null;
	}

	[Token(Token = "0x600445E")]
	[Address(RVA = "0x5B29160", Offset = "0x5B28160", VA = "0x5B29160", Slot = "183")]
	protected virtual string GetSitUpAnimation()
	{
		return null;
	}

	[Token(Token = "0x600445F")]
	[Address(RVA = "0x5B29190", Offset = "0x5B28190", VA = "0x5B29190")]
	protected void SetDefaultVelocityLerp()
	{
	}

	[Token(Token = "0x6004460")]
	[Address(RVA = "0x5B293D0", Offset = "0x5B283D0", VA = "0x5B293D0", Slot = "184")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x6004461")]
	[Address(RVA = "0x5B29FE0", Offset = "0x5B28FE0", VA = "0x5B29FE0", Slot = "185")]
	public virtual void StopWallClimb()
	{
	}

	[Token(Token = "0x6004462")]
	[Address(RVA = "0x5B2A000", Offset = "0x5B29000", VA = "0x5B2A000", Slot = "113")]
	protected override void FixedUpdate()
	{
	}

	[Token(Token = "0x6004463")]
	[Address(RVA = "0x5B2B000", Offset = "0x5B2A000", VA = "0x5B2B000", Slot = "186")]
	protected virtual void FixedUpdateAttack()
	{
	}

	[Token(Token = "0x6004464")]
	[Address(RVA = "0x5B2AF20", Offset = "0x5B29F20", VA = "0x5B2AF20")]
	protected void SetDefaultVelocity()
	{
	}

	[Token(Token = "0x6004465")]
	[Address(RVA = "0x5B2B010", Offset = "0x5B2A010", VA = "0x5B2B010", Slot = "114")]
	protected override void LateUpdate()
	{
	}

	[Token(Token = "0x6004466")]
	[Address(RVA = "0x5B2B110", Offset = "0x5B2A110", VA = "0x5B2B110")]
	protected bool IsPlayingClip(string clip)
	{
		return default(bool);
	}

	[Token(Token = "0x6004467")]
	[Address(RVA = "0x5B2B180", Offset = "0x5B2A180", VA = "0x5B2B180", Slot = "107")]
	protected override void CheckGround()
	{
	}

	[Token(Token = "0x6004468")]
	[Address(RVA = "0x5B2B480", Offset = "0x5B2A480", VA = "0x5B2B480", Slot = "187")]
	protected virtual void UpdateAttack()
	{
	}

	[Token(Token = "0x6004469")]
	[Address(RVA = "0x5B2B490", Offset = "0x5B2A490", VA = "0x5B2B490", Slot = "188")]
	protected virtual void UpdateEat()
	{
	}

	[Token(Token = "0x600446A")]
	[Address(RVA = "0x5B2B4A0", Offset = "0x5B2A4A0", VA = "0x5B2B4A0", Slot = "189")]
	protected virtual void DeactivateAllHitboxes()
	{
	}

	[Token(Token = "0x600446B")]
	[Address(RVA = "0x5B2B5F0", Offset = "0x5B2A5F0", VA = "0x5B2B5F0")]
	[PunRPC]
	public void SetSizeRPC(float size, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x600446C")]
	[Address(RVA = "0x5B2B7C0", Offset = "0x5B2A7C0", VA = "0x5B2B7C0", Slot = "190")]
	protected virtual void ScaleSounds(float size)
	{
	}

	[Token(Token = "0x600446D")]
	[Address(RVA = "0x5B2BBE0", Offset = "0x5B2ABE0", VA = "0x5B2BBE0", Slot = "191")]
	protected virtual void SetSizeParticles(float size)
	{
	}

	[Token(Token = "0x600446E")]
	[Address(RVA = "0x5B2BCC0", Offset = "0x5B2ACC0", VA = "0x5B2BCC0", Slot = "192")]
	protected virtual void SetSizeAnimations(float size)
	{
	}

	[Token(Token = "0x600446F")]
	[Address(RVA = "0x5B2BCD0", Offset = "0x5B2ACD0", VA = "0x5B2BCD0", Slot = "193")]
	protected virtual void SetSizeHead(float size)
	{
	}

	[Token(Token = "0x6004470")]
	[Address(RVA = "0x5B2BCE0", Offset = "0x5B2ACE0", VA = "0x5B2BCE0")]
	public void SetSize(float size)
	{
	}

	[Token(Token = "0x6004471")]
	[Address(RVA = "0x5B2BDF0", Offset = "0x5B2ADF0", VA = "0x5B2BDF0", Slot = "194")]
	protected virtual float GetAnimationTime()
	{
		return default(float);
	}

	[Token(Token = "0x6004472")]
	[Address(RVA = "0x5B2BE10", Offset = "0x5B2AE10", VA = "0x5B2BE10", Slot = "195")]
	protected virtual float GetHitboxTime(float normalizedLength)
	{
		return default(float);
	}

	[Token(Token = "0x6004473")]
	[Address(RVA = "0x5B2BE60", Offset = "0x5B2AE60", VA = "0x5B2BE60", Slot = "196")]
	protected virtual void DamagedGrunt(float chance = 1f)
	{
	}

	[Token(Token = "0x6004474")]
	[Address(RVA = "0x5B2BF20", Offset = "0x5B2AF20", VA = "0x5B2BF20", Slot = "197")]
	protected virtual void GrabGrunt(float chance = 1f)
	{
	}

	[Token(Token = "0x6004475")]
	[Address(RVA = "0x5B2BFE0", Offset = "0x5B2AFE0", VA = "0x5B2BFE0", Slot = "104")]
	protected override void Start()
	{
	}

	[Token(Token = "0x6004476")]
	[Address(RVA = "0x5B2C120", Offset = "0x5B2B120", VA = "0x5B2C120")]
	[IteratorStateMachine(typeof(_003CHandleSpawnCollisionCoroutine_003Ed__228))]
	protected IEnumerator HandleSpawnCollisionCoroutine(float time, float maxSpeed)
	{
		return null;
	}

	[Token(Token = "0x6004477")]
	[Address(RVA = "0x5B2C1D0", Offset = "0x5B2B1D0", VA = "0x5B2C1D0", Slot = "198")]
	protected virtual void ToggleSitPushbox(bool sit)
	{
	}

	[Token(Token = "0x6004478")]
	[Address(RVA = "0x5B2C2C0", Offset = "0x5B2B2C0", VA = "0x5B2C2C0", Slot = "199")]
	protected virtual void UpdateAnimationColliders()
	{
	}

	[Token(Token = "0x6004479")]
	[Address(RVA = "0x5B2C310", Offset = "0x5B2B310", VA = "0x5B2C310", Slot = "112")]
	protected override void OnDestroy()
	{
	}

	[Token(Token = "0x600447A")]
	[Address(RVA = "0x5B2C340", Offset = "0x5B2B340", VA = "0x5B2C340", Slot = "200")]
	protected virtual bool IsPlayingSitAnimation()
	{
		return default(bool);
	}

	[Token(Token = "0x600447B")]
	[Address(RVA = "0x5B2C5B0", Offset = "0x5B2B5B0", VA = "0x5B2C5B0", Slot = "118")]
	protected override string GetFootstepAudio(int phase)
	{
		return null;
	}

	[Token(Token = "0x600447C")]
	[Address(RVA = "0x5B2C610", Offset = "0x5B2B610", VA = "0x5B2C610", Slot = "117")]
	protected override int GetFootstepPhase()
	{
		return default(int);
	}

	[Token(Token = "0x600447D")]
	[Address(RVA = "0x5B2C7C0", Offset = "0x5B2B7C0", VA = "0x5B2C7C0", Slot = "201")]
	protected virtual void SpawnShatter(Vector3 position)
	{
	}

	[Token(Token = "0x600447E")]
	[Address(RVA = "0x5B2CAB0", Offset = "0x5B2BAB0", VA = "0x5B2CAB0", Slot = "202")]
	public virtual bool CheckNapeAngle(Vector3 hitPosition, float maxAngle)
	{
		return default(bool);
	}

	[Token(Token = "0x600447F")]
	[Address(RVA = "0x5B2CE50", Offset = "0x5B2BE50", VA = "0x5B2CE50", Slot = "120")]
	public override Vector3 GetCenterPosition()
	{
		return default(Vector3);
	}

	[Token(Token = "0x6004480")]
	[Address(RVA = "0x5B2CE80", Offset = "0x5B2BE80", VA = "0x5B2CE80", Slot = "203")]
	public virtual float GetColliderToggleRadius()
	{
		return default(float);
	}

	[Token(Token = "0x6004481")]
	[Address(RVA = "0x5B2CEB0", Offset = "0x5B2BEB0", VA = "0x5B2CEB0")]
	protected BaseTitan()
	{
	}
}
