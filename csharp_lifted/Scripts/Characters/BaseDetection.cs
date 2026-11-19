// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseDetection
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/BaseDetection.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Detection/BaseDetection.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using GameManagers;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200069F")]
internal class BaseDetection
{
	[Token(Token = "0x4001DDF")]
	[FieldOffset(Offset = "0x10")]
	public bool Detect;

	[Token(Token = "0x4001DE0")]
	[FieldOffset(Offset = "0x18")]
	public BaseCharacter ClosestEnemy;

	[Token(Token = "0x4001DE1")]
	[FieldOffset(Offset = "0x20")]
	public float ClosestEnemyDistance;

	[Token(Token = "0x4001DE2")]
	[FieldOffset(Offset = "0x28")]
	public BaseCharacter Owner;

	[Token(Token = "0x4001DE3")]
	private const float CriticalRange = 200f;

	[Token(Token = "0x4001DE4")]
	private const float MinimumSpeed = 100f;

	[Token(Token = "0x4001DE5")]
	private const float MediumDelay = 0.2f;

	[Token(Token = "0x4001DE6")]
	private const float SlowDelay = 2f;

	[Token(Token = "0x4001DE7")]
	[FieldOffset(Offset = "0x30")]
	private bool _enemiesOnly;

	[Token(Token = "0x4001DE8")]
	[FieldOffset(Offset = "0x31")]
	private bool _titansOnly;

	[Token(Token = "0x4001DE9")]
	[FieldOffset(Offset = "0x34")]
	private float _currentMediumTime;

	[Token(Token = "0x4001DEA")]
	[FieldOffset(Offset = "0x38")]
	private float _currentSlowTime;

	[Token(Token = "0x4001DEB")]
	[FieldOffset(Offset = "0x40")]
	private HashSet<BaseCharacter> _recalculateFast;

	[Token(Token = "0x4001DEC")]
	[FieldOffset(Offset = "0x48")]
	private HashSet<BaseCharacter> _recalculateMedium;

	[Token(Token = "0x4001DED")]
	[FieldOffset(Offset = "0x50")]
	private HashSet<BaseCharacter> _recalculateSlow;

	[Token(Token = "0x4001DEE")]
	[FieldOffset(Offset = "0x58")]
	private HashSet<BaseCharacter> _tempRecalculateFast;

	[Token(Token = "0x4001DEF")]
	[FieldOffset(Offset = "0x60")]
	private HashSet<BaseCharacter> _tempRecalculateMedium;

	[Token(Token = "0x4001DF0")]
	[FieldOffset(Offset = "0x68")]
	private HashSet<BaseCharacter> _tempRecalculateSlow;

	[Token(Token = "0x4001DF1")]
	[FieldOffset(Offset = "0x70")]
	private InGameManager _inGameManager;

	[Token(Token = "0x17000B1D")]
	protected virtual bool RequireValidTarget
	{
		[Token(Token = "0x6004049")]
		[Address(RVA = "0x5AE5060", Offset = "0x5AE4060", VA = "0x5AE5060", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Characters/BaseDetection.c (Characters.BaseDetection$$get_RequireValidTarget): clean
			return true;
		}
	}

	[Token(Token = "0x6004048")]
	[Address(RVA = "0x5AE49A0", Offset = "0x5AE39A0", VA = "0x5AE49A0")]
	public BaseDetection(BaseCharacter owner, bool enemiesOnly, bool titansOnly)
	{
		// Lifted from source/cpp/Characters/BaseDetection.c (Characters.BaseDetection$$.ctor): 22 lines keep C-only constructs
		float fVar1;
		byte bVar2;
		InGameManager pGVar3;
		Il2CppClass pIVar4;
		Il2CppRuntimeInterfaceOffsetPair pIVar5;
		HashSet<object> __this_00;
		InGameManager pGVar6;
		bool bVar7;
		HashSet<BaseCharacter> pSVar8;
		object pIVar9;
		VirtualInvokeData pVVar10;
		BaseCharacter character;
		ulong uVar11;
		long lVar12;
		InGameManager* targetAddress;
		float fVar13;
		object local_48;
		object* local_38;

		if (Il2CppMethodInitialized_075475d5 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(IEnumerable<BaseCharacter>)) ;
			il2cpp_codegen_initialize_runtime_metadata(&typeof(IEnumerator<BaseCharacter>)) ;
			Il2CppMethodInitialized_075475d5 = true;
		}
		local_48 = null;
		this.ClosestEnemyDistance = 3.4028235e+38;
		pSVar8 = il2cpp_codegen_object_new(typeof(HashSet<BaseCharacter>)) ;
		pSVar8 = new HashSet<object>();
		this._recalculateFast = pSVar8;
		pSVar8 = il2cpp_codegen_object_new(typeof(HashSet<BaseCharacter>)) ;
		pSVar8 = new HashSet<object>();
		this._recalculateMedium = pSVar8;
		pSVar8 = il2cpp_codegen_object_new(typeof(HashSet<BaseCharacter>)) ;
		pSVar8 = new HashSet<object>();
		this._recalculateSlow = pSVar8;
		pSVar8 = il2cpp_codegen_object_new(typeof(HashSet<BaseCharacter>)) ;
		pSVar8 = new HashSet<object>();
		this._tempRecalculateFast = pSVar8;
		pSVar8 = il2cpp_codegen_object_new(typeof(HashSet<BaseCharacter>)) ;
		pSVar8 = new HashSet<object>();
		this._tempRecalculateMedium = pSVar8;
		pSVar8 = il2cpp_codegen_object_new(typeof(HashSet<BaseCharacter>)) ;
		pSVar8 = new HashSet<object>();
		this._tempRecalculateSlow = pSVar8;
		base();
		this.Owner = owner;
		this._enemiesOnly = enemiesOnly;
		this._titansOnly = titansOnly;
		pGVar6 = typeof(InGameManager);
		pGVar3 = (InGameManager)SceneLoader.CurrentGameManager;
		if (pGVar3 == null) {
			this._inGameManager = null;
		}
		else {
			bVar2 = (typeof(InGameManager)._2).typeHierarchyDepth;
			if (((pGVar3.klass._2).typeHierarchyDepth < bVar2) ||((pGVar3.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(InGameManager))) {
	label_05be4da6: ;
				throw new InvalidCastException();
			}
			this._inGameManager = pGVar3;
			if (((pGVar3.klass._2).typeHierarchyDepth < bVar2) ||((pGVar3.klass._2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass)pGVar6)) goto label_05be4da6;
		}
		targetAddress = &this._inGameManager;
		if ((*targetAddress != null) &&(pIVar9 = (object)(*targetAddress).GetAllCharactersEnumerable(), pIVar9 != null)) {
			pIVar4 = pIVar9.klass;
			uVar11 = (ulong)(pIVar4._2).interface_offsets_count;
			local_48 = pIVar9.Dispose();
			local_38 = &local_48;
			do {
				pIVar9 = local_48;
				if (local_48 == null) {
					throw new NullReferenceException();
				}
				pIVar4 = local_48.klass;
				uVar11 = (ulong)(pIVar4._2).interface_offsets_count;
				bVar7 = pIVar9.Dispose();
				pIVar9 = local_48;
				if (!bVar7) {
					if (local_48 == null) goto label_05be4e46;
					pIVar4 = local_48.klass;
					uVar11 = (ulong)(pIVar4._2).interface_offsets_count;
					if (uVar11 == 0) goto label_05be4e1f;
					pIVar5 = (pIVar4._1).interfaceOffsets;
					lVar12 = 0;
					goto label_05be4e10;
				}
				if (local_48 == null) {
					throw new NullReferenceException();
				}
				pIVar4 = local_48.klass;
				uVar11 = (ulong)(pIVar4._2).interface_offsets_count;
				character = (BaseCharacter)pIVar9.Dispose();
				this.OnCharacterSpawned(character);
			} while(true);
		}
		goto label_05be4edc;
		while (true) {
			lVar12 = lVar12 + 0x10;
			if (!(uVar11 * 0x10 != lVar12)) break;
	label_05be4e10: ;
			if (*(IDisposable*)((long)&pIVar5.interfaceType + lVar12) == typeof(IDisposable)) {
				pVVar10 = pIVar4.vtable + *(int)((long)&pIVar5.offset + lVar12);
				goto label_05be4e3d;
			}
		}
	label_05be4e1f: ;
	label_05be4e3d: ;
		pIVar9.Dispose();
	label_05be4e46: ;
		if ((*targetAddress != null) &&(__this_00 = (HashSet<object>)((*targetAddress).fields).Detections, __this_00 != null)) {
			__this_00.Add((object)this);
			fVar1 = this._currentMediumTime;
			fVar13 = Random.Range(0.0, 0.2);
			this._currentMediumTime = fVar13 + fVar1;
			fVar1 = this._currentSlowTime;
			fVar13 = Random.Range(0.0, 2.0);
			this._currentSlowTime = fVar13 + fVar1;
			return;
		}
	label_05be4edc: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600404A")]
	[Address(RVA = "0x5AE5070", Offset = "0x5AE4070", VA = "0x5AE5070", Slot = "5")]
	public virtual bool IsNullOrDead()
	{
		// Lifted from source/cpp/Characters/BaseDetection.c (Characters.BaseDetection$$IsNullOrDead): clean
		BaseCharacter pCVar1;
		bool bVar2;
		bool bVar3;

		pCVar1 = this.Owner;
		bVar2 = ((Object)pCVar1 == null);
		if (!bVar2) {
			pCVar1 = this.Owner;
			if (pCVar1 == null) {
				throw new NullReferenceException();
			}
			bVar3 = pCVar1.Dead != false;
		}
		return bVar3;
	}

	[Token(Token = "0x600404B")]
	[Address(RVA = "0x5AE50E0", Offset = "0x5AE40E0", VA = "0x5AE50E0")]
	public void OnTeamChanged()
	{
		// Lifted from source/cpp/Characters/BaseDetection.c (Characters.BaseDetection$$OnTeamChanged): 12 lines keep C-only constructs
		InGameManager pGVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		HashSet<object> __this_00;
		bool bVar4;
		object pIVar5;
		VirtualInvokeData pVVar6;
		BaseCharacter character;
		ulong uVar7;
		long lVar8;
		object pIStack_60;
		System_Collections_Generic_HashSet_Enumerator_T__o pSStack_50;
		System_Collections_Generic_HashSet_Enumerator_T__o SStack_48;

		if (Il2CppMethodInitialized_075475d7 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(IEnumerable<BaseCharacter>)) ;
			il2cpp_codegen_initialize_runtime_metadata(&typeof(IEnumerator<BaseCharacter>)) ;
			Il2CppMethodInitialized_075475d7 = true;
		}
		pIStack_60 = null;
		SStack_48._set = null;
		SStack_48._index = 0;
		SStack_48._version = 0;
		SStack_48._current = null;
		pGVar1 = this._inGameManager;
		if ((pGVar1 != null) &&(pIVar5 = (object)pGVar1.GetAllCharactersEnumerable(), pIVar5 != null)) {
			pIVar2 = pIVar5.klass;
			uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
			pIStack_60 = pIVar5.Dispose();
			pSStack_50 = (System_Collections_Generic_HashSet_Enumerator_T__o)&pIStack_60;
			do {
				pIVar5 = pIStack_60;
				if (pIStack_60 == null) {
					throw new NullReferenceException();
				}
				pIVar2 = pIStack_60.klass;
				uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
				bVar4 = pIVar5.Dispose();
				pIVar5 = pIStack_60;
				if (!bVar4) {
					if (pIStack_60 == null) goto label_05be53b6;
					pIVar2 = pIStack_60.klass;
					uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
					if (uVar7 == 0) goto label_05be538f;
					pIVar3 = (pIVar2._1).interfaceOffsets;
					lVar8 = 0;
					goto label_05be5380;
				}
				if (pIStack_60 == null) {
					throw new NullReferenceException();
				}
				pIVar2 = pIStack_60.klass;
				uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
				character = (BaseCharacter)pIVar5.Dispose();
				this.OnCharacterSpawned(character);
			} while(true);
		}
		goto label_05be545b;
		while (true) {
			lVar8 = lVar8 + 0x10;
			if (!(uVar7 * 0x10 != lVar8)) break;
	label_05be5380: ;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar8) == typeof(IDisposable)) {
				pVVar6 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar8);
				goto label_05be53ad;
			}
		}
	label_05be538f: ;
	label_05be53ad: ;
		pIVar5.Dispose();
	label_05be53b6: ;
		pGVar1 = this._inGameManager;
		if ((pGVar1 != null) &&(__this_00 = (HashSet<object>)pGVar1.Detections, __this_00 != null)) {
			SStack_48 = __this_00.GetEnumerator();
			pSStack_50 = &SStack_48;
			while(true) {
				bVar4 = SStack_48.MoveNext();
				if (!bVar4) {
					SStack_48.Dispose();
					return;
				}
				if ((BaseDetection)SStack_48._current == null) break;
				SStack_48._current.OnCharacterSpawned(this.Owner);
			}
			throw new NullReferenceException();
		}
	label_05be545b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600404C")]
	[Address(RVA = "0x5AE4F10", Offset = "0x5AE3F10", VA = "0x5AE4F10")]
	public void OnCharacterSpawned(BaseCharacter character)
	{
		// Lifted from source/cpp/Characters/BaseDetection.c (Characters.BaseDetection$$OnCharacterSpawned): 6 lines keep C-only constructs
		byte bVar1;
		BaseCharacter y;
		HashSet<object> __this_00;
		bool bVar2;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo method_00;

		y = this.Owner;
		bVar2 = ((Object)character == (Object)y);
		if (!bVar2) {
			bVar2 = ((Object)character == null);
			if (!bVar2) {
				if (character == null) {
	label_05be5052: ;
					throw new NullReferenceException();
				}
				if (character.Dead == false) {
					if (this._titansOnly != false) {
						bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
						if ((character.klass._2).typeHierarchyDepth < bVar1) {
							return;
						}
						if ((character.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BaseTitan)) {
							return;
						}
					}
					bVar2 = this.get_RequireValidTarget();
					method_00 = extraout_RDX;
					if ((bVar2) &&(bVar2 = character.ValidTarget(), method_00 = extraout_RDX_00, !bVar2)) {
						return;
					}
					bVar2 = this.IsValidTeam(character);
					if (bVar2) {
						__this_00 = (HashSet<object>)this._recalculateFast;
						if (__this_00 != null) {
							__this_00.Add((object)character);
							return;
						}
						goto label_05be5052;
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x600404D")]
	[Address(RVA = "0x5AE54E0", Offset = "0x5AE44E0", VA = "0x5AE54E0")]
	private bool IsValidTeam(BaseCharacter character)
	{
		// Lifted from source/cpp/Characters/BaseDetection.c (Characters.BaseDetection$$IsValidTeam): clean
		BaseCharacter pCVar1;
		bool bVar2;
		bool bVar3;

		bVar3 = true;
		if (this._enemiesOnly != false) {
			pCVar1 = this.Owner;
			bVar2 = ((Object)pCVar1 == null);
			if (!bVar2) {
				pCVar1 = this.Owner;
				bVar3 = TeamInfo.SameTeam(character, pCVar1);
				bVar3 = !bVar3;
			}
		}
		return bVar3;
	}

	[Token(Token = "0x600404E")]
	[Address(RVA = "0x5AE5590", Offset = "0x5AE4590", VA = "0x5AE5590", Slot = "6")]
	public virtual void OnFixedUpdate()
	{
		// Lifted from source/cpp/Characters/BaseDetection.c (Characters.BaseDetection$$OnFixedUpdate): clean
		BaseDetection __this_00;
		float fVar2;
		float fVar3;
		Vector3 myPosition;

		fVar3 = this._currentMediumTime;
		fVar2 = Time.deltaTime;
		this._currentMediumTime = fVar2 + fVar3;
		fVar3 = this._currentSlowTime;
		fVar2 = Time.deltaTime;
		this._currentSlowTime = fVar2 + fVar3;
		fVar3 = this.GetSpeed();
		myPosition = this.GetPosition();
		this.RefreshClosestEnemy(myPosition);
		this.Recalculate(this._recalculateFast, myPosition, fVar3);
		__this_00 = (BaseDetection)this._recalculateFast;
		if (__this_00 == null) {
	label_05be571c: ;
			throw new NullReferenceException();
		}
		__this_00.Clear();
		if (0.2 < this._currentMediumTime) {
			this._currentMediumTime = 0.0;
			this.Recalculate(this._recalculateMedium, myPosition, fVar3);
			__this_00 = (BaseDetection)this._recalculateMedium;
			if (__this_00 == null) goto label_05be571c;
			__this_00.Clear();
		}
		if (2.0 < this._currentSlowTime) {
			this._currentSlowTime = 0.0;
			this.Recalculate(this._recalculateSlow, myPosition, fVar3);
			__this_00 = (BaseDetection)this._recalculateSlow;
			if (__this_00 == null) goto label_05be571c;
			__this_00.Clear();
		}
		__this_00.MergeTemp(this._recalculateFast, this._tempRecalculateFast);
		__this_00.MergeTemp(this._recalculateMedium, this._tempRecalculateMedium);
		__this_00.MergeTemp(this._recalculateSlow, this._tempRecalculateSlow);
		return;
	}

	[Token(Token = "0x600404F")]
	[Address(RVA = "0x5AE5730", Offset = "0x5AE4730", VA = "0x5AE5730")]
	private void RefreshClosestEnemy(Vector3 myPosition)
	{
		// Lifted from source/cpp/Characters/BaseDetection.c (Characters.BaseDetection$$RefreshClosestEnemy): 5 lines keep C-only constructs
		BaseCharacter* targetAddress;
		BaseCharacter pCVar1;
		bool bVar2;
		float fVar3;
		Vector3 UVar5;
		float fVar4;
		float local_28;
		float fStack_24;

		fVar4 = myPosition.z;
		fVar3 = fVar4;
		pCVar1 = this.ClosestEnemy;
		targetAddress = &this.ClosestEnemy;
		bVar2 = ((Object)pCVar1 == null);
		if (!bVar2) {
			pCVar1 = *targetAddress;
			if (pCVar1 == null) {
	label_05be5898: ;
				throw new NullReferenceException();
			}
			if (pCVar1.Dead == false) {
				bVar2 = this.IsValidTeam(pCVar1);
				if (bVar2) {
					pCVar1 = *targetAddress;
					if (pCVar1 == null) goto label_05be5898;
					UVar5._0_8_ =pCVar1.GetCenterPosition();
					local_28 = myPosition.x;
					fStack_24 = myPosition.y;
					fStack_24 = fStack_24 - UVar5.y;
					local_28 = local_28 - UVar5.x;
					fVar3 = fStack_24 * fStack_24 + local_28 * local_28 + (fVar4 - fVar3) * (fVar4 - fVar3);
					if (fVar3 < 0.0) {
						fVar3 = sqrtf(fVar3);
					}
					else {
						fVar3 = SQRT(fVar3);
					}
					goto label_05be5881;
				}
			}
		}
		*targetAddress = null;
		fVar3 = 3.4028235e+38;
	label_05be5881: ;
		this.ClosestEnemyDistance = fVar3;
		return;
	}

	[Token(Token = "0x6004050")]
	[Address(RVA = "0x5AE5CA0", Offset = "0x5AE4CA0", VA = "0x5AE5CA0")]
	private void MergeTemp(HashSet<BaseCharacter> main, HashSet<BaseCharacter> temp)
	{
		// Lifted from source/cpp/Characters/BaseDetection.c (Characters.BaseDetection$$MergeTemp): 3 lines keep C-only constructs
		bool bVar1;
		System_Collections_Generic_HashSet_Enumerator_T__o local_58;
		byte local_30;

		local_58._set = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		if (temp == null) {
			throw new NullReferenceException();
		}
		if (0 < temp._count) {
			local_58 = temp.GetEnumerator();
			local_30 = (byte)&local_58;
			if (main == null) {
				local_30 = (byte)&local_58;
				bVar1 = local_58.MoveNext();
				if (bVar1) {
					throw new NullReferenceException();
				}
			}
			else {
				while (bVar1 = local_58.MoveNext()) {
					main.Add(local_58._current);
				}
			}
			local_58.Dispose();
			temp.Clear();
		}
		return;
	}

	[Token(Token = "0x6004051")]
	[Address(RVA = "0x5AE58A0", Offset = "0x5AE48A0", VA = "0x5AE58A0")]
	private void Recalculate(HashSet<BaseCharacter> characters, Vector3 myPosition, float mySpeed)
	{
		// Lifted from source/cpp/Characters/BaseDetection.c (Characters.BaseDetection$$Recalculate): 14 lines keep C-only constructs
		IntPtr targetAddress;
		uint uVar1;
		Object pUVar2;
		object x;
		bool bVar3;
		sbyte cVar4;
		float fVar5;
		float fVar6;
		ulong uVar7;
		float fVar8;
		System_Collections_Generic_HashSet_Enumerator_T__o SStack_98;
		byte[] auStack_80 = new byte[16];
		Object pUStack_70;
		float fStack_68;
		float fStack_64;
		float fStack_58;
		float fStack_54;
		ulong uStack_48;

		fStack_64 = (float)((ulong)param_2 >> 0x20);
		fVar8 = (float)param_2;
		fStack_54 = (float)((ulong)param_1 >> 0x20);
		fStack_58 = (float)param_1;
		fStack_68 = fVar8;
		SStack_98._set = null;
		SStack_98._index = 0;
		SStack_98._version = 0;
		SStack_98._current = null;
		if (param_5 == null) {
			throw new NullReferenceException();
		}
		auStack_80.GetEnumerator(param_5);
		SStack_98._current = (object)pUStack_70;
		SStack_98._set = (HashSet<T>)auStack_80._0_8_;
		SStack_98._index = auStack_80._8_4_;
		SStack_98._version = auStack_80._12_4_;
		auStack_80._0_8_ = null;
		targetAddress = (IntPtr)(param_4 + 3);
		fStack_64 = fStack_58;
		auStack_80._8_8_ = &SStack_98;
		do {
			do {
				do {
					do {
						bVar3 = SStack_98.MoveNext();
						x = SStack_98._current;
						if (!bVar3) {
							SStack_98.Dispose();
							return;
						}
						bVar3 = ((Object)x == null);
					} while (bVar3);
					if ((Object)x == null) {
						throw new NullReferenceException();
					}
				} while (*(sbyte)&((Object)((long)x + 0x78)).klass != false);
				cVar4 = param_4.IsValidTeam();
			} while (cVar4 == false);
			uVar7 = (*(code)((Object)x.klass)[5].vtable._2_GetHashCode.method)(x,((Object)x.klass)[5].vtable._3_ToString.methodPtr);
			uStack_48 = uVar7;
			if (Il2CppMethodInitialized_0753e7b7 == false) {
				Il2CppMethodInitialized_0753e7b7 = true;
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			uVar7 = uStack_48;
			if (uVar1 == 0) {
				uVar7 = uStack_48;
			}
			uStack_48._4_4_ = (float)((ulong)uVar7 >> 0x20);
			uStack_48._0_4_ = (float)uVar7;
			fVar5 = (fStack_54 - uStack_48._4_4_) * (fStack_54 - uStack_48._4_4_) +(fStack_64 - (float)uStack_48) * (fStack_64 - (float)uStack_48) +(fStack_68 - fVar8) * (fStack_68 - fVar8);
			uStack_48 = uVar7;
			if (fVar5 < 0.0) {
				fVar5 = sqrtf(fVar5);
			}
			else {
				fVar5 = SQRT(fVar5);
			}
			fVar8 = *(float)&(((Object)((long)x + 0xc0)).fields).m_CachedPtr + param_3 + 100.0;
			fVar6 = (fVar5 + -200.0) / fVar8;
			if (fVar6 <= 2.0) {
				if (fVar6 <= 0.2) {
					if ((HashSet<object>)param_4[0xb] ==null) {
						throw new NullReferenceException();
					}
					param_4[0xb].Add(x);
				}
				else {
					if ((HashSet<object>)param_4[0xc] ==null) {
						throw new NullReferenceException();
					}
					param_4[0xc].Add(x);
				}
			}
			else {
				if ((HashSet<object>)param_4[0xd] ==null) {
					throw new NullReferenceException();
				}
				param_4[0xd].Add(x);
			}
			pUVar2 = *targetAddress;
			bVar3 = (pUVar2 == null);
			if (bVar3) {
	label_05be5b99: ;
				*targetAddress = x;
				*(float)(param_4 + 4) = fVar5;
			}
			else {
				pUVar2 = *targetAddress;
				bVar3 = (pUVar2 == (Object)x);
				if ((bVar3) || (fVar5 < *(float)(param_4 + 4))) goto label_05be5b99;
			}
			(**(code*)(*param_4 + 0x1c8))(fVar5,param_4,x,*(ulong)(*param_4 + 0x1d0));
		} while(true);
	}

	[Token(Token = "0x6004052")]
	[Address(RVA = "0x5AE5E60", Offset = "0x5AE4E60", VA = "0x5AE5E60", Slot = "7")]
	protected virtual float GetSpeed()
	{
		// Lifted from source/cpp/Characters/BaseDetection.c (Characters.BaseDetection$$GetSpeed): clean
		BaseCharacter pCVar1;

		pCVar1 = this.Owner;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		return pCVar1.CurrentSpeed;
	}

	[Token(Token = "0x6004053")]
	[Address(RVA = "0x5AE5E80", Offset = "0x5AE4E80", VA = "0x5AE5E80", Slot = "8")]
	protected virtual Vector3 GetPosition()
	{
		// Lifted from source/cpp/Characters/BaseDetection.c (Characters.BaseDetection$$GetPosition): 3 lines keep C-only constructs
		BaseCharacter pCVar1;
		float in_XMM1_Da;
		Vector3 UVar2;

		pCVar1 = this.Owner;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		UVar2._0_8_ =pCVar1.GetCenterPosition();
		UVar2.z = in_XMM1_Da;
		return (Vector3)UVar2;
	}

	[Token(Token = "0x6004054")]
	[Address(RVA = "0x5AE5EB0", Offset = "0x5AE4EB0", VA = "0x5AE5EB0", Slot = "9")]
	protected virtual void OnRecalculate(BaseCharacter character, float distance)
	{
		// Lifted from source/cpp/Characters/BaseDetection.c (Characters.BaseDetection$$OnRecalculate): clean
		return;
	}
}
