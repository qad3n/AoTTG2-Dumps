// ==================== AoTTG2 cross-reference ====================
// Type: Controllers.BaseAIController
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Controllers/BaseAIController.c
// Prior real C# source (older reference): Assets/Scripts/Controllers/BaseAIController.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.AI;

namespace Controllers;

[Token(Token = "0x2000678")]
internal class BaseAIController : MonoBehaviour
{
	[Token(Token = "0x4001CAC")]
	protected const float NavMeshSearchRange = 100f;

	[Token(Token = "0x4001CAD")]
	protected const float ReacquireDelay = 1f;

	[Token(Token = "0x4001CAE")]
	protected const float ReacquireFailDelay = 5f;

	[Token(Token = "0x4001CAF")]
	protected const float RepathDelay = 0.2f;

	[Token(Token = "0x4001CB0")]
	[FieldOffset(Offset = "0x20")]
	protected BaseCharacter _character;

	[Token(Token = "0x4001CB1")]
	[FieldOffset(Offset = "0x28")]
	public bool _usePathfinding;

	[Token(Token = "0x4001CB2")]
	[FieldOffset(Offset = "0x30")]
	protected NavMeshAgent _agent;

	[Token(Token = "0x4001CB3")]
	[FieldOffset(Offset = "0x38")]
	protected bool _setTargetThisFrame;

	[Token(Token = "0x4001CB4")]
	[FieldOffset(Offset = "0x3C")]
	private float _reacquireTimeLeft;

	[Token(Token = "0x4001CB5")]
	[FieldOffset(Offset = "0x40")]
	private float _repathTimeLeft;

	[Token(Token = "0x4001CB6")]
	[FieldOffset(Offset = "0x44")]
	public float DetectRange;

	[Token(Token = "0x4001CB7")]
	[FieldOffset(Offset = "0x48")]
	public float FocusTime;

	[Token(Token = "0x4001CB8")]
	[FieldOffset(Offset = "0x4C")]
	public float FocusRange;

	[Token(Token = "0x4001CB9")]
	[FieldOffset(Offset = "0x50")]
	protected ITargetable _enemy;

	[Token(Token = "0x4001CBA")]
	[FieldOffset(Offset = "0x58")]
	protected float _focusTimeLeft;

	[Token(Token = "0x4001CBB")]
	[FieldOffset(Offset = "0x5C")]
	protected float _updateEnemyTimeLeft;

	[Token(Token = "0x4001CBC")]
	[FieldOffset(Offset = "0x60")]
	protected bool _automaticTargeting;

	[Token(Token = "0x4001CBD")]
	[FieldOffset(Offset = "0x64")]
	protected Vector3 _moveToPosition;

	[Token(Token = "0x4001CBE")]
	[FieldOffset(Offset = "0x70")]
	protected bool _moveToActive;

	[Token(Token = "0x4001CBF")]
	[FieldOffset(Offset = "0x74")]
	protected float _moveToRange;

	[Token(Token = "0x4001CC0")]
	[FieldOffset(Offset = "0x78")]
	protected bool _moveToIgnoreEnemies;

	[Token(Token = "0x4001CC1")]
	[FieldOffset(Offset = "0x80")]
	protected ITargetable _moveToTarget;

	[Token(Token = "0x4001CC2")]
	[FieldOffset(Offset = "0x88")]
	protected float _idleTimeLeft;

	[Token(Token = "0x4001CC3")]
	[FieldOffset(Offset = "0x8C")]
	private bool _aiEnabled;

	[Token(Token = "0x17000AE3")]
	public bool AIEnabled
	{
		[Token(Token = "0x6003E27")]
		[Address(RVA = "0x5A9B340", Offset = "0x5A9A340", VA = "0x5A9B340")]
		get
		{
			// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$get_AIEnabled): clean
			return this._aiEnabled;
		}
		[Token(Token = "0x6003E28")]
		[Address(RVA = "0x5A9B350", Offset = "0x5A9A350", VA = "0x5A9B350")]
		set
		{
			// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$set_AIEnabled): 3 lines keep C-only constructs
			byte bVar1;
			byte bVar2;
			BaseAIController pCVar3;
			BaseCharacter pCVar4;
			float fVar5;

			if (this._aiEnabled != value) {
				this._aiEnabled = value;
				pCVar4 = this._character;
				if (pCVar4 != null) {
					bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
					if ((bVar1 <= (pCVar4.klass._2).typeHierarchyDepth) &&((pCVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BaseTitan)) ) {
						*(bool)&(*(ulong)((sbyte)pCVar4 + 0x298)) = value;
					}
				}
				if (!value) {
					this._enemy = null;
					this._focusTimeLeft = 0.0;
					pCVar4 = this._character;
					if (pCVar4 != null) {
						bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
						if ((bVar1 <= (pCVar4.klass._2).typeHierarchyDepth) &&((pCVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(BaseTitan))) {
							(*(ulong)((sbyte)pCVar4 + 0x168)) = null;
							pCVar4 = this._character;
							if (pCVar4 == null) goto label_05b9b548;
						}
						pCVar4.HasDirection = false;
						pCVar3 = this.klass;
						bVar1 = (pCVar3._2).typeHierarchyDepth;
						bVar2 = (typeof(HumanAIController)._2).typeHierarchyDepth;
						if ((bVar2 <= bVar1) &&((pCVar3._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(HumanAIController))) {
							this.StopInput();
							return;
						}
						bVar2 = (typeof(BaseTitanAIController)._2).typeHierarchyDepth;
						if (bVar1 < bVar2) {
							return;
						}
						if ((pCVar3._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(BaseTitanAIController)) {
							return;
						}
						*(ulong)((long)&(*(ulong)((sbyte)this + 0x128)) + 4) = 0;
						*(uint)&(*(ulong)((sbyte)this + 0x140)) = 0;
						*(uint)&(*(ulong)((sbyte)this + 0x98)) = 0;
						pCVar3 = (*(ulong)((sbyte)this + 0x90));
						if (pCVar3 != null) {
							*(byte)((long)&(pCVar3._2).initializationExceptionGCHandle + 4) = 0;
							*(byte)&(pCVar3._2).vtable_count = 0;
							fVar5 = Random.Range(4.0, 8.0);
							*(float)&(*(byte)((sbyte)this + 0x108)) = fVar5;
							return;
						}
					}
		label_05b9b548: ;
					throw new NullReferenceException();
				}
			}
			return;
		}
	}

	[Token(Token = "0x17000AE4")]
	public bool IsWalking
	{
		[Token(Token = "0x6003E29")]
		[Address(RVA = "0x5A9B650", Offset = "0x5A9A650", VA = "0x5A9B650")]
		get
		{
			// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$get_IsWalking): 3 lines keep C-only constructs
			byte bVar1;
			BaseCharacter pCVar2;

			pCVar2 = this._character;
			if (pCVar2 != null) {
				bVar1 = (typeof(Human)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar2.klass._2).typeHierarchyDepth) &&((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Human))) {
					return *(sbyte)((long)&(*(ulong)((sbyte)pCVar2 + 0x238)) + 4) != false;
				}
			}
			bVar1 = (typeof(BaseTitanAIController)._2).typeHierarchyDepth;
			if ((this.klass._2).typeHierarchyDepth < bVar1) {
				return false;
			}
			if ((this.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(BaseTitanAIController)) {
				return *(sbyte)&(*(uint)((sbyte)this + 0xd0)) == false;
			}
			return false;
		}
		[Token(Token = "0x6003E2A")]
		[Address(RVA = "0x5A9B700", Offset = "0x5A9A700", VA = "0x5A9B700")]
		set
		{
			// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$set_IsWalking): 3 lines keep C-only constructs
			byte bVar1;
			BaseCharacter pCVar2;

			pCVar2 = this._character;
			if (pCVar2 != null) {
				bVar1 = (typeof(Human)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar2.klass._2).typeHierarchyDepth) &&((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Human))) {
					*(bool)((long)&(*(ulong)((sbyte)pCVar2 + 0x238)) + 4) = value;
					return;
				}
			}
			bVar1 = (typeof(BaseTitanAIController)._2).typeHierarchyDepth;
			if (((this.klass._2).typeHierarchyDepth < bVar1) ||((this.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BaseTitanAIController))) {
				return;
			}
			*(bool)&(*(uint)((sbyte)this + 0xd0)) = !value;
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
			if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(BaseTitan))) {
				throw new InvalidCastException();
			}
			(*(byte)((sbyte)pCVar2 + 0x128)) = value;
			return;
		}
	}

	[Token(Token = "0x17000AE5")]
	public bool UsePathfinding
	{
		[Token(Token = "0x6003E2B")]
		[Address(RVA = "0x5A9B800", Offset = "0x5A9A800", VA = "0x5A9B800")]
		get
		{
			// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$get_UsePathfinding): clean
			return this._usePathfinding;
		}
		[Token(Token = "0x6003E2C")]
		[Address(RVA = "0x5A9B810", Offset = "0x5A9A810", VA = "0x5A9B810")]
		set
		{
			// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$set_UsePathfinding): 1 lines keep C-only constructs
			Behaviour __this_00;
			bool bVar1;
			Object pUVar2;

			if (Il2CppMethodInitialized_0754744c == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider) ;
				Il2CppMethodInitialized_0754744c = true;
			}
			this._usePathfinding = value;
			if (value) {
				pUVar2 = (Object)this._agent;
				bVar1 = (pUVar2 == null);
				if (bVar1) {
					bVar1 = MapLoader.HasNavMesh;
					if (bVar1) {
						pUVar2 = (Object)this.GetComponent<CapsuleCollider>();
						bVar1 = (pUVar2 != null);
						if (bVar1) {
							this.CreateAgent((CapsuleCollider)pUVar2, 10.0, 2);
						}
					}
				}
			}
			pUVar2 = (Object)this._agent;
			bVar1 = (pUVar2 != null);
			if (bVar1) {
				__this_00 = (Behaviour)this._agent;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.enabled = value;
				return;
			}
			return;
		}
	}

	[Token(Token = "0x6003E2D")]
	[Address(RVA = "0x5A9BBC0", Offset = "0x5A9ABC0", VA = "0x5A9BBC0")]
	public ITargetable GetTarget()
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$GetTarget): clean
		bool bVar1;

		bVar1 = BaseAIController.IsValidTarget(this._enemy);
		if (bVar1) {
			return this._enemy;
		}
		return null;
	}

	[Token(Token = "0x6003E2E")]
	[Address(RVA = "0x5A9BBE0", Offset = "0x5A9ABE0", VA = "0x5A9BBE0")]
	public static bool IsValidTarget(ITargetable target)
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$IsValidTarget): 2 lines keep C-only constructs
		byte bVar1;
		bool bVar3;
		ITargetable pCVar4;

		if (target == null) {
			return false;
		}
		pCVar4 = target.klass;
		bVar1 = (typeof(Object)._2).typeHierarchyDepth;
		if ((bVar1 <= (pCVar4._2).typeHierarchyDepth) &&((pCVar4._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Object))) {
			bVar3 = ((Object)target != null);
			if (!bVar3) {
				return false;
			}
			pCVar4 = target.klass;
		}
		bVar3 = target.ValidTarget();
		return bVar3;
	}

	[Token(Token = "0x6003E2F")]
	[Address(RVA = "0x5A9BCE0", Offset = "0x5A9ACE0", VA = "0x5A9BCE0")]
	public void SetTarget(ITargetable target, float focusDuration = 0f)
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$SetTarget): 3 lines keep C-only constructs
		byte bVar1;
		BaseCharacter pCVar2;
		BaseTitan pCVar3;
		float fVar4;

		if (enemy == null) {
			this._enemy = null;
			this._focusTimeLeft = 0.0;
			pCVar2 = this._character;
			if (pCVar2 != null) {
				bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar2.klass._2).typeHierarchyDepth) &&((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BaseTitan)) ) {
					(*(ulong)((sbyte)pCVar2 + 0x168)) = null;
					return;
				}
			}
		}
		else {
			this._automaticTargeting = true;
			this._enemy = enemy;
			if ((focusTime == 0.0) && (!NAN(focusTime))) {
				focusTime = this.FocusTime;
			}
			this._focusTimeLeft = focusTime;
			pCVar2 = this._character;
			if (pCVar2 != null) {
				bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar2.klass._2).typeHierarchyDepth) &&((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BaseTitan)) ) {
					(*(ulong)((sbyte)pCVar2 + 0x168)) = (String)enemy;
				}
			}
			this._idleTimeLeft = 0.0;
			bVar1 = (typeof(BaseTitanAIController)._2).typeHierarchyDepth;
			if (((bVar1 <= (this.klass._2).typeHierarchyDepth) &&((this.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(BaseTitanAIController))) && (this.AIState == 7)) {
				this._lowMovementSpeedTime = 0.0;
				this._recoveryTimeLeft = 0.0;
				this._avoidAngle = 0.0;
				this.AIState = 0;
				pCVar3 = this._titan;
				if (pCVar3 == null) {
					throw new NullReferenceException();
				}
				pCVar3.HasDirection = false;
				pCVar3.IsSit = false;
				fVar4 = Random.Range(4.0, 8.0);
				this._stateTimeLeft = fVar4;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6003E30")]
	[Address(RVA = "0x5A9BEF0", Offset = "0x5A9AEF0", VA = "0x5A9BEF0")]
	protected void AssignTarget(ITargetable target, float focusDuration = 0f)
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$AssignTarget): 1 lines keep C-only constructs
		byte bVar1;
		BaseCharacter pCVar2;
		float fVar3;

		this._enemy = target;
		fVar3 = 0.0;
		if (target != null) {
			fVar3 = focusDuration;
			if ((focusDuration == 0.0) && (!NAN(focusDuration))) {
				fVar3 = this.FocusTime;
			}
		}
		this._focusTimeLeft = fVar3;
		pCVar2 = this._character;
		if (pCVar2 != null) {
			bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
			if ((bVar1 <= (pCVar2.klass._2).typeHierarchyDepth) &&((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BaseTitan))) {
				(*(ulong)((sbyte)pCVar2 + 0x168)) = (String)target;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6003E31")]
	[Address(RVA = "0x5A9B550", Offset = "0x5A9A550", VA = "0x5A9B550")]
	public void ClearTarget()
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$ClearTarget): 1 lines keep C-only constructs
		byte bVar1;
		BaseCharacter pCVar2;

		this._enemy = null;
		this._focusTimeLeft = 0.0;
		pCVar2 = this._character;
		if (pCVar2 != null) {
			bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
			if ((bVar1 <= (pCVar2.klass._2).typeHierarchyDepth) &&((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BaseTitan))) {
				(*(ulong)((sbyte)pCVar2 + 0x168)) = null;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6003E32")]
	[Address(RVA = "0x5A9C020", Offset = "0x5A9B020", VA = "0x5A9C020")]
	public void SetDetectRange(float range)
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$SetDetectRange): clean
		float fVar1;

		fVar1 = this.DetectRange;
		if ((fVar1 == range) && (!NAN(fVar1) && !NAN(range))) {
			return;
		}
		this.DetectRange = range;
		this._updateEnemyTimeLeft = 0.0;
		return;
	}

	[Token(Token = "0x6003E33")]
	[Address(RVA = "0x5A9C040", Offset = "0x5A9B040", VA = "0x5A9C040")]
	public ITargetable GetNearestEnemy()
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$GetNearestEnemy): 15 lines keep C-only constructs
		uint uVar1;
		BaseComponentCache pUVar2;
		Transform pUVar3;
		BaseDetection pCVar4;
		List<MapTargetable> __this_00;
		uint uVar5;
		object __this_01;
		bool bVar6;
		BaseCharacter pCVar7;
		float fVar9;
		float fVar10;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float fVar11;
		float fVar12;
		Vector3 UVar13;
		Vector3 UVar14;
		float local_b8;
		float fStack_b4;
		byte[] local_70 = new byte[16];
		BaseCharacter local_60;
		byte[] local_58 = new byte[16];
		System_Collections_Generic_List_Enumerator_object__o local_48;

		pCVar7 = this._character;
		if (((pCVar7 != null) &&(pUVar2 = pCVar7.Cache, pUVar2 != null)) &&(pUVar3 = pUVar2.Transform, pUVar3 != null)) {
			UVar13 = pUVar3.position;
			local_58._8_4_ = extraout_XMM0_Dc;
			local_58._0_8_ = UVar13._0_8_;
			local_58._12_4_ = extraout_XMM0_Dd;
			pCVar7 = this._character;
			if (pCVar7 != null) {
				fVar9 = this.DetectRange;
				pCVar4 = pCVar7.Detection;
				if (pCVar4 == null) {
					pCVar7 = null;
					bVar6 = BaseAIController.IsValidTarget(null);
					if (bVar6) goto label_05b9c3e2;
				}
				else {
					pCVar7 = pCVar4.ClosestEnemy;
					bVar6 = BaseAIController.IsValidTarget((ITargetable)pCVar7);
					if (bVar6) {
						if (((pCVar7 == null) ||(pUVar2 = pCVar7.Cache, pUVar2 == null)) ||(pUVar3 = pUVar2.Transform, pUVar3 == null)) goto label_05b9c3e2;
						UVar14 = pUVar3.position;
						if (Il2CppMethodInitialized_0753e7b7 == false) {
							Il2CppMethodInitialized_0753e7b7 = true;
							uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						else {
							uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						if (uVar1 == 0) {
						}
						fVar10 = UVar14.y - (float)local_58._4_4_;
						fVar11 = UVar14.z - UVar13.z;
						fVar12 = UVar14.x - (float)local_58._0_4_;
						fVar10 = fVar10 * fVar10 + fVar12 * fVar12 + fVar11 * fVar11;
						if (fVar10 < 0.0) {
							fVar10 = sqrtf(fVar10);
						}
						else {
							fVar10 = SQRT(fVar10);
						}
						if (fVar10 < fVar9) {
							fVar9 = fVar10;
						}
						else {
							pCVar7 = null;
						}
					}
					else {
						pCVar7 = null;
					}
				}
				__this_00 = MapLoader.MapTargetables;
				if (__this_00 != null) {
					local_70.GetEnumerator((List<object>)__this_00);
					local_48._current = (object)local_60;
					local_48._list = (List<T>)local_70._0_8_;
					local_48._index = local_70._8_4_;
					local_48._version = local_70._12_4_;
					local_70._0_8_ = null;
					uVar5 = local_58._0_4_;
					local_70._8_8_ = &local_48;
					while(true) {
						do {
							bVar6 = local_48.MoveNext();
							__this_01 = local_48._current;
							if (!bVar6) {
								local_48.Dispose();
								return (ITargetable)pCVar7;
							}
							bVar6 = BaseAIController.IsValidTarget((ITargetable)local_48._current);
						} while (!bVar6);
						if ((BaseCharacter)__this_01 == null) break;
						UVar14 = __this_01.GetPosition();
						if (Il2CppMethodInitialized_0753e7b7 == false) {
							Il2CppMethodInitialized_0753e7b7 = true;
							uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						else {
							uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						if (uVar1 == 0) {
						}
						local_b8 = UVar14.x;
						fStack_b4 = UVar14.y;
						fVar10 = UVar14.z - UVar13.z;
						fVar10 = (fStack_b4 - (float)local_58._4_4_) * (fStack_b4 - (float)local_58._4_4_) +(local_b8 - (float)uVar5) * (local_b8 - (float)uVar5) + fVar10 * fVar10;
						if (fVar10 < 0.0) {
							fVar9 = sqrtf(fVar10);
							pCVar7 = (BaseCharacter)__this_01;
						}
						else if (SQRT(fVar10) < fVar9) {
							fVar9 = SQRT(fVar10);
							pCVar7 = (BaseCharacter)__this_01;
						}
					}
					throw new NullReferenceException();
				}
			}
		}
	label_05b9c3e2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E34")]
	[Address(RVA = "0x5A9C450", Offset = "0x5A9B450", VA = "0x5A9C450")]
	public void TargetNearestEnemy(float focusDuration = 0f)
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$TargetNearestEnemy): clean
		ITargetable enemy;

		this._automaticTargeting = true;
		enemy = this.GetNearestEnemy();
		this.SetTarget(enemy, focusDuration);
		return;
	}

	[Token(Token = "0x6003E35")]
	[Address(RVA = "0x5A9C480", Offset = "0x5A9B480", VA = "0x5A9C480")]
	protected void UpdateTargeting()
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$UpdateTargeting): 11 lines keep C-only constructs
		ITargetable* targetAddress;
		float pfVar1;
		byte bVar2;
		sbyte cVar3;
		BaseCharacter pCVar4;
		String pSVar5;
		BaseComponentCache pUVar6;
		Transform __this_00;
		bool bVar7;
		String pSVar8;
		ITargetable method_00;
		float fVar9;
		uint uVar10;
		float fVar11;
		Vector3 UVar12;
		float local_38;

		fVar11 = this._focusTimeLeft;
		fVar9 = Time.deltaTime;
		this._focusTimeLeft = fVar11 - fVar9;
		fVar11 = this._updateEnemyTimeLeft;
		fVar9 = Time.deltaTime;
		this._updateEnemyTimeLeft = fVar11 - fVar9;
		targetAddress = &this._enemy;
		bVar7 = BaseAIController.IsValidTarget(this._enemy);
		if (bVar7) {
	label_05b9c577: ;
			cVar3 = this._aiEnabled;
		}
		else {
			this._enemy = null;
			this._focusTimeLeft = 0.0;
			pCVar4 = this._character;
			if (pCVar4 == null) goto label_05b9c577;
			bVar2 = (typeof(BaseTitan)._2).typeHierarchyDepth;
			if (((pCVar4.klass._2).typeHierarchyDepth < bVar2) ||((pCVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BaseTitan))) goto label_05b9c577;
			(*(ulong)((sbyte)pCVar4 + 0x168)) = null;
			cVar3 = this._aiEnabled;
		}
		if ((cVar3 == false) ||((this._moveToActive != false && (this._moveToIgnoreEnemies != false)))) {
			this._enemy = null;
			this._focusTimeLeft = 0.0;
			pCVar4 = this._character;
			if (pCVar4 != null) {
				bVar2 = (typeof(BaseTitan)._2).typeHierarchyDepth;
				if ((bVar2 <= (pCVar4.klass._2).typeHierarchyDepth) &&((pCVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(BaseTitan)) ) {
					(*(ulong)((sbyte)pCVar4 + 0x168)) = null;
	label_05b9c61c: ;
					return;
				}
			}
		}
		else if ((this._automaticTargeting != false) && (this._updateEnemyTimeLeft <= 0.0)) {
			this._updateEnemyTimeLeft = 0.2;
			pSVar8 = (String)this.GetNearestEnemy();
			pSVar5 = (String)this._enemy;
			if (pSVar8 == null) {
				if (pSVar5 != null) {
					pCVar4 = this._character;
					if (pCVar4 != null) {
						pSVar5 = pCVar4.Team;
						method_00 = (ITargetable)il2cpp_runtime_helper_02c13830(0, typeof(ITargetable));
						bVar7 = TeamInfo.SameTeam(pSVar5, (String)method_00);
						if (bVar7) {
	label_05b9c80a: ;
							this.ClearTarget();
							return;
						}
						pCVar4 = this._character;
						if (((pCVar4 != null) &&(pUVar6 = pCVar4.Cache, pUVar6 != null)) &&(__this_00 = pUVar6.Transform, __this_00 != null)) {
							UVar12 = __this_00.position;
							if (*targetAddress != null) {
								method_00 = typeof(ITargetable);
								fVar11 = UVar12.z;
								uVar10 = il2cpp_runtime_helper_02fd8410(1);
								local_38 = UVar12.x;
								fVar11 = (float)il2cpp_runtime_helper_05956b50(local_38, UVar12.z, uVar10, fVar11, 0);
								pfVar1 = &this.FocusRange;
								if (fVar11 < *pfVar1 || fVar11 == *pfVar1) {
									return;
								}
								goto label_05b9c80a;
							}
						}
					}
					throw new NullReferenceException();
				}
			}
			else if ((pSVar5 == null) || (fVar11 = this._focusTimeLeft, fVar11 <= 0.0)) {
				this._enemy = (ITargetable)pSVar8;
				this._focusTimeLeft = this.FocusTime;
				pCVar4 = this._character;
				if (pCVar4 != null) {
					bVar2 = (typeof(BaseTitan)._2).typeHierarchyDepth;
					if ((bVar2 <= (pCVar4.klass._2).typeHierarchyDepth) &&((pCVar4.klass._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(BaseTitan))) {
						(*(ulong)((sbyte)pCVar4 + 0x168)) = pSVar8;
						goto label_05b9c61c;
					}
				}
			}
			else if (pSVar5 == pSVar8) {
				fVar9 = this.FocusTime;
				if (fVar9 <= fVar11) {
					fVar9 = fVar11;
				}
				this._focusTimeLeft = fVar9;
			}
		}
		return;
	}

	[Token(Token = "0x6003E36")]
	[Address(RVA = "0x5A9C840", Offset = "0x5A9B840", VA = "0x5A9C840")]
	public void MoveTo(Vector3 position, float range, bool ignoreEnemies = false)
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$MoveTo): clean


		this._moveToTarget = null;
		this.BeginMove(position, range, ignoreEnemies);
		return;
	}

	[Token(Token = "0x6003E37")]
	[Address(RVA = "0x5A9CA20", Offset = "0x5A9BA20", VA = "0x5A9CA20")]
	public void MoveToTarget(ITargetable target, float range, bool ignoreEnemies = false)
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$MoveToTarget): clean
		bool bVar3;
		Vector3 position;

		bVar3 = BaseAIController.IsValidTarget(target);
		if (!bVar3) {
			return;
		}
		this._moveToTarget = target;
		if (target == null) {
			throw new NullReferenceException();
		}
		position = target.GetPosition();
		this.BeginMove(position, range, ignoreEnemies);
		return;
	}

	[Token(Token = "0x6003E38")]
	[Address(RVA = "0x5A9C8A0", Offset = "0x5A9B8A0", VA = "0x5A9C8A0")]
	private void BeginMove(Vector3 position, float range, bool ignoreEnemies)
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$BeginMove): 2 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		BaseCharacter pCVar3;
		BaseAIController pCVar4;

		this._idleTimeLeft = 0.0;
		this._moveToPosition.x = position.x;
		this._moveToPosition.y = position.y;
		this._moveToPosition.z = position.z;
		this._moveToRange = range;
		this._moveToIgnoreEnemies = ignoreEnemies;
		this._moveToActive = true;
		if (ignoreEnemies) {
			this._enemy = null;
			this._focusTimeLeft = 0.0;
			pCVar3 = this._character;
			if (pCVar3 != null) {
				bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
				if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BaseTitan)) ) {
					(*(ulong)((sbyte)pCVar3 + 0x168)) = null;
				}
			}
		}
		pCVar4 = this.klass;
		bVar1 = (pCVar4._2).typeHierarchyDepth;
		bVar2 = (typeof(HumanAIController)._2).typeHierarchyDepth;
		if ((bVar2 <= bVar1) &&((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(HumanAIController))) {
			this.BeginMove();
			return;
		}
		bVar2 = (typeof(BaseTitanAIController)._2).typeHierarchyDepth;
		if ((bVar1 < bVar2) ||((pCVar4._2).typeHierarchy[(long)&((MethodInfo)(ulong)bVar2)[-1].field_0x57] !=typeof(BaseTitanAIController))) {
			return;
		}
		this.BeginMove();
		return;
	}

	[Token(Token = "0x6003E39")]
	[Address(RVA = "0x5A9CC20", Offset = "0x5A9BC20", VA = "0x5A9CC20")]
	protected void UpdateMoveTarget()
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$UpdateMoveTarget): 3 lines keep C-only constructs
		ITargetable* targetAddress;
		byte bVar1;
		byte bVar2;
		ITargetable target;
		object obj;
		BaseCharacter pCVar5;
		BaseAIController pCVar6;
		bool bVar7;
		Vector3 UVar11;

		if ((this._moveToActive != false) &&(target = this._moveToTarget, target != null)) {
			targetAddress = &this._moveToTarget;
			bVar7 = BaseAIController.IsValidTarget(target);
			if (bVar7) {
				obj = (object)*targetAddress;
				if (obj == null) {
	label_05b9cdb4: ;
					throw new NullReferenceException();
				}
				UVar11 = (Vector3)obj.GetPosition();
				this._moveToPosition = UVar11;
			}
			else {
				this._moveToTarget = null;
				this._moveToActive = false;
				pCVar5 = this._character;
				if (pCVar5 == null) goto label_05b9cdb4;
				pCVar5.HasDirection = false;
				pCVar6 = this.klass;
				bVar1 = (pCVar6._2).typeHierarchyDepth;
				bVar2 = (typeof(HumanAIController)._2).typeHierarchyDepth;
				if ((bVar2 <= bVar1) &&((pCVar6._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(HumanAIController))) {
					this.Idle();
					return;
				}
				bVar2 = (typeof(BaseTitanAIController)._2).typeHierarchyDepth;
				if ((bVar2 <= bVar1) &&((pCVar6._2).typeHierarchy[(long)&((MethodInfo)(ulong)bVar2)[-1].field_0x57] ==typeof(BaseTitanAIController))) {
					this.ResetCommandState();
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6003E3A")]
	[Address(RVA = "0x5A9CDC0", Offset = "0x5A9BDC0", VA = "0x5A9CDC0")]
	public void IdleFor(float time = 1f / 0f)
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$IdleFor): 2 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		BaseCharacter pCVar3;
		BaseAIController pCVar4;
		float fVar5;

		this._moveToTarget = null;
		this._moveToActive = false;
		fVar5 = 0.0;
		if (0.0 <= time) {
			fVar5 = time;
		}
		this._idleTimeLeft = fVar5;
		this._enemy = null;
		this._focusTimeLeft = 0.0;
		pCVar3 = this._character;
		if (pCVar3 != null) {
			bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
			if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BaseTitan))) {
				(*(ulong)((sbyte)pCVar3 + 0x168)) = null;
			}
		}
		pCVar4 = this.klass;
		bVar1 = (pCVar4._2).typeHierarchyDepth;
		bVar2 = (typeof(HumanAIController)._2).typeHierarchyDepth;
		if ((bVar2 <= bVar1) &&((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(HumanAIController))) {
			this.StopInput();
			this.Idle();
			return;
		}
		bVar2 = (typeof(BaseTitanAIController)._2).typeHierarchyDepth;
		if ((bVar1 < bVar2) ||((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(BaseTitanAIController))) {
			return;
		}
		*(byte)&(*(ulong)((sbyte)this + 0xe0)) = 0;
		(*(uint)((sbyte)this + 0xe8)) = 0.0;
		(*(uint)((sbyte)this + 0xec)) = 0.0;
		*(ulong)((long)&(*(ulong)((sbyte)this + 0x128)) + 4) = 0;
		*(uint)&(*(ulong)((sbyte)this + 0x140)) = 0;
		*(uint)&(*(ulong)((sbyte)this + 0x98)) = 0;
		pCVar4 = (*(ulong)((sbyte)this + 0x90));
		if (pCVar4 == null) {
			throw new NullReferenceException();
		}
		*(byte)((long)&(pCVar4._2).initializationExceptionGCHandle + 4) = 0;
		*(byte)&(pCVar4._2).vtable_count = 0;
		Random.Range(4.0, 8.0);
		*(uint)&(*(ulong)((sbyte)this + 0x98)) = 7;
		*(float)&(*(byte)((sbyte)this + 0x108)) = time;
		return;
	}

	[Token(Token = "0x6003E3B")]
	[Address(RVA = "0x5A9D050", Offset = "0x5A9C050", VA = "0x5A9D050", Slot = "4")]
	protected virtual void Awake()
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$Awake): clean
		BaseCharacter pCVar1;

		pCVar1 = this.GetComponent<BaseCharacter>();
		this._character = pCVar1;
		return;
	}

	[Token(Token = "0x6003E3C")]
	[Address(RVA = "0x5A9D0A0", Offset = "0x5A9C0A0", VA = "0x5A9D0A0", Slot = "5")]
	protected virtual void Start()
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$Start): clean
		return;
	}

	[Token(Token = "0x6003E3D")]
	[Address(RVA = "0x5A9D0B0", Offset = "0x5A9C0B0", VA = "0x5A9D0B0", Slot = "6")]
	protected virtual void FixedUpdate()
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$FixedUpdate): clean
		return;
	}

	[Token(Token = "0x6003E3E")]
	[Address(RVA = "0x5A9D0C0", Offset = "0x5A9C0C0", VA = "0x5A9D0C0", Slot = "7")]
	protected virtual float GetAgentSpeed()
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$GetAgentSpeed): 1 lines keep C-only constructs
		byte bVar1;
		BaseCharacter pCVar2;
		long lVar3;
		float fVar4;

		pCVar2 = this._character;
		fVar4 = 0.0;
		if (pCVar2 != null) {
			bVar1 = (typeof(Human)._2).typeHierarchyDepth;
			if ((bVar1 <= (pCVar2.klass._2).typeHierarchyDepth) &&((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(Human))) {
				lVar3 = *(long)&(*(byte)((sbyte)pCVar2 + 0x158));
				if (lVar3 == 0) {
					throw new NullReferenceException();
				}
				fVar4 = *(float)(lVar3 + 0x38);
				if (*(sbyte)((long)&(*(ulong)((sbyte)pCVar2 + 0x238)) + 4) != false) {
					return fVar4 * 0.25;
				}
			}
		}
		return fVar4;
	}

	[Token(Token = "0x6003E3F")]
	[Address(RVA = "0x5A9B960", Offset = "0x5A9A960", VA = "0x5A9B960")]
	protected void CreateAgent(CapsuleCollider collider, float acceleration, ObstacleAvoidanceType obstacleAvoidance)
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$CreateAgent): 23 lines keep C-only constructs
		NavMeshAgent* targetAddress;
		int value;
		GameObject __this_00;
		NavMeshAgent pUVar1;
		float fVar2;
		float local_b0;
		float local_ac;
		NavMeshBuildSettings local_a8;
		NavMeshBuildSettings local_60;

		local_ac = acceleration;
		local_b0 = 0.0;
		fVar2 = Util.GetAgentSize(collider);
		local_60 = Util.GetAgentSettings(fVar2, ref local_b0);
		local_a8.m_BuildHeightMesh = local_60.m_BuildHeightMesh;
		local_a8.m_MaxJobWorkers = local_60.m_MaxJobWorkers;
		local_a8.m_PreserveTilesOutsideBounds = local_60.m_PreserveTilesOutsideBounds;
		local_a8.m_Debug.m_Flags = local_60.m_Debug.m_Flags;
		local_a8._61_3_ = local_60._61_3_;
		local_a8.m_OverrideVoxelSize = local_60.m_OverrideVoxelSize;
		local_a8.m_VoxelSize = local_60.m_VoxelSize;
		local_a8.m_OverrideTileSize = local_60.m_OverrideTileSize;
		local_a8.m_TileSize = local_60.m_TileSize;
		local_a8.m_AgentClimb = local_60.m_AgentClimb;
		local_a8.m_LedgeDropHeight = local_60.m_LedgeDropHeight;
		local_a8.m_MaxJumpAcrossDistance = local_60.m_MaxJumpAcrossDistance;
		local_a8.m_MinRegionArea = local_60.m_MinRegionArea;
		local_a8.m_AgentTypeID = local_60.m_AgentTypeID;
		local_a8.m_AgentRadius = local_60.m_AgentRadius;
		local_a8.m_AgentHeight = local_60.m_AgentHeight;
		local_a8.m_AgentSlope = local_60.m_AgentSlope;
		__this_00 = this.gameObject;
		if (__this_00 != null) {
			pUVar1 = __this_00.AddComponent<NavMeshAgent>();
			targetAddress = &this._agent;
			this._agent = pUVar1;
			pUVar1 = this._agent;
			value = local_a8.agentTypeID;
			if (pUVar1 != null) {
				pUVar1.agentTypeID = value;
				pUVar1 = *targetAddress;
				fVar2 = local_a8.agentRadius;
				if (pUVar1 != null) {
					pUVar1.radius = fVar2 / local_b0;
					pUVar1 = *targetAddress;
					fVar2 = local_a8.agentHeight;
					if (pUVar1 != null) {
						pUVar1.height = fVar2 / local_b0;
						if (*targetAddress != null) {
							(*targetAddress).acceleration = local_ac;
							if (*targetAddress != null) {
								(*targetAddress).obstacleAvoidanceType = obstacleAvoidance;
								if (*targetAddress != null) {
									(*targetAddress).angularSpeed = 10.0;
									if (*targetAddress != null) {
										(*targetAddress).autoRepath = true;
										if (*targetAddress != null) {
											(*targetAddress).stoppingDistance = 1.1;
											if (*targetAddress != null) {
												(*targetAddress).autoBraking = false;
												if (*targetAddress != null) {
													(*targetAddress).updatePosition = false;
													if (*targetAddress != null) {
														(*targetAddress).updateRotation = false;
														if (*targetAddress != null) {
															(*targetAddress).avoidancePriority = 0;
															pUVar1 = this._agent;
															fVar2 = this.GetAgentSpeed();
															if (pUVar1 != null) {
																pUVar1.speed = fVar2;
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E40")]
	[Address(RVA = "0x5A9D150", Offset = "0x5A9C150", VA = "0x5A9D150")]
	protected void SetAgentDestination(Vector3 position)
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$SetAgentDestination): clean
		NavMeshAgent pUVar1;
		bool bVar2;

		if (this._setTargetThisFrame != false) {
			return;
		}
		pUVar1 = this._agent;
		if (pUVar1 != null) {
			bVar2 = pUVar1.pathPending;
			if (bVar2) {
				return;
			}
			if (0.0 < this._repathTimeLeft) {
				return;
			}
			pUVar1 = this._agent;
			if (pUVar1 != null) {
				pUVar1.SetDestination(position);
				this._repathTimeLeft = 0.2;
				this._setTargetThisFrame = true;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E41")]
	[Address(RVA = "0x5A9D1D0", Offset = "0x5A9C1D0", VA = "0x5A9D1D0")]
	protected Vector3 GetAgentNavDirection(Vector3 target)
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$GetAgentNavDirection): 41 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		float fVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		Object x;
		BaseCharacter pCVar8;
		BaseComponentCache pUVar9;
		Transform __this_00;
		UnityEngine_Vector3_StaticFields pUVar10;
		NavMeshAgent pUVar11;
		byte[] auVar12 = new byte[16];
		byte[] auVar13 = new byte[16];
		byte[] auVar14 = new byte[16];
		bool bVar15;
		int iVar16;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Db_00;
		uint uVar17;
		float in_XMM0_Dc;
		float extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		float in_XMM0_Dd;
		float extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		float fVar18;
		uint in_XMM1_Db;
		float fVar19;
		byte[] auVar20 = new byte[16];
		Vector3 UVar21;
		Vector3 UVar22;
		Vector3 UVar23;
		Vector3 UVar24;
		float local_48;
		float fStack_44;

		uVar17 = in_XMM1_Db;
		x = (Object)this._agent;
		bVar15 = (x == null);
		if (bVar15) {
			pCVar8 = this._character;
			if (((pCVar8 == null) ||(pUVar9 = pCVar8.Cache, pUVar9 == null)) ||(__this_00 = pUVar9.Transform, __this_00 == null)) goto label_05b9d675;
			UVar21 = __this_00.position;
			local_48 = target.x;
			fStack_44 = target.y;
			auVar20._0_4_ = local_48 - UVar21.x;
			auVar20._4_4_ = fStack_44 - UVar21.y;
			auVar20._8_4_ = in_XMM0_Dc - extraout_XMM0_Dc;
			auVar20._12_4_ = in_XMM0_Dd - extraout_XMM0_Dd;
			fVar18 = target.z - UVar21.z;
			fVar1 = fVar18 * fVar18 + auVar20._4_4_ * auVar20._4_4_ + auVar20._0_4_ * auVar20._0_4_;
			if (fVar1 < 0.0) {
				fVar1 = sqrtf(fVar1);
				in_XMM1_Db = extraout_XMM0_Db;
			}
			else {
				fVar1 = SQRT(fVar1);
			}
			if (1e-05 < fVar1) {
				UVar21.z = fVar18 / fVar1;
				auVar12._4_4_ = fVar1;
				auVar12._0_4_ = fVar1;
				auVar12._8_4_ = in_XMM1_Db;
				auVar12._12_4_ = in_XMM1_Db;
				auVar20 = divps(auVar20, auVar12);
				UVar21.x = (float)auVar20._0_4_;
				UVar21.y = (float)auVar20._4_4_;
				return (Vector3)UVar21;
			}
			pUVar10 = typeof(Vector3).static_fields;
			fVar18 = (pUVar10.zeroVector).z;
			fVar1 = (pUVar10.zeroVector).x;
			fVar4 = (pUVar10.zeroVector).y;
			goto label_05b9d313;
		}
		pUVar11 = this._agent;
		if (pUVar11 == null) goto label_05b9d675;
		bVar15 = pUVar11.isOnNavMesh;
		if (!bVar15) {
			UVar23 = (Vector3)this.GetDirectionTowardsNavMesh();
			return (Vector3)UVar23;
		}
		if (this._setTargetThisFrame == false) {
			pUVar11 = this._agent;
			if (pUVar11 == null) goto label_05b9d675;
			bVar15 = pUVar11.pathPending;
			if ((!bVar15) && (uVar17 = 0, this._repathTimeLeft <= 0.0)) {
				pUVar11 = this._agent;
				if (pUVar11 == null) goto label_05b9d675;
				pUVar11.SetDestination(target);
				this._repathTimeLeft = 0.2;
				this._setTargetThisFrame = true;
				uVar17 = in_XMM1_Db;
			}
		}
		pUVar11 = this._agent;
		if (pUVar11 == null) goto label_05b9d675;
		UVar21 = pUVar11.velocity;
		fVar18 = UVar21.z;
		auVar13._8_4_ = extraout_XMM0_Dc_00;
		auVar13._0_8_ = UVar21._0_8_;
		auVar13._12_4_ = extraout_XMM0_Dd_00;
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			if (Il2CppMethodInitialized_0753e729 == false) goto label_05b9d639;
	label_05b9d3ce: ;
			uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_0753e729 != false) goto label_05b9d3ce;
	label_05b9d639: ;
			Il2CppMethodInitialized_0753e729 = true;
			uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar7 == 0) {
		}
		local_48 = UVar21.x;
		fStack_44 = UVar21.y;
		fVar1 = fVar18 * fVar18 + fStack_44 * fStack_44 + local_48 * local_48;
		if (fVar1 < 0.0) {
			fVar1 = sqrtf(fVar1);
			uVar17 = extraout_XMM0_Db_00;
			if (1e-05 < fVar1) goto label_05b9d523;
	label_05b9d420: ;
			pUVar10 = typeof(Vector3).static_fields;
			fVar18 = (pUVar10.zeroVector).z;
			uVar2 = (pUVar10.zeroVector).x;
			uVar5 = (pUVar10.zeroVector).y;
			fVar1 = (float)uVar2;
			fVar4 = (float)uVar5;
		}
		else {
			fVar1 = SQRT(fVar1);
			if (fVar1 <= 1e-05) goto label_05b9d420;
	label_05b9d523: ;
			fVar18 = fVar18 / fVar1;
			auVar14._4_4_ = fVar1;
			auVar14._0_4_ = fVar1;
			auVar14._8_4_ = uVar17;
			auVar14._12_4_ = uVar17;
			auVar20 = divps(auVar13, auVar14);
			fVar1 = auVar20._0_4_;
			fVar4 = auVar20._4_4_;
		}
		pUVar10 = typeof(Vector3).static_fields;
		uVar3 = (pUVar10.zeroVector).x;
		uVar6 = (pUVar10.zeroVector).y;
		fVar19 = fVar18 - (pUVar10.zeroVector).z;
		if (9.9999994e-11 <=(fVar4 - (float)uVar6) * (fVar4 - (float)uVar6) + (fVar1 - (float)uVar3) * (fVar1 - (float)uVar3) + fVar19 * fVar19) {
			pUVar11 = this._agent;
			if (pUVar11 == null) goto label_05b9d675;
			iVar16 = pUVar11.pathStatus;
			if (iVar16 != 2) {
	label_05b9d313: ;
				UVar22.y = fVar4;
				UVar22.x = fVar1;
				UVar22.z = fVar18;
				return (Vector3)UVar22;
			}
		}
		pCVar8 = this._character;
		if (pCVar8 != null) {
			UVar21._0_8_ =pCVar8.GetTargetDirection();
			UVar24.z = fVar18;
			UVar24._0_8_ = (undefined8)UVar21._0_8_;
			return (Vector3)UVar24;
		}
	label_05b9d675: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E42")]
	[Address(RVA = "0x5A9D680", Offset = "0x5A9C680", VA = "0x5A9D680")]
	private Vector3 GetDirectionTowardsNavMesh()
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$GetDirectionTowardsNavMesh): 32 lines keep C-only constructs
		uint uVar1;
		BaseCharacter pCVar2;
		BaseComponentCache pUVar3;
		Transform __this_00;
		NavMeshAgent __this_01;
		byte[] auVar4 = new byte[16];
		byte[] auVar5 = new byte[16];
		float fVar6;
		bool bVar7;
		uint uVar8;
		float fVar9;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Db_00;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dd;
		float fVar10;
		uint uVar11;
		byte[] auVar12 = new byte[16];
		byte[] auVar13 = new byte[16];
		Vector3 UVar14;
		ulong local_70;
		float local_58;
		float local_48;
		float fStack_44;
		NavMeshHit local_38;

		local_38.m_Normal.y = 0.0;
		local_38.m_Normal.z = 0.0;
		local_38.m_Distance = 0.0;
		local_38.m_Mask = 0;
		local_38.m_Position.x = 0.0;
		local_38.m_Position.y = 0.0;
		local_38.m_Position.z = 0.0;
		local_38.m_Normal.x = 0.0;
		local_38.m_Hit = 0;
		pCVar2 = this._character;
		if (((pCVar2 == null) ||(pUVar3 = pCVar2.Cache, pUVar3 == null)) ||(__this_00 = pUVar3.Transform, __this_00 == null)) {
	label_05b9d9b2: ;
			throw new NullReferenceException();
		}
		UVar14 = __this_00.position;
		__this_01 = this._agent;
		if (__this_01 == null) goto label_05b9d9b2;
		uVar8 = __this_01.agentTypeID;
		uVar11 = 0;
		auVar13._8_8_ = 0;
		auVar13._0_8_ = (ulong)uVar8 << 0x20 | 0xffffffff;
		bVar7 = NavMesh.SamplePosition(UVar14, ref local_38, 100.0, (NavMeshQueryFilter)(auVar13 << 0x40));
		if (bVar7) {
			fVar9 = local_38.m_Position.x;
			fVar6 = local_38.m_Position.y;
			fVar10 = local_38.m_Position.z;
			local_48 = UVar14.x;
			fStack_44 = UVar14.y;
			auVar12._0_4_ = fVar9 - local_48;
			auVar12._4_4_ = fVar6 - fStack_44;
			auVar12._8_4_ = 0.0 - extraout_XMM0_Dc;
			auVar12._12_4_ = 0.0 - extraout_XMM0_Dd;
			fVar10 = fVar10 - UVar14.z;
			uVar11 = 0;
			fVar9 = fVar10 * fVar10 + auVar12._4_4_ * auVar12._4_4_ + auVar12._0_4_ * auVar12._0_4_;
			if (fVar9 < 0.0) {
				fVar9 = sqrtf(fVar9);
				uVar11 = extraout_XMM0_Db;
			}
			else {
				fVar9 = SQRT(fVar9);
			}
			if (fVar9 <= 1e-05) goto label_05b9d8b6;
			fVar10 = fVar10 / fVar9;
			auVar4._4_4_ = fVar9;
			auVar4._0_4_ = fVar9;
			auVar4._8_4_ = uVar11;
			auVar4._12_4_ = uVar11;
			auVar13 = divps(auVar12, auVar4);
			local_70 = auVar13._0_8_;
			goto label_05b9d8a7;
		}
		UVar14 = Random.onUnitSphere;
		fVar10 = UVar14.z;
		if (Il2CppMethodInitialized_0753e72d == false) {
			uVar11 = 0;
			Il2CppMethodInitialized_0753e72d = true;
			if (Il2CppMethodInitialized_0753e729 == false) goto label_05b9d972;
	label_05b9d7fd: ;
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_0753e729 != false) goto label_05b9d7fd;
	label_05b9d972: ;
			uVar11 = 0;
			Il2CppMethodInitialized_0753e729 = true;
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			uVar11 = 0;
		}
		local_58 = UVar14.x;
		fVar9 = fVar10 * fVar10 + local_58 * local_58 + 0.0;
		if (fVar9 < 0.0) {
			fVar9 = sqrtf(fVar9);
			uVar11 = extraout_XMM0_Db_00;
		}
		else {
			fVar9 = SQRT(fVar9);
		}
		if (fVar9 <= 1e-05) {
	label_05b9d8b6: ;
			return (Vector3)(Vector3.zeroVector);
		}
		fVar10 = fVar10 / fVar9;
		auVar5._4_4_ = fVar9;
		auVar5._0_4_ = fVar9;
		auVar5._8_4_ = uVar11;
		auVar5._12_4_ = uVar11;
		auVar13 = divps(ZEXT416((uint)local_58), auVar5);
		local_70 = auVar13._0_8_;
	label_05b9d8a7: ;
		UVar14.z = fVar10;
		UVar14.x = (float)(undefined4)local_70;
		UVar14.y = (float)local_70._4_4_;
		return (Vector3)UVar14;
	}

	[Token(Token = "0x6003E43")]
	[Address(RVA = "0x5A9D9C0", Offset = "0x5A9C9C0", VA = "0x5A9D9C0")]
	private bool SampleAgentMesh(Vector3 position, out NavMeshHit hit)
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$SampleAgentMesh): 4 lines keep C-only constructs
		NavMeshAgent __this_00;
		byte[] auVar1 = new byte[16];
		bool bVar2;
		uint uVar3;

		__this_00 = this._agent;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		uVar3 = __this_00.agentTypeID;
		auVar1._8_8_ = 0;
		auVar1._0_8_ = (ulong)uVar3 << 0x20 | 0xffffffff;
		bVar2 = NavMesh.SamplePosition(position, hit, 100.0, (NavMeshQueryFilter)(auVar1 << 0x40));
		return bVar2;
	}

	[Token(Token = "0x6003E44")]
	[Address(RVA = "0x5A9DA20", Offset = "0x5A9CA20", VA = "0x5A9DA20", Slot = "8")]
	protected virtual void RefreshAgent()
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$RefreshAgent): 4 lines keep C-only constructs
		Object x;
		BaseCharacter pCVar1;
		BaseComponentCache pUVar2;
		Transform __this_00;
		NavMeshAgent pUVar3;
		Behaviour pUVar4;
		byte[] auVar5 = new byte[16];
		bool bVar6;
		uint uVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		Vector3 sourcePosition;
		float fStack_68;
		float fStack_64;
		NavMeshHit UStack_48;

		UStack_48.m_Normal.y = 0.0;
		UStack_48.m_Normal.z = 0.0;
		UStack_48.m_Distance = 0.0;
		UStack_48.m_Mask = 0;
		UStack_48.m_Position.x = 0.0;
		UStack_48.m_Position.y = 0.0;
		UStack_48.m_Position.z = 0.0;
		UStack_48.m_Normal.x = 0.0;
		UStack_48.m_Hit = 0;
		x = (Object)this._agent;
		bVar6 = (x == null);
		if (bVar6) {
			return;
		}
		if (this._usePathfinding == false) {
			return;
		}
		pCVar1 = this._character;
		if (((pCVar1 != null) &&(pUVar2 = pCVar1.Cache, pUVar2 != null)) &&(__this_00 = pUVar2.Transform, __this_00 != null)) {
			sourcePosition = __this_00.position;
			pUVar3 = this._agent;
			if (pUVar3 != null) {
				bVar6 = pUVar3.isOnNavMesh;
				if (bVar6) {
					fVar9 = this._repathTimeLeft;
					fVar8 = Time.fixedDeltaTime;
					this._repathTimeLeft = fVar9 - fVar8;
					pUVar3 = this._agent;
					fVar9 = this.GetAgentSpeed();
					if (pUVar3 != null) {
						pUVar3.speed = fVar9;
						pUVar3 = this._agent;
						if (pUVar3 != null) {
							pUVar3.nextPosition = sourcePosition;
							return;
						}
					}
				}
				else {
					fVar9 = this._reacquireTimeLeft;
					fVar8 = Time.fixedDeltaTime;
					fVar9 = fVar9 - fVar8;
					this._reacquireTimeLeft = fVar9;
					if (0.0 < fVar9) {
						return;
					}
					this._reacquireTimeLeft = 1.0;
					pUVar3 = this._agent;
					if (pUVar3 != null) {
						uVar7 = pUVar3.agentTypeID;
						auVar5._8_8_ = 0;
						auVar5._0_8_ = (ulong)uVar7 << 0x20 | 0xffffffff;
						bVar6 = NavMesh.SamplePosition(sourcePosition, ref UStack_48, 100.0, (NavMeshQueryFilter)(auVar5 << 0x40));
						if (!bVar6) {
							return;
						}
						fVar8 = UStack_48.m_Position.x;
						fVar10 = UStack_48.m_Position.y;
						fVar9 = UStack_48.m_Position.z;
						fVar9 = fVar9 - sourcePosition.z;
						fStack_68 = sourcePosition.x;
						fStack_64 = sourcePosition.y;
						fVar8 = fVar8 - fStack_68;
						fVar10 = fVar10 - fStack_64;
						fVar9 = fVar9 * fVar9 + fVar10 * fVar10 + fVar8 * fVar8;
						if (fVar9 < 0.0) {
							fVar9 = sqrtf(fVar9);
						}
						else {
							fVar9 = SQRT(fVar9);
						}
						pUVar3 = this._agent;
						if (pUVar3 != null) {
							fVar8 = pUVar3.height;
							if (fVar8 < fVar9) {
								return;
							}
							pUVar4 = (Behaviour)this._agent;
							if (pUVar4 != null) {
								pUVar4.enabled = false;
								pUVar4 = (Behaviour)this._agent;
								if (pUVar4 != null) {
									pUVar4.enabled = true;
									pUVar3 = this._agent;
									if (pUVar3 != null) {
										bVar6 = pUVar3.isOnNavMesh;
										if (!bVar6) {
											this._reacquireTimeLeft = 5.0;
											return;
										}
										pUVar3 = this._agent;
										if (pUVar3 != null) {
											pUVar3.nextPosition = sourcePosition;
											this._repathTimeLeft = 0.0;
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003E45")]
	[Address(RVA = "0x5A9DD20", Offset = "0x5A9CD20", VA = "0x5A9DD20")]
	private void SyncAgentPosition(Vector3 position)
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$SyncAgentPosition): clean
		NavMeshAgent __this_00;

		__this_00 = this._agent;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.nextPosition = position;
		return;
	}

	[Token(Token = "0x6003E46")]
	[Address(RVA = "0x5A9DD40", Offset = "0x5A9CD40", VA = "0x5A9DD40")]
	protected float GetTargetAngle(Vector3 direction)
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$GetTargetAngle): 27 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		float fVar3;
		uint uVar4;
		uint uVar5;
		BaseCharacter __this_00;
		Transform __this_01;
		UnityEngine_Vector3_StaticFields pUVar6;
		uint extraout_XMM0_Db;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		float fVar7;
		uint in_XMM1_Db;
		float fVar8;
		byte[] auVar9 = new byte[16];
		uint uVar10;
		uint uVar11;
		Vector3 UVar12;
		Vector3 euler;
		Vector3 local_58;
		byte[] local_48 = new byte[8];
		uint uStack_40;
		uint uStack_3c;
		Vector3 local_38;
		Quaternion local_28;

		fVar7 = direction.z;
		uStack_40 = in_XMM0_Dc;
		local_48 = (byte[])direction._0_8_;
		uStack_3c = in_XMM0_Dd;
		local_28 = (Quaternion)ZEXT816(0);
		if (Il2CppMethodInitialized_0753e729 == false) {
			local_58.x = 0.0;
			local_58.y = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
			uVar5 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			local_58.x = 0.0;
			local_58.y = 0.0;
			uVar5 = ((typeof(Math))._2).cctor_finished_or_no_cctor;
		}
		if (uVar5 == 0) {
		}
		fVar1 = fVar7 * fVar7 + (float)local_48._0_4_ * (float)local_48._0_4_ + 0.0;
		if (fVar1 < 0.0) {
			fVar1 = sqrtf(fVar1);
			in_XMM1_Db = extraout_XMM0_Db;
		}
		else {
			fVar1 = SQRT(fVar1);
		}
		if (fVar1 <= 1e-05) {
			pUVar6 = typeof(Vector3).static_fields;
			fVar7 = (pUVar6.zeroVector).z;
			fVar1 = (pUVar6.zeroVector).x;
			fVar3 = (pUVar6.zeroVector).y;
		}
		else {
			fVar7 = fVar7 / fVar1;
			auVar9._4_4_ = fVar1;
			auVar9._0_4_ = fVar1;
			auVar9._8_4_ = in_XMM1_Db;
			auVar9._12_4_ = in_XMM1_Db;
			auVar9 = divps(ZEXT416((uint)local_48._0_4_), auVar9);
			local_58._0_8_ = auVar9._0_8_;
			fVar1 = auVar9._0_4_;
			fVar3 = auVar9._4_4_;
		}
		uVar10 = 0;
		uVar11 = 0;
		if (Il2CppMethodInitialized_0753e4b6 == false) {
			local_48._4_4_ = fVar3;
			local_48._0_4_ = fVar1;
			Il2CppMethodInitialized_0753e4b6 = true;
			fVar1 = (float)local_48._0_4_;
			fVar3 = (float)local_48._4_4_;
			uVar10 = uStack_40;
			uVar11 = uStack_3c;
		}
		pUVar6 = typeof(Vector3).static_fields;
		uVar2 = (pUVar6.zeroVector).x;
		uVar4 = (pUVar6.zeroVector).y;
		fVar8 = fVar7 - (pUVar6.zeroVector).z;
		if ((fVar3 - (float)uVar4) * (fVar3 - (float)uVar4) + (fVar1 - (float)uVar2) * (fVar1 - (float)uVar2) + fVar8 * fVar8 < 9.9999994e-11) {
			__this_00 = this._character;
			if ((__this_00 == null) ||(__this_01 = __this_00.transform, __this_01 == null)) {
				throw new NullReferenceException();
			}
			UVar12 = __this_01.eulerAngles;
			fVar7 = UVar12.y;
		}
		else {
			if (g_data_0753e72c == false) {
				local_48._4_4_ = fVar3;
				local_48._0_4_ = fVar1;
				uStack_40 = uVar10;
				uStack_3c = uVar11;
				g_data_0753e72c = true;
				pUVar6 = typeof(Vector3).static_fields;
				fVar1 = (float)local_48._0_4_;
				fVar3 = (float)local_48._4_4_;
			}
			local_38.x = (pUVar6.upVector).x;
			local_38.y = (pUVar6.upVector).y;
			local_38.z = (pUVar6.upVector).z;
			local_58.y = fVar3;
			local_58.x = fVar1;
			local_58.z = fVar7;
			local_28 = (Quaternion)Quaternion.Internal_LookRotation(ref local_58, ref local_38);
			UVar12 = Quaternion.Internal_ToEulerRad(ref local_28);
			euler.x = UVar12.x * 57.29578;
			euler.y = UVar12.y * 57.29578;
			euler.z = UVar12.z * 57.29578;
			UVar12 = Quaternion.Internal_MakePositive(euler);
			fVar7 = UVar12.y;
		}
		return fVar7;
	}

	[Token(Token = "0x6003E47")]
	[Address(RVA = "0x5A9DFD0", Offset = "0x5A9CFD0", VA = "0x5A9DFD0")]
	protected Quaternion GetTargetRotation(float angle)
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$GetTargetRotation): clean
		Quaternion UVar1;
		Vector3 UStack_10;

		UStack_10.x = 0.0;
		UStack_10.y = angle * 0.017453292;
		UStack_10.z = 0.0;
		UVar1 = (Quaternion)Quaternion.Internal_FromEulerRad(ref UStack_10);
		return (Quaternion)UVar1;
	}

	[Token(Token = "0x6003E48")]
	[Address(RVA = "0x5A9E010", Offset = "0x5A9D010", VA = "0x5A9E010")]
	protected Vector3 GetTargetDirection(float angle)
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$GetTargetDirection): 12 lines keep C-only constructs
		uint uVar1;
		float fVar2;
		float fVar3;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Db_00;
		float fVar4;
		byte[] auVar5 = new byte[16];
		uint uVar6;
		Vector3 UVar7;

		fVar4 = (90.0 - angle) * 0.017453292;
		fVar2 = cosf(fVar4);
		fVar4 = sinf(fVar4);
		uVar6 = extraout_XMM0_Db;
		if (Il2CppMethodInitialized_0753e72d == false) {
			uVar6 = 0;
			Il2CppMethodInitialized_0753e72d = true;
		}
		if (Il2CppMethodInitialized_0753e729 == false) {
			uVar6 = 0;
			Il2CppMethodInitialized_0753e729 = true;
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(Math))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			uVar6 = 0;
		}
		fVar3 = fVar4 * fVar4 + fVar2 * fVar2 + 0.0;
		if (fVar3 < 0.0) {
			fVar3 = sqrtf(fVar3);
			uVar6 = extraout_XMM0_Db_00;
		}
		else {
			fVar3 = SQRT(fVar3);
		}
		if (fVar3 <= 1e-05) {
			return (Vector3)(Vector3.zeroVector);
		}
		auVar5._4_4_ = fVar3;
		auVar5._0_4_ = fVar3;
		auVar5._8_4_ = uVar6;
		auVar5._12_4_ = uVar6;
		auVar5 = divps(ZEXT416((uint)fVar2), auVar5);
		UVar7.z = fVar4 / fVar3;
		UVar7.x = (float)auVar5._0_4_;
		UVar7.y = (float)auVar5._4_4_;
		return (Vector3)UVar7;
	}

	[Token(Token = "0x6003E49")]
	[Address(RVA = "0x5A9E190", Offset = "0x5A9D190", VA = "0x5A9E190")]
	public BaseAIController()
	{
		// Lifted from source/cpp/Controllers/BaseAIController.c (Controllers.BaseAIController$$.ctor): clean
		this._usePathfinding = true;
		this.DetectRange = 10000.0;
		this.FocusTime = 5.0;
		this.FocusRange = INFINITY;
		this._aiEnabled = true;
		base();
		return;
	}
}
