// ==================== AoTTG2 cross-reference ====================
// Type: Characters.BaseHitbox
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Characters/BaseHitbox.c
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseHitbox.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using CustomLogic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000691")]
internal class BaseHitbox : MonoBehaviour
{
	[Token(Token = "0x2000692")]
	[CompilerGenerated]
	private sealed class _003CSweepMap_003Ed__20 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001DAA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001DAB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001DAC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public BaseHitbox _003C_003E4__this;

		[Token(Token = "0x17000B14")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003FF9")]
			[Address(RVA = "0x5ABB9E0", Offset = "0x5ABA9E0", VA = "0x5ABB9E0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox.<SweepMap>d__20$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000B15")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6003FFB")]
			[Address(RVA = "0x5ABBA30", Offset = "0x5ABAA30", VA = "0x5ABBA30", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox.<SweepMap>d__20$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6003FF6")]
		[Address(RVA = "0x5ABB140", Offset = "0x5ABA140", VA = "0x5ABB140")]
		[DebuggerHidden]
		public _003CSweepMap_003Ed__20(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox.<SweepMap>d__20$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6003FF7")]
		[Address(RVA = "0x5ABB920", Offset = "0x5ABA920", VA = "0x5ABB920", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox.<SweepMap>d__20$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6003FF8")]
		[Address(RVA = "0x5ABB930", Offset = "0x5ABA930", VA = "0x5ABB930", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox.<SweepMap>d__20$$MoveNext): clean
			int iVar1;
			BaseHitbox hitbox;
			object pIVar2;

			iVar1 = this.__1__state;
			hitbox = this.__4__this;
			if (iVar1 == 0) {
				this.__1__state = -1;
				pIVar2 = (object)MapDestruction.SweepHitbox(hitbox);
				this.__2__current = pIVar2;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				this.__1__state = -1;
				if (hitbox == null) {
					throw new NullReferenceException();
				}
				hitbox._mapSweep = null;
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x6003FFA")]
		[Address(RVA = "0x5ABB9F0", Offset = "0x5ABA9F0", VA = "0x5ABB9F0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox.<SweepMap>d__20$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Characters_BaseHitbox_SweepMap_d__20_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000693")]
	[CompilerGenerated]
	private sealed class _003CWaitAndActivate_003Ed__18 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001DAD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001DAE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001DAF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x4001DB0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BaseHitbox _003C_003E4__this;

		[Token(Token = "0x17000B16")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6003FFF")]
			[Address(RVA = "0x5ABBB00", Offset = "0x5ABAB00", VA = "0x5ABBB00", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox.<WaitAndActivate>d__18$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000B17")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004001")]
			[Address(RVA = "0x5ABBB50", Offset = "0x5ABAB50", VA = "0x5ABBB50", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox.<WaitAndActivate>d__18$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6003FFC")]
		[Address(RVA = "0x5ABB0B0", Offset = "0x5ABA0B0", VA = "0x5ABB0B0")]
		[DebuggerHidden]
		public _003CWaitAndActivate_003Ed__18(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox.<WaitAndActivate>d__18$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6003FFD")]
		[Address(RVA = "0x5ABBA40", Offset = "0x5ABAA40", VA = "0x5ABBA40", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox.<WaitAndActivate>d__18$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6003FFE")]
		[Address(RVA = "0x5ABBA50", Offset = "0x5ABAA50", VA = "0x5ABBA50", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox.<WaitAndActivate>d__18$$MoveNext): clean
			float seconds;
			int iVar1;
			BaseHitbox __this_00;
			WaitForSeconds __this_01;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				seconds = this.delay;
				__this_01 = new WaitForSeconds(seconds);
				this.__2__current = (object)__this_01;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				__this_00 = this.__4__this;
				this.__1__state = -1;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00.Enable();
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x6004000")]
		[Address(RVA = "0x5ABBB10", Offset = "0x5ABAB10", VA = "0x5ABBB10", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox.<WaitAndActivate>d__18$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_Characters_BaseHitbox_WaitAndActivate_d__18_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000694")]
	[CompilerGenerated]
	private sealed class _003CWaitAndDeactivate_003Ed__21 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4001DB1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4001DB2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4001DB3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public float delay;

		[Token(Token = "0x4001DB4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public BaseHitbox _003C_003E4__this;

		[Token(Token = "0x17000B18")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6004005")]
			[Address(RVA = "0x5ABBC90", Offset = "0x5ABAC90", VA = "0x5ABBC90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox.<WaitAndDeactivate>d__21$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000B19")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6004007")]
			[Address(RVA = "0x5ABBCE0", Offset = "0x5ABACE0", VA = "0x5ABBCE0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox.<WaitAndDeactivate>d__21$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6004002")]
		[Address(RVA = "0x5ABB160", Offset = "0x5ABA160", VA = "0x5ABB160")]
		[DebuggerHidden]
		public _003CWaitAndDeactivate_003Ed__21(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox.<WaitAndDeactivate>d__21$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6004003")]
		[Address(RVA = "0x5ABBB60", Offset = "0x5ABAB60", VA = "0x5ABBB60", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox.<WaitAndDeactivate>d__21$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6004004")]
		[Address(RVA = "0x5ABBB70", Offset = "0x5ABAB70", VA = "0x5ABBB70", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox.<WaitAndDeactivate>d__21$$MoveNext): clean
			float seconds;
			int iVar1;
			BaseHitbox pCVar2;
			Collider __this_00;
			Object x;
			GameObject __this_01;
			bool bVar3;
			WaitForSeconds __this_02;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				seconds = this.delay;
				__this_02 = new WaitForSeconds(seconds);
				this.__2__current = (object)__this_02;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				pCVar2 = this.__4__this;
				this.__1__state = -1;
				if ((pCVar2 == null) ||(__this_00 = pCVar2._collider, __this_00 == null)) {
		label_05bbbc8a: ;
					throw new NullReferenceException();
				}
				__this_00.enabled = false;
				x = (Object)pCVar2._debugObject;
				bVar3 = (x != null);
				if (bVar3) {
					__this_01 = pCVar2._debugObject;
					if (__this_01 == null) goto label_05bbbc8a;
					__this_01.SetActive(false);
				}
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x6004006")]
		[Address(RVA = "0x5ABBCA0", Offset = "0x5ABACA0", VA = "0x5ABBCA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox.<WaitAndDeactivate>d__21$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Characters_BaseHitbox_WaitAndDeactivate_d__21_System_Collections_IEnumerator_Reset);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4001DA1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public BaseCharacter Owner;

	[Token(Token = "0x4001DA2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public bool TwoFixedUpdates;

	[Token(Token = "0x4001DA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	protected HashSet<GameObject> _hitGameObjects;

	[Token(Token = "0x4001DA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	protected HashSet<Collider> _firstFrameColliders;

	[Token(Token = "0x4001DA5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	protected HashSet<BaseCharacter> _firstHitCharacters;

	[Token(Token = "0x4001DA6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	protected HashSet<CustomLogicCollisionHandler> _firstHitHandlers;

	[Token(Token = "0x4001DA7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	public Collider _collider;

	[Token(Token = "0x4001DA8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	public GameObject _debugObject;

	[Token(Token = "0x4001DA9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private Coroutine _mapSweep;

	[Token(Token = "0x17000B13")]
	protected virtual bool DestroysMap
	{
		[Token(Token = "0x6003FE2")]
		[Address(RVA = "0x5ABA610", Offset = "0x5AB9610", VA = "0x5ABA610", Slot = "4")]
		get
		{
			// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox$$get_DestroysMap): 1 lines keep C-only constructs
			byte bVar1;
			BaseCharacter pCVar2;
			BaseCharacter pCVar3;

			pCVar2 = this.Owner;
			if (pCVar2 != null) {
				pCVar3 = pCVar2.klass;
				bVar1 = (typeof(BaseTitan)._2).typeHierarchyDepth;
				if (bVar1 <= (pCVar3._2).typeHierarchyDepth) {
					return (pCVar3._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BaseTitan);
				}
			}
			return false;
		}
	}

	[Token(Token = "0x6003FE3")]
	[Address(RVA = "0x5ABA670", Offset = "0x5AB9670", VA = "0x5ABA670")]
	public static BaseHitbox Create(BaseCharacter owner, GameObject obj, [Optional] Collider collider)
	{
		// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox$$Create): 1 lines keep C-only constructs
		byte bVar1;
		bool bVar2;
		BaseHitbox __this;

		if (obj != null) {
			__this = obj.AddComponent<BaseHitbox>();
			if (__this != null) {
				__this.Owner = owner;
				bVar2 = ((Object)collider == null);
				if (bVar2) {
					collider = obj.GetComponent<Collider>();
				}
				__this._collider = collider;
				__this.Deactivate();
				if (collider != null) {
					bVar1 = (typeof(SphereCollider)._2).typeHierarchyDepth;
					if ((bVar1 <= (((SphereCollider)collider).klass._2).typeHierarchyDepth) &&((((SphereCollider)collider).klass._2).typeHierarchy [(long)&((MethodInfo)(ulong)bVar1)[-1].field_0x57] ==typeof(SphereCollider))) {
						__this.UpdateDebugCollider((SphereCollider)collider);
					}
				}
				return __this;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003FE4")]
	[Address(RVA = "0x5ABAA60", Offset = "0x5AB9A60", VA = "0x5ABAA60")]
	public void UpdateSphereCollider(float radius)
	{
		// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox$$UpdateSphereCollider): 1 lines keep C-only constructs
		byte bVar1;
		SphereCollider __this_00;

		__this_00 = (SphereCollider)this._collider;
		if (__this_00 != null) {
			bVar1 = (typeof(SphereCollider)._2).typeHierarchyDepth;
			if ((bVar1 <= (__this_00.klass._2).typeHierarchyDepth) &&((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(SphereCollider))) {
				__this_00.radius = radius;
				this.UpdateDebugCollider(__this_00);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6003FE5")]
	[Address(RVA = "0x5AA6310", Offset = "0x5AA5310", VA = "0x5AA6310")]
	public void ScaleSphereCollider(float scale)
	{
		// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox$$ScaleSphereCollider): 1 lines keep C-only constructs
		byte bVar1;
		SphereCollider __this_00;
		float fVar2;

		__this_00 = (SphereCollider)this._collider;
		if (__this_00 != null) {
			bVar1 = (typeof(SphereCollider)._2).typeHierarchyDepth;
			if ((bVar1 <= (__this_00.klass._2).typeHierarchyDepth) &&((__this_00.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(SphereCollider))) {
				fVar2 = __this_00.radius;
				__this_00.radius = fVar2 * scale;
				this.UpdateDebugCollider(__this_00);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6003FE6")]
	[Address(RVA = "0x5ABA7B0", Offset = "0x5AB97B0", VA = "0x5ABA7B0")]
	protected void UpdateDebugCollider(SphereCollider collider)
	{
		// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox$$UpdateDebugCollider): 4 lines keep C-only constructs
		GameObject* targetAddress;
		uint uVar1;
		uint uVar2;
		Object pUVar3;
		bool bVar5;
		GameObject __this_00;
		Transform pUVar6;
		GameObject __this_01;
		Transform value;
		Renderer __this_02;
		Material __this_03;
		float fVar7;
		float fVar8;
		Color value_00;
		Vector3 UVar9;

		if (DebugTesting.DebugColliders == false) {
			return;
		}
		pUVar3 = (Object)this._debugObject;
		targetAddress = &this._debugObject;
		bVar5 = (pUVar3 != null);
		if (bVar5) {
			pUVar3 = (Object)*targetAddress;
			Object.Destroy(pUVar3);
		}
		__this_00 = ResourceManager.InstantiateAsset<GameObject>("Game", "TestSphere", false, false);
		if (__this_00 != null) {
			pUVar6 = __this_00.transform;
			__this_01 = this.gameObject;
			if (__this_01 != null) {
				value = __this_01.transform;
				if (pUVar6 != null) {
					pUVar6.parent = value;
					pUVar6 = __this_00.transform;
					if (collider != null) {
						UVar9 = collider.center;
						if (pUVar6 != null) {
							pUVar6.localPosition = UVar9;
							pUVar6 = __this_00.transform;
							uVar1 = (Vector3.oneVector).x;
							uVar2 = (Vector3.oneVector).y;
							fVar8 = (Vector3.oneVector).z;
							fVar7 = collider.radius;
							if (pUVar6 != null) {
								fVar8 = fVar8 * fVar7;
								UVar9.z = fVar8 + fVar8;
								UVar9.y = (float)uVar2 * fVar7 + (float)uVar2 * fVar7;
								UVar9.x = (float)uVar1 * fVar7 + (float)uVar1 * fVar7;
								pUVar6.localScale = UVar9;
								__this_02 = __this_00.GetComponent<Renderer>();
								if (__this_02 != null) {
									__this_03 = __this_02.material;
									if (__this_03 != null) {
										value_00.b = 0.0;
										value_00.a = 1.0;
										value_00.r = 1.0;
										value_00.g = 0.0;
										__this_03.color = value_00;
										*targetAddress = __this_00;
										if (*targetAddress != null) {
											(*targetAddress).SetActive(false);
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

	[Token(Token = "0x6003FE7")]
	[Address(RVA = "0x5ABAAF0", Offset = "0x5AB9AF0", VA = "0x5ABAAF0")]
	public bool IsActive()
	{
		// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox$$IsActive): clean
		Collider __this_00;
		bool bVar1;

		__this_00 = this._collider;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return bVar1;
	}

	[Token(Token = "0x6003FE8")]
	[Address(RVA = "0x5ABAB10", Offset = "0x5AB9B10", VA = "0x5ABAB10", Slot = "5")]
	public virtual void Activate(float delay = 0f, float length = 0f)
	{
		// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox$$Activate): clean
		HashSet<object> pSVar1;
		BaseHitbox.d__21<WaitAndDeactivate> __this_00;
		BaseHitbox.d__18<WaitAndActivate> __this_01;

		pSVar1 = (HashSet<object>)this._hitGameObjects;
		if (pSVar1 != null) {
			pSVar1.Clear();
			pSVar1 = (HashSet<object>)this._firstHitCharacters;
			if (pSVar1 != null) {
				pSVar1.Clear();
				pSVar1 = (HashSet<object>)this._firstHitHandlers;
				if (pSVar1 != null) {
					pSVar1.Clear();
					pSVar1 = (HashSet<object>)this._firstFrameColliders;
					if (pSVar1 != null) {
						pSVar1.Clear();
						if ((delay != 0.0) || (NAN(delay))) {
							__this_01 = new BaseHitbox.d__18<WaitAndActivate>();
							__this_01.__1__state = 0;
							__this_01.__4__this = this;
							__this_01.delay = delay;
							this.StartCoroutine((IEnumerator)__this_01);
						}
						else {
							this.Enable();
						}
						if (0.0 < length) {
							__this_00 = new BaseHitbox.d__21<WaitAndDeactivate>();
							__this_00.__1__state = 0;
							__this_00.__4__this = this;
							__this_00.delay = delay + length;
							this.StartCoroutine((IEnumerator)__this_00);
							return;
						}
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003FE9")]
	[Address(RVA = "0x5ABAF80", Offset = "0x5AB9F80", VA = "0x5ABAF80", Slot = "6")]
	public virtual void Deactivate()
	{
		// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox$$Deactivate): clean
		Collider __this_00;
		Object x;
		GameObject __this_01;
		bool bVar1;

		this.StopAllCoroutines();
		this._mapSweep = null;
		__this_00 = this._collider;
		if (__this_00 != null) {
			__this_00.enabled = false;
			x = (Object)this._debugObject;
			bVar1 = (x != null);
			if (!bVar1) {
				return;
			}
			__this_01 = this._debugObject;
			if (__this_01 != null) {
				__this_01.SetActive(false);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003FEA")]
	[Address(RVA = "0x5ABAE80", Offset = "0x5AB9E80", VA = "0x5ABAE80")]
	[IteratorStateMachine(typeof(_003CWaitAndActivate_003Ed__18))]
	protected IEnumerator WaitAndActivate(float delay)
	{
		// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox$$WaitAndActivate): clean
		BaseHitbox.d__18<WaitAndActivate> __this_00;

		__this_00 = new BaseHitbox.d__18<WaitAndActivate>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.delay = delay;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6003FEB")]
	[Address(RVA = "0x5ABAD10", Offset = "0x5AB9D10", VA = "0x5ABAD10")]
	private void Enable()
	{
		// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox$$Enable): clean
		Collider __this_00;
		Object x;
		GameObject __this_01;
		BaseCharacter attacker;
		bool bVar1;
		BaseHitbox.d__20<SweepMap> __this_02;
		Coroutine pUVar2;

		__this_00 = this._collider;
		if (__this_00 == null) {
	label_05bbae78: ;
			throw new NullReferenceException();
		}
		__this_00.enabled = true;
		x = (Object)this._debugObject;
		bVar1 = (x != null);
		if (bVar1) {
			__this_01 = this._debugObject;
			if (__this_01 == null) goto label_05bbae78;
			__this_01.SetActive(true);
		}
		if (this._mapSweep == null) {
			bVar1 = this.get_DestroysMap();
			if (bVar1) {
				attacker = this.Owner;
				bVar1 = MapDestruction.CanDestroyWith(attacker);
				if (bVar1) {
					__this_02 = new BaseHitbox.d__20<SweepMap>();
					__this_02.__1__state = 0;
					__this_02.__4__this = this;
					pUVar2 = this.StartCoroutine((IEnumerator)__this_02);
					this._mapSweep = pUVar2;
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6003FEC")]
	[Address(RVA = "0x5ABB0D0", Offset = "0x5ABA0D0", VA = "0x5ABB0D0")]
	[IteratorStateMachine(typeof(_003CSweepMap_003Ed__20))]
	private IEnumerator SweepMap()
	{
		// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox$$SweepMap): clean
		BaseHitbox.d__20<SweepMap> __this_00;

		__this_00 = new BaseHitbox.d__20<SweepMap>();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6003FED")]
	[Address(RVA = "0x5ABAF00", Offset = "0x5AB9F00", VA = "0x5ABAF00")]
	[IteratorStateMachine(typeof(_003CWaitAndDeactivate_003Ed__21))]
	protected IEnumerator WaitAndDeactivate(float delay)
	{
		// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox$$WaitAndDeactivate): 1 lines keep C-only constructs
		BaseHitbox.d__21<WaitAndDeactivate> __this_00;

		__this_00 = il2cpp_codegen_object_new(typeof(BaseHitbox.d__21<WaitAndDeactivate>)) ;
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.delay = delay;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6003FEE")]
	[Address(RVA = "0x5ABB180", Offset = "0x5ABA180", VA = "0x5ABB180", Slot = "7")]
	protected virtual void OnTriggerEnter(Collider other)
	{
		// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox$$OnTriggerEnter): clean
		bool bVar1;

		bVar1 = this.RequiresRepeatedContact(other);
		if (bVar1) {
			return;
		}
		this.OnTrigger(other);
		return;
	}

	[Token(Token = "0x6003FEF")]
	[Address(RVA = "0x5ABB300", Offset = "0x5ABA300", VA = "0x5ABB300", Slot = "8")]
	protected virtual void OnTriggerStay(Collider other)
	{
		// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox$$OnTriggerStay): clean
		if (this.TwoFixedUpdates == false) {
			return;
		}
		this.OnTrigger(other);
		return;
	}

	[Token(Token = "0x6003FF0")]
	[Address(RVA = "0x5ABB320", Offset = "0x5ABA320", VA = "0x5ABB320", Slot = "9")]
	protected virtual void OnTrigger(Collider other)
	{
		// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox$$OnTrigger): 5 lines keep C-only constructs
		HashSet<object> pSVar1;
		BaseCharacter a;
		bool bVar2;
		Transform pUVar3;
		GameObject pUVar4;
		BaseCharacter b;
		BaseCharacter x;
		MethodInfo pMVar5;
		_func_197 vtableDispatch;

		if (this.TwoFixedUpdates != false) {
			pSVar1 = (HashSet<object>)this._firstFrameColliders;
			if (pSVar1 == null) goto label_05bbb60d;
			bVar2 = pSVar1.Contains((object)other);
			if ((!bVar2) && (bVar2 = this.RequiresRepeatedContact(other))) {
				pSVar1 = (HashSet<object>)this._firstFrameColliders;
				if (pSVar1 != null) {
					pSVar1.Add((object)other);
					return;
				}
				goto label_05bbb60d;
			}
		}
		if ((((other != null) &&(pUVar3 = other.transform, pUVar3 != null)) &&(pUVar3 = pUVar3.root, pUVar3 != null)) &&(pUVar4 = pUVar3.gameObject, pUVar4 != null)) {
			b = pUVar4.GetComponent<BaseCharacter>();
			pUVar4 = other.gameObject;
			if (pUVar4 == null) goto label_05bbb60d;
			x = (BaseCharacter)pUVar4.GetComponent<CustomLogicCollisionHandler>();
			bVar2 = ((Object)b != null);
			if (bVar2) {
				a = this.Owner;
				bVar2 = TeamInfo.SameTeam(a, b);
				if (!bVar2) {
					pSVar1 = (HashSet<object>)this._hitGameObjects;
					pUVar4 = other.gameObject;
					if (pSVar1 == null) goto label_05bbb60d;
					bVar2 = pSVar1.Contains((object)pUVar4);
					if (!bVar2) {
						pSVar1 = (HashSet<object>)this._hitGameObjects;
						pUVar4 = other.gameObject;
						if (pSVar1 == null) goto label_05bbb60d;
						pSVar1.Add((object)pUVar4);
						vtableDispatch = (this.klass.vtable)._10_OnHit.methodPtr;
						pMVar5 = (this.klass.vtable)._10_OnHit.method;
						goto label_05bbb5f9;
					}
				}
			}
			bVar2 = ((Object)x != null);
			if (!bVar2) {
				return;
			}
			pSVar1 = (HashSet<object>)this._hitGameObjects;
			pUVar4 = other.gameObject;
			if (pSVar1 != null) {
				bVar2 = pSVar1.Contains((object)pUVar4);
				if (bVar2) {
					return;
				}
				pSVar1 = (HashSet<object>)this._hitGameObjects;
				pUVar4 = other.gameObject;
				if (pSVar1 != null) {
					pSVar1.Add((object)pUVar4);
					vtableDispatch = (_func_197)(this.klass.vtable)._11_OnHit.methodPtr;
					pMVar5 = (this.klass.vtable)._11_OnHit.method;
					b = x;
	label_05bbb5f9: ;
					(*vtableDispatch)(this,b,other,pMVar5);
					return;
				}
			}
		}
	label_05bbb60d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003FF1")]
	[Address(RVA = "0x5ABB1C0", Offset = "0x5ABA1C0", VA = "0x5ABB1C0")]
	private bool RequiresRepeatedContact(Collider other)
	{
		// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox$$RequiresRepeatedContact): clean
		BasicTitanComponentCache pCVar1;
		Object pUVar2;
		bool bVar3;
		Transform pUVar4;
		BasicTitan x;

		if (this.TwoFixedUpdates == false) {
			return false;
		}
		if (((other != null) &&(pUVar4 = other.transform, pUVar4 != null)) &&(pUVar4 = pUVar4.root, pUVar4 != null)) {
			x = pUVar4.GetComponent<BasicTitan>();
			bVar3 = ((Object)x == null);
			if (bVar3) {
				return true;
			}
			if ((x != null) &&(pCVar1 = x.BasicCache, pCVar1 != null)) {
				pUVar2 = (Object)pCVar1.HandLHurtbox;
				bVar3 = ((Object)other != pUVar2);
				if (!bVar3) {
					return false;
				}
				pCVar1 = x.BasicCache;
				if (pCVar1 != null) {
					pUVar2 = (Object)pCVar1.HandRHurtbox;
					bVar3 = ((Object)other != pUVar2);
					return bVar3;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003FF2")]
	[Address(RVA = "0x5ABB620", Offset = "0x5ABA620", VA = "0x5ABB620", Slot = "10")]
	protected virtual void OnHit(BaseCharacter victim, Collider collider)
	{
		// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox$$OnHit): clean
		HashSet<object> pSVar1;
		BaseCharacter pCVar2;
		bool bVar3;

		pSVar1 = (HashSet<object>)this._firstHitCharacters;
		if (pSVar1 != null) {
			pCVar2 = this.Owner;
			bVar3 = pSVar1.Contains((object)victim);
			if (pCVar2 != null) {
				pCVar2.OnHit(this, (object)victim, collider, "", !bVar3);
				pSVar1 = (HashSet<object>)this._firstHitCharacters;
				if (pSVar1 != null) {
					pSVar1.Add((object)victim);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003FF3")]
	[Address(RVA = "0x5ABB6F0", Offset = "0x5ABA6F0", VA = "0x5ABB6F0", Slot = "11")]
	protected virtual void OnHit(CustomLogicCollisionHandler handler, Collider collider)
	{
		// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox$$OnHit): clean
		HashSet<object> pSVar1;
		BaseCharacter pCVar2;
		bool bVar3;

		pSVar1 = (HashSet<object>)this._firstHitHandlers;
		if (pSVar1 != null) {
			pCVar2 = this.Owner;
			bVar3 = pSVar1.Contains((object)handler);
			if (pCVar2 != null) {
				pCVar2.OnHit(this, (object)handler, collider, "", bVar3);
				pSVar1 = (HashSet<object>)this._firstHitHandlers;
				if (pSVar1 != null) {
					pSVar1.Add((object)handler);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003FF4")]
	[Address(RVA = "0x5ABB030", Offset = "0x5ABA030", VA = "0x5ABB030")]
	protected void ToggleDebug(bool toggle)
	{
		// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox$$ToggleDebug): clean
		Object x;
		GameObject __this_00;
		bool bVar1;

		x = (Object)this._debugObject;
		bVar1 = (x != null);
		if (bVar1) {
			__this_00 = this._debugObject;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.SetActive(toggle);
			return;
		}
		return;
	}

	[Token(Token = "0x6003FF5")]
	[Address(RVA = "0x5ABB7C0", Offset = "0x5ABA7C0", VA = "0x5ABB7C0")]
	public BaseHitbox()
	{
		// Lifted from source/cpp/Characters/BaseHitbox.c (Characters.BaseHitbox$$.ctor): 3 lines keep C-only constructs
		HashSet<GameObject> __this_00;
		HashSet<Collider> __this_01;
		HashSet<BaseCharacter> __this_02;
		HashSet<CustomLogicCollisionHandler> __this_03;

		if (Il2CppMethodInitialized_0754752b == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_GameObject_ctor) ;
			Il2CppMethodInitialized_0754752b = true;
		}
		__this_00 = il2cpp_codegen_object_new(typeof(HashSet<GameObject>)) ;
		__this_00 = new HashSet<object>();
		this._hitGameObjects = __this_00;
		__this_01 = new HashSet<Collider>();
		this._firstFrameColliders = __this_01;
		__this_02 = new HashSet<BaseCharacter>();
		this._firstHitCharacters = __this_02;
		__this_03 = il2cpp_codegen_object_new((Il2CppClass)typeof(HashSet<CustomLogicCollisionHandler>));
		__this_03 = new HashSet<object>();
		this._firstHitHandlers = __this_03;
		base();
		return;
	}
}
