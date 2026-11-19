// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Routing;

[Token(Token = "0x2000049")]
internal sealed class GisketchScrollSnapshot
{
	[Token(Token = "0x200004A")]
	private struct Entry
	{
		[Token(Token = "0x4000171")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ScrollRect _scroll;

		[Token(Token = "0x4000172")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private string _path;

		[Token(Token = "0x4000173")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private string _name;

		[Token(Token = "0x4000174")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private float _horizontalOffset;

		[Token(Token = "0x4000175")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
		private float _verticalOffset;

		[Token(Token = "0x4000176")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private float _horizontalNormalized;

		[Token(Token = "0x4000177")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		private float _verticalNormalized;

		[Token(Token = "0x600029A")]
		[Address(RVA = "0x5252A80", Offset = "0x5251A80", VA = "0x5252A80")]
		public static Entry Capture(ScrollRect scroll, Transform root)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.Entry$$Capture): 6 lines keep C-only constructs
			uint uVar1;
			bool bVar2;
			Transform target;
			float fVar4;
			float fVar5;
			float fVar6;
			ScrollRect local_58;
			String pSStack_50;
			String pSStack_48;
			ulong uStack_40;
			ulong uStack_38;

			if (Il2CppMethodInitialized_07542936 == false) {
				Il2CppMethodInitialized_07542936 = true;
				if ((typeof(GisketchScrollSnapshot)._2).cctor_finished_or_no_cctor != 0) goto label_05352abc;
		label_05352c32: ;
				if (Il2CppMethodInitialized_0754292d != false) goto label_05352ac9;
		label_05352c44: ;
				Il2CppMethodInitialized_0754292d = true;
				uVar1 = (typeof(GisketchScrollSnapshot)._2).cctor_finished_or_no_cctor;
			}
			else {
				if ((typeof(GisketchScrollSnapshot)._2).cctor_finished_or_no_cctor == 0) goto label_05352c32;
		label_05352abc: ;
				if (Il2CppMethodInitialized_0754292d == false) goto label_05352c44;
		label_05352ac9: ;
				uVar1 = (typeof(GisketchScrollSnapshot)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			fVar4 = GisketchScrollSnapshot.MaxScroll(scroll, true);
			if ((typeof(GisketchScrollSnapshot)._2).cctor_finished_or_no_cctor == 0) {
			}
			fVar5 = GisketchScrollSnapshot.MaxScroll(scroll, false);
			pSStack_50 = null;
			pSStack_48 = null;
			uStack_40 = 0;
			uStack_38 = 0;
			local_58 = scroll;
			target = null;
			bVar2 = ((Object)scroll != null);
			if (bVar2) {
				if (scroll == null) goto label_05352de1;
				target = scroll.transform;
			}
			if ((typeof(GisketchScrollSnapshot)._2).cctor_finished_or_no_cctor == 0) {
			}
			pSStack_50 = GisketchScrollSnapshot.PathFromRoot(root, target);
			bVar2 = ((Object)scroll != null);
			if (bVar2) {
				if (scroll == null) goto label_05352de1;
				pSStack_48 = scroll.name;
			}
			else {
				pSStack_48 = (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			bVar2 = ((Object)scroll != null);
			fVar6 = 0.0;
			if (bVar2) {
				if (scroll == null) goto label_05352de1;
				fVar6 = scroll.horizontalNormalizedPosition;
				fVar6 = fVar4 * fVar6;
			}
			uStack_40 = CONCAT44(uStack_40._4_4_, fVar6);
			bVar2 = ((Object)scroll != null);
			fVar4 = 0.0;
			if (bVar2) {
				if (scroll == null) goto label_05352de1;
				fVar4 = scroll.verticalNormalizedPosition;
				fVar4 = fVar5 * (1.0 - fVar4);
			}
			uStack_40 = CONCAT44(fVar4, (undefined4)uStack_40);
			bVar2 = ((Object)scroll != null);
			fVar4 = 0.0;
			if (bVar2) {
				if (scroll == null) goto label_05352de1;
				fVar4 = scroll.horizontalNormalizedPosition;
			}
			uStack_38 = CONCAT44(uStack_38._4_4_, fVar4);
			bVar2 = ((Object)scroll != null);
			if (bVar2) {
				if (scroll == null) {
		label_05352de1: ;
					throw new NullReferenceException();
				}
				fVar4 = scroll.verticalNormalizedPosition;
			}
			else {
				fVar4 = 1.0;
			}
			__return_storage_ptr__._name = pSStack_48;
			__return_storage_ptr__._horizontalOffset = (float)(undefined4)uStack_40;
			__return_storage_ptr__._verticalOffset = (float)uStack_40._4_4_;
			__return_storage_ptr__._scroll = local_58;
			__return_storage_ptr__._path = pSStack_50;
			__return_storage_ptr__._horizontalNormalized = (float)(undefined4)uStack_38;
			__return_storage_ptr__._verticalNormalized = fVar4;
			return __return_storage_ptr__;
		}

		[Token(Token = "0x600029B")]
		[Address(RVA = "0x5252F10", Offset = "0x5251F10", VA = "0x5252F10")]
		public void Restore(GameObject root)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.Entry$$Restore): clean
			uint uVar1;
			bool bVar2;
			ScrollRect scroll;
			float fVar4;
			float fVar5;
			float fVar6;

			scroll = this.Resolve(root);
			bVar2 = ((Object)scroll == null);
			if (bVar2) {
				return;
			}
			if (scroll == null) {
				throw new NullReferenceException();
			}
			scroll.StopMovement();
			if ((typeof(GisketchScrollSnapshot)._2).cctor_finished_or_no_cctor == 0) {
			}
			if (Il2CppMethodInitialized_0754292d == false) {
				Il2CppMethodInitialized_0754292d = true;
				uVar1 = (typeof(GisketchScrollSnapshot)._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar1 = ((typeof(GisketchScrollSnapshot))._2). cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			fVar4 = GisketchScrollSnapshot.MaxScroll(scroll, true);
			if ((typeof(GisketchScrollSnapshot)._2).cctor_finished_or_no_cctor == 0) {
			}
			fVar5 = GisketchScrollSnapshot.MaxScroll(scroll, false);
			if (fVar4 <= 0.01) {
				fVar4 = this._horizontalNormalized;
			}
			else {
				fVar4 = this._horizontalOffset / fVar4;
			}
			fVar6 = 1.0;
			if (fVar4 <= 1.0) {
				fVar6 = fVar4;
			}
			scroll.horizontalNormalizedPosition = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar6);
			if (fVar5 <= 0.01) {
				fVar4 = this._verticalNormalized;
			}
			else {
				fVar4 = 1.0 - this._verticalOffset / fVar5;
			}
			fVar5 = 1.0;
			if (fVar4 <= 1.0) {
				fVar5 = fVar4;
			}
			scroll.verticalNormalizedPosition = (float)(-(uint)(0.0 <= fVar4) & (uint)fVar5);
			return;
		}

		[Token(Token = "0x600029C")]
		[Address(RVA = "0x5253130", Offset = "0x5252130", VA = "0x5253130")]
		public GameObject LiveRoot()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.Entry$$LiveRoot): clean
			ScrollRect pUVar1;
			bool bVar2;
			GameObject pUVar3;

			pUVar1 = this._scroll;
			bVar2 = ((Object)pUVar1 != null);
			if (bVar2) {
				pUVar1 = this._scroll;
				if (pUVar1 == null) {
					throw new NullReferenceException();
				}
				return pUVar3;
			}
			return null;
		}

		[Token(Token = "0x600029D")]
		[Address(RVA = "0x5253C50", Offset = "0x5252C50", VA = "0x5253C50")]
		private ScrollRect Resolve(GameObject root)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.Entry$$Resolve): clean
			ScrollRect x;
			bool bVar1;
			ScrollRect x_00;

			x_00 = this.ResolveFromRoot(root);
			bVar1 = ((Object)x_00 != null);
			if (!bVar1) {
				x = this._scroll;
				x_00 = null;
				bVar1 = ((Object)x != null);
				if (bVar1) {
					x_00 = this._scroll;
				}
			}
			return x_00;
		}

		[Token(Token = "0x600029E")]
		[Address(RVA = "0x5253CF0", Offset = "0x5252CF0", VA = "0x5253CF0")]
		private ScrollRect ResolveFromRoot(GameObject root)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.Entry$$ResolveFromRoot): clean
			uint uVar1;
			Object x;
			bool bVar2;
			Transform pUVar3;
			ScrollRect x_00;
			Object[] pSVar4;
			ulong uVar5;
			String pSVar6;
			GameObject __this_00;
			ulong uVar7;

			x_00 = null;
			bVar2 = ((Object)root == null);
			if (!bVar2) {
				if (root == null) {
		label_05353f4e: ;
					throw new NullReferenceException();
				}
				pUVar3 = root.transform;
				pSVar6 = this._path;
				if ((typeof(GisketchScrollSnapshot)._2).cctor_finished_or_no_cctor == 0) {
				}
				pUVar3 = GisketchScrollSnapshot.FindByPath(pUVar3, pSVar6);
				x_00 = null;
				bVar2 = ((Object)pUVar3 != null);
				if (bVar2) {
					if (pUVar3 == null) goto label_05353f4e;
					x_00 = pUVar3.GetComponent<ScrollRect>();
				}
				bVar2 = ((Object)x_00 != null);
				if (!bVar2) {
					pSVar4 = root.GetComponentsInChildren<ScrollRect>(true);
					if (pSVar4 == null) goto label_05353f4e;
					if ((int)pSVar4.Length < 1) {
						x_00 = null;
					}
					else {
						uVar5 = pSVar4.Length & 0xffffffff;
						x_00 = null;
						uVar7 = 0;
						do {
							if (uVar5 <= uVar7) goto label_05353f49;
							x = (Object)pSVar4[uVar7];
							bVar2 = (x == null);
							if (!bVar2) {
								if ((uint)pSVar4.Length <= uVar7) goto label_05353f49;
								if ((Object)pSVar4[uVar7] == null) goto label_05353f4e;
								pSVar6 = (pSVar4[uVar7]).name;
								bVar2 = (pSVar6 != this._name);
								if (!bVar2) {
									if ((uint)pSVar4.Length <= uVar7) {
		label_05353f49: ;
										throw new IndexOutOfRangeException();
									}
									if (((Component)pSVar4[uVar7] == null) ||(__this_00 = (pSVar4[uVar7]).gameObject, __this_00 == null)) goto label_05353f4e;
									bVar2 = __this_00.activeInHierarchy;
									if (bVar2) {
										if ((uint)uVar7 < (uint)pSVar4.Length) {
											return (ScrollRect)pSVar4[uVar7];
										}
										goto label_05353f49;
									}
									if (x_00 == null) {
										if ((uint)pSVar4.Length <= uVar7) goto label_05353f49;
										x_00 = (ScrollRect)pSVar4[uVar7];
									}
								}
							}
							uVar7 = uVar7 + 1;
							uVar1 = (uint)pSVar4.Length;
							uVar5 = (ulong)uVar1;
						} while ((long)uVar7 < (long)(int)uVar1);
					}
				}
			}
			return x_00;
		}
	}

	[Token(Token = "0x200004B")]
	[CompilerGenerated]
	private sealed class _003CRestoreNextFrame_003Ed__10 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000178")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000179")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400017A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public GisketchScrollSnapshot _003C_003E4__this;

		[Token(Token = "0x400017B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public GameObject root;

		[Token(Token = "0x17000043")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x60002A2")]
			[Address(RVA = "0x5253FE0", Offset = "0x5252FE0", VA = "0x5253FE0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.<RestoreNextFrame>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000044")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60002A4")]
			[Address(RVA = "0x5254030", Offset = "0x5253030", VA = "0x5254030", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.<RestoreNextFrame>d__10$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600029F")]
		[Address(RVA = "0x5253110", Offset = "0x5252110", VA = "0x5253110")]
		[DebuggerHidden]
		public _003CRestoreNextFrame_003Ed__10(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.<RestoreNextFrame>d__10$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x60002A0")]
		[Address(RVA = "0x5253F60", Offset = "0x5252F60", VA = "0x5253F60", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.<RestoreNextFrame>d__10$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x60002A1")]
		[Address(RVA = "0x5253F70", Offset = "0x5252F70", VA = "0x5253F70", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.<RestoreNextFrame>d__10$$MoveNext): clean
			int iVar1;
			GisketchScrollSnapshot __this_00;
			GisketchScrollSnapshot.Entry[] pGVar2;

			iVar1 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar1 == 1) {
				this.__1__state = -1;
				if (__this_00 == null) {
		label_05353fd6: ;
					throw new NullReferenceException();
				}
				__this_00.Restore(this.root);
			}
			else if (iVar1 == 0) {
				this.__1__state = -1;
				if ((__this_00 == null) ||(pGVar2 = __this_00._entries, pGVar2 == null)) goto label_05353fd6;
				if ((int)pGVar2.Length != 0) {
					this.__2__current = null;
					this.__1__state = 1;
					return true;
				}
			}
			return false;
		}

		[Token(Token = "0x60002A3")]
		[Address(RVA = "0x5253FF0", Offset = "0x5252FF0", VA = "0x5253FF0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot.<RestoreNextFrame>d__10$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Routing_GisketchScrollSnapshot_RestoreNextFrame_d__10_System_Collections_IEnum);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x400016E")]
	private const float RangeEpsilon = 0.01f;

	[Token(Token = "0x400016F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Entry[] EmptyEntries;

	[Token(Token = "0x4000170")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Entry[] _entries;

	[Token(Token = "0x17000042")]
	public bool HasEntries
	{
		[Token(Token = "0x600028C")]
		[Address(RVA = "0x5252840", Offset = "0x5251840", VA = "0x5252840")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$get_HasEntries): clean
			GisketchScrollSnapshot.Entry[] pGVar1;

			pGVar1 = this._entries;
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			return (int)pGVar1.Length != 0;
		}
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x52527C0", Offset = "0x52517C0", VA = "0x52527C0")]
	private GisketchScrollSnapshot(Entry[] entries)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$.ctor): clean
		base();
		if (entries == null) {
			entries = GisketchScrollSnapshot.EmptyEntries;
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this._entries = entries;
		return;
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x524F080", Offset = "0x524E080", VA = "0x524F080")]
	public static GisketchScrollSnapshot Empty()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$Empty): 1 lines keep C-only constructs
		GisketchScrollSnapshot __this;
		GisketchScrollSnapshot.Entry[] pGVar1;

		pGVar1 = GisketchScrollSnapshot.EmptyEntries;
		__this = il2cpp_codegen_object_new(typeof(GisketchScrollSnapshot)) ;
		__this = new Object();
		if (pGVar1 == null) {
			pGVar1 = GisketchScrollSnapshot.EmptyEntries;
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this._entries = pGVar1;
		return __this;
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x5252860", Offset = "0x5251860", VA = "0x5252860")]
	public static GisketchScrollSnapshot CaptureNearest(GameObject source, GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$CaptureNearest): clean
		bool bVar1;
		ScrollRect scroll;
		GisketchScrollSnapshot pGVar2;
		Transform pUVar3;
		GisketchScrollSnapshot.Entry[] pGVar4;
		GisketchScrollSnapshot.Entry GStack_48;

		scroll = null;
		bVar1 = ((Object)source != null);
		if (bVar1) {
			if (source == null) goto label_05352a6c;
			scroll = source.GetComponentInParent<ScrollRect>(true);
		}
		bVar1 = ((Object)scroll == null);
		if (bVar1) {
			pGVar2 = GisketchScrollSnapshot.Empty();
			return pGVar2;
		}
		bVar1 = ((Object)root != null);
		if (bVar1) {
			if (root == null) goto label_05352a6c;
			pUVar3 = root.transform;
		}
		else {
			if (scroll == null) goto label_05352a6c;
			pUVar3 = scroll.transform;
			if (pUVar3 == null) goto label_05352a6c;
			pUVar3 = pUVar3.root;
		}
		pGVar4 = (GisketchScrollSnapshot.Entry[])new GisketchScrollSnapshot.Entry[1];
		GStack_48 = GisketchScrollSnapshot.Entry.Capture(scroll, pUVar3);
		if (pGVar4 != null) {
			if ((int)pGVar4.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pGVar4[0]._horizontalNormalized = GStack_48._horizontalNormalized;
			pGVar4[0]._verticalNormalized = GStack_48._verticalNormalized;
			pGVar4[0]._name = GStack_48._name;
			pGVar4[0]._horizontalOffset = GStack_48._horizontalOffset;
			pGVar4[0]._verticalOffset = GStack_48._verticalOffset;
			pGVar4[0]._scroll = GStack_48._scroll;
			pGVar4[0]._path = GStack_48._path;
			pGVar2 = new GisketchScrollSnapshot();
			if (pGVar2 != null) {
				pGVar2._entries = pGVar4;
				return pGVar2;
			}
		}
	label_05352a6c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x524F140", Offset = "0x524E140", VA = "0x524F140")]
	public static GisketchScrollSnapshot CaptureAll(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$CaptureAll): 11 lines keep C-only constructs
		int piVar1;
		String* ppSVar2;
		uint uVar3;
		Object pUVar4;
		GisketchScrollSnapshot.Entry item;
		bool bVar6;
		Object[] pSVar7;
		List<GisketchScrollSnapshot.Entry> __this;
		Transform root_00;
		ulong uVar8;
		GisketchScrollSnapshot.Entry[] pGVar9;
		GisketchScrollSnapshot pGVar10;
		MethodInfo in_RCX;
		ulong uVar11;
		GisketchScrollSnapshot.Entry local_88;

		bVar6 = ((Object)root == null);
		if (bVar6) {
	label_0534f4bf: ;
			pGVar10 = GisketchScrollSnapshot.Empty();
			return pGVar10;
		}
		if (root != null) {
			pSVar7 = root.GetComponentsInChildren<ScrollRect>(true);
			if ((pSVar7 == null) || (pSVar7.Length == 0)) goto label_0534f4bf;
			__this = new List<GisketchScrollSnapshot.Entry>((int32_t)pSVar7.Length);
			root_00 = root.transform;
			if (0 < (int)pSVar7.Length) {
				uVar8 = pSVar7.Length & 0xffffffff;
				if (__this == null) {
					uVar11 = 0;
					do {
						if (uVar8 <= uVar11) goto label_0534f50f;
						pUVar4 = (Object)pSVar7[uVar11];
						bVar6 = (pUVar4 != null);
						if (bVar6) {
							if ((uint)uVar11 < (uint)pSVar7.Length) {
								local_88 = GisketchScrollSnapshot.Entry.Capture((ScrollRect)pSVar7[uVar11], root_00);
								throw new NullReferenceException();
							}
							goto label_0534f50f;
						}
						uVar11 = uVar11 + 1;
						uVar3 = (uint)pSVar7.Length;
						uVar8 = (ulong)uVar3;
						in_RCX = (MethodInfo)(long)(int)uVar3;
					} while ((long)uVar11 < (long)in_RCX);
				}
				else {
					uVar11 = 0;
					do {
						if (uVar8 <= uVar11) {
	label_0534f50f: ;
							throw new IndexOutOfRangeException();
						}
						pUVar4 = (Object)pSVar7[uVar11];
						bVar6 = (pUVar4 != null);
						if (bVar6) {
							if ((uint)pSVar7.Length <= uVar11) goto label_0534f50f;
							local_88 = GisketchScrollSnapshot.Entry.Capture((ScrollRect)pSVar7[uVar11], root_00);
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
							pGVar9 = __this._items;
							if (pGVar9 == null) goto label_0534f4ed;
							uVar3 = __this._size;
							if (uVar3 < (uint)pGVar9.Length) {
								__this._size = uVar3 + 1;
								pGVar9[(int)uVar3]._horizontalNormalized = local_88._horizontalNormalized ;
								pGVar9[(int)uVar3]._verticalNormalized = local_88._verticalNormalized;
								ppSVar2 = &pGVar9[(int)uVar3]._name;
								*ppSVar2 = local_88._name;
								ppSVar2[1] = (String)local_88._24_8_;
								pGVar9[(int)uVar3]._scroll = local_88._scroll;
								pGVar9[(int)uVar3]._path = local_88._path;
							}
							else {
								item._path = local_88._path;
								item._scroll = local_88._scroll;
								item._name = local_88._name;
								item._horizontalOffset = local_88._horizontalOffset;
								item._verticalOffset = local_88._verticalOffset;
								item._horizontalNormalized = local_88._horizontalNormalized;
								item._verticalNormalized = local_88._verticalNormalized;
								__this.AddWithResize(item);
							}
						}
						uVar11 = uVar11 + 1;
						uVar3 = (uint)pSVar7.Length;
						uVar8 = (ulong)uVar3;
						in_RCX = (MethodInfo)(long)(int)uVar3;
					} while ((long)uVar11 < (long)in_RCX);
				}
			}
			if (__this != null) {
				if (__this._size < 1) goto label_0534f4bf;
				pGVar9 = __this.ToArray();
				if (Il2CppMethodInitialized_07542926 == false) {
					il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchScrollSnapshot)) ;
					Il2CppMethodInitialized_07542926 = true;
				}
				pGVar10 = new GisketchScrollSnapshot();
				if (pGVar9 == null) {
					pGVar9 = GisketchScrollSnapshot.EmptyEntries;
				}
				if (pGVar10 != null) {
					pGVar10._entries = pGVar9;
					return pGVar10;
				}
			}
		}
	label_0534f4ed: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x524F740", Offset = "0x524E740", VA = "0x524F740")]
	public void Restore([Optional] GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$Restore): clean
		uint uVar1;
		long lVar2;
		bool bVar3;
		GameObject root_00;
		ulong uVar5;
		GisketchScrollSnapshot.Entry[] pGVar6;
		long lVar7;

		pGVar6 = this._entries;
		if (pGVar6 != null) {
			if ((int)pGVar6.Length == 0) {
				return;
			}
			bVar3 = ((Object)root != null);
			root_00 = root;
			if (!bVar3) {
				root_00 = this.FirstLiveScrollRoot();
			}
			GisketchScreenBuilder.SettleLayout(root_00, 2);
			pGVar6 = this._entries;
			if (pGVar6 != null) {
				lVar7 = 0x20;
				uVar5 = 0;
				do {
					uVar1 = (uint)pGVar6.Length;
					if ((long)(int)uVar1 <= (long)uVar5) {
						return;
					}
					if (uVar1 <= uVar5) {
						throw new IndexOutOfRangeException();
					}
					uVar5 = uVar5 + 1;
					lVar2 = lVar7 + -0x20;
					lVar7 = lVar7 + 0x28;
					(((long)pGVar6.m_Items + lVar2)).Restore(root);
					pGVar6 = this._entries;
				} while (pGVar6 != null);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x524F850", Offset = "0x524E850", VA = "0x524F850")]
	[IteratorStateMachine(typeof(_003CRestoreNextFrame_003Ed__10))]
	public IEnumerator RestoreNextFrame([Optional] GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$RestoreNextFrame): 1 lines keep C-only constructs
		GisketchScrollSnapshot.d__10<RestoreNextFrame> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchScrollSnapshot.d__10<RestoreNextFrame>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.root = root;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x5252DF0", Offset = "0x5251DF0", VA = "0x5252DF0")]
	private GameObject FirstLiveScrollRoot()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$FirstLiveScrollRoot): clean
		uint uVar1;
		Component __this_00;
		bool bVar2;
		ulong uVar3;
		GisketchScrollSnapshot.Entry[] pGVar4;
		Object pUVar5;
		long lVar6;

		pGVar4 = this._entries;
		if (pGVar4 != null) {
			lVar6 = 0x20;
			uVar3 = 0;
			do {
				uVar1 = (uint)pGVar4.Length;
				if ((long)(int)uVar1 <= (long)uVar3) {
					return null;
				}
				if (uVar1 <= uVar3) {
					throw new IndexOutOfRangeException();
				}
				pUVar5 = *(Object*)((long)pGVar4.m_Items + lVar6 + -0x20);
				bVar2 = (pUVar5 != null);
				pUVar5 = null;
				if (bVar2) {
					__this_00 = *(Component*)((long)pGVar4.m_Items + lVar6 + -0x20);
					if (__this_00 == null) break;
					pUVar5 = (Object)__this_00.gameObject;
				}
				bVar2 = (pUVar5 != null);
				if (bVar2) {
					return (GameObject)pUVar5;
				}
				lVar6 = lVar6 + 0x28;
				uVar3 = uVar3 + 1;
				pGVar4 = this._entries;
			} while (pGVar4 != null);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x52531B0", Offset = "0x52521B0", VA = "0x52531B0")]
	private static float MaxHorizontal(ScrollRect scroll)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$MaxHorizontal): clean
		uint uVar1;
		float fVar2;

		if (Il2CppMethodInitialized_0754292d == false) {
			Il2CppMethodInitialized_0754292d = true;
			uVar1 = (typeof(GisketchScrollSnapshot)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(GisketchScrollSnapshot)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			fVar2 = GisketchScrollSnapshot.MaxScroll(scroll, true);
			return fVar2;
		}
		fVar2 = GisketchScrollSnapshot.MaxScroll(scroll, true);
		return fVar2;
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x52533E0", Offset = "0x52523E0", VA = "0x52533E0")]
	private static float MaxVertical(ScrollRect scroll)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$MaxVertical): clean
		uint uVar1;
		float fVar2;

		if (Il2CppMethodInitialized_0754292e == false) {
			Il2CppMethodInitialized_0754292e = true;
			uVar1 = (typeof(GisketchScrollSnapshot)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(GisketchScrollSnapshot)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			fVar2 = GisketchScrollSnapshot.MaxScroll(scroll, false);
			return fVar2;
		}
		fVar2 = GisketchScrollSnapshot.MaxScroll(scroll, false);
		return fVar2;
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x5253220", Offset = "0x5252220", VA = "0x5253220")]
	private static float MaxScroll(ScrollRect scroll, bool horizontal)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$MaxScroll): clean
		RectTransform pUVar1;
		bool bVar2;
		float fVar3;
		float fVar4;
		Rect UVar5;
		float local_48;

		bVar2 = ((Object)scroll == null);
		if (bVar2) {
			return 0.0;
		}
		if (scroll == null) goto label_053533d0;
		pUVar1 = scroll.m_Content;
		bVar2 = ((Object)pUVar1 == null);
		if (bVar2) {
		}
		else {
			pUVar1 = scroll.m_Viewport;
			bVar2 = ((Object)pUVar1 == null);
			if (!bVar2) {
				pUVar1 = scroll.m_Content;
				if (horizontal) {
					if (pUVar1 == null) {
	label_053533d0: ;
						throw new NullReferenceException();
					}
					UVar5 = pUVar1.rect;
					local_48 = UVar5.m_Width;
					pUVar1 = scroll.m_Viewport;
					if (pUVar1 == null) goto label_053533d0;
					UVar5 = pUVar1.rect;
					fVar4 = UVar5.m_Width;
				}
				else {
					if (pUVar1 == null) goto label_053533d0;
					UVar5 = pUVar1.rect;
					local_48 = UVar5.m_Height;
					pUVar1 = scroll.m_Viewport;
					if (pUVar1 == null) goto label_053533d0;
					UVar5 = pUVar1.rect;
					fVar4 = UVar5.m_Height;
				}
				if (0.0 <= local_48 - fVar4) {
					fVar3 = local_48 - fVar4;
				}
			}
		}
		return fVar3;
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x5253450", Offset = "0x5252450", VA = "0x5253450")]
	private static string PathFromRoot(Transform root, Transform target)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$PathFromRoot): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		bool bVar4;
		List<string> __this;
		String pSVar5;
		String[] pSVar6;

		bVar4 = ((Object)root == null);
		if (!bVar4) {
			bVar4 = ((Object)target == null);
			if (!bVar4) {
				__this = new List<string>();
				if (__this == null) {
					bVar4 = ((Object)target != null);
					if (bVar4) {
						bVar4 = ((Object)target != (Object)root);
						if (bVar4) {
							if (target != null) {
								target.name;
								throw new NullReferenceException();
							}
							goto label_053536f3;
						}
					}
	label_05353663: ;
					bVar4 = ((Object)target != (Object)root);
					if (bVar4) goto label_05353686;
					if (__this != null) {
						__this.Reverse();
						pSVar6 = (String[])__this.ToArray() ;
						pSVar5 = String.Join("/", pSVar6);
						return pSVar5;
					}
				}
				else {
					while(true) {
						bVar4 = ((Object)target != null);
						if (!bVar4) goto label_05353663;
						bVar4 = ((Object)target != (Object)root);
						if (!bVar4) goto label_05353663;
						if (target == null) break;
						pSVar5 = target.name;
						piVar1 = &__this._version;
						*piVar1 = *piVar1 + 1;
						pSVar6 = __this._items;
						if (pSVar6 == null) break;
						uVar2 = __this._size;
						if (uVar2 < (uint)pSVar6.Length) {
							__this._size = uVar2 + 1;
							pSVar6[(int)uVar2] = pSVar5;
						}
						else {
							__this.AddWithResize((object)pSVar5);
						}
						target = target.parent;
					}
				}
	label_053536f3: ;
				throw new NullReferenceException();
			}
		}
	label_05353686: ;
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x5253710", Offset = "0x5252710", VA = "0x5253710")]
	private static Transform FindByPath(Transform root, string path)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$FindByPath): clean
		uint uVar1;
		String name;
		bool bVar2;
		String[] pSVar3;
		ulong uVar4;
		Transform pUVar5;
		ulong uVar6;

		bVar2 = ((Object)root == null);
		pUVar5 = null;
		if (!bVar2) {
			bVar2 = String.IsNullOrEmpty(path);
			pUVar5 = null;
			if (!bVar2) {
				if ((path == null) ||(pSVar3 = path.Split(0x2f, 0), pSVar3 == null)) {
					throw new NullReferenceException();
				}
				pUVar5 = root;
				if (0 < (int)pSVar3.Length) {
					uVar4 = pSVar3.Length & 0xffffffff;
					uVar6 = 0;
					do {
						if (uVar4 <= uVar6) {
							throw new IndexOutOfRangeException();
						}
						name = pSVar3[uVar6];
						if ((typeof(GisketchScrollSnapshot)._2).cctor_finished_or_no_cctor == 0) {
						}
						pUVar5 = GisketchScrollSnapshot.FindDirectChild(pUVar5, name);
						bVar2 = ((Object)pUVar5 == null);
						if (bVar2) {
							return null;
						}
						uVar6 = uVar6 + 1;
						uVar1 = (uint)pSVar3.Length;
						uVar4 = (ulong)uVar1;
					} while ((long)uVar6 < (long)(int)uVar1);
				}
			}
		}
		return pUVar5;
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x5253860", Offset = "0x5252860", VA = "0x5253860")]
	private static Transform FindDirectChild(Transform root, string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c (Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$FindDirectChild): 9 lines keep C-only constructs
		byte bVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		bool bVar4;
		VirtualInvokeData pVVar5;
		Transform __this;
		String a;
		GameObject __this_00;
		object pIVar6;
		ulong uVar7;
		long lVar8;
		Transform pUVar9;
		object local_58;
		object local_50;
		byte local_40;
		object* local_38;

		local_50 = null;
		bVar4 = ((Object)root == null);
		if (bVar4) {
			return null;
		}
		if (root == null) {
			throw new NullReferenceException();
		}
		local_58 = (object)root.GetEnumerator();
		local_40 = (byte)&local_58;
		local_38 = &local_50;
		pUVar9 = null;
	label_05353940: ;
		pIVar6 = local_58;
		if (local_58 == null) {
			throw new NullReferenceException();
		}
		pIVar2 = local_58.klass;
		uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
		bVar4 = pIVar6.Dispose();
		pIVar6 = local_58;
		__this = pUVar9;
		if (bVar4) goto code_r0x053539b4;
		goto label_05353ac7;
	code_r0x053539b4: ;
		if (local_58 == null) {
			throw new NullReferenceException();
		}
		pIVar2 = local_58.klass;
		uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
		__this = (Transform)pIVar6.Dispose();
		if (__this == null) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(Transform)._2).typeHierarchyDepth;
		if (((__this.klass._2).typeHierarchyDepth < bVar1) ||((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(Transform))) {
			throw new InvalidCastException();
		}
		a = __this.name;
		bVar4 = (a == name);
		if (bVar4) {
			__this_00 = __this.gameObject;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar4 = __this_00.activeInHierarchy;
			if (bVar4) {
	label_05353ac7: ;
				pIVar6 = (local_58 as IDisposable);
				if (pIVar6 == null) {
					return __this;
				}
				pIVar2 = pIVar6.klass;
				uVar7 = (ulong)(pIVar2._2).interface_offsets_count;
				local_50 = pIVar6;
				if (uVar7 == 0) goto label_05353b1f;
				pIVar3 = (pIVar2._1).interfaceOffsets;
				lVar8 = 0;
				goto label_05353b10;
			}
			if (pUVar9 == null) {
				pUVar9 = __this;
			}
		}
		goto label_05353940;
		while (true) {
			lVar8 = lVar8 + 0x10;
			if (!(uVar7 * 0x10 != lVar8)) break;
	label_05353b10: ;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar8) == typeof(IDisposable)) {
				pVVar5 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar8);
				goto label_05353b3d;
			}
		}
	label_05353b1f: ;
	label_05353b3d: ;
		pIVar6.Dispose();
		return __this;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScrollSnapshot.c.

	// Gisketch.Aottg2UI.Routing.GisketchScrollSnapshot$$.cctor: 2 lines keep C-only constructs
	static GisketchScrollSnapshot()
	{
		ulong puVar1;
		GisketchScrollSnapshot.Entry[] pGVar2;

		pGVar2 = (GisketchScrollSnapshot.Entry[])new GisketchScrollSnapshot.Entry[0];
		GisketchScrollSnapshot.EmptyEntries = pGVar2;
		if (g_data_07769410 != 0) {
			LOCK();
			puVar1 = (ulong)((long)&g_data_0759d3f0 +(ulong)((uint)((ulong)typeof(GisketchScrollSnapshot). static_fields >> 0xf) & 0x3fff8));
			*puVar1 = *puVar1 | 1L << ((byte)((ulong)typeof(GisketchScrollSnapshot). static_fields >> 0xc) & 0x3f);
			UNLOCK();
		}
		return;
	}
}
