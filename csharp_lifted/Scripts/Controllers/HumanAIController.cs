// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.HumanAIController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/HumanAIController.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$get_Target): clean
			ITargetable pCVar1;

			pCVar1 = this.GetTarget() ;
			return pCVar1;
		}
		[Token(Token = "0x6003EB2")]
		[Address(RVA = "0x5AA72E0", Offset = "0x5AA62E0", VA = "0x5AA72E0")]
		set
		{
			// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$set_Target): clean
			float fVar1;

			this.AssignHumanTarget(value);
			if (this._moveToActive != false) {
				this._moveToTarget = value;
				if (value == null) {
					this._moveToPosition.z = this._targetPosition.z;
					fVar1 = this._targetPosition.y;
					this._moveToPosition.x = this._targetPosition.x;
					this._moveToPosition.y = fVar1;
					return;
				}
			}
			return;
		}
	}

	[Token(Token = "0x17000AF2")]
	public Vector3 TargetPosition
	{
		[Token(Token = "0x6003EB3")]
		[Address(RVA = "0x5AA74B0", Offset = "0x5AA64B0", VA = "0x5AA74B0")]
		get
		{
			// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$get_TargetPosition): clean
			return (Vector3)this._targetPosition;
		}
		[Token(Token = "0x6003EB4")]
		[Address(RVA = "0x5AA74D0", Offset = "0x5AA64D0", VA = "0x5AA74D0")]
		set
		{
			// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$set_TargetPosition): clean
			this._targetPosition.x = value.x;
			this._targetPosition.y = value.y;
			this._targetPosition.z = value.z;
			if ((this._moveToActive == false) ||(this._moveToTarget != null)) {
				return;
			}
			this._moveToPosition.x = value.x;
			this._moveToPosition.y = value.y;
			this._moveToPosition.z = value.z;
			return;
		}
	}

	[Token(Token = "0x17000AF3")]
	private bool CanRunCallbacks
	{
		[Token(Token = "0x6003EB5")]
		[Address(RVA = "0x5AA7500", Offset = "0x5AA6500", VA = "0x5AA7500")]
		get
		{
			// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$get_CanRunCallbacks): clean
			if ((this._aiEnabled != false) && (this._idleTimeLeft <= 0.0)) {
				if (this._moveToActive == false) {
					return true;
				}
				return this._moveToIgnoreEnemies == false;
			}
			return false;
		}
	}

	[Token(Token = "0x6003EB6")]
	[Address(RVA = "0x5AA7530", Offset = "0x5AA6530", VA = "0x5AA7530", Slot = "4")]
	protected override void Awake()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$Awake): clean
		Human pCVar1;

		this.Awake();
		pCVar1 = this.GetComponent<Human>();
		this._human = pCVar1;
		this._usePathfinding = false;
		return;
	}

	[Token(Token = "0x6003EB7")]
	[Address(RVA = "0x5AA7590", Offset = "0x5AA6590", VA = "0x5AA7590", Slot = "5")]
	protected override void Start()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$Start): clean
		Dictionary<object, object> pSVar1;
		String pSVar2;
		bool bVar3;
		MoveTo __this_00;
		HumanAIState value;

		pSVar2 = "MoveTo";
		if (Il2CppMethodInitialized_07547489 == false) {
			Il2CppMethodInitialized_07547489 = true;
			pSVar2 = "MoveTo";
		}
		"MoveTo" = pSVar2;
		if (Il2CppMethodInitialized_0754749a == false) {
			Il2CppMethodInitialized_0754749a = true;
			pSVar1 = (Dictionary<object, object>)this.AIStates;
		}
		else {
			pSVar1 = (Dictionary<object, object>)this.AIStates;
		}
		if (pSVar1 != null) {
			bVar3 = pSVar1.ContainsKey((object)pSVar2);
			if (bVar3) {
				return;
			}
			__this_00 = new MoveTo();
			if (__this_00 != null) {
				value = __this_00.Init(this._human);
				pSVar2 = "MoveTo";
				pSVar1 = (Dictionary<object, object>)this.AIStates;
				if (pSVar1 != null) {
					pSVar1.set_Item((object)pSVar2, (object)value);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003EB8")]
	[Address(RVA = "0x5AA7790", Offset = "0x5AA6790", VA = "0x5AA7790")]
	protected void BeforeFixedUpdate()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$BeforeFixedUpdate): 4 lines keep C-only constructs
		float fVar1;
		float fVar2;
		byte bVar3;
		Il2CppClass pIVar4;
		Component __this_00;
		Human pCVar6;
		BaseComponentCache pUVar7;
		object obj;
		Transform pUVar9;
		float fVar12;
		float fVar13;
		Vector3 UVar14;
		Vector3 UVar15;
		Vector3 UVar16;
		float local_48;
		float fStack_44;
		float local_38;
		float fStack_34;
		float local_28;
		float fStack_24;

		if (this._moveToActive == false) {
			obj = (object)this.GetTarget();
			if (this._moveToActive != false) goto label_05ba77fa;
		}
		else {
			obj = (object)this._moveToTarget;
	label_05ba77fa: ;
			if (obj == null) {
				fVar1 = this._moveToPosition.y;
				fVar12 = this._moveToPosition.z;
				this._targetPosition.x = this._moveToPosition.x;
				this._targetPosition.y = fVar1;
				this._targetPosition.z = fVar12;
			}
		}
		if (obj != null) {
			pIVar4 = obj.klass;
			bVar3 = (typeof(BaseTitan)._2).typeHierarchyDepth;
			if (((pIVar4._2).typeHierarchyDepth < bVar3) ||((pIVar4._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(BaseTitan))) {
				UVar14 = obj.GetPosition();
				fVar12 = UVar14.z;
				fVar1 = UVar14.x;
				fVar2 = UVar14.y;
				this._targetPosition.x = UVar14.x;
				this._targetPosition.y = UVar14.y;
				this._targetPosition.z = fVar12;
				if ((this._moveToActive != false) &&(this._moveToTarget == null)) {
					this._moveToPosition.x = UVar14.x;
					this._moveToPosition.y = UVar14.y;
					this._moveToPosition.z = fVar12;
				}
			}
			else {
				if ((obj[0x10].monitor == null) ||(__this_00 = *(Component*)((long)obj[0x10].monitor + 0x68), __this_00 == null)) goto label_05ba7b0e;
				bVar3 = (typeof(CapsuleCollider)._2).typeHierarchyDepth;
				if (((__this_00.klass._2).typeHierarchyDepth < bVar3) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(CapsuleCollider))) {
					throw new InvalidCastException();
				}
				pUVar9 = __this_00.transform;
				if (pUVar9 == null) goto label_05ba7b0e;
				UVar14 = pUVar9.lossyScale;
				fVar12 = __this_00.radius;
				pUVar9 = __this_00.transform;
				if (pUVar9 == null) goto label_05ba7b0e;
				UVar15 = pUVar9.position;
				pUVar9 = __this_00.transform;
				if (pUVar9 == null) goto label_05ba7b0e;
				UVar16 = pUVar9.forward;
				pUVar9 = __this_00.transform;
				if (pUVar9 == null) goto label_05ba7b0e;
				local_48 = UVar14.x;
				fStack_44 = UVar14.y;
				if (local_48 <= fStack_44) {
					local_48 = fStack_44;
				}
				fVar1 = fVar12 * local_48 * 1.5;
				UVar14 = pUVar9.up;
				fVar13 = fVar12 * local_48 * 0.5;
				fVar2 = UVar14.z * fVar13 + (UVar15.z - UVar16.z * fVar1);
				local_38 = UVar16.x;
				fStack_34 = UVar16.y;
				local_28 = UVar15.x;
				fStack_24 = UVar15.y;
				fVar12 = fVar13 * UVar14.x + (local_28 - fVar1 * local_38);
				fVar1 = fVar13 * UVar14.y + (fStack_24 - fVar1 * fStack_34);
				this._targetPosition.x = fVar12;
				this._targetPosition.y = fVar1;
				this._targetPosition.z = fVar2;
				if ((this._moveToActive != false) &&(this._moveToTarget == null)) {
					this._moveToPosition.x = fVar12;
					this._moveToPosition.y = fVar1;
					this._moveToPosition.z = fVar2;
				}
				if (obj[0x11].klass == null) goto label_05ba7b0e;
				obj[0x11].klass.RegisterLook();
				fVar1 = this._targetPosition.x;
				fVar2 = this._targetPosition.y;
				fVar12 = this._targetPosition.z;
			}
			pCVar6 = this._human;
			if (((pCVar6 == null) ||(pUVar7 = pCVar6.Cache, pUVar7 == null)) ||(pUVar9 = pUVar7.Transform, pUVar9 == null)) {
	label_05ba7b0e: ;
				throw new NullReferenceException();
			}
			UVar14 = pUVar9.position;
			this.TargetDirection.x = fVar1 - UVar14.x;
			this.TargetDirection.y = fVar2 - UVar14.y;
			this.TargetDirection.z = fVar12 - UVar14.z;
		}
		return;
	}

	[Token(Token = "0x6003EB9")]
	[Address(RVA = "0x5AA7B20", Offset = "0x5AA6B20", VA = "0x5AA7B20")]
	public ITargetable FindNearestEnemy()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$FindNearestEnemy): clean
		ITargetable pCVar1;

		return pCVar1;
	}

	[Token(Token = "0x6003EBA")]
	[Address(RVA = "0x5AA7B30", Offset = "0x5AA6B30", VA = "0x5AA7B30")]
	protected void FixedUpdateTargetStatus()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$FixedUpdateTargetStatus): 27 lines keep C-only constructs
		UnityEngine_Vector3_StaticFields pUVar3;
		System_Nullable_Vector3__o pSVar4;
		ITargetable pCVar5;
		ITargetable pCVar6;
		object obj;
		ulong uVar11;
		float fVar10;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dd;
		byte[] auVar12 = new byte[16];
		byte[] auVar13 = new byte[16];
		float fVar14;
		Vector3 value;
		System_Nullable_Vector3__Fields local_38;
		ulong local_28;
		ulong uStack_20;

		pCVar6 = this._trackedTarget;
		pCVar5 = this.GetTarget() ;
		if (pCVar6 != pCVar5) {
			pCVar6 = this.GetTarget();
			this._trackedTarget = pCVar6;
			this._targetLastPosition.hasValue = false;
			*(undefined3)&this._targetLastPosition.field_0x1 = 0;
			this._targetLastPosition.value.x = 0.0;
			pSVar4 = &this._targetLastPosition;
			pSVar4.value.y = 0.0;
			pSVar4.value.z = 0.0;
		}
		pCVar6 = this.GetTarget() ;
		if (pCVar6 == null) {
			pUVar3 = typeof(Vector3).static_fields;
			fVar10 = (pUVar3.zeroVector).y;
			fVar14 = (pUVar3.zeroVector).z;
			this.TargetVelocity.x = (pUVar3.zeroVector).x;
			this.TargetVelocity.y = fVar10;
			this.TargetVelocity.z = fVar14;
			this._targetLastPosition.hasValue = false;
			*(undefined3)&this._targetLastPosition.field_0x1 = 0;
			this._targetLastPosition.value.x = 0.0;
			pSVar4 = &this._targetLastPosition;
			pSVar4.value.y = 0.0;
			pSVar4.value.z = 0.0;
		}
		else {
			obj = (object)this.GetTarget();
			if (obj == null) {
				throw new NullReferenceException();
			}
			value = obj.GetPosition();
			if (this._targetLastPosition.hasValue == false) {
				pUVar3 = typeof(Vector3).static_fields;
				uVar11._0_4_ = (pUVar3.zeroVector).x;
				uVar11._4_4_ = (pUVar3.zeroVector).y;
				fVar14 = (pUVar3.zeroVector).z;
			}
			else {
				pSVar4 = &this._targetLastPosition;
				local_28._0_4_ = pSVar4.value.x;
				local_28._4_4_ = pSVar4.value.y;
				uStack_20 = 0;
				fVar14 = this._targetLastPosition.value.z;
				fVar10 = Time.deltaTime;
				auVar12._0_4_ = value.x - (float)local_28;
				auVar12._4_4_ = value.y - local_28._4_4_;
				auVar12._8_4_ = extraout_XMM0_Dc - (float)uStack_20;
				auVar12._12_4_ = extraout_XMM0_Dd - uStack_20._4_4_;
				fVar14 = (value.z - fVar14) / fVar10;
				auVar13._4_4_ = fVar10;
				auVar13._0_4_ = fVar10;
				auVar13._8_4_ = fVar10;
				auVar13._12_4_ = fVar10;
				auVar13 = divps(auVar12, auVar13);
				uVar11 = auVar13._0_8_;
			}
			this.TargetVelocity.x = (float)(int)uVar11;
			this.TargetVelocity.y = (float)(int)((ulong)uVar11 >> 0x20);
			this.TargetVelocity.z = fVar14;
			local_38.hasValue = false;
			local_38._1_3_ = 0;
			local_38.value.x = 0.0;
			local_38.value.y = 0.0;
			local_38.value.z = 0.0;
			local_38 = new Nullable<Vector3>(value);
			this._targetLastPosition.hasValue = local_38.hasValue;
			*(undefined3)&this._targetLastPosition.field_0x1 = local_38._1_3_;
			this._targetLastPosition.value.x = local_38.value.x;
			pSVar4 = &this._targetLastPosition;
			pSVar4.value.y = local_38.value.y;
			pSVar4.value.z = local_38.value.z;
		}
		return;
	}

	[Token(Token = "0x6003EBB")]
	[Address(RVA = "0x5AA7DB0", Offset = "0x5AA6DB0", VA = "0x5AA7DB0", Slot = "6")]
	protected override void FixedUpdate()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$FixedUpdate): 5 lines keep C-only constructs
		bool bVar1;
		HumanAICallback pCVar2;
		Action pSVar3;
		HumanAIState pCVar4;
		System_Nullable_Vector3__o pSVar5;
		Human pCVar6;
		float fVar7;
		float fVar8;

		pCVar6 = this._human;
		if (pCVar6 == null) goto label_05ba800b;
		if ((pCVar6.FinishSetup == false) || (pCVar6.Dead != false)) {
			if (this._recoveryTimeLeft <= 0.0) goto label_05ba7df7;
		}
		else {
			this._setTargetThisFrame = false;
			this.RefreshAgent();
			fVar8 = this._idleTimeLeft;
			if (0.0 < fVar8) {
				if (0.0 < this._recoveryTimeLeft) {
					pCVar6 = this._human;
					if (pCVar6 == null) goto label_05ba800b;
					pCVar6.TargetAngle = this._movementHeading;
				}
				this._lastMovementPosition.hasValue = false;
				*(undefined3)&this._lastMovementPosition.field_0x1 = 0;
				this._lastMovementPosition.value.x = 0.0;
				pSVar5 = &this._lastMovementPosition;
				pSVar5.value.y = 0.0;
				pSVar5.value.z = 0.0;
				this._lowMovementSpeedTime = 0.0;
				this._recoveryTimeLeft = 0.0;
				fVar7 = Time.deltaTime;
				fVar8 = fVar8 - fVar7;
				this._idleTimeLeft = fVar8;
				if (0.0 < fVar8) {
					return;
				}
			}
			this.UpdateMoveTarget() ;
			this.UpdateTargeting();
			this.BeforeFixedUpdate();
			this.FixedUpdateTargetStatus();
			if (this._aiEnabled == false) {
	label_05ba7f13: ;
				fVar8 = this._idleTimeLeft;
			}
			else {
				fVar8 = this._idleTimeLeft;
				if (fVar8 <= 0.0) {
					if ((this._moveToActive == false) || (this._moveToIgnoreEnemies == false)) {
						pCVar2 = this.Callbacks;
						if (pCVar2 == null) goto label_05ba800b;
						pSVar3 = pCVar2.PreAction;
						if (pSVar3 != null) {
							(*(code)pSVar3.invoke_impl)(pSVar3.method_code);
						}
					}
					goto label_05ba7f13;
				}
			}
			if (fVar8 <= 0.0) {
				pCVar4 = this.AIState;
				bVar1 = this._aiEnabled;
				if (pCVar4 == null) {
					if (bVar1 == false) goto label_05ba7fc9;
					if (fVar8 <= 0.0) {
						if ((this._moveToActive == false) || (this._moveToIgnoreEnemies == false)) {
							pCVar2 = this.Callbacks;
							if (pCVar2 == null) goto label_05ba800b;
							pSVar3 = pCVar2.OnIdle;
							if (pSVar3 != null) {
								(*(code)pSVar3.invoke_impl)(pSVar3.method_code);
							}
						}
						goto label_05ba7f76;
					}
				}
				else {
					if ((bVar1 == false) && (this._moveToActive == false)) goto label_05ba7fc9;
					pCVar4.Action();
	label_05ba7f76: ;
					if (this._aiEnabled == false) goto label_05ba7fc9;
					fVar8 = this._idleTimeLeft;
				}
				if ((fVar8 <= 0.0) &&((this._moveToActive == false || (this._moveToIgnoreEnemies == false)))) {
					pCVar2 = this.Callbacks;
					if (pCVar2 == null) {
	label_05ba800b: ;
						throw new NullReferenceException();
					}
					pSVar3 = pCVar2.PostAction;
					if (pSVar3 != null) {
						(*(code)pSVar3.invoke_impl)(pSVar3.method_code);
					}
				}
	label_05ba7fc9: ;
				this.UpdateMovementRecovery();
				return;
			}
			if (this._recoveryTimeLeft <= 0.0) goto label_05ba7df7;
			pCVar6 = this._human;
			if (pCVar6 == null) goto label_05ba800b;
		}
		pCVar6.TargetAngle = this._movementHeading;
	label_05ba7df7: ;
		this._lastMovementPosition.hasValue = false;
		*(undefined3)&this._lastMovementPosition.field_0x1 = 0;
		this._lastMovementPosition.value.x = 0.0;
		pSVar5 = &this._lastMovementPosition;
		pSVar5.value.y = 0.0;
		pSVar5.value.z = 0.0;
		this._lowMovementSpeedTime = 0.0;
		this._recoveryTimeLeft = 0.0;
		return;
	}

	[Token(Token = "0x6003EBC")]
	[Address(RVA = "0x5AA8580", Offset = "0x5AA7580", VA = "0x5AA8580")]
	internal void StopInput()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$StopInput): 5 lines keep C-only constructs
		BaseUseable pCVar1;
		HumanSetup pCVar2;
		System_Nullable_Vector3__o pSVar3;
		bool bVar4;
		Human pCVar5;

		pCVar5 = this._human;
		if (this._recoveryTimeLeft <= 0.0) {
			this._lastMovementPosition.hasValue = false;
			*(undefined3)&this._lastMovementPosition.field_0x1 = 0;
			this._lastMovementPosition.value.x = 0.0;
			pSVar3 = &this._lastMovementPosition;
			pSVar3.value.y = 0.0;
			pSVar3.value.z = 0.0;
			this._lowMovementSpeedTime = 0.0;
			this._recoveryTimeLeft = 0.0;
			if (pCVar5 == null) goto label_05ba86c6;
		}
		else {
			if (pCVar5 == null) goto label_05ba86c6;
			pCVar5.TargetAngle = this._movementHeading;
			this._lastMovementPosition.hasValue = false;
			*(undefined3)&this._lastMovementPosition.field_0x1 = 0;
			this._lastMovementPosition.value.x = 0.0;
			pSVar3 = &this._lastMovementPosition;
			pSVar3.value.y = 0.0;
			pSVar3.value.z = 0.0;
			this._lowMovementSpeedTime = 0.0;
			this._recoveryTimeLeft = 0.0;
		}
		pCVar5.HasDirection = false;
		pCVar5.TargetMagnitude = 0.0;
		this._movingLeft = 0.0;
		this._usingGas = false;
		pCVar1 = pCVar5.Weapon;
		if (pCVar1 != null) {
			pCVar1.SetInput(false);
			pCVar5 = this._human;
			if (pCVar5 == null) goto label_05ba86c6;
		}
		pCVar2 = pCVar5.Setup;
		bVar4 = ((Object)pCVar2 != null);
		if (bVar4) {
			pCVar5 = this._human;
			if ((pCVar5 == null) ||(pCVar2 = pCVar5.Setup, pCVar2 == null)) {
	label_05ba86c6: ;
				throw new NullReferenceException();
			}
			bVar4 = pCVar2.HasODM;
			if (bVar4) {
				this._hookingLeft = false;
				this._hookingRight = false;
				this.UpdateHookInput();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6003EBD")]
	[Address(RVA = "0x5AA86E0", Offset = "0x5AA76E0", VA = "0x5AA86E0")]
	protected bool CanMove()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$CanMove): 1 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		int iVar3;
		Human pCVar4;
		BaseUseable pCVar5;
		BaseUseable pCVar6;
		AnimationHandler pCVar7;
		bool bVar8;

		pCVar4 = this._human;
		if (pCVar4 == null) {
	label_05ba8850: ;
			throw new NullReferenceException();
		}
		if (pCVar4.Dead != false) {
			return false;
		}
		iVar3 = pCVar4._state;
		if (iVar3 == 0xf) {
			return false;
		}
		if (pCVar4.MountState == 1) {
			return true;
		}
		if (pCVar4.Grounded == false) {
			if (iVar3 != 8) {
				if (iVar3 == 9) {
					pCVar5 = pCVar4.Special;
					if (pCVar5 == null) {
						return false;
					}
					pCVar6 = pCVar5.klass;
					bVar1 = (pCVar6._2).typeHierarchyDepth;
					bVar2 = (typeof(DownStrikeSpecial)._2).typeHierarchyDepth;
					if ((bVar1 < bVar2) ||((pCVar6._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(DownStrikeSpecial))) {
						bVar2 = (typeof(StockSpecial)._2).typeHierarchyDepth;
						if (bVar1 < bVar2) {
							return false;
						}
						if ((pCVar6._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(StockSpecial)) {
							return false;
						}
					}
				}
				pCVar7 = pCVar4.Animation;
				if (pCVar7 != null) {
					bVar8 = pCVar7.IsPlaying("dash");
					if (bVar8) {
						return false;
					}
					pCVar4 = this._human;
					if ((pCVar4 != null) &&(pCVar7 = pCVar4.Animation, pCVar7 != null)) {
						bVar8 = pCVar7.IsPlaying("jump");
						if (bVar8) {
							return false;
						}
						pCVar4 = this._human;
						if (pCVar4 != null) {
							bVar8 = pCVar4.IsFiringThunderspear();
							if (bVar8) {
								return false;
							}
							return true;
						}
					}
				}
				goto label_05ba8850;
			}
		}
		else if (iVar3 == 0) {
			return true;
		}
		return false;
	}

	[Token(Token = "0x6003EBE")]
	[Address(RVA = "0x5AA8890", Offset = "0x5AA7890", VA = "0x5AA8890")]
	private bool IsSpin3Special()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$IsSpin3Special): 1 lines keep C-only constructs
		byte bVar1;
		Human pCVar2;
		BaseUseable pCVar3;
		BaseUseable pCVar4;

		pCVar2 = this._human;
		if (pCVar2 == null) {
			throw new NullReferenceException();
		}
		if ((pCVar2._state == 9) &&(pCVar3 = pCVar2.Special, pCVar3 != null)) {
			pCVar4 = pCVar3.klass;
			bVar1 = (typeof(Spin3Special)._2).typeHierarchyDepth;
			if (bVar1 <= (pCVar4._2).typeHierarchyDepth) {
				return (pCVar4._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Spin3Special);
			}
		}
		return false;
	}

	[Token(Token = "0x6003EBF")]
	[Address(RVA = "0x5AA8910", Offset = "0x5AA7910", VA = "0x5AA8910", Slot = "9")]
	public bool MovingLeft()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$MovingLeft): 1 lines keep C-only constructs
		float pfVar1;

		pfVar1 = &this._movingLeft;
		return *pfVar1 <= 0.0 && *pfVar1 != 0.0;
	}

	[Token(Token = "0x6003EC0")]
	[Address(RVA = "0x5AA8920", Offset = "0x5AA7920", VA = "0x5AA8920", Slot = "10")]
	public bool MovingRight()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$MovingRight): clean
		return 0.0 < this._movingLeft;
	}

	[Token(Token = "0x6003EC1")]
	[Address(RVA = "0x5AA8940", Offset = "0x5AA7940", VA = "0x5AA8940", Slot = "11")]
	public bool UsingGas()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$UsingGas): clean
		return this._usingGas;
	}

	[Token(Token = "0x6003EC2")]
	[Address(RVA = "0x5AA8950", Offset = "0x5AA7950", VA = "0x5AA8950", Slot = "12")]
	public bool HookingLeft()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$HookingLeft): clean
		return this._hookingLeft;
	}

	[Token(Token = "0x6003EC3")]
	[Address(RVA = "0x5AA8960", Offset = "0x5AA7960", VA = "0x5AA8960", Slot = "13")]
	public bool HookingRight()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$HookingRight): clean
		return this._hookingRight;
	}

	[Token(Token = "0x6003EC4")]
	[Address(RVA = "0x5AA8970", Offset = "0x5AA7970", VA = "0x5AA8970", Slot = "14")]
	public bool HookingBoth()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$HookingBoth): clean
		return false;
	}

	[Token(Token = "0x6003EC5")]
	[Address(RVA = "0x5AA8980", Offset = "0x5AA7980", VA = "0x5AA8980", Slot = "15")]
	public Vector3 GetAimPoint()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$GetAimPoint): clean
		return (Vector3)this.AimPoint;
	}

	[Token(Token = "0x6003EC6")]
	[Address(RVA = "0x5AA89A0", Offset = "0x5AA79A0", VA = "0x5AA89A0")]
	public void Move(Vector3? direction)
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$Move): 3 lines keep C-only constructs
		uint uVar1;
		BaseCharacter pCVar2;
		System_Nullable_Vector3__o pSVar3;
		bool bVar4;
		Human pCVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fStack_44;
		float fStack_34;

		fStack_34 = direction.value.x;
		this._idleTimeLeft = 0.0;
		bVar4 = this.CanMove();
		if (!bVar4) {
			return;
		}
		if (direction.hasValue == false) {
			if (0.0 < this._recoveryTimeLeft) {
				pCVar5 = this._human;
				if (pCVar5 == null) goto label_05ba8d03;
				pCVar5.TargetAngle = this._movementHeading;
			}
			this._lastMovementPosition.hasValue = false;
			*(undefined3)&this._lastMovementPosition.field_0x1 = 0;
			this._lastMovementPosition.value.x = 0.0;
			pSVar3 = &this._lastMovementPosition;
			pSVar3.value.y = 0.0;
			pSVar3.value.z = 0.0;
			this._lowMovementSpeedTime = 0.0;
			this._recoveryTimeLeft = 0.0;
			pCVar2 = this._character;
			if (pCVar2 == null) goto label_05ba8d03;
			pCVar2.HasDirection = false;
			pCVar5 = this._human;
			fVar6 = 0.0;
			if (pCVar5 == null) goto label_05ba8d03;
			goto label_05ba8ce0;
		}
		fStack_44 = direction.value.z;
		this._movingLeft =this.AimDirection.x * fStack_44 - this.AimDirection.z * fStack_34 ;
		fVar6 = this.GetTargetAngle(direction.value) ;
		this._movementHeading = fVar6;
		pCVar2 = this._character;
		if (pCVar2 == null) goto label_05ba8d03;
		pCVar2.TargetAngle = fVar6;
		pCVar2.HasDirection = true;
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		fVar8 = fStack_44 * fStack_44 + fStack_34 * fStack_34 + 0.0;
		if (fVar8 < 0.0) {
			fVar6 = sqrtf(fVar8);
			if (0.95 < fVar6) goto label_05ba8bab;
	label_05ba8ad8: ;
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_05ba8c1b;
	label_05ba8af5: ;
				if (0.0 <= fVar8) goto label_05ba8b01;
	label_05ba8c30: ;
				fVar7 = sqrtf(fVar8);
			}
			else {
				if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_05ba8af5;
	label_05ba8c1b: ;
				if (fVar8 < 0.0) goto label_05ba8c30;
	label_05ba8b01: ;
				fVar7 = SQRT(fVar8);
			}
			fVar6 = 0.0;
			if (0.25 <= fVar7) {
				if (Il2CppMethodInitialized_0753e729 == false) {
					Il2CppMethodInitialized_0753e729 = true;
					uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar1 = ((typeof(Math))._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				if (fVar8 < 0.0) {
					fVar6 = sqrtf(fVar8);
				}
				else {
					fVar6 = SQRT(fVar8);
				}
			}
		}
		else {
			if (SQRT(fVar8) <= 0.95) goto label_05ba8ad8;
	label_05ba8bab: ;
			fVar6 = 1.0;
		}
		pCVar5 = this._human;
		if (pCVar5 == null) {
	label_05ba8d03: ;
			throw new NullReferenceException();
		}
		if ((((pCVar5.IsWalk == false) || (pCVar5.MountState != 0)) ||(pCVar5._state != 0)) || (pCVar5.Grounded == false)) {
			fVar8 = 1.0;
		}
		else {
			fVar8 = 0.25;
		}
		fVar6 = fVar6 * fVar8;
	label_05ba8ce0: ;
		pCVar5.TargetMagnitude = fVar6;
		return;
	}

	[Token(Token = "0x6003EC7")]
	[Address(RVA = "0x5AA8D10", Offset = "0x5AA7D10", VA = "0x5AA8D10")]
	private float GetMovementScale()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$GetMovementScale): clean
		Human pCVar1;

		pCVar1 = this._human;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		if ((((pCVar1.IsWalk == false) || (pCVar1.MountState != 0)) ||(pCVar1._state != 0)) || (pCVar1.Grounded == false)) {
			return 1.0;
		}
		return 0.25;
	}

	[Token(Token = "0x6003EC8")]
	[Address(RVA = "0x5AA8010", Offset = "0x5AA7010", VA = "0x5AA8010")]
	private void ResetMovementRecovery()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$ResetMovementRecovery): 3 lines keep C-only constructs
		Human pCVar1;
		System_Nullable_Vector3__o pSVar2;

		if (0.0 < this._recoveryTimeLeft) {
			pCVar1 = this._human;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			pCVar1.TargetAngle = this._movementHeading;
		}
		this._lastMovementPosition.hasValue = false;
		*(undefined3)&this._lastMovementPosition.field_0x1 = 0;
		this._lastMovementPosition.value.x = 0.0;
		pSVar2 = &this._lastMovementPosition;
		pSVar2.value.y = 0.0;
		pSVar2.value.z = 0.0;
		this._lowMovementSpeedTime = 0.0;
		this._recoveryTimeLeft = 0.0;
		return;
	}

	[Token(Token = "0x6003EC9")]
	[Address(RVA = "0x5AA8060", Offset = "0x5AA7060", VA = "0x5AA8060")]
	private void UpdateMovementRecovery()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$UpdateMovementRecovery): 29 lines keep C-only constructs
		Human pCVar1;
		HumanStats pCVar2;
		AnimationHandler pCVar3;
		BaseComponentCache pUVar4;
		Transform pUVar5;
		System_Nullable_Vector3__o pSVar6;
		bool bVar7;
		uint uVar8;
		float fVar9;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		byte[] auVar10 = new byte[12];
		float fVar14;
		float fVar15;
		Vector3 UVar16;
		System_Nullable_Vector3__Fields SStack_78;
		System_Nullable_Vector3__Fields SStack_68;
		float fStack_58;
		byte[] auStack_48 = new byte[16];
		byte[] auStack_38 = new byte[16];
		float fStack_28;

		pCVar1 = this._human;
		if ((pCVar1 == null) ||(pCVar2 = pCVar1.Stats, pCVar2 == null)) goto label_05ba8577;
		if ((this._usePathfinding == false) &&((fVar14 = pCVar2.RunSpeed * pCVar1.TargetMagnitude,this._aiEnabled != false || (this._moveToActive != false)))) {
			if (((this._idleTimeLeft <= 0.0) &&(((pCVar1.Dead == false && (pCVar1.HasDirection != false)) &&(pCVar1.Grounded != false)))) &&(((pCVar1._state == 0 && (0.0 < fVar14)) && (pCVar1.MountState == 0)))) {
				pCVar3 = pCVar1.Animation;
				if ((typeof(HumanAnimations)._2).cctor_finished_or_no_cctor == 0) {
				}
				if (pCVar3 == null) goto label_05ba8577;
				bVar7 = pCVar3.IsPlaying(HumanAnimations.Jump);
				if (!bVar7) {
					pCVar1 = this._human;
					if (pCVar1 == null) goto label_05ba8577;
					pCVar3 = pCVar1.Animation;
					if ((typeof(HumanAnimations)._2).cctor_finished_or_no_cctor == 0) {
					}
					if (pCVar3 == null) goto label_05ba8577;
					bVar7 = pCVar3.IsPlaying(HumanAnimations.HorseMount);
					if (!bVar7) {
						pCVar1 = this._human;
						if (((pCVar1 != null) &&(pUVar4 = pCVar1.Cache, pUVar4 != null)) &&(pUVar5 = pUVar4.Transform, pUVar5 != null)) {
							UVar16 = pUVar5.position;
							fStack_28 = UVar16.z;
							SStack_68.hasValue = this._lastMovementPosition.hasValue;
							SStack_68._1_3_ = *(undefined3)&this._lastMovementPosition.field_0x1;
							SStack_68.value.x = this._lastMovementPosition.value.x;
							pSVar6 = &this._lastMovementPosition;
							SStack_68.value.y = pSVar6.value.y;
							SStack_68.value.z = pSVar6.value.z;
							SStack_78.hasValue = false;
							SStack_78._1_3_ = 0;
							SStack_78.value.x = 0.0;
							SStack_78.value.y = 0.0;
							SStack_78.value.z = 0.0;
							auStack_38._8_4_ = extraout_XMM0_Dc;
							auStack_38._0_8_ = UVar16._0_8_;
							auStack_38._12_4_ = extraout_XMM0_Dd;
							SStack_78 = new Nullable<Vector3>(UVar16);
							this._lastMovementPosition.hasValue = SStack_78.hasValue;
							*(undefined3)&this._lastMovementPosition.field_0x1 = SStack_78._1_3_;
							this._lastMovementPosition.value.x = SStack_78.value.x;
							pSVar6 = &this._lastMovementPosition;
							pSVar6.value.y = SStack_78.value.y;
							pSVar6.value.z = SStack_78.value.z;
							if (SStack_68.hasValue == false) {
								return;
							}
							fVar9 = this._recoveryTimeLeft;
							if (fVar9 <= 0.0) {
								UVar16 = SStack_68.Value;
								fStack_58 = UVar16.z;
								auStack_48._8_4_ = extraout_XMM0_Dc_00;
								auStack_48._0_8_ = UVar16._0_8_;
								auStack_48._12_4_ = extraout_XMM0_Dd_00;
								fVar9 = Time.fixedDeltaTime;
								fVar9 = fVar14 * 0.5 * fVar9;
								if (fVar9 * fVar9 <=((float)auStack_38._0_4_ - (float)auStack_48._0_4_) *((float)auStack_38._0_4_ - (float)auStack_48._0_4_) + 0.0 +(fStack_28 - fStack_58) * (fStack_28 - fStack_58)) {
	label_05ba84b4: ;
									this._lowMovementSpeedTime = 0.0;
									return;
								}
								pCVar1 = this._human;
								if (((pCVar1 == null) ||(pUVar4 = pCVar1.Cache, pUVar4 == null)) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05ba8577;
								UVar16 = pUVar5.eulerAngles;
								fVar9 = this._movementHeading - UVar16.y;
								fVar14 = floorf(fVar9 / 360.0);
								fVar9 = fVar14 * -360.0 + fVar9;
								fVar14 = 360.0;
								if (fVar9 <= 360.0) {
									fVar14 = fVar9;
								}
								fVar14 = (float)(-(uint)(0.0 <= fVar9) & (uint)fVar14);
								if (45.0 < ABS((float)(~-(uint)(180.0 < fVar14) & (uint)fVar14 |(uint)(fVar14 + -360.0) & -(uint)(180.0 < fVar14)))) goto label_05ba84b4;
								fVar14 = this._lowMovementSpeedTime;
								fVar9 = Time.fixedDeltaTime;
								fVar9 = fVar9 + fVar14;
								this._lowMovementSpeedTime = fVar9;
								if (fVar9 < 0.5) {
									return;
								}
								this._lowMovementSpeedTime = 0.0;
								this._recoveryTimeLeft = 2.0;
								fVar14 = Random.value;
								this._recoveryTurnAngle = *(float)(&g_data_0100abe8 + (ulong)(fVar14 < 0.5) * 4);
								fVar9 = this._recoveryTimeLeft;
							}
							fVar14 = Time.fixedDeltaTime;
							this._recoveryTimeLeft = fVar9 - fVar14;
							if (fVar9 - fVar14 <= 0.0) {
								pCVar1 = this._human;
								if (pCVar1 != null) {
									pCVar1.TargetAngle = this._movementHeading;
									this._lastMovementPosition.hasValue = false;
									*(undefined3)&this._lastMovementPosition.field_0x1 = 0;
									this._lastMovementPosition.value.x = 0.0;
									pSVar6 = &this._lastMovementPosition;
									pSVar6.value.y = 0.0;
									pSVar6.value.z = 0.0;
									this._lowMovementSpeedTime = 0.0;
									this._recoveryTimeLeft = 0.0;
									return;
								}
							}
							else {
								fVar14 = this._recoveryTurnAngle;
								fVar9 = Time.fixedDeltaTime;
								fVar9 = fVar9 * 10.0;
								fVar15 = 0.0 - fVar14;
								uVar8 = -(uint)(0.0 <= fVar15);
								fVar14 = (float)(-(uint)(fVar9 < ABS(fVar15)) &(uint)((float)(~uVar8 & (uint)-fVar9 | uVar8 & (uint)fVar9) + fVar14));
								this._recoveryTurnAngle = fVar14;
								pCVar1 = this._human;
								if (pCVar1 != null) {
									fVar14 = fVar14 + this._movementHeading;
									fVar9 = floorf(fVar14 / 360.0);
									auVar10 = ZEXT812(0x43b40000);
									fVar14 = fVar14 - fVar9 * auVar10._0_4_;
									if (fVar14 <= auVar10._0_4_) {
										auVar10._4_8_ = auVar10._4_8_;
										auVar10._0_4_ = fVar14;
									}
									pCVar1.TargetAngle = (float)(-(uint)(0.0 <= fVar14) & auVar10._0_4_);
									return;
								}
							}
						}
						goto label_05ba8577;
					}
				}
			}
		}
		if (0.0 < this._recoveryTimeLeft) {
			pCVar1 = this._human;
			if (pCVar1 == null) {
	label_05ba8577: ;
				throw new NullReferenceException();
			}
			pCVar1.TargetAngle = this._movementHeading;
		}
		this._lastMovementPosition.hasValue = false;
		*(undefined3)&this._lastMovementPosition.field_0x1 = 0;
		this._lastMovementPosition.value.x = 0.0;
		pSVar6 = &this._lastMovementPosition;
		pSVar6.value.y = 0.0;
		pSVar6.value.z = 0.0;
		this._lowMovementSpeedTime = 0.0;
		this._recoveryTimeLeft = 0.0;
		return;
	}

	[Token(Token = "0x6003ECA")]
	[Address(RVA = "0x5AA8D60", Offset = "0x5AA7D60", VA = "0x5AA8D60")]
	public void AimAt(Vector3? position)
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$AimAt): 3 lines keep C-only constructs
		Human __this_00;
		Transform __this_01;
		float fVar2;
		ulong uVar3;
		Vector3 UVar4;
		float fStack_34;
		float local_30;

		fStack_34 = position.value.x;
		local_30 = position.value.y;
		if (position.hasValue == false) {
			uVar3._0_4_ = (Vector3.zeroVector).x;
			uVar3._4_4_ = (Vector3.zeroVector).y;
			fVar2 = (Vector3.zeroVector).z;
	label_05ba8e3a: ;
			this.AimDirection.x = (float)(int)uVar3;
			this.AimDirection.y = (float)(int)((ulong)uVar3 >> 0x20);
			this.AimDirection.z = fVar2;
			return;
		}
		this.AimPoint.x = (float)position.value.x;
		this.AimPoint.y = (float)position.value.y;
		this.AimPoint.z = position.value.z;
		__this_00 = this._human;
		if (__this_00 != null) {
			__this_01 = __this_00.transform;
			if (__this_01 != null) {
				UVar4 = __this_01.position;
				uVar3 = CONCAT44(local_30 - UVar4.y, fStack_34 - UVar4.x);
				fVar2 = position.value.z - UVar4.z;
				goto label_05ba8e3a;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003ECB")]
	[Address(RVA = "0x5AA8E60", Offset = "0x5AA7E60", VA = "0x5AA8E60")]
	public void Jump()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$Jump): clean
		int iVar1;
		Human pCVar2;
		Horse __this_00;
		bool bVar3;

		pCVar2 = this._human;
		if (pCVar2 == null) {
	label_05ba8ec3: ;
			throw new NullReferenceException();
		}
		if ((pCVar2.Dead == false) && (pCVar2._state != 0xf)) {
			iVar1 = pCVar2.MountState;
			if (iVar1 == 1) {
				__this_00 = pCVar2.Horse;
				if (__this_00 != null) {
					__this_00.Jump();
					return;
				}
				goto label_05ba8ec3;
			}
			if (iVar1 == 0) {
				bVar3 = pCVar2.CanJump();
				if (bVar3) {
					pCVar2 = this._human;
					if (pCVar2 != null) {
						pCVar2.Jump();
						return;
					}
					goto label_05ba8ec3;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6003ECC")]
	[Address(RVA = "0x5AA8ED0", Offset = "0x5AA7ED0", VA = "0x5AA8ED0")]
	public void HorseMount(bool mount = true)
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$HorseMount): 1 lines keep C-only constructs
		int iVar1;
		int iVar2;
		Human pCVar3;
		Horse pCVar4;
		BaseComponentCache pUVar5;
		Transform pUVar6;
		PhotonView __this_00;
		bool bVar7;
		Object[] parameters;
		float fVar8;
		Vector3 UVar9;
		Vector3 UVar10;
		float fStack_28;

		pCVar3 = this._human;
		if (pCVar3 == null) goto label_05ba90fd;
		if ((pCVar3.Dead != false) || (iVar1 = pCVar3._state, iVar1 == 0xf)) {
			return;
		}
		iVar2 = pCVar3.MountState;
		if ((iVar2 != 0) || (!mount)) {
			if (iVar2 != 1) {
				return;
			}
			if (mount) {
				return;
			}
			if (iVar1 == 0) {
				pCVar3.Unmount(false);
				return;
			}
			return;
		}
		bVar7 = pCVar3.CanJump();
		if (bVar7) {
			pCVar3 = this._human;
			if (pCVar3 == null) goto label_05ba90fd;
			pCVar4 = pCVar3.Horse;
			bVar7 = ((Object)pCVar4 != null);
			if (bVar7) {
				pCVar3 = this._human;
				if (pCVar3 == null) goto label_05ba90fd;
				if (pCVar3.MountState == 0) {
					pCVar4 = pCVar3.Horse;
					if (((pCVar4 == null) ||(pUVar5 = pCVar4.Cache, pUVar5 == null)) ||(pUVar6 = pUVar5.Transform, pUVar6 == null)) goto label_05ba90fd;
					UVar9 = pUVar6.position;
					pCVar3 = this._human;
					if (((pCVar3 == null) ||(pUVar5 = pCVar3.Cache, pUVar5 == null)) ||(pUVar6 = pUVar5.Transform, pUVar6 == null)) goto label_05ba90fd;
					UVar10 = pUVar6.position;
					fStack_28 = UVar9.x;
					fVar8 = (float)il2cpp_runtime_helper_05956b50(fStack_28, UVar9.z, UVar10.x, UVar10.z, 0);
					if (fVar8 < 15.0) {
						pCVar3 = this._human;
						if (pCVar3 == null) goto label_05ba90fd;
						if (pCVar3.HasDirection == false) {
							pCVar3.MountHorse();
						}
					}
				}
			}
		}
		pCVar3 = this._human;
		if (pCVar3 != null) {
			if (pCVar3.CarryState != 1) {
				return;
			}
			pUVar5 = pCVar3.Cache;
			if (pUVar5 != null) {
				__this_00 = pUVar5.PhotonView;
				parameters = (Object[])new object[0];
				if (__this_00 != null) {
					__this_00.RPC("UncarryRPC", 0, parameters);
					return;
				}
			}
		}
	label_05ba90fd: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003ECD")]
	[Address(RVA = "0x5AA9110", Offset = "0x5AA8110", VA = "0x5AA9110")]
	public void Dodge()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$Dodge): clean
		Human pCVar1;
		bool bVar2;
		float targetAngle;

		pCVar1 = this._human;
		if (pCVar1 == null) {
	label_05ba9169: ;
			throw new NullReferenceException();
		}
		if ((pCVar1.Dead == false) && (pCVar1._state != 0xf)) {
			bVar2 = pCVar1.CanJump();
			if (bVar2) {
				pCVar1 = this._human;
				if (pCVar1 != null) {
					targetAngle = pCVar1.TargetAngle;
					if (pCVar1.HasDirection != false) {
						targetAngle = targetAngle + 180.0;
					}
					pCVar1.Dodge(targetAngle);
					return;
				}
				goto label_05ba9169;
			}
		}
		return;
	}

	[Token(Token = "0x6003ECE")]
	[Address(RVA = "0x5AA9170", Offset = "0x5AA8170", VA = "0x5AA9170")]
	public void Reload()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$Reload): clean
		int iVar1;
		int iVar2;
		Human __this_00;

		__this_00 = this._human;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		if ((__this_00.Dead == false) && (iVar1 = __this_00._state, iVar1 != 0xf)) {
			iVar2 = __this_00.MountState;
			if (iVar2 == 1) {
				if ((iVar1 == 0) && (__this_00.IsAttackableState != false)) goto label_05ba91b2;
			}
			else if ((iVar2 == 0) && (iVar1 == 0)) {
	label_05ba91b2: ;
				__this_00.Reload();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6003ECF")]
	[Address(RVA = "0x5AA91C0", Offset = "0x5AA81C0", VA = "0x5AA91C0")]
	public void UseGas(bool useGas)
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$UseGas): clean
		this._usingGas = useGas;
		return;
	}

	[Token(Token = "0x6003ED0")]
	[Address(RVA = "0x5AA91D0", Offset = "0x5AA81D0", VA = "0x5AA91D0")]
	public void HorseWalk(bool isWalk)
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$HorseWalk): clean
		Human pCVar1;

		pCVar1 = this._human;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		pCVar1.IsWalk = isWalk;
		return;
	}

	[Token(Token = "0x6003ED1")]
	[Address(RVA = "0x5AA91F0", Offset = "0x5AA81F0", VA = "0x5AA91F0")]
	public void Dash(Vector3 direction)
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$Dash): 1 lines keep C-only constructs
		int iVar1;
		Human __this_00;
		float targetAngle;

		__this_00 = this._human;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		if ((((((__this_00.Grounded == false) && (iVar1 = __this_00._state, iVar1 != 3)) &&(__this_00.MountState == 0)) && ((iVar1 != 7 && (__this_00.CarryState != 1)))) &&((iVar1 != 0xf && ((iVar1 != 8 && (iVar1 != 10)))))) && (__this_00.Dead == false)) {
			targetAngle = this.GetTargetAngle(direction);
			__this_00.DashVertical(targetAngle, direction, (System_Nullable_Vector3__o)ZEXT416(0));
			return;
		}
		return;
	}

	[Token(Token = "0x6003ED2")]
	[Address(RVA = "0x5AA9280", Offset = "0x5AA8280", VA = "0x5AA9280")]
	public void Reel(int reelAxis)
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$Reel): clean
		Human pCVar1;
		float fVar2;

		if (reelAxis < 0) {
			pCVar1 = this._human;
			if (pCVar1 != null) {
				pCVar1.ReelInAxis = -1.0;
				pCVar1.ReelOutAxis = 0.0;
				return;
			}
	label_05ba92d0: ;
			throw new NullReferenceException();
		}
		pCVar1 = this._human;
		if (reelAxis == 0) {
			fVar2 = 0.0;
			if (pCVar1 == null) goto label_05ba92d0;
		}
		else {
			if (pCVar1 == null) goto label_05ba92d0;
			fVar2 = 1.0;
		}
		pCVar1.ReelOutAxis = fVar2;
		return;
	}

	[Token(Token = "0x6003ED3")]
	[Address(RVA = "0x5AA92E0", Offset = "0x5AA82E0", VA = "0x5AA92E0")]
	public void LaunchHookLeft(Vector3 aimPoint)
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$LaunchHookLeft): 12 lines keep C-only constructs
		float fVar1;
		float fVar2;
		Human __this_00;
		bool bVar4;
		Transform __this_01;
		float fVar5;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		Vector3 UVar6;
		System_Nullable_Vector3__Fields SStack_48;
		byte[] auStack_38 = new byte[24];
		float fStack_20;
		float fStack_1c;

		UVar6.z = aimPoint.z;
		fVar5 = aimPoint.x;
		fVar1 = aimPoint.y;
		if (g_data_07547493 == false) {
			auStack_38._8_4_ = in_XMM0_Dc;
			auStack_38._0_8_ = aimPoint._0_8_;
			auStack_38._12_4_ = in_XMM0_Dd;
			g_data_07547493 = true;
			fVar5 = (float)auStack_38._0_4_;
			fVar1 = (float)auStack_38._4_4_;
		}
		this._hookingLeft = true;
		SStack_48.hasValue = false;
		SStack_48._1_3_ = 0;
		SStack_48.value.x = 0.0;
		SStack_48.value.y = 0.0;
		SStack_48.value.z = 0.0;
		UVar6.y = fVar1;
		UVar6.x = fVar5;
		SStack_48 = new Nullable<Vector3>(UVar6);
		bVar4 = SStack_48.hasValue;
		fVar5 = SStack_48.value.z;
		fStack_20 = SStack_48.value.x;
		fStack_1c = SStack_48.value.y;
		if (bVar4 == false) {
			fVar1 = (Vector3.zeroVector).x;
			fVar2 = (Vector3.zeroVector).y;
			fVar5 = (Vector3.zeroVector).z;
	label_05ba9419: ;
			this.AimDirection.x = fVar1;
			this.AimDirection.y = fVar2;
			this.AimDirection.z = fVar5;
			this.UpdateHookInput();
			return;
		}
		auStack_38._8_8_ = 0;
		auStack_38._0_8_ = CONCAT44(fStack_1c, fStack_20);
		this.AimPoint.x = fStack_20;
		this.AimPoint.y = fStack_1c;
		this.AimPoint.z = fVar5;
		__this_00 = this._human;
		if (__this_00 != null) {
			__this_01 = __this_00.transform;
			if (__this_01 != null) {
				UVar6 = __this_01.position;
				fVar1 = (float)auStack_38._0_4_ - UVar6.x;
				fVar2 = (float)auStack_38._4_4_ - UVar6.y;
				fVar5 = fVar5 - UVar6.z;
				goto label_05ba9419;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003ED4")]
	[Address(RVA = "0x5AA97C0", Offset = "0x5AA87C0", VA = "0x5AA97C0")]
	public void ReleaseHookLeft()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$ReleaseHookLeft): clean
		this._hookingLeft = false;
		this.UpdateHookInput();
		return;
	}

	[Token(Token = "0x6003ED5")]
	[Address(RVA = "0x5AA97D0", Offset = "0x5AA87D0", VA = "0x5AA97D0")]
	public void LaunchHookRight(Vector3 aimPoint)
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$LaunchHookRight): 12 lines keep C-only constructs
		float fVar1;
		float fVar2;
		Human __this_00;
		bool bVar4;
		Transform __this_01;
		float fVar5;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		Vector3 UVar6;
		System_Nullable_Vector3__Fields local_48;
		byte[] local_38 = new byte[24];
		float local_20;
		float fStack_1c;

		UVar6.z = aimPoint.z;
		fVar5 = aimPoint.x;
		fVar1 = aimPoint.y;
		if (g_data_07547494 == false) {
			local_38._8_4_ = in_XMM0_Dc;
			local_38._0_8_ = aimPoint._0_8_;
			local_38._12_4_ = in_XMM0_Dd;
			g_data_07547494 = true;
			fVar5 = (float)local_38._0_4_;
			fVar1 = (float)local_38._4_4_;
		}
		this._hookingRight = true;
		local_48.hasValue = false;
		local_48._1_3_ = 0;
		local_48.value.x = 0.0;
		local_48.value.y = 0.0;
		local_48.value.z = 0.0;
		UVar6.y = fVar1;
		UVar6.x = fVar5;
		local_48 = new Nullable<Vector3>(UVar6);
		bVar4 = local_48.hasValue;
		fVar5 = local_48.value.z;
		local_20 = local_48.value.x;
		fStack_1c = local_48.value.y;
		if (bVar4 == false) {
			fVar1 = (Vector3.zeroVector).x;
			fVar2 = (Vector3.zeroVector).y;
			fVar5 = (Vector3.zeroVector).z;
	label_05ba9909: ;
			this.AimDirection.x = fVar1;
			this.AimDirection.y = fVar2;
			this.AimDirection.z = fVar5;
			this.UpdateHookInput();
			return;
		}
		local_38._8_8_ = 0;
		local_38._0_8_ = CONCAT44(fStack_1c, local_20);
		this.AimPoint.x = local_20;
		this.AimPoint.y = fStack_1c;
		this.AimPoint.z = fVar5;
		__this_00 = this._human;
		if (__this_00 != null) {
			__this_01 = __this_00.transform;
			if (__this_01 != null) {
				UVar6 = __this_01.position;
				fVar1 = (float)local_38._0_4_ - UVar6.x;
				fVar2 = (float)local_38._4_4_ - UVar6.y;
				fVar5 = fVar5 - UVar6.z;
				goto label_05ba9909;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003ED6")]
	[Address(RVA = "0x5AA9930", Offset = "0x5AA8930", VA = "0x5AA9930")]
	public void ReleaseHookRight()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$ReleaseHookRight): clean
		this._hookingRight = false;
		this.UpdateHookInput();
		return;
	}

	[Token(Token = "0x6003ED7")]
	[Address(RVA = "0x5AA86D0", Offset = "0x5AA76D0", VA = "0x5AA86D0")]
	public void ReleaseHookAll()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$ReleaseHookAll): clean
		this._hookingLeft = false;
		this._hookingRight = false;
		this.UpdateHookInput();
		return;
	}

	[Token(Token = "0x6003ED8")]
	[Address(RVA = "0x5AA9440", Offset = "0x5AA8440", VA = "0x5AA9440")]
	protected void UpdateHookInput()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$UpdateHookInput): 3 lines keep C-only constructs
		byte bVar1;
		HumanSetup __this_00;
		HookUseable pCVar2;
		HumanStats pCVar3;
		HookUseable pCVar4;
		BaseUseable pCVar5;
		BaseUseable pCVar6;
		String pSVar7;
		PhotonMessageInfo PVar8;
		bool bVar9;
		Human pCVar10;
		byte bVar11;
		sbyte cVar12;
		sbyte cVar13;
		PhotonMessageInfo local_40;

		pCVar10 = this._human;
		if ((pCVar10 == null) ||(__this_00 = pCVar10.Setup, __this_00 == null)) goto label_05ba97b5;
		bVar9 = __this_00.HasODM;
		if (!bVar9) {
			return;
		}
		pCVar10 = this._human;
		if (pCVar10 == null) goto label_05ba97b5;
		pCVar2 = pCVar10.HookLeft;
		if (pCVar2 == null) {
			return;
		}
		cVar13 = this._hookingLeft;
		cVar12 = this._hookingRight;
		bVar11 = 0;
		if ((pCVar10._state | 8U) != 0xf) {
			pCVar3 = pCVar10.Stats;
			if (pCVar3 == null) goto label_05ba97b5;
			if ((0.0 < pCVar3.CurrentGas) &&((pCVar10.MountState != 2 || (pCVar10.CanMountedAttack != false)))) {
				bVar11 = pCVar10.Dead ^ 1;
			}
		}
		bVar9 = pCVar2.HasHook();
		if (!bVar9) {
			pCVar10 = this._human;
			if ((pCVar10 == null) ||(pCVar2 = pCVar10.HookRight, pCVar2 == null)) goto label_05ba97b5;
			pCVar2.HasHook();
		}
		pCVar10 = this._human;
		if (pCVar10 == null) goto label_05ba97b5;
		if (pCVar10.CancelHookBothKey != false) {
			pCVar10.CancelHookBothKey = false;
		}
		if (pCVar10.CancelHookLeftKey != false) {
			pCVar10.CancelHookLeftKey = false;
			cVar13 = false;
		}
		if (pCVar10.CancelHookRightKey != false) {
			pCVar10.CancelHookRightKey = false;
			cVar12 = false;
		}
		pCVar2 = pCVar10.HookLeft;
		if (pCVar2 == null) goto label_05ba97b5;
		pCVar2.HookBoth = false;
		pCVar4 = pCVar10.HookRight;
		if (pCVar4 == null) goto label_05ba97b5;
		pCVar4.HookBoth = false;
		if (bVar11 == 0) {
	label_05ba9633: ;
			bVar9 = false;
		}
		else {
			if (Il2CppMethodInitialized_0754748e == false) {
				Il2CppMethodInitialized_0754748e = true;
				pCVar10 = this._human;
				if (pCVar10 == null) goto label_05ba97b5;
			}
			if ((pCVar10._state == 9) &&(pCVar5 = pCVar10.Special, pCVar5 != null)) {
				pCVar6 = pCVar5.klass;
				bVar1 = (typeof(Spin3Special)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar6._2).typeHierarchyDepth) &&((pCVar6._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Spin3Special))) goto label_05ba9633;
			}
			bVar9 = cVar13 != false;
		}
		pCVar2.SetInput(bVar9);
		pCVar10 = this._human;
		if (pCVar10 == null) goto label_05ba97b5;
		pCVar2 = pCVar10.HookRight;
		if (bVar11 == 0) {
	label_05ba96e1: ;
			bVar9 = false;
		}
		else {
			if (Il2CppMethodInitialized_0754748e == false) {
				Il2CppMethodInitialized_0754748e = true;
				pCVar10 = this._human;
				if (pCVar10 == null) goto label_05ba97b5;
			}
			if ((pCVar10._state == 9) &&(pCVar5 = pCVar10.Special, pCVar5 != null)) {
				pCVar6 = pCVar5.klass;
				bVar11 = (typeof(Spin3Special)._2).typeHierarchyDepth;
				if ((bVar11 <= (pCVar6._2).typeHierarchyDepth) &&((pCVar6._2).typeHierarchy[(ulong)bVar11 - 1] == typeof(Spin3Special))) goto label_05ba96e1;
			}
			bVar9 = cVar12 != false;
		}
		if (pCVar2 != null) {
			pCVar2.SetInput(bVar9);
			pCVar10 = this._human;
			if ((pCVar10 != null) &&(pCVar3 = pCVar10.Stats, pCVar3 != null)) {
				if ((pCVar3.CurrentGas <= 0.0) && (cVar12 != false || cVar13 != false)) {
					pSVar7 = HumanSounds.NoGas;
					local_40 = Util.CreateLocalPhotonInfo();
					PVar8.Sender = local_40.Sender;
					PVar8.timeInt = local_40.timeInt;
					PVar8._4_4_ = local_40._4_4_;
					PVar8.photonView = local_40.photonView;
					pCVar10.PlaySoundRPC(pSVar7, PVar8);
				}
				return;
			}
		}
	label_05ba97b5: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003ED9")]
	[Address(RVA = "0x5AA9940", Offset = "0x5AA8940", VA = "0x5AA9940")]
	public void Attack(bool attackOn)
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$Attack): 2 lines keep C-only constructs
		byte bVar1;
		HashSet<HumanState> __this_00;
		BaseUseable pCVar2;
		bool bVar3;
		Human pCVar4;
		bool bVar5;

		if ((this._moveToActive == false) ||(bVar5 = false, this._moveToIgnoreEnemies == false)) {
			bVar5 = this._idleTimeLeft <= 0.0;
		}
		pCVar4 = this._human;
		if (pCVar4 == null) goto label_05ba9aab;
		if (pCVar4.IsAttackableState == false) {
	label_05ba99e2: ;
			pCVar4._gunArmAim = false;
		}
		else {
			__this_00 = this._illegalWeaponStates;
			if (__this_00 == null) goto label_05ba9aab;
			bVar3 = __this_00.Contains(pCVar4._state);
			pCVar4 = this._human;
			if (bVar3) {
				if (pCVar4 == null) goto label_05ba9aab;
				goto label_05ba99e2;
			}
			if (pCVar4 == null) goto label_05ba9aab;
			pCVar4._gunArmAim = false;
			if (pCVar4.Dead == false) {
				pCVar2 = pCVar4.Weapon;
				if (pCVar2 != null) {
					pCVar2.SetInput((bool)(bVar5 & attackOn));
					pCVar4 = this._human;
					if (pCVar4 == null) goto label_05ba9aab;
					pCVar2 = pCVar4.Weapon;
					if (pCVar2 != null) {
						bVar1 = (typeof(AHSSWeapon)._2).typeHierarchyDepth;
						if (bVar1 <= (pCVar2.klass._2).typeHierarchyDepth) {
							bVar3 = (pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(AHSSWeapon);
							if ((bVar3) && ((bool)(bVar5 & attackOn) == false)) {
								bVar3 = pCVar2.IsActive;
							}
							goto label_05ba9a85;
						}
					}
					bVar3 = false;
	label_05ba9a85: ;
					pCVar4._gunArmAim = bVar3;
					return;
				}
				goto label_05ba9aab;
			}
		}
		pCVar2 = pCVar4.Weapon;
		if (pCVar2 != null) {
			pCVar2.SetInput(false);
			return;
		}
	label_05ba9aab: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003EDA")]
	[Address(RVA = "0x5AA9AB0", Offset = "0x5AA8AB0", VA = "0x5AA9AB0")]
	public void ActivateSpecial(bool activate)
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$ActivateSpecial): 3 lines keep C-only constructs
		bool bVar1;
		byte bVar2;
		byte bVar3;
		uint uVar4;
		int iVar5;
		Human pCVar6;
		BaseUseable pCVar7;
		BaseUseable pCVar8;
		Il2CppClass* ppIVar9;
		byte bVar10;
		byte bVar11;

		pCVar6 = this._human;
		if (pCVar6 == null) {
			throw new NullReferenceException();
		}
		pCVar7 = pCVar6.Special;
		if (pCVar7 == null) {
			return;
		}
		bVar1 = pCVar6.IsAttackableState;
		bVar10 = 0;
		if (bVar1 != false) {
			pCVar8 = pCVar7.klass;
			bVar10 = (pCVar8._2).typeHierarchyDepth;
			bVar2 = (typeof(EscapeSpecial)._2).typeHierarchyDepth;
			if (((((bVar2 <= bVar10) &&((pCVar8._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(EscapeSpecial))) || ((bVar2 = (typeof(ShifterTransformSpecial)._2).typeHierarchyDepth, bVar2 <= bVar10 &&((pCVar8._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(ShifterTransformSpecial))))) ||(bVar10 = 0, pCVar6._state != 7)) &&((bVar10 = 0, pCVar6.CarryState != 1 &&((uVar4 = pCVar6._state, 9 < uVar4 || (bVar10 = 0, (0x302U >> (uVar4 & 0x1f) & 1) == 0)))))) {
				bVar10 = pCVar6.Dead ^ 1;
			}
		}
		pCVar8 = pCVar7.klass;
		bVar2 = (pCVar8._2).typeHierarchyDepth;
		bVar11 = (typeof(BaseHoldAttackSpecial)._2).typeHierarchyDepth;
		if (((bVar11 <= bVar2) &&(ppIVar9 = (pCVar8._2).typeHierarchy, ppIVar9[(ulong)bVar11 - 1] == typeof(BaseHoldAttackSpecial))) &&(bVar1 != false)) {
			iVar5 = pCVar6._state;
			bVar11 = 0;
			if (((iVar5 != 7) && (iVar5 != 8)) &&((iVar5 != 1 ||((bVar3 = (typeof(StockSpecial)._2).typeHierarchyDepth, bVar3 <= bVar2 &&(ppIVar9[(ulong)bVar3 - 1] == typeof(StockSpecial))))))) {
				if (pCVar6.CarryState != 1) {
					bVar11 = pCVar6.Dead ^ 1;
				}
				goto label_05ba9c31;
			}
		}
		bVar11 = 0;
	label_05ba9c31: ;
		pCVar7.SetInput((bVar10 != 0 || bVar11 != 0) && activate);
		return;
	}

	[Token(Token = "0x6003EDB")]
	[Address(RVA = "0x5AA9C80", Offset = "0x5AA8C80", VA = "0x5AA9C80")]
	protected float GetChaseAngleGivenDirection(Vector3 direction, bool useMoveAngle)
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$GetChaseAngleGivenDirection): clean
		uint uVar1;
		uint uVar2;
		Human pCVar4;
		float fVar5;
		float fVar6;
		float fVar7;

		uVar1 = (Vector3.zeroVector).x;
		uVar2 = (Vector3.zeroVector).y;
		fVar7 = direction.y - (float)uVar2;
		fVar5 = direction.z - (Vector3.zeroVector).z;
		fVar6 = direction.x - (float)uVar1;
		if (9.9999994e-11 <= fVar7 * fVar7 + fVar6 * fVar6 + fVar5 * fVar5) {
			fVar5 = this.GetTargetAngle(direction);
		}
		else {
			pCVar4 = this._human;
			if (pCVar4 == null) {
				throw new NullReferenceException();
			}
			fVar5 = pCVar4.TargetAngle;
		}
		if (useMoveAngle) {
			fVar5 = fVar5 + this._moveAngle;
		}
		fVar5 = (float)(~-(uint)(360.0 < fVar5) & (uint)fVar5 | (uint)(fVar5 + -360.0) & -(uint)(360.0 < fVar5));
		return (float)(~-(uint)(fVar5 < 0.0) & (uint)fVar5 | (uint)(fVar5 + 360.0) & -(uint)(fVar5 < 0.0));
	}

	[Token(Token = "0x6003EDC")]
	[Address(RVA = "0x5AA9D80", Offset = "0x5AA8D80", VA = "0x5AA9D80")]
	public float GetChaseAngle(Vector3 position, bool useMoveAngle)
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$GetChaseAngle): 43 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		BaseCharacter pCVar3;
		BaseComponentCache pUVar4;
		Transform __this_00;
		UnityEngine_Vector3_StaticFields pUVar5;
		Human pCVar6;
		float fVar7;
		ulong in_XMM0_Qb;
		ulong extraout_XMM0_Qb;
		byte[] auVar8 = new byte[16];
		byte[] auVar9 = new byte[16];
		byte[] extraout_var = new byte[12];
		byte[] auVar10 = new byte[16];
		uint uVar13;
		byte[] auVar12 = new byte[16];
		byte[] auVar11 = new byte[16];
		float fVar14;
		uint in_XMM1_Db;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		float fVar15;
		ulong uVar16;
		byte[] auVar17 = new byte[16];
		float fVar18;
		Vector3 UVar19;
		float local_58;
		float fStack_54;
		float fStack_50;
		float fStack_4c;

		pCVar3 = this._character;
		if (((pCVar3 == null) ||(pUVar4 = pCVar3.Cache, pUVar4 == null)) ||(__this_00 = pUVar4.Transform, __this_00 == null)) goto label_05baa01a;
		UVar19 = __this_00.position;
		local_58 = position.x;
		fStack_54 = position.y;
		fStack_50 = (float)in_XMM0_Qb;
		fStack_4c = (float)((ulong)in_XMM0_Qb >> 0x20);
		auVar17._0_4_ = local_58 - UVar19.x;
		auVar17._4_4_ = fStack_54 - UVar19.y;
		auVar17._8_4_ = fStack_50 - (float)extraout_XMM0_Qb;
		auVar17._12_4_ = fStack_4c - (float)((ulong)extraout_XMM0_Qb >> 0x20);
		fVar14 = position.z - UVar19.z;
		auVar8._4_4_ = in_XMM1_Db;
		auVar8._0_4_ = fVar14;
		auVar8._8_4_ = in_XMM1_Dc;
		auVar8._12_4_ = in_XMM1_Dd;
		auVar9._4_12_ = auVar8._4_12_;
		fVar7 = fVar14 * fVar14 + auVar17._4_4_ * auVar17._4_4_ + auVar17._0_4_ * auVar17._0_4_;
		if (fVar7 < 0.0) {
			auVar10._0_4_ = sqrtf(fVar7);
			auVar10._4_12_ = extraout_var;
			uVar16 = auVar10._0_8_;
			if (auVar10._0_4_ <= 1e-05) goto label_05ba9e5a;
	label_05ba9ea1: ;
			auVar11._0_4_ = (float)uVar16;
			fVar14 = fVar14 / auVar11._0_4_;
			uVar13 = (undefined4)((ulong)uVar16 >> 0x20);
			auVar12._8_4_ = uVar13;
			auVar12._0_8_ = uVar16;
			auVar12._12_4_ = uVar13;
			auVar11._8_8_ = auVar12._8_8_;
			auVar11._4_4_ = auVar11._0_4_;
			auVar17 = divps(auVar17, auVar11);
			uVar16 = auVar17._0_8_;
		}
		else {
			auVar9._0_4_ = SQRT(fVar7);
			uVar16 = auVar9._0_8_;
			if (1e-05 < auVar9._0_4_) goto label_05ba9ea1;
	label_05ba9e5a: ;
			pUVar5 = typeof(Vector3).static_fields;
			fVar14 = (pUVar5.zeroVector).z;
			uVar16._0_4_ = (pUVar5.zeroVector).x;
			uVar16._4_4_ = (pUVar5.zeroVector).y;
		}
		pUVar5 = typeof(Vector3).static_fields;
		uVar1 = (pUVar5.zeroVector).x;
		uVar2 = (pUVar5.zeroVector).y;
		fVar18 = (float)((ulong)uVar16 >> 0x20) - (float)uVar2;
		fVar7 = fVar14 - (pUVar5.zeroVector).z;
		fVar15 = (float)uVar16 - (float)uVar1;
		if (9.9999994e-11 <= fVar18 * fVar18 + fVar15 * fVar15 + fVar7 * fVar7) {
			UVar19.z = fVar14;
			UVar19.x = (float)(int)uVar16;
			UVar19.y = (float)(int)((ulong)uVar16 >> 0x20);
			fVar14 = this.GetTargetAngle(UVar19);
		}
		else {
			pCVar6 = this._human;
			if (pCVar6 == null) {
	label_05baa01a: ;
				throw new NullReferenceException();
			}
			fVar14 = pCVar6.TargetAngle;
		}
		if (useMoveAngle) {
			fVar14 = fVar14 + this._moveAngle;
		}
		fVar14 = (float)(~-(uint)(360.0 < fVar14) & (uint)fVar14 | (uint)(fVar14 + -360.0) & -(uint)(360.0 < fVar14) );
		return (float)(~-(uint)(fVar14 < 0.0) & (uint)fVar14 | (uint)(fVar14 + 360.0) & -(uint)(fVar14 < 0.0));
	}

	[Token(Token = "0x6003EDD")]
	[Address(RVA = "0x5AAA020", Offset = "0x5AA9020", VA = "0x5AAA020")]
	public void MoveToPosition()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$MoveToPosition): 1 lines keep C-only constructs
		Vector3 pUVar1;
		uint uVar2;
		uint uVar3;
		Human pCVar4;
		float fVar6;
		float fVar7;
		float fVar8;
		Vector3 direction;

		pCVar4 = this._human;
		if (pCVar4 != null) {
			pCVar4.HasDirection = true;
			if ((((pCVar4.IsWalk == false) || (pCVar4.MountState != 0)) ||(pCVar4._state != 0)) || (pCVar4.Grounded == false)) {
				fVar6 = 1.0;
			}
			else {
				fVar6 = 0.25;
			}
			pCVar4.TargetMagnitude = fVar6;
			fVar6 = Random.Range(-5.0, 5.0);
			this._moveAngle = fVar6;
			pUVar1 = &this._targetPosition;
			if (this._usePathfinding == false) {
				fVar6 = this.GetChaseAngle((Vector3)pUVar1.fields, true);
			}
			else {
				direction = this.GetAgentNavDirection((Vector3)pUVar1.fields);
				uVar2 = (Vector3.zeroVector).x;
				uVar3 = (Vector3.zeroVector).y;
				fVar8 = direction.y - (float)uVar3;
				fVar6 = direction.z - (Vector3.zeroVector).z;
				fVar7 = direction.x - (float)uVar2;
				if (9.9999994e-11 <= fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) {
					fVar6 = this.GetTargetAngle(direction);
				}
				else {
					pCVar4 = this._human;
					if (pCVar4 == null) goto label_05baa1da;
					fVar6 = pCVar4.TargetAngle;
				}
				fVar6 = fVar6 + this._moveAngle;
				fVar6 = (float)(~-(uint)(360.0 < fVar6) & (uint)fVar6 | (uint)(fVar6 + -360.0) & -(uint)(360.0 < fVar6)) ;
				fVar6 = (float)(~-(uint)(fVar6 < 0.0) & (uint)fVar6 | (uint)(fVar6 + 360.0) & -(uint)(fVar6 < 0.0));
			}
			this._movementHeading = fVar6;
			pCVar4 = this._human;
			if (pCVar4 != null) {
				pCVar4.TargetAngle = fVar6;
				return;
			}
		}
	label_05baa1da: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003EDE")]
	[Address(RVA = "0x5AAA1E0", Offset = "0x5AA91E0", VA = "0x5AAA1E0")]
	public void SwitchAIState(HumanAIState aiState)
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$SwitchAIState): 7 lines keep C-only constructs
		HumanAIState* targetAddress;
		byte bVar1;
		Human pCVar2;
		System_Nullable_Vector3__o pSVar3;
		HumanAIState pCVar4;

		if (aiState != null) {
			this._idleTimeLeft = 0.0;
			bVar1 = (typeof(MoveTo)._2).typeHierarchyDepth;
			if ((bVar1 <= (aiState.klass._2).typeHierarchyDepth) &&((aiState.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(MoveTo))) goto label_05baa260;
		}
		this._moveToActive = false;
		this._moveToTarget = null;
	label_05baa260: ;
		pCVar4 = this.AIState;
		if (pCVar4 != aiState) {
			if (0.0 < this._recoveryTimeLeft) {
				pCVar2 = this._human;
				if (pCVar2 == null) {
					throw new NullReferenceException();
				}
				pCVar2.TargetAngle = this._movementHeading;
			}
			targetAddress = &this.AIState;
			this._lastMovementPosition.hasValue = false;
			*(undefined3)&this._lastMovementPosition.field_0x1 = 0;
			this._lastMovementPosition.value.x = 0.0;
			pSVar3 = &this._lastMovementPosition;
			pSVar3.value.y = 0.0;
			pSVar3.value.z = 0.0;
			this._lowMovementSpeedTime = 0.0;
			this._recoveryTimeLeft = 0.0;
			if (aiState != null) {
				aiState.OnStateEntry();
				pCVar4 = *targetAddress;
			}
			*targetAddress = aiState;
			if (pCVar4 != null) {
				pCVar4.OnStateExit();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6003EDF")]
	[Address(RVA = "0x5AA7730", Offset = "0x5AA6730", VA = "0x5AA7730")]
	public void SetAIState(string name, HumanAIState aiState)
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$SetAIState): clean
		Dictionary<object, object> __this_00;

		__this_00 = (Dictionary<object, object>)this.AIStates;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.set_Item((object)name, (object)aiState);
		return;
	}

	[Token(Token = "0x6003EE0")]
	[Address(RVA = "0x5AA76D0", Offset = "0x5AA66D0", VA = "0x5AA76D0")]
	public bool HasAIState(string name)
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$HasAIState): clean
		Dictionary<object, object> __this_00;
		bool bVar1;

		__this_00 = (Dictionary<object, object>)this.AIStates;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar1 = __this_00.ContainsKey((object)name);
		return bVar1;
	}

	[Token(Token = "0x6003EE1")]
	[Address(RVA = "0x5AAA320", Offset = "0x5AA9320", VA = "0x5AAA320")]
	public HumanAIState GetAIState(string name)
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$GetAIState): clean
		Dictionary<object, object> __this_00;
		HumanAIState pCVar1;

		__this_00 = (Dictionary<object, object>)this.AIStates;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __this_00.get_Item((object)name);
		return pCVar1;
	}

	[Token(Token = "0x6003EE2")]
	[Address(RVA = "0x5AA7340", Offset = "0x5AA6340", VA = "0x5AA7340")]
	private void AssignHumanTarget(ITargetable target)
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$AssignHumanTarget): 6 lines keep C-only constructs
		float fVar1;
		System_Nullable_Vector3__o pSVar5;
		float fVar6;
		Vector3 value;
		System_Nullable_Vector3__Fields local_38;
		System_Nullable_Vector3__Fields local_28;

		this.AssignTarget(target, 0.0);
		this._idleTimeLeft = 0.0;
		fVar6 = (Vector3.zeroVector).y;
		fVar1 = (Vector3.zeroVector).z;
		this.TargetVelocity.x = (Vector3.zeroVector).x;
		this.TargetVelocity.y = fVar6;
		this.TargetVelocity.z = fVar1;
		if (target == null) {
			local_28.hasValue = false;
			local_28._1_3_ = 0;
			local_28.value.x = 0.0;
			local_28.value.y = 0.0;
			local_28.value.z = 0.0;
		}
		else {
			value = target.GetPosition();
			local_38.hasValue = false;
			local_38._1_3_ = 0;
			local_38.value.x = 0.0;
			local_38.value.y = 0.0;
			local_38.value.z = 0.0;
			local_38 = new Nullable<Vector3>(value);
			local_28.hasValue = local_38.hasValue;
			local_28._1_3_ = local_38._1_3_;
			local_28.value.x = local_38.value.x;
			local_28.value.y = local_38.value.y;
			local_28.value.z = local_38.value.z;
			if ((target == null) || (this == null)) {
				throw new NullReferenceException();
			}
		}
		this._targetLastPosition.hasValue = local_28.hasValue;
		*(undefined3)&this._targetLastPosition.field_0x1 = local_28._1_3_;
		this._targetLastPosition.value.x = local_28.value.x;
		pSVar5 = &this._targetLastPosition;
		pSVar5.value.y = local_28.value.y;
		pSVar5.value.z = local_28.value.z;
		this._trackedTarget = target;
		return;
	}

	[Token(Token = "0x6003EE3")]
	[Address(RVA = "0x5AAA370", Offset = "0x5AA9370", VA = "0x5AAA370")]
	internal void BeginMove()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$BeginMove): 4 lines keep C-only constructs
		float fVar1;
		byte bVar2;
		Human pCVar3;
		Dictionary<object, object> pSVar4;
		System_Nullable_Vector3__o pSVar5;
		float fVar6;
		String pSVar7;
		bool bVar8;
		MoveTo __this_00;
		HumanAIState value;
		MethodInfo method_00;
		ITargetable target;

		if (0.0 < this._recoveryTimeLeft) {
			pCVar3 = this._human;
			if (pCVar3 == null) goto label_05baa587;
			pCVar3.TargetAngle = this._movementHeading;
		}
		this._lastMovementPosition.hasValue = false;
		*(undefined3)&this._lastMovementPosition.field_0x1 = 0;
		this._lastMovementPosition.value.x = 0.0;
		pSVar5 = &this._lastMovementPosition;
		pSVar5.value.y = 0.0;
		pSVar5.value.z = 0.0;
		this._lowMovementSpeedTime = 0.0;
		this._recoveryTimeLeft = 0.0;
		if (this._moveToIgnoreEnemies == false) {
			target = this._moveToTarget;
		}
		else {
			target = null;
		}
		this.AssignHumanTarget(target);
		fVar6 = this._moveToPosition.y;
		fVar1 = this._moveToPosition.z;
		this._targetPosition.x = this._moveToPosition.x;
		this._targetPosition.y = fVar6;
		this._targetPosition.z = fVar1;
		pSVar7 = "MoveTo";
		pSVar4 = (Dictionary<object, object>)this.AIStates;
		if (pSVar4 == null) goto label_05baa587;
		bVar8 = pSVar4.ContainsKey((object)pSVar7);
		if (!bVar8) {
			__this_00 = new MoveTo();
			if (__this_00 == null) goto label_05baa587;
			value = __this_00.Init(this._human);
			pSVar7 = "MoveTo";
			pSVar4 = (Dictionary<object, object>)this.AIStates;
			if (pSVar4 == null) goto label_05baa587;
			pSVar4.set_Item((object)pSVar7, (object)value);
		}
		pSVar4 = (Dictionary<object, object>)this.AIStates;
		if (pSVar4 != null) {
			method_00 = (MethodInfo)pSVar4.get_Item((Il2CppObject *)"MoveTo");
			if (method_00 != null) {
				bVar2 = (typeof(MoveTo)._2).typeHierarchyDepth;
				if (((((HumanAIState)method_00.methodPointer)._2).typeHierarchyDepth < bVar2) ||((((HumanAIState)method_00.methodPointer)._2).typeHierarchy [(long)&((MethodInfo)(ulong)bVar2)[-1].field_0x57] !=typeof(MoveTo))) {
					throw new InvalidCastException();
				}
				*(float)&method_00.klass = this._moveToRange;
				this.SwitchAIState((HumanAIState)method_00);
				if (this._moveToIgnoreEnemies == false) {
					return;
				}
				this.StopInput();
				return;
			}
		}
	label_05baa587: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003EE4")]
	[Address(RVA = "0x5AAA5A0", Offset = "0x5AA95A0", VA = "0x5AAA5A0")]
	public void Idle()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$Idle): 7 lines keep C-only constructs
		Human pCVar1;
		HumanAIState pCVar2;
		System_Nullable_Vector3__o pSVar3;
		HumanAIState* targetAddress;

		if (0.0 < this._recoveryTimeLeft) {
			pCVar1 = this._human;
			if (pCVar1 == null) goto label_05baa6da;
			pCVar1.TargetAngle = this._movementHeading;
		}
		this._lastMovementPosition.hasValue = false;
		*(undefined3)&this._lastMovementPosition.field_0x1 = 0;
		this._lastMovementPosition.value.x = 0.0;
		pSVar3 = &this._lastMovementPosition;
		pSVar3.value.y = 0.0;
		pSVar3.value.z = 0.0;
		this._lowMovementSpeedTime = 0.0;
		this._recoveryTimeLeft = 0.0;
		this.ClearTarget();
		pCVar1 = this._human;
		if (pCVar1 == null) {
	label_05baa6da: ;
			throw new NullReferenceException();
		}
		pCVar1.HasDirection = false;
		pCVar1.TargetMagnitude = 0.0;
		this._moveToActive = false;
		this._moveToTarget = null;
		pCVar2 = this.AIState;
		if (pCVar2 == null) {
			return;
		}
		if (0.0 < this._recoveryTimeLeft) {
			pCVar1 = this._human;
			if (pCVar1 == null) goto label_05baa6da;
			pCVar1.TargetAngle = this._movementHeading;
		}
		targetAddress = &this.AIState;
		this._lastMovementPosition.hasValue = false;
		*(undefined3)&this._lastMovementPosition.field_0x1 = 0;
		this._lastMovementPosition.value.x = 0.0;
		pSVar3 = &this._lastMovementPosition;
		pSVar3.value.y = 0.0;
		pSVar3.value.z = 0.0;
		this._lowMovementSpeedTime = 0.0;
		this._recoveryTimeLeft = 0.0;
		*targetAddress = null;
		pCVar2.OnStateExit();
		return;
	}

	[Token(Token = "0x6003EE5")]
	[Address(RVA = "0x5AAA6E0", Offset = "0x5AA96E0", VA = "0x5AAA6E0")]
	internal void CompleteMove()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$CompleteMove): clean
		HumanAICallback pCVar1;
		Action pSVar2;

		pCVar1 = this.Callbacks;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar2 = pCVar1.MoveToCallback;
		if (pSVar2 != null) {
			method = (MethodInfo)pSVar2.method;
			(*(code)pSVar2.invoke_impl)(pSVar2.method_code);
		}
		this.Idle();
		return;
	}

	[Token(Token = "0x6003EE6")]
	[Address(RVA = "0x5AAA720", Offset = "0x5AA9720", VA = "0x5AAA720")]
	public HumanAIController()
	{
		// Lifted from source/cpp/Controllers/HumanAIController.c (Controllers.HumanAIController$$.ctor): 2 lines keep C-only constructs
		HumanAICallback __this_00;
		Dictionary<string, HumanAIState> __this_01;
		HashSet<HumanState> __this_02;

		if (Il2CppMethodInitialized_0754749e == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_HumanState_ctor) ;
			Il2CppMethodInitialized_0754749e = true;
		}
		__this_00 = new HumanAICallback();
		this.Callbacks = __this_00;
		__this_01 = new Dictionary<string, HumanAIState>();
		this.AIStates = __this_01;
		__this_02 = il2cpp_codegen_object_new(typeof(HashSet<HumanState>)) ;
		__this_02 = new HashSet<Int32Enum>();
		if (__this_02 == null) {
			throw new NullReferenceException();
		}
		__this_02.Add(7);
		__this_02.Add(10);
		__this_02.Add(8);
		__this_02.Add(4);
		__this_02.Add(9);
		__this_02.Add(0xf);
		this._illegalWeaponStates = __this_02;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Controllers/HumanAIController.c.

	// Controllers.HumanAIController$$.cctor: clean
	static HumanAIController()
	{
		uint uVar1;
		LayerMask UVar3;
		Int32[] layers;

		layers = (Int32[])new int[5];
		if (layers == null) {
			throw new NullReferenceException();
		}
		uVar1 = (uint)layers.Length;
		if (uVar1 != 0) {
			layers[0] = PhysicsLayer.TitanMovebox;
			if ((((uVar1 != 1) && (layers[1] = PhysicsLayer.TitanPushbox, 2 < uVar1)) &&(layers[2] = PhysicsLayer.MapObjectEntities, uVar1 != 3)) &&(layers[3] = PhysicsLayer.MapObjectProjectiles, 4 < uVar1)) {
				layers[4] = PhysicsLayer.MapObjectAll;
				UVar3 = PhysicsLayer.GetMask(layers);
				(HumanAIController.HookMask).m_Mask =(int32_t)UVar3.m_Mask;
				return;
			}
		}
		throw new IndexOutOfRangeException();
	}
}
