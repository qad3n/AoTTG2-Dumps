// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseTitan
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/BaseTitan.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/BaseTitan.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
				// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__228$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
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
				// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__228$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004482")]
		[Address(RVA = "0x5B2C1B0", Offset = "0x5B2B1B0", VA = "0x5B2C1B0")]
		[DebuggerHidden]
		public _003CHandleSpawnCollisionCoroutine_003Ed__228(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__228$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004483")]
		[Address(RVA = "0x5B2D0E0", Offset = "0x5B2C0E0", VA = "0x5B2D0E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__228$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004484")]
		[Address(RVA = "0x5B2D0F0", Offset = "0x5B2C0F0", VA = "0x5B2D0F0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__228$$MoveNext): 29 lines keep C-only constructs
			float pfVar1;
			uint uVar2;
			uint uVar3;
			uint uVar4;
			BaseTitan pCVar5;
			BaseComponentCache pUVar6;
			Rigidbody pUVar7;
			byte[] auVar8 = new byte[16];
			bool bVar9;
			UnityEngine_Vector3_StaticFields pUVar10;
			object __this_00;
			float fVar11;
			uint extraout_XMM0_Db;
			uint extraout_XMM0_Dc;
			uint extraout_XMM0_Dd;
			float fVar12;
			uint uVar13;
			byte[] auVar14 = new byte[16];
			Vector3 UVar15;
			float local_38;
			float fStack_34;
			ulong local_28;

			if (1 < (uint)this.__1__state) {
				return false;
			}
			pCVar5 = this.__4__this;
			this.__1__state = -1;
			uVar13 = 0;
			if (this.time <= 0.0) {
				return false;
			}
			if (((pCVar5 == null) ||(pUVar6 = pCVar5.Cache, pUVar6 == null)) ||(pUVar7 = pUVar6.Rigidbody, pUVar7 == null)) {
		label_05c2d413: ;
				throw new NullReferenceException();
			}
			bVar9 = pUVar7.isKinematic;
			if (bVar9) goto label_05c2d345;
			pUVar6 = pCVar5.Cache;
			if ((pUVar6 == null) ||(pUVar7 = pUVar6.Rigidbody, pUVar7 == null)) goto label_05c2d413;
			UVar15 = pUVar7.linearVelocity;
			if (Il2CppMethodInitialized_0753e729 == false) {
				uVar13 = 0;
				Il2CppMethodInitialized_0753e729 = true;
			}
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
				uVar13 = 0;
			}
			fVar12 = UVar15.z * UVar15.z + UVar15.y * UVar15.y + UVar15.x * UVar15.x;
			if (fVar12 < 0.0) {
				fVar12 = sqrtf(fVar12);
				pfVar1 = &this.maxSpeed;
				if (fVar12 < *pfVar1 || fVar12 == *pfVar1) goto label_05c2d345;
			}
			else {
				pfVar1 = &this.maxSpeed;
				if (SQRT(fVar12) < *pfVar1 || SQRT(fVar12) == *pfVar1) goto label_05c2d345;
			}
			pUVar6 = pCVar5.Cache;
			if ((pUVar6 == null) ||(pUVar7 = pUVar6.Rigidbody, pUVar7 == null)) goto label_05c2d413;
			UVar15 = pUVar7.linearVelocity;
			fVar12 = UVar15.z;
			auVar14._8_4_ = extraout_XMM0_Dc;
			auVar14._0_8_ = UVar15._0_8_;
			auVar14._12_4_ = extraout_XMM0_Dd;
			if (Il2CppMethodInitialized_0753e72d == false) {
				uVar13 = 0;
				Il2CppMethodInitialized_0753e72d = true;
				local_28._0_4_ = 0.0;
				local_28._4_4_ = 0.0;
				if (Il2CppMethodInitialized_0753e729 == false) goto label_05c2d3d9;
		label_05c2d29d: ;
				local_28._0_4_ = 0.0;
				local_28._4_4_ = 0.0;
				uVar4 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				local_28._0_4_ = 0.0;
				local_28._4_4_ = 0.0;
				if (Il2CppMethodInitialized_0753e729 != false) goto label_05c2d29d;
		label_05c2d3d9: ;
				local_28._0_4_ = 0.0;
				local_28._4_4_ = 0.0;
				uVar13 = 0;
				Il2CppMethodInitialized_0753e729 = true;
				uVar4 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar4 == 0) {
				uVar13 = 0;
			}
			local_38 = UVar15.x;
			fStack_34 = UVar15.y;
			fVar11 = fVar12 * fVar12 + fStack_34 * fStack_34 + local_38 * local_38;
			if (fVar11 < 0.0) {
				fVar11 = sqrtf(fVar11);
				uVar13 = extraout_XMM0_Db;
				if (1e-05 < fVar11) goto label_05c2d30d;
		label_05c2d2e1: ;
				pUVar10 = typeof(Vector3).static_fields;
				fVar12 = (pUVar10.zeroVector).z;
			}
			else {
				fVar11 = SQRT(fVar11);
				if (fVar11 <= 1e-05) goto label_05c2d2e1;
		label_05c2d30d: ;
				fVar12 = fVar12 / fVar11;
				auVar8._4_4_ = fVar11;
				auVar8._0_4_ = fVar11;
				auVar8._8_4_ = uVar13;
				auVar8._12_4_ = uVar13;
				auVar14 = divps(auVar14, auVar8);
				local_28._0_4_ = auVar14._0_4_;
				local_28._4_4_ = auVar14._4_4_;
				pUVar10 = (UnityEngine_Vector3_StaticFields)&local_28;
			}
			uVar2 = (pUVar10.zeroVector).x;
			uVar3 = (pUVar10.zeroVector).y;
			fVar11 = this.maxSpeed;
			UVar15.z = fVar12 * fVar11;
			UVar15.x = fVar11 * (float)uVar2;
			UVar15.y = fVar11 * (float)uVar3;
			pUVar7.linearVelocity = UVar15;
		label_05c2d345: ;
			fVar12 = this.time;
			fVar11 = Time.fixedDeltaTime;
			this.time = fVar12 - fVar11;
			__this_00 = new WaitForFixedUpdate();
			this.__2__current = __this_00;
			this.__1__state = 1;
			return true;
		}

		[Token(Token = "0x6004486")]
		[Address(RVA = "0x5B2D430", Offset = "0x5B2C430", VA = "0x5B2D430", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan.<HandleSpawnCollisionCoroutine>d__228$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Characters_BaseTitan_HandleSpawnCollisionCoroutine_d__228_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
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
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_GoreEnabled): clean
			return this._GoreEnabled_k__BackingField;
		}
		[Token(Token = "0x60043F8")]
		[Address(RVA = "0x5B252D0", Offset = "0x5B242D0", VA = "0x5B252D0")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$set_GoreEnabled): clean
			this._GoreEnabled_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000BBA")]
	protected bool DeathCollidersDisabled
	{
		[Token(Token = "0x60043F9")]
		[Address(RVA = "0x5B21C10", Offset = "0x5B20C10", VA = "0x5B21C10")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_DeathCollidersDisabled): clean
			TitanDeathDissolve pCVar1;

			pCVar1 = this.DeathDissolve;
			if (pCVar1 == null) {
				return false;
			}
			return pCVar1._CollidersDisabled_k__BackingField != false;
		}
	}

	[Token(Token = "0x17000BBB")]
	public virtual float DefaultCrippleTime
	{
		[Token(Token = "0x60043FA")]
		[Address(RVA = "0x5B252E0", Offset = "0x5B242E0", VA = "0x5B252E0", Slot = "121")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_DefaultCrippleTime): clean
			return 8.0;
		}
	}

	[Token(Token = "0x17000BBC")]
	public virtual bool CanWallClimb
	{
		[Token(Token = "0x60043FB")]
		[Address(RVA = "0x5B252F0", Offset = "0x5B242F0", VA = "0x5B252F0", Slot = "122")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_CanWallClimb): clean
			return false;
		}
	}

	[Token(Token = "0x17000BBD")]
	public virtual bool CanSprint
	{
		[Token(Token = "0x60043FC")]
		[Address(RVA = "0x5B25300", Offset = "0x5B24300", VA = "0x5B25300", Slot = "123")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_CanSprint): clean
			return false;
		}
	}

	[Token(Token = "0x17000BBE")]
	public virtual float ComboStunTime
	{
		[Token(Token = "0x60043FD")]
		[Address(RVA = "0x5B25310", Offset = "0x5B24310", VA = "0x5B25310", Slot = "124")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_ComboStunTime): clean
			return 1.0;
		}
	}

	[Token(Token = "0x17000BBF")]
	public virtual float LaunchSizeRatio
	{
		[Token(Token = "0x60043FE")]
		[Address(RVA = "0x5B25320", Offset = "0x5B24320", VA = "0x5B25320", Slot = "125")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_LaunchSizeRatio): clean
			return 0.66;
		}
	}

	[Token(Token = "0x17000BC0")]
	public virtual float LaunchForce
	{
		[Token(Token = "0x60043FF")]
		[Address(RVA = "0x5B25330", Offset = "0x5B24330", VA = "0x5B25330", Slot = "126")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_LaunchForce): clean
			return 250.0;
		}
	}

	[Token(Token = "0x17000BC1")]
	public virtual float LaunchTime
	{
		[Token(Token = "0x6004400")]
		[Address(RVA = "0x5B25340", Offset = "0x5B24340", VA = "0x5B25340", Slot = "127")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_LaunchTime): clean
			return 1.5;
		}
	}

	[Token(Token = "0x17000BC2")]
	public virtual float PushForce
	{
		[Token(Token = "0x6004401")]
		[Address(RVA = "0x5B25350", Offset = "0x5B24350", VA = "0x5B25350", Slot = "128")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_PushForce): clean
			return 50.0;
		}
	}

	[Token(Token = "0x17000BC3")]
	public virtual float PushTime
	{
		[Token(Token = "0x6004402")]
		[Address(RVA = "0x5B25360", Offset = "0x5B24360", VA = "0x5B25360", Slot = "129")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_PushTime): clean
			return 0.5;
		}
	}

	[Token(Token = "0x17000BC4")]
	protected override float GroundDistance
	{
		[Token(Token = "0x6004403")]
		[Address(RVA = "0x5B25370", Offset = "0x5B24370", VA = "0x5B25370", Slot = "68")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_GroundDistance): clean
			return 1.0;
		}
	}

	[Token(Token = "0x17000BC5")]
	public override LayerMask GroundMask
	{
		[Token(Token = "0x6004404")]
		[Address(RVA = "0x5B25380", Offset = "0x5B24380", VA = "0x5B25380", Slot = "67")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_GroundMask): clean
			return (LayerMask)(LayerMask)this.TitanGroundMaskLayers.m_Mask;
		}
	}

	[Token(Token = "0x17000BC6")]
	protected virtual float DefaultRunSpeed
	{
		[Token(Token = "0x6004405")]
		[Address(RVA = "0x5B25390", Offset = "0x5B24390", VA = "0x5B25390", Slot = "130")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_DefaultRunSpeed): clean
			return 15.0;
		}
	}

	[Token(Token = "0x17000BC7")]
	protected virtual float DefaultWalkSpeed
	{
		[Token(Token = "0x6004406")]
		[Address(RVA = "0x5B253A0", Offset = "0x5B243A0", VA = "0x5B253A0", Slot = "131")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_DefaultWalkSpeed): clean
			return 5.0;
		}
	}

	[Token(Token = "0x17000BC8")]
	protected virtual float DefaultJumpForce
	{
		[Token(Token = "0x6004407")]
		[Address(RVA = "0x5B253B0", Offset = "0x5B243B0", VA = "0x5B253B0", Slot = "132")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_DefaultJumpForce): clean
			return 150.0;
		}
	}

	[Token(Token = "0x17000BC9")]
	protected virtual float DefaultRotateSpeed
	{
		[Token(Token = "0x6004408")]
		[Address(RVA = "0x5B253C0", Offset = "0x5B243C0", VA = "0x5B253C0", Slot = "133")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_DefaultRotateSpeed): clean
			return 1.0;
		}
	}

	[Token(Token = "0x17000BCA")]
	protected virtual float SizeMultiplier
	{
		[Token(Token = "0x6004409")]
		[Address(RVA = "0x5B253D0", Offset = "0x5B243D0", VA = "0x5B253D0", Slot = "134")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_SizeMultiplier): clean
			return 1.0;
		}
	}

	[Token(Token = "0x17000BCB")]
	protected virtual float DisableCooldown
	{
		[Token(Token = "0x600440A")]
		[Address(RVA = "0x5B253E0", Offset = "0x5B243E0", VA = "0x5B253E0", Slot = "135")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_DisableCooldown): clean
			return 0.0;
		}
	}

	[Token(Token = "0x17000BCC")]
	protected override Vector3 Gravity
	{
		[Token(Token = "0x600440B")]
		[Address(RVA = "0x5B253F0", Offset = "0x5B243F0", VA = "0x5B253F0", Slot = "58")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_Gravity): clean
			uint uVar1;
			uint uVar2;
			Vector3 UVar4;

			uVar1 = (Vector3.downVector).x;
			uVar2 = (Vector3.downVector).y;
			UVar4.x = (float)uVar1 * 100.0;
			UVar4.y = (float)uVar2 * 100.0;
			UVar4.z = (Vector3.downVector).z * 100.0;
			return (Vector3)UVar4;
		}
	}

	[Token(Token = "0x17000BCD")]
	protected virtual float CheckGroundTime
	{
		[Token(Token = "0x600440C")]
		[Address(RVA = "0x5B25440", Offset = "0x5B24440", VA = "0x5B25440", Slot = "136")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_CheckGroundTime): clean
			return 0.4;
		}
	}

	[Token(Token = "0x17000BCE")]
	protected LayerMask MapObjectMask
	{
		[Token(Token = "0x600440D")]
		[Address(RVA = "0x5B25450", Offset = "0x5B24450", VA = "0x5B25450")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_MapObjectMask): clean
			LayerMask UVar1;
			Int32[] layers;

			layers = (Int32[])new int[1];
			if (layers == null) {
				throw new NullReferenceException();
			}
			if ((int)layers.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			layers[0] = PhysicsLayer.MapObjectEntities;
			UVar1 = PhysicsLayer.GetMask(layers);
			return (LayerMask)(LayerMask)UVar1;
		}
	}

	[Token(Token = "0x17000BCF")]
	protected virtual string MeleeHitType
	{
		[Token(Token = "0x6004413")]
		[Address(RVA = "0x5B25F80", Offset = "0x5B24F80", VA = "0x5B25F80", Slot = "141")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_MeleeHitType): clean
			return "Titan";
		}
	}

	[Token(Token = "0x17000BD0")]
	protected virtual bool BasicAttacksStunOnly
	{
		[Token(Token = "0x6004414")]
		[Address(RVA = "0x5B25FB0", Offset = "0x5B24FB0", VA = "0x5B25FB0", Slot = "142")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_BasicAttacksStunOnly): clean
			return false;
		}
	}

	[Token(Token = "0x17000BD1")]
	public virtual bool TreatAsSmall
	{
		[Token(Token = "0x6004415")]
		[Address(RVA = "0x5B25FC0", Offset = "0x5B24FC0", VA = "0x5B25FC0", Slot = "143")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_TreatAsSmall): clean
			return false;
		}
	}

	[Token(Token = "0x17000BD2")]
	public float WorldSize
	{
		[Token(Token = "0x6004416")]
		[Address(RVA = "0x5B25FD0", Offset = "0x5B24FD0", VA = "0x5B25FD0")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_WorldSize): clean
			float fVar1;
			float fVar2;

			fVar2 = this.get_SizeMultiplier();
			return fVar2 * fVar1;
		}
	}

	[Token(Token = "0x17000BD3")]
	public bool IsMoving
	{
		[Token(Token = "0x6004422")]
		[Address(RVA = "0x5B26650", Offset = "0x5B25650", VA = "0x5B26650")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_IsMoving): clean
			return this.State - 1U < 3;
		}
	}

	[Token(Token = "0x17000BD4")]
	protected bool IsSitting
	{
		[Token(Token = "0x6004425")]
		[Address(RVA = "0x5B266E0", Offset = "0x5B256E0", VA = "0x5B266E0")]
		get
		{
			// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$get_IsSitting): clean
			int iVar1;
			AnimationHandler __this_00;
			float fVar2;

			iVar1 = this.State;
			if ((iVar1 - 0x11U < 4) || (iVar1 == 0x16)) {
				return true;
			}
			if (iVar1 != 0x15) {
				return false;
			}
			__this_00 = this.Animation;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			fVar2 = __this_00.GetCurrentNormalizedTime();
			return fVar2 < 0.5;
		}
	}

	[Token(Token = "0x600440E")]
	[Address(RVA = "0x5B254F0", Offset = "0x5B244F0", VA = "0x5B254F0", Slot = "137")]
	public virtual void Init(bool ai, string team, JSONNode data)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Init): 9 lines keep C-only constructs
		Dictionary<string, float> __this_00;
		BaseTitanAnimations pCVar1;
		AnimationHandler pCVar2;
		AnimationHandler pCVar3;
		bool bVar4;
		int health;
		JSONNode pSVar5;
		String pSVar6;
		String pSVar7;
		float fVar8;
		JSONNode.Enumerator local_158;
		JSONNode.Enumerator local_108;
		JSONNode.Enumerator local_c0;
		JSONNode.Enumerator local_78;

		local_158.m_Array._list = null;
		local_158.m_Array._index = 0;
		local_158.m_Array._version = 0;
		local_158.m_Object._current.value = null;
		local_158.m_Object._getEnumeratorRetType = 0;
		local_158.m_Object._36_4_ = 0;
		local_158.m_Object._version = 0;
		local_158.m_Object._index = 0;
		local_158.m_Object._current.key = null;
		local_158.type = 0;
		local_158._4_4_ = 0;
		local_158.m_Object._dictionary = null;
		local_158.m_Array._current = null;
		local_108.m_Array._list = null;
		local_108.m_Array._index = 0;
		local_108.m_Array._version = 0;
		local_108.m_Object._current.value = null;
		local_108.m_Object._getEnumeratorRetType = 0;
		local_108.m_Object._36_4_ = 0;
		local_108.m_Object._version = 0;
		local_108.m_Object._index = 0;
		local_108.m_Object._current.key = null;
		local_108.type = 0;
		local_108._4_4_ = 0;
		local_108.m_Object._dictionary = null;
		local_108.m_Array._current = null;
		this.Init(ai, team);
		bVar4 = (data != null);
		if (bVar4) {
			if (data == null) goto label_05c25e7d;
			bVar4 = data.HasKey("RunSpeedBase");
			if (bVar4) {
				pSVar5 = data.get_Item("RunSpeedBase");
				if (pSVar5 == null) goto label_05c25e7d;
				fVar8 = pSVar5.get_AsFloat();
				this.RunSpeedBase = fVar8;
			}
			bVar4 = data.HasKey("RunSpeedPerLevel");
			if (bVar4) {
				pSVar5 = data.get_Item("RunSpeedPerLevel");
				if (pSVar5 == null) goto label_05c25e7d;
				fVar8 = pSVar5.get_AsFloat();
				this.RunSpeedPerLevel = fVar8;
			}
			bVar4 = data.HasKey("WalkSpeedBase");
			if (bVar4) {
				pSVar5 = data.get_Item("WalkSpeedBase");
				if (pSVar5 == null) goto label_05c25e7d;
				fVar8 = pSVar5.get_AsFloat();
				this.WalkSpeedBase = fVar8;
			}
			bVar4 = data.HasKey("WalkSpeedPerLevel");
			if (bVar4) {
				pSVar5 = data.get_Item("WalkSpeedPerLevel");
				if (pSVar5 == null) goto label_05c25e7d;
				fVar8 = pSVar5.get_AsFloat();
				this.WalkSpeedPerLevel = fVar8;
			}
			bVar4 = data.HasKey("JumpForce");
			if (bVar4) {
				pSVar5 = data.get_Item("JumpForce");
				if (pSVar5 == null) goto label_05c25e7d;
				fVar8 = pSVar5.get_AsFloat();
				this.JumpForce = fVar8;
			}
			bVar4 = data.HasKey("RotateSpeed");
			if (bVar4) {
				pSVar5 = data.get_Item("RotateSpeed");
				if (pSVar5 == null) goto label_05c25e7d;
				fVar8 = pSVar5.get_AsFloat();
				this.RotateSpeed = fVar8;
			}
			bVar4 = data.HasKey("ActionPause");
			if (bVar4) {
				pSVar5 = data.get_Item("ActionPause");
				if (pSVar5 == null) goto label_05c25e7d;
				fVar8 = pSVar5.get_AsFloat();
				this.ActionPause = fVar8;
			}
			bVar4 = data.HasKey("TurnPause");
			if (bVar4) {
				pSVar5 = data.get_Item("TurnPause");
				if (pSVar5 == null) goto label_05c25e7d;
				fVar8 = pSVar5.get_AsFloat();
				this.TurnPause = fVar8;
			}
			bVar4 = data.HasKey("AttackPause");
			if (bVar4) {
				pSVar5 = data.get_Item("AttackPause");
				if (pSVar5 == null) goto label_05c25e7d;
				fVar8 = pSVar5.get_AsFloat();
				this.AttackPause = fVar8;
			}
			bVar4 = data.HasKey("Health");
			if (bVar4) {
				pSVar5 = data.get_Item("Health");
				if (pSVar5 == null) goto label_05c25e7d;
				health = pSVar5.get_AsInt();
				this.SetHealth(health);
			}
			bVar4 = data.HasKey("AttackSpeedMultiplier");
			if (bVar4) {
				pSVar5 = data.get_Item("AttackSpeedMultiplier");
				if (pSVar5 == null) goto label_05c25e7d;
				fVar8 = pSVar5.get_AsFloat();
				this.AttackSpeedMultiplier = fVar8;
			}
			bVar4 = data.HasKey("AttackSpeeds");
			if (bVar4) {
				pSVar5 = data.get_Item("AttackSpeeds");
				if (pSVar5 == null) goto label_05c25e7d;
				local_78 = pSVar5.Keys;
				local_108.m_Array._current = local_78.m_Array._current;
				local_108.m_Array._list = local_78.m_Array._list;
				local_108.m_Array._index = local_78.m_Array._index;
				local_108.m_Array._version = local_78.m_Array._version;
				local_108.m_Object._current.value = local_78.m_Object._current.value;
				local_108.m_Object._getEnumeratorRetType = local_78.m_Object._getEnumeratorRetType;
				local_108.m_Object._36_4_ = local_78.m_Object._36_4_;
				local_108.m_Object._version = local_78.m_Object._version;
				local_108.m_Object._index = local_78.m_Object._index;
				local_108.m_Object._current.key = local_78.m_Object._current.key;
				local_108.type = local_78.type;
				local_108._4_4_ = local_78._4_4_;
				local_108.m_Object._dictionary = local_78.m_Object._dictionary;
				local_c0 = local_108.GetEnumerator();
				local_158.m_Array._current = local_c0.m_Array._current;
				local_158.m_Array._list = local_c0.m_Array._list;
				local_158.m_Array._index = local_c0.m_Array._index;
				local_158.m_Array._version = local_c0.m_Array._version;
				local_158.m_Object._current.value = local_c0.m_Object._current.value;
				local_158.m_Object._getEnumeratorRetType = local_c0.m_Object._getEnumeratorRetType;
				local_158.m_Object._36_4_ = local_c0.m_Object._36_4_;
				local_158.m_Object._version = local_c0.m_Object._version;
				local_158.m_Object._index = local_c0.m_Object._index;
				local_158.m_Object._current.key = local_c0.m_Object._current.key;
				local_158.type = local_c0.type;
				local_158._4_4_ = local_c0._4_4_;
				local_158.m_Object._dictionary = local_c0.m_Object._dictionary;
				bVar4 = local_158.MoveNext();
				if (bVar4) {
					do {
						pSVar6 = local_158.Current;
						__this_00 = this.AttackSpeeds;
						pSVar5 = data.get_Item("AttackSpeeds");
						if (((pSVar5 == null) ||(pSVar5 = pSVar5.get_Item(pSVar6), pSVar5 == null)) ||(fVar8 = (float)(**(code*)((long)pSVar5.klass + 0x388))(pSVar5,*(ulong)((long)pSVar5.klass + 0x390)), __this_00 == null)) goto label_05c25e7d;
						__this_00.Add((object)pSVar6, fVar8);
						bVar4 = local_158.MoveNext();
					} while (bVar4);
				}
			}
			bVar4 = data.HasKey("TurnSpeed");
			if (bVar4) {
				pSVar5 = data.get_Item("TurnSpeed");
				if (pSVar5 == null) goto label_05c25e7d;
				fVar8 = pSVar5.get_AsFloat();
				this.TurnSpeed = fVar8;
				pCVar1 = this.BaseTitanAnimations;
				if (pCVar1 == null) goto label_05c25e7d;
				pSVar6 = pCVar1.get_Turn90L();
				bVar4 = (pSVar6 != "");
				if (bVar4) {
					pCVar1 = this.BaseTitanAnimations;
					if (pCVar1 == null) goto label_05c25e7d;
					pCVar2 = this.Animation;
					pSVar6 = pCVar1.get_Turn90L();
					pCVar1 = this.BaseTitanAnimations;
					if (pCVar1 == null) goto label_05c25e7d;
					pCVar3 = this.Animation;
					pSVar7 = pCVar1.get_Turn90L();
					if ((pCVar3 == null) ||(fVar8 = pCVar3.GetSpeed(pSVar7), pCVar2 == null)) goto label_05c25e7d;
					pCVar2.SetSpeed(pSVar6, fVar8 * this.TurnSpeed);
				}
				pCVar1 = this.BaseTitanAnimations;
				if (pCVar1 == null) goto label_05c25e7d;
				pSVar6 = pCVar1.get_Turn90R();
				bVar4 = (pSVar6 != "");
				if (bVar4) {
					pCVar1 = this.BaseTitanAnimations;
					if (pCVar1 == null) goto label_05c25e7d;
					pCVar2 = this.Animation;
					pSVar6 = pCVar1.get_Turn90R();
					pCVar1 = this.BaseTitanAnimations;
					if (pCVar1 == null) goto label_05c25e7d;
					pCVar3 = this.Animation;
					pSVar7 = pCVar1.get_Turn90R();
					if ((pCVar3 == null) ||(fVar8 = pCVar3.GetSpeed(pSVar7), pCVar2 == null)) goto label_05c25e7d;
					pCVar2.SetSpeed(pSVar6, fVar8 * this.TurnSpeed);
				}
			}
			bVar4 = data.HasKey("SizeScaledTurnSpeed");
			if (bVar4) {
				pSVar5 = data.get_Item("SizeScaledTurnSpeed");
				if (pSVar5 == null) {
	label_05c25e7d: ;
					throw new NullReferenceException();
				}
				bVar4 = pSVar5.get_AsBool();
				this.SizeScaledTurnSpeed = bVar4;
			}
		}
		return;
	}

	[Token(Token = "0x600440F")]
	[Address(RVA = "0x5B25E90", Offset = "0x5B24E90", VA = "0x5B25E90", Slot = "79")]
	protected override void CreateDetection()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$CreateDetection): clean
		TitanDetection __this_00;

		__this_00 = new TitanDetection((BaseCharacter)this);
		this.Detection = (BaseDetection)__this_00;
		return;
	}

	[Token(Token = "0x6004410")]
	[Address(RVA = "0x5B25F00", Offset = "0x5B24F00", VA = "0x5B25F00", Slot = "138")]
	protected virtual Dictionary<string, float> GetRootMotionAnimations()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$GetRootMotionAnimations): clean
		Dictionary<string, float> __this_00;

		__this_00 = new Dictionary<string, float>();
		return __this_00;
	}

	[Token(Token = "0x6004411")]
	[Address(RVA = "0x5B25F60", Offset = "0x5B24F60", VA = "0x5B25F60", Slot = "139")]
	public virtual bool IsGrabAttack()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$IsGrabAttack): clean
		return false;
	}

	[Token(Token = "0x6004412")]
	[Address(RVA = "0x5B25F70", Offset = "0x5B24F70", VA = "0x5B25F70", Slot = "140")]
	protected virtual bool IsComboAttack()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$IsComboAttack): clean
		return false;
	}

	[Token(Token = "0x6004417")]
	[Address(RVA = "0x5B26000", Offset = "0x5B25000", VA = "0x5B26000")]
	protected bool IsKickAttack()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$IsKickAttack): clean
		bool bVar1;

		bVar1 = (this._currentAttack == "AttackKick");
		return bVar1;
	}

	[Token(Token = "0x6004418")]
	[Address(RVA = "0x5B26040", Offset = "0x5B25040", VA = "0x5B26040")]
	protected bool IsFinisherHit()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$IsFinisherHit): clean
		bool bVar1;
		bool bVar2;

		bVar1 = (this._currentAttack == "AttackKick");
		bVar2 = true;
		if (!bVar1) {
			bVar2 = this.IsComboAttack();
			if (!bVar2) {
				return false;
			}
			bVar2 = 2 < this._currentAttackStage;
		}
		return bVar2;
	}

	[Token(Token = "0x6004419")]
	[Address(RVA = "0x5B260B0", Offset = "0x5B250B0", VA = "0x5B260B0", Slot = "144")]
	protected virtual string GetFinisherReaction(bool kick, bool smallVictim, bool headHit)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$GetFinisherReaction): 1 lines keep C-only constructs
		String* ppSVar1;

		if (smallVictim) {
			ppSVar1 = &"Knockback";
		}
		else {
			ppSVar1 = &"Stun";
		}
		if (!kick) {
			ppSVar1 = &"Finisher";
		}
		return *ppSVar1;
	}

	[Token(Token = "0x600441A")]
	[Address(RVA = "0x5B26120", Offset = "0x5B25120", VA = "0x5B26120")]
	protected static bool IsHeadHit(BaseTitan victim, BaseHitbox hitbox, Collider collider)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$IsHeadHit): clean
		BaseTitanComponentCache pCVar1;
		Object y;
		Collider __this;
		bool bVar2;
		Transform pUVar3;
		Vector3 UVar4;
		Bounds local_38;

		if ((victim != null) &&(pCVar1 = victim.BaseTitanCache, pCVar1 != null)) {
			y = (Object)pCVar1.NapeHurtbox;
			bVar2 = ((Object)collider == y);
			if (bVar2) {
				return true;
			}
			if (collider != null) {
				pUVar3 = collider.transform;
				pCVar1 = victim.BaseTitanCache;
				if ((pCVar1 != null) &&(pUVar3 != null)) {
					bVar2 = pUVar3.IsChildOf(pCVar1.Head);
					if (bVar2) {
						return true;
					}
					if ((hitbox != null) &&(__this = hitbox._collider, __this != null)) {
						local_38 = __this.bounds;
						pCVar1 = victim.BaseTitanCache;
						if ((pCVar1 != null) &&(pUVar3 = pCVar1.Head, pUVar3 != null)) {
							UVar4 = pUVar3.position;
							return UVar4.y <= local_38.m_Center.y + local_38.m_Extents.y;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600441B")]
	[Address(RVA = "0x5B26240", Offset = "0x5B25240", VA = "0x5B26240")]
	protected static bool HasMeleeReaction(string type, string reaction)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$HasMeleeReaction): clean
		bool bVar1;
		String pSVar2;

		pSVar2 = String.Concat("Titan", reaction);
		bVar1 = (type == pSVar2);
		if (bVar1) {
			return true;
		}
		pSVar2 = String.Concat("Shifter", reaction);
		bVar1 = (type == pSVar2);
		return bVar1;
	}

	[Token(Token = "0x600441C")]
	[Address(RVA = "0x5B262D0", Offset = "0x5B252D0", VA = "0x5B262D0")]
	protected static bool IsComboStunType(string type)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$IsComboStunType): clean
		bool bVar1;
		String b;
		String pSVar2;

		pSVar2 = "ComboStun";
		b = String.Concat("Titan", pSVar2);
		bVar1 = (type == b);
		if (bVar1) {
			return true;
		}
		pSVar2 = String.Concat("Shifter", pSVar2);
		bVar1 = (type == pSVar2);
		return bVar1;
	}

	[Token(Token = "0x600441D")]
	[Address(RVA = "0x5B26380", Offset = "0x5B25380", VA = "0x5B26380")]
	protected static bool IsDecapitateType(string type)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$IsDecapitateType): clean
		bool bVar1;
		String b;
		String pSVar2;

		pSVar2 = "Finisher";
		b = String.Concat("Titan", pSVar2);
		bVar1 = (type == b);
		if (bVar1) {
			return true;
		}
		pSVar2 = String.Concat("Shifter", pSVar2);
		bVar1 = (type == pSVar2);
		return bVar1;
	}

	[Token(Token = "0x600441E")]
	[Address(RVA = "0x5B26430", Offset = "0x5B25430", VA = "0x5B26430")]
	protected static bool IsKnockbackType(string type)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$IsKnockbackType): clean
		bool bVar1;
		String b;
		String pSVar2;

		pSVar2 = "Knockback";
		b = String.Concat("Titan", pSVar2);
		bVar1 = (type == b);
		if (bVar1) {
			return true;
		}
		pSVar2 = String.Concat("Shifter", pSVar2);
		bVar1 = (type == pSVar2);
		return bVar1;
	}

	[Token(Token = "0x600441F")]
	[Address(RVA = "0x5B264E0", Offset = "0x5B254E0", VA = "0x5B264E0")]
	protected static bool IsMeleeHitType(string type)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$IsMeleeHitType): clean
		String str1;
		bool bVar1;
		String b;
		MethodInfo method_00;

		str1 = "Stun";
		b = String.Concat("Titan", str1);
		bVar1 = (type == b);
		if (!bVar1) {
			method_00 = (MethodInfo)String.Concat("Shifter", str1);
			bVar1 = (type == (String)method_00);
			if (!bVar1) {
				bVar1 = BaseTitan.IsComboStunType(type);
				if (!bVar1) {
					bVar1 = BaseTitan.IsDecapitateType(type);
					if (!bVar1) {
						bVar1 = BaseTitan.IsKnockbackType(type);
						return bVar1;
					}
				}
			}
		}
		return true;
	}

	[Token(Token = "0x6004420")]
	[Address(RVA = "0x5B265B0", Offset = "0x5B255B0", VA = "0x5B265B0")]
	protected float GetMeleeStunTime(string type)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$GetMeleeStunTime): 5 lines keep C-only constructs
		bool bVar1;
		_func_21 vtableDispatch;
		MethodInfo pMVar2;
		float fVar3;

		pMVar2 = (MethodInfo)type;
		bVar1 = BaseTitan.IsComboStunType(type);
		if (bVar1) {
			vtableDispatch = (this.klass.vtable)._124_get_ComboStunTime.methodPtr;
			pMVar2 = (this.klass.vtable)._124_get_ComboStunTime.method;
		}
		else {
			bVar1 = BaseTitan.IsKnockbackType(type);
			if (!bVar1) {
				return this.StunTime;
			}
			vtableDispatch = (this.klass.vtable)._129_get_PushTime.methodPtr;
			pMVar2 = (this.klass.vtable)._129_get_PushTime.method;
		}
		fVar3 = (*vtableDispatch)(this,pMVar2);
		return fVar3;
	}

	[Token(Token = "0x6004421")]
	[Address(RVA = "0x5B26620", Offset = "0x5B25620", VA = "0x5B26620")]
	public float GetCurrentSpeed()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$GetCurrentSpeed): 1 lines keep C-only constructs
		ulong uVar1;

		uVar1 = (ulong)this.IsWalk;
		return (&this.RunSpeedPerLevel)[uVar1 != 0] * this.Size +(&this.RunSpeedBase)[uVar1];
	}

	[Token(Token = "0x6004423")]
	[Address(RVA = "0x5B26660", Offset = "0x5B25660", VA = "0x5B26660", Slot = "145")]
	public virtual bool CanAction()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$CanAction): clean
		int iVar1;
		bool bVar2;

		if ((this.EnableAI == false) || (this.Dead != false)) {
			return false;
		}
		iVar1 = this.State;
		if ((iVar1 != 0) || (bVar2 = true, 0.0 < this._stateTimeLeft)) {
			bVar2 = iVar1 - 1U < 3;
		}
		return bVar2;
	}

	[Token(Token = "0x6004424")]
	[Address(RVA = "0x5B266A0", Offset = "0x5B256A0", VA = "0x5B266A0", Slot = "146")]
	public virtual bool CanEmote()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$CanEmote): clean
		bool bVar1;

		if (this.AI == false) {
			return bVar1;
		}
		if ((this.EnableAI == false) || (this.Dead != false)) {
			return false;
		}
		return this.State != 0xf;
	}

	[Token(Token = "0x6004426")]
	[Address(RVA = "0x5B26730", Offset = "0x5B25730", VA = "0x5B26730", Slot = "147")]
	public virtual bool CanStun()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$CanStun): clean
		if (this.State == 0xd) {
			return false;
		}
		if (this.Dead == false) {
			return this.EnableAI != false;
		}
		return false;
	}

	[Token(Token = "0x6004427")]
	[Address(RVA = "0x5B26750", Offset = "0x5B25750", VA = "0x5B26750", Slot = "148")]
	public virtual void Jump(Vector3 direction)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Jump): clean
		BaseTitanAnimations pCVar1;
		AnimationHandler pCVar2;
		bool bVar3;
		String pSVar4;
		float fVar5;

		pCVar1 = this.BaseTitanAnimations;
		if (pCVar1 != null) {
			pSVar4 = pCVar1.get_Jump();
			bVar3 = (pSVar4 == "");
			if (bVar3) {
				return;
			}
			this._jumpDirection.x = direction.x;
			this._jumpDirection.y = direction.y;
			this._jumpDirection.z = direction.z;
			pCVar1 = this.BaseTitanAnimations;
			if (pCVar1 != null) {
				pSVar4 = pCVar1.get_Jump();
				pCVar2 = this.Animation;
				if (pCVar2 != null) {
					fVar5 = pCVar2.GetLength(pSVar4);
					this._needFreshCore = true;
					pCVar2 = this.Animation;
					if (pCVar2 != null) {
						pCVar2.SetCullingType(false);
						this.Ungrab();
						this.DeactivateAllHitboxes();
						this.CrossFade(pSVar4, 0.1, 0.0);
						this.State = 4;
						this._currentStateAnimation = pSVar4;
						this._stateTimeLeft = fVar5;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004428")]
	[Address(RVA = "0x5B26910", Offset = "0x5B25910", VA = "0x5B26910", Slot = "149")]
	public virtual void StartJump()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$StartJump): 24 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		ulong uVar3;
		uint uVar4;
		uint uVar5;
		BaseComponentCache pUVar6;
		Rigidbody __this_00;
		UnityEngine_Vector3_StaticFields pUVar7;
		float fVar8;
		float extraout_XMM0_Db;
		byte[] auVar9 = new byte[16];
		byte[] auVar10 = new byte[16];
		Vector3 force;
		Vector3 local_30;
		float fStack_24;
		ulong uStack_20;

		this.SetKinematic(false, 0.0);
		this.State = 5;
		this._stateTimeLeft = 0.2;
		pUVar6 = this.Cache;
		if (pUVar6 == null) goto label_05c26a97;
		__this_00 = pUVar6.Rigidbody;
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			local_30.x = 0.0;
			local_30.y = 0.0;
		}
		else {
			local_30.x = 0.0;
			local_30.y = 0.0;
		}
		local_30.x = 0.0;
		local_30.y = 0.0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			local_30.x = 0.0;
			local_30.y = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
		}
		fVar8 = this._jumpDirection.x;
		uVar3._0_4_ = this._jumpDirection.y;
		uVar3._4_4_ = this._jumpDirection.z;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			uStack_20._0_4_ = 0.0;
			uStack_20._4_4_ = 0.0;
			uVar3._0_4_ = local_30.z;
			uVar3._4_4_ = fStack_24;
		}
		uVar3._4_4_ = uVar3._4_4_ * uVar3._4_4_;
		fVar8 = uVar3._4_4_ + fVar8 * fVar8 + (float)uVar3 * (float)uVar3;
		if (fVar8 < 0.0) {
			fVar8 = sqrtf(fVar8);
			uVar3._4_4_ = extraout_XMM0_Db;
			if (fVar8 <= 1e-05) goto label_05c269d7;
	label_05c269fd: ;
			uVar1 = this._jumpDirection.x;
			uVar4 = this._jumpDirection.y;
			auVar9._4_4_ = uVar4;
			auVar9._0_4_ = uVar1;
			auVar9._8_8_ = 0;
			auVar10._4_4_ = fVar8;
			auVar10._0_4_ = fVar8;
			auVar10._8_4_ = uVar3._4_4_;
			auVar10._12_4_ = uVar3._4_4_;
			auVar10 = divps(auVar9, auVar10);
			local_30.x = auVar10._0_4_;
			local_30.y = auVar10._4_4_;
			fVar8 = this._jumpDirection.z / fVar8;
			pUVar7 = (UnityEngine_Vector3_StaticFields)&local_30;
		}
		else {
			fVar8 = SQRT(fVar8);
			if (1e-05 < fVar8) goto label_05c269fd;
	label_05c269d7: ;
			pUVar7 = typeof(Vector3).static_fields;
			fVar8 = (pUVar7.zeroVector).z;
		}
		if (__this_00 != null) {
			uVar2 = (pUVar7.zeroVector).x;
			uVar5 = (pUVar7.zeroVector).y;
			uVar3._0_4_ = this.JumpForce;
			force.z = fVar8 * (float)uVar3;
			force.x = (float)uVar3 * (float)uVar2;
			force.y = (float)uVar3 * (float)uVar5;
			__this_00.AddForce(force, 2);
			return;
		}
	label_05c26a97: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004429")]
	[Address(RVA = "0x5B26AA0", Offset = "0x5B25AA0", VA = "0x5B26AA0", Slot = "150")]
	public virtual void Attack(string attack)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Attack): clean


		this.ResetAttackState(attack);
		this.StateAttack(this._currentAttackAnimation, 0.1, true);
		return;
	}

	[Token(Token = "0x600442A")]
	[Address(RVA = "0x5B26BC0", Offset = "0x5B25BC0", VA = "0x5B26BC0", Slot = "151")]
	public virtual bool CanAttack()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$CanAttack): clean
		bool bVar1;

		return bVar1;
	}

	[Token(Token = "0x600442B")]
	[Address(RVA = "0x5B26BE0", Offset = "0x5B25BE0", VA = "0x5B26BE0")]
	public bool CanUseAttack(TitanAttackInfo attack)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$CanUseAttack): clean
		if (attack == null) {
			throw new NullReferenceException();
		}
		if (attack.LeftArm != false) {
			if (this.LeftArmDisabled != false) {
				return false;
			}
			if (this.LeftHandDisabled != false) {
				return false;
			}
		}
		if (attack.RightArm == false) {
			return true;
		}
		if (this.RightArmDisabled == false) {
			return this.RightHandDisabled == false;
		}
		return false;
	}

	[Token(Token = "0x600442C")]
	[Address(RVA = "0x5B26C30", Offset = "0x5B25C30", VA = "0x5B26C30", Slot = "152")]
	public virtual void ResetAttackState(string attack)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$ResetAttackState): clean
		BaseComponentCache pUVar1;
		Rigidbody __this_00;
		Dictionary<object, object> __this_01;
		String pSVar2;
		float fVar3;

		this.SetKinematic(false, 0.0);
		if (this.AI != false) {
			pUVar1 = this.Cache;
			if (pUVar1 == null) goto label_05c26d39;
			__this_00 = pUVar1.Rigidbody;
			if (__this_00 == null) goto label_05c26d39;
			__this_00.linearVelocity = (Vector3)(Vector3.zeroVector);
		}
		this._currentAttack = attack;
		__this_01 = (Dictionary<object, object>)this.AttackAnimations;
		if (__this_01 != null) {
			pSVar2 = __this_01.get_Item((object)attack);
			this._currentAttackAnimation = pSVar2;
			fVar3 = this.GetAttackSpeed(attack);
			this._currentAttackSpeed = fVar3;
			this._currentAttackStage = 0;
			return;
		}
	label_05c26d39: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600442D")]
	[Address(RVA = "0x5B26D40", Offset = "0x5B25D40", VA = "0x5B26D40")]
	public float GetAttackSpeed(string attack)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$GetAttackSpeed): clean
		Dictionary<string, float> pSVar1;
		bool bVar2;
		uint uVar3;
		float fVar4;

		pSVar1 = this.AttackSpeeds;
		if (pSVar1 == null) {
	label_05c26deb: ;
			throw new NullReferenceException();
		}
		bVar2 = pSVar1.ContainsKey((object)attack);
		if (bVar2) {
			pSVar1 = this.AttackSpeeds;
			if (pSVar1 == null) goto label_05c26deb;
			fVar4 = pSVar1.get_Item((object)attack);
		}
		else {
			fVar4 = 1.0;
		}
		fVar4 = fVar4 * this.AttackSpeedMultiplier;
		uVar3 = -(uint)(fVar4 <= 0.0);
		return (float)(uVar3 & 0x3f800000 | ~uVar3 & (uint)fVar4);
	}

	[Token(Token = "0x600442E")]
	[Address(RVA = "0x5B26DF0", Offset = "0x5B25DF0", VA = "0x5B26DF0", Slot = "153")]
	public virtual void Kick()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Kick): clean
		return;
	}

	[Token(Token = "0x600442F")]
	[Address(RVA = "0x5B26E00", Offset = "0x5B25E00", VA = "0x5B26E00", Slot = "154")]
	public virtual void Stun()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Stun): clean
		this.Stun(this.StunTime, false);
		return;
	}

	[Token(Token = "0x6004430")]
	[Address(RVA = "0x5B26E20", Offset = "0x5B25E20", VA = "0x5B26E20", Slot = "155")]
	public virtual void Stun(float time, bool refresh)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Stun): clean
		BaseTitanAnimations pCVar1;
		AnimationHandler __this_00;
		bool bVar2;
		String animation;

		bVar2 = this.CanStun();
		if ((!bVar2) &&((((!refresh || (this.State != 0xd)) || (this.Dead != false)) ||(this.EnableAI == false)))) {
			return;
		}
		pCVar1 = this.BaseTitanAnimations;
		if (pCVar1 != null) {
			animation = pCVar1.get_Stun();
			this._needFreshCore = true;
			__this_00 = this.Animation;
			if (__this_00 != null) {
				__this_00.SetCullingType(false);
				this.Ungrab();
				this.DeactivateAllHitboxes();
				this.CrossFade(animation, 0.1, 0.0);
				this.State = 0xd;
				this._currentStateAnimation = animation;
				this._stateTimeLeft = time;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004431")]
	[Address(RVA = "0x5B26F30", Offset = "0x5B25F30", VA = "0x5B26F30")]
	protected void OnHitTitan(BaseHitbox hitbox, BaseTitan victim, Collider collider, int damage, bool firstHit)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$OnHitTitan): 4 lines keep C-only constructs
		float fVar1;
		float fVar2;
		byte bVar3;
		InGameMenu __this_00;
		Quaternion rotation;
		bool bVar4;
		bool bVar5;
		bool bVar6;
		Transform __this_01;
		String pSVar7;
		String pSVar8;
		ulong uVar9;
		MethodInfo method_00;
		int iVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		Vector3 position;

		if (!firstHit) {
			return;
		}
		if (hitbox == null) goto label_05c273ff;
		pSVar7 = EffectPrefabs.PunchHit;
		__this_01 = hitbox.transform;
		if (__this_01 == null) goto label_05c273ff;
		position = __this_01.position;
		rotation = *(Quaternion)typeof(Quaternion).static_fields;
		uVar9 = 0;
		EffectSpawner.Spawn(pSVar7, position, (Quaternion)rotation, 1.0, true, null);
		this.PlaySound(TitanSounds.Hit);
		pSVar7 = "Stun";
		if (victim == null) goto label_05c273ff;
		if (victim.Dead != false) {
			return;
		}
		bVar4 = this.IsComboAttack();
		if ((!bVar4) || (2 < this._currentAttackStage)) {
			bVar4 = (this._currentAttack == "AttackKick");
			if ((bVar4) ||((bVar4 = this.IsComboAttack(), bVar4 &&(2 < this._currentAttackStage)))) {
				bVar4 = victim.get_TreatAsSmall();
				method_00 = (MethodInfo)CONCAT71((int7)((ulong)uVar9 >> 8), 1);
				if (!bVar4) {
					fVar1 = victim.Size;
					fVar11 = victim.get_SizeMultiplier();
					fVar2 = this.Size;
					fVar12 = this.get_SizeMultiplier();
					fVar13 = this.get_LaunchSizeRatio();
					method_00 = (MethodInfo)CONCAT71((int7)((ulong)method_00 >> 8), fVar11 * fVar1 <= fVar13 * fVar12 * fVar2);
				}
				bVar4 = SUB81(method_00, 0);
				bVar5 = (this._currentAttack == "AttackKick");
				bVar6 = BaseTitan.IsHeadHit(victim, hitbox, collider);
				pSVar7 = this.GetFinisherReaction(bVar5, bVar4, bVar6);
				bVar4 = (pSVar7 == "Graze");
				if (!bVar4) goto label_05c272ef;
				pSVar7 = "Stun";
				iVar10 = 0;
			}
			else {
				bVar4 = this.get_BasicAttacksStunOnly();
				iVar10 = 0;
				if (!bVar4) {
	label_05c272ef: ;
					iVar10 = damage;
					if ((0 < damage) &&(bVar4 = this.IsMainCharacter())) {
						__this_00 = (InGameMenu)UIManager.CurrentMenu;
						if (__this_00 == null) goto label_05c273ff;
						bVar3 = (typeof(InGameMenu)._2).typeHierarchyDepth;
						if (((__this_00.klass._2).typeHierarchyDepth < bVar3) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(InGameMenu)) ) {
							throw new InvalidCastException();
						}
						__this_00.ShowKillScore(damage, false);
					}
				}
			}
		}
		else {
			iVar10 = 0;
			pSVar7 = "ComboStun";
		}
		pSVar8 = this.get_MeleeHitType();
		pSVar7 = String.Concat(pSVar8, pSVar7);
		if (collider != null) {
			pSVar8 = collider.name;
			victim.GetHit((BaseCharacter)this, iVar10, pSVar7, pSVar8);
			return;
		}
	label_05c273ff: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004432")]
	[Address(RVA = "0x5B27410", Offset = "0x5B26410", VA = "0x5B27410")]
	protected void GetMeleeHit(int viewId, string name, int damage, string type, string collider)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$GetMeleeHit): 19 lines keep C-only constructs
		uint uVar1;
		BaseComponentCache pUVar2;
		Transform __this_00;
		bool bVar3;
		bool bVar4;
		bool bVar5;
		BaseCharacter x;
		uint in_register_00000034;
		MethodInfo pMVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		ulong uVar10;
		byte[] auVar11 = new byte[16];
		byte[] auVar12 = new byte[16];
		float fVar13;
		Vector3 UVar14;
		Vector3 velocity;
		ulong local_48;

		pMVar6 = (MethodInfo)CONCAT44(in_register_00000034, viewId);
		bVar3 = BaseTitan.IsDecapitateType(type);
		bVar4 = BaseTitan.IsKnockbackType(type);
		this._launched = bVar4;
		this._decapitated = bVar3;
		this.GetHitRPC(viewId, name, damage, type, collider);
		if (this.Dead == false) {
			this._launched = false;
			this._decapitated = false;
			if (!bVar3 && !bVar4) {
				return;
			}
		}
		else if (!bVar3 && !bVar4) {
			return;
		}
		x = Util.FindCharacterByViewId(viewId);
		bVar5 = ((Object)x == null);
		if (!bVar5) {
			if (((x == null) ||(pUVar2 = x.Cache, pUVar2 == null)) ||(__this_00 = pUVar2.Transform, __this_00 == null)) {
				throw new NullReferenceException();
			}
			UVar14 = __this_00.forward;
			fVar9 = UVar14.z;
			fVar8 = UVar14.x;
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			fVar7 = fVar9 * fVar9 + fVar8 * fVar8 + 0.0;
			if (fVar7 < 0.0) {
				fVar7 = sqrtf(fVar7);
			}
			else {
				fVar7 = SQRT(fVar7);
			}
			uVar10 = 0;
			fVar13 = 0.0;
			if (1e-05 < fVar7) {
				auVar11._4_4_ = 0;
				auVar11._0_4_ = fVar8;
				auVar11._8_4_ = extraout_XMM0_Dc;
				auVar11._12_4_ = extraout_XMM0_Dd;
				fVar13 = fVar9 / fVar7;
				auVar12._4_4_ = fVar7;
				auVar12._0_4_ = fVar7;
				auVar12._8_4_ = fVar7;
				auVar12._12_4_ = fVar7;
				auVar12 = divps(auVar11, auVar12);
				uVar10 = auVar12._0_8_;
			}
			if (this.Dead != false) {
				UVar14.z = fVar13;
				UVar14.x = (float)(int)uVar10;
				UVar14.y = (float)(int)((ulong)uVar10 >> 0x20);
				this.OnFinisherKill(UVar14, bVar4, bVar3);
				return;
			}
			if (bVar4) {
				fVar8 = this.get_PushForce();
				fVar8 = fVar8 / this.Size;
				velocity.z = fVar13 * fVar8;
				local_48._0_4_ = (float)uVar10;
				local_48._4_4_ = (float)((ulong)uVar10 >> 0x20);
				fVar9 = this.get_PushTime();
				velocity.x = (float)local_48 * fVar8;
				velocity.y = local_48._4_4_ * fVar8;
				this.SetLaunchVelocity(velocity, fVar9);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004433")]
	[Address(RVA = "0x5B27780", Offset = "0x5B26780", VA = "0x5B27780", Slot = "156")]
	protected virtual void OnFinisherKill(Vector3 direction, bool launch, bool decapitate)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$OnFinisherKill): 5 lines keep C-only constructs
		undefined7 in_register_00000031;
		float fVar1;
		float time;
		Vector3 velocity;
		ulong uStack_18;

		if ((int)CONCAT71(in_register_00000031, launch) == 0) {
			return;
		}
		fVar1 = this.get_LaunchForce();
		fVar1 = fVar1 / this.Size;
		velocity.z = direction.z * fVar1;
		uStack_18._0_4_ = direction.x;
		uStack_18._4_4_ = direction.y;
		time = this.get_LaunchTime();
		velocity.x = fVar1 * (float)uStack_18;
		velocity.y = fVar1 * uStack_18._4_4_;
		this.SetLaunchVelocity(velocity, time);
		return;
	}

	[Token(Token = "0x6004434")]
	[Address(RVA = "0x5B27800", Offset = "0x5B26800", VA = "0x5B27800")]
	protected void Launch(Vector3 direction)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Launch): 3 lines keep C-only constructs
		float fVar1;
		float time;
		Vector3 velocity;
		ulong local_18;

		fVar1 = this.get_LaunchForce();
		fVar1 = fVar1 / this.Size;
		velocity.z = direction.z * fVar1;
		local_18._0_4_ = direction.x;
		local_18._4_4_ = direction.y;
		time = this.get_LaunchTime();
		velocity.x = fVar1 * (float)local_18;
		velocity.y = fVar1 * local_18._4_4_;
		this.SetLaunchVelocity(velocity, time);
		return;
	}

	[Token(Token = "0x6004435")]
	[Address(RVA = "0x5B27700", Offset = "0x5B26700", VA = "0x5B27700")]
	protected void Push(Vector3 direction)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Push): 3 lines keep C-only constructs
		float fVar1;
		float time;
		Vector3 velocity;
		ulong local_18;

		fVar1 = this.get_PushForce();
		fVar1 = fVar1 / this.Size;
		velocity.z = direction.z * fVar1;
		local_18._0_4_ = direction.x;
		local_18._4_4_ = direction.y;
		time = this.get_PushTime();
		velocity.x = fVar1 * (float)local_18;
		velocity.y = fVar1 * local_18._4_4_;
		this.SetLaunchVelocity(velocity, time);
		return;
	}

	[Token(Token = "0x6004436")]
	[Address(RVA = "0x5B27880", Offset = "0x5B26880", VA = "0x5B27880")]
	protected void SetLaunchVelocity(Vector3 velocity, float time)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$SetLaunchVelocity): 28 lines keep C-only constructs
		ulong uVar1;
		BaseComponentCache pUVar2;
		Transform __this_00;
		Rigidbody __this_01;
		UnityEngine_Vector3_StaticFields pUVar3;
		float fVar4;
		uint extraout_XMM0_Db;
		uint uVar5;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		float fVar6;
		byte[] auVar7 = new byte[16];
		Vector3 value;
		Vector3 value_00;
		byte[] local_30 = new byte[32];

		value_00.z = velocity.z;
		local_30._16_4_ = in_XMM0_Dc;
		local_30._8_8_ = velocity._0_8_;
		local_30._20_4_ = in_XMM0_Dd;
		this._launchTimeLeft = time;
		this.SetKinematic(false, 0.0);
		this.Grounded = false;
		fVar4 = value_00.z * value_00.z + (float)local_30._8_4_ * (float)local_30._8_4_ + 0.0;
		if (0.0 < fVar4) {
			pUVar2 = this.Cache;
			if (pUVar2 == null) goto label_05c27a4f;
			__this_00 = pUVar2.Transform;
			if (Il2CppMethodInitialized_0753e72d == false) {
				Il2CppMethodInitialized_0753e72d = true;
				local_30._0_4_ = 0.0;
				local_30._4_4_ = 0.0;
				if (Il2CppMethodInitialized_0753e729 == false) goto label_05c27984;
	label_05c2790b: ;
				local_30._0_4_ = 0.0;
				local_30._4_4_ = 0.0;
				if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_05c27922;
	label_05c279b3: ;
				if (fVar4 < 0.0) goto label_05c279c9;
	label_05c2792e: ;
				uVar5 = 0;
				fVar4 = SQRT(fVar4);
				if (fVar4 <= 1e-05) goto label_05c2793f;
	label_05c279db: ;
				fVar6 = value_00.z / fVar4;
				auVar7._4_4_ = fVar4;
				auVar7._0_4_ = fVar4;
				auVar7._8_4_ = uVar5;
				auVar7._12_4_ = uVar5;
				auVar7 = divps(ZEXT416((uint)local_30._8_4_), auVar7);
				local_30._0_4_ = auVar7._0_4_;
				local_30._4_4_ = auVar7._4_4_;
				pUVar3 = (UnityEngine_Vector3_StaticFields)local_30;
			}
			else {
				local_30._0_4_ = 0.0;
				local_30._4_4_ = 0.0;
				if (Il2CppMethodInitialized_0753e729 != false) goto label_05c2790b;
	label_05c27984: ;
				local_30._0_4_ = 0.0;
				local_30._4_4_ = 0.0;
				Il2CppMethodInitialized_0753e729 = true;
				if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_05c279b3;
	label_05c27922: ;
				if (0.0 <= fVar4) goto label_05c2792e;
	label_05c279c9: ;
				fVar4 = sqrtf(fVar4);
				uVar5 = extraout_XMM0_Db;
				if (1e-05 < fVar4) goto label_05c279db;
	label_05c2793f: ;
				pUVar3 = typeof(Vector3).static_fields;
				fVar6 = (pUVar3.zeroVector).z;
			}
			if (__this_00 == null) goto label_05c27a4f;
			uVar1._0_4_ = (pUVar3.zeroVector).x;
			uVar1._4_4_ = (pUVar3.zeroVector).y;
			value.z = -fVar6;
			value.x = (float)(int)(uVar1 ^ 0x8000000080000000);
			value.y = (float)(int)((uVar1 ^ 0x8000000080000000) >> 0x20);
			__this_00.forward = value;
		}
		pUVar2 = this.Cache;
		if ((pUVar2 != null) &&(__this_01 = pUVar2.Rigidbody, __this_01 != null)) {
			value_00.x = (float)local_30._8_4_;
			value_00.y = (float)local_30._12_4_;
			__this_01.linearVelocity = value_00;
			return;
		}
	label_05c27a4f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004437")]
	[Address(RVA = "0x5B27A60", Offset = "0x5B26A60", VA = "0x5B27A60", Slot = "157")]
	public virtual void Run()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Run): clean
		BaseTitanAnimations pCVar1;
		AnimationHandler __this_00;
		String animation;

		this._stepPhase = 0;
		pCVar1 = this.BaseTitanAnimations;
		if (pCVar1 != null) {
			animation = pCVar1.get_Run();
			this._needFreshCore = true;
			__this_00 = this.Animation;
			if (__this_00 != null) {
				__this_00.SetCullingType(false);
				this.Ungrab();
				this.DeactivateAllHitboxes();
				this.CrossFade(animation, 0.5, 0.0);
				this.State = 1;
				this._currentStateAnimation = animation;
				this._stateTimeLeft = 0.0;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004438")]
	[Address(RVA = "0x5B27B30", Offset = "0x5B26B30", VA = "0x5B27B30", Slot = "158")]
	public virtual void Sprint()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Sprint): clean
		BaseTitanAnimations pCVar1;
		AnimationHandler __this_00;
		String animation;

		this._stepPhase = 0;
		pCVar1 = this.BaseTitanAnimations;
		if (pCVar1 != null) {
			animation = pCVar1.get_Sprint();
			this._needFreshCore = true;
			__this_00 = this.Animation;
			if (__this_00 != null) {
				__this_00.SetCullingType(false);
				this.Ungrab();
				this.DeactivateAllHitboxes();
				this.CrossFade(animation, 0.2, 0.0);
				this.State = 2;
				this._currentStateAnimation = animation;
				this._stateTimeLeft = 0.0;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004439")]
	[Address(RVA = "0x5B27C00", Offset = "0x5B26C00", VA = "0x5B27C00", Slot = "159")]
	public virtual void WallClimb()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$WallClimb): clean
		BaseTitanAnimations pCVar1;
		AnimationHandler __this_00;
		bool bVar2;
		String animation;

		bVar2 = this.get_CanWallClimb();
		if ((bVar2) && (this._climbCooldownLeft <= 0.0)) {
			this._climbCooldownLeft = this.ClimbCooldown;
			this._stepPhase = 0;
			pCVar1 = this.BaseTitanAnimations;
			if (pCVar1 != null) {
				animation = pCVar1.get_Run();
				this._needFreshCore = true;
				__this_00 = this.Animation;
				if (__this_00 != null) {
					__this_00.SetCullingType(false);
					this.Ungrab();
					this.DeactivateAllHitboxes();
					this.CrossFade(animation, 0.1, 0.0);
					this.State = 0x19;
					this._currentStateAnimation = animation;
					this._stateTimeLeft = 0.0;
					return;
				}
			}
			throw new NullReferenceException();
		}
		return;
	}

	[Token(Token = "0x600443A")]
	[Address(RVA = "0x5B27D10", Offset = "0x5B26D10", VA = "0x5B27D10", Slot = "160")]
	public virtual void Eat()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Eat): clean
		return;
	}

	[Token(Token = "0x600443B")]
	[Address(RVA = "0x5B27D20", Offset = "0x5B26D20", VA = "0x5B27D20", Slot = "161")]
	public virtual void Walk()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Walk): clean
		BaseTitanAnimations pCVar1;
		AnimationHandler __this_00;
		String animation;

		this._stepPhase = 0;
		pCVar1 = this.BaseTitanAnimations;
		if (pCVar1 != null) {
			animation = pCVar1.get_Walk();
			this._needFreshCore = true;
			__this_00 = this.Animation;
			if (__this_00 != null) {
				__this_00.SetCullingType(false);
				this.Ungrab();
				this.DeactivateAllHitboxes();
				this.CrossFade(animation, 0.5, 0.0);
				this.State = 3;
				this._currentStateAnimation = animation;
				this._stateTimeLeft = 0.0;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600443C")]
	[Address(RVA = "0x5B27DF0", Offset = "0x5B26DF0", VA = "0x5B27DF0", Slot = "162")]
	public virtual void Idle()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Idle): clean
		float fVar1;

		fVar1 = 0.0;
		if (this.AI != false) {
			fVar1 = 0.1;
		}
		this.Idle(fVar1);
		return;
	}

	[Token(Token = "0x600443D")]
	[Address(RVA = "0x5B27E20", Offset = "0x5B26E20", VA = "0x5B27E20", Slot = "163")]
	public virtual void Idle(float fadeTime)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Idle): clean
		BaseTitanAnimations pCVar1;
		String animation;

		pCVar1 = this.BaseTitanAnimations;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		animation = pCVar1.get_Idle();
		this.StateActionWithTime(0, animation, 0.0, fadeTime, true, 0.0);
		return;
	}

	[Token(Token = "0x600443E")]
	[Address(RVA = "0x5B27E80", Offset = "0x5B26E80", VA = "0x5B27E80", Slot = "164")]
	public virtual void IdleWait(float waitTime)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$IdleWait): clean
		float fVar1;

		fVar1 = 2.0;
		if (waitTime <= 2.0) {
			fVar1 = waitTime;
		}
		this.Idle((float)(~-(uint)(0.1 <= waitTime) & 0x3dcccccd | (uint)fVar1 & -(uint)(0.1 <= waitTime)));
		this._stateTimeLeft = waitTime;
		return;
	}

	[Token(Token = "0x600443F")]
	[Address(RVA = "0x5B27EE0", Offset = "0x5B26EE0", VA = "0x5B27EE0", Slot = "165")]
	public virtual void Land()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Land): 23 lines keep C-only constructs
		float fVar1;
		BaseTitanAnimations pCVar2;
		AnimationHandler pCVar3;
		BaseComponentCache pUVar4;
		Transform __this_00;
		String pSVar6;
		float fVar7;
		float fVar8;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint uVar9;
		uint uVar10;
		Quaternion UVar11;
		Vector3 UVar12;
		Vector3 UStack_78;
		byte[] auStack_68 = new byte[16];
		byte[] auStack_58 = new byte[16];
		byte[] auStack_48 = new byte[16];
		ulong uStack_38;
		byte[] auStack_28 = new byte[24];

		pCVar2 = this.BaseTitanAnimations;
		if (pCVar2 != null) {
			pSVar6 = pCVar2.get_Land();
			pCVar3 = this.Animation;
			if (pCVar3 != null) {
				fVar7 = pCVar3.GetLength(pSVar6);
				this._needFreshCore = true;
				pCVar3 = this.Animation;
				if (pCVar3 != null) {
					pCVar3.SetCullingType(false);
					this.Ungrab();
					this.DeactivateAllHitboxes();
					uVar9 = 0;
					uVar10 = 0;
					this.CrossFade(pSVar6, 0.1, 0.0);
					this.State = 9;
					this._currentStateAnimation = pSVar6;
					this._stateTimeLeft = fVar7;
					pUVar4 = this.Cache;
					if ((pUVar4 != null) &&(__this_00 = pUVar4.Transform, __this_00 != null)) {
						pSVar6 = EffectPrefabs.Boom2;
						UVar12 = __this_00.position;
						auStack_28._8_4_ = extraout_XMM0_Dc;
						auStack_28._0_8_ = UVar12._0_8_;
						auStack_28._12_4_ = extraout_XMM0_Dd;
						uStack_38._0_4_ = (Vector3.downVector).x;
						uStack_38._4_4_ = (Vector3.downVector).y;
						fVar7 = (Vector3.downVector).z;
						auStack_68 = ZEXT416((uint)this._currentGroundDistance);
						UStack_78.x = 4.712389;
						UStack_78.y = 0.0;
						UStack_78.z = 0.0;
						UVar11 = Quaternion.Internal_FromEulerRad(ref UStack_78);
						auStack_48._8_4_ = extraout_XMM0_Dc_00;
						auStack_48._0_8_ = UVar11._0_8_;
						auStack_48._12_4_ = extraout_XMM0_Dd_00;
						auStack_58._8_4_ = uVar9;
						auStack_58._0_8_ = UVar11._8_8_;
						auStack_58._12_4_ = uVar10;
						fVar1 = this.Size;
						fVar8 = this.get_SizeMultiplier();
						UVar12.z = UVar12.z + fVar7 * (float)auStack_68._0_4_;
						UVar12.x = (float)auStack_28._0_4_ + (float)uStack_38 * (float)auStack_68._0_4_;
						UVar12.y = (float)auStack_28._4_4_ + uStack_38._4_4_ * (float)auStack_68._0_4_;
						UVar11.z = (float)auStack_58._0_4_;
						UVar11.w = (float)auStack_58._4_4_;
						UVar11.x = (float)auStack_48._0_4_;
						UVar11.y = (float)auStack_48._4_4_;
						EffectSpawner.Spawn(pSVar6, UVar12, UVar11, fVar1 * fVar8, true, null);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004440")]
	[Address(RVA = "0x5B28160", Offset = "0x5B27160", VA = "0x5B28160", Slot = "166")]
	public virtual void Fall()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Fall): clean
		BaseTitanAnimations pCVar1;
		AnimationHandler __this_00;
		String animation;

		pCVar1 = this.BaseTitanAnimations;
		if (pCVar1 != null) {
			animation = pCVar1.get_Fall();
			this._needFreshCore = true;
			__this_00 = this.Animation;
			if (__this_00 != null) {
				__this_00.SetCullingType(false);
				this.Ungrab();
				this.DeactivateAllHitboxes();
				this.CrossFade(animation, 0.1, 0.0);
				this.State = 7;
				this._currentStateAnimation = animation;
				this._stateTimeLeft = 0.0;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004441")]
	[Address(RVA = "0x5B28220", Offset = "0x5B27220", VA = "0x5B28220", Slot = "167")]
	public virtual void Turn(Vector3 targetDirection)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Turn): 5 lines keep C-only constructs
		BaseTitanAnimations pCVar1;
		AnimationHandler __this_00;
		VirtualInvokeData_bccba1ebf973 pVVar2;
		bool bVar3;
		String a;
		VirtualInvokeData_bccba1ebf973 pVVar4;
		float fVar5;

		bVar3 = this.CanAction();
		if (bVar3) {
			fVar5 = this.GetAngleToTarget(targetDirection);
			pCVar1 = this.BaseTitanAnimations;
			if (fVar5 <= 0.0) {
				if (pCVar1 == null) goto label_05c2831e;
				pVVar4 = &(pCVar1.klass.vtable)._19_get_Turn90L;
				pVVar2 = &(pCVar1.klass.vtable)._19_get_Turn90L;
			}
			else {
				if (pCVar1 == null) goto label_05c2831e;
				pVVar4 = &(pCVar1.klass.vtable)._20_get_Turn90R;
				pVVar2 = &(pCVar1.klass.vtable)._20_get_Turn90R;
			}
			a = (*pVVar4.methodPtr)(pCVar1,pVVar2.method);
			bVar3 = (a != "");
			if (bVar3) {
				__this_00 = this.Animation;
				if (__this_00 != null) {
					fVar5 = __this_00.GetTotalTime(a);
					this.StartTurn(targetDirection, a, fVar5);
					return;
				}
	label_05c2831e: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6004442")]
	[Address(RVA = "0x5B28330", Offset = "0x5B27330", VA = "0x5B28330")]
	protected void StartTurn(Vector3 targetDirection, string animation, float turnTime)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$StartTurn): 19 lines keep C-only constructs
		BaseComponentCache pUVar1;
		Transform pUVar2;
		AnimationHandler __this_00;
		uint in_XMM0_Dc;
		uint extraout_XMM0_Dc;
		uint in_XMM0_Dd;
		uint extraout_XMM0_Dd;
		Quaternion UVar4;
		Vector3 UVar5;
		Vector3 local_58;
		Vector3 local_48;
		byte[] local_38 = new byte[16];
		byte[] local_28 = new byte[16];

		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			local_38._8_4_ = in_XMM0_Dc;
			local_38._0_8_ = targetDirection._0_8_;
			local_38._12_4_ = in_XMM0_Dd;
			local_28._0_4_ = targetDirection.z;
			pUVar2 = pUVar1.Transform;
			if (pUVar2 != null) {
				UVar5 = pUVar2.forward;
				local_48.z = UVar5.z;
				local_48._0_8_ = UVar5._0_8_;
				local_58.x = (float)local_38._0_4_;
				local_58.y = (float)local_38._4_4_;
				local_58.z = (float)local_28._0_4_;
				UVar5 = Vector3.Internal_RotateTowards(ref local_48, ref local_58, 2.0943952, 3.4028235e+38);
				pUVar1 = this.Cache;
				if (pUVar1 != null) {
					local_38._0_4_ = UVar5.z;
					local_28._8_4_ = extraout_XMM0_Dc;
					local_28._0_8_ = UVar5._0_8_;
					local_28._12_4_ = extraout_XMM0_Dd;
					pUVar2 = pUVar1.Transform;
					if (pUVar2 != null) {
						UVar4 = (Quaternion)pUVar2.rotation ;
						this._turnStartRotation = UVar4;
						local_48.x = (float)local_28._0_4_;
						local_48.y = (float)local_28._4_4_;
						local_48.z = (float)local_38._0_4_;
						local_58.x = (Vector3.upVector).x;
						local_58.y = (Vector3.upVector).y;
						local_58.z = (Vector3.upVector).z;
						UVar4 = (Quaternion)Quaternion.Internal_LookRotation(ref local_48, ref local_58);
						this._turnTargetRotation = UVar4;
						this._currentTurnTime = 0.0;
						this._maxTurnTime = turnTime;
						this._needFreshCore = true;
						__this_00 = this.Animation;
						if (__this_00 != null) {
							__this_00.SetCullingType(false);
							this.Ungrab();
							this.DeactivateAllHitboxes();
							this.CrossFade(animation, 0.1, 0.0);
							this.State = 0x18;
							this._currentStateAnimation = animation;
							this._stateTimeLeft = turnTime;
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004443")]
	[Address(RVA = "0x5B28510", Offset = "0x5B27510", VA = "0x5B28510", Slot = "168")]
	public virtual void Blind()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Blind): clean
		sbyte cVar1;
		int iVar2;
		BaseTitanAnimations pCVar3;
		bool bVar4;
		bool bVar5;
		String pSVar6;
		int state;
		float fVar7;
		float fVar8;

		iVar2 = this.State;
		if (iVar2 != 0x10) {
			if (iVar2 == 0x13) {
				bVar4 = true;
				bVar5 = false;
				cVar1 = this.AI;
			}
			else {
				bVar4 = iVar2 == 0x11;
				bVar5 = !bVar4;
				if (iVar2 == 0x12) {
					return;
				}
				cVar1 = this.AI;
			}
			if ((cVar1 != false) && (bVar4 || this._disableCooldownLeft <= 0.0)) {
				bVar4 = this.IsSitting;
				pCVar3 = this.BaseTitanAnimations;
				if (bVar4) {
					if (pCVar3 != null) {
						pSVar6 = pCVar3.get_SitBlind();
						bVar4 = (pSVar6 != "");
						if (!bVar4) {
							return;
						}
						if (bVar5) {
							fVar7 = -1.0;
						}
						else {
							fVar8 = Time.time;
							fVar7 = 0.0;
							if (this.State == 0x13) {
								fVar7 = this._currentCrippleTime;
							}
							fVar7 = fVar8 + this._stateTimeLeft + fVar7;
						}
						this._crippleEndTime = fVar7;
						pCVar3 = this.BaseTitanAnimations;
						if (pCVar3 != null) {
							pSVar6 = pCVar3.get_SitBlind();
							state = 0x12;
	label_05c286b5: ;
							this.StateAction(state, pSVar6, 0.1, true);
							this.DamagedGrunt(1.0);
							return;
						}
					}
				}
				else if (pCVar3 != null) {
					pSVar6 = pCVar3.get_Blind();
					bVar5 = (pSVar6 != "");
					if (!bVar5) {
						return;
					}
					pCVar3 = this.BaseTitanAnimations;
					if (pCVar3 != null) {
						pSVar6 = pCVar3.get_Blind();
						state = 0x10;
						goto label_05c286b5;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6004444")]
	[Address(RVA = "0x5B286F0", Offset = "0x5B276F0", VA = "0x5B286F0", Slot = "169")]
	public virtual void Cripple(float time = 0f)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Cripple): clean
		BaseTitanAnimations pCVar1;
		AnimationHandler pCVar2;
		bool bVar3;
		String pSVar4;
		float fVar5;
		float fVar6;

		pCVar1 = this.BaseTitanAnimations;
		if (pCVar1 != null) {
			pSVar4 = pCVar1.get_SitFall();
			bVar3 = (pSVar4 != "");
			if ((((!bVar3) || (this.State == 0x11)) || (this.AI == false)) ||(0.0 < this._disableCooldownLeft)) {
				return;
			}
			if (time <= 0.0) {
				time = this.get_DefaultCrippleTime();
			}
			this._currentCrippleTime = time;
			pCVar1 = this.BaseTitanAnimations;
			if (pCVar1 != null) {
				pSVar4 = pCVar1.get_SitFall();
				pCVar2 = this.Animation;
				if (pCVar2 != null) {
					fVar5 = pCVar2.GetLength(pSVar4);
					this._needFreshCore = true;
					pCVar2 = this.Animation;
					if (pCVar2 != null) {
						pCVar2.SetCullingType(false);
						this.Ungrab();
						this.DeactivateAllHitboxes();
						this.CrossFade(pSVar4, 0.1, 0.0);
						this.State = 0x13;
						this._currentStateAnimation = pSVar4;
						this._stateTimeLeft = fVar5;
						this.DamagedGrunt(1.0);
						fVar5 = this._currentCrippleTime;
						fVar6 = this.get_DisableCooldown();
						this._disableCooldownLeft = fVar6 + fVar5;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004445")]
	[Address(RVA = "0x5B288D0", Offset = "0x5B278D0", VA = "0x5B288D0", Slot = "80")]
	public override void Emote(string emote)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Emote): clean
		return;
	}

	[Token(Token = "0x6004446")]
	[Address(RVA = "0x5B288E0", Offset = "0x5B278E0", VA = "0x5B288E0", Slot = "170")]
	protected virtual void RegenerateWardedWeakSpot()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$RegenerateWardedWeakSpot): clean
		return;
	}

	[Token(Token = "0x6004447")]
	[Address(RVA = "0x5B288F0", Offset = "0x5B278F0", VA = "0x5B288F0", Slot = "81")]
	public override void ForceAnimation(string animation, float fade)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$ForceAnimation): clean
		AnimationHandler pCVar1;
		float fVar2;

		pCVar1 = this.Animation;
		if (pCVar1 != null) {
			fVar2 = pCVar1.GetLength(animation);
			this._needFreshCore = true;
			pCVar1 = this.Animation;
			if (pCVar1 != null) {
				pCVar1.SetCullingType(false);
				this.Ungrab();
				this.DeactivateAllHitboxes();
				this.CrossFade(animation, fade, 0.0);
				this.State = 8;
				this._currentStateAnimation = animation;
				this._stateTimeLeft = fVar2;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004448")]
	[Address(RVA = "0x5B289B0", Offset = "0x5B279B0", VA = "0x5B289B0")]
	protected float GetSpawnEffectSize()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$GetSpawnEffectSize): clean
		float fVar1;
		float fVar2;

		fVar2 = this.get_SizeMultiplier();
		return fVar2 * fVar1;
	}

	[Token(Token = "0x6004449")]
	[Address(RVA = "0x5B289E0", Offset = "0x5B279E0", VA = "0x5B289E0", Slot = "171")]
	[PunRPC]
	public virtual void GrabRPC(int viewId, bool left, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$GrabRPC): clean
		BaseTitanComponentCache pCVar1;
		bool bVar2;
		PhotonView __this_00;
		Human pCVar3;
		Transform pUVar4;

		__this_00 = PhotonView.Find(viewId);
		if (__this_00 == null) {
			if (info.Sender == null) goto label_05c28ade;
		}
		else if (__this_00._Owner_k__BackingField == info.Sender) {
			pCVar3 = __this_00.GetComponent<Human>();
			bVar2 = this.IsMine();
			if (bVar2) {
				this.HoldHuman = pCVar3;
			}
			if (pCVar3 == null) {
	label_05c28ade: ;
				throw new NullReferenceException();
			}
			pCVar3.Grabber = this;
			pCVar1 = this.BaseTitanCache;
			if (left) {
				if (pCVar1 == null) goto label_05c28ade;
				pUVar4 = pCVar1.GrabLSocket;
			}
			else {
				if (pCVar1 == null) goto label_05c28ade;
				pUVar4 = pCVar1.GrabRSocket;
			}
			pCVar3.GrabHand = pUVar4;
			return;
		}
		return;
	}

	[Token(Token = "0x600444A")]
	[Address(RVA = "0x5B28AF0", Offset = "0x5B27AF0", VA = "0x5B28AF0", Slot = "172")]
	[PunRPC]
	public virtual void UngrabRPC(int viewId, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$UngrabRPC): clean
		bool bVar1;
		PhotonView __this_00;
		Human pCVar2;

		__this_00 = PhotonView.Find(viewId);
		if (__this_00 == null) {
			if (info.Sender != null) {
				return;
			}
		}
		else {
			if (__this_00._Owner_k__BackingField != info.Sender) {
				return;
			}
			pCVar2 = __this_00.GetComponent<Human>();
			bVar1 = this.IsMine();
			if (bVar1) {
				this.HoldHuman = null;
			}
			if (pCVar2 != null) {
				pCVar2.Grabber = null;
				pCVar2.GrabHand = null;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600444B")]
	[Address(RVA = "0x5B28BF0", Offset = "0x5B27BF0", VA = "0x5B28BF0", Slot = "173")]
	public virtual void Ungrab()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Ungrab): 4 lines keep C-only constructs
		Human pCVar1;
		BaseComponentCache pUVar2;
		PhotonView __this_00;
		bool bVar3;
		Object[] parameters;
		Human* targetAddress;

		pCVar1 = this.HoldHuman;
		bVar3 = ((Object)pCVar1 != null);
		if (bVar3) {
			targetAddress = &this.HoldHuman;
			if ((*targetAddress != null) &&(pUVar2 = ((*targetAddress).fields).Cache, pUVar2 != null)) {
				__this_00 = pUVar2.PhotonView;
				parameters = (Object[])new object[0];
				if (__this_00 != null) {
					__this_00.RPC("UngrabRPC", 0, parameters);
					pCVar1 = *targetAddress;
					if (pCVar1 != null) {
						pCVar1.GrabHand = null;
						*targetAddress = null;
						return;
					}
				}
			}
			throw new NullReferenceException();
		}
		return;
	}

	[Token(Token = "0x600444C")]
	[Address(RVA = "0x5B28CF0", Offset = "0x5B27CF0", VA = "0x5B28CF0", Slot = "174")]
	[PunRPC]
	public virtual void DecreaseAttackSpeedRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$DecreaseAttackSpeedRPC): clean
		float fVar1;

		if (this.ConfusedTime <= 0.0) {
			fVar1 = this.AttackSpeedMultiplier;
			this.PreviousAttackSpeedMultiplier = fVar1;
			this.AttackSpeedMultiplier = fVar1 * 0.67;
		}
		this.ConfusedTime = 10.0;
		return;
	}

	[Token(Token = "0x600444D")]
	[Address(RVA = "0x5B28D30", Offset = "0x5B27D30", VA = "0x5B28D30", Slot = "175")]
	public virtual void Confuse()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Confuse): clean
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		Player targetPlayer;
		Object[] parameters;

		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(__this_00 = pUVar1.PhotonView, __this_00 == null)) {
			throw new NullReferenceException();
		}
		targetPlayer = __this_00._Owner_k__BackingField;
		parameters = (Object[])new object[0];
		__this_00.RPC("DecreaseAttackSpeedRPC", targetPlayer, parameters);
		return;
	}

	[Token(Token = "0x600444E")]
	[Address(RVA = "0x5B28DC0", Offset = "0x5B27DC0", VA = "0x5B28DC0")]
	protected void ResetAttackSpeed()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$ResetAttackSpeed): clean
		float fVar1;

		fVar1 = this.PreviousAttackSpeedMultiplier;
		if (0.0 <= fVar1) {
			this.AttackSpeedMultiplier = fVar1;
		}
		return;
	}

	[Token(Token = "0x600444F")]
	[Address(RVA = "0x5B1F4B0", Offset = "0x5B1E4B0", VA = "0x5B1F4B0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$OnPlayerEnteredRoom): 5 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		ulong in_RAX;
		Object[] parameters;
		object pIVar2;
		object pIVar3;
		ulong uStack_28;

		uStack_28 = in_RAX;
		this.OnPlayerEnteredRoom(player) ;
		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(__this_00 = pUVar1.PhotonView, __this_00 == null)) {
	label_05c1f5b9: ;
			throw new NullReferenceException();
		}
		if (__this_00._IsMine_k__BackingField != false) {
			parameters = (Object[])new object[1];
			uStack_28 = CONCAT44(this.Size, (undefined4)uStack_28);
			pIVar2 = (object)(((long)&uStack_28 + 4));
			if (parameters == null) goto label_05c1f5b9;
			if (pIVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((parameters.obj).klass)._1).element_class);
				if (pIVar3 == null) {
					pIVar2 = new ArrayTypeMismatchException();
					throw pIVar2;
				}
			}
			if ((int)parameters.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			parameters[0] = pIVar2;
			__this_00.RPC("SetSizeRPC", player, parameters);
		}
		return;
	}

	[Token(Token = "0x6004450")]
	[Address(RVA = "0x5B268B0", Offset = "0x5B258B0", VA = "0x5B268B0")]
	protected void StateAction(TitanState state, string animation, float fade = 0.1f, bool deactivateHitboxes = true)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$StateAction): clean
		AnimationHandler __this_00;
		float stateTime;

		__this_00 = this.Animation;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		stateTime = __this_00.GetLength(animation);
		this.StateActionWithTime(state, animation, stateTime, fade, deactivateHitboxes, 0.0);
		return;
	}

	[Token(Token = "0x6004451")]
	[Address(RVA = "0x5B26AE0", Offset = "0x5B25AE0", VA = "0x5B26AE0")]
	protected void StateAttack(string animation, float fade = 0.1f, bool deactivateHitboxes = true)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$StateAttack): clean
		AnimationHandler pCVar1;
		float fVar2;

		this._needFreshCore = true;
		pCVar1 = this.Animation;
		if (pCVar1 != null) {
			pCVar1.SetCullingType(true);
			this.Ungrab();
			if (deactivateHitboxes) {
				this.DeactivateAllHitboxes();
			}
			this.CrossFadeWithSpeed(animation, this._currentAttackSpeed, fade, 0.0);
			this.State = 10;
			this._currentStateAnimation = animation;
			pCVar1 = this.Animation;
			if (pCVar1 != null) {
				fVar2 = pCVar1.GetLength(animation);
				this._stateTimeLeft = fVar2 / this._currentAttackSpeed;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004452")]
	[Address(RVA = "0x5B20660", Offset = "0x5B1F660", VA = "0x5B20660")]
	protected void StateActionWithTime(TitanState state, string animation, float stateTime, float fade = 0.1f, bool deactivateHitboxes = true, float speed = 0f)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$StateActionWithTime): clean
		AnimationHandler __this_00;
		bool bVar1;

		this._needFreshCore = true;
		__this_00 = this.Animation;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetCullingType(state == 6 || (state == 0xf || state == 10));
		if ((state != 0x17) && (state != 0x1b)) {
			this.Ungrab();
		}
		if (deactivateHitboxes) {
			this.DeactivateAllHitboxes();
		}
		if (speed <= 0.0) {
			if ((state != 0) ||(bVar1 = (this._currentStateAnimation != animation))) {
				this.CrossFade(animation, fade, 0.0);
			}
		}
		else {
			this.CrossFadeWithSpeed(animation, speed, fade, 0.0);
		}
		this.State = state;
		this._currentStateAnimation = animation;
		this._stateTimeLeft = stateTime;
		return;
	}

	[Token(Token = "0x6004453")]
	[Address(RVA = "0x5B28DE0", Offset = "0x5B27DE0", VA = "0x5B28DE0")]
	protected void SetAnimationUpdateMode(bool always)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$SetAnimationUpdateMode): clean
		AnimationHandler __this_00;

		__this_00 = this.Animation;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetCullingType(always);
		return;
	}

	[Token(Token = "0x6004454")]
	[Address(RVA = "0x5B28E00", Offset = "0x5B27E00", VA = "0x5B28E00", Slot = "101")]
	protected override void Awake()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Awake): 3 lines keep C-only constructs
		InGameManager pGVar1;
		GraphicsSettings pSVar2;
		BoolSetting pSVar3;
		BaseComponentCache pUVar4;
		Rigidbody pUVar5;
		AnimationHandler __this_00;
		bool bVar6;
		bool pbVar7;
		TitanColliderToggler pCVar8;
		float fVar9;

		this.Awake();
		pGVar1 = this._inGameManager;
		bVar6 = ((Object)pGVar1 != null);
		if (bVar6) {
			pGVar1 = this._inGameManager;
			if (pGVar1 == null) goto label_05c28ff1;
			pbVar7 = &pGVar1._TitanGoreEnabled_k__BackingField;
		}
		else {
			pSVar2 = SettingsManager.GraphicsSettings;
			if ((pSVar2 == null) ||(pSVar3 = pSVar2.TitanGore, pSVar3 == null)) goto label_05c28ff1;
			pbVar7 = &pSVar3._value;
		}
		this._GoreEnabled_k__BackingField = *pbVar7;
		this.CreateAnimations(null);
		pUVar4 = this.Cache;
		if ((pUVar4 != null) &&(pUVar5 = pUVar4.Rigidbody, pUVar5 != null)) {
			pUVar5.freezeRotation = true;
			pUVar4 = this.Cache;
			if ((pUVar4 != null) &&(pUVar5 = pUVar4.Rigidbody, pUVar5 != null)) {
				pUVar5.useGravity = false;
				pCVar8 = TitanColliderToggler.Create(this);
				this.TitanColliderToggler = pCVar8;
				fVar9 = this.get_DefaultRunSpeed();
				this.RunSpeedBase = fVar9;
				fVar9 = this.get_DefaultWalkSpeed();
				this.WalkSpeedBase = fVar9;
				fVar9 = this.get_DefaultJumpForce();
				this.JumpForce = fVar9;
				fVar9 = this.get_DefaultRotateSpeed();
				this.RotateSpeed = fVar9;
				__this_00 = this.Animation;
				if (__this_00 != null) {
					__this_00.SetCullingType(false);
					this.ScaleSounds(1.0);
					return;
				}
			}
		}
	label_05c28ff1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004455")]
	[Address(RVA = "0x5B211F0", Offset = "0x5B201F0", VA = "0x5B211F0", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$CreateCache): 2 lines keep C-only constructs
		byte bVar1;
		BaseTitanComponentCache pCVar2;

		pCVar2 = typeof(BaseTitanComponentCache);
		if (cache == null) {
			this.BaseTitanCache = null;
	label_05c21280: ;
			this.CreateCache(cache);
			return;
		}
		bVar1 = (typeof(BaseTitanComponentCache)._2).typeHierarchyDepth;
		if ((bVar1 <= (cache.klass._2).typeHierarchyDepth) &&((cache.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(BaseTitanComponentCache))) {
			this.BaseTitanCache = (BaseTitanComponentCache)cache;
			if ((bVar1 <= (cache.klass._2).typeHierarchyDepth) &&((cache.klass._2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass)pCVar2)) goto label_05c21280;
		}
		throw new InvalidCastException();
	}

	[Token(Token = "0x6004456")]
	[Address(RVA = "0x5B21320", Offset = "0x5B20320", VA = "0x5B21320", Slot = "176")]
	protected virtual void CreateAnimations(BaseTitanAnimations animations)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$CreateAnimations): 1 lines keep C-only constructs
		FieldInfo pSVar1;
		Dictionary<object, object> __this_00;
		bool bVar2;
		uint uVar3;
		Dictionary<string, float> pSVar4;
		Type __this_01;
		FieldInfo[] pSVar5;
		String __this_02;
		object pIVar6;
		object value;
		uint uVar7;

		if (animations == null) {
			animations = new BaseTitanAnimations();
		}
		this.BaseTitanAnimations = animations;
		pSVar4 = this.GetRootMotionAnimations();
		this._rootMotionAnimations = pSVar4;
		pIVar6 = (object)this.BaseTitanAnimations;
		if (pIVar6 != null) {
			__this_01 = pIVar6.GetType();
			if (__this_01 != null) {
				pSVar5 = __this_01.GetFields();
				if (pSVar5 != null) {
					uVar3 = (uint)pSVar5.Length;
					if (0 < (int)uVar3) {
						uVar7 = 0;
						do {
							if (uVar3 <= uVar7) {
								throw new IndexOutOfRangeException();
							}
							pSVar1 = pSVar5[(int)uVar7];
							if (pSVar1 == null) goto label_05c2151b;
							__this_02 = (String)pSVar1.unknown();
							if (__this_02 == null) goto label_05c2151b;
							bVar2 = __this_02.StartsWith("Attack");
							if (bVar2) {
								__this_00 = (Dictionary<object, object>)this.AttackAnimations;
								pIVar6 = (object)pSVar1.unknown();
								value = (object)pSVar1.unknown(this.BaseTitanAnimations);
								if (__this_00 == null) goto label_05c2151b;
								if ((value != null) && (value.klass != g_data_07556758)) {
									throw new InvalidCastException();
								}
								__this_00.Add(pIVar6, value);
							}
							uVar7 = uVar7 + 1;
							uVar3 = (uint)pSVar5.Length;
						} while ((int)uVar7 < (int)uVar3);
					}
					return;
				}
			}
		}
	label_05c2151b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004457")]
	[Address(RVA = "0x5B29000", Offset = "0x5B28000", VA = "0x5B29000", Slot = "77")]
	public override Transform GetCameraAnchor()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$GetCameraAnchor): clean
		BaseTitanComponentCache pCVar1;

		pCVar1 = this.BaseTitanCache;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		return pCVar1.Head;
	}

	[Token(Token = "0x6004458")]
	[Address(RVA = "0x5B29020", Offset = "0x5B28020", VA = "0x5B29020", Slot = "177")]
	protected virtual void UpdateDisableArm()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$UpdateDisableArm): clean
		return;
	}

	[Token(Token = "0x6004459")]
	[Address(RVA = "0x5B29030", Offset = "0x5B28030", VA = "0x5B29030", Slot = "178")]
	public virtual void DisableArm(bool left)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$DisableArm): clean
		return;
	}

	[Token(Token = "0x600445A")]
	[Address(RVA = "0x5B29040", Offset = "0x5B28040", VA = "0x5B29040", Slot = "179")]
	public virtual bool IsToggleColliderActive(Collider collider)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$IsToggleColliderActive): clean
		return true;
	}

	[Token(Token = "0x600445B")]
	[Address(RVA = "0x5B29050", Offset = "0x5B28050", VA = "0x5B29050", Slot = "180")]
	protected virtual void UpdateTurn()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$UpdateTurn): clean
		BaseComponentCache pUVar1;
		Transform __this_00;
		float fVar2;
		float fVar3;
		Quaternion value;
		Quaternion UStack_30;
		Quaternion UStack_20;

		fVar3 = this._currentTurnTime;
		fVar2 = Time.deltaTime;
		fVar2 = fVar2 + fVar3;
		this._currentTurnTime = fVar2;
		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			__this_00 = pUVar1.Transform;
			UStack_20.x = this._turnStartRotation.x;
			UStack_20.y = this._turnStartRotation.y;
			UStack_20.z = this._turnStartRotation.z;
			UStack_20.w = this._turnStartRotation.w;
			fVar2 = fVar2 / this._maxTurnTime;
			UStack_30.x = this._turnTargetRotation.x;
			UStack_30.y = this._turnTargetRotation.y;
			UStack_30.z = this._turnTargetRotation.z;
			UStack_30.w = this._turnTargetRotation.w;
			fVar3 = 1.0;
			if (fVar2 <= 1.0) {
				fVar3 = fVar2;
			}
			value = Quaternion.Internal_Slerp(ref UStack_20, ref UStack_30, (float)(-(uint)(0.0 <= fVar2) & (uint)fVar3));
			if (__this_00 != null) {
				__this_00.rotation = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600445C")]
	[Address(RVA = "0x5B29100", Offset = "0x5B28100", VA = "0x5B29100", Slot = "181")]
	protected virtual string GetSitIdleAniamtion()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$GetSitIdleAniamtion): clean
		BaseTitanAnimations pCVar1;
		String pSVar2;

		pCVar1 = this.BaseTitanAnimations;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		return pSVar2;
	}

	[Token(Token = "0x600445D")]
	[Address(RVA = "0x5B29130", Offset = "0x5B28130", VA = "0x5B29130", Slot = "182")]
	protected virtual string GetSitFallAnimation()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$GetSitFallAnimation): clean
		BaseTitanAnimations pCVar1;
		String pSVar2;

		pCVar1 = this.BaseTitanAnimations;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		return pSVar2;
	}

	[Token(Token = "0x600445E")]
	[Address(RVA = "0x5B29160", Offset = "0x5B28160", VA = "0x5B29160", Slot = "183")]
	protected virtual string GetSitUpAnimation()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$GetSitUpAnimation): clean
		BaseTitanAnimations pCVar1;
		String pSVar2;

		pCVar1 = this.BaseTitanAnimations;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		return pSVar2;
	}

	[Token(Token = "0x600445F")]
	[Address(RVA = "0x5B29190", Offset = "0x5B28190", VA = "0x5B29190")]
	protected void SetDefaultVelocityLerp()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$SetDefaultVelocityLerp): clean
		float fVar1;
		float fVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		BaseComponentCache pUVar7;
		Rigidbody pUVar8;
		UnityEngine_Vector3_StaticFields pUVar9;
		bool bVar10;
		float fVar11;
		float fVar12;
		float fVar13;
		Vector3 UVar14;
		Vector3 value;
		float local_78;
		float local_58;
		float fStack_54;

		bVar10 = (this._currentAttack != "AttackBellyFlop");
		if ((bVar10) &&(bVar10 = (this._currentAttack != "AttackRockThrow"))) {
			fVar1 = 1.47;
			local_78 = 1.47;
		}
		else {
			fVar1 = 1.0;
			local_78 = 1.0;
		}
		if (Il2CppMethodInitialized_0753e72c == false) {
			Il2CppMethodInitialized_0753e72c = true;
			local_78 = fVar1;
		}
		pUVar7 = this.Cache;
		if ((pUVar7 != null) &&(pUVar8 = pUVar7.Rigidbody, pUVar8 != null)) {
			pUVar9 = typeof(Vector3).static_fields;
			uVar3 = (pUVar9.upVector).x;
			uVar5 = (pUVar9.upVector).y;
			fVar1 = (pUVar9.upVector).z;
			UVar14 = pUVar8.linearVelocity;
			fVar12 = UVar14.y;
			pUVar7 = this.Cache;
			if ((pUVar7 != null) &&(pUVar8 = pUVar7.Rigidbody, pUVar8 != null)) {
				pUVar9 = typeof(Vector3).static_fields;
				uVar4 = (pUVar9.downVector).x;
				uVar6 = (pUVar9.downVector).y;
				fVar13 = this._currentGroundDistance * 100.0;
				if (100.0 <= fVar13) {
					fVar13 = 100.0;
				}
				fVar2 = (pUVar9.downVector).z;
				UVar14 = pUVar8.linearVelocity;
				fVar11 = Time.deltaTime;
				local_78 = local_78 * fVar11;
				fVar11 = 1.0;
				if (local_78 <= 1.0) {
					fVar11 = local_78;
				}
				fVar11 = (float)(-(uint)(0.0 <= local_78) & (uint)fVar11);
				local_58 = UVar14.x;
				fStack_54 = UVar14.y;
				value.x = fVar11 * ((fVar13 * (float)uVar4 + (float)uVar3 * fVar12) - local_58) + local_58;
				value.y = fVar11 * ((fVar13 * (float)uVar6 + (float)uVar5 * fVar12) - fStack_54) + fStack_54;
				value.z = ((fVar2 * fVar13 + fVar1 * fVar12) - UVar14.z) * fVar11 + UVar14.z;
				pUVar8.linearVelocity = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004460")]
	[Address(RVA = "0x5B293D0", Offset = "0x5B283D0", VA = "0x5B293D0", Slot = "184")]
	protected virtual void Update()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Update): 45 lines keep C-only constructs
		BaseTitanAnimations pCVar1;
		AnimationHandler pCVar2;
		BaseTitanComponentCache pCVar3;
		Human x;
		BaseComponentCache pUVar4;
		Transform pUVar5;
		bool bVar6;
		uint uVar7;
		int iVar8;
		int iVar9;
		String pSVar10;
		BaseTitan pCVar13;
		int piVar14;
		float fVar15;
		ulong uVar16;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		float fVar17;
		Vector3 UVar18;
		Vector3 UVar19;
		Vector3 origin;
		Vector3 direction;
		ulong local_d8;
		LayerMask[] local_c8 = new LayerMask[2];
		float local_c0;
		float local_bc;
		byte[] local_b8 = new byte[16];
		ulong local_a8;
		float local_a0;
		byte[] local_88 = new byte[16];
		RaycastHit local_78;
		RaycastHit local_48;

		local_48.m_UV.x = 0.0;
		local_48.m_UV.y = 0.0;
		local_48.m_Collider.m_Data = (EntityId)0x0;
		local_48.m_Normal.y = 0.0;
		local_48.m_Normal.z = 0.0;
		local_48.m_FaceID = 0;
		local_48.m_Distance = 0.0;
		local_48.m_Point.x = 0.0;
		local_48.m_Point.y = 0.0;
		local_48.m_Point.z = 0.0;
		local_48.m_Normal.x = 0.0;
		local_c8[0].m_Mask = (LayerMask)0;
		local_a0 = 0.0;
		local_a8 = 0;
		local_78.m_UV.x = 0.0;
		local_78.m_UV.y = 0.0;
		local_78.m_Collider.m_Data = (EntityId)0x0;
		local_78.m_Normal.y = 0.0;
		local_78.m_Normal.z = 0.0;
		local_78.m_FaceID = 0;
		local_78.m_Distance = 0.0;
		local_78.m_Point.x = 0.0;
		local_78.m_Point.y = 0.0;
		local_78.m_Point.z = 0.0;
		local_78.m_Normal.x = 0.0;
		this.UpdateDisableArm();
		this.UpdateAnimationColliders();
		bVar6 = this.IsMine();
		if (!bVar6) {
			return;
		}
		if (this.EnableAI == false) {
			return;
		}
		fVar17 = this._disableCooldownLeft;
		fVar15 = Time.deltaTime;
		this._disableCooldownLeft = fVar17 - fVar15;
		fVar17 = this._climbCooldownLeft;
		fVar15 = Time.deltaTime;
		this._climbCooldownLeft = fVar17 - fVar15;
		uVar7 = this.State;
		if (this.AI == false) {
			if ((uVar7 - 1 < 3) && (this.IsSit != false)) {
				pCVar1 = this.BaseTitanAnimations;
				if (pCVar1 != null) {
					pSVar10 = pCVar1.get_SitDown();
					pCVar2 = this.Animation;
					if (pCVar2 != null) {
						fVar17 = pCVar2.GetLength(pSVar10);
						this._needFreshCore = true;
						pCVar2 = this.Animation;
						if (pCVar2 != null) {
							pCVar2.SetCullingType(false);
							this.Ungrab();
							this.DeactivateAllHitboxes();
							this.CrossFade(pSVar10, 0.1, 0.0);
							this.State = 0x14;
							this._currentStateAnimation = pSVar10;
							this._stateTimeLeft = fVar17;
							return;
						}
					}
				}
				goto label_05c29fd5;
			}
			if ((uVar7 & 0xfffffffe) == 6) {
				if (((this.HasDirection != false) && (this.IsSprint != false)) &&(1.0 < this.CurrentSprintStamina)) {
					pUVar4 = this.Cache;
					if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05c29fd5;
					UVar19 = pUVar5.position;
					fVar17 = UVar19.z;
					local_b8._0_4_ = fVar17;
					uVar16 = il2cpp_runtime_helper_05bbcf10(0);
					pUVar4 = this.Cache;
					if ((pUVar4 == null) ||(pCVar13 = (BaseTitan)pUVar4.Transform, pCVar13 == null)) goto label_05c29fd5;
					fVar15 = this.Size;
					local_d8._0_4_ = UVar19.x;
					local_d8._4_4_ = UVar19.y;
					local_b8._0_4_ = (float)local_b8._0_4_ + fVar17 * 3.0 * fVar15;
					UVar19 = pCVar13.forward;
					local_bc = UVar19.z;
					local_88._8_4_ = extraout_XMM0_Dc;
					local_88._0_8_ = UVar19._0_8_;
					local_88._12_4_ = extraout_XMM0_Dd;
					local_c0 = this.Size;
					local_c8[0] = pCVar13.MapObjectMask;
					iVar9 = local_c8.value;
					UVar19.z = (float)local_b8._0_4_;
					UVar19.x = (float)local_d8 + fVar15 * (float)uVar16 * 3.0;
					UVar19.y = local_d8._4_4_ + fVar15 * (float)((ulong)uVar16 >> 0x20) * 3.0;
					UVar18.z = local_bc;
					UVar18.x = (float)local_88._0_4_;
					UVar18.y = (float)local_88._4_4_;
					bVar6 = Physics.Raycast(UVar19, UVar18, ref local_48, local_c0 * 5.0, iVar9);
					if (bVar6) {
						this.WallClimb();
					}
				}
				goto label_05c2962d;
			}
		}
		else if ((uVar7 & 0xfffffffe) == 6) {
	label_05c2962d: ;
			uVar7 = this.State;
		}
		piVar14 = &this.State;
		if ((uVar7 == 0x19) || (uVar7 == 2)) {
			fVar17 = this.SprintStaminaConsumption;
			local_b8 = ZEXT416((uint)this.CurrentSprintStamina);
			fVar15 = Time.deltaTime;
			fVar17 = (float)local_b8._0_4_ - fVar15 * fVar17;
		}
		else {
			local_b8._0_4_ = this.SprintStaminaRecover;
			fVar17 = this.CurrentSprintStamina;
			fVar15 = Time.deltaTime;
			fVar17 = fVar15 * (float)local_b8._0_4_ + fVar17;
		}
		fVar15 = this.MaxSprintStamina;
		if (fVar17 <= fVar15) {
			fVar15 = fVar17;
		}
		fVar15 = (float)(-(uint)(0.0 <= fVar17) & (uint)fVar15);
		this.CurrentSprintStamina = fVar15;
		iVar8 = this.State;
		if (iVar8 == 0x19) {
			if ((0.0 < fVar15) && (this.IsSprint != false)) {
				return;
			}
			this.Idle(0.2);
			iVar8 = this.State;
		}
		switch(iVar8) {
		case 4:
			if (this.AI == false) {
				UVar19 = this.GetAimPoint();
				pCVar3 = this.BaseTitanCache;
				if (pCVar3 == null) goto label_05c29fd5;
				local_b8._0_4_ = UVar19.z;
				pUVar5 = pCVar3.Head;
				if (pUVar5 == null) goto label_05c29fd5;
				UVar18 = pUVar5.position;
				local_d8._0_4_ = UVar19.x;
				local_d8._4_4_ = UVar19.y;
				local_a8._0_4_ = (float)local_d8 - UVar18.x;
				local_a8._4_4_ = local_d8._4_4_ - UVar18.y;
				local_a0 = (float)local_b8._0_4_ - UVar18.z;
				fVar17 = (float)il2cpp_runtime_helper_0599adc0(&local_a8, 0);
				fVar17 = fVar17 / this.JumpForce;
				UVar19 = this.get_Gravity();
				fVar15 = (float)il2cpp_runtime_helper_0599adc0();
				local_a8._4_4_ = fVar15 * 0.5 * fVar17 * fVar17 + local_a8._4_4_;
				this._jumpDirection.z = local_a0;
				this._jumpDirection.x = (float)local_a8;
				this._jumpDirection.y = local_a8._4_4_;
			}
			break;
		case 6:
		case 7:
		case 0xf:
		case 0x19:
			return;
		case 10:
			this.UpdateAttack();
			break;
		case 0x17:
		case 0x1b:
			this.UpdateEat();
			break;
		case 0x18:
			this.UpdateTurn();
		}
		fVar17 = this._stateTimeLeft;
		fVar15 = Time.deltaTime;
		fVar17 = fVar17 - fVar15;
		this._stateTimeLeft = fVar17;
		if (0.0 < fVar17) {
			return;
		}
		iVar8 = *piVar14;
		if (iVar8 == 10) {
			x = this.HoldHuman;
			bVar6 = ((Object)x != null);
			if (bVar6) {
				this.Eat();
				return;
			}
			iVar8 = *piVar14;
		}
		switch(iVar8) {
		case 0:
			if (this.HasDirection == false) {
				if (this.IsSit == false) {
					return;
				}
				pCVar1 = this.BaseTitanAnimations;
				if (pCVar1 != null) {
					pSVar10 = pCVar1.get_SitDown();
					bVar6 = (pSVar10 != "");
					if (!bVar6) {
						return;
					}
					pCVar1 = this.BaseTitanAnimations;
					if (pCVar1 != null) {
						pSVar10 = pCVar1.get_SitDown();
						this.StateAction(0x14, pSVar10, 0.1, true);
						return;
					}
				}
				goto label_05c29fd5;
			}
			bVar6 = this.IsSprint;
			if (this.IsWalk == false) {
				if (bVar6 == false) goto label_05c29fbd;
			}
			else if (bVar6 == false) goto label_05c29f8a;
			if ((1.0 < this.CurrentSprintStamina) &&(bVar6 = this.get_CanSprint())) goto label_05c29f65;
	label_05c29fbd: ;
			goto label_05c29fc0;
		case 1:
			if (this.HasDirection == false) {
	label_05c29c90: ;
				this.Idle(0.2);
				return;
			}
			if (this.IsSprint == false) {
				if (this.IsWalk == false) {
					return;
				}
	label_05c29f8a: ;
	label_05c29f9b: ;
				this.Walk();
				return;
			}
			bVar6 = this.get_CanSprint();
			if (!bVar6) {
				return;
			}
			if (this.CurrentSprintStamina <= 1.0) {
				return;
			}
			goto label_05c29f65;
		case 2:
			if (this.AI == false) {
				pUVar4 = this.Cache;
				if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) {
	label_05c29fd5: ;
					throw new NullReferenceException();
				}
				UVar19 = pUVar5.position;
				fVar17 = UVar19.z;
				local_b8._0_4_ = fVar17;
				uVar16 = il2cpp_runtime_helper_05bbcf10(0);
				pUVar4 = this.Cache;
				if ((pUVar4 == null) ||(pCVar13 = (BaseTitan)pUVar4.Transform, pCVar13 == null)) goto label_05c29fd5;
				fVar15 = this.Size;
				local_d8._0_4_ = UVar19.x;
				local_d8._4_4_ = UVar19.y;
				local_b8._0_4_ = (float)local_b8._0_4_ + fVar17 * 3.0 * fVar15;
				UVar19 = pCVar13.forward;
				local_bc = UVar19.z;
				local_88._8_4_ = extraout_XMM0_Dc_00;
				local_88._0_8_ = UVar19._0_8_;
				local_88._12_4_ = extraout_XMM0_Dd_00;
				local_c0 = this.Size;
				local_c8[0] = pCVar13.MapObjectMask;
				iVar9 = local_c8.value;
				origin.z = (float)local_b8._0_4_;
				origin.x = (float)local_d8 + fVar15 * (float)uVar16 * 3.0;
				origin.y = local_d8._4_4_ + fVar15 * (float)((ulong)uVar16 >> 0x20) * 3.0;
				direction.z = local_bc;
				direction.x = (float)local_88._0_4_;
				direction.y = (float)local_88._4_4_;
				bVar6 = Physics.Raycast(origin, direction, ref local_78, local_c0 * 5.0, iVar9);
				if (bVar6) {
					this.WallClimb();
				}
			}
			if (this.HasDirection == false) goto label_05c29c90;
			if (this.IsSprint != false) {
				if (0.0 < this.CurrentSprintStamina) {
					return;
				}
				goto label_05c29fbd;
			}
			if (this.IsWalk != false) goto label_05c29f9b;
	label_05c29fc0: ;
			this.Run();
			break;
		case 3:
			if (this.HasDirection == false) goto label_05c29c90;
			if (this.IsSprint == false) {
				if (this.IsWalk != false) {
					return;
				}
				goto label_05c29fbd;
			}
			if (this.CurrentSprintStamina <= 1.0) {
				return;
			}
			bVar6 = this.get_CanSprint();
			if (!bVar6) {
				return;
			}
	label_05c29f65: ;
			this.Sprint();
			break;
		case 4:
			this.StartJump();
			break;
		case 5:
			*piVar14 = 6;
			break;
		default: ;
			this.Idle();
			break;
		case 8:
		case 0x10:
		case 0x15:
			fVar17 = 0.3;
			goto label_05c29e21;
		case 9:
		case 0x1a:
			fVar17 = this.ActionPause;
			goto label_05c29e17;
		case 10:
		case 0x17:
			fVar17 = this.AttackPause;
			goto label_05c29e17;
		case 0xb:
			fVar17 = 0.2;
			goto label_05c29e21;
		case 0x11:
			goto switchD_05c298d6_caseD_11;
		case 0x12:
			if (0.0 <= this._crippleEndTime) {
				pSVar10 = this.GetSitIdleAniamtion();
				fVar17 = this._crippleEndTime;
				fVar15 = Time.time;
				fVar17 = fVar17 - fVar15;
				fVar15 = 0.0;
				if (0.0 <= fVar17) {
					fVar15 = fVar17;
				}
				iVar9 = 0x11;
			}
			else {
				pCVar1 = this.BaseTitanAnimations;
				if (pCVar1 == null) goto label_05c29fd5;
				pSVar10 = pCVar1.get_SitIdle();
				fVar15 = 0.3;
				iVar9 = 0x16;
			}
			this.StateActionWithTime(iVar9, pSVar10, fVar15, 0.3, true, 0.0);
			this._crippleEndTime = -1.0;
			break;
		case 0x13:
			pSVar10 = this.GetSitIdleAniamtion();
			fVar17 = this._currentCrippleTime;
			iVar9 = 0x11;
			goto label_05c29dae;
		case 0x14:
			pSVar10 = this.GetSitIdleAniamtion();
			fVar17 = 0.0;
			iVar9 = 0x16;
	label_05c29dae: ;
			this.StateActionWithTime(iVar9, pSVar10, fVar17, 0.1, true, 0.0);
			break;
		case 0x16:
			if ((this.HasDirection == false) && (this.IsSit != false)) {
				return;
			}
			goto switchD_05c298d6_caseD_11;
		case 0x18:
			fVar17 = this.TurnPause;
	label_05c29e17: ;
	label_05c29e21: ;
			this.IdleWait(fVar17);
		}
		return;
	switchD_05c298d6_caseD_11: ;
		pSVar10 = this.GetSitUpAnimation();
		this.StateAction(0x15, pSVar10, 0.1, true);
		this.RegenerateWardedWeakSpot();
		return;
	}

	[Token(Token = "0x6004461")]
	[Address(RVA = "0x5B29FE0", Offset = "0x5B28FE0", VA = "0x5B29FE0", Slot = "185")]
	public virtual void StopWallClimb()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$StopWallClimb): clean
		this.Idle(0.2);
		return;
	}

	[Token(Token = "0x6004462")]
	[Address(RVA = "0x5B2A000", Offset = "0x5B29000", VA = "0x5B2A000", Slot = "113")]
	protected override void FixedUpdate()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$FixedUpdate): 91 lines keep C-only constructs
		BaseComponentCache* ppUVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		int iVar6;
		TitanDeathDissolve pCVar7;
		BaseComponentCache pUVar8;
		Transform __this_00;
		BaseTitanComponentCache pCVar9;
		Transform pUVar10;
		Dictionary<string, float> pSVar11;
		AnimationHandler pCVar12;
		bool bVar13;
		uint uVar14;
		int layerMask;
		MethodInfo pMVar15;
		BaseTitan __this_01;
		Rigidbody pUVar16;
		float fVar17;
		float fVar18;
		float fVar19;
		float fVar21;
		ulong uVar20;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float fVar22;
		byte[] auVar23 = new byte[16];
		byte[] auVar24 = new byte[16];
		Vector3 UVar25;
		Vector3 UVar26;
		Vector3 origin;
		Vector3 value;
		Vector3 value_00;
		Vector3 value_01;
		ulong local_c8;
		ulong local_b8;
		float local_98;
		float fStack_94;
		LayerMask[] local_70 = new LayerMask[2];
		RaycastHit local_68;
		byte[] local_38 = new byte[16];

		local_68.m_UV.x = 0.0;
		local_68.m_UV.y = 0.0;
		local_68.m_Collider.m_Data = (EntityId)0x0;
		local_68.m_Normal.y = 0.0;
		local_68.m_Normal.z = 0.0;
		local_68.m_FaceID = 0;
		local_68.m_Distance = 0.0;
		local_68.m_Point.x = 0.0;
		local_68.m_Point.y = 0.0;
		local_68.m_Point.z = 0.0;
		local_68.m_Normal.x = 0.0;
		local_70[0].m_Mask = (LayerMask)0;
		pCVar7 = this.DeathDissolve;
		if ((pCVar7 != null) &&(pCVar7._CollidersDisabled_k__BackingField != false)) {
			return;
		}
		this.FixedUpdate();
		bVar13 = this.IsMine();
		if (!bVar13) {
			return;
		}
		fVar18 = this._checkGroundTimeLeft;
		fVar17 = Time.fixedDeltaTime;
		this._checkGroundTimeLeft = fVar18 - fVar17;
		fVar18 = this._launchTimeLeft;
		fVar17 = Time.fixedDeltaTime;
		this._launchTimeLeft = fVar18 - fVar17;
		pUVar8 = this.Cache;
		if ((pUVar8 == null) ||(pUVar16 = pUVar8.Rigidbody, pUVar16 == null)) goto label_05c2af0e;
		bVar13 = pUVar16.isKinematic;
		iVar6 = this.State;
		if (((iVar6 == 0x16) || (iVar6 == 0)) &&((((this.AI != false && (this.Grounded != false)) &&(this.CurrentSpeed <= 0.1)) && (this._disableKinematicTimeLeft <= 0.0)))) {
			if (!bVar13) {
				this.SetKinematic(true, 0.0);
				return;
			}
			return;
		}
		ppUVar1 = &this.Cache;
		if (bVar13) {
			this.SetKinematic(false, 0.0);
		}
		if ((*ppUVar1 == null) ||(pUVar16 = ((*ppUVar1).fields).Rigidbody, pUVar16 == null)) goto label_05c2af0e;
		UVar25 = pUVar16.linearVelocity;
		fVar17 = UVar25.y;
		fVar18 = 0.0;
		if (fVar17 < 0.0) {
			fVar19 = this._currentFallTotalTime;
			fVar18 = Time.fixedDeltaTime;
			fVar18 = fVar18 + fVar19;
		}
		this._currentFallTotalTime = fVar18;
		if ((10.0 <= fVar18 & this.AI) != 0) {
			if ((*ppUVar1 == null) ||(pUVar16 = ((*ppUVar1).fields).Rigidbody, pUVar16 == null)) goto label_05c2af0e;
			UVar25 = pUVar16.linearVelocity;
			UVar26 = this.get_Gravity();
			fVar17 = UVar26.z;
			if (UVar25.y <= UVar26.y * 10.0) {
				pMVar15 = (MethodInfo *)"Gravity";
				this.GetKilledRPC("Gravity");
			}
		}
		if (((this._checkGroundTimeLeft <= 0.0) || (this.AI == false)) ||((uVar14 = this.State, uVar14 < 10 && ((0x2a0U >> (uVar14 & 0x1f) & 1) != 0)))) {
			this.CheckGround();
			fVar18 = this.get_CheckGroundTime();
			this._checkGroundTimeLeft = fVar18;
			uVar14 = this.State;
		}
		if (uVar14 == 7) {
			if ((this.Grounded == false) || (0.0 < this._launchTimeLeft)) {
				if ((*ppUVar1 == null) ||(pUVar16 = ((*ppUVar1).fields).Rigidbody, pUVar16 == null)) goto label_05c2af0e;
				UVar25 = pUVar16.linearVelocity;
				if (-1.0 <= UVar25.y) {
					fVar18 = this._currentFallStuckTime;
					fVar17 = Time.fixedDeltaTime;
					fVar17 = fVar17 + fVar18;
					this._currentFallStuckTime = fVar17;
					if (0.5 < fVar17) goto label_05c2a3a7;
				}
			}
			else {
	label_05c2a37e: ;
				this.SetDefaultVelocity();
				uVar20 = il2cpp_runtime_helper_05b8d690(0);
				this.LastTargetDirection.x = (float)(int)uVar20;
				this.LastTargetDirection.y = (float)(int)((ulong)uVar20 >> 0x20);
				this.LastTargetDirection.z = fVar17;
				iVar6 = this.State;
				if (iVar6 == 7) {
	label_05c2a3a7: ;
					this.Land();
				}
				else if ((this.HasDirection != false) && (iVar6 - 1U < 3)) {
					UVar25 = this.GetTargetDirection();
					this.LastTargetDirection.x = UVar25.x;
					this.LastTargetDirection.y = UVar25.y;
					this.LastTargetDirection.z = UVar25.z;
					iVar6 = this.State;
					if (iVar6 == 3) {
						if ((*ppUVar1 == null) ||(pUVar16 = ((*ppUVar1).fields).Rigidbody, pUVar16 == null)) goto label_05c2af0e;
						UVar25 = pUVar16.linearVelocity;
						fVar17 = UVar25.z;
						if (*ppUVar1 == null) goto label_05c2af0e;
						local_b8 = UVar25._0_8_;
						pUVar10 = ((*ppUVar1).fields).Transform;
						if (pUVar10 == null) goto label_05c2af0e;
						UVar25 = pUVar10.forward;
						fVar18 = UVar25.z;
						local_c8._0_4_ = UVar25.x;
						local_c8._4_4_ = UVar25.y;
						fVar19 = this.WalkSpeedPerLevel * this.Size + this.WalkSpeedBase ;
	label_05c2a910: ;
						fVar18 = fVar18 * fVar19;
						local_c8._0_4_ = (float)local_c8 * fVar19;
						local_c8._4_4_ = local_c8._4_4_ * fVar19;
					}
					else {
						if (iVar6 != 2) {
							if (iVar6 != 1) goto label_05c2aa86;
							if ((*ppUVar1 == null) ||(pUVar16 = ((*ppUVar1).fields).Rigidbody, pUVar16 == null)) goto label_05c2af0e;
							UVar25 = pUVar16.linearVelocity;
							fVar17 = UVar25.z;
							if (*ppUVar1 == null) goto label_05c2af0e;
							local_b8 = UVar25._0_8_;
							pUVar10 = ((*ppUVar1).fields).Transform;
							if (pUVar10 == null) goto label_05c2af0e;
							UVar25 = pUVar10.forward;
							fVar18 = UVar25.z;
							local_c8._0_4_ = UVar25.x;
							local_c8._4_4_ = UVar25.y;
							fVar19 = this.RunSpeedPerLevel * this.Size + this.RunSpeedBase ;
							goto label_05c2a910;
						}
						if ((*ppUVar1 == null) ||(pUVar16 = ((*ppUVar1).fields).Rigidbody, pUVar16 == null)) goto label_05c2af0e;
						UVar25 = pUVar16.linearVelocity;
						fVar17 = UVar25.z;
						if (*ppUVar1 == null) goto label_05c2af0e;
						local_b8 = UVar25._0_8_;
						pUVar10 = ((*ppUVar1).fields).Transform;
						if (pUVar10 == null) goto label_05c2af0e;
						UVar25 = pUVar10.forward;
						fVar19 = this.RunSpeedPerLevel * this.Size + this.RunSpeedBase;
						fVar18 = UVar25.z * fVar19 * 1.5;
						local_c8._0_4_ = UVar25.x * fVar19 * 1.5;
						local_c8._4_4_ = UVar25.y * fVar19 * 1.5;
					}
					local_c8._0_4_ = (float)local_c8 + (float)local_b8;
					local_c8._4_4_ = local_c8._4_4_ + local_b8._4_4_;
					fVar18 = fVar18 + fVar17;
	label_05c2a9a6: ;
					value.y = local_c8._4_4_;
					value.x = (float)local_c8;
					value.z = fVar18;
					pUVar16.linearVelocity = value;
				}
			}
		}
		else {
			this._currentFallStuckTime = 0.0;
			if (this.AI == false) {
				if (uVar14 < 0x1b) {
					if ((0x4108010U >> (uVar14 & 0x1f) & 1) == 0) {
						if (uVar14 == 6) goto label_05c2a539;
						if (uVar14 != 10) goto label_05c2a34f;
						goto label_05c2a503;
					}
					if (0.0 < this._launchTimeLeft) goto label_05c2a334;
	label_05c2a586: ;
					this.SetDefaultVelocityLerp();
				}
				else {
	label_05c2a34f: ;
					if (this.Grounded == false) {
						if (uVar14 == 0x19) {
	label_05c2a59c: ;
							if (*ppUVar1 == null) goto label_05c2af0e;
							pUVar16 = ((*ppUVar1).fields).Rigidbody;
							uVar20 = il2cpp_runtime_helper_05b8d690(0);
							if (pUVar16 == null) goto label_05c2af0e;
							UVar25.z = fVar17;
							UVar25.x = (float)(int)uVar20;
							UVar25.y = (float)(int)((ulong)uVar20 >> 0x20);
							pUVar16.linearVelocity = UVar25;
							UVar25 = this.GetTargetDirection();
							if (this.HasDirection == false) {
	label_05c2aa73: ;
								this.StopWallClimb();
								goto label_05c2aa86;
							}
							if ((*ppUVar1 == null) ||(pUVar10 = ((*ppUVar1).fields).Transform, pUVar10 == null)) goto label_05c2af0e;
							UVar26 = pUVar10.forward;
							local_c8._0_4_ = UVar25.x;
							fVar18 = (float)il2cpp_runtime_helper_059d7e70((float)local_c8, UVar25.z, UVar26._0_8_, 0);
							if (135.0 <= fVar18) goto label_05c2aa73;
							if ((*ppUVar1 == null) ||(pUVar10 = ((*ppUVar1).fields).Transform, pUVar10 == null)) goto label_05c2af0e;
							UVar25 = pUVar10.position;
							fVar18 = UVar25.z;
							uVar20 = il2cpp_runtime_helper_05bbcf10(0);
							pUVar8 = this.Cache;
							if ((pUVar8 == null) ||(__this_01 = (BaseTitan)pUVar8.Transform, __this_01 == null)) goto label_05c2af0e;
							fVar17 = this.Size;
							local_c8._0_4_ = UVar25.x;
							local_c8._4_4_ = UVar25.y;
							UVar26 = __this_01.forward;
							fVar19 = this.Size;
							local_70[0] = __this_01.MapObjectMask;
							layerMask = local_70.value;
							origin.z = UVar25.z + fVar18 * 3.0 * fVar17;
							origin.x = (float)local_c8 + fVar17 * (float)uVar20 * 3.0;
							origin.y = local_c8._4_4_ + fVar17 * (float)((ulong)uVar20 >> 0x20) * 3.0;
							bVar13 = Physics.Raycast(origin, UVar26, ref local_68, fVar19 * 5.0, layerMask);
							pUVar8 = *ppUVar1;
							if (!bVar13) {
								if ((pUVar8 == null) ||(pUVar10 = pUVar8.Transform, pUVar10 == null)) goto label_05c2af0e;
								UVar25 = pUVar10.position;
								fVar18 = UVar25.z;
								uVar20 = il2cpp_runtime_helper_05bbcf10(0);
								pUVar8 = this.Cache;
								if ((pUVar8 == null) ||(__this_00 = pUVar8.Transform, __this_00 == null)) goto label_05c2af0e;
								fVar17 = this.Size;
								UVar26 = __this_00.forward;
								fVar19 = this.Size;
								local_b8._0_4_ = UVar25.x;
								local_b8._4_4_ = UVar25.y;
								value_00.x =(UVar26.x + UVar26.x) * fVar19 + fVar17 * (float)uVar20 * 3.0 +(float)local_b8;
								value_00.y =(UVar26.y + UVar26.y) * fVar19 + fVar17 * (float)((ulong)uVar20 >> 0x20) * 3.0 + local_b8._4_4_;
								value_00.z =(UVar26.z + UVar26.z) * fVar19 + fVar18 * 3.0 * fVar17 + UVar25.z;
								pUVar10.position = value_00;
								goto label_05c2aa73;
							}
							if ((pUVar8 == null) ||(pUVar16 = pUVar8.Rigidbody, pUVar16 == null)) goto label_05c2af0e;
							UVar25 = pUVar16.linearVelocity;
							fVar18 = UVar25.z;
							uVar20 = il2cpp_runtime_helper_05bbcf10(0);
							fVar17 = this.RunSpeedPerLevel * this.Size * 0.5 +this.RunSpeedBase;
							local_b8._0_4_ = UVar25.x;
							local_b8._4_4_ = UVar25.y;
							UVar26.x = (float)uVar20 * fVar17 + (float)local_b8;
							UVar26.y = (float)((ulong)uVar20 >> 0x20) * fVar17 + local_b8._4_4_;
							UVar26.z = fVar18 * fVar17 + UVar25.z;
							pUVar16.linearVelocity = UVar26;
							fVar18 = local_68.distance;
							if (fVar18 <= this.Size * 3.5) goto label_05c2aa86;
							if ((*ppUVar1 == null) ||(pUVar16 = ((*ppUVar1).fields).Rigidbody, pUVar16 == null)) goto label_05c2af0e;
							UVar25 = pUVar16.linearVelocity;
							if ((*ppUVar1 == null) ||(pUVar10 = ((*ppUVar1).fields).Transform, pUVar10 == null)) goto label_05c2af0e;
							UVar26 = pUVar10.forward;
							fVar18 = local_68.distance;
							local_38 = ZEXT416((uint)this.Size);
							fVar17 = Time.fixedDeltaTime;
							fVar17 = ((float)local_38._0_4_ * -3.5 + fVar18) / fVar17;
							if (10.0 <= fVar17) {
								fVar17 = 10.0;
							}
							local_98 = UVar26.x;
							fStack_94 = UVar26.y;
							local_c8._0_4_ = UVar25.x;
							local_c8._4_4_ = UVar25.y;
							local_c8._0_4_ = (float)local_c8 + fVar17 * local_98;
							local_c8._4_4_ = local_c8._4_4_ + fVar17 * fStack_94;
							fVar18 = UVar25.z + UVar26.z * fVar17;
							goto label_05c2a9a6;
						}
					}
					else if (uVar14 != 5) {
						if (uVar14 == 0x19) goto label_05c2a59c;
						if (this._launchTimeLeft <= 0.0) goto label_05c2a37e;
					}
				}
			}
			else {
	label_05c2a334: ;
				if (uVar14 == 0xf) {
					if ((this.Grounded != false) && (this._launchTimeLeft <= 0.0)) {
	label_05c2a52c: ;
						this.SetDefaultVelocity();
					}
				}
				else if (uVar14 == 10) {
	label_05c2a503: ;
					this.FixedUpdateAttack();
					if (this.Grounded != false) {
						if (this.AI == false) goto label_05c2a586;
						goto label_05c2a52c;
					}
				}
				else {
					if (uVar14 != 6) goto label_05c2a34f;
	label_05c2a539: ;
					if ((*ppUVar1 == null) ||(pUVar16 = ((*ppUVar1).fields).Rigidbody, pUVar16 == null)) goto label_05c2af0e;
					UVar25 = pUVar16.linearVelocity;
					if (UVar25.y <= 1.0) {
						this.Fall();
					}
				}
			}
		}
	label_05c2aa86: ;
		if (this._needFreshCore != false) {
			pCVar9 = this.BaseTitanCache;
			if ((pCVar9 == null) ||(pUVar10 = pCVar9.Core, pUVar10 == null)) goto label_05c2af0e;
			UVar25 = pUVar10.position;
			pCVar9 = this.BaseTitanCache;
			if ((pCVar9 == null) ||(pUVar10 = pCVar9.Transform, pUVar10 == null)) goto label_05c2af0e;
			UVar26 = pUVar10.position;
			local_c8._0_4_ = UVar25.x;
			local_c8._4_4_ = UVar25.y;
			this._furthestCoreLocalPosition.x = (float)local_c8 - UVar26.x;
			this._furthestCoreLocalPosition.y = local_c8._4_4_ - UVar26.y;
			this._furthestCoreLocalPosition.z = UVar25.z - UVar26.z;
			fVar18 = this._furthestCoreLocalPosition.y;
			this._previousCoreLocalPosition.x =this._furthestCoreLocalPosition.x;
			this._previousCoreLocalPosition.y = fVar18;
			this._previousCoreLocalPosition.z =this._furthestCoreLocalPosition.z;
			this._needFreshCore = false;
		}
		pSVar11 = this._rootMotionAnimations;
		if (pSVar11 == null) goto label_05c2af0e;
		bVar13 = pSVar11.ContainsKey((object)this._currentStateAnimation);
		if (bVar13) {
			pCVar12 = this.Animation;
			if (pCVar12 == null) goto label_05c2af0e;
			bVar13 = pCVar12.IsPlaying(this._currentStateAnimation);
			if (bVar13) {
				pCVar12 = this.Animation;
				if (pCVar12 == null) goto label_05c2af0e;
				fVar18 = pCVar12.GetCurrentNormalizedTime();
				pSVar11 = this._rootMotionAnimations;
				if (pSVar11 == null) goto label_05c2af0e;
				fVar17 = pSVar11.get_Item((object)this._currentStateAnimation);
				if (fVar18 < fVar17) {
					pCVar9 = this.BaseTitanCache;
					if ((pCVar9 == null) ||(pUVar10 = pCVar9.Core, pUVar10 == null)) goto label_05c2af0e;
					UVar25 = pUVar10.position;
					pCVar9 = this.BaseTitanCache;
					if ((pCVar9 == null) ||(pUVar10 = pCVar9.Transform, pUVar10 == null)) goto label_05c2af0e;
					UVar26 = pUVar10.position;
					local_b8._0_4_ = UVar25.x;
					local_b8._4_4_ = UVar25.y;
					local_b8._0_4_ = (float)local_b8 - UVar26.x;
					local_b8._4_4_ = local_b8._4_4_ - UVar26.y;
					fVar18 = UVar25.z - UVar26.z;
					fVar17 = fVar18 * fVar18 + local_b8._4_4_ * local_b8._4_4_ + (float)local_b8 * (float)local_b8;
					if (fVar17 < 0.0) {
						fVar17 = sqrtf(fVar17);
					}
					else {
						fVar17 = SQRT(fVar17);
					}
					fVar19 = this._furthestCoreLocalPosition.x;
					uVar2 = this._furthestCoreLocalPosition.y;
					uVar4 = this._furthestCoreLocalPosition.z;
					fVar19 = (float)uVar4 * (float)uVar4 + fVar19 * fVar19 + (float)uVar2 * (float)uVar2;
					if (fVar19 < 0.0) {
						fVar19 = sqrtf(fVar19);
					}
					else {
						fVar19 = SQRT(fVar19);
					}
					if (fVar19 <= fVar17) {
						uVar3 = this._previousCoreLocalPosition.x;
						uVar5 = this._previousCoreLocalPosition.y;
						fVar17 = this._previousCoreLocalPosition.z;
						fVar19 = Time.fixedDeltaTime;
						auVar23._0_4_ = -((float)local_b8 - (float)uVar3);
						auVar23._4_4_ = -(local_b8._4_4_ - (float)uVar5);
						auVar23._8_4_ = -((extraout_XMM0_Dc - extraout_XMM0_Dc_00) - 0.0);
						auVar23._12_4_ = -((extraout_XMM0_Dd - extraout_XMM0_Dd_00) - 0.0);
						fVar22 = -(fVar18 - fVar17) / fVar19;
						auVar24._4_4_ = fVar19;
						auVar24._0_4_ = fVar19;
						auVar24._8_4_ = fVar19;
						auVar24._12_4_ = fVar19;
						auVar24 = divps(auVar23, auVar24);
						this._furthestCoreLocalPosition.x = (float)local_b8;
						this._furthestCoreLocalPosition.y = local_b8._4_4_;
						this._furthestCoreLocalPosition.z = fVar18;
						this._previousCoreLocalPosition.x = (float)local_b8;
						this._previousCoreLocalPosition.y = local_b8._4_4_;
						this._previousCoreLocalPosition.z = fVar18;
						fVar18 = auVar24._0_4_;
						fVar17 = auVar24._4_4_;
						if (this.AI == false) {
							fVar19 = fVar22;
							uVar20 = il2cpp_runtime_helper_05b8d690(0);
							fVar21 = (float)((ulong)uVar20 >> 0x20);
							if ((*ppUVar1 == null) ||(pUVar16 = ((*ppUVar1).fields).Rigidbody, pUVar16 == null)) goto label_05c2af0e;
							UVar25 = pUVar16.linearVelocity;
							if ((*ppUVar1 == null) ||(pUVar16 = ((*ppUVar1).fields).Rigidbody, pUVar16 == null)) goto label_05c2af0e;
							fVar18 = (fVar18 - (float)uVar20) * 0.0435 + (float)uVar20 + UVar25.x;
							fVar17 = (fVar17 - fVar21) * 0.0435 + fVar21 + UVar25.y;
							fVar22 = (fVar22 - fVar19) * 0.0435 + fVar19 + UVar25.z;
						}
						else if ((*ppUVar1 == null) ||(pUVar16 = ((*ppUVar1).fields).Rigidbody, pUVar16 == null)) goto label_05c2af0e;
						value_01.y = fVar17;
						value_01.x = fVar18;
						value_01.z = fVar22;
						pUVar16.linearVelocity = value_01;
					}
				}
			}
		}
		if (this.State == 0x19) {
	label_05c2aebc: ;
			fVar18 = this.ConfusedTime;
			if (fVar18 <= 0.0) {
				fVar18 = this.PreviousAttackSpeedMultiplier;
				if (0.0 <= fVar18) {
					this.AttackSpeedMultiplier = fVar18;
				}
			}
			else {
				fVar17 = Time.fixedDeltaTime;
				this.ConfusedTime = fVar18 - fVar17;
			}
			return;
		}
		if (*ppUVar1 != null) {
			pUVar16 = ((*ppUVar1).fields).Rigidbody;
			UVar25 = this.get_Gravity();
			if (pUVar16 != null) {
				pUVar16.AddForce(UVar25, 5);
				goto label_05c2aebc;
			}
		}
	label_05c2af0e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004463")]
	[Address(RVA = "0x5B2B000", Offset = "0x5B2A000", VA = "0x5B2B000", Slot = "186")]
	protected virtual void FixedUpdateAttack()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$FixedUpdateAttack): clean
		return;
	}

	[Token(Token = "0x6004464")]
	[Address(RVA = "0x5B2AF20", Offset = "0x5B29F20", VA = "0x5B2AF20")]
	protected void SetDefaultVelocity()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$SetDefaultVelocity): clean
		uint uVar1;
		uint uVar2;
		BaseComponentCache pUVar3;
		Rigidbody pUVar4;
		float fVar6;
		Vector3 UVar7;

		pUVar3 = this.Cache;
		if ((pUVar3 != null) &&(pUVar4 = pUVar3.Rigidbody, pUVar4 != null)) {
			fVar6 = this._currentGroundDistance;
			UVar7 = pUVar4.linearVelocity;
			pUVar3 = this.Cache;
			if (pUVar3 != null) {
				pUVar4 = pUVar3.Rigidbody;
				if (pUVar4 != null) {
					fVar6 = fVar6 * 100.0;
					if (100.0 <= fVar6) {
						fVar6 = 100.0;
					}
					fVar6 = UVar7.y - fVar6;
					if (fVar6 <= -100.0) {
						fVar6 = -100.0;
					}
					UVar7.z = (Vector3.upVector).z * fVar6;
					uVar1 = (Vector3.upVector).x;
					uVar2 = (Vector3.upVector).y;
					UVar7.x = fVar6 * (float)uVar1;
					UVar7.y = fVar6 * (float)uVar2;
					pUVar4.linearVelocity = UVar7;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004465")]
	[Address(RVA = "0x5B2B010", Offset = "0x5B2A010", VA = "0x5B2B010", Slot = "114")]
	protected override void LateUpdate()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$LateUpdate): clean
		uint uVar1;
		BaseComponentCache pUVar2;
		Transform __this_00;
		bool bVar3;
		float fVar4;
		Quaternion UVar5;
		Quaternion UVar6;
		float local_68;
		float fStack_64;
		float local_48;
		float fStack_44;
		Quaternion local_30;
		Quaternion local_20;

		this.LateUpdate();
		bVar3 = this.IsMine();
		if ((((bVar3) && (uVar1 = this.State, uVar1 < 8)) && ((0xceU >> (uVar1 & 0x1f) & 1) != 0)) &&(this.HasDirection != false)) {
			pUVar2 = this.Cache;
			if ((pUVar2 == null) ||(__this_00 = pUVar2.Transform, __this_00 == null)) {
				throw new NullReferenceException();
			}
			UVar5 = __this_00.rotation;
			UVar6 = this.GetTargetRotation();
			fVar4 = Time.deltaTime;
			local_48 = UVar5.x;
			fStack_44 = UVar5.y;
			local_20.z = UVar5.z;
			local_20.w = UVar5.w;
			local_20.x = local_48;
			local_20.y = fStack_44;
			local_68 = UVar6.x;
			fStack_64 = UVar6.y;
			local_30.z = UVar6.z;
			local_30.w = UVar6.w;
			local_30.x = local_68;
			local_30.y = fStack_64;
			UVar5 = Quaternion.Internal_Lerp(ref local_20, ref local_30, fVar4 * this.RotateSpeed);
			__this_00.rotation = UVar5;
		}
		return;
	}

	[Token(Token = "0x6004466")]
	[Address(RVA = "0x5B2B110", Offset = "0x5B2A110", VA = "0x5B2B110")]
	protected bool IsPlayingClip(string clip)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$IsPlayingClip): clean
		AnimationHandler __this_00;
		bool bVar1;

		bVar1 = (clip != "");
		if (bVar1) {
			__this_00 = this.Animation;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar1 = __this_00.IsPlaying(clip);
			return bVar1;
		}
		return false;
	}

	[Token(Token = "0x6004467")]
	[Address(RVA = "0x5B2B180", Offset = "0x5B2A180", VA = "0x5B2B180", Slot = "107")]
	protected override void CheckGround()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$CheckGround): 39 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		byte bVar3;
		BaseTitanComponentCache pCVar4;
		Component __this_00;
		CapsuleCollider __this_01;
		BaseComponentCache pUVar5;
		bool bVar6;
		int layerMask;
		Transform pUVar7;
		UnityEngine_Vector3_StaticFields pUVar8;
		float fVar9;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		float fVar10;
		Vector3 UVar11;
		Vector3 direction;
		LayerMask local_80;
		float local_7c;
		byte[] local_78 = new byte[16];
		byte[] local_68 = new byte[8];
		float fStack_60;
		float fStack_5c;
		ulong local_58;
		ulong uStack_50;
		RaycastHit local_48;

		local_48.m_UV.x = 0.0;
		local_48.m_UV.y = 0.0;
		local_48.m_Collider.m_Data = (EntityId)0x0;
		local_48.m_Normal.y = 0.0;
		local_48.m_Normal.z = 0.0;
		local_48.m_FaceID = 0;
		local_48.m_Distance = 0.0;
		local_48.m_Point.x = 0.0;
		local_48.m_Point.y = 0.0;
		local_48.m_Point.z = 0.0;
		local_48.m_Normal.x = 0.0;
		pCVar4 = this.BaseTitanCache;
		if ((pCVar4 != null) &&(__this_00 = (Component)pCVar4.Movebox, __this_00 != null)) {
			pUVar7 = __this_00.transform;
			if (pUVar7 != null) {
				UVar11 = pUVar7.lossyScale;
				pCVar4 = this.BaseTitanCache;
				if ((pCVar4 != null) &&(__this_01 = (CapsuleCollider)pCVar4.Movebox, __this_01 != null)) {
					local_78._8_4_ = extraout_XMM0_Dc;
					local_78._0_8_ = UVar11._0_8_;
					local_78._12_4_ = extraout_XMM0_Dd;
					bVar3 = (typeof(CapsuleCollider)._2).typeHierarchyDepth;
					if (((__this_01.klass._2).typeHierarchyDepth < bVar3) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(CapsuleCollider))) {
						throw new InvalidCastException();
					}
					fVar9 = __this_01.radius;
					this.JustGrounded = false;
					pUVar5 = this.Cache;
					if ((pUVar5 != null) &&(pUVar7 = pUVar5.Transform, pUVar7 != null)) {
						local_78._0_4_ = (float)local_78._0_4_ * fVar9;
						UVar11 = pUVar7.position;
						local_68._0_4_ = UVar11.x;
						local_68._4_4_ = UVar11.y;
						fStack_60 = extraout_XMM0_Dc_00;
						fStack_5c = extraout_XMM0_Dd_00;
						if (Il2CppMethodInitialized_0753e72c == false) {
							local_68 = (byte[])UVar11._0_8_;
							Il2CppMethodInitialized_0753e72c = true;
						}
						pUVar8 = typeof(Vector3).static_fields;
						uVar1 = (pUVar8.upVector).x;
						uVar2 = (pUVar8.upVector).y;
						fVar10 = (float)local_78._0_4_ + 1.0;
						fVar9 = (pUVar8.upVector).z;
						local_58._0_4_ = fVar10 * (float)uVar1;
						local_58._4_4_ = fVar10 * (float)uVar2;
						uStack_50._0_4_ = fVar10 * 0.0;
						uStack_50._4_4_ = fVar10 * 0.0;
						if (Il2CppMethodInitialized_075450a5 == false) {
							Il2CppMethodInitialized_075450a5 = true;
							pUVar8 = typeof(Vector3).static_fields;
						}
						local_68._4_4_ = (float)local_68._4_4_ + local_58._4_4_;
						local_68._0_4_ = (float)local_68._0_4_ + (float)local_58;
						fStack_60 = fStack_60 + (float)uStack_50;
						fStack_5c = fStack_5c + uStack_50._4_4_;
						UVar11.z = UVar11.z + fVar9 * fVar10;
						local_58._0_4_ = (pUVar8.downVector).x;
						local_58._4_4_ = (pUVar8.downVector).y;
						uStack_50 = 0;
						fVar9 = (pUVar8.downVector).z;
						local_7c = this.get_GroundDistance();
						local_80 = this.get_GroundMask();
						layerMask = local_80.value;
						UVar11.x = (float)local_68._0_4_;
						UVar11.y = (float)local_68._4_4_;
						direction.z = fVar9;
						direction.x = (float)local_58;
						direction.y = local_58._4_4_;
						bVar6 = Physics.SphereCast(UVar11, (float)local_78._0_4_, direction, ref local_48, local_7c + 1.0, layerMask);
						if (bVar6) {
							if (this.Grounded == false) {
								this.Grounded = true;
								this.JustGrounded = true;
							}
							local_78._0_4_ = local_48.distance;
							local_78._4_4_ = extraout_XMM0_Db;
							local_78._8_4_ = extraout_XMM0_Dc_01;
							local_78._12_4_ = extraout_XMM0_Dd_01;
							fVar9 = this.get_GroundDistance();
							local_78._0_4_ = (float)local_78._0_4_ + -1.0;
							if ((float)local_78._0_4_ <= fVar9) {
								fVar9 = (float)local_78._0_4_;
							}
							fVar9 = (float)(-(uint)(0.0 <= (float)local_78._0_4_) & (uint)fVar9);
						}
						else {
							this.Grounded = false;
							fVar9 = this.get_GroundDistance();
						}
						this._currentGroundDistance = fVar9;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004468")]
	[Address(RVA = "0x5B2B480", Offset = "0x5B2A480", VA = "0x5B2B480", Slot = "187")]
	protected virtual void UpdateAttack()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$UpdateAttack): clean
		return;
	}

	[Token(Token = "0x6004469")]
	[Address(RVA = "0x5B2B490", Offset = "0x5B2A490", VA = "0x5B2B490", Slot = "188")]
	protected virtual void UpdateEat()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$UpdateEat): clean
		return;
	}

	[Token(Token = "0x600446A")]
	[Address(RVA = "0x5B2B4A0", Offset = "0x5B2A4A0", VA = "0x5B2B4A0", Slot = "189")]
	protected virtual void DeactivateAllHitboxes()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$DeactivateAllHitboxes): 3 lines keep C-only constructs
		BaseTitanComponentCache pCVar1;
		List<BaseHitbox> __this_00;
		bool bVar2;
		System_Collections_Generic_List_Enumerator_T__o SStack_38;
		byte puStack_18;

		SStack_38._list = null;
		SStack_38._index = 0;
		SStack_38._version = 0;
		SStack_38._current = null;
		pCVar1 = this.BaseTitanCache;
		if ((pCVar1 == null) ||(__this_00 = pCVar1.Hitboxes, __this_00 == null )) {
			throw new NullReferenceException();
		}
		SStack_38 = __this_00.GetEnumerator();
		puStack_18 = (byte)&SStack_38;
		while(true) {
			bVar2 = SStack_38.MoveNext();
			if (!bVar2) {
				SStack_38.Dispose();
				return;
			}
			if (SStack_38._current == null) break;
			(*(SStack_38._current).klass.vtable[6].methodPtr)(SStack_38._current,(SStack_38._current).klass.vtable[6].method);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600446B")]
	[Address(RVA = "0x5B2B5F0", Offset = "0x5B2A5F0", VA = "0x5B2B5F0")]
	[PunRPC]
	public void SetSizeRPC(float size, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$SetSizeRPC): 1 lines keep C-only constructs
		byte bVar1;
		BaseComponentCache pUVar2;
		PhotonView pPVar3;
		InGameCamera __this_00;
		BaseCharacter x;
		bool bVar4;
		Transform __this_01;
		float fVar5;
		Vector3 value;

		pUVar2 = this.Cache;
		if ((pUVar2 != null) &&(pPVar3 = pUVar2.PhotonView, pPVar3 != null)) {
			if (info.Sender != pPVar3._Owner_k__BackingField) {
				return;
			}
			__this_01 = this.transform;
			if (__this_01 != null) {
				fVar5 = 50.0;
				if (size <= 50.0) {
					fVar5 = size;
				}
				fVar5 = (float)(~-(uint)(0.1 <= size) & 0x3dcccccd | (uint)fVar5 & -(uint)(0.1 <= size));
				value.y = fVar5;
				value.x = fVar5;
				value.z = fVar5;
				__this_01.localScale = value;
				this.Size = fVar5;
				this.SetSizeParticles(fVar5);
				this.SetSizeAnimations(fVar5);
				this.SetSizeHead(fVar5);
				this.ScaleSounds(fVar5);
				__this_00 = (InGameCamera)SceneLoader.CurrentCamera;
				if (__this_00 != null) {
					bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
					if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameCamera))) {
						throw new InvalidCastException();
					}
					x = __this_00._follow;
					bVar4 = ((Object)x == (Object)this);
					if (bVar4) {
						__this_00.SetFollow((BaseCharacter)this, true);
						return;
					}
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600446C")]
	[Address(RVA = "0x5B2B7C0", Offset = "0x5B2A7C0", VA = "0x5B2B7C0", Slot = "190")]
	protected virtual void ScaleSounds(float size)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$ScaleSounds): 1 lines keep C-only constructs
		byte bVar1;
		BaseComponentCache pUVar2;
		Dictionary<object, object> pSVar3;
		AudioSource pUVar4;
		float fVar5;
		float fVar6;
		float local_48;

		local_48 = size;
		if (this != null) {
			bVar1 = (typeof(BaseShifter)._2).typeHierarchyDepth;
			if ((bVar1 <= (this.klass._2).typeHierarchyDepth) &&((this.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BaseShifter)) ) {
				local_48 = size * 3.5;
			}
		}
		pUVar2 = this.Cache;
		if (pUVar2 != null) {
			pSVar3 = (Dictionary<object, object>)pUVar2.AudioSources;
			if (pSVar3 != null) {
				pUVar4 = pSVar3.get_Item((object)TitanSounds.DeathFall);
				if (pUVar4 != null) {
					fVar5 = local_48 * 0.3;
					fVar6 = 1.0;
					if (fVar5 <= 1.0) {
						fVar6 = fVar5;
					}
					fVar6 = (float)(~-(uint)(0.1 <= fVar5) & 0x3dcccccd | (uint)fVar6 & -(uint)(0.1 <= fVar5));
					pUVar4.volume = fVar6;
					pUVar2 = this.Cache;
					if ((pUVar2 != null) &&(pSVar3 = (Dictionary<object, object>)pUVar2.AudioSources, pSVar3 != null)) {
						pUVar4 = pSVar3.get_Item((object)TitanSounds.DeathNoFall);
						if (pUVar4 != null) {
							pUVar4.volume = fVar6;
							pUVar2 = this.Cache;
							if ((pUVar2 != null) &&(pSVar3 = (Dictionary<object, object>)pUVar2.AudioSources, pSVar3 != null)) {
								pUVar4 = pSVar3.get_Item((object)TitanSounds.Decapitate);
								if (pUVar4 != null) {
									pUVar4.volume = fVar6;
									pUVar2 = this.Cache;
									if ((pUVar2 != null) &&(pSVar3 = (Dictionary<object, object>)pUVar2.AudioSources, pSVar3 != null)) {
										pUVar4 = pSVar3.get_Item((object)TitanSounds.Steam);
										if (pUVar4 != null) {
											pUVar4.volume = fVar6 * 0.5;
											pUVar2 = this.Cache;
											if ((pUVar2 != null) &&(pSVar3 = (Dictionary<object, object>)pUVar2.AudioSources, pSVar3 != null)) {
												pUVar4 = pSVar3.get_Item((object)TitanSounds.Footstep1);
												if (pUVar4 != null) {
													local_48 = local_48 * 0.125;
													fVar5 = 0.5;
													if (local_48 <= 0.5) {
														fVar5 = local_48;
													}
													fVar5 = (float)(~-(uint)(0.1 <= local_48) & 0x3dcccccd |(uint)fVar5 & -(uint)(0.1 <= local_48));
													pUVar4.volume = fVar5;
													pUVar2 = this.Cache;
													if ((pUVar2 != null) &&(pSVar3 = (Dictionary<object, object>)pUVar2.AudioSources, pSVar3 != null)) {
														pUVar4 = pSVar3.get_Item((object)TitanSounds.Footstep2);
														if (pUVar4 != null) {
															pUVar4.volume = fVar5;
															pUVar2 = this.Cache;
															if ((pUVar2 != null) &&(pSVar3 = (Dictionary<object, object>)pUVar2.AudioSources, pSVar3 != null)) {
																pUVar4 = pSVar3.get_Item((object)TitanSounds. Footstep3);
																if (pUVar4 != null) {
																	pUVar4.volume = fVar5;
																	pUVar2 = this.Cache;
																	if ((pUVar2 != null) &&(pSVar3 = (Dictionary<object, object>)pUVar2.AudioSources, pSVar3 != null)) {
																		pUVar4 = pSVar3.get_Item((object)TitanSounds. RockPickup);
																		if (pUVar4 != null) {
																			pUVar4.volume = fVar6;
																			pUVar2 = this.Cache;
																			if ((pUVar2 != null) &&(pSVar3 = (Dictionary<object, object>)pUVar2.AudioSources, pSVar3 != (Dictionary<object, object>)0x0)) {
																				pUVar4 = pSVar3.get_Item((object)typeof(TitanSounds). static_fields.RockThrow1);
																				if (pUVar4 != null) {
																					pUVar4.volume = fVar6;
																					pUVar2 = this.Cache;
																					if ((pUVar2 != null) &&(pSVar3 = (Dictionary<object, object>)pUVar2.AudioSources, pSVar3 != null)) {
																						pUVar4 = pSVar3.get_Item((object)typeof(TitanSounds). static_fields.RockThrow2);
																						if (pUVar4 != null) {
																							pUVar4.volume = fVar6;
																							return;
																						}
																					}
																				}
																			}
																		}
																	}
																}
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600446D")]
	[Address(RVA = "0x5B2BBE0", Offset = "0x5B2ABE0", VA = "0x5B2BBE0", Slot = "191")]
	protected virtual void SetSizeParticles(float size)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$SetSizeParticles): clean
		uint uVar1;
		Object[] pSVar2;
		ParticleSystem.MainModule main;
		uint uVar3;

		pSVar2 = this.GetComponentsInChildren<ParticleSystem>();
		if (pSVar2 == null) {
	label_05c2bcba: ;
			throw new NullReferenceException();
		}
		uVar1 = (uint)pSVar2.Length;
		if (0 < (int)uVar1) {
			uVar3 = 0;
			do {
				if (uVar1 <= uVar3) {
					throw new IndexOutOfRangeException();
				}
				if ((ParticleSystem)pSVar2[(int)uVar3] == null) goto label_05c2bcba;
				main = (pSVar2[(int)uVar3]).main;
				Util.ScaleParticleStartSize(main, size);
				Util.ScaleParticleStartSpeed(main, size);
				uVar3 = uVar3 + 1;
				uVar1 = (uint)pSVar2.Length;
			} while ((int)uVar3 < (int)uVar1);
		}
		return;
	}

	[Token(Token = "0x600446E")]
	[Address(RVA = "0x5B2BCC0", Offset = "0x5B2ACC0", VA = "0x5B2BCC0", Slot = "192")]
	protected virtual void SetSizeAnimations(float size)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$SetSizeAnimations): clean
		return;
	}

	[Token(Token = "0x600446F")]
	[Address(RVA = "0x5B2BCD0", Offset = "0x5B2ACD0", VA = "0x5B2BCD0", Slot = "193")]
	protected virtual void SetSizeHead(float size)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$SetSizeHead): clean
		return;
	}

	[Token(Token = "0x6004470")]
	[Address(RVA = "0x5B2BCE0", Offset = "0x5B2ACE0", VA = "0x5B2BCE0")]
	public void SetSize(float size)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$SetSize): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		Object[] parameters;
		object pIVar2;
		object pIVar3;
		float local_1c;

		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			__this_00 = pUVar1.PhotonView;
			parameters = (Object[])new object[1];
			local_1c = size;
			pIVar2 = (object)local_1c;
			if (parameters != null) {
				if (pIVar2 != null) {
					pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((parameters.obj).klass)._1).element_class);
					if (pIVar3 == null) {
						pIVar2 = new ArrayTypeMismatchException();
						throw pIVar2;
					}
				}
				if ((int)parameters.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				parameters[0] = pIVar2;
				if (__this_00 != null) {
					__this_00.RPC("SetSizeRPC", 0, parameters);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004471")]
	[Address(RVA = "0x5B2BDF0", Offset = "0x5B2ADF0", VA = "0x5B2BDF0", Slot = "194")]
	protected virtual float GetAnimationTime()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$GetAnimationTime): clean
		AnimationHandler __this_00;
		float fVar1;

		__this_00 = this.Animation;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return fVar1;
	}

	[Token(Token = "0x6004472")]
	[Address(RVA = "0x5B2BE10", Offset = "0x5B2AE10", VA = "0x5B2BE10", Slot = "195")]
	protected virtual float GetHitboxTime(float normalizedLength)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$GetHitboxTime): clean
		AnimationHandler __this_00;
		float fVar1;

		__this_00 = this.Animation;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		fVar1 = __this_00.GetLength(this._currentStateAnimation);
		return (fVar1 * normalizedLength) / this._currentAttackSpeed;
	}

	[Token(Token = "0x6004473")]
	[Address(RVA = "0x5B2BE60", Offset = "0x5B2AE60", VA = "0x5B2BE60", Slot = "196")]
	protected virtual void DamagedGrunt(float chance = 1f)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$DamagedGrunt): clean
		SoundSettings pSVar1;
		BoolSetting pSVar2;
		bool bVar3;
		String sound;

		pSVar1 = SettingsManager.SoundSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.TitanVocalEffect, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		if (pSVar2._value != false) {
			bVar3 = RandomGen.Roll(chance);
			if (bVar3) {
				sound = TitanSounds.GetRandomHurt();
				this.PlaySound(sound);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004474")]
	[Address(RVA = "0x5B2BF20", Offset = "0x5B2AF20", VA = "0x5B2BF20", Slot = "197")]
	protected virtual void GrabGrunt(float chance = 1f)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$GrabGrunt): clean
		SoundSettings pSVar1;
		BoolSetting pSVar2;
		bool bVar3;
		String sound;

		pSVar1 = SettingsManager.SoundSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.TitanVocalEffect, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		if (pSVar2._value != false) {
			bVar3 = RandomGen.Roll(chance);
			if (bVar3) {
				sound = TitanSounds.GetRandomGrabGrunt();
				this.PlaySound(sound);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004475")]
	[Address(RVA = "0x5B2BFE0", Offset = "0x5B2AFE0", VA = "0x5B2BFE0", Slot = "104")]
	protected override void Start()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$Start): 2 lines keep C-only constructs
		byte bVar1;
		BaseComponentCache pUVar2;
		Transform __this_00;
		bool bVar3;
		BaseTitan.d__228<HandleSpawnCollisionCoroutine> __this_01;
		BaseTitan pCVar4;
		Vector3 UVar5;

		this.Start();
		bVar3 = this.IsMine();
		if (!bVar3) goto label_05c2c0dc;
		bVar3 = this.IsMainCharacter();
		if (bVar3) {
			pCVar4 = this.klass;
			bVar1 = (typeof(BaseShifter)._2).typeHierarchyDepth;
			if (((pCVar4._2).typeHierarchyDepth < bVar1) ||((pCVar4._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BaseShifter))) goto label_05c2c060;
		}
		else {
	label_05c2c060: ;
			__this_01 = new BaseTitan.d__228<HandleSpawnCollisionCoroutine>();
			__this_01.__1__state = 0;
			__this_01.__4__this = this;
			__this_01.maxSpeed = 20.0;
			__this_01.time = 2.0;
			this.StartCoroutine((IEnumerator)__this_01);
			pCVar4 = this.klass;
		}
		this.Idle();
	label_05c2c0dc: ;
		pUVar2 = this.Cache;
		if ((pUVar2 == null) ||(__this_00 = pUVar2.Transform, __this_00 == null)) {
			throw new NullReferenceException();
		}
		UVar5 = (Vector3)__this_00.position;
		this._startPosition = UVar5;
		return;
	}

	[Token(Token = "0x6004476")]
	[Address(RVA = "0x5B2C120", Offset = "0x5B2B120", VA = "0x5B2C120")]
	[IteratorStateMachine(typeof(_003CHandleSpawnCollisionCoroutine_003Ed__228))]
	protected IEnumerator HandleSpawnCollisionCoroutine(float time, float maxSpeed)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$HandleSpawnCollisionCoroutine): clean
		BaseTitan.d__228<HandleSpawnCollisionCoroutine> __this_00;

		__this_00 = new BaseTitan.d__228<HandleSpawnCollisionCoroutine>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.time = time;
		__this_00.maxSpeed = maxSpeed;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004477")]
	[Address(RVA = "0x5B2C1D0", Offset = "0x5B2B1D0", VA = "0x5B2C1D0", Slot = "198")]
	protected virtual void ToggleSitPushbox(bool sit)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$ToggleSitPushbox): clean
		BaseTitanComponentCache pCVar1;
		Object x;
		bool bVar2;
		Collider pUVar3;

		pCVar1 = this.BaseTitanCache;
		if (pCVar1 != null) {
			x = (Object)pCVar1.SitPushbox;
			bVar2 = (x == null);
			if (bVar2) {
				return;
			}
			pCVar1 = this.BaseTitanCache;
			if (sit) {
				if ((pCVar1 != null) &&(pUVar3 = pCVar1.SitPushbox, pUVar3 != null)) {
					bVar2 = pUVar3.enabled;
					if (bVar2) {
						return;
					}
					pCVar1 = this.BaseTitanCache;
					if ((pCVar1 != null) &&(pUVar3 = pCVar1.SitPushbox, pUVar3 != null)) {
						bVar2 = true;
	label_05c2c2a8: ;
						pUVar3.enabled = bVar2;
						return;
					}
				}
			}
			else if ((pCVar1 != null) &&(pUVar3 = pCVar1.SitPushbox, pUVar3 != null)) {
				bVar2 = pUVar3.enabled;
				if (!bVar2) {
					return;
				}
				pCVar1 = this.BaseTitanCache;
				if ((pCVar1 != null) &&(pUVar3 = pCVar1.SitPushbox, pUVar3 != null)) {
					bVar2 = false;
					goto label_05c2c2a8;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004478")]
	[Address(RVA = "0x5B2C2C0", Offset = "0x5B2B2C0", VA = "0x5B2C2C0", Slot = "199")]
	protected virtual void UpdateAnimationColliders()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$UpdateAnimationColliders): clean
		TitanDeathDissolve pCVar1;
		bool bVar2;

		pCVar1 = this.DeathDissolve;
		if ((pCVar1 == null) ||(pCVar1._CollidersDisabled_k__BackingField == false)) {
			bVar2 = this.IsPlayingSitAnimation();
			this.ToggleSitPushbox(bVar2);
			return;
		}
		return;
	}

	[Token(Token = "0x6004479")]
	[Address(RVA = "0x5B2C310", Offset = "0x5B2B310", VA = "0x5B2C310", Slot = "112")]
	protected override void OnDestroy()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$OnDestroy): clean
		TitanDeathDissolve __this_00;

		__this_00 = this.DeathDissolve;
		if (__this_00 != null) {
			__this_00.Dispose();
		}
		this.OnDestroy();
		return;
	}

	[Token(Token = "0x600447A")]
	[Address(RVA = "0x5B2C340", Offset = "0x5B2B340", VA = "0x5B2C340", Slot = "200")]
	protected virtual bool IsPlayingSitAnimation()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$IsPlayingSitAnimation): clean
		BaseTitanAnimations pCVar1;
		AnimationHandler pCVar2;
		bool bVar3;
		String pSVar4;

		pCVar1 = this.BaseTitanAnimations;
		if (pCVar1 != null) {
			pSVar4 = pCVar1.get_SitDown();
			bVar3 = (pSVar4 != "");
			if (bVar3) {
				pCVar2 = this.Animation;
				if (pCVar2 == null) goto label_05c2c5a0;
				bVar3 = pCVar2.IsPlaying(pSVar4);
				if (bVar3) {
					return true;
				}
			}
			pCVar1 = this.BaseTitanAnimations;
			if (pCVar1 != null) {
				pSVar4 = pCVar1.get_SitFall();
				bVar3 = (pSVar4 != "");
				if (bVar3) {
					pCVar2 = this.Animation;
					if (pCVar2 == null) goto label_05c2c5a0;
					bVar3 = pCVar2.IsPlaying(pSVar4);
					if (bVar3) {
						return true;
					}
				}
				pCVar1 = this.BaseTitanAnimations;
				if (pCVar1 != null) {
					pSVar4 = pCVar1.get_SitIdle();
					bVar3 = (pSVar4 != "");
					if (bVar3) {
						pCVar2 = this.Animation;
						if (pCVar2 == null) goto label_05c2c5a0;
						bVar3 = pCVar2.IsPlaying(pSVar4);
						if (bVar3) {
							return true;
						}
					}
					pCVar1 = this.BaseTitanAnimations;
					if (pCVar1 != null) {
						pSVar4 = pCVar1.get_SitUp();
						bVar3 = (pSVar4 != "");
						if (bVar3) {
							pCVar2 = this.Animation;
							if (pCVar2 == null) goto label_05c2c5a0;
							bVar3 = pCVar2.IsPlaying(pSVar4);
							if (bVar3) {
								return true;
							}
						}
						pCVar1 = this.BaseTitanAnimations;
						if (pCVar1 != null) {
							pSVar4 = pCVar1.get_DieSit();
							bVar3 = (pSVar4 != "");
							if (!bVar3) {
								return false;
							}
							pCVar2 = this.Animation;
							if (pCVar2 != null) {
								bVar3 = pCVar2.IsPlaying(pSVar4);
								return bVar3;
							}
						}
					}
				}
			}
		}
	label_05c2c5a0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600447B")]
	[Address(RVA = "0x5B2C5B0", Offset = "0x5B2B5B0", VA = "0x5B2C5B0", Slot = "118")]
	protected override string GetFootstepAudio(int phase)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$GetFootstepAudio): clean
		uint uVar1;
		String pSVar2;

		if (Il2CppMethodInitialized_07547797 == false) {
			Il2CppMethodInitialized_07547797 = true;
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(TitanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			return pSVar2;
		}
		return pSVar2;
	}

	[Token(Token = "0x600447C")]
	[Address(RVA = "0x5B2C610", Offset = "0x5B2B610", VA = "0x5B2C610", Slot = "117")]
	protected override int GetFootstepPhase()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$GetFootstepPhase): clean
		BaseTitanAnimations pCVar1;
		bool bVar2;
		String pSVar3;
		AnimationHandler pCVar4;
		float fVar5;

		pCVar1 = this.BaseTitanAnimations;
		if (pCVar1 == null) goto label_05c2c7b1;
		pSVar3 = pCVar1.get_Run();
		bVar2 = (pSVar3 != "");
		if (bVar2) {
			pCVar1 = this.BaseTitanAnimations;
			if (pCVar1 == null) goto label_05c2c7b1;
			pCVar4 = this.Animation;
			pSVar3 = pCVar1.get_Run() ;
			if (pCVar4 == null) goto label_05c2c7b1;
			bVar2 = pCVar4.IsPlaying(pSVar3);
			if (bVar2) {
				pCVar4 = this.Animation;
				if (pCVar4 != null) {
					fVar5 = pCVar4.GetCurrentNormalizedTime();
					fVar5 = fmodf(fVar5, 1.0, (MethodInfo)pCVar4);
					if (fVar5 < 0.0) {
						return 1;
					}
					return (uint)(0.5 <= fVar5);
				}
				goto label_05c2c7b1;
			}
		}
		pCVar1 = this.BaseTitanAnimations;
		if (pCVar1 != null) {
			pSVar3 = pCVar1.get_Walk();
			bVar2 = (pSVar3 != "");
			if (!bVar2) {
	label_05c2c7a2: ;
				return this._stepPhase;
			}
			pCVar1 = this.BaseTitanAnimations;
			if (pCVar1 != null) {
				pCVar4 = this.Animation;
				pSVar3 = pCVar1.get_Walk();
				if (pCVar4 != null) {
					bVar2 = pCVar4.IsPlaying(pSVar3);
					if (!bVar2) goto label_05c2c7a2;
					pCVar4 = this.Animation;
					if (pCVar4 != null) {
						fVar5 = pCVar4.GetCurrentNormalizedTime();
						fVar5 = fmodf(fVar5, 1.0, (MethodInfo)pCVar4);
						if (fVar5 < 0.1) {
							return 0;
						}
						return (uint)(fVar5 < 0.6);
					}
				}
			}
		}
	label_05c2c7b1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600447D")]
	[Address(RVA = "0x5B2C7C0", Offset = "0x5B2B7C0", VA = "0x5B2C7C0", Slot = "201")]
	protected virtual void SpawnShatter(Vector3 position)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$SpawnShatter): 9 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		String name;
		bool bVar10;
		int layerMask;
		UnityEngine_Vector3_StaticFields pUVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		Quaternion rotation;
		Vector3 UVar15;
		Vector3 position_00;
		Vector3 direction;
		float fStack_88;
		float fStack_84;
		LayerMask[] aUStack_78 = new LayerMask[2];
		float fStack_70;
		float fStack_6c;
		ulong uStack_68;
		ulong uStack_60;
		RaycastHit UStack_58;

		UStack_58.m_UV.x = 0.0;
		UStack_58.m_UV.y = 0.0;
		UStack_58.m_Collider.m_Data = (EntityId)0x0;
		UStack_58.m_Normal.y = 0.0;
		UStack_58.m_Normal.z = 0.0;
		UStack_58.m_FaceID = 0;
		UStack_58.m_Distance = 0.0;
		UStack_58.m_Point.x = 0.0;
		UStack_58.m_Point.y = 0.0;
		UStack_58.m_Point.z = 0.0;
		UStack_58.m_Normal.x = 0.0;
		pUVar11 = typeof(Vector3).static_fields;
		uVar1 = (pUVar11.upVector).x;
		uVar5 = (pUVar11.upVector).y;
		UVar15.z = position.z + (pUVar11.upVector).z;
		if (Il2CppMethodInitialized_075450a5 == false) {
			Il2CppMethodInitialized_075450a5 = true;
			pUVar11 = typeof(Vector3).static_fields;
		}
		fStack_88 = position.x;
		fStack_84 = position.y;
		uVar2 = (pUVar11.downVector).x;
		uVar6 = (pUVar11.downVector).y;
		direction.y = (float)uVar6;
		direction.x = (float)uVar2;
		uStack_68 = CONCAT44(uStack_68._4_4_, (pUVar11.downVector).z);
		aUStack_78[0] =this.get_GroundMask();
		layerMask = aUStack_78.value;
		UVar15.x = (float)uVar1 + fStack_88;
		UVar15.y = (float)uVar5 + fStack_84;
		direction.z = (float)uStack_68;
		bVar10 = Physics.Raycast(UVar15, direction, ref UStack_58, 2.0, layerMask);
		if (bVar10) {
			name = EffectPrefabs.GroundShatter;
			UVar15 = UStack_58.point;
			pUVar11 = typeof(Vector3).static_fields;
			uVar3 = (pUVar11.upVector).x;
			uVar7 = (pUVar11.upVector).y;
			fVar13 = (pUVar11.upVector).z;
			uStack_68._0_4_ = (float)uVar3 * 0.1;
			uStack_68._4_4_ = (float)uVar7 * 0.1;
			if (Il2CppMethodInitialized_0753e72b == false) {
				uStack_60._0_4_ = 0;
				uStack_60._4_4_ = 0;
				Il2CppMethodInitialized_0753e72b = true;
			}
			fVar12 = UVar15.x + (float)uStack_68;
			fVar14 = UVar15.y + uStack_68._4_4_;
			position_00.z = UVar15.z + fVar13 * 0.1;
			uVar4 = (Quaternion.identityQuaternion).x;
			uVar8 = (Quaternion.identityQuaternion).y;
			rotation.y = (float)uVar8;
			rotation.x = (float)uVar4;
			uStack_68._0_4_ = (Quaternion.identityQuaternion).z;
			uStack_68._4_4_ = (Quaternion.identityQuaternion).w;
			uStack_60 = 0;
			fStack_6c = this.Size;
			fVar13 = this.get_SizeMultiplier();
			if ((typeof(EffectSpawner)._2).cctor_finished_or_no_cctor == 0) {
				fStack_70 = fVar13;
				fVar13 = fStack_70;
			}
			rotation.z = (float)uStack_68;
			rotation.w = uStack_68._4_4_;
			position_00.x = fVar12;
			position_00.y = fVar14;
			EffectSpawner.Spawn(name, position_00, rotation, fStack_6c * fVar13, true, null) ;
		}
		return;
	}

	[Token(Token = "0x600447E")]
	[Address(RVA = "0x5B2CAB0", Offset = "0x5B2BAB0", VA = "0x5B2CAB0", Slot = "202")]
	public virtual bool CheckNapeAngle(Vector3 hitPosition, float maxAngle)
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$CheckNapeAngle): 33 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		BaseTitanComponentCache pCVar3;
		byte[] auVar4 = new byte[16];
		double dVar5;
		Transform pUVar6;
		UnityEngine_Vector3_StaticFields pUVar7;
		Il2CppClass klass;
		float fVar8;
		uint uVar9;
		uint extraout_XMM0_Db;
		float in_XMM0_Dc;
		float extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		float in_XMM0_Dd;
		float extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		float fVar10;
		byte[] auVar11 = new byte[16];
		float fVar12;
		Vector3 UVar13;
		float fStack_8c;
		float fStack_78;
		float fStack_74;
		Vector3 UStack_40;
		byte[] auStack_28 = new byte[16];

		pCVar3 = this.BaseTitanCache;
		if (((pCVar3 == null) ||(pUVar6 = pCVar3.Head, pUVar6 == null)) ||(pUVar6 = pUVar6.transform, pUVar6 == null)) {
			throw new NullReferenceException();
		}
		UVar13 = pUVar6.position;
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			UStack_40.x = 0.0;
			UStack_40.y = 0.0;
		}
		else {
			UStack_40.x = 0.0;
			UStack_40.y = 0.0;
		}
		UStack_40.x = 0.0;
		UStack_40.y = 0.0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			UStack_40.x = 0.0;
			UStack_40.y = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
		}
		fStack_78 = hitPosition.x;
		fStack_74 = hitPosition.y;
		auVar11._0_4_ = fStack_78 - UVar13.x;
		auVar11._4_4_ = fStack_74 - UVar13.y;
		auVar11._8_4_ = in_XMM0_Dc - extraout_XMM0_Dc;
		auVar11._12_4_ = in_XMM0_Dd - extraout_XMM0_Dd;
		fStack_8c = hitPosition.z - UVar13.z;
		uVar9 = 0;
		fVar8 = fStack_8c * fStack_8c + auVar11._4_4_ * auVar11._4_4_ + auVar11._0_4_ * auVar11._0_4_;
		if (fVar8 < 0.0) {
			fVar8 = sqrtf(fVar8);
			uVar9 = extraout_XMM0_Db;
		}
		else {
			fVar8 = SQRT(fVar8);
		}
		if (1e-05 < fVar8) {
			fStack_8c = fStack_8c / fVar8;
			auVar4._4_4_ = fVar8;
			auVar4._0_4_ = fVar8;
			auVar4._8_4_ = uVar9;
			auVar4._12_4_ = uVar9;
			auVar11 = divps(auVar11, auVar4);
			UStack_40.x = auVar11._0_4_;
			UStack_40.y = auVar11._4_4_;
			pUVar7 = (UnityEngine_Vector3_StaticFields)&UStack_40;
		}
		else {
			pUVar7 = typeof(Vector3).static_fields;
			fStack_8c = (pUVar7.zeroVector).z;
		}
		uVar1 = (pUVar7.zeroVector).x;
		uVar2 = (pUVar7.zeroVector).y;
		UVar13 = pUVar6.forward;
		fVar10 = UVar13.z;
		UStack_40.z = UVar13.y;
		auStack_28._8_4_ = extraout_XMM0_Dc_00;
		auStack_28._0_8_ = UVar13._0_8_;
		auStack_28._12_4_ = extraout_XMM0_Dd_00;
		fVar8 = UVar13.x;
		if (Il2CppMethodInitialized_075450a4 == false) {
			Il2CppMethodInitialized_075450a4 = true;
			fVar8 = (float)auStack_28._0_4_;
		}
		fVar12 = fVar10 * fVar10 + UStack_40.z * UStack_40.z + fVar8 * fVar8;
		fVar8 = fStack_8c * fStack_8c + (float)uVar2 * (float)uVar2 + (float)uVar1 * (float)uVar1;
		if (0.0 <= fVar8 * fVar12) {
			fVar8 = SQRT(fVar8 * fVar12);
			klass = typeof(Math);
		}
		else {
			fVar8 = sqrtf(fVar8 * fVar12);
			klass = typeof(Math);
		}
		fVar12 = 0.0;
		typeof(Math) = (Math)klass;
		if (1e-15 <= fVar8) {
			fVar8 = (((float)uVar2 * -UStack_40.z - (float)uVar1 * (float)auStack_28._0_4_) - fStack_8c * fVar10) / fVar8;
			fVar10 = 1.0;
			if (fVar8 <= 1.0) {
				fVar10 = fVar8;
			}
			dVar5 = acos((double)(float)(~-(uint)(-1.0 <= fVar8) & 0xbf800000 | (uint)fVar10 & -(uint)(-1.0 <= fVar8)), (MethodInfo)klass);
			fVar12 = (float)dVar5 * 57.29578;
		}
		return fVar12 < maxAngle;
	}

	[Token(Token = "0x600447F")]
	[Address(RVA = "0x5B2CE50", Offset = "0x5B2BE50", VA = "0x5B2CE50", Slot = "120")]
	public override Vector3 GetCenterPosition()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$GetCenterPosition): clean
		BaseTitanComponentCache pCVar1;
		Transform __this_00;
		Vector3 UVar2;

		pCVar1 = this.BaseTitanCache;
		if ((pCVar1 == null) ||(__this_00 = pCVar1.Hip, __this_00 == null)) {
			throw new NullReferenceException();
		}
		UVar2 = (Vector3)__this_00.position;
		return (Vector3)UVar2;
	}

	[Token(Token = "0x6004480")]
	[Address(RVA = "0x5B2CE80", Offset = "0x5B2BE80", VA = "0x5B2CE80", Slot = "203")]
	public virtual float GetColliderToggleRadius()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$GetColliderToggleRadius): clean
		float fVar1;
		float fVar2;

		fVar1 = this.Size;
		fVar2 = this.get_SizeMultiplier();
		return fVar2 * fVar1 * 20.0;
	}

	[Token(Token = "0x6004481")]
	[Address(RVA = "0x5B2CEB0", Offset = "0x5B2BEB0", VA = "0x5B2CEB0")]
	protected BaseTitan()
	{
		// Lifted from source/cpp/Characters/BaseTitan.c (Characters.BaseTitan$$.ctor): clean
		uint uVar1;
		LayerMask UVar3;
		Int32[] layers;
		Dictionary<string, float> pSVar4;
		Dictionary<string, string> __this_00;

		this.Size = 1.0;
		this.ClimbCooldown = 0.5;
		this.StunTime = 0.5;
		this.ActionPause = 0.2;
		this.AttackPause = 0.2;
		this.TurnPause = 0.2;
		this.MaxSprintStamina = 5.0;
		this.SprintStaminaRecover = 0.7;
		this.SprintStaminaConsumption = 0.85;
		this.CurrentSprintStamina = 5.0;
		layers = (Int32[])new int[5];
		if (layers == null) {
			throw new NullReferenceException();
		}
		uVar1 = (uint)layers.Length;
		if (uVar1 != 0) {
			layers[0] = PhysicsLayer.TitanMovebox;
			if ((((uVar1 != 1) && (layers[1] = PhysicsLayer.MapObjectEntities, 2 < uVar1)) &&(layers[2] = PhysicsLayer.MapObjectTitans, uVar1 != 3)) &&(layers[3] = PhysicsLayer.MapObjectCharacters, 4 < uVar1)) {
				layers[4] = PhysicsLayer.MapObjectAll;
				UVar3 = PhysicsLayer.GetMask(layers);
				this.TitanGroundMaskLayers.m_Mask = (int32_t)UVar3.m_Mask;
				this.AttackSpeedMultiplier = 1.0;
				this.PreviousAttackSpeedMultiplier = -1.0;
				pSVar4 = new Dictionary<string, float>();
				this.AttackSpeeds = pSVar4;
				this.SizeScaledTurnSpeed = true;
				this._crippleEndTime = -1.0;
				pSVar4 = new Dictionary<string, float>();
				this._rootMotionAnimations = pSVar4;
				__this_00 = new Dictionary<string, string>();
				this.AttackAnimations = __this_00;
				this.EnableAI = true;
				base();
				return;
			}
		}
		throw new IndexOutOfRangeException();
	}
}
