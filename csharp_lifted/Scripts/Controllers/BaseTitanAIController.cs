// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.BaseTitanAIController
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Controllers/BaseTitanAIController.c
// Prior real C# source (older reference): Assets/Scripts/Controllers/BaseTitanAIController.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;
using SimpleJSONFixed;
using UnityEngine;

namespace Controllers;

[Token(Token = "0x200067A")]
internal class BaseTitanAIController : BaseAIController
{
	[Token(Token = "0x4001CCC")]
	[FieldOffset(Offset = "0x90")]
	protected BaseTitan _titan;

	[Token(Token = "0x4001CCD")]
	[FieldOffset(Offset = "0x98")]
	public TitanAIState AIState;

	[Token(Token = "0x4001CCE")]
	[FieldOffset(Offset = "0x9C")]
	public bool SmartAttack;

	[Token(Token = "0x4001CCF")]
	[FieldOffset(Offset = "0xA0")]
	private readonly List<string> _validAttacks;

	[Token(Token = "0x4001CD0")]
	[FieldOffset(Offset = "0xA8")]
	private readonly Dictionary<string, int> _attackGroupCounts;

	[Token(Token = "0x4001CD1")]
	[FieldOffset(Offset = "0xB0")]
	public float CloseAttackRange;

	[Token(Token = "0x4001CD2")]
	[FieldOffset(Offset = "0xB4")]
	public float FarAttackMinRange;

	[Token(Token = "0x4001CD3")]
	[FieldOffset(Offset = "0xB8")]
	public float FarAttackMaxRange;

	[Token(Token = "0x4001CD4")]
	[FieldOffset(Offset = "0xBC")]
	public float FarAttackCooldown;

	[Token(Token = "0x4001CD5")]
	[FieldOffset(Offset = "0xC0")]
	public float AttackWait;

	[Token(Token = "0x4001CD6")]
	[FieldOffset(Offset = "0xC4")]
	public float ChaseAngleTimeMin;

	[Token(Token = "0x4001CD7")]
	[FieldOffset(Offset = "0xC8")]
	public float ChaseAngleTimeMax;

	[Token(Token = "0x4001CD8")]
	[FieldOffset(Offset = "0xCC")]
	public float ChaseAngleMinRange;

	[Token(Token = "0x4001CD9")]
	[FieldOffset(Offset = "0xD0")]
	public bool IsRun;

	[Token(Token = "0x4001CDA")]
	[FieldOffset(Offset = "0xD1")]
	public bool IsTurn;

	[Token(Token = "0x4001CDB")]
	[FieldOffset(Offset = "0xD4")]
	public float TurnAngle;

	[Token(Token = "0x4001CDC")]
	[FieldOffset(Offset = "0xD8")]
	protected float _moveAngle;

	[Token(Token = "0x4001CDD")]
	[FieldOffset(Offset = "0xDC")]
	protected float _moveToTimeout;

	[Token(Token = "0x4001CDE")]
	[FieldOffset(Offset = "0xE0")]
	protected bool _moveToExact;

	[Token(Token = "0x4001CDF")]
	[FieldOffset(Offset = "0xE8")]
	protected Action _moveToCallback;

	[Token(Token = "0x4001CE0")]
	[FieldOffset(Offset = "0xF0")]
	public Dictionary<string, float> AttackChances;

	[Token(Token = "0x4001CE1")]
	[FieldOffset(Offset = "0xF8")]
	public Dictionary<string, string> AttackGroups;

	[Token(Token = "0x4001CE2")]
	[FieldOffset(Offset = "0x100")]
	public Dictionary<string, TitanAttackInfo> AttackInfos;

	[Token(Token = "0x4001CE3")]
	[FieldOffset(Offset = "0x108")]
	protected float _stateTimeLeft;

	[Token(Token = "0x4001CE4")]
	[FieldOffset(Offset = "0x10C")]
	protected float _rangedCooldownLeft;

	[Token(Token = "0x4001CE5")]
	[FieldOffset(Offset = "0x110")]
	protected float _attackRange;

	[Token(Token = "0x4001CE6")]
	[FieldOffset(Offset = "0x118")]
	protected string _attack;

	[Token(Token = "0x4001CE7")]
	[FieldOffset(Offset = "0x120")]
	protected float _attackCooldownLeft;

	[Token(Token = "0x4001CE8")]
	[FieldOffset(Offset = "0x124")]
	protected float _waitAttackTimeLeft;

	[Token(Token = "0x4001CE9")]
	[FieldOffset(Offset = "0x128")]
	protected float _enemyDistance;

	[Token(Token = "0x4001CEA")]
	private const float MovementRecoveryDelay = 0.5f;

	[Token(Token = "0x4001CEB")]
	[FieldOffset(Offset = "0x12C")]
	private float _lowMovementSpeedTime;

	[Token(Token = "0x4001CEC")]
	[FieldOffset(Offset = "0x130")]
	private float _recoveryTimeLeft;

	[Token(Token = "0x4001CED")]
	[FieldOffset(Offset = "0x134")]
	private float _recoveryTurnAngle;

	[Token(Token = "0x4001CEE")]
	[FieldOffset(Offset = "0x138")]
	private float _recoveryHeading;

	[Token(Token = "0x4001CEF")]
	private const float ObstacleCheckInterval = 0.2f;

	[Token(Token = "0x4001CF0")]
	private const float ObstacleLookAheadTime = 0.6f;

	[Token(Token = "0x4001CF1")]
	[FieldOffset(Offset = "0x0")]
	private static readonly float[] AvoidProbeAngles;

	[Token(Token = "0x4001CF2")]
	private const float WalkableNormalY = 0.6f;

	[Token(Token = "0x4001CF3")]
	[FieldOffset(Offset = "0x13C")]
	private float _obstacleCheckTimeLeft;

	[Token(Token = "0x4001CF4")]
	[FieldOffset(Offset = "0x140")]
	private float _avoidAngle;

	[Token(Token = "0x4001CF5")]
	[FieldOffset(Offset = "0x144")]
	private float _avoidHeading;

	[Token(Token = "0x4001CF6")]
	[FieldOffset(Offset = "0x148")]
	private float _avoidedTargetAngle;

	[Token(Token = "0x4001CF7")]
	[FieldOffset(Offset = "0x150")]
	private CapsuleCollider _mainCollider;

	[Token(Token = "0x4001CF8")]
	[FieldOffset(Offset = "0x158")]
	private LayerMask _losLayer;

	[Token(Token = "0x17000AE6")]
	protected virtual bool _scriptedAI
	{
		[Token(Token = "0x6003E55")]
		[Address(RVA = "0x5A9EAA0", Offset = "0x5A9DAA0", VA = "0x5A9EAA0", Slot = "9")]
		get
		{
			// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$get__scriptedAI): clean
			return false;
		}
	}

	[Token(Token = "0x17000AE7")]
	protected virtual bool _stationaryAI
	{
		[Token(Token = "0x6003E56")]
		[Address(RVA = "0x5A9EAB0", Offset = "0x5A9DAB0", VA = "0x5A9EAB0", Slot = "10")]
		get
		{
			// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$get__stationaryAI): clean
			return false;
		}
	}

	[Token(Token = "0x6003E57")]
	[Address(RVA = "0x5A9EAC0", Offset = "0x5A9DAC0", VA = "0x5A9EAC0", Slot = "4")]
	protected override void Awake()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$Awake): 1 lines keep C-only constructs
		InGameSet pSVar1;
		InGameTitanSettings pSVar2;
		BoolSetting pSVar3;
		bool bVar4;
		BaseCharacter pCVar5;
		BaseTitan pCVar6;
		CapsuleCollider pUVar7;

		if (Il2CppMethodInitialized_07547463 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider) ;
			Il2CppMethodInitialized_07547463 = true;
		}
		pCVar5 = this.GetComponent<BaseCharacter>();
		this._character = pCVar5;
		pCVar6 = this.GetComponent<BaseTitan>();
		this._titan = pCVar6;
		this._automaticTargeting = true;
		pCVar6 = this._titan;
		if (pCVar6 != null) {
			pUVar7 = pCVar6.GetComponent<CapsuleCollider>();
			this._mainCollider = pUVar7;
			pSVar1 = SettingsManager.InGameCurrent;
			if (((pSVar1 != null) &&(pSVar2 = pSVar1.Titan, pSVar2 != null)) &&(pSVar3 = pSVar2.TitanSmartMovement, pSVar3 != null)) {
				if (pSVar3._value != false) {
					bVar4 = this.get__stationaryAI();
					if (!bVar4) {
						bVar4 = MapLoader.HasNavMesh;
						this._usePathfinding = bVar4;
						return;
					}
				}
				this._usePathfinding = false;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E58")]
	[Address(RVA = "0x5A9EC30", Offset = "0x5A9DC30", VA = "0x5A9EC30", Slot = "7")]
	protected override float GetAgentSpeed()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$GetAgentSpeed): clean
		BaseTitan __this_00;
		float fVar1;

		__this_00 = this._titan;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return fVar1;
	}

	[Token(Token = "0x6003E59")]
	[Address(RVA = "0x5A9EC50", Offset = "0x5A9DC50", VA = "0x5A9EC50", Slot = "5")]
	protected override void Start()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$Start): clean
		BaseTitan pCVar1;
		Object x;
		bool bVar2;
		float fVar3;

		this._lowMovementSpeedTime = 0.0;
		this._recoveryTimeLeft = 0.0;
		this._avoidAngle = 0.0;
		this.AIState = 0;
		pCVar1 = this._titan;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		pCVar1.HasDirection = false;
		pCVar1.IsSit = false;
		fVar3 = Random.Range(4.0, 8.0);
		this._stateTimeLeft = fVar3;
		if (this._usePathfinding != false) {
			x = (Object)this._agent;
			bVar2 = (x == null);
			if (bVar2) {
				this.CreateAgent(this._mainCollider, 10.0, 2);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6003E5A")]
	[Address(RVA = "0x5A9CB20", Offset = "0x5A9BB20", VA = "0x5A9CB20")]
	internal void BeginMove()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$BeginMove): clean
		BaseTitan pCVar1;
		float fVar2;

		this._lowMovementSpeedTime = 0.0;
		this._recoveryTimeLeft = 0.0;
		this._avoidAngle = 0.0;
		this._moveToExact = false;
		this._moveToCallback = null;
		if (this.AIState == 7) {
			this._lowMovementSpeedTime = 0.0;
			this._recoveryTimeLeft = 0.0;
			this._avoidAngle = 0.0;
			this.AIState = 0;
			pCVar1 = this._titan;
			if (pCVar1 == null) goto label_05b9cc1b;
			pCVar1.HasDirection = false;
			pCVar1.IsSit = false;
			fVar2 = Random.Range(4.0, 8.0);
			this._stateTimeLeft = fVar2;
		}
		if (this._moveToIgnoreEnemies != false) {
			this._lowMovementSpeedTime = 0.0;
			this._recoveryTimeLeft = 0.0;
			this._avoidAngle = 0.0;
			this.AIState = 0;
			pCVar1 = this._titan;
			if (pCVar1 == null) {
	label_05b9cc1b: ;
				throw new NullReferenceException();
			}
			pCVar1.HasDirection = false;
			pCVar1.IsSit = false;
			fVar2 = Random.Range(4.0, 8.0);
			this._stateTimeLeft = fVar2;
		}
		return;
	}

	[Token(Token = "0x6003E5B")]
	[Address(RVA = "0x5A9BFB0", Offset = "0x5A9AFB0", VA = "0x5A9BFB0")]
	internal void EndForcedIdle()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$EndForcedIdle): clean
		BaseTitan pCVar1;
		float fVar2;

		if (this.AIState == 7) {
			this._lowMovementSpeedTime = 0.0;
			this._recoveryTimeLeft = 0.0;
			this._avoidAngle = 0.0;
			this.AIState = 0;
			pCVar1 = this._titan;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			pCVar1.HasDirection = false;
			pCVar1.IsSit = false;
			fVar2 = Random.Range(4.0, 8.0);
			this._stateTimeLeft = fVar2;
		}
		return;
	}

	[Token(Token = "0x6003E5C")]
	[Address(RVA = "0x5A9B5E0", Offset = "0x5A9A5E0", VA = "0x5A9B5E0")]
	internal void ResetCommandState()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$ResetCommandState): clean
		BaseTitan pCVar1;
		float fVar2;

		this._lowMovementSpeedTime = 0.0;
		this._recoveryTimeLeft = 0.0;
		this._avoidAngle = 0.0;
		this.AIState = 0;
		pCVar1 = this._titan;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		pCVar1.HasDirection = false;
		pCVar1.IsSit = false;
		fVar2 = Random.Range(4.0, 8.0);
		this._stateTimeLeft = fVar2;
		return;
	}

	[Token(Token = "0x6003E5D")]
	[Address(RVA = "0x5A9EDC0", Offset = "0x5A9DDC0", VA = "0x5A9EDC0")]
	public void MoveToCallback(Action action, Vector3 position, float range, bool ignore)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$MoveToCallback): clean


		this._moveToTarget = null;
		this.BeginMove(position, range, ignore);
		this._moveToCallback = action;
		return;
	}

	[Token(Token = "0x6003E5E")]
	[Address(RVA = "0x5A9EE40", Offset = "0x5A9DE40", VA = "0x5A9EE40")]
	public void MoveToExact(Vector3 position, float range = 10f, float timeoutPadding = 1f)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$MoveToExact): 5 lines keep C-only constructs
		uint uVar1;
		BaseTitan pCVar2;
		BaseComponentCache pUVar3;
		Transform __this_00;
		float pfVar4;
		float pfVar5;
		float fVar6;
		float fVar7;
		Vector3 UVar8;
		float local_28;
		float fStack_24;

		this._moveToTarget = null;
		this.BeginMove(position, range, true);
		this._moveToExact = true;
		pCVar2 = this._titan;
		if (this.IsRun == false) {
			if (pCVar2 == null) goto label_05b9f00f;
			pfVar4 = &pCVar2.WalkSpeedBase;
			pfVar5 = &pCVar2.WalkSpeedPerLevel;
		}
		else {
			if (pCVar2 == null) goto label_05b9f00f;
			pfVar4 = &pCVar2.RunSpeedBase;
			pfVar5 = &pCVar2.RunSpeedPerLevel;
		}
		fVar6 = *pfVar5 * pCVar2.Size + *pfVar4;
		if (fVar6 <= 0.0) {
			this._moveToTimeout = INFINITY;
			return;
		}
		pUVar3 = pCVar2.Cache;
		if ((pUVar3 != null) &&(__this_00 = pUVar3.Transform, __this_00 != null)) {
			UVar8 = __this_00.position;
			if (Il2CppMethodInitialized_0753e7b7 == false) {
				Il2CppMethodInitialized_0753e7b7 = true;
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			local_28 = position.x;
			fStack_24 = position.y;
			fStack_24 = UVar8.y - fStack_24;
			fVar7 = UVar8.z - position.z;
			local_28 = UVar8.x - local_28;
			fVar7 = fStack_24 * fStack_24 + local_28 * local_28 + fVar7 * fVar7;
			if (fVar7 < 0.0) {
				fVar7 = sqrtf(fVar7);
			}
			else {
				fVar7 = SQRT(fVar7);
			}
			this._moveToTimeout = fVar7 / fVar6 + timeoutPadding;
			return;
		}
	label_05b9f00f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E5F")]
	[Address(RVA = "0x5A9F020", Offset = "0x5A9E020", VA = "0x5A9F020")]
	public void MoveToExactCallback(Action action, Vector3 position, float range = 10f, float timeoutPadding = 1f)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$MoveToExactCallback): clean
		this.MoveToExact(position, range, timeoutPadding);
		this._moveToCallback = action;
		return;
	}

	[Token(Token = "0x6003E60")]
	[Address(RVA = "0x5A9F050", Offset = "0x5A9E050", VA = "0x5A9F050")]
	public void CancelOrder()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$CancelOrder): 1 lines keep C-only constructs
		byte bVar1;
		BaseTitan pCVar2;
		BaseCharacter pCVar3;
		float fVar4;

		this._lowMovementSpeedTime = 0.0;
		this._recoveryTimeLeft = 0.0;
		this._avoidAngle = 0.0;
		this._moveToActive = false;
		this._moveToTarget = null;
		this._moveToExact = false;
		this._moveToCallback = null;
		if (this.AIState == 7) {
			this._lowMovementSpeedTime = 0.0;
			this._recoveryTimeLeft = 0.0;
			this._avoidAngle = 0.0;
			this.AIState = 0;
			pCVar2 = this._titan;
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			pCVar2.HasDirection = false;
			pCVar2.IsSit = false;
			fVar4 = Random.Range(4.0, 8.0);
			this._stateTimeLeft = fVar4;
		}
		this._enemy = null;
		this._focusTimeLeft = 0.0;
		pCVar3 = this._character;
		if (pCVar3 != null) {
			bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
			if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BaseTitan))) {
				(*(ulong)((sbyte)pCVar3 + 0x168)) = null;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6003E61")]
	[Address(RVA = "0x5A9CFB0", Offset = "0x5A9BFB0", VA = "0x5A9CFB0")]
	public void ForceIdle(float time)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$ForceIdle): clean
		BaseTitan pCVar1;

		this._moveToExact = false;
		this._moveToCallback = null;
		this._lowMovementSpeedTime = 0.0;
		this._recoveryTimeLeft = 0.0;
		this._avoidAngle = 0.0;
		this.AIState = 0;
		pCVar1 = this._titan;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		pCVar1.HasDirection = false;
		pCVar1.IsSit = false;
		Random.Range(4.0, 8.0);
		this.AIState = 7;
		this._stateTimeLeft = time;
		return;
	}

	[Token(Token = "0x6003E62")]
	[Address(RVA = "0x5A9F1A0", Offset = "0x5A9E1A0", VA = "0x5A9F1A0", Slot = "11")]
	public virtual void Init(JSONNode data)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$Init): 33 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		Il2CppClass __this_00;
		Dictionary<string, float> pSVar2;
		ulong key;
		bool bVar3;
		JSONNode pSVar4;
		String pSVar5;
		Dictionary<string, TitanAttackInfo> pSVar6;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_01;
		float fVar7;
		byte[] local_178 = new byte[40];
		Dictionary<TKey, TValue> pSStack_150;
		System_Collections_Generic_IEqualityComparer_TKey__o local_148;
		ulong uStack_120;
		byte[] local_110 = new byte[24];
		int iStack_e8;
		uint uStack_e4;
		int iStack_d8;
		int iStack_d4;
		Dictionary<TKey, TValue> local_c8;
		Dictionary<TKey, TValue> pSStack_c0;
		ulong uStack_a0;
		ulong uStack_90;
		byte[] local_78 = new byte[24];
		int iStack_40;
		int iStack_3c;

		uStack_120._0_4_ = 0;
		uStack_120._4_4_ = 0;
		local_178._32_8_ = 0;
		uStack_90._0_4_ = 0;
		uStack_90._4_4_ = 0;
		uStack_a0._0_4_ = 0;
		uStack_a0._4_4_ = 0;
		local_c8 = null;
		local_178._0_8_ = null;
		local_178._8_8_ = null;
		local_178._16_8_ = null;
		if (data != null) {
			pSVar4 = data.get_Item("DetectRange");
			if (pSVar4 != null) {
				fVar7 = pSVar4.get_AsFloat();
				this.DetectRange = fVar7;
				pSVar4 = data.get_Item("CloseAttackRange");
				if (pSVar4 != null) {
					fVar7 = pSVar4.get_AsFloat();
					this.CloseAttackRange = fVar7;
					pSVar4 = data.get_Item("FarAttackMinRange");
					if (pSVar4 != null) {
						fVar7 = pSVar4.get_AsFloat();
						this.FarAttackMinRange = fVar7;
						pSVar4 = data.get_Item("FarAttackMaxRange");
						if (pSVar4 != null) {
							fVar7 = pSVar4.get_AsFloat();
							this.FarAttackMaxRange = fVar7;
							pSVar4 = data.get_Item("FarAttackCooldown");
							if (pSVar4 != null) {
								fVar7 = pSVar4.get_AsFloat();
								this.FarAttackCooldown = fVar7;
								pSVar4 = data.get_Item("FocusRange");
								if (pSVar4 != null) {
									fVar7 = pSVar4.get_AsFloat();
									this.FocusRange = fVar7;
									pSVar4 = data.get_Item("FocusTime");
									if (pSVar4 != null) {
										fVar7 = pSVar4.get_AsFloat();
										this.FocusTime = fVar7;
										pSVar4 = data.get_Item("AttackWait");
										if (pSVar4 != null) {
											fVar7 = pSVar4.get_AsFloat();
											this.AttackWait = fVar7;
											pSVar4 = data.get_Item("ChaseAngleTimeMin");
											if (pSVar4 != null) {
												fVar7 = pSVar4.get_AsFloat();
												this.ChaseAngleTimeMin = fVar7;
												pSVar4 = data.get_Item("ChaseAngleTimeMax") ;
												if (pSVar4 != null) {
													fVar7 = pSVar4.get_AsFloat();
													this.ChaseAngleTimeMax = fVar7;
													pSVar4 = data.get_Item("ChaseAngleMinRange");
													if (pSVar4 != null) {
														fVar7 = pSVar4.get_AsFloat();
														this.ChaseAngleMinRange = fVar7;
														pSVar4 = data.get_Item("IsRun");
														if (pSVar4 != null) {
															bVar3 = pSVar4.get_AsBool();
															this.IsRun = bVar3;
															pSVar4 = data.get_Item("IsTurn");
															if (pSVar4 != null) {
																bVar3 = pSVar4.get_AsBool();
																this.IsTurn = bVar3;
																pSVar4 = data.get_Item("TurnAngle");
																if (pSVar4 != null) {
																	fVar7 = pSVar4.get_AsFloat();
																	this.TurnAngle = fVar7;
																	pSVar1 = (Dictionary<object, object>)CharacterData.TitanAttackInfos;
																	pSVar4 = data.get_Item("Type");
																	if (pSVar4 != null) {
																		pSVar5 = pSVar4.get_Value();
																		if (pSVar1 != null ) {
																			pSVar6 = (Dictionary<string, TitanAttackInfo>)pSVar1.get_Item((object)pSVar5);
																			local_178._24_8_ = &this.AttackInfos;
																			this.AttackInfos = pSVar6;
																			pSVar4 = data.get_Item("Attacks");
																			if (pSVar4 != null) {
																				local_110.get_Keys(pSVar4);
																				uStack_90._0_4_ = iStack_d8;
																				uStack_90._4_4_ = iStack_d4;
																				uStack_a0._0_4_ = iStack_e8;
																				uStack_a0._4_4_ = uStack_e4;
																				local_c8 = (Dictionary<TKey, TValue>)local_110._0_8_;
																				pSStack_c0 = (Dictionary<TKey, TValue>)local_110._8_8_;
																				local_78.GetEnumerator(ref local_c8);
																				uStack_120._0_4_ = iStack_40;
																				uStack_120._4_4_ = iStack_3c;
																				local_148 = (System_Collections_Generic_IEqualityComparer_TKey__o)local_78._16_8_;
																				local_178._32_8_ = local_78._0_8_;
																				pSStack_150 = (Dictionary<TKey, TValue>)local_78._8_8_;
																				bVar3 = ((local_178 + 0x20)).MoveNext();
																				if (bVar3) {
																					do {
																						pSVar5 = ((local_178 + 0x20)).Current;
																						pSVar4 = data.get_Item("Attacks");
																						if (pSVar4 == null) goto label_05b9fb4b;
																						pSVar4 = pSVar4.get_Item(pSVar5);
																						if ((typeof(JSONNode)._2). cctor_finished_or_no_cctor == 0) {
																						}
																						fVar7 = ((JSONNode)pSVar4);
																						if (pSVar5 == null) goto label_05b9fb4b;
																						bVar3 = pSVar5.EndsWith("*");
																						if (bVar3) {
																							pSVar5 = pSVar5.Substring(0, pSVar5._stringLength + -1);
																							__this_00 = ((object)local_178._24_8_).klass;
																							if (__this_00 == null) goto label_05b9fb4b;
																							__this_01 = __this_00.Keys;
																							if (__this_01 ==null) goto label_05b9fb4b;
																							local_110.GetEnumerator(__this_01);
																							local_178._16_8_ = local_110._16_8_;
																							local_178._0_8_ = local_110._0_8_;
																							local_178._8_8_ = local_110._8_8_;
																							local_110._0_8_ =null;
																							local_110._8_8_ =(Dictionary<TKey, TValue>)local_178;
																							while(true) {
																								bVar3 = local_178.MoveNext();
																								key = local_178._16_8_;
																								if (!bVar3) break;
																								if ((Int32[])local_178._16_8_ ==null) {
																									throw new NullReferenceException();
																								}
																								bVar3 = local_178._16_8_.StartsWith(pSVar5);
																								if (bVar3) {
																									pSVar2 = this.AttackChances;
																									if (pSVar2 == null) {
																										throw new NullReferenceException();
																									}
																									pSVar2.Add((object)key, fVar7);
																									pSVar1 = (Dictionary<object, object>)this.AttackGroups;
																									if (pSVar1 == null) {
																										throw new NullReferenceException();
																									}
																									pSVar1.Add((object)key, (object)pSVar5);
																								}
																							}
																							local_178.Dispose();
																						}
																						else {
																							pSVar2 = this.AttackChances;
																							if (pSVar2 == null) goto label_05b9fb4b;
																							pSVar2.Add((object)pSVar5, fVar7);
																						}
																						bVar3 = ((local_178 + 0x20)).MoveNext();
																					} while (bVar3);
																				}
																				this._waitAttackTimeLeft = this.AttackWait;
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
	label_05b9fb4b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E63")]
	[Address(RVA = "0x5A9FB80", Offset = "0x5A9EB80", VA = "0x5A9FB80")]
	public ITargetable GetEnemy()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$GetEnemy): clean
		bool bVar1;

		bVar1 = BaseAIController.IsValidTarget(this._enemy);
		if (bVar1) {
			return this._enemy;
		}
		return null;
	}

	[Token(Token = "0x6003E64")]
	[Address(RVA = "0x5A9FBA0", Offset = "0x5A9EBA0", VA = "0x5A9FBA0")]
	public void SetEnemy(ITargetable enemy, float focusTime = 0f)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$SetEnemy): clean
		this.SetTarget(enemy, focusTime);
		return;
	}

	[Token(Token = "0x6003E65")]
	[Address(RVA = "0x5A9FBB0", Offset = "0x5A9EBB0", VA = "0x5A9FBB0", Slot = "12")]
	protected virtual void UpdateScriptedAI()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$UpdateScriptedAI): clean
		return;
	}

	[Token(Token = "0x6003E66")]
	[Address(RVA = "0x5A9FBC0", Offset = "0x5A9EBC0", VA = "0x5A9FBC0", Slot = "6")]
	protected override void FixedUpdate()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$FixedUpdate): 43 lines keep C-only constructs
		ITargetable* targetAddress;
		float pfVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		int iVar5;
		BaseTitan pCVar6;
		Object x;
		NavMeshAgent __this_00;
		BaseCharacter pCVar9;
		BaseComponentCache pUVar10;
		Transform pUVar11;
		ulong uVar12;
		bool bVar13;
		sbyte cVar14;
		uint uVar15;
		VirtualInvokeData pVVar16;
		_func_8 vtableDispatch;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		MethodInfo extraout_RDX_03;
		MethodInfo extraout_RDX_04;
		MethodInfo extraout_RDX_05;
		MethodInfo extraout_RDX_06;
		MethodInfo method_00;
		MethodInfo extraout_RDX_07;
		MethodInfo pMVar18;
		MethodInfo extraout_RDX_08;
		MethodInfo extraout_RDX_09;
		ITargetable method_01;
		object pIVar20;
		float fVar21;
		float fVar22;
		float fVar23;
		Vector3 UVar24;
		Vector3 UVar25;
		Vector3 target;

		if (this._usePathfinding != false) {
			this._setTargetThisFrame = false;
		}
		fVar22 = this._stateTimeLeft;
		fVar21 = Time.deltaTime;
		this._stateTimeLeft = fVar22 - fVar21;
		fVar22 = this._moveToTimeout;
		fVar21 = Time.deltaTime;
		fVar22 = fVar22 - fVar21;
		this._moveToTimeout = fVar22;
		pCVar6 = this._titan;
		if (pCVar6 == null) goto label_05ba060b;
		if (pCVar6.Dead != false) {
			return;
		}
		this.UpdateMoveTarget();
		pCVar6 = this._titan;
		if (pCVar6 == null) goto label_05ba060b;
		iVar5 = pCVar6.State;
		if ((iVar5 != 10) && (iVar5 != 0x17)) {
			fVar22 = this._rangedCooldownLeft;
			fVar21 = Time.deltaTime;
			this._rangedCooldownLeft = fVar22 - fVar21;
			fVar22 = this._attackCooldownLeft;
			fVar21 = Time.deltaTime;
			fVar22 = fVar22 - fVar21;
			this._attackCooldownLeft = fVar22;
		}
		if (this.AIState == 7) {
			if (0.0 < this._stateTimeLeft) {
				return;
			}
			this._lowMovementSpeedTime = 0.0;
			this._recoveryTimeLeft = 0.0;
			this._avoidAngle = 0.0;
			this.AIState = 0;
			pCVar6 = this._titan;
			if (pCVar6 == null) goto label_05ba060b;
			pCVar6.HasDirection = false;
			pCVar6.IsSit = false;
			fVar22 = 8.0;
			fVar21 = Random.Range(4.0, 8.0);
			this._stateTimeLeft = fVar21;
		}
		this.UpdateTargeting();
		pCVar6 = this._titan;
		if (pCVar6 == null) goto label_05ba060b;
		targetAddress = &this._enemy;
		pCVar6.TargetEnemy = this._enemy;
		if (this._aiEnabled == false) {
			this._enemy = null;
			method_01 = null;
			uVar15 = this.AIState;
			if (uVar15 < 3) {
				if (this._moveToActive != false) {
					method_01 = (ITargetable)(this.klass.vtable)._10_get__stationaryAI.method;
					bVar13 = this.get__stationaryAI();
					if (!bVar13) {
						this.MoveToPosition();
					}
				}
				uVar15 = this.AIState;
			}
			if (uVar15 == 4) {
				pCVar9 = this._character;
				if (((pCVar9 == null) ||(pUVar10 = pCVar9.Cache, pUVar10 == null)) ||(pUVar11 = pUVar10.Transform, pUVar11 == null)) goto label_05ba060b;
				method_01 = null;
				UVar24 = pUVar11.position;
				uVar2 = this._moveToPosition.x;
				uVar4 = this._moveToPosition.y;
				fVar22 = this._moveToPosition.z;
				pMVar18 = extraout_RDX;
				if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
					pMVar18 = extraout_RDX_01;
				}
				fVar21 = UVar24.y - (float)uVar4;
				fVar22 = UVar24.z - fVar22;
				fVar23 = UVar24.x - (float)uVar2;
				fVar22 = fVar21 * fVar21 + fVar23 * fVar23 + fVar22 * fVar22;
				if (fVar22 < 0.0) {
					fVar22 = sqrtf(fVar22);
					pMVar18 = extraout_RDX_02;
				}
				else {
					fVar22 = SQRT(fVar22);
				}
	label_05b9fffd: ;
				if (((fVar22 <= this._moveToRange) || (this._moveToActive == false)) ||((this._moveToExact != false && (this._moveToTimeout <= 0.0)))) {
					this.CompleteMove();
				}
				else {
					if ((this._stateTimeLeft <= 0.0) || (this._usePathfinding != false)) goto label_05ba049d;
					pCVar6 = this._titan;
					method_01 = (ITargetable)0x1;
					fVar22 = this.GetChaseAngle((Vector3)this._moveToPosition, true);
					if (pCVar6 == null) goto label_05ba060b;
					pCVar6.TargetAngle = fVar22;
				}
			}
			goto switchD_05ba01b8_default;
		}
		method_01 = (ITargetable)(this.klass.vtable)._9_get__scriptedAI.method;
		bVar13 = this.get__scriptedAI();
		if (bVar13) {
			vtableDispatch = (this.klass.vtable)._12_UpdateScriptedAI.methodPtr;
			pMVar18 = (this.klass.vtable)._12_UpdateScriptedAI.method;
			goto label_05ba04dd;
		}
		pIVar20 = (object)*targetAddress;
		if (pIVar20 != null) {
			if (this._usePathfinding != false) {
				x = (Object)this._agent;
				method_01 = null;
				bVar13 = (x != null);
				if (bVar13) {
					__this_00 = this._agent;
					if (__this_00 == null) goto label_05ba060b;
					method_01 = null;
					bVar13 = __this_00.isOnNavMesh;
					if (bVar13) {
						if (*targetAddress == null) goto label_05ba060b;
						method_01 = typeof(ITargetable);
						uVar12 = il2cpp_runtime_helper_02fd8410(1);
						UVar24.z = fVar22;
						UVar24.x = (float)(int)uVar12;
						UVar24.y = (float)(int)((ulong)uVar12 >> 0x20);
						this.SetAgentDestination(UVar24);
					}
				}
				pIVar20 = (object)*targetAddress;
				if (pIVar20 == null) goto label_05ba019a;
			}
			method_01 = (ITargetable)pVVar16.method;
			bVar13 = pIVar20.ValidTarget();
			if (bVar13) {
				pCVar9 = this._character;
				if (((pCVar9 == null) ||(pUVar10 = pCVar9.Cache, pUVar10 == null)) ||(pUVar11 = pUVar10.Transform, pUVar11 == null)) goto label_05ba060b;
				UVar24 = pUVar11.position;
				pIVar20 = (object)*targetAddress;
				if (pIVar20 == null) goto label_05ba060b;
				method_01 = (ITargetable)pVVar16.method;
				UVar25 = pIVar20.ValidTarget();
				fVar22 = Util.DistanceIgnoreY(UVar24, UVar25);
				this._enemyDistance = fVar22;
			}
		}
	label_05ba019a: ;
		switch(this.AIState) {
		case 0:
		case 1:
		case 2:
			pIVar20 = (object)*targetAddress;
			if (pIVar20 != null) {
				method_01 = (ITargetable)pVVar16.method;
				bVar13 = pIVar20.ValidTarget();
				pMVar18 = extraout_RDX_07;
				if (bVar13) goto label_05ba0460;
			}
			if (this._moveToActive == false) {
				if (this._stateTimeLeft <= 0.0) {
					if (this.AIState != 0) goto label_05ba04bc;
					bVar13 = this.IsCrawler();
					if (((bVar13) ||(bVar13 = this.IsShifter())) || (bVar13 = RandomGen.Roll(0.33), !bVar13)) {
						this.Wander();
					}
					else {
						this.Sit();
					}
				}
			}
			else {
	label_05ba049d: ;
				this.MoveToPosition();
			}
			break;
		case 3:
			if ((*targetAddress != null) &&(method_01 = typeof(ITargetable), cVar14 = il2cpp_runtime_helper_02ad5af0(2), cVar14 != false)) {
				fVar22 = this._enemyDistance;
				if ((0.0 < this._stateTimeLeft) ||(pfVar1 = &this.ChaseAngleMinRange, pMVar18 = extraout_RDX_03, fVar22 < *pfVar1 || fVar22 == *pfVar1)) {
					fVar21 = this._attackRange;
					if (fVar22 <= fVar21) {
						bVar13 = this.TryCloseAction();
						if (bVar13) break;
					}
					else {
						fVar21 = this.FarAttackMaxRange;
						if ((fVar22 <= fVar21) && (this.FarAttackMinRange <= fVar22)) {
							method_01 = (ITargetable)this.GetValidAttacks(true);
							if (method_01 == null) goto label_05ba060b;
							pMVar18 = extraout_RDX_04;
							if (0 < *(int)&(method_01._1).namespaze) {
	label_05ba0418: ;
								this.Attack((List<string>)method_01);
								break;
							}
						}
					}
					if (*targetAddress == null) goto label_05ba060b;
					method_01 = typeof(ITargetable);
					uVar12 = il2cpp_runtime_helper_02fd8410(1);
					target.z = fVar21;
					target.x = (float)(int)uVar12;
					target.y = (float)(int)((ulong)uVar12 >> 0x20);
					bVar13 = this.HasClearLineOfSight(target) ;
					if (bVar13) goto label_05ba055d;
					pMVar18 = extraout_RDX_08;
					if (0.0 < this._stateTimeLeft) break;
				}
				goto label_05ba0488;
			}
			goto label_05ba04bc;
		case 4:
			pCVar9 = this._character;
			if (((pCVar9 == null) ||(pUVar10 = pCVar9.Cache, pUVar10 == null)) ||(pUVar11 = pUVar10.Transform, pUVar11 == null)) goto label_05ba060b;
			method_01 = null;
			UVar24 = pUVar11.position;
			uVar3 = this._moveToPosition.x;
			fVar22 = (float)il2cpp_runtime_helper_05956b50(UVar24.x, UVar24.z, uVar3, this._moveToPosition.z, 0);
			pMVar18 = extraout_RDX_05;
			if (this._enemy == null) goto label_05b9fffd;
	label_05ba0460: ;
			pCVar6 = this._titan;
			if (pCVar6 == null) {
	label_05ba060b: ;
				throw new NullReferenceException();
			}
			this._attackRange = this.CloseAttackRange * pCVar6.Size;
	label_05ba0488: ;
			method_01 = (ITargetable)0x1;
			this.MoveToEnemy(true);
			break;
		case 5:
			pCVar6 = this._titan;
			if (pCVar6 == null) goto label_05ba060b;
			if (pCVar6.State != 0) {
				method_01 = null;
				bVar13 = pCVar6.IsMoving;
				if (!bVar13) break;
			}
	label_05ba04bc: ;
			this.Idle();
			break;
		case 6:
			if ((*targetAddress == null) ||(method_01 = typeof(ITargetable), cVar14 = il2cpp_runtime_helper_02ad5af0(), cVar14 == false)) {
				this.Idle();
				return;
			}
			fVar22 = this._waitAttackTimeLeft;
			fVar21 = Time.deltaTime;
			fVar22 = fVar22 - fVar21;
			this._waitAttackTimeLeft = fVar22;
			if (fVar22 <= 0.0) {
				pCVar6 = this._titan;
				if (pCVar6 == null) goto label_05ba060b;
				method_01 = (ITargetable)(pCVar6.klass.vtable)._145_CanAction.method;
				bVar13 = pCVar6.CanAction();
				if (bVar13) {
					pCVar6 = this._titan;
					if (pCVar6 == null) goto label_05ba060b;
					pCVar6.HasDirection = false;
					fVar21 = this._enemyDistance;
					pfVar1 = &this._attackRange;
					pMVar18 = extraout_RDX_06;
					if (*pfVar1 <= fVar21 && fVar21 != *pfVar1) goto label_05ba0488;
					method_01 = (ITargetable)this.GetValidAttacks(false);
					if (method_01 == null) goto label_05ba060b;
					pMVar18 = method_00;
					if (0 < *(int)&(method_01._1).namespaze) goto label_05ba0418;
					if (this.IsTurn != false) {
						method_01 = (ITargetable)this._enemy;
						fVar21 = this.GetEnemyAngle((ITargetable)method_01);
						pfVar1 = &this.TurnAngle;
						if (*pfVar1 <= fVar21 && fVar21 != *pfVar1) {
							this.TurnToEnemy();
							break;
						}
					}
					if (*targetAddress == null) goto label_05ba060b;
					method_01 = typeof(ITargetable);
					uVar12 = il2cpp_runtime_helper_02fd8410(1);
					UVar25.z = fVar22;
					UVar25.x = (float)(int)uVar12;
					UVar25.y = (float)(int)((ulong)uVar12 >> 0x20);
					bVar13 = this.HasClearLineOfSight(UVar25) ;
					pMVar18 = extraout_RDX_09;
					if (!bVar13) goto label_05ba0488;
					this.AIState = 3;
					pCVar6 = this._titan;
					if (pCVar6 == null) goto label_05ba060b;
					pCVar6.HasDirection = true;
					pCVar6.IsWalk = (bool)(this.IsRun ^ 1);
					this._moveAngle = 0.0;
	label_05ba055d: ;
					this.TargetEnemy();
				}
			}
		}
	switchD_05ba01b8_default: ;
		this.UpdateMovementRecovery();
		vtableDispatch = (this.klass.vtable)._8_RefreshAgent.methodPtr;
		pMVar18 = (this.klass.vtable)._8_RefreshAgent.method;
	label_05ba04dd: ;
		(*vtableDispatch)(this,pMVar18);
		return;
	}

	[Token(Token = "0x6003E67")]
	[Address(RVA = "0x5A9EDA0", Offset = "0x5A9DDA0", VA = "0x5A9EDA0")]
	private void ResetMovementRecovery()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$ResetMovementRecovery): clean
		this._lowMovementSpeedTime = 0.0;
		this._recoveryTimeLeft = 0.0;
		this._avoidAngle = 0.0;
		return;
	}

	[Token(Token = "0x6003E68")]
	[Address(RVA = "0x5AA0BC0", Offset = "0x5A9FBC0", VA = "0x5AA0BC0")]
	private void UpdateMovementRecovery()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$UpdateMovementRecovery): 13 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		InGameSet pSVar3;
		InGameTitanSettings pSVar4;
		BoolSetting pSVar5;
		BaseTitan pCVar6;
		BaseComponentCache pUVar7;
		Transform __this_00;
		bool bVar8;
		MethodInfo method_01;
		uint uVar10;
		float fVar11;
		float fVar12;
		ulong uVar13;
		float fVar14;
		float fVar15;
		byte[] auVar16 = new byte[12];
		Vector3 UVar17;
		Vector3 point;
		byte[] local_38 = new byte[16];

		local_38._0_8_ = (Il2CppMethodPointer)0x0;
		local_38._8_8_ = (Il2CppMethodPointer)0x0;
		pSVar3 = SettingsManager.InGameCurrent;
		if (((pSVar3 == null) ||(pSVar4 = pSVar3.Titan, pSVar4 == null)) ||(pSVar5 = pSVar4.TitanSmartMovement, pSVar5 == null)) goto label_05ba11b3;
		if (pSVar5._value == false) goto label_05ba0dd2;
		pCVar6 = this._titan;
		if (pCVar6 == null) goto label_05ba11b3;
		iVar2 = pCVar6.State;
		if (iVar2 == 3) {
			fVar11 = pCVar6.WalkSpeedPerLevel * pCVar6.Size + pCVar6.WalkSpeedBase;
		}
		else {
			fVar11 = pCVar6.RunSpeedPerLevel * pCVar6.Size + pCVar6.RunSpeedBase;
			if (iVar2 == 2) {
				fVar11 = fVar11 * 1.5;
			}
		}
		if (((this._usePathfinding != false) ||(bVar8 = this.get__stationaryAI())) ||(bVar8 = this.get__scriptedAI())) goto label_05ba0dd2;
		pCVar6 = this._titan;
		if (pCVar6 == null) goto label_05ba11b3;
		bVar1 = (typeof(BasicTitan)._2).typeHierarchyDepth;
		if ((((bVar1 <= (pCVar6.klass._2).typeHierarchyDepth) &&((pCVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BasicTitan))) && ((char)(*(ulong)((sbyte)pCVar6 + 0x2b0)) != false)) ||((pCVar6.HasDirection == false || (pCVar6.Grounded == false)))) {
	label_05ba0dd2: ;
			this._lowMovementSpeedTime = 0.0;
			this._recoveryTimeLeft = 0.0;
			this._avoidAngle = 0.0;
			return;
		}
		method_01 = null;
		bVar8 = pCVar6.IsMoving;
		if ((fVar11 <= 0.0) || (!bVar8)) goto label_05ba0dd2;
		fVar14 = 0.0;
		if (this._recoveryTimeLeft <= 0.0) {
			this.ApplyObstacleAvoidance(fVar11);
			pCVar6 = this._titan;
			if (pCVar6 == null) goto label_05ba11b3;
			if ((fVar11 * 0.5 <= pCVar6.CurrentSpeed) ||((this.AIState == 3 && (this._enemyDistance <= this._attackRange))) ) {
	label_05ba0ef6: ;
				this._lowMovementSpeedTime = 0.0;
				return;
			}
			pUVar7 = pCVar6.Cache;
			if ((pUVar7 == null) ||(__this_00 = pUVar7.Transform, __this_00 == null)) goto label_05ba11b3;
			UVar17 = __this_00.eulerAngles;
			pCVar6 = this._titan;
			if (pCVar6 == null) goto label_05ba11b3;
			fVar14 = pCVar6.TargetAngle - UVar17.y;
			fVar11 = floorf(fVar14 / 360.0);
			fVar14 = fVar11 * -360.0 + fVar14;
			fVar11 = 360.0;
			if (fVar14 <= 360.0) {
				fVar11 = fVar14;
			}
			fVar11 = (float)(-(uint)(0.0 <= fVar14) & (uint)fVar11);
			if (45.0 < ABS((float)(~-(uint)(180.0 < fVar11) & (uint)fVar11 |(uint)(fVar11 + -360.0) & -(uint)(180.0 < fVar11)))) goto label_05ba0ef6;
			fVar11 = this._lowMovementSpeedTime;
			fVar14 = Time.fixedDeltaTime;
			fVar14 = fVar14 + fVar11;
			this._lowMovementSpeedTime = fVar14;
			if (fVar14 < 0.5) {
				return;
			}
			this._lowMovementSpeedTime = 0.0;
			this._recoveryTimeLeft = 2.0;
			pCVar6 = this._titan;
			if (pCVar6 == null) goto label_05ba11b3;
			fVar11 = pCVar6.TargetAngle;
			this._recoveryHeading = fVar11;
			UVar17 = BaseTitanAIController.GetHeadingDirection(fVar11);
			fVar14 = UVar17.z;
			method_01 = (MethodInfo)local_38;
			bVar8 = this.CastObstacle(UVar17, 0.0, 0.5, (RaycastHit)method_01);
			if (bVar8) {
				method_01 = null;
				point = local_38.point;
				fVar11 = this.GetObstacleSide(UVar17, point);
				fVar11 = fVar11 * -70.0;
			}
			else {
				fVar11 = Random.value;
				fVar14 = 0.5;
				if (0.5 <= fVar11) {
					fVar11 = -70.0;
				}
				else {
					fVar11 = 70.0;
				}
			}
			this._recoveryTurnAngle = fVar11;
			this._avoidAngle = 0.0;
			fVar11 = this._stateTimeLeft;
			fVar12 = this._recoveryTimeLeft;
			if (fVar11 <= fVar12) {
				fVar11 = fVar12;
			}
			this._stateTimeLeft = fVar11;
		}
		fVar11 = this._recoveryHeading;
		iVar2 = this.AIState;
		if ((iVar2 == 3) || (iVar2 == 6)) {
			bVar8 = BaseAIController.IsValidTarget(this._enemy);
			if (bVar8) {
				if (this._enemy == null) goto label_05ba11b3;
				uVar13 = il2cpp_runtime_helper_02fd8410(1);
				goto label_05ba0f34;
			}
		}
		else if (iVar2 == 4) {
			uVar13._0_4_ = this._moveToPosition.x;
			uVar13._4_4_ = this._moveToPosition.y;
			fVar14 = this._moveToPosition.z;
	label_05ba0f34: ;
			UVar17.z = fVar14;
			UVar17.x = (float)(int)uVar13;
			UVar17.y = (float)(int)((ulong)uVar13 >> 0x20);
			fVar11 = this.GetChaseAngle(UVar17, false);
		}
		fVar14 = this._recoveryTimeLeft;
		fVar12 = Time.fixedDeltaTime;
		fVar14 = fVar14 - fVar12;
		this._recoveryTimeLeft = fVar14;
		if (fVar14 <= 0.0) {
			pCVar6 = this._titan;
			if (pCVar6 != null) {
				pCVar6.TargetAngle = fVar11;
				this._lowMovementSpeedTime = 0.0;
				this._recoveryTimeLeft = 0.0;
				this._avoidAngle = 0.0;
				this._stateTimeLeft = 0.0;
				return;
			}
		}
		else {
			fVar14 = this._recoveryTurnAngle;
			fVar12 = Time.fixedDeltaTime;
			fVar12 = fVar12 * 10.0;
			fVar15 = 0.0 - fVar14;
			uVar10 = -(uint)(0.0 <= fVar15);
			fVar14 = (float)(-(uint)(fVar12 < ABS(fVar15)) &(uint)((float)(~uVar10 & (uint)-fVar12 | uVar10 & (uint)fVar12) + fVar14));
			this._recoveryTurnAngle = fVar14;
			pCVar6 = this._titan;
			if (pCVar6 != null) {
				fVar11 = fVar11 + fVar14;
				fVar14 = floorf(fVar11 / 360.0);
				auVar16 = ZEXT812(0x43b40000);
				fVar11 = fVar11 - fVar14 * auVar16._0_4_;
				if (fVar11 <= auVar16._0_4_) {
					auVar16._4_8_ = auVar16._4_8_;
					auVar16._0_4_ = fVar11;
				}
				pCVar6.TargetAngle = (float)(-(uint)(0.0 <= fVar11) & auVar16._0_4_);
				return;
			}
		}
	label_05ba11b3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E69")]
	[Address(RVA = "0x5AA26D0", Offset = "0x5AA16D0", VA = "0x5AA26D0")]
	private void ApplyObstacleAvoidance(float speed)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$ApplyObstacleAvoidance): 2 lines keep C-only constructs
		float pfVar1;
		int iVar2;
		BaseTitan pCVar3;
		float fVar4;
		float fVar5;

		iVar2 = this.AIState;
		if ((iVar2 != 4) && ((iVar2 != 3 || (this._enemyDistance <= this._attackRange)))) {
			this._avoidAngle = 0.0;
			return;
		}
		fVar5 = this._avoidAngle;
		if ((fVar5 != 0.0) || (NAN(fVar5))) {
			pCVar3 = this._titan;
			if (pCVar3 == null) goto label_05ba285f;
			fVar5 = pCVar3.TargetAngle;
			pfVar1 = &this._avoidedTargetAngle;
			if ((fVar5 == *pfVar1) && (!NAN(fVar5) && !NAN(*pfVar1))) {
				pCVar3.TargetAngle = this._avoidHeading;
			}
		}
		fVar5 = this._obstacleCheckTimeLeft;
		fVar4 = Time.fixedDeltaTime;
		fVar5 = fVar5 - fVar4;
		this._obstacleCheckTimeLeft = fVar5;
		if (fVar5 <= 0.0) {
			this._obstacleCheckTimeLeft = 0.2;
			pCVar3 = this._titan;
			if (pCVar3 == null) goto label_05ba285f;
			fVar5 = this.GetAvoidAngle(pCVar3.TargetAngle, speed) ;
			this._avoidAngle = fVar5;
		}
		else {
			fVar5 = this._avoidAngle;
		}
		if ((fVar5 == 0.0) && (!NAN(fVar5))) {
			return;
		}
		pCVar3 = this._titan;
		if (pCVar3 != null) {
			fVar4 = pCVar3.TargetAngle;
			this._avoidHeading = fVar4;
			fVar5 = fVar5 + fVar4;
			fVar4 = floorf(fVar5 / 360.0);
			fVar5 = fVar5 - fVar4 * 360.0;
			fVar4 = 360.0;
			if (fVar5 <= 360.0) {
				fVar4 = fVar5;
			}
			fVar4 = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar4);
			this._avoidedTargetAngle = fVar4;
			pCVar3.TargetAngle = fVar4;
			return;
		}
	label_05ba285f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E6A")]
	[Address(RVA = "0x5AA2870", Offset = "0x5AA1870", VA = "0x5AA2870")]
	private bool IsNearEnemy()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$IsNearEnemy): clean
		if (this.AIState == 3) {
			return this._enemyDistance <= this._attackRange;
		}
		return false;
	}

	[Token(Token = "0x6003E6B")]
	[Address(RVA = "0x5AA2C60", Offset = "0x5AA1C60", VA = "0x5AA2C60")]
	private float GetAvoidAngle(float heading, float speed)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$GetAvoidAngle): 95 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		BaseTitan pCVar3;
		BaseComponentCache pUVar4;
		Transform __this_00;
		Single[] pSVar5;
		byte[] auVar6 = new byte[16];
		byte[] auVar7 = new byte[12];
		bool bVar8;
		ulong uVar9;
		ulong uVar10;
		byte[] auVar11 = new byte[4];
		float fVar12;
		float fVar13;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dc_03;
		uint extraout_XMM0_Dc_04;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_02;
		uint extraout_XMM0_Dd_03;
		uint extraout_XMM0_Dd_04;
		float lookAhead;
		float fVar14;
		float fVar15;
		uint in_XMM1_Dc;
		uint uVar16;
		uint in_XMM1_Dd;
		uint uVar17;
		Quaternion UVar18;
		Quaternion rotation;
		Quaternion rotation_00;
		Quaternion rotation_01;
		Vector3 UVar19;
		Vector3 local_128;
		float local_11c;
		byte[] local_118 = new byte[4];
		byte[] auStack_114 = new byte[12];
		byte[] local_108 = new byte[16];
		byte[] local_f8 = new byte[16];
		byte[] local_e8 = new byte[8];
		uint uStack_e0;
		uint uStack_dc;
		byte[] local_d8 = new byte[16];
		byte[] local_c8 = new byte[16];
		RaycastHit local_b8;
		byte[] local_88 = new byte[8];
		uint uStack_80;
		uint uStack_7c;
		float local_78;
		uint uStack_74;
		uint uStack_70;
		uint uStack_6c;
		RaycastHit local_68;

		local_11c = heading;
		if (Il2CppMethodInitialized_07547468 == false) {
			in_XMM1_Dc = 0;
			in_XMM1_Dd = 0;
			Il2CppMethodInitialized_07547468 = true;
		}
		local_b8.m_UV.x = 0.0;
		local_b8.m_UV.y = 0.0;
		local_b8.m_Collider.m_Data = (EntityId)0x0;
		local_b8.m_Normal.y = 0.0;
		local_b8.m_Normal.z = 0.0;
		local_b8.m_FaceID = 0;
		local_b8.m_Distance = 0.0;
		local_b8.m_Point.x = 0.0;
		local_b8.m_Point.y = 0.0;
		local_b8.m_Point.z = 0.0;
		local_b8.m_Normal.x = 0.0;
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
		if ((typeof(BaseTitanAIController)._2).cctor_finished_or_no_cctor == 0) {
			in_XMM1_Dc = 0;
			in_XMM1_Dd = 0;
		}
		lookAhead = speed * 0.6;
		local_128.x = 0.0;
		local_128.y = local_11c * 0.017453292;
		local_128.z = 0.0;
		UVar18 = Quaternion.Internal_FromEulerRad(ref local_128);
		fVar12 = UVar18.x;
		fVar13 = UVar18.y;
		fVar14 = UVar18.z;
		fVar15 = UVar18.w;
		if (g_data_0753e72e == false) {
			local_108._8_4_ = extraout_XMM0_Dc;
			local_108._0_8_ = UVar18._0_8_;
			local_108._12_4_ = extraout_XMM0_Dd;
			local_f8._8_4_ = in_XMM1_Dc;
			local_f8._0_8_ = UVar18._8_8_;
			local_f8._12_4_ = in_XMM1_Dd;
			g_data_0753e72e = true;
			fVar12 = (float)local_108._0_4_;
			fVar13 = (float)local_108._4_4_;
			fVar14 = (float)local_f8._0_4_;
			fVar15 = (float)local_f8._4_4_;
		}
		UVar18.y = fVar13;
		UVar18.x = fVar12;
		UVar18.w = fVar15;
		UVar18.z = fVar14;
		UVar19 = (UVar18 * (Vector3)(Vector3.forwardVector));
		local_f8._8_4_ = extraout_XMM0_Dc_00;
		local_f8._0_8_ = UVar19._0_8_;
		local_f8._12_4_ = extraout_XMM0_Dd_00;
		local_108._0_4_ = UVar19.z;
		bVar8 = this.CastObstacle(UVar19, lookAhead, 1.0, ref local_b8);
		auVar7 = auStack_114;
		auVar6._12_4_ = 0;
		auVar6._0_12_ = auStack_114;
		_local_118 = auVar6 << 0x20;
		if (!bVar8) {
	label_05ba32ac: ;
			return (float)local_118;
		}
		auVar11 = (byte[])this._avoidAngle;
		uVar16 = 0;
		uVar17 = 0;
		if (((float)auVar11 != 0.0) || (NAN((float)auVar11))) {
			if ((typeof(BaseTitanAIController)._2).cctor_finished_or_no_cctor == 0) {
				local_118 = auVar11;
				_local_118 = CONCAT124(auVar7, local_118);
				auVar11 = local_118;
			}
			local_128.x = 0.0;
			local_128.y = ((float)auVar11 + local_11c) * 0.017453292;
			local_128.z = 0.0;
			UVar18 = Quaternion.Internal_FromEulerRad(ref local_128);
			auVar11 = (byte[])UVar18.x;
			fVar12 = UVar18.y;
			fVar13 = UVar18.z;
			fVar14 = UVar18.w;
			if (g_data_0753e72e == false) {
				uStack_e0 = uVar16;
				local_e8 = (byte[])UVar18._8_8_;
				uStack_dc = uVar17;
				g_data_0753e72e = true;
				auVar11 = local_118;
				fVar12 = (float)auStack_114._0_4_;
				fVar13 = (float)local_e8._0_4_;
				fVar14 = (float)local_e8._4_4_;
			}
			rotation.y = fVar12;
			rotation.x = (float)auVar11;
			rotation.w = fVar14;
			rotation.z = fVar13;
			UVar19 = (rotation * (Vector3)(Vector3.forwardVector));
			bVar8 = this.CastObstacle(UVar19, lookAhead, 1.0, ref local_68);
			local_118 = (byte[])this._avoidAngle;
			if (!bVar8) goto label_05ba32ac;
		}
		else {
			local_118 = auVar11;
			_local_118 = CONCAT124(auVar7, local_118);
		}
		if (((float)local_118 != 0.0) || (NAN((float)local_118))) {
			_local_e8 = ZEXT416(*(uint)(&g_data_0100ad30 + (ulong)(0.0 <= (float)local_118) * 4));
			uVar1 = (typeof(BaseTitanAIController)._2).cctor_finished_or_no_cctor;
		}
		else {
			UVar19 = local_b8.point;
			pCVar3 = this._titan;
			if ((pCVar3 == null) ||(pUVar4 = pCVar3.Cache, pUVar4 == null)) goto label_05ba32c9;
			uStack_e0 = extraout_XMM0_Dc_02;
			local_e8 = (byte[])UVar19._0_8_;
			uStack_dc = extraout_XMM0_Dd_02;
			local_118 = (byte[])UVar19.z;
			__this_00 = pUVar4.Transform;
			if (__this_00 == null) goto label_05ba32c9;
			UVar19 = __this_00.position;
			local_e8._4_4_ = 0x80000000;
			local_e8._0_4_ = *(uint)(&g_data_0100ac40 +(ulong)((float)local_108._0_4_ * ((float)local_e8._0_4_ - UVar19.x) -((float)local_118 - UVar19.z) * (float)local_f8._0_4_ < 0.0) * 4) ^ 0x80000000;
			uStack_e0 = 0x80000000;
			uStack_dc = 0x80000000;
			uVar1 = (typeof(BaseTitanAIController)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar5 = BaseTitanAIController.AvoidProbeAngles;
		if (pSVar5 != null) {
			uVar2 = (uint)pSVar5.Length;
			if (uVar2 == 0) {
	label_05ba32c4: ;
				throw new IndexOutOfRangeException();
			}
			local_118 = (byte[]) *(uint)((long)pSVar5.m_Items + ((long)(((ulong)uVar2 << 0x20) + -0x100000000) >> 0x1e));
			fVar12 = local_b8.distance;
			local_f8._0_4_ = fVar12;
			pSVar5 = BaseTitanAIController.AvoidProbeAngles;
			if (pSVar5 != null) {
				local_118 = (byte[])((float)local_118 * (float)local_e8._0_4_);
				if (0 < (int)pSVar5.Length) {
					local_78 = -(float)local_e8._0_4_;
					uStack_74 = local_e8._4_4_ ^ 0x80000000;
					uStack_70 = uStack_e0 ^ 0x80000000;
					uStack_6c = uStack_dc ^ 0x80000000;
					uVar9 = pSVar5.Length & 0xffffffff;
					uVar10 = 0;
					do {
						if (uVar9 <= uVar10) goto label_05ba32c4;
						local_108._0_4_ = pSVar5[uVar10];
						fVar12 = (float)local_e8._0_4_;
						fVar13 = pSVar5[uVar10];
						if ((typeof(BaseTitanAIController)._2).cctor_finished_or_no_cctor == 0) {
							fVar12 = (float)local_e8._0_4_;
							fVar13 = (float)local_108._0_4_;
						}
						uVar17 = 0;
						uVar16 = 0;
						local_d8._0_4_ = fVar13 * fVar12;
						local_128.x = 0.0;
						local_128.y = (fVar13 * fVar12 + local_11c) * 0.017453292;
						local_128.z = 0.0;
						UVar18 = Quaternion.Internal_FromEulerRad(ref local_128);
						fVar12 = UVar18.x;
						fVar13 = UVar18.y;
						fVar14 = UVar18.z;
						fVar15 = UVar18.w;
						if (g_data_0753e72e == false) {
							local_c8._8_4_ = extraout_XMM0_Dc_03;
							local_c8._0_8_ = UVar18._0_8_;
							local_c8._12_4_ = extraout_XMM0_Dd_03;
							uStack_80 = uVar16;
							local_88 = UVar18._8_8_;
							uStack_7c = uVar17;
							g_data_0753e72e = true;
							fVar12 = (float)local_c8._0_4_;
							fVar13 = (float)local_c8._4_4_;
							fVar14 = (float)local_88._0_4_;
							fVar15 = (float)local_88._4_4_;
							uVar16 = uStack_80;
							uVar17 = uStack_7c;
						}
						rotation_00.y = fVar13;
						rotation_00.x = fVar12;
						rotation_00.w = fVar15;
						rotation_00.z = fVar14;
						UVar19 = (rotation_00 * (Vector3)(Vector3.forwardVector));
						bVar8 = this.CastObstacle(UVar19, lookAhead, 1.0, ref local_b8);
						if (!bVar8) {
							local_108._0_4_ = local_d8._0_4_;
	label_05ba32a6: ;
							local_118 = (byte[])local_108._0_4_;
							break;
						}
						fVar12 = local_b8.distance;
						if ((float)local_f8._0_4_ < fVar12) {
							fVar12 = local_b8.distance;
							local_f8._0_4_ = fVar12;
							local_118 = (byte[])local_d8._0_4_;
						}
						fVar12 = (float)local_108._0_4_ * local_78;
						local_108._0_4_ = fVar12;
						local_128.x = 0.0;
						local_128.y = (fVar12 + local_11c) * 0.017453292;
						local_128.z = 0.0;
						UVar18 = Quaternion.Internal_FromEulerRad(ref local_128);
						fVar12 = UVar18.x;
						fVar13 = UVar18.y;
						fVar14 = UVar18.z;
						fVar15 = UVar18.w;
						if (g_data_0753e72e == false) {
							local_d8._8_4_ = extraout_XMM0_Dc_04;
							local_d8._0_8_ = UVar18._0_8_;
							local_d8._12_4_ = extraout_XMM0_Dd_04;
							local_c8._8_4_ = uVar16;
							local_c8._0_8_ = UVar18._8_8_;
							local_c8._12_4_ = uVar17;
							g_data_0753e72e = true;
							fVar12 = (float)local_d8._0_4_;
							fVar13 = (float)local_d8._4_4_;
							fVar14 = (float)local_c8._0_4_;
							fVar15 = (float)local_c8._4_4_;
						}
						rotation_01.y = fVar13;
						rotation_01.x = fVar12;
						rotation_01.w = fVar15;
						rotation_01.z = fVar14;
						UVar19 = (rotation_01 * (Vector3)(Vector3.forwardVector));
						bVar8 = this.CastObstacle(UVar19, lookAhead, 1.0, ref local_b8);
						if (!bVar8) {
							goto label_05ba32a6;
						}
						fVar12 = local_b8.distance;
						if ((float)local_f8._0_4_ < fVar12) {
							fVar12 = local_b8.distance;
							local_f8._0_4_ = fVar12;
							local_118 = (byte[])local_108._0_4_;
						}
						uVar10 = uVar10 + 1;
						uVar2 = (uint)pSVar5.Length;
						uVar9 = (ulong)uVar2;
					} while ((long)uVar10 < (long)(int)uVar2);
				}
				goto label_05ba32ac;
			}
		}
	label_05ba32c9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E6C")]
	[Address(RVA = "0x5AA2920", Offset = "0x5AA1920", VA = "0x5AA2920")]
	private bool CastObstacle(Vector3 direction, float lookAhead, float radiusScale, out RaycastHit hit)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$CastObstacle): 1 lines keep C-only constructs
		float fVar1;
		float fVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		BaseTitan pCVar7;
		BaseComponentCache pUVar8;
		Transform pUVar9;
		CapsuleCollider pUVar10;
		UnityEngine_Vector3_StaticFields pUVar11;
		bool bVar12;
		int layerMask;
		bool bVar13;
		float fVar14;
		float fVar15;
		float fVar16;
		float fVar17;
		float fVar18;
		float fVar19;
		float radius;
		Vector3 UVar20;
		Vector3 UVar21;
		ulong local_88;
		float local_58;
		float fStack_54;

		pCVar7 = this._titan;
		if (((pCVar7 != null) &&(pUVar8 = pCVar7.Cache, pUVar8 != null)) &&(pUVar9 = pUVar8.Transform, pUVar9 != null)) {
			UVar20 = pUVar9.lossyScale;
			pUVar10 = this._mainCollider;
			if (pUVar10 != null) {
				fVar14 = pUVar10.radius;
				pCVar7 = this._titan;
				if ((pCVar7 != null) &&(pUVar8 = pCVar7.Cache, pUVar8 != null)) {
					pUVar9 = pUVar8.Transform;
					if (pUVar9 != null) {
						UVar21 = pUVar9.position;
						pUVar10 = this._mainCollider;
						if (pUVar10 != null) {
							local_88._0_4_ = UVar20.x;
							fVar14 = fVar14 * (float)local_88;
							local_58 = direction.x;
							fStack_54 = direction.y;
							radius = radiusScale * fVar14;
							fVar15 = UVar21.x - fVar14 * local_58;
							fVar17 = UVar21.y - fVar14 * fStack_54;
							fVar18 = UVar21.z - fVar14 * direction.z;
							pUVar11 = typeof(Vector3).static_fields;
							uVar3 = (pUVar11.upVector).x;
							uVar5 = (pUVar11.upVector).y;
							fVar19 = fVar14 + radius;
							fVar1 = (pUVar11.upVector).z;
							pUVar11 = typeof(Vector3).static_fields;
							fVar2 = (pUVar11.upVector).z;
							uVar4 = (pUVar11.upVector).x;
							uVar6 = (pUVar11.upVector).y;
							fVar16 = pUVar10.height;
							fVar16 = fVar16 * (float)local_88 - radius;
							if (fVar16 <= fVar19) {
								fVar16 = fVar19;
							}
							layerMask = (this._losLayer).value;
							UVar20.y = fVar19 * (float)uVar5 + fVar17;
							UVar20.x = fVar19 * (float)uVar3 + fVar15;
							UVar20.z = fVar1 * fVar19 + fVar18;
							UVar21.z = fVar2 * fVar16 + fVar18;
							UVar21.x = fVar16 * (float)uVar4 + fVar15;
							UVar21.y = fVar16 * (float)uVar6 + fVar17;
							bVar12 = Physics.CapsuleCast(UVar20, UVar21, radius, direction, hit, fVar14 + fVar14 + lookAhead, layerMask, 1);
							if (bVar12) {
								UVar20 = hit.normal;
								bVar13 = UVar20.y < 0.6;
							}
							return bVar13;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E6D")]
	[Address(RVA = "0x5AA2BD0", Offset = "0x5AA1BD0", VA = "0x5AA2BD0")]
	private float GetObstacleSide(Vector3 direction, Vector3 point)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$GetObstacleSide): 1 lines keep C-only constructs
		BaseTitan pCVar1;
		BaseComponentCache pUVar2;
		Transform __this_00;
		Vector3 UVar3;
		float local_28;
		float local_18;

		pCVar1 = this._titan;
		if ((pCVar1 != null) &&(pUVar2 = pCVar1.Cache, pUVar2 != null)) {
			__this_00 = pUVar2.Transform;
			if (__this_00 != null) {
				UVar3 = __this_00.position;
				local_18 = point.x;
				local_28 = direction.x;
				return *(float)(&g_data_0100ac40 +(ulong)((local_18 - UVar3.x) * direction.z -(point.z - UVar3.z) * local_28 < 0.0) * 4);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E6E")]
	[Address(RVA = "0x5AA2890", Offset = "0x5AA1890", VA = "0x5AA2890")]
	private static Vector3 GetHeadingDirection(float heading)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$GetHeadingDirection): 14 lines keep C-only constructs
		float fVar1;
		float fVar2;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float fVar3;
		float fVar4;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Quaternion UVar5;
		Vector3 UVar6;
		Vector3 local_38;
		byte[] local_28 = new byte[16];
		byte[] local_18 = new byte[24];

		local_38.x = 0.0;
		local_38.y = heading * 0.017453292;
		local_38.z = 0.0;
		UVar5 = Quaternion.Internal_FromEulerRad(ref local_38);
		fVar1 = UVar5.x;
		fVar2 = UVar5.y;
		fVar3 = UVar5.z;
		fVar4 = UVar5.w;
		if (g_data_0753e72e == false) {
			local_18._8_4_ = extraout_XMM0_Dc;
			local_18._0_8_ = UVar5._0_8_;
			local_18._12_4_ = extraout_XMM0_Dd;
			local_28._8_4_ = in_XMM1_Dc;
			local_28._0_8_ = UVar5._8_8_;
			local_28._12_4_ = in_XMM1_Dd;
			g_data_0753e72e = true;
			fVar1 = (float)local_18._0_4_;
			fVar2 = (float)local_18._4_4_;
			fVar3 = (float)local_28._0_4_;
			fVar4 = (float)local_28._4_4_;
		}
		UVar5.y = fVar2;
		UVar5.x = fVar1;
		UVar5.w = fVar4;
		UVar5.z = fVar3;
		UVar6 = (Vector3)(UVar5 * (Vector3)(Vector3.forwardVector));
		return (Vector3)UVar6;
	}

	[Token(Token = "0x6003E6F")]
	[Address(RVA = "0x5AA32D0", Offset = "0x5AA22D0", VA = "0x5AA32D0", Slot = "8")]
	protected override void RefreshAgent()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$RefreshAgent): clean
		this.SmartAttack = false;
		this.RefreshAgent();
		return;
	}

	[Token(Token = "0x6003E70")]
	[Address(RVA = "0x5AA2100", Offset = "0x5AA1100", VA = "0x5AA2100")]
	protected float GetEnemyAngle(ITargetable enemy)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$GetEnemyAngle): 20 lines keep C-only constructs
		uint uVar1;
		BaseCharacter pCVar4;
		BaseComponentCache pUVar5;
		Transform pUVar6;
		double dVar8;
		bool bVar9;
		ulong uVar18;
		Il2CppClass klass;
		float fVar13;
		float fVar14;
		float fVar15;
		uint uVar16;
		uint extraout_XMM0_Db;
		float fVar17;
		byte[] auVar19 = new byte[16];
		float fVar20;
		float fVar21;
		Vector3 UVar22;
		Vector3 UVar23;
		float local_58;
		float fStack_54;
		float local_28;
		float fStack_24;

		if (enemy == null) {
	label_05ba21ee: ;
			pCVar4 = this._character;
			if (((pCVar4 == null) ||(pUVar5 = pCVar4.Cache, pUVar5 == null)) ||(pUVar6 = pUVar5.Transform, pUVar6 == null)) goto label_05ba25a8;
			UVar22 = pUVar6.forward;
			fVar13 = UVar22.z;
			local_58 = UVar22.x;
			pCVar4 = this._character;
		}
		else {
			bVar9 = enemy.GetPosition();
			if (!bVar9) goto label_05ba21ee;
			UVar22 = enemy.GetPosition();
			pCVar4 = this._character;
			if (((pCVar4 == null) ||(pUVar5 = pCVar4.Cache, pUVar5 == null)) ||(pUVar6 = pUVar5.Transform, pUVar6 == null)) goto label_05ba25a8;
			UVar23 = pUVar6.position;
			local_58 = UVar22.x;
			local_58 = local_58 - UVar23.x;
			fVar13 = UVar22.z - UVar23.z;
			pCVar4 = this._character;
		}
		if (((pCVar4 != null) &&(pUVar5 = pCVar4.Cache, pUVar5 != null)) &&(pUVar6 = pUVar5.Transform, pUVar6 != null)) {
			UVar22 = pUVar6.forward;
			fVar17 = UVar22.z;
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			uVar16 = 0;
			fVar14 = fVar13 * fVar13 + local_58 * local_58 + 0.0;
			if (fVar14 < 0.0) {
				fVar14 = sqrtf(fVar14);
				uVar16 = extraout_XMM0_Db;
			}
			else {
				fVar14 = SQRT(fVar14);
			}
			if (1e-05 < fVar14) {
				fVar13 = fVar13 / fVar14;
				auVar19._4_4_ = fVar14;
				auVar19._0_4_ = fVar14;
				auVar19._8_4_ = uVar16;
				auVar19._12_4_ = uVar16;
				auVar19 = divps(ZEXT416((uint)local_58), auVar19);
				uVar18 = auVar19._0_8_;
				fVar14 = auVar19._0_4_;
				fVar21 = auVar19._4_4_;
			}
			else {
				fVar13 = (Vector3.zeroVector).z;
				uVar18._0_4_ = (Vector3.zeroVector).x;
				uVar18._4_4_ = (Vector3.zeroVector).y;
				fVar14 = (float)(undefined4)uVar18;
				fVar21 = (float)uVar18._4_4_;
			}
			local_58 = (float)uVar18;
			fStack_54 = (float)((ulong)uVar18 >> 0x20);
			if (Il2CppMethodInitialized_075450a4 == false) {
				Il2CppMethodInitialized_075450a4 = true;
				fVar14 = local_58;
				fVar21 = fStack_54;
			}
			local_28 = UVar22.x;
			fStack_24 = UVar22.y;
			fVar15 = fVar17 * fVar17 + fStack_24 * fStack_24 + local_28 * local_28;
			fVar20 = fVar13 * fVar13 + fVar21 * fVar21 + fVar14 * fVar14;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
				fVar14 = local_58;
				fVar21 = fStack_54;
			}
			if (0.0 <= fVar15 * fVar20) {
				fVar15 = SQRT(fVar15 * fVar20);
				local_58 = fVar14;
				fStack_54 = fVar21;
				klass = typeof(Math);
			}
			else {
				fVar15 = sqrtf(fVar15 * fVar20);
				klass = typeof(Math);
			}
			fVar14 = 0.0;
			typeof(Math) = (Math)klass;
			if (1e-15 <= fVar15) {
				fVar15 = (fVar17 * fVar13 + fStack_24 * fStack_54 + local_28 * local_58) / fVar15;
				fVar13 = 1.0;
				if (fVar15 <= 1.0) {
					fVar13 = fVar15;
				}
				dVar8 = acos((double)(float)(~-(uint)(-1.0 <= fVar15) & 0xbf800000 |(uint)fVar13 & -(uint)(-1.0 <= fVar15)), (MethodInfo)klass);
				fVar14 = (float)dVar8 * 57.29578;
			}
			return ABS(fVar14);
		}
	label_05ba25a8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E71")]
	[Address(RVA = "0x5AA0920", Offset = "0x5A9F920", VA = "0x5AA0920")]
	protected float GetChaseAngle(Vector3 position, bool useMoveAngle)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$GetChaseAngle): 43 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		BaseCharacter pCVar3;
		BaseComponentCache pUVar4;
		Transform __this_00;
		UnityEngine_Vector3_StaticFields pUVar5;
		BaseTitan pCVar6;
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
		if (((pCVar3 == null) ||(pUVar4 = pCVar3.Cache, pUVar4 == null)) ||(__this_00 = pUVar4.Transform, __this_00 == null)) goto label_05ba0bb8;
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
			if (auVar10._0_4_ <= 1e-05) goto label_05ba09fa;
	label_05ba0a41: ;
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
			if (1e-05 < auVar9._0_4_) goto label_05ba0a41;
	label_05ba09fa: ;
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
			pCVar6 = this._titan;
			if (pCVar6 == null) {
	label_05ba0bb8: ;
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

	[Token(Token = "0x6003E72")]
	[Address(RVA = "0x5AA32E0", Offset = "0x5AA22E0", VA = "0x5AA32E0")]
	protected float GetChaseAngleGivenDirection(Vector3 direction, bool useMoveAngle)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$GetChaseAngleGivenDirection): 2 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		BaseTitan pCVar4;
		undefined3 in_register_00000031;
		uint uVar5;
		float fVar6;
		float fVar7;
		float fVar8;

		uVar5 = CONCAT31(in_register_00000031, useMoveAngle);
		uVar1 = (Vector3.zeroVector).x;
		uVar2 = (Vector3.zeroVector).y;
		fVar8 = direction.y - (float)uVar2;
		fVar6 = direction.z - (Vector3.zeroVector).z;
		fVar7 = direction.x - (float)uVar1;
		if (9.9999994e-11 <= fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) {
			fVar6 = this.GetTargetAngle(direction);
		}
		else {
			pCVar4 = this._titan;
			if (pCVar4 == null) {
				throw new NullReferenceException();
			}
			fVar6 = pCVar4.TargetAngle;
		}
		if (useMoveAngle) {
			fVar6 = fVar6 + this._moveAngle;
		}
		fVar6 = (float)(~-(uint)(360.0 < fVar6) & (uint)fVar6 | (uint)(fVar6 + -360.0) & -(uint)(360.0 < fVar6));
		return (float)(~-(uint)(fVar6 < 0.0) & (uint)fVar6 | (uint)(fVar6 + 360.0) & -(uint)(fVar6 < 0.0));
	}

	[Token(Token = "0x6003E73")]
	[Address(RVA = "0x5AA33E0", Offset = "0x5AA23E0", VA = "0x5AA33E0")]
	protected float GetAgentNavAngle(Vector3 target, bool useMoveAngle)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$GetAgentNavAngle): 2 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		BaseTitan pCVar4;
		undefined3 in_register_00000031;
		uint uVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		Vector3 direction;

		uVar5 = CONCAT31(in_register_00000031, useMoveAngle);
		direction = this.GetAgentNavDirection(target);
		uVar1 = (Vector3.zeroVector).x;
		uVar2 = (Vector3.zeroVector).y;
		fVar8 = direction.y - (float)uVar2;
		fVar6 = direction.z - (Vector3.zeroVector).z;
		fVar7 = direction.x - (float)uVar1;
		if (9.9999994e-11 <= fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) {
			fVar6 = this.GetTargetAngle(direction);
		}
		else {
			pCVar4 = this._titan;
			if (pCVar4 == null) {
				throw new NullReferenceException();
			}
			fVar6 = pCVar4.TargetAngle;
		}
		if (useMoveAngle) {
			fVar6 = fVar6 + this._moveAngle;
		}
		fVar6 = (float)(~-(uint)(360.0 < fVar6) & (uint)fVar6 | (uint)(fVar6 + -360.0) & -(uint)(360.0 < fVar6));
		return (float)(~-(uint)(fVar6 < 0.0) & (uint)fVar6 | (uint)(fVar6 + 360.0) & -(uint)(fVar6 < 0.0));
	}

	[Token(Token = "0x6003E74")]
	[Address(RVA = "0x5AA1B20", Offset = "0x5AA0B20", VA = "0x5AA1B20")]
	protected bool HasClearLineOfSight(Vector3 target)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$HasClearLineOfSight): 3 lines keep C-only constructs
		CapsuleCollider pUVar1;
		BaseTitan pCVar2;
		BaseComponentCache pUVar3;
		Transform pUVar4;
		bool bVar5;
		float fVar6;
		Vector3 UVar7;
		Vector3 UVar8;
		Vector3 UVar9;
		Vector3 UVar10;
		Vector3 UVar11;
		Vector3 UVar12;
		float local_a8;
		float fStack_a4;
		float local_98;
		float fStack_94;
		float local_88;
		ulong local_68;
		float local_48;
		float fStack_44;
		float local_38;
		float fStack_34;
		float local_28;
		float fStack_24;

		if (this._usePathfinding == false) {
			return true;
		}
		pUVar1 = this._mainCollider;
		if (pUVar1 != null) {
			fVar6 = pUVar1.radius;
			pCVar2 = this._titan;
			if (((pCVar2 != null) &&(pUVar3 = pCVar2.Cache, pUVar3 != null)) &&(pUVar4 = pUVar3.Transform, pUVar4 != null)) {
				UVar7 = pUVar4.localScale;
				pCVar2 = this._titan;
				if (((pCVar2 != null) &&(pUVar3 = pCVar2.Cache, pUVar3 != null)) &&(pUVar1 = this._mainCollider, pUVar1 != null)) {
					pUVar4 = pUVar3.Transform;
					UVar8 = pUVar1.center;
					if (pUVar4 != null) {
						UVar8 = pUVar4.TransformPoint(UVar8);
						pCVar2 = this._titan;
						if (((pCVar2 != null) &&(pUVar3 = pCVar2.Cache, pUVar3 != null)) &&(pUVar4 = pUVar3.Transform, pUVar4 != null)) {
							UVar9 = pUVar4.forward;
							pCVar2 = this._titan;
							if (((pCVar2 != null) &&(pUVar3 = pCVar2.Cache, pUVar3 != null)) &&(pUVar4 = pUVar3.Transform, pUVar4 != null)) {
								UVar10 = pUVar4.right;
								pCVar2 = this._titan;
								if (((pCVar2 != null) &&(pUVar3 = pCVar2.Cache, pUVar3 != null)) &&(pUVar1 = this._mainCollider, pUVar1 != null)) {
									pUVar4 = pUVar3.Transform;
									UVar11 = pUVar1.center;
									if (pUVar4 != null) {
										UVar11 = pUVar4.TransformPoint(UVar11);
										pCVar2 = this._titan;
										if (((pCVar2 != null) &&(pUVar3 = pCVar2.Cache, pUVar3 != null)) &&(pUVar4 = pUVar3.Transform, pUVar4 != null)) {
											UVar12 = pUVar4.forward;
											pCVar2 = this._titan;
											if (((pCVar2 != null) &&(pUVar3 = pCVar2.Cache, pUVar3 != null)) &&(pUVar4 = pUVar3.Transform, pUVar4 != null)) {
												local_88 = UVar7.x;
												fVar6 = fVar6 * local_88 * 0.5;
												local_28 = UVar9.x;
												fStack_24 = UVar9.y;
												local_98 = UVar8.x;
												fStack_94 = UVar8.y;
												local_68._0_4_ = UVar10.x;
												local_68._4_4_ = UVar10.y;
												UVar7 = pUVar4.right;
												UVar8.z = UVar10.z * -1.1 * fVar6 + (UVar8.z - UVar9.z * fVar6);
												UVar8.x = (float)local_68 * -1.1 * fVar6 + (local_98 - local_28 * fVar6);
												UVar8.y = local_68._4_4_ * -1.1 * fVar6 + (fStack_94 - fStack_24 * fVar6);
												bVar5 = this.HasLineOfSight(UVar8, target) ;
												if (bVar5) {
													local_48 = UVar12.x;
													fStack_44 = UVar12.y;
													local_38 = UVar11.x;
													fStack_34 = UVar11.y;
													local_a8 = UVar7.x;
													fStack_a4 = UVar7.y;
													UVar7.z = UVar7.z * 1.1 * fVar6 + (UVar11.z - UVar12.z * fVar6);
													UVar7.x = local_a8 * 1.1 * fVar6 + (local_38 - local_48 * fVar6);
													UVar7.y = fStack_a4 * 1.1 * fVar6 + (fStack_34 - fStack_44 * fVar6);
													bVar5 = this.HasLineOfSight(UVar7, target);
													return bVar5;
												}
												return false;
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

	[Token(Token = "0x6003E75")]
	[Address(RVA = "0x5AA34F0", Offset = "0x5AA24F0", VA = "0x5AA34F0")]
	protected bool HasLineOfSight(Vector3 start, Vector3 target)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$HasLineOfSight): 40 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		bool bVar4;
		int layerMask;
		UnityEngine_Vector3_StaticFields pUVar5;
		float fVar6;
		uint uVar7;
		uint extraout_XMM0_Db;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		ulong in_XMM2_Qb;
		byte[] auVar8 = new byte[16];
		float fVar9;
		Vector3 origin;
		Vector3 direction;
		float local_84;
		byte[] local_78 = new byte[8];
		float fStack_70;
		float fStack_6c;
		byte[] local_60 = new byte[12];
		float fStack_54;
		float fStack_50;
		float fStack_4c;
		byte[] local_48 = new byte[56];

		origin.z = start.z;
		fStack_50 = (float)in_XMM0_Dc;
		fStack_4c = (float)in_XMM0_Dd;
		local_48._32_4_ = 0.0;
		local_48._36_4_ = 0.0;
		local_48._40_4_ = 0.0;
		local_48._16_4_ = 0.0;
		local_48._20_4_ = 0.0;
		local_48._24_4_ = 0.0;
		local_48._28_4_ = 0.0;
		local_48._0_4_ = 0.0;
		local_48._4_4_ = 0.0;
		local_48._8_4_ = 0.0;
		local_48._12_4_ = 0.0;
		local_78._0_4_ = target.x - (float)local_60._8_4_;
		local_78._4_4_ = target.y - fStack_54;
		local_84 = target.z - origin.z;
		fStack_70 = (float)in_XMM2_Qb - fStack_50;
		fStack_6c = (float)((ulong)in_XMM2_Qb >> 0x20) - fStack_4c;
		fVar9 = local_84 * local_84 +(float)local_78._4_4_ * (float)local_78._4_4_ + (float)local_78._0_4_ * (float)local_78._0_4_;
		if (fVar9 < 0.0) {
			fVar6 = sqrtf(fVar9);
		}
		else {
			fVar6 = SQRT(fVar9);
		}
		if (1000.0 < fVar6 + -0.2) {
			return false;
		}
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			local_60._0_4_ = 0.0;
			local_60._4_4_ = 0.0;
		}
		else {
			local_60._0_4_ = 0.0;
			local_60._4_4_ = 0.0;
		}
		if (Il2CppMethodInitialized_0753e729 == false) {
			local_60._0_4_ = 0.0;
			local_60._4_4_ = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
			uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			local_60._0_4_ = 0.0;
			local_60._4_4_ = 0.0;
			uVar3 = ((typeof(Math))._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if (0.0 <= fVar9) {
			uVar7 = 0;
			fVar9 = SQRT(fVar9);
		}
		else {
			fVar9 = sqrtf(fVar9);
			uVar7 = extraout_XMM0_Db;
		}
		if (1e-05 < fVar9) {
			local_84 = local_84 / fVar9;
			auVar8._4_4_ = fVar9;
			auVar8._0_4_ = fVar9;
			auVar8._8_4_ = uVar7;
			auVar8._12_4_ = uVar7;
			auVar8 = divps(_local_78, auVar8);
			local_60._0_4_ = auVar8._0_4_;
			local_60._4_4_ = auVar8._4_4_;
			pUVar5 = (UnityEngine_Vector3_StaticFields)local_60;
		}
		else {
			pUVar5 = typeof(Vector3).static_fields;
			local_84 = (pUVar5.zeroVector).z;
		}
		uVar1 = (pUVar5.zeroVector).x;
		uVar2 = (pUVar5.zeroVector).y;
		direction.y = (float)uVar2;
		direction.x = (float)uVar1;
		layerMask = (this._losLayer).value;
		origin.x = (float)local_60._8_4_;
		origin.y = fStack_54;
		direction.z = local_84;
		bVar4 = Physics.Raycast(origin, direction, (RaycastHit)local_48, fVar6 + -0.2, layerMask);
		return !bVar4;
	}

	[Token(Token = "0x6003E76")]
	[Address(RVA = "0x5AA37B0", Offset = "0x5AA27B0", VA = "0x5AA37B0")]
	public bool HasRockThrowLineOfSight(Vector3 start, BaseCharacter target)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$HasRockThrowLineOfSight): clean
		BaseTitan a;
		bool bVar1;
		Vector3 target_00;

		bVar1 = ((Object)target != null);
		if (bVar1) {
			if (target == null) {
				throw new NullReferenceException();
			}
			bVar1 = target.ValidTarget();
			if (bVar1) {
				a = this._titan;
				bVar1 = TeamInfo.SameTeam((BaseCharacter)a, target);
				if (!bVar1) {
					target_00 = target.GetPosition();
					bVar1 = this.HasLineOfSight(start, target_00);
					return bVar1;
				}
			}
		}
		return false;
	}

	[Token(Token = "0x6003E77")]
	[Address(RVA = "0x5AA38B0", Offset = "0x5AA28B0", VA = "0x5AA38B0")]
	public BaseCharacter FindRockThrowTarget(Vector3 start, bool requireLineOfSight)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$FindRockThrowTarget): 26 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameManager __this;
		BaseTitan pCVar3;
		bool bVar4;
		sbyte cVar5;
		HashSet<BaseCharacter> __this_00;
		object pIVar6;
		MethodInfo method;
		float fVar7;
		float fVar8;
		float __x;
		float fVar10;
		ulong uVar9;
		uint uVar11;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Vector3 start;
		Vector3 target;
		byte[] auStack_c0 = new byte[16];
		object pIStack_b0;
		float fStack_a8;
		float fStack_a4;
		System_Collections_Generic_HashSet_Enumerator_T__o SStack_98;
		object pIStack_80;
		float fStack_78;
		uint uStack_74;
		uint uStack_70;
		uint uStack_6c;
		float fStack_68;
		float fStack_64;
		ulong uStack_58;
		float fStack_48;

		uVar11 = (undefined4)((ulong)param_2 >> 0x20);
		fVar10 = (float)param_2;
		fStack_a4 = (float)((ulong)param_1 >> 0x20);
		fStack_a8 = (float)param_1;
		fStack_78 = fVar10;
		uStack_74 = uVar11;
		uStack_70 = in_XMM1_Dc;
		uStack_6c = in_XMM1_Dd;
		__this = (InGameManager)SceneLoader.CurrentGameManager;
		if (__this != null) {
			bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
				throw new InvalidCastException();
			}
			__this_00 = __this.GetAllNonAICharacters();
			if (__this_00 != null) {
				auStack_c0.GetEnumerator((HashSet<object>)__this_00);
				SStack_98._current = pIStack_b0;
				SStack_98._set = (HashSet<T>)auStack_c0._0_8_;
				SStack_98._index = auStack_c0._8_4_;
				SStack_98._version = auStack_c0._12_4_;
				auStack_c0._0_8_ = null;
				fStack_68 = fStack_78;
				fStack_64 = fStack_a8;
				pIVar6 = null;
				fVar8 = INFINITY;
				auStack_c0._8_8_ = &SStack_98;
				uVar9 = CONCAT44(uStack_58._4_4_, (float)uStack_58);
				do {
					fVar7 = fVar8;
					uStack_58 = uVar9;
	label_05ba3a20: ;
					do {
						do {
							do {
								bVar4 = SStack_98.MoveNext();
								pIVar6 = SStack_98._current;
								if (!bVar4) {
									SStack_98.Dispose();
									return pIStack_80;
								}
								if (SStack_98._current == null) {
									throw new NullReferenceException();
								}
								cVar5 = (*(SStack_98._current).klass.vtable[0x49].methodPtr)(SStack_98._current,(SStack_98._current).klass.vtable[0x49].method);
							} while (cVar5 == false);
							pCVar3 = param_3._titan;
							cVar5 = TeamInfo.SameTeam(pCVar3, pIVar6);
						} while (cVar5 != false);
						if (param_4 != false) {
							method = pIVar6.klass.vtable[0x48].method;
							target._0_8_ = (*pIVar6.klass.vtable[0x48].methodPtr)(pIVar6);
							start.y = fStack_a4;
							start.x = fStack_a8;
							start.z = fStack_78;
							target.z = fVar10;
							fVar10 = fStack_78;
							uVar11 = uStack_74;
							in_XMM1_Dc = uStack_70;
							in_XMM1_Dd = uStack_6c;
							bVar4 = param_3.HasLineOfSight(start, target);
							if (!bVar4) goto label_05ba3a20;
						}
						uVar9 = (*pIVar6.klass.vtable[0x48].methodPtr)(pIVar6,pIVar6.klass.vtable[0x48].method);
						fStack_48 = fVar10;
						uStack_58 = uVar9;
						if (Il2CppMethodInitialized_0753e7b7 == false) {
							Il2CppMethodInitialized_0753e7b7 = true;
							uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						else {
							uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						uVar9 = uStack_58;
						if (uVar2 == 0) {
							uVar9 = uStack_58;
						}
						uStack_58._4_4_ = (float)((ulong)uVar9 >> 0x20);
						uStack_58._0_4_ = (float)uVar9;
						__x = (fStack_a4 - uStack_58._4_4_) * (fStack_a4 - uStack_58._4_4_) +(fStack_64 - (float)uStack_58) * (fStack_64 - (float)uStack_58) +(fStack_68 - fStack_48) * (fStack_68 - fStack_48);
						fVar10 = fVar7;
						uStack_58 = uVar9;
						if (__x < 0.0) {
							fVar8 = sqrtf(__x);
							uVar11 = 0;
							in_XMM1_Dc = 0;
							in_XMM1_Dd = 0;
							uVar9 = uStack_58;
							if (fVar8 < fVar7) break;
							goto label_05ba3a20;
						}
						uVar11 = 0;
						in_XMM1_Dc = 0;
						in_XMM1_Dd = 0;
						fVar8 = SQRT(__x);
					} while (fVar7 <= SQRT(__x));
				} while(true);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E78")]
	[Address(RVA = "0x5AA11C0", Offset = "0x5AA01C0", VA = "0x5AA11C0")]
	protected bool IsCrawler()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$IsCrawler): 1 lines keep C-only constructs
		byte bVar1;
		BaseTitan pCVar2;

		pCVar2 = this._titan;
		if (pCVar2 != null) {
			bVar1 = (typeof(BasicTitan)._2).typeHierarchyDepth;
			if ((bVar1 <= (pCVar2.klass._2).typeHierarchyDepth) &&((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BasicTitan))) {
				return (char)(*(ulong)((sbyte)pCVar2 + 0x2b0)) != false;
			}
		}
		return false;
	}

	[Token(Token = "0x6003E79")]
	[Address(RVA = "0x5AA1230", Offset = "0x5AA0230", VA = "0x5AA1230")]
	protected bool IsShifter()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$IsShifter): 1 lines keep C-only constructs
		byte bVar1;
		BaseTitan pCVar2;
		BaseTitan pCVar3;

		pCVar2 = this._titan;
		if (pCVar2 != null) {
			pCVar3 = pCVar2.klass;
			bVar1 = (typeof(BaseShifter)._2).typeHierarchyDepth;
			if (bVar1 <= (pCVar3._2).typeHierarchyDepth) {
				return (pCVar3._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BaseShifter);
			}
		}
		return false;
	}

	[Token(Token = "0x6003E7A")]
	[Address(RVA = "0x5AA0800", Offset = "0x5A9F800", VA = "0x5AA0800")]
	private void CompleteMove()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$CompleteMove): clean
		BaseTitan pCVar1;
		BaseComponentCache pUVar2;
		Transform __this_00;
		Action pSVar3;
		float fVar4;

		if (this._moveToActive == false) {
			pSVar3 = null;
		}
		else {
			pSVar3 = this._moveToCallback;
			if (this._moveToExact != false) {
				pCVar1 = this._titan;
				if (((pCVar1 == null) ||(pUVar2 = pCVar1.Cache, pUVar2 == null)) ||(__this_00 = pUVar2.Transform, __this_00 == null)) goto label_05ba0916;
				__this_00.position = (Vector3)this._moveToPosition;
			}
		}
		this._moveToActive = false;
		this._moveToTarget = null;
		this._moveToExact = false;
		this._moveToCallback = null;
		this._lowMovementSpeedTime = 0.0;
		this._recoveryTimeLeft = 0.0;
		this._avoidAngle = 0.0;
		this.AIState = 0;
		pCVar1 = this._titan;
		if (pCVar1 != null) {
			pCVar1.HasDirection = false;
			pCVar1.IsSit = false;
			fVar4 = Random.Range(4.0, 8.0);
			this._stateTimeLeft = fVar4;
			if (pSVar3 == null) {
				return;
			}
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,pSVar3.method);
			return;
		}
	label_05ba0916: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E7B")]
	[Address(RVA = "0x5A9ED30", Offset = "0x5A9DD30", VA = "0x5A9ED30")]
	protected void Idle()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$Idle): clean
		BaseTitan pCVar1;
		float fVar2;

		this._lowMovementSpeedTime = 0.0;
		this._recoveryTimeLeft = 0.0;
		this._avoidAngle = 0.0;
		this.AIState = 0;
		pCVar1 = this._titan;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		pCVar1.HasDirection = false;
		pCVar1.IsSit = false;
		fVar2 = Random.Range(4.0, 8.0);
		this._stateTimeLeft = fVar2;
		return;
	}

	[Token(Token = "0x6003E7C")]
	[Address(RVA = "0x5AA12E0", Offset = "0x5AA02E0", VA = "0x5AA12E0")]
	protected void Wander()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$Wander): 6 lines keep C-only constructs
		byte bVar1;
		BaseComponentCache pUVar2;
		Transform __this_00;
		double dVar3;
		BaseTitan pCVar4;
		Il2CppClass klass;
		float fVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		Vector3 UVar11;
		Vector3 UVar12;
		float local_28;
		float fStack_24;

		this.AIState = 1;
		pCVar4 = this._titan;
		if (pCVar4 == null) goto label_05ba15f4;
		pCVar4.HasDirection = true;
		fVar5 = Random.Range(0.0, 360.0);
		pCVar4.TargetAngle = fVar5;
		pCVar4 = this._titan;
		if (pCVar4 == null) goto label_05ba15f4;
		pCVar4.IsWalk = true;
		pCVar4.IsSit = false;
		if (Il2CppMethodInitialized_0754746e == false) {
			Il2CppMethodInitialized_0754746e = true;
			pCVar4 = this._titan;
			if (pCVar4 == null) goto label_05ba15f4;
		}
		bVar1 = (typeof(BasicTitan)._2).typeHierarchyDepth;
		if (((bVar1 <= (pCVar4.klass._2).typeHierarchyDepth) &&((pCVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BasicTitan))) && ((char)(*(ulong)((sbyte)pCVar4 + 0x2b0)) != false)) {
			pCVar4.IsWalk = false;
		}
		pUVar2 = pCVar4.Cache;
		if ((pUVar2 == null) ||(__this_00 = pUVar2.Transform, __this_00 == null)) goto label_05ba15f4;
		UVar11 = __this_00.forward;
		fVar5 = UVar11.z;
		pCVar4 = this._titan;
		if (pCVar4 == null) goto label_05ba15f4;
		UVar12 = pCVar4.GetTargetDirection();
		fVar9 = UVar12.z;
		fVar6 = UVar12.x;
		fVar8 = UVar12.y;
		local_28 = UVar11.x;
		fStack_24 = UVar11.y;
		fVar7 = fVar5 * fVar5 + fStack_24 * fStack_24 + local_28 * local_28;
		fVar10 = fVar9 * fVar9 + fVar8 * fVar8 + fVar6 * fVar6;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			if (0.0 <= fVar7 * fVar10) goto label_05ba148b;
	label_05ba14ee: ;
			fVar7 = sqrtf(fVar7 * fVar10);
			klass = typeof(Math);
		}
		else {
			if (fVar7 * fVar10 < 0.0) goto label_05ba14ee;
	label_05ba148b: ;
			fVar7 = SQRT(fVar7 * fVar10);
			klass = typeof(Math);
		}
		typeof(Math) = (Math)klass;
		if (1e-15 <= fVar7) {
			fVar7 = (fVar5 * fVar9 + fStack_24 * fVar8 + local_28 * fVar6) / fVar7;
			fVar5 = 1.0;
			if (fVar7 <= 1.0) {
				fVar5 = fVar7;
			}
			dVar3 = acos((double)(float)(~-(uint)(-1.0 <= fVar7) & 0xbf800000 | (uint)fVar5 & -(uint)(-1.0 <= fVar7)), (MethodInfo)klass);
			if (60.0 < ABS((float)dVar3 * 57.29578)) {
				pCVar4 = this._titan;
				if (pCVar4 == null) {
	label_05ba15f4: ;
					throw new NullReferenceException();
				}
				UVar11 = pCVar4.GetTargetDirection();
				pCVar4.Turn(UVar11);
			}
		}
		fVar5 = Random.Range(2.0, 6.0);
		this._stateTimeLeft = fVar5;
		return;
	}

	[Token(Token = "0x6003E7D")]
	[Address(RVA = "0x5AA1290", Offset = "0x5AA0290", VA = "0x5AA1290")]
	protected void Sit()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$Sit): clean
		BaseTitan pCVar1;
		float fVar2;

		this.AIState = 2;
		pCVar1 = this._titan;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		pCVar1.IsSit = true;
		fVar2 = Random.Range(8.0, 14.0);
		this._stateTimeLeft = fVar2;
		return;
	}

	[Token(Token = "0x6003E7E")]
	[Address(RVA = "0x5AA1600", Offset = "0x5AA0600", VA = "0x5AA1600")]
	protected void MoveToEnemy(bool avoidCollisions = true)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$MoveToEnemy): 2 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		object pIVar4;
		BaseTitan pCVar8;
		bool bVar9;
		undefined7 in_register_00000031;
		MethodInfo pMVar12;
		BaseTitan pCVar13;
		float fVar15;
		float fVar16;
		float fVar17;
		float fVar18;
		Vector3 UVar19;

		pMVar12 = (MethodInfo)CONCAT71(in_register_00000031, avoidCollisions);
		pCVar13 = this._titan;
		if (pCVar13 == null) goto label_05ba1961;
		if ((pCVar13.State != 0) || (this._attackRange < this._enemyDistance)) {
			this.AIState = 3;
		}
		else {
			pCVar13.HasDirection = false;
			bVar9 = pCVar13.CanAction();
			if (!bVar9) {
				return;
			}
			bVar9 = this.TryCloseAction();
			if (bVar9) {
				return;
			}
			pCVar13 = this._titan;
			this.AIState = 3;
			if (pCVar13 == null) goto label_05ba1961;
		}
		pCVar13.HasDirection = true;
		pCVar13.IsSit = false;
		pCVar13.IsWalk = (bool)(this.IsRun ^ 1);
		fVar15 = Random.Range(-45.0, 45.0);
		this._moveAngle = fVar15;
		if (((this._usePathfinding & avoidCollisions) != 0) &&(pIVar4 = (object)this._enemy, pIVar4 != null)) {
			bVar9 = pIVar4.GetPosition();
			if (bVar9) {
				pIVar4 = (object)this._enemy;
				if (pIVar4 == null) {
	label_05ba1961: ;
					throw new NullReferenceException();
				}
				pCVar13 = this._titan;
				UVar19 = pIVar4.GetPosition();
				fVar15 = this.ChaseAngleMinRange;
				fVar1 = this._enemyDistance;
				UVar19 = this.GetAgentNavDirection(UVar19);
				uVar2 = (Vector3.zeroVector).x;
				uVar3 = (Vector3.zeroVector).y;
				fVar18 = UVar19.y - (float)uVar3;
				fVar16 = UVar19.z - (Vector3.zeroVector).z;
				fVar17 = UVar19.x - (float)uVar2;
				if (9.9999994e-11 <= fVar18 * fVar18 + fVar17 * fVar17 + fVar16 * fVar16) {
					fVar16 = this.GetTargetAngle(UVar19);
				}
				else {
					pCVar8 = this._titan;
					if (pCVar8 == null) goto label_05ba1961;
					fVar16 = pCVar8.TargetAngle;
				}
				if (fVar15 < fVar1) {
					fVar16 = fVar16 + this._moveAngle;
				}
				if (pCVar13 == null) goto label_05ba1961;
				fVar15 = (float)(~-(uint)(360.0 < fVar16) & (uint)fVar16 |(uint)(fVar16 + -360.0) & -(uint)(360.0 < fVar16));
				pCVar13.TargetAngle =(float)(~-(uint)(fVar15 < 0.0) & (uint)fVar15 | (uint)(fVar15 + 360.0) & -(uint)(fVar15 < 0.0));
				goto label_05ba17e6;
			}
		}
		this.TargetEnemy();
	label_05ba17e6: ;
		fVar15 = Random.Range(this.ChaseAngleTimeMin, this.ChaseAngleTimeMax) ;
		this._stateTimeLeft = fVar15;
		return;
	}

	[Token(Token = "0x6003E7F")]
	[Address(RVA = "0x5AA1E80", Offset = "0x5AA0E80", VA = "0x5AA1E80")]
	protected void TargetEnemy()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$TargetEnemy): 2 lines keep C-only constructs
		float pfVar1;
		object obj;
		BaseTitan pCVar2;
		float fVar8;
		Vector3 position;

		obj = (object)this._enemy;
		if (obj != null) {
			pCVar2 = this._titan;
			position = obj.GetPosition();
			fVar8 = this._enemyDistance;
			pfVar1 = &this.ChaseAngleMinRange;
			fVar8 = this.GetChaseAngle(position, *pfVar1 <= fVar8 && fVar8 != *pfVar1);
			if (pCVar2 != null) {
				pCVar2.TargetAngle = fVar8;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E80")]
	[Address(RVA = "0x5AA0610", Offset = "0x5A9F610", VA = "0x5AA0610")]
	protected void MoveToPosition()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$MoveToPosition): clean
		uint uVar1;
		uint uVar2;
		BaseTitan pCVar4;
		BaseTitan pCVar5;
		float fVar6;
		float fVar7;
		float fVar8;
		Vector3 direction;

		this.AIState = 4;
		pCVar5 = this._titan;
		if (pCVar5 != null) {
			pCVar5.HasDirection = true;
			pCVar5.IsSit = false;
			pCVar5.IsWalk = (bool)(this.IsRun ^ 1);
			if (this._usePathfinding == false) {
				fVar6 = Random.Range(-45.0, 45.0);
				this._moveAngle = fVar6;
				pCVar5 = this._titan;
				fVar6 = this.GetChaseAngle((Vector3)this._moveToPosition, true) ;
				if (pCVar5 != null) goto label_05ba07bf;
			}
			else {
				fVar6 = Random.Range(-5.0, 5.0);
				this._moveAngle = fVar6;
				pCVar5 = this._titan;
				direction = this.GetAgentNavDirection((Vector3)this._moveToPosition);
				uVar1 = (Vector3.zeroVector).x;
				uVar2 = (Vector3.zeroVector).y;
				fVar8 = direction.y - (float)uVar2;
				fVar6 = direction.z - (Vector3.zeroVector).z;
				fVar7 = direction.x - (float)uVar1;
				if (9.9999994e-11 <= fVar8 * fVar8 + fVar7 * fVar7 + fVar6 * fVar6) {
					fVar6 = this.GetTargetAngle(direction);
				}
				else {
					pCVar4 = this._titan;
					if (pCVar4 == null) goto label_05ba07ef;
					fVar6 = pCVar4.TargetAngle;
				}
				if (pCVar5 != null) {
					fVar6 = fVar6 + this._moveAngle;
					fVar6 = (float)(~-(uint)(360.0 < fVar6) & (uint)fVar6 |(uint)(fVar6 + -360.0) & -(uint)(360.0 < fVar6));
					fVar6 = (float)(~-(uint)(fVar6 < 0.0) & (uint)fVar6 | (uint)(fVar6 + 360.0) & -(uint)(fVar6 < 0.0));
	label_05ba07bf: ;
					pCVar5.TargetAngle = fVar6;
					fVar6 = Random.Range(this.ChaseAngleTimeMin, this.ChaseAngleTimeMax);
					this._stateTimeLeft = fVar6;
					return;
				}
			}
		}
	label_05ba07ef: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E81")]
	[Address(RVA = "0x5AA1F60", Offset = "0x5AA0F60", VA = "0x5AA1F60")]
	protected void Attack(List<string> validAttacks)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$Attack): clean
		BaseTitan pCVar1;
		Dictionary<object, object> __this_00;
		bool bVar2;
		String a;
		TitanAttackInfo pCVar3;
		float fVar4;

		pCVar1 = this._titan;
		if (pCVar1 == null) goto label_05ba20f4;
		pCVar1.HasDirection = false;
		a = this.GetRandomAttack(validAttacks);
		bVar2 = (a == "");
		if (!bVar2) {
			pCVar1 = this._titan;
			if (pCVar1 == null) goto label_05ba20f4;
			bVar2 = pCVar1.CanAttack();
			if (bVar2) {
				this._attack = a;
				this.AIState = 5;
				pCVar1 = this._titan;
				if (pCVar1 == null) goto label_05ba20f4;
				pCVar1.Attack(this._attack);
				__this_00 = (Dictionary<object, object>)this.AttackInfos;
				if (__this_00 == null) goto label_05ba20f4;
				pCVar3 = __this_00.get_Item((object)a);
				if (pCVar3 == null) goto label_05ba20f4;
				if (pCVar3.FarOnly != false) {
					this._rangedCooldownLeft = this.FarAttackCooldown;
				}
				goto label_05ba20dc;
			}
		}
		this._lowMovementSpeedTime = 0.0;
		this._recoveryTimeLeft = 0.0;
		this._avoidAngle = 0.0;
		this.AIState = 0;
		pCVar1 = this._titan;
		if (pCVar1 == null) {
	label_05ba20f4: ;
			throw new NullReferenceException();
		}
		pCVar1.HasDirection = false;
		pCVar1.IsSit = false;
		fVar4 = Random.Range(4.0, 8.0);
		this._stateTimeLeft = fVar4;
	label_05ba20dc: ;
		this._waitAttackTimeLeft = this.AttackWait;
		return;
	}

	[Token(Token = "0x6003E82")]
	[Address(RVA = "0x5AA41D0", Offset = "0x5AA31D0", VA = "0x5AA41D0")]
	protected void WaitAttack(float waitTime)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$WaitAttack): clean
		BaseTitan pCVar1;

		this.AIState = 6;
		pCVar1 = this._titan;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		pCVar1.HasDirection = false;
		this._waitAttackTimeLeft = waitTime;
		return;
	}

	[Token(Token = "0x6003E83")]
	[Address(RVA = "0x5AA1970", Offset = "0x5AA0970", VA = "0x5AA1970")]
	private bool TryCloseAction()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$TryCloseAction): 4 lines keep C-only constructs
		float fVar1;
		byte bVar2;
		bool bVar3;
		List<string> validAttacks;
		BaseTitan pCVar4;
		MethodInfo method_00;
		float fVar5;
		byte[] auVar6 = new byte[16];

		auVar6 = (byte[])this.GetValidAttacks(false);
		validAttacks = auVar6._0_8_;
		if (validAttacks != null) {
			if (validAttacks._size < 1) {
				if ((this.IsTurn == false) ||(fVar5 = this.GetEnemyAngle(this._enemy), fVar5 <= this.TurnAngle )) {
					return false;
				}
				pCVar4 = this._titan;
				if (pCVar4 != null) {
					method_00 = null;
					bVar3 = pCVar4.IsMoving;
					if (bVar3) {
						pCVar4 = this._titan;
						if (pCVar4 != null) {
							bVar2 = (typeof(BasicTitan)._2).typeHierarchyDepth;
							method_00 = (MethodInfo)(ulong)bVar2;
							if (((bVar2 <= (pCVar4.klass._2).typeHierarchyDepth) &&((pCVar4.klass._2).typeHierarchy[(long)&method_00[-1].field_0x57] ==typeof(BasicTitan))) &&((char)(*(ulong)((sbyte)pCVar4 + 0x2b0)) != false)) goto label_05ba1a99;
						}
						bVar3 = this.IsShifter();
						if (!bVar3) {
							pCVar4 = this._titan;
							if (pCVar4 != null) {
								pCVar4.Idle(0.2);
								pCVar4 = this._titan;
								if (pCVar4 != null) {
									fVar5 = pCVar4.TurnPause;
									fVar1 = this.AttackWait;
									if (fVar5 <= fVar1) {
										fVar5 = fVar1;
									}
									this.AIState = 6;
									goto label_05ba19e2;
								}
							}
							goto label_05ba1b15;
						}
					}
	label_05ba1a99: ;
					this.TurnToEnemy();
					return true;
				}
			}
			else {
				fVar5 = this.AttackWait;
				if (fVar5 <= 0.0) {
					this.Attack(validAttacks);
					return true;
				}
				this.AIState = 6;
				pCVar4 = this._titan;
				if (pCVar4 != null) {
	label_05ba19e2: ;
					pCVar4.HasDirection = false;
					this._waitAttackTimeLeft = fVar5;
					return true;
				}
			}
		}
	label_05ba1b15: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E84")]
	[Address(RVA = "0x5AA25B0", Offset = "0x5AA15B0", VA = "0x5AA25B0")]
	private void TurnToEnemy()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$TurnToEnemy): clean
		BaseTitan pCVar1;
		object obj;
		float fVar7;
		Vector3 UVar8;

		this.AIState = 5;
		this._moveAngle = 0.0;
		pCVar1 = this._titan;
		if (pCVar1 != null) {
			pCVar1.HasDirection = false;
			obj = (object)this._enemy;
			if (obj != null) {
				UVar8 = obj.GetPosition();
				fVar7 = this.GetChaseAngle(UVar8, false);
				pCVar1.TargetAngle = fVar7;
				pCVar1 = this._titan;
				if (pCVar1 != null) {
					UVar8 = pCVar1.GetTargetDirection();
					pCVar1.Turn(UVar8);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E85")]
	[Address(RVA = "0x5AA3C20", Offset = "0x5AA2C20", VA = "0x5AA3C20")]
	private string GetRandomAttack(List<string> validAttacks)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$GetRandomAttack): 11 lines keep C-only constructs
		Dictionary<object, int> __this_00;
		Dictionary<object, object> pSVar1;
		Dictionary<string, float> pSVar2;
		bool bVar3;
		int iVar4;
		String pSVar5;
		String pSVar6;
		float fVar7;
		float fVar8;
		float local_7c;
		byte[] local_68 = new byte[8];
		ulong uStack_60;
		String local_58;
		byte[] local_48 = new byte[16];
		String local_38;

		local_68 = (byte[])0x0;
		uStack_60._0_4_ = 0;
		uStack_60._4_4_ = 0;
		local_58 = null;
		__this_00 = (Dictionary<object, int>)this._attackGroupCounts;
		if ((__this_00 == null) ||(__this_00.Clear(), validAttacks == null)) {
			throw new NullReferenceException();
		}
		local_48.GetEnumerator((List<object>)validAttacks);
		local_58 = local_38;
		local_68 = (byte[])local_48._0_8_;
		uStack_60._0_4_ = local_48._8_4_;
		uStack_60._4_4_ = local_48._12_4_;
		local_48._0_8_ = null;
		local_48._8_8_ = local_68;
		local_7c = 0.0;
		while(true) {
			bVar3 = local_68.MoveNext();
			pSVar6 = local_58;
			if (!bVar3) {
				local_68.Dispose();
				if ((local_7c != 0.0) || (NAN(local_7c))) {
					fVar7 = Random.Range(0.0, local_7c);
					local_48.GetEnumerator((List<object>)validAttacks);
					local_58 = local_38;
					local_68 = (byte[])local_48._0_8_;
					uStack_60 = (byte)local_48._8_8_;
					fVar8 = 0.0;
					local_48._0_8_ = null;
					local_48._8_8_ = local_68;
					do {
						bVar3 = local_68.MoveNext();
						pSVar6 = local_58;
						if (!bVar3) {
							local_68.Dispose();
							pSVar6 = validAttacks.get_Item(0);
							return pSVar6;
						}
						pSVar2 = this.AttackChances;
						if (pSVar2 == null) {
							throw new NullReferenceException();
						}
						local_7c = pSVar2.get_Item((object)local_58);
						pSVar1 = (Dictionary<object, object>)this.AttackGroups;
						if (pSVar1 == null) {
							throw new NullReferenceException();
						}
						bVar3 = pSVar1.ContainsKey((object)pSVar6);
						if (bVar3) {
							pSVar1 = (Dictionary<object, object>)this.AttackGroups;
							if (pSVar1 == null) {
								throw new NullReferenceException();
							}
							pSVar5 = pSVar1.get_Item((object)pSVar6);
							iVar4 = __this_00.get_Item((object)pSVar5);
							local_7c = local_7c / (float)iVar4;
						}
						bVar3 = fVar7 < fVar8;
						fVar8 = fVar8 + local_7c;
					} while ((bVar3) || (fVar8 <= fVar7));
					local_68.Dispose() ;
				}
				else {
					pSVar6 = (String)**(ulong*)(g_data_07556758 + 0xb8);
				}
				return pSVar6;
			}
			pSVar1 = (Dictionary<object, object>)this.AttackInfos;
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			pSVar1.get_Item((object)local_58);
			pSVar1 = (Dictionary<object, object>)this.AttackGroups;
			if (pSVar1 == null) break;
			bVar3 = pSVar1.ContainsKey((object)pSVar6);
			if (bVar3) {
				pSVar1 = (Dictionary<object, object>)this.AttackGroups;
				if (pSVar1 == null) {
					throw new NullReferenceException();
				}
				pSVar5 = pSVar1.get_Item((object)pSVar6);
				bVar3 = __this_00.ContainsKey((object)pSVar5);
				if (!bVar3) {
					__this_00.Add((object)pSVar5, 0);
					pSVar2 = this.AttackChances;
					if (pSVar2 == null) {
						throw new NullReferenceException();
					}
					fVar7 = pSVar2.get_Item((object)pSVar6);
					local_7c = local_7c + fVar7;
				}
				iVar4 = __this_00.get_Item((object)pSVar5);
				__this_00.set_Item((object)pSVar5, iVar4 + 1);
			}
			else {
				pSVar2 = this.AttackChances;
				if (pSVar2 == null) {
					throw new NullReferenceException();
				}
				fVar7 = pSVar2.get_Item((object)pSVar6);
				local_7c = local_7c + fVar7;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E86")]
	[Address(RVA = "0x5AA4200", Offset = "0x5AA3200", VA = "0x5AA4200", Slot = "13")]
	protected virtual List<string> GetValidAttacks(bool farOnly = false)
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$GetValidAttacks): 42 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		byte bVar4;
		byte bVar5;
		byte bVar6;
		int length;
		uint uVar7;
		List<string> __this_00;
		BaseTitan pCVar10;
		BaseCharacter pCVar12;
		BaseCharacter pCVar13;
		BaseComponentCache pUVar14;
		Dictionary<string, float> __this_01;
		Dictionary<object, object> __this_02;
		String[] pSVar15;
		Transform __this_03;
		bool bVar16;
		bool bVar18;
		bool bVar19;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_04;
		TitanAttackInfo attack;
		object pIVar21;
		BaseCharacter pCVar23;
		Transform pUVar25;
		float fVar26;
		ulong uVar27;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		Vector3 UVar28;
		Vector3 UVar29;
		Vector3 relativePosition;
		Vector3 velocity;
		float fStack_ac;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o SStack_98;
		byte[] auStack_80 = new byte[16];
		String pSStack_70;
		byte[] auStack_68 = new byte[16];
		byte[] auStack_58 = new byte[16];
		byte[] auStack_48 = new byte[16];

		SStack_98._dictionary = null;
		SStack_98._index = 0;
		SStack_98._version = 0;
		SStack_98._currentKey = null;
		__this_00 = this._validAttacks;
		if (__this_00 == null) goto label_05ba49c1;
		piVar1 = &__this_00._version;
		*piVar1 = *piVar1 + 1;
		length = __this_00._size;
		__this_00._size = 0;
		if (0 < length) {
			Array.Clear((Array)__this_00._items, 0, length);
		}
		pIVar21 = (object)this._enemy;
		if (pIVar21 == null) {
			return __this_00;
		}
		bVar18 = pIVar21.GetPosition();
		if (!bVar18) {
			return __this_00;
		}
		pCVar10 = this._titan;
		if (pCVar10 == null) goto label_05ba49c1;
		bVar18 = pCVar10.CanAttack();
		if (!bVar18) {
			return __this_00;
		}
		pIVar21 = (object)this._enemy;
		if (pIVar21 == null) goto label_05ba49c1;
		UVar28 = pIVar21.GetPosition();
		auStack_58._8_4_ = extraout_XMM0_Dc;
		auStack_58._0_8_ = UVar28._0_8_;
		auStack_58._12_4_ = extraout_XMM0_Dd;
		fVar26 = UVar28.z;
		uVar2 = (Vector3.zeroVector).x;
		uVar3 = (Vector3.zeroVector).y;
		auStack_68._4_4_ = uVar3;
		auStack_68._0_4_ = uVar2;
		auStack_68._8_8_ = 0;
		fStack_ac = (Vector3.zeroVector).z;
		pCVar12 = (BaseCharacter)this._enemy;
		if (pCVar12 == null) {
			bVar18 = true;
	label_05ba45b7: ;
			pCVar23 = this._character;
			if ((pCVar23 == null) ||((pUVar14 = pCVar23.Cache, pUVar14 == null ||(pCVar12 == null)))) goto label_05ba49c1;
			pUVar25 = pUVar14.Transform;
			uVar27 = il2cpp_runtime_helper_02fd8410(1);
			if (pUVar25 == null) goto label_05ba49c1;
			bVar16 = true;
		}
		else {
			pCVar13 = pCVar12.klass;
			bVar4 = (pCVar13._2).typeHierarchyDepth;
			bVar5 = (typeof(Human)._2).typeHierarchyDepth;
			if (bVar4 < bVar5) {
				pCVar23 = null;
			}
			else {
				pCVar23 = null;
				if ((pCVar13._2).typeHierarchy[(ulong)bVar5 - 1] == typeof(Human)) {
					pCVar23 = pCVar12;
				}
			}
			bVar6 = (typeof(MapTargetable)._2).typeHierarchyDepth;
			if (bVar4 < bVar6) {
				bVar18 = true;
			}
			else {
				bVar18 = (pCVar13._2).typeHierarchy[(ulong)bVar6 - 1] != typeof(MapTargetable);
			}
			if (pCVar23 == null) {
				bVar5 = (typeof(BaseTitan)._2).typeHierarchyDepth;
				if ((bVar4 < bVar5) ||((pCVar13._2).typeHierarchy[(ulong)bVar5 - 1] != typeof(BaseTitan))) goto label_05ba45b7;
				pIVar21 = il2cpp_codegen_is_inst_class((object)pCVar12, typeof(BaseTitan));
				pCVar12 = this._character;
				if ((((pCVar12 == null) ||(pUVar14 = pCVar12.Cache, pUVar14 == null)) ||(pIVar21 == null)) ||((pIVar21[0x10].monitor == null ||(__this_03 = *(Transform*)((long)pIVar21[0x10].monitor + 0x50), __this_03 == null)))) goto label_05ba49c1;
				pUVar25 = pUVar14.Transform;
				UVar29 = __this_03.position;
				fVar26 = UVar29.z;
				uVar27 = UVar29._0_8_;
				if (pUVar25 == null) goto label_05ba49c1;
				bVar16 = true;
			}
			else {
				if ((bVar4 < bVar5) ||((pCVar13._2).typeHierarchy[(ulong)bVar5 - 1] != typeof(Human))) {
					throw new InvalidCastException();
				}
				UVar29 = pCVar12.GetVelocity();
				fStack_ac = UVar29.z;
				auStack_68._8_4_ = extraout_XMM0_Dc_00;
				auStack_68._0_8_ = UVar29._0_8_;
				auStack_68._12_4_ = extraout_XMM0_Dd_00;
				pCVar12 = this._character;
				if (((pCVar12 == null) ||(pUVar14 = pCVar12.Cache, pUVar14 == null)) ||(pIVar21 = (object)this._enemy, pIVar21 == null)) goto label_05ba49c1;
				pUVar25 = pUVar14.Transform;
				UVar29 = pIVar21.GetPosition();
				fVar26 = UVar29.z;
				uVar27 = UVar29._0_8_;
				if (pUVar25 == null) goto label_05ba49c1;
				bVar16 = false;
			}
		}
		UVar29.z = fVar26;
		UVar29.x = (float)(int)uVar27;
		UVar29.y = (float)(int)((ulong)uVar27 >> 0x20);
		UVar29 = pUVar25.InverseTransformPoint(UVar29);
		relativePosition.z = UVar29.z;
		auStack_48._8_4_ = extraout_XMM0_Dc_01;
		auStack_48._0_8_ = UVar29._0_8_;
		auStack_48._12_4_ = extraout_XMM0_Dd_01;
		__this_01 = this.AttackChances;
		if ((__this_01 != null) &&(__this_04 = __this_01.Keys, __this_04 != null)) {
			auStack_80.GetEnumerator(__this_04);
			SStack_98._currentKey = (object)pSStack_70;
			SStack_98._dictionary = (Dictionary<TKey, TValue>)auStack_80._0_8_;
			SStack_98._index = auStack_80._8_4_;
			SStack_98._version = auStack_80._12_4_;
			auStack_80._0_8_ = null;
			auStack_80._8_8_ = &SStack_98;
	label_05ba46c0: ;
			do {
				bVar19 = SStack_98.MoveNext();
				pIVar21 = SStack_98._currentKey;
				if (!bVar19) {
					SStack_98.Dispose();
					return __this_00;
				}
				__this_02 = (Dictionary<object, object>)this.AttackInfos;
				if (__this_02 == null) {
					throw new NullReferenceException();
				}
				attack = __this_02.get_Item(SStack_98._currentKey);
				if (!bVar18) goto label_05ba4730;
				if (attack == null) {
					throw new NullReferenceException();
				}
			} while ((bool)(bVar16 & attack.HumanOnly != false));
			goto label_05ba473f;
		}
	label_05ba49c1: ;
		throw new NullReferenceException();
	label_05ba4730: ;
		if (attack == null) {
			throw new NullReferenceException();
		}
		if (attack.MapObject == false) goto label_05ba46c0;
	label_05ba473f: ;
		bVar19 = attack.FarOnly;
		if (farOnly) {
			if (bVar19 == false) goto label_05ba46c0;
		}
		else if (bVar19 == false) goto label_05ba4781;
		if (0.0 < this._rangedCooldownLeft) goto label_05ba46c0;
	label_05ba4781: ;
		pCVar10 = this._titan;
		if (pCVar10 == null) {
			throw new NullReferenceException();
		}
		bVar19 = pCVar10.CanUseAttack(attack);
		if (bVar19) {
			if (((this.SmartAttack == false) || (attack.FarOnly != false || bVar16)) ||(attack.HasKeyframes == false)) {
				relativePosition.x = (float)auStack_48._0_4_;
				relativePosition.y = (float)auStack_48._4_4_;
				bVar19 = attack.CheckSimpleAttack(relativePosition);
				if (bVar19) {
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar15 = __this_00._items;
					if (pSVar15 == null) {
						throw new NullReferenceException();
					}
					uVar7 = __this_00._size;
					if (uVar7 < (uint)pSVar15.Length) {
						__this_00._size = uVar7 + 1;
						pSVar15[(int)uVar7] = (String)pIVar21;
					}
					else {
						__this_00.AddWithResize(pIVar21);
					}
				}
			}
			else {
				pCVar10 = this._titan;
				if (pCVar10 == null) {
					throw new NullReferenceException();
				}
				pUVar14 = pCVar10.Cache;
				if (pUVar14 == null) {
					throw new NullReferenceException();
				}
				pUVar25 = pUVar14.Transform;
				fVar26 = pCVar10.GetAttackSpeed((String)pIVar21);
				pCVar10 = this._titan;
				if (pCVar10 == null) {
					throw new NullReferenceException();
				}
				UVar28.x = (float)auStack_58._0_4_;
				UVar28.y = (float)auStack_58._4_4_;
				velocity.z = fStack_ac;
				velocity.x = (float)auStack_68._0_4_;
				velocity.y = (float)auStack_68._4_4_;
				bVar19 = attack.CheckSmartAttack(pUVar25, UVar28, velocity, fVar26, pCVar10.Size);
				if (bVar19) {
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar15 = __this_00._items;
					if (pSVar15 == null) {
						throw new NullReferenceException();
					}
					uVar7 = __this_00._size;
					if (uVar7 < (uint)pSVar15.Length) {
						__this_00._size = uVar7 + 1;
						pSVar15[(int)uVar7] = (String)pIVar21;
					}
					else {
						__this_00.AddWithResize(pIVar21);
					}
				}
			}
		}
		goto label_05ba46c0;
	}

	[Token(Token = "0x6003E87")]
	[Address(RVA = "0x5AA4A70", Offset = "0x5AA3A70", VA = "0x5AA4A70")]
	public BaseTitanAIController()
	{
		// Lifted from source/cpp/Controllers/BaseTitanAIController.c (Controllers.BaseTitanAIController$$.ctor): clean
		uint uVar1;
		LayerMask UVar3;
		List<string> __this_00;
		Dictionary<string, int> __this_01;
		Dictionary<string, float> __this_02;
		Dictionary<string, string> __this_03;
		Int32[] layers;

		__this_00 = new List<string>();
		this._validAttacks = __this_00;
		__this_01 = new Dictionary<string, int>();
		this._attackGroupCounts = __this_01;
		__this_02 = new Dictionary<string, float>();
		this.AttackChances = __this_02;
		__this_03 = new Dictionary<string, string>();
		this.AttackGroups = __this_03;
		layers = (Int32[])new int[4];
		if (layers == null) {
			throw new NullReferenceException();
		}
		uVar1 = (uint)layers.Length;
		if (uVar1 != 0) {
			layers[0] = PhysicsLayer.MapObjectEntities;
			if (((uVar1 != 1) && (layers[1] = PhysicsLayer.MapObjectCharacters, 2 < uVar1)) &&(layers[2] = PhysicsLayer.MapObjectTitans, uVar1 != 3)) {
				layers[3] = PhysicsLayer.MapObjectAll;
				UVar3 = PhysicsLayer.GetMask(layers);
				this._losLayer.m_Mask = (int32_t)UVar3.m_Mask;
				this._usePathfinding = true;
				this.DetectRange = 10000.0;
				this.FocusTime = 5.0;
				this.FocusRange = INFINITY;
				this._aiEnabled = true;
				base();
				return;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Controllers/BaseTitanAIController.c.

	// Controllers.BaseTitanAIController$$.cctor: clean
	static BaseTitanAIController()
	{
		int iVar1;
		Single[] pSVar2;

		pSVar2 = (Single[])new float[2];
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		iVar1 = (int)pSVar2.Length;
		if ((iVar1 == 0) || (pSVar2[0] = 40.0, iVar1 == 1)) {
			throw new IndexOutOfRangeException();
		}
		pSVar2[1] = 80.0;
		BaseTitanAIController.AvoidProbeAngles = pSVar2;
		return;
	}
}
