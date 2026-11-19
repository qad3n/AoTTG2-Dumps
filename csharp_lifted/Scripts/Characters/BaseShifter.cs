// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseShifter
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/BaseShifter.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/BaseShifter.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using CustomSkins;
using Il2CppDummyDll;
using Photon.Pun;
using Settings;
using SimpleJSONFixed;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20006F6")]
internal class BaseShifter : BaseTitan
{
	[Token(Token = "0x20006F8")]
	[CompilerGenerated]
	private sealed class _003CWaitAndBecomeHuman_003Ed__45 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40020D7")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40020D8")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40020D9")]
		[FieldOffset(Offset = "0x20")]
		public float time;

		[Token(Token = "0x40020DA")]
		[FieldOffset(Offset = "0x28")]
		public BaseShifter _003C_003E4__this;

		[Token(Token = "0x17000B9F")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004372")]
			[Address(RVA = "0x5B18920", Offset = "0x5B17920", VA = "0x5B18920", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter.<WaitAndBecomeHuman>d__45$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000BA0")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004374")]
			[Address(RVA = "0x5B18970", Offset = "0x5B17970", VA = "0x5B18970", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter.<WaitAndBecomeHuman>d__45$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600436F")]
		[Address(RVA = "0x5B16F40", Offset = "0x5B15F40", VA = "0x5B16F40")]
		[DebuggerHidden]
		public _003CWaitAndBecomeHuman_003Ed__45(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter.<WaitAndBecomeHuman>d__45$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004370")]
		[Address(RVA = "0x5B184B0", Offset = "0x5B174B0", VA = "0x5B184B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter.<WaitAndBecomeHuman>d__45$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004371")]
		[Address(RVA = "0x5B184C0", Offset = "0x5B174C0", VA = "0x5B184C0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter.<WaitAndBecomeHuman>d__45$$MoveNext): 17 lines keep C-only constructs
			float seconds;
			byte bVar1;
			int iVar2;
			BaseShifter __this_00;
			BaseTitanComponentCache pCVar3;
			Transform pUVar4;
			InGameManager pGVar5;
			Human __this_01;
			BaseComponentCache pUVar6;
			PhotonView pPVar7;
			MethodInfo pMVar8;
			WaitForSeconds pUVar9;
			Il2CppClass pIVar10;
			IEnumerator pSVar11;
			Vector3 position;
			Vector3 UVar12;
			Vector3 euler;
			Quaternion local_38;

			iVar2 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar2 == 2) {
				this.__1__state = -1;
				if (((__this_00 != null) &&(pCVar3 = __this_00.BaseTitanCache, pCVar3 != null)) && (pUVar4 = pCVar3.Neck, pUVar4 != null)) {
					pGVar5 = __this_00._inGameManager;
					position = pUVar4.position;
					pCVar3 = __this_00.BaseTitanCache;
					if ((pCVar3 != null) &&(pUVar4 = pCVar3.Neck, pUVar4 != null)) {
						local_38 = (Quaternion)pUVar4.rotation;
						UVar12 = Quaternion.Internal_ToEulerRad(ref local_38);
						euler.x = UVar12.x * 57.29578;
						euler.y = UVar12.y * 57.29578;
						euler.z = UVar12.z * 57.29578;
						UVar12 = Quaternion.Internal_MakePositive(euler);
						if (pGVar5 != null) {
							pGVar5.SpawnPlayerAt(false, position, UVar12.y);
							pGVar5 = __this_00._inGameManager;
							if ((pGVar5 != null) &&(__this_01 = (Human)pGVar5.CurrentCharacter, __this_01 != null)) {
								bVar1 = (typeof(Human)._2).typeHierarchyDepth;
								if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(Human))) {
									throw new InvalidCastException();
								}
								pSVar11 = __this_01.WaitAndTransformFromShifter(__this_00.PreviousHumanGas, __this_00.PreviousHumanWeapon);
								__this_01.StartCoroutine(pSVar11);
								return false;
							}
						}
					}
				}
				goto label_05c18905;
			}
			if (iVar2 != 1) {
				if (iVar2 == 0) {
					this.__1__state = -1;
					seconds = this.time;
					pUVar9 = new WaitForSeconds(seconds);
					this.__2__current = (object)pUVar9;
					this.__1__state = 1;
					return true;
				}
				return false;
			}
			this.__1__state = -1;
			pMVar8 = MethodInfo_System_Array_Empty_object;
			if ((__this_00 == null) ||(pUVar6 = __this_00.Cache, pUVar6 == null)) goto label_05c18905;
			pPVar7 = pUVar6.PhotonView;
			if ((MethodInfo_System_Array_Empty_object.field7_0x38).methodMetadataHandle == null) {
				il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_object);
				pIVar10 = *(Il2CppClass*)((long)(pMVar8.field7_0x38).methodMetadataHandle + 0x10);
				if (((pIVar10._2).bitflags1 & 1) != 0) goto label_05c18762;
		label_05c1870f: ;
				pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
				if ((pIVar10._2).cctor_finished_or_no_cctor == 0) goto label_05c18720;
		label_05c1876b: ;
				pIVar10 = (pMVar8.field7_0x38).rgctx_data[2].klass;
				bVar1 = (pIVar10._2).bitflags1;
			}
			else {
				pIVar10 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_object.field7_0x38).methodMetadataHandle + 0x10);
				if (((pIVar10._2).bitflags1 & 1) == 0) goto label_05c1870f;
		label_05c18762: ;
				if ((pIVar10._2).cctor_finished_or_no_cctor != 0) goto label_05c1876b;
		label_05c18720: ;
				pIVar10 = (pMVar8.field7_0x38).rgctx_data[2].klass;
				bVar1 = (pIVar10._2).bitflags1;
			}
			if ((bVar1 & 1) == 0) {
				pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
			}
			if (pPVar7 == null) goto label_05c18905;
			pPVar7.RPC("MarkTransformingRPC", 3, *(Object[]*)pIVar10.static_fields) ;
			pMVar8 = MethodInfo_System_Array_Empty_object;
			pUVar6 = __this_00.Cache;
			if (pUVar6 == null) goto label_05c18905;
			pPVar7 = pUVar6.PhotonView;
			if ((MethodInfo_System_Array_Empty_object.field7_0x38).methodMetadataHandle == null) {
				il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_object);
				pIVar10 = *(Il2CppClass*)((long)(pMVar8.field7_0x38).methodMetadataHandle + 0x10);
				if (((pIVar10._2).bitflags1 & 1) != 0) goto label_05c188d1;
		label_05c187e8: ;
				pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
				if ((pIVar10._2).cctor_finished_or_no_cctor == 0) goto label_05c187fd;
		label_05c188de: ;
				pIVar10 = (pMVar8.field7_0x38).rgctx_data[2].klass;
				bVar1 = (pIVar10._2).bitflags1;
			}
			else {
				pIVar10 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_object.field7_0x38).methodMetadataHandle + 0x10);
				if (((pIVar10._2).bitflags1 & 1) == 0) goto label_05c187e8;
		label_05c188d1: ;
				if ((pIVar10._2).cctor_finished_or_no_cctor != 0) goto label_05c188de;
		label_05c187fd: ;
				pIVar10 = (pMVar8.field7_0x38).rgctx_data[2].klass;
				bVar1 = (pIVar10._2).bitflags1;
			}
			if ((bVar1 & 1) == 0) {
				pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
			}
			if (pPVar7 != null) {
				pPVar7.RPC("MarkDeadRPC", 3, *(Object[]*)pIVar10.static_fields);
				pSVar11 = __this_00.WaitAndDie();
				__this_00.StartCoroutine(pSVar11);
				pUVar9 = new WaitForSeconds(2.0);
				this.__2__current = (object)pUVar9;
				this.__1__state = 2;
				return true;
			}
		label_05c18905: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6004373")]
		[Address(RVA = "0x5B18930", Offset = "0x5B17930", VA = "0x5B18930", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter.<WaitAndBecomeHuman>d__45$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Characters_BaseShifter_WaitAndBecomeHuman_d__45_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20006F9")]
	[CompilerGenerated]
	private sealed class _003CWaitForDeathVisuals_003Ed__47 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40020DB")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40020DC")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40020DD")]
		[FieldOffset(Offset = "0x20")]
		public BaseShifter _003C_003E4__this;

		[Token(Token = "0x40020DE")]
		[FieldOffset(Offset = "0x28")]
		public float delay;

		[Token(Token = "0x17000BA1")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004378")]
			[Address(RVA = "0x5B18B80", Offset = "0x5B17B80", VA = "0x5B18B80", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter.<WaitForDeathVisuals>d__47$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000BA2")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600437A")]
			[Address(RVA = "0x5B18BD0", Offset = "0x5B17BD0", VA = "0x5B18BD0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter.<WaitForDeathVisuals>d__47$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004375")]
		[Address(RVA = "0x5B170B0", Offset = "0x5B160B0", VA = "0x5B170B0")]
		[DebuggerHidden]
		public _003CWaitForDeathVisuals_003Ed__47(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter.<WaitForDeathVisuals>d__47$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004376")]
		[Address(RVA = "0x5B18980", Offset = "0x5B17980", VA = "0x5B18980", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter.<WaitForDeathVisuals>d__47$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004377")]
		[Address(RVA = "0x5B18990", Offset = "0x5B17990", VA = "0x5B18990", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter.<WaitForDeathVisuals>d__47$$MoveNext): 6 lines keep C-only constructs
			int iVar1;
			BaseShifter __this_00;
			BaseComponentCache pUVar2;
			PhotonView __this_01;
			ulong in_RAX;
			GameObject targetGo;
			Object[] parameters;
			object pIVar3;
			object pIVar4;
			WaitForSeconds __this_02;
			ulong uStack_38;

			uStack_38 = in_RAX;
			iVar1 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar1 != 0) {
				if (iVar1 == 1) {
					this.__1__state = -1;
					if (__this_00 == null) goto label_05c18b64;
					targetGo = __this_00.gameObject ;
					PhotonNetwork.Destroy(targetGo);
				}
		label_05c18b50: ;
				return iVar1 == 0;
			}
			this.__1__state = -1;
			if ((__this_00 != null) &&(pUVar2 = __this_00.Cache, pUVar2 != null)) {
				__this_01 = pUVar2.PhotonView;
				parameters = (Object[])new object[1];
				uStack_38 = CONCAT44(this.delay, (float)uStack_38);
				pIVar3 = (object)(((long)&uStack_38 + 4));
				if (parameters != null) {
					if (pIVar3 != null) {
						pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class);
						if (pIVar4 == null) {
							pIVar3 = new ArrayTypeMismatchException();
							throw pIVar3;
						}
					}
					if ((int)parameters.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					parameters[0] = pIVar3;
					if (__this_01 != null) {
						__this_01.RPC("StartDeathVisualsRPC", 0, parameters);
						uStack_38 = CONCAT44(uStack_38._4_4_, this.delay);
						__this_02 = new WaitForSeconds((float)uStack_38 + 6.0 + 1.25);
						this.__2__current = (object)__this_02;
						this.__1__state = 1;
						goto label_05c18b50;
					}
				}
			}
		label_05c18b64: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6004379")]
		[Address(RVA = "0x5B18B90", Offset = "0x5B17B90", VA = "0x5B18B90", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter.<WaitForDeathVisuals>d__47$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Characters_BaseShifter_WaitForDeathVisuals_d__47_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x40020C9")]
	[FieldOffset(Offset = "0x299")]
	protected bool _needRoar;

	[Token(Token = "0x40020CA")]
	[FieldOffset(Offset = "0x29A")]
	public bool TransformingToHuman;

	[Token(Token = "0x40020CB")]
	[FieldOffset(Offset = "0x29C")]
	public float PreviousHumanGas;

	[Token(Token = "0x40020CC")]
	[FieldOffset(Offset = "0x2A0")]
	public BaseUseable PreviousHumanWeapon;

	[Token(Token = "0x40020CD")]
	[FieldOffset(Offset = "0x2A8")]
	public float DeathAnimationLength;

	[Token(Token = "0x40020CE")]
	private const float DeathDissolveDuration = 6f;

	[Token(Token = "0x40020CF")]
	[FieldOffset(Offset = "0x2AC")]
	private bool _deathVisualsStarted;

	[Token(Token = "0x40020D0")]
	[FieldOffset(Offset = "0x2B0")]
	private float _deathVisualsTime;

	[Token(Token = "0x40020D1")]
	[FieldOffset(Offset = "0x2B8")]
	protected BaseCustomSkinLoader _customSkinLoader;

	[Token(Token = "0x40020D2")]
	[FieldOffset(Offset = "0x2C0")]
	private bool _forceEmote;

	[Token(Token = "0x40020D3")]
	[FieldOffset(Offset = "0x2C4")]
	private float _liveTime;

	[Token(Token = "0x40020D4")]
	[FieldOffset(Offset = "0x2C8")]
	private float _liveTimeEnd;

	[Token(Token = "0x17000B92")]
	protected override int DefaultMaxHealth
	{
		[Token(Token = "0x6004347")]
		[Address(RVA = "0x5B15E40", Offset = "0x5B14E40", VA = "0x5B15E40", Slot = "57")]
		get
		{
			// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$get_DefaultMaxHealth): clean
			return 1000;
		}
	}

	[Token(Token = "0x17000B93")]
	protected override float DefaultRunSpeed
	{
		[Token(Token = "0x6004348")]
		[Address(RVA = "0x5B15E50", Offset = "0x5B14E50", VA = "0x5B15E50", Slot = "130")]
		get
		{
			// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$get_DefaultRunSpeed): clean
			return 100.0;
		}
	}

	[Token(Token = "0x17000B94")]
	protected override float DefaultWalkSpeed
	{
		[Token(Token = "0x6004349")]
		[Address(RVA = "0x5B15E60", Offset = "0x5B14E60", VA = "0x5B15E60", Slot = "131")]
		get
		{
			// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$get_DefaultWalkSpeed): clean
			return 20.0;
		}
	}

	[Token(Token = "0x17000B95")]
	protected override float DefaultRotateSpeed
	{
		[Token(Token = "0x600434A")]
		[Address(RVA = "0x5B15E70", Offset = "0x5B14E70", VA = "0x5B15E70", Slot = "133")]
		get
		{
			// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$get_DefaultRotateSpeed): clean
			return 10.0;
		}
	}

	[Token(Token = "0x17000B96")]
	protected override float DefaultJumpForce
	{
		[Token(Token = "0x600434B")]
		[Address(RVA = "0x5B15E80", Offset = "0x5B14E80", VA = "0x5B15E80", Slot = "132")]
		get
		{
			// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$get_DefaultJumpForce): clean
			return 200.0;
		}
	}

	[Token(Token = "0x17000B97")]
	protected override float SizeMultiplier
	{
		[Token(Token = "0x600434C")]
		[Address(RVA = "0x5B15E90", Offset = "0x5B14E90", VA = "0x5B15E90", Slot = "134")]
		get
		{
			// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$get_SizeMultiplier): clean
			return 3.0;
		}
	}

	[Token(Token = "0x17000B98")]
	public override float DefaultCrippleTime
	{
		[Token(Token = "0x600434D")]
		[Address(RVA = "0x5B15EA0", Offset = "0x5B14EA0", VA = "0x5B15EA0", Slot = "121")]
		get
		{
			// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$get_DefaultCrippleTime): clean
			return 3.5;
		}
	}

	[Token(Token = "0x17000B99")]
	public override float LaunchForce
	{
		[Token(Token = "0x600434E")]
		[Address(RVA = "0x5B15EB0", Offset = "0x5B14EB0", VA = "0x5B15EB0", Slot = "126")]
		get
		{
			// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$get_LaunchForce): clean
			float fVar1;

			return fVar1;
		}
	}

	[Token(Token = "0x17000B9A")]
	public override float LaunchTime
	{
		[Token(Token = "0x600434F")]
		[Address(RVA = "0x5B15ED0", Offset = "0x5B14ED0", VA = "0x5B15ED0", Slot = "127")]
		get
		{
			// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$get_LaunchTime): clean
			float fVar1;

			return fVar1;
		}
	}

	[Token(Token = "0x17000B9B")]
	protected override float DisableCooldown
	{
		[Token(Token = "0x6004350")]
		[Address(RVA = "0x5B15EF0", Offset = "0x5B14EF0", VA = "0x5B15EF0", Slot = "135")]
		get
		{
			// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$get_DisableCooldown): clean
			return 5.0;
		}
	}

	[Token(Token = "0x17000B9C")]
	public string SpecialIcon
	{
		[Token(Token = "0x6004351")]
		[Address(RVA = "0x5B15F00", Offset = "0x5B14F00", VA = "0x5B15F00")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$get_SpecialIcon): clean
			return this._SpecialIcon_k__BackingField;
		}
		[Token(Token = "0x6004352")]
		[Address(RVA = "0x5B15F10", Offset = "0x5B14F10", VA = "0x5B15F10")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$set_SpecialIcon): clean
			this._SpecialIcon_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x17000B9D")]
	public float LiveTimeRatio
	{
		[Token(Token = "0x6004353")]
		[Address(RVA = "0x5B15F30", Offset = "0x5B14F30", VA = "0x5B15F30")]
		get
		{
			// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$get_LiveTimeRatio): clean
			float fVar1;
			float fVar2;

			if (0.0 < this._liveTime) {
				fVar2 = this._liveTimeEnd;
				fVar1 = Time.time;
				fVar1 = (fVar2 - fVar1) / this._liveTime;
				fVar2 = 1.0;
				if (fVar1 <= 1.0) {
					fVar2 = fVar1;
				}
				return (float)(-(uint)(0.0 <= fVar1) & (uint)fVar2);
			}
			return -1.0;
		}
	}

	[Token(Token = "0x17000B9E")]
	protected override string MeleeHitType
	{
		[Token(Token = "0x6004356")]
		[Address(RVA = "0x5B16AD0", Offset = "0x5B15AD0", VA = "0x5B16AD0", Slot = "141")]
		get
		{
			// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$get_MeleeHitType): clean
			return "Shifter";
		}
	}

	[Token(Token = "0x6004354")]
	[Address(RVA = "0x5B15FA0", Offset = "0x5B14FA0", VA = "0x5B15FA0", Slot = "104")]
	protected override void Start()
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$Start): 16 lines keep C-only constructs
		float scale;
		InGameManager __this_00;
		BaseTitanComponentCache pCVar1;
		Transform __this_01;
		BaseComponentCache pUVar3;
		PhotonView pPVar4;
		BaseTitanAnimations pCVar5;
		bool bVar6;
		Object[] settings;
		object pIVar7;
		object pIVar8;
		String pSVar9;
		GameObject __this_02;
		ShifterGrowthEffect __this_03;
		MethodInfo method_01;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		Quaternion rotation;
		Vector3 UVar10;
		int local_5c;
		ulong local_58;
		ulong local_48;
		byte[] local_38 = new byte[16];

		__this_00 = this._inGameManager;
		if (__this_00 == null) goto label_05c162eb;
		__this_00.RegisterCharacter((BaseCharacter)this);
		this.Start();
		bVar6 = this.IsMine();
		if (bVar6) {
			pCVar1 = this.BaseTitanCache;
			if ((pCVar1 == null) ||(__this_01 = pCVar1.Neck, __this_01 == null)) goto label_05c162eb;
			pSVar9 = EffectPrefabs.ShifterThunder;
			UVar10 = __this_01.position;
			local_38._8_4_ = extraout_XMM0_Dc;
			local_38._0_8_ = UVar10._0_8_;
			local_38._12_4_ = extraout_XMM0_Dd;
			local_48._0_4_ = (Quaternion.identityQuaternion).x;
			local_48._4_4_ = (Quaternion.identityQuaternion).y;
			local_58._0_4_ = (Quaternion.identityQuaternion).z;
			local_58._4_4_ = (Quaternion.identityQuaternion).w;
			scale = this.Size;
			settings = (Object[])new object[1];
			pUVar3 = this.Cache;
			if ((pUVar3 == null) ||(pPVar4 = pUVar3.PhotonView, pPVar4 == null)) goto label_05c162eb;
			local_5c = pPVar4.viewIdField;
			pIVar7 = (object)local_5c;
			if (settings == null) goto label_05c162eb;
			if (pIVar7 != null) {
				pIVar8 = il2cpp_vm_Object_IsInst(pIVar7, (((settings.obj).klass)._1).element_class);
				if (pIVar8 == null) {
					pIVar7 = new ArrayTypeMismatchException();
					throw pIVar7;
				}
			}
			if ((int)settings.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			settings[0] = pIVar7;
			rotation.z = (float)(undefined4)local_58;
			rotation.w = (float)local_58._4_4_;
			rotation.x = (float)(undefined4)local_48;
			rotation.y = (float)local_48._4_4_;
			UVar10.x = (float)local_38._0_4_;
			UVar10.y = (float)local_38._4_4_;
			EffectSpawner.Spawn(pSVar9, UVar10, rotation, scale, true, settings);
			method_01 = (MethodInfo)ShifterSounds.Thunder;
			this.PlaySound((String)method_01);
			this.LoadSkin();
			this.CheckGround();
			if (this.Grounded == false) {
				pCVar5 = this.BaseTitanAnimations;
				if (pCVar5 == null) goto label_05c162eb;
				pSVar9 = pCVar5.get_Jump();
				bVar6 = (pSVar9 != "");
				if (bVar6) {
					pCVar5 = this.BaseTitanAnimations;
					if (pCVar5 == null) goto label_05c162eb;
					pSVar9 = pCVar5.get_Jump();
					this.StateActionWithTime(6, pSVar9, 0.2, 0.1, true, 0.0);
				}
			}
		}
		__this_02 = this.gameObject;
		if (__this_02 != null) {
			__this_03 = __this_02.AddComponent<ShifterGrowthEffect>();
			if (__this_03 != null) {
				__this_03.Play(this);
				return;
			}
		}
	label_05c162eb: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004355")]
	[Address(RVA = "0x5B16A80", Offset = "0x5B15A80", VA = "0x5B16A80", Slot = "153")]
	public override void Kick()
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$Kick): clean
		this.Attack("AttackKick");
		return;
	}

	[Token(Token = "0x6004357")]
	[Address(RVA = "0x5B16B00", Offset = "0x5B15B00", VA = "0x5B16B00", Slot = "144")]
	protected override string GetFinisherReaction(bool kick, bool smallVictim, bool headHit)
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$GetFinisherReaction): clean
		String pSVar1;
		String pSVar2;

		pSVar2 = "Knockback";
		if (!smallVictim) {
			pSVar2 = "Graze";
		}
		pSVar1 = "Knockback";
		if (headHit) {
			pSVar1 = "Finisher";
		}
		if (kick) {
		}
		return pSVar1;
	}

	[Token(Token = "0x6004358")]
	[Address(RVA = "0x5B16B80", Offset = "0x5B15B80", VA = "0x5B16B80")]
	[PunRPC]
	public void MarkTransformingRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$MarkTransformingRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;

		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) {
			throw new NullReferenceException();
		}
		if (info.Sender == pPVar2._Owner_k__BackingField) {
			this.TransformingToHuman = true;
			return;
		}
		return;
	}

	[Token(Token = "0x6004359")]
	[Address(RVA = "0x5B16BC0", Offset = "0x5B15BC0", VA = "0x5B16BC0", Slot = "204")]
	public virtual void Init(bool ai, string team, JSONNode data, float liveTime)
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$Init): 8 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		BaseShifter pCVar3;
		GameObject pUVar4;
		object pIVar5;
		JSONNode pSVar6;
		String value;
		BaseShifter.d__45<WaitAndBecomeHuman> __this_00;
		MethodInfo* ppMVar7;
		float fVar8;

		if (!ai) {
			if (this != null) {
				pCVar3 = this.klass;
				bVar1 = (pCVar3._2).typeHierarchyDepth;
				bVar2 = (typeof(ErenShifter)._2).typeHierarchyDepth;
				if ((bVar1 < bVar2) ||((pCVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(ErenShifter))) {
					bVar2 = (typeof(AnnieShifter)._2).typeHierarchyDepth;
					if ((bVar1 < bVar2) ||((pCVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(AnnieShifter))) goto label_05c16df9;
					pUVar4 = this.gameObject;
					if (pUVar4 == null) goto label_05c16eb0;
					ppMVar7 = &MethodInfo_UnityEngine_GameObject_AddComponent_AnnieShifterPlayerController;
				}
				else {
					pUVar4 = this.gameObject;
					if (pUVar4 == null) goto label_05c16eb0;
					ppMVar7 = &MethodInfo_UnityEngine_GameObject_AddComponent_ErenShifterPlayerController;
				}
				pUVar4.AddComponent<object>();
			}
	label_05c16df9: ;
			if (0.0 < liveTime) {
				this._liveTime = liveTime;
				fVar8 = Time.time;
				this._liveTimeEnd = fVar8 + liveTime;
				__this_00 = new BaseShifter.d__45<WaitAndBecomeHuman>();
				__this_00.__1__state = 0;
				__this_00.__4__this = this;
				__this_00.time = liveTime;
				this.StartCoroutine((IEnumerator)__this_00);
			}
			goto label_05c16e8f;
		}
		if (this == null) {
	label_05c16c90: ;
			pUVar4 = this.gameObject;
			if (pUVar4 == null) goto label_05c16eb0;
			ppMVar7 = &MethodInfo_UnityEngine_GameObject_AddComponent_BaseTitanAIController;
		}
		else {
			bVar1 = (typeof(WallColossalShifter)._2).typeHierarchyDepth;
			if (((this.klass._2).typeHierarchyDepth < bVar1) ||((this.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(WallColossalShifter))) goto label_05c16c90;
			pUVar4 = this.gameObject;
			if (pUVar4 == null) goto label_05c16eb0;
			ppMVar7 = &MethodInfo_UnityEngine_GameObject_AddComponent_WallColossalAIController;
		}
		pIVar5 = pUVar4.AddComponent<object>();
		if (pIVar5 != null) {
			(*pIVar5.klass.vtable[0xb].methodPtr)(pIVar5,data,pIVar5.klass.vtable[0xb].method);
			if (data != null) {
				pSVar6 = data.get_Item("Name");
				if (pSVar6 != null) {
					value = pSVar6.get_Value();
					this.Name = value;
	label_05c16e8f: ;
					this.Init(ai, team, data);
					return;
				}
			}
		}
	label_05c16eb0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600435A")]
	[Address(RVA = "0x5B16EC0", Offset = "0x5B15EC0", VA = "0x5B16EC0")]
	[IteratorStateMachine(typeof(_003CWaitAndBecomeHuman_003Ed__45))]
	protected IEnumerator WaitAndBecomeHuman(float time)
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$WaitAndBecomeHuman): clean
		BaseShifter.d__45<WaitAndBecomeHuman> __this_00;

		__this_00 = new BaseShifter.d__45<WaitAndBecomeHuman>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.time = time;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600435B")]
	[Address(RVA = "0x5B16F60", Offset = "0x5B15F60", VA = "0x5B16F60", Slot = "84")]
	protected override IEnumerator WaitAndDie()
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$WaitAndDie): clean
		float fVar1;
		BaseTitanAnimations pCVar2;
		String animation;
		BaseShifter.d__47<WaitForDeathVisuals> __this_00;

		pCVar2 = this.BaseTitanAnimations;
		if (pCVar2 == null) {
			throw new NullReferenceException();
		}
		animation = pCVar2.get_Die();
		this.StateActionWithTime(0xf, animation, 0.0, 0.1, true, 0.0);
		fVar1 = this.DeathAnimationLength;
		__this_00 = new BaseShifter.d__47<WaitForDeathVisuals>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.delay = fVar1;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600435C")]
	[Address(RVA = "0x5B17030", Offset = "0x5B16030", VA = "0x5B17030")]
	[IteratorStateMachine(typeof(_003CWaitForDeathVisuals_003Ed__47))]
	protected IEnumerator WaitForDeathVisuals(float delay)
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$WaitForDeathVisuals): clean
		BaseShifter.d__47<WaitForDeathVisuals> __this_00;

		__this_00 = new BaseShifter.d__47<WaitForDeathVisuals>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.delay = delay;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600435D")]
	[Address(RVA = "0x5B170D0", Offset = "0x5B160D0", VA = "0x5B170D0")]
	[PunRPC]
	public void StartDeathVisualsRPC(float delay, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$StartDeathVisualsRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		AnimationHandler __this_00;
		float fVar3;
		double dVar4;
		double dVar5;
		float fVar6;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
			if ((info.Sender != pPVar2._Owner_k__BackingField) ||(this._deathVisualsStarted != false)) {
				return;
			}
			this._deathVisualsStarted = true;
			fVar3 = Time.time;
			dVar4 = PhotonNetwork.Time;
			dVar5 = info.SentServerTime;
			fVar6 = 0.0;
			if (0.0 <= (float)(dVar4 - dVar5)) {
				fVar6 = (float)(dVar4 - dVar5);
			}
			this._deathVisualsTime = (fVar3 + delay) - fVar6;
			__this_00 = this.Animation;
			if (__this_00 != null) {
				__this_00.SetCullingType(true);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600435E")]
	[Address(RVA = "0x5B171E0", Offset = "0x5B161E0", VA = "0x5B171E0")]
	protected void UpdateDeathVisuals()
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$UpdateDeathVisuals): 1 lines keep C-only constructs
		SkinnedMeshRenderer body;
		bool bVar1;
		BaseShifter.c__DisplayClass49_0 __this_00;
		MethodInfo pMVar2;
		Func<Renderer, bool> __this_01;
		TitanDeathDissolve pCVar3;
		float fVar4;
		float fVar5;

		if ((this._deathVisualsStarted != false) &&(bVar1 = this.DeathCollidersDisabled, !bVar1)) {
			fVar4 = Time.time;
			fVar4 = fVar4 - this._deathVisualsTime;
			if (0.0 <= fVar4) {
				pCVar3 = this.DeathDissolve;
				if (pCVar3 != null) {
	label_05c1735a: ;
					fVar4 = fVar4 / 6.0;
					fVar5 = 1.0;
					if (fVar4 <= 1.0) {
						fVar5 = fVar4;
					}
					pCVar3.Update((float)(-(uint)(0.0 <= fVar4) & (uint)fVar5));
					return;
				}
				__this_00 = new BaseShifter.c__DisplayClass49_0();
				pMVar2 = null;
				this.RemoveOutline();
				pMVar2 = (MethodInfo)this.FindBodyRenderer();
				if (__this_00 != null) {
					__this_00.body = (SkinnedMeshRenderer)pMVar2;
					body = __this_00.body;
					fVar5 = this.GetDeathDissolveScale();
					__this_01 = new Func<Renderer, bool>((object)__this_00, (intptr_t)MethodInfo_Characters_BaseShifter_c__DisplayClass49_0_UpdateDeathVisuals_b__0);
					pCVar3 = new TitanDeathDissolve((BaseTitan)this, body, fVar5, __this_01);
					this.DeathDissolve = pCVar3;
					pCVar3 = this.DeathDissolve;
					if (pCVar3 != null) goto label_05c1735a;
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x600435F")]
	[Address(RVA = "0x5B173B0", Offset = "0x5B163B0", VA = "0x5B173B0")]
	private SkinnedMeshRenderer FindBodyRenderer()
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$FindBodyRenderer): clean
		Object __this_00;
		bool bVar1;
		uint uVar2;
		int iVar3;
		int iVar4;
		Object[] pSVar5;
		Object x;
		Mesh pUVar6;
		uint uVar7;
		Object x_00;

		pSVar5 = this.GetComponentsInChildren<SkinnedMeshRenderer>();
		if (pSVar5 == null) {
	label_05c17507: ;
			throw new NullReferenceException();
		}
		uVar2 = (uint)pSVar5.Length;
		uVar7 = 0;
		if ((int)uVar2 < 1) {
			x_00 = null;
		}
		else {
			x_00 = null;
			do {
				if (uVar2 <= uVar7) {
					throw new IndexOutOfRangeException();
				}
				__this_00 = (Object)pSVar5[(int)uVar7];
				if (__this_00 == null) goto label_05c17507;
				bVar1 = __this_00.enabled;
				if (bVar1) {
					x = (Object)__this_00.sharedMesh;
					bVar1 = (x != null);
					if (bVar1) {
						bVar1 = (x_00 == null);
						if (!bVar1) {
							pUVar6 = __this_00.sharedMesh;
							if (((pUVar6 == null) ||(iVar3 = pUVar6.vertexCount, x_00 == null)) ||(pUVar6 = x_00.sharedMesh, pUVar6 == null)) goto label_05c17507;
							iVar4 = pUVar6.vertexCount;
							if (iVar3 <= iVar4) goto label_05c17420;
						}
						x_00 = __this_00;
					}
				}
	label_05c17420: ;
				uVar7 = uVar7 + 1;
				uVar2 = (uint)pSVar5.Length;
			} while ((int)uVar7 < (int)uVar2);
		}
		return (SkinnedMeshRenderer)x_00;
	}

	[Token(Token = "0x6004360")]
	[Address(RVA = "0x5B17520", Offset = "0x5B16520", VA = "0x5B17520")]
	private float GetDeathDissolveScale()
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$GetDeathDissolveScale): clean
		uint uVar1;
		BaseComponentCache pUVar2;
		BaseTitanComponentCache pCVar3;
		Transform pUVar4;
		Transform __this_00;
		float fVar5;
		Vector3 UVar6;
		Vector3 UVar7;
		float local_28;
		float fStack_24;

		pUVar2 = this.Cache;
		if (((pUVar2 != null) &&(pCVar3 = this.BaseTitanCache, pCVar3 != null)) &&(pUVar4 = pCVar3.Hip, pUVar4 != null)) {
			__this_00 = pUVar2.Transform;
			UVar6 = pUVar4.position;
			if (__this_00 != null) {
				UVar6 = __this_00.InverseTransformPoint(UVar6);
				pCVar3 = this.BaseTitanCache;
				if ((pCVar3 != null) &&(pUVar4 = pCVar3.Neck, pUVar4 != null)) {
					UVar7 = pUVar4.position;
					UVar7 = __this_00.InverseTransformPoint(UVar7);
					if (Il2CppMethodInitialized_0753e7b7 == false) {
						Il2CppMethodInitialized_0753e7b7 = true;
						uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					local_28 = UVar6.x;
					fStack_24 = UVar6.y;
					fStack_24 = fStack_24 - UVar7.y;
					fVar5 = UVar6.z - UVar7.z;
					local_28 = local_28 - UVar7.x;
					fVar5 = fStack_24 * fStack_24 + local_28 * local_28 + fVar5 * fVar5;
					if (fVar5 < 0.0) {
						fVar5 = sqrtf(fVar5);
					}
					else {
						fVar5 = SQRT(fVar5);
					}
					return fVar5 + fVar5;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004361")]
	[Address(RVA = "0x5B17670", Offset = "0x5B16670", VA = "0x5B17670", Slot = "101")]
	protected override void Awake()
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$Awake): clean
		BaseCustomSkinLoader pCVar1;

		this.Awake();
		pCVar1 = this.CreateCustomSkinLoader();
		this._customSkinLoader = pCVar1;
		return;
	}

	[Token(Token = "0x6004362")]
	[Address(RVA = "0x5B176B0", Offset = "0x5B166B0", VA = "0x5B176B0", Slot = "90")]
	[PunRPC]
	public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$GetHitRPC): 21 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		InGameSet pSVar3;
		InGameTitanSettings pSVar4;
		BoolSetting pSVar5;
		IntSetting pSVar6;
		BaseComponentCache pUVar7;
		Transform pUVar8;
		BaseTitanComponentCache pCVar9;
		Object pUVar10;
		bool bVar11;
		BaseCharacter x;
		String pSVar12;
		UnityEngine_Vector3_StaticFields pUVar13;
		float fVar14;
		float fVar15;
		uint uVar16;
		uint extraout_XMM0_Db;
		float extraout_XMM0_Dc;
		float fVar17;
		float extraout_XMM0_Dd;
		float fVar18;
		byte[] auVar19 = new byte[16];
		Vector3 UVar20;
		Vector3 UVar21;
		float local_68;
		byte[] local_50 = new byte[12];
		float fStack_44;
		float fStack_40;
		float fStack_3c;

		if (this.Dead == false) {
			bVar11 = (type == "CannonBall");
			if ((!bVar11) &&(bVar11 = (type == "Rock"), !bVar11)) {
				pSVar3 = SettingsManager.InGameCurrent;
				if ((pSVar3 == null) ||((pSVar4 = pSVar3.Titan, pSVar4 == null ||(pSVar5 = pSVar4.TitanArmorEnabled, pSVar5 == null)))) {
	label_05c17c68: ;
					throw new NullReferenceException();
				}
				if (pSVar5._value != false) {
					pSVar6 = pSVar4.TitanArmor;
					if (pSVar6 == null) goto label_05c17c68;
					if (damage < pSVar6._value) {
						damage = 0;
					}
				}
				bVar11 = BaseTitan.IsMeleeHitType(type);
				if (bVar11) {
					fVar14 = this.GetMeleeStunTime(type);
					bVar11 = BaseTitan.IsComboStunType(type);
					this.Stun(fVar14, bVar11);
					x = Util.FindCharacterByViewId(viewId);
					bVar11 = ((Object)x != null);
					if ((!bVar11) || (this.EnableAI == false)) {
	label_05c17c44: ;
						this.GetMeleeHit(viewId, name, damage, type, collider);
						return;
					}
					if ((x != null) &&((pUVar7 = x.Cache, pUVar7 != null &&(pUVar8 = pUVar7.Transform, pUVar8 != null)))) {
						UVar20 = pUVar8.position;
						pUVar7 = this.Cache;
						if ((pUVar7 != null) &&(pUVar8 = pUVar7.Transform, pUVar8 != null)) {
							UVar21 = pUVar8.position;
							pUVar7 = this.Cache;
							if (pUVar7 != null) {
								pUVar8 = pUVar7.Transform;
								local_68 = UVar20.x;
								fVar14 = UVar21.x;
								fVar15 = UVar21.y;
								fVar17 = extraout_XMM0_Dc;
								fVar18 = extraout_XMM0_Dd;
								if (g_data_0753e72d == false) {
									fStack_40 = extraout_XMM0_Dc;
									fStack_3c = extraout_XMM0_Dd;
									g_data_0753e72d = true;
									fVar14 = (float)local_50._8_4_;
									fVar15 = fStack_44;
									fVar17 = fStack_40;
									fVar18 = fStack_3c;
								}
								local_50._0_4_ = 0.0;
								local_50._4_4_ = 0.0;
								if (g_data_0753e729 == false) {
									fStack_44 = fVar15;
									local_50._8_4_ = fVar14;
									fStack_40 = fVar17;
									fStack_3c = fVar18;
									g_data_0753e729 = true;
									fVar14 = (float)local_50._8_4_;
								}
								local_68 = local_68 - fVar14;
								fVar14 = UVar20.z - UVar21.z;
								uVar16 = 0;
								fVar15 = fVar14 * fVar14 + local_68 * local_68 + 0.0;
								if (fVar15 < 0.0) {
									fVar15 = sqrtf(fVar15);
									uVar16 = extraout_XMM0_Db;
								}
								else {
									fVar15 = SQRT(fVar15);
								}
								if (fVar15 <= 1e-05) {
									pUVar13 = typeof(Vector3).static_fields;
									fVar14 = (pUVar13.zeroVector).z;
								}
								else {
									fVar14 = fVar14 / fVar15;
									auVar19._4_4_ = fVar15;
									auVar19._0_4_ = fVar15;
									auVar19._8_4_ = uVar16;
									auVar19._12_4_ = uVar16;
									auVar19 = divps(ZEXT416((uint)local_68), auVar19);
									local_50._0_4_ = auVar19._0_4_;
									local_50._4_4_ = auVar19._4_4_;
									pUVar13 = (UnityEngine_Vector3_StaticFields)local_50;
								}
								if (pUVar8 != null) {
									uVar1 = (pUVar13.zeroVector).x;
									uVar2 = (pUVar13.zeroVector).y;
									UVar20.y = (float)uVar2;
									UVar20.x = (float)uVar1;
									UVar20.z = fVar14;
									pUVar8.forward = UVar20;
									goto label_05c17c44;
								}
							}
						}
					}
					goto label_05c17c68;
				}
				pCVar9 = this.BaseTitanCache;
				if (pCVar9 == null) goto label_05c17c68;
				pUVar10 = (Object)pCVar9.EyesHurtbox;
				bVar11 = (pUVar10 != null);
				if (bVar11) {
					pCVar9 = this.BaseTitanCache;
					if ((pCVar9 == null) ||(pUVar10 = (Object)pCVar9.EyesHurtbox, pUVar10 == null)) goto label_05c17c68;
					pSVar12 = pUVar10.name;
					bVar11 = (collider == pSVar12);
					if (bVar11) {
						this.Blind();
						return;
					}
				}
				pCVar9 = this.BaseTitanCache;
				if (pCVar9 == null) goto label_05c17c68;
				pUVar10 = (Object)pCVar9.LegLHurtbox;
				bVar11 = (pUVar10 != null);
				if (bVar11) {
					pCVar9 = this.BaseTitanCache;
					if ((pCVar9 == null) ||(pUVar10 = (Object)pCVar9.LegLHurtbox, pUVar10 == null)) goto label_05c17c68;
					pSVar12 = pUVar10.name;
					bVar11 = (collider == pSVar12);
					if (bVar11) {
	label_05c17b72: ;
						this.Cripple(0.0);
						return;
					}
					pCVar9 = this.BaseTitanCache;
					if ((pCVar9 == null) ||(pUVar10 = (Object)pCVar9.LegRHurtbox, pUVar10 == null)) goto label_05c17c68;
					pSVar12 = pUVar10.name;
					bVar11 = (collider == pSVar12);
					if (bVar11) goto label_05c17b72;
				}
				pCVar9 = this.BaseTitanCache;
				if ((pCVar9 == null) ||(pUVar10 = (Object)pCVar9.NapeHurtbox, pUVar10 == null)) goto label_05c17c68;
				pSVar12 = pUVar10.name;
				bVar11 = (collider == pSVar12);
				if (!bVar11) {
					return;
				}
			}
			this.GetHitRPC(viewId, name, damage, type, collider);
		}
		return;
	}

	[Token(Token = "0x6004363")]
	[Address(RVA = "0x5B17C70", Offset = "0x5B16C70", VA = "0x5B17C70", Slot = "89")]
	public override void OnHit(BaseHitbox hitbox, object victim, Collider collider, string type, bool firstHit)
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$OnHit): 7 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		Il2CppClass pIVar3;
		Il2CppClass* ppIVar4;
		BaseMenu obj;
		bool bVar5;
		object pIVar6;
		InGameMenu __this_00;
		String pSVar7;
		Transform __this_01;
		uint damage;
		Vector3 position;

		if (this.CustomDamageEnabled == false) {
			damage = 100;
		}
		else {
			damage = this.CustomDamage;
		}
		if (victim == null) {
			if (firstHit) goto label_05c17f23;
		}
		else {
			pIVar3 = victim.klass;
			bVar1 = (pIVar3._2).typeHierarchyDepth;
			bVar2 = (typeof(CustomLogicCollisionHandler)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pIVar3._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicCollisionHandler))) {
				if (hitbox != null) {
					pSVar7 = this.RichTextName;
					__this_01 = hitbox.transform;
					if (__this_01 != null) {
						position = __this_01.position;
						bVar1 = (typeof(CustomLogicCollisionHandler)._2).typeHierarchyDepth;
						if ((bVar1 <= (victim.klass._2).typeHierarchyDepth) &&((victim.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CustomLogicCollisionHandler))) {
							victim.GetHit((BaseCharacter)this, pSVar7, damage, type, position);
							return;
						}
						goto label_05c17f1b;
					}
				}
	label_05c17f23: ;
				throw new NullReferenceException();
			}
			bVar2 = (typeof(BaseCharacter)._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||(ppIVar4 = (pIVar3._2).typeHierarchy, ppIVar4[(ulong)bVar2 - 1] != typeof(BaseCharacter))) {
	label_05c17f1b: ;
				throw new InvalidCastException();
			}
			bVar2 = (typeof(BaseTitan)._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) || (ppIVar4[(ulong)bVar2 - 1] != typeof(BaseTitan))) {
				if ((firstHit) && (*(sbyte)&victim[7].monitor == false)) {
					bVar5 = this.IsMainCharacter();
					if (bVar5) {
						obj = UIManager.CurrentMenu;
						pIVar6 = il2cpp_codegen_is_inst_class((object)obj, typeof(InGameMenu));
						if (pIVar6 == null) goto label_05c17f23;
						__this_00 = (InGameMenu)il2cpp_codegen_is_inst_class((object)obj, typeof(InGameMenu));
						__this_00.ShowKillScore(damage, false);
					}
					if (collider != null) {
						pSVar7 = collider.name;
						(*victim.klass.vtable[0x5f].methodPtr)(victim,this,(ulong)damage,"Shifter",pSVar7, victim.klass.vtable[0x5f].method);
						return;
					}
					goto label_05c17f23;
				}
			}
			else {
				this.OnHitTitan(hitbox, (BaseTitan)victim, collider, damage, firstHit);
			}
		}
		return;
	}

	[Token(Token = "0x6004364")]
	[Address(RVA = "0x5B17F30", Offset = "0x5B16F30", VA = "0x5B17F30", Slot = "184")]
	protected override void Update()
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$Update): clean
		bool bVar1;

		this.Update();
		bVar1 = this.IsMine();
		if (((bVar1) && (this._needRoar != false)) && (this.Grounded != false)) {
			bVar1 = this.CanAction();
			if (bVar1) {
				this.Emote("Roar");
				this._needRoar = false;
			}
		}
		return;
	}

	[Token(Token = "0x6004365")]
	[Address(RVA = "0x5B15DB0", Offset = "0x5B14DB0", VA = "0x5B15DB0", Slot = "114")]
	protected override void LateUpdate()
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$LateUpdate): clean


		this.LateUpdate();
		this.UpdateDeathVisuals();
		return;
	}

	[Token(Token = "0x6004366")]
	[Address(RVA = "0x5B17FC0", Offset = "0x5B16FC0", VA = "0x5B17FC0", Slot = "146")]
	public override bool CanEmote()
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$CanEmote): clean
		bool bVar1;

		if (this._forceEmote == false) {
			return bVar1;
		}
		return true;
	}

	[Token(Token = "0x6004367")]
	[Address(RVA = "0x5B17FE0", Offset = "0x5B16FE0", VA = "0x5B17FE0", Slot = "165")]
	public override void Land()
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$Land): 25 lines keep C-only constructs
		float fVar1;
		float fVar2;
		uint uVar3;
		BaseComponentCache pUVar4;
		Transform __this_00;
		BaseTitanAnimations pCVar6;
		String pSVar7;
		float fVar8;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Quaternion UVar9;
		Vector3 UVar10;
		Vector3 UStack_78;
		byte[] auStack_68 = new byte[16];
		byte[] auStack_58 = new byte[16];
		byte[] auStack_48 = new byte[16];
		ulong uStack_38;
		byte[] auStack_28 = new byte[24];

		if (this._needRoar == false) {
			pCVar6 = this.BaseTitanAnimations;
			if (pCVar6 == null) goto label_05c18227;
			pSVar7 = pCVar6.get_Land();
			this.StateAction(9, pSVar7, 0.1, true);
			uVar3 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		else {
			this._forceEmote = true;
			this.Emote("Roar");
			this._forceEmote = false;
			this._needRoar = false;
			uVar3 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		pUVar4 = this.Cache;
		if ((pUVar4 != null) &&(__this_00 = pUVar4.Transform, __this_00 != null)) {
			pSVar7 = EffectPrefabs.Boom2;
			UVar10 = __this_00.position;
			auStack_28._8_4_ = extraout_XMM0_Dc;
			auStack_28._0_8_ = UVar10._0_8_;
			auStack_28._12_4_ = extraout_XMM0_Dd;
			uStack_38._0_4_ = (Vector3.downVector).x;
			uStack_38._4_4_ = (Vector3.downVector).y;
			fVar1 = (Vector3.downVector).z;
			auStack_68 = ZEXT416((uint)this._currentGroundDistance);
			UStack_78.x = 4.712389;
			UStack_78.y = 0.0;
			UStack_78.z = 0.0;
			UVar9 = Quaternion.Internal_FromEulerRad(ref UStack_78);
			auStack_48._8_4_ = extraout_XMM0_Dc_00;
			auStack_48._0_8_ = UVar9._0_8_;
			auStack_48._12_4_ = extraout_XMM0_Dd_00;
			auStack_58._8_4_ = in_XMM1_Dc;
			auStack_58._0_8_ = UVar9._8_8_;
			auStack_58._12_4_ = in_XMM1_Dd;
			fVar2 = this.Size;
			fVar8 = this.get_SizeMultiplier();
			UVar10.z = UVar10.z + fVar1 * (float)auStack_68._0_4_;
			UVar10.x = (float)auStack_28._0_4_ + (float)uStack_38 * (float)auStack_68._0_4_;
			UVar10.y = (float)auStack_28._4_4_ + uStack_38._4_4_ * (float)auStack_68._0_4_;
			UVar9.z = (float)auStack_58._0_4_;
			UVar9.w = (float)auStack_58._4_4_;
			UVar9.x = (float)auStack_48._0_4_;
			UVar9.y = (float)auStack_48._4_4_;
			EffectSpawner.Spawn(pSVar7, UVar10, UVar9, fVar2 * fVar8, true, null);
			return;
		}
	label_05c18227: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004368")]
	[Address(RVA = "0x5B16310", Offset = "0x5B15310", VA = "0x5B16310")]
	protected void LoadSkin()
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$LoadSkin): 2 lines keep C-only constructs
		byte bVar1;
		CustomSkinSettings pSVar2;
		BaseCustomSkinSettings<ShifterCustomSkinSet> __this_00;
		BoolSetting pSVar3;
		BaseComponentCache pUVar4;
		PhotonView __this_01;
		bool bVar5;
		ShifterCustomSkinSet pSVar6;
		String obj;
		Object[] parameters;
		object pIVar7;

		bVar5 = this.IsMine();
		if (!bVar5) {
			return;
		}
		pSVar2 = SettingsManager.CustomSkinSettings;
		if (((pSVar2 != null) &&(__this_00 = pSVar2.Shifter, __this_00 != null)) &&(pSVar3 = __this_00.SkinsEnabled, pSVar3 != null)) {
			if (pSVar3._value == false) {
				return;
			}
			pSVar6 = (ShifterCustomSkinSet)__this_00.GetSelectedSet();
			if (pSVar6 != null) {
				bVar1 = (typeof(ShifterCustomSkinSet)._2).typeHierarchyDepth;
				if (((pSVar6.klass._2).typeHierarchyDepth < bVar1) ||((pSVar6.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(ShifterCustomSkinSet))) {
					throw new InvalidCastException();
				}
			}
			obj = this.GetSkinURL(pSVar6);
			pUVar4 = this.Cache;
			if (pUVar4 != null) {
				__this_01 = pUVar4.PhotonView;
				parameters = (Object[])new object[1];
				if (parameters != null) {
					if ((obj != null) &&(pIVar7 = il2cpp_vm_Object_IsInst((object)obj, (((parameters.obj).klass)._1).element_class), pIVar7 == null)) {
						pIVar7 = new ArrayTypeMismatchException();
						throw pIVar7;
					}
					if ((int)parameters.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					parameters[0] = (object)obj;
					if (__this_01 != null) {
						__this_01.RPC("LoadSkinRPC", 3, parameters);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004369")]
	[Address(RVA = "0x5B18230", Offset = "0x5B17230", VA = "0x5B18230", Slot = "205")]
	protected virtual string GetSkinURL(ShifterCustomSkinSet set)
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$GetSkinURL): clean
		return "";
	}

	[Token(Token = "0x600436A")]
	[Address(RVA = "0x5B18260", Offset = "0x5B17260", VA = "0x5B18260", Slot = "206")]
	protected virtual BaseCustomSkinLoader CreateCustomSkinLoader()
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$CreateCustomSkinLoader): clean
		return null;
	}

	[Token(Token = "0x600436B")]
	[Address(RVA = "0x5B18270", Offset = "0x5B17270", VA = "0x5B18270")]
	[PunRPC]
	public void LoadSkinRPC(string url, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$LoadSkinRPC): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		BaseCustomSkinLoader pCVar3;
		CustomSkinSettings pSVar4;
		BaseCustomSkinSettings<ShifterCustomSkinSet> pSVar5;
		BoolSetting pSVar6;
		bool bVar7;
		Object[] pSVar8;
		object pIVar9;
		IEnumerator routine;

		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) goto label_05c18435;
		if (info.Sender == pPVar2._Owner_k__BackingField) {
			pCVar3 = this._customSkinLoader;
			bVar7 = ((Object)pCVar3 == null);
			if (!bVar7) {
				pSVar4 = SettingsManager.CustomSkinSettings;
				if (((pSVar4 != null) &&(pSVar5 = pSVar4.Shifter, pSVar5 != null)) &&(pSVar6 = pSVar5.SkinsEnabled, pSVar6 != null)) {
					if (pSVar6._value == false) {
						return;
					}
					pSVar6 = pSVar5.SkinsLocal;
					if (pSVar6 != null) {
						if (pSVar6._value != false) {
							pUVar1 = this.Cache;
							if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) goto label_05c18435;
							if (pPVar2._IsMine_k__BackingField == false) {
								return;
							}
						}
						pCVar3 = this._customSkinLoader;
						pSVar8 = (Object[])new object[1];
						if (pSVar8 != null) {
							if ((url != null) &&(pIVar9 = il2cpp_vm_Object_IsInst((object)url, (((pSVar8.obj).klass)._1).element_class), pIVar9 == null)) {
								pIVar9 = new ArrayTypeMismatchException();
								throw pIVar9;
							}
							if ((int)pSVar8.Length == 0) {
								throw new IndexOutOfRangeException();
							}
							pSVar8[0] = (object)url;
							if (pCVar3 != null) {
								routine = pCVar3.LoadSkinsFromRPC(pSVar8);
								this.StartCoroutine(routine);
								return;
							}
						}
					}
				}
	label_05c18435: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x600436C")]
	[Address(RVA = "0x5B156B0", Offset = "0x5B146B0", VA = "0x5B156B0")]
	public BaseShifter()
	{
		// Lifted from source/cpp/Characters/BaseShifter.c (Characters.BaseShifter$$.ctor): clean
		this._needRoar = true;
		this.DeathAnimationLength = 2.0;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/BaseShifter.c.

	// Characters.BaseShifter.<>c__DisplayClass49_0$$.ctor: clean
	private void c__DisplayClass49_0__ctor()
	{
		base();
		return;
	}

	// Characters.BaseShifter.<>c__DisplayClass49_0$$<UpdateDeathVisuals>b__0: clean
	private bool c__DisplayClass49_0__UpdateDeathVisuals_b__0(Renderer renderer)
	{
		Object y;
		bool bVar1;

		y = (Object)this.body;
		bVar1 = ((Object)renderer == y);
		return bVar1;
	}
}
