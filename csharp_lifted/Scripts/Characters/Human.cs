// ==================== AoTTG2 cross-reference ====================
// Type: Characters.Human
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/Human.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Human.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Controllers;
using CustomSkins;
using Il2CppDummyDll;
using Map;
using Photon.Pun;
using Photon.Realtime;
using Settings;
using UnityEngine;
using Utility;

namespace Characters;

[Token(Token = "0x20006B4")]
internal class Human : BaseCharacter
{
	[Token(Token = "0x20006B5")]
	private sealed class SupplyTransfer
	{
		[Token(Token = "0x4001ED8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public int Id;

		[Token(Token = "0x4001ED9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public Player Recipient;

		[Token(Token = "0x4001EDA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public BaseUseable Weapon;

		[Token(Token = "0x4001EDB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public float Gas;

		[Token(Token = "0x4001EDC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x2C")]
		public int Ammo;

		[Token(Token = "0x4001EDD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int RemovedRounds;

		[Token(Token = "0x60041C2")]
		[Address(RVA = "0x5AF3840", Offset = "0x5AF2840", VA = "0x5AF3840")]
		public SupplyTransfer()
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human.SupplyTransfer$$.ctor): clean
			base();
			return;
		}
	}

	[Token(Token = "0x20006B7")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDie_003Ed__228 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001EE2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001EE3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001EE4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Human _003C_003E4__this;

		[Token(Token = "0x17000B43")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60041C6")]
			[Address(RVA = "0x5AF3AF0", Offset = "0x5AF2AF0", VA = "0x5AF3AF0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitAndDie>d__228$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000B44")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60041C8")]
			[Address(RVA = "0x5AF3B40", Offset = "0x5AF2B40", VA = "0x5AF3B40", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitAndDie>d__228$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60041C3")]
		[Address(RVA = "0x5AF3850", Offset = "0x5AF2850", VA = "0x5AF3850")]
		[DebuggerHidden]
		public _003CWaitAndDie_003Ed__228(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitAndDie>d__228$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60041C4")]
		[Address(RVA = "0x5AF3870", Offset = "0x5AF2870", VA = "0x5AF3870", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitAndDie>d__228$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60041C5")]
		[Address(RVA = "0x5AF3880", Offset = "0x5AF2880", VA = "0x5AF3880", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitAndDie>d__228$$MoveNext): clean
			int iVar1;
			uint uVar2;
			Human __this_00;
			BaseComponentCache pUVar3;
			Transform pUVar4;
			String name;
			GameObject targetGo;
			WaitForSeconds __this_01;
			Quaternion rotation;
			Vector3 position;

			iVar1 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar1 != 0) {
				if (iVar1 == 1) {
					this.__1__state = -1;
					if (__this_00 == null) goto label_05bf3ae9;
					targetGo = __this_00.gameObject ;
					PhotonNetwork.Destroy(targetGo);
				}
		label_05bf3ad9: ;
				return iVar1 == 0;
			}
			this.__1__state = -1;
			if (__this_00 != null) {
				__this_00.DisableAllCustomParticleEffects();
				uVar2 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
				if (__this_00._state == 7) {
					if (uVar2 == 0) {
					}
					__this_00.PlaySound(HumanSounds.Death5);
					uVar2 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
				}
				else {
					if (uVar2 == 0) {
					}
					__this_00.PlaySound(HumanSounds.Death2);
					MusicManager.PlayDeathSong();
					uVar2 = (typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				pUVar3 = __this_00.Cache;
				if ((pUVar3 != null) &&(pUVar4 = pUVar3.Transform, pUVar4 != null)) {
					name = EffectPrefabs.Blood2;
					position = pUVar4.position;
					pUVar3 = __this_00.Cache;
					if ((pUVar3 != null) &&(pUVar4 = pUVar3.Transform, pUVar4 != null)) {
						rotation = pUVar4.rotation;
						EffectSpawner.Spawn(name, position, rotation, 1.0, true, null);
						__this_01 = new WaitForSeconds(2.0);
						this.__2__current = (object)__this_01;
						this.__1__state = 1;
						goto label_05bf3ad9;
					}
				}
			}
		label_05bf3ae9: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x60041C7")]
		[Address(RVA = "0x5AF3B00", Offset = "0x5AF2B00", VA = "0x5AF3B00", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitAndDie>d__228$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Characters_Human_WaitAndDie_d__228_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20006B8")]
	[CompilerGenerated]
	private sealed class _003CWaitAndMount_003Ed__175 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001EE5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001EE6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001EE7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Human _003C_003E4__this;

		[Token(Token = "0x4001EE8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public int mapObjectID;

		[Token(Token = "0x4001EE9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string transformName;

		[Token(Token = "0x4001EEA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public Vector3 positionOffset;

		[Token(Token = "0x4001EEB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		public Vector3 rotationOffset;

		[Token(Token = "0x17000B45")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60041CC")]
			[Address(RVA = "0x5AF3C20", Offset = "0x5AF2C20", VA = "0x5AF3C20", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitAndMount>d__175$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000B46")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60041CE")]
			[Address(RVA = "0x5AF3C70", Offset = "0x5AF2C70", VA = "0x5AF3C70", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitAndMount>d__175$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60041C9")]
		[Address(RVA = "0x5AF3B50", Offset = "0x5AF2B50", VA = "0x5AF3B50")]
		[DebuggerHidden]
		public _003CWaitAndMount_003Ed__175(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitAndMount>d__175$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60041CA")]
		[Address(RVA = "0x5AF3B70", Offset = "0x5AF2B70", VA = "0x5AF3B70", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitAndMount>d__175$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60041CB")]
		[Address(RVA = "0x5AF3B80", Offset = "0x5AF2B80", VA = "0x5AF3B80", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitAndMount>d__175$$MoveNext): clean
			Human __this_00;
			InGameManager pGVar1;
			bool bVar2;

			if ((uint)this.__1__state < 2) {
				__this_00 = this.__4__this;
				this.__1__state = -1;
				if ((__this_00 == null) ||(pGVar1 = __this_00._inGameManager, pGVar1 == null)) {
					throw new NullReferenceException();
				}
				bVar2 = pGVar1.IsFinishedLoading();
				if (!bVar2) {
					this.__2__current = null;
					this.__1__state = 1;
					return true;
				}
				if (__this_00.MountState == 2) {
					__this_00.FinishMount(this.mapObjectID, this.transformName, (Vector3)this.positionOffset, (Vector3)this.rotationOffset);
					return false;
				}
			}
			return false;
		}

		[Token(Token = "0x60041CD")]
		[Address(RVA = "0x5AF3C30", Offset = "0x5AF2C30", VA = "0x5AF3C30", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitAndMount>d__175$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Characters_Human_WaitAndMount_d__175_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20006B9")]
	[CompilerGenerated]
	private sealed class _003CWaitAndTransformFromShifter_003Ed__203 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001EEC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001EED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001EEE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Human _003C_003E4__this;

		[Token(Token = "0x4001EEF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public float previousHumanGas;

		[Token(Token = "0x4001EF0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public BaseUseable previousHumanWeapon;

		[Token(Token = "0x17000B47")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60041D2")]
			[Address(RVA = "0x5AF3F90", Offset = "0x5AF2F90", VA = "0x5AF3F90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitAndTransformFromShifter>d__203$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000B48")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60041D4")]
			[Address(RVA = "0x5AF3FE0", Offset = "0x5AF2FE0", VA = "0x5AF3FE0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitAndTransformFromShifter>d__203$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60041CF")]
		[Address(RVA = "0x5AF3C80", Offset = "0x5AF2C80", VA = "0x5AF3C80")]
		[DebuggerHidden]
		public _003CWaitAndTransformFromShifter_003Ed__203(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitAndTransformFromShifter>d__203$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60041D0")]
		[Address(RVA = "0x5AF3CA0", Offset = "0x5AF2CA0", VA = "0x5AF3CA0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitAndTransformFromShifter>d__203$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60041D1")]
		[Address(RVA = "0x5AF3CB0", Offset = "0x5AF2CB0", VA = "0x5AF3CB0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitAndTransformFromShifter>d__203$$MoveNext): 8 lines keep C-only constructs
			float fVar1;
			Human __this_00;
			HumanStats pCVar2;
			Il2CppClass pIVar3;
			Il2CppClass* ppIVar4;
			bool bVar5;
			byte bVar6;
			object pIVar7;
			AHSSWeapon __this_01;
			byte bVar8;
			BaseUseable pCVar9;
			BaseUseable pCVar10;
			BaseUseable obj;

			if (1 < (uint)this.__1__state) {
				return false;
			}
			__this_00 = this.__4__this;
			this.__1__state = -1;
			if (__this_00 == null) goto label_05bf3f76;
			if (__this_00.FinishSetup == false) {
				this.__2__current = null;
				this.__1__state = 1;
				return true;
			}
			pCVar2 = __this_00.Stats;
			if (pCVar2 == null) goto label_05bf3f76;
			pCVar2.CurrentGas = this.previousHumanGas;
			obj = this.previousHumanWeapon;
			if (obj == null) {
				return false;
			}
			pIVar3 = (Il2CppClass)obj.klass;
			bVar6 = (pIVar3._2).typeHierarchyDepth;
			bVar8 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
			if ((bVar8 <= bVar6) &&((pIVar3._2).typeHierarchy[(ulong)bVar8 - 1] == typeof(BladeWeapon))) {
				pCVar10 = __this_00.Weapon;
				if (pCVar10 == null) goto label_05bf3f76;
				if ((bVar8 <= (pCVar10.klass._2).typeHierarchyDepth) &&((pCVar10.klass._2).typeHierarchy[(ulong)bVar8 - 1] == typeof(BladeWeapon) )) {
					(*(uint)((sbyte)pCVar10 + 0x48)) = (*(uint)((sbyte)obj + 0x48));
					fVar1 = *(float)&(*(ulong)((sbyte)obj + 0x40));
					*(float)&(*(ulong)((sbyte)pCVar10 + 0x40)) = fVar1;
					if (fVar1 != 0.0) {
						return false;
					}
					if (NAN(fVar1)) {
						return false;
					}
					__this_00.ToggleBlades(false);
					return false;
				}
				goto label_05bf3f71;
			}
			bVar8 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
			if (bVar6 < bVar8) {
				return false;
			}
			ppIVar4 = (pIVar3._2).typeHierarchy;
			if (ppIVar4[(ulong)bVar8 - 1] != typeof(AmmoWeapon)) {
				return false;
			}
			bVar8 = (typeof(AHSSWeapon)._2).typeHierarchyDepth;
			if (((bVar6 < bVar8) || (ppIVar4[(ulong)bVar8 - 1] != typeof(AHSSWeapon))) ||(__this_00.AI != false)) {
		label_05bf3e0f: ;
				bVar6 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
				if (((((Il2CppClass)obj.klass)._2).typeHierarchyDepth < bVar6) ||((((Il2CppClass)obj.klass)._2).typeHierarchy[(ulong)bVar6 - 1] !=typeof(AmmoWeapon))) {
					throw new InvalidCastException();
				}
				pCVar10 = __this_00.Weapon;
				if (pCVar10 == null) goto label_05bf3f76;
				bVar5 = false;
				pCVar9 = pCVar10.klass;
				bVar8 = (pCVar9._2).typeHierarchyDepth;
				if (bVar8 < bVar6) goto label_05bf3f71;
			}
			else {
				pIVar7 = il2cpp_codegen_is_inst_class((object)obj, typeof(AHSSWeapon));
				if (pIVar7 == null) goto label_05bf3f76;
				__this_01 = (AHSSWeapon)il2cpp_codegen_is_inst_class((object)obj, typeof(AHSSWeapon));
				__this_01.HandleUI();
				obj = this.previousHumanWeapon;
				if (obj != null) goto label_05bf3e0f;
				pCVar10 = __this_00.Weapon;
				if (pCVar10 == null) goto label_05bf3f76;
				bVar6 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
				bVar5 = true;
				obj = null;
				pCVar9 = pCVar10.klass;
				bVar8 = (pCVar9._2).typeHierarchyDepth;
				if (bVar8 < bVar6) goto label_05bf3f71;
			}
			ppIVar4 = (pCVar9._2).typeHierarchy;
			if (ppIVar4[(ulong)bVar6 - 1] != typeof(AmmoWeapon)) {
		label_05bf3f71: ;
				throw new InvalidCastException();
			}
			if (!bVar5) {
				fVar1 = (*(uint)((sbyte)obj + 0x48));
				(*(uint)((sbyte)pCVar10 + 0x48)) = fVar1;
				*(uint)&(*(ulong)((sbyte)pCVar10 + 0x40)) = *(uint)&(*(ulong)((sbyte)obj + 0x40));
				if (((fVar1 == 0.0) &&(bVar6 = (typeof(ThunderspearWeapon)._2).typeHierarchyDepth, bVar6 <= bVar8)) &&(ppIVar4[(ulong)bVar6 - 1] == typeof(ThunderspearWeapon))) {
					__this_00.SetThunderspears(false, false);
					return false;
				}
				return false;
			}
		label_05bf3f76: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x60041D3")]
		[Address(RVA = "0x5AF3FA0", Offset = "0x5AF2FA0", VA = "0x5AF3FA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitAndTransformFromShifter>d__203$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Characters_Human_WaitAndTransformFromShifter_d__203_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20006BA")]
	[CompilerGenerated]
	private sealed class _003CWaitForSupplyTransfer_003Ed__9 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001EF1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001EF2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001EF3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public Human _003C_003E4__this;

		[Token(Token = "0x4001EF4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public SupplyTransfer transfer;

		[Token(Token = "0x17000B49")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60041D8")]
			[Address(RVA = "0x5AF4180", Offset = "0x5AF3180", VA = "0x5AF4180", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitForSupplyTransfer>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000B4A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60041DA")]
			[Address(RVA = "0x5AF41D0", Offset = "0x5AF31D0", VA = "0x5AF41D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitForSupplyTransfer>d__9$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x60041D5")]
		[Address(RVA = "0x5AF3FF0", Offset = "0x5AF2FF0", VA = "0x5AF3FF0")]
		[DebuggerHidden]
		public _003CWaitForSupplyTransfer_003Ed__9(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitForSupplyTransfer>d__9$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60041D6")]
		[Address(RVA = "0x5AF4010", Offset = "0x5AF3010", VA = "0x5AF4010", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitForSupplyTransfer>d__9$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60041D7")]
		[Address(RVA = "0x5AF4020", Offset = "0x5AF3020", VA = "0x5AF4020", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitForSupplyTransfer>d__9$$MoveNext): clean
			Human __this_00;
			Human.SupplyTransfer pCVar1;
			Player pPVar2;
			Dictionary<int, object> __this_01;
			bool bVar3;
			Room pPVar4;
			WaitForSeconds __this_02;

			if ((uint)this.__1__state < 2) {
				__this_00 = this.__4__this;
				this.__1__state = -1;
				if (__this_00 == null) {
		label_05bf4174: ;
					throw new NullReferenceException();
				}
				if (__this_00._supplyTransfer == this.transfer) {
					pPVar4 = PhotonNetwork.CurrentRoom;
					if (pPVar4 != null) {
						pPVar4 = PhotonNetwork.CurrentRoom;
						if ((((pPVar4 == null) ||(pCVar1 = this.transfer, pCVar1 == null)) ||(pPVar2 = pCVar1.Recipient, pPVar2 == null)) ||(__this_01 = (Dictionary<int, object>)pPVar4.players, __this_01 == null)) goto label_05bf4174;
						bVar3 = __this_01.ContainsKey(pPVar2.actorNumber);
						if (bVar3) {
							__this_02 = new WaitForSeconds(1.0);
							this.__2__current = (object)__this_02;
							this.__1__state = 1;
							return true;
						}
					}
				}
				if (__this_00._supplyTransfer == this.transfer) {
					__this_00.CompleteSupplyTransfer(0.0, 0);
					return false;
				}
			}
			return false;
		}

		[Token(Token = "0x60041D9")]
		[Address(RVA = "0x5AF4190", Offset = "0x5AF3190", VA = "0x5AF4190", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human.<WaitForSupplyTransfer>d__9$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Characters_Human_WaitForSupplyTransfer_d__9_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4001E5A")]
	private const float AirInteractionRange = 25f;

	[Token(Token = "0x4001E5B")]
	private const float GroundInteractionRange = 10f;

	[Token(Token = "0x4001E5C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x100")]
	private SupplyTransfer _supplyTransfer;

	[Token(Token = "0x4001E5D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x108")]
	private int _nextSupplyTransfer;

	[Token(Token = "0x4001E5E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x110")]
	public HumanComponentCache HumanCache;

	[Token(Token = "0x4001E5F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x118")]
	public BaseUseable Special;

	[Token(Token = "0x4001E60")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x120")]
	public BaseUseable Weapon;

	[Token(Token = "0x4001E61")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x128")]
	public HookUseable HookLeft;

	[Token(Token = "0x4001E62")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x130")]
	public HookUseable HookRight;

	[Token(Token = "0x4001E63")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x138")]
	public HumanMountState MountState;

	[Token(Token = "0x4001E64")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x13C")]
	public HumanCarryState CarryState;

	[Token(Token = "0x4001E65")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
	public Horse Horse;

	[Token(Token = "0x4001E66")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
	public bool AllowHorse;

	[Token(Token = "0x4001E67")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x149")]
	public bool AllowSkin;

	[Token(Token = "0x4001E68")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
	public HumanSetup Setup;

	[Token(Token = "0x4001E69")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
	public HumanStats Stats;

	[Token(Token = "0x4001E6A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
	public bool FinishSetup;

	[Token(Token = "0x4001E6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x168")]
	private HumanCustomSkinLoader _customSkinLoader;

	[Token(Token = "0x4001E6C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static LayerMask AimMask;

	[Token(Token = "0x4001E6D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public static LayerMask ClipMask;

	[Token(Token = "0x4001E6E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x170")]
	private Dictionary<Renderer, Material> FPSMaterials;

	[Token(Token = "0x4001E6F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly RaycastHit[] _raycastHits;

	[Token(Token = "0x4001E70")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x178")]
	private HumanState _state;

	[Token(Token = "0x4001E71")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x180")]
	public string CurrentSpecial;

	[Token(Token = "0x4001E72")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x188")]
	public BaseTitan Grabber;

	[Token(Token = "0x4001E73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x190")]
	public Transform GrabHand;

	[Token(Token = "0x4001E74")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x198")]
	public Human Carrier;

	[Token(Token = "0x4001E75")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A0")]
	public Transform CarryBack;

	[Token(Token = "0x4001E76")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1A8")]
	public Human BackHuman;

	[Token(Token = "0x4001E77")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1B0")]
	public Vector3 CarryVelocity;

	[Token(Token = "0x4001E78")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C0")]
	public MapObject MountedMapObject;

	[Token(Token = "0x4001E79")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C8")]
	public Transform MountedTransform;

	[Token(Token = "0x4001E7A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D0")]
	public Vector3 MountedPositionOffset;

	[Token(Token = "0x4001E7B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1DC")]
	public Vector3 MountedRotationOffset;

	[Token(Token = "0x4001E7C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1E8")]
	public Vector3 _lastMountedPosition;

	[Token(Token = "0x4001E7D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1F4")]
	public Vector3 _mountedVelocity;

	[Token(Token = "0x4001E7E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x200")]
	public bool CancelHookLeftKey;

	[Token(Token = "0x4001E7F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x201")]
	public bool CancelHookRightKey;

	[Token(Token = "0x4001E80")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x202")]
	public bool CancelHookBothKey;

	[Token(Token = "0x4001E81")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x203")]
	public bool CanDodge;

	[Token(Token = "0x4001E82")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x204")]
	public bool IsInvincible;

	[Token(Token = "0x4001E83")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x208")]
	public float InvincibleTimeLeft;

	[Token(Token = "0x4001E84")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20C")]
	public bool CanMountedAttack;

	[Token(Token = "0x4001E85")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20D")]
	public bool InMountedCombat;

	[Token(Token = "0x4001E86")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20E")]
	public bool IsAttackableState;

	[Token(Token = "0x4001E87")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20F")]
	public bool IsRefillable;

	[Token(Token = "0x4001E88")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x210")]
	private object[] _lastMountMessage;

	[Token(Token = "0x4001E89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x218")]
	private int _lastCarryRPCSender;

	[Token(Token = "0x4001E8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x21C")]
	private float _grabIFrames;

	[Token(Token = "0x4001E8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x220")]
	private bool _bladeTrailActive;

	[Token(Token = "0x4001E8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x224")]
	private int _bladeFireState;

	[Token(Token = "0x4001E8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x228")]
	private bool _buff1Active;

	[Token(Token = "0x4001E8E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x229")]
	private bool _buff2Active;

	[Token(Token = "0x4001E8F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x22A")]
	private bool _fire1Active;

	[Token(Token = "0x4001E90")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x22C")]
	public float ReelInAxis;

	[Token(Token = "0x4001E91")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x230")]
	public float ReelOutAxis;

	[Token(Token = "0x4001E92")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x234")]
	public float ReelOutScrollTimeLeft;

	[Token(Token = "0x4001E93")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x238")]
	public float TargetMagnitude;

	[Token(Token = "0x4001E94")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x23C")]
	public bool IsWalk;

	[Token(Token = "0x4001E95")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x23D")]
	private bool _pivot;

	[Token(Token = "0x4001E96")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x23E")]
	private bool _pivotLeft;

	[Token(Token = "0x4001E97")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x23F")]
	private bool _pivotRight;

	[Token(Token = "0x4001E98")]
	private const float MaxVelocityChange = 10f;

	[Token(Token = "0x4001E99")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x240")]
	private float _originalDashSpeed;

	[Token(Token = "0x4001E9A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x244")]
	public Quaternion _targetRotation;

	[Token(Token = "0x4001E9B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x254")]
	private float _wallRunTime;

	[Token(Token = "0x4001E9C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x258")]
	private bool _wallJump;

	[Token(Token = "0x4001E9D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x259")]
	private bool _wallSlide;

	[Token(Token = "0x4001E9E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x25A")]
	private bool _canWallSlideJump;

	[Token(Token = "0x4001E9F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x25C")]
	private Vector3 _wallSlideGround;

	[Token(Token = "0x4001EA0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x268")]
	private bool _launchLeft;

	[Token(Token = "0x4001EA1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x269")]
	private bool _launchRight;

	[Token(Token = "0x4001EA2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x26C")]
	private float _launchLeftTime;

	[Token(Token = "0x4001EA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x270")]
	private float _launchRightTime;

	[Token(Token = "0x4001EA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x274")]
	private bool _needLean;

	[Token(Token = "0x4001EA5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x275")]
	private bool _almostSingleHook;

	[Token(Token = "0x4001EA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x276")]
	private bool _leanLeft;

	[Token(Token = "0x4001EA7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x277")]
	private bool _isTrigger;

	[Token(Token = "0x4001EA8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x278")]
	private bool _useFixedUpdateClipping;

	[Token(Token = "0x4001EA9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x27C")]
	private Vector3 _lastPosition;

	[Token(Token = "0x4001EAA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x288")]
	private Vector3 _lastVelocity;

	[Token(Token = "0x4001EAB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x294")]
	private Vector3 _currentVelocity;

	[Token(Token = "0x4001EAC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static LayerMask TitanDetectionMask;

	[Token(Token = "0x4001EAD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2A0")]
	private LayerMask HumanGroundMaskLayers;

	[Token(Token = "0x4001EAE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2A4")]
	private Quaternion _oldHeadRotation;

	[Token(Token = "0x4001EAF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2B4")]
	public Vector2 LastGoodHeadAngle;

	[Token(Token = "0x4001EB0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2BC")]
	public Quaternion? LateUpdateHeadRotation;

	[Token(Token = "0x4001EB1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2D0")]
	public Quaternion? LateUpdateHeadRotationRecv;

	[Token(Token = "0x4001EB2")]
	private const float CarryLagCompensationDistance = 100f;

	[Token(Token = "0x4001EB3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2E8")]
	public string StandAnimation;

	[Token(Token = "0x4001EB4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2F0")]
	public string AttackAnimation;

	[Token(Token = "0x4001EB5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x2F8")]
	public bool _gunArmAim;

	[Token(Token = "0x4001EB6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x300")]
	public string RunAnimation;

	[Token(Token = "0x4001EB7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x308")]
	public string WalkAnimation;

	[Token(Token = "0x4001EB8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x310")]
	public bool _attackRelease;

	[Token(Token = "0x4001EB9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x311")]
	public bool _attackButtonRelease;

	[Token(Token = "0x4001EBA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x312")]
	public bool _reelInWaitForRelease;

	[Token(Token = "0x4001EBB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x314")]
	private float _stateTimeLeft;

	[Token(Token = "0x4001EBC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x318")]
	private float _dashTimeLeft;

	[Token(Token = "0x4001EBD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x31C")]
	private bool _cancelGasDisable;

	[Token(Token = "0x4001EBE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x31D")]
	private bool _gasEffectEnabled;

	[Token(Token = "0x4001EBF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x31E")]
	private bool _smokeActive;

	[Token(Token = "0x4001EC0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x31F")]
	private bool _sparksActive;

	[Token(Token = "0x4001EC1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x320")]
	private bool _animationStopped;

	[Token(Token = "0x4001EC2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x321")]
	private bool _needFinishReload;

	[Token(Token = "0x4001EC3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x322")]
	private bool _needFinishSheatheSwap;

	[Token(Token = "0x4001EC4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x323")]
	private bool _sheathedTsLeft;

	[Token(Token = "0x4001EC5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x324")]
	private bool _sheathedTsRight;

	[Token(Token = "0x4001EC6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x325")]
	public bool Sheathed;

	[Token(Token = "0x4001EC7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x328")]
	private float _reloadTimeLeft;

	[Token(Token = "0x4001EC8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x32C")]
	private float _reloadCooldownLeft;

	[Token(Token = "0x4001EC9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x330")]
	private string _reloadAnimation;

	[Token(Token = "0x4001ECA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x338")]
	private float _dashCooldownLeft;

	[Token(Token = "0x4001ECB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x340")]
	private Human _hookHuman;

	[Token(Token = "0x4001ECC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x348")]
	private bool _hookHumanLeft;

	[Token(Token = "0x4001ECD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x34C")]
	private float _hookHumanConstantTimeLeft;

	[Token(Token = "0x4001ECE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x350")]
	private bool _isReelingOut;

	[Token(Token = "0x4001ECF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x358")]
	private Dictionary<BaseTitan, float> _lastNapeHitTimes;

	[Token(Token = "0x4001ED0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x360")]
	private readonly HashSet<BasicTitan> _haircutTargets;

	[Token(Token = "0x4001ED1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x368")]
	private Material _originalSmokeMaterial;

	[Token(Token = "0x4001ED2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x370")]
	public IHumanController Controller;

	[Token(Token = "0x4001ED3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x378")]
	public InGameCharacterSettings Settings;

	[Token(Token = "0x4001ED4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x380")]
	private Collider _lastHit;

	[Token(Token = "0x4001ED5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x388")]
	private Vector3 _lastDirection;

	[Token(Token = "0x4001ED6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x394")]
	private float _collisionTimer;

	[Token(Token = "0x4001ED7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x398")]
	private float _collisionInterval;

	[Token(Token = "0x17000B35")]
	private float InteractionRange
	{
		[Token(Token = "0x60040EC")]
		[Address(RVA = "0x5ABD0B0", Offset = "0x5ABC0B0", VA = "0x5ABD0B0")]
		get
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human$$get_InteractionRange): 1 lines keep C-only constructs
			return *(float)(&g_data_0100ae48 + (ulong)(this.Grounded == false) * 4);
		}
	}

	[Token(Token = "0x17000B36")]
	public override List<string> EmoteActions
	{
		[Token(Token = "0x60040F7")]
		[Address(RVA = "0x5ABEF80", Offset = "0x5ABDF80", VA = "0x5ABEF80", Slot = "59")]
		get
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human$$get_EmoteActions): 14 lines keep C-only constructs
			int piVar1;
			uint uVar2;
			String[] pSVar3;
			String pSVar5;
			List<string> __this_00;

			__this_00 = new List<string>();
			pSVar5 = "Salute";
			if (__this_00 != null) {
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pSVar3 = __this_00._items;
				if (pSVar3 != null) {
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pSVar3.Length) {
						__this_00._size = uVar2 + 1;
						pSVar3[(int)uVar2] = pSVar5;
					}
					else {
						__this_00.AddWithResize((object)pSVar5);
					}
					pSVar5 = "Wave";
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar3 = __this_00._items;
					if (pSVar3 != null) {
						uVar2 = __this_00._size;
						if (uVar2 < (uint)pSVar3.Length) {
							__this_00._size = uVar2 + 1;
							pSVar3[(int)uVar2] = pSVar5;
						}
						else {
							__this_00.AddWithResize((object)pSVar5);
						}
						pSVar5 = "Nod";
						piVar1 = &__this_00._version;
						*piVar1 = *piVar1 + 1;
						pSVar3 = __this_00._items;
						if (pSVar3 != null) {
							uVar2 = __this_00._size;
							if (uVar2 < (uint)pSVar3.Length) {
								__this_00._size = uVar2 + 1;
								pSVar3[(int)uVar2] = pSVar5;
							}
							else {
								__this_00.AddWithResize((object)pSVar5);
							}
							pSVar5 = "Shake";
							piVar1 = &__this_00._version;
							*piVar1 = *piVar1 + 1;
							pSVar3 = __this_00._items;
							if (pSVar3 != null) {
								uVar2 = __this_00._size;
								if (uVar2 < (uint)pSVar3.Length) {
									__this_00._size = uVar2 + 1;
									pSVar3[(int)uVar2] = pSVar5;
								}
								else {
									__this_00.AddWithResize((object)pSVar5);
								}
								pSVar5 = "Dance";
								piVar1 = &__this_00._version;
								*piVar1 = *piVar1 + 1;
								pSVar3 = __this_00._items;
								if (pSVar3 != null) {
									uVar2 = __this_00._size;
									if (uVar2 < (uint)pSVar3.Length) {
										__this_00._size = uVar2 + 1;
										pSVar3[(int)uVar2] = pSVar5;
									}
									else {
										__this_00.AddWithResize((object)pSVar5);
									}
									pSVar5 = "Eat";
									piVar1 = &__this_00._version;
									*piVar1 = *piVar1 + 1;
									pSVar3 = __this_00._items;
									if (pSVar3 != null) {
										uVar2 = __this_00._size;
										if (uVar2 < (uint)pSVar3.Length) {
											__this_00._size = uVar2 + 1;
											pSVar3[(int)uVar2] = pSVar5;
										}
										else {
											__this_00.AddWithResize((object)pSVar5);
										}
										pSVar5 = "Flip";
										piVar1 = &__this_00._version;
										*piVar1 = *piVar1 + 1;
										pSVar3 = __this_00._items;
										if (pSVar3 != null) {
											uVar2 = __this_00._size;
											if (uVar2 < (uint)pSVar3.Length) {
												__this_00._size = uVar2 + 1;
												pSVar3[(int)uVar2] = pSVar5;
											}
											else {
												__this_00.AddWithResize((object)pSVar5);
											}
											return __this_00;
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
	}

	[Token(Token = "0x17000B37")]
	public override float MaxFootstepDistance
	{
		[Token(Token = "0x60040F8")]
		[Address(RVA = "0x5ABF2B0", Offset = "0x5ABE2B0", VA = "0x5ABF2B0", Slot = "60")]
		get
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human$$get_MaxFootstepDistance): clean
			return 75.0;
		}
	}

	[Token(Token = "0x17000B38")]
	public override float MaxSoundDistance
	{
		[Token(Token = "0x60040F9")]
		[Address(RVA = "0x5ABF2C0", Offset = "0x5ABE2C0", VA = "0x5ABF2C0", Slot = "61")]
		get
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human$$get_MaxSoundDistance): clean
			return 100.0;
		}
	}

	[Token(Token = "0x17000B39")]
	public override float LODQualityMediumDistance
	{
		[Token(Token = "0x60040FA")]
		[Address(RVA = "0x5ABF2D0", Offset = "0x5ABE2D0", VA = "0x5ABF2D0", Slot = "62")]
		get
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human$$get_LODQualityMediumDistance): clean
			return 50.0;
		}
	}

	[Token(Token = "0x17000B3A")]
	public override float LODQualityLowDistance
	{
		[Token(Token = "0x60040FB")]
		[Address(RVA = "0x5ABF2E0", Offset = "0x5ABE2E0", VA = "0x5ABF2E0", Slot = "63")]
		get
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human$$get_LODQualityLowDistance): clean
			return 100.0;
		}
	}

	[Token(Token = "0x17000B3B")]
	public override float CullShadowsDistance
	{
		[Token(Token = "0x60040FC")]
		[Address(RVA = "0x5ABF2F0", Offset = "0x5ABE2F0", VA = "0x5ABF2F0", Slot = "64")]
		get
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human$$get_CullShadowsDistance): clean
			return 200.0;
		}
	}

	[Token(Token = "0x17000B3C")]
	public override float CullRendererDistance
	{
		[Token(Token = "0x60040FD")]
		[Address(RVA = "0x5ABF300", Offset = "0x5ABE300", VA = "0x5ABF300", Slot = "65")]
		get
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human$$get_CullRendererDistance): clean
			return 350.0;
		}
	}

	[Token(Token = "0x17000B3D")]
	public override float CullEffectsDistance
	{
		[Token(Token = "0x60040FE")]
		[Address(RVA = "0x5ABF310", Offset = "0x5ABE310", VA = "0x5ABF310", Slot = "66")]
		get
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human$$get_CullEffectsDistance): clean
			return 350.0;
		}
	}

	[Token(Token = "0x17000B3E")]
	public float CullGasEffectDistance
	{
		[Token(Token = "0x60040FF")]
		[Address(RVA = "0x5ABF320", Offset = "0x5ABE320", VA = "0x5ABF320")]
		get
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human$$get_CullGasEffectDistance): clean
			return 5000.0;
		}
	}

	[Token(Token = "0x17000B3F")]
	public bool Pivot
	{
		[Token(Token = "0x6004100")]
		[Address(RVA = "0x5ABF330", Offset = "0x5ABE330", VA = "0x5ABF330")]
		get
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human$$get_Pivot): clean
			return this._pivot;
		}
	}

	[Token(Token = "0x17000B40")]
	public override LayerMask GroundMask
	{
		[Token(Token = "0x6004101")]
		[Address(RVA = "0x5ABF340", Offset = "0x5ABE340", VA = "0x5ABF340", Slot = "67")]
		get
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human$$get_GroundMask): clean
			return (LayerMask)(LayerMask)this.HumanGroundMaskLayers.m_Mask;
		}
	}

	[Token(Token = "0x17000B41")]
	public bool IsUnarmed
	{
		[Token(Token = "0x6004131")]
		[Address(RVA = "0x5AC3D00", Offset = "0x5AC2D00", VA = "0x5AC3D00")]
		get
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human$$get_IsUnarmed): 1 lines keep C-only constructs
			byte bVar1;
			BaseUseable pCVar2;
			BaseUseable pCVar3;

			pCVar2 = this.Weapon;
			if (pCVar2 != null) {
				pCVar3 = pCVar2.klass;
				bVar1 = (typeof(UnarmedWeapon)._2).typeHierarchyDepth;
				if (bVar1 <= (pCVar3._2).typeHierarchyDepth) {
					return (pCVar3._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(UnarmedWeapon);
				}
			}
			return false;
		}
	}

	[Token(Token = "0x17000B42")]
	public HumanState State
	{
		[Token(Token = "0x60041BC")]
		[Address(RVA = "0x5AE1310", Offset = "0x5AE0310", VA = "0x5AE1310")]
		get
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human$$get_State): clean
			return this._state;
		}
		[Token(Token = "0x60041BD")]
		[Address(RVA = "0x5AC1AE0", Offset = "0x5AC0AE0", VA = "0x5AC1AE0")]
		set
		{
			// Lifted from source/cpp/Characters/Human.c (Characters.Human$$set_State): clean
			if ((this._state & 0xfffffffeU) == 2) {
				this._dashTimeLeft = 0.0;
			}
			this._state = value;
			return;
		}
	}

	[Token(Token = "0x60040ED")]
	[Address(RVA = "0x5ABD0D0", Offset = "0x5ABC0D0", VA = "0x5ABD0D0")]
	public void ToggleCarry()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ToggleCarry): 1 lines keep C-only constructs
		int iVar1;
		bool bVar2;
		Human pCVar3;

		bVar2 = this.IsMine();
		if ((((((bVar2) && (this.FinishSetup != false)) && (this.Dead == false)) &&((iVar1 = this._state, iVar1 != 7 && (this.CarryState != 1)))) &&((iVar1 != 3 && ((iVar1 != 8 && (iVar1 != 9)))))) &&((this.IsAttackableState != false && ((iVar1 != 0xf && (iVar1 != 1)))))) {
			pCVar3 = this.BackHuman;
			bVar2 = ((Object)pCVar3 != null);
			if (bVar2) {
				this.StopCarrySpecial();
				return;
			}
			pCVar3 = this.GetCarryOption(*(float)(&g_data_0100ae48 + (ulong)(this.Grounded == false) * 4));
			bVar2 = ((Object)pCVar3 != null);
			if (bVar2) {
				this.StartCarrySpecial(pCVar3);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60040EE")]
	[Address(RVA = "0x5ABD780", Offset = "0x5ABC780", VA = "0x5ABD780")]
	public void ShareSupplies()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ShareSupplies): 40 lines keep C-only constructs
		Player* targetAddress;
		byte bVar1;
		InGameManager pGVar2;
		HashSet<object> __this_00;
		BaseComponentCache pUVar3;
		Transform pUVar4;
		HumanStats pCVar5;
		HumanSetup pCVar6;
		String pSVar7;
		BaseUseable pCVar8;
		PhotonView pPVar9;
		Player targetPlayer;
		PhotonView pPVar10;
		BaseCharacter b;
		bool bVar11;
		int iVar12;
		int iVar13;
		Human.SupplyTransfer __this_01;
		Object[] parameters;
		object pIVar14;
		IEnumerator routine;
		MethodInfo extraout_RDX;
		MethodInfo pMVar15;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		MethodInfo extraout_RDX_03;
		BaseUseable method_00;
		uint amount;
		BaseCharacter x;
		float fVar16;
		float fVar17;
		float fVar18;
		float extraout_XMM1_Db;
		float extraout_XMM1_Dc;
		float extraout_XMM1_Dd;
		float fVar19;
		Vector3 UVar20;
		Vector3 UVar21;
		float fStack_b4;
		float fStack_a8;
		float fStack_a4;
		uint uStack_94;
		int iStack_90;
		uint uStack_8c;
		float fStack_88;
		int iStack_84;
		byte[] auStack_80 = new byte[16];
		BaseCharacter pCStack_70;
		byte[] auStack_68 = new byte[8];
		BaseCharacter pCStack_58;
		float fStack_48;

		auStack_68 = (byte[])0x0;
		pCStack_58 = null;
		bVar11 = this.IsMine();
		if (!bVar11) {
			return;
		}
		if (this.FinishSetup == false) {
			return;
		}
		if (this.Dead != false) {
			return;
		}
		if (this._supplyTransfer != null) {
			return;
		}
		pGVar2 = this._inGameManager;
		if ((pGVar2 != null) &&(__this_00 = (HashSet<object>)pGVar2.Humans, __this_00 != null)) {
			fStack_b4 = *(float)(&g_data_0100ab58 + (ulong)(this.Grounded == false) * 4);
			fVar16 = extraout_XMM1_Db;
			fVar17 = extraout_XMM1_Dc;
			fVar18 = extraout_XMM1_Dd;
			auStack_80.GetEnumerator(__this_00);
			pCStack_58 = pCStack_70;
			auStack_68 = (byte[])auStack_80._0_8_;
			auStack_80._0_8_ = null;
			x = null;
			auStack_80._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)auStack_68;
			while(true) {
				bVar11 = auStack_68.MoveNext();
				b = pCStack_58;
				if (!bVar11) break;
				bVar11 = ((Object)b == null);
				if (!bVar11) {
					bVar11 = ((Object)b == (Object)this);
					if (!bVar11) {
						if (b == null) {
							throw new NullReferenceException();
						}
						if (b.AI == false) {
							if (b.Dead == false) {
								if (*(sbyte)&(*(ulong)((sbyte)b + 0x160)) != false) {
									bVar11 = TeamInfo.SameTeam((BaseCharacter)this, b);
									if (bVar11) {
										pUVar3 = b.Cache;
										if (pUVar3 == null) {
											throw new NullReferenceException();
										}
										pUVar4 = pUVar3.Transform;
										if (pUVar4 == null) {
											throw new NullReferenceException();
										}
										fVar19 = fVar17;
										UVar20 = pUVar4.position;
										fVar17 = fVar16;
										fStack_48 = UVar20.z;
										pUVar3 = this.Cache;
										if (pUVar3 == null) {
											throw new NullReferenceException();
										}
										pUVar4 = pUVar3.Transform;
										if (pUVar4 == null) {
											throw new NullReferenceException();
										}
										UVar21 = pUVar4.position;
										fVar16 = UVar21.x;
										fVar18 = UVar21.y;
										fStack_a8 = UVar20.x;
										fStack_a4 = UVar20.y;
										fVar19 = fStack_48 - UVar21.z;
										fVar19 = (fStack_a4 - fVar18) * (fStack_a4 - fVar18) +(fStack_a8 - fVar16) * (fStack_a8 - fVar16) + fVar19 * fVar19;
										if (fVar19 < fStack_b4) {
											x = b;
											fStack_b4 = fVar19;
										}
									}
								}
							}
						}
					}
				}
			}
			auStack_68.Dispose();
			pMVar15 = null;
			bVar11 = ((Object)x == null);
			if (bVar11) {
				return;
			}
			pCVar5 = this.Stats;
			if (pCVar5 != null) {
				fVar16 = pCVar5.CurrentGas;
				fVar17 = 0.0;
				if ((~(uint)fVar16 & 0x7f800000) != 0) {
					fVar17 = Math.Max(0.0, fVar16);
					fVar17 = fVar17 * 0.5;
				}
				pCVar6 = this.Setup;
				if (((pCVar6 != null) && (x != null)) &&(pSVar7 = (*(ulong)((sbyte)x + 0x150)), pSVar7 != null)) {
					amount = 0;
					if (pCVar6.Weapon == *(int)&pSVar7[0x13].monitor) {
						pCVar8 = this.Weapon;
						iVar12 = Human.GetSupplyAmmo(pCVar8);
						amount = iVar12 / 2;
					}
					if (((fVar17 == 0.0) && (!NAN(fVar17))) && (amount == 0)) {
						return;
					}
					__this_01 = new Human.SupplyTransfer();
					iVar13 = this._nextSupplyTransfer + 1;
					this._nextSupplyTransfer = iVar13;
					if (__this_01 != null) {
						__this_01.Id = iVar13;
						pUVar3 = x.Cache;
						if ((pUVar3 != null) &&(pPVar9 = pUVar3.PhotonView, pPVar9 != null)) {
							targetAddress = &__this_01.Recipient;
							__this_01.Recipient = pPVar9._Owner_k__BackingField;
							__this_01.Weapon = this.Weapon;
							__this_01.Gas = fVar17;
							__this_01.Ammo = amount;
							this._supplyTransfer = __this_01;
							pCVar5 = this.Stats;
							if (pCVar5 != null) {
								pCVar5.CurrentGas = pCVar5.CurrentGas - fVar17;
								pCVar8 = this.Weapon;
								fVar16 = 0.0;
								pMVar15 = extraout_RDX;
								if (pCVar8 != null) {
									bVar1 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
									pMVar15 = (MethodInfo)(ulong)bVar1;
									if ((bVar1 <= (pCVar8.klass._2).typeHierarchyDepth) &&((pCVar8.klass._2).typeHierarchy[(long)&pMVar15[-1].field_0x57] ==typeof(AmmoWeapon))) {
										fVar16 = (*(uint)((sbyte)pCVar8 + 0x48));
									}
								}
								if ((typeof(Human)._2).cctor_finished_or_no_cctor == 0) {
									pMVar15 = extraout_RDX_00;
								}
								method_00 = (BaseUseable)(ulong)amount;
								Human.RemoveSupplyAmmo(pCVar8, amount);
								pCVar8 = this.Weapon;
								iVar13 = 0;
								if (pCVar8 != null) {
									method_00 = pCVar8.klass;
									bVar1 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
									if ((bVar1 <= (method_00._2).typeHierarchyDepth) &&(method_00 = (BaseUseable)(method_00._2).typeHierarchy, *(AmmoWeapon*)((long)method_00 + (ulong)bVar1 * 8 + -8) == typeof(AmmoWeapon))) {
										iVar13 = (int)fVar16 - (int)(*(uint)((sbyte)pCVar8 + 0x48));
									}
								}
								__this_01.RemovedRounds = iVar13;
								this.RefreshSupplyWeapon();
								pUVar3 = this.Cache;
								if (pUVar3 != null) {
									pPVar9 = pUVar3.PhotonView;
									targetPlayer = *targetAddress;
									parameters = (Object[])new object[6];
									pUVar3 = x.Cache;
									if ((pUVar3 != null) &&(pPVar10 = pUVar3.PhotonView, pPVar10 != null)) {
										auStack_80._0_4_ = pPVar10.viewIdField;
										pIVar14 = (object)auStack_80;
										if (parameters != null) {
											il2cpp_codegen_array_element_type_check((Array)parameters, pIVar14);
											il2cpp_runtime_helper_02ac8d90(parameters, 0, pIVar14);
											iStack_84 = __this_01.Id;
											pIVar14 = (object)iStack_84;
											il2cpp_codegen_array_element_type_check((Array)parameters, pIVar14);
											il2cpp_runtime_helper_02ac8d90(parameters, 1, pIVar14);
											fStack_88 = fVar17;
											pIVar14 = (object)fStack_88;
											il2cpp_codegen_array_element_type_check((Array)parameters, pIVar14);
											il2cpp_runtime_helper_02ac8d90(parameters, 2, pIVar14);
											uStack_8c = amount;
											pIVar14 = (object)uStack_8c;
											il2cpp_codegen_array_element_type_check((Array)parameters, pIVar14);
											il2cpp_runtime_helper_02ac8d90(parameters, 3, pIVar14);
											pCVar6 = this.Setup;
											if (pCVar6 != null) {
												iStack_90 = pCVar6.Weapon;
												pIVar14 = (object)iStack_90;
												il2cpp_codegen_array_element_type_check((Array)parameters, pIVar14);
												il2cpp_runtime_helper_02ac8d90(parameters, 4, pIVar14);
												uStack_94 = *(uint)(&g_data_0100ae48 + (ulong)(this.Grounded == false) * 4);
												pIVar14 = (object)uStack_94;
												il2cpp_codegen_array_element_type_check((Array)parameters, pIVar14);
												il2cpp_runtime_helper_02ac8d90(parameters, 5, pIVar14);
												if (pPVar9 != null) {
													pMVar15 = (MethodInfo *)"ShareSuppliesRPC";
													pPVar9.RPC("ShareSuppliesRPC", targetPlayer, parameters);
													bVar11 = this.CanEmote();
													pMVar15 = extraout_RDX_01;
													if ((bVar11) && (this._state != 1)) {
														if ((typeof(HumanAnimations)._2).cctor_finished_or_no_cctor == 0) {
															pMVar15 = extraout_RDX_02;
														}
														this.EmoteAnimation(HumanAnimations.Refill);
														pMVar15 = extraout_RDX_03;
													}
													routine = this.WaitForSupplyTransfer(__this_01);
													this.StartCoroutine(routine);
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x60040EF")]
	[Address(RVA = "0x5ABE3E0", Offset = "0x5ABD3E0", VA = "0x5ABE3E0")]
	[IteratorStateMachine(typeof(_003CWaitForSupplyTransfer_003Ed__9))]
	private IEnumerator WaitForSupplyTransfer(SupplyTransfer transfer)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$WaitForSupplyTransfer): clean
		Human.d__9<WaitForSupplyTransfer> __this_00;

		__this_00 = new Human.d__9<WaitForSupplyTransfer>(0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		__this_00.transfer = transfer;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x60040F0")]
	[Address(RVA = "0x5ABE460", Offset = "0x5ABD460", VA = "0x5ABE460")]
	[PunRPC]
	public void ShareSuppliesRPC(int recipientId, int transferId, float gas, int ammo, int weapon, float range, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ShareSuppliesRPC): 18 lines keep C-only constructs
		BaseComponentCache pUVar1;
		Player targetPlayer;
		Transform pUVar2;
		HumanStats pCVar3;
		HumanSetup pCVar4;
		BaseUseable weapon_00;
		Vector3 UVar5;
		Vector3 UVar6;
		bool bVar7;
		PhotonView pPVar8;
		Object[] parameters;
		object pIVar9;
		object pIVar10;
		int iVar11;
		Human __this_00;
		float fVar15;
		float fVar16;
		float fVar17;
		Vector3 UVar18;
		Vector3 UVar19;
		float fStack_7c;
		int iStack_64;
		float fStack_60;
		int iStack_5c;
		float fStack_58;
		ulong uStack_48;

		UVar19.z = fStack_58;
		UVar19.x = (float)uStack_48;
		UVar19.y = uStack_48._4_4_;
		UVar18.z = fStack_58;
		UVar18.x = (float)uStack_48;
		UVar18.y = uStack_48._4_4_;
		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(pPVar8 = pUVar1.PhotonView, UVar18 = UVar19, pPVar8 == null)) goto label_05bbe99e;
		targetPlayer = pPVar8._Owner_k__BackingField;
		if (targetPlayer != info.Sender) {
			return;
		}
		pPVar8 = PhotonView.Find(recipientId);
		iVar11 = 0;
		bVar7 = ((Object)pPVar8 == null);
		UVar18.z = fStack_58;
		UVar18.x = (float)uStack_48;
		UVar18.y = uStack_48._4_4_;
		__this_00 = null;
		if (!bVar7) {
			if (pPVar8 == null) goto label_05bbe99e;
			__this_00 = pPVar8.GetComponent<Human>();
		}
		fStack_7c = 0.0;
		if (this.Dead == false) {
			iVar11 = 0;
			bVar7 = ((Object)__this_00 != null);
			UVar18.z = fStack_58;
			UVar18.x = (float)uStack_48;
			UVar18.y = uStack_48._4_4_;
			if (bVar7) {
				if (__this_00 == null) goto label_05bbe99e;
				bVar7 = __this_00.IsMine();
				if ((((bVar7) && (__this_00.AI == false)) && (__this_00.Dead == false)) &&(__this_00.FinishSetup != false)) {
					iVar11 = 0;
					bVar7 = ((Object)__this_00 != (Object)this) ;
					if (bVar7) {
						iVar11 = 0;
						bVar7 = TeamInfo.SameTeam((BaseCharacter)this, (BaseCharacter)__this_00);
						UVar5.z = fStack_58;
						UVar5.x = (float)uStack_48;
						UVar5.y = uStack_48._4_4_;
						UVar18.z = fStack_58;
						UVar18.x = (float)uStack_48;
						UVar18.y = uStack_48._4_4_;
						if (((bVar7) && ((uint)ABS(gas) < 0x7f800001)) && ((-1 < ammo && (0.0 <= gas)))) {
							if (ABS(gas) != INFINITY) {
								fStack_7c = 0.0;
								if (((range == 10.0) && (!NAN(range))) || ((range == 25.0 && (!NAN(range))))) {
									pUVar1 = this.Cache;
									if ((pUVar1 == null) ||(pUVar2 = pUVar1.Transform, UVar18 = UVar5, pUVar2 == null)) goto label_05bbe99e;
									UVar18 = pUVar2.position;
									fStack_58 = UVar18.z;
									uStack_48 = UVar18._0_8_;
									pUVar1 = __this_00.Cache;
									if ((pUVar1 == null) ||(pUVar2 = pUVar1.Transform, pUVar2 == null)) goto label_05bbe99e;
									iVar11 = 0;
									UVar19 = pUVar2.position;
									UVar18.z = fStack_58;
									UVar18.x = (float)uStack_48;
									UVar18.y = uStack_48._4_4_;
									fVar15 = uStack_48._4_4_ - UVar19.y;
									fVar16 = fStack_58 - UVar19.z;
									fVar17 = (float)uStack_48 - UVar19.x;
									if (fVar15 * fVar15 + fVar17 * fVar17 + fVar16 * fVar16 < range * range) {
										pCVar3 = __this_00.Stats;
										if (pCVar3 == null) goto label_05bbe99e;
										fVar15 = pCVar3.CurrentGas;
										fVar16 = pCVar3.MaxGas;
										fVar15 = Math.Max(0.0, fVar16 - fVar15);
										fStack_7c = Math.Min(gas, fVar15);
										UVar6.z = fStack_58;
										UVar6.x = (float)uStack_48;
										UVar6.y = uStack_48._4_4_;
										UVar18.z = fStack_58;
										UVar18.x = (float)uStack_48;
										UVar18.y = uStack_48._4_4_;
										pCVar3 = __this_00.Stats;
										if (pCVar3 == null) goto label_05bbe99e;
										pCVar3.CurrentGas = pCVar3.CurrentGas + fStack_7c;
										pCVar4 = __this_00.Setup;
										UVar18 = UVar6;
										if (pCVar4 == null) goto label_05bbe99e;
										iVar11 = 0;
										if (pCVar4.Weapon == weapon) {
											weapon_00 = __this_00.Weapon;
											iVar11 = Human.AddSupplyAmmo(weapon_00, ammo, 0);
										}
										__this_00.RefreshSupplyWeapon();
									}
								}
							}
						}
					}
				}
			}
		}
		UVar18.z = fStack_58;
		UVar18.x = (float)uStack_48;
		UVar18.y = uStack_48._4_4_;
		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			pPVar8 = pUVar1.PhotonView;
			parameters = (Object[])new object[3];
			iStack_5c = transferId;
			pIVar9 = (object)iStack_5c;
			UVar18.z = fStack_58;
			UVar18.x = (float)uStack_48;
			UVar18.y = uStack_48._4_4_;
			if (parameters != null) {
				if ((pIVar9 != null) &&(pIVar10 = il2cpp_vm_Object_IsInst(pIVar9, (((parameters.obj).klass)._1).element_class), pIVar10 == null)) {
	label_05bbe9a8: ;
					pIVar9 = new ArrayTypeMismatchException();
					throw pIVar9;
				}
				if ((int)parameters.Length != 0) {
					parameters[0] = pIVar9;
					fStack_60 = fStack_7c;
					pIVar9 = (object)fStack_60;
					if ((pIVar9 != null) &&(pIVar10 = il2cpp_vm_Object_IsInst(pIVar9, (((parameters.obj).klass)._1).element_class), pIVar10 == null)) goto label_05bbe9a8;
					if ((parameters.Length & 0xfffffffe) != 0) {
						parameters[1] = pIVar9;
						iStack_64 = iVar11;
						pIVar9 = (object)iStack_64;
						if ((pIVar9 != null) &&(pIVar10 = il2cpp_vm_Object_IsInst(pIVar9, (((parameters.obj).klass)._1).element_class), pIVar10 == null)) goto label_05bbe9a8;
						if (2 < (uint)parameters.Length) {
							parameters[2] = pIVar9;
							UVar18.z = fStack_58;
							UVar18.x = (float)uStack_48;
							UVar18.y = uStack_48._4_4_;
							if (pPVar8 != null) {
								pPVar8.RPC("ConfirmSharedSuppliesRPC", targetPlayer, parameters);
								return;
							}
							goto label_05bbe99e;
						}
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_05bbe99e: ;
		fStack_58 = UVar18.z;
		uStack_48 = UVar18._0_8_;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60040F1")]
	[Address(RVA = "0x5ABEBF0", Offset = "0x5ABDBF0", VA = "0x5ABEBF0")]
	[PunRPC]
	public void ConfirmSharedSuppliesRPC(int transferId, float gas, int ammo, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ConfirmSharedSuppliesRPC): 1 lines keep C-only constructs
		float pfVar1;
		Human.SupplyTransfer pCVar2;
		bool bVar3;

		pCVar2 = this._supplyTransfer;
		bVar3 = this.IsMine();
		if ((((((bVar3) && (pCVar2 != null)) &&(pCVar2.Id == transferId)) &&((pCVar2.Recipient == info.Sender && (0.0 <= gas)))) &&((((uint)gas & 0x7f800000) != 0x7f800000 &&((-1 < ammo && (pfVar1 = &pCVar2.Gas, gas < *pfVar1 || gas == *pfVar1)))))) &&(ammo <= pCVar2.Ammo)) {
			this.CompleteSupplyTransfer(gas, ammo);
			return;
		}
		return;
	}

	[Token(Token = "0x60040F2")]
	[Address(RVA = "0x5ABECA0", Offset = "0x5ABDCA0", VA = "0x5ABECA0")]
	private void CompleteSupplyTransfer(float gas, int ammo)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$CompleteSupplyTransfer): clean
		float fVar1;
		int iVar2;
		int restoreRounds;
		Human.SupplyTransfer pCVar3;
		HumanStats pCVar4;
		BaseUseable weapon;
		uint amount;
		float fVar5;
		float fVar6;

		pCVar3 = this._supplyTransfer;
		this._supplyTransfer = null;
		if ((this.Dead != false) || (this.FinishSetup == false)) {
			return;
		}
		pCVar4 = this.Stats;
		if ((pCVar4 == null) || (pCVar3 == null)) {
			throw new NullReferenceException();
		}
		fVar1 = pCVar4.CurrentGas;
		fVar6 = pCVar3.Gas;
		fVar5 = pCVar4.MaxGas;
		fVar5 = Math.Max(0.0, fVar5 - fVar1);
		fVar6 = Math.Min(fVar6 - gas, fVar5);
		pCVar4.CurrentGas = fVar6 + fVar1;
		weapon = this.Weapon;
		if (weapon == pCVar3.Weapon) {
			iVar2 = pCVar3.Ammo;
			restoreRounds = pCVar3.RemovedRounds;
			amount = iVar2 - ammo;
			Human.AddSupplyAmmo(weapon, amount, restoreRounds);
		}
		this.RefreshSupplyWeapon();
		return;
	}

	[Token(Token = "0x60040F3")]
	[Address(RVA = "0x5ABE010", Offset = "0x5ABD010", VA = "0x5ABE010")]
	internal static int GetSupplyAmmo(BaseUseable weapon)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$GetSupplyAmmo): 1 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		float fVar3;
		BaseUseable pCVar4;
		int iVar5;
		long iVar6;
		ulong uVar7;

		if (weapon != null) {
			pCVar4 = weapon.klass;
			bVar1 = (pCVar4._2).typeHierarchyDepth;
			bVar2 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(BladeWeapon))) {
				fVar3 = (*(uint)((sbyte)weapon + 0x48));
				iVar5 = Math.Max(0, (int32_t)fVar3);
				return iVar5;
			}
			bVar2 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
			if ((((bVar2 <= bVar1) &&((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(AmmoWeapon))) &&(fVar3 = (*(uint)((sbyte)weapon + 0x48)), -1 < (int)fVar3)) && (-1 < (int)*(uint)&(*(ulong)((sbyte)weapon + 0x40)))) {
				uVar7 = (ulong)*(uint)&(*(ulong)((sbyte)weapon + 0x40));
				if (*(int)((long)&(*(ulong)((sbyte)weapon + 0x40)) + 4) == -1) {
					uVar7 = 0;
				}
				iVar6 = Math.Min(0x7fffffff, uVar7 + (uint)fVar3);
			}
		}
		return iVar5;
	}

	[Token(Token = "0x60040F4")]
	[Address(RVA = "0x5ABE140", Offset = "0x5ABD140", VA = "0x5ABE140")]
	internal static void RemoveSupplyAmmo(BaseUseable weapon, int amount)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$RemoveSupplyAmmo): 1 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		BaseUseable pCVar3;
		int iVar4;
		int iVar5;
		int iVar6;

		iVar4 = Math.Max(0, amount);
		iVar5 = Human.GetSupplyAmmo(weapon);
		iVar4 = Math.Min(iVar4, iVar5);
		if ((iVar4 != 0) && (weapon != null)) {
			pCVar3 = weapon.klass;
			bVar1 = (pCVar3._2).typeHierarchyDepth;
			bVar2 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||((pCVar3._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BladeWeapon))) {
				bVar2 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
				if ((bVar2 <= bVar1) &&((pCVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(AmmoWeapon))) {
					if (*(int)((long)&(*(ulong)((sbyte)weapon + 0x40)) + 4) == -1) {
						iVar6 = 0;
					}
					else {
						iVar5 = *(int)&(*(ulong)((sbyte)weapon + 0x40));
						iVar6 = Math.Min(iVar4, iVar5);
					}
					*(int)&(*(ulong)((sbyte)weapon + 0x40)) = *(int)&(*(ulong)((sbyte)weapon + 0x40)) - iVar6;
					(*(uint)((sbyte)weapon + 0x48)) = (float)((int)(*(uint)((sbyte)weapon + 0x48)) + (iVar6 - iVar4));
				}
			}
			else {
				(*(uint)((sbyte)weapon + 0x48)) = (float)((int)(*(uint)((sbyte)weapon + 0x48)) - iVar4);
			}
		}
		return;
	}

	[Token(Token = "0x60040F5")]
	[Address(RVA = "0x5ABE9C0", Offset = "0x5ABD9C0", VA = "0x5ABE9C0")]
	internal static int AddSupplyAmmo(BaseUseable weapon, int amount, int restoreRounds = 0)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$AddSupplyAmmo): 3 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		float fVar3;
		BaseUseable pCVar4;
		BaseUseable* ppCVar5;
		int iVar6;
		int iVar7;
		int val2;
		int iVar8;

		iVar8 = 0;
		if (weapon != null) {
			pCVar4 = weapon.klass;
			bVar1 = (pCVar4._2).typeHierarchyDepth;
			bVar2 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BladeWeapon))) {
				bVar2 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
				if ((bVar1 < bVar2) ||((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(AmmoWeapon))) goto label_05bbea7e;
				ppCVar5 = &(*(ulong)((sbyte)weapon + 0x38));
			}
			else {
				ppCVar5 = &(*(ulong)((sbyte)weapon + 0x40));
			}
			iVar8 = *(int)((long)ppCVar5 + 4);
		}
	label_05bbea7e: ;
		iVar6 = Math.Max(0, amount);
		iVar7 = Human.GetSupplyAmmo(weapon);
		iVar7 = Math.Max(0, iVar8 - iVar7);
		iVar6 = Math.Min(iVar6, iVar7);
		if (weapon != null) {
			pCVar4 = weapon.klass;
			bVar1 = (pCVar4._2).typeHierarchyDepth;
			bVar2 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BladeWeapon))) {
				bVar2 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
				if ((bVar2 <= bVar1) &&((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(AmmoWeapon))) {
					fVar3 = (*(uint)((sbyte)weapon + 0x48));
					if ((int)fVar3 < 0) {
						return 0;
					}
					if (*(int)&(*(ulong)((sbyte)weapon + 0x40)) < 0) {
						return 0;
					}
					if (*(int)((long)&(*(ulong)((sbyte)weapon + 0x40)) + 4) == -1) {
						(*(uint)((sbyte)weapon + 0x48)) = (float)((int)fVar3 + iVar6);
					}
					else {
						iVar7 = Math.Max(0, restoreRounds);
						val2 = Math.Max(0, *(int)((long)&(*(ulong)((sbyte)weapon + 0x40)) + 4) - (int)(*(uint)((sbyte)weapon + 0x48)));
						iVar7 = Math.Min(iVar7, val2);
						iVar7 = Math.Min(iVar6, iVar7);
						(*(uint)((sbyte)weapon + 0x48)) = (float)((int)(*(uint)((sbyte)weapon + 0x48)) + iVar7);
						*(int)&(*(ulong)((sbyte)weapon + 0x40)) = *(int)&(*(ulong)((sbyte)weapon + 0x40)) + (iVar6 - iVar7);
					}
				}
			}
			else {
				fVar3 = (*(uint)((sbyte)weapon + 0x48));
				if ((int)fVar3 < 0) {
					return 0;
				}
				(*(uint)((sbyte)weapon + 0x48)) = (float)((int)fVar3 + iVar6);
			}
		}
		return iVar6;
	}

	[Token(Token = "0x60040F6")]
	[Address(RVA = "0x5ABE290", Offset = "0x5ABD290", VA = "0x5ABE290")]
	private void RefreshSupplyWeapon()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$RefreshSupplyWeapon): 2 lines keep C-only constructs
		byte bVar1;
		BaseUseable pCVar2;
		AHSSWeapon __this_00;

		if ((this.AI == false) &&(__this_00 = (AHSSWeapon)this.Weapon, __this_00 != null)) {
			bVar1 = (typeof(AHSSWeapon)._2).typeHierarchyDepth;
			if ((bVar1 <= (__this_00.klass._2).typeHierarchyDepth) &&((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(AHSSWeapon))) {
				__this_00.HandleUI();
			}
		}
		pCVar2 = this.Weapon;
		if (pCVar2 != null) {
			bVar1 = (typeof(ThunderspearWeapon)._2).typeHierarchyDepth;
			if (((bVar1 <= (pCVar2.klass._2).typeHierarchyDepth) &&((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(ThunderspearWeapon))) && ((*(uint)((sbyte)pCVar2 + 0x48)) == 0.0)) {
				this._sheathedTsLeft = false;
				this._sheathedTsRight = false;
				this.SetThunderspears(false, false);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004102")]
	[Address(RVA = "0x5ABF350", Offset = "0x5ABE350", VA = "0x5ABF350", Slot = "69")]
	public override bool AlwaysAnimate()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$AlwaysAnimate): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		bool bVar3;
		bool bVar4;

		pUVar1 = this.Cache;
		if (pUVar1 == null) {
		}
		else {
			pPVar2 = pUVar1.PhotonView;
			bVar3 = ((Object)pPVar2 != null);
			if (bVar3) {
				pUVar1 = this.Cache;
				if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) {
					throw new NullReferenceException();
				}
				bVar4 = pPVar2._IsMine_k__BackingField != false;
			}
		}
		return bVar4;
	}

	[Token(Token = "0x6004103")]
	[Address(RVA = "0x5ABF3E0", Offset = "0x5ABE3E0", VA = "0x5ABF3E0", Slot = "79")]
	protected override void CreateDetection()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$CreateDetection): clean
		AIHumanDetection __this_00;

		if (this.AI == false) {
			__this_00 = new AIHumanDetection((BaseCharacter)this);
		}
		else {
			__this_00 = new AIHumanDetection((BaseCharacter)this, true, false);
		}
		this.Detection = (BaseDetection)__this_00;
		return;
	}

	[Token(Token = "0x6004104")]
	[Address(RVA = "0x5ABF480", Offset = "0x5ABE480", VA = "0x5ABF480")]
	public void DieChangeCharacter()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$DieChangeCharacter): clean
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		Object[] parameters;
		GameObject targetGo;

		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			__this_00 = pUVar1.PhotonView;
			parameters = (Object[])new object[0];
			if (__this_00 != null) {
				__this_00.RPC("MarkDeadRPC", 3, parameters);
				targetGo = this.gameObject;
				PhotonNetwork.Destroy(targetGo);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004105")]
	[Address(RVA = "0x5ABF540", Offset = "0x5ABE540", VA = "0x5ABF540")]
	public void IsChangingPosition()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$IsChangingPosition): clean
		this._useFixedUpdateClipping = false;
		return;
	}

	[Token(Token = "0x6004106")]
	[Address(RVA = "0x5ABF550", Offset = "0x5ABE550", VA = "0x5ABF550")]
	[PunRPC]
	public void BlowAwayRPC(Vector3 force, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$BlowAwayRPC): clean
		BaseComponentCache pUVar1;
		Rigidbody __this_00;

		if (info.photonView != null) {
			if (((info.photonView).fields)._IsMine_k__BackingField == false) {
				return;
			}
			pUVar1 = this.Cache;
			if ((pUVar1 != null) &&(__this_00 = pUVar1.Rigidbody, __this_00 != null)) {
				__this_00.AddForce(force, 1);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004107")]
	[Address(RVA = "0x5ABF590", Offset = "0x5ABE590", VA = "0x5ABF590", Slot = "93")]
	[PunRPC]
	public override void MarkDeadRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$MarkDeadRPC): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		HumanSetup pCVar3;
		bool bVar4;
		CapsuleCollider __this_00;

		if (Il2CppMethodInitialized_0754753e == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider) ;
			Il2CppMethodInitialized_0754753e = true;
		}
		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) {
	label_05bbf689: ;
			throw new NullReferenceException();
		}
		if (info.Sender == pPVar2._Owner_k__BackingField) {
			this.Dead = true;
			pCVar3 = this.Setup;
			bVar4 = ((Object)pCVar3 != null);
			if (bVar4) {
				pCVar3 = this.Setup;
				if (pCVar3 == null) goto label_05bbf689;
				pCVar3.DeleteDie();
			}
			__this_00 = this.GetComponent<CapsuleCollider>();
			if (__this_00 == null) goto label_05bbf689;
			__this_00.enabled = false;
			bVar4 = this.IsMine();
			if (bVar4) {
				this.FalseAttack();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004108")]
	[Address(RVA = "0x5ABF7D0", Offset = "0x5ABE7D0", VA = "0x5ABF7D0", Slot = "121")]
	[PunRPC]
	public virtual void UngrabRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$UngrabRPC): clean
		BaseTitan pCVar1;
		BaseComponentCache pUVar2;
		PhotonView pPVar3;
		bool bVar4;

		pCVar1 = this.Grabber;
		bVar4 = ((Object)pCVar1 == null);
		if (!bVar4) {
			pCVar1 = this.Grabber;
			if (((pCVar1 == null) ||(pUVar2 = pCVar1.Cache, pUVar2 == null)) ||(pPVar3 = pUVar2.PhotonView, pPVar3 == null)) {
				throw new NullReferenceException();
			}
			if (info.Sender == pPVar3._Owner_k__BackingField) {
				this.Ungrab(false, true, false);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004109")]
	[Address(RVA = "0x5ABFAC0", Offset = "0x5ABEAC0", VA = "0x5ABFAC0")]
	public Ray GetAimRayAfterHuman()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$GetAimRayAfterHuman): 23 lines keep C-only constructs
		uint uVar1;
		BaseCamera pCVar2;
		Camera __this_00;
		BaseComponentCache pUVar3;
		Transform __this_01;
		byte[] auVar4 = new byte[16];
		float fVar5;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		float fVar12;
		byte[] auVar11 = new byte[16];
		Vector3 UVar13;
		float fStack_98;
		float fStack_94;
		Ray UStack_80;
		byte[] auStack_68 = new byte[16];
		float fStack_58;
		byte[] auStack_48 = new byte[16];
		float fStack_38;
		byte[] auStack_28 = new byte[8];

		pCVar2 = SceneLoader.CurrentCamera;
		if (pCVar2 != null) {
			__this_00 = pCVar2.Camera;
			UVar13 = CursorManager.GetInGameMousePosition();
			if (__this_00 != null) {
				UStack_80 = __this_00.ScreenPointToRay(UVar13);
				pUVar3 = this.Cache;
				if ((pUVar3 != null) &&(__this_01 = pUVar3.Transform, __this_01 != null)) {
					auStack_28._0_4_ = UStack_80.m_Origin.x;
					auStack_28._4_4_ = UStack_80.m_Origin.y;
					UVar13 = __this_01.position;
					fStack_38 = UVar13.z;
					auStack_48._8_4_ = extraout_XMM0_Dc;
					auStack_48._0_8_ = UVar13._0_8_;
					auStack_48._12_4_ = extraout_XMM0_Dd;
					if (Il2CppMethodInitialized_0753e729 == false) {
						Il2CppMethodInitialized_0753e729 = true;
						uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					fStack_98 = UStack_80.m_Direction.x;
					fStack_94 = UStack_80.m_Direction.y;
					fVar5 = UStack_80.m_Direction.z * UStack_80.m_Direction.z + fStack_94 * fStack_94 + fStack_98 * fStack_98;
					if (fVar5 < 0.0) {
						fVar5 = sqrtf(fVar5);
					}
					else {
						fVar5 = SQRT(fVar5);
					}
					auStack_68 = ZEXT816(0);
					fStack_58 = 0.0;
					if (1e-05 < fVar5) {
						fStack_58 = UStack_80.m_Direction.z / fVar5;
						auVar11._8_8_ = 0;
						auVar11._0_4_ = UStack_80.m_Direction.x;
						auVar11._4_4_ = UStack_80.m_Direction.y;
						auVar4._4_4_ = fVar5;
						auVar4._0_4_ = fVar5;
						auVar4._8_4_ = fVar5;
						auVar4._12_4_ = fVar5;
						auStack_68 = divps(auVar11, auVar4);
					}
					fVar10 = (float)auStack_68._0_8_;
					fVar12 = (float)((ulong)auStack_68._0_8_ >> 0x20);
					fVar5 = fStack_58 * UStack_80.m_Direction.z + fVar12 * fStack_94 + fStack_98 * fVar10;
					fVar6 = 0.0;
					fVar7 = ABS(fVar5);
					if (fVar7 <= 0.0) {
						fVar7 = 0.0;
					}
					fVar9 = Mathf.Epsilon * 8.0;
					fVar8 = fVar7 * 1e-06;
					if (fVar7 * 1e-06 <= fVar9) {
						fVar8 = fVar9;
					}
					if (fVar8 <= ABS(0.0 - fVar5)) {
						fVar6 = ((fStack_58 * fStack_38 + fVar10 * (float)auStack_48._0_4_ + (float)auStack_48._4_4_ * fVar12) -(fVar12 * (float)auStack_28._4_4_ + fVar10 * (float)auStack_28._0_4_ + fStack_58 * UStack_80.m_Origin.z)) / fVar5;
					}
					__return_storage_ptr__.m_Origin.x = (float)auStack_28._0_4_ + fVar6 * fStack_98;
					__return_storage_ptr__.m_Origin.y = (float)auStack_28._4_4_ + fVar6 * fStack_94;
					__return_storage_ptr__.m_Origin.z = UStack_80.m_Origin.z + UStack_80.m_Direction.z * fVar6;
					__return_storage_ptr__.m_Direction.x = UStack_80.m_Direction.x;
					__return_storage_ptr__.m_Direction.y = UStack_80.m_Direction.y;
					__return_storage_ptr__.m_Direction.z = UStack_80.m_Direction.z;
					return __return_storage_ptr__;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600410A")]
	[Address(RVA = "0x5ABFDD0", Offset = "0x5ABEDD0", VA = "0x5ABFDD0")]
	public Ray GetAimRayAfterHumanCheap()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$GetAimRayAfterHumanCheap): 13 lines keep C-only constructs
		uint uVar1;
		BaseCamera pCVar2;
		Camera __this_00;
		HumanComponentCache pCVar3;
		Transform pUVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		Vector3 UVar8;
		Ray local_60;
		byte[] local_48 = new byte[8];
		byte[] local_38 = new byte[16];
		byte[] local_28 = new byte[8];

		pCVar2 = SceneLoader.CurrentCamera;
		if (pCVar2 != null) {
			__this_00 = pCVar2.Camera;
			UVar8 = CursorManager.GetInGameMousePosition();
			if (__this_00 != null) {
				local_60 = __this_00.ScreenPointToRay(UVar8);
				pCVar3 = this.HumanCache;
				if ((pCVar3 != null) &&(pUVar4 = pCVar3.Head, pUVar4 != null)) {
					local_28._0_4_ = local_60.m_Origin.x;
					local_28._4_4_ = local_60.m_Origin.y;
					local_38 = ZEXT416((uint)local_60.m_Origin.z);
					local_48._0_4_ = local_60.m_Direction.x;
					local_48._4_4_ = local_60.m_Direction.y;
					pUVar4 = pUVar4.transform;
					if (pUVar4 != null) {
						UVar8 = pUVar4.position;
						if (Il2CppMethodInitialized_0753e7b7 == false) {
							Il2CppMethodInitialized_0753e7b7 = true;
							uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						else {
							uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						if (uVar1 == 0) {
						}
						fVar5 = (float)local_28._4_4_ - UVar8.y;
						fVar6 = (float)local_38._0_4_ - UVar8.z;
						fVar7 = (float)local_28._0_4_ - UVar8.x;
						fVar5 = fVar5 * fVar5 + fVar7 * fVar7 + fVar6 * fVar6;
						if (fVar5 < 0.0) {
							fVar5 = sqrtf(fVar5);
						}
						else {
							fVar5 = SQRT(fVar5);
						}
						__return_storage_ptr__.m_Origin.x =(float)local_28._0_4_ + fVar5 * (float)local_48._0_4_;
						__return_storage_ptr__.m_Origin.y =(float)local_28._4_4_ + fVar5 * (float)local_48._4_4_;
						__return_storage_ptr__.m_Origin.z =(float)local_38._0_4_ + local_60.m_Direction.z * fVar5;
						__return_storage_ptr__.m_Direction.x = (float)local_48._0_4_;
						__return_storage_ptr__.m_Direction.y = (float)local_48._4_4_;
						__return_storage_ptr__.m_Direction.z = local_60.m_Direction.z;
						return __return_storage_ptr__;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600410B")]
	[Address(RVA = "0x5ABFFE0", Offset = "0x5ABEFE0", VA = "0x5ABFFE0", Slot = "76")]
	public override Vector3 GetAimPoint()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$GetAimPoint): clean
		object obj;
		Vector3 UVar6;

		obj = (object)this.Controller;
		if (obj == null) {
			throw new NullReferenceException();
		}
		UVar6 = (Vector3)obj.GetAimPoint();
		return (Vector3)UVar6;
	}

	[Token(Token = "0x600410C")]
	[Address(RVA = "0x5AC0090", Offset = "0x5ABF090", VA = "0x5AC0090")]
	public Vector3 GetAimPoint(Vector3 origin, Vector3 direction)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$GetAimPoint): clean
		bool bVar1;
		int layerMask;
		Vector3 UVar2;
		Vector3 UVar3;
		float local_58;
		float fStack_54;
		float local_48;
		float fStack_44;
		RaycastHit local_38;

		local_38.m_UV.x = 0.0;
		local_38.m_UV.y = 0.0;
		local_38.m_Collider.m_Data = (EntityId)0x0;
		local_38.m_Normal.y = 0.0;
		local_38.m_Normal.z = 0.0;
		local_38.m_FaceID = 0;
		local_38.m_Distance = 0.0;
		local_38.m_Point.x = 0.0;
		local_38.m_Point.y = 0.0;
		local_38.m_Point.z = 0.0;
		local_38.m_Normal.x = 0.0;
		layerMask = (Human.AimMask).value;
		bVar1 = Physics.Raycast(origin, direction, ref local_38, 1000.0, layerMask);
		if (bVar1) {
			UVar2 = (Vector3)local_38.point;
			return (Vector3)UVar2;
		}
		local_48 = direction.x;
		fStack_44 = direction.y;
		local_58 = origin.x;
		fStack_54 = origin.y;
		UVar3.x = local_48 * 1000.0 + local_58;
		UVar3.y = fStack_44 * 1000.0 + fStack_54;
		UVar3.z = direction.z * 1000.0 + origin.z;
		return (Vector3)UVar3;
	}

	[Token(Token = "0x600410D")]
	[Address(RVA = "0x5AC01A0", Offset = "0x5ABF1A0", VA = "0x5AC01A0")]
	private Vector2 GetLookAngle(Vector3 target)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$GetLookAngle): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		Transform pUVar2;
		HumanComponentCache pCVar3;
		float fVar4;
		float fVar5;
		Vector3 UVar6;
		Vector3 UVar7;
		Vector3 b;
		float local_58;
		float fStack_54;
		float fStack_34;
		float fStack_24;
		Quaternion local_18;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pUVar2 = pUVar1.Transform, pUVar2 != null)) {
			UVar6 = pUVar2.position;
			local_58 = target.x;
			fVar4 = atan2f(target.z - UVar6.z, local_58 - UVar6.x);
			pUVar1 = this.Cache;
			if ((pUVar1 != null) &&(pUVar2 = pUVar1.Transform, pUVar2 != null)) {
				local_18 = pUVar2.rotation;
				UVar6 = Quaternion.Internal_ToEulerRad(ref local_18);
				UVar7.x = UVar6.x * 57.29578;
				UVar7.y = UVar6.y * 57.29578;
				UVar7.z = UVar6.z * 57.29578;
				UVar6 = Quaternion.Internal_MakePositive(UVar7);
				pCVar3 = this.HumanCache;
				if (pCVar3 != null) {
					pUVar2 = pCVar3.Neck;
					if (pUVar2 != null) {
						UVar7 = pUVar2.position;
						pCVar3 = this.HumanCache;
						if (pCVar3 != null) {
							pUVar2 = pCVar3.Transform;
							if (pUVar2 != null) {
								b = pUVar2.position;
								fStack_24 = UVar6.y;
								fVar5 = fVar4 * 57.29578 + fStack_24 + -90.0;
								fVar4 = floorf(fVar5 / 360.0);
								fVar5 = fVar4 * -360.0 + fVar5;
								fVar4 = 360.0;
								if (fVar5 <= 360.0) {
									fVar4 = fVar5;
								}
								fVar4 = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar4);
								fVar5 = Util.DistanceIgnoreY(target, b);
								fStack_34 = UVar7.y;
								fStack_54 = target.y;
								fVar5 = atan2f(fStack_34 - fStack_54, fVar5);
								return (Vector2)(CONCAT44(~-(uint)(180.0 < fVar4) & (uint)fVar4 |(uint)(fVar4 + -360.0) & -(uint)(180.0 < fVar4), fVar5 * 57.29578) ^ 0x8000000000000000);
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600410E")]
	[Address(RVA = "0x5AC03B0", Offset = "0x5ABF3B0", VA = "0x5AC03B0")]
	public bool CanJump()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$CanJump): clean
		int iVar1;
		AnimationHandler pCVar2;
		bool bVar3;
		bool bVar4;

		if (((this.Grounded == false) || (this.CarryState == 1)) ||((iVar1 = this._state, iVar1 != 0xb && (iVar1 != 0)))) {
			bVar4 = false;
		}
		else {
			pCVar2 = this.Animation;
			if (pCVar2 == null) {
	label_05bc0498: ;
				throw new NullReferenceException();
			}
			bVar4 = false;
			bVar3 = pCVar2.IsPlaying(HumanAnimations.Jump);
			if (!bVar3) {
				pCVar2 = this.Animation;
				if (pCVar2 == null) goto label_05bc0498;
				bVar4 = pCVar2.IsPlaying(HumanAnimations.HorseMount);
				bVar4 = !bVar4;
			}
		}
		return bVar4;
	}

	[Token(Token = "0x600410F")]
	[Address(RVA = "0x5AC04A0", Offset = "0x5ABF4A0", VA = "0x5AC04A0")]
	public void Jump()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$Jump): clean
		uint uVar1;

		uVar1 = this._state;
		if ((uVar1 | 8) == 9) {
			this.FalseAttack();
			uVar1 = this._state;
		}
		if ((uVar1 & 0xfffffffe) == 2) {
			this._dashTimeLeft = 0.0;
		}
		this._state = 0;
		this.CrossFade(this.StandAnimation, 0.1, 0.0);
		this.CrossFade(HumanAnimations.Jump, 0.1, 0.0);
		this.PlaySound(HumanSounds.Jump);
		this.ToggleSparks(false);
		return;
	}

	[Token(Token = "0x6004110")]
	[Address(RVA = "0x5AC0780", Offset = "0x5ABF780", VA = "0x5AC0780")]
	public void Mount(Transform transform, Vector3 positionOffset, Vector3 rotationOffset, bool canMountedAttack = false)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$Mount): clean
		Dictionary<object, object> pSVar1;
		bool bVar2;
		GameObject pUVar3;
		String str0;
		String transformName;
		MapObject pMStack_68;

		pMStack_68 = null;
		transformName = "";
		while(true) {
			bVar2 = ((Object)transform != null);
			if (!bVar2) goto label_05bc094e;
			if (transform == null) goto label_05bc0989;
			pSVar1 = (Dictionary<object, object>)MapLoader.GoToMapObject;
			pUVar3 = transform.gameObject;
			if (pSVar1 == null) goto label_05bc0989;
			bVar2 = pSVar1.ContainsKey((object)pUVar3);
			if (bVar2) break;
			bVar2 = (transformName == "");
			str0 = transform.name;
			if (!bVar2) {
				str0 = String.Concat(str0, "/", transformName);
			}
			transform = transform.parent;
			transformName = str0;
		}
		pSVar1 = (Dictionary<object, object>)MapLoader.GoToMapObject;
		pUVar3 = transform.gameObject;
		if (pSVar1 == null) {
	label_05bc0989: ;
			throw new NullReferenceException();
		}
		pMStack_68 = pSVar1.get_Item((object)pUVar3);
	label_05bc094e: ;
		this.Mount(pMStack_68, transformName, positionOffset, rotationOffset, canMountedAttack);
		return;
	}

	[Token(Token = "0x6004111")]
	[Address(RVA = "0x5AC0D10", Offset = "0x5ABFD10", VA = "0x5AC0D10")]
	public void Mount(MapObject mapObject, Vector3 positionOffset, Vector3 rotationOffset, bool canMountedAttack = false)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$Mount): clean


		this.Mount(mapObject, "", positionOffset, rotationOffset, canMountedAttack);
		return;
	}

	[Token(Token = "0x6004112")]
	[Address(RVA = "0x5AC0990", Offset = "0x5ABF990", VA = "0x5AC0990")]
	public void Mount(MapObject mapObject, string transformName, Vector3 positionOffset, Vector3 rotationOffset, bool canMountedAttack = false)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$Mount): 14 lines keep C-only constructs
		Object[]* targetAddress;
		Transform x;
		BaseComponentCache pUVar1;
		Rigidbody __this_00;
		MapScriptBaseObject pMVar2;
		PhotonView __this_01;
		bool bVar3;
		Transform y;
		Object[] pSVar4;
		object pIVar5;
		object pIVar6;
		int iVar7;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		byte uStack_85;
		int iStack_7c;
		ulong uStack_78;
		ulong uStack_68;
		ulong uStack_58;
		byte[] auStack_48 = new byte[16];

		uStack_58 = rotationOffset._0_8_;
		auStack_48._8_4_ = in_XMM0_Dc;
		auStack_48._0_8_ = positionOffset._0_8_;
		auStack_48._12_4_ = in_XMM0_Dd;
		x = this.MountedTransform;
		y = this.transform;
		bVar3 = ((Object)x != (Object)y);
		if (bVar3) {
			this.Unmount(true);
			this.IsMine();
			pUVar1 = this.Cache;
			if ((pUVar1 == null) ||(__this_00 = pUVar1.Rigidbody, __this_00 == null)) goto label_05bc0cf1;
			__this_00.interpolation = 0;
			this.SetTriggerCollider(true);
		}
		if (mapObject == null) {
			iVar7 = -100;
		}
		else {
			pMVar2 = mapObject.ScriptObject;
			if (pMVar2 == null) goto label_05bc0cf1;
			iVar7 = pMVar2.Id;
		}
		pSVar4 = (Object[])new object[5];
		iStack_7c = iVar7;
		pIVar5 = (object)iStack_7c;
		if (pSVar4 == null) {
	label_05bc0cf1: ;
			throw new NullReferenceException();
		}
		if (pIVar5 != null) {
			pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class);
			if (pIVar6 == null) goto label_05bc0cf6;
		}
		if ((int)pSVar4.Length != 0) {
			pSVar4[0] = pIVar5;
			if (transformName != null) {
				pIVar5 = il2cpp_vm_Object_IsInst((object)transformName, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar5 == null) goto label_05bc0cf6;
			}
			if ((pSVar4.Length & 0xfffffffe) == 0) goto label_05bc0cec;
			pSVar4[1] = (object)transformName;
			uStack_68 = auStack_48._0_8_;
			pIVar5 = (object)uStack_68;
			if (pIVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05bc0cf6;
			}
			if ((uint)pSVar4.Length < 3) goto label_05bc0cec;
			pSVar4[2] = pIVar5;
			uStack_78 = uStack_58;
			pIVar5 = (object)uStack_78;
			if (pIVar5 != null) {
				pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class);
				if (pIVar6 == null) goto label_05bc0cf6;
			}
			if ((pSVar4.Length & 0xfffffffc) != 0) {
				pSVar4[3] = pIVar5;
				uStack_85 = canMountedAttack;
				pIVar5 = (object)uStack_85;
				if (pIVar5 != null) {
					pIVar6 = il2cpp_vm_Object_IsInst(pIVar5, (((pSVar4.obj).klass)._1).element_class);
					if (pIVar6 == null) {
	label_05bc0cf6: ;
						pIVar5 = new ArrayTypeMismatchException();
						throw pIVar5;
					}
				}
				if (4 < (uint)pSVar4.Length) {
					pSVar4[4] = pIVar5;
					targetAddress = &this._lastMountMessage;
					this._lastMountMessage = pSVar4;
					pUVar1 = this.Cache;
					if ((pUVar1 != null) &&(__this_01 = pUVar1.PhotonView, __this_01 != null)) {
						__this_01.RPC("MountRPC", 0, *targetAddress);
						return;
					}
					goto label_05bc0cf1;
				}
			}
		}
	label_05bc0cec: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6004113")]
	[Address(RVA = "0x5AC11F0", Offset = "0x5AC01F0", VA = "0x5AC11F0")]
	[PunRPC]
	public void MountRPC(int mapObjectID, string transformName, Vector3 positionOffset, Vector3 rotationOffset, bool canMountedAttack, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$MountRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		InGameManager pGVar3;
		bool bVar4;
		Human.d__175<WaitAndMount> __this_00;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
			if (info.Sender != pPVar2._Owner_k__BackingField) {
				return;
			}
			this.CanMountedAttack = canMountedAttack;
			this.MountState = 2;
			this.MountedMapObject = null;
			this.MountedTransform = null;
			pGVar3 = this._inGameManager;
			if (pGVar3 != null) {
				bVar4 = pGVar3.IsFinishedLoading();
				if (bVar4) {
					this.FinishMount(mapObjectID, transformName, positionOffset, rotationOffset);
					return;
				}
				__this_00 = new Human.d__175<WaitAndMount>(0);
				if (__this_00 != null) {
					__this_00.__4__this = this;
					__this_00.mapObjectID = mapObjectID;
					__this_00.transformName = transformName;
					__this_00.positionOffset.x = positionOffset.x;
					__this_00.positionOffset.y = positionOffset.y;
					__this_00.positionOffset.z = positionOffset.z;
					__this_00.rotationOffset.x = rotationOffset.x;
					__this_00.rotationOffset.y = rotationOffset.y;
					__this_00.rotationOffset.z = rotationOffset.z;
					this.StartCoroutine((IEnumerator)__this_00);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004114")]
	[Address(RVA = "0x5AC15D0", Offset = "0x5AC05D0", VA = "0x5AC15D0")]
	[IteratorStateMachine(typeof(_003CWaitAndMount_003Ed__175))]
	private IEnumerator WaitAndMount(int mapObjectID, string transformName, Vector3 positionOffset, Vector3 rotationOffset)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$WaitAndMount): clean
		Human.d__175<WaitAndMount> __this_00;

		__this_00 = new Human.d__175<WaitAndMount>(0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		__this_00.mapObjectID = mapObjectID;
		__this_00.transformName = transformName;
		__this_00.positionOffset.x = positionOffset.x;
		__this_00.positionOffset.y = positionOffset.y;
		__this_00.positionOffset.z = positionOffset.z;
		__this_00.rotationOffset.x = rotationOffset.x;
		__this_00.rotationOffset.y = rotationOffset.y;
		__this_00.rotationOffset.z = rotationOffset.z;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004115")]
	[Address(RVA = "0x5AC1390", Offset = "0x5AC0390", VA = "0x5AC1390")]
	private void FinishMount(int mapObjectID, string transformName, Vector3 positionOffset, Vector3 rotationOffset)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$FinishMount): clean
		Dictionary<int, object> pSVar1;
		GameObject pUVar2;
		bool bVar3;
		MapObject pMVar4;
		Transform pUVar5;
		Vector3 UVar6;

		if (mapObjectID == -100) {
			return;
		}
		pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
		if (pSVar1 != null) {
			bVar3 = pSVar1.ContainsKey(mapObjectID);
			if (!bVar3) {
				return;
			}
			pSVar1 = (Dictionary<int, object>)MapLoader.IdToMapObject;
			if (pSVar1 != null) {
				pMVar4 = pSVar1.get_Item(mapObjectID);
				bVar3 = (transformName != "");
				if (bVar3) {
					if (((pMVar4 == null) ||(pUVar2 = pMVar4.GameObject, pUVar2 == null)) ||(pUVar5 = pUVar2.transform, pUVar5 == null)) goto label_05bc15ca;
					pUVar5 = pUVar5.Find(transformName);
				}
				else {
					if ((pMVar4 == null) ||(pUVar2 = pMVar4.GameObject, pUVar2 == null)) goto label_05bc15ca;
					pUVar5 = pUVar2.transform;
				}
				bVar3 = ((Object)pUVar5 != null);
				if (bVar3) {
					this.MountedMapObject = pMVar4;
					this.MountedTransform = pUVar5;
					this.MountedPositionOffset.x = positionOffset.x;
					this.MountedPositionOffset.y = positionOffset.y;
					this.MountedPositionOffset.z = positionOffset.z;
					this.MountedRotationOffset.x = rotationOffset.x;
					this.MountedRotationOffset.y = rotationOffset.y;
					this.MountedRotationOffset.z = rotationOffset.z;
					pUVar5 = this.MountedTransform;
					if (pUVar5 == null) goto label_05bc15ca;
					UVar6 = pUVar5.TransformPoint(positionOffset);
					this._lastMountedPosition.x = UVar6.x;
					this._lastMountedPosition.y = UVar6.y;
					this._lastMountedPosition.z = UVar6.z;
				}
				return;
			}
		}
	label_05bc15ca: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004116")]
	[Address(RVA = "0x5AC0D90", Offset = "0x5ABFD90", VA = "0x5AC0D90")]
	public void Unmount(bool immediate)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$Unmount): clean
		float fVar1;
		uint uVar2;
		uint uVar3;
		int iVar4;
		Rigidbody __this_00;
		Transform pUVar5;
		PhotonView __this_01;
		uint uVar7;
		BaseComponentCache pUVar8;
		Object[] parameters;
		Vector3 UVar10;
		Vector3 UVar11;
		Vector3 force;
		float local_38;
		float fStack_34;

		this.SetInterpolation(true);
		if ((this.MountState == 0) || (immediate)) {
			uVar7 = this._state;
			if ((uVar7 | 8) == 9) {
				this.FalseAttack();
				uVar7 = this._state;
			}
			if ((uVar7 & 0xfffffffe) == 2) {
				this._dashTimeLeft = 0.0;
			}
			this._state = 0;
			this.CrossFade(this.StandAnimation, 0.1, 0.0) ;
			iVar4 = this.MountState;
		}
		else {
			this.PlayAnimation(HumanAnimations.HorseDismount, 0.0);
			pUVar8 = this.Cache;
			if (pUVar8 == null) goto label_05bc1009;
			__this_00 = pUVar8.Rigidbody;
			if (Il2CppMethodInitialized_0753e72c == false) {
				Il2CppMethodInitialized_0753e72c = true;
				pUVar8 = this.Cache;
			}
			if ((pUVar8 == null) ||(pUVar5 = pUVar8.Transform, pUVar5 == null)) goto label_05bc1009;
			uVar2 = (Vector3.upVector).x;
			uVar3 = (Vector3.upVector).y;
			fVar1 = (Vector3.upVector).z;
			UVar10 = pUVar5.forward;
			pUVar8 = this.Cache;
			if ((pUVar8 == null) ||(pUVar5 = pUVar8.Transform, pUVar5 == null)) goto label_05bc1009;
			UVar11 = pUVar5.right;
			if (__this_00 == null) goto label_05bc1009;
			local_38 = UVar10.x;
			fStack_34 = UVar10.y;
			force.y = ((float)uVar3 * 10.0 - (fStack_34 + fStack_34)) - UVar11.y;
			force.x = ((float)uVar2 * 10.0 - (local_38 + local_38)) - UVar11.x;
			force.z = (fVar1 * 10.0 - (UVar10.z + UVar10.z)) - UVar11.z;
			__this_00.AddForce(force, 2);
			iVar4 = this.MountState;
		}
		if (iVar4 == 2) {
			this.SetTriggerCollider(false);
		}
		this.MountState = 0;
		this._lastMountMessage = null;
		pUVar8 = this.Cache;
		if (pUVar8 != null) {
			__this_01 = pUVar8.PhotonView;
			parameters = (Object[])new object[0];
			if (__this_01 != null) {
				__this_01.RPC("UnmountRPC", 0, parameters);
				return;
			}
		}
	label_05bc1009: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004117")]
	[Address(RVA = "0x5AC16A0", Offset = "0x5AC06A0", VA = "0x5AC16A0")]
	[PunRPC]
	public void UnmountRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$UnmountRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;

		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) {
			throw new NullReferenceException();
		}
		if (info.Sender == pPVar2._Owner_k__BackingField) {
			this.MountState = 0;
			this.CanMountedAttack = false;
			this.MountedTransform = null;
			this.MountedMapObject = null;
			return;
		}
		return;
	}

	[Token(Token = "0x6004118")]
	[Address(RVA = "0x5AC1720", Offset = "0x5AC0720", VA = "0x5AC1720")]
	public void MountHorse()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$MountHorse): 8 lines keep C-only constructs
		uint uVar1;
		Horse pCVar2;
		BaseComponentCache pUVar3;
		bool bVar4;
		Transform pUVar5;
		float fVar6;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float fVar7;
		float fVar8;
		Vector3 UVar9;
		Vector3 euler;
		Quaternion local_48;
		float local_38;
		byte[] local_28 = new byte[24];

		local_48 = (Quaternion)ZEXT816(0);
		pCVar2 = this.Horse;
		bVar4 = ((Object)pCVar2 != null);
		if ((bVar4) && (this.MountState == 0)) {
			pCVar2 = this.Horse;
			if ((pCVar2 != null) &&((pUVar3 = pCVar2.Cache, pUVar3 != null &&(pUVar5 = pUVar3.Transform, pUVar5 != null)))) {
				UVar9 = pUVar5.position;
				pUVar3 = this.Cache;
				if (pUVar3 != null) {
					local_28._8_4_ = extraout_XMM0_Dc;
					local_28._0_8_ = UVar9._0_8_;
					local_28._12_4_ = extraout_XMM0_Dd;
					pUVar5 = pUVar3.Transform;
					local_38 = UVar9.z;
					if (pUVar5 != null) {
						UVar9 = pUVar5.position;
						if (Il2CppMethodInitialized_0753e7b7 == false) {
							Il2CppMethodInitialized_0753e7b7 = true;
							uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						else {
							uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						if (uVar1 == 0) {
						}
						fVar6 = (float)local_28._4_4_ - UVar9.y;
						fVar7 = local_38 - UVar9.z;
						fVar8 = (float)local_28._0_4_ - UVar9.x;
						fVar6 = fVar6 * fVar6 + fVar8 * fVar8 + fVar7 * fVar7;
						if (fVar6 < 0.0) {
							fVar6 = sqrtf(fVar6);
						}
						else {
							fVar6 = SQRT(fVar6);
						}
						if (15.0 <= fVar6) {
							return;
						}
						if (((typeof(HumanAnimations))._2).cctor_finished_or_no_cctor == 0) {
						}
						this.PlayAnimation(HumanAnimations.HorseMount, 0.0);
						pCVar2 = this.Horse;
						if ((pCVar2 != null) &&(pUVar5 = pCVar2.transform, pUVar5 != null)) {
							local_48 = (Quaternion)pUVar5.rotation;
							UVar9 = Quaternion.Internal_ToEulerRad(ref local_48);
							euler.x = UVar9.x * 57.29578;
							euler.y = UVar9.y * 57.29578;
							euler.z = UVar9.z * 57.29578;
							UVar9 = Quaternion.Internal_MakePositive(euler);
							this.TargetAngle = UVar9.y;
							this.PlaySound(HumanSounds.Dodge);
							return;
						}
					}
				}
			}
			throw new NullReferenceException();
		}
		return;
	}

	[Token(Token = "0x6004119")]
	[Address(RVA = "0x5AC19C0", Offset = "0x5AC09C0", VA = "0x5AC19C0")]
	public void Dodge(float targetAngle)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$Dodge): 6 lines keep C-only constructs
		Quaternion UVar1;
		float in_XMM1_Da;
		float in_XMM1_Db;

		if (this.CanDodge == false) {
			return;
		}
		if ((this._state & 0xfffffffeU) == 2) {
			this._dashTimeLeft = 0.0;
		}
		this._state = 2;
		this.TargetAngle = targetAngle;
		UVar1._0_8_ =this.GetTargetRotation();
		this._targetRotation = UVar1._0_8_;
		this._targetRotation.z = in_XMM1_Da;
		this._targetRotation.w = in_XMM1_Db;
		this.CrossFade(HumanAnimations.Dodge, 0.1, 0.0);
		this.PlaySound(HumanSounds.Dodge);
		this.ToggleSparks(false);
		return;
	}

	[Token(Token = "0x600411A")]
	[Address(RVA = "0x5AC1B00", Offset = "0x5AC0B00", VA = "0x5AC1B00")]
	public void DodgeWall()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$DodgeWall): clean


		this.FalseAttack();
		if ((this._state & 0xfffffffeU) == 2) {
			this._dashTimeLeft = 0.0;
		}
		this._state = 2;
		this.PlayAnimation(HumanAnimations.Dodge, 0.2);
		this.ToggleSparks(false);
		return;
	}

	[Token(Token = "0x600411B")]
	[Address(RVA = "0x5AC1BA0", Offset = "0x5AC0BA0", VA = "0x5AC1BA0")]
	public void Dash(float targetAngle)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$Dash): 32 lines keep C-only constructs
		HumanStats __this_00;
		BaseComponentCache pUVar1;
		Rigidbody pUVar2;
		Transform pUVar3;
		String name;
		BaseMenu obj;
		object pIVar4;
		MethodInfo method_00;
		float fVar5;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint uVar6;
		uint uVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		Quaternion value;
		Quaternion UVar11;
		Vector3 UVar12;
		Vector3 UVar13;
		ulong local_68;
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[16];
		byte[] local_38 = new byte[16];
		byte[] local_28 = new byte[16];

		local_58._0_4_ = targetAngle;
		local_68 = 0;
		if (0.0 < this._dashTimeLeft) {
			return;
		}
		__this_00 = this.Stats;
		if (__this_00 != null) {
			uVar6 = 0;
			uVar7 = 0;
			if (__this_00.CurrentGas <= 0.0) {
				return;
			}
			if (this.MountState != 0) {
				return;
			}
			if (this._state == 7) {
				return;
			}
			if (this.CarryState == 1) {
				return;
			}
			if (0.0 < this._dashCooldownLeft) {
				return;
			}
			__this_00.UseDashGas();
			this.TargetAngle = (float)local_58._0_4_;
			UVar12 = this.GetTargetDirection();
			local_58._8_4_ = extraout_XMM0_Dc;
			local_58._0_8_ = UVar12._0_8_;
			local_58._12_4_ = extraout_XMM0_Dd;
			pUVar1 = this.Cache;
			if ((pUVar1 != null) &&(pUVar2 = pUVar1.Rigidbody, pUVar2 != null)) {
				UVar13 = pUVar2.linearVelocity;
				local_68 = UVar13._0_8_;
				fVar5 = (float)il2cpp_runtime_helper_0599adc0(&local_68, 0);
				this._originalDashSpeed = fVar5;
				value = (Quaternion)this.GetTargetRotation();
				this._targetRotation = value;
				if (this._wallSlide == false) {
					pUVar1 = this.Cache;
					if ((pUVar1 == null) ||(pUVar2 = pUVar1.Rigidbody, pUVar2 == null)) goto label_05bc1fa1;
					pUVar2.rotation = (Quaternion)value;
					uVar6 = 0;
					uVar7 = 0;
					this.CrossFade(HumanAnimations.Dash, 0.1, 0.1);
				}
				else {
					this.PlayAnimation(HumanAnimations.Dodge, 0.2);
				}
				pUVar1 = this.Cache;
				if ((pUVar1 != null) &&(pUVar3 = pUVar1.Transform, pUVar3 != null)) {
					name = EffectPrefabs.GasBurst;
					UVar13 = pUVar3.position;
					pUVar1 = this.Cache;
					if (pUVar1 != null) {
						local_28._8_4_ = extraout_XMM0_Dc_00;
						local_28._0_8_ = UVar13._0_8_;
						local_28._12_4_ = extraout_XMM0_Dd_00;
						pUVar3 = pUVar1.Transform;
						if (pUVar3 != null) {
							UVar11 = pUVar3.rotation;
							fVar5 = UVar11.x;
							fVar8 = UVar11.y;
							fVar9 = UVar11.z;
							fVar10 = UVar11.w;
							if ((typeof(EffectSpawner)._2).cctor_finished_or_no_cctor == 0) {
								local_38._8_4_ = extraout_XMM0_Dc_01;
								local_38._0_8_ = UVar11._0_8_;
								local_38._12_4_ = extraout_XMM0_Dd_01;
								local_48._8_4_ = uVar6;
								local_48._0_8_ = UVar11._8_8_;
								local_48._12_4_ = uVar7;
								fVar5 = (float)local_38._0_4_;
								fVar8 = (float)local_38._4_4_;
								fVar9 = (float)local_48._0_4_;
								fVar10 = (float)local_48._4_4_;
							}
							UVar11.y = fVar8;
							UVar11.x = fVar5;
							UVar11.w = fVar10;
							UVar11.z = fVar9;
							UVar13.x = (float)local_28._0_4_;
							UVar13.y = (float)local_28._4_4_;
							EffectSpawner.Spawn(name, UVar13, UVar11, 1.0, true, null);
							method_00 = (MethodInfo)HumanSounds.GasBurst;
							this.PlaySound((String)method_00);
							fVar5 = 0.0;
							if ((this._state & 0xfffffffeU) != 2) {
								fVar5 = 0.5;
							}
							this._dashTimeLeft = fVar5;
							this._state = 3;
							this.FalseAttack();
							pUVar1 = this.Cache;
							if ((pUVar1 != null) &&(pUVar2 = pUVar1.Rigidbody, pUVar2 != null)) {
								UVar12.z = UVar12.z * 40.0;
								UVar12.x = (float)local_58._0_4_ * 40.0;
								UVar12.y = (float)local_58._4_4_ * 40.0;
								pUVar2.AddForce(UVar12, 2);
								this._dashCooldownLeft = 0.2;
								if (this.AI != false) {
									return;
								}
								obj = UIManager.CurrentMenu;
								pIVar4 = il2cpp_codegen_is_inst_class((object)obj, typeof(InGameMenu)) ;
								if (pIVar4 != null) {
									pIVar4 = il2cpp_codegen_is_inst_class((object)obj, typeof(InGameMenu));
									if (pIVar4[0xb].monitor != null) {
										pIVar4[0xb].monitor.ShakeGas();
										return;
									}
								}
							}
						}
					}
				}
			}
		}
	label_05bc1fa1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600411C")]
	[Address(RVA = "0x5AC1FB0", Offset = "0x5AC0FB0", VA = "0x5AC1FB0")]
	public bool DashVertical(float targetAngle, Vector3 direction, [Optional] Vector3? percentPower)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$DashVertical): 27 lines keep C-only constructs
		HumanStats __this_00;
		BaseComponentCache pUVar1;
		Rigidbody pUVar2;
		Transform pUVar3;
		String name;
		BaseMenu obj;
		object pIVar4;
		MethodInfo method_00;
		float fVar5;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float fVar6;
		uint uVar7;
		uint uVar8;
		float fVar9;
		float fVar10;
		Quaternion UVar11;
		Quaternion rotation;
		Vector3 UVar12;
		Vector3 UVar13;
		ulong local_78;
		float local_68;
		ulong local_58;
		System_Nullable_Vector3__Fields local_48;
		byte[] local_38 = new byte[16];
		byte[] local_28 = new byte[16];

		local_48._0_8_ = percentPower._0_8_;
		local_48.value._4_8_ = percentPower.value._4_8_;
		if (0.0 < this._dashTimeLeft) {
			return false;
		}
		__this_00 = this.Stats;
		if (__this_00 != null) {
			if (__this_00.CurrentGas <= 0.0) {
				return false;
			}
			if (this.MountState != 0) {
				return false;
			}
			if (this._state == 7) {
				return false;
			}
			if (this.CarryState == 1) {
				return false;
			}
			if (0.0 < this._dashCooldownLeft) {
				return false;
			}
			__this_00.UseDashGas();
			this.TargetAngle = targetAngle;
			pUVar1 = this.Cache;
			if ((pUVar1 != null) &&(pUVar2 = pUVar1.Rigidbody, pUVar2 != null)) {
				UVar12 = pUVar2.linearVelocity;
				local_58 = UVar12._0_8_;
				fVar5 = (float)il2cpp_runtime_helper_0599adc0(&local_58);
				this._originalDashSpeed = fVar5;
				local_78._0_4_ = direction.x;
				fVar6 = 0.0;
				uVar7 = 0;
				uVar8 = 0;
				fVar5 = direction.z;
				UVar11._0_8_ = il2cpp_runtime_helper_05be1910((float)local_78, 0);
				this._targetRotation.x = (float)(int)UVar11._0_8_;
				this._targetRotation.y = (float)(int)((ulong)UVar11._0_8_ >> 0x20);
				this._targetRotation.z = fVar5;
				this._targetRotation.w = fVar6;
				pUVar1 = this.Cache;
				if ((pUVar1 != null) &&(pUVar2 = pUVar1.Rigidbody, pUVar2 != null)) {
					UVar11.w = fVar6;
					UVar11.z = fVar5;
					pUVar2.rotation = UVar11;
					pUVar1 = this.Cache;
					if ((pUVar1 != null) &&(pUVar3 = pUVar1.Transform, pUVar3 != null)) {
						name = EffectPrefabs.GasBurst;
						UVar12 = pUVar3.position;
						pUVar1 = this.Cache;
						if ((pUVar1 != null) &&(pUVar3 = pUVar1.Transform, pUVar3 != null)) {
							UVar11 = pUVar3.rotation;
							fVar5 = UVar11.x;
							fVar6 = UVar11.y;
							fVar9 = UVar11.z;
							fVar10 = UVar11.w;
							if ((typeof(EffectSpawner)._2).cctor_finished_or_no_cctor == 0) {
								local_28._8_4_ = extraout_XMM0_Dc;
								local_28._0_8_ = UVar11._0_8_;
								local_28._12_4_ = extraout_XMM0_Dd;
								local_38._8_4_ = uVar7;
								local_38._0_8_ = UVar11._8_8_;
								local_38._12_4_ = uVar8;
								fVar5 = (float)local_28._0_4_;
								fVar6 = (float)local_28._4_4_;
								fVar9 = (float)local_38._0_4_;
								fVar10 = (float)local_38._4_4_;
							}
							rotation.y = fVar6;
							rotation.x = fVar5;
							rotation.w = fVar10;
							rotation.z = fVar9;
							EffectSpawner.Spawn(name, UVar12, rotation, 1.0, true, null);
							this.PlaySound(HumanSounds.GasBurst);
							this._dashTimeLeft = 0.5;
							method_00 = (MethodInfo)HumanAnimations.Dash;
							this.CrossFade((String)method_00, 0.1, 0.1);
							if ((this._state & 0xfffffffeU) == 2) {
								this._dashTimeLeft = 0.0;
							}
							this._state = 3;
							this.FalseAttack();
							local_78._4_4_ = direction.y;
							local_78._0_4_ = (float)local_78 * 40.0;
							local_78._4_4_ = local_78._4_4_ * 40.0;
							fVar5 = direction.z * 40.0;
							if (percentPower.hasValue != false) {
								UVar12 = local_48.Value;
								UVar13 = local_48.Value;
								local_68 = UVar12.x;
								local_78 = CONCAT44(local_78._4_4_ * UVar13.y, (float)local_78 * local_68);
								UVar12 = local_48.Value;
								fVar5 = fVar5 * UVar12.x;
							}
							pUVar1 = this.Cache;
							if ((pUVar1 != null) &&(pUVar2 = pUVar1.Rigidbody, pUVar2 != null)) {
								UVar12.z = fVar5;
								UVar12.x = (float)local_78;
								UVar12.y = local_78._4_4_;
								pUVar2.AddForce(UVar12, 2);
								this._dashCooldownLeft = 0.2;
								if (this.AI != false) {
									return true;
								}
								obj = UIManager.CurrentMenu;
								pIVar4 = il2cpp_codegen_is_inst_class((object)obj, typeof(InGameMenu)) ;
								if (pIVar4 != null) {
									pIVar4 = il2cpp_codegen_is_inst_class((object)obj, typeof(InGameMenu));
									if (pIVar4[0xb].monitor != null) {
										pIVar4[0xb].monitor.ShakeGas();
										return true;
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

	[Token(Token = "0x600411D")]
	[Address(RVA = "0x5AC05B0", Offset = "0x5ABF5B0", VA = "0x5AC05B0")]
	public void Idle()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$Idle): clean
		uint uVar1;

		uVar1 = this._state;
		if ((uVar1 | 8) == 9) {
			this.FalseAttack();
			uVar1 = this._state;
		}
		if ((uVar1 & 0xfffffffe) == 2) {
			this._dashTimeLeft = 0.0;
		}
		this._state = 0;
		this.CrossFade(this.StandAnimation, 0.1, 0.0);
		return;
	}

	[Token(Token = "0x600411E")]
	[Address(RVA = "0x5AC23F0", Offset = "0x5AC13F0", VA = "0x5AC23F0")]
	public void Grab(BaseTitan grabber, string type)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$Grab): 6 lines keep C-only constructs
		BaseTitanComponentCache pCVar1;
		HookUseable pCVar2;
		Transform pUVar3;
		BaseComponentCache pUVar4;
		PhotonView __this_00;
		PhotonView pPVar5;
		HumanComponentCache pCVar6;
		bool bVar7;
		Transform* ppUVar8;
		Object[] parameters;
		object pIVar9;
		object pIVar10;
		byte uStack_3d;
		int iStack_3c;
		Transform pUStack_38;

		if (0.0 < this._grabIFrames) {
			return;
		}
		if (this.MountState != 0) {
			this.Unmount(true);
		}
		bVar7 = (type == "GrabLeft");
		if (bVar7) {
			if ((grabber == null) ||(pCVar1 = grabber.BaseTitanCache, pCVar1 == null)) goto label_05bc27a2;
			ppUVar8 = &pCVar1.GrabLSocket;
		}
		else {
			if ((grabber == null) ||(pCVar1 = grabber.BaseTitanCache, pCVar1 == null)) goto label_05bc27a2;
			ppUVar8 = &pCVar1.GrabRSocket;
		}
		pCVar2 = this.HookLeft;
		if (pCVar2 == null) goto label_05bc27a2;
		pUVar3 = *ppUVar8;
		pCVar2.DisableAnyHook();
		pCVar2 = this.HookRight;
		if (pCVar2 == null) goto label_05bc27a2;
		pCVar2.DisableAnyHook();
		if (this._hookHumanLeft == true) {
			this._hookHuman = null;
			if (this._hookHumanLeft == false) goto label_05bc2550;
			if ((this._state & 0xfffffffeU) == 2) goto label_05bc2578;
	label_05bc2534: ;
			this._state = 7;
			pUVar4 = grabber.Cache;
		}
		else {
	label_05bc2550: ;
			this._hookHuman = null;
			if ((this._state & 0xfffffffeU) != 2) goto label_05bc2534;
	label_05bc2578: ;
			this._dashTimeLeft = 0.0;
			this._state = 7;
			pUVar4 = grabber.Cache;
		}
		if (pUVar4 != null) {
			__this_00 = pUVar4.PhotonView;
			parameters = (Object[])new object[2];
			pUVar4 = this.Cache;
			if ((pUVar4 != null) &&(pPVar5 = pUVar4.PhotonView, pUStack_38 = pUVar3, pPVar5 != null)) {
				iStack_3c = pPVar5.viewIdField;
				pIVar9 = (object)iStack_3c;
				if (parameters != null) {
					if ((pIVar9 != null) &&(pIVar10 = il2cpp_vm_Object_IsInst(pIVar9, (((parameters.obj).klass)._1).element_class), pIVar10 == null)) {
	label_05bc27ac: ;
						pIVar9 = new ArrayTypeMismatchException();
						throw pIVar9;
					}
					if ((int)parameters.Length != 0) {
						parameters[0] = pIVar9;
						uStack_3d = (type == "GrabLeft");
						pIVar9 = (object)uStack_3d;
						if ((pIVar9 != null) &&(pIVar10 = il2cpp_vm_Object_IsInst(pIVar9, (((parameters.obj).klass)._1).element_class), pIVar10 == null)) goto label_05bc27ac;
						pUVar3 = pUStack_38;
						if ((parameters.Length & 0xfffffffe) != 0) {
							parameters[1] = pIVar9;
							if (__this_00 != null) {
								__this_00.RPC("GrabRPC", 0, parameters);
								this.SetTriggerCollider(true);
								this.FalseAttack();
								this.Grabber = grabber;
								this.GrabHand = pUVar3;
								this.SetSmoke(false);
								this.PlayAnimation(HumanAnimations.Grabbed, 0.0);
								this.ToggleSparks(false);
								pCVar6 = this.HumanCache;
								if (pCVar6 != null) {
									this.ToggleParticles(pCVar6.Wind, false) ;
									bVar7 = this.IsMainCharacter();
									if (bVar7) {
										MusicManager.PlayGrabbedSong();
									}
									return;
								}
							}
							goto label_05bc27a2;
						}
					}
					throw new IndexOutOfRangeException();
				}
			}
		}
	label_05bc27a2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600411F")]
	[Address(RVA = "0x5ABF880", Offset = "0x5ABE880", VA = "0x5ABF880")]
	public void Ungrab(bool notifyTitan, bool idle, bool breakArm = false)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$Ungrab): 1 lines keep C-only constructs
		BaseTitan pCVar1;
		BaseComponentCache pUVar2;
		PhotonView __this_00;
		PhotonView pPVar3;
		bool bVar4;
		uint uVar5;
		Object[] parameters;
		object pIVar6;
		object pIVar7;
		int local_2c;

		if (notifyTitan) {
			pCVar1 = this.Grabber;
			bVar4 = ((Object)pCVar1 != null);
			if (bVar4) {
				pCVar1 = this.Grabber;
				if ((pCVar1 != null) &&(pUVar2 = pCVar1.Cache, pUVar2 != null)) {
					__this_00 = pUVar2.PhotonView;
					parameters = (Object[])new object[1];
					pUVar2 = this.Cache;
					if ((pUVar2 != null) &&(pPVar3 = pUVar2.PhotonView, pPVar3 != null)) {
						local_2c = pPVar3.viewIdField;
						pIVar6 = (object)local_2c;
						if (parameters != null) {
							if (pIVar6 != null) {
								pIVar7 = il2cpp_vm_Object_IsInst(pIVar6, (((parameters.obj).klass)._1).element_class);
								if (pIVar7 == null) {
									pIVar6 = new ArrayTypeMismatchException();
									throw pIVar6;
								}
							}
							if ((int)parameters.Length == 0) {
								throw new IndexOutOfRangeException();
							}
							parameters[0] = pIVar6;
							if (__this_00 != null) {
								__this_00.RPC("UngrabRPC", 0, parameters);
								goto label_05bbf9e8;
							}
						}
					}
				}
				throw new NullReferenceException();
			}
		}
	label_05bbf9e8: ;
		this.Grabber = null;
		this.GrabHand = null;
		this.SetTriggerCollider(false);
		if (idle) {
			uVar5 = this._state;
			if ((uVar5 | 8) == 9) {
				this.FalseAttack();
				uVar5 = this._state;
			}
			if ((uVar5 & 0xfffffffe) == 2) {
				this._dashTimeLeft = 0.0;
			}
			this._state = 0;
			this.CrossFade(this.StandAnimation, 0.1, 0.0) ;
		}
		bVar4 = this.IsMainCharacter();
		if (bVar4) {
			MusicManager.OnEscapeGrab();
		}
		return;
	}

	[Token(Token = "0x6004120")]
	[Address(RVA = "0x5AC2940", Offset = "0x5AC1940", VA = "0x5AC2940")]
	public void Carry(Human carrier, Transform back)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$Carry): clean
		HookUseable pCVar1;

		if (this.MountState != 0) {
			this.Unmount(true);
		}
		pCVar1 = this.HookLeft;
		if (pCVar1 == null) {
	label_05bc2a78: ;
			throw new NullReferenceException();
		}
		pCVar1.DisableAnyHook();
		pCVar1 = this.HookRight;
		if (pCVar1 == null) goto label_05bc2a78;
		pCVar1.DisableAnyHook();
		if (this._hookHumanLeft == true) {
			this._hookHuman = null;
			if (this._hookHumanLeft != false) goto label_05bc29d6;
		}
		this._hookHuman = null;
	label_05bc29d6: ;
		this.CarryState = 1;
		this.SetTriggerCollider(true);
		this.FalseAttack();
		this.Carrier = carrier;
		this.CarryBack = back;
		this.SetSmoke(false);
		this.ToggleSparks(false);
		if ((this._state & 0xfffffffeU) == 2) {
			this._dashTimeLeft = 0.0;
		}
		this._state = 0;
		this.CrossFade(this.StandAnimation, 0.01, 0.0);
		return;
	}

	[Token(Token = "0x6004121")]
	[Address(RVA = "0x5AC2A80", Offset = "0x5AC1A80", VA = "0x5AC2A80")]
	[PunRPC]
	public void CarryRPC(int initiatorViewId, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$CarryRPC): 9 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		bool bVar3;
		ulong in_RAX;
		PhotonView pPVar4;
		Human initiator;
		Object[] parameters;
		object pIVar5;
		ulong uStack_38;

		uStack_38 = in_RAX;
		pPVar4 = PhotonView.Find(initiatorViewId);
		bVar3 = ((Object)pPVar4 == null);
		if (!bVar3) {
			if (pPVar4 == null) {
	label_05bc2c89: ;
				throw new NullReferenceException();
			}
			if (pPVar4._Owner_k__BackingField == info.Sender) {
				initiator = pPVar4.GetComponent<Human>();
				bVar3 = ((Object)initiator == null);
				if (!bVar3) {
					this._lastCarryRPCSender = initiatorViewId;
					pUVar1 = this.Cache;
					if ((pUVar1 != null) &&(pPVar4 = pUVar1.PhotonView, pPVar4 != null)) {
						if (pPVar4._IsMine_k__BackingField == false) {
							return;
						}
						bVar3 = this.IsCarryableBy(initiator);
						if (!bVar3) {
							return;
						}
						pUVar1 = this.Cache;
						if (pUVar1 != null) {
							pPVar4 = pUVar1.PhotonView;
							parameters = (Object[])new object[2];
							uStack_38 = CONCAT44(initiatorViewId, (undefined4)uStack_38);
							pIVar5 = (object)(((long)&uStack_38 + 4));
							if (parameters != null) {
								il2cpp_codegen_array_element_type_check((Array)parameters, pIVar5);
								il2cpp_runtime_helper_02ac8d90(parameters, 0, pIVar5);
								pUVar1 = this.Cache;
								if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
									uStack_38 = CONCAT44(uStack_38._4_4_, pPVar2.viewIdField);
									pIVar5 = (object)uStack_38;
									il2cpp_codegen_array_element_type_check((Array)parameters, pIVar5);
									il2cpp_runtime_helper_02ac8d90(parameters, 1, pIVar5);
									if (pPVar4 != null) {
										pPVar4.RPC("ConfirmCarryRPC", 0, parameters);
										return;
									}
								}
							}
						}
					}
					goto label_05bc2c89;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004122")]
	[Address(RVA = "0x5AC2E70", Offset = "0x5AC1E70", VA = "0x5AC2E70")]
	[PunRPC]
	public void ConfirmCarryRPC(int initiatorViewId, int targetViewId, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ConfirmCarryRPC): 3 lines keep C-only constructs
		Human* targetAddress;
		BaseComponentCache pUVar1;
		PhotonView y;
		bool bVar2;
		PhotonView pPVar3;
		Human pCVar4;
		MethodInfo method_00;

		pPVar3 = PhotonView.Find(targetViewId);
		bVar2 = ((Object)pPVar3 == null);
		if (!bVar2) {
			pUVar1 = this.Cache;
			if (pUVar1 == null) {
	label_05bc305c: ;
				throw new NullReferenceException();
			}
			y = pUVar1.PhotonView;
			bVar2 = ((Object)pPVar3 != (Object)y);
			if (!bVar2) {
				if (pPVar3 == null) goto label_05bc305c;
				method_00 = (MethodInfo)pPVar3._Owner_k__BackingField;
				if ((method_00 == (MethodInfo)info.Sender) &&(this._lastCarryRPCSender == initiatorViewId)) {
					pPVar3 = PhotonView.Find(initiatorViewId);
					bVar2 = ((Object)pPVar3 == null);
					if (!bVar2) {
						if (pPVar3 != null) {
							pCVar4 = pPVar3.GetComponent<Human>();
							bVar2 = ((Object)pCVar4 == null);
							if (bVar2) {
								return;
							}
							targetAddress = &this.Carrier;
							this.Carrier = pCVar4;
							pCVar4 = this.Carrier;
							if (pCVar4 != null) {
								pCVar4.BackHuman = this;
								this.CarryState = 1;
								this._lastCarryRPCSender = -1;
								pUVar1 = this.Cache;
								if ((pUVar1 != null) &&(pPVar3 = pUVar1.PhotonView, pPVar3 != null)) {
									if (pPVar3._IsMine_k__BackingField == false) {
										return;
									}
									pCVar4 = *targetAddress;
									if ((pCVar4 != null) &&(pUVar1 = pCVar4.Cache, pUVar1 != null)) {
										this.Carry(pCVar4, pUVar1.Transform);
										return;
									}
								}
							}
						}
						goto label_05bc305c;
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004123")]
	[Address(RVA = "0x5AC3070", Offset = "0x5AC2070", VA = "0x5AC3070")]
	public void Uncarry()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$Uncarry): clean
		float fVar1;
		uint uVar2;
		uint uVar3;
		Rigidbody __this_00;
		Transform pUVar4;
		BaseComponentCache pUVar6;
		Vector3 UVar7;
		Vector3 UVar8;
		Vector3 force;
		float local_38;
		float fStack_34;

		this.SetTriggerCollider(false);
		this.SetVelocityFromCarrier();
		pUVar6 = this.Cache;
		if (pUVar6 != null) {
			__this_00 = pUVar6.Rigidbody;
			if (Il2CppMethodInitialized_0753e72c == false) {
				Il2CppMethodInitialized_0753e72c = true;
				pUVar6 = this.Cache;
				if (pUVar6 == null) goto label_05bc31a4;
			}
			pUVar4 = pUVar6.Transform;
			if (pUVar4 != null) {
				uVar2 = (Vector3.upVector).x;
				uVar3 = (Vector3.upVector).y;
				fVar1 = (Vector3.upVector).z;
				UVar7 = pUVar4.forward;
				pUVar6 = this.Cache;
				if (pUVar6 != null) {
					pUVar4 = pUVar6.Transform;
					if (pUVar4 != null) {
						UVar8 = pUVar4.right;
						if (__this_00 != null) {
							local_38 = UVar7.x;
							fStack_34 = UVar7.y;
							force.y = ((float)uVar3 * 10.0 - fStack_34 * 2.0) - UVar8.y;
							force.x = ((float)uVar2 * 10.0 - (local_38 + local_38)) - UVar8.x;
							force.z = (fVar1 * 10.0 - (UVar7.z + UVar7.z)) - UVar8.z;
							__this_00.AddForce(force, 2);
							return;
						}
					}
				}
			}
		}
	label_05bc31a4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004124")]
	[Address(RVA = "0x5AC3250", Offset = "0x5AC2250", VA = "0x5AC3250", Slot = "122")]
	[PunRPC]
	public virtual void UncarryRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$UncarryRPC): 3 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		Human pCVar3;
		bool bVar4;
		Human* targetAddress;

		this.CarryState = 0;
		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) {
	label_05bc3313: ;
			throw new NullReferenceException();
		}
		if (pPVar2._IsMine_k__BackingField != false) {
			this.Uncarry();
		}
		pCVar3 = this.Carrier;
		targetAddress = &this.Carrier;
		bVar4 = ((Object)pCVar3 != null);
		if (bVar4) {
			pCVar3 = *targetAddress;
			if (pCVar3 == null) goto label_05bc3313;
			pCVar3.BackHuman = null;
		}
		*targetAddress = null;
		return;
	}

	[Token(Token = "0x6004125")]
	[Address(RVA = "0x5AC31B0", Offset = "0x5AC21B0", VA = "0x5AC31B0")]
	public void SetVelocityFromCarrier()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$SetVelocityFromCarrier): clean
		Human pCVar1;
		BaseComponentCache pUVar2;
		Rigidbody __this_00;
		bool bVar3;

		pCVar1 = this.Carrier;
		bVar3 = ((Object)pCVar1 != null);
		if (bVar3) {
			pUVar2 = this.Cache;
			if (((pUVar2 == null) ||(pCVar1 = this.Carrier, pCVar1 == null)) ||(__this_00 = pUVar2.Rigidbody, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.linearVelocity = (Vector3)pCVar1.CarryVelocity;
			return;
		}
		return;
	}

	[Token(Token = "0x6004126")]
	[Address(RVA = "0x5AC3320", Offset = "0x5AC2320", VA = "0x5AC3320")]
	public Human GetHumanAlongRay(Ray ray, float distance)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$GetHumanAlongRay): 8 lines keep C-only constructs
		int iVar1;
		uint uVar2;
		Vector2 UVar4;
		BaseComponentCache pUVar5;
		Transform pUVar6;
		bool bVar7;
		LayerMask mask;
		int layerMask;
		Int32[] layers;
		RaycastHit[] pUVar8;
		ulong uVar9;
		Collider __this_00;
		GameObject __this_01;
		Human human;
		RaycastHit pUVar10;
		ulong uVar11;
		float fVar12;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		uint uVar13;
		float fVar14;
		float fVar15;
		Vector3 UVar16;
		float local_b8;
		Human local_b0;
		RaycastHit local_88;
		float local_58;
		byte[] local_48 = new byte[24];

		local_88.m_UV.x = 0.0;
		local_88.m_UV.y = 0.0;
		local_88.m_Collider.m_Data = (EntityId)0;
		local_88.m_Normal.y = 0.0;
		local_88.m_Normal.z = 0.0;
		local_88.m_FaceID = 0;
		local_88.m_Distance = 0.0;
		local_88.m_Point.x = 0.0;
		local_88.m_Point.y = 0.0;
		local_88.m_Point.z = 0.0;
		local_88.m_Normal.x = 0.0;
		layers = (Int32[])new int[2];
		if (layers == null) {
	label_05bc3694: ;
			throw new NullReferenceException();
		}
		iVar1 = (int)layers.Length;
		if (iVar1 != 0) {
			layers[0] = PhysicsLayer.Human;
			if (iVar1 != 1) {
				layers[1] = PhysicsLayer.MapObjectCharacters;
				mask = PhysicsLayer.GetMask(layers);
				layerMask = ((LayerMask)mask);
				pUVar8 = Physics.RaycastAll(ray, distance, layerMask);
				if (pUVar8 != null) {
					if ((int)pUVar8.Length < 1) {
					}
					else {
						uVar9 = pUVar8.Length & 0xffffffff;
						pUVar10 = pUVar8.m_Items;
						local_b8 = INFINITY;
						uVar11 = 0;
						do {
							if (uVar9 <= uVar11) goto label_05bc3699;
							local_88.m_Point.x = pUVar10.m_Point.x;
							local_88.m_Point.y = pUVar10.m_Point.y;
							local_88._8_8_ = *(ulong)&pUVar10.m_Point.z;
							fVar12 = pUVar10.m_Normal.z;
							local_88.m_Normal.y = pUVar10.m_Normal.y;
							local_88.m_Normal.z = pUVar10.m_Normal.z;
							uVar13 = pUVar10.m_FaceID;
							fVar14 = pUVar10.m_Distance;
							UVar4 = pUVar10.m_UV;
							local_88.m_Collider.m_Data =(EntityId)pUVar10.m_Collider.m_Data;
							local_88.m_UV.x = UVar4.x;
							local_88.m_UV.y = UVar4.y;
							local_88.m_FaceID = uVar13;
							local_88.m_Distance = fVar14;
							__this_00 = local_88.collider;
							if ((__this_00 == null) ||(__this_01 = __this_00.gameObject, __this_01 == null)) goto label_05bc3694;
							human = __this_01.GetComponent<Human>();
							if ((human != null) &&(bVar7 = this.IsValidCarryTarget(human, distance))) {
								pUVar5 = this.Cache;
								if ((pUVar5 == null) ||(pUVar6 = pUVar5.Transform, pUVar6 == null)) goto label_05bc3694;
								UVar16 = pUVar6.position;
								pUVar5 = human.Cache;
								if (pUVar5 == null) goto label_05bc3694;
								local_48._8_4_ = extraout_XMM0_Dc;
								local_48._0_8_ = UVar16._0_8_;
								local_48._12_4_ = extraout_XMM0_Dd;
								pUVar6 = pUVar5.Transform;
								local_58 = UVar16.z;
								if (pUVar6 == null) goto label_05bc3694;
								UVar16 = pUVar6.position;
								if (Il2CppMethodInitialized_0753e7b7 == false) {
									Il2CppMethodInitialized_0753e7b7 = true;
									uVar13 = (typeof(Math)._2).cctor_finished_or_no_cctor;
								}
								else {
									uVar13 = (typeof(Math)._2).cctor_finished_or_no_cctor;
								}
								if (uVar13 == 0) {
								}
								fVar12 = (float)local_48._4_4_ - UVar16.y;
								fVar14 = local_58 - UVar16.z;
								fVar15 = (float)local_48._0_4_ - UVar16.x;
								fVar12 = fVar12 * fVar12 + fVar15 * fVar15 + fVar14 * fVar14;
								if (fVar12 < 0.0) {
									fVar12 = sqrtf(fVar12);
								}
								else {
									fVar12 = SQRT(fVar12);
								}
								if (fVar12 < local_b8) {
									local_b8 = fVar12;
								}
							}
							uVar11 = uVar11 + 1;
							uVar2 = (uint)pUVar8.Length;
							uVar9 = (ulong)uVar2;
							pUVar10 = pUVar10 + 1;
						} while ((long)uVar11 < (long)(int)uVar2);
					}
					return local_b0;
				}
				goto label_05bc3694;
			}
		}
	label_05bc3699: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6004127")]
	[Address(RVA = "0x5AC36A0", Offset = "0x5AC26A0", VA = "0x5AC36A0")]
	public bool IsValidCarryTarget(Human human, float distance)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$IsValidCarryTarget): 1 lines keep C-only constructs
		Human pCVar1;
		String b;
		BaseComponentCache pUVar2;
		Transform pUVar3;
		bool bVar4;
		float fVar5;
		Vector3 UVar6;
		Vector3 UVar7;
		float local_38;

		bVar4 = ((Object)human != null);
		if (bVar4) {
			bVar4 = ((Object)human != (Object)this);
			if (bVar4) {
				if (human == null) {
	label_05bc385f: ;
					throw new NullReferenceException();
				}
				if (((human.Dead == false) && (human.FinishSetup != false)) &&(human.CarryState == 0)) {
					pCVar1 = human.Carrier;
					bVar4 = ((Object)pCVar1 == null);
					if (bVar4) {
						pCVar1 = human.BackHuman;
						bVar4 = ((Object)pCVar1 == null);
						if (bVar4) {
							b = this.Team;
							bVar4 = TeamInfo.SameTeam((BaseCharacter)human, b);
							if (bVar4) {
								pUVar2 = human.Cache;
								if ((pUVar2 != null) &&(pUVar3 = pUVar2.Transform, pUVar3 != null)) {
									UVar6 = pUVar3.position;
									pUVar2 = this.Cache;
									if ((pUVar2 != null) &&(pUVar3 = pUVar2.Transform, pUVar3 != null)) {
										UVar7 = pUVar3.position;
										local_38 = UVar6.x;
										fVar5 = (float)il2cpp_runtime_helper_05956b50(local_38, UVar6.z, UVar7.x, UVar7.z, 0);
										return fVar5 < distance;
									}
								}
								goto label_05bc385f;
							}
						}
					}
				}
			}
		}
		return false;
	}

	[Token(Token = "0x6004128")]
	[Address(RVA = "0x5AC3870", Offset = "0x5AC2870", VA = "0x5AC3870")]
	public bool IsCarryable(Human human)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$IsCarryable): clean
		Human pCVar1;
		bool bVar2;

		bVar2 = ((Object)human != null);
		if (bVar2) {
			bVar2 = ((Object)human != (Object)this);
			if (bVar2) {
				if (human == null) {
					throw new NullReferenceException();
				}
				if (human.CarryState == 0) {
					pCVar1 = human.Carrier;
					bVar2 = ((Object)pCVar1 == null);
					if (bVar2) {
						pCVar1 = human.BackHuman;
						bVar2 = ((Object)pCVar1 == null);
						return bVar2;
					}
				}
			}
		}
		return false;
	}

	[Token(Token = "0x6004129")]
	[Address(RVA = "0x5AC2C90", Offset = "0x5AC1C90", VA = "0x5AC2C90")]
	private bool IsCarryableBy(Human initiator)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$IsCarryableBy): 1 lines keep C-only constructs
		Human pCVar1;
		BaseComponentCache pUVar2;
		Transform pUVar3;
		bool bVar4;
		bool bVar5;
		bool bVar6;
		float fVar7;
		Vector3 UVar8;
		Vector3 UVar9;
		float local_48;

		bVar4 = ((Object)initiator == null);
		if (bVar4) {
			return false;
		}
		if (initiator != null) {
			if (initiator.Dead != false) {
				return false;
			}
			if (this.Dead != false) {
				return false;
			}
			if (this.FinishSetup == false) {
				return false;
			}
			bVar4 = false;
			if (initiator.FinishSetup == false) {
				return false;
			}
			if (this.CarryState == 0) {
				pCVar1 = this.Carrier;
				bVar4 = false;
				bVar5 = ((Object)pCVar1 == null);
				if (bVar5) {
					pCVar1 = this.BackHuman;
					bVar4 = ((Object)pCVar1 == null);
				}
			}
			bVar5 = false;
			if (initiator.CarryState == 0) {
				pCVar1 = initiator.Carrier;
				bVar5 = false;
				bVar6 = ((Object)pCVar1 == null);
				if (bVar6) {
					pCVar1 = initiator.BackHuman;
					bVar5 = ((Object)pCVar1 == null);
				}
			}
			pUVar2 = initiator.Cache;
			if ((pUVar2 != null) &&(pUVar3 = pUVar2.Transform, pUVar3 != null)) {
				UVar8 = pUVar3.position;
				pUVar2 = this.Cache;
				if ((pUVar2 != null) &&(pUVar3 = pUVar2.Transform, pUVar3 != null)) {
					UVar9 = pUVar3.position;
					local_48 = UVar8.x;
					fVar7 = (float)il2cpp_runtime_helper_05956b50(local_48, UVar8.z, UVar9.x, UVar9.z, 0);
					return (bool)(fVar7 < 125.0 & bVar5 & bVar4);
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600412A")]
	[Address(RVA = "0x5ABD320", Offset = "0x5ABC320", VA = "0x5ABD320")]
	public Human GetCarryOption(float distance)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$GetCarryOption): 17 lines keep C-only constructs
		uint uVar1;
		InGameManager pGVar2;
		HashSet<object> __this_00;
		BaseComponentCache pUVar3;
		Transform pUVar4;
		Ray ray;
		object pIVar5;
		bool bVar6;
		Human pCVar7;
		float fVar8;
		float __x;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		Vector3 UVar9;
		System_Collections_Generic_HashSet_Enumerator_T__o local_b8;
		byte[] local_a0 = new byte[16];
		Human local_90;
		byte[] local_88 = new byte[16];
		float local_78;
		float local_68;
		byte[] local_58 = new byte[16];
		Ray local_48;

		local_b8._set = null;
		local_b8._index = 0;
		local_b8._version = 0;
		local_b8._current = null;
		pCVar7 = this;
		local_48 = this.GetAimRayAfterHumanCheap();
		ray.m_Origin.z = local_48.m_Origin.z;
		ray.m_Direction.x = local_48.m_Direction.x;
		ray.m_Origin.x = local_48.m_Origin.x;
		ray.m_Origin.y = local_48.m_Origin.y;
		ray.m_Direction.y = local_48.m_Direction.y;
		ray.m_Direction.z = local_48.m_Direction.z;
		pCVar7 = this.GetHumanAlongRay(ray, distance);
		bVar6 = this.IsValidCarryTarget(pCVar7, distance);
		if (!bVar6) {
			pGVar2 = this._inGameManager;
			if ((pGVar2 == null) ||(__this_00 = (HashSet<object>)pGVar2.Humans, __this_00 == null)) {
				throw new NullReferenceException();
			}
			local_a0.GetEnumerator(__this_00);
			local_b8._current = (object)local_90;
			local_b8._set = (HashSet<T>)local_a0._0_8_;
			local_b8._index = local_a0._8_4_;
			local_b8._version = local_a0._12_4_;
			local_a0._0_8_ = null;
			local_a0._8_8_ = &local_b8;
			fVar8 = INFINITY;
			pCVar7 = null;
			while (true) {
				bVar6 = local_b8.MoveNext();
				pIVar5 = local_b8._current;
				if (!(bVar6)) break;
				bVar6 = this.IsValidCarryTarget((Human)local_b8._current, distance);
				if (bVar6) {
					pUVar3 = this.Cache;
					if (pUVar3 == null) {
						throw new NullReferenceException();
					}
					pUVar4 = pUVar3.Transform;
					if (pUVar4 == null) {
						throw new NullReferenceException();
					}
					UVar9 = pUVar4.position;
					local_68 = UVar9.z;
					local_58._8_4_ = extraout_XMM0_Dc;
					local_58._0_8_ = UVar9._0_8_;
					local_58._12_4_ = extraout_XMM0_Dd;
					if ((Human)pIVar5 == null) {
						throw new NullReferenceException();
					}
					pUVar3 = ((Human)((long)pIVar5 + 0x10)).Cache;
					if (pUVar3 == null) {
						throw new NullReferenceException();
					}
					pUVar4 = pUVar3.Transform;
					if (pUVar4 == null) {
						throw new NullReferenceException();
					}
					UVar9 = pUVar4.position;
					local_78 = UVar9.z;
					local_88._8_4_ = extraout_XMM0_Dc_00;
					local_88._0_8_ = UVar9._0_8_;
					local_88._12_4_ = extraout_XMM0_Dd_00;
					if (Il2CppMethodInitialized_0753e7b7 == false) {
						Il2CppMethodInitialized_0753e7b7 = true;
						uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					__x = ((float)local_58._4_4_ - (float)local_88._4_4_) *((float)local_58._4_4_ - (float)local_88._4_4_) +((float)local_58._0_4_ - (float)local_88._0_4_) *((float)local_58._0_4_ - (float)local_88._0_4_) + (local_68 - local_78) * (local_68 - local_78);
					if (0.0 <= __x) {
						if (SQRT(__x) < fVar8) {
							fVar8 = SQRT(__x);
							pCVar7 = (Human)pIVar5;
						}
					}
					else {
						fVar8 = sqrtf(__x);
						pCVar7 = (Human)pIVar5;
					}
				}
			}
			local_b8.Dispose();
		}
		return pCVar7;
	}

	[Token(Token = "0x600412B")]
	[Address(RVA = "0x5ABD650", Offset = "0x5ABC650", VA = "0x5ABD650")]
	public void StartCarrySpecial(Human target)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$StartCarrySpecial): 5 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		PhotonView pPVar2;
		ulong in_RAX;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		ulong uStack_28;

		uStack_28 = in_RAX;
		this.ClearAllActionsForSpecial();
		if ((target != null) &&(pUVar1 = target.Cache, pUVar1 != null)) {
			__this_00 = pUVar1.PhotonView;
			parameters = (Object[])new object[1];
			pUVar1 = this.Cache;
			if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
				uStack_28 = CONCAT44(pPVar2.viewIdField, (undefined4)uStack_28);
				pIVar3 = (object)(((long)&uStack_28 + 4));
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
					if (__this_00 != null) {
						__this_00.RPC("CarryRPC", 0, parameters);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600412C")]
	[Address(RVA = "0x5ABD240", Offset = "0x5ABC240", VA = "0x5ABD240")]
	public void StopCarrySpecial()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$StopCarrySpecial): clean
		Human pCVar1;
		BaseComponentCache pUVar2;
		PhotonView __this_00;
		bool bVar3;
		Object[] parameters;

		this.ClearAllActionsForSpecial();
		pCVar1 = this.BackHuman;
		bVar3 = ((Object)pCVar1 != null);
		if (bVar3) {
			pCVar1 = this.BackHuman;
			if ((pCVar1 != null) &&(pUVar2 = pCVar1.Cache, pUVar2 != null)) {
				__this_00 = pUVar2.PhotonView;
				parameters = (Object[])new object[0];
				if (__this_00 != null) {
					__this_00.RPC("UncarryRPC", 0, parameters);
					return;
				}
			}
			throw new NullReferenceException();
		}
		return;
	}

	[Token(Token = "0x600412D")]
	[Address(RVA = "0x5AC3960", Offset = "0x5AC2960", VA = "0x5AC3960")]
	public void ClearAllActionsForSpecial()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ClearAllActionsForSpecial): clean
		HookUseable pCVar1;

		this.CancelHookBothKey = true;
		this.CancelHookLeftKey = true;
		this.CancelHookRightKey = true;
		pCVar1 = this.HookLeft;
		if (pCVar1 != null) {
			pCVar1.SetInput(false);
			pCVar1 = this.HookRight;
			if (pCVar1 != null) {
				pCVar1.SetInput(false);
				pCVar1 = this.HookLeft;
				if (pCVar1 != null) {
					pCVar1.DisableAnyHook();
					pCVar1 = this.HookRight;
					if (pCVar1 != null) {
						pCVar1.DisableAnyHook();
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600412E")]
	[Address(RVA = "0x5AC39E0", Offset = "0x5AC29E0", VA = "0x5AC39E0")]
	public void SpecialActionState(float time)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$SpecialActionState): clean
		if ((this._state & 0xfffffffeU) == 2) {
			this._dashTimeLeft = 0.0;
		}
		this._state = 10;
		this._stateTimeLeft = time;
		return;
	}

	[Token(Token = "0x600412F")]
	[Address(RVA = "0x5AC3A10", Offset = "0x5AC2A10", VA = "0x5AC3A10")]
	public void TransformShifter(string shifter, float liveTime)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$TransformShifter): 8 lines keep C-only constructs
		byte bVar1;
		BaseComponentCache pUVar2;
		Transform pUVar3;
		InGameManager pGVar4;
		BaseCharacter pCVar5;
		HumanStats pCVar6;
		PhotonView pPVar7;
		String key;
		Player player;
		object value;
		GameObject targetGo;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		Vector3 UVar8;
		Vector3 UVar9;
		Vector3 euler;
		int local_4c;
		byte[] local_48 = new byte[16];
		Quaternion local_30;

		pUVar2 = this.Cache;
		if ((pUVar2 != null) &&(pUVar3 = pUVar2.Transform, pUVar3 != null)) {
			pGVar4 = this._inGameManager;
			UVar8 = pUVar3.position;
			pUVar2 = this.Cache;
			if (pUVar2 != null) {
				local_48._8_4_ = extraout_XMM0_Dc;
				local_48._0_8_ = UVar8._0_8_;
				local_48._12_4_ = extraout_XMM0_Dd;
				pUVar3 = pUVar2.Transform;
				if (pUVar3 != null) {
					local_30 = pUVar3.rotation;
					UVar9 = Quaternion.Internal_ToEulerRad(ref local_30);
					euler.x = UVar9.x * 57.29578;
					euler.y = UVar9.y * 57.29578;
					euler.z = UVar9.z * 57.29578;
					UVar9 = Quaternion.Internal_MakePositive(euler);
					if (pGVar4 != null) {
						UVar8.z = UVar8.z;
						UVar8.x = (float)local_48._0_4_;
						UVar8.y = (float)local_48._4_4_;
						pGVar4.SpawnPlayerShifterAt(shifter, liveTime, UVar8, UVar9.y);
						pGVar4 = this._inGameManager;
						if ((pGVar4 != null) &&(pCVar5 = pGVar4.CurrentCharacter, pCVar5 != null)) {
							bVar1 = (typeof(BaseShifter)._2).typeHierarchyDepth;
							if (((pCVar5.klass._2).typeHierarchyDepth < bVar1) ||((pCVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(BaseShifter))) {
								throw new InvalidCastException();
							}
							pCVar6 = this.Stats;
							if (pCVar6 != null) {
								*(float)((long)&(*(ulong)((sbyte)pCVar5 + 0x298)) + 4) = pCVar6.CurrentGas;
								(*(ulong)((sbyte)pCVar5 + 0x2a0)) =(List<BaseUseable>)this.Weapon;
								player = PhotonNetwork.LocalPlayer;
								pUVar2 = pCVar5.Cache;
								if ((pUVar2 != null) &&(pPVar7 = pUVar2.PhotonView, pPVar7 != null)) {
									key = PlayerProperty.CharacterViewId;
									local_4c = pPVar7.viewIdField;
									value = (object)local_4c;
									PhotonExtensions.SetCustomProperty(player, key, value);
									targetGo = this.gameObject;
									PhotonNetwork.Destroy(targetGo);
									return;
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004130")]
	[Address(RVA = "0x5AC3C60", Offset = "0x5AC2C60", VA = "0x5AC3C60")]
	[IteratorStateMachine(typeof(_003CWaitAndTransformFromShifter_003Ed__203))]
	public IEnumerator WaitAndTransformFromShifter(float previousHumanGas, BaseUseable previousHumanWeapon)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$WaitAndTransformFromShifter): clean
		Human.d__203<WaitAndTransformFromShifter> __this_00;

		__this_00 = new Human.d__203<WaitAndTransformFromShifter>(0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		__this_00.previousHumanGas = previousHumanGas;
		__this_00.previousHumanWeapon = previousHumanWeapon;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004132")]
	[Address(RVA = "0x5AC3D60", Offset = "0x5AC2D60", VA = "0x5AC3D60")]
	public void Reload()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$Reload): 7 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		BaseUseable obj;
		HumanSetup pCVar3;
		InGameSet pSVar4;
		InGameMiscSettings pSVar5;
		BoolSetting pSVar6;
		Il2CppClass pIVar7;
		Il2CppClass* ppIVar8;
		BaseMenu obj_00;
		object pIVar9;

		if (Il2CppMethodInitialized_07547562 == false) {
			Il2CppMethodInitialized_07547562 = true;
			if (Il2CppMethodInitialized_07547561 != false) goto label_05bc3d7d;
	label_05bc3e06: ;
			Il2CppMethodInitialized_07547561 = true;
			obj = this.Weapon;
		}
		else {
			if (Il2CppMethodInitialized_07547561 == false) goto label_05bc3e06;
	label_05bc3d7d: ;
			obj = this.Weapon;
		}
		if (obj != null) {
			bVar1 = ((typeof(UnarmedWeapon))._2).typeHierarchyDepth;
			if ((bVar1 <= (((Il2CppClass)obj.klass)._2).typeHierarchyDepth) &&((((Il2CppClass)obj.klass)._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(UnarmedWeapon))) {
				return;
			}
		}
		pCVar3 = this.Setup;
		if (pCVar3 == null) goto label_05bc4062;
		if ((pCVar3.Weapon | 2U) == 3) {
			pSVar4 = SettingsManager.InGameCurrent;
			if (((pSVar4 == null) ||(pSVar5 = pSVar4.Misc, pSVar5 == null)) ||(pSVar6 = pSVar5.GunsAirReload, pSVar6 == null)) goto label_05bc4062;
			if ((pSVar6._value == false) && (this.Grounded == false)) {
				return;
			}
		}
		if (this._needFinishReload != false) {
			return;
		}
		if (0.0 < this._reloadCooldownLeft) {
			return;
		}
		if (obj != null) {
			pIVar7 = (Il2CppClass)obj.klass;
			bVar1 = (pIVar7._2).typeHierarchyDepth;
			bVar2 = ((typeof(AmmoWeapon))._2).typeHierarchyDepth;
			if ((bVar1 < bVar2) ||(ppIVar8 = (pIVar7._2).typeHierarchy, ppIVar8[(ulong)bVar2 - 1] != typeof(AmmoWeapon))) {
				bVar2 = ((typeof(BladeWeapon))._2).typeHierarchyDepth;
				if ((bVar2 <= bVar1) &&((pIVar7._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(BladeWeapon))) {
					pIVar9 = il2cpp_codegen_is_inst_class((object)obj, typeof(BladeWeapon));
					if (pIVar9 == null) goto label_05bc4062;
					if ((*(int)&pIVar9[4].monitor < 1) && (*(float)&pIVar9[4].klass <= 0.0)) {
						return;
					}
					this.ToggleBlades(false);
				}
			}
			else {
				if (*(int)&(*(ulong)((sbyte)obj + 0x40)) < 1) {
					return;
				}
				bVar2 = ((typeof(AHSSWeapon))._2).typeHierarchyDepth;
				if ((bVar1 < bVar2) ||(ppIVar8[(long)&((MethodInfo)(ulong)bVar2)[-1].field_0x57] !=typeof(AHSSWeapon))) {
					bVar2 = ((typeof(ThunderspearWeapon))._2).typeHierarchyDepth;
					if ((bVar1 < bVar2) ||(ppIVar8[(ulong)bVar2 - 1] != typeof(ThunderspearWeapon))) goto label_05bc3fd8;
					this.SetThunderspears(false, false);
				}
				else {
					this.ToggleBlades(false);
				}
				this.CancelHookLeftKey = true;
				this.CancelHookRightKey = true;
				this.CancelHookBothKey = true;
			}
		}
	label_05bc3fd8: ;
		this.PlayWeaponSwapSound();
		this.PlayWeaponSwapAnimation();
		this._needFinishReload = true;
		if (this.AI != false) {
			return;
		}
		obj_00 = UIManager.CurrentMenu;
		pIVar9 = il2cpp_codegen_is_inst_class((object)obj_00, typeof(InGameMenu));
		if (pIVar9 != null) {
			pIVar9 = il2cpp_codegen_is_inst_class((object)obj_00, typeof(InGameMenu));
			if (pIVar9[0xb].monitor != null) {
				pIVar9[0xb].monitor.Reload();
				return;
			}
		}
	label_05bc4062: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004133")]
	[Address(RVA = "0x5AC4180", Offset = "0x5AC3180", VA = "0x5AC4180")]
	private void PlayWeaponSwapSound()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$PlayWeaponSwapSound): 6 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		BaseUseable pCVar3;
		BaseUseable pCVar4;
		String* ppSVar5;

		pCVar3 = this.Weapon;
		if (pCVar3 != null) {
			pCVar4 = pCVar3.klass;
			bVar1 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
			if ((bVar1 <= (pCVar4._2).typeHierarchyDepth) &&((pCVar4._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(AmmoWeapon))) {
				ppSVar5 = &HumanSounds.GunReload;
				goto label_05bc4256;
			}
		}
		uVar2 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		if (this.Grounded == false) {
			if (uVar2 == 0) {
			}
			ppSVar5 = &HumanSounds.BladeReloadAir;
		}
		else {
			if (uVar2 == 0) {
			}
			ppSVar5 = &HumanSounds.BladeReloadGround;
		}
	label_05bc4256: ;
		this.PlaySound(*ppSVar5);
		return;
	}

	[Token(Token = "0x6004134")]
	[Address(RVA = "0x5AC4270", Offset = "0x5AC3270", VA = "0x5AC4270")]
	private void PlayWeaponSwapAnimation()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$PlayWeaponSwapAnimation): 1 lines keep C-only constructs
		bool bVar1;
		uint uVar2;
		HumanSetup pCVar3;
		AnimationHandler __this_00;
		long lVar4;
		float fVar5;

		pCVar3 = this.Setup;
		if (pCVar3 != null) {
			bVar1 = this.Grounded;
			uVar2 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			if (pCVar3.Weapon - 1U < 3) {
				if (bVar1 == false) {
					if (uVar2 == 0) {
					}
					lVar4 = 0x118;
				}
				else {
					if (uVar2 == 0) {
					}
					lVar4 = 0x110;
				}
			}
			else if (bVar1 == false) {
				if (uVar2 == 0) {
				}
				lVar4 = 0xc0;
			}
			else {
				if (uVar2 == 0) {
				}
				lVar4 = 0xb8;
			}
			this._reloadAnimation = *(String*)((long)&HumanAnimations.HorseMount + lVar4);
			this.CrossFade(this._reloadAnimation, 0.1, 0.0);
			if ((this._state & 0xfffffffeU) == 2) {
				this._dashTimeLeft = 0.0;
			}
			this._state = 4;
			__this_00 = this.Animation;
			if (__this_00 != null) {
				fVar5 = __this_00.GetTotalTime(this._reloadAnimation);
				this._stateTimeLeft = fVar5;
				this._reloadTimeLeft = fVar5;
				this._reloadCooldownLeft = fVar5 + 0.5;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004135")]
	[Address(RVA = "0x5AC43C0", Offset = "0x5AC33C0", VA = "0x5AC43C0")]
	private bool WeaponSwapAnimationDone()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$WeaponSwapAnimationDone): 3 lines keep C-only constructs
		byte bVar1;
		AnimationHandler __this_00;
		BaseUseable pCVar2;
		BaseUseable pCVar3;
		bool bVar4;
		bool bVar5;
		float fVar6;

		if (this._reloadTimeLeft <= 0.0) {
			return true;
		}
		__this_00 = this.Animation;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		fVar6 = __this_00.GetNormalizedTime(this._reloadAnimation);
		pCVar2 = this.Weapon;
		if (pCVar2 != null) {
			pCVar3 = pCVar2.klass;
			bVar1 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
			if ((bVar1 <= (pCVar3._2).typeHierarchyDepth) &&((pCVar3._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BladeWeapon))) {
				bVar5 = fVar6 == *(float)(&g_data_0100aed8 + (ulong)(this.Grounded == false) * 4);
				bVar4 = fVar6 < *(float)(&g_data_0100aed8 + (ulong)(this.Grounded == false) * 4);
				goto label_05bc4445;
			}
		}
		bVar5 = fVar6 == 0.62;
		bVar4 = fVar6 < 0.62;
	label_05bc4445: ;
		return !bVar4 && !bVar5;
	}

	[Token(Token = "0x6004136")]
	[Address(RVA = "0x5AC4470", Offset = "0x5AC3470", VA = "0x5AC4470")]
	public bool CanSheathe()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$CanSheathe): 1 lines keep C-only constructs
		byte bVar1;
		BaseUseable pCVar2;

		if (this.FinishSetup == false) {
			return false;
		}
		if (this.Dead != false) {
			return false;
		}
		pCVar2 = this.Weapon;
		if (pCVar2 == null) {
			return false;
		}
		if (Il2CppMethodInitialized_07547561 == false) {
			Il2CppMethodInitialized_07547561 = true;
			pCVar2 = this.Weapon;
			if (pCVar2 == null) goto label_05bc44e5;
		}
		bVar1 = (typeof(UnarmedWeapon)._2).typeHierarchyDepth;
		if ((bVar1 <= (pCVar2.klass._2).typeHierarchyDepth) &&((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(UnarmedWeapon)) ) {
			return false;
		}
	label_05bc44e5: ;
		if ((((this._state == 0) && (this.MountState != 2)) &&(this.CarryState != 1)) &&((this._needFinishReload == false && (this._needFinishSheatheSwap == false)))) {
			return this._reloadCooldownLeft <= 0.0;
		}
		return false;
	}

	[Token(Token = "0x6004137")]
	[Address(RVA = "0x5AC4530", Offset = "0x5AC3530", VA = "0x5AC4530")]
	public void ToggleSheathe()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ToggleSheathe): clean


		this.SetSheathed(this.Sheathed == false);
		return;
	}

	[Token(Token = "0x6004138")]
	[Address(RVA = "0x5AC4550", Offset = "0x5AC3550", VA = "0x5AC4550")]
	public void SetSheathed(bool sheathed)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$SetSheathed): 3 lines keep C-only constructs
		byte bVar1;
		HumanSetup pCVar2;
		Object pUVar3;
		GameObject pUVar4;
		BaseComponentCache pUVar5;
		PhotonView __this_00;
		bool bVar6;
		bool bVar7;
		BaseUseable pCVar8;
		Object[] parameters;
		object pIVar9;
		object pIVar10;
		MethodInfo method_00;
		byte local_29;

		bVar6 = this.IsMine();
		if (!bVar6) {
			return;
		}
		if (this.Sheathed == sheathed) {
			return;
		}
		if (this.FinishSetup == false) {
			return;
		}
		if (this.Dead != false) {
			return;
		}
		pCVar8 = this.Weapon;
		if (pCVar8 == null) {
			return;
		}
		if (Il2CppMethodInitialized_07547561 == false) {
			Il2CppMethodInitialized_07547561 = true;
			pCVar8 = this.Weapon;
			if (pCVar8 != null) goto label_05bc4611;
			pCVar8 = null;
		}
		else {
	label_05bc4611: ;
			bVar1 = (typeof(UnarmedWeapon)._2).typeHierarchyDepth;
			if ((bVar1 <= (pCVar8.klass._2).typeHierarchyDepth) &&((pCVar8.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(UnarmedWeapon))) {
				return;
			}
		}
		if (((((this._state != 0) || (this.MountState == 2)) ||(this.CarryState == 1)) ||((this._needFinishReload != false || (this._needFinishSheatheSwap != false)))) || (0.0 < this._reloadCooldownLeft)) {
			return;
		}
		if ((sheathed) && (pCVar8 != null)) {
			bVar1 = (typeof(ThunderspearWeapon)._2).typeHierarchyDepth;
			if ((bVar1 <= (pCVar8.klass._2).typeHierarchyDepth) &&((pCVar8.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(ThunderspearWeapon))) {
				pCVar2 = this.Setup;
				if (pCVar2 == null) goto label_05bc486d;
				pUVar3 = (Object)pCVar2._part_blade_l;
				bVar7 = false;
				bVar6 = (pUVar3 != null);
				if (bVar6) {
					pCVar2 = this.Setup;
					if ((pCVar2 == null) ||(pUVar4 = pCVar2._part_blade_l, pUVar4 == null)) goto label_05bc486d;
					bVar7 = pUVar4.activeSelf;
				}
				this._sheathedTsLeft = bVar7;
				pCVar2 = this.Setup;
				if (pCVar2 == null) goto label_05bc486d;
				pUVar3 = (Object)pCVar2._part_blade_r;
				bVar7 = false;
				bVar6 = (pUVar3 != null);
				if (bVar6) {
					pCVar2 = this.Setup;
					if ((pCVar2 == null) ||(pUVar4 = pCVar2._part_blade_r, pUVar4 == null)) goto label_05bc486d;
					bVar7 = pUVar4.activeSelf;
				}
				this._sheathedTsRight = bVar7;
			}
		}
		pUVar5 = this.Cache;
		if (pUVar5 != null) {
			__this_00 = pUVar5.PhotonView;
			parameters = (Object[])new object[1];
			local_29 = sheathed;
			pIVar9 = (object)local_29;
			if (parameters != null) {
				if ((pIVar9 != null) &&(pIVar10 = il2cpp_vm_Object_IsInst(pIVar9, (((parameters.obj).klass)._1).element_class), pIVar10 == null)) {
					pIVar9 = new ArrayTypeMismatchException();
					throw pIVar9;
				}
				if ((int)parameters.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				parameters[0] = pIVar9;
				if (__this_00 != null) {
					method_00 = (MethodInfo *)"SetSheathedRPC";
					__this_00.RPC("SetSheathedRPC", 0, parameters);
					this.PlayWeaponSwapSound();
					this.PlayWeaponSwapAnimation();
					this._needFinishSheatheSwap = true;
					return;
				}
			}
		}
	label_05bc486d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004139")]
	[Address(RVA = "0x5AC4890", Offset = "0x5AC3890", VA = "0x5AC4890")]
	[PunRPC]
	protected void SetSheathedRPC(bool sheathed, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$SetSheathedRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;

		if (info.Sender != null) {
			pUVar1 = this.Cache;
			if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) {
				throw new NullReferenceException();
			}
			if (info.Sender != pPVar2._Owner_k__BackingField) {
				return;
			}
		}
		this.Sheathed = sheathed;
		return;
	}

	[Token(Token = "0x600413A")]
	[Address(RVA = "0x5AC48D0", Offset = "0x5AC38D0", VA = "0x5AC48D0")]
	public void RefreshWeaponVisibility()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$RefreshWeaponVisibility): 3 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		BaseUseable pCVar3;
		BaseUseable pCVar4;
		MethodInfo method_00;
		bool bVar5;

		pCVar3 = this.Weapon;
		if (pCVar3 == null) {
			return;
		}
		pCVar4 = pCVar3.klass;
		bVar1 = (pCVar4._2).typeHierarchyDepth;
		bVar2 = (typeof(ThunderspearWeapon)._2).typeHierarchyDepth;
		if ((bVar2 <= bVar1) &&((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(ThunderspearWeapon))) {
			if (this.Sheathed == false) {
				method_00 = (MethodInfo)CONCAT71((int7)((ulong)pCVar4 >> 8), this._sheathedTsRight != false);
				bVar5 = this._sheathedTsLeft != false;
			}
			else {
				bVar5 = false;
				method_00 = null;
			}
			this.SetThunderspears(bVar5, SUB81(method_00, 0));
			return;
		}
		bVar2 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
		if ((bVar1 < bVar2) ||((pCVar4._2).typeHierarchy[(ulong)bVar2 - 1] != typeof(BladeWeapon))) {
			bVar5 = this.Sheathed == false;
		}
		else if (this.Sheathed == false) {
			bVar5 = 0.0 < *(float)&(*(ulong)((sbyte)pCVar3 + 0x40));
		}
		else {
			bVar5 = false;
		}
		this.ToggleBlades(bVar5);
		return;
	}

	[Token(Token = "0x600413B")]
	[Address(RVA = "0x5AC49E0", Offset = "0x5AC39E0", VA = "0x5AC49E0")]
	protected void FinishSheatheSwap()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$FinishSheatheSwap): clean
		this._needFinishSheatheSwap = false;
		this.RefreshWeaponVisibility();
		return;
	}

	[Token(Token = "0x600413C")]
	[Address(RVA = "0x5AC49F0", Offset = "0x5AC39F0", VA = "0x5AC49F0")]
	private void ResetSheatheState()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ResetSheatheState): 4 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		bool bVar2;
		ulong in_RAX;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		ulong uStack_28;

		uStack_28 = in_RAX;
		this._needFinishSheatheSwap = false;
		this._sheathedTsLeft = false;
		this._sheathedTsRight = false;
		if (this.Sheathed != false) {
			bVar2 = this.IsMine();
			if (bVar2) {
				pUVar1 = this.Cache;
				if (pUVar1 != null) {
					__this_00 = pUVar1.PhotonView;
					parameters = (Object[])new object[1];
					uStack_28 = uStack_28 & 0xffffffffffffff;
					pIVar3 = (object)(((long)&uStack_28 + 7));
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
						if (__this_00 != null) {
							__this_00.RPC("SetSheathedRPC", 0, parameters);
							goto label_05bc4afa;
						}
					}
				}
				throw new NullReferenceException();
			}
		}
	label_05bc4afa: ;
		this.Sheathed = false;
		return;
	}

	[Token(Token = "0x600413D")]
	[Address(RVA = "0x5AC4B30", Offset = "0x5AC3B30", VA = "0x5AC4B30")]
	protected void FinishReload()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$FinishReload): clean
		code cVar1;
		code cVar2;
		BaseUseable pCVar3;
		MethodInfo method_00;
		Il2CppMethodPointer pIVar4;
		APGWeapon method_01;

		if (this._needFinishReload != false) {
			this._needFinishReload = false;
			pCVar3 = this.Weapon;
			if (pCVar3 == null) {
				throw new NullReferenceException();
			}
			pCVar3.Reload();
			method_00 = (MethodInfo)this.Weapon;
			if (method_00 != null) {
				pIVar4 = method_00.methodPointer;
				cVar1 = pIVar4[0x130];
				cVar2 = (code)(typeof(BladeWeapon)._2).typeHierarchyDepth;
				if (((byte)cVar2 <= (byte)cVar1) &&(*(BladeWeapon*)(*(long)(pIVar4 + 200) + -8 + (ulong)(byte)cVar2 * 8) == typeof(BladeWeapon))) {
					this.ToggleBlades(0.0 < *(float)&(method_00.field8_0x40).genericMethod);
					return;
				}
				cVar2 = (code)(typeof(AHSSWeapon)._2).typeHierarchyDepth;
				if ((((byte)cVar2 <= (byte)cVar1) &&(method_01 = (APGWeapon)typeof(AHSSWeapon), *(AHSSWeapon*)(*(long)(pIVar4 + 200) + -8 + (ulong)(byte)cVar2 * 8) == typeof(AHSSWeapon))) ||((cVar2 = (code)(typeof(APGWeapon)._2).typeHierarchyDepth, (byte)cVar2 <= (byte)cVar1 &&(method_01 = typeof(APGWeapon), *(APGWeapon*)(*(long)(pIVar4 + 200) + -8 + (ulong)(byte)cVar2 * 8) == typeof(APGWeapon))))) {
					this.ToggleBlades(true);
					return;
				}
				cVar2 = (code)(typeof(ThunderspearWeapon)._2).typeHierarchyDepth;
				if ((byte)cVar1 < (byte)cVar2) {
					return;
				}
				if (*(ThunderspearWeapon*)(*(long)(pIVar4 + 200) + -8 + (ulong)(byte)cVar2 * 8) == typeof(ThunderspearWeapon)) {
					this.SetThunderspears(true, true);
					return;
				}
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600413E")]
	[Address(RVA = "0x5AC4CA0", Offset = "0x5AC3CA0", VA = "0x5AC4CA0")]
	public bool Refill()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$Refill): 6 lines keep C-only constructs
		bool bVar1;
		byte bVar2;
		BaseUseable pCVar3;
		BaseUseable pCVar4;
		AnimationHandler __this_00;
		MethodInfo in_RDX;
		MethodInfo extraout_RDX_00;
		float fVar5;

		bVar1 = this.IsRefillable;
		if (bVar1 != false) {
			if ((this._state & 0xfffffffeU) == 2) {
				this._dashTimeLeft = 0.0;
			}
			this._state = 5;
			pCVar3 = this.Special;
			if (pCVar3 != null) {
				pCVar4 = pCVar3.klass;
				bVar2 = (typeof(SupplySpecial)._2).typeHierarchyDepth;
				in_RDX = (MethodInfo)(ulong)bVar2;
				if ((bVar2 <= (pCVar4._2).typeHierarchyDepth) &&((pCVar4._2).typeHierarchy[(long)&in_RDX[-1].field_0x57] ==typeof(SupplySpecial))) {
					pCVar3.Reset();
					in_RDX = extraout_RDX_00;
				}
			}
			this.ToggleSparks(false);
			this.CrossFade(HumanAnimations.Refill, 0.1, 0.0);
			this.PlaySound(HumanSounds.Refill);
			__this_00 = this.Animation;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			fVar5 = __this_00.GetTotalTime(HumanAnimations.Refill) ;
			this._stateTimeLeft = fVar5;
		}
		return bVar1;
	}

	[Token(Token = "0x600413F")]
	[Address(RVA = "0x5AC4E10", Offset = "0x5AC3E10", VA = "0x5AC4E10")]
	public bool SupplySpawnableRefill()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$SupplySpawnableRefill): clean
		bool bVar1;
		AnimationHandler __this_00;
		float fVar2;

		bVar1 = this.IsRefillable;
		if (bVar1 != false) {
			if ((this._state & 0xfffffffeU) == 2) {
				this._dashTimeLeft = 0.0;
			}
			this._state = 5;
			this.ToggleSparks(false);
			this.CrossFade(HumanAnimations.Refill, 0.1, 0.0);
			this.PlaySound(HumanSounds.Refill);
			__this_00 = this.Animation;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			fVar2 = __this_00.GetTotalTime(HumanAnimations.Refill) ;
			this._stateTimeLeft = fVar2;
		}
		return bVar1;
	}

	[Token(Token = "0x6004140")]
	[Address(RVA = "0x5AC4F30", Offset = "0x5AC3F30", VA = "0x5AC4F30")]
	public bool NeedRefill(bool isGasTank)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$NeedRefill): 5 lines keep C-only constructs
		float pfVar1;
		int piVar2;
		float fVar3;
		byte bVar4;
		byte bVar5;
		HumanStats pCVar6;
		BaseUseable pCVar7;
		AmmoWeapon __this_00;
		AmmoWeapon pCVar8;
		bool bVar9;

		pCVar6 = this.Stats;
		if (pCVar6 == null) {
			throw new NullReferenceException();
		}
		fVar3 = pCVar6.MaxGas;
		pfVar1 = &pCVar6.CurrentGas;
		if (fVar3 < *pfVar1 || fVar3 == *pfVar1) {
			if ((isGasTank) && (pCVar7 = this.Special, pCVar7 != null)) {
				bVar4 = (typeof(SupplySpecial)._2).typeHierarchyDepth;
				if ((bVar4 <= (pCVar7.klass._2).typeHierarchyDepth) &&(((pCVar7.klass._2).typeHierarchy[(ulong)bVar4 - 1] ==typeof(SupplySpecial) && (pCVar7.UsesLeft < 1)))) {
					return true;
				}
			}
			__this_00 = (AmmoWeapon)this.Weapon;
			if (__this_00 != null) {
				pCVar8 = __this_00.klass;
				bVar4 = (pCVar8._2).typeHierarchyDepth;
				bVar5 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
				if ((bVar5 <= bVar4) &&((pCVar8._2).typeHierarchy[(ulong)bVar5 - 1] == typeof(BladeWeapon))) {
					if (__this_00.RoundLeft < __this_00.MaxRound) {
						return true;
					}
					fVar3 = (float)__this_00.MaxAmmo;
					piVar2 = &__this_00.AmmoLeft;
					return (float)*piVar2 <= fVar3 && fVar3 != (float)*piVar2;
				}
				bVar5 = (typeof(AmmoWeapon)._2).typeHierarchyDepth;
				if ((bVar5 <= bVar4) &&((pCVar8._2).typeHierarchy[(ulong)bVar5 - 1] == typeof(AmmoWeapon))) {
					return bVar9;
				}
			}
		}
		return bVar9;
	}

	[Token(Token = "0x6004141")]
	[Address(RVA = "0x5AC5070", Offset = "0x5AC4070", VA = "0x5AC5070")]
	public void FinishRefill()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$FinishRefill): 1 lines keep C-only constructs
		byte bVar1;
		HumanStats pCVar2;
		BaseUseable pCVar3;

		pCVar3 = this.Weapon;
		if ((pCVar3 == null) || (this.Dead != false)) {
			return;
		}
		bVar1 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
		if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(long)&((MethodInfo)(ulong)bVar1)[-1].field_0x57] ==typeof(BladeWeapon))) {
			this.ToggleBlades(true);
			pCVar3 = this.Weapon;
			if (pCVar3 == null) goto label_05bc510f;
		}
		pCVar3.Reset();
		pCVar2 = this.Stats;
		if (pCVar2 != null) {
			pCVar2.CurrentGas = pCVar2.MaxGas;
			return;
		}
	label_05bc510f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004142")]
	[Address(RVA = "0x5AC5120", Offset = "0x5AC4120", VA = "0x5AC5120", Slot = "80")]
	public override void Emote(string emote)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$Emote): 4 lines keep C-only constructs
		int iVar1;
		AnimationHandler __this_00;
		bool bVar2;
		long lVar3;
		String* ppSVar4;
		String animation;
		float fVar5;

		if (((((this.Dead != false) || (iVar1 = this._state, iVar1 == 7)) ||(this.CarryState == 1)) || ((iVar1 == 3 || (iVar1 == 8)))) ||((iVar1 == 9 || ((this.IsAttackableState == false || (iVar1 == 0xf)))))) {
			return;
		}
		if (iVar1 == 1) {
			this.FalseAttack();
		}
		animation = HumanAnimations.EmoteSalute;
		bVar2 = (emote == "Salute");
		if (bVar2) {
			lVar3 = 0x228;
	label_05bc5299: ;
			ppSVar4 = (String*)((long)&HumanAnimations.HorseMount + lVar3);
		}
		else {
			bVar2 = (emote == "Dance");
			if (bVar2) {
				lVar3 = 0x1d8;
				goto label_05bc5299;
			}
			bVar2 = (emote == "Flip");
			if (!bVar2) {
				bVar2 = (emote == "Wave");
				if (bVar2) {
					lVar3 = 0x240;
				}
				else {
					bVar2 = (emote == "Nod");
					if (bVar2) {
						lVar3 = 0x238;
					}
					else {
						bVar2 = (emote == "Shake");
						if (bVar2) {
							lVar3 = 0x230;
						}
						else {
							bVar2 = (emote == "Eat");
							if (!bVar2) goto label_05bc52a3;
							lVar3 = 0x1f0;
						}
					}
				}
				goto label_05bc5299;
			}
			ppSVar4 = &HumanAnimations.Dodge;
		}
		animation = *ppSVar4;
	label_05bc52a3: ;
		if ((this._state & 0xfffffffeU) == 2) {
			this._dashTimeLeft = 0.0;
		}
		this._state = 8;
		this.CrossFade(animation, 0.1, 0.0);
		__this_00 = this.Animation;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		fVar5 = __this_00.GetTotalTime(animation);
		this._stateTimeLeft = fVar5;
		this.ToggleSparks(false);
		this.ToggleSparks(false);
		return;
	}

	[Token(Token = "0x6004143")]
	[Address(RVA = "0x5AC5450", Offset = "0x5AC4450", VA = "0x5AC5450", Slot = "81")]
	public override void ForceAnimation(string animation, float fade)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ForceAnimation): clean
		AnimationHandler __this_00;
		uint uVar1;
		float fVar2;

		uVar1 = this._state;
		if (uVar1 == 1) {
			this.FalseAttack();
			uVar1 = this._state;
		}
		if ((uVar1 & 0xfffffffe) == 2) {
			this._dashTimeLeft = 0.0;
		}
		this._state = 8;
		this.CrossFade(animation, fade, 0.0);
		__this_00 = this.Animation;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		fVar2 = __this_00.GetTotalTime(animation);
		this._stateTimeLeft = fVar2;
		return;
	}

	[Token(Token = "0x6004144")]
	[Address(RVA = "0x5ABE360", Offset = "0x5ABD360", VA = "0x5ABE360")]
	public void EmoteAnimation(string animation)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$EmoteAnimation): clean
		AnimationHandler __this_00;
		float fVar1;

		if ((this._state & 0xfffffffeU) == 2) {
			this._dashTimeLeft = 0.0;
		}
		this._state = 8;
		this.CrossFade(animation, 0.1, 0.0);
		__this_00 = this.Animation;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		fVar1 = __this_00.GetTotalTime(animation);
		this._stateTimeLeft = fVar1;
		this.ToggleSparks(false);
		return;
	}

	[Token(Token = "0x6004145")]
	[Address(RVA = "0x5ABD1F0", Offset = "0x5ABC1F0", VA = "0x5ABD1F0")]
	public bool CanEmote()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$CanEmote): clean
		int iVar1;
		bool bVar2;

		if (this.Dead != false) {
			return false;
		}
		iVar1 = this._state;
		if ((((iVar1 != 7) && (this.CarryState != 1)) && (iVar1 != 3)) && ((iVar1 != 8 && (iVar1 != 9))) ) {
			bVar2 = iVar1 != 0xf && this.IsAttackableState != false;
		}
		return bVar2;
	}

	[Token(Token = "0x6004146")]
	[Address(RVA = "0x5AC54E0", Offset = "0x5AC44E0", VA = "0x5AC54E0", Slot = "77")]
	public override Transform GetCameraAnchor()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$GetCameraAnchor): clean
		HumanComponentCache pCVar1;

		pCVar1 = this.HumanCache;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		return pCVar1.Head;
	}

	[Token(Token = "0x6004147")]
	[Address(RVA = "0x5AC5500", Offset = "0x5AC4500", VA = "0x5AC5500", Slot = "78")]
	protected override void CreateCache(BaseComponentCache cache)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$CreateCache): clean
		GameObject owner;
		HumanComponentCache __this_00;

		owner = this.gameObject;
		__this_00 = new HumanComponentCache(owner);
		this.HumanCache = __this_00;
		this.CreateCache((BaseComponentCache)this.HumanCache);
		return;
	}

	[Token(Token = "0x6004148")]
	[Address(RVA = "0x5AC5580", Offset = "0x5AC4580", VA = "0x5AC5580", Slot = "84")]
	[IteratorStateMachine(typeof(_003CWaitAndDie_003Ed__228))]
	protected override IEnumerator WaitAndDie()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$WaitAndDie): clean
		Human.d__228<WaitAndDie> __this_00;

		__this_00 = new Human.d__228<WaitAndDie>(0);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6004149")]
	[Address(RVA = "0x5AC55F0", Offset = "0x5AC45F0", VA = "0x5AC55F0")]
	public void Init(bool ai, string team, InGameCharacterSettings settings)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$Init): 3 lines keep C-only constructs
		HumanSetup __this_00;
		GameObject __this_01;
		object pIVar1;
		MethodInfo* ppMVar2;

		this.Init(ai, team);
		this.Settings = settings;
		__this_00 = this.Setup;
		if (__this_00 == null) {
	label_05bc56bf: ;
			throw new NullReferenceException();
		}
		__this_00.Copy(settings);
		__this_01 = this.gameObject;
		if (ai) {
			if (__this_01 == null) goto label_05bc56bf;
			ppMVar2 = &MethodInfo_UnityEngine_GameObject_AddComponent_HumanAIController;
		}
		else {
			if (__this_01 == null) goto label_05bc56bf;
			ppMVar2 = &MethodInfo_UnityEngine_GameObject_AddComponent_HumanPlayerController;
		}
		pIVar1 = __this_01.AddComponent<object>();
		this.Controller = (IHumanController)pIVar1;
		return;
	}

	[Token(Token = "0x600414A")]
	[Address(RVA = "0x5AC56D0", Offset = "0x5AC46D0", VA = "0x5AC56D0")]
	public void ReloadHuman(InGameCharacterSettings settings)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ReloadHuman): 3 lines keep C-only constructs
		byte bVar1;
		HumanSetup pCVar2;
		Material x;
		BaseComponentCache pUVar3;
		PhotonView __this_00;
		BaseMenu pUVar4;
		HUDBottomHandler __this_01;
		bool bVar5;
		Transform pUVar6;
		ParticleSystem x_00;
		Object x_01;
		Object[] parameters;
		String obj;
		object pIVar7;
		object pIVar8;
		int local_2c;

		this.FinishSetup = false;
		this.ResetSheatheState();
		this.Settings = settings;
		pCVar2 = this.Setup;
		if (pCVar2 != null) {
			pCVar2.Copy(settings);
			pCVar2 = this.Setup;
			if (pCVar2 != null) {
				pCVar2.Load(pCVar2.CustomSet, pCVar2.Weapon, false);
				pUVar6 = this.transform;
				if (pUVar6 != null) {
					pUVar6 = pUVar6.Find("3dmg_smoke");
					bVar5 = ((Object)pUVar6 != null);
					if (bVar5) {
						if (pUVar6 == null) goto label_05bc5a94;
						x_00 = pUVar6.GetComponent<ParticleSystem>();
						bVar5 = ((Object)x_00 != null);
						if (bVar5) {
							if (x_00 == null) goto label_05bc5a94;
							x_01 = (Object)x_00.GetComponent<Renderer>();
							bVar5 = (x_01 != null);
							if (bVar5) {
								x = this._originalSmokeMaterial;
								bVar5 = ((Object)x != null);
								if (bVar5) {
									if (x_01 == null) goto label_05bc5a94;
									x_01.material = this._originalSmokeMaterial;
								}
							}
						}
					}
					bVar5 = this.IsMine();
					if (bVar5) {
						pUVar3 = this.Cache;
						if (pUVar3 == null) goto label_05bc5a94;
						__this_00 = pUVar3.PhotonView;
						parameters = (Object[])new object[2];
						obj = this.GetNetworkSetupJson();
						if (parameters == null) goto label_05bc5a94;
						if ((obj != null) &&(pIVar7 = il2cpp_vm_Object_IsInst((object)obj, (((parameters.obj).klass)._1).element_class), pIVar7 == null)) {
	label_05bc5aa3: ;
							pIVar7 = new ArrayTypeMismatchException();
							throw pIVar7;
						}
						if ((int)parameters.Length == 0) {
	label_05bc5a99: ;
							throw new IndexOutOfRangeException();
						}
						parameters[0] = (object)obj;
						pCVar2 = this.Setup;
						if (pCVar2 == null) goto label_05bc5a94;
						local_2c = pCVar2.Weapon;
						pIVar7 = (object)local_2c;
						if ((pIVar7 != null) &&(pIVar8 = il2cpp_vm_Object_IsInst(pIVar7, (((parameters.obj).klass)._1).element_class), pIVar8 == null)) goto label_05bc5aa3;
						if ((parameters.Length & 0xfffffffe) == 0) goto label_05bc5a99;
						parameters[1] = pIVar7;
						if (__this_00 == null) goto label_05bc5a94;
						__this_00.RPC("SetupRPC", 0, parameters);
						this.LoadSkin(null);
						this._cameraFPS = false;
					}
					if (this.AI != false) {
						return;
					}
					pUVar4 = UIManager.CurrentMenu;
					if (pUVar4 != null) {
						bVar1 = (typeof(InGameMenu)._2).typeHierarchyDepth;
						if (((pUVar4.klass._2).typeHierarchyDepth < bVar1) ||((pUVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
							throw new InvalidCastException();
						}
						__this_01 = (HUDBottomHandler)(*(ulong)((sbyte)pUVar4 + 0xb8));
						if (__this_01 != null) {
							__this_01.SetBottomHUD((BaseCharacter)this);
							return;
						}
					}
				}
			}
		}
	label_05bc5a94: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600414B")]
	[Address(RVA = "0x5AC8530", Offset = "0x5AC7530", VA = "0x5AC8530", Slot = "101")]
	protected override void Awake()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$Awake): 2 lines keep C-only constructs
		byte bVar1;
		HumanComponentCache pCVar2;
		BaseComponentCache pUVar3;
		Rigidbody pUVar4;
		HumanComponentCache pCVar5;
		bool bVar6;
		GameObject pUVar7;
		HumanSetup pCVar8;
		HumanStats __this_00;
		HumanCustomSkinLoader pCVar9;

		if (SceneLoader.SceneName == 4) {
			this.enabled = false;
			return;
		}
		this.Awake();
		pCVar5 = typeof(HumanComponentCache);
		pCVar2 = (HumanComponentCache)this.Cache;
		if (pCVar2 == null) {
			this.HumanCache = null;
			pUVar3 = this.Cache;
		}
		else {
			bVar1 = (typeof(HumanComponentCache)._2).typeHierarchyDepth;
			if (((((BaseComponentCache)pCVar2.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseComponentCache)pCVar2.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(HumanComponentCache))) {
	label_05bc87ef: ;
				throw new InvalidCastException();
			}
			this.HumanCache = pCVar2;
			if (((((BaseComponentCache)pCVar2.klass)._2).typeHierarchyDepth < bVar1) ||((((BaseComponentCache)pCVar2.klass)._2).typeHierarchy[(ulong)bVar1 - 1] !=(Il2CppClass)pCVar5)) goto label_05bc87ef;
			pUVar3 = this.Cache;
		}
		if ((pUVar3 != null) &&(pUVar4 = pUVar3.Rigidbody, pUVar4 != null)) {
			pUVar4.freezeRotation = true;
			pUVar3 = this.Cache;
			if ((pUVar3 != null) &&(pUVar4 = pUVar3.Rigidbody, pUVar4 != null)) {
				pUVar4.useGravity = false;
				pUVar7 = this.gameObject;
				if (pUVar7 != null) {
					pCVar8 = pUVar7.GetComponent<HumanSetup>();
					bVar6 = ((Object)pCVar8 == null);
					if (bVar6) {
						pUVar7 = this.gameObject;
						if (pUVar7 == null) goto label_05bc87ea;
						pCVar8 = pUVar7.AddComponent<HumanSetup>();
						this.Setup = pCVar8;
					}
					pUVar7 = this.gameObject;
					if (pUVar7 != null) {
						pCVar8 = pUVar7.GetComponent<HumanSetup>();
						this.Setup = pCVar8;
						__this_00 = new HumanStats(this);
						this.Stats = __this_00;
						pUVar7 = this.gameObject;
						if (pUVar7 != null) {
							pCVar9 = pUVar7.AddComponent<HumanCustomSkinLoader>();
							this._customSkinLoader = pCVar9;
							return;
						}
					}
				}
			}
		}
	label_05bc87ea: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600414C")]
	[Address(RVA = "0x5AC8800", Offset = "0x5AC7800", VA = "0x5AC8800", Slot = "104")]
	protected override void Start()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$Start): 18 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		sbyte cVar4;
		byte bVar5;
		InGameManager __this_00;
		BaseComponentCache pUVar6;
		Dictionary<object, object> pSVar7;
		InGameSet pSVar8;
		InGameMiscSettings pSVar9;
		FloatSetting pSVar10;
		PhotonView __this_01;
		HumanSetup pCVar11;
		BoolSetting pSVar12;
		Horse pCVar14;
		bool bVar15;
		Transform pUVar16;
		ParticleSystem x;
		Object x_00;
		Material pUVar17;
		AudioSource pUVar18;
		Object[] parameters;
		String pSVar19;
		object pIVar20;
		object pIVar21;
		Horse pCVar22;
		Horse* targetAddress;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dd;
		Quaternion rotation;
		Vector3 UVar24;
		Vector3 UStack_58;
		byte[] auStack_48 = new byte[8];
		float fStack_40;
		float fStack_3c;

		__this_00 = this._inGameManager;
		if (__this_00 != null) {
			__this_00.RegisterCharacter((BaseCharacter)this);
			this.Start();
			this.SetInterpolation(true);
			pUVar16 = this.transform;
			if (pUVar16 != null) {
				pUVar16 = pUVar16.Find("3dmg_smoke");
				bVar15 = ((Object)pUVar16 != null);
				if (bVar15) {
					if (pUVar16 == null) goto label_05bc8ef9;
					x = pUVar16.GetComponent<ParticleSystem>();
					bVar15 = ((Object)x != null);
					if (bVar15) {
						if (x == null) goto label_05bc8ef9;
						x_00 = (Object)x.GetComponent<Renderer>();
						bVar15 = (x_00 != null);
						if (bVar15) {
							if (x_00 == null) goto label_05bc8ef9;
							pUVar17 = x_00.sharedMaterial;
							bVar15 = ((Object)pUVar17 != null) ;
							if (bVar15) {
								pUVar17 = x_00.sharedMaterial;
								this._originalSmokeMaterial = pUVar17;
							}
						}
					}
				}
				bVar15 = this.IsMine();
				if ((bVar15) && (this.AI == false)) {
					pUVar6 = this.Cache;
					if (pUVar6 == null) goto label_05bc8ef9;
					pSVar7 = (Dictionary<object, object>)pUVar6.AudioSources;
					if ((pSVar7 == null) ||(pUVar18 = pSVar7.get_Item((object)HumanSounds.GasStart) , pUVar18 == null)) goto label_05bc8ef9;
					pUVar18.spatialBlend = 0.0;
					pUVar6 = this.Cache;
					if ((pUVar6 == null) ||((pSVar7 = (Dictionary<object, object>)pUVar6.AudioSources , pSVar7 == null ||(pUVar18 = pSVar7.get_Item((object)HumanSounds.GasLoop), pUVar18 == null)))) goto label_05bc8ef9;
					pUVar18.spatialBlend = 0.0;
					pUVar6 = this.Cache;
					if ((pUVar6 == null) ||((pSVar7 = (Dictionary<object, object>)pUVar6.AudioSources , pSVar7 == null ||(pUVar18 = pSVar7.get_Item((object)HumanSounds.GasEnd), pUVar18 == null)))) goto label_05bc8ef9;
					pUVar18.spatialBlend = 0.0;
				}
				bVar15 = this.IsMine();
				if (!bVar15) {
					return;
				}
				pSVar8 = SettingsManager.InGameCurrent;
				if (((pSVar8 != null) &&(pSVar9 = pSVar8.Misc, pSVar9 != null)) &&(pSVar10 = pSVar9.InvincibilityTime, pSVar10 != null)) {
					this.InvincibleTimeLeft = pSVar10._value;
					pUVar6 = this.Cache;
					if ((pUVar6 != null) &&(pUVar16 = pUVar6.Transform, pUVar16 != null)) {
						UVar24 = pUVar16.eulerAngles;
						this.TargetAngle = UVar24.y;
						pUVar6 = this.Cache;
						if (pUVar6 != null) {
							__this_01 = pUVar6.PhotonView;
							parameters = (Object[])new object[2];
							pSVar19 = this.GetNetworkSetupJson();
							if (parameters != null) {
								if ((pSVar19 != null) &&(pIVar20 = il2cpp_vm_Object_IsInst((object)pSVar19, (((parameters.obj).klass)._1).element_class), pIVar20 == null)) {
	label_05bc8f0b: ;
									pIVar20 = new ArrayTypeMismatchException();
									throw pIVar20;
								}
								if ((int)parameters.Length == 0) {
	label_05bc8efe: ;
									throw new IndexOutOfRangeException();
								}
								parameters[0] = (object)pSVar19;
								pCVar11 = this.Setup;
								if (pCVar11 == null) goto label_05bc8ef9;
								UStack_58.x = (float)pCVar11.Weapon;
								pIVar20 = (object)UStack_58;
								if ((pIVar20 != null) &&(pIVar21 = il2cpp_vm_Object_IsInst(pIVar20, (((parameters.obj).klass)._1).element_class), pIVar21 == null)) goto label_05bc8f0b;
								if ((parameters.Length & 0xfffffffe) == 0) goto label_05bc8efe;
								parameters[1] = pIVar20;
								if (__this_01 == null) goto label_05bc8ef9;
								__this_01.RPC("SetupRPC", 0, parameters);
								if (this.AI == false) {
									pSVar8 = SettingsManager.InGameCurrent;
									if (((pSVar8 == null) ||(pSVar9 = pSVar8.Misc, pSVar9 == null)) ||(pSVar12 = pSVar9.Horses, pSVar12 == null)) goto label_05bc8ef9;
									cVar4 = pSVar12._value;
								}
								else {
									cVar4 = this.AllowHorse;
								}
								if (cVar4 != false) {
									pUVar6 = this.Cache;
									if ((pUVar6 == null) ||(pUVar16 = pUVar6.Transform, pUVar16 == null)) goto label_05bc8ef9;
									pSVar19 = CharacterPrefabs.Horse;
									UVar24 = pUVar16.position;
									auStack_48._0_4_ = UVar24.x;
									auStack_48._4_4_ = UVar24.y;
									fStack_40 = extraout_XMM0_Dc;
									fStack_3c = extraout_XMM0_Dd;
									if (g_data_07544d56 == false) {
										auStack_48 = (byte[])UVar24._0_8_;
										g_data_07544d56 = true;
									}
									uVar2 = (Vector3.rightVector).x;
									uVar3 = (Vector3.rightVector).y;
									fVar1 = (Vector3.rightVector).z;
									auStack_48._4_4_ = (float)auStack_48._4_4_ + (float)uVar3 + (float)uVar3;
									auStack_48._0_4_ = (float)auStack_48._0_4_ + (float)uVar2 + (float)uVar2;
									fStack_40 = fStack_40 + 0.0;
									fStack_3c = fStack_3c + 0.0;
									UVar24.z = UVar24.z + fVar1 + fVar1;
									UStack_58.x = 0.0;
									UStack_58.y = this.TargetAngle * 0.017453292;
									UStack_58.z = 0.0;
									rotation = Quaternion.Internal_FromEulerRad(ref UStack_58);
									UVar24.x = (float)auStack_48._0_4_;
									UVar24.y = (float)auStack_48._4_4_;
									pCVar22 = (Horse)CharacterSpawner.Spawn(pSVar19, UVar24, rotation);
									pCVar14 = typeof(Horse);
									if (pCVar22 == null) {
										this.Horse = null;
									}
									else {
										bVar5 = (typeof(Horse)._2).typeHierarchyDepth;
										if (((((BaseCharacter)pCVar22.klass)._2).typeHierarchyDepth < bVar5) ||((((BaseCharacter)pCVar22.klass)._2).typeHierarchy[(ulong)bVar5 - 1] !=typeof(Horse))) {
	label_05bc8f03: ;
											throw new InvalidCastException();
										}
										this.Horse = pCVar22;
										if (((((BaseCharacter)pCVar22.klass)._2).typeHierarchyDepth < bVar5) ||((((BaseCharacter)pCVar22.klass)._2).typeHierarchy[(ulong)bVar5 - 1] !=(Il2CppClass)pCVar14)) goto label_05bc8f03;
									}
									targetAddress = &this.Horse;
									pCVar22 = *targetAddress;
									if (pCVar22 == null) goto label_05bc8ef9;
									pCVar22.Init(this);
								}
								this.LoadSkin(null);
								return;
							}
						}
					}
				}
			}
		}
	label_05bc8ef9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600414D")]
	[Address(RVA = "0x5AC8F20", Offset = "0x5AC7F20", VA = "0x5AC8F20", Slot = "70")]
	public override void OnDistanceUpdate(float distance, float soundDistance)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$OnDistanceUpdate): clean
		this.OnDistanceUpdate(distance, soundDistance);
		this._gasEffectEnabled = distance < 5000.0;
		return;
	}

	[Token(Token = "0x600414E")]
	[Address(RVA = "0x5AC8F50", Offset = "0x5AC7F50", VA = "0x5AC8F50", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$OnPlayerEnteredRoom): 5 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		Human pCVar3;
		PhotonView pPVar4;
		HumanSetup pCVar5;
		bool bVar6;
		Object[] pSVar7;
		object pIVar8;
		object pIVar9;
		String obj;
		byte uStack_3a;
		byte uStack_39;
		int iStack_38;
		int iStack_34;

		this.OnPlayerEnteredRoom(player) ;
		bVar6 = this.IsMine();
		if (!bVar6) {
			return;
		}
		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			pPVar2 = pUVar1.PhotonView;
			pSVar7 = (Object[])new object[1];
			uStack_39 = this._isTrigger;
			pIVar8 = (object)uStack_39;
			if (pSVar7 != null) {
				if ((pIVar8 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((pSVar7.obj).klass)._1).element_class), pIVar9 == null)) goto label_05bc93ea;
				if ((int)pSVar7.Length == 0) goto label_05bc93e5;
				pSVar7[0] = pIVar8;
				if (pPVar2 == null) goto label_05bc93e0;
				pPVar2.RPC("SetTriggerColliderRPC", player, pSVar7);
				if ((this.MountState == 2) &&(pSVar7 = this._lastMountMessage, pSVar7 != null)) {
					pUVar1 = this.Cache;
					if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) goto label_05bc93e0;
					pPVar2.RPC("MountRPC", player, pSVar7);
				}
				pCVar3 = this.BackHuman;
				bVar6 = ((Object)pCVar3 != null);
				if (bVar6) {
					pCVar3 = this.BackHuman;
					if (pCVar3 == null) goto label_05bc93e0;
					if (pCVar3.CarryState == 1) {
						pUVar1 = pCVar3.Cache;
						if (pUVar1 == null) goto label_05bc93e0;
						pPVar2 = pUVar1.PhotonView;
						pSVar7 = (Object[])new object[1];
						pUVar1 = this.Cache;
						if ((pUVar1 == null) ||(pPVar4 = pUVar1.PhotonView, pPVar4 == null)) goto label_05bc93e0;
						iStack_34 = pPVar4.viewIdField;
						pIVar8 = (object)iStack_34;
						if (pSVar7 == null) goto label_05bc93e0;
						if ((pIVar8 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((pSVar7.obj).klass)._1).element_class), pIVar9 == null)) goto label_05bc93ea;
						if ((int)pSVar7.Length == 0) goto label_05bc93e5;
						pSVar7[0] = pIVar8;
						if (pPVar2 == null) goto label_05bc93e0;
						pPVar2.RPC("CarryRPC", player, pSVar7);
					}
				}
				pUVar1 = this.Cache;
				if (pUVar1 != null) {
					pPVar2 = pUVar1.PhotonView;
					pSVar7 = (Object[])new object[1];
					uStack_3a = this.Sheathed;
					pIVar8 = (object)uStack_3a;
					if (pSVar7 != null) {
						if ((pIVar8 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((pSVar7.obj).klass)._1).element_class), pIVar9 == null)) goto label_05bc93ea;
						if ((int)pSVar7.Length == 0) goto label_05bc93e5;
						pSVar7[0] = pIVar8;
						if (pPVar2 != null) {
							pPVar2.RPC("SetSheathedRPC", player, pSVar7);
							pUVar1 = this.Cache;
							if (pUVar1 != null) {
								pPVar2 = pUVar1.PhotonView;
								pSVar7 = (Object[])new object[2];
								obj = this.GetNetworkSetupJson();
								if (pSVar7 != null) {
									if ((obj != null) &&(pIVar8 = il2cpp_vm_Object_IsInst((object)obj, (((pSVar7.obj).klass)._1).element_class), pIVar8 == null)) {
	label_05bc93ea: ;
										pIVar8 = new ArrayTypeMismatchException();
										throw pIVar8;
									}
									if ((int)pSVar7.Length == 0) {
	label_05bc93e5: ;
										throw new IndexOutOfRangeException();
									}
									pSVar7[0] = (object)obj;
									pCVar5 = this.Setup;
									if (pCVar5 != null) {
										iStack_38 = pCVar5.Weapon;
										pIVar8 = (object)iStack_38;
										if ((pIVar8 != null) &&(pIVar9 = il2cpp_vm_Object_IsInst(pIVar8, (((pSVar7.obj).klass)._1).element_class), pIVar9 == null)) goto label_05bc93ea;
										if ((pSVar7.Length & 0xfffffffe) == 0) goto label_05bc93e5;
										pSVar7[1] = pIVar8;
										if (pPVar2 != null) {
											pPVar2.RPC("SetupRPC", player, pSVar7);
											this.LoadSkin(player);
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
	label_05bc93e0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600414F")]
	[Address(RVA = "0x5AC5AC0", Offset = "0x5AC4AC0", VA = "0x5AC5AC0")]
	private string GetNetworkSetupJson()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$GetNetworkSetupJson): 2 lines keep C-only constructs
		HumanSetup pCVar1;
		StringSetting pSVar2;
		bool bVar3;
		HumanCustomSet pSVar4;
		Player player;
		String pSVar5;
		Enum local_50;
		Enum local_38;

		pCVar1 = this.Setup;
		bVar3 = ((Object)pCVar1 == null);
		if (!bVar3) {
			pCVar1 = this.Setup;
			if (pCVar1 == null) goto label_05bc5cde;
			if (pCVar1.CustomSet != null) {
				pSVar4 = new HumanCustomSet();
				pCVar1 = this.Setup;
				if ((pCVar1 != null) && (pSVar4 != null)) {
					pSVar4.Copy((BaseSetting)pCVar1.CustomSet);
					player = PhotonNetwork.LocalPlayer;
					bVar3 = PatreonHelper.HasCharacterEffectAccess(player);
					if (bVar3) {
	label_05bc5c7d: ;
						pSVar5 = pSVar4.SerializeToJsonString();
						return pSVar5;
					}
					pSVar2 = pSVar4.HairEffect;
					local_38.klass = (Enum)typeof(CharacterEffectType);
					local_38.monitor = (IntPtr)0xffffffffffffffff;
					pSVar5 = local_38.ToString();
					if (pSVar2 != null) {
						pSVar2.Value = (object)pSVar5;
						pSVar2 = pSVar4.BladeEffect;
						local_50.klass = (Enum)typeof(CharacterEffectType);
						local_50.monitor = (IntPtr)0xffffffffffffffff;
						pSVar5 = local_50.ToString();
						if (pSVar2 != null) {
							pSVar2.Value = (object)pSVar5;
							goto label_05bc5c7d;
						}
					}
				}
				goto label_05bc5cde;
			}
		}
		pSVar4 = new HumanCustomSet();
		if (pSVar4 != null) {
			pSVar5 = pSVar4.SerializeToJsonString();
			return pSVar5;
		}
	label_05bc5cde: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004150")]
	[Address(RVA = "0x5AC9400", Offset = "0x5AC8400", VA = "0x5AC9400", Slot = "90")]
	[PunRPC]
	public override void GetHitRPC(int viewId, string name, int damage, string type, string collider)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$GetHitRPC): 3 lines keep C-only constructs
		byte bVar1;
		bool bVar2;
		BaseTitan grabber;
		BaseCharacter pCVar3;
		uint in_register_0000000c;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT44(in_register_0000000c, damage);
		if ((this.Dead == false) && (this.IsInvincible == false)) {
			bVar2 = (type == "TitanEat");
			if (bVar2) {
				this.GetHitRPC(viewId, name, damage, type, collider);
				if (this.Dead == false) {
					this.Ungrab(false, true, false);
					return;
				}
			}
			else {
				if (type == null) {
	label_05bc9621: ;
					throw new NullReferenceException();
				}
				bVar2 = type.StartsWith("Grab");
				if (bVar2) {
					if (this._state != 7) {
						grabber = (BaseTitan)Util.FindCharacterByViewId(viewId);
						if (grabber != null) {
							bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
							if (((grabber.klass._2).typeHierarchyDepth < bVar1) ||(method_00 = (MethodInfo)(grabber.klass._2).typeHierarchy, *(BaseTitan*)((long)method_00 + (ulong)bVar1 * 8 + -8) != typeof(BaseTitan))) {
								throw new InvalidCastException();
							}
						}
						this.Grab(grabber, type);
						return;
					}
				}
				else {
					bVar2 = (type == "Hook");
					if (bVar2) {
						pCVar3 = Util.FindCharacterByViewId(viewId);
						if (pCVar3 == null) goto label_05bc9621;
						name = String.Concat(pCVar3.RichTextName, "'s Hook");
					}
					this.GetHitRPC(viewId, name, damage, type, collider);
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004151")]
	[Address(RVA = "0x5AC9630", Offset = "0x5AC8630", VA = "0x5AC9630", Slot = "91")]
	[PunRPC]
	public override void GetDamagedRPC(string name, int damage)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$GetDamagedRPC): clean
		if ((this.Dead == false) && (this.IsInvincible == false)) {
			this.GetDamagedRPC(name, damage);
			return;
		}
		return;
	}

	[Token(Token = "0x6004152")]
	[Address(RVA = "0x5AC9650", Offset = "0x5AC8650", VA = "0x5AC9650", Slot = "89")]
	public override void OnHit(BaseHitbox hitbox, object victim, Collider collider, string type, bool firstHit)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$OnHit): 76 lines keep C-only constructs
		uint uVar1;
		float fVar2;
		uint uVar3;
		float fVar4;
		byte bVar5;
		byte bVar6;
		uint uVar7;
		HumanComponentCache pCVar8;
		BaseHitbox pCVar9;
		Human pCVar10;
		Rigidbody __this_00;
		SoundSettings pSVar11;
		BoolSetting pSVar12;
		HumanStats pCVar13;
		Dictionary<object, object> __this_01;
		Il2CppClass pIVar14;
		Il2CppClass* ppIVar15;
		BaseMenu pUVar16;
		BaseCamera pCVar17;
		Collider __this_02;
		HashSet<object> __this_03;
		PhotonView __this_04;
		BaseComponentCache pUVar19;
		PhotonView pPVar20;
		Object pUVar21;
		Dictionary<BaseTitan, float> pSVar22;
		GraphicsSettings pSVar23;
		BaseUseable obj;
		List<object> __this_05;
		Vector3 bladePosition;
		bool bVar24;
		sbyte cVar25;
		String* ppSVar26;
		Transform pUVar27;
		BasePerk pCVar28;
		JSONNode pSVar29;
		object pIVar30;
		InGameMenu pUVar31;
		InGameCamera pCVar32;
		String pSVar33;
		Object[] parameters;
		RechargeableUseable __this_06;
		BladeWeapon __this_07;
		uint damage;
		uint uVar34;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float fVar35;
		float in_XMM1_Dc;
		float in_XMM1_Dd;
		float fVar36;
		Quaternion UVar37;
		Quaternion rotation;
		Vector3 UVar38;
		String pSStack_c0;
		float fStack_b8;
		Bounds UStack_70;
		byte[] auStack_58 = new byte[16];
		byte[] auStack_48 = new byte[24];

		bVar24 = ((Object)hitbox != null);
		if (!bVar24) goto label_05bc98db;
		pCVar8 = this.HumanCache;
		if (pCVar8 == null) goto label_05bcafab;
		pCVar9 = pCVar8.BladeHitLeft;
		bVar24 = ((Object)hitbox == (Object)pCVar9);
		if (bVar24) {
	label_05bc98d1: ;
			ppSVar26 = &"Blade";
	label_05bc98d8: ;
			type = *ppSVar26;
		}
		else {
			pCVar8 = this.HumanCache;
			if (pCVar8 == null) goto label_05bcafab;
			pCVar9 = pCVar8.BladeHitRight;
			bVar24 = ((Object)hitbox == (Object)pCVar9);
			if (bVar24) goto label_05bc98d1;
			pCVar8 = this.HumanCache;
			if (pCVar8 == null) goto label_05bcafab;
			pCVar9 = pCVar8.AHSSHit;
			bVar24 = ((Object)hitbox == (Object)pCVar9);
			pSVar33 = "AHSS";
			if (!bVar24) {
				pCVar8 = this.HumanCache;
				if (pCVar8 == null) goto label_05bcafab;
				pCVar9 = pCVar8.APGHit;
				bVar24 = ((Object)hitbox == (Object)pCVar9);
				if (!bVar24) goto label_05bc98db;
				ppSVar26 = &"APG";
				goto label_05bc98d8;
			}
			pCVar8 = this.HumanCache;
			if (((pCVar8 == null) ||(pCVar9 = pCVar8.AHSSHit, pCVar9 == null)) ||(__this_07 = (BladeWeapon)pCVar9._collider, __this_07 == null)) goto label_05bcafab;
			bVar5 = (typeof(CapsuleCollider)._2).typeHierarchyDepth;
			if (((__this_07.klass._2).typeHierarchyDepth < bVar5) ||((__this_07.klass._2).typeHierarchy[(ulong)bVar5 - 1] !=typeof(CapsuleCollider))) goto label_05bcafbb;
			fVar35 = __this_07.radius;
			pSVar29 = CharacterData.HumanWeaponInfo;
			if (((pSVar29 == null) ||(pSVar29 = pSVar29.get_Item("AHSS"), pSVar29 == null)) ||(pSVar29 = pSVar29.get_Item("Radius"), pSVar29 == null)) goto label_05bcafab;
			fVar2 = (float)pSVar29.get_AsFloat();
			in_XMM1_Dc = 0.0;
			in_XMM1_Dd = 0.0;
			type = pSVar33;
			if ((fVar35 == fVar2 + fVar2) && (!NAN(fVar35) && !NAN(fVar2 + fVar2))) {
				ppSVar26 = &"AHSSDouble";
				goto label_05bc98d8;
			}
		}
	label_05bc98db: ;
		if (this.CarryState == 1) {
			pCVar10 = this.Carrier;
			bVar24 = ((Object)pCVar10 != null);
			if (!bVar24) goto label_05bc99b0;
			pCVar10 = this.Carrier;
			if (pCVar10 == null) goto label_05bcafab;
			fVar35 = pCVar10.CarryVelocity.x;
			uVar1 = pCVar10.CarryVelocity.y;
			uVar3 = pCVar10.CarryVelocity.z;
			in_XMM1_Dc = (float)uVar3 * (float)uVar3;
			fVar35 = in_XMM1_Dc + fVar35 * fVar35 + (float)uVar1 * (float)uVar1;
			in_XMM1_Dd = in_XMM1_Dc;
			if (fVar35 < 0.0) goto label_05bc99a6;
	label_05bc9a1b: ;
			fVar35 = SQRT(fVar35);
		}
		else {
	label_05bc99b0: ;
			pUVar19 = this.Cache;
			if ((pUVar19 == null) ||(__this_00 = pUVar19.Rigidbody, __this_00 == null)) goto label_05bcafab;
			UVar38 = __this_00.linearVelocity;
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar7 == 0) {
			}
			fVar35 = UVar38.z * UVar38.z + UVar38.y * UVar38.y + UVar38.x * UVar38.x;
			if (0.0 <= fVar35) goto label_05bc9a1b;
	label_05bc99a6: ;
			fVar35 = sqrtf(fVar35);
		}
		uVar34 = 10;
		if (10 < (int)(fVar35 * 10.0)) {
			uVar34 = (int)(fVar35 * 10.0);
		}
		bVar24 = (type == "Blade");
		pSStack_c0 = type;
		if (bVar24) {
			if (victim == null) {
	label_05bc9a8a: ;
				if (hitbox == null) goto label_05bcafab;
				pSVar33 = EffectPrefabs.Blood1;
				pUVar27 = hitbox.transform;
				if (pUVar27 == null) goto label_05bcafab;
				UVar38 = pUVar27.position;
				UStack_70.m_Center.x = 4.712389;
				UStack_70.m_Center.y = 0.0;
				UStack_70.m_Center.z = 0.0;
				UVar37 = Quaternion.Internal_FromEulerRad(ref UStack_70);
				fVar35 = UVar37.x;
				fVar2 = UVar37.y;
				fVar4 = UVar37.z;
				fVar36 = UVar37.w;
				if ((typeof(EffectSpawner)._2).cctor_finished_or_no_cctor == 0) {
					auStack_58._8_4_ = extraout_XMM0_Dc;
					auStack_58._0_8_ = UVar37._0_8_;
					auStack_58._12_4_ = extraout_XMM0_Dd;
					auStack_48._8_4_ = in_XMM1_Dc;
					auStack_48._0_8_ = UVar37._8_8_;
					auStack_48._12_4_ = in_XMM1_Dd;
					fVar35 = (float)auStack_58._0_4_;
					fVar2 = (float)auStack_58._4_4_;
					fVar4 = (float)auStack_48._0_4_;
					fVar36 = (float)auStack_48._4_4_;
				}
				UVar37.y = fVar2;
				UVar37.x = fVar35;
				UVar37.w = fVar36;
				UVar37.z = fVar4;
				EffectSpawner.Spawn(pSVar33, UVar38, UVar37, 1.0, true, null);
			}
			else {
				bVar5 = (typeof(CustomLogicCollisionHandler)._2).typeHierarchyDepth;
				if (((victim.klass._2).typeHierarchyDepth < bVar5) ||((victim.klass._2).typeHierarchy[(ulong)bVar5 - 1] !=typeof(CustomLogicCollisionHandler))) goto label_05bc9a8a;
			}
			pSVar11 = SettingsManager.SoundSettings;
			if ((pSVar11 == null) ||(pSVar12 = pSVar11.OldBladeEffect, pSVar12 == null)) goto label_05bcafab;
			uVar7 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
			if (pSVar12._value == false) {
				if (uVar7 == 0) {
				}
				ppSVar26 = &HumanSounds.BladeHit;
			}
			else {
				if (uVar7 == 0) {
				}
				ppSVar26 = &HumanSounds.OldBladeHit;
			}
			this.PlaySound(*ppSVar26);
			__this_07 = (BladeWeapon)this.Weapon;
			if (__this_07 != null) {
				bVar5 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
				if (((__this_07.klass._2).typeHierarchyDepth < bVar5) ||((__this_07.klass._2).typeHierarchy[(ulong)bVar5 - 1] !=typeof(BladeWeapon))) {
	label_05bcafbb: ;
					throw new InvalidCastException();
				}
			}
			pCVar13 = this.Stats;
			if (((pCVar13 == null) ||(__this_01 = (Dictionary<object, object>)pCVar13.Perks, __this_01 == null)) ||(pCVar28 = __this_01.get_Item((Il2CppObject *)"AdvancedAlloy"), pCVar28 == null)) goto label_05bcafab;
			if (pCVar28.CurrPoints == 1) {
				if (uVar34 < 500) {
					if (__this_07 == null) goto label_05bcafab;
					fVar35 = __this_07.CurrentDurability;
					goto label_05bc9fa4;
				}
				if (__this_07 == null) goto label_05bcafab;
			}
			else {
				if (__this_07 == null) goto label_05bcafab;
				fVar35 = 2.0;
	label_05bc9fa4: ;
				__this_07.UseDurability(fVar35);
			}
			fVar35 = __this_07.CurrentDurability;
			if ((fVar35 == 0.0) && (!NAN(fVar35))) {
				this.ToggleBlades(false);
				this.PlaySound(HumanSounds.BladeBreak);
			}
			pSVar29 = CharacterData.HumanWeaponInfo;
			if (pSVar29 == null) goto label_05bcafab;
			pSVar29 = pSVar29.get_Item("Blade");
	joined_r0x05bc9f8b: ;
			if (pSVar29 == null) goto label_05bcafab;
			pSVar29 = pSVar29.get_Item("DamageMultiplier");
	joined_r0x05bc9c52: ;
			if (pSVar29 == null) goto label_05bcafab;
			fVar35 = pSVar29.get_AsFloat();
			in_XMM1_Dc = 0.0;
			in_XMM1_Dd = 0.0;
			uVar34 = (uint)((float)(int)uVar34 * fVar35);
		}
		else {
			bVar24 = (type == "AHSS");
			if (bVar24) {
				pSVar29 = CharacterData.HumanWeaponInfo;
				if ((pSVar29 == null) ||(pSVar29 = pSVar29.get_Item("AHSS"), pSVar29 == null)) goto label_05bcafab;
				pSVar29 = pSVar29.get_Item("DamageMultiplier");
				goto joined_r0x05bc9c52;
			}
			bVar24 = (type == "AHSSDouble");
			if (!bVar24) {
				bVar24 = (type == "APG");
				if (!bVar24) goto label_05bca08f;
				pSVar29 = CharacterData.HumanWeaponInfo;
				if (pSVar29 == null) goto label_05bcafab;
				pSVar29 = pSVar29.get_Item("APG");
				goto joined_r0x05bc9f8b;
			}
			pSStack_c0 = "AHSS";
		}
	label_05bca08f: ;
		damage = 10;
		if (10 < (int)uVar34) {
			damage = uVar34;
		}
		if (this.CustomDamageEnabled != false) {
			damage = this.CustomDamage;
		}
		if (victim == null) goto label_05bcafab;
		pIVar14 = victim.klass;
		bVar5 = (pIVar14._2).typeHierarchyDepth;
		bVar6 = (typeof(CustomLogicCollisionHandler)._2).typeHierarchyDepth;
		if ((bVar6 <= bVar5) &&((pIVar14._2).typeHierarchy[(ulong)bVar6 - 1] ==typeof(CustomLogicCollisionHandler))) {
			fVar2 = (Vector3.zeroVector).x;
			fVar4 = (Vector3.zeroVector).y;
			fVar35 = (Vector3.zeroVector).z;
			bVar24 = ((Object)hitbox != null);
			if (bVar24) {
				if ((hitbox == null) ||(pUVar27 = hitbox.transform, pUVar27 == null)) goto label_05bcafab;
				UVar38 = pUVar27.position;
				fVar35 = UVar38.z;
				fVar2 = UVar38.x;
				fVar4 = UVar38.y;
			}
			bVar5 = (typeof(CustomLogicCollisionHandler)._2).typeHierarchyDepth;
			if ((bVar5 <= (victim.klass._2).typeHierarchyDepth) &&((victim.klass._2).typeHierarchy[(ulong)bVar5 - 1] ==typeof(CustomLogicCollisionHandler))) {
				UVar38.y = fVar4;
				UVar38.x = fVar2;
				UVar38.z = fVar35;
				victim.GetHit((BaseCharacter)this, this.RichTextName, damage, pSStack_c0, UVar38);
				return;
			}
			goto label_05bcafab;
		}
		bVar6 = (typeof(BaseCharacter)._2).typeHierarchyDepth;
		if ((bVar5 < bVar6) ||(ppIVar15 = (pIVar14._2).typeHierarchy, ppIVar15[(ulong)bVar6 - 1] != typeof(BaseCharacter))) {
			throw new InvalidCastException();
		}
		if (*(sbyte)&victim[7].monitor != false) {
			return;
		}
		bVar6 = (typeof(BaseTitan)._2).typeHierarchyDepth;
		if ((bVar5 < bVar6) || (ppIVar15[(ulong)bVar6 - 1] != typeof(BaseTitan))) {
			if (this.AI == false) {
				pUVar16 = UIManager.CurrentMenu;
				pIVar30 = il2cpp_codegen_is_inst_class((object)pUVar16, typeof(InGameMenu));
				if (pIVar30 == null) goto label_05bcafab;
				pUVar31 = (InGameMenu)il2cpp_codegen_is_inst_class((object)pUVar16, typeof(InGameMenu));
				pUVar31.ShowKillScore(damage, false);
				if ((victim[8].klass == null) ||(pUVar27 = (Transform)((victim[8].klass)._1).name, pUVar27 == null)) goto label_05bcafab;
				pCVar17 = SceneLoader.CurrentCamera;
				UVar38 = pUVar27.position;
				pIVar30 = il2cpp_codegen_is_inst_class((object)pCVar17, typeof(InGameCamera));
				if (pIVar30 == null) goto label_05bcafab;
				pCVar32 = (InGameCamera)il2cpp_codegen_is_inst_class((object)pCVar17, typeof(InGameCamera));
				pCVar32.TakeSnapshot(UVar38, damage);
			}
			if (collider != null) {
				pSVar33 = collider.name;
				(*victim.klass.vtable[0x5f].methodPtr)(victim,this,(ulong)damage,pSStack_c0,pSVar33,victim.klass.vtable[0x5f].method);
				return;
			}
			goto label_05bcafab;
		}
		bVar24 = this.IsMine();
		if ((bVar24) &&(bVar24 = (pSStack_c0 == "Blade"))) {
			bVar5 = (typeof(BasicTitan)._2).typeHierarchyDepth;
			if ((bVar5 <= (victim.klass._2).typeHierarchyDepth) &&((victim.klass._2).typeHierarchy[(ulong)bVar5 - 1] == typeof(BasicTitan))) {
				if ((hitbox == null) ||(__this_02 = hitbox._collider, __this_02 == null)) goto label_05bcafab;
				UStack_70 = __this_02.bounds;
				bladePosition.y = UStack_70.m_Center.y;
				bladePosition.x = UStack_70.m_Center.x;
				bladePosition.z = UStack_70.m_Center.z;
				in_XMM1_Dc = 0.0;
				in_XMM1_Dd = 0.0;
				bVar24 = victim.IsHaircutHit(collider, bladePosition);
				if (bVar24) {
					__this_03 = (HashSet<object>)this._haircutTargets;
					if (__this_03 == null) goto label_05bcafab;
					bVar24 = __this_03.Add(victim);
					if (bVar24) {
						fVar35 = Random.value;
						in_XMM1_Dc = 0.0;
						in_XMM1_Dd = 0.0;
						if (fVar35 < 0.4) {
							if (victim[8].klass == null) goto label_05bcafab;
							__this_04 = ((victim[8].klass)._1).byval_arg.data;
							parameters = (Object[])new object[1];
							pUVar19 = this.Cache;
							if ((pUVar19 == null) ||(pPVar20 = pUVar19.PhotonView, pPVar20 == null)) goto label_05bcafab;
							UStack_70.m_Center.x = (float)pPVar20.viewIdField;
							pIVar30 = (object)UStack_70;
							if (parameters == null) goto label_05bcafab;
							il2cpp_codegen_array_element_type_check((Array)parameters, pIVar30);
							il2cpp_runtime_helper_02ac8d90(parameters, 0, pIVar30);
							if (__this_04 == null) goto label_05bcafab;
							__this_04.RPC("ApplyHaircutRPC", 0, parameters);
						}
					}
				}
			}
		}
		if (victim[0x10].monitor == null) goto label_05bcafab;
		pUVar21 = *(Object*)((long)victim[0x10].monitor + 0x68);
		bVar24 = (pUVar21 == (Object)collider);
		if (bVar24) {
			bVar24 = (pSStack_c0 == "Blade");
			if (bVar24) {
				if ((hitbox == null) ||(pUVar27 = hitbox.transform, pUVar27 == null)) goto label_05bcafab;
				UVar38 = pUVar27.position;
				pSVar29 = CharacterData.HumanWeaponInfo;
				if (((pSVar29 == null) ||(pSVar29 = pSVar29.get_Item("Blade"), pSVar29 == null)) ||(pSVar29 = pSVar29.get_Item("RestrictAngle"), pSVar29 == null)) goto label_05bcafab;
				fVar35 = pSVar29.get_AsFloat();
				fStack_b8 = UVar38.x;
				in_XMM1_Dc = 0.0;
				in_XMM1_Dd = 0.0;
				cVar25 = (*victim.klass.vtable[0xca].methodPtr)(fStack_b8,UVar38.z,fVar35,victim,victim.klass.vtable[0xca].method);
				if (cVar25 == false) {
					return;
				}
			}
			bVar24 = (pSStack_c0 == "AHSS");
			if (bVar24) {
				if ((hitbox == null) ||(pUVar27 = hitbox.transform, pUVar27 == null)) goto label_05bcafab;
				UVar38 = pUVar27.position;
				pSVar29 = CharacterData.HumanWeaponInfo;
				if (((pSVar29 == null) ||(pSVar29 = pSVar29.get_Item("AHSS"), pSVar29 == null)) ||(pSVar29 = pSVar29.get_Item("RestrictAngle"), pSVar29 == null)) goto label_05bcafab;
				fVar35 = pSVar29.get_AsFloat();
				fStack_b8 = UVar38.x;
				in_XMM1_Dc = 0.0;
				in_XMM1_Dd = 0.0;
				cVar25 = (*victim.klass.vtable[0xca].methodPtr)(fStack_b8,UVar38.z,fVar35,victim,victim.klass.vtable[0xca].method);
				if (cVar25 == false) {
					return;
				}
			}
			bVar24 = (pSStack_c0 == "APG");
			if (bVar24) {
				if ((hitbox == null) ||(pUVar27 = hitbox.transform, pUVar27 == null)) goto label_05bcafab;
				UVar38 = pUVar27.position;
				pSVar29 = CharacterData.HumanWeaponInfo;
				if (((pSVar29 == null) ||(pSVar29 = pSVar29.get_Item("APG"), pSVar29 == null)) ||(pSVar29 = pSVar29.get_Item("RestrictAngle"), pSVar29 == null)) goto label_05bcafab;
				fVar35 = pSVar29.get_AsFloat();
				fStack_b8 = UVar38.x;
				in_XMM1_Dc = 0.0;
				in_XMM1_Dd = 0.0;
				cVar25 = (*victim.klass.vtable[0xca].methodPtr)(fStack_b8,UVar38.z,fVar35,victim,victim.klass.vtable[0xca].method);
				if (cVar25 == false) {
					return;
				}
			}
			bVar24 = (pSStack_c0 != "APG");
			if (bVar24) {
				pSVar22 = this._lastNapeHitTimes;
				if (pSVar22 == null) goto label_05bcafab;
				bVar24 = pSVar22.ContainsKey(victim);
				if (bVar24) {
					pSVar22 = this._lastNapeHitTimes;
					if (pSVar22 == null) goto label_05bcafab;
					fVar35 = pSVar22.get_Item(victim);
					fVar2 = Time.time;
					in_XMM1_Dc = 0.0;
					in_XMM1_Dd = 0.0;
					if (fVar2 < fVar35 + 0.2) {
						return;
					}
				}
			}
			if (this.AI == false) {
				pUVar16 = UIManager.CurrentMenu;
				pIVar30 = il2cpp_codegen_is_inst_class((object)pUVar16, typeof(InGameMenu));
				if (pIVar30 == null) goto label_05bcafab;
				pUVar31 = (InGameMenu)il2cpp_codegen_is_inst_class((object)pUVar16, typeof(InGameMenu));
				pUVar31.ShowKillScore(damage, false);
				if ((victim[0x10].monitor == null) ||(pUVar27 = *(Transform*)((long)victim[0x10].monitor + 0x40), pUVar27 == null)) goto label_05bcafab;
				pCVar17 = SceneLoader.CurrentCamera;
				UVar38 = pUVar27.position;
				pIVar30 = il2cpp_codegen_is_inst_class((object)pCVar17, typeof(InGameCamera));
				if (pIVar30 == null) goto label_05bcafab;
				pCVar32 = (InGameCamera)il2cpp_codegen_is_inst_class((object)pCVar17, typeof(InGameCamera));
				in_XMM1_Dc = 0.0;
				in_XMM1_Dd = 0.0;
				pCVar32.TakeSnapshot(UVar38, damage);
				if ((this.AI == false) &&(bVar24 = (pSStack_c0 == "Blade"))) {
					pSVar23 = SettingsManager.GraphicsSettings;
					if ((pSVar23 == null) ||(pSVar12 = pSVar23.BloodSplatterEnabled, pSVar12 == null)) goto label_05bcafab;
					if (pSVar12._value != false) {
						pUVar16 = UIManager.CurrentMenu;
						pIVar30 = il2cpp_codegen_is_inst_class((object)pUVar16, typeof(InGameMenu));
						if (pIVar30 == null) goto label_05bcafab;
						pUVar31 = (InGameMenu)il2cpp_codegen_is_inst_class((object)pUVar16, typeof(InGameMenu));
						pUVar31.ShowBlood();
					}
				}
			}
			bVar24 = (pSStack_c0 == "Blade");
			if (((bVar24) ||(bVar24 = (pSStack_c0 == "AHSS"))) ||(bVar24 = (pSStack_c0 == "APG"))) {
				pSVar11 = SettingsManager.SoundSettings;
				if ((pSVar11 == null) ||(pSVar12 = pSVar11.OldNapeEffect, pSVar12 == null)) goto label_05bcafab;
				if (pSVar12._value == false) {
					bVar24 = (pSStack_c0 == "APG");
					if (bVar24) {
						this.PlaySound(HumanSounds.NapeHit);
					}
					bVar24 = (pSStack_c0 == "Blade");
					if (bVar24) {
						if ((int)damage < 500) {
							this.PlaySound(HumanSounds.NapeHit);
						}
						else if (999 < damage) {
							if (damage < 2000) {
								pSVar33 = HumanSounds.GetRandomBladeNapeVar2();
							}
							else {
								uVar7 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
								if (damage < 3000) {
									if (uVar7 == 0) {
									}
									pSVar33 = HumanSounds.GetRandomBladeNapeVar3();
								}
								else {
									if (uVar7 == 0) {
									}
									pSVar33 = HumanSounds.GetRandomBladeNapeVar4();
								}
							}
							goto label_05bcace5;
						}
						pSVar33 = HumanSounds.GetRandomBladeNapeVar1();
					}
					else {
						bVar24 = (pSStack_c0 == "AHSS");
						if (!bVar24) goto label_05bcacef;
						if ((int)damage < 1000) {
							pSVar33 = HumanSounds.NapeHit;
						}
						else {
							uVar7 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
							if (damage < 2000) {
								if (uVar7 == 0) {
								}
								pSVar33 = HumanSounds.GetRandomAHSSNapeHitVar1();
							}
							else {
								if (uVar7 == 0) {
								}
								pSVar33 = HumanSounds.GetRandomAHSSNapeHitVar2();
							}
						}
					}
				}
				else {
					pSVar33 = HumanSounds.OldNapeHit;
				}
	label_05bcace5: ;
				this.PlaySound(pSVar33);
			}
	label_05bcacef: ;
			obj = this.Special;
			if (obj != null) {
				bVar5 = (typeof(RechargeableUseable)._2).typeHierarchyDepth;
				if ((bVar5 <= (((Il2CppClass)obj.klass)._2).typeHierarchyDepth) &&((((Il2CppClass)obj.klass)._2).typeHierarchy[(ulong)bVar5 - 1] ==typeof(RechargeableUseable))) {
					pIVar30 = il2cpp_codegen_is_inst_class((object)obj, typeof(RechargeableUseable));
					if (pIVar30 == null) goto label_05bcafab;
					__this_06 = (RechargeableUseable)il2cpp_codegen_is_inst_class((object)obj, typeof(RechargeableUseable));
					__this_06.ReduceCooldown();
				}
			}
			pSVar22 = this._lastNapeHitTimes;
			fVar35 = Time.time;
			if (pSVar22 == null) goto label_05bcafab;
			pSVar22.set_Item(victim, fVar35);
		}
		if ((victim[0x10].monitor != null) &&(__this_05 = *(List<object>*)((long)victim[0x10].monitor + 0xf8), __this_05 != null)) {
			bVar24 = __this_05.Contains((object)collider);
			if (!bVar24) {
				return;
			}
			if (hitbox != null) {
				pSVar33 = EffectPrefabs.CriticalHit;
				pUVar27 = hitbox.transform;
				if (pUVar27 != null) {
					UVar38 = pUVar27.position;
					UStack_70.m_Center.x = 4.712389;
					UStack_70.m_Center.y = 0.0;
					UStack_70.m_Center.z = 0.0;
					UVar37 = Quaternion.Internal_FromEulerRad(ref UStack_70);
					fVar35 = UVar37.z;
					fVar2 = UVar37.w;
					if ((typeof(EffectSpawner)._2).cctor_finished_or_no_cctor == 0) {
						auStack_58._8_4_ = in_XMM1_Dc;
						auStack_58._0_8_ = UVar37._8_8_;
						auStack_58._12_4_ = in_XMM1_Dd;
						fVar35 = (float)auStack_58._0_4_;
						fVar2 = (float)auStack_58._4_4_;
					}
					rotation.w = fVar2;
					rotation.z = fVar35;
					rotation.x = UVar37.x;
					rotation.y = UVar37.y;
					EffectSpawner.Spawn(pSVar33, UVar38, rotation, 1.0, true, null);
					if (collider != null) {
						pSVar33 = collider.name;
						(*victim.klass.vtable[0x5f].methodPtr)(victim,this,(ulong)damage,pSStack_c0,pSVar33,victim.klass.vtable[0x5f].method);
						if (victim[0x10].monitor != null) {
							pUVar21 = *(Object*)((long)victim[0x10].monitor + 0x68);
							bVar24 = (pUVar21 != (Object)collider);
							if (bVar24) {
								this.PlaySound(HumanSounds.LimbHit);
								return;
							}
							return;
						}
					}
				}
			}
		}
	label_05bcafab: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004153")]
	[Address(RVA = "0x5ACAFC0", Offset = "0x5AC9FC0", VA = "0x5ACAFC0")]
	protected void Update()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$Update): 88 lines keep C-only constructs
		float pfVar1;
		uint uVar2;
		uint uVar3;
		int iVar4;
		uint uVar5;
		BaseUseable pCVar6;
		BaseTitan pCVar7;
		Horse pCVar8;
		BaseComponentCache pUVar9;
		HumanSetup pCVar10;
		Rigidbody pUVar11;
		GraphicsSettings pSVar12;
		BoolSetting pSVar13;
		HumanComponentCache pCVar14;
		BaseHitbox pCVar15;
		HashSet<object> __this_00;
		SoundSettings pSVar16;
		Human pCVar17;
		BaseComponentCache pUVar18;
		PhotonView pPVar19;
		ulong uVar20;
		ulong uVar21;
		ulong uVar22;
		ulong uVar23;
		ulong uVar24;
		ulong uVar25;
		ulong uVar26;
		ulong uVar27;
		ulong uVar28;
		ulong uVar29;
		ulong uVar30;
		ulong uVar31;
		ulong uVar32;
		ulong uVar33;
		ulong uVar34;
		ulong uVar35;
		ulong uVar36;
		bool bVar37;
		byte uVar38;
		byte uVar39;
		bool bVar40;
		uint uVar41;
		BaseUseable pCVar42;
		String pSVar43;
		Object[] pSVar44;
		Transform pUVar45;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		MethodInfo extraout_RDX_03;
		MethodInfo extraout_RDX_04;
		MethodInfo pMVar46;
		Transform pUVar48;
		AnimationHandler pCVar49;
		float fVar50;
		ulong uVar53;
		float fVar51;
		uint uVar52;
		byte bVar54;
		float fVar55;
		float fVar56;
		float fVar57;
		Quaternion UVar58;
		Vector3 UVar59;
		Vector3 UVar60;
		Vector3 UVar61;
		Vector3 value;
		float fStack_b8;
		float fStack_b4;
		float fStack_a8;
		float fStack_a4;
		float fStack_98;
		float fStack_94;
		float fStack_88;
		float fStack_84;
		int iStack_6c;
		ulong uStack_68;
		Quaternion UStack_58;
		Quaternion UStack_48;
		Quaternion UStack_38;

		UStack_48 = (Quaternion)ZEXT816(0);
		uStack_68 = 0;
		iStack_6c = 0;
		pMVar46 = (this.klass.vtable)._74_IsMine.method;
		bVar37 = this.IsMine();
		if ((bVar37) && (this.Dead == false)) {
			if (this.MountState == 0) {
				this.InMountedCombat = false;
				uVar38 = 0;
				this.IsAttackableState = true;
				if (this._state != 0) goto label_05bcb0ea;
	label_05bcb10e: ;
				uVar39 = true;
				if (this.Grounded == false) {
					uVar39 = uVar38;
				}
			}
			else {
				if (this == null) goto label_05bcc534;
				this.InMountedCombat = this.CanMountedAttack;
				uVar38 = this.InMountedCombat;
				this.IsAttackableState = (bool)uVar38;
				if (this._state == 0) goto label_05bcb10e;
	label_05bcb0ea: ;
				uVar39 = false;
			}
			this.IsRefillable = (bool)uVar39;
			fVar55 = this._stateTimeLeft;
			fVar50 = Time.deltaTime;
			this._stateTimeLeft = fVar55 - fVar50;
			fVar55 = this._dashCooldownLeft;
			fVar50 = Time.deltaTime;
			this._dashCooldownLeft = fVar55 - fVar50;
			fVar55 = this._reloadCooldownLeft;
			fVar50 = Time.deltaTime;
			this._reloadCooldownLeft = fVar55 - fVar50;
			fVar55 = this.InvincibleTimeLeft;
			fVar50 = Time.deltaTime;
			fVar55 = fVar55 - fVar50;
			this.InvincibleTimeLeft = fVar55;
			if (fVar55 <= 0.0) {
				this.IsInvincible = false;
				fVar55 = this._grabIFrames;
				if (fVar55 <= 0.0) goto label_05bcb1e5;
	label_05bcb212: ;
				fVar50 = Time.deltaTime;
				this._grabIFrames = fVar55 - fVar50;
				this.UpdateBladeFire();
				if (this._needFinishReload != false) goto label_05bcb253;
	label_05bcb244: ;
				if (this._needFinishSheatheSwap != false) goto label_05bcb253;
			}
			else {
				fVar55 = this._grabIFrames;
				if (0.0 < fVar55) goto label_05bcb212;
	label_05bcb1e5: ;
				this.UpdateBladeFire();
				if (this._needFinishReload == false) goto label_05bcb244;
	label_05bcb253: ;
				fVar55 = this._reloadTimeLeft;
				fVar50 = Time.deltaTime;
				fVar55 = fVar55 - fVar50;
				this._reloadTimeLeft = fVar55;
				if (Il2CppMethodInitialized_07547565 == false) {
					Il2CppMethodInitialized_07547565 = true;
					fVar55 = this._reloadTimeLeft;
				}
				if (0.0 < fVar55) {
					pCVar49 = this.Animation;
					if (pCVar49 == null) goto label_05bcc534;
					pMVar46 = (MethodInfo)this._reloadAnimation;
					fVar55 = pCVar49.GetNormalizedTime((String)pMVar46);
					pCVar42 = this.Weapon;
					if (pCVar42 != null) {
						pCVar6 = pCVar42.klass;
						bVar54 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
						if ((bVar54 <= (pCVar6._2).typeHierarchyDepth) &&((pCVar6._2).typeHierarchy[(ulong)bVar54 - 1] == typeof(BladeWeapon)) ) {
							if (fVar55 < *(float)(&g_data_0100aed8 + (ulong)(this.Grounded == false) * 4) || fVar55 == *(float)(&g_data_0100aed8 + (ulong)(this.Grounded == false) * 4)) goto label_05bcb33d;
							goto label_05bcb30e;
						}
					}
					if (fVar55 <= 0.62) goto label_05bcb33d;
				}
	label_05bcb30e: ;
				if (this._needFinishReload != false) {
					this.FinishReload();
				}
				if (this._needFinishSheatheSwap != false) {
					this._needFinishSheatheSwap = false;
					this.RefreshWeaponVisibility();
				}
			}
	label_05bcb33d: ;
			uVar41 = this._state;
			if (uVar41 == 7) {
				pCVar7 = this.Grabber;
				pMVar46 = null;
				bVar37 = ((Object)pCVar7 == null);
				if (!bVar37) {
					pCVar7 = this.Grabber;
					if (pCVar7 == null) goto label_05bcc534;
					if (pCVar7.Dead == false) goto label_05bcb617;
				}
				pMVar46 = null;
				this.Ungrab(false, true, false);
	label_05bcb617: ;
				uVar41 = this._state;
	label_05bcb61f: ;
				uVar36._4_4_ = UStack_38.y;
				uVar36._0_4_ = UStack_38.x;
				uVar35._4_4_ = UStack_38.y;
				uVar35._0_4_ = UStack_38.x;
				uVar34._4_4_ = UStack_38.y;
				uVar34._0_4_ = UStack_38.x;
				uVar33._4_4_ = UStack_38.y;
				uVar33._0_4_ = UStack_38.x;
				if (uVar41 - 1 < 0xf) {
					UStack_38._0_8_ = uVar33;
					switch(uVar41 - 1) {
					case 0:
	override_jmp_05bcb639_case_0: ;
						pCVar10 = this.Setup;
						if (pCVar10 == null) goto label_05bcc534;
						iVar4 = pCVar10.Weapon;
						if (iVar4 - 1U < 3) {
							pCVar49 = this.Animation;
							if (pCVar49 == null) goto label_05bcc534;
							pMVar46 = (MethodInfo)this.AttackAnimation;
							fVar55 = pCVar49.GetNormalizedTime((String)pMVar46);
							if (1.0 <= fVar55) {
								uVar41 = this._state;
								if ((uVar41 | 8) == 9) {
									this.FalseAttack();
									uVar41 = this._state;
								}
								goto joined_r0x05bcb668;
							}
						}
						else if (iVar4 == 0) {
							pCVar42 = this.Weapon;
							if (this.MountState == 0) {
								pCVar42 = (BaseUseable)il2cpp_codegen_is_inst_class((object)pCVar42, typeof(BladeWeapon));
							}
							else {
								if (pCVar42 != null) {
									bVar54 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
									if (((((Il2CppClass)pCVar42.klass)._2).typeHierarchyDepth < bVar54) ||((((Il2CppClass)pCVar42.klass)._2).typeHierarchy[(ulong)bVar54 - 1] !=typeof(BladeWeapon))) {
										throw new InvalidCastException();
									}
								}
								if (this.IsAttackableState != false) {
									UVar59 = this.GetAimPoint();
									uVar22._4_4_ = UStack_38.y;
									uVar22._0_4_ = UStack_38.x;
									pUVar18 = this.Cache;
									if (pUVar18 == null) goto label_05bcc534;
									pUVar45 = pUVar18.Transform;
									UStack_38._0_8_ = uVar22;
									if (pUVar45 == null) goto label_05bcc534;
									UVar60 = pUVar45.position;
									uVar23._4_4_ = UStack_38.y;
									uVar23._0_4_ = UStack_38.x;
									pUVar18 = this.Cache;
									if (pUVar18 == null) goto label_05bcc534;
									pUVar45 = pUVar18.Transform;
									UStack_38._0_8_ = uVar23;
									if (pUVar45 == null) goto label_05bcc534;
									UVar61 = pUVar45.up;
									fStack_88 = UVar60.x;
									fStack_84 = UVar60.y;
									fStack_b8 = UVar59.x;
									fStack_b4 = UVar59.y;
									fVar50 = UVar59.z - (UVar60.z + UVar61.z * 0.8);
									uStack_68 = CONCAT44(fStack_b4 - (fStack_84 + UVar61.y * 0.8), fStack_b8 - (fStack_88 + UVar61.x * 0.8));
									uVar53 = il2cpp_runtime_helper_059d80e0(&uStack_68);
									fVar55 = (float)uVar53;
									pUVar45 = this.MountedTransform;
									if (pUVar45 == null) goto label_05bcc534;
									UVar59 = pUVar45.forward;
									fVar56 = UVar59.z;
									fVar57 = fVar56;
									fVar51 = (float)il2cpp_runtime_helper_059d7e70(UVar59.x, fVar56, uVar53, fVar50, 0);
									if (70.0 < fVar51) {
										uVar52 = il2cpp_runtime_helper_05bbcf10(0);
										fVar55 = (float)il2cpp_runtime_helper_059fb780(UVar59.x, fVar56, uVar53, fVar50, uVar52, fVar57, 0);
										fVar50 = 0.0;
										UStack_58._0_8_ = il2cpp_runtime_helper_05bbcf10(0);
										UStack_58.z = fVar50;
										UVar58 = Quaternion.Internal_AngleAxis(*(float)(&g_data_0100aee0 + (ulong)(0.0 <= fVar55) * 4), ref UStack_58);
										UVar59 = (UVar58 * UVar59);
										fVar50 = UVar59.z;
										fVar55 = UVar59.x;
									}
									uVar24._4_4_ = UStack_38.y;
									uVar24._0_4_ = UStack_38.x;
									pUVar18 = this.Cache;
									if (pUVar18 == null) goto label_05bcc534;
									pUVar45 = pUVar18.Transform;
									UStack_38._0_8_ = uVar24;
									if (pUVar45 == null) goto label_05bcc534;
									UVar58 = pUVar45.rotation;
									fVar57 = 0.0;
									uVar53 = il2cpp_runtime_helper_05be1910(fVar55);
									fVar55 = Time.deltaTime;
									UStack_58.z = UVar58.z;
									UStack_58.w = UVar58.w;
									UStack_58._0_8_ = UVar58._0_8_;
									UStack_38.z = fVar50;
									UStack_38.w = fVar57;
									UStack_38._0_8_ = uVar53;
									UVar58 = Quaternion.Internal_Lerp(ref UStack_58, ref UStack_38, fVar55 * 10.0);
									pUVar45.rotation = UVar58;
								}
							}
							if (pCVar42 == null) goto label_05bcc534;
							if (pCVar42.IsActive == false) {
								this._attackButtonRelease = true;
							}
							if (this._attackRelease == false) {
								if (this._attackButtonRelease == false) {
									pCVar49 = this.Animation;
									if (pCVar49 == null) goto label_05bcc534;
									pMVar46 = (MethodInfo)this.AttackAnimation;
									fVar55 = pCVar49.GetNormalizedTime((String)pMVar46);
									if (0.32 <= fVar55) {
										this.PauseAnimation();
									}
								}
								else {
									this.ContinueAnimation();
									this._attackRelease = true;
								}
								if (pCVar42 == null) goto label_05bcc534;
							}
							if (*(float)&(*(ulong)((sbyte)pCVar42 + 0x40)) <= 0.0) {
								fVar50 = -1.0;
								fVar55 = -1.0;
							}
							else {
								pSVar43 = this.AttackAnimation;
								bVar37 = (pSVar43 == HumanAnimations.Attack4);
								if (bVar37) {
									fVar55 = 0.9;
									fVar50 = 0.6;
								}
								else {
									fVar55 = 0.85;
									fVar50 = 0.5;
								}
							}
							pSVar12 = SettingsManager.GraphicsSettings;
							if (pSVar12 == null) goto label_05bcc534;
							pSVar13 = pSVar12.WeaponTrailHold;
							if (pSVar13 == null) goto label_05bcc534;
							pCVar49 = this.Animation;
							if (pCVar49 == null) goto label_05bcc534;
							bVar37 = pSVar13._value;
							fVar57 = pCVar49.GetNormalizedTime(this.AttackAnimation);
							pCVar14 = this.HumanCache;
							if ((fVar57 <= fVar50) || (fVar55 <= fVar57)) {
								if (pCVar14 == null) goto label_05bcc534;
								pCVar15 = pCVar14.BladeHitLeft;
								if (pCVar15 == null) goto label_05bcc534;
								bVar40 = pCVar15.IsActive();
								pMVar46 = extraout_RDX_01;
								if (!bVar40) goto label_05bcc04d;
								pCVar14 = this.HumanCache;
								if (pCVar14 == null) goto label_05bcc534;
								pCVar15 = pCVar14.BladeHitLeft;
								if (pCVar15 == null) goto label_05bcc534;
								pCVar15.Deactivate();
								pCVar14 = this.HumanCache;
								if (pCVar14 == null) goto label_05bcc534;
								pCVar15 = pCVar14.BladeHitRight;
								if (pCVar15 == null) goto label_05bcc534;
								pCVar15.Deactivate();
								pMVar46 = extraout_RDX_02;
								if (bVar37 != false) goto label_05bcc057;
								bVar54 = 0;
	label_05bcc06a: ;
								this.ToggleBladeTrails((bool)(bVar54 & 1));
							}
							else {
								if (pCVar14 == null) goto label_05bcc534;
								pCVar15 = pCVar14.BladeHitLeft;
								if (pCVar15 == null) goto label_05bcc534;
								bVar40 = pCVar15.IsActive();
								if (!bVar40) {
									__this_00 = (HashSet<object>)this._haircutTargets;
									if (__this_00 == null) goto label_05bcc534;
									__this_00.Clear();
									pCVar14 = this.HumanCache;
									if (pCVar14 == null) goto label_05bcc534;
									pCVar15 = pCVar14.BladeHitLeft;
									if (pCVar15 == null) goto label_05bcc534;
									pCVar15.Activate(0.0, 0.0);
									pSVar16 = SettingsManager.SoundSettings;
									if (pSVar16 == null) goto label_05bcc534;
									pSVar13 = pSVar16.OldBladeEffect;
									if (pSVar13 == null) goto label_05bcc534;
									if (pSVar13._value == false) {
										iStack_6c = Random.Range(1, 5);
										pSVar43 = iStack_6c.ToString();
										pSVar43 = String.Concat("BladeSwing", pSVar43);
									}
									else {
										pSVar43 = HumanSounds.OldBladeSwing;
									}
									this.PlaySound(pSVar43);
									if (bVar37 == false) {
										this.ToggleBladeTrails(true);
									}
								}
								pCVar14 = this.HumanCache;
								if (pCVar14 == null) goto label_05bcc534;
								pCVar15 = pCVar14.BladeHitRight;
								if (pCVar15 == null) goto label_05bcc534;
								bVar40 = pCVar15.IsActive();
								pMVar46 = extraout_RDX_03;
								if (!bVar40) {
									pCVar14 = this.HumanCache;
									if (pCVar14 == null) goto label_05bcc534;
									pCVar15 = pCVar14.BladeHitRight;
									if (pCVar15 == null) goto label_05bcc534;
									pCVar15.Activate(0.0, 0.0);
									pMVar46 = extraout_RDX_04;
								}
	label_05bcc04d: ;
								if (bVar37 != false) {
	label_05bcc057: ;
									bVar54 = -(fVar57 < fVar55) & -(0.0 < fVar57);
									goto label_05bcc06a;
								}
							}
							pCVar49 = this.Animation;
							if (pCVar49 == null) goto label_05bcc534;
							pMVar46 = (MethodInfo)this.AttackAnimation;
							goto label_05bcc091;
						}
						break;
					case 1:
						pCVar49 = this.Animation;
						if (pCVar49 == null) goto label_05bcc534;
						bVar37 = pCVar49.IsPlaying(HumanAnimations.Dodge);
						if (!bVar37) break;
						if (this.Grounded == false) {
							pCVar49 = this.Animation;
							if (pCVar49 == null) goto label_05bcc534;
							pMVar46 = (MethodInfo)HumanAnimations.Dodge;
							fVar55 = pCVar49.GetNormalizedTime((String)pMVar46);
							if (0.6 < fVar55) {
								this.Idle();
							}
						}
						pCVar49 = this.Animation;
						if (pCVar49 == null) goto label_05bcc534;
						pMVar46 = (MethodInfo)HumanAnimations.Dodge;
	label_05bcc091: ;
						fVar55 = pCVar49.GetNormalizedTime((String)pMVar46);
						uVar36 = UStack_38._0_8_;
						if (1.0 <= fVar55) {
	label_05bcc0a1: ;
							UStack_38._0_8_ = uVar36;
							this.Idle();
						}
						break;
					case 2:
						fVar55 = this._dashTimeLeft;
						if (fVar55 <= 0.0) goto label_05bcc0a1;
						fVar50 = Time.deltaTime;
						uVar30._4_4_ = UStack_38.y;
						uVar30._0_4_ = UStack_38.x;
						this._dashTimeLeft = fVar55 - fVar50;
						pUVar18 = this.Cache;
						if (pUVar18 == null) goto label_05bcc534;
						pUVar11 = pUVar18.Rigidbody;
						UStack_38._0_8_ = uVar30;
						if (pUVar11 == null) goto label_05bcc534;
						UVar59 = pUVar11.linearVelocity;
						uStack_68 = UVar59._0_8_;
						fVar55 = (float)il2cpp_runtime_helper_0599adc0(&uStack_68);
						uVar32._4_4_ = UStack_38.y;
						uVar32._0_4_ = UStack_38.x;
						uVar31._4_4_ = UStack_38.y;
						uVar31._0_4_ = UStack_38.x;
						pfVar1 = &this._originalDashSpeed;
						UStack_38._0_8_ = uVar32;
						if (*pfVar1 <= fVar55 && fVar55 != *pfVar1) {
							pUVar18 = this.Cache;
							UStack_38._0_8_ = uVar31;
							if (pUVar18 == null) goto label_05bcc534;
							pUVar11 = pUVar18.Rigidbody;
							UStack_38._0_8_ = uVar32;
							if (pUVar11 == null) goto label_05bcc534;
							UVar59 = pUVar11.linearVelocity;
							fVar55 = Time.deltaTime;
							fStack_b8 = UVar59.x;
							fStack_b4 = UVar59.y;
							UVar60.x = fVar55 * fStack_b8 * -1.7;
							UVar60.y = fVar55 * fStack_b4 * -1.7;
							UVar60.z = UVar59.z * fVar55 * -1.7;
							pUVar11.AddForce(UVar60, 2);
						}
						break;
					case 3:
						UStack_38._0_8_ = uVar36;
						if (this._stateTimeLeft <= 0.0) goto label_05bcc0a1;
						break;
					case 4:
						UStack_38._0_8_ = uVar35;
						if (this._stateTimeLeft <= 0.0) {
							this.Idle();
							this.FinishRefill();
						}
						break;
					case 7:
					case 9:
	override_jmp_05bcb639_case_7: ;
						if (this._stateTimeLeft <= 0.0) {
							if (uVar41 == 9) {
								this.FalseAttack();
								uVar41 = this._state;
							}
	joined_r0x05bcb668: ;
							if ((uVar41 & 0xfffffffe) == 2) {
								this._dashTimeLeft = 0.0;
							}
							this._state = 0;
							this.CrossFade(this.StandAnimation, 0.1, 0.0);
						}
						break;
					case 10:
						UStack_38._0_8_ = uVar34;
						if (this.Grounded == false) goto label_05bcc0a1;
						break;
					case 0xc:
						pCVar49 = this.Animation;
						if (pCVar49 == null) goto label_05bcc534;
						bVar37 = pCVar49.IsPlaying(HumanAnimations.Land);
						if (bVar37) {
							pCVar49 = this.Animation;
							if (pCVar49 == null) goto label_05bcc534;
							pMVar46 = (MethodInfo)HumanAnimations.Land;
							goto label_05bcc091;
						}
					}
				}
			}
			else {
				iVar4 = this.MountState;
				if (iVar4 != 1) {
					if (iVar4 == 2) {
						pUVar45 = this.MountedTransform;
						bVar37 = ((Object)pUVar45 == null);
						uVar53._4_4_ = UStack_38.y;
						uVar53._0_4_ = UStack_38.x;
						if (bVar37) goto label_05bcb53a;
						pUVar18 = this.Cache;
						if (pUVar18 == null) goto label_05bcc534;
						pUVar45 = this.MountedTransform;
						UStack_38._0_8_ = uVar53;
						if (pUVar45 == null) goto label_05bcc534;
						pUVar48 = pUVar18.Transform;
						UVar59 = pUVar45.TransformPoint((Vector3)this.MountedPositionOffset);
						if (pUVar48 == null) goto label_05bcc534;
						pMVar46 = null;
						pUVar48.position = UVar59;
						uVar21._4_4_ = UStack_38.y;
						uVar21._0_4_ = UStack_38.x;
						uVar20._4_4_ = UStack_38.y;
						uVar20._0_4_ = UStack_38.x;
						if (this.IsAttackableState != false) {
							uVar41 = this._state;
							if (uVar41 == 1) goto override_jmp_05bcb639_case_0;
							UStack_38._0_8_ = uVar21;
							if (uVar41 == 9) goto override_jmp_05bcb639_case_5;
							if (uVar41 == 10) goto override_jmp_05bcb639_case_7;
						}
						pUVar18 = this.Cache;
						UStack_38._0_8_ = uVar20;
						if (pUVar18 == null) goto label_05bcc534;
						pUVar45 = this.MountedTransform;
						UStack_38._0_8_ = uVar21;
						if (pUVar45 == null) goto label_05bcc534;
						pUVar48 = pUVar18.Transform;
						UStack_48 = (Quaternion)pUVar45.rotation;
						fVar55 = UStack_48.z;
						uVar53 = il2cpp_runtime_helper_05bbd050(&UStack_48);
						uVar2 = this.MountedRotationOffset.x;
						uVar3 = this.MountedRotationOffset.y;
						UStack_58.x = ((float)uVar2 + (float)uVar53) * 0.017453292;
						UStack_58.y = ((float)uVar3 + (float)((ulong)uVar53 >> 0x20)) * 0.017453292;
						UStack_58.z = (fVar55 + this.MountedRotationOffset.z) * 0.017453292;
						UVar58 = Quaternion.Internal_FromEulerRad(ref UStack_58);
						fVar57 = UVar58.z;
						fVar51 = UVar58.w;
						fVar55 = UVar58.x;
						fVar50 = UVar58.y;
						if (pUVar48 == null) goto label_05bcc534;
	label_05bcb610: ;
						pMVar46 = null;
						UVar58.y = fVar50;
						UVar58.x = fVar55;
						UVar58.w = fVar51;
						UVar58.z = fVar57;
						pUVar48.rotation = UVar58;
						goto label_05bcb617;
					}
					goto label_05bcb61f;
				}
				pCVar8 = this.Horse;
				bVar37 = ((Object)pCVar8 == null);
				uVar25._4_4_ = UStack_38.y;
				uVar25._0_4_ = UStack_38.x;
				if (bVar37) {
	label_05bcb53a: ;
					pMVar46 = (MethodInfo)0x1;
					this.Unmount(true);
					goto label_05bcb617;
				}
				pUVar18 = this.Cache;
				if (pUVar18 == null) goto label_05bcc534;
				pCVar8 = this.Horse;
				UStack_38._0_8_ = uVar25;
				if (pCVar8 == null) goto label_05bcc534;
				pUVar45 = pUVar18.Transform;
				UVar59 = pCVar8.SaddlePosition;
				if (pUVar45 == null) goto label_05bcc534;
				pMVar46 = null;
				pUVar45.position = UVar59;
				uVar29._4_4_ = UStack_38.y;
				uVar29._0_4_ = UStack_38.x;
				uVar28._4_4_ = UStack_38.y;
				uVar28._0_4_ = UStack_38.x;
				uVar27._4_4_ = UStack_38.y;
				uVar27._0_4_ = UStack_38.x;
				uVar26._4_4_ = UStack_38.y;
				uVar26._0_4_ = UStack_38.x;
				if (this.IsAttackableState == false) {
	label_05bcb5ba: ;
					pUVar18 = this.Cache;
					UStack_38._0_8_ = uVar26;
					if (pUVar18 == null) goto label_05bcc534;
					pCVar8 = this.Horse;
					UStack_38._0_8_ = uVar27;
					if (pCVar8 == null) goto label_05bcc534;
					pUVar9 = pCVar8.Cache;
					UStack_38._0_8_ = uVar28;
					if (pUVar9 == null) goto label_05bcc534;
					pUVar45 = pUVar9.Transform;
					UStack_38._0_8_ = uVar29;
					if (pUVar45 == null) goto label_05bcc534;
					pUVar48 = pUVar18.Transform;
					UVar58 = pUVar45.rotation;
					fVar57 = UVar58.z;
					fVar51 = UVar58.w;
					fVar55 = UVar58.x;
					fVar50 = UVar58.y;
					if (pUVar48 == null) goto label_05bcc534;
					goto label_05bcb610;
				}
				uVar41 = this._state;
				if (uVar41 == 1) goto override_jmp_05bcb639_case_0;
				UStack_38._0_8_ = uVar29;
				if (uVar41 != 9) {
					if (uVar41 != 10) goto label_05bcb5ba;
					goto override_jmp_05bcb639_case_7;
				}
			}
	override_jmp_05bcb639_case_5: ;
			if (this.CarryState == 1) {
				pCVar17 = this.Carrier;
				bVar37 = ((Object)pCVar17 == null);
				if (bVar37) {
	label_05bcc119: ;
					pUVar18 = this.Cache;
					if (pUVar18 == null) goto label_05bcc534;
					pPVar19 = pUVar18.PhotonView;
					pSVar44 = (Object[])new object[0];
					if (pPVar19 == null) goto label_05bcc534;
					pPVar19.RPC("UncarryRPC", 0, pSVar44);
					pCVar17 = this.Carrier;
					uVar5 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					pCVar17 = this.Carrier;
					if (pCVar17 == null) goto label_05bcc534;
					if (((pCVar17.Dead != false) || (this.MountState != 0)) ||(this._state == 7)) goto label_05bcc119;
					pUVar45 = this.CarryBack;
					if (pUVar45 == null) goto label_05bcc534;
					pUVar45 = pUVar45.transform;
					if (pUVar45 == null) goto label_05bcc534;
					UVar59 = pUVar45.forward;
					pUVar45 = this.CarryBack;
					if (pUVar45 == null) goto label_05bcc534;
					pUVar45 = pUVar45.transform;
					if (pUVar45 == null) goto label_05bcc534;
					UVar60 = pUVar45.up;
					pUVar18 = this.Cache;
					if (pUVar18 == null) goto label_05bcc534;
					pUVar45 = this.CarryBack;
					if (pUVar45 == null) goto label_05bcc534;
					pUVar48 = pUVar18.Transform;
					pUVar45 = pUVar45.transform;
					if (pUVar45 == null) goto label_05bcc534;
					UVar61 = pUVar45.position;
					if (pUVar48 == null) goto label_05bcc534;
					fStack_a8 = UVar59.x;
					fStack_a4 = UVar59.y;
					fStack_98 = UVar60.x;
					fStack_94 = UVar60.y;
					value.y = (fStack_94 * 0.5 - fStack_a4 * 0.4) + UVar61.y;
					value.x = (fStack_98 * 0.5 - fStack_a8 * 0.4) + UVar61.x;
					value.z = (UVar60.z * 0.5 - UVar59.z * 0.4) + UVar61.z;
					pUVar48.position = value;
					pUVar18 = this.Cache;
					if (pUVar18 == null) goto label_05bcc534;
					pUVar45 = this.CarryBack;
					if (pUVar45 == null) goto label_05bcc534;
					pUVar48 = pUVar18.Transform;
					pUVar45 = pUVar45.transform;
					if (pUVar45 == null) goto label_05bcc534;
					UVar58 = pUVar45.rotation;
					if (pUVar48 == null) goto label_05bcc534;
					pUVar48.rotation = UVar58;
					pCVar17 = this.Carrier;
					uVar5 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				if (uVar5 == 0) {
				}
				bVar37 = ((Object)pCVar17 != null);
				if (bVar37) {
					pCVar17 = this.Carrier;
					if (pCVar17 == null) goto label_05bcc534;
					pUVar18 = pCVar17.Cache;
					if (pUVar18 == null) goto label_05bcc534;
					pUVar45 = pUVar18.Transform;
					if (pUVar45 == null) goto label_05bcc534;
					UVar59 = pUVar45.position;
					pUVar18 = this.Cache;
					if (pUVar18 == null) goto label_05bcc534;
					pUVar45 = pUVar18.Transform;
					if (pUVar45 == null) goto label_05bcc534;
					UVar60 = pUVar45.position;
					fStack_b8 = UVar59.x;
					fStack_b4 = UVar59.y;
					fStack_b4 = fStack_b4 - UVar60.y;
					fVar55 = UVar59.z - UVar60.z;
					fStack_b8 = fStack_b8 - UVar60.x;
					fVar55 = fStack_b4 * fStack_b4 + fStack_b8 * fStack_b8 + fVar55 * fVar55;
					if (fVar55 < 0.0) {
						fVar55 = sqrtf(fVar55);
					}
					else {
						fVar55 = SQRT(fVar55);
					}
					if (7.0 < fVar55) {
						pUVar18 = this.Cache;
						if (pUVar18 == null) goto label_05bcc534;
						pPVar19 = pUVar18.PhotonView;
						pSVar44 = (Object[])new object[0];
						if (pPVar19 == null) goto label_05bcc534;
						pPVar19.RPC("UncarryRPC", 0, pSVar44);
					}
				}
			}
		}
		pUVar45 = this.GrabHand;
		bVar37 = ((Object)pUVar45 != null);
		if (!bVar37) {
			return;
		}
		pUVar18 = this.Cache;
		if (pUVar18 != null) {
			pUVar45 = this.GrabHand;
			if (pUVar45 != null) {
				pUVar48 = pUVar18.Transform;
				pUVar45 = pUVar45.transform;
				if (pUVar45 != null) {
					UVar59 = pUVar45.position;
					if (pUVar48 != null) {
						pUVar48.position = UVar59;
						pUVar18 = this.Cache;
						if (pUVar18 != null) {
							pUVar45 = this.GrabHand;
							if (pUVar45 != null) {
								pUVar48 = pUVar18.Transform;
								pUVar45 = pUVar45.transform;
								if (pUVar45 != null) {
									UVar58 = pUVar45.rotation;
									if (pUVar48 != null) {
										pUVar48.rotation = UVar58;
										return;
									}
								}
							}
						}
					}
				}
			}
		}
	label_05bcc534: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004154")]
	[Address(RVA = "0x5ACC970", Offset = "0x5ACB970", VA = "0x5ACC970", Slot = "113")]
	protected override void FixedUpdate()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$FixedUpdate): 866 lines keep C-only constructs
		BaseComponentCache* ppUVar1;
		float pfVar2;
		float fVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		uint uVar11;
		uint uVar12;
		BaseUseable pCVar13;
		BaseComponentCache pUVar14;
		Horse pCVar15;
		BaseComponentCache pUVar16;
		Rigidbody pUVar17;
		Transform pUVar18;
		PhotonView __this_00;
		Player targetPlayer;
		PhotonView pPVar19;
		HumanSetup pCVar20;
		AnimationHandler pCVar21;
		InGameSet pSVar22;
		InGameMiscSettings pSVar23;
		BoolSetting pSVar24;
		HumanComponentCache pCVar25;
		ParticleSystem __this_01;
		HumanStats pCVar27;
		SoundSettings pSVar28;
		GraphicsSettings pSVar29;
		FloatSetting pSVar30;
		IHumanController pCVar31;
		InputSettings pSVar32;
		HumanInputSettings pSVar33;
		byte[] auVar34 = new byte[12];
		byte[] auVar35 = new byte[16];
		byte[] auVar36 = new byte[12];
		Quaternion UVar37;
		Quaternion UVar38;
		Quaternion UVar39;
		Quaternion UVar40;
		Quaternion UVar41;
		Quaternion UVar42;
		Quaternion UVar43;
		Quaternion UVar44;
		Quaternion UVar45;
		Quaternion UVar46;
		Quaternion UVar47;
		Quaternion UVar48;
		Quaternion UVar49;
		Quaternion UVar50;
		Quaternion UVar51;
		Quaternion UVar52;
		Quaternion UVar53;
		Quaternion UVar54;
		Quaternion UVar55;
		Quaternion UVar56;
		Quaternion UVar57;
		Quaternion UVar58;
		Quaternion UVar59;
		Quaternion UVar60;
		Quaternion UVar61;
		Quaternion UVar62;
		Quaternion UVar63;
		Quaternion UVar64;
		Quaternion UVar65;
		Quaternion UVar66;
		Quaternion UVar67;
		Quaternion UVar68;
		Quaternion UVar69;
		Quaternion UVar70;
		Quaternion UVar71;
		Quaternion UVar72;
		Quaternion UVar73;
		Quaternion UVar74;
		Quaternion UVar75;
		Quaternion UVar76;
		Quaternion UVar77;
		Quaternion UVar78;
		Quaternion UVar79;
		Quaternion UVar80;
		Quaternion UVar81;
		Quaternion UVar82;
		Quaternion UVar83;
		Quaternion UVar84;
		Quaternion UVar85;
		Quaternion UVar86;
		Quaternion UVar87;
		Quaternion UVar88;
		Quaternion UVar89;
		Quaternion UVar90;
		Quaternion UVar91;
		byte[] auVar92 = new byte[12];
		byte[] auVar93 = new byte[12];
		byte[] auVar94 = new byte[12];
		byte[] auVar95 = new byte[12];
		byte[] auVar96 = new byte[12];
		byte[] auVar97 = new byte[12];
		byte[] auVar98 = new byte[12];
		byte[] auVar99 = new byte[12];
		byte[] auVar100 = new byte[12];
		byte[] auVar101 = new byte[12];
		byte[] auVar102 = new byte[12];
		byte[] auVar103 = new byte[12];
		byte[] auVar104 = new byte[12];
		byte[] auVar105 = new byte[12];
		byte[] auVar106 = new byte[12];
		byte[] auVar107 = new byte[12];
		byte[] auVar108 = new byte[12];
		byte[] auVar109 = new byte[12];
		byte[] auVar110 = new byte[12];
		byte[] auVar111 = new byte[12];
		byte[] auVar112 = new byte[12];
		byte[] auVar113 = new byte[12];
		byte[] auVar114 = new byte[12];
		byte[] auVar115 = new byte[12];
		byte[] auVar116 = new byte[12];
		byte[] auVar117 = new byte[12];
		byte[] auVar118 = new byte[12];
		byte[] auVar119 = new byte[12];
		byte[] auVar120 = new byte[12];
		byte[] auVar121 = new byte[12];
		byte[] auVar122 = new byte[12];
		byte[] auVar123 = new byte[12];
		byte[] auVar124 = new byte[12];
		byte[] auVar125 = new byte[12];
		byte[] auVar126 = new byte[12];
		byte[] auVar127 = new byte[12];
		byte[] auVar128 = new byte[12];
		byte[] auVar129 = new byte[12];
		byte[] auVar130 = new byte[12];
		byte[] auVar131 = new byte[12];
		byte[] auVar132 = new byte[12];
		byte[] auVar133 = new byte[12];
		byte[] auVar134 = new byte[12];
		byte[] auVar135 = new byte[12];
		byte[] auVar136 = new byte[12];
		byte[] auVar137 = new byte[12];
		byte[] auVar138 = new byte[12];
		Vector3 pUVar139;
		bool bVar140;
		bool bVar141;
		bool bVar142;
		bool bVar143;
		sbyte cVar144;
		byte bVar145;
		int iVar146;
		Object[] parameters;
		object value;
		long lVar147;
		String* ppSVar148;
		uint uVar149;
		uint uVar150;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo extraout_RDX_01;
		MethodInfo extraout_RDX_02;
		MethodInfo extraout_RDX_03;
		MethodInfo extraout_RDX_04;
		MethodInfo method_05;
		MethodInfo extraout_RDX_05;
		MethodInfo extraout_RDX_06;
		MethodInfo extraout_RDX_07;
		MethodInfo extraout_RDX_08;
		MethodInfo extraout_RDX_09;
		Transform pUVar151;
		String pSVar152;
		MethodInfo pMVar153;
		Human pCVar154;
		HookUseable pCVar155;
		Rigidbody pUVar156;
		uint uVar157;
		uint uVar158;
		float fVar159;
		float extraout_XMM0_Db;
		byte[] auVar160 = new byte[12];
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		ulong extraout_XMM0_Qb;
		ulong extraout_XMM0_Qb_00;
		ulong extraout_XMM0_Qb_01;
		ulong extraout_XMM0_Qb_02;
		ulong extraout_XMM0_Qb_03;
		float extraout_XMM0_Dd;
		ulong extraout_XMM0_Qb_04;
		float extraout_XMM0_Dd_00;
		ulong extraout_XMM0_Qb_05;
		byte[] auVar161 = new byte[16];
		float extraout_XMM0_Dc_01;
		float extraout_XMM0_Dd_01;
		byte[] auVar162 = new byte[16];
		ulong extraout_XMM0_Qb_06;
		byte[] auVar163 = new byte[16];
		float extraout_XMM0_Dc_02;
		float extraout_XMM0_Dd_02;
		byte[] auVar164 = new byte[16];
		ulong extraout_XMM0_Qb_07;
		float fVar165;
		uint extraout_XMM1_Da;
		byte[] auVar166 = new byte[12];
		ulong extraout_XMM1_Qa;
		ulong extraout_XMM1_Qa_00;
		ulong extraout_XMM1_Qb;
		ulong extraout_XMM1_Qb_00;
		byte[] auVar167 = new byte[16];
		byte[] auVar168 = new byte[16];
		uint extraout_XMM1_Db;
		uint extraout_XMM1_Dc;
		byte[] auVar169 = new byte[16];
		byte[] auVar170 = new byte[16];
		byte[] auVar171 = new byte[16];
		byte[] auVar172 = new byte[16];
		ulong extraout_XMM1_Qb_01;
		ulong uVar173;
		byte[] auVar174 = new byte[16];
		byte[] auVar175 = new byte[16];
		byte[] auVar176 = new byte[12];
		byte[] in_XMM3 = new byte[16];
		byte[] auVar177 = new byte[16];
		byte[] auVar178 = new byte[16];
		Quaternion UVar179;
		byte[] auVar180 = new byte[16];
		Quaternion UVar181;
		Vector3 UVar182;
		Vector3 UVar183;
		Vector3 UVar184;
		Vector3 value_00;
		Vector3 force;
		Vector3 force_00;
		Vector3 force_01;
		Vector3 force_02;
		Vector3 force_03;
		Vector3 position;
		Vector3 value_01;
		byte[] auVar185 = new byte[12];
		Vector3 value_02;
		Vector3 force_04;
		Vector3 worldPosition;
		byte[] auVar186 = new byte[12];
		Vector3 force_05;
		Vector3 force_06;
		Vector3 forwardAtStart;
		byte[] auStack_148 = new byte[8];
		float fStack_140;
		float fStack_13c;
		ulong uStack_138;
		float fStack_130;
		float fStack_12c;
		Quaternion UStack_128;
		Vector3 UStack_118;
		Quaternion UStack_108;
		byte[] auStack_f8 = new byte[8];
		uint uStack_f0;
		Quaternion UStack_e8;
		Quaternion UStack_d8;
		Vector3 pUStack_c8;
		byte[] auStack_b8 = new byte[16];
		ParticleSystem.MainModule UStack_a8;
		float fStack_9c;
		ulong uStack_98;
		float fStack_90;
		ulong uStack_88;
		ulong uStack_80;
		ulong uStack_78;
		ulong uStack_70;
		Quaternion UStack_68;
		Quaternion UStack_58;
		ulong uStack_48;

		UStack_a8.m_ParticleSystem =(ParticleSystem.MainModule)null;
		UStack_118 = (Vector3)ZEXT812(0);
		UStack_58 = (Quaternion)ZEXT816(0);
		uStack_f0 = 0.0;
		auStack_f8 = (byte[])0x0;
		pMVar153 = (this.klass.vtable)._74_IsMine.method;
		pCVar154 = this;
		bVar140 = this.IsMine();
		if (bVar140) {
			if (this.AI == false) {
				pCVar154.FixedUpdateLookTitan();
				cVar144 = this.FinishSetup;
			}
			else {
				cVar144 = this.FinishSetup;
			}
			if (cVar144 != false) {
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar181.z = (float)(int)UStack_d8._8_8_;
				UVar181.w = (float)(int)((ulong)UStack_d8._8_8_ >> 0x20);
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				pCVar13 = this.Weapon;
				if (pCVar13 == null) goto label_05bd06bf;
				pCVar13.OnFixedUpdate();
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				pCVar155 = this.HookLeft;
				if (pCVar155 == null) goto label_05bd06bf;
				pCVar155.OnFixedUpdate();
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				pCVar155 = this.HookRight;
				if (pCVar155 == null) goto label_05bd06bf;
				pCVar155.OnFixedUpdate();
				pCVar13 = this.Special;
				if (pCVar13 != null) {
					pCVar13.OnFixedUpdate();
				}
			}
		}
		pCVar155 = this.HookLeft;
		if (pCVar155 != null) {
			pCVar155.FixedUpdateMock();
		}
		pCVar155 = this.HookRight;
		if (pCVar155 != null) {
			pCVar155.FixedUpdateMock();
		}
		this.FixedUpdate();
		bVar140 = this.IsMine();
		auVar186._8_4_ = uStack_f0;
		auVar186._0_8_ = auStack_f8;
		auVar185._8_4_ = uStack_f0;
		auVar185._0_8_ = auStack_f8;
		UVar37.z = UStack_d8.z;
		UVar37.w = UStack_d8.w;
		UVar37.x = UStack_d8.x;
		UVar37.y = UStack_d8.y;
		UVar181.z = UStack_d8.z;
		UVar181.w = UStack_d8.w;
		UVar181.x = UStack_d8.x;
		UVar181.y = UStack_d8.y;
		if (!bVar140) {
			return;
		}
		this._isReelingOut = false;
		if ((this._state == 7) || (this.Dead != false)) {
			pUVar14 = this.Cache;
			if (pUVar14 != null) {
				pUVar156 = pUVar14.Rigidbody;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				if (pUVar156 != null) {
					pUVar156.linearVelocity = (Vector3)(Vector3.zeroVector);
					bVar140 = this.IsSoundLoopActive(HumanSounds.GasLoop);
					if (bVar140) {
						this.ToggleSoundLoop(HumanSounds.GasLoop, false);
						this.ToggleSound(HumanSounds.GasEnd, true);
						return;
					}
					return;
				}
			}
			goto label_05bd06bf;
		}
		if (this.CarryState == 1) {
			pUVar14 = this.Cache;
			UVar181 = UVar37;
			auVar185 = auVar186;
			if (pUVar14 != null) {
				pUVar156 = pUVar14.Rigidbody;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				if (pUVar156 != null) {
					pUVar156.linearVelocity = (Vector3)(Vector3.zeroVector);
					this.Grounded = false;
					return;
				}
			}
			goto label_05bd06bf;
		}
		iVar146 = this.MountState;
		if (iVar146 == 1) {
			pCVar15 = this.Horse;
			bVar140 = ((Object)pCVar15 == null);
			if (bVar140) {
				this.Unmount(true);
			}
			auVar94._8_4_ = uStack_f0;
			auVar94._0_8_ = auStack_f8;
			auVar93._8_4_ = uStack_f0;
			auVar93._0_8_ = auStack_f8;
			auVar92._8_4_ = uStack_f0;
			auVar92._0_8_ = auStack_f8;
			auVar185._8_4_ = uStack_f0;
			auVar185._0_8_ = auStack_f8;
			UVar40.z = UStack_d8.z;
			UVar40.w = UStack_d8.w;
			UVar40.x = UStack_d8.x;
			UVar40.y = UStack_d8.y;
			UVar39.z = UStack_d8.z;
			UVar39.w = UStack_d8.w;
			UVar39.x = UStack_d8.x;
			UVar39.y = UStack_d8.y;
			UVar38.z = UStack_d8.z;
			UVar38.w = UStack_d8.w;
			UVar38.x = UStack_d8.x;
			UVar38.y = UStack_d8.y;
			UVar181.z = UStack_d8.z;
			UVar181.w = UStack_d8.w;
			UVar181.x = UStack_d8.x;
			UVar181.y = UStack_d8.y;
			iVar146 = this.MountState;
			if (iVar146 == 1) {
				pUVar14 = this.Cache;
				if (pUVar14 == null) goto label_05bd06bf;
				pCVar15 = this.Horse;
				UVar181 = UVar38;
				auVar185 = auVar92;
				if (pCVar15 == null) goto label_05bd06bf;
				pUVar16 = pCVar15.Cache;
				UVar181 = UVar39;
				auVar185 = auVar93;
				if (pUVar16 == null) goto label_05bd06bf;
				pUVar156 = pUVar16.Rigidbody;
				UVar181 = UVar40;
				auVar185 = auVar94;
				if (pUVar156 == null) goto label_05bd06bf;
				pUVar17 = pUVar14.Rigidbody;
				UVar182 = pUVar156.linearVelocity;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				if (pUVar17 == null) goto label_05bd06bf;
				pUVar17.linearVelocity = UVar182;
				if (this.IsAttackableState == false) {
					return;
				}
				iVar146 = this.MountState;
			}
		}
		auVar185._8_4_ = uStack_f0;
		auVar185._0_8_ = auStack_f8;
		auVar95._8_4_ = uStack_f0;
		auVar95._0_8_ = auStack_f8;
		UVar181.z = UStack_d8.z;
		UVar181.w = UStack_d8.w;
		UVar181.x = UStack_d8.x;
		UVar181.y = UStack_d8.y;
		UVar41.z = UStack_d8.z;
		UVar41.w = UStack_d8.w;
		UVar41.x = UStack_d8.x;
		UVar41.y = UStack_d8.y;
		if (iVar146 == 2) {
			if (this.IsAttackableState == false) {
				pUVar14 = this.Cache;
				if (pUVar14 != null) {
					pUVar156 = pUVar14.Rigidbody;
					auVar174 = il2cpp_runtime_helper_05b8d690(0);
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					if (pUVar156 != null) {
						pUVar156.linearVelocity = (Vector3)auVar174._0_12_;
						pMVar153 = null;
						this.ToggleSparks(false);
						if (this._state == 0) {
							return;
						}
						this.Idle();
						return;
					}
				}
				goto label_05bd06bf;
			}
			pUVar18 = this.MountedTransform;
			UVar181 = UVar41;
			auVar185 = auVar95;
			if (pUVar18 == null) goto label_05bd06bf;
			UVar183 = (Vector3)pUVar18.TransformPoint((Vector3)this.MountedPositionOffset);
			auVar185._8_4_ = uStack_f0;
			auVar185._0_8_ = auStack_f8;
			UVar181.z = UStack_d8.z;
			UVar181.w = UStack_d8.w;
			UVar181.x = UStack_d8.x;
			UVar181.y = UStack_d8.y;
			pUVar14 = this.Cache;
			if (pUVar14 == null) goto label_05bd06bf;
			pUVar156 = pUVar14.Rigidbody;
			uStack_88._0_4_ = this._lastMountedPosition.x;
			uStack_88._4_4_ = this._lastMountedPosition.y;
			uStack_80 = 0;
			UStack_e8.x = this._lastMountedPosition.z;
			auVar174._0_4_ = Time.deltaTime;
			auVar185._8_4_ = uStack_f0;
			auVar185._0_8_ = auStack_f8;
			UVar181.z = UStack_d8.z;
			UVar181.w = UStack_d8.w;
			UVar181.x = UStack_d8.x;
			UVar181.y = UStack_d8.y;
			if (pUVar156 == null) goto label_05bd06bf;
			UVar182.z = (UVar183.z - UStack_e8.x) / auVar174._0_4_;
			auStack_148._0_4_ = UVar183.x;
			auStack_148._4_4_ = UVar183.y;
			fStack_140 = (float)extraout_XMM0_Qb;
			fStack_13c = (float)((ulong)extraout_XMM0_Qb >> 0x20);
			auVar180._0_4_ = (float)auStack_148._0_4_ - (float)uStack_88;
			auVar180._4_4_ = (float)auStack_148._4_4_ - uStack_88._4_4_;
			auVar180._8_4_ = fStack_140 - (float)uStack_80;
			auVar180._12_4_ = fStack_13c - uStack_80._4_4_;
			auVar174._4_4_ = auVar174._0_4_;
			auVar174._8_4_ = auVar174._0_4_;
			auVar174._12_4_ = auVar174._0_4_;
			auVar174 = divps(auVar180, auVar174);
			UVar182._0_8_ = auVar174._0_8_;
			pUVar156.linearVelocity = UVar182;
			this._lastMountedPosition = UVar183;
		}
		pCVar154 = this._hookHuman;
		bVar140 = ((Object)pCVar154 != null);
		auVar97._8_4_ = uStack_f0;
		auVar97._0_8_ = auStack_f8;
		auVar96._8_4_ = uStack_f0;
		auVar96._0_8_ = auStack_f8;
		auVar185._8_4_ = uStack_f0;
		auVar185._0_8_ = auStack_f8;
		UVar43.z = UStack_d8.z;
		UVar43.w = UStack_d8.w;
		UVar43.x = UStack_d8.x;
		UVar43.y = UStack_d8.y;
		UVar42.z = UStack_d8.z;
		UVar42.w = UStack_d8.w;
		UVar42.x = UStack_d8.x;
		UVar42.y = UStack_d8.y;
		UVar181.z = UStack_d8.z;
		UVar181.w = UStack_d8.w;
		UVar181.x = UStack_d8.x;
		UVar181.y = UStack_d8.y;
		if (bVar140) {
			pCVar154 = this._hookHuman;
			if (pCVar154 == null) goto label_05bd06bf;
			if (pCVar154.Dead == false) {
				pUVar14 = pCVar154.Cache;
				UVar181 = UVar42;
				auVar185 = auVar96;
				if (pUVar14 == null) goto label_05bd06bf;
				pUVar18 = pUVar14.Transform;
				UVar181 = UVar43;
				auVar185 = auVar97;
				if (pUVar18 == null) goto label_05bd06bf;
				UVar182 = pUVar18.position;
				auVar98._8_4_ = uStack_f0;
				auVar98._0_8_ = auStack_f8;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar44.z = UStack_d8.z;
				UVar44.w = UStack_d8.w;
				UVar44.x = UStack_d8.x;
				UVar44.y = UStack_d8.y;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				pUVar14 = this.Cache;
				if (pUVar14 == null) goto label_05bd06bf;
				pUVar18 = pUVar14.Transform;
				UVar181 = UVar44;
				auVar185 = auVar98;
				if (pUVar18 == null) goto label_05bd06bf;
				UVar184 = pUVar18.position;
				auStack_148._0_4_ = UVar182.x;
				auStack_148._4_4_ = UVar182.y;
				uStack_98 = CONCAT44((float)auStack_148._4_4_ - UVar184.y, (float)auStack_148._0_4_ - UVar184.x);
				fStack_90 = UVar182.z - UVar184.z;
				il2cpp_runtime_helper_0599adc0();
				fVar165 = this._hookHumanConstantTimeLeft;
				fVar159 = Time.fixedDeltaTime;
				auVar100._8_4_ = uStack_f0;
				auVar100._0_8_ = auStack_f8;
				auVar99._8_4_ = uStack_f0;
				auVar99._0_8_ = auStack_f8;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar46.z = UStack_d8.z;
				UVar46.w = UStack_d8.w;
				UVar46.x = UStack_d8.x;
				UVar46.y = UStack_d8.y;
				UVar45.z = UStack_d8.z;
				UVar45.w = UStack_d8.w;
				UVar45.x = UStack_d8.x;
				UVar45.y = UStack_d8.y;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				fVar165 = fVar165 - fVar159;
				this._hookHumanConstantTimeLeft = fVar165;
				if (fVar165 <= 0.0) {
					this._hookHumanConstantTimeLeft = 1.0;
					pCVar154 = this._hookHuman;
					if (pCVar154 == null) goto label_05bd06bf;
					pUVar14 = pCVar154.Cache;
					UVar181 = UVar45;
					auVar185 = auVar99;
					if (pUVar14 == null) goto label_05bd06bf;
					__this_00 = pUVar14.PhotonView;
					UVar181 = UVar46;
					auVar185 = auVar100;
					if (__this_00 == null) goto label_05bd06bf;
					targetPlayer = __this_00._Owner_k__BackingField;
					parameters = (Object[])new object[1];
					auVar101._8_4_ = uStack_f0;
					auVar101._0_8_ = auStack_f8;
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar47.z = UStack_d8.z;
					UVar47.w = UStack_d8.w;
					UVar47.x = UStack_d8.x;
					UVar47.y = UStack_d8.y;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					pUVar14 = this.Cache;
					if (pUVar14 == null) goto label_05bd06bf;
					pPVar19 = pUVar14.PhotonView;
					UVar181 = UVar47;
					auVar185 = auVar101;
					if (pPVar19 == null) goto label_05bd06bf;
					UStack_d8.x = (float)pPVar19.viewIdField;
					value = (object)UStack_d8;
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					if (parameters == null) goto label_05bd06bf;
					il2cpp_codegen_array_element_type_check((Array)parameters, value);
					il2cpp_runtime_helper_02ac8d90(parameters, 0, value);
					__this_00.RPC("OnStillHookedByHuman", targetPlayer, parameters);
				}
			}
		}
		auVar102._8_4_ = uStack_f0;
		auVar102._0_8_ = auStack_f8;
		auVar185._8_4_ = uStack_f0;
		auVar185._0_8_ = auStack_f8;
		UVar48.z = UStack_d8.z;
		UVar48.w = UStack_d8.w;
		UVar48.x = UStack_d8.x;
		UVar48.y = UStack_d8.y;
		UVar181.z = UStack_d8.z;
		UVar181.w = UStack_d8.w;
		UVar181.x = UStack_d8.x;
		UVar181.y = UStack_d8.y;
		pUVar14 = this.Cache;
		if (pUVar14 == null) goto label_05bd06bf;
		pUVar156 = pUVar14.Rigidbody;
		UVar181 = UVar48;
		auVar185 = auVar102;
		if (pUVar156 == null) goto label_05bd06bf;
		UVar183 = (Vector3)pUVar156.linearVelocity;
		this._currentVelocity = UVar183;
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			UVar183 = this._currentVelocity;
		}
		ppUVar1 = &this.Cache;
		fVar165 = UVar183.z * UVar183.z + UVar183.y * UVar183.y + UVar183.x * UVar183.x;
		if (fVar165 < 0.0) {
			fVar165 = sqrtf(fVar165);
		}
		else {
			fVar165 = SQRT(fVar165);
		}
		auVar103._8_4_ = uStack_f0;
		auVar103._0_8_ = auStack_f8;
		auVar185._8_4_ = uStack_f0;
		auVar185._0_8_ = auStack_f8;
		UVar49.z = UStack_d8.z;
		UVar49.w = UStack_d8.w;
		UVar49.x = UStack_d8.x;
		UVar49.y = UStack_d8.y;
		UVar181.z = UStack_d8.z;
		UVar181.w = UStack_d8.w;
		UVar181.x = UStack_d8.x;
		UVar181.y = UStack_d8.y;
		uStack_88 = CONCAT44(uStack_88._4_4_, fVar165);
		if (*ppUVar1 == null) goto label_05bd06bf;
		pUVar18 = ((*ppUVar1).fields).Transform;
		UVar181 = UVar49;
		auVar185 = auVar103;
		if (pUVar18 == null) goto label_05bd06bf;
		UVar184 = pUVar18.forward;
		fStack_9c = UVar184.z;
		uStack_48 = UVar184._0_8_;
		if ((typeof(GameProgressManager)._2).cctor_finished_or_no_cctor == 0) {
			UVar184.z = fStack_9c;
			UVar184.x = (float)(undefined4)uStack_48;
			UVar184.y = (float)uStack_48._4_4_;
		}
		fStack_9c = UVar184.z;
		uStack_48 = UVar184._0_8_;
		GameProgressManager.RegisterSpeed((float)uStack_88);
		this.CheckGround();
		auVar104._8_4_ = uStack_f0;
		auVar104._0_8_ = auStack_f8;
		auVar185._8_4_ = uStack_f0;
		auVar185._0_8_ = auStack_f8;
		UVar50.z = UStack_d8.z;
		UVar50.w = UStack_d8.w;
		UVar50.x = UStack_d8.x;
		UVar50.y = UStack_d8.y;
		UVar181.z = UStack_d8.z;
		UVar181.w = UStack_d8.w;
		UVar181.x = UStack_d8.x;
		UVar181.y = UStack_d8.y;
		pMVar153 = extraout_RDX;
		if (this.MountState == 0) {
			if (*ppUVar1 == null) goto label_05bd06bf;
			pUVar18 = ((*ppUVar1).fields).Transform;
			UVar181 = UVar50;
			auVar185 = auVar104;
			if (pUVar18 == null) goto label_05bd06bf;
			fVar165 = *(float)(&g_data_0100ae50 + (ulong)(this.Grounded == false) * 4);
			UVar179 = pUVar18.rotation;
			pUStack_c8 = UVar179._8_8_;
			UStack_e8._0_8_ = UVar179._0_8_;
			UVar181 = this._targetRotation;
			UStack_e8._8_8_ = extraout_XMM0_Qb_00;
			fVar159 = Time.deltaTime;
			UStack_d8.x = UStack_e8.x;
			UStack_d8.y = UStack_e8.y;
			UStack_d8._8_8_ = pUStack_c8;
			UStack_128.x = UVar181.x;
			UStack_128.y = UVar181.y;
			UStack_68.x = UStack_128.x;
			UStack_68.y = UStack_128.y;
			UStack_128.z = UVar181.z;
			UStack_128.w = UVar181.w;
			UStack_68.z = UStack_128.z;
			UStack_68.w = UStack_128.w;
			UVar179 = Quaternion.Internal_Lerp(ref UStack_d8, ref UStack_68, fVar159 * fVar165);
			pUVar18.rotation = UVar179;
			pMVar153 = extraout_RDX_00;
		}
		pUStack_c8 = &this._currentVelocity;
		bVar141 = this.FixedUpdateLaunch(true);
		pMVar153 = null;
		bVar142 = this.FixedUpdateLaunch(false);
		uVar149 = (uint)bVar141;
		bVar140 = bVar142 || bVar141;
		uVar157 = (uint)bVar140;
		this._pivot = bVar140;
		this._pivotLeft = bVar141;
		UStack_e8.x = (float)(uint)bVar142;
		this._pivotRight = bVar142;
		bVar141 = bVar140;
		if (this.Grounded == false) {
			pCVar15 = this.Horse;
			bVar143 = ((Object)pCVar15 != null);
			if (bVar143) {
				pCVar21 = this.Animation;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				if (pCVar21 == null) goto label_05bd06bf;
				bVar143 = pCVar21.IsPlaying(HumanAnimations.HorseMount);
				if (!bVar143) {
					pCVar21 = this.Animation;
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					if (pCVar21 == null) goto label_05bd06bf;
					bVar143 = pCVar21.IsPlaying(HumanAnimations.AirFall);
					if (!bVar143) goto label_05bcd646;
				}
				auVar114._8_4_ = uStack_f0;
				auVar114._0_8_ = auStack_f8;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar60.z = UStack_d8.z;
				UVar60.w = UStack_d8.w;
				UVar60.x = UStack_d8.x;
				UVar60.y = UStack_d8.y;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				if (*ppUVar1 == null) goto label_05bd06bf;
				pUVar156 = ((*ppUVar1).fields).Rigidbody;
				UVar181 = UVar60;
				auVar185 = auVar114;
				if (pUVar156 == null) goto label_05bd06bf;
				UVar182 = pUVar156.linearVelocity;
				auVar116._8_4_ = uStack_f0;
				auVar116._0_8_ = auStack_f8;
				auVar115._8_4_ = uStack_f0;
				auVar115._0_8_ = auStack_f8;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar62.z = UStack_d8.z;
				UVar62.w = UStack_d8.w;
				UVar62.x = UStack_d8.x;
				UVar62.y = UStack_d8.y;
				UVar61.z = UStack_d8.z;
				UVar61.w = UStack_d8.w;
				UVar61.x = UStack_d8.x;
				UVar61.y = UStack_d8.y;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				if (0.0 <= UVar182.y) goto label_05bcd646;
				pCVar15 = this.Horse;
				if (pCVar15 == null) goto label_05bd06bf;
				pUVar14 = pCVar15.Cache;
				UVar181 = UVar61;
				auVar185 = auVar115;
				if (pUVar14 == null) goto label_05bd06bf;
				pUVar18 = pUVar14.Transform;
				UVar181 = UVar62;
				auVar185 = auVar116;
				if (pUVar18 == null) goto label_05bd06bf;
				UVar182 = pUVar18.position;
				UStack_108.x = UVar182.z;
				il2cpp_runtime_helper_05bbcf10(0);
				auVar117._8_4_ = uStack_f0;
				auVar117._0_8_ = auStack_f8;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar63.z = UStack_d8.z;
				UVar63.w = UStack_d8.w;
				UVar63.x = UStack_d8.x;
				UVar63.y = UStack_d8.y;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				auVar167._8_8_ = extraout_XMM1_Qb_00;
				auVar167._0_8_ = extraout_XMM1_Qa_00;
				if (*ppUVar1 == null) goto label_05bd06bf;
				pUVar18 = ((*ppUVar1).fields).Transform;
				UVar181 = UVar63;
				auVar185 = auVar117;
				if (pUVar18 == null) goto label_05bd06bf;
				auVar185 = auVar167._4_12_;
				UStack_108.x = UStack_108.x + (float)extraout_XMM1_Qa_00 * 1.65;
				pUVar18.position;
				auVar34._4_8_ = in_XMM3._8_8_;
				auVar34._0_4_ = auVar185._0_4_;
				in_XMM3._0_8_ = auVar34._0_8_ << 0x20;
				in_XMM3._8_4_ = auVar185._4_4_;
				in_XMM3._12_4_ = auVar185._8_4_;
				fVar165 = (float)il2cpp_runtime_helper_05956b50(0);
				auVar118._8_4_ = uStack_f0;
				auVar118._0_8_ = auStack_f8;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar64.z = UStack_d8.z;
				UVar64.w = UStack_d8.w;
				UVar64.x = UStack_d8.x;
				UVar64.y = UStack_d8.y;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				if (1.0 <= fVar165) goto label_05bcd646;
				if (*ppUVar1 == null) goto label_05bd06bf;
				pCVar15 = this.Horse;
				UVar181 = UVar64;
				auVar185 = auVar118;
				if (pCVar15 == null) goto label_05bd06bf;
				pUVar18 = ((*ppUVar1).fields).Transform;
				UVar182 = pCVar15.SaddlePosition;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				if (pUVar18 == null) goto label_05bd06bf;
				pUVar18.position = UVar182;
				auVar121._8_4_ = uStack_f0;
				auVar121._0_8_ = auStack_f8;
				auVar120._8_4_ = uStack_f0;
				auVar120._0_8_ = auStack_f8;
				auVar119._8_4_ = uStack_f0;
				auVar119._0_8_ = auStack_f8;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar67.z = UStack_d8.z;
				UVar67.w = UStack_d8.w;
				UVar67.x = UStack_d8.x;
				UVar67.y = UStack_d8.y;
				UVar66.z = UStack_d8.z;
				UVar66.w = UStack_d8.w;
				UVar66.x = UStack_d8.x;
				UVar66.y = UStack_d8.y;
				UVar65.z = UStack_d8.z;
				UVar65.w = UStack_d8.w;
				UVar65.x = UStack_d8.x;
				UVar65.y = UStack_d8.y;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				if (*ppUVar1 == null) goto label_05bd06bf;
				pCVar15 = this.Horse;
				UVar181 = UVar65;
				auVar185 = auVar119;
				if (pCVar15 == null) goto label_05bd06bf;
				pUVar14 = pCVar15.Cache;
				UVar181 = UVar66;
				auVar185 = auVar120;
				if (pUVar14 == null) goto label_05bd06bf;
				pUVar18 = pUVar14.Transform;
				UVar181 = UVar67;
				auVar185 = auVar121;
				if (pUVar18 == null) goto label_05bd06bf;
				pUVar151 = ((*ppUVar1).fields).Transform;
				UVar179 = pUVar18.rotation;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				if (pUVar151 == null) goto label_05bd06bf;
				pUVar151.rotation = UVar179;
				auVar122._8_4_ = uStack_f0;
				auVar122._0_8_ = auStack_f8;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar68.z = UStack_d8.z;
				UVar68.w = UStack_d8.w;
				UVar68.x = UStack_d8.x;
				UVar68.y = UStack_d8.y;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				this.MountState = 1;
				pCVar15 = this.Horse;
				if (pCVar15 == null) goto label_05bd06bf;
				pUVar14 = pCVar15.Cache;
				UVar181 = UVar68;
				auVar185 = auVar122;
				if (pUVar14 == null) goto label_05bd06bf;
				this.MountedTransform = pUVar14.Transform;
				auVar124._8_4_ = uStack_f0;
				auVar124._0_8_ = auStack_f8;
				auVar123._8_4_ = uStack_f0;
				auVar123._0_8_ = auStack_f8;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar70.z = UStack_d8.z;
				UVar70.w = UStack_d8.w;
				UVar70.x = UStack_d8.x;
				UVar70.y = UStack_d8.y;
				UVar69.z = UStack_d8.z;
				UVar69.w = UStack_d8.w;
				UVar69.x = UStack_d8.x;
				UVar69.y = UStack_d8.y;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				pSVar22 = SettingsManager.InGameCurrent;
				if (pSVar22 == null) goto label_05bd06bf;
				pSVar23 = pSVar22.Misc;
				UVar181 = UVar69;
				auVar185 = auVar123;
				if (pSVar23 == null) goto label_05bd06bf;
				pSVar24 = pSVar23.HorsebackCombat;
				UVar181 = UVar70;
				auVar185 = auVar124;
				if (pSVar24 == null) goto label_05bd06bf;
				this.CanMountedAttack = pSVar24._value;
				this.SetInterpolation(false);
				pCVar21 = this.Animation;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				if (pCVar21 == null) goto label_05bd06bf;
				bVar143 = pCVar21.IsPlaying(HumanAnimations.HorseIdle);
				if (bVar143) goto label_05bcf15b;
				ppSVar148 = &HumanAnimations.HorseIdle;
				fVar165 = 0.1;
	label_05bcf14b: ;
				this.CrossFade(*ppSVar148, fVar165, 0.0);
			}
			else {
	label_05bcd646: ;
				pCVar21 = this.Animation;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				if (pCVar21 == null) goto label_05bd06bf;
				pMVar153 = (MethodInfo)HumanAnimations.Dash;
				fVar165 = pCVar21.GetNormalizedTime((String)pMVar153);
				if (0.99 <= fVar165) goto label_05bcd962;
				if (this._state == 0) {
					pCVar21 = this.Animation;
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					if (pCVar21 == null) goto label_05bd06bf;
					bVar143 = pCVar21.IsPlaying(HumanAnimations.Dash);
					if (!bVar143) {
						pCVar21 = this.Animation;
						auVar185._8_4_ = uStack_f0;
						auVar185._0_8_ = auStack_f8;
						UVar181.z = UStack_d8.z;
						UVar181.w = UStack_d8.w;
						UVar181.x = UStack_d8.x;
						UVar181.y = UStack_d8.y;
						if (pCVar21 == null) goto label_05bd06bf;
						bVar143 = pCVar21.IsPlaying(HumanAnimations.WallRun);
						if (!bVar143) {
							pCVar21 = this.Animation;
							auVar185._8_4_ = uStack_f0;
							auVar185._0_8_ = auStack_f8;
							UVar181.z = UStack_d8.z;
							UVar181.w = UStack_d8.w;
							UVar181.x = UStack_d8.x;
							UVar181.y = UStack_d8.y;
							if (pCVar21 == null) goto label_05bd06bf;
							bVar143 = pCVar21.IsPlaying(HumanAnimations.ToRoof);
							if (!bVar143) {
								pCVar21 = this.Animation;
								auVar185._8_4_ = uStack_f0;
								auVar185._0_8_ = auStack_f8;
								UVar181.z = UStack_d8.z;
								UVar181.w = UStack_d8.w;
								UVar181.x = UStack_d8.x;
								UVar181.y = UStack_d8.y;
								if (pCVar21 == null) goto label_05bd06bf;
								bVar143 = pCVar21.IsPlaying(HumanAnimations.HorseMount);
								if (!bVar143) {
									pCVar21 = this.Animation;
									auVar185._8_4_ = uStack_f0;
									auVar185._0_8_ = auStack_f8;
									UVar181.z = UStack_d8.z;
									UVar181.w = UStack_d8.w;
									UVar181.x = UStack_d8.x;
									UVar181.y = UStack_d8.y;
									if (pCVar21 == null) goto label_05bd06bf;
									bVar143 = pCVar21.IsPlaying(HumanAnimations.HorseDismount);
									if (!bVar143) {
										pCVar21 = this.Animation;
										auVar185._8_4_ = uStack_f0;
										auVar185._0_8_ = auStack_f8;
										UVar181.z = UStack_d8.z;
										UVar181.w = UStack_d8.w;
										UVar181.x = UStack_d8.x;
										UVar181.y = UStack_d8.y;
										if (pCVar21 == null) goto label_05bd06bf;
										bVar143 = pCVar21.IsPlaying(HumanAnimations.AirRelease);
										if ((!bVar143) && (this.MountState == 0)) {
											pCVar21 = this.Animation;
											auVar185._8_4_ = uStack_f0;
											auVar185._0_8_ = auStack_f8;
											UVar181.z = UStack_d8.z;
											UVar181.w = UStack_d8.w;
											UVar181.x = UStack_d8.x;
											UVar181.y = UStack_d8.y;
											if (pCVar21 == null) goto label_05bd06bf;
											bVar143 = pCVar21.IsPlaying(HumanAnimations. AirHookLJust);
											if (bVar143) {
												pCVar21 = this.Animation;
												auVar185._8_4_ = uStack_f0;
												auVar185._0_8_ = auStack_f8;
												UVar181.z = UStack_d8.z;
												UVar181.w = UStack_d8.w;
												UVar181.x = UStack_d8.x;
												UVar181.y = UStack_d8.y;
												if (pCVar21 == null) goto label_05bd06bf;
												fVar165 = pCVar21.GetNormalizedTime(HumanAnimations. AirHookLJust);
												if (fVar165 < 1.0) goto label_05bcf15b;
											}
											pCVar21 = this.Animation;
											auVar185._8_4_ = uStack_f0;
											auVar185._0_8_ = auStack_f8;
											UVar181.z = UStack_d8.z;
											UVar181.w = UStack_d8.w;
											UVar181.x = UStack_d8.x;
											UVar181.y = UStack_d8.y;
											if (pCVar21 == null) goto label_05bd06bf;
											pMVar153 = (MethodInfo)HumanAnimations.AirHookRJust;
											bVar143 = pCVar21.IsPlaying((String)pMVar153);
											if (bVar143) {
												pCVar21 = this.Animation;
												auVar185._8_4_ = uStack_f0;
												auVar185._0_8_ = auStack_f8;
												UVar181.z = UStack_d8.z;
												UVar181.w = UStack_d8.w;
												UVar181.x = UStack_d8.x;
												UVar181.y = UStack_d8.y;
												if (pCVar21 == null) goto label_05bd06bf;
												pMVar153 = (MethodInfo)HumanAnimations.AirHookRJust;
												fVar165 = pCVar21.GetNormalizedTime((String)pMVar153);
												if (fVar165 < 1.0) goto label_05bcf15b;
											}
	label_05bcd962: ;
											if (this._wallSlide == false) {
												bVar143 = this.IsHookedAny();
												if (!bVar143) {
													pCVar21 = this.Animation;
													auVar185._8_4_ = uStack_f0;
													auVar185._0_8_ = auStack_f8;
													UVar181.z = UStack_d8.z;
													UVar181.w = UStack_d8.w;
													UVar181.x = UStack_d8.x;
													UVar181.y = UStack_d8.y;
													if (pCVar21 == null) goto label_05bd06bf;
													bVar143 = pCVar21.IsPlaying(HumanAnimations. AirHookL);
													if (!bVar143) {
														pCVar21 = this.Animation;
														auVar185._8_4_ = uStack_f0;
														auVar185._0_8_ = auStack_f8;
														UVar181.z = UStack_d8.z;
														UVar181.w = UStack_d8.w;
														UVar181.x = UStack_d8.x;
														UVar181.y = UStack_d8.y;
														if (pCVar21 == null) goto label_05bd06bf;
														bVar143 = pCVar21.IsPlaying(HumanAnimations. AirHookR);
														if (!bVar143) {
															pCVar21 = this.Animation;
															auVar185._8_4_ = uStack_f0;
															auVar185._0_8_ = auStack_f8;
															UVar181.z = UStack_d8.z;
															UVar181.w = UStack_d8.w;
															UVar181.x = UStack_d8.x;
															UVar181.y = UStack_d8.y;
															if (pCVar21 == null) goto label_05bd06bf;
															pMVar153 = (MethodInfo)HumanAnimations.AirHook;
															bVar143 = pCVar21.IsPlaying((String)pMVar153);
															if (!bVar143) goto label_05bcdfdc;
														}
													}
													auVar132._8_4_ = uStack_f0;
													auVar132._0_8_ = auStack_f8;
													auVar185._8_4_ = uStack_f0;
													auVar185._0_8_ = auStack_f8;
													UVar85.z = UStack_d8.z;
													UVar85.w = UStack_d8.w;
													UVar85.x = UStack_d8.x;
													UVar85.y = UStack_d8.y;
													UVar181.z = UStack_d8.z;
													UVar181.w = UStack_d8.w;
													UVar181.x = UStack_d8.x;
													UVar181.y = UStack_d8.y;
													if (*ppUVar1 == null) goto label_05bd06bf;
													pUVar156 = ((*ppUVar1).fields).Rigidbody;
													UVar181 = UVar85;
													auVar185 = auVar132;
													if (pUVar156 == null) goto label_05bd06bf;
													pMVar153 = null;
													UVar182 = pUVar156.linearVelocity;
													if (20.0 < UVar182.y) {
														ppSVar148 = &HumanAnimations.AirRelease;
														fVar165 = 0.0;
														goto label_05bcf14b;
													}
												}
	label_05bcdfdc: ;
												if (ABS(this._currentVelocity.z) + ABS(this._currentVelocity.x) <= 25.0) {
													pfVar2 = &this._currentVelocity.y;
													pCVar21 = this.Animation;
													uVar12 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
													if (0.0 < *pfVar2 || *pfVar2 == 0.0) {
														if (uVar12 == 0) {
														}
														auVar185._8_4_ = uStack_f0;
														auVar185._0_8_ = auStack_f8;
														UVar181.z = UStack_d8.z;
														UVar181.w = UStack_d8.w;
														UVar181.x = UStack_d8.x;
														UVar181.y = UStack_d8.y;
														if (pCVar21 == null) goto label_05bd06bf;
														bVar143 = pCVar21.IsPlaying(HumanAnimations. AirRise);
														if (!bVar143) {
															lVar147 = 0x178;
															goto label_05bceda9;
														}
													}
													else {
														if (uVar12 == 0) {
														}
														auVar185._8_4_ = uStack_f0;
														auVar185._0_8_ = auStack_f8;
														UVar181.z = UStack_d8.z;
														UVar181.w = UStack_d8.w;
														UVar181.x = UStack_d8.x;
														UVar181.y = UStack_d8.y;
														if (pCVar21 == null) goto label_05bd06bf;
														bVar143 = pCVar21.IsPlaying(HumanAnimations. AirFall);
														if (!bVar143) {
															lVar147 = 0x170;
	label_05bceda9: ;
															ppSVar148 = (String*)((long)&HumanAnimations.HorseMount + lVar147);
															fVar165 = 0.2;
															goto label_05bcf14b;
														}
													}
												}
												else {
													bVar143 = this.IsHookedAny();
													auVar185._8_4_ = uStack_f0;
													auVar185._0_8_ = auStack_f8;
													UVar181.z = UStack_d8.z;
													UVar181.w = UStack_d8.w;
													UVar181.x = UStack_d8.x;
													UVar181.y = UStack_d8.y;
													if (bVar143) {
														pCVar20 = this.Setup;
														if (pCVar20 == null) goto label_05bd06bf;
														if ((pCVar20.Weapon | 2U) == 3) {
															bVar143 = this.IsHookedLeft();
															if (bVar143) {
																pCVar21 = this.Animation;
																auVar185._8_4_ = uStack_f0;
																auVar185._0_8_ = auStack_f8;
																UVar181.z = UStack_d8.z;
																UVar181.w = UStack_d8.w;
																UVar181.x = UStack_d8.x;
																UVar181.y = UStack_d8.y;
																if (pCVar21 == null) goto label_05bd06bf;
																bVar143 = pCVar21.IsPlaying(typeof(HumanAnimations).static_fields .AHSSHookForwardL);
																if (!bVar143) {
																	ppSVar148 = &HumanAnimations. AHSSHookForwardL;
																	fVar165 = 0.1;
																	goto label_05bcf14b;
																}
															}
															else {
																bVar143 = this.IsHookedRight();
																pCVar21 = this.Animation;
																uVar12 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
																if (bVar143) {
																	if (uVar12 == 0) {
																	}
																	auVar185._8_4_ = uStack_f0;
																	auVar185._0_8_ = auStack_f8;
																	UVar181.z = UStack_d8.z;
																	UVar181.w = UStack_d8.w;
																	UVar181.x = UStack_d8.x;
																	UVar181.y = UStack_d8.y;
																	if (pCVar21 == null) goto label_05bd06bf;
																	bVar143 = pCVar21.IsPlaying(typeof(HumanAnimations). static_fields.AHSSHookForwardR);
																	if (!bVar143) {
																		lVar147 = 0xd8;
																		goto label_05bcf139;
																	}
																}
																else {
																	if (uVar12 == 0) {
																	}
																	auVar185._8_4_ = uStack_f0;
																	auVar185._0_8_ = auStack_f8;
																	UVar181.z = UStack_d8.z;
																	UVar181.w = UStack_d8.w;
																	UVar181.x = UStack_d8.x;
																	UVar181.y = UStack_d8.y;
																	if (pCVar21 == null) goto label_05bd06bf;
																	bVar143 = pCVar21.IsPlaying(typeof(HumanAnimations). static_fields.AHSSHookForwardBoth);
																	if (!bVar143) {
																		lVar147 = 200;
																		goto label_05bcf139;
																	}
																}
															}
														}
														else {
															bVar143 = this.IsHookedRight();
															if (bVar143) {
																bVar143 = this.IsHookedLeft();
																pCVar21 = this.Animation;
																uVar12 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
																if (bVar143) {
																	if (uVar12 == 0) {
																	}
																	auVar185._8_4_ = uStack_f0;
																	auVar185._0_8_ = auStack_f8;
																	UVar181.z = UStack_d8.z;
																	UVar181.w = UStack_d8.w;
																	UVar181.x = UStack_d8.x;
																	UVar181.y = UStack_d8.y;
																	if (pCVar21 == null) goto label_05bd06bf;
																	bVar143 = pCVar21.IsPlaying(typeof(HumanAnimations). static_fields.AirHook);
																	if (!bVar143) {
																		lVar147 = 0x160;
																		goto label_05bcf139;
																	}
																}
																else {
																	if (uVar12 == 0) {
																	}
																	auVar185._8_4_ = uStack_f0;
																	auVar185._0_8_ = auStack_f8;
																	UVar181.z = UStack_d8.z;
																	UVar181.w = UStack_d8.w;
																	UVar181.x = UStack_d8.x;
																	UVar181.y = UStack_d8.y;
																	if (pCVar21 == null) goto label_05bd06bf;
																	bVar143 = pCVar21.IsPlaying(typeof(HumanAnimations). static_fields.AirHookR);
																	if (!bVar143) {
																		lVar147 = 0x158;
	label_05bcf139: ;
																		ppSVar148 = (String*)((long)&HumanAnimations. HorseMount + lVar147);
																		fVar165 = 0.1;
																		goto label_05bcf14b;
																	}
																}
															}
															else {
																pCVar21 = this.Animation;
																auVar185._8_4_ = uStack_f0;
																auVar185._0_8_ = auStack_f8;
																UVar181.z = UStack_d8.z;
																UVar181.w = UStack_d8.w;
																UVar181.x = UStack_d8.x;
																UVar181.y = UStack_d8.y;
																if (pCVar21 == null) goto label_05bd06bf;
																bVar143 = pCVar21.IsPlaying(typeof(HumanAnimations).static_fields .AirHookL);
																if (!bVar143) {
																	lVar147 = 0x150;
																	goto label_05bcf139;
																}
															}
														}
													}
													else {
														fVar165 = atan2f(this._currentVelocity.z, this._currentVelocity.x);
														auVar133._8_4_ = uStack_f0;
														auVar133._0_8_ = auStack_f8;
														auVar185._8_4_ = uStack_f0;
														auVar185._0_8_ = auStack_f8;
														UVar86.z = UStack_d8.z;
														UVar86.w = UStack_d8.w;
														UVar86.x = UStack_d8.x;
														UVar86.y = UStack_d8.y;
														UVar181.z = UStack_d8.z;
														UVar181.w = UStack_d8.w;
														UVar181.x = UStack_d8.x;
														UVar181.y = UStack_d8.y;
														pUVar14 = this.Cache;
														if (pUVar14 == null) goto label_05bd06bf;
														pUVar18 = pUVar14.Transform;
														UVar181 = UVar86;
														auVar185 = auVar133;
														if (pUVar18 == null) goto label_05bd06bf;
														UStack_58 = (Quaternion)pUVar18.rotation;
														il2cpp_runtime_helper_05bbd050(&UStack_58, 0);
														fVar159 = extraout_XMM0_Db + -90.0 + fVar165 * 57.29578;
														fVar165 = floorf(fVar159 / 360.0);
														fVar159 = fVar165 * -360.0 + fVar159;
														auVar176 = ZEXT812(0x43b40000);
														if (fVar159 <= auVar176._0_4_) {
															auVar176._4_8_ = auVar176._4_8_;
															auVar176._0_4_ = fVar159;
														}
														in_XMM3._12_4_ = 0;
														in_XMM3._0_12_ = auVar176;
														fVar165 = (float)(-(uint)(0.0 <= fVar159) & auVar176._0_4_);
														fVar165 = (float)(~-(uint)(180.0 < fVar165) & (uint)fVar165 |(uint)(fVar165 + -360.0) & -(uint)(180.0 < fVar165));
														if (45.0 <= ABS(fVar165)) {
															if ((fVar165 <= -135.0) || (0.0 <= fVar165)) {
																pCVar21 = this.Animation;
																uVar12 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
																if ((135.0 <= fVar165) || (fVar165 <= 0.0)) {
																	if (uVar12 == 0) {
																	}
																	auVar185._8_4_ = uStack_f0;
																	auVar185._0_8_ = auStack_f8;
																	UVar181.z = UStack_d8.z;
																	UVar181.w = UStack_d8.w;
																	UVar181.x = UStack_d8.x;
																	UVar181.y = UStack_d8.y;
																	if (pCVar21 == null) goto label_05bd06bf;
																	bVar143 = pCVar21.IsPlaying(typeof(HumanAnimations). static_fields.Air2Backward);
																	if (!bVar143) {
																		lVar147 = 0x198;
																		goto label_05bcf0cf;
																	}
																}
																else {
																	if (uVar12 == 0) {
																	}
																	auVar185._8_4_ = uStack_f0;
																	auVar185._0_8_ = auStack_f8;
																	UVar181.z = UStack_d8.z;
																	UVar181.w = UStack_d8.w;
																	UVar181.x = UStack_d8.x;
																	UVar181.y = UStack_d8.y;
																	if (pCVar21 == null) goto label_05bd06bf;
																	bVar143 = pCVar21.IsPlaying(typeof(HumanAnimations). static_fields.Air2Left);
																	if (!bVar143) {
																		lVar147 = 400;
	label_05bcf0cf: ;
																		ppSVar148 = (String*)((long)&HumanAnimations. HorseMount + lVar147);
																		fVar165 = 0.2;
																		goto label_05bcf14b;
																	}
																}
															}
															else {
																pCVar21 = this.Animation;
																auVar185._8_4_ = uStack_f0;
																auVar185._0_8_ = auStack_f8;
																UVar181.z = UStack_d8.z;
																UVar181.w = UStack_d8.w;
																UVar181.x = UStack_d8.x;
																UVar181.y = UStack_d8.y;
																if (pCVar21 == null) goto label_05bd06bf;
																bVar143 = pCVar21.IsPlaying(typeof(HumanAnimations).static_fields .Air2Right);
																if (!bVar143) {
																	lVar147 = 0x188;
																	goto label_05bcf0cf;
																}
															}
														}
														else {
															pCVar21 = this.Animation;
															auVar185._8_4_ = uStack_f0;
															auVar185._0_8_ = auStack_f8;
															UVar181.z = UStack_d8.z;
															UVar181.w = UStack_d8.w;
															UVar181.x = UStack_d8.x;
															UVar181.y = UStack_d8.y;
															if (pCVar21 == null) goto label_05bd06bf;
															bVar143 = pCVar21.IsPlaying(HumanAnimations. Air2);
															if (!bVar143) {
																lVar147 = 0x180;
																goto label_05bceda9;
															}
														}
													}
												}
											}
											else {
												pCVar21 = this.Animation;
												auVar185._8_4_ = uStack_f0;
												auVar185._0_8_ = auStack_f8;
												UVar181.z = UStack_d8.z;
												UVar181.w = UStack_d8.w;
												UVar181.x = UStack_d8.x;
												UVar181.y = UStack_d8.y;
												if (pCVar21 == null) goto label_05bd06bf;
												bVar143 = pCVar21.IsPlaying(HumanAnimations.Slide);
												if (!bVar143) {
													ppSVar148 = &HumanAnimations.Slide;
													fVar165 = 0.1;
													goto label_05bcf14b;
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
	label_05bcf15b: ;
			pCVar21 = this.Animation;
			auVar185._8_4_ = uStack_f0;
			auVar185._0_8_ = auStack_f8;
			UVar181.z = UStack_d8.z;
			UVar181.w = UStack_d8.w;
			UVar181.x = UStack_d8.x;
			UVar181.y = UStack_d8.y;
			if (pCVar21 == null) goto label_05bd06bf;
			bVar143 = pCVar21.IsPlaying(HumanAnimations.AirRise);
			if (!bVar143) {
				if (this._state == 0) {
					pCVar21 = this.Animation;
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					if (pCVar21 == null) goto label_05bd06bf;
					bVar143 = pCVar21.IsPlaying(HumanAnimations.AirRelease);
					if (!bVar143) goto label_05bcf238;
					pCVar21 = this.Animation;
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					if (pCVar21 == null) goto label_05bd06bf;
					fVar165 = pCVar21.GetNormalizedTime(HumanAnimations.AirRelease);
					if (fVar165 < 1.0) goto label_05bcf238;
	label_05bcf2b7: ;
					this.CrossFade(HumanAnimations.AirRise, 0.2, 0.0);
				}
				else {
	label_05bcf238: ;
					pCVar21 = this.Animation;
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					if (pCVar21 == null) goto label_05bd06bf;
					bVar143 = pCVar21.IsPlaying(HumanAnimations.HorseDismount);
					if (bVar143) {
						pCVar21 = this.Animation;
						auVar185._8_4_ = uStack_f0;
						auVar185._0_8_ = auStack_f8;
						UVar181.z = UStack_d8.z;
						UVar181.w = UStack_d8.w;
						UVar181.x = UStack_d8.x;
						UVar181.y = UStack_d8.y;
						if (pCVar21 == null) goto label_05bd06bf;
						fVar165 = pCVar21.GetNormalizedTime(HumanAnimations.HorseDismount);
						if (1.0 <= fVar165) goto label_05bcf2b7;
					}
				}
			}
			pCVar21 = this.Animation;
			auVar185._8_4_ = uStack_f0;
			auVar185._0_8_ = auStack_f8;
			UVar181.z = UStack_d8.z;
			UVar181.w = UStack_d8.w;
			UVar181.x = UStack_d8.x;
			UVar181.y = UStack_d8.y;
			if (pCVar21 == null) goto label_05bd06bf;
			pMVar153 = (MethodInfo)HumanAnimations.ToRoof;
			bVar143 = pCVar21.IsPlaying((String)pMVar153);
			if (bVar143) {
				pCVar21 = this.Animation;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				if (pCVar21 == null) goto label_05bd06bf;
				fVar165 = pCVar21.GetNormalizedTime(HumanAnimations.ToRoof);
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				auVar125._8_4_ = uStack_f0;
				auVar125._0_8_ = auStack_f8;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				UVar71.z = UStack_d8.z;
				UVar71.w = UStack_d8.w;
				UVar71.x = UStack_d8.x;
				UVar71.y = UStack_d8.y;
				if (0.22 <= fVar165) {
					if (this._wallJump == false) {
						this._wallJump = true;
						pUVar14 = this.Cache;
						if (pUVar14 == null) goto label_05bd06bf;
						pUVar156 = pUVar14.Rigidbody;
						auVar186 = il2cpp_runtime_helper_05bbcf10(0);
						auVar185._8_4_ = uStack_f0;
						auVar185._0_8_ = auStack_f8;
						UVar181.z = UStack_d8.z;
						UVar181.w = UStack_d8.w;
						UVar181.x = UStack_d8.x;
						UVar181.y = UStack_d8.y;
						if (pUVar156 == null) goto label_05bd06bf;
						force_01.z = auVar186._8_4_ * 8.0;
						force_01.x = auVar186._0_4_ * 8.0;
						force_01.y = auVar186._4_4_ * 8.0;
						pUVar156.AddForce(force_01, 1);
					}
					auVar127._8_4_ = uStack_f0;
					auVar127._0_8_ = auStack_f8;
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar73.z = UStack_d8.z;
					UVar73.w = UStack_d8.w;
					UVar73.x = UStack_d8.x;
					UVar73.y = UStack_d8.y;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					pUVar14 = *ppUVar1;
					if (pUVar14 == null) goto label_05bd06bf;
					pUVar18 = pUVar14.Transform;
					UVar181 = UVar73;
					auVar185 = auVar127;
					if (pUVar18 == null) goto label_05bd06bf;
					pUVar156 = pUVar14.Rigidbody;
					UVar182 = pUVar18.forward;
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					if (pUVar156 == null) goto label_05bd06bf;
					force_02.z = UVar182.z * 0.05;
					force_02.x = UVar182.x * 0.05;
					force_02.y = UVar182.y * 0.05;
					pUVar156.AddForce(force_02, 1);
				}
				else {
					UVar181 = UVar71;
					auVar185 = auVar125;
					if (*ppUVar1 == null) goto label_05bd06bf;
					pUVar156 = ((*ppUVar1).fields).Rigidbody;
					auVar174 = il2cpp_runtime_helper_05b8d690(0);
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					if (pUVar156 == null) goto label_05bd06bf;
					pUVar156.linearVelocity = (Vector3)auVar174._0_12_;
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					if (*ppUVar1 == null) goto label_05bd06bf;
					pUVar156 = ((*ppUVar1).fields).Rigidbody;
					UStack_118 = (Vector3)this.get_Gravity();
					fVar165 = (float)il2cpp_runtime_helper_0599adc0(&UStack_118);
					auVar126._8_4_ = uStack_f0;
					auVar126._0_8_ = auStack_f8;
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar72.z = UStack_d8.z;
					UVar72.w = UStack_d8.w;
					UVar72.x = UStack_d8.x;
					UVar72.y = UStack_d8.y;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					pUVar14 = this.Cache;
					if (pUVar14 == null) goto label_05bd06bf;
					pUVar17 = pUVar14.Rigidbody;
					UVar181 = UVar72;
					auVar185 = auVar126;
					if (pUVar17 == null) goto label_05bd06bf;
					fVar159 = pUVar17.mass;
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					if (pUVar156 == null) goto label_05bd06bf;
					auVar36._4_8_ = 0;
					auVar36._0_4_ = fVar165 * fVar159;
					force._0_8_ = SUB128(auVar36 << 0x20, 0);
					force.z = 0.0;
					pUVar156.AddForce(force);
				}
				pCVar21 = this.Animation;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				if (pCVar21 == null) goto label_05bd06bf;
				fVar165 = pCVar21.GetNormalizedTime(HumanAnimations.ToRoof);
				if (1.0 <= fVar165) {
					this.PlayAnimation(HumanAnimations.AirRise, 0.0);
				}
			}
			else {
				if (this._state == 0) {
					bVar143 = this.IsPressDirectionTowardsHero();
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					if (bVar143) {
						if (this.Controller == null) goto label_05bd06bf;
						cVar144 = il2cpp_runtime_helper_02ad5af0(2, typeof(IHumanController));
						auVar185._8_4_ = uStack_f0;
						auVar185._0_8_ = auStack_f8;
						UVar181.z = UStack_d8.z;
						UVar181.w = UStack_d8.w;
						UVar181.x = UStack_d8.x;
						UVar181.y = UStack_d8.y;
						if (cVar144 == false) {
							if (this.Controller == null) goto label_05bd06bf;
							cVar144 = il2cpp_runtime_helper_02ad5af0(3, typeof(IHumanController));
							auVar185._8_4_ = uStack_f0;
							auVar185._0_8_ = auStack_f8;
							UVar181.z = UStack_d8.z;
							UVar181.w = UStack_d8.w;
							UVar181.x = UStack_d8.x;
							UVar181.y = UStack_d8.y;
							if (cVar144 == false) {
								if (this.Controller == null) goto label_05bd06bf;
								cVar144 = il2cpp_runtime_helper_02ad5af0(4, typeof(IHumanController));
								auVar185._8_4_ = uStack_f0;
								auVar185._0_8_ = auStack_f8;
								UVar181.z = UStack_d8.z;
								UVar181.w = UStack_d8.w;
								UVar181.x = UStack_d8.x;
								UVar181.y = UStack_d8.y;
								if (cVar144 == false) {
									if (this.Controller == null) goto label_05bd06bf;
									cVar144 = il2cpp_runtime_helper_02ad5af0(5);
									if ((cVar144 == false) &&(bVar143 = this.IsFrontGrounded())) {
										pCVar21 = this.Animation;
										auVar185._8_4_ = uStack_f0;
										auVar185._0_8_ = auStack_f8;
										UVar181.z = UStack_d8.z;
										UVar181.w = UStack_d8.w;
										UVar181.x = UStack_d8.x;
										UVar181.y = UStack_d8.y;
										if (pCVar21 == null) goto label_05bd06bf;
										bVar143 = pCVar21.IsPlaying(HumanAnimations.WallRun);
										if (!bVar143) {
											pCVar21 = this.Animation;
											auVar185._8_4_ = uStack_f0;
											auVar185._0_8_ = auStack_f8;
											UVar181.z = UStack_d8.z;
											UVar181.w = UStack_d8.w;
											UVar181.x = UStack_d8.x;
											UVar181.y = UStack_d8.y;
											if (pCVar21 == null) goto label_05bd06bf;
											bVar143 = pCVar21.IsPlaying(HumanAnimations.Dodge);
											if (!bVar143) {
												this.CrossFade(HumanAnimations.WallRun, 0.1, 0.0);
												this._wallRunTime = 0.0;
												goto label_05bcf9f4;
											}
										}
									}
								}
							}
						}
					}
				}
				pCVar21 = this.Animation;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				if (pCVar21 == null) goto label_05bd06bf;
				pMVar153 = (MethodInfo)HumanAnimations.WallRun;
				bVar143 = pCVar21.IsPlaying((String)pMVar153);
				if (bVar143) {
					this.ClearDashPerkCDs();
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					pUVar14 = this.Cache;
					if (pUVar14 == null) goto label_05bd06bf;
					pUVar156 = pUVar14.Rigidbody;
					auVar186 = il2cpp_runtime_helper_05bbcf10(0);
					auVar129._8_4_ = uStack_f0;
					auVar129._0_8_ = auStack_f8;
					auVar128._8_4_ = uStack_f0;
					auVar128._0_8_ = auStack_f8;
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar75.z = UStack_d8.z;
					UVar75.w = UStack_d8.w;
					UVar75.x = UStack_d8.x;
					UVar75.y = UStack_d8.y;
					UVar74.z = UStack_d8.z;
					UVar74.w = UStack_d8.w;
					UVar74.x = UStack_d8.x;
					UVar74.y = UStack_d8.y;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					pCVar27 = this.Stats;
					if (pCVar27 == null) goto label_05bd06bf;
					UVar181 = UVar74;
					auVar185 = auVar128;
					if (*ppUVar1 == null) goto label_05bd06bf;
					pUVar17 = ((*ppUVar1).fields).Rigidbody;
					UVar181 = UVar75;
					auVar185 = auVar129;
					if (pUVar17 == null) goto label_05bd06bf;
					UStack_108 = (Quaternion)ZEXT416((uint)pCVar27.RunSpeed);
					UVar182 = pUVar17.linearVelocity;
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					if (pUVar156 == null) goto label_05bd06bf;
					auStack_148._0_4_ = auVar186._0_4_;
					auStack_148._4_4_ = auVar186._4_4_;
					force_00.y = (float)auStack_148._4_4_ * UStack_108.x - UVar182.y;
					force_00.x = (float)auStack_148._0_4_ * UStack_108.x - UVar182.x;
					pMVar153 = (MethodInfo)0x2;
					force_00.z = auVar186._8_4_ * UStack_108.x - UVar182.z;
					pUVar156.AddForce(force_00, 2);
					fVar165 = this._wallRunTime;
					fVar159 = Time.deltaTime;
					auVar130._8_4_ = uStack_f0;
					auVar130._0_8_ = auStack_f8;
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar76.z = UStack_d8.z;
					UVar76.w = UStack_d8.w;
					UVar76.x = UStack_d8.x;
					UVar76.y = UStack_d8.y;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					this._wallRunTime = fVar159 + fVar165;
					if (this.HasDirection == false) {
						pUVar14 = *ppUVar1;
						if (pUVar14 == null) goto label_05bd06bf;
						pUVar18 = pUVar14.Transform;
						UVar181 = UVar76;
						auVar185 = auVar130;
						if (pUVar18 == null) goto label_05bd06bf;
						pUVar156 = pUVar14.Rigidbody;
						UVar182 = pUVar18.forward;
						auVar131._8_4_ = uStack_f0;
						auVar131._0_8_ = auStack_f8;
						auVar185._8_4_ = uStack_f0;
						auVar185._0_8_ = auStack_f8;
						UVar77.z = UStack_d8.z;
						UVar77.w = UStack_d8.w;
						UVar77.x = UStack_d8.x;
						UVar77.y = UStack_d8.y;
						UVar181.z = UStack_d8.z;
						UVar181.w = UStack_d8.w;
						UVar181.x = UStack_d8.x;
						UVar181.y = UStack_d8.y;
						pCVar27 = this.Stats;
						if (pCVar27 == null) goto label_05bd06bf;
						UVar181 = UVar77;
						auVar185 = auVar131;
						if (pUVar156 == null) goto label_05bd06bf;
						fVar165 = pCVar27.RunSpeed;
						force_03.z = UVar182.z * fVar165 * -0.75;
						force_03.y = fVar165 * UVar182.y * -0.75;
						force_03.x = fVar165 * UVar182.x * -0.75;
						pMVar153 = (MethodInfo)0x1;
						pUVar156.AddForce(force_03, 1);
						this.DodgeWall();
					}
					else {
						bVar142 = this.IsUpFrontGrounded();
						if (bVar142) {
							bVar142 = this.IsFrontGrounded();
							if (bVar142) goto label_05bcf9f4;
							pSVar152 = HumanAnimations.AirFall;
						}
						else {
							this._wallJump = false;
							pSVar152 = HumanAnimations.ToRoof;
						}
						this.CrossFade(pSVar152, 0.1, 0.0);
					}
				}
				else {
					pCVar21 = this.Animation;
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					if (pCVar21 == null) goto label_05bd06bf;
					bVar143 = pCVar21.IsPlaying(HumanAnimations.Dash);
					if (!bVar143) {
						pCVar21 = this.Animation;
						auVar185._8_4_ = uStack_f0;
						auVar185._0_8_ = auStack_f8;
						UVar181.z = UStack_d8.z;
						UVar181.w = UStack_d8.w;
						UVar181.x = UStack_d8.x;
						UVar181.y = UStack_d8.y;
						if (pCVar21 == null) goto label_05bd06bf;
						pMVar153 = (MethodInfo)HumanAnimations.Jump;
						bVar143 = pCVar21.IsPlaying((String)pMVar153);
						if (!bVar143) {
							bVar143 = this.IsFiringThunderspear();
							if (!bVar143) {
								UVar182 = this.GetTargetDirection();
								auVar185._8_4_ = uStack_f0;
								auVar185._0_8_ = auStack_f8;
								UVar181.z = UStack_d8.z;
								UVar181.w = UStack_d8.w;
								UVar181.x = UStack_d8.x;
								UVar181.y = UStack_d8.y;
								pCVar27 = this.Stats;
								if (pCVar27 == null) goto label_05bd06bf;
								fVar165 = this.TargetMagnitude;
								fVar159 = (float)pCVar27.Acceleration;
								fVar159 = fVar159 + fVar159 + -50.0;
								auVar178._0_4_ = fVar159 * UVar182.x * fVar165;
								auVar178._4_4_ = fVar159 * UVar182.y * fVar165;
								auVar178._8_4_ = in_XMM3._4_4_ * extraout_XMM0_Dc * 0.0;
								auVar178._12_4_ = in_XMM3._4_4_ * extraout_XMM0_Dd * 0.0;
								auVar174 = divps(auVar178, _DAT_01005390);
								uStack_f0 = (UVar182.z * fVar165 * fVar159) / 5.0;
								auStack_f8 = auVar174._0_8_;
								if (this.HasDirection == false) {
									if (this._state == 1) {
										_auStack_f8 = il2cpp_runtime_helper_05b8d690(0);
									}
								}
								else {
									UVar181 = (Quaternion)this.GetTargetRotation();
									this._targetRotation = UVar181;
								}
								UVar181.z = UStack_d8.z;
								UVar181.w = UStack_d8.w;
								UVar181.x = UStack_d8.x;
								UVar181.y = UStack_d8.y;
								UVar78.z = UStack_d8.z;
								UVar78.w = UStack_d8.w;
								UVar78.x = UStack_d8.x;
								UVar78.y = UStack_d8.y;
								pCVar31 = this.Controller;
								auVar185 = _auStack_f8;
								if (this.AI == false) {
									if (pCVar31 == null) goto label_05bd06bf;
									bVar145 = il2cpp_runtime_helper_02ad5af0(2);
									UVar84.z = UStack_d8.z;
									UVar84.w = UStack_d8.w;
									UVar84.x = UStack_d8.x;
									UVar84.y = UStack_d8.y;
									UVar83.z = UStack_d8.z;
									UVar83.w = UStack_d8.w;
									UVar83.x = UStack_d8.x;
									UVar83.y = UStack_d8.y;
									UVar181.z = UStack_d8.z;
									UVar181.w = UStack_d8.w;
									UVar181.x = UStack_d8.x;
									UVar181.y = UStack_d8.y;
									pSVar32 = SettingsManager.InputSettings;
									auVar185 = _auStack_f8;
									if (pSVar32 == null) goto label_05bd06bf;
									pSVar33 = pSVar32.Human;
									UVar181 = UVar83;
									if (pSVar33 == null) goto label_05bd06bf;
									pSVar24 = pSVar33.AutoUseGas;
									UVar181 = UVar84;
									if (pSVar24 == null) goto label_05bd06bf;
									bVar145 = bVar145 ^ pSVar24._value != false;
								}
								else {
									UVar181 = UVar78;
									if (pCVar31 == null) goto label_05bd06bf;
									bVar145 = il2cpp_runtime_helper_02ad5af0(2);
								}
								UVar82.z = UStack_d8.z;
								UVar82.w = UStack_d8.w;
								UVar82.x = UStack_d8.x;
								UVar82.y = UStack_d8.y;
								UVar81.z = UStack_d8.z;
								UVar81.w = UStack_d8.w;
								UVar81.x = UStack_d8.x;
								UVar81.y = UStack_d8.y;
								UVar80.z = UStack_d8.z;
								UVar80.w = UStack_d8.w;
								UVar80.x = UStack_d8.x;
								UVar80.y = UStack_d8.y;
								UVar79.z = UStack_d8.z;
								UVar79.w = UStack_d8.w;
								UVar79.x = UStack_d8.x;
								UVar79.y = UStack_d8.y;
								UVar181.z = UStack_d8.z;
								UVar181.w = UStack_d8.w;
								UVar181.x = UStack_d8.x;
								UVar181.y = UStack_d8.y;
								bVar143 = false;
								if ((uVar149 == 0) && (!bVar142)) {
									bVar143 = this.MountState == 0;
								}
								if ((bVar143 & bVar145) != 0) {
									pCVar27 = this.Stats;
									auVar185 = _auStack_f8;
									if (pCVar27 == null) goto label_05bd06bf;
									if (0.0 < pCVar27.CurrentGas) {
										pUVar14 = this.Cache;
										if (this.HasDirection == false) {
											UVar181 = UVar81;
											if (pUVar14 == null) goto label_05bd06bf;
											pUVar18 = pUVar14.Transform;
											UVar181 = UVar82;
											if (pUVar18 == null) goto label_05bd06bf;
											pUVar156 = pUVar14.Rigidbody;
											UVar182 = pUVar18.forward;
											fVar165 = (float)il2cpp_runtime_helper_0599adc0(auStack_f8, 0);
											UVar181.z = UStack_d8.z;
											UVar181.w = UStack_d8.w;
											UVar181.x = UStack_d8.x;
											UVar181.y = UStack_d8.y;
											auVar185 = _auStack_f8;
											if (pUVar156 == null) goto label_05bd06bf;
											fVar159 = UVar182.z * fVar165;
											uStack_138._0_4_ = UVar182.x;
											uStack_138._4_4_ = UVar182.y;
											fStack_130 = (float)extraout_XMM0_Qb_07;
											fStack_12c = (float)((ulong)extraout_XMM0_Qb_07 >> 0x20);
											auVar164._0_4_ = fVar165 * (float)uStack_138;
											auVar164._4_4_ = fVar165 * uStack_138._4_4_;
											auVar164._8_4_ = fVar165 * fStack_130;
											auVar164._12_4_ = fVar165 * fStack_12c;
										}
										else {
											UVar181 = UVar79;
											if (pUVar14 == null) goto label_05bd06bf;
											pUVar156 = pUVar14.Rigidbody;
											UVar181 = UVar80;
											if (pUVar156 == null) goto label_05bd06bf;
											auVar164._8_8_ = 0;
											auVar164._0_8_ = auStack_f8;
											fVar159 = uStack_f0;
										}
										force_06._0_8_ = auVar164._0_8_;
										force_06.z = fVar159;
										pUVar156.AddForce(force_06, 5);
										bVar141 = true;
									}
								}
							}
						}
					}
				}
			}
	label_05bcf9f4: ;
			pCVar21 = this.Animation;
			UVar181.z = UStack_d8.z;
			UVar181.w = UStack_d8.w;
			UVar181.x = UStack_d8.x;
			UVar181.y = UStack_d8.y;
			auVar185 = _auStack_f8;
			if (pCVar21 == null) goto label_05bd06bf;
			pMVar153 = (MethodInfo)HumanAnimations.AirFall;
			bVar142 = pCVar21.IsPlaying((String)pMVar153);
			if (bVar142) {
				pMVar153 = null;
				fVar165 = (float)il2cpp_runtime_helper_0599adc0(pUStack_c8);
				if (fVar165 < 0.2) {
					bVar142 = this.IsFrontGrounded();
					if (bVar142) {
						pMVar153 = (MethodInfo)HumanAnimations.OnWall;
						this.CrossFade((String)pMVar153, 0.3, 0.0);
					}
				}
			}
			this.FixedUpdateWallSlide();
		}
		else {
			this._wallSlide = false;
			this._canWallSlideJump = false;
			this.ClearDashPerkCDs();
			uStack_138._0_4_ = (float)il2cpp_runtime_helper_05b8d690(0);
			auVar168._8_8_ = extraout_XMM1_Qb;
			auVar168._0_8_ = extraout_XMM1_Qa;
			if (this.JustGrounded != false) {
				uVar150 = this._state;
				switch(uVar150) {
				case 1:
				case 9:
					this._attackButtonRelease = true;
					break;
				default: ;
					if (this.HasDirection != false) goto switchD_05bcd304_caseD_a;
					bVar142 = this.HasHook();
					uVar150 = this._state;
					if (bVar142) goto switchD_05bcd304_caseD_a;
					if ((uVar150 & 0xfffffffe) == 2) {
						this._dashTimeLeft = 0.0;
					}
					this._state = 0xd;
					this.CrossFade(HumanAnimations.Land, 0.01, 0.0);
					bVar142 = this.IsPlayingSound(HumanSounds.Land);
					if (bVar142) break;
					pSVar152 = HumanSounds.Land;
	label_05bcec02: ;
					this.PlaySound(pSVar152);
					break;
				case 10:
				case 0xf:
	switchD_05bcd304_caseD_a: ;
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					this._attackButtonRelease = true;
					fVar165 = this._currentVelocity.x;
					fVar159 = this._currentVelocity.z;
					if ((0xf < uVar150) || ((0x8702U >> (uVar150 & 0x1f) & 1) == 0)) {
						pCVar27 = this.Stats;
						if (pCVar27 == null) goto label_05bd06bf;
						fVar3 = pCVar27.RunSpeed;
						if ((fVar3 * fVar3 * 1.5 < fVar159 * fVar159 + fVar165 * fVar165) && (uVar150 != 5)) {
							if ((uVar150 & 0xfffffffe) == 2) {
								this._dashTimeLeft = 0.0;
							}
							this._state = 0xb;
							this.CrossFade(HumanAnimations.Slide, 0.05, 0.0);
							fVar165 = atan2f(fVar165, fVar159);
							this.TargetAngle = fVar165 * 57.29578;
							UVar181 = (Quaternion)this.GetTargetRotation();
							this._targetRotation = UVar181;
							this.HasDirection = true;
							bVar142 = this.IsPlayingSound(HumanSounds.CrashLand);
							auVar113._8_4_ = uStack_f0;
							auVar113._0_8_ = auStack_f8;
							auVar185._8_4_ = uStack_f0;
							auVar185._0_8_ = auStack_f8;
							UVar59.z = UStack_d8.z;
							UVar59.w = UStack_d8.w;
							UVar59.x = UStack_d8.x;
							UVar59.y = UStack_d8.y;
							UVar181.z = UStack_d8.z;
							UVar181.w = UStack_d8.w;
							UVar181.x = UStack_d8.x;
							UVar181.y = UStack_d8.y;
							if (!bVar142) {
								pSVar28 = SettingsManager.SoundSettings;
								if (pSVar28 == null) goto label_05bd06bf;
								pSVar24 = pSVar28.CrashLandEffect;
								UVar181 = UVar59;
								auVar185 = auVar113;
								if (pSVar24 == null) goto label_05bd06bf;
								if (pSVar24._value != false) {
									pSVar152 = HumanSounds.CrashLand;
									goto label_05bcec02;
								}
							}
						}
					}
				}
				uStack_138._0_4_ = this._currentVelocity.x;
				auVar168 = ZEXT416((uint)this._currentVelocity.z);
			}
			auVar136._8_4_ = uStack_f0;
			auVar136._0_8_ = auStack_f8;
			auVar135._8_4_ = uStack_f0;
			auVar135._0_8_ = auStack_f8;
			auVar134._8_4_ = uStack_f0;
			auVar134._0_8_ = auStack_f8;
			auVar185._8_4_ = uStack_f0;
			auVar185._0_8_ = auStack_f8;
			UVar89.z = UStack_d8.z;
			UVar89.w = UStack_d8.w;
			UVar89.x = UStack_d8.x;
			UVar89.y = UStack_d8.y;
			UVar88.z = UStack_d8.z;
			UVar88.w = UStack_d8.w;
			UVar88.x = UStack_d8.x;
			UVar88.y = UStack_d8.y;
			UVar87.z = UStack_d8.z;
			UVar87.w = UStack_d8.w;
			UVar87.x = UStack_d8.x;
			UVar87.y = UStack_d8.y;
			UVar181.z = UStack_d8.z;
			UVar181.w = UStack_d8.w;
			UVar181.x = UStack_d8.x;
			UVar181.y = UStack_d8.y;
			switch(this._state) {
			case 0:
				uStack_138._0_4_ = (float)il2cpp_runtime_helper_05b8d690(0);
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				if (this.HasDirection == false) {
					auStack_148._4_4_ = extraout_XMM1_Db;
					auStack_148._0_4_ = extraout_XMM1_Da;
					fStack_140 = (float)extraout_XMM1_Dc;
					pCVar21 = this.Animation;
					if (pCVar21 == null) goto label_05bd06bf;
					bVar142 = pCVar21.IsPlaying(this.StandAnimation);
					if ((!bVar142) && (this._state != 0xd)) {
						pCVar21 = this.Animation;
						auVar185._8_4_ = uStack_f0;
						auVar185._0_8_ = auStack_f8;
						UVar181.z = UStack_d8.z;
						UVar181.w = UStack_d8.w;
						UVar181.x = UStack_d8.x;
						UVar181.y = UStack_d8.y;
						if (pCVar21 == null) goto label_05bd06bf;
						bVar142 = pCVar21.IsPlaying(HumanAnimations.Jump);
						if (!bVar142) {
							pCVar21 = this.Animation;
							auVar185._8_4_ = uStack_f0;
							auVar185._0_8_ = auStack_f8;
							UVar181.z = UStack_d8.z;
							UVar181.w = UStack_d8.w;
							UVar181.x = UStack_d8.x;
							UVar181.y = UStack_d8.y;
							if (pCVar21 == null) goto label_05bd06bf;
							bVar142 = pCVar21.IsPlaying(HumanAnimations.HorseMount);
							if (!bVar142) {
								pCVar21 = this.Animation;
								auVar185._8_4_ = uStack_f0;
								auVar185._0_8_ = auStack_f8;
								UVar181.z = UStack_d8.z;
								UVar181.w = UStack_d8.w;
								UVar181.x = UStack_d8.x;
								UVar181.y = UStack_d8.y;
								if (pCVar21 == null) goto label_05bd06bf;
								bVar142 = pCVar21.IsPlaying(HumanAnimations.Grabbed);
								if (!bVar142) {
									this.CrossFade(this.StandAnimation, 0.1, 0.0);
								}
							}
						}
					}
				}
				else {
					auStack_148._4_4_ = extraout_XMM1_Db;
					fStack_140 = (float)extraout_XMM1_Dc;
					UVar182 = this.GetTargetDirection();
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					UStack_108.z = (float)(int)extraout_XMM0_Qb_01;
					UStack_108.w = (float)(int)((ulong)extraout_XMM0_Qb_01 >> 0x20);
					UStack_108.x = UVar182.x;
					UStack_108.y = UVar182.y;
					pCVar27 = this.Stats;
					if (pCVar27 == null) goto label_05bd06bf;
					auStack_b8 = ZEXT416((uint)this.TargetMagnitude);
					uStack_138._0_4_ = pCVar27.RunSpeed;
					pCVar21 = this.Animation;
					uVar12 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
					if (this.IsWalk == false) {
						if (uVar12 == 0) {
						}
						auVar185._8_4_ = uStack_f0;
						auVar185._0_8_ = auStack_f8;
						UVar181.z = UStack_d8.z;
						UVar181.w = UStack_d8.w;
						UVar181.x = UStack_d8.x;
						UVar181.y = UStack_d8.y;
						if (pCVar21 == null) goto label_05bd06bf;
						bVar142 = pCVar21.IsPlaying(HumanAnimations.Run);
						if (!bVar142) {
							pCVar21 = this.Animation;
							auVar185._8_4_ = uStack_f0;
							auVar185._0_8_ = auStack_f8;
							UVar181.z = UStack_d8.z;
							UVar181.w = UStack_d8.w;
							UVar181.x = UStack_d8.x;
							UVar181.y = UStack_d8.y;
							if (pCVar21 == null) goto label_05bd06bf;
							bVar142 = pCVar21.IsPlaying(HumanAnimations.Jump);
							if (!bVar142) {
								pCVar21 = this.Animation;
								auVar185._8_4_ = uStack_f0;
								auVar185._0_8_ = auStack_f8;
								UVar181.z = UStack_d8.z;
								UVar181.w = UStack_d8.w;
								UVar181.x = UStack_d8.x;
								UVar181.y = UStack_d8.y;
								if (pCVar21 == null) goto label_05bd06bf;
								bVar142 = pCVar21.IsPlaying(HumanAnimations.RunBuffed);
								if (!bVar142) {
									pCVar21 = this.Animation;
									auVar185._8_4_ = uStack_f0;
									auVar185._0_8_ = auStack_f8;
									UVar181.z = UStack_d8.z;
									UVar181.w = UStack_d8.w;
									UVar181.x = UStack_d8.x;
									UVar181.y = UStack_d8.y;
									if (pCVar21 == null) goto label_05bd06bf;
									bVar142 = pCVar21.IsPlaying(HumanAnimations.RunTS);
									if (!bVar142) {
										pCVar21 = this.Animation;
										auVar185._8_4_ = uStack_f0;
										auVar185._0_8_ = auStack_f8;
										UVar181.z = UStack_d8.z;
										UVar181.w = UStack_d8.w;
										UVar181.x = UStack_d8.x;
										UVar181.y = UStack_d8.y;
										if (pCVar21 == null) goto label_05bd06bf;
										bVar142 = pCVar21.IsPlaying(HumanAnimations.HorseMount);
										if (bVar142) {
											pCVar21 = this.Animation;
											auVar185._8_4_ = uStack_f0;
											auVar185._0_8_ = auStack_f8;
											UVar181.z = UStack_d8.z;
											UVar181.w = UStack_d8.w;
											UVar181.x = UStack_d8.x;
											UVar181.y = UStack_d8.y;
											if (pCVar21 == null) goto label_05bd06bf;
											fVar165 = pCVar21.GetNormalizedTime(HumanAnimations. HorseMount);
											if (fVar165 < 0.5) goto label_05bce507;
										}
										ppSVar148 = &this.RunAnimation;
										goto label_05bcdc3e;
									}
								}
							}
						}
					}
					else {
						if (uVar12 == 0) {
						}
						auVar185._8_4_ = uStack_f0;
						auVar185._0_8_ = auStack_f8;
						UVar181.z = UStack_d8.z;
						UVar181.w = UStack_d8.w;
						UVar181.x = UStack_d8.x;
						UVar181.y = UStack_d8.y;
						if (pCVar21 == null) goto label_05bd06bf;
						bVar142 = pCVar21.IsPlaying(HumanAnimations.Walk);
						if (!bVar142) {
							pCVar21 = this.Animation;
							auVar185._8_4_ = uStack_f0;
							auVar185._0_8_ = auStack_f8;
							UVar181.z = UStack_d8.z;
							UVar181.w = UStack_d8.w;
							UVar181.x = UStack_d8.x;
							UVar181.y = UStack_d8.y;
							if (pCVar21 == null) goto label_05bd06bf;
							bVar142 = pCVar21.IsPlaying(HumanAnimations.Jump);
							if (!bVar142) {
								pCVar21 = this.Animation;
								auVar185._8_4_ = uStack_f0;
								auVar185._0_8_ = auStack_f8;
								UVar181.z = UStack_d8.z;
								UVar181.w = UStack_d8.w;
								UVar181.x = UStack_d8.x;
								UVar181.y = UStack_d8.y;
								if (pCVar21 == null) goto label_05bd06bf;
								bVar142 = pCVar21.IsPlaying(HumanAnimations.HorseMount);
								if (bVar142) {
									pCVar21 = this.Animation;
									auVar185._8_4_ = uStack_f0;
									auVar185._0_8_ = auStack_f8;
									UVar181.z = UStack_d8.z;
									UVar181.w = UStack_d8.w;
									UVar181.x = UStack_d8.x;
									UVar181.y = UStack_d8.y;
									if (pCVar21 == null) goto label_05bd06bf;
									fVar165 = pCVar21.GetNormalizedTime(HumanAnimations.HorseMount);
									if (fVar165 < 0.5) goto label_05bce507;
								}
								ppSVar148 = &this.WalkAnimation;
	label_05bcdc3e: ;
								this.CrossFade(*ppSVar148, 0.1, 0.0);
								this._stepPhase = 0;
							}
						}
					}
	label_05bce507: ;
					pCVar21 = this.Animation;
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					if (pCVar21 == null) goto label_05bd06bf;
					auStack_148._0_4_ = UVar182.z * (float)auStack_b8._0_4_ * (float)uStack_138;
					uStack_138._0_4_ = (float)uStack_138 * UStack_108.x * (float)auStack_b8._0_4_;
					bVar142 = pCVar21.IsPlaying(HumanAnimations.WallRun);
					if (!bVar142) {
						UVar181 = (Quaternion)this.GetTargetRotation();
						this._targetRotation = UVar181;
					}
				}
				break;
			case 2:
				pCVar21 = this.Animation;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				if (pCVar21 == null) goto label_05bd06bf;
				fVar165 = pCVar21.GetNormalizedTime(HumanAnimations.Dodge);
				if (0.2 <= fVar165) {
					pCVar21 = this.Animation;
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					if (pCVar21 == null) goto label_05bd06bf;
					fVar165 = pCVar21.GetNormalizedTime(HumanAnimations.Dodge);
					auVar137._8_4_ = uStack_f0;
					auVar137._0_8_ = auStack_f8;
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar90.z = UStack_d8.z;
					UVar90.w = UStack_d8.w;
					UVar90.x = UStack_d8.x;
					UVar90.y = UStack_d8.y;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					auVar169._0_12_ = ZEXT812(0x3f4ccccd);
					auVar169._12_4_ = 0;
					if (fVar165 < auVar169._0_4_) {
						if (*ppUVar1 == null) goto label_05bd06bf;
						pUVar18 = ((*ppUVar1).fields).Transform;
						UVar181 = UVar90;
						auVar185 = auVar137;
						if (pUVar18 == null) goto label_05bd06bf;
						UVar182 = pUVar18.forward;
						auVar185._8_4_ = uStack_f0;
						auVar185._0_8_ = auStack_f8;
						UVar181.z = UStack_d8.z;
						UVar181.w = UStack_d8.w;
						UVar181.x = UStack_d8.x;
						UVar181.y = UStack_d8.y;
						auVar170._4_12_ = auVar169._4_12_;
						pCVar27 = this.Stats;
						if (pCVar27 == null) goto label_05bd06bf;
						uStack_138._0_4_ = pCVar27.RunSpeed;
						auVar170._0_4_ = UVar182.z * -2.4 * (float)uStack_138;
						uStack_138._0_4_ = (float)uStack_138 * UVar182.x * -2.4;
						break;
					}
				}
				pCVar21 = this.Animation;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				if (pCVar21 == null) goto label_05bd06bf;
				fVar165 = pCVar21.GetNormalizedTime(HumanAnimations.Dodge);
				auVar138._8_4_ = uStack_f0;
				auVar138._0_8_ = auStack_f8;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar91.z = UStack_d8.z;
				UVar91.w = UStack_d8.w;
				UVar91.x = UStack_d8.x;
				UVar91.y = UStack_d8.y;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				if (0.8 < fVar165) {
					if (*ppUVar1 == null) goto label_05bd06bf;
					pUVar156 = ((*ppUVar1).fields).Rigidbody;
					UVar181 = UVar91;
					auVar185 = auVar138;
					if (pUVar156 == null) goto label_05bd06bf;
					UVar182 = pUVar156.linearVelocity;
					auVar172._4_12_ = auVar168._4_12_;
					uStack_138._0_4_ = UVar182.x * (float)0x3f666666;
					auVar172._0_4_ = UVar182.z * 0.9;
				}
				break;
			case 0xb:
				UVar181 = UVar88;
				auVar185 = auVar135;
				if (*ppUVar1 == null) goto label_05bd06bf;
				pUVar156 = ((*ppUVar1).fields).Rigidbody;
				UVar181 = UVar89;
				auVar185 = auVar136;
				if (pUVar156 == null) goto label_05bd06bf;
				UVar182 = pUVar156.linearVelocity;
				pMVar153 = null;
				fVar165 = (float)il2cpp_runtime_helper_0599adc0(pUStack_c8);
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				pCVar27 = this.Stats;
				if (pCVar27 == null) goto label_05bd06bf;
				uStack_138._0_4_ = UVar182.x;
				uStack_138._0_4_ = (float)uStack_138 * 0.985;
				auVar177._0_4_ = UVar182.z * 0.985;
				auVar177._4_12_ = auVar168._4_12_;
				if (fVar165 < pCVar27.RunSpeed * 1.2) {
					this.Idle();
				}
				break;
			case 0xd:
				if (*ppUVar1 == null) goto label_05bd06bf;
				pUVar156 = ((*ppUVar1).fields).Rigidbody;
				UVar181 = UVar87;
				auVar185 = auVar134;
				if (pUVar156 == null) goto label_05bd06bf;
				UVar182 = pUVar156.linearVelocity;
				auVar171._4_12_ = auVar168._4_12_;
				uStack_138._0_4_ = UVar182.x * 0.96;
				auVar171._0_4_ = UVar182.z * 0.96;
			}
			uStack_138._0_4_ = (float)uStack_138 - this._currentVelocity.x;
			fVar165 = auStack_148._0_4_ - this._currentVelocity.z;
			pCVar21 = this.Animation;
			auVar185._8_4_ = uStack_f0;
			auVar185._0_8_ = auStack_f8;
			UVar181.z = UStack_d8.z;
			UVar181.w = UStack_d8.w;
			UVar181.x = UStack_d8.x;
			UVar181.y = UStack_d8.y;
			if (pCVar21 == null) goto label_05bd06bf;
			auVar160 = ZEXT812(0x41200000);
			if ((float)uStack_138 <= auVar160._0_4_) {
				auVar160._4_8_ = auVar160._4_8_;
				auVar160._0_4_ = (float)uStack_138;
			}
			uVar150 = ~-(uint)(-10.0 <= (float)uStack_138) & 0xc1200000 | auVar160._0_4_ & -(uint)(-10.0 <= (float)uStack_138);
			uStack_138 = (ulong)uVar150;
			bVar142 = pCVar21.IsPlaying(HumanAnimations.Jump);
			if (bVar142) {
				pCVar21 = this.Animation;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				if (pCVar21 == null) goto label_05bd06bf;
				fVar159 = pCVar21.GetNormalizedTime(HumanAnimations.Jump) ;
				if (0.18 < fVar159) {
					fVar159 = this._currentVelocity.y;
					uVar158 = -(uint)(0.0 < fVar159);
					fVar159 = (float)(~uVar158 & 0x41a00000 | (uint)(20.0 - fVar159) & uVar158);
					if (fVar159 <= 0.0) {
						fVar159 = 0.0;
					}
					uStack_138 = CONCAT44(fVar159 + 0.0, uVar150);
				}
			}
			pCVar21 = this.Animation;
			auVar185._8_4_ = uStack_f0;
			auVar185._0_8_ = auStack_f8;
			UVar181.z = UStack_d8.z;
			UVar181.w = UStack_d8.w;
			UVar181.x = UStack_d8.x;
			UVar181.y = UStack_d8.y;
			if (pCVar21 == null) goto label_05bd06bf;
			auVar166 = ZEXT812(0x41200000);
			if (fVar165 <= auVar166._0_4_) {
				auVar166._4_8_ = auVar166._4_8_;
				auVar166._0_4_ = fVar165;
			}
			value_00.z = auVar166._0_4_ & -(uint)(-10.0 <= fVar165);
			register0x00001248 = auVar166._8_4_ & auStack_148._8_4_;
			_auStack_148 = ZEXT416(~-(uint)(-10.0 <= fVar165) & 0xc1200000) | register0x00001240;
			bVar142 = pCVar21.IsPlaying(HumanAnimations.HorseMount);
			pMVar153 = extraout_RDX_01;
			if (bVar142) {
				pCVar21 = this.Animation;
				auVar185._8_4_ = uStack_f0;
				auVar185._0_8_ = auStack_f8;
				UVar181.z = UStack_d8.z;
				UVar181.w = UStack_d8.w;
				UVar181.x = UStack_d8.x;
				UVar181.y = UStack_d8.y;
				if (pCVar21 == null) goto label_05bd06bf;
				fVar165 = pCVar21.GetNormalizedTime(HumanAnimations.HorseMount);
				pMVar153 = extraout_RDX_02;
				if (0.18 < fVar165) {
					pCVar21 = this.Animation;
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					if (pCVar21 == null) goto label_05bd06bf;
					fVar165 = pCVar21.GetNormalizedTime(HumanAnimations.HorseMount);
					auVar106._8_4_ = uStack_f0;
					auVar106._0_8_ = auStack_f8;
					auVar105._8_4_ = uStack_f0;
					auVar105._0_8_ = auStack_f8;
					auVar185._8_4_ = uStack_f0;
					auVar185._0_8_ = auStack_f8;
					UVar52.z = UStack_d8.z;
					UVar52.w = UStack_d8.w;
					UVar52.x = UStack_d8.x;
					UVar52.y = UStack_d8.y;
					UVar51.z = UStack_d8.z;
					UVar51.w = UStack_d8.w;
					UVar51.x = UStack_d8.x;
					UVar51.y = UStack_d8.y;
					UVar181.z = UStack_d8.z;
					UVar181.w = UStack_d8.w;
					UVar181.x = UStack_d8.x;
					UVar181.y = UStack_d8.y;
					register0x00001240 = ZEXT812(0x3f800000);
					pMVar153 = extraout_RDX_03;
					if (fVar165 < value_00.z) {
						pCVar15 = this.Horse;
						if (pCVar15 == null) goto label_05bd06bf;
						pUVar14 = pCVar15.Cache;
						UVar181 = UVar51;
						auVar185 = auVar105;
						if (pUVar14 == null) goto label_05bd06bf;
						pUVar18 = pUVar14.Transform;
						UVar181 = UVar52;
						auVar185 = auVar106;
						if (pUVar18 == null) goto label_05bd06bf;
						uVar4 = this._currentVelocity.x;
						uVar8 = this._currentVelocity.y;
						UStack_108.y = (float)uVar8;
						UStack_108.x = (float)uVar4;
						UStack_108.z = 0.0;
						UStack_108.w = 0.0;
						auStack_b8._0_4_ = this._currentVelocity.z;
						pUVar18.position;
						auVar107._8_4_ = uStack_f0;
						auVar107._0_8_ = auStack_f8;
						auVar185._8_4_ = uStack_f0;
						auVar185._0_8_ = auStack_f8;
						UVar53.z = UStack_d8.z;
						UVar53.w = UStack_d8.w;
						UVar53.x = UStack_d8.x;
						UVar53.y = UStack_d8.y;
						UVar181.z = UStack_d8.z;
						UVar181.w = UStack_d8.w;
						UVar181.x = UStack_d8.x;
						UVar181.y = UStack_d8.y;
						if (*ppUVar1 == null) goto label_05bd06bf;
						pUVar18 = ((*ppUVar1).fields).Transform;
						UVar181 = UVar53;
						auVar185 = auVar107;
						if (pUVar18 == null) goto label_05bd06bf;
						pUVar18.position;
						fVar165 = (float)il2cpp_runtime_helper_05956b50(0);
						auVar109._8_4_ = uStack_f0;
						auVar109._0_8_ = auStack_f8;
						auVar108._8_4_ = uStack_f0;
						auVar108._0_8_ = auStack_f8;
						auVar185._8_4_ = uStack_f0;
						auVar185._0_8_ = auStack_f8;
						UVar55.z = UStack_d8.z;
						UVar55.w = UStack_d8.w;
						UVar55.x = UStack_d8.x;
						UVar55.y = UStack_d8.y;
						UVar54.z = UStack_d8.z;
						UVar54.w = UStack_d8.w;
						UVar54.x = UStack_d8.x;
						UVar54.y = UStack_d8.y;
						UVar181.z = UStack_d8.z;
						UVar181.w = UStack_d8.w;
						UVar181.x = UStack_d8.x;
						UVar181.y = UStack_d8.y;
						pCVar15 = this.Horse;
						if (pCVar15 == null) goto label_05bd06bf;
						pUVar14 = pCVar15.Cache;
						UVar181 = UVar54;
						auVar185 = auVar108;
						if (pUVar14 == null) goto label_05bd06bf;
						pUVar18 = pUVar14.Transform;
						UVar181 = UVar55;
						auVar185 = auVar109;
						if (pUVar18 == null) goto label_05bd06bf;
						UVar182 = pUVar18.position;
						auVar110._8_4_ = uStack_f0;
						auVar110._0_8_ = auStack_f8;
						auVar185._8_4_ = uStack_f0;
						auVar185._0_8_ = auStack_f8;
						UVar56.z = UStack_d8.z;
						UVar56.w = UStack_d8.w;
						UVar56.x = UStack_d8.x;
						UVar56.y = UStack_d8.y;
						UVar181.z = UStack_d8.z;
						UVar181.w = UStack_d8.w;
						UVar181.x = UStack_d8.x;
						UVar181.y = UStack_d8.y;
						if (*ppUVar1 == null) goto label_05bd06bf;
						uStack_78 = CONCAT44(uStack_78._4_4_, UVar182.z);
						pUVar18 = ((*ppUVar1).fields).Transform;
						UVar181 = UVar56;
						auVar185 = auVar110;
						if (pUVar18 == null) goto label_05bd06bf;
						UVar184 = pUVar18.position;
						auStack_148._0_4_ = UVar182.x;
						auStack_148._4_4_ = UVar182.y;
						UStack_118.y = (float)auStack_148._4_4_ - UVar184.y;
						UStack_118.x = (float)auStack_148._0_4_ - UVar184.x;
						UStack_118.z = (float)uStack_78 - UVar184.z;
						auVar180 = il2cpp_runtime_helper_059d80e0(&UStack_118, 0);
						uStack_78 = auVar180._0_8_;
						uStack_70 = extraout_XMM0_Qb_02;
						UStack_118 = (Vector3)this.get_Gravity();
						fVar159 = (float)il2cpp_runtime_helper_0599adc0(&UStack_118, 0);
						auStack_148._4_4_ = auVar180._12_4_;
						fStack_140 = (float)extraout_XMM1_Qb_01;
						fStack_13c = (float)((ulong)extraout_XMM1_Qb_01 >> 0x20);
						auVar175._0_4_ = fVar165 * fVar159 * (float)uStack_78 * 0.6;
						auVar175._4_4_ = fVar165 * fVar159 * uStack_78._4_4_ * 0.6;
						auVar175._8_4_ = fVar165 * fVar159 * (float)uStack_70 * 0.0;
						auVar175._12_4_ = fVar165 * fVar159 * uStack_70._4_4_ * 0.0;
						auVar174 = divps(auVar175, _DAT_01007740);
						auStack_148._0_4_ = (auVar180._8_4_ * 0.6 * fVar159 * fVar165) / 12.0 - (float)auStack_b8._0_4_;
						register0x00001240 = CONCAT44(auVar174._4_4_ + 6.0, auVar174._0_4_ - UStack_108.x);
						register0x00001248 = (uint)(auVar174._8_4_ - UStack_108.z);
						register0x0000124c = auVar174._12_4_ - UStack_108.w;
						pMVar153 = extraout_RDX_04;
						uStack_138 = register0x00001240;
					}
				}
			}
			bVar142 = this.IsStock(bVar140);
			auVar111._8_4_ = uStack_f0;
			auVar111._0_8_ = auStack_f8;
			auVar185._8_4_ = uStack_f0;
			auVar185._0_8_ = auStack_f8;
			UVar57.z = UStack_d8.z;
			UVar57.w = UStack_d8.w;
			UVar57.x = UStack_d8.x;
			UVar57.y = UStack_d8.y;
			UVar181.z = UStack_d8.z;
			UVar181.w = UStack_d8.w;
			UVar181.x = UStack_d8.x;
			UVar181.y = UStack_d8.y;
			if ((!bVar142) && (uVar157 == 0)) {
				uVar5 = this._currentVelocity.x;
				uVar9 = this._currentVelocity.y;
				value_00.y = uStack_138._4_4_ + (float)uVar9;
				value_00.x = (float)uStack_138 + (float)uVar5;
				value_00.z = auStack_148._0_4_ + this._currentVelocity.z;
				this._currentVelocity.x = (float)uStack_138 + (float)uVar5;
				this._currentVelocity.y = uStack_138._4_4_ + (float)uVar9;
				this._currentVelocity.z = value_00.z;
				pUVar14 = this.Cache;
				if (pUVar14 == null) goto label_05bd06bf;
				pUVar156 = pUVar14.Rigidbody;
				UVar181 = UVar57;
				auVar185 = auVar111;
				if (pUVar156 == null) goto label_05bd06bf;
				auVar35._12_4_ = 0;
				auVar35._0_12_ = auStack_148._4_12_;
				register0x00001240 = auVar35 << 0x20;
				pUVar156.linearVelocity = value_00;
			}
			auVar112._8_4_ = uStack_f0;
			auVar112._0_8_ = auStack_f8;
			auVar185._8_4_ = uStack_f0;
			auVar185._0_8_ = auStack_f8;
			UVar58.z = UStack_d8.z;
			UVar58.w = UStack_d8.w;
			UVar58.x = UStack_d8.x;
			UVar58.y = UStack_d8.y;
			UVar181.z = UStack_d8.z;
			UVar181.w = UStack_d8.w;
			UVar181.x = UStack_d8.x;
			UVar181.y = UStack_d8.y;
			pUVar14 = *ppUVar1;
			if (pUVar14 == null) goto label_05bd06bf;
			pUVar18 = pUVar14.Transform;
			UVar181 = UVar58;
			auVar185 = auVar112;
			if (pUVar18 == null) goto label_05bd06bf;
			pUVar156 = pUVar14.Rigidbody;
			UVar181 = (Quaternion)pUVar18.rotation;
			uVar173 = value_00._16_8_;
			UStack_d8._0_8_ = (ulong)(uint)(this.TargetAngle * 0.017453292) << 0x20;
			UStack_d8._8_8_ = UStack_d8._8_8_ & 0xffffffff00000000;
			UVar179 = Quaternion.Internal_FromEulerRad(ref UStack_d8);
			UStack_108.z = (float)(int)extraout_XMM0_Qb_03;
			UStack_108.w = (float)(int)((ulong)extraout_XMM0_Qb_03 >> 0x20);
			UStack_108.x = UVar179.x;
			UStack_108.y = UVar179.y;
			auStack_b8._8_8_ = uVar173;
			auStack_b8._0_8_ = UVar179._8_8_;
			fVar165 = Time.deltaTime;
			UStack_68.x = UStack_108.x;
			UStack_68.y = UStack_108.y;
			UStack_68.z = (float)auStack_b8._0_4_;
			UStack_68.w = (float)auStack_b8._4_4_;
			UStack_d8 = UVar181;
			UVar179 = Quaternion.Internal_Lerp(ref UStack_d8, ref UStack_68, fVar165 * 10.0);
			auVar185._8_4_ = uStack_f0;
			auVar185._0_8_ = auStack_f8;
			UVar181 = UStack_d8;
			if (pUVar156 == null) goto label_05bd06bf;
			pUVar156.rotation = UVar179;
			this.ToggleSparks(this._state == 0xb);
		}
		UVar181 = UStack_d8;
		auVar185 = _auStack_f8;
		if (((uint)UStack_e8.x & uVar149) == 0) {
			if (uVar149 != 0) {
				pCVar155 = this.HookLeft;
	label_05bcfb12: ;
				if (pCVar155 == null) goto label_05bd06bf;
				pMVar153 = null;
				UVar182 = pCVar155.GetHookPosition();
				fVar165 = UVar182.z;
				auVar161._0_8_ = UVar182._0_8_;
				auVar161._8_8_ = extraout_XMM0_Qb_05;
				goto label_05bcfb22;
			}
			if (UStack_e8.x != 0.0) {
				pCVar155 = this.HookRight;
				goto label_05bcfb12;
			}
		}
		else {
			pCVar155 = this.HookRight;
			if (pCVar155 == null) goto label_05bd06bf;
			UVar182 = pCVar155.GetHookPosition();
			pCVar155 = this.HookLeft;
			UVar181 = UStack_d8;
			auVar185 = _auStack_f8;
			if (pCVar155 == null) goto label_05bd06bf;
			pMVar153 = null;
			UVar184 = pCVar155.GetHookPosition();
			auStack_148._0_4_ = UVar182.x;
			auStack_148._4_4_ = UVar182.y;
			fStack_140 = (float)extraout_XMM0_Qb_04;
			fStack_13c = (float)((ulong)extraout_XMM0_Qb_04 >> 0x20);
			auVar161._0_4_ = (UVar184.x + (float)auStack_148._0_4_) * 0.5;
			auVar161._4_4_ = (UVar184.y + (float)auStack_148._4_4_) * 0.5;
			auVar161._8_4_ = (extraout_XMM0_Dc_00 + fStack_140) * 0.0;
			auVar161._12_4_ = (extraout_XMM0_Dd_00 + fStack_13c) * 0.0;
			fVar165 = (UVar184.z + UVar182.z) * 0.5;
	label_05bcfb22: ;
			position._0_8_ = auVar161._0_8_;
			position.z = fVar165;
			this.FixedUpdatePivot(position);
		}
		pCVar155 = this.HookLeft;
		UVar181 = UStack_d8;
		auVar185 = _auStack_f8;
		if (pCVar155 == null) goto label_05bd06bf;
		pMVar153 = null;
		bVar142 = pCVar155.IsHooked();
		if (bVar142) {
			pCVar155 = this.HookLeft;
			UVar181 = UStack_d8;
			auVar185 = _auStack_f8;
			if (pCVar155 == null) goto label_05bd06bf;
			UVar182 = pCVar155.GetHookPosition();
			UVar181 = UStack_d8;
			auVar185 = _auStack_f8;
			if ((*ppUVar1 == null) ||(pUVar18 = ((*ppUVar1).fields).Transform, pUVar18 == null)) goto label_05bd06bf;
			pMVar153 = null;
			UVar184 = pUVar18.position;
			auStack_148._4_4_ = UVar182.y;
			if (((float)auStack_148._4_4_ <= UVar184.y) || (this._launchLeft == false)) goto label_05bcfb98;
	label_05bcfbfb: ;
			UVar182 = this.get_Gravity();
			pUVar14 = this.Cache;
			UVar181 = UStack_d8;
			auVar185 = _auStack_f8;
			if ((pUVar14 == null) ||(pUVar156 = pUVar14.Rigidbody, pUVar156 == null)) goto label_05bd06bf;
			pMVar153 = null;
			UStack_128.y = pUVar156.mass;
			auStack_148._0_4_ = UVar182.z * 0.5 * UStack_128.y;
			UStack_128.x = UStack_128.y * UVar182.x * 0.5;
			UStack_128.y = UStack_128.y * UVar182.y * 0.5;
		}
		else {
	label_05bcfb98: ;
			bVar142 = this.IsHookedRight();
			if (bVar142) {
				pCVar155 = this.HookRight;
				UVar181 = UStack_d8;
				auVar185 = _auStack_f8;
				if (pCVar155 == null) goto label_05bd06bf;
				UVar182 = pCVar155.GetHookPosition();
				UVar181 = UStack_d8;
				auVar185 = _auStack_f8;
				if ((*ppUVar1 == null) ||(pUVar18 = ((*ppUVar1).fields).Transform, pUVar18 == null)) goto label_05bd06bf;
				UVar184 = pUVar18.position;
				auStack_148._4_4_ = UVar182.y;
				if ((UVar184.y < (float)auStack_148._4_4_) && (this._launchRight != false)) goto label_05bcfbfb;
			}
			UVar182 = this.get_Gravity();
			pUVar14 = this.Cache;
			UVar181 = UStack_d8;
			auVar185 = _auStack_f8;
			if ((pUVar14 == null) ||(pUVar156 = pUVar14.Rigidbody, pUVar156 == null)) goto label_05bd06bf;
			pMVar153 = null;
			fVar165 = pUVar156.mass;
			auStack_148._0_4_ = UVar182.z * fVar165;
			UStack_128.x = UVar182.x;
			UStack_128.y = UVar182.y;
			UStack_128.x = UStack_128.x * fVar165;
			UStack_128.y = UStack_128.y * fVar165;
		}
		if ((this.Grounded != false) && (this._state == 1)) {
			bVar142 = this.ValidStockAttacks();
			pMVar153 = method_05;
			if (bVar142) {
				bVar140 = this.IsStock(bVar140);
				pMVar153 = extraout_RDX_05;
				if (bVar140) {
					bVar140 = this.CanStockDueToBL();
					pMVar153 = extraout_RDX_06;
					if (!bVar140) goto label_05bcfd0e;
	label_05bcfd27: ;
					pUVar14 = this.Cache;
					UVar181 = UStack_d8;
					auVar185 = _auStack_f8;
					if ((pUVar14 == null) ||(pUVar18 = pUVar14.Transform, pUVar18 == null)) goto label_05bd06bf;
					UStack_e8.x = this._currentVelocity.x;
					UStack_e8.y = this._currentVelocity.y;
					UStack_e8.z = 0.0;
					UStack_e8.w = 0.0;
					fVar165 = this._currentVelocity.z;
					UVar182 = pUVar18.forward;
					UVar181 = UStack_d8;
					auVar185 = _auStack_f8;
					if ((*ppUVar1 == null) ||(pUVar156 = ((*ppUVar1).fields).Rigidbody, pUVar156 == null)) goto label_05bd06bf;
					UStack_108.y = UVar182.y * 4.0;
					UStack_108.x = UVar182.x * 4.0;
					UStack_108.z = extraout_XMM0_Dc_01 * 0.0;
					UStack_108.w = extraout_XMM0_Dd_01 * 0.0;
					auStack_b8._0_4_ = UVar182.z * 4.0;
					fVar159 = pUVar156.mass;
					if (fVar159 <= 0.001) {
						fVar159 = 0.001;
					}
					value_01.z = fVar165 + (float)auStack_b8._0_4_ / fVar159;
					auVar162._4_4_ = fVar159;
					auVar162._0_4_ = fVar159;
					auVar162._8_4_ = fVar159;
					auVar162._12_4_ = fVar159;
					auVar174 = divps((byte[])UStack_108, auVar162);
					value_01.x = UStack_e8.x + auVar174._0_4_;
					value_01.y = UStack_e8.y + auVar174._4_4_;
					this._currentVelocity.x = value_01.x;
					this._currentVelocity.y = value_01.y;
					this._currentVelocity.z = value_01.z;
					pUVar14 = this.Cache;
					UVar181 = UStack_d8;
					auVar185 = _auStack_f8;
					if ((pUVar14 == null) ||(pUVar156 = pUVar14.Rigidbody, pUVar156 == null)) goto label_05bd06bf;
					pUVar156.linearVelocity = value_01;
					pMVar153 = extraout_RDX_08;
				}
				else {
	label_05bcfd0e: ;
					if (uVar157 == 0) {
						bVar140 = this.CanStockDueToBL();
						pMVar153 = extraout_RDX_07;
						if (bVar140) goto label_05bcfd27;
					}
				}
				pUVar139 = pUStack_c8;
				pSVar22 = SettingsManager.InGameCurrent;
				UVar181 = UStack_d8;
				auVar185 = _auStack_f8;
				if (((pSVar22 == null) ||(pSVar23 = pSVar22.Misc, pSVar23 == null)) ||(pSVar24 = pSVar23.AllowStock, pSVar24 == null)) goto label_05bd06bf;
				if (pSVar24._value != false) {
					pSVar24 = pSVar23.RealismMode;
					if (pSVar24 == null) goto label_05bd06bf;
					if (pSVar24._value == false) goto label_05bcfed8;
				}
				auVar185 = il2cpp_runtime_helper_059d80e0(pUStack_c8);
				UStack_e8.x = auVar185._8_4_;
				fVar165 = (float)il2cpp_runtime_helper_0599adc0(pUVar139);
				if (20.0 <= fVar165) {
					fVar165 = 20.0;
				}
				uStack_138._0_4_ = auVar185._0_4_;
				uStack_138._4_4_ = auVar185._4_4_;
				value_02.x = fVar165 * (float)uStack_138;
				value_02.y = fVar165 * uStack_138._4_4_;
				value_02.z = fVar165 * UStack_e8.x;
				this._currentVelocity.x = value_02.x;
				this._currentVelocity.y = value_02.y;
				this._currentVelocity.z = value_02.z;
				pUVar14 = this.Cache;
				UVar181 = UStack_d8;
				auVar185 = _auStack_f8;
				if ((pUVar14 == null) ||(pUVar156 = pUVar14.Rigidbody, pUVar156 == null)) goto label_05bd06bf;
				pUVar156.linearVelocity = value_02;
				pMVar153 = extraout_RDX_09;
			}
	label_05bcfed8: ;
			this.ToggleSparks(false);
		}
		UVar182 = WeatherManager.GetWeatherForce();
		UVar181 = UStack_d8;
		auVar185 = _auStack_f8;
		if ((*ppUVar1 == null) ||(pUVar156 = ((*ppUVar1).fields).Rigidbody, pUVar156 == null)) goto label_05bd06bf;
		force_04.y = UStack_128.y + UVar182.y;
		force_04.x = UStack_128.x + UVar182.x;
		force_04.z = (float)auStack_148._0_4_ + UVar182.z;
		pUVar156.AddForce(force_04);
		if (this._cancelGasDisable == false) {
			if (bVar141) {
				pCVar27 = this.Stats;
				UVar181 = UStack_d8;
				auVar185 = _auStack_f8;
				if (pCVar27 == null) goto label_05bd06bf;
				pCVar27.UseFrameGas();
				this.SetSmoke(true);
				pSVar28 = SettingsManager.SoundSettings;
				UVar181 = UStack_d8;
				auVar185 = _auStack_f8;
				if ((pSVar28 == null) ||(pSVar24 = pSVar28.GasEffect, pSVar24 == null)) goto label_05bd06bf;
				if (pSVar24._value != false) {
					this.ToggleSoundLoop(HumanSounds.GasLoop, true);
				}
			}
			else {
				this.SetSmoke(false);
				bVar140 = this.IsSoundLoopActive(HumanSounds.GasLoop);
				if (bVar140) {
					this.ToggleSoundLoop(HumanSounds.GasLoop, false);
					this.ToggleSound(HumanSounds.GasEnd, true);
				}
			}
		}
		else {
			this._cancelGasDisable = false;
		}
		pCVar25 = this.HumanCache;
		UVar181 = UStack_d8;
		auVar185 = _auStack_f8;
		if ((pCVar25 == null) ||(__this_01 = pCVar25.Wind, __this_01 == null)) goto label_05bd06bf;
		UStack_a8 = __this_01.main;
		if (this.EffectsEnabled == false) {
	label_05bd02c7: ;
			pCVar25 = this.HumanCache;
			UVar181 = UStack_d8;
			auVar185 = _auStack_f8;
			if (pCVar25 == null) goto label_05bd06bf;
			pMVar153 = (MethodInfo)pCVar25.Wind;
			this.ToggleParticles((ParticleSystem)pMVar153, false);
		}
		else {
			bVar140 = this.IsMainCharacter();
			if (!bVar140) goto label_05bd02c7;
			if (WindWeatherEffect.WindEnabled == false) {
				fVar165 = (float)il2cpp_runtime_helper_0599adc0(pUStack_c8, 0);
				if (80.0 < fVar165) {
					pSVar29 = SettingsManager.GraphicsSettings;
					UVar181 = UStack_d8;
					auVar185 = _auStack_f8;
					if ((pSVar29 == null) ||(pSVar24 = pSVar29.WindEffectEnabled, pSVar24 == null)) goto label_05bd06bf;
					if (pSVar24._value != false) {
						pCVar25 = this.HumanCache;
						if (pCVar25 == null) goto label_05bd06bf;
						this.ToggleParticles(pCVar25.Wind, true);
						fVar165 = (float)il2cpp_runtime_helper_0599adc0(pUStack_c8);
						UStack_a8.startSpeedMultiplier = fVar165;
						pCVar25 = this.HumanCache;
						UVar181 = UStack_d8;
						auVar185 = _auStack_f8;
						if (((pCVar25 == null) ||(*ppUVar1 == null)) ||(pUVar18 = ((*ppUVar1).fields).Transform, pUVar18 == null)) goto label_05bd06bf;
						pUVar151 = pCVar25.WindTransform;
						UVar182 = pUVar18.position;
						UVar181 = UStack_d8;
						auVar185 = _auStack_f8;
						if (pUVar151 == null) goto label_05bd06bf;
						fVar165 = UVar182.z - this._currentVelocity.z;
						uVar7 = this._currentVelocity.x;
						uVar11 = this._currentVelocity.y;
						auVar163._0_4_ = UVar182.x - (float)uVar7;
						auVar163._4_4_ = UVar182.y - (float)uVar11;
						auVar163._8_4_ = extraout_XMM0_Dc_02 - 0.0;
						auVar163._12_4_ = extraout_XMM0_Dd_02 - 0.0;
						goto label_05bd007d;
					}
				}
				goto label_05bd02c7;
			}
			pCVar25 = this.HumanCache;
			UVar181 = UStack_d8;
			auVar185 = _auStack_f8;
			if (pCVar25 == null) goto label_05bd06bf;
			this.ToggleParticles(pCVar25.Wind, true);
			UStack_a8.startSpeedMultiplier = 100.0;
			pCVar25 = this.HumanCache;
			UVar181 = UStack_d8;
			auVar185 = _auStack_f8;
			if (((pCVar25 == null) ||(*ppUVar1 == null)) ||(pUVar18 = ((*ppUVar1).fields).Transform, pUVar18 == null)) goto label_05bd06bf;
			pUVar151 = pCVar25.WindTransform;
			UVar182 = pUVar18.position;
			UVar181 = UStack_d8;
			auVar185 = _auStack_f8;
			if (pUVar151 == null) goto label_05bd06bf;
			fVar165 = UVar182.z + (WindWeatherEffect.WindDirection).z;
			uVar6 = (WindWeatherEffect.WindDirection).x;
			uVar10 = (WindWeatherEffect.WindDirection).y;
			auVar163._0_4_ = UVar182.x + (float)uVar6;
			auVar163._4_4_ = UVar182.y + (float)uVar10;
			auVar163._8_4_ = (float)extraout_XMM0_Qb_06 + 0.0;
			auVar163._12_4_ = (float)((ulong)extraout_XMM0_Qb_06 >> 0x20) + 0.0;
	label_05bd007d: ;
			pMVar153 = null;
			worldPosition._0_8_ = auVar163._0_8_;
			worldPosition.z = fVar165;
			pUVar151.LookAt(worldPosition);
		}
		this.FixedUpdateSetHookedDirection();
		forwardAtStart.z = fStack_9c;
		forwardAtStart.x = (float)(undefined4)uStack_48;
		forwardAtStart.y = (float)uStack_48._4_4_;
		this.FixedUpdateBodyLean((float)uStack_88, forwardAtStart);
		pSVar22 = SettingsManager.InGameCurrent;
		UVar181 = UStack_d8;
		auVar185 = _auStack_f8;
		if (((pSVar22 == null) ||(pSVar23 = pSVar22.Misc, pSVar23 == null)) ||(pSVar24 = pSVar23.RealismMode, pSVar24 == null)) goto label_05bd06bf;
		if (pSVar24._value != false) {
			if ((*ppUVar1 == null) ||(pUVar156 = ((*ppUVar1).fields).Rigidbody, pUVar156 == null)) goto label_05bd06bf;
			UStack_118 = (Vector3)pUVar156.linearVelocity;
			pMVar153 = null;
			fVar165 = (float)il2cpp_runtime_helper_0599adc0(&UStack_118);
			pSVar22 = SettingsManager.InGameCurrent;
			UVar181 = UStack_d8;
			auVar185 = _auStack_f8;
			if ((pSVar22 == null) ||((pSVar23 = pSVar22.Misc, pSVar23 == null ||(pSVar30 = pSVar23.RealismMaxSpeed, pSVar30 == null)))) goto label_05bd06bf;
			fVar159 = pSVar30._value;
			if (fVar159 < fVar165) {
				if ((*ppUVar1 == null) ||(pUVar156 = ((*ppUVar1).fields).Rigidbody, pUVar156 == null)) goto label_05bd06bf;
				UStack_118 = (Vector3)pUVar156.linearVelocity;
				auVar186 = il2cpp_runtime_helper_059d80e0(&UStack_118, 0);
				UVar181 = UStack_d8;
				auVar185 = _auStack_f8;
				if ((*ppUVar1 == null) ||(pUVar156 = ((*ppUVar1).fields).Rigidbody, pUVar156 == null)) goto label_05bd06bf;
				fVar165 = fVar165 - fVar159;
				force_05.y = fVar165 * auVar186._4_4_ * -0.9;
				force_05.x = fVar165 * auVar186._0_4_ * -0.9;
				force_05.z = auVar186._8_4_ * fVar165 * -0.9;
				pMVar153 = (MethodInfo)&g_data_00000005;
				pUVar156.AddForce(force_05, 5);
			}
		}
		if (this._useFixedUpdateClipping == false) {
			this._useFixedUpdateClipping = true;
			pUVar14 = this.Cache;
			UVar181 = UStack_d8;
			auVar185 = _auStack_f8;
			if ((pUVar14 == null) ||(pUVar156 = pUVar14.Rigidbody, pUVar156 == null)) {
	label_05bd06bf: ;
				UStack_d8 = UVar181;
				_auStack_f8 = auVar185;
				throw new NullReferenceException();
			}
			UVar183 = (Vector3)pUVar156.position;
			this._lastPosition = UVar183;
			fVar165 = pUStack_c8.y;
			this._lastVelocity.x = pUStack_c8.x;
			this._lastVelocity.y = fVar165;
			this._lastVelocity.z = pUStack_c8.z;
		}
		else {
			this.FixedUpdateClippingCheck();
		}
		this.ReelInAxis = 0.0;
		return;
	}

	[Token(Token = "0x6004155")]
	[Address(RVA = "0x5AD26A0", Offset = "0x5AD16A0", VA = "0x5AD26A0")]
	private bool CanStockDueToBL()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$CanStockDueToBL): clean
		HookUseable pCVar1;
		bool bVar2;

		pCVar1 = this.HookLeft;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsHooked();
			if (bVar2) {
				pCVar1 = this.HookRight;
				if (pCVar1 == null) goto label_05bd2725;
				bVar2 = pCVar1.IsHooked();
				if (bVar2) {
					if (this._almostSingleHook == false) {
						return true;
					}
					return false;
				}
			}
			pCVar1 = this.HookLeft;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsHooked();
				if (bVar2) {
					return false;
				}
				pCVar1 = this.HookRight;
				if (pCVar1 != null) {
					bVar2 = pCVar1.IsHooked();
					if (bVar2) {
						return false;
					}
					return true;
				}
			}
		}
	label_05bd2725: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004156")]
	[Address(RVA = "0x5AD24E0", Offset = "0x5AD14E0", VA = "0x5AD24E0")]
	private bool ValidStockAttacks()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ValidStockAttacks): clean
		AnimationHandler pCVar1;
		bool bVar2;

		pCVar1 = this.Animation;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsPlaying(HumanAnimations.Attack1);
			if (bVar2) {
				return true;
			}
			pCVar1 = this.Animation;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsPlaying(HumanAnimations.Attack2) ;
				if (bVar2) {
					return true;
				}
				pCVar1 = this.Animation;
				if (pCVar1 != null) {
					bVar2 = pCVar1.IsPlaying(HumanAnimations.Attack1HookL1);
					if (bVar2) {
						return true;
					}
					pCVar1 = this.Animation;
					if (pCVar1 != null) {
						bVar2 = pCVar1.IsPlaying(HumanAnimations.Attack1HookR1);
						if (bVar2) {
							return true;
						}
						pCVar1 = this.Animation;
						if (pCVar1 != null) {
							bVar2 = pCVar1.IsPlaying(HumanAnimations.Attack1HookL2);
							if (bVar2) {
								return true;
							}
							pCVar1 = this.Animation;
							if (pCVar1 != null) {
								bVar2 = pCVar1.IsPlaying(HumanAnimations.Attack1HookR2);
								return bVar2;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004157")]
	[Address(RVA = "0x5AC27C0", Offset = "0x5AC17C0", VA = "0x5AC27C0")]
	public bool HasGrabImmunity()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$HasGrabImmunity): clean
		return 0.0 < this._grabIFrames;
	}

	[Token(Token = "0x6004158")]
	[Address(RVA = "0x5AD4350", Offset = "0x5AD3350", VA = "0x5AD4350")]
	public void StartGrabImmunity(float duration)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$StartGrabImmunity): clean
		this._grabIFrames = duration;
		return;
	}

	[Token(Token = "0x6004159")]
	[Address(RVA = "0x5ACC550", Offset = "0x5ACB550", VA = "0x5ACC550")]
	private void UpdateIFrames()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$UpdateIFrames): clean
		float fVar1;
		float fVar2;

		fVar2 = this.InvincibleTimeLeft;
		fVar1 = Time.deltaTime;
		fVar2 = fVar2 - fVar1;
		this.InvincibleTimeLeft = fVar2;
		if (fVar2 <= 0.0) {
			this.IsInvincible = false;
			fVar2 = this._grabIFrames;
		}
		else {
			fVar2 = this._grabIFrames;
		}
		if (fVar2 <= 0.0) {
			return;
		}
		fVar1 = Time.deltaTime;
		this._grabIFrames = fVar2 - fVar1;
		return;
	}

	[Token(Token = "0x600415A")]
	[Address(RVA = "0x5ACC5E0", Offset = "0x5ACB5E0", VA = "0x5ACC5E0")]
	private void UpdateBladeFire()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$UpdateBladeFire): 1 lines keep C-only constructs
		byte bVar1;
		HumanSetup pCVar2;
		InGameMenu __this_00;
		bool bVar3;
		int iVar4;
		uint state;

		if (this.AI == false) {
			pCVar2 = this.Setup;
			bVar3 = ((Object)pCVar2 == null);
			if (!bVar3) {
				pCVar2 = this.Setup;
				if (pCVar2 != null) {
					if (pCVar2.Weapon != 0) {
						return;
					}
					__this_00 = (InGameMenu)UIManager.CurrentMenu;
					if (__this_00 != null) {
						bVar1 = (typeof(InGameMenu)._2).typeHierarchyDepth;
						if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu)) ) {
							throw new InvalidCastException();
						}
						iVar4 = __this_00.GetStylebarRank();
						state = 3;
						if ((iVar4 < 7) && (state = 2, iVar4 != 6)) {
							state = (uint)(3 < iVar4);
						}
						this.ToggleBladeFire(state);
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x600415B")]
	[Address(RVA = "0x5AD44A0", Offset = "0x5AD34A0", VA = "0x5AD44A0")]
	private void lookAtTarget(Vector3 target)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$lookAtTarget): 38 lines keep C-only constructs
		HumanComponentCache pCVar1;
		Transform pUVar2;
		Transform __this_00;
		Quaternion UVar3;
		Transform pUVar4;
		float fVar5;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		float fVar6;
		byte[] auVar7 = new byte[12];
		byte[] auVar8 = new byte[16];
		byte[] auVar10 = new byte[16];
		byte[] auVar9 = new byte[16];
		Vector3 UVar11;
		Vector3 euler;
		Vector3 euler_00;
		Vector3 euler_01;
		Vector3 euler_02;
		Quaternion UVar12;
		float local_98;
		float fStack_94;
		uint uStack_90;
		uint uStack_8c;
		Quaternion local_88;
		Quaternion local_78;
		Quaternion local_68;
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[16];
		Quaternion local_38;

		pCVar1 = this.HumanCache;
		if (pCVar1 != null) {
			pUVar2 = pCVar1.Spine;
			__this_00 = pCVar1.Chest;
			pUVar4 = this.transform;
			if (pUVar4 != null) {
				pUVar4.position;
				pUVar4 = this.transform;
				if (pUVar4 != null) {
					pUVar4.position;
					pCVar1 = this.HumanCache;
					if ((pCVar1 != null) &&(__this_00 != null)) {
						pUVar4 = pCVar1.Head;
						UVar12 = __this_00.rotation;
						if (pUVar4 != null) {
							pUVar4.rotation = UVar12;
							pUVar4 = this.transform ;
							if (pUVar4 != null) {
								UVar11 = pUVar4.position;
								local_88.x = target.x;
								fVar5 = atan2f(target.z - UVar11.z, local_88.x - UVar11.x);
								pUVar4 = this.transform;
								if (pUVar4 != null) {
									local_78 = pUVar4.rotation;
									UVar11 = Quaternion.Internal_ToEulerRad(ref local_78);
									euler.x = UVar11.x * 57.29578;
									euler.y = UVar11.y * 57.29578;
									euler.z = UVar11.z * 57.29578;
									UVar11 = Quaternion.Internal_MakePositive(euler);
									if (pUVar2 != null) {
										fVar6 = (0.0 - fVar5) * -57.29578 + UVar11.y + -90.0;
										fVar5 = floorf(fVar6 / 360.0);
										fVar6 = fVar5 * -360.0 + fVar6;
										auVar7 = ZEXT812(0x43b40000);
										if (fVar6 <= auVar7._0_4_) {
											auVar7._4_8_ = auVar7._4_8_;
											auVar7._0_4_ = fVar6;
										}
										fVar5 = (float)(-(uint)(0.0 <= fVar6) & auVar7._0_4_);
										fVar6 = 0.0 - (float)(~-(uint)(180.0 < fVar5) & (uint)fVar5 |(uint)(fVar5 + -360.0) & -(uint)(180.0 < fVar5));
										UVar11 = pUVar2.position;
										local_88.y = target.y;
										uStack_90 = 0;
										uStack_8c = 0;
										fVar5 = atan2f(UVar11.y - local_88.y, fVar6);
										pCVar1 = this.HumanCache;
										if (pCVar1 != null) {
											fVar5 = fVar5 * 57.29578;
											pUVar2 = pCVar1.Head;
											local_78 = __this_00.rotation;
											UVar11 = Quaternion.Internal_ToEulerRad(ref local_78);
											euler_00.x = UVar11.x * 57.29578;
											euler_00.y = UVar11.y * 57.29578;
											euler_00.z = UVar11.z * 57.29578;
											UVar11 = Quaternion.Internal_MakePositive(euler_00);
											local_58._8_4_ = extraout_XMM0_Dc;
											local_58._0_8_ = UVar11._0_8_;
											local_58._12_4_ = extraout_XMM0_Dd_00;
											local_78 = __this_00.rotation;
											UVar11 = Quaternion.Internal_ToEulerRad(ref local_78);
											euler_01.x = UVar11.x * 57.29578;
											euler_01.y = UVar11.y * 57.29578;
											euler_01.z = UVar11.z * 57.29578;
											UVar11 = Quaternion.Internal_MakePositive(euler_01);
											local_48._8_4_ = extraout_XMM0_Dc_00;
											local_48._0_8_ = UVar11._0_8_;
											local_48._12_4_ = extraout_XMM0_Dd_01;
											local_78 = __this_00.rotation;
											UVar11 = Quaternion.Internal_ToEulerRad(ref local_78);
											euler_02.x = UVar11.x * 57.29578;
											euler_02.y = UVar11.y * 57.29578;
											euler_02.z = UVar11.z * 57.29578;
											UVar11 = Quaternion.Internal_MakePositive(euler_02);
											auVar9._8_4_ = extraout_XMM0_Db;
											auVar9._0_4_ = fVar5;
											auVar9._4_4_ = extraout_XMM0_Db;
											auVar9._12_4_ = extraout_XMM0_Dd;
											auVar8._8_8_ = auVar9._8_8_;
											auVar8._4_4_ = fVar6;
											auVar8._0_4_ = fVar5;
											auVar10._0_12_ = auVar8._0_12_;
											auVar10._12_4_ = 0;
											auVar8 = minps(_DAT_01006ec0, auVar10);
											local_68.x = ((float)local_58._0_4_ +(float)(~-(uint)(-40.0 <= fVar5) & 0xc2200000 | auVar8._0_4_ & -(uint)(-40.0 <= fVar5))) * 0.017453292;
											local_68.y = ((float)local_48._4_4_ +(float)(~-(uint)(-40.0 <= fVar6) & 0xc2200000 | auVar8._4_4_ & -(uint)(-40.0 <= fVar6))) * 0.017453292;
											local_68.z = UVar11.z * 0.017453292;
											UVar12 = Quaternion.Internal_FromEulerRad(ref local_68);
											if (pUVar2 != null) {
												pUVar2.rotation = UVar12;
												pCVar1 = this.HumanCache;
												if ((pCVar1 != null) &&(pUVar2 = pCVar1.Head, pUVar2 != null)) {
													UVar3 = this._oldHeadRotation;
													UVar12 = pUVar2.localRotation;
													local_58._8_4_ = uStack_90;
													local_58._0_8_ = UVar12._8_8_;
													local_58._12_4_ = uStack_8c;
													fVar5 = Time.deltaTime;
													local_88.x = UVar3.x;
													local_88.y = UVar3.y;
													local_68.x = local_88.x;
													local_68.y = local_88.y;
													local_88.z = UVar3.z;
													local_88.w = UVar3.w;
													local_68.z = local_88.z;
													local_68.w = local_88.w;
													local_98 = UVar12.x;
													fStack_94 = UVar12.y;
													local_38.z = local_58._0_4_;
													local_38.w = local_58._4_4_;
													local_38.x = local_98;
													local_38.y = fStack_94;
													UVar12 = Quaternion.Internal_Lerp(ref local_68, ref local_38, fVar5 * 12.0);
													pUVar2.localRotation = UVar12;
													pCVar1 = this.HumanCache;
													if ((pCVar1 != null) &&(pUVar2 = pCVar1.Head, pUVar2 != null)) {
														UVar12 = pUVar2.localRotation;
														__this_00.rotation = UVar12;
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x600415C")]
	[Address(RVA = "0x5AD4870", Offset = "0x5AD3870", VA = "0x5AD4870")]
	protected void LateUpdateHeadPosition(Vector3 position)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$LateUpdateHeadPosition): 106 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		BaseComponentCache pUVar3;
		BaseCamera pCVar4;
		Camera pUVar5;
		HumanComponentCache pCVar6;
		Transform pUVar7;
		Vector2 UVar8;
		Vector2 UVar9;
		System_Nullable_Quaternion__o pSVar10;
		UnityEngine_Vector3_StaticFields pUVar11;
		Transform pUVar12;
		uint uVar14;
		uint uVar15;
		float fVar16;
		float fVar17;
		float fVar18;
		uint extraout_XMM0_Db;
		uint uVar19;
		uint in_XMM0_Dc;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dc_03;
		uint extraout_XMM0_Dc_04;
		uint extraout_XMM0_Dc_05;
		uint in_XMM0_Dd;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint extraout_XMM0_Dd_02;
		uint extraout_XMM0_Dd_03;
		uint extraout_XMM0_Dd_04;
		uint extraout_XMM0_Dd_05;
		byte[] auVar20 = new byte[16];
		byte[] auVar21 = new byte[16];
		byte[] auVar22 = new byte[16];
		float fVar23;
		byte[] auVar24 = new byte[16];
		Quaternion UVar25;
		Quaternion UVar26;
		Vector3 UVar27;
		Vector3 UVar28;
		Vector3 euler;
		Vector3 euler_00;
		float fStack_b4;
		byte[] auStack_a8 = new byte[16];
		byte[] auStack_98 = new byte[32];
		Quaternion UStack_78;
		float fStack_60;
		float fStack_5c;
		Quaternion UStack_58;
		byte[] auStack_48 = new byte[16];
		byte[] auStack_38 = new byte[8];
		float fStack_30;
		float fStack_2c;
		Quaternion UStack_28;

		UVar28.z = position.z;
		UStack_78.z = (float)in_XMM0_Dc;
		UStack_78._0_8_ = position._0_8_;
		UStack_78.w = (float)in_XMM0_Dd;
		UStack_58 = (Quaternion)ZEXT816(0);
		pUVar3 = this.Cache;
		if ((pUVar3 == null) ||(pUVar12 = pUVar3.Transform, pUVar12 == null)) goto label_05bd4e67;
		UVar27 = pUVar12.position;
		fStack_5c = UVar27.z;
		fStack_30 = (float)extraout_XMM0_Dc;
		auStack_38 = UVar27._0_8_;
		fStack_2c = (float)extraout_XMM0_Dd;
		UVar28.x = UStack_78.x;
		UVar28.y = UStack_78.y;
		UVar9 = this.GetLookAngle(UVar28);
		fVar17 = UVar9.y;
		auVar21._8_4_ = extraout_XMM0_Dc_00;
		auVar21._0_4_ = UVar9.x;
		auVar21._4_4_ = UVar9.y;
		auVar21._12_4_ = extraout_XMM0_Dd_00;
		if ((-120.0 < fVar17 && fVar17 < -50.0) || (fVar17 < 120.0 && 50.0 < fVar17)) {
			fVar17 = this.LastGoodHeadAngle.y;
			if ((fVar17 < -50.0) || (auStack_a8 = auVar21, 50.0 < fVar17)) {
				pCVar4 = SceneLoader.CurrentCamera;
				if ((pCVar4 == null) ||((pUVar5 = pCVar4.Camera, pUVar5 == null ||(pUVar12 = pUVar5.transform , pUVar12 == null)))) goto label_05bd4e67;
				UVar28 = pUVar12.position;
				UVar9 = this.GetLookAngle(UVar28);
				auStack_a8._8_4_ = extraout_XMM0_Dc_02;
				auStack_a8._0_4_ = UVar9.x;
				auStack_a8._4_4_ = UVar9.y;
				auStack_a8._12_4_ = extraout_XMM0_Dd_02;
				fVar17 = this.LastGoodHeadAngle.y;
			}
			this.LastGoodHeadAngle.x = (float)auStack_a8._0_4_;
			auStack_a8._4_4_ = fVar17;
		}
		else {
			pUVar3 = this.Cache;
			if ((pUVar3 == null) ||(pUVar12 = pUVar3.Transform, pUVar12 == null)) goto label_05bd4e67;
			UVar27 = pUVar12.forward;
			auStack_48._8_4_ = extraout_XMM0_Dc_01;
			auStack_48._0_8_ = UVar27._0_8_;
			auStack_48._12_4_ = extraout_XMM0_Dd_01;
			fStack_60 = UVar27.z;
			if (Il2CppMethodInitialized_0753e72d == false) {
				Il2CppMethodInitialized_0753e72d = true;
				auStack_98[0] = false;
				auStack_98._1_3_ = 0;
				auStack_98._4_4_ = 0.0;
			}
			else {
				auStack_98[0] = false;
				auStack_98._1_3_ = 0;
				auStack_98._4_4_ = 0.0;
			}
			auStack_98[0] = false;
			auStack_98._1_3_ = 0;
			auStack_98._4_4_ = 0.0;
			if (Il2CppMethodInitialized_0753e729 == false) {
				auStack_98[0] = false;
				auStack_98._1_3_ = 0;
				auStack_98._4_4_ = 0.0;
				Il2CppMethodInitialized_0753e729 = true;
			}
			UStack_78.x = UStack_78.x - (float)auStack_38._0_4_;
			UStack_78.y = UStack_78.y - (float)auStack_38._4_4_;
			fVar23 = UVar28.z - fStack_5c;
			UStack_78.z = UStack_78.z - fStack_30;
			UStack_78.w = UStack_78.w - fStack_2c;
			fVar16 = UStack_78.x;
			fVar18 = UStack_78.y;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
				fVar16 = UStack_78.x;
				fVar18 = UStack_78.y;
			}
			uVar19 = 0;
			fVar16 = fVar23 * fVar23 + fVar18 * fVar18 + fVar16 * fVar16;
			if (fVar16 < 0.0) {
				fVar16 = sqrtf(fVar16);
				uVar19 = extraout_XMM0_Db;
				if (fVar16 <= 1e-05) goto label_05bd4a23;
	label_05bd4af3: ;
				fVar23 = fVar23 / fVar16;
				auVar20._4_4_ = fVar16;
				auVar20._0_4_ = fVar16;
				auVar20._8_4_ = uVar19;
				auVar20._12_4_ = uVar19;
				auVar20 = divps((byte[])UStack_78, auVar20);
				auStack_98[0] = auVar20[0];
				auStack_98._1_3_ = auVar20._1_3_;
				auStack_98._4_4_ = auVar20._4_4_;
				pUVar11 = (UnityEngine_Vector3_StaticFields)auStack_98;
			}
			else {
				fVar16 = SQRT(fVar16);
				if (1e-05 < fVar16) goto label_05bd4af3;
	label_05bd4a23: ;
				pUVar11 = typeof(Vector3).static_fields;
				fVar23 = (pUVar11.zeroVector).z;
			}
			uVar1 = (pUVar11.zeroVector).x;
			uVar2 = (pUVar11.zeroVector).y;
			if (0.0 <= fStack_60 * fVar23 +(float)auStack_48._4_4_ * (float)uVar2 + (float)auStack_48._0_4_ * (float)uVar1) {
				auStack_a8._0_4_ = UVar9.x;
				fVar23 = (float)auStack_a8._0_4_;
				auStack_a8 = auVar21;
			}
			else {
				pCVar4 = SceneLoader.CurrentCamera;
				if (((pCVar4 == null) ||(pUVar5 = pCVar4.Camera, pUVar5 == null)) ||(pUVar12 = pUVar5.transform, pUVar12 == null)) goto label_05bd4e67;
				UVar28 = pUVar12.position;
				UVar9 = this.GetLookAngle(UVar28);
				fVar17 = UVar9.y;
				auStack_a8._8_4_ = extraout_XMM0_Dc_03;
				auStack_a8._0_4_ = UVar9.x;
				auStack_a8._4_4_ = UVar9.y;
				auStack_a8._12_4_ = extraout_XMM0_Dd_03;
				fVar23 = UVar9.x;
			}
			UVar8.y = fVar17;
			UVar8.x = fVar23;
			this.LastGoodHeadAngle = UVar8;
		}
		pCVar6 = this.HumanCache;
		if ((pCVar6 != null) &&(pUVar12 = pCVar6.Head, pUVar12 != null)) {
			UStack_58 = pUVar12.rotation;
			UVar28 = Quaternion.Internal_ToEulerRad(ref UStack_58);
			UVar27.x = UVar28.x * 57.29578;
			UVar27.y = UVar28.y * 57.29578;
			UVar27.z = UVar28.z * 57.29578;
			UVar28 = Quaternion.Internal_MakePositive(UVar27);
			pCVar6 = this.HumanCache;
			if (pCVar6 != null) {
				UStack_78.z = (float)extraout_XMM0_Dc_04;
				UStack_78._0_8_ = UVar28._0_8_;
				UStack_78.w = (float)extraout_XMM0_Dd_04;
				pUVar7 = pCVar6.Head;
				if (pUVar7 != null) {
					UStack_58 = pUVar7.rotation;
					UVar28 = Quaternion.Internal_ToEulerRad(ref UStack_58);
					euler.x = UVar28.x * 57.29578;
					euler.y = UVar28.y * 57.29578;
					euler.z = UVar28.z * 57.29578;
					UVar28 = Quaternion.Internal_MakePositive(euler);
					pCVar6 = this.HumanCache;
					if ((pCVar6 != null) &&(pUVar7 = pCVar6.Head, pUVar7 != null)) {
						auVar21 = minps(_DAT_01007a20, auStack_a8);
						uVar14 = -(uint)(-80.0 <= auStack_a8._0_4_);
						uVar15 = -(uint)(-80.0 <= auStack_a8._4_4_);
						auVar22._0_4_ = auVar21._0_4_ & uVar14;
						auVar22._4_4_ = auVar21._4_4_ & uVar15;
						auVar22._8_4_ = auVar21._8_4_ & -(uint)(0.0 <= auStack_a8._8_4_);
						auVar22._12_4_ = auVar21._12_4_ & -(uint)(0.0 <= auStack_a8._12_4_);
						auVar24._0_8_ = CONCAT44(~uVar15, ~uVar14) & 0xc2a00000c2a00000;
						auVar24._8_8_ = 0;
						UStack_58 = pUVar7.rotation;
						UVar27 = Quaternion.Internal_ToEulerRad(ref UStack_58);
						euler_00.x = UVar27.x * 57.29578;
						euler_00.y = UVar27.y * 57.29578;
						euler_00.z = UVar27.z * 57.29578;
						UVar27 = Quaternion.Internal_MakePositive(euler_00);
						auStack_a8._0_4_ = SUB164(auVar24 | auVar22, 0);
						auStack_a8._4_4_ = SUB164(auVar24 | auVar22, 4);
						fStack_b4 = UVar28.y;
						auStack_98._0_4_ = (UStack_78.x - (float)auStack_a8._0_4_) * 0.017453292;
						auStack_98._4_4_ = (fStack_b4 + (float)auStack_a8._4_4_) * 0.017453292;
						auStack_98._8_4_ = UVar27.z * 0.017453292;
						UVar25 = Quaternion.Internal_FromEulerRad((Vector3)auStack_98);
						pUVar12.rotation = UVar25;
						pCVar6 = this.HumanCache;
						if ((pCVar6 != null) &&(pUVar12 = pCVar6.Head, pUVar12 != null)) {
							UVar26 = this._oldHeadRotation;
							UVar25 = pUVar12.localRotation;
							UStack_78.z = (float)extraout_XMM0_Dc_05;
							UStack_78._0_8_ = UVar25._0_8_;
							UStack_78.w = (float)extraout_XMM0_Dd_05;
							fVar17 = Time.deltaTime;
							auStack_a8._0_8_ = UVar26._0_8_;
							auStack_a8._8_8_ = UVar26._8_8_;
							auStack_98._0_8_ = auStack_a8._0_8_;
							auStack_98._8_8_ = auStack_a8._8_8_;
							UStack_28.x = UStack_78.x;
							UStack_28.y = UStack_78.y;
							UStack_28._8_8_ = UVar25._8_8_;
							UVar25 = Quaternion.Internal_Lerp((Quaternion)auStack_98, ref UStack_28, fVar17 * 10.0);
							pUVar12.localRotation = UVar25;
							pCVar6 = this.HumanCache;
							if ((pCVar6 != null) &&(pUVar12 = pCVar6.Head, pUVar12 != null)) {
								UVar26 = (Quaternion)pUVar12.localRotation;
								this._oldHeadRotation = UVar26;
								pCVar6 = this.HumanCache;
								if ((pCVar6 != null) &&(pUVar12 = pCVar6.Head, pUVar12 != null)) {
									UVar25 = pUVar12.rotation;
									auStack_98[0] = false;
									auStack_98._1_3_ = 0;
									auStack_98._4_4_ = 0.0;
									auStack_98._8_4_ = 0.0;
									auStack_98._12_4_ = 0.0;
									auStack_98._16_4_ = 0.0;
									auStack_98 = new Nullable<Quaternion>(UVar25);
									this.LateUpdateHeadRotation.value.w = (float)auStack_98._16_4_;
									this.LateUpdateHeadRotation.hasValue = (bool)auStack_98[0];
									*(undefined3)&this.LateUpdateHeadRotation.field_0x1 = auStack_98._1_3_;
									this.LateUpdateHeadRotation.value.x = (float)auStack_98._4_4_;
									pSVar10 = &this.LateUpdateHeadRotation;
									pSVar10.value.y = (float)auStack_98._8_4_;
									pSVar10.value.z = (float)auStack_98._12_4_;
									return;
								}
							}
						}
					}
				}
			}
		}
	label_05bd4e67: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600415D")]
	[Address(RVA = "0x5AD4E70", Offset = "0x5AD3E70", VA = "0x5AD4E70", Slot = "114")]
	protected override void LateUpdate()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$LateUpdate): 9 lines keep C-only constructs
		int iVar1;
		HumanComponentCache pCVar2;
		Transform pUVar3;
		ulong uVar4;
		ulong uVar5;
		System_Nullable_Quaternion__o pSVar6;
		bool bVar7;
		float fVar9;
		Quaternion UVar10;
		Quaternion UVar11;
		Vector3 position;
		float fStack_58;
		float fStack_54;
		Quaternion UStack_30;
		Quaternion UStack_20;

		this.LateUpdate();
		bVar7 = this.IsMine();
		if ((bVar7) && (this._state != 7)) {
			if (this.MountState == 0) {
				this.LateUpdateTilt();
				this.LateUpdateReelOut();
			}
			if (this.IsAttackableState != false) {
				this.LateUpdateGun();
			}
			iVar1 = this._state;
			bVar7 = true;
			if ((iVar1 != 0) && (iVar1 != 0xc)) {
				bVar7 = iVar1 == 0xb;
			}
			if (((bVar7 & this.Grounded) != 0) && (this._cameraFPS == false)) {
				position = this.GetAimPoint();
				this.LateUpdateHeadPosition(position);
				return;
			}
			this.LastGoodHeadAngle =(Vector2.zeroVector);
			this.LateUpdateHeadRotation.hasValue = false;
			*(undefined3)&this.LateUpdateHeadRotation.field_0x1 = 0;
			this.LateUpdateHeadRotation.value.x = 0.0;
			pSVar6 = &this.LateUpdateHeadRotation;
			pSVar6.value.y = 0.0;
			pSVar6.value.z = 0.0;
			this.LateUpdateHeadRotation.value.w = 0.0;
			pCVar2 = this.HumanCache;
		}
		else {
			bVar7 = this.IsMine();
			if (bVar7) {
				return;
			}
			if (this.LateUpdateHeadRotationRecv.hasValue == false) {
				return;
			}
			pCVar2 = this.HumanCache;
			if (pCVar2 == null) goto label_05bd50c0;
			pUVar3 = pCVar2.Head;
			UVar10 = (this.LateUpdateHeadRotationRecv).Value;
			if (pUVar3 == null) goto label_05bd50c0;
			pUVar3.rotation = UVar10;
			pCVar2 = this.HumanCache;
			if ((pCVar2 == null) ||(pUVar3 = pCVar2.Head, pUVar3 == null)) goto label_05bd50c0;
			uVar4._0_4_ = this._oldHeadRotation.x;
			uVar4._4_4_ = this._oldHeadRotation.y;
			uVar5._0_4_ = this._oldHeadRotation.z;
			uVar5._4_4_ = this._oldHeadRotation.w;
			UVar10 = pUVar3.localRotation;
			fVar9 = Time.deltaTime;
			fStack_58 = UVar10.x;
			fStack_54 = UVar10.y;
			UStack_30.z = UVar10.z;
			UStack_30.w = UVar10.w;
			UStack_30.x = fStack_58;
			UStack_30.y = fStack_54;
			UStack_20._0_8_ = uVar4;
			UStack_20._8_8_ = uVar5;
			UVar10 = Quaternion.Internal_Lerp(ref UStack_20, ref UStack_30, fVar9 * 10.0);
			pUVar3.localRotation = UVar10;
			pCVar2 = this.HumanCache;
		}
		if ((pCVar2 != null) &&(pUVar3 = pCVar2.Head, pUVar3 != null)) {
			UVar11 = (Quaternion)pUVar3.localRotation ;
			this._oldHeadRotation = UVar11;
			return;
		}
	label_05bd50c0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600415E")]
	[Address(RVA = "0x5AD67B0", Offset = "0x5AD57B0", VA = "0x5AD67B0", Slot = "116")]
	protected override void LateUpdateFPS()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$LateUpdateFPS): 10 lines keep C-only constructs
		byte bVar1;
		HumanCustomSkinLoader pCVar2;
		InGameCamera __this_00;
		BaseCharacter x;
		Dictionary<object, object> pSVar3;
		Renderer pUVar4;
		bool bVar5;
		List<Renderer> pSVar6;
		Material value;
		float fVar7;
		byte[] auStack_70 = new byte[16];
		Renderer pUStack_60;
		byte[] auStack_58 = new byte[8];
		Renderer pUStack_48;
		Material pUStack_38;

		auStack_58 = (byte[])0x0;
		pUStack_48 = null;
		pUStack_38 = null;
		bVar5 = this.IsMine();
		if ((bVar5) && (this.FinishSetup != false)) {
			pCVar2 = this._customSkinLoader;
			if (pCVar2 == null) {
	label_05bd6bfc: ;
				throw new NullReferenceException();
			}
			if (pCVar2.Finished != false) {
				__this_00 = (InGameCamera)SceneLoader.CurrentCamera;
				if (__this_00 == null) goto label_05bd6bfc;
				bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
				if (((__this_00.klass._2).typeHierarchyDepth < bVar1) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameCamera))) {
					throw new InvalidCastException();
				}
				x = __this_00._follow;
				bVar5 = ((Object)x == (Object)this);
				if (bVar5) {
					fVar7 = __this_00.GetCameraDistance();
					if ((fVar7 == 0.0) && (!NAN(fVar7))) {
						if (this._cameraFPS != false) {
							return;
						}
						this._cameraFPS = true;
						pSVar6 = this.GetFPSDisabledRenderers();
						if (pSVar6 != null) {
							auStack_70.GetEnumerator((List<object>)pSVar6);
							pUStack_48 = pUStack_60;
							auStack_58 = (byte[])auStack_70._0_8_;
							auStack_70._0_8_ = null;
							auStack_70._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_58;
							while(true) {
								bVar5 = auStack_58.MoveNext();
								pUVar4 = pUStack_48;
								if (!bVar5) {
									il2cpp_runtime_helper_02fd8a10(auStack_70);
									return;
								}
								if (pUStack_48 == null) break;
								pSVar3 = (Dictionary<object, object>)this.FPSMaterials;
								value = pUStack_48.sharedMaterial;
								if (pSVar3 == null) {
									throw new NullReferenceException();
								}
								pSVar3.set_Item((object)pUVar4, (object)value);
								pUVar4.sharedMaterial = MaterialCache.TransparentMaterial;
							}
							throw new NullReferenceException();
						}
						goto label_05bd6bfc;
					}
				}
				if (this._cameraFPS != false) {
					this._cameraFPS = false;
					if (this.Dead == false) {
						pSVar6 = this.GetFPSDisabledRenderers();
						if (pSVar6 == null) goto label_05bd6bfc;
						auStack_70.GetEnumerator((List<object>)pSVar6);
						pUStack_48 = pUStack_60;
						auStack_58 = (byte[])auStack_70._0_8_;
						auStack_70._0_8_ = null;
						auStack_70._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_58;
						while (true) {
							bVar5 = auStack_58.MoveNext();
							pUVar4 = pUStack_48;
							if (!(bVar5)) break;
							pSVar3 = (Dictionary<object, object>)this.FPSMaterials;
							if (pSVar3 == null) {
								throw new NullReferenceException();
							}
							bVar5 = pSVar3.TryGetValue((object)pUStack_48, (object*)&pUStack_38) ;
							if (bVar5) {
								if (pUVar4 == null) {
									throw new NullReferenceException();
								}
								pUVar4.sharedMaterial = pUStack_38;
							}
						}
						il2cpp_runtime_helper_02fd8a40(auStack_70);
					}
					pSVar3 = (Dictionary<object, object>)this.FPSMaterials;
					if (pSVar3 == null) goto label_05bd6bfc;
					pSVar3.Clear();
				}
			}
		}
		return;
	}

	[Token(Token = "0x600415F")]
	[Address(RVA = "0x5AD6C20", Offset = "0x5AD5C20", VA = "0x5AD6C20")]
	protected void OnCollisionEnter(Collision collision)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$OnCollisionEnter): 101 lines keep C-only constructs
		float pfVar1;
		uint uVar2;
		float fVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		float fVar11;
		uint uVar12;
		uint uVar13;
		uint uVar14;
		uint uVar15;
		uint uVar16;
		uint uVar17;
		byte bVar18;
		uint uVar19;
		uint uVar20;
		BaseComponentCache pUVar21;
		SwitchbackSpecial __this_00;
		Object y;
		InGameSet pSVar22;
		InGameMiscSettings pSVar23;
		BoolSetting pSVar24;
		FloatSetting pSVar25;
		byte[] auVar26 = new byte[16];
		double dVar27;
		bool bVar28;
		Transform pUVar29;
		GameObject __this_01;
		Object x;
		Collider pUVar30;
		ulong uVar31;
		UnityEngine_Vector3_StaticFields pUVar32;
		BaseTitan __this_02;
		ContactPoint[] pUVar33;
		ContactPoint pUVar34;
		Rigidbody pUVar35;
		Math method_00;
		Il2CppClass pIVar36;
		ulong uVar37;
		float fVar38;
		float fVar39;
		float fVar40;
		float fVar41;
		uint extraout_XMM0_Db;
		uint uVar42;
		uint extraout_XMM0_Db_00;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float fVar44;
		float fVar43;
		byte[] auVar45 = new byte[16];
		byte[] auVar46 = new byte[12];
		float fVar47;
		float fVar48;
		Vector3 UVar49;
		Vector3 value;
		Vector3 value_00;
		float fStack_12c;
		ulong uStack_128;
		float fStack_118;
		float fStack_114;
		byte[] auStack_e0 = new byte[72];
		ContactPoint UStack_98;
		ContactPoint UStack_68;

		UStack_68.m_Impulse.z = 0.0;
		UStack_68.m_ThisColliderEntityId.m_Data = (EntityId)0x0;
		UStack_68.m_OtherColliderEntityId.m_Data = (EntityId)0x0;
		UStack_68.m_Separation = 0.0;
		UStack_68.m_Normal.y = 0.0;
		UStack_68.m_Normal.z = 0.0;
		UStack_68.m_Impulse.x = 0.0;
		UStack_68.m_Impulse.y = 0.0;
		UStack_68.m_Point.x = 0.0;
		UStack_68.m_Point.y = 0.0;
		UStack_68.m_Point.z = 0.0;
		UStack_68.m_Normal.x = 0.0;
		UStack_98.m_Impulse.z = 0.0;
		UStack_98.m_ThisColliderEntityId.m_Data = (EntityId)0x0;
		UStack_98.m_OtherColliderEntityId.m_Data = (EntityId)0;
		UStack_98.m_Separation = 0.0;
		UStack_98.m_Normal.y = 0.0;
		UStack_98.m_Normal.z = 0.0;
		UStack_98.m_Impulse.x = 0.0;
		UStack_98.m_Impulse.y = 0.0;
		UStack_98.m_Point.x = 0.0;
		UStack_98.m_Point.y = 0.0;
		UStack_98.m_Point.z = 0.0;
		UStack_98.m_Normal.x = 0.0;
		bVar28 = this.IsMine();
		if (!bVar28) {
			return;
		}
		pUVar21 = this.Cache;
		if ((pUVar21 == null) ||(pUVar35 = pUVar21.Rigidbody, pUVar35 == null)) goto label_05bd8438;
		UVar49 = pUVar35.linearVelocity;
		fStack_12c = UVar49.z;
		auStack_e0._48_4_ = extraout_XMM0_Dc;
		auStack_e0._40_8_ = UVar49._0_8_;
		auStack_e0._52_4_ = extraout_XMM0_Dd;
		__this_00 = (SwitchbackSpecial)this.Special;
		if (__this_00 != null) {
			bVar18 = (typeof(SwitchbackSpecial)._2).typeHierarchyDepth;
			if ((bVar18 <= (__this_00.klass._2).typeHierarchyDepth) &&((__this_00.klass._2).typeHierarchy[(ulong)bVar18 - 1] ==typeof(SwitchbackSpecial))) {
				fVar38 = this._lastVelocity.x;
				fVar41 = this._lastVelocity.y;
				fVar39 = this._lastVelocity.z;
				fVar38 = fVar39 * fVar39 + fVar41 * fVar41 + fVar38 * fVar38;
				if (fVar38 < 0.0) {
					fVar38 = sqrtf(fVar38);
				}
				else {
					fVar38 = SQRT(fVar38);
				}
				bVar18 = (typeof(SwitchbackSpecial)._2).typeHierarchyDepth;
				if (((__this_00.klass._2).typeHierarchyDepth < bVar18) ||((__this_00.klass._2).typeHierarchy[(ulong)bVar18 - 1] !=typeof(SwitchbackSpecial))) {
					throw new InvalidCastException();
				}
				bVar28 = __this_00.RegisterCollision(this, collision, fVar38 * 0.7);
				if (bVar28) {
					return;
				}
			}
		}
		if ((((collision == null) ||(pUVar29 = collision.transform, pUVar29 == null)) ||(pUVar29 = pUVar29.root, pUVar29 == null)) ||(__this_01 = pUVar29.gameObject, __this_01 == null)) goto label_05bd8438;
		fVar38 = (float)__this_01.layer;
		if ((typeof(PhysicsLayer)._2).cctor_finished_or_no_cctor == 0) {
			fVar41 = (float)PhysicsLayer.TitanMovebox;
		}
		else {
			fVar41 = (float)PhysicsLayer.TitanMovebox;
		}
		fVar39 = this._lastVelocity.x;
		uVar2 = this._lastVelocity.y;
		uVar10 = this._lastVelocity.z;
		fVar39 = (float)uVar10 * (float)uVar10 + fVar39 * fVar39 + (float)uVar2 * (float)uVar2;
		if (fVar39 < 0.0) {
			fVar39 = sqrtf(fVar39);
		}
		else {
			fVar39 = SQRT(fVar39);
		}
		if (0.0 < fVar39) {
			pUVar33 = collision.contacts;
			if (pUVar33 == null) goto label_05bd8438;
			if ((int)pUVar33.Length == 0) goto label_05bd843d;
			UStack_68.m_Point.x = pUVar33[0].m_Point.x;
			UStack_68.m_Point.y = pUVar33[0].m_Point.y;
			UStack_68._8_8_ = *(ulong)&pUVar33[0].m_Point.z;
			UStack_68.m_Normal.y = pUVar33[0].m_Normal.y;
			UStack_68.m_Normal.z = pUVar33[0].m_Normal.z;
			UStack_68.m_Impulse.x = pUVar33[0].m_Impulse.x;
			UStack_68.m_Impulse.y = pUVar33[0].m_Impulse.y;
			UStack_68._32_8_ = *(ulong)&pUVar33[0].m_Impulse.z;
			UStack_68.m_OtherColliderEntityId.m_Data = pUVar33[0].m_OtherColliderEntityId;
			UStack_68.m_Separation = pUVar33[0].m_Separation;
			UVar49 = UStack_68.normal;
			fVar44 = UVar49.z;
			fVar40 = UVar49.y;
			fVar3 = this._lastVelocity.x;
			fVar11 = this._lastVelocity.y;
			fVar39 = this._lastVelocity.z;
			auStack_e0._8_4_ = fVar3;
			auStack_e0._12_4_ = fVar11;
			auStack_e0._16_4_ = 0.0;
			auStack_e0._20_4_ = 0.0;
			if (Il2CppMethodInitialized_075450a4 == false) {
				Il2CppMethodInitialized_075450a4 = true;
				fVar3 = (float)auStack_e0._8_4_;
				fVar11 = (float)auStack_e0._12_4_;
			}
			fVar3 = fVar39 * fVar39 + fVar11 * fVar11 + fVar3 * fVar3;
			fVar47 = UVar49.x;
			fVar48 = fVar44 * fVar44 + fVar40 * fVar40 + fVar47 * fVar47;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
				if (fVar3 * fVar48 < 0.0) goto label_05bd7112;
	label_05bd7073: ;
				fVar3 = SQRT(fVar3 * fVar48);
				if (fVar3 < 1e-15) goto label_05bd71b9;
	label_05bd7143: ;
				fVar3 = ((fVar11 * -fVar40 - fVar47 * (float)auStack_e0._8_4_) - fVar44 * fVar39) / fVar3;
				fVar39 = 1.0;
				if (fVar3 <= 1.0) {
					fVar39 = fVar3;
				}
				fVar39 = (float)(~-(uint)(-1.0 <= fVar3) & 0xbf800000 | (uint)fVar39 & -(uint)(-1.0 <= fVar3));
				method_00 = typeof(Math);
				if (-1.0 <= fVar39) goto label_05bd71b9;
				acos((double)fVar39, (MethodInfo)method_00);
				if (fVar38 != fVar41) goto label_05bd7ce7;
	label_05bd71c2: ;
				auStack_e0._32_4_ = fVar41;
				auStack_e0._36_4_ = fVar38;
				fVar39 = Time.time;
				fVar38 = this._collisionTimer;
				fVar41 = this._collisionInterval;
				x = (Object)collision.collider;
				y = (Object)this._lastHit;
				bVar28 = (x == y);
				fVar3 = Time.time;
				this._collisionTimer = fVar3;
				pUVar30 = collision.collider;
				this._lastHit = pUVar30;
				auStack_e0._64_8_ = collision;
				pUVar33 = collision.contacts;
				if (pUVar33 == null) goto label_05bd8438;
				if (0 < (int)pUVar33.Length) {
					uVar31 = pUVar33.Length & 0xffffffff;
					pUVar34 = pUVar33.m_Items;
					uVar37 = 0;
					do {
						if (uVar31 <= uVar37) goto label_05bd843d;
						UStack_98.m_Point.x = pUVar34.m_Point.x;
						UStack_98.m_Point.y = pUVar34.m_Point.y;
						UStack_98._8_8_ = *(ulong)&pUVar34.m_Point.z;
						UStack_98.m_Normal.y = pUVar34.m_Normal.y;
						UStack_98.m_Normal.z = pUVar34.m_Normal.z;
						UStack_98.m_Impulse.x = pUVar34.m_Impulse.x;
						UStack_98.m_Impulse.y = pUVar34.m_Impulse.y;
						UStack_98._32_8_ = *(ulong)&pUVar34.m_Impulse.z;
						UStack_98.m_OtherColliderEntityId.m_Data =pUVar34.m_OtherColliderEntityId;
						UStack_98.m_Separation = pUVar34.m_Separation;
						uVar4 = this._lastVelocity.x;
						uVar12 = this._lastVelocity.y;
						fVar3 = this._lastVelocity.z;
						UVar49 = UStack_98.normal;
						fVar11 = UVar49.z;
						if (Il2CppMethodInitialized_075450a4 == false) {
							Il2CppMethodInitialized_075450a4 = true;
							uVar20 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						else {
							uVar20 = (typeof(Math)._2).cctor_finished_or_no_cctor;
						}
						if (uVar20 == 0) {
						}
						fStack_118 = UVar49.x;
						fStack_114 = UVar49.y;
						fVar40 = (fVar11 * fVar11 + fStack_114 * fStack_114 + fStack_118 * fStack_118) *(fVar3 * fVar3 + (float)uVar12 * (float)uVar12 + (float)uVar4 * (float)uVar4);
						if (fVar40 < 0.0) {
							auStack_e0._12_4_ = fStack_114;
							auStack_e0._8_4_ = fStack_114;
							auStack_e0._20_4_ = fStack_114;
							auStack_e0._16_4_ = fStack_114;
							fVar40 = sqrtf(fVar40);
							fStack_114 = (float)auStack_e0._8_4_;
							fVar44 = (float)auStack_e0._12_4_;
							fVar47 = (float)auStack_e0._16_4_;
							fVar48 = (float)auStack_e0._20_4_;
							pIVar36 = typeof(Math);
						}
						else {
							fVar40 = SQRT(fVar40);
							fVar44 = fStack_114;
							fVar47 = fStack_114;
							fVar48 = fStack_114;
							pIVar36 = typeof(Math);
						}
						fVar43 = 0.0;
						typeof(Math) = (Math)pIVar36;
						if (1e-15 <= fVar40) {
							if ((pIVar36._2).cctor_finished_or_no_cctor == 0) {
								auStack_e0._12_4_ = fVar44;
								auStack_e0._8_4_ = fStack_114;
								auStack_e0._20_4_ = fVar48;
								auStack_e0._16_4_ = fVar47;
								fStack_114 = (float)auStack_e0._8_4_;
							}
							fVar40 = (((float)uVar12 * -fStack_114 - (float)uVar4 * fStack_118) - fVar3 * fVar11) / fVar40;
							fVar3 = 1.0;
							if (fVar40 <= 1.0) {
								fVar3 = fVar40;
							}
							dVar27 = acos((double)(float)(~-(uint)(-1.0 <= fVar40) & 0xbf800000 |(uint)fVar3 & -(uint)(-1.0 <= fVar40)), (MethodInfo)pIVar36);
							fVar43 = (float)dVar27 * 57.29578;
						}
						uStack_128._0_4_ = this._lastVelocity.x;
						uStack_128._4_4_ = this._lastVelocity.y;
						fVar3 = this._lastVelocity.z;
						UVar49 = UStack_98.normal;
						fVar44 = UVar49.z;
						fVar11 = UVar49.x;
						fVar40 = UVar49.y;
						fVar47 = fVar44 * fVar44 + fVar40 * fVar40 + fVar11 * fVar11;
						if (Mathf.Epsilon <= fVar47) {
							fVar47 = (fVar3 * fVar44 + uStack_128._4_4_ * fVar40 + (float)uStack_128 * fVar11) / fVar47;
							uStack_128 = CONCAT44(uStack_128._4_4_ - fVar47 * fVar40, (float)uStack_128 - fVar47 * fVar11);
							fVar3 = fVar3 - fVar44 * fVar47;
						}
						if (ABS(fVar43 + -90.0) < 45.0) {
							uVar5 = this._lastVelocity.x;
							uVar13 = this._lastVelocity.y;
							fVar11 = this._lastVelocity.z;
							if (Il2CppMethodInitialized_075450a4 == false) {
								Il2CppMethodInitialized_075450a4 = true;
								uVar20 = (typeof(Math)._2).cctor_finished_or_no_cctor;
							}
							else {
								uVar20 = (typeof(Math)._2).cctor_finished_or_no_cctor;
							}
							if (uVar20 == 0) {
							}
							fVar40 = (fVar11 * fVar11 + (float)uVar13 * (float)uVar13 + (float)uVar5 * (float)uVar5) *(fVar3 * fVar3 + uStack_128._4_4_ * uStack_128._4_4_ + (float)uStack_128 * (float)uStack_128);
							if (fVar40 < 0.0) {
								fVar40 = sqrtf(fVar40);
								pIVar36 = typeof(Math);
							}
							else {
								fVar40 = SQRT(fVar40);
								pIVar36 = typeof(Math);
							}
							typeof(Math) = (Math)pIVar36;
							if (1e-15 <= fVar40) {
								fVar40 = (fVar11 * fVar3 + (float)uVar13 * uStack_128._4_4_ + (float)uVar5 * (float)uStack_128) / fVar40;
								fVar11 = 1.0;
								if (fVar40 <= 1.0) {
									fVar11 = fVar40;
								}
								dVar27 = acos((double)(float)(~-(uint)(-1.0 <= fVar40) & 0xbf800000 |(uint)fVar11 & -(uint)(-1.0 <= fVar40)), (MethodInfo)pIVar36);
								if ((bool)(~(fVar41 <= fVar39 - fVar38 || !bVar28) & 45.0 <= (float)dVar27 * 57.29578)) goto label_05bd72e0;
							}
							pUVar21 = this.Cache;
							if ((pUVar21 == null) ||(pUVar35 = pUVar21.Rigidbody, pUVar35 == null)) goto label_05bd8438;
							uVar6 = this._lastVelocity.x;
							uVar14 = this._lastVelocity.y;
							UVar49.x = ((float)uStack_128 - (float)uVar6) * 0.5 + (float)uVar6;
							UVar49.y = (uStack_128._4_4_ - (float)uVar14) * 0.5 + (float)uVar14;
							fVar11 = this._lastVelocity.z;
							UVar49.z = (fVar3 - fVar11) * 0.5 + fVar11;
							pUVar35.linearVelocity = UVar49;
						}
	label_05bd72e0: ;
						uVar37 = uVar37 + 1;
						uVar19 = (uint)pUVar33.Length;
						uVar31 = (ulong)uVar19;
						pUVar34 = pUVar34 + 1;
					} while ((long)uVar37 < (long)(int)uVar19);
				}
				uVar7 = this._lastVelocity.x;
				uVar15 = this._lastVelocity.y;
				fVar39 = this._lastVelocity.z;
				fVar38 = (float)auStack_e0._36_4_;
				fVar41 = (float)auStack_e0._32_4_;
				fVar11 = fStack_12c * fStack_12c +(float)auStack_e0._44_4_ * (float)auStack_e0._44_4_ +(float)auStack_e0._40_4_ * (float)auStack_e0._40_4_;
				fVar3 = (fVar39 * fVar39 + (float)uVar15 * (float)uVar15 + (float)uVar7 * (float)uVar7) * fVar11;
				fVar40 = 0.0;
				if (fVar3 < 0.0) {
					fVar3 = sqrtf(fVar3);
					pIVar36 = typeof(Math);
					collision = (Collision)auStack_e0._64_8_;
				}
				else {
					fVar3 = SQRT(fVar3);
					pIVar36 = typeof(Math);
					collision = (Collision)auStack_e0._64_8_;
				}
				typeof(Math) = (Math)pIVar36;
				auStack_e0._64_8_ = collision;
				if (1e-15 <= fVar3) {
					fVar3 = (fVar39 * fStack_12c +(float)uVar15 * (float)auStack_e0._44_4_ + (float)uVar7 * (float)auStack_e0._40_4_) / fVar3;
					fVar39 = 1.0;
					if (fVar3 <= 1.0) {
						fVar39 = fVar3;
					}
					dVar27 = acos((double)(float)(~-(uint)(-1.0 <= fVar3) & 0xbf800000 |(uint)fVar39 & -(uint)(-1.0 <= fVar3)), (MethodInfo)pIVar36);
					fVar40 = (float)dVar27 * 57.29578;
				}
				pUVar21 = this.Cache;
				if ((pUVar21 == null) ||(pUVar35 = pUVar21.Rigidbody, pUVar35 == null)) goto label_05bd8438;
				UVar49 = pUVar35.linearVelocity;
				fVar39 = UVar49.z * UVar49.z + UVar49.y * UVar49.y + UVar49.x * UVar49.x;
				if (fVar39 < 0.0) {
					fVar39 = sqrtf(fVar39);
					uVar20 = (typeof(Util)._2).cctor_finished_or_no_cctor;
				}
				else {
					fVar39 = SQRT(fVar39);
					uVar20 = (typeof(Util)._2).cctor_finished_or_no_cctor;
				}
				if (uVar20 == 0) {
				}
				fVar39 = Util.ClampedLinearMap(fVar39, 0.0, 250.0, 0.0, 1.0);
				fVar47 = this._lastVelocity.x;
				fVar3 = this._lastVelocity.y;
				fVar44 = this._lastVelocity.z;
				if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
					auStack_e0._8_4_ = fVar47;
					fVar47 = (float)auStack_e0._8_4_;
				}
				fVar3 = fVar44 * fVar44 + fVar3 * fVar3 + fVar47 * fVar47;
				if (fVar3 < 0.0) {
					fVar3 = sqrtf(fVar3);
				}
				else {
					fVar3 = SQRT(fVar3);
				}
				pUVar21 = this.Cache;
				if (pUVar21 == null) goto label_05bd8438;
				pUVar35 = pUVar21.Rigidbody;
				if (Il2CppMethodInitialized_0753e72d == false) {
					Il2CppMethodInitialized_0753e72d = true;
					auStack_e0._0_4_ = 0.0;
					auStack_e0._4_4_ = 0.0;
					if (Il2CppMethodInitialized_0753e729 == false) goto label_05bd7c9e;
	label_05bd7b79: ;
					auStack_e0._0_4_ = 0.0;
					auStack_e0._4_4_ = 0.0;
					uVar20 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					auStack_e0._0_4_ = 0.0;
					auStack_e0._4_4_ = 0.0;
					if (Il2CppMethodInitialized_0753e729 != false) goto label_05bd7b79;
	label_05bd7c9e: ;
					auStack_e0._0_4_ = 0.0;
					auStack_e0._4_4_ = 0.0;
					Il2CppMethodInitialized_0753e729 = true;
					uVar20 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar20 == 0) {
				}
				uVar42 = 0;
				if (fVar11 < 0.0) {
					fVar11 = sqrtf(fVar11);
					uVar42 = extraout_XMM0_Db;
					if (1e-05 < fVar11) goto label_05bd7bda;
	label_05bd7bae: ;
					pUVar32 = typeof(Vector3).static_fields;
					fStack_12c = (pUVar32.zeroVector).z;
				}
				else {
					fVar11 = SQRT(fVar11);
					if (fVar11 <= 1e-05) goto label_05bd7bae;
	label_05bd7bda: ;
					fStack_12c = fStack_12c / fVar11;
					auVar26._4_4_ = fVar11;
					auVar26._0_4_ = fVar11;
					auVar26._8_4_ = uVar42;
					auVar26._12_4_ = uVar42;
					auVar45 = divps((byte[])auStack_e0._40_16_, auVar26);
					auStack_e0._0_4_ = auVar45._0_4_;
					auStack_e0._4_4_ = auVar45._4_4_;
					pUVar32 = (UnityEngine_Vector3_StaticFields)auStack_e0;
				}
				if (pUVar35 == null) goto label_05bd8438;
				auVar46 = ZEXT812(0x3f800000);
				fVar47 = auVar46._0_4_;
				fVar44 = ABS(fVar40) * -0.005 + fVar47;
				fVar11 = ABS(fVar40) * -1.5 * 0.01 + fVar47;
				if (fVar44 <= 0.0) {
					fVar44 = 0.0;
				}
				if (fVar11 <= 0.0) {
					fVar11 = 0.0;
				}
				if (fVar39 <= fVar47) {
					auVar46._4_8_ = auVar46._4_8_;
					auVar46._0_4_ = fVar39;
				}
				fVar3 = ((fVar11 - fVar44) * (float)(-(uint)(0.0 <= fVar39) & auVar46._0_4_) + fVar44) * fVar3;
			}
			else {
				if (0.0 <= fVar3 * fVar48) goto label_05bd7073;
	label_05bd7112: ;
				fVar3 = sqrtf(fVar3 * fVar48);
				if (1e-15 <= fVar3) goto label_05bd7143;
	label_05bd71b9: ;
				if (fVar38 == fVar41) goto label_05bd71c2;
	label_05bd7ce7: ;
				uVar8 = this._lastVelocity.x;
				uVar16 = this._lastVelocity.y;
				fVar39 = this._lastVelocity.z;
				fVar3 = fStack_12c * fStack_12c +(float)auStack_e0._44_4_ * (float)auStack_e0._44_4_ +(float)auStack_e0._40_4_ * (float)auStack_e0._40_4_;
				fVar40 = (fVar39 * fVar39 + (float)uVar16 * (float)uVar16 + (float)uVar8 * (float)uVar8) * fVar3;
				fVar11 = 0.0;
				if (fVar40 < 0.0) {
					fVar40 = sqrtf(fVar40);
					pIVar36 = typeof(Math);
				}
				else {
					fVar40 = SQRT(fVar40);
					pIVar36 = typeof(Math);
				}
				typeof(Math) = (Math)pIVar36;
				if (1e-15 <= fVar40) {
					fVar40 = (fVar39 * fStack_12c +(float)uVar16 * (float)auStack_e0._44_4_ + (float)uVar8 * (float)auStack_e0._40_4_) / fVar40;
					fVar39 = 1.0;
					if (fVar40 <= 1.0) {
						fVar39 = fVar40;
					}
					dVar27 = acos((double)(float)(~-(uint)(-1.0 <= fVar40) & 0xbf800000 |(uint)fVar39 & -(uint)(-1.0 <= fVar40)), (MethodInfo)pIVar36);
					fVar11 = (float)dVar27 * 57.29578;
				}
				fVar39 = this._lastVelocity.x;
				fVar40 = this._lastVelocity.y;
				fVar44 = this._lastVelocity.z;
				fVar39 = fVar44 * fVar44 + fVar40 * fVar40 + fVar39 * fVar39;
				if (fVar39 < 0.0) {
					fVar39 = sqrtf(fVar39);
				}
				else {
					fVar39 = SQRT(fVar39);
				}
				pUVar21 = this.Cache;
				if (pUVar21 == null) goto label_05bd8438;
				pUVar35 = pUVar21.Rigidbody;
				if (Il2CppMethodInitialized_0753e72d == false) {
					Il2CppMethodInitialized_0753e72d = true;
					auStack_e0._0_4_ = 0.0;
					auStack_e0._4_4_ = 0.0;
					if (Il2CppMethodInitialized_0753e729 == false) goto label_05bd8389;
	label_05bd7f3e: ;
					auStack_e0._0_4_ = 0.0;
					auStack_e0._4_4_ = 0.0;
					uVar20 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					auStack_e0._0_4_ = 0.0;
					auStack_e0._4_4_ = 0.0;
					if (Il2CppMethodInitialized_0753e729 != false) goto label_05bd7f3e;
	label_05bd8389: ;
					auStack_e0._0_4_ = 0.0;
					auStack_e0._4_4_ = 0.0;
					Il2CppMethodInitialized_0753e729 = true;
					uVar20 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar20 == 0) {
				}
				uVar42 = 0;
				if (fVar3 < 0.0) {
					fVar3 = sqrtf(fVar3);
					uVar42 = extraout_XMM0_Db_00;
					if (1e-05 < fVar3) goto label_05bd7f9f;
	label_05bd7f73: ;
					pUVar32 = typeof(Vector3).static_fields;
					fStack_12c = (pUVar32.zeroVector).z;
				}
				else {
					fVar3 = SQRT(fVar3);
					if (fVar3 <= 1e-05) goto label_05bd7f73;
	label_05bd7f9f: ;
					fStack_12c = fStack_12c / fVar3;
					auVar45._4_4_ = fVar3;
					auVar45._0_4_ = fVar3;
					auVar45._8_4_ = uVar42;
					auVar45._12_4_ = uVar42;
					auVar45 = divps((byte[])auStack_e0._40_16_, auVar45);
					auStack_e0._0_4_ = auVar45._0_4_;
					auStack_e0._4_4_ = auVar45._4_4_;
					pUVar32 = (UnityEngine_Vector3_StaticFields)auStack_e0;
				}
				if (pUVar35 == null) goto label_05bd8438;
				fVar3 = ABS(fVar11) * -1.5 * 0.01 + 1.0;
				if (fVar3 <= 0.0) {
					fVar3 = 0.0;
				}
				fVar3 = fVar3 * fVar39;
			}
			uVar9 = (pUVar32.zeroVector).x;
			uVar17 = (pUVar32.zeroVector).y;
			value.z = fStack_12c * fVar3;
			value.x = fVar3 * (float)uVar9;
			value.y = fVar3 * (float)uVar17;
			pUVar35.linearVelocity = value;
			fVar39 = this._lastVelocity.x;
			fVar3 = this._lastVelocity.y;
			fVar11 = this._lastVelocity.z;
			fVar39 = fVar11 * fVar11 + fVar3 * fVar3 + fVar39 * fVar39;
			if (fVar39 < 0.0) {
				fVar39 = sqrtf(fVar39);
			}
			else {
				fVar39 = SQRT(fVar39);
			}
			pUVar21 = this.Cache;
			if ((pUVar21 == null) ||(pUVar35 = pUVar21.Rigidbody, pUVar35 == null)) goto label_05bd8438;
			UVar49 = pUVar35.linearVelocity;
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				uVar20 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar20 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar20 == 0) {
			}
			fVar3 = UVar49.z * UVar49.z + UVar49.y * UVar49.y + UVar49.x * UVar49.x;
			if (fVar3 < 0.0) {
				fVar3 = sqrtf(fVar3);
			}
			else {
				fVar3 = SQRT(fVar3);
			}
			pSVar22 = SettingsManager.InGameCurrent;
			if (((pSVar22 == null) ||(pSVar23 = pSVar22.Misc, pSVar23 == null)) ||(pSVar24 = pSVar23.RealismMode, pSVar24 == null)) goto label_05bd8438;
			if (pSVar24._value != false) {
				pSVar25 = pSVar23.RealismImpactThreshold;
				if (pSVar25 == null) goto label_05bd8438;
				fVar39 = fVar39 - fVar3;
				pfVar1 = &pSVar25._value;
				if (*pfVar1 <= fVar39 && fVar39 != *pfVar1) {
					this.GetHit("Impact", (int)fVar39, "Impact", "");
				}
			}
		}
		if (fVar38 == fVar41) {
			pUVar29 = collision.transform;
			if ((pUVar29 == null) ||(pUVar29 = pUVar29.root, pUVar29 == null)) {
	label_05bd8438: ;
				throw new NullReferenceException();
			}
			__this_02 = pUVar29.GetComponent<BaseTitan>();
			bVar28 = ((Object)__this_02 != null);
			if (bVar28) {
				if (__this_02 == null) goto label_05bd8438;
				if (__this_02.AI == false) {
					pUVar33 = collision.contacts;
					if (pUVar33 == null) goto label_05bd8438;
					if ((int)pUVar33.Length == 0) {
	label_05bd843d: ;
						throw new IndexOutOfRangeException();
					}
					(pUVar33.m_Items).normal;
					UVar49 = __this_02.GetVelocity();
					fVar38 = UVar49.z;
					uStack_128._0_4_ = UVar49.x;
					uStack_128._4_4_ = UVar49.y;
					fVar41 = fVar38 * fVar38 + uStack_128._4_4_ * uStack_128._4_4_ + (float)uStack_128 * (float)uStack_128 ;
					if (fVar41 < 0.0) {
						fVar41 = sqrtf(fVar41);
					}
					else {
						fVar41 = SQRT(fVar41);
					}
					if ((0.0 < fVar41) && (fVar41 = (float)il2cpp_runtime_helper_059d7e70((float)uStack_128, 0), fVar41 < 70.0)) {
						pUVar21 = this.Cache;
						if ((pUVar21 == null) ||(pUVar35 = pUVar21.Rigidbody, pUVar35 == null)) goto label_05bd8438;
						UVar49 = pUVar35.linearVelocity;
						value_00.x = UVar49.x + (float)uStack_128;
						value_00.y = UVar49.y + uStack_128._4_4_;
						value_00.z = UVar49.z + fVar38;
						pUVar35.linearVelocity = value_00;
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004160")]
	[Address(RVA = "0x5AD8450", Offset = "0x5AD7450", VA = "0x5AD8450")]
	protected void OnCollisionStay(Collision collision)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$OnCollisionStay): 88 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		sbyte cVar3;
		byte bVar4;
		int iVar5;
		uint uVar6;
		BaseComponentCache pUVar7;
		Rigidbody pUVar8;
		AnimationHandler __this_00;
		InputSettings pSVar9;
		HumanInputSettings pSVar10;
		IntSetting pSVar11;
		SwitchbackSpecial __this_01;
		byte[] auVar12 = new byte[16];
		byte[] auVar13 = new byte[16];
		byte[] auVar14 = new byte[16];
		bool bVar15;
		int iVar16;
		Transform pUVar17;
		GameObject __this_02;
		UnityEngine_Vector3_StaticFields pUVar18;
		uint uVar19;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Db_00;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		float fVar20;
		float fVar21;
		byte[] auVar22 = new byte[16];
		byte[] auVar23 = new byte[16];
		byte[] auVar24 = new byte[16];
		Vector3 UVar25;
		float fStack_cc;
		float fStack_c8;
		float fStack_c4;
		byte[] auStack_b0 = new byte[16];
		ulong uStack_a0;
		byte[] auStack_98 = new byte[16];
		ulong uStack_88;
		byte[] auStack_80 = new byte[8];
		byte[] auStack_78 = new byte[48];
		float fStack_48;

		uStack_88._0_4_ = 0.0;
		uStack_88._4_4_ = 0.0;
		auStack_80._0_4_ = 0.0;
		auStack_80._4_4_ = 0.0;
		auStack_98 = ZEXT816(0);
		auStack_b0._8_4_ = 0.0;
		auStack_b0._12_4_ = 0.0;
		uStack_a0._0_4_ = 0.0;
		uStack_a0._4_4_ = 0.0;
		if ((((collision == null) ||(pUVar17 = collision.transform, pUVar17 == null)) ||(pUVar17 = pUVar17.root, pUVar17 == null)) ||(__this_02 = pUVar17.gameObject, __this_02 == null)) goto label_05bd8b81;
		iVar16 = __this_02.layer;
		if ((typeof(PhysicsLayer)._2).cctor_finished_or_no_cctor == 0) {
			cVar3 = this.Grounded;
		}
		else {
			cVar3 = this.Grounded;
		}
		if (cVar3 != false) goto label_05bd897f;
		pUVar7 = this.Cache;
		if ((pUVar7 == null) ||(pUVar8 = pUVar7.Rigidbody, pUVar8 == null)) goto label_05bd8b81;
		iVar5 = PhysicsLayer.TitanMovebox;
		UVar25 = pUVar8.linearVelocity;
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar6 == 0) {
		}
		fVar20 = UVar25.z * UVar25.z + UVar25.y * UVar25.y + UVar25.x * UVar25.x;
		if (fVar20 < 0.0) {
			fVar20 = sqrtf(fVar20);
		}
		else {
			fVar20 = SQRT(fVar20);
		}
		if (fVar20 < 15.0) goto label_05bd897f;
		__this_00 = this.Animation;
		if (((typeof(HumanAnimations))._2).cctor_finished_or_no_cctor == 0) {
		}
		if (__this_00 == null) goto label_05bd8b81;
		bVar15 = __this_00.IsPlaying(HumanAnimations.WallRun) ;
		if ((bVar15) || (iVar16 == iVar5)) goto label_05bd897f;
		pSVar9 = SettingsManager.InputSettings;
		if ((pSVar9 == null) ||((pSVar10 = pSVar9.Human, pSVar10 == null ||(pSVar11 = pSVar10.WallSlideAttach, pSVar11 == null)))) goto label_05bd8b81;
		iVar5 = pSVar11._value;
		if (iVar5 == 2) {
	label_05bd886d: ;
			this._wallSlide = true;
			auStack_78.GetContact(collision, 0);
			auVar24._8_8_ = auStack_78._24_8_;
			auVar24._0_8_ = auStack_78._16_8_;
			uStack_88._0_4_ = (float)auStack_78._32_4_;
			uStack_88._4_4_ = (float)auStack_78._36_4_;
			auStack_80 = (byte[])auStack_78._40_8_;
			auStack_b0._8_8_ = auStack_78._0_8_;
			uStack_a0._0_4_ = (float)auStack_78._8_4_;
			uStack_a0._4_4_ = (float)auStack_78._12_4_;
			auStack_98 = auVar24;
			UVar25 = ((auStack_b0 + 8)).normal;
			auVar23._4_12_ = auVar24._4_12_;
			auVar23._0_4_ = UVar25.z;
			auVar13._8_4_ = extraout_XMM0_Dc_00;
			auVar13._0_8_ = UVar25._0_8_;
			auVar13._12_4_ = extraout_XMM0_Dd_00;
			if (Il2CppMethodInitialized_0753e72d == false) {
				auVar22 = ZEXT416((uint)auVar23._0_4_);
				Il2CppMethodInitialized_0753e72d = true;
				auStack_b0._0_4_ = 0.0;
				auStack_b0._4_4_ = 0.0;
				if (Il2CppMethodInitialized_0753e729 != false) goto label_05bd88e1;
	label_05bd8af2: ;
				auStack_b0._0_4_ = 0.0;
				auStack_b0._4_4_ = 0.0;
				auVar22 = ZEXT416((uint)auVar23._0_4_);
				Il2CppMethodInitialized_0753e729 = true;
				uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				auStack_b0._0_4_ = 0.0;
				auStack_b0._4_4_ = 0.0;
				auVar22 = auVar23;
				if (Il2CppMethodInitialized_0753e729 == false) goto label_05bd8af2;
	label_05bd88e1: ;
				auStack_b0._0_4_ = 0.0;
				auStack_b0._4_4_ = 0.0;
				uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar6 == 0) {
				auVar22 = ZEXT416((uint)auVar23._0_4_);
			}
			fStack_c8 = UVar25.x;
			fStack_c4 = UVar25.y;
			uVar19 = auVar22._4_4_;
			fVar20 = auVar22._0_4_ * auVar22._0_4_ + fStack_c4 * fStack_c4 + fStack_c8 * fStack_c8;
			if (fVar20 < 0.0) {
				fVar20 = sqrtf(fVar20);
				auVar22 = ZEXT416((uint)auVar23._0_4_);
				uVar19 = extraout_XMM0_Db_00;
				if (fVar20 <= 1e-05) goto label_05bd8924;
	label_05bd8950: ;
				fVar21 = auVar22._0_4_ / fVar20;
				auVar14._4_4_ = fVar20;
				auVar14._0_4_ = fVar20;
				auVar14._8_4_ = uVar19;
				auVar14._12_4_ = uVar19;
				auVar22 = divps(auVar13, auVar14);
				auStack_b0._0_4_ = auVar22._0_4_;
				auStack_b0._4_4_ = auVar22._4_4_;
				pUVar18 = (UnityEngine_Vector3_StaticFields)auStack_b0;
			}
			else {
				fVar20 = SQRT(fVar20);
				if (1e-05 < fVar20) goto label_05bd8950;
	label_05bd8924: ;
				pUVar18 = typeof(Vector3).static_fields;
				fVar21 = (pUVar18.zeroVector).z;
			}
			fVar20 = (pUVar18.zeroVector).y;
			this._wallSlideGround.x = (pUVar18.zeroVector).x;
			this._wallSlideGround.y = fVar20;
			this._wallSlideGround.z = fVar21;
		}
		else {
			if (iVar5 != 1) goto label_05bd897f;
			auStack_78.GetContact(collision, 0);
			uStack_88._0_4_ = (float)auStack_78._32_4_;
			uStack_88._4_4_ = (float)auStack_78._36_4_;
			auStack_80 = (byte[])auStack_78._40_8_;
			auStack_98._8_8_ = auStack_78._24_8_;
			auStack_98._0_8_ = auStack_78._16_8_;
			auStack_b0._8_8_ = auStack_78._0_8_;
			uStack_a0._0_4_ = (float)auStack_78._8_4_;
			uStack_a0._4_4_ = (float)auStack_78._12_4_;
			UVar25 = ((auStack_b0 + 8)).normal;
			fStack_cc = UVar25.z;
			auVar22._8_4_ = extraout_XMM0_Dc;
			auVar22._0_8_ = UVar25._0_8_;
			auVar22._12_4_ = extraout_XMM0_Dd;
			if (Il2CppMethodInitialized_0753e72d == false) {
				Il2CppMethodInitialized_0753e72d = true;
				auStack_b0._0_4_ = 0.0;
				auStack_b0._4_4_ = 0.0;
				if (Il2CppMethodInitialized_0753e729 != false) goto label_05bd8703;
	label_05bd8b54: ;
				auStack_b0._0_4_ = 0.0;
				auStack_b0._4_4_ = 0.0;
				Il2CppMethodInitialized_0753e729 = true;
				uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				auStack_b0._0_4_ = 0.0;
				auStack_b0._4_4_ = 0.0;
				if (Il2CppMethodInitialized_0753e729 == false) goto label_05bd8b54;
	label_05bd8703: ;
				auStack_b0._0_4_ = 0.0;
				auStack_b0._4_4_ = 0.0;
				uVar6 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar6 == 0) {
			}
			fStack_c8 = UVar25.x;
			fStack_c4 = UVar25.y;
			uVar19 = 0;
			fVar20 = fStack_cc * fStack_cc + fStack_c4 * fStack_c4 + fStack_c8 * fStack_c8;
			if (fVar20 < 0.0) {
				fVar20 = sqrtf(fVar20);
				uVar19 = extraout_XMM0_Db;
			}
			else {
				fVar20 = SQRT(fVar20);
			}
			if (fVar20 <= 1e-05) {
				pUVar18 = typeof(Vector3).static_fields;
				fStack_cc = (pUVar18.zeroVector).z;
			}
			else {
				fStack_cc = fStack_cc / fVar20;
				auVar12._4_4_ = fVar20;
				auVar12._0_4_ = fVar20;
				auVar12._8_4_ = uVar19;
				auVar12._12_4_ = uVar19;
				auVar22 = divps(auVar22, auVar12);
				auStack_b0._0_4_ = auVar22._0_4_;
				auStack_b0._4_4_ = auVar22._4_4_;
				pUVar18 = (UnityEngine_Vector3_StaticFields)auStack_b0;
			}
			if (this.HasDirection != false) {
				uVar1 = (pUVar18.zeroVector).x;
				uVar2 = (pUVar18.zeroVector).y;
				fStack_48 = -(float)uVar2;
				UVar25 = this.GetTargetDirection();
				if (0.5 < (fStack_48 * UVar25.y - (float)uVar1 * UVar25.x) - fStack_cc * UVar25.z) goto label_05bd886d;
			}
		}
	label_05bd897f: ;
		__this_01 = (SwitchbackSpecial)this.Special;
		if (__this_01 != null) {
			bVar4 = (typeof(SwitchbackSpecial)._2).typeHierarchyDepth;
			if ((bVar4 <= (__this_01.klass._2).typeHierarchyDepth) &&((__this_01.klass._2).typeHierarchy[(ulong)bVar4 - 1] ==typeof(SwitchbackSpecial))) {
				pUVar7 = this.Cache;
				if ((pUVar7 == null) ||(pUVar8 = pUVar7.Rigidbody, pUVar8 == null)) {
	label_05bd8b81: ;
					throw new NullReferenceException();
				}
				UVar25 = pUVar8.linearVelocity;
				fVar20 = UVar25.z * UVar25.z + UVar25.y * UVar25.y + UVar25.x * UVar25.x;
				if (fVar20 < 0.0) {
					fVar20 = sqrtf(fVar20);
				}
				else {
					fVar20 = SQRT(fVar20);
				}
				bVar4 = (typeof(SwitchbackSpecial)._2).typeHierarchyDepth;
				if (((__this_01.klass._2).typeHierarchyDepth < bVar4) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar4 - 1] !=typeof(SwitchbackSpecial))) {
					throw new InvalidCastException();
				}
				__this_01.RegisterCollision(this, collision, fVar20);
			}
		}
		return;
	}

	[Token(Token = "0x6004161")]
	[Address(RVA = "0x5AD1830", Offset = "0x5AD0830", VA = "0x5AD1830")]
	private void FixedUpdateWallSlide()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$FixedUpdateWallSlide): clean
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		uint uVar11;
		uint uVar12;
		uint uVar13;
		InputSettings pSVar14;
		HumanInputSettings pSVar15;
		BoolSetting pSVar16;
		BaseComponentCache pUVar17;
		Rigidbody pUVar18;
		Transform __this_00;
		HumanStats pCVar20;
		bool bVar21;
		int iVar22;
		float fVar23;
		Vector3 UVar24;
		Vector3 UVar25;
		Vector3 UVar26;
		LayerMask[] local_40 = new LayerMask[2];
		float local_38;
		float fStack_34;
		float local_28;

		local_40[0].m_Mask = (LayerMask)0;
		if (this._wallSlide == false) goto label_05bd1d19;
		if (this._canWallSlideJump == false) {
			if (this.HasDirection != false) {
				fVar23 = this._wallSlideGround.z;
				uVar1 = this._wallSlideGround.x;
				uVar7 = this._wallSlideGround.y;
				UVar24 = this.GetTargetDirection();
				if (0.5 < UVar24.z * fVar23 + UVar24.y * (float)uVar7 + UVar24.x * (float)uVar1) goto label_05bd1924;
			}
			pSVar14 = SettingsManager.InputSettings;
			if (((pSVar14 == null) ||(pSVar15 = pSVar14.Human, pSVar15 == null)) ||(pSVar16 = pSVar15.WallSlideDash, pSVar16 == null)) goto label_05bd1d30;
			if (pSVar16._value != false) {
				this._canWallSlideJump = true;
			}
		}
	label_05bd1924: ;
		if (this.Grounded == false) {
			pUVar17 = this.Cache;
			if ((pUVar17 == null) ||(pUVar18 = pUVar17.Rigidbody, pUVar18 == null)) {
	label_05bd1d30: ;
				throw new NullReferenceException();
			}
			UVar24 = pUVar18.linearVelocity;
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				uVar13 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar13 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar13 == 0) {
			}
			fVar23 = UVar24.z * UVar24.z + UVar24.y * UVar24.y + UVar24.x * UVar24.x;
			if (fVar23 < 0.0) {
				fVar23 = sqrtf(fVar23);
			}
			else {
				fVar23 = SQRT(fVar23);
			}
			if (15.0 <= fVar23) {
				pUVar17 = this.Cache;
				if ((pUVar17 == null) ||(__this_00 = pUVar17.Transform, __this_00 == null)) goto label_05bd1d30;
				UVar24 = __this_00.position;
				uVar2 = (Vector3.upVector).x;
				uVar8 = (Vector3.upVector).y;
				UVar25.z = UVar24.z + (Vector3.upVector).z * 0.7;
				uVar3 = this._wallSlideGround.x;
				uVar9 = this._wallSlideGround.y;
				local_38 = -(float)uVar3;
				fStack_34 = -(float)uVar9;
				local_28 = -this._wallSlideGround.z;
				local_40[0] = this.get_GroundMask();
				iVar22 = local_40.value;
				UVar26.y = fStack_34;
				UVar26.x = local_38;
				UVar25.x = UVar24.x + (float)uVar2 * (float)0x3f333333;
				UVar25.y = UVar24.y + (float)uVar8 * (float)0x3f333333;
				UVar26.z = local_28;
				bVar21 = this.CheckRaycastIgnoreTriggers(UVar25, UVar26, 1.0, iVar22);
				if (bVar21) {
					if (this.HasDirection == false) goto label_05bd1d19;
					fVar23 = this._wallSlideGround.z;
					uVar4 = this._wallSlideGround.x;
					uVar10 = this._wallSlideGround.y;
					UVar24 = this.GetTargetDirection();
					if ((0.5 < UVar24.z * fVar23 + UVar24.y * (float)uVar10 + UVar24.x * (float)uVar4 ) && (this._canWallSlideJump != false)) {
						pUVar17 = this.Cache;
						if ((pUVar17 == null) ||((pCVar20 = this.Stats, pCVar20 == null ||(pUVar18 = pUVar17.Rigidbody, pUVar18 == null)))) goto label_05bd1d30;
						fVar23 = pCVar20.RunSpeed;
						UVar24.z = this._wallSlideGround.z * fVar23 * 0.75;
						uVar5 = this._wallSlideGround.x;
						uVar11 = this._wallSlideGround.y;
						UVar24.x = fVar23 * (float)uVar5 * 0.75;
						UVar24.y = fVar23 * (float)uVar11 * 0.75;
						pUVar18.AddForce(UVar24, 1);
						this.FalseAttack();
						if ((this._state & 0xfffffffeU) == 2) {
							this._dashTimeLeft = 0.0;
						}
						this._state = 2;
						this.PlayAnimation(HumanAnimations.Dodge, 0.2);
						this.ToggleSparks(false);
						goto label_05bd1d19;
					}
					if (this.HasDirection == false) goto label_05bd1d19;
					fVar23 = this._wallSlideGround.z;
					uVar6 = this._wallSlideGround.x;
					uVar12 = this._wallSlideGround.y;
					local_38 = -(float)uVar12;
					fStack_34 = -(float)uVar12;
					UVar24 = this.GetTargetDirection();
					if ((local_38 * UVar24.y - (float)uVar6 * UVar24.x) - UVar24.z * fVar23 <= 0.8) goto label_05bd1d19;
				}
			}
		}
		this._wallSlide = false;
		this._canWallSlideJump = false;
	label_05bd1d19: ;
		this.ToggleSparks(this._wallSlide);
		return;
	}

	[Token(Token = "0x6004162")]
	[Address(RVA = "0x5AD1200", Offset = "0x5AD0200", VA = "0x5AD1200")]
	private void EndWallSlide()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$EndWallSlide): clean
		this._wallSlide = false;
		this._canWallSlideJump = false;
		return;
	}

	[Token(Token = "0x6004163")]
	[Address(RVA = "0x5AD61C0", Offset = "0x5AD51C0", VA = "0x5AD61C0")]
	private void LateUpdateReelOut()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$LateUpdateReelOut): clean
		sbyte cVar1;
		uint uVar2;
		String sound;
		SoundSettings pSVar3;
		BoolSetting pSVar4;
		bool toggle;

		if (Il2CppMethodInitialized_07547583 == false) {
			Il2CppMethodInitialized_07547583 = true;
			uVar2 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			sound = HumanSounds.ReelOut;
			cVar1 = this._isReelingOut;
		}
		else {
			sound = *(String*)((long)(typeof(HumanSounds)).static_fields + 0xe0);
			cVar1 = this._isReelingOut;
		}
		if (cVar1 == false) {
			toggle = false;
		}
		else {
			pSVar3 = SettingsManager.SoundSettings;
			if ((pSVar3 == null) ||(pSVar4 = pSVar3.ReelOutEffect, pSVar4 == null)) {
				throw new NullReferenceException();
			}
			toggle = pSVar4._value != false;
		}
		this.ToggleSoundLoop(sound, toggle);
		return;
	}

	[Token(Token = "0x6004164")]
	[Address(RVA = "0x5AD09C0", Offset = "0x5ACF9C0", VA = "0x5AD09C0")]
	private bool FixedUpdateLaunch(bool left)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$FixedUpdateLaunch): 41 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		sbyte cVar3;
		HookUseable __this_00;
		BaseComponentCache pUVar4;
		Transform __this_01;
		object obj;
		InputSettings pSVar6;
		HumanInputSettings pSVar7;
		BoolSetting pSVar8;
		Rigidbody pUVar9;
		HumanStats __this_02;
		byte[] auVar10 = new byte[16];
		double dVar11;
		ulong uVar12;
		bool bVar13;
		bool bVar14;
		UnityEngine_Vector3_StaticFields pUVar15;
		Il2CppClass pIVar19;
		float fVar20;
		float fVar21;
		float fVar22;
		uint extraout_XMM0_Db;
		float fVar23;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float fVar24;
		uint in_XMM1_Db;
		float fVar25;
		byte[] auVar26 = new byte[16];
		float fVar27;
		Vector3 UVar28;
		Vector3 UVar29;
		ulong local_78;
		ulong local_38;

		if (left) {
			cVar3 = this._launchLeft;
			__this_00 = this.HookLeft;
			fVar25 = this._launchLeftTime;
			fVar20 = Time.deltaTime;
			fVar20 = fVar20 + fVar25;
			this._launchLeftTime = fVar20;
		}
		else {
			cVar3 = this._launchRight;
			__this_00 = this.HookRight;
			fVar25 = this._launchRightTime;
			fVar20 = Time.deltaTime;
			fVar20 = fVar20 + fVar25;
			this._launchRightTime = fVar20;
		}
		if (cVar3 == false) {
			return false;
		}
		if (__this_00 == null) goto label_05bd11f2;
		bVar14 = false;
		bVar13 = __this_00.IsHooked();
		if (bVar13) {
			UVar28 = __this_00.GetHookPosition();
			pUVar4 = this.Cache;
			if ((pUVar4 == null) ||(__this_01 = pUVar4.Transform, __this_01 == null)) goto label_05bd11f2;
			UVar29 = __this_01.position;
			if (Il2CppMethodInitialized_0753e72d == false) {
				Il2CppMethodInitialized_0753e72d = true;
				local_38._0_4_ = 0.0;
				local_38._4_4_ = 0.0;
			}
			else {
				local_38._0_4_ = 0.0;
				local_38._4_4_ = 0.0;
			}
			local_38._0_4_ = 0.0;
			local_38._4_4_ = 0.0;
			if (Il2CppMethodInitialized_0753e729 == false) {
				local_38._0_4_ = 0.0;
				local_38._4_4_ = 0.0;
				Il2CppMethodInitialized_0753e729 = true;
			}
			local_78._0_4_ = UVar28.x;
			local_78._4_4_ = UVar28.y;
			auVar26._0_4_ = (float)local_78 - UVar29.x;
			auVar26._4_4_ = local_78._4_4_ - UVar29.y;
			auVar26._8_4_ = extraout_XMM0_Dc - extraout_XMM0_Dc_00;
			auVar26._12_4_ = extraout_XMM0_Dd - extraout_XMM0_Dd_00;
			fVar25 = UVar28.z - UVar29.z;
			fVar21 = fVar25 * fVar25 + auVar26._4_4_ * auVar26._4_4_ + auVar26._0_4_ * auVar26._0_4_;
			if (fVar21 < 0.0) {
				fVar21 = sqrtf(fVar21);
				in_XMM1_Db = extraout_XMM0_Db;
				if (1e-05 < fVar21) goto label_05bd0bac;
	label_05bd0b33: ;
				pUVar15 = typeof(Vector3).static_fields;
				fVar25 = (pUVar15.zeroVector).z;
			}
			else {
				fVar21 = SQRT(fVar21);
				if (fVar21 <= 1e-05) goto label_05bd0b33;
	label_05bd0bac: ;
				fVar25 = fVar25 / fVar21;
				auVar10._4_4_ = fVar21;
				auVar10._0_4_ = fVar21;
				auVar10._8_4_ = in_XMM1_Db;
				auVar10._12_4_ = in_XMM1_Db;
				auVar26 = divps(auVar26, auVar10);
				local_38._0_4_ = auVar26._0_4_;
				local_38._4_4_ = auVar26._4_4_;
				pUVar15 = (UnityEngine_Vector3_StaticFields)&local_38;
			}
			uVar1 = (pUVar15.zeroVector).x;
			uVar2 = (pUVar15.zeroVector).y;
			fVar21 = (float)uVar1 * 10.0;
			fVar23 = (float)uVar2 * 10.0;
			local_78 = CONCAT44(fVar23, fVar21);
			fVar25 = fVar25 * 10.0;
			if ((this._launchLeft == false) || (uVar12 = local_78, this._launchRight == false) ) {
				local_78 = CONCAT44(fVar23 + fVar23, fVar21 + fVar21);
				fVar25 = fVar25 + fVar25;
				uVar12 = local_78;
			}
			obj = (object)this.Controller;
			if (this.AI == false) {
				if (obj == null) goto label_05bd11f2;
				pIVar19 = obj.klass;
				bVar14 = obj.UsingGas();
				pSVar6 = SettingsManager.InputSettings;
				if (((pSVar6 == null) ||(pSVar7 = pSVar6.Human, pSVar7 == null)) ||(pSVar8 = pSVar7.AutoUseGas, pSVar8 == null)) goto label_05bd11f2;
				bVar13 = bVar14 != (pSVar8._value != false);
				pUVar4 = this.Cache;
			}
			else {
				if (obj == null) goto label_05bd11f2;
				pIVar19 = obj.klass;
				bVar13 = obj.UsingGas();
				pUVar4 = this.Cache;
			}
			if ((pUVar4 == null) ||(pUVar9 = pUVar4.Rigidbody, pUVar9 == null)) goto label_05bd11f2;
			UVar28 = pUVar9.linearVelocity;
			fVar24 = UVar28.z;
			fVar21 = UVar28.x;
			fVar23 = UVar28.y;
			fVar22 = fVar24 * fVar24 + fVar23 * fVar23 + fVar21 * fVar21;
			local_78._0_4_ = (float)uVar12;
			local_78._4_4_ = (float)((ulong)uVar12 >> 0x20);
			fVar27 = fVar25 * fVar25 + local_78._4_4_ * local_78._4_4_ + (float)local_78 * (float)local_78;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
				if (fVar22 * fVar27 < 0.0) goto label_05bd0ed1;
	label_05bd0e8f: ;
				fVar22 = SQRT(fVar22 * fVar27);
				pIVar19 = typeof(Math);
			}
			else {
				if (0.0 <= fVar22 * fVar27) goto label_05bd0e8f;
	label_05bd0ed1: ;
				fVar22 = sqrtf(fVar22 * fVar27);
				pIVar19 = typeof(Math);
			}
			typeof(Math) = (Math)pIVar19;
			if (1e-15 <= fVar22) {
				fVar22 = (fVar24 * fVar25 + fVar23 * local_78._4_4_ + fVar21 * (float)local_78) / fVar22;
				fVar21 = 1.0;
				if (fVar22 <= 1.0) {
					fVar21 = fVar22;
				}
				dVar11 = acos((double)(float)(~-(uint)(-1.0 <= fVar22) & 0xbf800000 |(uint)fVar21 & -(uint)(-1.0 <= fVar22)), (MethodInfo)pIVar19);
				bVar14 = true;
				if ((bVar13 & 90.0 < (float)dVar11 * 57.29578) != 0) goto label_05bd114e;
			}
			pUVar4 = this.Cache;
			if ((pUVar4 == null) ||(pUVar9 = pUVar4.Rigidbody, pUVar9 == null)) goto label_05bd11f2;
			UVar28.z = fVar25;
			UVar28.x = (float)(int)uVar12;
			UVar28.y = (float)(int)((ulong)uVar12 >> 0x20);
			pUVar9.AddForce(UVar28);
			pUVar4 = this.Cache;
			if ((pUVar4 == null) ||(pUVar9 = pUVar4.Rigidbody, pUVar9 == null)) goto label_05bd11f2;
			UVar28 = pUVar9.linearVelocity;
			fVar24 = UVar28.z;
			fVar21 = UVar28.x;
			fVar23 = UVar28.y;
			fVar27 = fVar27 * (fVar24 * fVar24 + fVar23 * fVar23 + fVar21 * fVar21);
			if (fVar27 < 0.0) {
				fVar27 = sqrtf(fVar27);
				pIVar19 = typeof(Math);
			}
			else {
				fVar27 = SQRT(fVar27);
				pIVar19 = typeof(Math);
			}
			typeof(Math) = (Math)pIVar19;
			if (1e-15 <= fVar27) {
				fVar27 = (fVar25 * fVar24 + local_78._4_4_ * fVar23 + (float)local_78 * fVar21) / fVar27;
				fVar25 = 1.0;
				if (fVar27 <= 1.0) {
					fVar25 = fVar27;
				}
				dVar11 = acos((double)(float)(~-(uint)(-1.0 <= fVar27) & 0xbf800000 |(uint)fVar25 & -(uint)(-1.0 <= fVar27)), (MethodInfo)pIVar19);
				if (90.0 < (float)dVar11 * 57.29578) {
					pUVar4 = this.Cache;
					if ((pUVar4 == null) ||(pUVar9 = pUVar4.Rigidbody, pUVar9 == null)) goto label_05bd11f2;
					bVar14 = false;
					UVar28 = pUVar9.linearVelocity;
					UVar29.x = UVar28.x * -2.0;
					UVar29.y = UVar28.y * -2.0;
					UVar29.z = UVar28.z * -2.0;
					pUVar9.AddForce(UVar29, 5);
					goto label_05bd114e;
				}
			}
			bVar14 = false;
			cVar3 = __this_00.IsActive;
		}
		else {
	label_05bd114e: ;
			cVar3 = __this_00.IsActive;
		}
		if (cVar3 != false) {
			__this_02 = this.Stats;
			if (__this_02 == null) {
	label_05bd11f2: ;
				throw new NullReferenceException();
			}
			if (0.0 < __this_02.CurrentGas) {
				__this_02.UseFrameGas();
				return bVar14;
			}
		}
		if (0.3 < fVar20) {
			if (left) {
				this._launchLeft = false;
			}
			else {
				this._launchRight = false;
			}
			bVar14 = false;
			__this_00.DisableActiveHook();
			if (this._hookHumanLeft == left) {
				this._hookHuman = null;
				bVar14 = false;
			}
		}
		return bVar14;
	}

	[Token(Token = "0x6004165")]
	[Address(RVA = "0x5AD1D40", Offset = "0x5AD0D40", VA = "0x5AD1D40")]
	private void FixedUpdatePivot(Vector3 position)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$FixedUpdatePivot): 56 lines keep C-only constructs
		float pfVar1;
		bool bVar2;
		uint uVar3;
		BaseComponentCache pUVar4;
		Rigidbody pUVar5;
		HookUseable pCVar6;
		InGameSet pSVar7;
		InGameMiscSettings pSVar8;
		BoolSetting pSVar9;
		Transform __this_00;
		FloatSetting pSVar10;
		String pSVar12;
		HumanInputSettings pSVar13;
		PhotonMessageInfo PVar14;
		byte[] auVar15 = new byte[16];
		bool bVar16;
		Settings_SettingsManager_StaticFields pSVar17;
		float fVar18;
		float fVar19;
		float fVar24;
		ulong extraout_XMM0_Qb;
		byte[] auVar20 = new byte[16];
		byte[] extraout_var = new byte[12];
		byte[] auVar21 = new byte[16];
		byte[] auVar23 = new byte[16];
		byte[] auVar22 = new byte[16];
		ulong uVar30;
		float fVar25;
		uint uVar26;
		uint uVar27;
		uint uVar28;
		float fVar29;
		byte[] auVar31 = new byte[16];
		Vector3 UVar32;
		Vector3 value;
		float local_b0;
		float local_88;
		float fStack_84;
		byte[] local_70 = new byte[12];
		uint uStack_64;
		PhotonView local_60;
		ulong local_58;
		Vector3 local_48;
		ulong local_38;

		local_88 = position.x;
		fStack_84 = position.y;
		bVar2 = this.Grounded;
		fVar18 = this._currentVelocity.x;
		fVar29 = this._currentVelocity.y;
		fVar19 = this._currentVelocity.z;
		fVar18 = fVar19 * fVar19 + fVar29 * fVar29 + fVar18 * fVar18;
		if (fVar18 < 0.0) {
			fVar18 = sqrtf(fVar18);
		}
		else {
			fVar18 = SQRT(fVar18);
		}
		pUVar4 = this.Cache;
		if ((pUVar4 == null) ||(pUVar5 = pUVar4.Rigidbody, pUVar5 == null)) goto label_05bd24d4;
		UVar32 = pUVar5.position;
		local_b0 = UVar32.z;
		local_38 = UVar32._0_8_;
		pCVar6 = this.HookLeft;
		if (pCVar6 == null) goto label_05bd24d4;
		bVar16 = pCVar6.IsHooked();
		if (bVar16) {
			pCVar6 = this.HookRight;
			if (pCVar6 == null) goto label_05bd24d4;
			bVar16 = pCVar6.IsHooked();
			if (bVar16) {
				pCVar6 = this.HookLeft;
				if (pCVar6 == null) goto label_05bd24d4;
				bVar16 = pCVar6.IsHookOffset();
				if (bVar16) {
					pCVar6 = this.HookRight;
					if (pCVar6 == null) goto label_05bd24d4;
					bVar16 = pCVar6.IsHookOffset();
					if (bVar16) {
						pUVar4 = this.Cache;
						if ((pUVar4 == null) ||(pUVar5 = pUVar4.Rigidbody, pUVar5 == null)) goto label_05bd24d4;
						UVar32 = pUVar5.position;
						local_b0 = UVar32.z;
						local_38 = CONCAT44(UVar32.y + -0.02, UVar32.x);
					}
				}
			}
		}
		fVar29 = (&this.ReelInAxis)[-(uint)(this.ReelInAxis == 0.0) & 1];
		if (0.0 < fVar29) {
			pSVar7 = SettingsManager.InGameCurrent;
			if (((pSVar7 == null) ||(pSVar8 = pSVar7.Misc, pSVar8 == null)) ||(pSVar9 = pSVar8.RealismMode, pSVar9 == null)) goto label_05bd24d4;
			if (pSVar9._value != false) {
				pUVar4 = this.Cache;
				if ((pUVar4 == null) ||(__this_00 = pUVar4.Transform, __this_00 == null)) goto label_05bd24d4;
				UVar32 = __this_00.position;
				if (Il2CppMethodInitialized_0753e7b7 == false) {
					local_58 = UVar32._0_8_;
					UVar32.z = UVar32.z;
					UVar32.x = (float)(undefined4)local_58;
					UVar32.y = (float)local_58._4_4_;
					Il2CppMethodInitialized_0753e7b7 = true;
					uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar3 == 0) {
					local_58 = UVar32._0_8_;
					UVar32.z = UVar32.z;
					UVar32.x = (float)(undefined4)local_58;
					UVar32.y = (float)local_58._4_4_;
				}
				fVar25 = UVar32.z - position.z;
				fVar19 = UVar32.x - local_88;
				fVar24 = UVar32.y - fStack_84;
				fVar19 = fVar25 * fVar25 + fVar24 * fVar24 + fVar19 * fVar19;
				if (fVar19 < 0.0) {
					fVar19 = sqrtf(fVar19);
				}
				else {
					fVar19 = SQRT(fVar19);
				}
				pSVar7 = SettingsManager.InGameCurrent;
				if (((pSVar7 == null) ||(pSVar8 = pSVar7.Misc, pSVar8 == null)) ||(pSVar10 = pSVar8.RealismMaxReel, pSVar10 == null)) goto label_05bd24d4;
				pfVar1 = &pSVar10._value;
				if (*pfVar1 <= fVar19 && fVar19 != *pfVar1) {
					fVar29 = 0.0;
				}
			}
		}
		local_70._8_4_ = position.z - local_b0;
		fVar19 = 0.8;
		if (fVar29 <= 0.8) {
			fVar19 = fVar29;
		}
		local_48.x = this._currentVelocity.x;
		local_48.y = this._currentVelocity.y;
		local_48.z = this._currentVelocity.z;
		fVar19 = (float)(-(uint)(-0.8 <= fVar29) & (uint)((fVar19 + 1.0) * 1.53938) | ~-(uint)(-0.8 <= fVar29) & 0x3e9da1eb);
		local_70._4_4_ = fStack_84 - local_38._4_4_;
		local_70._0_4_ = (int32_t)(local_88 - (float)local_38);
		uVar26 = 0;
		uVar27 = 0;
		uVar28 = 0;
		UVar32 = Vector3.Internal_RotateTowards((Vector3)local_70, ref local_48, fVar19, fVar19);
		fVar19 = UVar32.z;
		local_88 = UVar32.x;
		fStack_84 = UVar32.y;
		if (Il2CppMethodInitialized_0753e72d == false) {
			uVar26 = 0;
			uVar27 = 0;
			uVar28 = 0;
			Il2CppMethodInitialized_0753e72d = true;
			if (Il2CppMethodInitialized_0753e729 == false) goto label_05bd2434;
	label_05bd214c: ;
			local_70._0_8_ = 0;
			uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_0753e729 != false) goto label_05bd214c;
	label_05bd2434: ;
			local_70._0_8_ = 0;
			uVar26 = 0;
			uVar27 = 0;
			uVar28 = 0;
			Il2CppMethodInitialized_0753e729 = true;
			uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
			uVar26 = 0;
			uVar27 = 0;
			uVar28 = 0;
		}
		auVar31._4_4_ = uVar26;
		auVar31._0_4_ = fVar19;
		auVar31._8_4_ = uVar27;
		auVar31._12_4_ = uVar28;
		auVar20._4_12_ = auVar31._4_12_;
		fVar24 = fVar19 * fVar19 + fStack_84 * fStack_84 + local_88 * local_88;
		if (fVar24 < 0.0) {
			auVar21._0_4_ = sqrtf(fVar24);
			auVar21._4_12_ = extraout_var;
			uVar30 = auVar21._0_8_;
			if (1e-05 < auVar21._0_4_) goto label_05bd2376;
	label_05bd21a3: ;
			fVar19 = (Vector3.zeroVector).z;
			uVar30._0_4_ = (int32_t)(Vector3.zeroVector).x;
			uVar30._4_4_ = (Vector3.zeroVector).y;
			if (fVar29 <= 0.0) goto label_05bd21c9;
	label_05bd239a: ;
			this._isReelingOut = true;
		}
		else {
			auVar20._0_4_ = SQRT(fVar24);
			uVar30 = auVar20._0_8_;
			if (auVar20._0_4_ <= 1e-05) goto label_05bd21a3;
	label_05bd2376: ;
			auVar22._0_4_ = (float)uVar30;
			fVar19 = fVar19 / auVar22._0_4_;
			uVar26 = (undefined4)((ulong)uVar30 >> 0x20);
			auVar23._8_4_ = uVar26;
			auVar23._0_8_ = uVar30;
			auVar23._12_4_ = uVar26;
			auVar22._8_8_ = auVar23._8_8_;
			auVar22._4_4_ = auVar22._0_4_;
			auVar15._8_8_ = extraout_XMM0_Qb;
			auVar15._0_8_ = UVar32._0_8_;
			auVar31 = divps(auVar15, auVar22);
			uVar30 = auVar31._0_8_;
			local_70._0_8_ = uVar30;
			if (0.0 < fVar29) goto label_05bd239a;
	label_05bd21c9: ;
			if ((fVar29 < 0.0) && (this._reelInWaitForRelease == false)) {
				if (this._state == 3) {
					pCVar6 = this.HookLeft;
					if (pCVar6 == null) goto label_05bd24d4;
					bVar16 = pCVar6.IsHooked();
					if (bVar16) {
						pCVar6 = this.HookRight;
						if (pCVar6 == null) goto label_05bd24d4;
						bVar16 = pCVar6.IsHooked();
						if (bVar16) {
							return;
						}
					}
				}
				pSVar17 = typeof(SettingsManager).static_fields;
				if ((pSVar17.SoundSettings == null) ||(pSVar9 = pSVar17.SoundSettings.ReelInEffect, pSVar9 == null)) goto label_05bd24d4;
				if (pSVar9._value != false) {
					pSVar12 = HumanSounds.ReelIn;
					Util.CreateLocalPhotonInfo((PhotonMessageInfo)local_70);
					PVar14.Sender._4_4_ = uStack_64;
					PVar14.Sender._0_4_ = local_70._8_4_;
					PVar14._0_8_ = local_70._0_8_;
					PVar14.photonView = local_60;
					this.PlaySoundRPC(pSVar12, PVar14);
					pSVar17 = typeof(SettingsManager).static_fields;
				}
				if (((pSVar17.InputSettings == null) ||(pSVar13 = pSVar17.InputSettings.Human, pSVar13 == null)) || (pSVar9 = pSVar13.ReelInHolding, pSVar9 == null)) goto label_05bd24d4;
				if (pSVar9._value == false) {
					this._reelInWaitForRelease = true;
				}
			}
		}
		fVar18 = fVar18 + *(float)(&g_data_0100abf0 + (ulong)(bVar2 == false) * 4);
		value.x = fVar18 * (float)uVar30;
		value.y = fVar18 * SUB84(uVar30, 4);
		value.z = fVar18 * fVar19;
		this._currentVelocity.x = value.x;
		this._currentVelocity.y = value.y;
		this._currentVelocity.z = value.z;
		pUVar4 = this.Cache;
		if ((pUVar4 != null) &&(pUVar5 = pUVar4.Rigidbody, pUVar5 != null)) {
			pUVar5.linearVelocity = value;
			return;
		}
	label_05bd24d4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004166")]
	[Address(RVA = "0x5AD12E0", Offset = "0x5AD02E0", VA = "0x5AD12E0")]
	private bool IsStock(bool pivot)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$IsStock): clean
		bool bVar1;

		if ((this.Grounded != false) && (this._state == 1 && pivot)) {
			return bVar1;
		}
		return false;
	}

	[Token(Token = "0x6004167")]
	[Address(RVA = "0x5AD2730", Offset = "0x5AD1730", VA = "0x5AD2730")]
	private void FixedUpdateSetHookedDirection()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$FixedUpdateSetHookedDirection): 75 lines keep C-only constructs
		float fVar1;
		int iVar2;
		HookUseable pCVar3;
		BaseComponentCache pUVar4;
		Transform pUVar5;
		HumanSetup pCVar6;
		Rigidbody pUVar7;
		byte[] auVar8 = new byte[16];
		double dVar9;
		bool bVar10;
		MethodInfo method_00;
		Math method_01;
		Il2CppClass klass;
		float __y;
		float fVar11;
		float fVar12;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dc_03;
		uint extraout_XMM0_Dd_01;
		uint extraout_XMM0_Dd_02;
		uint extraout_XMM0_Dd_03;
		uint uVar13;
		uint uVar14;
		uint uVar15;
		byte[] auVar16 = new byte[12];
		float fVar17;
		float fVar18;
		float fVar21;
		float __x;
		byte[] auVar19 = new byte[12];
		byte[] auVar20 = new byte[12];
		Vector3 UVar22;
		Vector3 UVar23;
		Vector3 UVar24;
		Vector3 UVar25;
		float local_108;
		float fStack_104;
		float fStack_d4;
		byte[] local_b8 = new byte[8];
		float local_b0;
		InvokerMethod local_a8;
		byte[] local_98 = new byte[8];
		byte[] local_88 = new byte[8];
		_union_14[] local_78 = new _union_14[2];
		byte[] local_68 = new byte[8];
		float fStack_60;
		float fStack_5c;
		byte[] local_58 = new byte[8];
		float fStack_50;
		float fStack_4c;
		float local_48;
		float local_38;
		byte[] local_28 = new byte[8];
		float fStack_20;
		float fStack_1c;

		local_a8 = (InvokerMethod)0x0;
		local_b0 = 0.0;
		local_b8 = (byte[])0x0;
		this._almostSingleHook = false;
		pCVar3 = this.HookLeft;
		if (pCVar3 == null) goto label_05bd3294;
		fVar1 = this.TargetAngle;
		bVar10 = pCVar3.IsHooked();
		if (bVar10) {
			pCVar3 = this.HookRight;
			if (pCVar3 == null) goto label_05bd3294;
			bVar10 = pCVar3.IsHooked();
			if (!bVar10) goto label_05bd2a6b;
			pCVar3 = this.HookLeft;
			if (pCVar3 == null) goto label_05bd3294;
			UVar22 = pCVar3.GetHookPosition();
			pCVar3 = this.HookRight;
			if (pCVar3 == null) goto label_05bd3294;
			UVar23 = pCVar3.GetHookPosition();
			local_108 = UVar22.x;
			fStack_104 = UVar22.y;
			fStack_104 = fStack_104 - UVar23.y;
			fVar17 = local_108 - UVar23.x;
			fVar21 = UVar22.z - UVar23.z;
			local_a8 = (InvokerMethod)CONCAT44(fStack_104, fVar17);
			pCVar3 = this.HookLeft;
			if (pCVar3 == null) goto label_05bd3294;
			UVar22 = pCVar3.GetHookPosition();
			pCVar3 = this.HookRight;
			if (pCVar3 == null) goto label_05bd3294;
			UVar23 = pCVar3.GetHookPosition();
			pUVar4 = this.Cache;
			if (pUVar4 == null) goto label_05bd3294;
			pUVar5 = pUVar4.Transform;
			local_108 = UVar22.x;
			if (pUVar5 == null) goto label_05bd3294;
			local_88 = (byte[])UVar23._0_8_;
			method_00 = null;
			UVar24 = pUVar5.position;
			fVar18 = (UVar23.x + local_108) * 0.5 - UVar24.x;
			__x = (UVar23.z + UVar22.z) * 0.5 - UVar24.z;
			uVar13 = fVar21 * fVar21;
			if ((float)uVar13 + fStack_104 * fStack_104 + fVar17 * fVar17 < 4.0) {
				fVar17 = atan2f(fVar18, __x);
				this.TargetAngle = fVar17 * 57.29578;
				pCVar6 = this.Setup;
				if (pCVar6 == null) goto label_05bd3294;
				if (((pCVar6.Weapon | 2U) == 3) && (this._state != 1)) {
					pUVar4 = this.Cache;
					if ((pUVar4 == null) ||(pUVar7 = pUVar4.Rigidbody, pUVar7 == null)) goto label_05bd3294;
					UVar22 = pUVar7.linearVelocity;
					pUVar4 = this.Cache;
					if ((pUVar4 == null) ||(pUVar7 = pUVar4.Rigidbody, pUVar7 == null)) goto label_05bd3294;
					method_00 = null;
					UVar23 = pUVar7.linearVelocity;
					fVar17 = atan2f(UVar22.z, UVar23.x);
					fVar21 = atan2f(__x, fVar18);
					fVar18 = fVar21 * -57.29578 + fVar17 * 57.29578;
					fVar17 = this.TargetAngle;
					fVar21 = floorf(fVar18 / 360.0);
					fVar18 = fVar21 * -360.0 + fVar18;
					auVar19 = ZEXT812(0x43b40000);
					if (fVar18 <= auVar19._0_4_) {
						auVar19._4_8_ = auVar19._4_8_;
						auVar19._0_4_ = fVar18;
					}
					fVar21 = (float)(-(uint)(0.0 <= fVar18) & auVar19._0_4_);
					this.TargetAngle = fVar17 - (float)(~-(uint)(180.0 < fVar21) & (uint)fVar21 |(uint)(fVar21 + -360.0) & -(uint)(180.0 < fVar21));
				}
				this._almostSingleHook = true;
				goto label_05bd323f;
			}
			pUVar4 = this.Cache;
			if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05bd3294;
			uVar14 = uVar13;
			uVar15 = uVar13;
			UVar23 = pUVar5.position;
			local_98 = (byte[])UVar23._0_8_;
			pCVar3 = this.HookLeft;
			if (pCVar3 == null) goto label_05bd3294;
			UVar25 = pCVar3.GetHookPosition();
			pUVar4 = this.Cache;
			if (pUVar4 == null) goto label_05bd3294;
			fStack_60 = (float)extraout_XMM0_Dc_01;
			local_68 = (byte[])UVar25._0_8_;
			fStack_5c = (float)extraout_XMM0_Dd_01;
			local_58._4_4_ = uVar13;
			local_58._0_4_ = UVar25.z;
			fStack_50 = (float)uVar14;
			fStack_4c = (float)uVar15;
			pUVar5 = pUVar4.Transform;
			if (pUVar5 == null) goto label_05bd3294;
			UVar25 = pUVar5.position;
			local_78[0]._0_4_ = UVar25.z;
			fStack_20 = (float)extraout_XMM0_Dc_02;
			local_28 = UVar25._0_8_;
			fStack_1c = (float)extraout_XMM0_Dd_02;
			pCVar3 = this.HookRight;
			local_78[0]._4_4_ = uVar13;
			local_78[1]._0_4_ = uVar14;
			local_78[1]._4_4_ = uVar15;
			if (pCVar3 == null) goto label_05bd3294;
			fStack_104 = UVar22.y;
			fStack_d4 = UVar24.y;
			fStack_d4 = (fStack_104 + (float)local_88._4_4_) * 0.5 - fStack_d4;
			fVar11 = (float)local_98._4_4_ - (float)local_68._4_4_;
			__y = (float)local_98._0_4_ - (float)local_68._0_4_;
			fVar12 = UVar23.z - (float)local_58._0_4_;
			method_00 = null;
			fVar17 = fStack_60;
			fVar21 = fStack_5c;
			UVar22 = pCVar3.GetHookPosition();
			auVar8._8_4_ = extraout_XMM0_Dc_03;
			auVar8._0_8_ = UVar22._0_8_;
			auVar8._12_4_ = extraout_XMM0_Dd_03;
			local_98._4_4_ = local_58._0_4_;
			local_98._0_4_ = UVar22.z;
			local_68._4_4_ = __x;
			local_68._0_4_ = __x;
			fStack_60 = __x;
			fStack_5c = __x;
			local_88._0_4_ = __x * __x + fStack_d4 * fStack_d4 + fVar18 * fVar18;
			fVar17 = fVar12 * fVar12 + fVar11 * fVar11 + __y * __y;
			local_88._4_4_ = __x;
			fVar21 = (float)local_88._0_4_;
			local_38 = fVar12;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
				local_48 = fVar17;
				fVar17 = local_48;
				fVar21 = (float)local_88._0_4_;
			}
			local_108 = -fStack_d4;
			fVar17 = fVar17 * fVar21;
			if (fVar17 < 0.0) {
				fVar17 = sqrtf(fVar17);
				if (1e-15 <= fVar17) goto label_05bd2f19;
	label_05bd2f9c: ;
				fVar17 = (float)local_28._4_4_ - (float)local_58._4_4_;
				local_78[0]._4_4_ = (float)local_78[0]._0_4_ - (float)local_98._0_4_;
				local_78[1]._0_4_ = fStack_20 - fStack_50;
				local_78[1]._4_4_ = fStack_1c - fStack_4c;
				local_78[0]._0_4_ = (float)local_28._0_4_ - (float)local_58._0_4_;
				fVar11 = (float)local_78[0]._4_4_ * (float)local_78[0]._4_4_;
				fVar21 = fVar11 + fVar17 * fVar17 + (float)local_78[0]._0_4_ * (float)local_78[0]._0_4_;
				if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
					local_98._4_4_ = fVar11;
					local_98._0_4_ = fVar21;
					fVar21 = (float)local_98._0_4_;
				}
				fVar21 = (float)local_88._0_4_ * fVar21;
				if (fVar21 < 0.0) {
					fVar21 = sqrtf(fVar21);
					klass = typeof(Math);
				}
				else {
					fVar21 = SQRT(fVar21);
					klass = typeof(Math);
				}
				typeof(Math) = (Math)klass;
				if (1e-15 <= fVar21) {
					fVar21 = ((fVar17 * local_108 - (float)local_78[0]._0_4_ * fVar18) - (float)local_78[0]._4_4_ * __x) / fVar21;
					fVar17 = 1.0;
					if (fVar21 <= 1.0) {
						fVar17 = fVar21;
					}
					dVar9 = acos((double)(float)(~-(uint)(-1.0 <= fVar21) & 0xbf800000 |(uint)fVar17 & -(uint)(-1.0 <= fVar21)), (MethodInfo)klass);
					if (30.0 <= (float)dVar9 * 57.29578) goto label_05bd3132;
				}
				this._almostSingleHook = true;
				fVar17 = atan2f(fVar18, (float)local_68._0_4_);
				fVar17 = fVar17 * 57.29578;
			}
			else {
				fVar17 = SQRT(fVar17);
				if (fVar17 < 1e-15) goto label_05bd2f9c;
	label_05bd2f19: ;
				fVar17 = ((fVar11 * local_108 - fVar18 * __y) - __x * fVar12) / fVar17;
				fVar21 = 1.0;
				if (fVar17 <= 1.0) {
					fVar21 = fVar17;
				}
				method_01 = typeof(Math);
				dVar9 = acos((double)(float)(~-(uint)(-1.0 <= fVar17) & 0xbf800000 |(uint)fVar21 & -(uint)(-1.0 <= fVar17)), (MethodInfo)method_01);
				if ((float)dVar9 * 57.29578 < 30.0) goto label_05bd2f9c;
	label_05bd3132: ;
				this._almostSingleHook = false;
				pUVar4 = this.Cache;
				if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) {
	label_05bd3294: ;
					throw new NullReferenceException();
				}
				UVar22 = pUVar5.forward;
				local_b0 = UVar22.z;
				local_b8 = UVar22._0_8_;
				method_00 = (MethodInfo)local_b8;
				Vector3.OrthoNormalize(ref local_a8, (Vector3)method_00);
				fVar17 = atan2f((float)local_b8._0_4_, local_b0);
				this.TargetAngle = fVar17 * 57.29578;
				fVar21 = atan2f(__y, local_38);
				fVar17 = this.TargetAngle;
				fVar18 = fVar17 - fVar21 * 57.29578;
				fVar21 = floorf(fVar18 / 360.0);
				fVar18 = fVar21 * -360.0 + fVar18;
				auVar20 = ZEXT812(0x43b40000);
				if (fVar18 <= auVar20._0_4_) {
					auVar20._4_8_ = auVar20._4_8_;
					auVar20._0_4_ = fVar18;
				}
				fVar21 = (float)(-(uint)(0.0 <= fVar18) & auVar20._0_4_);
				if ((float)(~-(uint)(180.0 < fVar21) & (uint)fVar21 | (uint)(fVar21 + -360.0) & -(uint)(180.0 < fVar21)) <= 0.0) goto label_05bd323f;
				fVar17 = fVar17 + 180.0;
			}
		}
		else {
	label_05bd2a6b: ;
			this._almostSingleHook = true;
			pCVar3 = this.HookLeft;
			if (pCVar3 == null) goto label_05bd3294;
			bVar10 = pCVar3.IsHooked();
			if (bVar10) {
				pCVar3 = this.HookLeft;
			}
			else {
				pCVar3 = this.HookRight;
				if (pCVar3 == null) goto label_05bd3294;
				bVar10 = pCVar3.IsHooked();
				if (!bVar10) {
					return;
				}
				pCVar3 = this.HookRight;
			}
			if (pCVar3 == null) goto label_05bd3294;
			UVar22 = pCVar3.GetHookPosition();
			pUVar4 = this.Cache;
			if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05bd3294;
			method_00 = null;
			UVar23 = pUVar5.position;
			local_108 = UVar22.x;
			local_108 = local_108 - UVar23.x;
			fVar21 = UVar22.z - UVar23.z;
			fVar17 = atan2f(local_108, fVar21);
			this.TargetAngle = fVar17 * 57.29578;
			if (this._state == 1) goto label_05bd323f;
			pUVar4 = this.Cache;
			if ((pUVar4 == null) ||(pUVar7 = pUVar4.Rigidbody, pUVar7 == null)) goto label_05bd3294;
			UVar22 = pUVar7.linearVelocity;
			pUVar4 = this.Cache;
			if ((pUVar4 == null) ||(pUVar7 = pUVar4.Rigidbody, pUVar7 == null)) goto label_05bd3294;
			method_00 = null;
			UVar23 = pUVar7.linearVelocity;
			fVar17 = atan2f(UVar22.z, UVar23.x);
			fVar21 = atan2f(fVar21, local_108);
			fVar21 = fVar17 * 57.29578 + fVar21 * -57.29578;
			fVar17 = floorf(fVar21 / 360.0);
			pCVar6 = this.Setup;
			if (pCVar6 == null) goto label_05bd3294;
			fVar21 = fVar21 + fVar17 * -360.0;
			auVar16 = ZEXT812(0x43b40000);
			if (fVar21 <= auVar16._0_4_) {
				auVar16._4_8_ = auVar16._4_8_;
				auVar16._0_4_ = fVar21;
			}
			fVar17 = (float)(-(uint)(0.0 <= fVar21) & auVar16._0_4_);
			fVar17 = (float)(~-(uint)(180.0 < fVar17) & (uint)fVar17 |(uint)(fVar17 + -360.0) & -(uint)(180.0 < fVar17));
			if ((pCVar6.Weapon | 2U) != 3) {
				pCVar3 = this.HookLeft;
				if (pCVar3 == null) goto label_05bd3294;
				method_00 = null;
				bVar10 = pCVar3.IsHooked();
				if ((fVar17 <= 0.0) || (!bVar10)) {
					pCVar3 = this.HookRight;
					if (pCVar3 == null) goto label_05bd3294;
					method_00 = null;
					bVar10 = pCVar3.IsHooked();
					fVar21 = 0.1;
					if ((fVar17 < 0.0) && (bVar10)) goto label_05bd2ed4;
				}
				else {
	label_05bd2ed4: ;
					fVar21 = -0.1;
				}
				this.TargetAngle = this.TargetAngle - fVar17 * fVar21;
				goto label_05bd323f;
			}
			fVar17 = this.TargetAngle - fVar17;
		}
		this.TargetAngle = fVar17;
	label_05bd323f: ;
		bVar10 = this.IsFiringThunderspear();
		if (bVar10) {
			this.TargetAngle = fVar1;
		}
		if ((((this.Grounded != false) && (this.HasDirection != false)) &&(iVar2 = this._state, iVar2 != 1)) && (iVar2 != 0xb)) {
			this.TargetAngle = fVar1;
		}
		return;
	}

	[Token(Token = "0x6004168")]
	[Address(RVA = "0x5AD32A0", Offset = "0x5AD22A0", VA = "0x5AD32A0")]
	private void FixedUpdateBodyLean(float speedAtStart, Vector3 forwardAtStart)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$FixedUpdateBodyLean): 33 lines keep C-only constructs
		HumanSetup pCVar1;
		AnimationHandler __this_00;
		BaseComponentCache pUVar2;
		Rigidbody pUVar3;
		Transform __this_01;
		double dVar4;
		bool bVar5;
		HookUseable pCVar6;
		Il2CppClass klass;
		float fVar7;
		float fVar8;
		float fVar9;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		byte[] auVar10 = new byte[16];
		Quaternion UVar11;
		Vector3 UVar12;
		Vector3 local_90;
		float local_80;
		float local_7c;
		float local_78;
		byte[] local_68 = new byte[16];
		Vector3 local_58;
		byte[] local_48 = new byte[16];
		byte[] local_38 = new byte[16];
		float local_28;

		local_80 = forwardAtStart.z;
		fVar9 = forwardAtStart.y;
		local_38._8_4_ = in_XMM1_Dc;
		local_38._0_8_ = forwardAtStart._0_8_;
		local_38._12_4_ = in_XMM1_Dd;
		this._needLean = false;
		pCVar1 = this.Setup;
		if (pCVar1 == null) goto label_05bd3841;
		if ((((pCVar1.Weapon | 2U) == 3) || (this._state != 1)) ||(bVar5 = this.IsFiringThunderspear())) {
			fVar9 = 0.0;
			if (this.Grounded == false) {
				pCVar6 = this.HookLeft;
				if (pCVar6 == null) goto label_05bd3841;
				bVar5 = pCVar6.IsHooked();
				if (bVar5) {
					pCVar6 = this.HookRight;
					if (pCVar6 == null) goto label_05bd3841;
					bVar5 = pCVar6.IsHooked();
					if (!bVar5) goto label_05bd33ed;
					fVar9 = 0.0;
					if (this._almostSingleHook == false) goto label_05bd3478;
					this._needLean = true;
					pCVar6 = this.HookRight;
	label_05bd3416: ;
					bVar5 = true;
					if (pCVar6 == null) goto label_05bd3841;
				}
				else {
	label_05bd33ed: ;
					pCVar6 = this.HookLeft;
					if (pCVar6 == null) goto label_05bd3841;
					bVar5 = pCVar6.IsHooked();
					if (bVar5) {
						this._needLean = true;
						pCVar6 = this.HookLeft;
						goto label_05bd3416;
					}
					pCVar6 = this.HookRight;
					if (pCVar6 == null) goto label_05bd3841;
					bVar5 = pCVar6.IsHooked();
					fVar9 = 0.0;
					if (!bVar5) goto label_05bd3478;
					this._needLean = true;
					pCVar6 = this.HookRight;
					if (pCVar6 == null) goto label_05bd3841;
					bVar5 = false;
				}
				UVar12 = pCVar6.GetHookPosition();
				fVar9 = this.GetLeanAngle(UVar12, bVar5);
				fVar9 = fVar9 * 0.017453292;
			}
	label_05bd3478: ;
			if (this._needLean == false) {
				if (this._state != 1) {
					__this_00 = this.Animation;
					if (__this_00 == null) goto label_05bd3841;
					bVar5 = __this_00.IsPlaying(HumanAnimations.WallRun);
					if (!bVar5) {
						local_90._0_8_ = (ulong)(uint)(this.TargetAngle * 0.017453292) << 0x20;
						local_90.z = 0.0;
						goto label_05bd34f4;
					}
				}
			}
			else {
				pCVar1 = this.Setup;
				if (pCVar1 == null) goto label_05bd3841;
				local_90.x = -0.0;
				if (((pCVar1.Weapon | 2U) != 3) && (this._state != 1)) {
					local_90.x = speedAtStart * 0.1;
					if (20.0 <= local_90.x) {
						local_90.x = 20.0;
					}
					local_90.x = local_90.x * -0.017453292;
				}
				local_90.y = this.TargetAngle * 0.017453292;
				local_90.z = fVar9;
	label_05bd34f4: ;
				UVar11 = (Quaternion)Quaternion.Internal_FromEulerRad(ref local_90);
				this._targetRotation = UVar11;
			}
			if (this._wallSlide == false) {
				return;
			}
			if (this.Grounded != false) {
				return;
			}
			pUVar2 = this.Cache;
			if ((pUVar2 != null) &&(pUVar3 = pUVar2.Rigidbody, pUVar3 != null)) {
				UVar12 = pUVar3.linearVelocity;
				local_90.z = UVar12.z;
				local_58.x = this._wallSlideGround.x;
				local_58.y = this._wallSlideGround.y;
				local_58.z = this._wallSlideGround.z;
				local_90._0_8_ = UVar12._0_8_;
				UVar11 = (Quaternion)Quaternion.Internal_LookRotation(ref local_90, ref local_58);
				this._targetRotation = UVar11;
				return;
			}
			goto label_05bd3841;
		}
		pUVar2 = this.Cache;
		if ((pUVar2 == null) ||(pUVar3 = pUVar2.Rigidbody, pUVar3 == null)) goto label_05bd3841;
		UVar12 = pUVar3.linearVelocity;
		local_78 = UVar12.z;
		local_48._8_4_ = extraout_XMM0_Dc;
		local_48._0_8_ = UVar12._0_8_;
		local_48._12_4_ = extraout_XMM0_Dd;
		auVar10._8_4_ = extraout_XMM0_Dc;
		auVar10._0_8_ = UVar12._0_8_;
		auVar10._12_4_ = extraout_XMM0_Dd;
		local_68._4_12_ = auVar10._4_12_;
		local_68._0_4_ = UVar12.x * UVar12.x;
		fVar7 = local_78 * local_78;
		fVar8 = fVar7 + (float)local_68._0_4_;
		if (fVar8 < 0.0) {
			fVar8 = sqrtf(fVar8);
		}
		else {
			fVar8 = SQRT(fVar8);
		}
		local_28 = (float)local_48._4_4_;
		local_7c = atan2f((float)local_48._4_4_, fVar8);
		fVar7 = fVar7 + (float)local_68._0_4_ + local_28 * local_28;
		fVar9 = local_80 * local_80 +(float)local_38._4_4_ * (float)local_38._4_4_ + (float)local_38._0_4_ * (float)local_38._0_4_;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			local_68._0_4_ = fVar9;
			fVar9 = (float)local_68._0_4_ * fVar7;
			if (0.0 <= fVar9) goto label_05bd36ab;
	label_05bd36ef: ;
			fVar9 = sqrtf(fVar9);
			klass = typeof(Math);
			fVar7 = local_78;
		}
		else {
			fVar9 = fVar9 * fVar7;
			if (fVar9 < 0.0) goto label_05bd36ef;
	label_05bd36ab: ;
			fVar9 = SQRT(fVar9);
			klass = typeof(Math);
			fVar7 = local_78;
		}
		fVar8 = 0.0;
		typeof(Math) = (Math)klass;
		local_78 = fVar7;
		if (1e-15 <= fVar9) {
			fVar9 = (fVar7 * local_80 +(float)local_48._4_4_ * (float)local_38._4_4_ + (float)local_48._0_4_ * (float)local_38._0_4_) / fVar9;
			fVar8 = 1.0;
			if (fVar9 <= 1.0) {
				fVar8 = fVar9;
			}
			local_78 = (float)(~-(uint)(-1.0 <= fVar9) & 0xbf800000 | (uint)fVar8 & -(uint)(-1.0 <= fVar9));
			fVar9 = local_78;
			if ((klass._2).cctor_finished_or_no_cctor == 0) {
				fVar9 = local_78;
				fVar7 = local_78;
			}
			local_78 = fVar7;
			dVar4 = acos((double)fVar9, (MethodInfo)klass);
			fVar8 = (float)dVar4 * 57.29578;
		}
		local_90._0_8_ = CONCAT44(this.TargetAngle * 0.017453292, (fVar8 / -90.0 + 1.0) * local_7c * -57.29578 * 0.017453292);
		local_90.z = 0.0;
		UVar11 = (Quaternion)Quaternion.Internal_FromEulerRad(ref local_90) ;
		this._targetRotation = UVar11;
		pCVar6 = this.HookLeft;
		if (pCVar6 != null) {
			bVar5 = pCVar6.IsHooked();
			if (!bVar5) {
				pCVar6 = this.HookRight;
				if (pCVar6 == null) goto label_05bd3841;
				bVar5 = pCVar6.IsHooked();
				if (!bVar5) {
					return;
				}
			}
			pUVar2 = this.Cache;
			if ((pUVar2 != null) &&(__this_01 = pUVar2.Transform, __this_01 != null)) {
				__this_01.rotation = (Quaternion)this._targetRotation;
				return;
			}
		}
	label_05bd3841: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004169")]
	[Address(RVA = "0x5AD0930", Offset = "0x5ACF930", VA = "0x5AD0930")]
	private void FixedUpdateUseables()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$FixedUpdateUseables): clean
		BaseUseable pCVar1;
		HookUseable pCVar2;

		if (this.FinishSetup == false) {
			return;
		}
		pCVar1 = this.Weapon;
		if (pCVar1 != null) {
			pCVar1.OnFixedUpdate();
			pCVar2 = this.HookLeft;
			if (pCVar2 != null) {
				pCVar2.OnFixedUpdate();
				pCVar2 = this.HookRight;
				if (pCVar2 != null) {
					pCVar2.OnFixedUpdate();
					pCVar1 = this.Special;
					if (pCVar1 == null) {
						return;
					}
					pCVar1.OnFixedUpdate();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600416A")]
	[Address(RVA = "0x5AD06D0", Offset = "0x5ACF6D0", VA = "0x5AD06D0")]
	public void FixedUpdateLookTitan()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$FixedUpdateLookTitan): clean
		BaseCamera pCVar1;
		Camera __this_00;
		RaycastHit[] pUVar2;
		BaseTitan pCVar3;
		TitanColliderToggler __this_01;
		Ray ray;
		bool bVar4;
		int iVar5;
		uint uVar6;
		Collider __this_02;
		TitanProjectileDetection x;
		ulong uVar7;
		long lVar8;
		Vector3 pos;
		Ray local_48;

		pCVar1 = SceneLoader.CurrentCamera;
		if (pCVar1 != null) {
			__this_00 = pCVar1.Camera;
			pos = CursorManager.GetInGameMousePosition();
			if (__this_00 != null) {
				local_48 = __this_00.ScreenPointToRay(pos);
				pUVar2 = Human._raycastHits;
				iVar5 = (Human.TitanDetectionMask).value;
				ray.m_Origin.z = local_48.m_Origin.z;
				ray.m_Direction.x = local_48.m_Direction.x;
				ray.m_Origin.x = local_48.m_Origin.x;
				ray.m_Origin.y = local_48.m_Origin.y;
				ray.m_Direction.y = local_48.m_Direction.y;
				ray.m_Direction.z = local_48.m_Direction.z;
				iVar5 = RaycastHelper.SortedRaycast(ray, pUVar2, 200.0, iVar5);
				uVar6 = Math.Min(iVar5, 3);
				if (0 < (int)uVar6) {
					lVar8 = 0x20;
					uVar7 = 0;
					do {
						pUVar2 = Human._raycastHits;
						if (pUVar2 == null) goto label_05bd091f;
						if ((uint)pUVar2.Length <= uVar7) {
							throw new IndexOutOfRangeException();
						}
						__this_02 = (((long)pUVar2.m_Items + lVar8 + -0x20)).collider;
						if (__this_02 == null) goto label_05bd091f;
						x = __this_02.GetComponent<TitanProjectileDetection>();
						bVar4 = ((Object)x != null);
						if (bVar4) {
							if (((x == null) ||(pCVar3 = x.Owner, pCVar3 == null)) ||(__this_01 = pCVar3.TitanColliderToggler, __this_01 == null)) goto label_05bd091f;
							__this_01.RegisterLook();
						}
						uVar7 = uVar7 + 1;
						lVar8 = lVar8 + 0x2c;
					} while (uVar6 != uVar7);
				}
				return;
			}
		}
	label_05bd091f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600416B")]
	[Address(RVA = "0x5AD3850", Offset = "0x5AD2850", VA = "0x5AD3850")]
	private void FixedUpdateClippingCheck()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$FixedUpdateClippingCheck): 149 lines keep C-only constructs
		ulong puVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		uint uVar10;
		uint uVar11;
		uint uVar12;
		uint uVar13;
		uint uVar14;
		BaseComponentCache pUVar15;
		Rigidbody pUVar16;
		Vector2 UVar17;
		ulong uVar18;
		byte[] auVar19 = new byte[16];
		byte[] auVar20 = new byte[16];
		uint uVar21;
		uint uVar22;
		ulong uVar23;
		bool bVar24;
		bool bVar25;
		int layerMask;
		uint uVar26;
		UnityEngine_Vector3_StaticFields pUVar27;
		Collider pUVar28;
		CustomLogicCollisionHandler __this_00;
		CapsuleCollider other;
		long lVar29;
		ulong uVar30;
		RaycastHit[] pUVar31;
		float fVar32;
		float extraout_XMM0_Db;
		uint uVar33;
		uint extraout_XMM0_Db_00;
		uint extraout_XMM0_Db_01;
		uint extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float extraout_XMM0_Dd_01;
		uint extraout_XMM0_Dd_02;
		float fVar34;
		float fVar35;
		float fVar38;
		float fVar39;
		float fVar40;
		byte[] auVar36 = new byte[16];
		byte[] auVar37 = new byte[16];
		float fVar41;
		float fVar42;
		float fVar43;
		Vector3 UVar44;
		Vector3 origin;
		Vector3 value;
		float local_120;
		float local_f4;
		byte[] local_f0 = new byte[96];
		byte[] auStack_90 = new byte[16];
		float fStack_80;
		float local_7c;
		float fStack_78;
		float fStack_74;
		EntityId UStack_70;
		RaycastHit local_68;

		if (Il2CppMethodInitialized_07547588 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider) ;
			Il2CppMethodInitialized_07547588 = true;
		}
		local_68.m_UV.x = 0.0;
		local_68.m_UV.y = 0.0;
		local_68.m_Collider.m_Data = (EntityId)0;
		local_68.m_Normal.y = 0.0;
		local_68.m_Normal.z = 0.0;
		local_68.m_FaceID = 0;
		local_68.m_Distance = 0.0;
		local_68.m_Point.x = 0.0;
		local_68.m_Point.y = 0.0;
		local_68.m_Point.z = 0.0;
		local_68.m_Normal.x = 0.0;
		fStack_78 = 0.0;
		fStack_74 = 0.0;
		UStack_70.m_Data = 0;
		auStack_90._8_4_ = 0.0;
		auStack_90._12_4_ = 0.0;
		fStack_80 = 0.0;
		local_7c = 0.0;
		local_f0._88_4_ = 0.0;
		local_f0._92_4_ = 0.0;
		auStack_90._0_4_ = 0.0;
		auStack_90._4_4_ = 0.0;
		pUVar15 = this.Cache;
		if ((pUVar15 == null) ||(pUVar16 = pUVar15.Rigidbody, pUVar16 == null)) goto label_05bd433f;
		UVar44 = pUVar16.position;
		local_f4 = UVar44.z;
		local_f0._64_4_ = extraout_XMM0_Dc;
		local_f0._56_8_ = UVar44._0_8_;
		local_f0._68_4_ = extraout_XMM0_Dd;
		fVar32 = this._lastVelocity.x;
		uVar2 = this._lastVelocity.y;
		uVar8 = this._lastVelocity.z;
		fVar32 = (float)uVar8 * (float)uVar8 + fVar32 * fVar32 + (float)uVar2 * (float)uVar2;
		if (fVar32 < 0.0) {
			fVar32 = sqrtf(fVar32);
		}
		else {
			fVar32 = SQRT(fVar32);
		}
		if (fVar32 <= 100.0) goto label_05bd4142;
		fVar32 = this._lastVelocity.x;
		fVar41 = this._lastVelocity.y;
		fVar34 = this._lastVelocity.z;
		local_f0._20_4_ = 0.0;
		local_f0._16_4_ = 0.0;
		local_f0._12_4_ = 0.0;
		local_f0._8_4_ = fVar34 * fVar34 + fVar41 * fVar41 + fVar32 * fVar32;
		if ((float)local_f0._8_4_ < 0.0) {
			local_f0._8_4_ = sqrtf((float)local_f0._8_4_);
			local_f0._12_4_ = extraout_XMM0_Db;
			local_f0._16_4_ = extraout_XMM0_Dc_00;
			local_f0._20_4_ = extraout_XMM0_Dd_00;
		}
		else {
			local_f0._8_4_ = SQRT((float)local_f0._8_4_);
		}
		local_f0._24_4_ = this._lastPosition.x;
		local_f0._28_4_ = this._lastPosition.y;
		local_120 = this._lastPosition.z;
		local_f0._32_4_ = 0.0;
		local_f0._36_4_ = 0.0;
		pUVar15 = this.Cache;
		if ((pUVar15 == null) ||(pUVar16 = pUVar15.Rigidbody, pUVar16 == null)) goto label_05bd433f;
		pUVar27 = typeof(Vector3).static_fields;
		uVar3 = (pUVar27.upVector).x;
		uVar9 = (pUVar27.upVector).y;
		fVar32 = (pUVar27.upVector).z;
		local_f0._40_4_ = (float)uVar3 * (float)0x3f333333;
		local_f0._44_4_ = (float)uVar9 * (float)0x3f333333;
		local_f0._48_4_ = 0.0;
		local_f0._52_4_ = 0.0;
		UVar44 = pUVar16.position;
		local_f0._24_4_ = (float)local_f0._24_4_ + (float)local_f0._40_4_;
		local_f0._28_4_ = (float)local_f0._28_4_ + (float)local_f0._44_4_;
		local_f0._32_4_ = (float)local_f0._32_4_ + (float)local_f0._48_4_;
		local_f0._36_4_ = (float)local_f0._36_4_ + (float)local_f0._52_4_;
		local_120 = local_120 + fVar32 * 0.7;
		pUVar27 = typeof(Vector3).static_fields;
		uVar4 = (pUVar27.upVector).x;
		uVar10 = (pUVar27.upVector).y;
		fVar35 = UVar44.x + (float)uVar4 * (float)0x3f333333;
		fVar38 = UVar44.y + (float)uVar10 * (float)0x3f333333;
		fVar39 = extraout_XMM0_Dc_01 + 0.0;
		fVar40 = extraout_XMM0_Dd_01 + 0.0;
		fVar32 = UVar44.z + (pUVar27.upVector).z * 0.7;
		fVar41 = (float)local_f0._24_4_;
		fVar34 = (float)local_f0._28_4_;
		fVar42 = (float)local_f0._32_4_;
		fVar43 = (float)local_f0._36_4_;
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			fVar41 = (float)local_f0._24_4_;
			fVar34 = (float)local_f0._28_4_;
			fVar42 = (float)local_f0._32_4_;
			fVar43 = (float)local_f0._36_4_;
		}
		local_f0._40_4_ = local_120 - fVar32;
		local_f0._72_4_ = fVar41 - fVar35;
		local_f0._76_4_ = fVar34 - fVar38;
		local_f0._80_4_ = fVar42 - fVar39;
		local_f0._84_4_ = fVar43 - fVar40;
		local_f0._8_4_ = (float)local_f0._8_4_ * 1.1;
		fVar41 = (float)local_f0._40_4_ * (float)local_f0._40_4_ +(float)local_f0._76_4_ * (float)local_f0._76_4_ + (float)local_f0._72_4_ * (float)local_f0._72_4_;
		if (fVar41 < 0.0) {
			fVar34 = sqrtf(fVar41);
			if (fVar34 <= (float)local_f0._8_4_) goto label_05bd3c2a;
	label_05bd3d04: ;
			if (Il2CppMethodInitialized_0753e72d == false) {
				Il2CppMethodInitialized_0753e72d = true;
				local_f0._0_4_ = 0.0;
				local_f0._4_4_ = 0.0;
				if (Il2CppMethodInitialized_0753e729 != false) goto label_05bd3d27;
	label_05bd4210: ;
				local_f0._0_4_ = 0.0;
				local_f0._4_4_ = 0.0;
				Il2CppMethodInitialized_0753e729 = true;
				if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_05bd3d38;
	label_05bd4245: ;
				if (0.0 <= fVar41) goto label_05bd3d44;
	label_05bd4267: ;
				fVar41 = sqrtf(fVar41);
				auVar37._4_4_ = local_f0._76_4_;
				auVar37._0_4_ = local_f0._72_4_;
				auVar37._8_4_ = local_f0._80_4_;
				auVar37._12_4_ = local_f0._84_4_;
				uVar33 = extraout_XMM0_Db_01;
				if (fVar41 <= 1e-05) goto label_05bd3d66;
	label_05bd4295: ;
				fVar34 = (float)local_f0._40_4_ / fVar41;
				auVar20._4_4_ = fVar41;
				auVar20._0_4_ = fVar41;
				auVar20._8_4_ = uVar33;
				auVar20._12_4_ = uVar33;
				auVar37 = divps(auVar37, auVar20);
				local_f0._0_4_ = auVar37._0_4_;
				local_f0._4_4_ = auVar37._4_4_;
				pUVar27 = (UnityEngine_Vector3_StaticFields)local_f0;
			}
			else {
				local_f0._0_4_ = 0.0;
				local_f0._4_4_ = 0.0;
				if (Il2CppMethodInitialized_0753e729 == false) goto label_05bd4210;
	label_05bd3d27: ;
				local_f0._0_4_ = 0.0;
				local_f0._4_4_ = 0.0;
				if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_05bd4245;
	label_05bd3d38: ;
				if (fVar41 < 0.0) goto label_05bd4267;
	label_05bd3d44: ;
				uVar33 = 0;
				fVar41 = SQRT(fVar41);
				auVar37._4_4_ = local_f0._76_4_;
				auVar37._0_4_ = local_f0._72_4_;
				auVar37._8_4_ = local_f0._80_4_;
				auVar37._12_4_ = local_f0._84_4_;
				if (1e-05 < fVar41) goto label_05bd4295;
	label_05bd3d66: ;
				pUVar27 = typeof(Vector3).static_fields;
				fVar34 = (pUVar27.zeroVector).z;
			}
			uVar7 = (pUVar27.zeroVector).x;
			uVar13 = (pUVar27.zeroVector).y;
			local_120 = fVar34 * (float)local_f0._8_4_ + fVar32;
			local_f0._28_4_ = (float)local_f0._8_4_ * (float)uVar13 + fVar38;
			local_f0._24_4_ = (float)local_f0._8_4_ * (float)uVar7 + fVar35;
			local_f0._36_4_ = (float)local_f0._8_4_ * 0.0 + fVar40;
			local_f0._32_4_ = (float)local_f0._8_4_ * 0.0 + fVar39;
			if (Il2CppMethodInitialized_0753e72d != false) goto label_05bd3c3d;
	label_05bd42dc: ;
			Il2CppMethodInitialized_0753e72d = true;
			local_f0._0_4_ = 0.0;
			local_f0._4_4_ = 0.0;
		}
		else {
			if ((float)local_f0._8_4_ < SQRT(fVar41)) goto label_05bd3d04;
	label_05bd3c2a: ;
			if (Il2CppMethodInitialized_0753e72d == false) goto label_05bd42dc;
	label_05bd3c3d: ;
			local_f0._0_4_ = 0.0;
			local_f0._4_4_ = 0.0;
		}
		local_f0._0_4_ = 0.0;
		local_f0._4_4_ = 0.0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			local_f0._0_4_ = 0.0;
			local_f0._4_4_ = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
		}
		auVar36._0_4_ = fVar35 - (float)local_f0._24_4_;
		auVar36._4_4_ = fVar38 - (float)local_f0._28_4_;
		auVar36._8_4_ = fVar39 - (float)local_f0._32_4_;
		auVar36._12_4_ = fVar40 - (float)local_f0._36_4_;
		fVar32 = fVar32 - local_120;
		local_f0._8_4_ = fVar32 * fVar32 + auVar36._4_4_ * auVar36._4_4_ + auVar36._0_4_ * auVar36._0_4_;
		if ((float)local_f0._8_4_ < 0.0) {
			fVar41 = sqrtf((float)local_f0._8_4_);
			uVar33 = extraout_XMM0_Db_00;
			if (fVar41 <= 1e-05) goto label_05bd3cc6;
	label_05bd3da5: ;
			fVar32 = fVar32 / fVar41;
			auVar19._4_4_ = fVar41;
			auVar19._0_4_ = fVar41;
			auVar19._8_4_ = uVar33;
			auVar19._12_4_ = uVar33;
			auVar37 = divps(auVar36, auVar19);
			local_f0._0_4_ = auVar37._0_4_;
			local_f0._4_4_ = auVar37._4_4_;
			pUVar27 = (UnityEngine_Vector3_StaticFields)local_f0;
		}
		else {
			uVar33 = 0;
			fVar41 = SQRT((float)local_f0._8_4_);
			if (1e-05 < fVar41) goto label_05bd3da5;
	label_05bd3cc6: ;
			pUVar27 = typeof(Vector3).static_fields;
			fVar32 = (pUVar27.zeroVector).z;
		}
		uVar5 = (pUVar27.zeroVector).x;
		uVar11 = (pUVar27.zeroVector).y;
		UVar44.y = (float)uVar11;
		UVar44.x = (float)uVar5;
		if ((typeof(Human)._2).cctor_finished_or_no_cctor == 0) {
			pUVar31 = Human._raycastHits;
			if (Il2CppMethodInitialized_0753e729 != false) goto label_05bd3df7;
	label_05bd41a8: ;
			Il2CppMethodInitialized_0753e729 = true;
			uVar14 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			pUVar31 = Human._raycastHits;
			if (Il2CppMethodInitialized_0753e729 == false) goto label_05bd41a8;
	label_05bd3df7: ;
			uVar14 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar14 == 0) {
		}
		if ((float)local_f0._8_4_ < 0.0) {
			local_f0._8_4_ = sqrtf((float)local_f0._8_4_);
		}
		else {
			local_f0._8_4_ = SQRT((float)local_f0._8_4_);
		}
		layerMask = (Human.ClipMask).value;
		origin.z = local_120;
		origin.x = (float)local_f0._24_4_;
		origin.y = (float)local_f0._28_4_;
		UVar44.z = fVar32;
		uVar26 = RaycastHelper.SortedRaycast(origin, UVar44, pUVar31, (float)local_f0._8_4_, layerMask);
		if (0 < (int)uVar26) {
			pUVar31 = Human._raycastHits;
			if (pUVar31 == null) {
	label_05bd433f: ;
				throw new NullReferenceException();
			}
			if ((int)pUVar31.Length == 0) {
	label_05bd4344: ;
				throw new IndexOutOfRangeException();
			}
			local_68.m_Point.x = pUVar31[0].m_Point.x;
			local_68.m_Point.y = pUVar31[0].m_Point.y;
			local_68._8_8_ = *(ulong)&pUVar31[0].m_Point.z;
			local_68.m_Normal.y = pUVar31[0].m_Normal.y;
			local_68.m_Normal.z = pUVar31[0].m_Normal.z;
			uVar21 = pUVar31[0].m_FaceID;
			uVar22 = pUVar31[0].m_Distance;
			UVar17 = pUVar31[0].m_UV;
			local_68.m_Collider.m_Data =(EntityId)pUVar31[0].m_Collider.m_Data;
			local_68.m_UV.x = UVar17.x;
			local_68.m_UV.y = UVar17.y;
			lVar29 = 0x20;
			uVar30 = 0;
			bVar24 = false;
			local_68.m_FaceID = uVar21;
			local_68.m_Distance = (float)uVar22;
			do {
				pUVar31 = Human._raycastHits;
				if (pUVar31 == null) goto label_05bd433f;
				if ((uint)pUVar31.Length <= uVar30) goto label_05bd4344;
				puVar1 = (ulong)((long)pUVar31.m_Items + lVar29 + -0x20);
				local_f0._88_8_ = *puVar1;
				auStack_90._0_8_ = puVar1[1];
				puVar1 = (ulong)((long)pUVar31.m_Items + lVar29 + -0x10);
				auStack_90._8_8_ = *puVar1;
				uVar23 = puVar1[1];
				uVar18 = *(ulong)((long)&pUVar31[0].m_Point.x + lVar29);
				UStack_70.m_Data = *(int)((long)&pUVar31[0].m_Point.z + lVar29);
				fStack_78 = (float)uVar18;
				fStack_74 = (float)((ulong)uVar18 >> 0x20);
				fStack_80 = (float)uVar23;
				local_7c = (float)((ulong)uVar23 >> 0x20);
				pUVar28 = ((local_f0 + 0x58)).collider;
				if (pUVar28 == null) goto label_05bd433f;
				bVar25 = pUVar28.isTrigger;
				if (bVar25) {
					pUVar28 = ((local_f0 + 0x58)).collider;
					if (pUVar28 == null) goto label_05bd433f;
					__this_00 = pUVar28.GetComponent<CustomLogicCollisionHandler>();
					bVar25 = ((Object)__this_00 != null);
					if (bVar25) {
						other = this.GetComponent<CapsuleCollider>();
						if (__this_00 == null) goto label_05bd433f;
						__this_00.OnTriggerEnter((Collider)other);
					}
				}
				else if (!bVar24) {
					local_68.m_UV.x = fStack_78;
					local_68.m_UV.y = fStack_74;
					local_68.m_Collider.m_Data =(EntityId)(EntityId)UStack_70.m_Data;
					local_68.m_Normal.y = (float)auStack_90._8_4_;
					local_68.m_Normal.z = (float)auStack_90._12_4_;
					local_68.m_FaceID = (uint32_t)fStack_80;
					local_68.m_Distance = local_7c;
					local_68.m_Point.x = (float)local_f0._88_4_;
					local_68.m_Point.y = (float)local_f0._92_4_;
					local_68.m_Point.z = (float)auStack_90._0_4_;
					local_68.m_Normal.x = (float)auStack_90._4_4_;
					bVar24 = true;
				}
				uVar30 = uVar30 + 1;
				lVar29 = lVar29 + 0x2c;
			} while (uVar26 != uVar30);
			if (bVar24) {
				UVar44 = local_68.point;
				local_f0._64_4_ = extraout_XMM0_Dc_02;
				local_f0._56_8_ = UVar44._0_8_;
				local_f0._68_4_ = extraout_XMM0_Dd_02;
				pUVar15 = this.Cache;
				if ((pUVar15 == null) ||(pUVar16 = pUVar15.Rigidbody, pUVar16 == null)) goto label_05bd433f;
				pUVar27 = typeof(Vector3).static_fields;
				uVar6 = (pUVar27.upVector).x;
				uVar12 = (pUVar27.upVector).y;
				value.x = (float)local_f0._56_4_ + (float)uVar6 * -0.7;
				value.y = (float)local_f0._60_4_ + (float)uVar12 * -0.7;
				value.z = UVar44.z + (pUVar27.upVector).z * -0.7;
				local_f0._60_4_ = value.y;
				local_f0._56_4_ = value.x;
				local_f0._64_4_ = (float)local_f0._64_4_ + 0.0;
				local_f0._68_4_ = (float)local_f0._68_4_ + 0.0;
				pUVar16.position = value;
				local_f4 = value.z;
			}
		}
	label_05bd4142: ;
		this._lastPosition.x = (float)local_f0._56_4_;
		this._lastPosition.y = (float)local_f0._60_4_;
		this._lastPosition.z = local_f4;
		this._lastVelocity.z = this._currentVelocity.z;
		fVar32 = this._currentVelocity.y;
		this._lastVelocity.x = this._currentVelocity.x;
		this._lastVelocity.y = fVar32;
		return;
	}

	[Token(Token = "0x600416C")]
	[Address(RVA = "0x5AD50D0", Offset = "0x5AD40D0", VA = "0x5AD50D0")]
	private void LateUpdateTilt()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$LateUpdateTilt): 53 lines keep C-only constructs
		float fVar1;
		float fVar2;
		uint uVar3;
		float fVar4;
		float fVar5;
		uint uVar6;
		uint uVar7;
		GeneralSettings pSVar8;
		FloatSetting pSVar9;
		HookUseable pCVar10;
		BaseCamera pCVar11;
		BaseComponentCache pUVar12;
		BaseComponentCache pUVar13;
		Transform pUVar14;
		Transform __this_00;
		Rigidbody __this_01;
		double dVar15;
		bool bVar16;
		UnityEngine_Vector3_StaticFields pUVar17;
		Il2CppClass pIVar18;
		float fVar19;
		float fVar20;
		float fVar21;
		float fVar22;
		float fVar23;
		float fVar24;
		uint uVar25;
		uint extraout_XMM0_Db;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dd;
		float fVar26;
		byte[] auVar27 = new byte[16];
		float fVar28;
		float fVar29;
		Quaternion UVar30;
		Quaternion UVar31;
		Vector3 UVar32;
		Vector3 UVar33;
		Vector3 euler;
		Vector3 UVar34;
		Vector3 euler_00;
		float local_10c;
		ulong local_108;
		ulong local_e8;
		float local_d8;
		float fStack_d4;
		byte[] local_c8 = new byte[8];
		float fStack_c0;
		float fStack_bc;
		float local_b8;
		float fStack_b4;
		float local_a8;
		Quaternion local_88;
		Quaternion local_70;
		float local_5c;
		Quaternion local_58;
		byte[] local_48 = new byte[16];
		Quaternion local_38;

		local_58 = (Quaternion)ZEXT816(0);
		pSVar8 = SettingsManager.GeneralSettings;
		if ((pSVar8 == null) ||(pSVar9 = pSVar8.CameraTiltStrength, pSVar9 == null)) goto label_05bd61b3;
		fVar23 = pSVar9._value;
		bVar16 = this.IsMainCharacter();
		if (!bVar16) {
			return;
		}
		fVar28 = 1.0;
		if (fVar23 <= 1.0) {
			fVar28 = fVar23;
		}
		fVar28 = (float)(-(uint)(0.0 <= fVar23) & (uint)fVar28);
		if (fVar28 <= 0.0) {
			return;
		}
		pUVar17 = typeof(Vector3).static_fields;
		local_e8._0_4_ = (pUVar17.zeroVector).x;
		local_e8._4_4_ = (pUVar17.zeroVector).y;
		local_d8 = (pUVar17.zeroVector).z;
		local_c8 = (byte[])local_e8;
		local_a8 = local_d8;
		if (this._launchLeft != false) {
			pCVar10 = this.HookLeft;
			if (pCVar10 == null) goto label_05bd61b3;
			bVar16 = pCVar10.IsHooked();
			if (bVar16) {
				pCVar10 = this.HookLeft;
				if (pCVar10 == null) goto label_05bd61b3;
				UVar32 = pCVar10.GetHookPosition();
				local_a8 = UVar32.z;
				local_c8 = UVar32._0_8_;
			}
		}
		if (this._launchRight != false) {
			pCVar10 = this.HookRight;
			if (pCVar10 == null) goto label_05bd61b3;
			bVar16 = pCVar10.IsHooked();
			if (bVar16) {
				pCVar10 = this.HookRight;
				if (pCVar10 == null) goto label_05bd61b3;
				UVar32 = pCVar10.GetHookPosition();
				local_d8 = UVar32.z;
				local_e8 = UVar32._0_8_;
			}
		}
		pUVar17 = typeof(Vector3).static_fields;
		local_108._0_4_ = (pUVar17.zeroVector).x;
		local_108._4_4_ = (pUVar17.zeroVector).y;
		fVar23 = (pUVar17.zeroVector).z;
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar7 == 0) {
		}
		fVar19 = local_a8 * local_a8 +(float)local_c8._4_4_ * (float)local_c8._4_4_ + (float)local_c8._0_4_ * (float)local_c8._0_4_;
		if (fVar19 < 0.0) {
			fVar1 = sqrtf(fVar19);
			if ((fVar1 != 0.0) || (NAN(fVar1))) goto label_05bd5354;
	label_05bd53ad: ;
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar7 == 0) {
			}
			fVar1 = local_d8 * local_d8 + local_e8._4_4_ * local_e8._4_4_ + (float)local_e8 * (float)local_e8;
			if (0.0 <= fVar1) {
				fVar20 = SQRT(fVar1);
				if (fVar20 == 0.0) goto joined_r0x05bd5405;
	label_05bd5418: ;
				if (Il2CppMethodInitialized_0753e729 == false) {
					Il2CppMethodInitialized_0753e729 = true;
					if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_05bd5616;
	label_05bd5435: ;
					if (0.0 <= fVar19) goto label_05bd5447;
	label_05bd562d: ;
					fVar20 = sqrtf(fVar19);
				}
				else {
					if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_05bd5435;
	label_05bd5616: ;
					if (fVar19 < 0.0) goto label_05bd562d;
	label_05bd5447: ;
					fVar20 = SQRT(fVar19);
				}
				if ((fVar20 == 0.0) && (!NAN(fVar20))) goto label_05bd56c7;
			}
			else {
				fVar20 = sqrtf(fVar1);
				if (fVar20 != 0.0) goto label_05bd5418;
	joined_r0x05bd5405: ;
				if (NAN(fVar20)) goto label_05bd5418;
			}
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_05bd5567;
	label_05bd5473: ;
				if (0.0 <= fVar19) goto label_05bd5485;
	label_05bd557e: ;
				fVar19 = sqrtf(fVar19);
				if (fVar19 == 0.0) goto joined_r0x05bd558f;
	label_05bd5494: ;
				if (Il2CppMethodInitialized_0753e729 == false) {
					Il2CppMethodInitialized_0753e729 = true;
					if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) goto label_05bd5674;
	label_05bd54b1: ;
					if (0.0 <= fVar1) goto label_05bd54c6;
	label_05bd568e: ;
					fVar1 = sqrtf(fVar1);
				}
				else {
					if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_05bd54b1;
	label_05bd5674: ;
					if (fVar1 < 0.0) goto label_05bd568e;
	label_05bd54c6: ;
					fVar1 = SQRT(fVar1);
				}
				if ((fVar1 != 0.0) || (NAN(fVar1))) {
					local_e8._0_4_ = ((float)local_c8._0_4_ + (float)local_e8) * 0.5;
					local_e8._4_4_ = ((float)local_c8._4_4_ + local_e8._4_4_) * 0.5;
					local_d8 = (local_a8 + local_d8) * 0.5;
					goto label_05bd56c7;
				}
			}
			else {
				if ((typeof(Math)._2).cctor_finished_or_no_cctor != 0) goto label_05bd5473;
	label_05bd5567: ;
				if (fVar19 < 0.0) goto label_05bd557e;
	label_05bd5485: ;
				fVar19 = SQRT(fVar19);
				if (fVar19 != 0.0) goto label_05bd5494;
	joined_r0x05bd558f: ;
				if (NAN(fVar19)) goto label_05bd5494;
			}
		}
		else {
			if ((SQRT(fVar19) == 0.0) && (!NAN(SQRT(fVar19)))) goto label_05bd53ad;
	label_05bd5354: ;
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar7 == 0) {
			}
			fVar1 = local_d8 * local_d8 + local_e8._4_4_ * local_e8._4_4_ + (float)local_e8 * (float)local_e8;
			if (fVar1 < 0.0) {
				fVar1 = sqrtf(fVar1);
				if (fVar1 == 0.0) goto joined_r0x05bd55b0;
				goto label_05bd53ad;
			}
			fVar1 = SQRT(fVar1);
			if (fVar1 != 0.0) goto label_05bd53ad;
	joined_r0x05bd55b0: ;
			if (NAN(fVar1)) goto label_05bd53ad;
			local_d8 = local_a8;
			local_e8._0_4_ = (float)local_c8._0_4_;
			local_e8._4_4_ = (float)local_c8._4_4_;
	label_05bd56c7: ;
			local_108 = CONCAT44(local_e8._4_4_, (float)local_e8);
			fVar23 = local_d8;
		}
		pCVar11 = SceneLoader.CurrentCamera;
		if ((((pCVar11 == null) ||(pUVar12 = pCVar11.Cache, pUVar12 == null)) ||(pUVar13 = this.Cache, pUVar13 == null)) ||(pUVar14 = pUVar13.Transform, pUVar14 == null)) {
	label_05bd61b3: ;
			throw new NullReferenceException();
		}
		__this_00 = pUVar12.Transform;
		UVar32 = pUVar14.position;
		if (__this_00 == null) goto label_05bd61b3;
		UVar33 = __this_00.up;
		fVar19 = UVar33.z;
		fVar1 = UVar33.x;
		fVar20 = UVar33.y;
		fVar4 = fVar19 * fVar19 + fVar20 * fVar20 + fVar1 * fVar1;
		if (Mathf.Epsilon <= fVar4) {
			local_c8._0_4_ = UVar32.x;
			local_c8._4_4_ = UVar32.y;
			fVar4 = ((fVar23 - UVar32.z) * fVar19 +(local_108._4_4_ - (float)local_c8._4_4_) * fVar20 +((float)local_108 - (float)local_c8._0_4_) * fVar1) / fVar4;
			fVar19 = fVar19 * fVar4;
			fVar1 = fVar4 * fVar1;
			fVar4 = fVar4 * fVar20;
		}
		else {
			pUVar17 = typeof(Vector3).static_fields;
			fVar1 = (pUVar17.zeroVector).x;
			fVar4 = (pUVar17.zeroVector).y;
			fVar19 = (pUVar17.zeroVector).z;
		}
		pUVar12 = this.Cache;
		if ((pUVar12 == null) ||(pUVar14 = pUVar12.Transform, pUVar14 == null)) goto label_05bd61b3;
		UVar32 = pUVar14.position;
		UVar33 = __this_00.right;
		fVar20 = UVar33.z;
		fVar2 = UVar33.x;
		fVar5 = UVar33.y;
		fStack_bc = fVar20 * fVar20 + fVar5 * fVar5 + fVar2 * fVar2;
		if (Mathf.Epsilon <= fStack_bc) {
			local_b8 = UVar32.x;
			fStack_b4 = UVar32.y;
			fStack_bc = ((fVar23 - UVar32.z) * fVar20 +(local_108._4_4_ - fStack_b4) * fVar5 + ((float)local_108 - local_b8) * fVar2) / fStack_bc;
			fVar20 = fVar20 * fStack_bc;
			fVar2 = fStack_bc * fVar2;
			fVar5 = fStack_bc * fVar5;
			fStack_c0 = fStack_bc * extraout_XMM0_Dc;
			fStack_bc = fStack_bc * extraout_XMM0_Dd;
		}
		else {
			pUVar17 = typeof(Vector3).static_fields;
			fVar2 = (pUVar17.zeroVector).x;
			fVar5 = (pUVar17.zeroVector).y;
			fStack_bc = 0.0;
			fVar20 = (pUVar17.zeroVector).z;
		}
		local_c8._4_4_ = fVar5;
		local_c8._0_4_ = fVar2;
		if (Il2CppMethodInitialized_0753e729 == false) {
			Il2CppMethodInitialized_0753e729 = true;
			uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar7 == 0) {
		}
		fVar21 = fVar23 * fVar23 + local_108._4_4_ * local_108._4_4_ + (float)local_108 * (float)local_108;
		if (fVar21 < 0.0) {
			fVar21 = sqrtf(fVar21);
		}
		else {
			fVar21 = SQRT(fVar21);
		}
		if (fVar21 <= 0.0) {
			local_58 = (Quaternion)__this_00.rotation ;
			UVar32 = Quaternion.Internal_ToEulerRad(ref local_58);
			UVar33.x = UVar32.x * 57.29578;
			UVar33.y = UVar32.y * 57.29578;
			UVar33.z = UVar32.z * 57.29578;
			UVar32 = Quaternion.Internal_MakePositive(UVar33);
			local_58 = (Quaternion)__this_00.rotation ;
			UVar33 = Quaternion.Internal_ToEulerRad(ref local_58);
			euler.x = UVar33.x * 57.29578;
			euler.y = UVar33.y * 57.29578;
			euler.z = UVar33.z * 57.29578;
			UVar33 = Quaternion.Internal_MakePositive(euler);
			local_88.x = UVar32.x;
			local_70.y = UVar33.y * 0.017453292;
			local_70.x = local_88.x * 0.017453292;
			local_70._8_8_ = (ulong)(uint)local_70.w << 0x20;
			goto label_05bd60cc;
		}
		pUVar12 = this.Cache;
		if ((pUVar12 == null) ||(pUVar14 = pUVar12.Transform, pUVar14 == null)) goto label_05bd61b3;
		UVar32 = pUVar14.position;
		pUVar12 = this.Cache;
		if ((pUVar12 == null) ||(__this_01 = pUVar12.Rigidbody, __this_01 == null)) goto label_05bd61b3;
		local_108._0_4_ = (float)local_108 - UVar32.x;
		local_108._4_4_ = local_108._4_4_ - UVar32.y;
		fVar23 = fVar23 - UVar32.z;
		UVar32 = __this_01.linearVelocity;
		fVar26 = UVar32.z;
		fVar21 = UVar32.x;
		fVar24 = UVar32.y;
		fVar29 = fVar23 * fVar23 + local_108._4_4_ * local_108._4_4_ + (float)local_108 * (float)local_108;
		fVar22 = fVar26 * fVar26 + fVar24 * fVar24 + fVar21 * fVar21;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			local_48._0_4_ = fVar29;
			fVar29 = (float)local_48._0_4_ * fVar22;
			if (fVar29 < 0.0) goto label_05bd5bc4;
	label_05bd5b37: ;
			fVar29 = SQRT(fVar29);
			pIVar18 = typeof(Math);
		}
		else {
			fVar29 = fVar29 * fVar22;
			if (0.0 <= fVar29) goto label_05bd5b37;
	label_05bd5bc4: ;
			fVar29 = sqrtf(fVar29);
			pIVar18 = typeof(Math);
		}
		auVar27 = ZEXT816(0);
		typeof(Math) = (Math)pIVar18;
		if (1e-15 <= fVar29) {
			fVar29 = (fVar23 * fVar26 + local_108._4_4_ * fVar24 + (float)local_108 * fVar21) / fVar29;
			fVar23 = 1.0;
			if (fVar29 <= 1.0) {
				fVar23 = fVar29;
			}
			dVar15 = acos((double)(float)(~-(uint)(-1.0 <= fVar29) & 0xbf800000 |(uint)fVar23 & -(uint)(-1.0 <= fVar29)), (MethodInfo)pIVar18);
			auVar27 = ZEXT416((uint)((float)dVar15 * 57.29578 * 0.005));
		}
		local_48 = auVar27;
		UVar32 = __this_00.right;
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			local_70.x = 0.0;
			local_70.y = 0.0;
			if (Il2CppMethodInitialized_0753e729 == false) goto label_05bd6186;
	label_05bd5cb1: ;
			local_70.x = 0.0;
			local_70.y = 0.0;
			uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			local_70.x = 0.0;
			local_70.y = 0.0;
			if (Il2CppMethodInitialized_0753e729 != false) goto label_05bd5cb1;
	label_05bd6186: ;
			local_70.x = 0.0;
			local_70.y = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
			uVar7 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar7 == 0) {
		}
		uVar25 = 0;
		fVar23 = fVar20 * fVar20 + fVar5 * fVar5 + fVar2 * fVar2;
		if (fVar23 < 0.0) {
			fVar23 = sqrtf(fVar23);
			uVar25 = extraout_XMM0_Db;
			if (1e-05 < fVar23) goto label_05bd5d3e;
	label_05bd5d08: ;
			pUVar17 = typeof(Vector3).static_fields;
			fVar21 = (pUVar17.zeroVector).z;
		}
		else {
			fVar23 = SQRT(fVar23);
			if (fVar23 <= 1e-05) goto label_05bd5d08;
	label_05bd5d3e: ;
			fVar21 = fVar20 / fVar23;
			auVar27._4_4_ = fVar23;
			auVar27._0_4_ = fVar23;
			auVar27._8_4_ = uVar25;
			auVar27._12_4_ = uVar25;
			auVar27 = divps(_local_c8, auVar27);
			local_70.x = auVar27._0_4_;
			local_70.y = auVar27._4_4_;
			pUVar17 = (UnityEngine_Vector3_StaticFields)&local_70;
		}
		fVar2 = fVar2 + fVar1;
		fVar5 = fVar5 + fVar4;
		fVar20 = fVar20 + fVar19;
		uVar3 = (pUVar17.zeroVector).x;
		uVar6 = (pUVar17.zeroVector).y;
		fVar23 = fVar20 * fVar20 + fVar5 * fVar5 + fVar2 * fVar2;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			local_5c = fVar23;
			fVar23 = local_5c;
		}
		fVar23 = (fVar19 * fVar19 + fVar4 * fVar4 + fVar1 * fVar1) * fVar23;
		local_10c = 0.0;
		if (fVar23 < 0.0) {
			fVar23 = sqrtf(fVar23);
			pIVar18 = typeof(Math);
		}
		else {
			fVar23 = SQRT(fVar23);
			pIVar18 = typeof(Math);
		}
		typeof(Math) = (Math)pIVar18;
		if (1e-15 <= fVar23) {
			fVar23 = (fVar19 * fVar20 + fVar4 * fVar5 + fVar1 * fVar2) / fVar23;
			fVar19 = 1.0;
			if (fVar23 <= 1.0) {
				fVar19 = fVar23;
			}
			dVar15 = acos((double)(float)(~-(uint)(-1.0 <= fVar23) & 0xbf800000 |(uint)fVar19 & -(uint)(-1.0 <= fVar23)), (MethodInfo)pIVar18);
			local_10c = (float)dVar15 * 57.29578;
		}
		local_b8 = UVar32.x;
		fStack_b4 = UVar32.y;
		local_58 = (Quaternion)__this_00.rotation;
		UVar33 = Quaternion.Internal_ToEulerRad(ref local_58);
		UVar34.x = UVar33.x * 57.29578;
		UVar34.y = UVar33.y * 57.29578;
		UVar34.z = UVar33.z * 57.29578;
		UVar33 = Quaternion.Internal_MakePositive(UVar34);
		local_58 = (Quaternion)__this_00.rotation;
		UVar34 = Quaternion.Internal_ToEulerRad(ref local_58);
		euler_00.x = UVar34.x * 57.29578;
		euler_00.y = UVar34.y * 57.29578;
		euler_00.z = UVar34.z * 57.29578;
		UVar34 = Quaternion.Internal_MakePositive(euler_00);
		fVar21 = UVar32.z + fVar21;
		fVar23 = (fStack_b4 + (float)uVar6) * (fStack_b4 + (float)uVar6) +(local_b8 + (float)uVar3) * (local_b8 + (float)uVar3) + fVar21 * fVar21;
		if (fVar23 < 0.0) {
			local_48._0_4_ = (float)local_48._0_4_ * local_10c;
			fVar23 = sqrtf(fVar23);
			fVar19 = (float)local_48._0_4_;
		}
		else {
			fVar23 = SQRT(fVar23);
			fVar19 = (float)local_48._0_4_ * local_10c;
		}
		fVar28 = fVar28 * (float)(~-(uint)(fVar23 < 1.0) & (uint)-fVar19 | (uint)fVar19 & -(uint)(fVar23 < 1.0));
		local_e8._0_4_ = UVar33.x;
		fStack_d4 = UVar34.y;
		local_70.x = (float)local_e8 * 0.017453292;
		local_70.y = fStack_d4 * 0.017453292;
		local_70.z = (fVar28 + fVar28) * 0.017453292;
	label_05bd60cc: ;
		UVar30 = Quaternion.Internal_FromEulerRad(ref local_70) ;
		UVar31 = __this_00.rotation;
		fVar23 = Time.deltaTime;
		local_88.x = UVar30.x;
		local_88.y = UVar30.y;
		local_38.x = local_88.x;
		local_38.y = local_88.y;
		local_88.z = UVar30.z;
		local_88.w = UVar30.w;
		local_38.z = local_88.z;
		local_38.w = local_88.w;
		local_70._0_8_ = UVar31._0_8_;
		local_70._8_8_ = UVar31._8_8_;
		UVar30 = Quaternion.Internal_Lerp(ref local_70, ref local_38, fVar23 + fVar23);
		__this_00.rotation = UVar30;
		return;
	}

	[Token(Token = "0x600416D")]
	[Address(RVA = "0x5AD62C0", Offset = "0x5AD52C0", VA = "0x5AD62C0")]
	private void LateUpdateGun()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$LateUpdateGun): 50 lines keep C-only constructs
		sbyte cVar1;
		HumanSetup pCVar2;
		HumanComponentCache pCVar3;
		BaseComponentCache pUVar4;
		Transform pUVar5;
		HookUseable pCVar6;
		bool bVar7;
		UnityEngine_Vector3_StaticFields pUVar8;
		float fVar10;
		ulong uVar11;
		ulong extraout_XMM0_Qb_00;
		byte[] extraout_var = new byte[12];
		byte[] auVar12 = new byte[16];
		uint uVar15;
		byte[] auVar14 = new byte[16];
		byte[] auVar13 = new byte[16];
		byte[] auVar17 = new byte[12];
		float fVar16;
		byte[] auVar18 = new byte[16];
		byte[] auVar19 = new byte[16];
		Quaternion UVar20;
		Vector3 UVar21;
		Vector3 euler;
		Vector3 UVar22;
		float local_68;
		Vector3 local_58;
		byte[] local_48 = new byte[16];
		float local_38;
		float fStack_34;
		float fStack_30;
		float fStack_2c;
		Quaternion local_28;

		local_28 = (Quaternion)ZEXT816(0);
		pCVar2 = this.Setup;
		if (pCVar2 == null) goto label_05bd67aa;
		if ((pCVar2.Weapon | 2U) != 3) {
			return;
		}
		if (this.Grounded == false) {
			pCVar3 = this.HumanCache;
			if (pCVar3 == null) goto label_05bd67aa;
			pUVar5 = pCVar3.HandL;
			local_58.x = 0.0;
			local_58.y = 0.0;
			local_58.z = 0.0;
			UVar20 = Quaternion.Internal_FromEulerRad(ref local_58);
			if (pUVar5 == null) goto label_05bd67aa;
			pUVar5.localRotation = UVar20;
			pCVar3 = this.HumanCache;
			if (pCVar3 == null) goto label_05bd67aa;
			pUVar5 = pCVar3.HandR;
			local_58.x = 0.0;
			local_58.y = 0.0;
			local_58.z = 0.0;
			UVar20 = Quaternion.Internal_FromEulerRad(ref local_58);
			if (pUVar5 == null) goto label_05bd67aa;
			pUVar5.localRotation = UVar20;
			cVar1 = this._gunArmAim;
		}
		else {
			cVar1 = this._gunArmAim;
		}
		if (cVar1 != false) {
			pCVar2 = this.Setup;
			if (pCVar2 == null) goto label_05bd67aa;
			if (pCVar2.Weapon != 1) goto label_05bd673e;
			UVar22 = this.GetAimPoint();
			pUVar4 = this.Cache;
			if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05bd67aa;
			UVar21 = pUVar5.position;
			auVar19._0_8_ = UVar21._0_8_;
			auVar19._8_8_ = extraout_XMM0_Qb_00;
			if (Il2CppMethodInitialized_0753e72d == false) {
				local_48 = auVar19;
				Il2CppMethodInitialized_0753e72d = true;
				local_58.x = 0.0;
				local_58.y = 0.0;
				auVar19 = local_48;
				auVar18 = local_48;
			}
			else {
				local_58.x = 0.0;
				local_58.y = 0.0;
				auVar18 = local_48;
			}
			local_48 = auVar19;
			local_58.x = 0.0;
			local_58.y = 0.0;
			auVar19 = local_48;
			if (Il2CppMethodInitialized_0753e729 == false) {
				local_58.x = 0.0;
				local_58.y = 0.0;
				Il2CppMethodInitialized_0753e729 = true;
				auVar19 = local_48;
				auVar18 = local_48;
			}
			local_48 = auVar18;
			auVar18._0_4_ = local_38 - auVar19._0_4_;
			auVar18._4_4_ = fStack_34 - auVar19._4_4_;
			auVar18._8_4_ = fStack_30 - auVar19._8_4_;
			auVar18._12_4_ = fStack_2c - auVar19._12_4_;
			fVar16 = UVar22.z - UVar21.z;
			if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
				local_48 = auVar18;
				auVar18 = local_48;
			}
			fVar10 = fVar16 * fVar16 + auVar18._4_4_ * auVar18._4_4_ + auVar18._0_4_ * auVar18._0_4_;
			if (fVar10 < 0.0) {
				local_48 = auVar18;
				auVar12._0_4_ = sqrtf(fVar10);
				auVar12._4_12_ = extraout_var;
				uVar11 = auVar12._0_8_;
				auVar18 = local_48;
				if (1e-05 < auVar12._0_4_) goto label_05bd64d3;
	label_05bd6497: ;
				pUVar8 = typeof(Vector3).static_fields;
				fVar16 = (pUVar8.zeroVector).z;
			}
			else {
				uVar11 = (ulong)(uint)SQRT(fVar10);
				if (SQRT(fVar10) <= 1e-05) goto label_05bd6497;
	label_05bd64d3: ;
				auVar13._0_4_ = (float)uVar11;
				fVar16 = fVar16 / auVar13._0_4_;
				uVar15 = (undefined4)(uVar11 >> 0x20);
				auVar14._8_4_ = uVar15;
				auVar14._0_8_ = uVar11;
				auVar14._12_4_ = uVar15;
				auVar13._8_8_ = auVar14._8_8_;
				auVar13._4_4_ = auVar13._0_4_;
				auVar19 = divps(auVar18, auVar13);
				local_58.x = auVar19._0_4_;
				local_58.y = auVar19._4_4_;
				pUVar8 = (UnityEngine_Vector3_StaticFields)&local_58;
			}
			fVar16 = atan2f(fVar16, (pUVar8.zeroVector).x);
			pUVar4 = this.Cache;
			if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05bd67aa;
			local_28 = (Quaternion)pUVar5.rotation;
			UVar21 = Quaternion.Internal_ToEulerRad(ref local_28);
			euler.x = UVar21.x * 57.29578;
			euler.y = UVar21.y * 57.29578;
			euler.z = UVar21.z * 57.29578;
			UVar21 = Quaternion.Internal_MakePositive(euler);
			fVar16 = UVar21.y + -90.0 + fVar16 * 57.29578;
			fVar10 = floorf(fVar16 / 360.0);
			pCVar6 = this.HookLeft;
			if (pCVar6 == null) goto label_05bd67aa;
			fVar16 = fVar16 + fVar10 * -360.0;
			auVar17 = ZEXT812(0x43b40000);
			if (fVar16 <= auVar17._0_4_) {
				auVar17._4_8_ = auVar17._4_8_;
				auVar17._0_4_ = fVar16;
			}
			fVar16 = (float)(-(uint)(0.0 <= fVar16) & auVar17._0_4_);
			local_68 = (float)(~-(uint)(180.0 < fVar16) & (uint)fVar16 |(uint)(fVar16 + -360.0) & -(uint)(180.0 < fVar16));
			bVar7 = pCVar6.IsHooked();
			if (bVar7) {
	label_05bd6600: ;
				pCVar6 = this.HookLeft;
				if (pCVar6 == null) goto label_05bd67aa;
				bVar7 = pCVar6.IsHooked();
				if (((90.0 <= local_68) || (local_68 <= -40.0)) || (bVar7)) {
					pCVar6 = this.HookRight;
					if (pCVar6 == null) goto label_05bd67aa;
					bVar7 = pCVar6.IsHooked();
					if (((-90.0 < local_68) && (local_68 < 40.0)) && (!bVar7)) goto label_05bd672b;
				}
				else {
	label_05bd6708: ;
					UVar22.x = local_38;
					UVar22.y = fStack_34;
					this.LeftArmAim(UVar22);
				}
			}
			else {
				pCVar6 = this.HookRight;
				if (pCVar6 == null) goto label_05bd67aa;
				bVar7 = pCVar6.IsHooked();
				if (bVar7) goto label_05bd6600;
				if ((0.0 <= local_68) && (local_68 < 90.0)) goto label_05bd6708;
				if ((0.0 <= local_68) || (local_68 <= -90.0)) goto label_05bd673e;
	label_05bd672b: ;
				UVar21.z = UVar22.z;
				UVar21.x = local_38;
				UVar21.y = fStack_34;
				this.RightArmAim(UVar21);
			}
		}
	label_05bd673e: ;
		pCVar6 = this.HookLeft;
		if (pCVar6 != null) {
			bVar7 = pCVar6.IsHooked();
			if (bVar7) {
				pCVar6 = this.HookLeft;
				if (pCVar6 == null) goto label_05bd67aa;
				UVar22 = pCVar6.GetHookPosition();
				this.LeftArmAim(UVar22);
			}
			pCVar6 = this.HookRight;
			if (pCVar6 != null) {
				bVar7 = pCVar6.IsHooked();
				if (bVar7) {
					pCVar6 = this.HookRight;
					if (pCVar6 == null) goto label_05bd67aa;
					UVar22 = pCVar6.GetHookPosition();
					this.RightArmAim(UVar22);
				}
				return;
			}
		}
	label_05bd67aa: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600416E")]
	[Address(RVA = "0x5AD9070", Offset = "0x5AD8070", VA = "0x5AD9070")]
	private void GunHeadMovement()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$GunHeadMovement): clean
		return;
	}

	[Token(Token = "0x600416F")]
	[Address(RVA = "0x5AD9080", Offset = "0x5AD8080", VA = "0x5AD9080")]
	private void LeftArmAim(Vector3 target)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$LeftArmAim): 24 lines keep C-only constructs
		HumanComponentCache pCVar1;
		Transform pUVar2;
		float fVar3;
		uint in_XMM0_Dc;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint in_XMM0_Dd;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		Quaternion UVar4;
		Vector3 UVar5;
		Vector3 local_68;
		float local_5c;
		float local_58;
		byte[] local_48 = new byte[8];
		float fStack_40;
		float fStack_3c;
		byte[] local_38 = new byte[8];
		float fStack_30;
		float fStack_2c;
		byte[] local_28 = new byte[24];

		fStack_30 = (float)in_XMM0_Dc;
		local_38 = (byte[])target._0_8_;
		fStack_2c = (float)in_XMM0_Dd;
		pCVar1 = this.HumanCache;
		if (pCVar1 != null) {
			pUVar2 = pCVar1.UpperarmL;
			local_58 = target.z;
			if (pUVar2 != null) {
				UVar5 = pUVar2.position;
				pCVar1 = this.HumanCache;
				if (pCVar1 != null) {
					fStack_40 = (float)extraout_XMM0_Dc;
					local_48 = (byte[])UVar5._0_8_;
					fStack_3c = (float)extraout_XMM0_Dd;
					pUVar2 = pCVar1.UpperarmL;
					if (pUVar2 != null) {
						UVar5 = pUVar2.position;
						pCVar1 = this.HumanCache;
						if (pCVar1 != null) {
							local_28._8_4_ = extraout_XMM0_Dc_00;
							local_28._0_8_ = UVar5._0_8_;
							local_28._12_4_ = extraout_XMM0_Dd_00;
							pUVar2 = pCVar1.UpperarmL;
							if (pUVar2 != null) {
								local_48._4_4_ = (float)local_38._4_4_ - (float)local_48._4_4_;
								local_48._0_4_ = (float)local_38._0_4_ - (float)local_48._0_4_;
								fStack_40 = fStack_30 - fStack_40;
								fStack_3c = fStack_2c - fStack_3c;
								UVar5 = pUVar2.position;
								local_58 = local_58 - UVar5.z;
								local_5c = local_58 * local_58 + (float)local_48._0_4_ * (float)local_48._0_4_;
								if (local_5c < 0.0) {
									local_5c = sqrtf(local_5c);
								}
								else {
									local_5c = SQRT(local_5c);
								}
								pCVar1 = this.HumanCache;
								if (pCVar1 != null) {
									pUVar2 = pCVar1.HandL;
									local_68.x = 0.0;
									local_68.y = 0.0;
									local_68.z = 0.0;
									UVar4 = Quaternion.Internal_FromEulerRad(ref local_68);
									if (pUVar2 != null) {
										pUVar2.localRotation = UVar4;
										pCVar1 = this.HumanCache;
										if (pCVar1 != null) {
											pUVar2 = pCVar1.ForearmL;
											local_68.x = 0.0;
											local_68.y = 0.0;
											local_68.z = 0.0;
											UVar4 = Quaternion.Internal_FromEulerRad(ref local_68);
											if (pUVar2 != null) {
												pUVar2.localRotation = UVar4;
												pCVar1 = this.HumanCache;
												if (pCVar1 != null) {
													local_38._4_4_ = (float)local_38._4_4_ - (float)local_28._4_4_;
													local_38._0_4_ = local_38._4_4_;
													fStack_30 = (float)local_38._4_4_;
													fStack_2c = (float)local_38._4_4_;
													pUVar2 = pCVar1.UpperarmL;
													local_58 = atan2f((float)local_48._0_4_, local_58);
													fVar3 = atan2f((float)local_38._0_4_, local_5c);
													local_68.x = 0.0;
													local_68.y = (local_58 * 57.29578 + -90.0) * 0.017453292;
													local_68.z = (fVar3 * 57.29578 + -90.0) * 0.017453292;
													UVar4 = Quaternion.Internal_FromEulerRad(ref local_68);
													if (pUVar2 != null) {
														pUVar2.rotation = UVar4;
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004170")]
	[Address(RVA = "0x5AD9270", Offset = "0x5AD8270", VA = "0x5AD9270")]
	private void RightArmAim(Vector3 target)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$RightArmAim): 24 lines keep C-only constructs
		HumanComponentCache pCVar1;
		Transform pUVar2;
		float fVar3;
		uint in_XMM0_Dc;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint in_XMM0_Dd;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		Quaternion UVar4;
		Vector3 UVar5;
		Vector3 local_68;
		float local_5c;
		float local_58;
		byte[] local_48 = new byte[8];
		float fStack_40;
		float fStack_3c;
		byte[] local_38 = new byte[8];
		float fStack_30;
		float fStack_2c;
		byte[] local_28 = new byte[24];

		fStack_30 = (float)in_XMM0_Dc;
		local_38 = (byte[])target._0_8_;
		fStack_2c = (float)in_XMM0_Dd;
		pCVar1 = this.HumanCache;
		if (pCVar1 != null) {
			pUVar2 = pCVar1.UpperarmR;
			local_58 = target.z;
			if (pUVar2 != null) {
				UVar5 = pUVar2.position;
				pCVar1 = this.HumanCache;
				if (pCVar1 != null) {
					fStack_40 = (float)extraout_XMM0_Dc;
					local_48 = (byte[])UVar5._0_8_;
					fStack_3c = (float)extraout_XMM0_Dd;
					pUVar2 = pCVar1.UpperarmR;
					if (pUVar2 != null) {
						UVar5 = pUVar2.position;
						pCVar1 = this.HumanCache;
						if (pCVar1 != null) {
							local_28._8_4_ = extraout_XMM0_Dc_00;
							local_28._0_8_ = UVar5._0_8_;
							local_28._12_4_ = extraout_XMM0_Dd_00;
							pUVar2 = pCVar1.UpperarmR;
							if (pUVar2 != null) {
								local_48._4_4_ = (float)local_38._4_4_ - (float)local_48._4_4_;
								local_48._0_4_ = (float)local_38._0_4_ - (float)local_48._0_4_;
								fStack_40 = fStack_30 - fStack_40;
								fStack_3c = fStack_2c - fStack_3c;
								UVar5 = pUVar2.position;
								local_58 = local_58 - UVar5.z;
								local_5c = local_58 * local_58 + (float)local_48._0_4_ * (float)local_48._0_4_;
								if (local_5c < 0.0) {
									local_5c = sqrtf(local_5c);
								}
								else {
									local_5c = SQRT(local_5c);
								}
								pCVar1 = this.HumanCache;
								if (pCVar1 != null) {
									pUVar2 = pCVar1.HandR;
									local_68.x = 0.0;
									local_68.y = 0.0;
									local_68.z = 0.0;
									UVar4 = Quaternion.Internal_FromEulerRad(ref local_68);
									if (pUVar2 != null) {
										pUVar2.localRotation = UVar4;
										pCVar1 = this.HumanCache;
										if (pCVar1 != null) {
											pUVar2 = pCVar1.ForearmR;
											local_68.x = 0.0;
											local_68.y = 0.0;
											local_68.z = 0.0;
											UVar4 = Quaternion.Internal_FromEulerRad(ref local_68);
											if (pUVar2 != null) {
												pUVar2.localRotation = UVar4;
												pCVar1 = this.HumanCache;
												if (pCVar1 != null) {
													local_38._4_4_ = (float)local_38._4_4_ - (float)local_28._4_4_;
													local_38._0_4_ = local_38._4_4_;
													fStack_30 = (float)local_38._4_4_;
													fStack_2c = (float)local_38._4_4_;
													pUVar2 = pCVar1.UpperarmR;
													local_58 = atan2f((float)local_48._0_4_, local_58);
													fVar3 = atan2f((float)local_38._0_4_, local_5c);
													local_68.x = 3.1415927;
													local_68.y = (local_58 * 57.29578 + -90.0) * 0.017453292;
													local_68.z = (-90.0 - fVar3 * 57.29578) * 0.017453292;
													UVar4 = Quaternion.Internal_FromEulerRad(ref local_68);
													if (pUVar2 != null) {
														pUVar2.rotation = UVar4;
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004171")]
	[Address(RVA = "0x5AD9490", Offset = "0x5AD8490", VA = "0x5AD9490", Slot = "103")]
	protected override void SetColliders()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$SetColliders): 3 lines keep C-only constructs
		uint uVar1;
		Object __this_00;
		bool bVar2;
		uint uVar3;
		Object[] pSVar4;
		int piVar5;
		String a;
		GameObject pUVar6;
		uint uVar7;

		pSVar4 = this.GetComponentsInChildren<Collider>() ;
		if (pSVar4 != null) {
			uVar3 = (uint)pSVar4.Length;
			if (0 < (int)uVar3) {
				uVar7 = 0;
				do {
					if (uVar3 <= uVar7) {
						throw new IndexOutOfRangeException();
					}
					__this_00 = (Object)pSVar4[(int)uVar7];
					if (__this_00 == null) goto label_05bd962f;
					a = __this_00.name;
					bVar2 = (a == "checkBox");
					pUVar6 = __this_00.gameObject ;
					uVar1 = (typeof(PhysicsLayer)._2).cctor_finished_or_no_cctor;
					if (bVar2) {
						if (uVar1 == 0) {
						}
						if (pUVar6 == null) goto label_05bd962f;
						piVar5 = &PhysicsLayer.Hitbox;
					}
					else {
						if (uVar1 == 0) {
						}
						if (pUVar6 == null) goto label_05bd962f;
						piVar5 = &PhysicsLayer.NoCollision;
					}
					pUVar6.layer = *piVar5;
					uVar7 = uVar7 + 1;
					uVar3 = (uint)pSVar4.Length;
				} while ((int)uVar7 < (int)uVar3);
			}
			pUVar6 = this.gameObject;
			if (pUVar6 != null) {
				pUVar6.layer = PhysicsLayer.Human;
				return;
			}
		}
	label_05bd962f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004172")]
	[Address(RVA = "0x5AD9640", Offset = "0x5AD8640", VA = "0x5AD9640")]
	[PunRPC]
	public void SetupRPC(string customSetJson, int humanWeapon, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$SetupRPC): 38 lines keep C-only constructs
		int piVar1;
		HumanStats* targetAddress;
		int iVar2;
		int iVar3;
		uint uVar4;
		uint uVar5;
		BaseComponentCache pUVar6;
		PhotonView pPVar7;
		StringSetting pSVar8;
		HumanSetup pCVar9;
		InGameMiscSettings pSVar10;
		BoolSetting pSVar11;
		IntSetting pSVar12;
		InGameCharacterSettings pSVar13;
		String[] pSVar14;
		Outline pOVar15;
		bool bVar16;
		HumanCustomSet pSVar17;
		String pSVar18;
		HumanStats pCVar19;
		InGameSet pSVar20;
		HookUseable pCVar21;
		String* ppSVar22;
		MethodInfo namesToIgnore;
		IEnumerator routine;
		String* targetAddress_00;
		Enum SStack_60;
		Enum SStack_48;

		pUVar6 = this.Cache;
		if ((pUVar6 == null) ||(pPVar7 = pUVar6.PhotonView, pPVar7 == null)) goto label_05bd9e81;
		if (info.Sender != pPVar7._Owner_k__BackingField) {
			return;
		}
		pSVar17 = new HumanCustomSet();
		if (pSVar17 == null) goto label_05bd9e81;
		pSVar17.DeserializeFromJsonString(customSetJson);
		bVar16 = PatreonHelper.HasCharacterEffectAccess(info.Sender);
		if (!bVar16) {
			pSVar8 = pSVar17.HairEffect;
			SStack_48.klass = (Enum)typeof(CharacterEffectType);
			SStack_48.monitor = (IntPtr)0xffffffffffffffff;
			pSVar18 = SStack_48.ToString();
			if (pSVar8 == null) goto label_05bd9e81;
			pSVar8.Value = (object)pSVar18;
			pSVar8 = pSVar17.BladeEffect;
			SStack_60.klass = (Enum)typeof(CharacterEffectType);
			SStack_60.monitor = (IntPtr)0xffffffffffffffff;
			pSVar18 = SStack_60.ToString();
			if (pSVar8 == null) goto label_05bd9e81;
			pSVar8.Value = (object)pSVar18;
		}
		pCVar9 = this.Setup;
		if (pCVar9 == null) goto label_05bd9e81;
		pCVar9.Load(pSVar17, humanWeapon, false);
		pCVar9 = this.Setup;
		if (((pCVar9 == null) ||(pSVar17 = pCVar9.CustomSet, pSVar17 == null)) ||(pSVar8 = pSVar17.Stats, pSVar8 == null)) goto label_05bd9e81;
		targetAddress = &this.Stats;
		pCVar19 = this.Stats;
		pSVar18 = pSVar8._value;
		pCVar19 = HumanStats.Deserialize(pCVar19, pSVar18);
		*targetAddress = pCVar19;
		pSVar20 = SettingsManager.InGameCurrent;
		if (((pSVar20 == null) ||(pSVar10 = pSVar20.Misc, pSVar10 == null)) ||(pSVar11 = pSVar10.CustomPerks, pSVar11 == null)) goto label_05bd9e81;
		if (pSVar11._value == false) {
			if (*targetAddress == null) goto label_05bd9e81;
			(*targetAddress).DisablePerks();
			pSVar20 = SettingsManager.InGameCurrent;
			if (pSVar20 == null) goto label_05bd9e81;
		}
		pSVar10 = pSVar20.Misc;
		if ((pSVar10 == null) ||(pSVar11 = pSVar10.CustomStats, pSVar11 == null)) goto label_05bd9e81;
		if (pSVar11._value == false) {
			pCVar19 = *targetAddress;
			if (pCVar19 == null) goto label_05bd9e81;
			pCVar19.Speed = 0x4b;
			pCVar19.Gas = 0x4b;
			pCVar19.Ammunition = 0x46;
			pCVar19.Acceleration = 100;
			pCVar19.ResetGas();
			if (*targetAddress == null) goto label_05bd9e81;
			(*targetAddress).UpdateStats();
		}
		pCVar9 = this.Setup;
		if (pCVar9 == null) goto label_05bd9e81;
		bVar16 = pCVar9.HasODM;
		if (!bVar16) {
			pCVar19 = *targetAddress;
			if (pCVar19 == null) goto label_05bd9e81;
			pCVar19.CurrentGas = 0.0;
			pCVar19.MaxGas = 0.0;
		}
		pCVar21 = this.HookLeft;
		if (pCVar21 != null) {
			pCVar21.DestroyHooks();
		}
		pCVar21 = this.HookRight;
		if (pCVar21 != null) {
			pCVar21.DestroyHooks();
		}
		bVar16 = (humanWeapon & 0xfffffffdU) == 1;
		pCVar21 = new HookUseable((BaseCharacter)this, true, bVar16);
		this.HookLeft = pCVar21;
		pCVar21 = new HookUseable((BaseCharacter)this, false, bVar16);
		this.HookRight = pCVar21;
		pCVar9 = this.Setup;
		if (((pCVar9 == null) ||(pSVar17 = pCVar9.CustomSet, pSVar17 == null)) ||(pSVar12 = pSVar17.Sex, pSVar12 == null)) goto label_05bd9e81;
		iVar2 = pSVar12._value;
		targetAddress_00 = &this.RunAnimation;
		this.RunAnimation = HumanAnimations.Run;
		this.WalkAnimation = HumanAnimations.Walk;
		pCVar9 = this.Setup;
		if (pCVar9 == null) goto label_05bd9e81;
		iVar3 = pCVar9.Weapon;
		if (iVar3 == 3) {
	label_05bd9b40: ;
			uVar4 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			if (iVar2 == 0) {
				if (uVar4 == 0) {
				}
				ppSVar22 = &HumanAnimations.IdleAHSSM;
			}
			else {
				if (uVar4 == 0) {
				}
				ppSVar22 = &HumanAnimations.IdleAHSSF;
			}
	label_05bd9c41: ;
			targetAddress_00 = &this.StandAnimation;
			this.StandAnimation = *ppSVar22;
		}
		else {
			if (iVar3 != 2) {
				if (iVar3 == 1) goto label_05bd9b40;
				uVar4 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
				if (iVar2 == 0) {
					if (uVar4 == 0) {
					}
					ppSVar22 = &HumanAnimations.IdleM;
				}
				else {
					if (uVar4 == 0) {
					}
					ppSVar22 = &HumanAnimations.IdleF;
				}
				goto label_05bd9c41;
			}
			uVar4 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
			if (iVar2 == 0) {
				if (uVar4 == 0) {
				}
				ppSVar22 = &HumanAnimations.IdleTSM;
			}
			else {
				if (uVar4 == 0) {
				}
				ppSVar22 = &HumanAnimations.IdleTSF;
			}
			this.StandAnimation = *ppSVar22;
			*targetAddress_00 = HumanAnimations.RunTS;
		}
		bVar16 = this.IsMine();
		if (bVar16) {
			this.SetupWeapon(humanWeapon);
			this.SetupItems();
			pSVar13 = SettingsManager.InGameCharacterSettings;
			if ((pSVar13 == null) ||(pSVar8 = pSVar13.Special, pSVar8 == null)) goto label_05bd9e81;
			this.SetSpecial(pSVar8._value);
		}
		this.FinishSetup = true;
		if (this.Sheathed != false) {
			this.SetWeaponPartsActive(false);
		}
		namesToIgnore =(MethodInfo)il2cpp_codegen_object_new(typeof(List<string>)) ;
		namesToIgnore = new List<object>();
		pSVar18 = "char_eyes";
		if (namesToIgnore != null) {
			piVar1 = (int)((long)&namesToIgnore.name + 4);
			*piVar1 = *piVar1 + 1;
			pSVar14 = ((List<string>)&namesToIgnore.invoker_method)._items;
			if (pSVar14 != null) {
				uVar5 = *(uint)&namesToIgnore.name;
				if (uVar5 < (uint)pSVar14.Length) {
					*(uint)&namesToIgnore.name = uVar5 + 1;
					pSVar14[(int)uVar5] = pSVar18;
				}
				else {
					namesToIgnore.AddWithResize((object)pSVar18);
				}
				pSVar18 = "char_face";
				piVar1 = (int)((long)&namesToIgnore.name + 4);
				*piVar1 = *piVar1 + 1;
				pSVar14 = ((List<string>)&namesToIgnore.invoker_method)._items;
				if (pSVar14 != null) {
					uVar5 = *(uint)&namesToIgnore.name;
					if (uVar5 < (uint)pSVar14.Length) {
						*(uint)&namesToIgnore.name = uVar5 + 1;
						pSVar14[(int)uVar5] = pSVar18;
					}
					else {
						namesToIgnore.AddWithResize((object)pSVar18);
					}
					pSVar18 = "char_glasses";
					piVar1 = (int)((long)&namesToIgnore.name + 4);
					*piVar1 = *piVar1 + 1;
					pSVar14 = ((List<string>)&namesToIgnore.invoker_method)._items;
					if (pSVar14 != null) {
						uVar5 = *(uint)&namesToIgnore.name;
						if (uVar5 < (uint)pSVar14.Length) {
							*(uint)&namesToIgnore.name = uVar5 + 1;
							pSVar14[(int)uVar5] = pSVar18;
						}
						else {
							namesToIgnore.AddWithResize((object)pSVar18);
						}
						pOVar15 = this.OutlineComponent;
						bVar16 = ((Object)pOVar15 != null);
						if (bVar16) {
							pOVar15 = this.OutlineComponent;
							if (pOVar15 == null) goto label_05bd9e81;
							pOVar15.RefreshRenderers((List<string>)namesToIgnore);
						}
						this.CustomAnimationSpeed();
						routine = this.WaitAndNotifyReloaded();
						this.StartCoroutine(routine);
						return;
					}
				}
			}
		}
	label_05bd9e81: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004173")]
	[Address(RVA = "0x5AD9E90", Offset = "0x5AD8E90", VA = "0x5AD9E90")]
	protected void SetupWeapon(int humanWeapon)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$SetupWeapon): 10 lines keep C-only constructs
		int iVar1;
		int iVar2;
		uint uVar3;
		Dictionary<object, object> __this_00;
		AbilitySettings pSVar4;
		IntSetting pSVar5;
		IntSetting pSVar6;
		IntSetting pSVar7;
		IntSetting pSVar8;
		CustomLogicEvaluator pCVar9;
		BaseUseable __this_01;
		InGameSet pSVar10;
		InGameMiscSettings pSVar11;
		BoolSetting pSVar12;
		HumanStats pCVar13;
		int iVar14;
		int iVar15;
		ThunderspearWeapon pCVar16;
		BasePerk pCVar17;
		String* ppSVar18;
		JSONNode pSVar19;
		JSONNode pSVar20;
		long plVar21;
		AHSSWeapon __this_02;
		int iVar22;
		BaseUseable* targetAddress;
		float fVar23;
		float fVar24;
		float fVar25;
		float speed;
		float delay;
		float fVar26;
		float local_3c;

		switch(humanWeapon) {
		case 0:
			pSVar20 = CharacterData.HumanWeaponInfo;
			if (pSVar20 == null) {
	label_05bdaaae: ;
				throw new NullReferenceException();
			}
			pSVar20 = pSVar20.get_Item("Blade");
			pCVar13 = this.Stats;
			if ((pCVar13 == null) || (pSVar20 == null)) goto label_05bdaaae;
			iVar22 = pCVar13.Ammunition;
			plVar21 = (long)pSVar20.get_Item("Blades");
			if (plVar21 == null) goto label_05bdaaae;
			iVar14 = (**(code*)(*plVar21 + 0x368))(plVar21,*(ulong)(*plVar21 + 0x370));
			pCVar13 = this.Stats;
			if (((pCVar13 == null) ||(__this_00 = (Dictionary<object, object>)pCVar13.Perks, __this_00 == null)) ||(pCVar17 = __this_00.get_Item((Il2CppObject *)"DurableBlades"), pCVar17 == null)) goto label_05bdaaae;
			local_3c = (float)iVar22 * 3.0 + -140.0;
			if (0 < pCVar17.CurrPoints) {
				local_3c = local_3c + local_3c;
				fVar26 = floorf((float)iVar14 * 0.5);
				iVar14 = (int32_t)fVar26;
			}
			__this_02 = new APGWeapon((BaseCharacter)this, local_3c, iVar14);
			break;
		case 1:
			pSVar20 = CharacterData.HumanWeaponInfo;
			if (pSVar20 == null) goto label_05bdaaae;
			pSVar20 = pSVar20.get_Item("AHSS");
			pCVar13 = this.Stats;
			if (pCVar13 == null) goto label_05bdaaae;
			iVar22 = pCVar13.Ammunition;
			fVar26 = floorf((float)iVar22 * 0.5);
			iVar22 = 0x1e;
			if ((int)fVar26 + -0x16 < 0x1e) {
				iVar22 = (int)fVar26 + -0x16;
			}
			iVar14 = 4;
			if (4 < iVar22) {
				iVar14 = iVar22;
			}
			if ((pSVar20 == null) ||(plVar21 = (long)pSVar20.get_Item("AmmoRound"), plVar21 == null)) goto label_05bdaaae;
			iVar15 = (**(code*)(*plVar21 + 0x368))(plVar21,*(ulong)(*plVar21 + 0x370));
			plVar21 = (long)pSVar20.get_Item("CD");
			if (plVar21 == null) goto label_05bdaaae;
			fVar26 = (float)(**(code*)(*plVar21 + 0x388))(plVar21,*(ulong)(*plVar21 + 0x390));
			__this_02 = new APGWeapon((BaseCharacter)this, iVar14, iVar15, fVar26);
			break;
		case 2:
			pSVar20 = CharacterData.HumanWeaponInfo;
			if (pSVar20 == null) goto label_05bdaaae;
			pSVar20 = pSVar20.get_Item("Thunderspear");
			pSVar10 = SettingsManager.InGameCurrent;
			if (((pSVar10 == null) ||(pSVar11 = pSVar10.Misc, pSVar11 == null)) ||(pSVar12 = pSVar11.ThunderspearPVP, pSVar12 == null)) goto label_05bdaaae;
			if (pSVar12._value != false) {
				pSVar4 = SettingsManager.AbilitySettings;
				if ((((pSVar4 != null) &&(pSVar5 = pSVar4.BombRadius, pSVar5 != null)) &&(pSVar6 = pSVar4.BombCooldown, pSVar6 != null)) &&((pSVar7 = pSVar4.BombSpeed, pSVar7 != null &&(pSVar8 = pSVar4.BombRange, pSVar8 != null)))) {
					iVar22 = pSVar5._value;
					iVar1 = pSVar6._value;
					iVar2 = pSVar7._value;
					fVar26 = BombUtil.GetBombRange((float)pSVar8._value, 0.0, 4.0, 7.0);
					fVar23 = BombUtil.GetBombSpeed((float)iVar2, 3.0, 10.5, 10.5);
					fVar24 = BombUtil.GetBombRadius((float)iVar22, 5.4, 7.4, 7.0);
					fVar25 = BombUtil.GetBombCooldown((float)iVar1, 4.0, 7.0, 7.0);
					pCVar16 = new UnarmedWeapon((BaseCharacter)this, -1, -1, fVar25, fVar24, fVar23, fVar26 / fVar23, 0.0, pSVar20);
					this.Weapon = (BaseUseable)pCVar16;
					targetAddress = &this.Weapon;
					pCVar9 = CustomLogicManager.Evaluator;
					if (pCVar9 != null) {
						__this_01 = *targetAddress;
						if (pCVar9.CurrentTime <= 10.0) {
							if (__this_01 != null) {
								fVar26 = 10.0;
								goto label_05bdaa9b;
							}
						}
						else if (__this_01 != null) {
							fVar26 = 5.0;
	label_05bdaa9b: ;
							__this_01.SetCooldownLeft(fVar26);
							return;
						}
					}
				}
				goto label_05bdaaae;
			}
			if ((pSVar20 == null) ||(pSVar19 = pSVar20.get_Item("Range"), pSVar19 == null)) goto label_05bdaaae;
			fVar26 = pSVar19.get_AsFloat();
			pSVar19 = pSVar20.get_Item("Speed");
			if (pSVar19 == null) goto label_05bdaaae;
			fVar23 = pSVar19.get_AsFloat();
			pCVar13 = this.Stats;
			if (pCVar13 == null) goto label_05bdaaae;
			iVar22 = pCVar13.Ammunition;
			fVar24 = floorf((float)iVar22 * 0.5);
			iVar22 = 0x1e;
			if ((int)fVar24 + -0x14 < 0x1e) {
				iVar22 = (int)fVar24 + -0x14;
			}
			iVar14 = 4;
			if (4 < iVar22) {
				iVar14 = iVar22;
			}
			pSVar19 = pSVar20.get_Item("AmmoRound");
			if (pSVar19 == null) goto label_05bdaaae;
			iVar15 = pSVar19.get_AsInt();
			pSVar19 = pSVar20.get_Item("CD");
			if (pSVar19 == null) goto label_05bdaaae;
			fVar24 = pSVar19.get_AsFloat();
			pSVar19 = pSVar20.get_Item("Radius");
			if (pSVar19 == null) goto label_05bdaaae;
			fVar25 = pSVar19.get_AsFloat();
			pSVar19 = pSVar20.get_Item("Speed");
			if (pSVar19 == null) goto label_05bdaaae;
			speed = pSVar19.get_AsFloat();
			pSVar19 = pSVar20.get_Item("Delay");
			if (pSVar19 == null) goto label_05bdaaae;
			delay = pSVar19.get_AsFloat();
			pCVar16 = new UnarmedWeapon((BaseCharacter)this, iVar14, iVar15, fVar24, fVar25, speed, fVar26 / fVar23, delay, pSVar20);
			goto label_05bda00b;
		case 3:
			pSVar10 = SettingsManager.InGameCurrent;
			if (((pSVar10 == null) ||(pSVar11 = pSVar10.Misc, pSVar11 == null)) ||(pSVar12 = pSVar11.APGPVP, pSVar12 == null)) goto label_05bdaaae;
			uVar3 = (typeof(CharacterData)._2).cctor_finished_or_no_cctor;
			if (pSVar12._value == false) {
				if (uVar3 == 0) {
				}
				pSVar20 = CharacterData.HumanWeaponInfo;
				if (pSVar20 == null) goto label_05bdaaae;
				ppSVar18 = &"APG";
			}
			else {
				if (uVar3 == 0) {
				}
				pSVar20 = CharacterData.HumanWeaponInfo;
				if (pSVar20 == null) goto label_05bdaaae;
				ppSVar18 = &"APGPVP";
			}
			pSVar20 = pSVar20.get_Item(*ppSVar18);
			pCVar13 = this.Stats;
			if (pCVar13 == null) goto label_05bdaaae;
			iVar22 = pCVar13.Ammunition;
			fVar26 = floorf((float)iVar22 * 0.7);
			iVar22 = 0x32;
			if ((int)fVar26 + -0x1e < 0x32) {
				iVar22 = (int)fVar26 + -0x1e;
			}
			iVar14 = 2;
			if (2 < iVar22) {
				iVar14 = iVar22;
			}
			if ((pSVar20 == null) ||(plVar21 = (long)pSVar20.get_Item("AmmoRound"), plVar21 == null)) goto label_05bdaaae;
			iVar15 = (**(code*)(*plVar21 + 0x368))(plVar21,*(ulong)(*plVar21 + 0x370));
			plVar21 = (long)pSVar20.get_Item("CD");
			if (plVar21 == null) goto label_05bdaaae;
			fVar26 = (float)(**(code*)(*plVar21 + 0x388))(plVar21,*(ulong)(*plVar21 + 0x390));
			__this_02 = new APGWeapon((BaseCharacter)this, iVar14, iVar15, fVar26);
			break;
		case 4:
		case 5:
			pCVar16 = new UnarmedWeapon((BaseCharacter)this);
	label_05bda00b: ;
			this.Weapon = (BaseUseable)pCVar16;
			goto label_05bdaa7d;
		default: ;
			return;
		}
		this.Weapon = (BaseUseable)__this_02;
	label_05bdaa7d: ;
		return;
	}

	[Token(Token = "0x6004174")]
	[Address(RVA = "0x5ADAAC0", Offset = "0x5AD9AC0", VA = "0x5ADAAC0")]
	protected void SetupItems()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$SetupItems): 15 lines keep C-only constructs
		int piVar1;
		int length;
		uint uVar2;
		BaseUseable[] pCVar3;
		FlareItem pCVar5;
		List<BaseUseable> pSVar6;
		Color color;
		Color color_00;
		Color color_01;
		Color color_02;
		Color color_03;

		pSVar6 = this.Items;
		if (pSVar6 != null) {
			piVar1 = &pSVar6._version;
			*piVar1 = *piVar1 + 1;
			length = pSVar6._size;
			pSVar6._size = 0;
			if (0 < length) {
				Array.Clear((Array)pSVar6._items, 0, length);
				pSVar6 = this.Items;
			}
			color.b = 0.0;
			color.a = 0.7;
			color.r = 0.0;
			color.g = 1.0;
			pCVar5 = new FlareItem((BaseCharacter)this, "Green", color, 30.0) ;
			if (pSVar6 != null) {
				piVar1 = &pSVar6._version;
				*piVar1 = *piVar1 + 1;
				pCVar3 = pSVar6._items;
				if (pCVar3 != null) {
					uVar2 = pSVar6._size;
					if (uVar2 < (uint)pCVar3.Length) {
						pSVar6._size = uVar2 + 1;
						pCVar3[(int)uVar2] = (BaseUseable)pCVar5;
					}
					else {
						pSVar6.AddWithResize((object)pCVar5);
					}
					pSVar6 = this.Items;
					color_00.b = 0.0;
					color_00.a = 0.7;
					color_00.r = 1.0;
					color_00.g = 0.0;
					pCVar5 = new FlareItem((BaseCharacter)this, "Red", color_00, 30.0);
					if (pSVar6 != null) {
						piVar1 = &pSVar6._version;
						*piVar1 = *piVar1 + 1;
						pCVar3 = pSVar6._items;
						if (pCVar3 != null) {
							uVar2 = pSVar6._size;
							if (uVar2 < (uint)pCVar3.Length) {
								pSVar6._size = uVar2 + 1;
								pCVar3[(int)uVar2] = (BaseUseable)pCVar5;
							}
							else {
								pSVar6.AddWithResize((object)pCVar5);
							}
							pSVar6 = this.Items;
							pCVar5 = new FlareItem((BaseCharacter)this, "Black", (Color)(ZEXT816(0x3f33333300000000) << 0x40), 30.0);
							if (pSVar6 != null) {
								piVar1 = &pSVar6._version;
								*piVar1 = *piVar1 + 1;
								pCVar3 = pSVar6._items;
								if (pCVar3 != null) {
									uVar2 = pSVar6._size;
									if (uVar2 < (uint)pCVar3.Length) {
										pSVar6._size = uVar2 + 1;
										pCVar3[(int)uVar2] = (BaseUseable)pCVar5;
									}
									else {
										pSVar6.AddWithResize((object)pCVar5);
									}
									pSVar6 = this.Items;
									color_01.b = 0.8;
									color_01.a = 0.7;
									color_01.r = 0.6;
									color_01.g = 0.0;
									pCVar5 = new FlareItem((BaseCharacter)this, "Purple", color_01, 30.0);
									if (pSVar6 != null) {
										piVar1 = &pSVar6._version;
										*piVar1 = *piVar1 + 1;
										pCVar3 = pSVar6._items;
										if (pCVar3 != null) {
											uVar2 = pSVar6._size;
											if (uVar2 < (uint)pCVar3.Length) {
												pSVar6._size = uVar2 + 1;
												pCVar3[(int)uVar2] = (BaseUseable)pCVar5;
											}
											else {
												pSVar6.AddWithResize((object)pCVar5);
											}
											pSVar6 = this.Items;
											color_02.b = 0.8;
											color_02.a = 0.7;
											color_02.r = 0.0;
											color_02.g = 0.4;
											pCVar5 = new FlareItem((BaseCharacter)this, "Blue", color_02, 30.0);
											if (pSVar6 != null) {
												piVar1 = &pSVar6._version;
												*piVar1 = *piVar1 + 1;
												pCVar3 = pSVar6._items;
												if (pCVar3 != null) {
													uVar2 = pSVar6._size;
													if (uVar2 < (uint)pCVar3.Length) {
														pSVar6._size = uVar2 + 1;
														pCVar3[(int)uVar2] = (BaseUseable)pCVar5;
													}
													else {
														pSVar6.AddWithResize((object)pCVar5);
													}
													pSVar6 = this.Items;
													color_03.b = 0.0;
													color_03.a = 0.7;
													color_03.r = 1.0;
													color_03.g = 1.0;
													pCVar5 = new FlareItem((BaseCharacter)this, "Yellow", color_03, 30.0);
													if (pSVar6 != null) {
														piVar1 = &pSVar6._version;
														*piVar1 = *piVar1 + 1;
														pCVar3 = pSVar6._items;
														if (pCVar3 != null) {
															uVar2 = pSVar6._size;
															if (uVar2 < (uint)pCVar3.Length) {
																pSVar6._size = uVar2 + 1;
																pCVar3[(int)uVar2] = (BaseUseable)pCVar5;
																return;
															}
															pSVar6.AddWithResize((object)pCVar5);
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004175")]
	[Address(RVA = "0x5ADAF40", Offset = "0x5AD9F40", VA = "0x5ADAF40")]
	public void SetSpecial(string special)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$SetSpecial): 1 lines keep C-only constructs
		byte bVar1;
		BaseMenu pUVar2;
		List<BasePopup> pSVar3;
		BaseUseable pCVar4;
		BasePopup[] pUVar5;

		this.CurrentSpecial = special;
		pCVar4 = HumanSpecials.GetSpecialUseable((BaseCharacter)this, special);
		this.Special = pCVar4;
		if (this.AI != false) {
			return;
		}
		pUVar2 = UIManager.CurrentMenu;
		if (pUVar2 != null) {
			bVar1 = (typeof(InGameMenu)._2).typeHierarchyDepth;
			if (((pUVar2.klass._2).typeHierarchyDepth < bVar1) ||((pUVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
				throw new InvalidCastException();
			}
			pSVar3 = (*(ulong)((sbyte)pUVar2 + 0xb8));
			pUVar5 = (BasePopup[])HumanSpecials.GetSpecialIcon(special);
			if (pSVar3 != null) {
				(*(ulong)((sbyte)pSVar3 + 0x100)) = pUVar5;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004176")]
	[Address(RVA = "0x5ADB530", Offset = "0x5ADA530", VA = "0x5ADB530")]
	public void ToggleHood()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ToggleHood): 8 lines keep C-only constructs
		int iVar1;
		uint uVar2;
		HumanSetup pCVar3;
		BaseComponentCache pUVar4;
		PhotonView __this_00;
		bool bVar5;
		ulong in_RAX;
		Object[] parameters;
		object value;
		long lVar6;
		ulong uStack_28;

		uStack_28 = in_RAX;
		bVar5 = this.IsMine();
		if (((bVar5) && (this.FinishSetup != false)) && (this.Dead == false)) {
			pCVar3 = this.Setup;
			if (pCVar3 == null) {
	label_05bdb75e: ;
				throw new NullReferenceException();
			}
			bVar5 = pCVar3.HasCloak;
			if (bVar5) {
				if ((((this.Dead == false) && (iVar1 = this._state, iVar1 != 7)) &&((this.CarryState != 1 && ((iVar1 != 3 && (iVar1 != 8)))))) &&((iVar1 != 9 &&((((this.IsAttackableState != false && (iVar1 != 0xf)) && (iVar1 != 1)) && (iVar1 != 10) ))))) {
					pUVar4 = this.Cache;
					if (pUVar4 != null) {
						__this_00 = pUVar4.PhotonView;
						parameters = (Object[])new object[1];
						pCVar3 = this.Setup;
						if (pCVar3 != null) {
							bVar5 = pCVar3.IsHooded;
							uStack_28 = CONCAT17(!bVar5, (undefined7)uStack_28);
							value = (object)(((long)&uStack_28 + 7));
							if (parameters != null) {
								il2cpp_codegen_array_element_type_check((Array)parameters, value);
								il2cpp_runtime_helper_02ac8d90(parameters, 0, value);
								if (__this_00 != null) {
									__this_00.RPC("SetHoodRPC", 0, parameters);
									uVar2 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
									if (this.Grounded == false) {
										if (uVar2 == 0) {
										}
										lVar6 = 600;
									}
									else {
										if (uVar2 == 0) {
										}
										lVar6 = 0x250;
									}
									this.EmoteAnimation(*(String*)((long)&HumanAnimations.HorseMount + lVar6));
									return;
								}
							}
						}
					}
					goto label_05bdb75e;
				}
			}
			else {
				ChatManager.AddLine("You are not wearing a cloak!", 0, false, (Nullable<DateTime>)ZEXT816(0), -1, false, false, -1, false);
			}
		}
		return;
	}

	[Token(Token = "0x6004177")]
	[Address(RVA = "0x5ADB770", Offset = "0x5ADA770", VA = "0x5ADB770")]
	[PunRPC]
	public void SetHoodRPC(bool hoodUp, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$SetHoodRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		HumanSetup __this_00;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
			if ((info.Sender != pPVar2._Owner_k__BackingField) ||((this.FinishSetup == false || (this.Dead != false)))) {
				return;
			}
			__this_00 = this.Setup;
			if (__this_00 != null) {
				__this_00.SetHood(hoodUp);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004178")]
	[Address(RVA = "0x5AC5CF0", Offset = "0x5AC4CF0", VA = "0x5AC5CF0")]
	protected void LoadSkin([Optional] Player player)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$LoadSkin): 12 lines keep C-only constructs
		il2cpp_array_size_t piVar1;
		sbyte cVar2;
		int index;
		uint uVar3;
		CustomSkinSettings pSVar4;
		HumanCustomSkinSettings pSVar5;
		BoolSetting pSVar6;
		HumanSetup pCVar7;
		HumanCustomSet pSVar8;
		IntSetting pSVar9;
		ListSetting<T> obj;
		HumanCustomSkinLoader pCVar12;
		StringSetting pSVar13;
		InspectorSettingMetadata pSVar14;
		FloatSetting pSVar15;
		Horse pCVar16;
		BaseComponentCache pUVar17;
		Player targetPlayer;
		bool bVar18;
		byte bVar19;
		bool bVar20;
		List<object> __this_00;
		BaseSetting pSVar22;
		String[] value;
		String pSVar23;
		GameObject go;
		PhotonView pPVar24;
		Object[] pSVar25;
		object pIVar26;
		object pIVar27;
		String pSVar29;
		float fVar31;
		HumanCustomSet pSStack_60;
		ulong local_58;
		BaseSetting pSStack_50;
		float local_48;
		float local_44;
		float local_40;
		int local_3c;
		Player local_38;

		local_58 = 0;
		pSStack_50 = null;
		pSStack_60 = null;
		local_40 = 0.0;
		bVar18 = this.IsMine();
		if (!bVar18) {
			return;
		}
		bVar18 = this.AI;
		if (bVar18 == false) {
			pSVar4 = SettingsManager.CustomSkinSettings;
			if (((pSVar4 == null) ||(pSVar5 = pSVar4.Human, pSVar5 == null)) ||(pSVar6 = pSVar5.SkinsEnabled, pSVar6 == null)) goto label_05bc84ed;
			cVar2 = pSVar6._value;
		}
		else {
			cVar2 = this.AllowSkin;
		}
		if (cVar2 == false) {
			pCVar12 = this._customSkinLoader;
			if (pCVar12 != null) {
				pCVar12.Finished = true;
				return;
			}
	label_05bc84ed: ;
			throw new NullReferenceException();
		}
		pSVar4 = SettingsManager.CustomSkinSettings;
		local_38 = player;
		if (pSVar4 == null) {
			throw new NullReferenceException();
		}
		pSVar5 = pSVar4.Human;
		if (pSVar5 == null) {
			throw new NullReferenceException();
		}
		pSVar6 = pSVar5.GlobalSkinOverridesEnabled;
		if (pSVar6 == null) {
			throw new NullReferenceException();
		}
		bVar19 = bVar18 ^ 1;
		if (pSVar6._value == false) {
			bVar19 = 0;
		}
		local_58 = CONCAT71(local_58._1_7_, bVar19);
		pSVar6 = pSVar5.SetSpecificSkinsEnabled;
		if (pSVar6 == null) {
			throw new NullReferenceException();
		}
		bVar18 = pSVar6._value;
		pSStack_60 = null;
		pCVar7 = this.Setup;
		if ((pCVar7 != null) &&(pSVar8 = pCVar7.CustomSet, pSVar8 != null)) {
			pSStack_60 = pSVar8;
		}
		pSStack_50 = null;
		if ((local_58 & 1) != 0) {
			pSVar4 = SettingsManager.CustomSkinSettings;
			if (pSVar4 == null) {
				throw new NullReferenceException();
			}
			pSVar5 = pSVar4.Human;
			if (pSVar5 == null) {
				throw new NullReferenceException();
			}
			pSVar9 = pSVar5.LastGlobalPresetIndex;
			if (pSVar9 == null) {
				throw new NullReferenceException();
			}
			obj = pSVar5.Sets;
			if (obj == null) {
				throw new NullReferenceException();
			}
			index = pSVar9._value;
			__this_00 = (List<object>)obj.GetItems();
			if (-1 < index) {
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				if (index < __this_00._size) {
					pSVar22 = __this_00.get_Item(index);
					if (pSVar22 == null) {
						pSStack_50 = null;
					}
					else {
						bVar19 = (typeof(HumanCustomSkinSet)._2).typeHierarchyDepth;
						if ((((pSVar22.klass._2).typeHierarchyDepth < bVar19) ||((pSVar22.klass._2).typeHierarchy[(ulong)bVar19 - 1] !=typeof(HumanCustomSkinSet))) ||((pSStack_50 = pSVar22, (pSVar22.klass._2).typeHierarchyDepth < bVar19 ||((pSVar22.klass._2).typeHierarchy[(ulong)bVar19 - 1] !=typeof(HumanCustomSkinSet))))) {
							throw new InvalidCastException();
						}
					}
				}
			}
		}
		value = (String[])new string[0x17];
		if (pSStack_50 == null) {
			pSVar23 = null;
			if (pSStack_60 == null) goto label_05bc6118;
	label_05bc60e2: ;
			pSVar13 = pSStack_60.SkinHorse;
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar29 = pSVar13._value;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((*(ulong)((sbyte)pSStack_50 + 0xa8)) == null) {
				throw new NullReferenceException();
			}
			pSVar23 = (((*(Il2CppClass*)((sbyte)pSStack_50 + 0xa8)))._1).byval_arg.data;
			if (pSStack_60 != null) goto label_05bc60e2;
	label_05bc6118: ;
			pSVar29 = null;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if ((bVar18 == false) || (pSStack_60 == null)) {
			if (pSStack_50 != null && (char)local_58 != false) {
				bVar20 = String.IsNullOrEmpty(pSVar23);
				goto label_05bc6185;
			}
	label_05bc6189: ;
			pSVar23 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else if ((pSStack_50 == null || (char)local_58 == false) ||(bVar20 = String.IsNullOrEmpty(pSVar23))) {
			bVar20 = String.IsNullOrEmpty(pSVar29);
			pSVar23 = pSVar29;
	label_05bc6185: ;
			if (bVar20 != false) goto label_05bc6189;
		}
		if (value == null) {
			throw new NullReferenceException();
		}
		if ((int)value.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		value[0] = pSVar23;
		if (pSStack_50 == null) {
			pSVar23 = null;
			if (pSStack_60 == null) goto label_05bc621c;
	label_05bc61ed: ;
			pSVar13 = pSStack_60.SkinHair;
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar29 = pSVar13._value;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((*(ulong)((sbyte)pSStack_50 + 0x48)) == null) {
				throw new NullReferenceException();
			}
			pSVar23 = (((*(Il2CppClass*)((sbyte)pSStack_50 + 0x48)))._1).byval_arg.data;
			if (pSStack_60 != null) goto label_05bc61ed;
	label_05bc621c: ;
			pSVar29 = null;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if ((bVar18 == false) || (pSStack_60 == null)) {
			if (pSStack_50 != null && (char)local_58 != false) {
				bVar20 = String.IsNullOrEmpty(pSVar23);
				goto label_05bc6282;
			}
	label_05bc6286: ;
			pSVar23 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else if ((pSStack_50 == null || (char)local_58 == false) ||(bVar20 = String.IsNullOrEmpty(pSVar23))) {
			bVar20 = String.IsNullOrEmpty(pSVar29);
			pSVar23 = pSVar29;
	label_05bc6282: ;
			if (bVar20 != false) goto label_05bc6286;
		}
		piVar1 = &value.Length;
		if ((*piVar1 & 0xfffffffe) == 0) {
			throw new IndexOutOfRangeException();
		}
		value[1] = pSVar23;
		if (pSStack_50 == null) {
			pSVar23 = null;
			if (pSStack_60 == null) goto label_05bc6316;
	label_05bc62e7: ;
			pSVar13 = pSStack_60.SkinEye;
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar29 = pSVar13._value;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((*(ulong)((sbyte)pSStack_50 + 0x50)) == null) {
				throw new NullReferenceException();
			}
			pSVar23 = *(String*)((long)(*(ulong)((sbyte)pSStack_50 + 0x50)) + 0x20);
			if (pSStack_60 != null) goto label_05bc62e7;
	label_05bc6316: ;
			pSVar29 = null;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if ((bVar18 == false) || (pSStack_60 == null)) {
			if (pSStack_50 != null && (char)local_58 != false) {
				bVar20 = String.IsNullOrEmpty(pSVar23);
				goto label_05bc637c;
			}
	label_05bc6380: ;
			pSVar23 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else if ((pSStack_50 == null || (char)local_58 == false) ||(bVar20 = String.IsNullOrEmpty(pSVar23))) {
			bVar20 = String.IsNullOrEmpty(pSVar29);
			pSVar23 = pSVar29;
	label_05bc637c: ;
			if (bVar20 != false) goto label_05bc6380;
		}
		if ((uint)*piVar1 < 3) {
			throw new IndexOutOfRangeException();
		}
		value[2] = pSVar23;
		if (pSStack_50 == null) {
			pSVar23 = null;
			if (pSStack_60 == null) goto label_05bc6408;
	label_05bc63d9: ;
			pSVar13 = pSStack_60.SkinGlass;
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar29 = pSVar13._value;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		else {
			pSVar14 = (*(ulong)((sbyte)pSStack_50 + 0x58));
			if (pSVar14 == null) {
				throw new NullReferenceException();
			}
			pSVar23 = pSVar14.Header;
			if (pSStack_60 != null) goto label_05bc63d9;
	label_05bc6408: ;
			pSVar29 = null;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if ((bVar18 == false) || (pSStack_60 == null)) {
			if (pSStack_50 != null && (char)local_58 != false) {
				bVar20 = String.IsNullOrEmpty(pSVar23);
				goto label_05bc646e;
			}
	label_05bc6472: ;
			pSVar23 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else if ((pSStack_50 == null || (char)local_58 == false) ||(bVar20 = String.IsNullOrEmpty(pSVar23))) {
			bVar20 = String.IsNullOrEmpty(pSVar29);
			pSVar23 = pSVar29;
	label_05bc646e: ;
			if (bVar20 != false) goto label_05bc6472;
		}
		if ((*piVar1 & 0xfffffffc) == 0) {
			throw new IndexOutOfRangeException();
		}
		value[3] = pSVar23;
		if (pSStack_50 == null) {
			pSVar23 = null;
			if (pSStack_60 == null) goto label_05bc64fd;
	label_05bc64ce: ;
			pSVar13 = pSStack_60.SkinFace;
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar29 = pSVar13._value;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((*(ulong)((sbyte)pSStack_50 + 0x60)) == null) {
				throw new NullReferenceException();
			}
			pSVar23 = (((*(Il2CppClass*)((sbyte)pSStack_50 + 0x60)))._1).byval_arg.data;
			if (pSStack_60 != null) goto label_05bc64ce;
	label_05bc64fd: ;
			pSVar29 = null;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if ((bVar18 == false) || (pSStack_60 == null)) {
			if (pSStack_50 != null && (char)local_58 != false) {
				bVar20 = String.IsNullOrEmpty(pSVar23);
				goto label_05bc6563;
			}
	label_05bc6567: ;
			pSVar23 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else if ((pSStack_50 == null || (char)local_58 == false) ||(bVar20 = String.IsNullOrEmpty(pSVar23))) {
			bVar20 = String.IsNullOrEmpty(pSVar29);
			pSVar23 = pSVar29;
	label_05bc6563: ;
			if (bVar20 != false) goto label_05bc6567;
		}
		if ((uint)*piVar1 < 5) {
			throw new IndexOutOfRangeException();
		}
		value[4] = pSVar23;
		if (pSStack_50 == null) {
			pSVar23 = null;
			if (pSStack_60 == null) goto label_05bc65ef;
	label_05bc65c0: ;
			pSVar13 = pSStack_60.SkinSkin;
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar29 = pSVar13._value;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((*(ulong)((sbyte)pSStack_50 + 0x68)) == null) {
				throw new NullReferenceException();
			}
			pSVar23 = *(String*)((long)(*(ulong)((sbyte)pSStack_50 + 0x68)) + 0x20);
			if (pSStack_60 != null) goto label_05bc65c0;
	label_05bc65ef: ;
			pSVar29 = null;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if ((bVar18 == false) || (pSStack_60 == null)) {
			if (pSStack_50 != null && (char)local_58 != false) {
				bVar20 = String.IsNullOrEmpty(pSVar23);
				goto label_05bc6655;
			}
	label_05bc6659: ;
			pSVar23 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else if ((pSStack_50 == null || (char)local_58 == false) ||(bVar20 = String.IsNullOrEmpty(pSVar23))) {
			bVar20 = String.IsNullOrEmpty(pSVar29);
			pSVar23 = pSVar29;
	label_05bc6655: ;
			if (bVar20 != false) goto label_05bc6659;
		}
		if ((uint)*piVar1 < 6) {
			throw new IndexOutOfRangeException();
		}
		value[5] = pSVar23;
		if (pSStack_50 == null) {
			pSVar23 = null;
			if (pSStack_60 == null) goto label_05bc66e1;
	label_05bc66b2: ;
			pSVar13 = pSStack_60.SkinCostume;
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar29 = pSVar13._value;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		else {
			pSVar14 = (*(ulong)((sbyte)pSStack_50 + 0x70));
			if (pSVar14 == null) {
				throw new NullReferenceException();
			}
			pSVar23 = pSVar14.Header;
			if (pSStack_60 != null) goto label_05bc66b2;
	label_05bc66e1: ;
			pSVar29 = null;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if ((bVar18 == false) || (pSStack_60 == null)) {
			if (pSStack_50 != null && (char)local_58 != false) {
				bVar20 = String.IsNullOrEmpty(pSVar23);
				goto label_05bc6747;
			}
	label_05bc674b: ;
			pSVar23 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else if ((pSStack_50 == null || (char)local_58 == false) ||(bVar20 = String.IsNullOrEmpty(pSVar23))) {
			bVar20 = String.IsNullOrEmpty(pSVar29);
			pSVar23 = pSVar29;
	label_05bc6747: ;
			if (bVar20 != false) goto label_05bc674b;
		}
		if ((uint)*piVar1 < 7) {
			throw new IndexOutOfRangeException();
		}
		value[6] = pSVar23;
		if (pSStack_50 == null) {
			pSVar23 = null;
			if (pSStack_60 == null) goto label_05bc67d3;
	label_05bc67a4: ;
			pSVar13 = pSStack_60.SkinLogo;
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar29 = pSVar13._value;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((*(ulong)((sbyte)pSStack_50 + 0x78)) == null) {
				throw new NullReferenceException();
			}
			pSVar23 = (((*(Il2CppClass*)((sbyte)pSStack_50 + 0x78)))._1).byval_arg.data;
			if (pSStack_60 != null) goto label_05bc67a4;
	label_05bc67d3: ;
			pSVar29 = null;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if ((bVar18 == false) || (pSStack_60 == null)) {
			if (pSStack_50 != null && (char)local_58 != false) {
				bVar20 = String.IsNullOrEmpty(pSVar23);
				goto label_05bc6839;
			}
	label_05bc683d: ;
			pSVar23 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else if ((pSStack_50 == null || (char)local_58 == false) ||(bVar20 = String.IsNullOrEmpty(pSVar23))) {
			bVar20 = String.IsNullOrEmpty(pSVar29);
			pSVar23 = pSVar29;
	label_05bc6839: ;
			if (bVar20 != false) goto label_05bc683d;
		}
		if ((*piVar1 & 0xfffffff8) == 0) {
			throw new IndexOutOfRangeException();
		}
		value[7] = pSVar23;
		if (pSStack_50 == null) {
			pSVar23 = null;
			if (pSStack_60 == null) goto label_05bc68cb;
	label_05bc689c: ;
			pSVar13 = pSStack_60.SkinGearL;
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar29 = pSVar13._value;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((*(ulong)((sbyte)pSStack_50 + 0x80)) == null) {
				throw new NullReferenceException();
			}
			pSVar23 = *(String*)((long)(*(ulong)((sbyte)pSStack_50 + 0x80)) + 0x20);
			if (pSStack_60 != null) goto label_05bc689c;
	label_05bc68cb: ;
			pSVar29 = null;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if ((bVar18 == false) || (pSStack_60 == null)) {
			if (pSStack_50 != null && (char)local_58 != false) {
				bVar20 = String.IsNullOrEmpty(pSVar23);
				goto label_05bc6931;
			}
	label_05bc6935: ;
			pSVar23 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else if ((pSStack_50 == null || (char)local_58 == false) ||(bVar20 = String.IsNullOrEmpty(pSVar23))) {
			bVar20 = String.IsNullOrEmpty(pSVar29);
			pSVar23 = pSVar29;
	label_05bc6931: ;
			if (bVar20 != false) goto label_05bc6935;
		}
		if ((uint)*piVar1 < 9) {
			throw new IndexOutOfRangeException();
		}
		value[8] = pSVar23;
		if (pSStack_50 == null) {
			pSVar23 = null;
			if (pSStack_60 == null) goto label_05bc69c0;
	label_05bc6991: ;
			pSVar13 = pSStack_60.SkinGearR;
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar29 = pSVar13._value;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		else {
			pSVar14 = (*(ulong)((sbyte)pSStack_50 + 0x88));
			if (pSVar14 == null) {
				throw new NullReferenceException();
			}
			pSVar23 = pSVar14.Header;
			if (pSStack_60 != null) goto label_05bc6991;
	label_05bc69c0: ;
			pSVar29 = null;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if ((bVar18 == false) || (pSStack_60 == null)) {
			if (pSStack_50 != null && (char)local_58 != false) {
				bVar20 = String.IsNullOrEmpty(pSVar23);
				goto label_05bc6a26;
			}
	label_05bc6a2a: ;
			pSVar23 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else if ((pSStack_50 == null || (char)local_58 == false) ||(bVar20 = String.IsNullOrEmpty(pSVar23))) {
			bVar20 = String.IsNullOrEmpty(pSVar29);
			pSVar23 = pSVar29;
	label_05bc6a26: ;
			if (bVar20 != false) goto label_05bc6a2a;
		}
		if ((uint)*piVar1 < 10) {
			throw new IndexOutOfRangeException();
		}
		value[9] = pSVar23;
		if (pSStack_50 == null) {
			pSVar23 = null;
			if (pSStack_60 == null) goto label_05bc6ab5;
	label_05bc6a86: ;
			pSVar13 = pSStack_60.SkinGas;
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar29 = pSVar13._value;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((*(ulong)((sbyte)pSStack_50 + 0x90)) == null) {
				throw new NullReferenceException();
			}
			pSVar23 = (((*(Il2CppClass*)((sbyte)pSStack_50 + 0x90)))._1).byval_arg.data;
			if (pSStack_60 != null) goto label_05bc6a86;
	label_05bc6ab5: ;
			pSVar29 = null;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if ((bVar18 == false) || (pSStack_60 == null)) {
			if (pSStack_50 != null && (char)local_58 != false) {
				bVar20 = String.IsNullOrEmpty(pSVar23);
				goto label_05bc6b1b;
			}
	label_05bc6b1f: ;
			pSVar23 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else if ((pSStack_50 == null || (char)local_58 == false) ||(bVar20 = String.IsNullOrEmpty(pSVar23))) {
			bVar20 = String.IsNullOrEmpty(pSVar29);
			pSVar23 = pSVar29;
	label_05bc6b1b: ;
			if (bVar20 != false) goto label_05bc6b1f;
		}
		if ((uint)*piVar1 < 0xb) {
			throw new IndexOutOfRangeException();
		}
		value[10] = pSVar23;
		if (pSStack_50 == null) {
			pSVar23 = null;
			if (pSStack_60 == null) goto label_05bc6baa;
	label_05bc6b7b: ;
			pSVar13 = pSStack_60.SkinHoodie;
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar29 = pSVar13._value;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((*(ulong)((sbyte)pSStack_50 + 0x98)) == null) {
				throw new NullReferenceException();
			}
			pSVar23 = *(String*)((long)(*(ulong)((sbyte)pSStack_50 + 0x98)) + 0x20);
			if (pSStack_60 != null) goto label_05bc6b7b;
	label_05bc6baa: ;
			pSVar29 = null;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if ((bVar18 == false) || (pSStack_60 == null)) {
			if (pSStack_50 != null && (char)local_58 != false) {
				bVar20 = String.IsNullOrEmpty(pSVar23);
				goto label_05bc6c10;
			}
	label_05bc6c14: ;
			pSVar23 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else if ((pSStack_50 == null || (char)local_58 == false) ||(bVar20 = String.IsNullOrEmpty(pSVar23))) {
			bVar20 = String.IsNullOrEmpty(pSVar29);
			pSVar23 = pSVar29;
	label_05bc6c10: ;
			if (bVar20 != false) goto label_05bc6c14;
		}
		if ((uint)*piVar1 < 0xc) {
			throw new IndexOutOfRangeException();
		}
		value[0xb] = pSVar23;
		if (pSStack_50 == null) {
			pSVar23 = null;
			if (pSStack_60 == null) goto label_05bc6c9f;
	label_05bc6c70: ;
			pSVar13 = pSStack_60.SkinWeaponTrail;
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar29 = pSVar13._value;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		else {
			pSVar14 = (*(ulong)((sbyte)pSStack_50 + 0xa0));
			if (pSVar14 == null) {
				throw new NullReferenceException();
			}
			pSVar23 = pSVar14.Header;
			if (pSStack_60 != null) goto label_05bc6c70;
	label_05bc6c9f: ;
			pSVar29 = null;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if ((bVar18 == false) || (pSStack_60 == null)) {
			if (pSStack_50 != null && (char)local_58 != false) {
				bVar20 = String.IsNullOrEmpty(pSVar23);
				goto label_05bc6d05;
			}
	label_05bc6d09: ;
			pSVar23 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else if ((pSStack_50 == null || (char)local_58 == false) ||(bVar20 = String.IsNullOrEmpty(pSVar23))) {
			bVar20 = String.IsNullOrEmpty(pSVar29);
			pSVar23 = pSVar29;
	label_05bc6d05: ;
			if (bVar20 != false) goto label_05bc6d09;
		}
		if ((uint)*piVar1 < 0xd) {
			throw new IndexOutOfRangeException();
		}
		value[0xc] = pSVar23;
		if (pSStack_50 == null) {
			pSVar23 = null;
			if (pSStack_60 == null) goto label_05bc6d9a;
	label_05bc6d6b: ;
			pSVar13 = pSStack_60.SkinThunderspearL;
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar29 = pSVar13._value;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((*(ulong)((sbyte)pSStack_50 + 0xb0)) == null) {
				throw new NullReferenceException();
			}
			pSVar23 = *(String*)((long)(*(ulong)((sbyte)pSStack_50 + 0xb0)) + 0x20);
			if (pSStack_60 != null) goto label_05bc6d6b;
	label_05bc6d9a: ;
			pSVar29 = null;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if ((bVar18 == false) || (pSStack_60 == null)) {
			if (pSStack_50 != null && (char)local_58 != false) {
				bVar20 = String.IsNullOrEmpty(pSVar23);
				goto label_05bc6e00;
			}
	label_05bc6e04: ;
			pSVar23 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else if ((pSStack_50 == null || (char)local_58 == false) ||(bVar20 = String.IsNullOrEmpty(pSVar23))) {
			bVar20 = String.IsNullOrEmpty(pSVar29);
			pSVar23 = pSVar29;
	label_05bc6e00: ;
			if (bVar20 != false) goto label_05bc6e04;
		}
		if ((uint)*piVar1 < 0xe) {
			throw new IndexOutOfRangeException();
		}
		value[0xd] = pSVar23;
		if (pSStack_50 == null) {
			pSVar23 = null;
			if (pSStack_60 == null) goto label_05bc6e95;
	label_05bc6e66: ;
			pSVar13 = pSStack_60.SkinThunderspearR;
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar29 = pSVar13._value;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		else {
			pSVar14 = (*(ulong)((sbyte)pSStack_50 + 0xb8));
			if (pSVar14 == null) {
				throw new NullReferenceException();
			}
			pSVar23 = pSVar14.Header;
			if (pSStack_60 != null) goto label_05bc6e66;
	label_05bc6e95: ;
			pSVar29 = null;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if ((bVar18 == false) || (pSStack_60 == null)) {
			if (pSStack_50 != null && (char)local_58 != false) {
				bVar20 = String.IsNullOrEmpty(pSVar23);
				goto label_05bc6efb;
			}
	label_05bc6eff: ;
			pSVar23 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else if ((pSStack_50 == null || (char)local_58 == false) ||(bVar20 = String.IsNullOrEmpty(pSVar23))) {
			bVar20 = String.IsNullOrEmpty(pSVar29);
			pSVar23 = pSVar29;
	label_05bc6efb: ;
			if (bVar20 != false) goto label_05bc6eff;
		}
		if ((uint)*piVar1 < 0xf) {
			throw new IndexOutOfRangeException();
		}
		value[0xe] = pSVar23;
		local_44 = 1.0;
		local_48 = 1.0;
		if (pSStack_50 != null) {
			if ((*(ulong)((sbyte)pSStack_50 + 0xc8)) == null) {
				throw new NullReferenceException();
			}
			local_48 = *(float)((long)(*(ulong)((sbyte)pSStack_50 + 0xc8)) + 0x1c);
		}
		if (pSStack_60 != null) {
			pSVar15 = pSStack_60.SkinHookLTiling;
			if (pSVar15 == null) {
				throw new NullReferenceException();
			}
			local_44 = pSVar15._value;
		}
		if ((bVar18 == false) || (pSStack_60 == null)) {
			fVar31 = 1.0;
			if (pSStack_50 != null && (char)local_58 != false) {
				if (pSStack_60 != null) {
					fVar31 = 1.0;
					if (ABS(local_48 - local_44) < 0.001) goto label_05bc7057;
				}
				fVar31 = local_48;
			}
		}
		else {
			if (pSStack_50 != null && (char)local_58 != false) {
				local_44 = local_48;
			}
			fVar31 = local_44;
		}
	label_05bc7057: ;
		local_40 = fVar31;
		pSVar23 = local_40.ToString();
		if ((*piVar1 & 0xfffffff0) == 0) {
			throw new IndexOutOfRangeException();
		}
		value[0xf] = pSVar23;
		if (pSStack_50 == null) {
			pSVar23 = null;
			if (pSStack_60 == null) goto label_05bc70e5;
	label_05bc70b6: ;
			pSVar13 = pSStack_60.SkinHookL;
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar29 = pSVar13._value;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((*(ulong)((sbyte)pSStack_50 + 0xc0)) == null) {
				throw new NullReferenceException();
			}
			pSVar23 = (((*(Il2CppClass*)((sbyte)pSStack_50 + 0xc0)))._1).byval_arg.data;
			if (pSStack_60 != null) goto label_05bc70b6;
	label_05bc70e5: ;
			pSVar29 = null;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if ((bVar18 == false) || (pSStack_60 == null)) {
			if (pSStack_50 != null && (char)local_58 != false) {
				bVar20 = String.IsNullOrEmpty(pSVar23);
				goto label_05bc714b;
			}
	label_05bc714f: ;
			pSVar23 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else if ((pSStack_50 == null || (char)local_58 == false) ||(bVar20 = String.IsNullOrEmpty(pSVar23))) {
			bVar20 = String.IsNullOrEmpty(pSVar29);
			pSVar23 = pSVar29;
	label_05bc714b: ;
			if (bVar20 != false) goto label_05bc714f;
		}
		if ((uint)*piVar1 < 0x11) {
			throw new IndexOutOfRangeException();
		}
		value[0x10] = pSVar23;
		local_44 = 1.0;
		local_48 = 1.0;
		if (pSStack_50 != null) {
			if ((*(ulong)((sbyte)pSStack_50 + 0xd8)) == null) {
				throw new NullReferenceException();
			}
			local_48 = *(float)((long)&(((*(Il2CppClass*)((sbyte)pSStack_50 + 0xd8)))._1).namespaze + 4);
		}
		if (pSStack_60 != null) {
			pSVar15 = pSStack_60.SkinHookRTiling;
			if (pSVar15 == null) {
				throw new NullReferenceException();
			}
			local_44 = pSVar15._value;
		}
		if ((bVar18 == false) || (pSStack_60 == null)) {
			fVar31 = 1.0;
			if (pSStack_50 != null && (char)local_58 != false) {
				if (pSStack_60 != null) {
					fVar31 = 1.0;
					if (ABS(local_48 - local_44) < 0.001) goto label_05bc72a7;
				}
				fVar31 = local_48;
			}
		}
		else {
			if (pSStack_50 != null && (char)local_58 != false) {
				local_44 = local_48;
			}
			fVar31 = local_44;
		}
	label_05bc72a7: ;
		local_40 = fVar31;
		pSVar23 = local_40.ToString();
		if ((uint)*piVar1 < 0x12) {
			throw new IndexOutOfRangeException();
		}
		value[0x11] = pSVar23;
		if (pSStack_50 == null) {
			pSVar23 = null;
			if (pSStack_60 == null) goto label_05bc7332;
	label_05bc7303: ;
			pSVar13 = pSStack_60.SkinHookR;
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar29 = pSVar13._value;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		else {
			pSVar14 = (*(ulong)((sbyte)pSStack_50 + 0xd0));
			if (pSVar14 == null) {
				throw new NullReferenceException();
			}
			pSVar23 = pSVar14.Header;
			if (pSStack_60 != null) goto label_05bc7303;
	label_05bc7332: ;
			pSVar29 = null;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if ((bVar18 == false) || (pSStack_60 == null)) {
			if (pSStack_50 != null && (char)local_58 != false) {
				bVar20 = String.IsNullOrEmpty(pSVar23);
				goto label_05bc7398;
			}
	label_05bc739c: ;
			pSVar23 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else if ((pSStack_50 == null || (char)local_58 == false) ||(bVar20 = String.IsNullOrEmpty(pSVar23))) {
			bVar20 = String.IsNullOrEmpty(pSVar29);
			pSVar23 = pSVar29;
	label_05bc7398: ;
			if (bVar20 != false) goto label_05bc739c;
		}
		if ((uint)*piVar1 < 0x13) {
			throw new IndexOutOfRangeException();
		}
		value[0x12] = pSVar23;
		if (pSStack_50 == null) {
			pSVar23 = null;
			if (pSStack_60 == null) goto label_05bc742d;
	label_05bc73fe: ;
			pSVar13 = pSStack_60.SkinHat;
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar29 = pSVar13._value;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((*(ulong)((sbyte)pSStack_50 + 0xe0)) == null) {
				throw new NullReferenceException();
			}
			pSVar23 = *(String*)((long)(*(ulong)((sbyte)pSStack_50 + 0xe0)) + 0x20);
			if (pSStack_60 != null) goto label_05bc73fe;
	label_05bc742d: ;
			pSVar29 = null;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if ((bVar18 == false) || (pSStack_60 == null)) {
			if (pSStack_50 != null && (char)local_58 != false) {
				bVar20 = String.IsNullOrEmpty(pSVar23);
				goto label_05bc7493;
			}
	label_05bc7497: ;
			pSVar23 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else if ((pSStack_50 == null || (char)local_58 == false) ||(bVar20 = String.IsNullOrEmpty(pSVar23))) {
			bVar20 = String.IsNullOrEmpty(pSVar29);
			pSVar23 = pSVar29;
	label_05bc7493: ;
			if (bVar20 != false) goto label_05bc7497;
		}
		if ((uint)*piVar1 < 0x14) {
			throw new IndexOutOfRangeException();
		}
		value[0x13] = pSVar23;
		if (pSStack_50 == null) {
			pSVar23 = null;
			if (pSStack_60 == null) goto label_05bc7528;
	label_05bc74f9: ;
			pSVar13 = pSStack_60.SkinHead;
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar29 = pSVar13._value;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		else {
			pSVar14 = (*(ulong)((sbyte)pSStack_50 + 0xe8));
			if (pSVar14 == null) {
				throw new NullReferenceException();
			}
			pSVar23 = pSVar14.Header;
			if (pSStack_60 != null) goto label_05bc74f9;
	label_05bc7528: ;
			pSVar29 = null;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if ((bVar18 == false) || (pSStack_60 == null)) {
			if (pSStack_50 != null && (char)local_58 != false) {
				bVar20 = String.IsNullOrEmpty(pSVar23);
				goto label_05bc758e;
			}
	label_05bc7592: ;
			pSVar23 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else if ((pSStack_50 == null || (char)local_58 == false) ||(bVar20 = String.IsNullOrEmpty(pSVar23))) {
			bVar20 = String.IsNullOrEmpty(pSVar29);
			pSVar23 = pSVar29;
	label_05bc758e: ;
			if (bVar20 != false) goto label_05bc7592;
		}
		if ((uint)*piVar1 < 0x15) {
			throw new IndexOutOfRangeException();
		}
		value[0x14] = pSVar23;
		if (pSStack_50 == null) {
			pSVar23 = null;
			if (pSStack_60 == null) goto label_05bc7623;
	label_05bc75f4: ;
			pSVar13 = pSStack_60.SkinBack;
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar29 = pSVar13._value;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((*(ulong)((sbyte)pSStack_50 + 0xf0)) == null) {
				throw new NullReferenceException();
			}
			pSVar23 = (((*(Il2CppClass*)((sbyte)pSStack_50 + 0xf0)))._1).byval_arg.data;
			if (pSStack_60 != null) goto label_05bc75f4;
	label_05bc7623: ;
			pSVar29 = null;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if ((bVar18 == false) || (pSStack_60 == null)) {
			if (pSStack_50 != null && (char)local_58 != false) {
				bVar20 = String.IsNullOrEmpty(pSVar23);
				goto label_05bc7689;
			}
	label_05bc768d: ;
			pSVar23 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else if ((pSStack_50 == null || (char)local_58 == false) ||(bVar20 = String.IsNullOrEmpty(pSVar23))) {
			bVar20 = String.IsNullOrEmpty(pSVar29);
			pSVar23 = pSVar29;
	label_05bc7689: ;
			if (bVar20 != false) goto label_05bc768d;
		}
		if ((uint)*piVar1 < 0x16) {
			throw new IndexOutOfRangeException();
		}
		value[0x15] = pSVar23;
		if (pSStack_50 == null) {
			pSVar23 = null;
			if (pSStack_60 == null) goto label_05bc771e;
	label_05bc76ef: ;
			pSVar13 = pSStack_60.SkinCloak;
			if (pSVar13 == null) {
				throw new NullReferenceException();
			}
			pSVar29 = pSVar13._value;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((*(ulong)((sbyte)pSStack_50 + 0xf8)) == null) {
				throw new NullReferenceException();
			}
			pSVar23 = *(String*)((long)(*(ulong)((sbyte)pSStack_50 + 0xf8)) + 0x20);
			if (pSStack_60 != null) goto label_05bc76ef;
	label_05bc771e: ;
			pSVar29 = null;
			uVar3 = (typeof(Human)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		if ((bVar18 == false) || (pSStack_60 == null)) {
			if (pSStack_50 != null && (char)local_58 != false) {
				bVar18 = String.IsNullOrEmpty(pSVar23);
				goto label_05bc7784;
			}
		}
		else {
			if ((pSStack_50 != null && (char)local_58 != false) &&(bVar18 = String.IsNullOrEmpty(pSVar23), !bVar18)) goto label_05bc77a0;
			bVar18 = String.IsNullOrEmpty(pSVar29);
			pSVar23 = pSVar29;
	label_05bc7784: ;
			if (bVar18 == false) goto label_05bc77a0;
		}
		pSVar23 = (String)**(ulong*)(g_data_07556758 + 0xb8);
	label_05bc77a0: ;
		if ((uint)*piVar1 < 0x17) {
			throw new IndexOutOfRangeException();
		}
		value[0x16] = pSVar23;
		pSVar23 = String.Join(",", value);
		pCVar16 = this.Horse;
		bVar18 = ((Object)pCVar16 != null);
		local_3c = -1;
		if (bVar18) {
			pCVar16 = this.Horse;
			if (pCVar16 == null) {
				throw new NullReferenceException();
			}
			go = pCVar16.gameObject;
			pPVar24 = PunExtensions.GetPhotonView(go);
			if (pPVar24 == null) {
				throw new NullReferenceException();
			}
			local_3c = pPVar24.viewIdField;
		}
		pUVar17 = this.Cache;
		if (local_38 == null) {
			if (pUVar17 == null) {
				throw new NullReferenceException();
			}
			pPVar24 = pUVar17.PhotonView;
			pSVar25 = (Object[])new object[2];
			pIVar26 = (object)local_3c;
			if (pSVar25 == null) {
				throw new NullReferenceException();
			}
			if ((pIVar26 != null) &&(pIVar27 = il2cpp_vm_Object_IsInst(pIVar26, (((pSVar25.obj).klass)._1).element_class), pIVar27 == null)) {
				pIVar26 = new ArrayTypeMismatchException();
				throw pIVar26;
			}
			if ((int)pSVar25.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pSVar25[0] = pIVar26;
			if ((pSVar23 != null) &&(pIVar26 = il2cpp_vm_Object_IsInst((object)pSVar23, (((pSVar25.obj).klass)._1).element_class), pIVar26 == null)) {
				pIVar26 = new ArrayTypeMismatchException();
				throw pIVar26;
			}
			if ((pSVar25.Length & 0xfffffffe) == 0) {
				throw new IndexOutOfRangeException();
			}
			pSVar25[1] = (object)pSVar23;
			if (pPVar24 == null) {
				throw new NullReferenceException();
			}
			pPVar24.RPC("LoadSkinRPC", 0, pSVar25);
		}
		else {
			if (pUVar17 == null) {
				throw new NullReferenceException();
			}
			pPVar24 = pUVar17.PhotonView;
			pSVar25 = (Object[])new object[2];
			pIVar26 = (object)local_3c;
			if (pSVar25 == null) {
				throw new NullReferenceException();
			}
			if ((pIVar26 != null) &&(pIVar27 = il2cpp_vm_Object_IsInst(pIVar26, (((pSVar25.obj).klass)._1).element_class), pIVar27 == null)) {
				pIVar26 = new ArrayTypeMismatchException();
				throw pIVar26;
			}
			if ((int)pSVar25.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pSVar25[0] = pIVar26;
			targetPlayer = local_38;
			if ((pSVar23 != null) &&(pIVar26 = il2cpp_vm_Object_IsInst((object)pSVar23, (((pSVar25.obj).klass)._1).element_class), pIVar26 == null)) {
				pIVar26 = new ArrayTypeMismatchException();
				throw pIVar26;
			}
			if ((pSVar25.Length & 0xfffffffe) == 0) {
				throw new IndexOutOfRangeException();
			}
			pSVar25[1] = (object)pSVar23;
			if (pPVar24 == null) {
				throw new NullReferenceException();
			}
			pPVar24.RPC("LoadSkinRPC", targetPlayer, pSVar25);
		}
		return;
	}

	[Token(Token = "0x6004179")]
	[Address(RVA = "0x5ADB960", Offset = "0x5ADA960", VA = "0x5ADB960")]
	[PunRPC]
	public void LoadSkinRPC(int horse, string url, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$LoadSkinRPC): 2 lines keep C-only constructs
		CustomSkinSettings pSVar1;
		HumanCustomSkinSettings pSVar2;
		BoolSetting pSVar3;
		HumanCustomSkinLoader pCVar4;
		PhotonView pPVar5;
		Object[] pSVar6;
		object pIVar7;
		object pIVar8;
		IEnumerator routine;
		int iStack_2c;

		pPVar5 = this.photonView;
		if (pPVar5 == null) goto label_05bdbb4a;
		if (info.Sender != pPVar5._Owner_k__BackingField) {
			return;
		}
		if (this.FinishSetup == false) {
			return;
		}
		pSVar1 = SettingsManager.CustomSkinSettings;
		if (((pSVar1 == null) ||(pSVar2 = pSVar1.Human, pSVar2 == null)) ||(pSVar3 = pSVar2.SkinsEnabled, pSVar3 == null)) goto label_05bdbb4a;
		if (pSVar3._value == false) {
	label_05bdbb35: ;
			pCVar4 = this._customSkinLoader;
			if (pCVar4 != null) {
				pCVar4.Finished = true;
				return;
			}
		}
		else {
			pSVar3 = pSVar2.SkinsLocal;
			if (pSVar3 == null) goto label_05bdbb4a;
			if (pSVar3._value != false) {
				pPVar5 = this.photonView;
				if (pPVar5 == null) goto label_05bdbb4a;
				if (pPVar5._IsMine_k__BackingField == false) goto label_05bdbb35;
			}
			pCVar4 = this._customSkinLoader;
			pSVar6 = (Object[])new object[2];
			iStack_2c = horse;
			pIVar7 = (object)iStack_2c;
			if (pSVar6 != null) {
				if ((pIVar7 != null) &&(pIVar8 = il2cpp_vm_Object_IsInst(pIVar7, (((pSVar6.obj).klass)._1).element_class), pIVar8 == null)) {
	label_05bdbb54: ;
					pIVar7 = new ArrayTypeMismatchException();
					throw pIVar7;
				}
				if ((int)pSVar6.Length != 0) {
					pSVar6[0] = pIVar7;
					if ((url != null) &&(pIVar7 = il2cpp_vm_Object_IsInst((object)url, (((pSVar6.obj).klass)._1).element_class), pIVar7 == null)) goto label_05bdbb54;
					if ((pSVar6.Length & 0xfffffffe) != 0) {
						pSVar6[1] = (object)url;
						if (pCVar4 != null) {
							routine = pCVar4.LoadSkinsFromRPC(pSVar6);
							this.StartCoroutine(routine);
							return;
						}
						goto label_05bdbb4a;
					}
				}
				throw new IndexOutOfRangeException();
			}
		}
	label_05bdbb4a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600417A")]
	[Address(RVA = "0x5ADBB70", Offset = "0x5ADAB70", VA = "0x5ADBB70")]
	[PunRPC]
	public void SetHookStateRPC(bool left, int hookId, int state, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$SetHookStateRPC): clean
		List<Hook> __this_00;
		PhotonView pPVar1;
		HookUseable pCVar2;
		Hook __this_01;

		pPVar1 = this.photonView;
		if (pPVar1 != null) {
			if ((info.Sender != pPVar1._Owner_k__BackingField) ||(this.FinishSetup == false)) {
				return;
			}
			if (left) {
				pCVar2 = this.HookLeft;
			}
			else {
				pCVar2 = this.HookRight;
			}
			if ((pCVar2 != null) &&(__this_00 = pCVar2.Hooks, __this_00 != null)) {
				__this_01 = __this_00.get_Item(hookId);
				if (__this_01 != null) {
					__this_01.OnSetHookState(state, info);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600417B")]
	[Address(RVA = "0x5ADBC30", Offset = "0x5ADAC30", VA = "0x5ADBC30")]
	[PunRPC]
	public void SetHookingRPC(bool left, int hookId, Vector3 baseVelocity, Vector3 relativeVelocity, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$SetHookingRPC): clean
		List<Hook> __this_00;
		PhotonView pPVar1;
		HookUseable pCVar2;
		Hook __this_01;

		pPVar1 = this.photonView;
		if (pPVar1 != null) {
			if ((info.Sender != pPVar1._Owner_k__BackingField) ||(this.FinishSetup == false)) {
				return;
			}
			if (left) {
				pCVar2 = this.HookLeft;
			}
			else {
				pCVar2 = this.HookRight;
			}
			if ((pCVar2 != null) &&(__this_00 = pCVar2.Hooks, __this_00 != null)) {
				__this_01 = __this_00.get_Item(hookId);
				if (__this_01 != null) {
					__this_01.OnSetHooking(baseVelocity, relativeVelocity, info);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600417C")]
	[Address(RVA = "0x5ADBD20", Offset = "0x5ADAD20", VA = "0x5ADBD20")]
	[PunRPC]
	public void SetHookedRPC(bool left, int hookId, Vector3 position, int viewId, int objectId, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$SetHookedRPC): clean
		List<Hook> __this_00;
		PhotonView pPVar1;
		HookUseable pCVar2;
		Hook __this_01;

		pPVar1 = this.photonView;
		if (pPVar1 != null) {
			if ((info.Sender != pPVar1._Owner_k__BackingField) ||(this.FinishSetup == false)) {
				return;
			}
			if (left) {
				pCVar2 = this.HookLeft;
			}
			else {
				pCVar2 = this.HookRight;
			}
			if ((pCVar2 != null) &&(__this_00 = pCVar2.Hooks, __this_00 != null)) {
				__this_01 = __this_00.get_Item(hookId);
				if (__this_01 != null) {
					__this_01.OnSetHooked(position, viewId, objectId, info);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600417D")]
	[Address(RVA = "0x5AC2810", Offset = "0x5AC1810", VA = "0x5AC2810")]
	private void SetSmoke(bool active)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$SetSmoke): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		bool bVar2;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		byte local_19;

		bVar2 = this.IsMine();
		if ((!bVar2) || (this._smokeActive == active)) {
			return;
		}
		this._smokeActive = active;
		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			__this_00 = pUVar1.PhotonView;
			parameters = (Object[])new object[1];
			local_19 = active;
			pIVar3 = (object)local_19;
			if (parameters != null) {
				if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) {
					pIVar3 = new ArrayTypeMismatchException();
					throw pIVar3;
				}
				if ((int)parameters.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				parameters[0] = pIVar3;
				if (__this_00 != null) {
					__this_00.RPC("SetSmokeRPC", 0, parameters);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600417E")]
	[Address(RVA = "0x5ADBE10", Offset = "0x5ADAE10", VA = "0x5ADBE10")]
	[PunRPC]
	public void SetSmokeRPC(bool active, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$SetSmokeRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		HumanComponentCache pCVar3;
		bool toggle;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
			if ((info.Sender != pPVar2._Owner_k__BackingField) ||(this.FinishSetup == false)) {
				return;
			}
			pCVar3 = this.HumanCache;
			if (pCVar3 != null) {
				if (active) {
					toggle = this._gasEffectEnabled != false;
				}
				else {
					toggle = false;
				}
				this.ToggleParticles(pCVar3.Smoke, toggle);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600417F")]
	[Address(RVA = "0x5AC0610", Offset = "0x5ABF610", VA = "0x5AC0610")]
	protected void ToggleSparks(bool toggle)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ToggleSparks): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		bool bVar2;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		byte local_19;

		bVar2 = this.IsMine();
		if (bVar2) {
			this.ToggleSoundLoop(HumanSounds.Slide, toggle);
			if (this._sparksActive != toggle) {
				this._sparksActive = toggle;
				pUVar1 = this.Cache;
				if (pUVar1 != null) {
					__this_00 = pUVar1.PhotonView;
					parameters = (Object[])new object[1];
					local_19 = toggle;
					pIVar3 = (object)local_19;
					if (parameters != null) {
						if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) {
							pIVar3 = new ArrayTypeMismatchException();
							throw pIVar3;
						}
						if ((int)parameters.Length == 0) {
							throw new IndexOutOfRangeException();
						}
						parameters[0] = pIVar3;
						if (__this_00 != null) {
							__this_00.RPC("ToggleSparksRPC", 0, parameters);
							return;
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6004180")]
	[Address(RVA = "0x5ADBE80", Offset = "0x5ADAE80", VA = "0x5ADBE80")]
	[PunRPC]
	protected void ToggleSparksRPC(bool toggle, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ToggleSparksRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		HumanComponentCache pCVar3;
		bool toggle_00;

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
			if ((info.Sender != pPVar2._Owner_k__BackingField) ||(this.FinishSetup == false)) {
				return;
			}
			pCVar3 = this.HumanCache;
			if (pCVar3 != null) {
				if (toggle) {
					toggle_00 = this.EffectsEnabled != false;
				}
				else {
					toggle_00 = false;
				}
				this.ToggleParticles(pCVar3.Sparks, toggle_00);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004181")]
	[Address(RVA = "0x5ABEE10", Offset = "0x5ABDE10", VA = "0x5ABEE10")]
	public void SetThunderspears(bool hasLeft, bool hasRight)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$SetThunderspears): 2 lines keep C-only constructs
		bool bVar1;
		PhotonView __this_00;
		Object[] parameters;
		object pIVar2;
		object pIVar3;
		byte local_2a;
		byte local_29;

		bVar1 = this.IsMine();
		if (!bVar1) {
			return;
		}
		__this_00 = this.photonView;
		parameters = (Object[])new object[2];
		local_29 = hasLeft;
		pIVar2 = (object)local_29;
		if (parameters == null) {
	label_05bbef66: ;
			throw new NullReferenceException();
		}
		if ((pIVar2 != null) &&(pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((parameters.obj).klass)._1).element_class), pIVar3 == null)) {
	label_05bbef6b: ;
			pIVar2 = new ArrayTypeMismatchException();
			throw pIVar2;
		}
		if ((int)parameters.Length != 0) {
			parameters[0] = pIVar2;
			local_2a = hasRight;
			pIVar2 = (object)local_2a;
			if ((pIVar2 != null) &&(pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((parameters.obj).klass)._1).element_class), pIVar3 == null)) goto label_05bbef6b;
			if ((parameters.Length & 0xfffffffe) != 0) {
				parameters[1] = pIVar2;
				if (__this_00 != null) {
					__this_00.RPC("SetThunderspearsRPC", 0, parameters);
					return;
				}
				goto label_05bbef66;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6004182")]
	[Address(RVA = "0x5ADBEF0", Offset = "0x5ADAEF0", VA = "0x5ADBEF0")]
	[PunRPC]
	public void SetThunderspearsRPC(bool hasLeft, bool hasRight, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$SetThunderspearsRPC): clean
		HumanSetup pCVar1;
		Object pUVar2;
		GameObject pUVar3;
		bool bVar4;
		PhotonView pPVar5;

		pPVar5 = this.photonView;
		if (pPVar5 != null) {
			if ((info.Sender != pPVar5._Owner_k__BackingField) ||(this.FinishSetup == false)) {
				return;
			}
			pCVar1 = this.Setup;
			if (pCVar1 != null) {
				pUVar2 = (Object)pCVar1._part_blade_l;
				bVar4 = (pUVar2 != null);
				if (bVar4) {
					pCVar1 = this.Setup;
					if (pCVar1 == null) goto label_05bdc047;
					pUVar3 = pCVar1._part_blade_l;
					if (hasLeft) {
						bVar4 = this.Sheathed == false;
					}
					else {
						bVar4 = false;
					}
					if (pUVar3 == null) goto label_05bdc047;
					pUVar3.SetActive(bVar4);
				}
				pCVar1 = this.Setup;
				if (pCVar1 != null) {
					pUVar2 = (Object)pCVar1._part_blade_r;
					bVar4 = (pUVar2 != null);
					if (!bVar4) {
						return;
					}
					pCVar1 = this.Setup;
					if (pCVar1 != null) {
						pUVar3 = pCVar1._part_blade_r;
						if (hasRight) {
							bVar4 = this.Sheathed == false;
						}
						else {
							bVar4 = false;
						}
						if (pUVar3 != null) {
							pUVar3.SetActive(bVar4);
							return;
						}
					}
				}
			}
		}
	label_05bdc047: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004183")]
	[Address(RVA = "0x5AD1210", Offset = "0x5AD0210", VA = "0x5AD1210")]
	public void ClearDashPerkCDs()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ClearDashPerkCDs): clean
		HumanStats pCVar1;
		DivisivePowerPerk pAVar2;
		OmniDashPerk pCVar3;
		bool bVar4;

		pCVar1 = this.Stats;
		if ((pCVar1 == null) ||(pAVar2 = (DivisivePowerPerk)pCVar1.OmniDashPerk, pAVar2 == null)) goto label_05bd128f;
		bVar4 = pAVar2.PerkEnabled;
		pCVar1 = this.Stats;
		if (bVar4) {
			if (pCVar1 == null) goto label_05bd128f;
			pCVar3 = pCVar1.OmniDashPerk;
		}
		else {
			if ((pCVar1 == null) ||(pAVar2 = (DivisivePowerPerk)pCVar1.VerticalDashPerk, pAVar2 == null)) goto label_05bd128f;
			bVar4 = pAVar2.PerkEnabled ;
			if (!bVar4) {
				return;
			}
			pCVar1 = this.Stats;
			if (pCVar1 == null) goto label_05bd128f;
			pCVar3 = (OmniDashPerk)pCVar1.VerticalDashPerk;
		}
		if (pCVar3 != null) {
			pCVar3.Reset();
			return;
		}
	label_05bd128f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004184")]
	[Address(RVA = "0x5ADC050", Offset = "0x5ADB050", VA = "0x5ADC050")]
	public void OnHooked(bool left, Vector3 position)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$OnHooked): 46 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		int iVar7;
		InputSettings pSVar8;
		HumanInputSettings pSVar9;
		BoolSetting pSVar10;
		BaseComponentCache pUVar11;
		PhotonView __this_00;
		Transform pUVar12;
		HookUseable pCVar13;
		HumanSetup pCVar14;
		Rigidbody pUVar15;
		byte[] auVar16 = new byte[16];
		ulong uVar17;
		bool bVar18;
		uint uVar19;
		Object[] parameters;
		UnityEngine_Vector3_StaticFields pUVar20;
		long lVar21;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo pMVar22;
		undefined7 in_register_00000031;
		float fVar23;
		uint uVar24;
		uint extraout_XMM0_Db;
		uint in_XMM0_Dc;
		float extraout_XMM0_Dc;
		uint in_XMM0_Dd;
		float extraout_XMM0_Dd;
		float fVar25;
		float fVar26;
		byte[] auVar27 = new byte[16];
		Quaternion value;
		Vector3 UVar28;
		ulong local_58;
		byte[] local_30 = new byte[12];
		float fStack_24;
		float fStack_20;
		float fStack_1c;

		pMVar22 = (MethodInfo)CONCAT71(in_register_00000031, left);
		fStack_20 = (float)in_XMM0_Dc;
		fStack_1c = (float)in_XMM0_Dd;
		pSVar8 = SettingsManager.InputSettings;
		if (((pSVar8 == null) ||(pSVar9 = pSVar8.Human, pSVar9 == null)) ||(pSVar10 = pSVar9.ReelInHolding, pSVar10 == null)) goto label_05bdc7c4;
		if (pSVar10._value == false) {
			this._reelInWaitForRelease = false;
			this.ClearDashPerkCDs();
			pMVar22 = extraout_RDX_00;
			if (left) goto label_05bdc103;
	label_05bdc13c: ;
			this._launchRight = true;
			this._launchRightTime = 0.0;
			uVar19 = this._state;
		}
		else {
			this.ClearDashPerkCDs();
			pMVar22 = extraout_RDX;
			if (!left) goto label_05bdc13c;
	label_05bdc103: ;
			this._launchLeft = true;
			this._launchLeftTime = 0.0;
			uVar19 = this._state;
		}
		if ((uVar19 | 8) == 0xf) {
			return;
		}
		if (this.MountState != 0) {
			this.Unmount(true);
		}
		if (this.CarryState == 1) {
			pUVar11 = this.Cache;
			if (pUVar11 == null) goto label_05bdc7c4;
			__this_00 = pUVar11.PhotonView;
			parameters = (Object[])new object[0];
			if (__this_00 == null) goto label_05bdc7c4;
			__this_00.RPC("UncarryRPC", 0, parameters);
		}
		uVar19 = this._state;
		if ((uVar19 | 8) != 9) {
			if ((uVar19 & 0xfffffffe) == 2) {
				this._dashTimeLeft = 0.0;
			}
			this._state = 0;
			this.CrossFade(this.StandAnimation, 0.1, 0.0) ;
		}
		pUVar11 = this.Cache;
		if ((pUVar11 == null) ||(pUVar12 = pUVar11.Transform, pUVar12 == null)) goto label_05bdc7c4;
		UVar28 = pUVar12.position;
		if (Il2CppMethodInitialized_0753e72d == false) {
			Il2CppMethodInitialized_0753e72d = true;
			local_30._0_4_ = 0.0;
			local_30._4_4_ = 0.0;
		}
		else {
			local_30._0_4_ = 0.0;
			local_30._4_4_ = 0.0;
		}
		local_30._0_4_ = 0.0;
		local_30._4_4_ = 0.0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			local_30._0_4_ = 0.0;
			local_30._4_4_ = 0.0;
			Il2CppMethodInitialized_0753e729 = true;
		}
		auVar27._0_4_ = (float)local_30._8_4_ - UVar28.x;
		auVar27._4_4_ = fStack_24 - UVar28.y;
		auVar27._8_4_ = fStack_20 - extraout_XMM0_Dc;
		auVar27._12_4_ = fStack_1c - extraout_XMM0_Dd;
		fVar26 = position.z - UVar28.z;
		uVar24 = 0;
		fVar23 = fVar26 * fVar26 + auVar27._4_4_ * auVar27._4_4_ + auVar27._0_4_ * auVar27._0_4_;
		if (fVar23 < 0.0) {
			fVar23 = sqrtf(fVar23);
			uVar24 = extraout_XMM0_Db;
			if (fVar23 <= 1e-05) goto label_05bdc2c6;
	label_05bdc302: ;
			fVar26 = fVar26 / fVar23;
			auVar16._4_4_ = fVar23;
			auVar16._0_4_ = fVar23;
			auVar16._8_4_ = uVar24;
			auVar16._12_4_ = uVar24;
			auVar27 = divps(auVar27, auVar16);
			local_30._0_4_ = auVar27._0_4_;
			local_30._4_4_ = auVar27._4_4_;
			pUVar20 = (UnityEngine_Vector3_StaticFields)local_30;
		}
		else {
			fVar23 = SQRT(fVar23);
			if (1e-05 < fVar23) goto label_05bdc302;
	label_05bdc2c6: ;
			pUVar20 = typeof(Vector3).static_fields;
			fVar26 = (pUVar20.zeroVector).z;
		}
		pCVar13 = this.HookLeft;
		if (pCVar13 == null) goto label_05bdc7c4;
		uVar1 = (pUVar20.zeroVector).x;
		uVar4 = (pUVar20.zeroVector).y;
		local_58 = CONCAT44((float)uVar4 * 20.0, (float)uVar1 * 20.0);
		fVar26 = fVar26 * 20.0;
		pMVar22 = null;
		bVar18 = pCVar13.IsHooked();
		if (bVar18) {
			pCVar13 = this.HookRight;
			if (pCVar13 == null) goto label_05bdc7c4;
			pMVar22 = null;
			bVar18 = pCVar13.IsHooked();
			if (!bVar18) goto label_05bdc397;
			local_58 = CONCAT44((float)uVar4 * 20.0 * 0.8, (float)uVar1 * 20.0 * 0.8);
			fVar26 = fVar26 * 0.8;
			iVar7 = this._state;
			uVar17 = local_58;
		}
		else {
	label_05bdc397: ;
			iVar7 = this._state;
			uVar17 = local_58;
		}
		if (iVar7 != 9) {
			this.FalseAttack();
			uVar19 = this._state;
			if ((uVar19 | 8) == 9) {
				this.FalseAttack();
				uVar19 = this._state;
			}
			if ((uVar19 & 0xfffffffe) == 2) {
				this._dashTimeLeft = 0.0;
			}
			this._state = 0;
			pMVar22 = (MethodInfo)this.StandAnimation;
			this.CrossFade((String)pMVar22, 0.1, 0.0);
			pCVar14 = this.Setup;
			if (pCVar14 == null) goto label_05bdc7c4;
			if ((pCVar14.Weapon | 2U) == 3) {
				lVar21 = 200;
			}
			else if (left) {
				bVar18 = this.IsHookedRight();
				if (bVar18) goto label_05bdc502;
				lVar21 = 0x140;
			}
			else {
				bVar18 = this.IsHookedLeft();
				if (bVar18) {
	label_05bdc502: ;
					lVar21 = 0x90;
				}
				else {
					lVar21 = 0x148;
				}
			}
			this.CrossFade(*(String*)((long)&HumanAnimations.HorseMount + lVar21), 0.1, 0.0);
		}
		local_58._4_4_ = (float)((ulong)uVar17 >> 0x20);
		if (local_58._4_4_ < 30.0) {
			pUVar20 = typeof(Vector3).static_fields;
			uVar2 = (pUVar20.upVector).x;
			uVar5 = (pUVar20.upVector).y;
			fVar23 = 30.0 - local_58._4_4_;
			local_58._0_4_ = (float)uVar17;
			local_58 = CONCAT44(local_58._4_4_ + fVar23 * (float)uVar5, (float)local_58 + fVar23 * (float)uVar2);
			fVar26 = fVar26 + (pUVar20.upVector).z * fVar23;
			uVar17 = local_58;
		}
		local_58 = uVar17;
		pUVar11 = this.Cache;
		if ((pUVar11 != null) &&(pUVar12 = pUVar11.Transform, pUVar12 != null)) {
			fVar23 = fStack_24;
			UVar28 = pUVar12.position;
			if (UVar28.y <= fVar23) {
				pUVar11 = this.Cache;
				if ((pUVar11 == null) ||(pUVar12 = pUVar11.Transform, pUVar12 == null)) goto label_05bdc7c4;
				pUVar20 = typeof(Vector3).static_fields;
				uVar3 = (pUVar20.upVector).x;
				uVar6 = (pUVar20.upVector).y;
				fVar23 = (pUVar20.upVector).z;
				UVar28 = pUVar12.position;
				fVar25 = fStack_24 - UVar28.y;
				local_58 = CONCAT44(local_58._4_4_ + fVar25 * (float)uVar6 * 10.0, (float)local_58 + fVar25 * (float)uVar3 * 10.0);
				fVar26 = fVar26 + fVar23 * fVar25 * 10.0;
			}
			pUVar11 = this.Cache;
			if ((pUVar11 != null) &&(pUVar15 = pUVar11.Rigidbody, pUVar15 != null)) {
				UVar28.z = fVar26;
				UVar28.x = (float)local_58;
				UVar28.y = local_58._4_4_;
				pUVar15.AddForce(UVar28);
				fVar26 = atan2f((float)local_58, fVar26);
				this.TargetAngle = fVar26 * 57.29578;
				value = (Quaternion)this.GetTargetRotation();
				this._targetRotation = value;
				pUVar11 = this.Cache;
				if ((pUVar11 != null) &&(pUVar12 = pUVar11.Transform, pUVar12 != null)) {
					pUVar12.rotation = (Quaternion)value;
					pUVar11 = this.Cache;
					if ((pUVar11 != null) &&(pUVar15 = pUVar11.Rigidbody, pUVar15 != null)) {
						pUVar15.rotation = (Quaternion)this._targetRotation;
						this.ToggleSparks(false);
						this._cancelGasDisable = true;
						return;
					}
				}
			}
		}
	label_05bdc7c4: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004185")]
	[Address(RVA = "0x5ADC7D0", Offset = "0x5ADB7D0", VA = "0x5ADC7D0")]
	public void OnHookedHuman(bool left, Vector3 position, Human human)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$OnHookedHuman): 26 lines keep C-only constructs
		int iVar1;
		BaseComponentCache pUVar2;
		PhotonView __this_00;
		Player targetPlayer;
		PhotonView pPVar3;
		Transform __this_01;
		Rigidbody pUVar4;
		bool bVar5;
		Object[] parameters;
		object value;
		MethodInfo method_00;
		CustomLogicMathBuiltin __this_02;
		float fVar6;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		uint uVar7;
		Vector3 UVar8;
		Vector3 force;
		byte[] local_68 = new byte[12];
		int local_5c;
		byte[] local_58 = new byte[16];
		float local_48;
		ulong local_38;

		local_48 = position.z;
		local_58._8_4_ = in_XMM0_Dc;
		local_58._0_8_ = position._0_8_;
		local_58._12_4_ = in_XMM0_Dd;
		iVar1 = this._state;
		if (iVar1 == 7) {
			return;
		}
		if (this.MountState == 2) {
			return;
		}
		if (iVar1 == 0xf) {
			return;
		}
		local_38 = CONCAT44(local_38._4_4_, (float)local_38);
		if (human == null) goto label_05bdca98;
		if (human.Dead == false) {
			bVar5 = ((Object)human != (Object)this);
			if (bVar5) {
				this._hookHuman = human;
				this._hookHumanLeft = left;
				pUVar2 = human.Cache;
				local_38 = CONCAT44(local_38._4_4_, (float)local_38);
				if ((pUVar2 != null) &&(__this_00 = pUVar2.PhotonView, local_38 = CONCAT44(local_38._4_4_, (float)local_38), __this_00 != null)) {
					targetPlayer = __this_00._Owner_k__BackingField;
					parameters = (Object[])new object[1];
					pUVar2 = this.Cache;
					local_38 = CONCAT44(local_38._4_4_, (float)local_38);
					if ((pUVar2 != null) &&(pPVar3 = pUVar2.PhotonView, local_38 = CONCAT44(local_38._4_4_, (float)local_38), pPVar3 != null)) {
						local_5c = pPVar3.viewIdField;
						value = (object)local_5c;
						local_38 = CONCAT44(local_38._4_4_, (float)local_38);
						if (parameters != null) {
							il2cpp_codegen_array_element_type_check((Array)parameters, value);
							il2cpp_runtime_helper_02ac8d90(parameters, 0, value);
							__this_00.RPC("OnHookedByHuman", targetPlayer, parameters);
							pUVar2 = this.Cache;
							local_38 = CONCAT44(local_38._4_4_, (float)local_38);
							if ((pUVar2 != null) &&(__this_01 = pUVar2.Transform, local_38 = CONCAT44(local_38._4_4_, (float)local_38), __this_01 != null)) {
								UVar8 = __this_01.position;
								__this_02 = (CustomLogicMathBuiltin)local_68;
								local_68._0_8_ = CONCAT44((float)local_58._4_4_ - UVar8.y, (float)local_58._0_4_ - UVar8.x);
								local_68._8_4_ = local_48 - UVar8.z;
								method_00 = null;
								fVar6 = (float)il2cpp_runtime_helper_0599adc0();
								uVar7 = 0x3dcccccd;
								fVar6 = powf(__this_02, fVar6, 0.1, method_00);
								if (this.Grounded != false) {
									pUVar2 = this.Cache;
									local_48 = fVar6;
									if (pUVar2 == null) goto label_05bdca98;
									pUVar4 = pUVar2.Rigidbody;
									local_38 = il2cpp_runtime_helper_05bbcf10(0);
									local_58._0_4_ = uVar7;
									fVar6 = (float)il2cpp_runtime_helper_0599adc0(local_68, 0);
									if (pUVar4 == null) goto label_05bdca98;
									fVar6 = fVar6 * 0.2;
									if (10.0 <= fVar6) {
										fVar6 = 10.0;
									}
									UVar8.z = (float)local_58._0_4_ * fVar6;
									UVar8.y = local_38._4_4_ * fVar6;
									UVar8.x = (float)local_38 * fVar6;
									pUVar4.AddForce(UVar8, 1);
									fVar6 = local_48;
								}
								pUVar2 = this.Cache;
								if ((pUVar2 != null) &&(pUVar4 = pUVar2.Rigidbody, pUVar4 != null)) {
									force.z = (float)local_68._8_4_ * fVar6 * 0.1;
									force.x = fVar6 * local_68._0_4_ * 0.1;
									force.y = fVar6 * local_68._4_4_ * 0.1;
									pUVar4.AddForce(force, 1);
									this._hookHumanConstantTimeLeft = 1.0;
									return;
								}
							}
						}
					}
				}
	label_05bdca98: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6004186")]
	[Address(RVA = "0x5AC27E0", Offset = "0x5AC17E0", VA = "0x5AC27E0")]
	public void UnhookHuman(bool left)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$UnhookHuman): clean
		if (this._hookHumanLeft == left) {
			this._hookHuman = null;
			return;
		}
		return;
	}

	[Token(Token = "0x6004187")]
	[Address(RVA = "0x5ADCAA0", Offset = "0x5ADBAA0", VA = "0x5ADCAA0")]
	[PunRPC]
	public void OnHookedByHuman(int viewId, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$OnHookedByHuman): 58 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		Transform pUVar3;
		Rigidbody pUVar4;
		AnimationHandler __this_00;
		String name;
		byte[] auVar5 = new byte[16];
		bool bVar6;
		BaseCharacter x;
		JSONNode pSVar7;
		MethodInfo pMVar8;
		CustomLogicMathBuiltin __this_01;
		float fVar9;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dd_02;
		uint uVar10;
		uint uVar11;
		Vector3 UVar12;
		Vector3 force;
		Vector3 force_00;
		Quaternion UVar13;
		byte[] auStack_78 = new byte[8];
		float fStack_70;
		byte[] auStack_68 = new byte[8];
		byte[] auStack_58 = new byte[16];
		ulong uStack_48;
		ulong uStack_40;
		Vector3 UStack_30;

		fStack_70 = 0.0;
		auStack_78 = (byte[])0x0;
		x = Util.FindCharacterByViewId(viewId);
		bVar6 = this.IsMine();
		if (bVar6) {
			bVar6 = ((Object)x != null);
			if ((bVar6) && (this.Dead == false)) {
				auVar5 = _auStack_68;
				if ((x == null) ||((pUVar1 = x.Cache, pUVar1 == null ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)))) goto label_05bdd0d1;
				if ((pPVar2._Owner_k__BackingField == info.Sender) &&(((this._state != 7 && (this.CarryState != 1)) &&(this.MountState == 0)))) {
					bVar6 = ((Object)x != (Object)this);
					if (bVar6) {
						pUVar1 = x.Cache;
						auVar5 = _auStack_68;
						if ((pUVar1 != null) &&(pUVar3 = pUVar1.Transform, pUVar3 != null)) {
							UVar12 = pUVar3.position;
							pUVar1 = this.Cache;
							auVar5 = _auStack_68;
							if (pUVar1 != null) {
								auStack_58._0_4_ = UVar12.z;
								auStack_68 = (byte[])UVar12._0_8_;
								pUVar3 = pUVar1.Transform;
								auVar5 = _auStack_68;
								if (pUVar3 != null) {
									UVar12 = pUVar3.position;
									fStack_70 = (float)auStack_58._0_4_ - UVar12.z;
									auStack_78 = (byte[]) CONCAT44((float)auStack_68._4_4_ - UVar12.y, (float)auStack_68._0_4_ - UVar12.x);
									pSVar7 = CharacterData.HumanWeaponInfo;
									auVar5 = _auStack_68;
									if (((pSVar7 != null) &&(pSVar7 = pSVar7.get_Item("Hook"), auVar5 = _auStack_68, pSVar7 != null)) &&(pSVar7 = pSVar7.get_Item("InitialVelocityLoss"), auVar5 = _auStack_68, pSVar7 != null)) {
										auStack_68 = (byte[])pSVar7.get_AsFloat();
										auVar5 = _auStack_68;
										pUVar1 = this.Cache;
										if (pUVar1 != null) {
											pUVar4 = pUVar1.Rigidbody;
											auVar5 = _auStack_68;
											if (pUVar4 != null) {
												UVar12 = pUVar4.linearVelocity;
												force.x = -UVar12.x * (float)auStack_68._0_4_;
												force.y = -UVar12.y * (float)auStack_68._0_4_;
												force.z = -UVar12.z * (float)auStack_68._0_4_;
												pUVar4.AddForce(force, 2);
												__this_01 = (CustomLogicMathBuiltin)auStack_78;
												pMVar8 = null;
												fVar9 = (float)il2cpp_runtime_helper_0599adc0();
												uVar10 = 0x3dcccccd;
												auStack_68._0_4_ = powf(__this_01, fVar9, 0.1, pMVar8);
												auStack_68._4_4_ = extraout_XMM0_Db;
												if (this.Grounded != false) {
													pUVar1 = this.Cache;
													auVar5 = _auStack_68;
													if (pUVar1 == null) goto label_05bdd0d1;
													pUVar4 = pUVar1.Rigidbody;
													uStack_48 = (CustomLogicMathBuiltin)il2cpp_runtime_helper_05bbcf10(0);
													uStack_40 = CONCAT44(extraout_XMM0_Dd_02, extraout_XMM0_Dc_02);
													auStack_58._0_4_ = uVar10;
													fVar9 = (float)il2cpp_runtime_helper_0599adc0(auStack_78, 0);
													auVar5 = _auStack_68;
													if (pUVar4 == null) goto label_05bdd0d1;
													fVar9 = fVar9 * 0.2;
													if (10.0 <= fVar9) {
														fVar9 = 10.0;
													}
													UVar12.z = (float)auStack_58._0_4_ * fVar9;
													UVar12.y = uStack_48._4_4_ * fVar9;
													UVar12.x = (float)uStack_48 * fVar9;
													pUVar4.AddForce(UVar12, 1);
												}
												pUVar1 = this.Cache;
												auVar5 = _auStack_68;
												if (pUVar1 != null) {
													pUVar4 = pUVar1.Rigidbody;
													uStack_48 = (CustomLogicMathBuiltin)auStack_78;
													auStack_58._0_4_ = fStack_70 * (float)auStack_68._0_4_;
													pSVar7 = CharacterData.HumanWeaponInfo;
													auVar5 = _auStack_68;
													if ((((pSVar7 != null) &&(pSVar7 = pSVar7.get_Item("Hook"), auVar5 = _auStack_68, pSVar7 != null)) &&(pSVar7 = pSVar7.get_Item("InitialPullForce"), auVar5 = _auStack_68, pSVar7 != null)) &&(fVar9 = pSVar7.get_AsFloat(), auVar5 = _auStack_68, pUVar4 != null)) {
														force_00.z = (float)auStack_58._0_4_ * fVar9;
														force_00.x = fVar9 * (float)auStack_68._0_4_ * (float)uStack_48;
														force_00.y = fVar9 * (float)auStack_68._0_4_ * uStack_48._4_4_;
														pUVar4.AddForce(force_00, 1);
														__this_00 = this.Animation;
														auVar5 = _auStack_68;
														if (__this_00 != null) {
															name = HumanAnimations.Dash;
															fVar9 = __this_00.GetLength(name);
															this.CrossFade(name, 0.05, 0.1 / fVar9);
															if ((this._state & 0xfffffffeU) == 2) {
																this._dashTimeLeft = 0.0;
															}
															this._state = 0xf;
															pSVar7 = CharacterData.HumanWeaponInfo;
															auVar5 = _auStack_68;
															if (((pSVar7 != null) &&(pSVar7 = pSVar7.get_Item("Hook"), auVar5 = _auStack_68, pSVar7 != null)) &&(pSVar7 = pSVar7.get_Item("StunTime"), auVar5 = _auStack_68, pSVar7 != null)) {
																pMVar8 = (pSVar7.klass.vtable)._37_get_AsFloat.method;
																fVar9 = (float)pSVar7.get_AsFloat();
																this._stateTimeLeft = fVar9;
																this.FalseAttack();
																fVar9 = atan2f((float)auStack_78._0_4_, fStack_70);
																UStack_30.x = 0.0;
																uVar10 = 0;
																uVar11 = 0;
																uStack_48 = (CustomLogicMathBuiltin)CONCAT44(uStack_48._4_4_, fVar9 * 57.29578);
																UStack_30.y = fVar9 * 57.29578 * 0.017453292;
																UStack_30.z = 0.0;
																UVar13 = Quaternion.Internal_FromEulerRad(ref UStack_30);
																pUVar1 = this.Cache;
																auVar5 = _auStack_68;
																if ((pUVar1 != null) &&(pUVar4 = pUVar1.Rigidbody, pUVar4 != null)) {
																	auStack_68 = (byte[])UVar13._0_8_;
																	auStack_58._8_4_ = uVar10;
																	auStack_58._0_8_ = UVar13._8_8_;
																	auStack_58._12_4_ = uVar11;
																	pUVar4.rotation = UVar13;
																	pUVar1 = this.Cache;
																	auVar5 = _auStack_68;
																	if ((pUVar1 != null) &&(pUVar3 = pUVar1.Transform, pUVar3 != null)) {
																		UVar13.z = (float)auStack_58._0_4_;
																		UVar13.w = (float)auStack_58._4_4_;
																		UVar13.x = (float)auStack_68._0_4_;
																		UVar13.y = (float)auStack_68._4_4_;
																		pUVar3.rotation = UVar13;
																		this._targetRotation.x = (float)auStack_68._0_4_;
																		this._targetRotation.y = (float)auStack_68._4_4_;
																		this._targetRotation.z = auStack_58._0_4_;
																		this._targetRotation.w = auStack_58._4_4_;
																		this.TargetAngle = (float)uStack_48;
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
	label_05bdd0d1: ;
						_auStack_68 = auVar5;
						throw new NullReferenceException();
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004188")]
	[Address(RVA = "0x5ADD0E0", Offset = "0x5ADC0E0", VA = "0x5ADD0E0")]
	[PunRPC]
	public void OnStillHookedByHuman(int viewId, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$OnStillHookedByHuman): 16 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		Rigidbody pUVar3;
		Transform pUVar4;
		ulong uVar5;
		bool bVar6;
		BaseCharacter x;
		JSONNode pSVar7;
		MethodInfo method_00;
		CustomLogicMathBuiltin __this_00;
		float fVar8;
		ulong uVar9;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		Vector3 UVar10;
		Vector3 force;
		float fStack_58;
		float fStack_54;
		float fStack_50;
		float fStack_4c;
		float[] afStack_48 = new float[4];
		byte[] auStack_38 = new byte[16];

		fStack_50 = 0.0;
		fStack_58 = 0.0;
		fStack_54 = 0.0;
		x = Util.FindCharacterByViewId(viewId);
		bVar6 = this.IsMine();
		if (bVar6) {
			bVar6 = ((Object)x != null);
			uVar5._4_4_ = afStack_48[1];
			uVar5._0_4_ = afStack_48[0];
			uVar9._4_4_ = afStack_48[1];
			uVar9._0_4_ = afStack_48[0];
			if ((bVar6) && (this.Dead == false)) {
				if ((x == null) ||((pUVar1 = x.Cache, afStack_48._0_8_ = uVar9, pUVar1 == null || (pPVar2 = pUVar1.PhotonView, afStack_48._0_8_ = uVar5, pPVar2 == null)))) {
	label_05bdd499: ;
					throw new NullReferenceException();
				}
				if ((pPVar2._Owner_k__BackingField == info.Sender) &&(((this._state != 7 && (this.CarryState != 1)) &&(this.MountState == 0)))) {
					bVar6 = ((Object)x != (Object)this);
					if (bVar6) {
						pSVar7 = CharacterData.HumanWeaponInfo;
						if (pSVar7 != null) {
							pSVar7 = pSVar7.get_Item("Hook");
							if (pSVar7 != null) {
								pSVar7 = pSVar7.get_Item("ConstantVelocityLoss");
								if (pSVar7 != null) {
									uVar9 = pSVar7.get_AsFloat();
									pUVar1 = this.Cache;
									if ((pUVar1 != null) &&(pUVar3 = pUVar1.Rigidbody, afStack_48._0_8_ = uVar9, pUVar3 != null)) {
										UVar10 = pUVar3.linearVelocity;
										force.x = -UVar10.x * afStack_48[0];
										force.y = -UVar10.y * afStack_48[0];
										force.z = -UVar10.z * afStack_48[0];
										pUVar3.AddForce(force, 2);
										pSVar7 = CharacterData.HumanWeaponInfo;
										if (pSVar7 != null) {
											pSVar7 = pSVar7.get_Item("Hook");
											if (pSVar7 != null) {
												pSVar7 = pSVar7.get_Item("ConstantPullForce");
												if (pSVar7 != null) {
													uVar9 = pSVar7.get_AsFloat();
													if ((float)uVar9 <= 0.0) {
														return;
													}
													pUVar1 = x.Cache;
													if ((pUVar1 != null) &&(pUVar4 = pUVar1.Transform, afStack_48._0_8_ = uVar9, pUVar4 != null)) {
														UVar10 = pUVar4.position;
														pUVar1 = this.Cache;
														if (pUVar1 != null) {
															auStack_38._8_4_ = extraout_XMM0_Dc;
															auStack_38._0_8_ = UVar10._0_8_;
															auStack_38._12_4_ = extraout_XMM0_Dd;
															pUVar4 = pUVar1.Transform;
															fStack_4c = UVar10.z;
															if (pUVar4 != null) {
																UVar10 = pUVar4.position;
																__this_00 = (CustomLogicMathBuiltin)&fStack_58;
																fStack_58 = (float)auStack_38._0_4_ - UVar10.x;
																fStack_54 = (float)auStack_38._4_4_ - UVar10.y;
																fStack_50 = fStack_4c - UVar10.z;
																method_00 = null;
																fVar8 = (float)il2cpp_runtime_helper_0599adc0();
																fVar8 = powf(__this_00, fVar8, 0.1, method_00);
																pUVar1 = this.Cache;
																if ((pUVar1 != null) &&(pUVar3 = pUVar1.Rigidbody, pUVar3 != null)) {
																	UVar10.z = fStack_50 * fVar8 * afStack_48[0];
																	UVar10.y = afStack_48[0] * fVar8 * fStack_54;
																	UVar10.x = afStack_48[0] * fVar8 * fStack_58;
																	pUVar3.AddForce(UVar10, 1);
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
						goto label_05bdd499;
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x6004189")]
	[Address(RVA = "0x5ADD4A0", Offset = "0x5ADC4A0", VA = "0x5ADD4A0")]
	public void GetStunnedByTS(Vector3 origin)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$GetStunnedByTS): 73 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		byte bVar3;
		BaseComponentCache pUVar4;
		Transform pUVar5;
		Rigidbody pUVar6;
		AnimationHandler __this_00;
		String pSVar7;
		HumanStats __this_01;
		BaseMenu pUVar8;
		HUDBottomHandler __this_02;
		InGameCamera __this_03;
		UnityEngine_Vector3_StaticFields pUVar9;
		JSONNode pSVar10;
		long plVar11;
		MethodInfo method_00;
		float fVar12;
		uint extraout_XMM0_Db;
		uint in_XMM0_Dc;
		float extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint in_XMM0_Dd;
		float extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		float fVar13;
		uint in_XMM1_Db;
		byte[] auVar14 = new byte[16];
		byte[] auVar15 = new byte[16];
		byte[] auVar16 = new byte[16];
		byte[] auVar17 = new byte[16];
		float fVar18;
		float fVar19;
		Quaternion UVar20;
		Vector3 UVar21;
		float local_78;
		float fStack_74;
		byte[] local_68 = new byte[8];
		float fStack_60;
		float fStack_5c;
		Vector3 local_58;
		byte[] local_48 = new byte[16];
		byte[] local_38 = new byte[8];
		float fStack_30;
		float fStack_2c;

		local_48._0_4_ = origin.z;
		fStack_30 = (float)in_XMM0_Dc;
		local_38 = (byte[])origin._0_8_;
		fStack_2c = (float)in_XMM0_Dd;
		pUVar4 = this.Cache;
		if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05bddb9f;
		UVar21 = pUVar5.position;
		pUVar4 = this.Cache;
		if (pUVar4 == null) goto label_05bddb9f;
		pUVar6 = pUVar4.Rigidbody;
		if (Il2CppMethodInitialized_0753e72d == false) {
			in_XMM1_Db = 0;
			Il2CppMethodInitialized_0753e72d = true;
			local_58.x = 0.0;
			local_58.y = 0.0;
		}
		else {
			local_58.x = 0.0;
			local_58.y = 0.0;
		}
		local_58._0_8_ = 0;
		if (Il2CppMethodInitialized_0753e729 == false) {
			local_58.x = 0.0;
			local_58.y = 0.0;
			in_XMM1_Db = 0;
			Il2CppMethodInitialized_0753e729 = true;
		}
		local_68._0_4_ = UVar21.x - (float)local_38._0_4_;
		local_68._4_4_ = UVar21.y - (float)local_38._4_4_;
		fVar13 = UVar21.z - (float)local_48._0_4_;
		fStack_60 = extraout_XMM0_Dc - fStack_30;
		fStack_5c = extraout_XMM0_Dd - fStack_2c;
		if ((typeof(Math)._2).cctor_finished_or_no_cctor == 0) {
			in_XMM1_Db = 0;
		}
		fVar12 = fVar13 * fVar13 +(float)local_68._4_4_ * (float)local_68._4_4_ + (float)local_68._0_4_ * (float)local_68._0_4_;
		if (fVar12 < 0.0) {
			fVar12 = sqrtf(fVar12);
			in_XMM1_Db = extraout_XMM0_Db;
			if (fVar12 <= 1e-05) goto label_05bdd61f;
	label_05bdd650: ;
			local_48._0_4_ = fVar13 / fVar12;
			auVar14._4_4_ = fVar12;
			auVar14._0_4_ = fVar12;
			auVar14._8_4_ = in_XMM1_Db;
			auVar14._12_4_ = in_XMM1_Db;
			auVar14 = divps(_local_68, auVar14);
			local_58.x = (float)auVar14._0_4_;
			local_58.y = (float)auVar14._4_4_;
			pUVar9 = (UnityEngine_Vector3_StaticFields)&local_58;
		}
		else {
			fVar12 = SQRT(fVar12);
			if (1e-05 < fVar12) goto label_05bdd650;
	label_05bdd61f: ;
			pUVar9 = typeof(Vector3).static_fields;
			local_48._0_4_ = (pUVar9.zeroVector).z;
		}
		uVar1 = (pUVar9.zeroVector).x;
		uVar2 = (pUVar9.zeroVector).y;
		local_38._4_4_ = uVar2;
		local_38._0_4_ = uVar1;
		pSVar10 = CharacterData.HumanWeaponInfo;
		if ((((pSVar10 == null) ||(pSVar10 = pSVar10.get_Item("Thunderspear"), pSVar10 == null)) ||(plVar11 = (long)pSVar10.get_Item("StunForce"), plVar11 == null)) ||(fVar12 = (float)(**(code*)(*plVar11 + 0x388))(plVar11,*(ulong)(*plVar11 + 0x390)), pUVar6 == null)) goto label_05bddb9f;
		UVar21.z = (float)local_48._0_4_ * fVar12;
		UVar21.y = (float)local_38._4_4_ * fVar12;
		UVar21.x = (float)local_38._0_4_ * fVar12;
		pUVar6.AddForce(UVar21, 2);
		__this_00 = this.Animation;
		if (__this_00 == null) goto label_05bddb9f;
		pSVar7 = HumanAnimations.Dash;
		fVar12 = __this_00.GetLength(pSVar7);
		this.CrossFade(pSVar7, 0.05, 0.1 / fVar12);
		if ((this._state & 0xfffffffeU) == 2) {
			this._dashTimeLeft = 0.0;
		}
		this._state = 0xf;
		pSVar10 = CharacterData.HumanWeaponInfo;
		if (((pSVar10 == null) ||(pSVar10 = pSVar10.get_Item("Thunderspear"), pSVar10 == null)) ||(plVar11 = (long)pSVar10.get_Item("StunDuration"), plVar11 == null)) goto label_05bddb9f;
		method_00 = *(MethodInfo*)(*plVar11 + 0x390);
		fVar12 = (float)(**(code*)(*plVar11 + 0x388))(plVar11);
		this._stateTimeLeft = fVar12;
		this.FalseAttack();
		fVar13 = atan2f((float)local_68._0_4_, fVar13);
		local_48._0_4_ = fVar13 * 57.29578;
		auVar15._0_4_ = SUB124(ZEXT812(0x3c8efa35), 0) * fVar13 * 57.29578;
		auVar15._4_8_ = SUB128(ZEXT812(0x3c8efa35), 4);
		auVar15._12_4_ = 0;
		local_58._0_8_ = (ulong)(uint)auVar15._0_4_ << 0x20;
		local_58.z = 0.0;
		UVar20 = Quaternion.Internal_FromEulerRad(ref local_58) ;
		pUVar4 = this.Cache;
		if ((pUVar4 == null) ||(pUVar6 = pUVar4.Rigidbody, pUVar6 == null)) goto label_05bddb9f;
		local_78 = UVar20.z;
		fStack_74 = UVar20.w;
		pUVar6.rotation = UVar20;
		pUVar4 = this.Cache;
		if ((pUVar4 == null) ||(pUVar5 = pUVar4.Transform, pUVar5 == null)) goto label_05bddb9f;
		auVar16._8_8_ = auVar15._8_8_;
		auVar16._0_8_ = UVar20._8_8_;
		pUVar5.rotation = UVar20;
		local_68._0_4_ = UVar20.x;
		local_68._4_4_ = UVar20.y;
		this._targetRotation.x = (float)local_68._0_4_;
		this._targetRotation.y = (float)local_68._4_4_;
		this._targetRotation.z = local_78;
		this._targetRotation.w = fStack_74;
		this.TargetAngle = (float)local_48._0_4_;
		__this_01 = this.Stats;
		if (__this_01 == null) goto label_05bddb9f;
		__this_01.UseTSGas();
		if (this.AI == false) {
			pUVar8 = UIManager.CurrentMenu;
			if (pUVar8 == null) goto label_05bddb9f;
			bVar3 = (typeof(InGameMenu)._2).typeHierarchyDepth;
			if (((pUVar8.klass._2).typeHierarchyDepth < bVar3) ||((pUVar8.klass._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(InGameMenu))) goto label_05bddba4;
			__this_02 = (HUDBottomHandler)(*(ulong)((sbyte)pUVar8 + 0xb8));
			if (__this_02 == null) goto label_05bddb9f;
			__this_02.ShakeGas();
			if ((typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor != 0) goto label_05bdd93f;
	label_05bdda4c: ;
			pUVar4 = this.Cache;
		}
		else {
			if ((typeof(EffectPrefabs)._2).cctor_finished_or_no_cctor == 0) goto label_05bdda4c;
	label_05bdd93f: ;
			pUVar4 = this.Cache;
		}
		if ((pUVar4 != null) &&(pUVar5 = pUVar4.Transform, pUVar5 != null)) {
			pSVar7 = EffectPrefabs.GasBurst;
			UVar21 = pUVar5.position;
			auVar17._12_4_ = 0;
			auVar17._0_12_ = auVar16._4_12_;
			auVar17 = auVar17 << 0x20;
			pUVar4 = this.Cache;
			if ((pUVar4 != null) &&(pUVar5 = pUVar4.Transform, pUVar5 != null)) {
				UVar20 = pUVar5.rotation;
				fVar13 = UVar20.x;
				fVar12 = UVar20.y;
				fVar18 = UVar20.z;
				fVar19 = UVar20.w;
				if ((typeof(EffectSpawner)._2).cctor_finished_or_no_cctor == 0) {
					local_48._8_4_ = extraout_XMM0_Dc_00;
					local_48._0_8_ = UVar20._0_8_;
					local_48._12_4_ = extraout_XMM0_Dd_00;
					fStack_30 = (float)auVar17._8_4_;
					local_38 = (byte[])UVar20._8_8_;
					fStack_2c = (float)auVar17._12_4_;
					fVar13 = (float)local_48._0_4_;
					fVar12 = (float)local_48._4_4_;
					fVar18 = (float)local_38._0_4_;
					fVar19 = (float)local_38._4_4_;
				}
				UVar20.y = fVar12;
				UVar20.x = fVar13;
				UVar20.w = fVar19;
				UVar20.z = fVar18;
				EffectSpawner.Spawn(pSVar7, UVar21, UVar20, 1.0, true, null) ;
				this.PlaySound(HumanSounds.GasBurst);
				if (this.AI == false) {
					__this_03 = (InGameCamera)SceneLoader.CurrentCamera;
					if (__this_03 == null) goto label_05bddb9f;
					bVar3 = (typeof(InGameCamera)._2).typeHierarchyDepth;
					if (((__this_03.klass._2).typeHierarchyDepth < bVar3) ||((__this_03.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(InGameCamera))) {
	label_05bddba4: ;
						throw new InvalidCastException();
					}
					__this_03.StartShake();
				}
				return;
			}
		}
	label_05bddb9f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600418A")]
	[Address(RVA = "0x5AC1010", Offset = "0x5AC0010", VA = "0x5AC1010")]
	public void SetInterpolation(bool interpolate)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$SetInterpolation): clean
		GraphicsSettings pSVar1;
		BoolSetting pSVar2;
		BaseComponentCache pUVar3;
		bool bVar4;
		int value;
		Rigidbody __this_00;

		bVar4 = this.IsMine();
		if ((bVar4) && (interpolate)) {
			pSVar1 = SettingsManager.GraphicsSettings;
			if ((pSVar1 == null) ||(pSVar2 = pSVar1.InterpolationEnabled, pSVar2 == null)) goto label_05bc10c5;
			if (pSVar2._value != false) {
				pUVar3 = this.Cache;
				if ((pUVar3 == null) ||(__this_00 = pUVar3.Rigidbody, __this_00 == null)) goto label_05bc10c5;
				value = 1;
				goto label_05bc10b8;
			}
		}
		pUVar3 = this.Cache;
		if ((pUVar3 != null) &&(__this_00 = pUVar3.Rigidbody, __this_00 != null)) {
			value = 0;
	label_05bc10b8: ;
			__this_00.interpolation = value;
			return;
		}
	label_05bc10c5: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600418B")]
	[Address(RVA = "0x5AC10D0", Offset = "0x5AC00D0", VA = "0x5AC10D0")]
	private void SetTriggerCollider(bool trigger)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$SetTriggerCollider): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		bool bVar2;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		byte local_19;

		bVar2 = this.IsMine();
		if (!bVar2) {
			return;
		}
		this._isTrigger = trigger;
		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			__this_00 = pUVar1.PhotonView;
			parameters = (Object[])new object[1];
			local_19 = trigger;
			pIVar3 = (object)local_19;
			if (parameters != null) {
				if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) {
					pIVar3 = new ArrayTypeMismatchException();
					throw pIVar3;
				}
				if ((int)parameters.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				parameters[0] = pIVar3;
				if (__this_00 != null) {
					__this_00.RPC("SetTriggerColliderRPC", 0, parameters);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600418C")]
	[Address(RVA = "0x5ADDBB0", Offset = "0x5ADCBB0", VA = "0x5ADDBB0")]
	[PunRPC]
	public void SetTriggerColliderRPC(bool trigger, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$SetTriggerColliderRPC): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		CapsuleCollider __this_00;

		if (Il2CppMethodInitialized_075475a0 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_CapsuleCollider) ;
			Il2CppMethodInitialized_075475a0 = true;
		}
		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pPVar2 = pUVar1.PhotonView, pPVar2 != null)) {
			if (info.Sender != pPVar2._Owner_k__BackingField) {
				return;
			}
			__this_00 = this.GetComponent<CapsuleCollider>();
			if (__this_00 != null) {
				__this_00.isTrigger = trigger;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600418D")]
	[Address(RVA = "0x5AD8BF0", Offset = "0x5AD7BF0", VA = "0x5AD8BF0")]
	private float GetReelAxis()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$GetReelAxis): 1 lines keep C-only constructs
		return (&this.ReelInAxis)[-(uint)(this.ReelInAxis == 0.0) & 1];
	}

	[Token(Token = "0x600418E")]
	[Address(RVA = "0x5AD8C10", Offset = "0x5AD7C10", VA = "0x5AD8C10")]
	private float GetLeanAngle(Vector3 hookPosition, bool left)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$GetLeanAngle): 11 lines keep C-only constructs
		uint uVar1;
		HumanSetup pCVar2;
		BaseComponentCache pUVar3;
		Transform pUVar4;
		Rigidbody pUVar5;
		MethodInfo method_00;
		Il2CppClass klass;
		float fVar6;
		float fVar7;
		float fVar8;
		float fVar10;
		byte[] auVar9 = new byte[12];
		uint uVar11;
		Vector3 UVar12;
		Vector3 UVar13;
		float fStack_64;
		float local_48;
		float fStack_44;
		float local_28;

		pCVar2 = this.Setup;
		if (pCVar2 != null) {
			if (((pCVar2.Weapon | 2U) != 3) && (this._state == 1)) {
				return 0.0;
			}
			pUVar3 = this.Cache;
			if ((pUVar3 != null) &&(pUVar4 = pUVar3.Transform, pUVar4 != null)) {
				UVar12 = pUVar4.position;
				pUVar3 = this.Cache;
				if ((pUVar3 != null) &&(pUVar4 = pUVar3.Transform, pUVar4 != null)) {
					UVar13 = pUVar4.position;
					if (Il2CppMethodInitialized_0753e7b7 == false) {
						Il2CppMethodInitialized_0753e7b7 = true;
						uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					fVar6 = hookPosition.z - UVar13.z;
					local_48 = hookPosition.x;
					fStack_44 = hookPosition.y;
					fVar8 = local_48 - UVar13.x;
					fVar10 = fStack_44 - UVar13.y;
					fVar6 = fVar6 * fVar6 + fVar10 * fVar10 + fVar8 * fVar8;
					if (fVar6 < 0.0) {
						fVar6 = sqrtf(fVar6);
					}
					else {
						fVar6 = SQRT(fVar6);
					}
					fStack_64 = UVar12.y;
					fVar6 = acosf((fStack_44 - fStack_64) / fVar6);
					pUVar3 = this.Cache;
					if ((pUVar3 != null) &&(pUVar5 = pUVar3.Rigidbody, pUVar5 != null)) {
						method_00 = null;
						UVar12 = pUVar5.linearVelocity;
						if (Il2CppMethodInitialized_0753e729 == false) {
							Il2CppMethodInitialized_0753e729 = true;
							uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
							klass = typeof(Math);
						}
						else {
							uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
							klass = typeof(Math);
						}
						typeof(Math) = (Math)klass;
						if (uVar1 == 0) {
						}
						fVar8 = UVar12.z * UVar12.z + UVar12.y * UVar12.y + UVar12.x * UVar12.x;
						if (fVar8 < 0.0) {
							fVar8 = sqrtf(fVar8);
						}
						else {
							fVar8 = SQRT(fVar8);
						}
						fVar8 = powf((CustomLogicMathBuiltin)klass, fVar8, 0.2, method_00);
						pUVar3 = this.Cache;
						if ((pUVar3 != null) &&(pUVar4 = pUVar3.Transform, pUVar4 != null)) {
							UVar12 = pUVar4.position;
							fVar10 = atan2f(local_48 - UVar12.x, hookPosition.z - UVar12.z);
							pUVar3 = this.Cache;
							if ((pUVar3 != null) &&(pUVar5 = pUVar3.Rigidbody, pUVar5 != null)) {
								UVar12 = pUVar5.linearVelocity;
								pUVar3 = this.Cache;
								if ((pUVar3 != null) &&(pUVar5 = pUVar3.Rigidbody, pUVar5 != null)) {
									UVar13 = pUVar5.linearVelocity;
									local_28 = UVar12.x;
									fVar7 = atan2f(local_28, UVar13.z);
									fVar7 = fVar7 * 57.29578 - fVar10 * 57.29578;
									fVar10 = floorf(fVar7 / 360.0);
									fVar7 = fVar10 * -360.0 + fVar7;
									auVar9 = ZEXT812(0x43b40000);
									if (fVar7 <= auVar9._0_4_) {
										auVar9._4_8_ = auVar9._4_8_;
										auVar9._0_4_ = fVar7;
									}
									fVar10 = (float)(-(uint)(0.0 <= fVar7) & auVar9._0_4_);
									fVar10 = (float)(~-(uint)(180.0 < fVar10) & (uint)fVar10 |(uint)(fVar10 + -360.0) & -(uint)(180.0 < fVar10));
									fVar6 = ABS(fVar10 * 0.5) + (fVar8 + 1.0) * fVar6 * 57.29578 * 0.1;
									if ((this._state != 1) && (80.0 <= fVar6)) {
										fVar6 = 80.0;
									}
									this._leanLeft = 0.0 < fVar10;
									pCVar2 = this.Setup;
									if (pCVar2 != null) {
										if ((pCVar2.Weapon | 2U) != 3) {
											if ((fVar10 <= 0.0 || left) == (fVar10 < 0.0 && left)) {
												uVar11 = 0x3dcccccd;
											}
											else {
												uVar11 = 0x3f000000;
											}
											return fVar6 * (float)(-(uint)(fVar10 < 0.0) & (uVar11 | 0x80000000) | ~-(uint)(fVar10 < 0.0) & uVar11);
										}
										if (0.0 <= fVar10) {
											return fVar6;
										}
										return -fVar6;
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

	[Token(Token = "0x600418F")]
	[Address(RVA = "0x5ADDC40", Offset = "0x5ADCC40", VA = "0x5ADDC40")]
	public bool CanBladeAttack()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$CanBladeAttack): 1 lines keep C-only constructs
		byte bVar1;
		BaseUseable pCVar2;

		pCVar2 = this.Weapon;
		if (pCVar2 != null) {
			bVar1 = (typeof(BladeWeapon)._2).typeHierarchyDepth;
			if (((bVar1 <= (pCVar2.klass._2).typeHierarchyDepth) &&((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BladeWeapon) )) && (0.0 < *(float)&(*(ulong)((sbyte)pCVar2 + 0x40)))) {
				return this._state == 0;
			}
		}
		return false;
	}

	[Token(Token = "0x6004190")]
	[Address(RVA = "0x5ADDCC0", Offset = "0x5ADCCC0", VA = "0x5ADDCC0")]
	public void StartSpecialAttack(string animation)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$StartSpecialAttack): clean


		if ((this._state | 8U) == 9) {
			this.FalseAttack();
		}
		this.PlayAnimation(animation, 0.0);
		if ((this._state & 0xfffffffeU) == 2) {
			this._dashTimeLeft = 0.0;
		}
		this._state = 9;
		this.ToggleSparks(false);
		return;
	}

	[Token(Token = "0x6004191")]
	[Address(RVA = "0x5ADDD30", Offset = "0x5ADCD30", VA = "0x5ADDD30")]
	public void ActivateBlades()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ActivateBlades): clean
		HumanComponentCache pCVar1;
		BaseHitbox pCVar2;
		HashSet<object> __this_00;
		bool bVar3;

		pCVar1 = this.HumanCache;
		if ((pCVar1 == null) ||(pCVar2 = pCVar1.BladeHitLeft, pCVar2 == null)) goto label_05bdde3e;
		bVar3 = pCVar2.IsActive();
		if (!bVar3) {
			__this_00 = (HashSet<object>)this._haircutTargets;
			if (__this_00 == null) goto label_05bdde3e;
			__this_00.Clear() ;
			pCVar1 = this.HumanCache;
			if ((pCVar1 == null) ||(pCVar2 = pCVar1.BladeHitLeft, pCVar2 == null)) goto label_05bdde3e;
			pCVar2.Activate(0.0, 0.0);
			this.ToggleBladeTrails(true);
		}
		pCVar1 = this.HumanCache;
		if ((pCVar1 != null) &&(pCVar2 = pCVar1.BladeHitRight, pCVar2 != null)) {
			bVar3 = pCVar2.IsActive();
			if (bVar3) {
				return;
			}
			pCVar1 = this.HumanCache;
			if ((pCVar1 != null) &&(pCVar2 = pCVar1.BladeHitRight, pCVar2 != null)) {
				pCVar2.Activate(0.0, 0.0);
				this.ToggleBladeTrails(true);
				return;
			}
		}
	label_05bdde3e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004192")]
	[Address(RVA = "0x5ADDE50", Offset = "0x5ADCE50", VA = "0x5ADDE50")]
	public void StartBladeSwing()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$StartBladeSwing): 8 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		object pIVar3;
		HookUseable pCVar6;
		BaseTitanComponentCache pCVar7;
		BaseComponentCache pUVar8;
		Transform __this_00;
		Rigidbody __this_01;
		bool bVar9;
		int iVar10;
		Human x;
		String pSVar12;
		String* ppSVar13;
		long lVar16;
		Human __this_02;
		Vector3 UVar17;
		Vector3 force;

		if (this.Grounded == false) {
			pCVar6 = this.HookLeft;
			if (pCVar6 == null) goto label_05bde3fc;
			bVar9 = pCVar6.IsHooked();
			if (!bVar9) {
				pCVar6 = this.HookRight;
				if (pCVar6 == null) goto label_05bde3fc;
				bVar9 = pCVar6.IsHooked();
				if ((!bVar9) && (this.MountState == 0)) goto label_05bdde99;
			}
			pIVar3 = (object)this.Controller;
			if (pIVar3 == null) goto label_05bde3fc;
			bVar9 = pIVar3.MovingRight();
			if (bVar9) {
				iVar10 = Random.Range(0, 100);
				uVar2 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
				if (iVar10 < 0x32) {
					if (uVar2 == 0) {
					}
					lVar16 = 0x1a8;
				}
				else {
					if (uVar2 == 0) {
					}
					lVar16 = 0x1a0;
				}
	label_05bde2b4: ;
				ppSVar13 = (String*)((long)&HumanAnimations.HorseMount + lVar16);
				if (this == null) goto label_05bde3fc;
			}
			else {
				pIVar3 = (object)this.Controller;
				if (pIVar3 == null) goto label_05bde3fc;
				bVar9 = pIVar3.MovingRight();
				if (bVar9) {
					iVar10 = Random.Range(0, 100);
					uVar2 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
					if (iVar10 < 0x32) {
						if (uVar2 == 0) {
						}
						lVar16 = 0x1b8;
					}
					else {
						if (uVar2 == 0) {
						}
						lVar16 = 0x1b0;
					}
					goto label_05bde2b4;
				}
				bVar9 = this._leanLeft;
				iVar10 = Random.Range(0, 100);
				uVar2 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
				if (bVar9 == false) {
					if (iVar10 < 0x32) {
						if (uVar2 == 0) {
						}
						ppSVar13 = &HumanAnimations.Attack1HookR2;
					}
					else {
						if (uVar2 == 0) {
						}
						ppSVar13 = &HumanAnimations.Attack1HookR1;
					}
				}
				else if (iVar10 < 0x32) {
					if (uVar2 == 0) {
					}
					ppSVar13 = &HumanAnimations.Attack1HookL2;
				}
				else {
					if (uVar2 == 0) {
					}
					ppSVar13 = &HumanAnimations.Attack1HookL1;
				}
			}
			pSVar12 = *ppSVar13;
	label_05bde2c7: ;
			this.AttackAnimation = pSVar12;
			cVar1 = this.Grounded;
		}
		else {
	label_05bdde99: ;
			pIVar3 = (object)this.Controller;
			if (pIVar3 == null) goto label_05bde3fc;
			bVar9 = pIVar3.MovingRight();
			if (bVar9) {
				pSVar12 = HumanAnimations.Attack2;
				goto label_05bde2c7;
			}
			pIVar3 = (object)this.Controller;
			if (pIVar3 == null) goto label_05bde3fc;
			bVar9 = pIVar3.MovingRight();
			if (bVar9) {
				pSVar12 = HumanAnimations.Attack1;
				goto label_05bde2c7;
			}
			x = (Human)this.FindNearestTitan();
			__this_02 = x;
			bVar9 = ((Object)x != null);
			if (bVar9) {
				if ((x == null) ||(pCVar7 = *(BaseTitanComponentCache*)&x._nextSupplyTransfer, pCVar7 == null)) goto label_05bde3fc;
				pSVar12 = this.GetBladeAnimationTarget(pCVar7.Neck);
			}
			else {
				pSVar12 = __this_02.GetBladeAnimationMouse();
			}
			this.AttackAnimation = pSVar12;
			cVar1 = this.Grounded;
		}
		if (cVar1 != false) {
			pUVar8 = this.Cache;
			if ((pUVar8 != null) &&(__this_00 = pUVar8.Transform, __this_00 != null)) {
				__this_01 = pUVar8.Rigidbody;
				UVar17 = __this_00.forward;
				if (__this_01 != null) {
					force.z = UVar17.z * 200.0;
					force.x = UVar17.x * 200.0;
					force.y = UVar17.y * 200.0;
					__this_01.AddForce(force);
					goto label_05bde32e;
				}
			}
	label_05bde3fc: ;
			throw new NullReferenceException();
		}
	label_05bde32e: ;
		this.PlayAnimationReset(this.AttackAnimation);
		this._attackButtonRelease = false;
		if ((this._state & 0xfffffffeU) == 2) {
			this._dashTimeLeft = 0.0;
		}
		this._state = 1;
		bVar9 = this.Grounded != false;
		if (bVar9) {
			this._attackButtonRelease = true;
		}
		this._attackRelease = bVar9;
		this.ToggleSparks(false);
		return;
	}

	[Token(Token = "0x6004193")]
	[Address(RVA = "0x5ADEC90", Offset = "0x5ADDC90", VA = "0x5ADEC90")]
	private string GetBladeAnimationMouse()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$GetBladeAnimationMouse): 1 lines keep C-only constructs
		uint uVar1;
		int iVar2;
		long lVar3;
		Vector3 UVar4;
		float local_18;

		UVar4 = CursorManager.GetInGameMousePosition();
		iVar2 = Screen.width;
		local_18 = UVar4.x;
		uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		if ((float)iVar2 * 0.5 <= local_18) {
			if (uVar1 == 0) {
			}
			lVar3 = 0x1c0;
		}
		else {
			if (uVar1 == 0) {
			}
			lVar3 = 0x1c8;
		}
		return *(String*)((long)&HumanAnimations.HorseMount + lVar3);
	}

	[Token(Token = "0x6004194")]
	[Address(RVA = "0x5ADE950", Offset = "0x5ADD950", VA = "0x5ADE950")]
	private string GetBladeAnimationTarget(Transform target)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$GetBladeAnimationTarget): 1 lines keep C-only constructs
		uint uVar1;
		BaseComponentCache pUVar2;
		Transform pUVar3;
		long lVar4;
		float fVar5;
		float fVar6;
		float fVar7;
		Vector3 UVar8;
		Vector3 UVar9;
		float local_38;
		float fStack_34;
		Quaternion local_20;

		if (target == null) {
	label_05bdec7d: ;
			throw new NullReferenceException();
		}
		UVar8 = target.position;
		pUVar2 = this.Cache;
		if ((pUVar2 == null) ||(pUVar3 = pUVar2.Transform, pUVar3 == null)) goto label_05bdec7d;
		UVar9 = pUVar3.position;
		local_38 = UVar8.x;
		fStack_34 = UVar8.y;
		local_38 = local_38 - UVar9.x;
		fStack_34 = fStack_34 - UVar9.y;
		fVar5 = UVar8.z - UVar9.z;
		fVar6 = atan2f(fVar5, local_38);
		pUVar2 = this.Cache;
		if ((pUVar2 == null) ||(pUVar3 = pUVar2.Transform, pUVar3 == null)) goto label_05bdec7d;
		local_20 = (Quaternion)pUVar3.rotation;
		UVar8 = Quaternion.Internal_ToEulerRad(ref local_20) ;
		UVar9.x = UVar8.x * 57.29578;
		UVar9.y = UVar8.y * 57.29578;
		UVar9.z = UVar8.z * 57.29578;
		UVar8 = Quaternion.Internal_MakePositive(UVar9);
		fVar7 = UVar8.y + -90.0 + fVar6 * 57.29578;
		fVar6 = floorf(fVar7 / 360.0);
		fVar7 = fVar6 * -360.0 + fVar7;
		fVar6 = 360.0;
		if (fVar7 <= 360.0) {
			fVar6 = fVar7;
		}
		fVar6 = (float)(-(uint)(0.0 <= fVar7) & (uint)fVar6);
		fVar6 = (float)(~-(uint)(180.0 < fVar6) & (uint)fVar6 | (uint)(fVar6 + -360.0) & -(uint)(180.0 < fVar6));
		if (ABS(fVar6) < 90.0) {
			if (Il2CppMethodInitialized_0753e729 == false) {
				Il2CppMethodInitialized_0753e729 = true;
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			fVar5 = fVar5 * fVar5 + fStack_34 * fStack_34 + local_38 * local_38;
			if (fVar5 < 0.0) {
				fVar5 = sqrtf(fVar5);
			}
			else {
				fVar5 = SQRT(fVar5);
			}
			if (fVar5 < 6.0) {
				UVar8 = target.position;
				pUVar2 = this.Cache;
				if ((pUVar2 == null) ||(pUVar3 = pUVar2.Transform, pUVar3 == null)) goto label_05bdec7d;
				UVar9 = pUVar3.position;
				if (UVar8.y <= UVar9.y + 2.0) {
					UVar8 = target.position;
					pUVar2 = this.Cache;
					if ((pUVar2 == null) ||(pUVar3 = pUVar2.Transform, pUVar3 == null)) goto label_05bdec7d;
					UVar9 = pUVar3.position;
					if (UVar9.y + -5.0 <= UVar8.y) {
						lVar4 = 0x1d0;
						goto label_05bdec15;
					}
				}
			}
		}
		uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
		if (0.0 <= fVar6) {
			if (uVar1 == 0) {
			}
			lVar4 = 0x1c8;
		}
		else {
			if (uVar1 == 0) {
			}
			lVar4 = 0x1c0;
		}
	label_05bdec15: ;
		return *(String*)((long)&HumanAnimations.HorseMount + lVar4);
	}

	[Token(Token = "0x6004195")]
	[Address(RVA = "0x5ADE410", Offset = "0x5ADD410", VA = "0x5ADE410")]
	private BaseTitan FindNearestTitan()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$FindNearestTitan): 33 lines keep C-only constructs
		uint uVar1;
		InGameManager pGVar2;
		HashSet<object> pSVar3;
		BaseComponentCache pUVar4;
		Transform pUVar5;
		BaseTitan pCVar6;
		bool bVar7;
		BaseTitan pCVar8;
		float fVar9;
		float __x;
		float fVar10;
		float fVar11;
		float extraout_XMM0_Db;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dc_03;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint extraout_XMM0_Dd_02;
		uint extraout_XMM0_Dd_03;
		Vector3 UVar17;
		byte[] local_d0 = new byte[16];
		BaseTitan local_c0;
		byte[] local_b8 = new byte[8];
		ulong uStack_b0;
		BaseTitan local_a8;
		byte[] local_98 = new byte[8];
		BaseTitan local_88;
		byte[] local_78 = new byte[16];
		float local_68;
		float local_58;
		byte[] local_48 = new byte[24];

		local_98 = (byte[])0x0;
		local_88 = null;
		local_b8 = (byte[])0x0;
		uStack_b0._0_4_ = 0;
		uStack_b0._4_4_ = 0;
		local_a8 = null;
		pGVar2 = this._inGameManager;
		if ((pGVar2 == null) ||(pSVar3 = (HashSet<object>)pGVar2.Titans, pSVar3 == null)) {
	label_05bde877: ;
			throw new NullReferenceException();
		}
		local_d0.GetEnumerator(pSVar3);
		local_88 = local_c0;
		local_98 = (byte[])local_d0._0_8_;
		local_d0._0_8_ = null;
		fVar11 = 0.0;
		pCVar6 = null;
		fVar9 = INFINITY;
		local_d0._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_98;
	label_05bde523: ;
		do {
			fVar10 = fVar9;
			do {
				while(true) {
					bVar7 = local_98.MoveNext();
					pCVar6 = local_88;
					if (!bVar7) {
						local_98.Dispose();
						pGVar2 = this._inGameManager;
						if ((pGVar2 != null) &&(pSVar3 = (HashSet<object>)pGVar2.Shifters, pSVar3 != null)) {
							local_d0.GetEnumerator(pSVar3);
							local_a8 = local_c0;
							local_b8 = (byte[])local_d0._0_8_;
							uStack_b0 = (System_Collections_Generic_HashSet_Enumerator_T__o)local_d0._8_8_;
							local_d0._0_8_ = null;
							local_d0._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o)local_b8;
							while(true) {
								bVar7 = local_b8.MoveNext();
								pCVar6 = local_a8;
								if (!bVar7) {
									local_b8.Dispose();
									return pCVar8;
								}
								pUVar4 = this.Cache;
								if (pUVar4 == null) {
									throw new NullReferenceException();
								}
								pUVar5 = pUVar4.Transform;
								if (pUVar5 == null) {
									throw new NullReferenceException();
								}
								UVar17 = pUVar5.position;
								local_58 = UVar17.z;
								local_48._8_4_ = extraout_XMM0_Dc_02;
								local_48._0_8_ = UVar17._0_8_;
								local_48._12_4_ = extraout_XMM0_Dd_02;
								if (pCVar6 == null) break;
								pUVar4 = pCVar6.Cache;
								if (pUVar4 == null) {
									throw new NullReferenceException();
								}
								pUVar5 = pUVar4.Transform;
								if (pUVar5 == null) {
									throw new NullReferenceException();
								}
								UVar17 = pUVar5.position;
								local_68 = UVar17.z;
								local_78._8_4_ = extraout_XMM0_Dc_03;
								local_78._0_8_ = UVar17._0_8_;
								local_78._12_4_ = extraout_XMM0_Dd_03;
								if (Il2CppMethodInitialized_0753e7b7 == false) {
									Il2CppMethodInitialized_0753e7b7 = true;
									uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
								}
								else {
									uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
								}
								if (uVar1 == 0) {
								}
								fVar9 = ((float)local_48._4_4_ - (float)local_78._4_4_) *((float)local_48._4_4_ - (float)local_78._4_4_) +((float)local_48._0_4_ - (float)local_78._0_4_) *((float)local_48._0_4_ - (float)local_78._0_4_) +(local_58 - local_68) * (local_58 - local_68);
								if (0.0 <= fVar9) {
																					if (SQRT(fVar9) < fVar10) {
										fVar10 = SQRT(fVar9);
									}
								}
								else {
									fVar10 = sqrtf(fVar9);
																							}
							}
							throw new NullReferenceException();
						}
						goto label_05bde877;
					}
					pUVar4 = this.Cache;
					if (pUVar4 == null) {
						throw new NullReferenceException();
					}
					pUVar5 = pUVar4.Transform;
					if (pUVar5 == null) {
						throw new NullReferenceException();
					}
					UVar17 = pUVar5.position;
					local_58 = UVar17.z;
					local_48._8_4_ = extraout_XMM0_Dc_00;
					local_48._0_8_ = UVar17._0_8_;
					local_48._12_4_ = extraout_XMM0_Dd_00;
					if (pCVar6 == null) {
						throw new NullReferenceException();
					}
					pUVar4 = pCVar6.Cache;
					if (pUVar4 == null) {
						throw new NullReferenceException();
					}
					pUVar5 = pUVar4.Transform;
					if (pUVar5 == null) {
						throw new NullReferenceException();
					}
					UVar17 = pUVar5.position;
					local_68 = UVar17.z;
					local_78._8_4_ = extraout_XMM0_Dc_01;
					local_78._0_8_ = UVar17._0_8_;
					local_78._12_4_ = extraout_XMM0_Dd_01;
					if (Il2CppMethodInitialized_0753e7b7 == false) {
						Il2CppMethodInitialized_0753e7b7 = true;
						uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					fVar11 = ((float)local_48._4_4_ - (float)local_78._4_4_) *((float)local_48._4_4_ - (float)local_78._4_4_) +((float)local_48._0_4_ - (float)local_78._0_4_) *((float)local_48._0_4_ - (float)local_78._0_4_);
					__x = fVar11 + (local_58 - local_68) * (local_58 - local_68);
					if (__x < 0.0) break;
					fVar9 = SQRT(__x);
					if (SQRT(__x) < fVar10) goto label_05bde523;
				}
				fVar9 = sqrtf(__x);
				fVar11 = extraout_XMM0_Db;
			} while (fVar10 <= fVar9);
		} while(true);
	}

	[Token(Token = "0x6004196")]
	[Address(RVA = "0x5ADED50", Offset = "0x5ADDD50", VA = "0x5ADED50")]
	private Human FindNearestHuman()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$FindNearestHuman): 17 lines keep C-only constructs
		uint uVar1;
		InGameManager pGVar2;
		HashSet<object> __this_00;
		String b;
		BaseComponentCache pUVar3;
		Transform pUVar4;
		bool bVar5;
		Human a;
		float fVar6;
		float fVar7;
		float __x;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		Vector3 UVar8;
		System_Collections_Generic_HashSet_Enumerator_T__o SStack_b8;
		byte[] auStack_98 = new byte[16];
		Human pCStack_88;
		Human pCStack_80;
		byte[] auStack_78 = new byte[16];
		float fStack_68;
		float fStack_58;
		byte[] auStack_48 = new byte[24];

		SStack_b8._set = null;
		SStack_b8._index = 0;
		SStack_b8._version = 0;
		SStack_b8._current = null;
		pGVar2 = this._inGameManager;
		if ((pGVar2 == null) ||(__this_00 = (HashSet<object>)pGVar2.Humans, __this_00 == null)) {
			throw new NullReferenceException();
		}
		auStack_98.GetEnumerator(__this_00);
		SStack_b8._current = (object)pCStack_88;
		SStack_b8._set = (HashSet<T>)auStack_98._0_8_;
		SStack_b8._index = auStack_98._8_4_;
		SStack_b8._version = auStack_98._12_4_;
		auStack_98._0_8_ = null;
		a = null;
		fVar7 = INFINITY;
		auStack_98._8_8_ = &SStack_b8;
	label_05bdee3d: ;
		do {
			fVar6 = fVar7;
			do {
				while(true) {
					do {
						do {
							bVar5 = SStack_b8.MoveNext();
							a = (Human)SStack_b8._current;
							if (!bVar5) {
								SStack_b8.Dispose();
								return pCStack_80;
							}
							bVar5 = ((Object)a != (Object)this);
						} while (!bVar5);
						b = this.Team;
						bVar5 = TeamInfo.SameTeam((BaseCharacter)a, b) ;
					} while (!bVar5);
					pUVar3 = this.Cache;
					if (pUVar3 == null) {
						throw new NullReferenceException();
					}
					pUVar4 = pUVar3.Transform;
					if (pUVar4 == null) {
						throw new NullReferenceException();
					}
					UVar8 = pUVar4.position;
					fStack_58 = UVar8.z;
					auStack_48._8_4_ = extraout_XMM0_Dc;
					auStack_48._0_8_ = UVar8._0_8_;
					auStack_48._12_4_ = extraout_XMM0_Dd;
					if (a == null) {
						throw new NullReferenceException();
					}
					pUVar3 = ((Human)((long)a + 0x10)).Cache;
					if (pUVar3 == null) {
						throw new NullReferenceException();
					}
					pUVar4 = pUVar3.Transform;
					if (pUVar4 == null) {
						throw new NullReferenceException();
					}
					UVar8 = pUVar4.position;
					fStack_68 = UVar8.z;
					auStack_78._8_4_ = extraout_XMM0_Dc_00;
					auStack_78._0_8_ = UVar8._0_8_;
					auStack_78._12_4_ = extraout_XMM0_Dd_00;
					if (Il2CppMethodInitialized_0753e7b7 == false) {
						Il2CppMethodInitialized_0753e7b7 = true;
						uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
					}
					__x = ((float)auStack_48._4_4_ - (float)auStack_78._4_4_) *((float)auStack_48._4_4_ - (float)auStack_78._4_4_) +((float)auStack_48._0_4_ - (float)auStack_78._0_4_) *((float)auStack_48._0_4_ - (float)auStack_78._0_4_) +(fStack_58 - fStack_68) * (fStack_58 - fStack_68);
					if (0.0 <= __x) break;
					fVar7 = sqrtf(__x);
					if (fVar7 < fVar6) goto label_05bdee3d;
				}
				fVar7 = SQRT(__x);
			} while (fVar6 <= SQRT(__x));
		} while(true);
	}

	[Token(Token = "0x6004197")]
	[Address(RVA = "0x5ABF690", Offset = "0x5ABE690", VA = "0x5ABF690")]
	public void FalseAttack()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$FalseAttack): 1 lines keep C-only constructs
		byte bVar1;
		HumanSetup pCVar2;
		BaseUseable pCVar3;
		HumanComponentCache pCVar4;
		BaseHitbox pCVar5;

		pCVar2 = this.Setup;
		if (pCVar2 != null) {
			if (pCVar2.Weapon - 1U < 3) {
				if (this._attackRelease == false) {
					this._attackRelease = true;
					pCVar3 = this.Special;
				}
				else {
					pCVar3 = this.Special;
				}
				if (pCVar3 != null) {
					bVar1 = ((typeof(StockSpecial))._2).typeHierarchyDepth;
					if ((bVar1 <= (pCVar3.klass._2).typeHierarchyDepth) &&((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(StockSpecial))) {
						this.ContinueAnimation();
						return;
					}
				}
				return;
			}
			this.ToggleBladeTrails(false);
			pCVar4 = this.HumanCache;
			if ((pCVar4 != null) &&(pCVar5 = pCVar4.BladeHitLeft, pCVar5 != null)) {
				pCVar5.Deactivate();
				pCVar4 = this.HumanCache;
				if ((pCVar4 != null) &&(pCVar5 = pCVar4.BladeHitRight, pCVar5 != null)) {
					pCVar5.Deactivate();
					if (this._attackRelease == false) {
						this.ContinueAnimation();
						this._attackRelease = true;
						return;
					}
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004198")]
	[Address(RVA = "0x5ACC710", Offset = "0x5ACB710", VA = "0x5ACC710")]
	public void ContinueAnimation()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ContinueAnimation): clean
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		Object[] parameters;

		if (this._animationStopped == false) {
			return;
		}
		this._animationStopped = false;
		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			__this_00 = pUVar1.PhotonView;
			parameters = (Object[])new object[0];
			if (__this_00 != null) {
				__this_00.RPC("ContinueAnimationRPC", 0, parameters);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004199")]
	[Address(RVA = "0x5ADF0A0", Offset = "0x5ADE0A0", VA = "0x5ADF0A0")]
	[PunRPC]
	public void ContinueAnimationRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ContinueAnimationRPC): clean
		BaseComponentCache pUVar1;
		PhotonView pPVar2;
		AnimationHandler __this_00;
		bool bVar3;
		String a;

		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(pPVar2 = pUVar1.PhotonView, pPVar2 == null)) {
	label_05bdf155: ;
			throw new NullReferenceException();
		}
		if (info.Sender == pPVar2._Owner_k__BackingField) {
			__this_00 = this.Animation;
			if (__this_00 == null) goto label_05bdf155;
			__this_00.SetSpeedAll(1.0);
			this.CustomAnimationSpeed();
			a = this.GetCurrentAnimation();
			bVar3 = (a != "");
			if (bVar3) {
				this.PlayAnimation(a, 0.0);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600419A")]
	[Address(RVA = "0x5ACC7A0", Offset = "0x5ACB7A0", VA = "0x5ACC7A0")]
	public void PauseAnimation()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$PauseAnimation): clean
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		Object[] parameters;

		if (this._animationStopped != false) {
			return;
		}
		this._animationStopped = true;
		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			__this_00 = pUVar1.PhotonView;
			parameters = (Object[])new object[0];
			if (__this_00 != null) {
				__this_00.RPC("PauseAnimationRPC", 0, parameters);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600419B")]
	[Address(RVA = "0x5ADF160", Offset = "0x5ADE160", VA = "0x5ADF160")]
	[PunRPC]
	public void PauseAnimationRPC(PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$PauseAnimationRPC): 6 lines keep C-only constructs
		Dictionary<string, float> pSVar1;
		BaseComponentCache pUVar2;
		PhotonView pPVar3;
		AnimationHandler __this_00;
		object name;
		bool bVar4;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o source;
		System_Collections_Generic_List_TSource__o __this_01;
		System_Collections_Generic_List_Enumerator_T__o SStack_58;
		System_Collections_Generic_List_Enumerator_T__o pSStack_30;

		pUVar2 = this.Cache;
		if ((pUVar2 != null) &&(pPVar3 = pUVar2.PhotonView, pPVar3 != null)) {
			if (info.Sender != pPVar3._Owner_k__BackingField) {
				return;
			}
			__this_00 = this.Animation;
			if (__this_00 != null) {
				SStack_58._list = null;
				SStack_58._index = 0;
				SStack_58._version = 0;
				SStack_58._current = null;
				pSVar1 = __this_00._animationSpeed;
				if (pSVar1 != null) {
					source = pSVar1.Keys;
					__this_01 = Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)source);
					if (__this_01 != null) {
						SStack_58 = __this_01.GetEnumerator();
						pSStack_30 = &SStack_58;
						while(true) {
							bVar4 = SStack_58.MoveNext();
							name = SStack_58._current;
							if (!bVar4) {
								SStack_58.Dispose();
								return;
							}
							pSVar1 = __this_00._animationSpeed;
							if (pSVar1 == null) break;
							pSVar1.set_Item(name, 0.0);
							__this_00.ApplySpeed((String)name);
						}
						throw new NullReferenceException();
					}
				}
				throw new NullReferenceException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600419C")]
	[Address(RVA = "0x5ADB270", Offset = "0x5ADA270", VA = "0x5ADB270")]
	private void CustomAnimationSpeed()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$CustomAnimationSpeed): clean
		int iVar1;
		AnimationHandler pCVar2;
		HumanSetup pCVar3;
		HumanStats pCVar4;
		Dictionary<object, object> __this_00;
		BasePerk pCVar5;

		pCVar2 = this.Animation;
		if (pCVar2 != null) {
			pCVar2.SetSpeed(HumanAnimations.SpecialLevi, 1.85);
			pCVar2 = this.Animation;
			if (pCVar2 != null) {
				pCVar2.SetSpeed(HumanAnimations.ChangeBlade, 1.2) ;
				pCVar2 = this.Animation;
				if (pCVar2 != null) {
					pCVar2.SetSpeed(HumanAnimations.AirRelease, 0.6);
					pCVar2 = this.Animation;
					if (pCVar2 != null) {
						pCVar2.SetSpeed(HumanAnimations.ChangeBladeAir, 0.8);
						pCVar2 = this.Animation;
						if (pCVar2 != null) {
							pCVar2.SetSpeed(HumanAnimations.AHSSGunReloadBoth, 0.38);
							pCVar2 = this.Animation;
							if (pCVar2 != null) {
								pCVar2.SetSpeed(HumanAnimations.AHSSGunReloadBothAir, 0.5);
								pCVar2 = this.Animation;
								if (pCVar2 != null) {
									pCVar2.SetSpeed(HumanAnimations.SpecialShifter, 0.3);
									pCVar3 = this.Setup;
									if (pCVar3 != null) {
										if (pCVar3.Weapon == 2) {
											pCVar2 = this.Animation;
											if (pCVar2 == null) goto label_05bdb527;
											pCVar2.SetSpeed(HumanAnimations.AHSSGunReloadBoth, 0.76);
											pCVar2 = this.Animation;
											if (pCVar2 == null) goto label_05bdb527;
											pCVar2.SetSpeed(HumanAnimations.AHSSGunReloadBothAir, 1.0);
										}
										pCVar4 = this.Stats;
										if ((pCVar4 != null) &&(__this_00 = (Dictionary<object, object>)pCVar4.Perks, __this_00 != null)) {
											pCVar5 = __this_00.get_Item((Il2CppObject *)"RefillTime");
											if (pCVar5 != null) {
												iVar1 = pCVar5.CurrPoints;
												pCVar2 = this.Animation;
												if (pCVar2 != null) {
													pCVar2.SetSpeed(HumanAnimations.Refill, (float)(iVar1 + 1));
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
	label_05bdb527: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600419D")]
	[Address(RVA = "0x5AD12A0", Offset = "0x5AD02A0", VA = "0x5AD12A0")]
	private bool HasHook()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$HasHook): clean
		HookUseable pCVar1;
		bool bVar2;

		pCVar1 = this.HookLeft;
		if (pCVar1 != null) {
			bVar2 = pCVar1.HasHook();
			if (bVar2) {
				return true;
			}
			pCVar1 = this.HookRight;
			if (pCVar1 != null) {
				bVar2 = pCVar1.HasHook();
				return bVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600419E")]
	[Address(RVA = "0x5AD1310", Offset = "0x5AD0310", VA = "0x5AD1310")]
	private bool IsHookedAny()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$IsHookedAny): clean
		HookUseable pCVar1;
		bool bVar2;

		pCVar1 = this.HookLeft;
		if (pCVar1 != null) {
			bVar2 = pCVar1.IsHooked();
			if (bVar2) {
				return true;
			}
			pCVar1 = this.HookRight;
			if (pCVar1 != null) {
				bVar2 = pCVar1.IsHooked();
				return bVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600419F")]
	[Address(RVA = "0x5AD1350", Offset = "0x5AD0350", VA = "0x5AD1350")]
	private bool IsHookedLeft()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$IsHookedLeft): clean
		HookUseable __this_00;
		bool bVar1;

		__this_00 = this.HookLeft;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return bVar1;
	}

	[Token(Token = "0x60041A0")]
	[Address(RVA = "0x5AD1370", Offset = "0x5AD0370", VA = "0x5AD1370")]
	private bool IsHookedRight()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$IsHookedRight): clean
		HookUseable __this_00;
		bool bVar1;

		__this_00 = this.HookRight;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return bVar1;
	}

	[Token(Token = "0x60041A1")]
	[Address(RVA = "0x5AD1490", Offset = "0x5AD0490", VA = "0x5AD1490")]
	private bool IsFrontGrounded()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$IsFrontGrounded): 20 lines keep C-only constructs
		BaseComponentCache pUVar1;
		Transform pUVar2;
		bool bVar3;
		int iVar4;
		uint extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		Vector3 UVar5;
		Vector3 UVar6;
		Vector3 UVar7;
		LayerMask local_30;
		float local_2c;
		byte[] local_28 = new byte[8];
		float fStack_20;
		float fStack_1c;
		byte[] local_18 = new byte[16];

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pUVar2 = pUVar1.Transform, pUVar2 != null)) {
			UVar5 = pUVar2.position;
			pUVar1 = this.Cache;
			if (pUVar1 != null) {
				fStack_20 = (float)extraout_XMM0_Dc;
				local_28 = (byte[])UVar5._0_8_;
				fStack_1c = (float)extraout_XMM0_Dd;
				pUVar2 = pUVar1.Transform;
				if (pUVar2 != null) {
					UVar6 = pUVar2.up;
					pUVar1 = this.Cache;
					if ((pUVar1 != null) &&(pUVar2 = pUVar1.Transform, pUVar2 != null)) {
						local_28._4_4_ = (float)local_28._4_4_ + UVar6.y;
						local_28._0_4_ = (float)local_28._0_4_ + UVar6.x;
						fStack_20 = fStack_20 + extraout_XMM0_Dc_00;
						fStack_1c = fStack_1c + extraout_XMM0_Dd_00;
						UVar7 = pUVar2.forward;
						local_2c = UVar7.z;
						local_18._8_4_ = extraout_XMM0_Dc_01;
						local_18._0_8_ = UVar7._0_8_;
						local_18._12_4_ = extraout_XMM0_Dd_01;
						local_30 = this.get_GroundMask();
						iVar4 = local_30.value;
						UVar5.z = UVar5.z + UVar6.z;
						UVar5.x = (float)local_28._0_4_;
						UVar5.y = (float)local_28._4_4_;
						UVar6.z = local_2c;
						UVar6.x = (float)local_18._0_4_;
						UVar6.y = (float)local_18._4_4_;
						bVar3 = this.CheckRaycastIgnoreTriggers(UVar5, UVar6, 1.0, iVar4);
						return bVar3;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60041A2")]
	[Address(RVA = "0x5AD1390", Offset = "0x5AD0390", VA = "0x5AD1390")]
	private bool IsPressDirectionTowardsHero()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$IsPressDirectionTowardsHero): clean
		BaseComponentCache pUVar1;
		Transform __this_00;
		float fVar2;
		float fVar3;
		Vector3 UVar4;
		Vector3 euler;
		Quaternion local_10;

		if (this.HasDirection == false) {
			return false;
		}
		pUVar1 = this.Cache;
		if ((pUVar1 == null) ||(__this_00 = pUVar1.Transform, __this_00 == null)) {
			throw new NullReferenceException();
		}
		fVar2 = this.TargetAngle;
		local_10 = __this_00.rotation;
		UVar4 = Quaternion.Internal_ToEulerRad(ref local_10);
		euler.x = UVar4.x * 57.29578;
		euler.y = UVar4.y * 57.29578;
		euler.z = UVar4.z * 57.29578;
		UVar4 = Quaternion.Internal_MakePositive(euler);
		fVar2 = UVar4.y - fVar2;
		fVar3 = floorf(fVar2 / 360.0);
		fVar2 = fVar3 * -360.0 + fVar2;
		fVar3 = 360.0;
		if (fVar2 <= 360.0) {
			fVar3 = fVar2;
		}
		fVar3 = (float)(-(uint)(0.0 <= fVar2) & (uint)fVar3);
		return ABS((float)(~-(uint)(180.0 < fVar3) & (uint)fVar3 | (uint)(fVar3 + -360.0) & -(uint)(180.0 < fVar3))) < 45.0;
	}

	[Token(Token = "0x60041A3")]
	[Address(RVA = "0x5AD8B90", Offset = "0x5AD7B90", VA = "0x5AD8B90")]
	private bool IsPressDirectionRelativeToWall(Vector3 wallNormal, float dotValue)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$IsPressDirectionRelativeToWall): 1 lines keep C-only constructs
		Vector3 UVar2;
		float fVar1;
		float fStack_18;
		float fStack_14;

		if (this.HasDirection == false) {
			return false;
		}
		fVar1 = wallNormal.z;
		UVar2._0_8_ =this.GetTargetDirection();
		fStack_18 = wallNormal.x;
		fStack_14 = wallNormal.y;
		return dotValue < fVar1 * wallNormal.z + UVar2.y * fStack_14 + UVar2.x * fStack_18;
	}

	[Token(Token = "0x60041A4")]
	[Address(RVA = "0x5AD15A0", Offset = "0x5AD05A0", VA = "0x5AD15A0")]
	private bool IsUpFrontGrounded()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$IsUpFrontGrounded): 20 lines keep C-only constructs
		BaseComponentCache pUVar1;
		Transform pUVar2;
		bool bVar3;
		int iVar4;
		uint extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		Vector3 UVar5;
		Vector3 UVar6;
		Vector3 UVar7;
		LayerMask local_30;
		float local_2c;
		byte[] local_28 = new byte[8];
		float fStack_20;
		float fStack_1c;
		byte[] local_18 = new byte[16];

		pUVar1 = this.Cache;
		if ((pUVar1 != null) &&(pUVar2 = pUVar1.Transform, pUVar2 != null)) {
			UVar5 = pUVar2.position;
			pUVar1 = this.Cache;
			if (pUVar1 != null) {
				fStack_20 = (float)extraout_XMM0_Dc;
				local_28 = (byte[])UVar5._0_8_;
				fStack_1c = (float)extraout_XMM0_Dd;
				pUVar2 = pUVar1.Transform;
				if (pUVar2 != null) {
					UVar6 = pUVar2.up;
					pUVar1 = this.Cache;
					if ((pUVar1 != null) &&(pUVar2 = pUVar1.Transform, pUVar2 != null)) {
						local_28._4_4_ = (float)local_28._4_4_ + UVar6.y * 3.0;
						local_28._0_4_ = (float)local_28._0_4_ + UVar6.x * 3.0;
						fStack_20 = fStack_20 + extraout_XMM0_Dc_00 * 0.0;
						fStack_1c = fStack_1c + extraout_XMM0_Dd_00 * 0.0;
						UVar7 = pUVar2.forward;
						local_2c = UVar7.z;
						local_18._8_4_ = extraout_XMM0_Dc_01;
						local_18._0_8_ = UVar7._0_8_;
						local_18._12_4_ = extraout_XMM0_Dd_01;
						local_30 = this.get_GroundMask();
						iVar4 = local_30.value;
						UVar5.z = UVar5.z + UVar6.z * 3.0;
						UVar5.x = (float)local_28._0_4_;
						UVar5.y = (float)local_28._4_4_;
						UVar6.z = local_2c;
						UVar6.x = (float)local_18._0_4_;
						UVar6.y = (float)local_18._4_4_;
						bVar3 = this.CheckRaycastIgnoreTriggers(UVar5, UVar6, 1.2, iVar4);
						return bVar3;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60041A5")]
	[Address(RVA = "0x5AD16C0", Offset = "0x5AD06C0", VA = "0x5AD16C0")]
	public bool IsFiringThunderspear()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$IsFiringThunderspear): clean
		HumanSetup pCVar1;
		AnimationHandler pCVar2;
		bool bVar3;

		pCVar1 = this.Setup;
		if (pCVar1 != null) {
			if (pCVar1.Weapon != 2) {
				return false;
			}
			pCVar2 = this.Animation;
			if (pCVar2 != null) {
				bVar3 = pCVar2.IsPlaying(HumanAnimations.TSShootL);
				if (bVar3) {
					return true;
				}
				pCVar2 = this.Animation;
				if (pCVar2 != null) {
					bVar3 = pCVar2.IsPlaying(HumanAnimations.TSShootR);
					if (bVar3) {
						return true;
					}
					pCVar2 = this.Animation;
					if (pCVar2 != null) {
						bVar3 = pCVar2.IsPlaying(HumanAnimations.TSShootLAir);
						if (bVar3) {
							return true;
						}
						pCVar2 = this.Animation;
						if (pCVar2 != null) {
							bVar3 = pCVar2.IsPlaying(HumanAnimations.TSShootRAir);
							return bVar3;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60041A6")]
	[Address(RVA = "0x5AD4360", Offset = "0x5AD3360", VA = "0x5AD4360")]
	private void ToggleBladeFire(int state)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ToggleBladeFire): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		bool bVar2;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		int local_2c;

		bVar2 = this.IsMine();
		if (bVar2) {
			if (this._bladeFireState != state) {
				pUVar1 = this.Cache;
				if (pUVar1 == null) {
	label_05bd4478: ;
					throw new NullReferenceException();
				}
				__this_00 = pUVar1.PhotonView;
				parameters = (Object[])new object[1];
				local_2c = state;
				pIVar3 = (object)local_2c;
				if (parameters == null) goto label_05bd4478;
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
				if (__this_00 == null) goto label_05bd4478;
				__this_00.RPC("ToggleBladeFireRPC", 0, parameters);
			}
			this._bladeFireState = state;
		}
		return;
	}

	[Token(Token = "0x60041A7")]
	[Address(RVA = "0x5ACC830", Offset = "0x5ACB830", VA = "0x5ACC830")]
	private void ToggleBladeTrails(bool toggle)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ToggleBladeTrails): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		bool bVar2;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		byte local_29;

		bVar2 = this.IsMine();
		if (bVar2) {
			if (this._bladeTrailActive != toggle) {
				pUVar1 = this.Cache;
				if (pUVar1 == null) {
	label_05bcc948: ;
					throw new NullReferenceException();
				}
				__this_00 = pUVar1.PhotonView;
				parameters = (Object[])new object[1];
				local_29 = toggle;
				pIVar3 = (object)local_29;
				if (parameters == null) goto label_05bcc948;
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
				if (__this_00 == null) goto label_05bcc948;
				__this_00.RPC("ToggleBladeTrailsRPC", 0, parameters);
			}
			this._bladeTrailActive = toggle;
		}
		return;
	}

	[Token(Token = "0x60041A8")]
	[Address(RVA = "0x5AC4070", Offset = "0x5AC3070", VA = "0x5AC4070")]
	public void ToggleBlades(bool toggle)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ToggleBlades): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		bool bVar2;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		byte local_19;

		bVar2 = this.IsMine();
		if (!bVar2) {
			return;
		}
		pUVar1 = this.Cache;
		if (pUVar1 != null) {
			__this_00 = pUVar1.PhotonView;
			parameters = (Object[])new object[1];
			local_19 = toggle;
			pIVar3 = (object)local_19;
			if (parameters != null) {
				if ((pIVar3 != null) &&(pIVar4 = il2cpp_vm_Object_IsInst(pIVar3, (((parameters.obj).klass)._1).element_class), pIVar4 == null)) {
					pIVar3 = new ArrayTypeMismatchException();
					throw pIVar3;
				}
				if ((int)parameters.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				parameters[0] = pIVar3;
				if (__this_00 != null) {
					__this_00.RPC("ToggleBladesRPC", 0, parameters);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60041A9")]
	[Address(RVA = "0x5ADF1B0", Offset = "0x5ADE1B0", VA = "0x5ADF1B0")]
	[PunRPC]
	protected void ToggleBladesRPC(bool toggle, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ToggleBladesRPC): clean
		HumanSetup pCVar1;
		MeleeWeaponTrail pMVar2;
		Object pUVar3;
		GameObject pUVar4;
		BaseComponentCache pUVar5;
		PhotonView pPVar6;
		bool bVar7;
		bool value;

		if (info.Sender != null) {
			pUVar5 = this.Cache;
			if ((pUVar5 == null) ||(pPVar6 = pUVar5.PhotonView, pPVar6 == null)) {
				throw new NullReferenceException();
			}
			if (info.Sender != pPVar6._Owner_k__BackingField) {
				return;
			}
		}
		if (this.FinishSetup == false) {
			return;
		}
		if (toggle) {
			value = this.Sheathed == false;
		}
		else {
			value = false;
		}
		if (value == false) {
			pCVar1 = this.Setup;
			if (pCVar1 == null) goto label_05bdb25d;
			pMVar2 = pCVar1.LeftTrail;
			bVar7 = ((Object)pMVar2 != null);
			if (bVar7) {
				pCVar1 = this.Setup;
				if (pCVar1 == null) goto label_05bdb25d;
				pMVar2 = pCVar1.RightTrail;
				bVar7 = ((Object)pMVar2 != null);
				if (bVar7) {
					pCVar1 = this.Setup;
					if ((pCVar1 == null) ||(pMVar2 = pCVar1.LeftTrail, pMVar2 == null)) goto label_05bdb25d;
					pMVar2.StopImmediate();
					pCVar1 = this.Setup;
					if ((pCVar1 == null) ||(pMVar2 = pCVar1.RightTrail, pMVar2 == null)) goto label_05bdb25d;
					pMVar2.StopImmediate();
				}
			}
		}
		pCVar1 = this.Setup;
		if (pCVar1 != null) {
			pUVar3 = (Object)pCVar1._part_blade_l;
			bVar7 = (pUVar3 != null);
			if (bVar7) {
				pCVar1 = this.Setup;
				if ((pCVar1 == null) ||(pUVar4 = pCVar1._part_blade_l, pUVar4 == null)) goto label_05bdb25d;
				pUVar4.SetActive(value);
			}
			pCVar1 = this.Setup;
			if (pCVar1 != null) {
				pUVar3 = (Object)pCVar1._part_blade_r;
				bVar7 = (pUVar3 != null);
				if (!bVar7) {
					return;
				}
				pCVar1 = this.Setup;
				if ((pCVar1 != null) &&(pUVar4 = pCVar1._part_blade_r, pUVar4 != null)) {
					pUVar4.SetActive(value);
					return;
				}
			}
		}
	label_05bdb25d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60041AA")]
	[Address(RVA = "0x5ADB090", Offset = "0x5ADA090", VA = "0x5ADB090")]
	private void SetWeaponPartsActive(bool active)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$SetWeaponPartsActive): clean
		HumanSetup pCVar1;
		MeleeWeaponTrail pMVar2;
		Object pUVar3;
		GameObject pUVar4;
		bool bVar5;

		if (!active) {
			pCVar1 = this.Setup;
			if (pCVar1 == null) goto label_05bdb25d;
			pMVar2 = pCVar1.LeftTrail;
			bVar5 = ((Object)pMVar2 != null);
			if (bVar5) {
				pCVar1 = this.Setup;
				if (pCVar1 == null) goto label_05bdb25d;
				pMVar2 = pCVar1.RightTrail;
				bVar5 = ((Object)pMVar2 != null);
				if (bVar5) {
					pCVar1 = this.Setup;
					if ((pCVar1 == null) ||(pMVar2 = pCVar1.LeftTrail, pMVar2 == null)) goto label_05bdb25d;
					pMVar2.StopImmediate();
					pCVar1 = this.Setup;
					if ((pCVar1 == null) ||(pMVar2 = pCVar1.RightTrail, pMVar2 == null)) goto label_05bdb25d;
					pMVar2.StopImmediate();
				}
			}
		}
		pCVar1 = this.Setup;
		if (pCVar1 != null) {
			pUVar3 = (Object)pCVar1._part_blade_l;
			bVar5 = (pUVar3 != null);
			if (bVar5) {
				pCVar1 = this.Setup;
				if ((pCVar1 == null) ||(pUVar4 = pCVar1._part_blade_l, pUVar4 == null)) goto label_05bdb25d;
				pUVar4.SetActive(active);
			}
			pCVar1 = this.Setup;
			if (pCVar1 != null) {
				pUVar3 = (Object)pCVar1._part_blade_r;
				bVar5 = (pUVar3 != null);
				if (!bVar5) {
					return;
				}
				pCVar1 = this.Setup;
				if ((pCVar1 != null) &&(pUVar4 = pCVar1._part_blade_r, pUVar4 != null)) {
					pUVar4.SetActive(active);
					return;
				}
			}
		}
	label_05bdb25d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60041AB")]
	[Address(RVA = "0x5ADF210", Offset = "0x5ADE210", VA = "0x5ADF210")]
	[PunRPC]
	protected void ToggleBladeTrailsRPC(bool toggle, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ToggleBladeTrailsRPC): clean
		int iVar1;
		BaseComponentCache pUVar2;
		PhotonView pPVar3;
		HumanSetup pCVar4;
		GraphicsSettings pSVar5;
		IntSetting pSVar6;
		bool bVar7;
		bool bVar8;
		MeleeWeaponTrail pMVar9;
		MeleeWeaponTrail pMVar10;
		float fVar11;

		if (info.Sender != null) {
			pUVar2 = this.Cache;
			if ((pUVar2 == null) ||(pPVar3 = pUVar2.PhotonView, pPVar3 == null)) goto label_05bdf579;
			if (info.Sender != pPVar3._Owner_k__BackingField) {
				return;
			}
		}
		pCVar4 = this.Setup;
		bVar7 = ((Object)pCVar4 == null);
		if (bVar7) {
			return;
		}
		pCVar4 = this.Setup;
		if (pCVar4 != null) {
			pMVar10 = pCVar4.LeftTrail;
			bVar7 = ((Object)pMVar10 == null);
			if (bVar7) {
				return;
			}
			pCVar4 = this.Setup;
			if (pCVar4 != null) {
				pMVar10 = pCVar4.RightTrail;
				bVar8 = false;
				bVar7 = ((Object)pMVar10 == null);
				if (bVar7) {
					return;
				}
				if (this.EffectsEnabled != false) {
					pSVar5 = SettingsManager.GraphicsSettings;
					if ((pSVar5 == null) ||(pSVar6 = pSVar5.WeaponTrail, pSVar6 == null)) goto label_05bdf579;
					iVar1 = pSVar6._value;
					if (iVar1 == 2) {
						bVar8 = true;
					}
					else if (iVar1 == 1) {
						bVar8 = this.IsMainCharacter();
					}
				}
				pCVar4 = this.Setup;
				if ((bVar8 & toggle) == 0) {
					if ((pCVar4 == null) ||(pMVar10 = pCVar4.LeftTrail, pMVar10 == null)) goto label_05bdf579;
					pMVar10._emitTime = 0.1;
					pMVar9 = pCVar4.RightTrail;
					if (pMVar9 == null) goto label_05bdf579;
					fVar11 = 0.1;
				}
				else {
					if ((pCVar4 == null) ||(pMVar10 = pCVar4.LeftTrail, pMVar10 == null)) goto label_05bdf579;
					pMVar10._emit = true;
					pMVar9 = pCVar4.RightTrail;
					if (pMVar9 == null) goto label_05bdf579;
					pMVar9._emit = true;
					pMVar10._emitTime = 0.0;
					fVar11 = 0.0;
				}
				pMVar9._emitTime = fVar11;
				bVar7 = pMVar10.enabled;
				if (bVar8 == false) {
					if (!bVar7) {
						pCVar4 = this.Setup;
						if ((pCVar4 == null) ||(pMVar10 = pCVar4.RightTrail, pMVar10 == null)) goto label_05bdf579;
						bVar7 = pMVar10.enabled;
						if (!bVar7) {
							return;
						}
					}
					pCVar4 = this.Setup;
					if ((pCVar4 != null) &&(pMVar10 = pCVar4.LeftTrail, pMVar10 != null)) {
						pMVar10.StopImmediate();
						pCVar4 = this.Setup;
						if ((pCVar4 != null) &&(pMVar10 = pCVar4.RightTrail, pMVar10 != null)) {
							pMVar10.StopImmediate();
							pCVar4 = this.Setup;
							if ((pCVar4 != null) &&(pMVar10 = pCVar4.LeftTrail, pMVar10 != null)) {
								pMVar10.enabled = false;
								pCVar4 = this.Setup;
								if ((pCVar4 != null) &&(pMVar10 = pCVar4.RightTrail, pMVar10 != null)) {
									bVar7 = false;
									goto label_05bdf56a;
								}
							}
						}
					}
				}
				else {
					if (bVar7) {
						pCVar4 = this.Setup;
						if ((pCVar4 == null) ||(pMVar10 = pCVar4.RightTrail, pMVar10 == null)) goto label_05bdf579;
						bVar7 = pMVar10.enabled;
						if (bVar7) {
							return;
						}
					}
					pCVar4 = this.Setup;
					if ((pCVar4 != null) &&(pMVar10 = pCVar4.LeftTrail, pMVar10 != null)) {
						pMVar10.enabled = true;
						pCVar4 = this.Setup;
						if ((pCVar4 != null) &&(pMVar10 = pCVar4.RightTrail, pMVar10 != null)) {
							bVar7 = true;
	label_05bdf56a: ;
							pMVar10.enabled = bVar7;
							return;
						}
					}
				}
			}
		}
	label_05bdf579: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60041AC")]
	[Address(RVA = "0x5ADF580", Offset = "0x5ADE580", VA = "0x5ADF580")]
	[PunRPC]
	protected void ToggleBladeFireRPC(int state, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ToggleBladeFireRPC): clean
		uint uVar1;
		BaseComponentCache pUVar2;
		PhotonView pPVar3;
		HumanSetup pCVar4;
		Object pUVar5;
		String[] pSVar6;
		String pSVar7;
		GraphicsSettings pSVar8;
		BoolSetting pSVar9;
		bool bVar10;
		ulong uVar11;
		Transform pUVar12;
		Transform pUVar13;
		GameObject pUVar14;
		uint uVar15;
		ulong uVar16;

		if (info.Sender != null) {
			pUVar2 = this.Cache;
			if ((pUVar2 == null) ||(pPVar3 = pUVar2.PhotonView, pPVar3 == null)) goto label_05bdf9d8;
			if (info.Sender != pPVar3._Owner_k__BackingField) {
				return;
			}
		}
		pCVar4 = this.Setup;
		bVar10 = ((Object)pCVar4 == null);
		if (bVar10) {
			return;
		}
		pCVar4 = this.Setup;
		if (pCVar4 == null) goto label_05bdf9d8;
		if (pCVar4.Weapon == 0) {
			pUVar5 = (Object)pCVar4._part_blade_l;
			bVar10 = (pUVar5 == null);
			if (!bVar10) {
				pCVar4 = this.Setup;
				if (pCVar4 != null) {
					pUVar5 = (Object)pCVar4._part_blade_r;
					bVar10 = (pUVar5 == null);
					if (bVar10) {
						return;
					}
					pCVar4 = this.Setup;
					if ((pCVar4 != null) &&(pSVar6 = pCVar4.TierEffects, pSVar6 != null)) {
						if (0 < (int)pSVar6.Length) {
							uVar11 = pSVar6.Length & 0xffffffff;
							uVar16 = 0;
							do {
								if (uVar11 <= uVar16) goto label_05bdf9dd;
								pCVar4 = this.Setup;
								if ((pCVar4 == null) ||(pUVar14 = pCVar4._part_blade_l, pUVar14 == null)) goto label_05bdf9d8;
								pSVar7 = pSVar6[uVar16];
								pUVar12 = pUVar14.transform;
								if (pUVar12 == null) goto label_05bdf9d8;
								pUVar12 = pUVar12.Find(pSVar7);
								pCVar4 = this.Setup;
								if (((pCVar4 == null) ||(pUVar14 = pCVar4._part_blade_r, pUVar14 == null)) ||(pUVar13 = pUVar14.transform, pUVar13 == null)) goto label_05bdf9d8;
								pUVar13 = pUVar13.Find(pSVar7);
								bVar10 = ((Object)pUVar12 != null);
								if (bVar10) {
									if ((pUVar12 == null) ||(pUVar14 = pUVar12.gameObject, pUVar14 == null)) goto label_05bdf9d8;
									pUVar14.SetActive(false);
								}
								bVar10 = ((Object)pUVar13 != null);
								if (bVar10) {
									if ((pUVar13 == null) ||(pUVar14 = pUVar13.gameObject, pUVar14 == null)) goto label_05bdf9d8;
									pUVar14.SetActive(false);
								}
								uVar16 = uVar16 + 1;
								uVar15 = (uint)pSVar6.Length;
								uVar11 = (ulong)uVar15;
							} while ((long)uVar16 < (long)(int)uVar15);
						}
						if (state == 0) {
							return;
						}
						if (this.EffectsEnabled == false) {
							return;
						}
						pSVar8 = SettingsManager.GraphicsSettings;
						if ((pSVar8 != null) &&(pSVar9 = pSVar8.WeaponFireEffect, pSVar9 != null)) {
							if (pSVar9._value == false) {
								return;
							}
							uVar15 = state - 1;
							if ((int)uVar15 < 0) {
								return;
							}
							pCVar4 = this.Setup;
							if ((pCVar4 != null) &&(pSVar6 = pCVar4.TierEffects, pSVar6 != null)) {
								uVar1 = (uint)pSVar6.Length;
								if ((int)uVar1 <= (int)uVar15) {
									return;
								}
								if (uVar1 <= uVar15) {
	label_05bdf9dd: ;
									throw new IndexOutOfRangeException();
								}
								pUVar14 = pCVar4._part_blade_l;
								if (pUVar14 != null) {
									pSVar7 = pSVar6[uVar15];
									pUVar12 = pUVar14.transform;
									if (pUVar12 != null) {
										pUVar12 = pUVar12.Find(pSVar7);
										pCVar4 = this.Setup;
										if (((pCVar4 != null) &&(pUVar14 = pCVar4._part_blade_r, pUVar14 != null)) && (pUVar13 = pUVar14.transform, pUVar13 != null)) {
											pUVar13 = pUVar13.Find(pSVar7);
											bVar10 = ((Object)pUVar12 != null);
											if (bVar10) {
												if ((pUVar12 == null) ||(pUVar14 = pUVar12.gameObject, pUVar14 == null)) goto label_05bdf9d8;
												pUVar14.SetActive(true);
											}
											bVar10 = ((Object)pUVar13 != null);
											if (!bVar10) {
												return;
											}
											if ((pUVar13 != null) &&(pUVar14 = pUVar13.gameObject, pUVar14 != null)) {
												pUVar14.SetActive(true);
												return;
											}
										}
									}
								}
							}
						}
					}
				}
	label_05bdf9d8: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x60041AD")]
	[Address(RVA = "0x5ADF9F0", Offset = "0x5ADE9F0", VA = "0x5ADF9F0")]
	public void ToggleBuff1(bool toggle)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ToggleBuff1): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		bool bVar2;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		byte local_29;

		bVar2 = this.IsMine();
		if (bVar2) {
			if (this._buff1Active != toggle) {
				pUVar1 = this.Cache;
				if (pUVar1 == null) {
	label_05bdfb08: ;
					throw new NullReferenceException();
				}
				__this_00 = pUVar1.PhotonView;
				parameters = (Object[])new object[1];
				local_29 = toggle;
				pIVar3 = (object)local_29;
				if (parameters == null) goto label_05bdfb08;
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
				if (__this_00 == null) goto label_05bdfb08;
				__this_00.RPC("ToggleBuff1RPC", 0, parameters);
			}
			this._buff1Active = toggle;
		}
		return;
	}

	[Token(Token = "0x60041AE")]
	[Address(RVA = "0x5ADFB30", Offset = "0x5ADEB30", VA = "0x5ADFB30")]
	[PunRPC]
	protected void ToggleBuff1RPC(bool toggle, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ToggleBuff1RPC): 3 lines keep C-only constructs
		BaseComponentCache pUVar1;
		HumanComponentCache pCVar2;
		bool bVar3;
		PhotonView in_RCX;
		Human __this_00;

		if (info.Sender != null) {
			pUVar1 = this.Cache;
			if ((pUVar1 == null) ||(in_RCX = pUVar1.PhotonView, in_RCX == null)) goto label_05bdfc02;
			if (info.Sender != in_RCX._Owner_k__BackingField) {
				return;
			}
		}
		if (this.FinishSetup == false) {
			return;
		}
		pCVar2 = this.HumanCache;
		if (pCVar2 != null) {
			__this_00 = (Human)pCVar2.Buff1;
			bVar3 = ((Object)__this_00 == null);
			if (bVar3) {
				return;
			}
			pCVar2 = this.HumanCache;
			if (pCVar2 != null) {
				if (toggle) {
					bVar3 = this.EffectsEnabled != false;
				}
				else {
					bVar3 = false;
				}
				__this_00.SetParticleSystemsActive(pCVar2.Buff1, bVar3);
				return;
			}
		}
	label_05bdfc02: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60041AF")]
	[Address(RVA = "0x5ADFE00", Offset = "0x5ADEE00", VA = "0x5ADFE00")]
	public void ToggleBuff2(bool toggle)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ToggleBuff2): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		bool bVar2;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		byte local_29;

		bVar2 = this.IsMine();
		if (bVar2) {
			if (this._buff2Active != toggle) {
				pUVar1 = this.Cache;
				if (pUVar1 == null) {
	label_05bdff18: ;
					throw new NullReferenceException();
				}
				__this_00 = pUVar1.PhotonView;
				parameters = (Object[])new object[1];
				local_29 = toggle;
				pIVar3 = (object)local_29;
				if (parameters == null) goto label_05bdff18;
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
				if (__this_00 == null) goto label_05bdff18;
				__this_00.RPC("ToggleBuff2RPC", 0, parameters);
			}
			this._buff2Active = toggle;
		}
		return;
	}

	[Token(Token = "0x60041B0")]
	[Address(RVA = "0x5ADFF40", Offset = "0x5ADEF40", VA = "0x5ADFF40")]
	[PunRPC]
	protected void ToggleBuff2RPC(bool toggle, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ToggleBuff2RPC): 3 lines keep C-only constructs
		BaseComponentCache pUVar1;
		HumanComponentCache pCVar2;
		bool bVar3;
		PhotonView in_RCX;
		Human __this_00;

		if (info.Sender != null) {
			pUVar1 = this.Cache;
			if ((pUVar1 == null) ||(in_RCX = pUVar1.PhotonView, in_RCX == null)) goto label_05be0012;
			if (info.Sender != in_RCX._Owner_k__BackingField) {
				return;
			}
		}
		if (this.FinishSetup == false) {
			return;
		}
		pCVar2 = this.HumanCache;
		if (pCVar2 != null) {
			__this_00 = (Human)pCVar2.Buff2;
			bVar3 = ((Object)__this_00 == null);
			if (bVar3) {
				return;
			}
			pCVar2 = this.HumanCache;
			if (pCVar2 != null) {
				if (toggle) {
					bVar3 = this.EffectsEnabled != false;
				}
				else {
					bVar3 = false;
				}
				__this_00.SetParticleSystemsActive(pCVar2.Buff2, bVar3);
				return;
			}
		}
	label_05be0012: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60041B1")]
	[Address(RVA = "0x5AE0020", Offset = "0x5ADF020", VA = "0x5AE0020")]
	public void ToggleFire1(bool toggle)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ToggleFire1): 1 lines keep C-only constructs
		BaseComponentCache pUVar1;
		PhotonView __this_00;
		bool bVar2;
		Object[] parameters;
		object pIVar3;
		object pIVar4;
		byte local_29;

		bVar2 = this.IsMine();
		if (bVar2) {
			if (this._fire1Active != toggle) {
				pUVar1 = this.Cache;
				if (pUVar1 == null) {
	label_05be0138: ;
					throw new NullReferenceException();
				}
				__this_00 = pUVar1.PhotonView;
				parameters = (Object[])new object[1];
				local_29 = toggle;
				pIVar3 = (object)local_29;
				if (parameters == null) goto label_05be0138;
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
				if (__this_00 == null) goto label_05be0138;
				__this_00.RPC("ToggleFire1RPC", 0, parameters);
			}
			this._fire1Active = toggle;
		}
		return;
	}

	[Token(Token = "0x60041B2")]
	[Address(RVA = "0x5AE0160", Offset = "0x5ADF160", VA = "0x5AE0160")]
	[PunRPC]
	protected void ToggleFire1RPC(bool toggle, PhotonMessageInfo info)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$ToggleFire1RPC): 3 lines keep C-only constructs
		BaseComponentCache pUVar1;
		HumanComponentCache pCVar2;
		bool bVar3;
		PhotonView in_RCX;
		Human __this_00;

		if (info.Sender != null) {
			pUVar1 = this.Cache;
			if ((pUVar1 == null) ||(in_RCX = pUVar1.PhotonView, in_RCX == null)) goto label_05be0232;
			if (info.Sender != in_RCX._Owner_k__BackingField) {
				return;
			}
		}
		if (this.FinishSetup == false) {
			return;
		}
		pCVar2 = this.HumanCache;
		if (pCVar2 != null) {
			__this_00 = (Human)pCVar2.Fire1;
			bVar3 = ((Object)__this_00 == null);
			if (bVar3) {
				return;
			}
			pCVar2 = this.HumanCache;
			if (pCVar2 != null) {
				if (toggle) {
					bVar3 = this.EffectsEnabled != false;
				}
				else {
					bVar3 = false;
				}
				__this_00.SetParticleSystemsActive(pCVar2.Fire1, bVar3);
				return;
			}
		}
	label_05be0232: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60041B3")]
	[Address(RVA = "0x5ADFC10", Offset = "0x5ADEC10", VA = "0x5ADFC10")]
	private void SetParticleSystemsActive(Transform parent, bool active)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$SetParticleSystemsActive): clean
		uint uVar1;
		ParticleSystem pUVar2;
		bool bVar3;
		Object[] pSVar4;
		ulong uVar5;
		int iVar6;
		ulong uVar7;
		ParticleSystem.EmissionModule UStack_30;

		UStack_30.m_ParticleSystem =(ParticleSystem.EmissionModule)null;
		bVar3 = ((Object)parent == null);
		if (bVar3) {
			return;
		}
		if ((parent == null) ||(pSVar4 = parent.GetComponentsInChildren<ParticleSystem>(true), pSVar4 == null)) {
	label_05bdfdf0: ;
			throw new NullReferenceException();
		}
		iVar6 = (int)pSVar4.Length;
		uVar5 = pSVar4.Length & 0xffffffff;
		if (active) {
			if (iVar6 < 1) {
				return;
			}
			uVar7 = 0;
			while (uVar7 < uVar5) {
				pUVar2 = (ParticleSystem)pSVar4[uVar7];
				bVar3 = ((Object)pUVar2 != null);
				if (bVar3) {
					if (pUVar2 == null) goto label_05bdfdf0;
					UStack_30 = pUVar2.emission;
					UStack_30.enabled = true;
					bVar3 = pUVar2.isPlaying;
					if (!bVar3) {
						pUVar2.Play();
					}
				}
				uVar7 = uVar7 + 1;
				uVar1 = (uint)pSVar4.Length;
				uVar5 = (ulong)uVar1;
				if ((long)(int)uVar1 <= (long)uVar7) {
					return;
				}
			}
		}
		else {
			if (iVar6 < 1) {
				return;
			}
			uVar7 = 0;
			while (uVar7 < uVar5) {
				pUVar2 = (ParticleSystem)pSVar4[uVar7];
				bVar3 = ((Object)pUVar2 != null);
				if (bVar3) {
					if (pUVar2 == null) goto label_05bdfdf0;
					UStack_30 = pUVar2.emission;
					UStack_30.enabled = false;
					bVar3 = pUVar2.isPlaying;
					if (bVar3) {
						pUVar2.Stop();
					}
				}
				uVar7 = uVar7 + 1;
				uVar1 = (uint)pSVar4.Length;
				uVar5 = (ulong)uVar1;
				if ((long)(int)uVar1 <= (long)uVar7) {
					return;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x60041B4")]
	[Address(RVA = "0x5AE0240", Offset = "0x5ADF240", VA = "0x5AE0240")]
	private void DisableAllCustomParticleEffects()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$DisableAllCustomParticleEffects): clean
		bool bVar1;

		bVar1 = this.IsMine();
		if (bVar1) {
			this.ToggleBuff1(false);
			this.ToggleBuff2(false);
			this.ToggleFire1(false);
			return;
		}
		return;
	}

	[Token(Token = "0x60041B5")]
	[Address(RVA = "0x5AE0280", Offset = "0x5ADF280", VA = "0x5AE0280", Slot = "118")]
	protected override string GetFootstepAudio(int phase)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$GetFootstepAudio): 1 lines keep C-only constructs
		uint uVar1;
		long lVar2;

		uVar1 = (typeof(HumanSounds)._2).cctor_finished_or_no_cctor;
		if (phase == 0) {
			if (uVar1 == 0) {
			}
			lVar2 = 0x118;
		}
		else {
			if (uVar1 == 0) {
			}
			lVar2 = 0x120;
		}
		return *(String*)((long)&HumanSounds.BladeBreak + lVar2);
	}

	[Token(Token = "0x60041B6")]
	[Address(RVA = "0x5AE02F0", Offset = "0x5ADF2F0", VA = "0x5AE02F0", Slot = "117")]
	protected override int GetFootstepPhase()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$GetFootstepPhase): clean
		uint uVar1;
		bool bVar2;
		String name;
		AnimationHandler pCVar3;
		uint uVar4;
		float fVar5;

		pCVar3 = this.Animation;
		if (pCVar3 == null) goto label_05be04fc;
		bVar2 = pCVar3.IsPlaying(HumanAnimations.Run);
		if (!bVar2) {
			pCVar3 = this.Animation;
			if (pCVar3 == null) goto label_05be04fc;
			bVar2 = pCVar3.IsPlaying(HumanAnimations.RunTS);
			if (!bVar2) {
				pCVar3 = this.Animation;
				if (pCVar3 == null) goto label_05be04fc;
				bVar2 = pCVar3.IsPlaying(HumanAnimations.RunBuffed);
				pCVar3 = this.Animation;
				uVar1 = (typeof(HumanAnimations)._2).cctor_finished_or_no_cctor;
				if (!bVar2) {
					if (uVar1 == 0) {
					}
					if (pCVar3 != null) {
						bVar2 = pCVar3.IsPlaying(HumanAnimations.Walk);
						if (!bVar2) {
							return this._stepPhase;
						}
						pCVar3 = this.Animation;
						if (pCVar3 != null) {
							name = HumanAnimations.Walk;
							goto label_05be03d3;
						}
					}
					goto label_05be04fc;
				}
				if (uVar1 == 0) {
				}
				if (pCVar3 == null) goto label_05be04fc;
				name = HumanAnimations.RunBuffed;
				goto label_05be03d3;
			}
		}
		pCVar3 = this.Animation;
		if (pCVar3 == null) {
	label_05be04fc: ;
			throw new NullReferenceException();
		}
		name = HumanAnimations.Run;
	label_05be03d3: ;
		fVar5 = pCVar3.GetNormalizedTime(name);
		fVar5 = fmodf(fVar5, 1.0, (MethodInfo)pCVar3);
		if (0.1 <= fVar5) {
			uVar4 = (uint)(fVar5 < 0.6);
		}
		return uVar4;
	}

	[Token(Token = "0x60041B7")]
	[Address(RVA = "0x5AE0510", Offset = "0x5ADF510", VA = "0x5AE0510", Slot = "112")]
	protected override void OnDestroy()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$OnDestroy): clean
		HumanComponentCache pCVar1;
		BaseHitbox pCVar2;
		HumanSetup pCVar3;
		bool bVar4;
		Object pUVar5;

		this.OnDestroy();
		pCVar1 = this.HumanCache;
		if (pCVar1 != null) {
			pCVar2 = pCVar1.AHSSHit;
			bVar4 = ((Object)pCVar2 != null);
			if (bVar4) {
				pCVar1 = this.HumanCache;
				if ((pCVar1 == null) ||(pCVar2 = pCVar1.AHSSHit, pCVar2 == null)) goto label_05be0722;
				pUVar5 = (Object)pCVar2.gameObject;
				bVar4 = (pUVar5 != null);
				if (bVar4) {
					pCVar1 = this.HumanCache;
					if ((pCVar1 == null) ||(pCVar2 = pCVar1.AHSSHit, pCVar2 == null)) goto label_05be0722;
					pUVar5 = (Object)pCVar2.gameObject;
					Object.Destroy(pUVar5);
				}
			}
			pCVar1 = this.HumanCache;
			if (pCVar1 == null) goto label_05be0722;
			pCVar2 = pCVar1.APGHit;
			bVar4 = ((Object)pCVar2 != null);
			if (bVar4) {
				pCVar1 = this.HumanCache;
				if ((pCVar1 == null) ||(pCVar2 = pCVar1.APGHit, pCVar2 == null)) goto label_05be0722;
				pUVar5 = (Object)pCVar2.gameObject;
				bVar4 = (pUVar5 != null);
				if (bVar4) {
					pCVar1 = this.HumanCache;
					if ((pCVar1 == null) ||(pCVar2 = pCVar1.APGHit, pCVar2 == null)) goto label_05be0722;
					pUVar5 = (Object)pCVar2.gameObject;
					Object.Destroy(pUVar5);
				}
			}
		}
		pCVar3 = this.Setup;
		bVar4 = ((Object)pCVar3 != null);
		if (!bVar4) {
			return;
		}
		pCVar3 = this.Setup;
		if (pCVar3 != null) {
			pCVar3.DeleteDie();
			return;
		}
	label_05be0722: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60041B8")]
	[Address(RVA = "0x5AE0730", Offset = "0x5ADF730", VA = "0x5AE0730", Slot = "107")]
	protected override void CheckGround()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$CheckGround): 33 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		BaseComponentCache pUVar7;
		Transform pUVar8;
		UnityEngine_Vector3_StaticFields pUVar9;
		HumanSetup pCVar10;
		HumanComponentCache pCVar11;
		bool bVar12;
		int iVar13;
		float extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float extraout_XMM0_Dc_01;
		float extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float extraout_XMM0_Dd_01;
		Vector3 UVar14;
		Vector3 UVar15;
		Vector3 UVar16;
		Vector3 UVar17;
		Vector3 UVar18;
		Vector3 UVar19;
		LayerMask UStack_50;
		float fStack_4c;
		byte[] auStack_48 = new byte[8];
		float fStack_40;
		float fStack_3c;
		float fStack_38;
		float fStack_28;
		float fStack_24;

		this.JustGrounded = false;
		pUVar7 = this.Cache;
		if ((pUVar7 == null) ||(pUVar8 = pUVar7.Transform, pUVar8 == null)) goto label_05be0b0e;
		UVar14 = pUVar8.position;
		auStack_48._0_4_ = UVar14.x;
		auStack_48._4_4_ = UVar14.y;
		fStack_40 = extraout_XMM0_Dc;
		fStack_3c = extraout_XMM0_Dd;
		if (Il2CppMethodInitialized_0753e72c == false) {
			auStack_48 = (byte[])UVar14._0_8_;
			Il2CppMethodInitialized_0753e72c = true;
		}
		pUVar9 = typeof(Vector3).static_fields;
		uVar1 = (pUVar9.upVector).x;
		uVar4 = (pUVar9.upVector).y;
		fStack_38 = (pUVar9.upVector).z;
		auStack_48._4_4_ = (float)auStack_48._4_4_ + (float)uVar4 * 0.1;
		auStack_48._0_4_ = (float)auStack_48._0_4_ + (float)uVar1 * 0.1;
		fStack_40 = fStack_40 + 0.0;
		fStack_3c = fStack_3c + 0.0;
		UVar14.z = UVar14.z + fStack_38 * 0.1;
		fStack_28 = -(float)uVar1;
		fStack_24 = -(float)uVar4;
		fStack_38 = -fStack_38;
		fStack_4c = this.get_GroundDistance();
		UStack_50 = this.get_GroundMask();
		iVar13 = UStack_50.value;
		UVar17.y = fStack_24;
		UVar17.x = fStack_28;
		UVar14.x = (float)auStack_48._0_4_;
		UVar14.y = (float)auStack_48._4_4_;
		UVar17.z = fStack_38;
		bVar12 = this.CheckRaycastIgnoreTriggers(UVar14, UVar17, fStack_4c, iVar13);
		if (bVar12) goto label_05be0864;
		if (this._needLean == false) {
	label_05be0aee: ;
			this.Grounded = false;
			return;
		}
		pCVar10 = this.Setup;
		if (pCVar10 != null) {
			if ((pCVar10.Weapon | 2U) != 3) goto label_05be0aee;
			pCVar11 = this.HumanCache;
			if ((pCVar11 != null) &&(pUVar8 = pCVar11.GroundLeft, pUVar8 != null)) {
				UVar14 = pUVar8.position;
				auStack_48._0_4_ = UVar14.x;
				auStack_48._4_4_ = UVar14.y;
				fStack_40 = extraout_XMM0_Dc_00;
				fStack_3c = extraout_XMM0_Dd_00;
				if (Il2CppMethodInitialized_0753e72c == false) {
					auStack_48 = (byte[])UVar14._0_8_;
					Il2CppMethodInitialized_0753e72c = true;
				}
				pUVar9 = typeof(Vector3).static_fields;
				uVar2 = (pUVar9.upVector).x;
				uVar5 = (pUVar9.upVector).y;
				fStack_38 = (pUVar9.upVector).z;
				auStack_48._4_4_ = (float)auStack_48._4_4_ + (float)uVar5 * 0.1;
				auStack_48._0_4_ = (float)auStack_48._0_4_ + (float)uVar2 * 0.1;
				fStack_40 = fStack_40 + 0.0;
				fStack_3c = fStack_3c + 0.0;
				UVar15.z = UVar14.z + fStack_38 * 0.1;
				fStack_28 = -(float)uVar2;
				fStack_24 = -(float)uVar5;
				fStack_38 = -fStack_38;
				fStack_4c = this.get_GroundDistance();
				UStack_50 = this.get_GroundMask();
				iVar13 = UStack_50.value;
				UVar18.y = fStack_24;
				UVar18.x = fStack_28;
				UVar15.x = (float)auStack_48._0_4_;
				UVar15.y = (float)auStack_48._4_4_;
				UVar18.z = fStack_38;
				bVar12 = this.CheckRaycastIgnoreTriggers(UVar15, UVar18, fStack_4c, iVar13);
				if (!bVar12) {
					pCVar11 = this.HumanCache;
					if ((pCVar11 == null) ||(pUVar8 = pCVar11.GroundRight, pUVar8 == null)) goto label_05be0b0e;
					UVar14 = pUVar8.position;
					auStack_48._0_4_ = UVar14.x;
					auStack_48._4_4_ = UVar14.y;
					fStack_40 = extraout_XMM0_Dc_01;
					fStack_3c = extraout_XMM0_Dd_01;
					if (Il2CppMethodInitialized_0753e72c == false) {
						auStack_48 = (byte[])UVar14._0_8_;
						Il2CppMethodInitialized_0753e72c = true;
					}
					pUVar9 = typeof(Vector3).static_fields;
					uVar3 = (pUVar9.upVector).x;
					uVar6 = (pUVar9.upVector).y;
					fStack_38 = (pUVar9.upVector).z;
					auStack_48._4_4_ = (float)auStack_48._4_4_ + (float)uVar6 * 0.1;
					auStack_48._0_4_ = (float)auStack_48._0_4_ + (float)uVar3 * 0.1;
					fStack_40 = fStack_40 + 0.0;
					fStack_3c = fStack_3c + 0.0;
					UVar16.z = UVar14.z + fStack_38 * 0.1;
					fStack_28 = -(float)uVar3;
					fStack_24 = -(float)uVar6;
					fStack_38 = -fStack_38;
					fStack_4c = this.get_GroundDistance();
					UStack_50 = this.get_GroundMask();
					iVar13 = UStack_50.value;
					UVar19.y = fStack_24;
					UVar19.x = fStack_28;
					UVar16.x = (float)auStack_48._0_4_;
					UVar16.y = (float)auStack_48._4_4_;
					UVar19.z = fStack_38;
					bVar12 = this.CheckRaycastIgnoreTriggers(UVar16, UVar19, fStack_4c, iVar13);
					if (!bVar12) goto label_05be0aee;
				}
	label_05be0864: ;
				if (this.Grounded == false) {
					this.Grounded = true;
					this.JustGrounded = true;
					return;
				}
				return;
			}
		}
	label_05be0b0e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60041B9")]
	[Address(RVA = "0x5AE0B20", Offset = "0x5ADFB20", VA = "0x5AE0B20", Slot = "108")]
	public override bool CheckRaycastIgnoreTriggers(Vector3 origin, Vector3 direction, float distance, int layerMask)
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$CheckRaycastIgnoreTriggers): 1 lines keep C-only constructs
		bool bVar1;
		Collider __this_00;
		GameObject obj;
		MapObject obj_00;
		System_Nullable_RaycastHit__Fields SStack_a8;
		RaycastHit UStack_78;
		RaycastHit UStack_40;

		SStack_a8.value.m_Distance = 0.0;
		SStack_a8.value.m_UV.x = 0.0;
		SStack_a8.value.m_UV.y = 0.0;
		SStack_a8.value.m_Collider.m_Data = (EntityId)0x0;
		SStack_a8.value.m_Normal.x = 0.0;
		SStack_a8.value.m_Normal.y = 0.0;
		SStack_a8.value.m_Normal.z = 0.0;
		SStack_a8.value.m_FaceID = 0;
		SStack_a8.hasValue = false;
		SStack_a8._1_3_ = 0;
		SStack_a8.value.m_Point.x = 0.0;
		SStack_a8.value.m_Point.y = 0.0;
		SStack_a8.value.m_Point.z = 0.0;
		SStack_a8.RaycastIgnoreTriggers(this, origin, direction, distance, layerMask);
		if (SStack_a8.hasValue == false) {
			bVar1 = false;
		}
		else {
			UStack_40 = SStack_a8.Value;
			UStack_78.m_UV.y = UStack_40.m_UV.y;
			UStack_78.m_Collider.m_Data = UStack_40.m_Collider.m_Data;
			UStack_78.m_Normal.y = UStack_40.m_Normal.y;
			UStack_78.m_Normal.z = UStack_40.m_Normal.z;
			UStack_78.m_Point.x = UStack_40.m_Point.x;
			UStack_78.m_Point.y = UStack_40.m_Point.y;
			UStack_78.m_Point.z = UStack_40.m_Point.z;
			UStack_78.m_Normal.x = UStack_40.m_Normal.x;
			__this_00 = UStack_78.collider;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			obj = __this_00.gameObject;
			obj_00 = MapLoader.GetMapObject(obj);
			if (obj_00 != null) {
				bVar1 = MapLoader.HasTag(obj_00, "HumanIgnoreGround");
				if (bVar1) {
					return false;
				}
			}
			bVar1 = true;
		}
		return bVar1;
	}

	[Token(Token = "0x60041BA")]
	[Address(RVA = "0x5AE0CB0", Offset = "0x5ADFCB0", VA = "0x5AE0CB0")]
	public Vector3? PivotPosition()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$PivotPosition): 11 lines keep C-only constructs
		bool bVar1;
		System_Nullable_Vector3__Fields SVar2;
		HookUseable pCVar3;
		float fVar4;
		float fVar5;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float fVar6;
		Vector3 UVar7;
		System_Nullable_Vector3__Fields local_38;
		float local_1c;
		byte[] local_18 = new byte[16];

		bVar1 = this._pivotRight;
		if (this._pivotLeft == false) {
			if (bVar1 == false) {
				local_38.hasValue = false;
				local_38._1_3_ = 0;
				local_38.value.x = 0.0;
				local_38.value.y = 0.0;
				local_38.value.z = 0.0;
				goto label_05be0d72;
			}
			pCVar3 = this.HookRight;
	label_05be0d4d: ;
			if (pCVar3 == null) {
	label_05be0d8b: ;
				throw new NullReferenceException();
			}
			UVar7 = pCVar3.GetHookPosition();
			fVar6 = UVar7.z;
			fVar4 = UVar7.x;
			fVar5 = UVar7.y;
		}
		else {
			if (bVar1 == false) {
				pCVar3 = this.HookLeft;
				goto label_05be0d4d;
			}
			pCVar3 = this.HookRight;
			if (pCVar3 == null) goto label_05be0d8b;
			UVar7 = pCVar3.GetHookPosition();
			local_1c = UVar7.z;
			local_18._8_4_ = extraout_XMM0_Dc;
			local_18._0_8_ = UVar7._0_8_;
			local_18._12_4_ = extraout_XMM0_Dd;
			pCVar3 = this.HookLeft;
			if (pCVar3 == null) goto label_05be0d8b;
			UVar7 = pCVar3.GetHookPosition();
			fVar4 = (UVar7.x + (float)local_18._0_4_) * 0.5;
			fVar5 = (UVar7.y + (float)local_18._4_4_) * 0.5;
			fVar6 = (UVar7.z + local_1c) * 0.5;
		}
		local_38.hasValue = false;
		local_38._1_3_ = 0;
		local_38.value.x = 0.0;
		local_38.value.y = 0.0;
		local_38.value.z = 0.0;
		UVar7.y = fVar5;
		UVar7.x = fVar4;
		UVar7.z = fVar6;
		local_38 = new Nullable<Vector3>(UVar7);
	label_05be0d72: ;
		SVar2.value.y = local_38.value.y;
		SVar2.value.z = local_38.value.z;
		SVar2.hasValue = local_38.hasValue;
		SVar2._1_3_ = local_38._1_3_;
		SVar2.value.x = local_38.value.x;
		return (System_Nullable_Vector3__o)SVar2;
	}

	[Token(Token = "0x60041BB")]
	[Address(RVA = "0x5AE0D90", Offset = "0x5ADFD90", VA = "0x5AE0D90", Slot = "119")]
	protected override List<Renderer> GetFPSDisabledRenderers()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$GetFPSDisabledRenderers): clean
		HumanCustomSkinLoader pCVar1;
		HumanSetup pCVar2;
		Object pUVar3;
		GameObject pUVar4;
		bool bVar5;
		List<Renderer> renderers;
		Object[] pSVar6;

		renderers = new List<Renderer>();
		if (this.FinishSetup == false) {
			return renderers;
		}
		pCVar1 = this._customSkinLoader;
		if (pCVar1 != null) {
			if (pCVar1.Finished == false) {
				return renderers;
			}
			pCVar2 = this.Setup;
			if (pCVar2 != null) {
				this.AddRendererIfExists(renderers, pCVar2._part_head, false);
				pCVar2 = this.Setup;
				if (pCVar2 != null) {
					pUVar3 = (Object)pCVar2._part_hat;
					bVar5 = (pUVar3 != null);
					if (bVar5) {
						pCVar2 = this.Setup;
						if (((pCVar2 == null) ||(pUVar4 = pCVar2._part_hat, pUVar4 == null)) ||(pSVar6 = pUVar4.GetComponentsInChildren<Renderer>(true), renderers == null)) goto label_05be12fd;
						renderers.AddRange((IEnumerable<T>)pSVar6);
					}
					pCVar2 = this.Setup;
					if (pCVar2 != null) {
						this.AddRendererIfExists(renderers, pCVar2._part_back, false);
						pCVar2 = this.Setup;
						if (pCVar2 != null) {
							pUVar3 = (Object)pCVar2._part_head_decor;
							bVar5 = (pUVar3 != null);
							if (bVar5) {
								pCVar2 = this.Setup;
								if (((pCVar2 == null) ||(pUVar4 = pCVar2._part_head_decor, pUVar4 == null)) ||(pSVar6 = pUVar4.GetComponentsInChildren<Renderer>(true), renderers == null)) goto label_05be12fd;
								renderers.AddRange((IEnumerable<T>)pSVar6);
							}
							pCVar2 = this.Setup;
							if (pCVar2 != null) {
								this.AddRendererIfExists(renderers, pCVar2._part_hair, true);
								pCVar2 = this.Setup;
								if (pCVar2 != null) {
									this.AddRendererIfExists(renderers, pCVar2._part_eye, false);
									pCVar2 = this.Setup;
									if (pCVar2 != null) {
										this.AddRendererIfExists(renderers, pCVar2._part_glass, false);
										pCVar2 = this.Setup;
										if (pCVar2 != null) {
											this.AddRendererIfExists(renderers, pCVar2._part_face, false);
											pCVar2 = this.Setup;
											if (pCVar2 != null) {
												this.AddRendererIfExists(renderers, pCVar2._part_3dmg, false);
												pCVar2 = this.Setup;
												if (pCVar2 != null) {
													this.AddRendererIfExists(renderers, pCVar2._part_belt, false);
													pCVar2 = this.Setup;
													if (pCVar2 != null) {
														this.AddRendererIfExists(renderers, pCVar2._part_gas_l, false);
														pCVar2 = this.Setup;
														if (pCVar2 != null) {
															this.AddRendererIfExists(renderers, pCVar2._part_gas_r, false);
															pCVar2 = this.Setup;
															if (pCVar2 != null) {
																this.AddRendererIfExists(renderers, pCVar2._part_chest_1, false);
																pCVar2 = this.Setup;
																if (pCVar2 != null) {
																	this.AddRendererIfExists(renderers, pCVar2._part_chest_2, false);
																	pCVar2 = this.Setup;
																	if (pCVar2 != null) {
																		this.AddRendererIfExists(renderers, pCVar2._part_upper_body, false);
																		pCVar2 = this.Setup;
																		if (pCVar2 != null) {
																			this.AddRendererIfExists(renderers, pCVar2._part_chest, false);
																			pCVar2 = this.Setup;
																			if (pCVar2 != null) {
																				this.AddRendererIfExists(renderers, pCVar2._part_brand_1, false);
																				pCVar2 = this.Setup;
																				if (pCVar2 != null) {
																					this.AddRendererIfExists(renderers, pCVar2._part_brand_2, false);
																					pCVar2 = this.Setup;
																					if (pCVar2 != null) {
																						this.AddRendererIfExists(renderers, pCVar2._part_brand_3, false);
																						pCVar2 = this.Setup;
																						if (pCVar2 != null) {
																							this.AddRendererIfExists(renderers, pCVar2._part_brand_4, false) ;
																							pCVar2 = this.Setup;
																							if (pCVar2 != null) {
																								this.AddRendererIfExists(renderers, pCVar2._part_arm_l, false) ;
																								pCVar2 = this.Setup;
																								if (pCVar2 != null) {
																									this.AddRendererIfExists(renderers, pCVar2._part_arm_r, false);
																									pCVar2 = this.Setup;
																									if (pCVar2 != null) {
																										this.AddRendererIfExists(renderers, pCVar2._part_leg, false);
																										pCVar2 = this.Setup;
																										if (pCVar2 != null) {
																											this.AddRendererIfExists(renderers, pCVar2._part_hair_1, false);
																											pCVar2 = this.Setup;
																											if (pCVar2 != null) {
																												this.AddRendererIfExists(renderers, pCVar2._part_cape, false);
																												pCVar2 = this.Setup;
																												if (pCVar2 != null) {
																													this.AddRendererIfExists(renderers, pCVar2._part_chest_3, false);
																													return renderers;
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
							}
						}
					}
				}
			}
		}
	label_05be12fd: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60041BE")]
	[Address(RVA = "0x5AE1320", Offset = "0x5AE0320", VA = "0x5AE1320")]
	public Human()
	{
		// Lifted from source/cpp/Characters/Human.c (Characters.Human$$.ctor): 10 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		UnityEngine_Vector3_StaticFields pUVar3;
		System_Nullable_Quaternion__o pSVar6;
		float fVar7;
		float fVar8;
		LayerMask UVar9;
		Dictionary<Renderer, Material> __this_00;
		Int32[] layers;
		Dictionary<BaseTitan, float> __this_01;
		HashSet<BasicTitan> __this_02;
		bool bVar10;
		System_Nullable_Quaternion__Fields local_68;
		System_Nullable_Quaternion__Fields local_48;

		if (Il2CppMethodInitialized_075475c1 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_BasicTitan_ctor) ;
			Il2CppMethodInitialized_075475c1 = true;
		}
		__this_00 = new Dictionary<Renderer, Material>();
		this.FPSMaterials = __this_00;
		this.CanDodge = true;
		this.IsInvincible = true;
		this._lastCarryRPCSender = -1;
		pUVar3 = typeof(Vector3).static_fields;
		fVar7 = (pUVar3.zeroVector).y;
		fVar1 = (pUVar3.zeroVector).z;
		this._wallSlideGround.x = (pUVar3.zeroVector).x;
		this._wallSlideGround.y = fVar7;
		this._wallSlideGround.z = fVar1;
		this._useFixedUpdateClipping = true;
		layers = (Int32[])new int[5];
		if (layers == null) {
			throw new NullReferenceException();
		}
		uVar2 = (uint)layers.Length;
		if (uVar2 != 0) {
			layers[0] = PhysicsLayer.TitanPushbox;
			if ((((uVar2 != 1) && (layers[1] = PhysicsLayer.MapObjectEntities, 2 < uVar2)) &&(layers[2] = PhysicsLayer.MapObjectCharacters, uVar2 != 3)) &&(layers[3] = PhysicsLayer.MapObjectHumans, 4 < uVar2)) {
				layers[4] = PhysicsLayer.MapObjectAll;
				UVar9 = PhysicsLayer.GetMask(layers);
				this.HumanGroundMaskLayers.m_Mask = (int32_t)UVar9.m_Mask;
				fVar1 = (Quaternion.identityQuaternion).y;
				fVar7 = (Quaternion.identityQuaternion).z;
				fVar8 = (Quaternion.identityQuaternion).w;
				this._oldHeadRotation.x = (Quaternion.identityQuaternion).x;
				this._oldHeadRotation.y = fVar1;
				this._oldHeadRotation.z = fVar7;
				this._oldHeadRotation.w = fVar8;
				if (Il2CppMethodInitialized_0753ecc8 == false) {
					Il2CppMethodInitialized_0753ecc8 = true;
					bVar10 = Il2CppMethodInitialized_0753e72b == false;
					this.LastGoodHeadAngle =(Vector2.zeroVector);
					if (bVar10) {
						Il2CppMethodInitialized_0753e72b = true;
					}
				}
				else {
					this.LastGoodHeadAngle =(Vector2.zeroVector);
				}
				local_48.hasValue = false;
				local_48._1_3_ = 0;
				local_48.value.x = 0.0;
				local_48.value.y = 0.0;
				local_48.value.z = 0.0;
				local_48.value.w = 0.0;
				local_48 = new Nullable<Quaternion>((UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields);
				this.LateUpdateHeadRotation.value.w = local_48.value.w;
				this.LateUpdateHeadRotation.hasValue = local_48.hasValue;
				*(undefined3)&this.LateUpdateHeadRotation.field_0x1 = local_48._1_3_;
				this.LateUpdateHeadRotation.value.x = local_48.value.x;
				pSVar6 = &this.LateUpdateHeadRotation;
				pSVar6.value.y = local_48.value.y;
				pSVar6.value.z = local_48.value.z;
				local_68.hasValue = false;
				local_68._1_3_ = 0;
				local_68.value.x = 0.0;
				local_68.value.y = 0.0;
				local_68.value.z = 0.0;
				local_68.value.w = 0.0;
				local_68 = new Nullable<Quaternion>((UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields);
				this.LateUpdateHeadRotationRecv.value.w = local_68.value.w;
				this.LateUpdateHeadRotationRecv.hasValue = local_68.hasValue;
				*(undefined3)&this.LateUpdateHeadRotationRecv.field_0x1 = local_68._1_3_;
				this.LateUpdateHeadRotationRecv.value.x = local_68.value.x;
				pSVar6 = &this.LateUpdateHeadRotationRecv;
				pSVar6.value.y = local_68.value.y;
				pSVar6.value.z = local_68.value.z;
				this._gasEffectEnabled = true;
				__this_01 = new Dictionary<BaseTitan, float>();
				this._lastNapeHitTimes = __this_01;
				__this_02 = new HashSet<BasicTitan>();
				this._haircutTargets = __this_02;
				pUVar3 = typeof(Vector3).static_fields;
				fVar7 = (pUVar3.zeroVector).y;
				fVar1 = (pUVar3.zeroVector).z;
				this._lastDirection.x = (pUVar3.zeroVector).x;
				this._lastDirection.y = fVar7;
				this._lastDirection.z = fVar1;
				this._collisionInterval = 0.1;
				base();
				return;
			}
		}
		throw new IndexOutOfRangeException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/Human.c.

	// Characters.Human$$<LoadSkin>g__GetSkinValue|280_0: clean
	private static String LoadSkin_g__GetSkinValue_280_0(String globalValue, String presetValue)
	{
		bool bVar1;

		bVar1 = param_3.usePresetSkins;
		if ((bVar1 == false) || (param_3.presetSet == null)) {
			if ((param_3.useGlobalOverrides == false) ||(param_3.globalSet == null)) {
				if ((bVar1 == false) || (param_3.presetSet == null)) goto label_05bdb83e;
				goto label_05bdb82d;
			}
			bVar1 = String.IsNullOrEmpty(globalValue);
		}
		else {
			if ((param_3.useGlobalOverrides != false) &&((param_3.globalSet != null &&(bVar1 = String.IsNullOrEmpty(globalValue), !bVar1)))) {
				return globalValue;
			}
	label_05bdb82d: ;
			bVar1 = String.IsNullOrEmpty(presetValue);
			globalValue = presetValue;
		}
		if (!bVar1) {
			return globalValue;
		}
	label_05bdb83e: ;
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	// Characters.Human$$<LoadSkin>g__GetFloatValue|280_1: clean
	private static float LoadSkin_g__GetFloatValue_280_1(float globalValue, float presetValue)
	{
		bool bVar1;

		bVar1 = param_3.usePresetSkins;
		if ((bVar1 == false) || (param_3.presetSet == null)) {
			if ((param_3.useGlobalOverrides == false) ||(param_3.globalSet == null)) {
				if ((bVar1 == false) ||(globalValue = presetValue, param_3.presetSet == null)) {
					return 1.0;
				}
			}
			else if (param_3.presetSet != null) {
				if (ABS(globalValue - presetValue) < 0.001) {
					return 1.0;
				}
			}
		}
		else if ((param_3.useGlobalOverrides == false) ||(param_3.globalSet == null)) {
			return presetValue;
		}
		return globalValue;
	}

	// Characters.Human$$.cctor: clean
	static Human()
	{
		uint uVar1;
		Utility_PhysicsLayer_StaticFields pUVar2;
		LayerMask UVar4;
		Int32[] pSVar5;
		RaycastHit[] pUVar6;

		pSVar5 = (Int32[])new int[4];
		if (pSVar5 == null) {
	label_05be1900: ;
			throw new NullReferenceException();
		}
		uVar1 = (uint)pSVar5.Length;
		if (uVar1 != 0) {
			pUVar2 = typeof(PhysicsLayer).static_fields;
			pSVar5[0] = pUVar2.TitanPushbox;
			if (((uVar1 != 1) && (pSVar5[1] = pUVar2.MapObjectProjectiles, 2 < uVar1)) &&(pSVar5[2] = pUVar2.MapObjectEntities, uVar1 != 3)) {
				pSVar5[3] = pUVar2.MapObjectAll;
				UVar4 = PhysicsLayer.GetMask(pSVar5);
				(Human.AimMask).m_Mask = (int32_t)UVar4.m_Mask;
				pSVar5 = (Int32[])new int[3];
				if (pSVar5 == null) goto label_05be1900;
				uVar1 = (uint)pSVar5.Length;
				if (uVar1 != 0) {
					pUVar2 = typeof(PhysicsLayer).static_fields;
					pSVar5[0] = pUVar2.MapObjectAll;
					if ((uVar1 != 1) && (pSVar5[1] = pUVar2.MapObjectCharacters, 2 < uVar1)) {
						pSVar5[2] = pUVar2.MapObjectEntities;
						UVar4 = PhysicsLayer.GetMask(pSVar5);
						(Human.ClipMask).m_Mask = (int32_t)UVar4.m_Mask;
						pUVar6 = (RaycastHit[])new RaycastHit[0x40];
						Human._raycastHits = pUVar6;
						pSVar5 = (Int32[])new int[1];
						if (pSVar5 == null) goto label_05be1900;
						if ((int)pSVar5.Length != 0) {
							pSVar5[0] = PhysicsLayer.ProjectileDetection;
							UVar4 = PhysicsLayer.GetMask(pSVar5);
							(Human.TitanDetectionMask).m_Mask =(int32_t)UVar4.m_Mask;
							return;
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}
}
