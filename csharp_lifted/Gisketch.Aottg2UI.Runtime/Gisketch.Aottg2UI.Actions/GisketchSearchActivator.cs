// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Actions.GisketchSearchActivator
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Search;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Actions;

[Token(Token = "0x20000EC")]
internal static class GisketchSearchActivator
{
	[Token(Token = "0x20000EE")]
	[CompilerGenerated]
	private sealed class _003CFocusAfterBuild_003Ed__4 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40004C9")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40004CA")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40004CB")]
		[FieldOffset(Offset = "0x20")]
		public GisketchUIRoot root;

		[Token(Token = "0x40004CC")]
		[FieldOffset(Offset = "0x28")]
		public GisketchView view;

		[Token(Token = "0x40004CD")]
		[FieldOffset(Offset = "0x30")]
		public GisketchSearchEntry entry;

		[Token(Token = "0x170000B4")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600075C")]
			[Address(RVA = "0x52A5600", Offset = "0x52A4600", VA = "0x52A5600", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170000B5")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600075E")]
			[Address(RVA = "0x52A5650", Offset = "0x52A4650", VA = "0x52A5650", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6000759")]
		[Address(RVA = "0x52A4AC0", Offset = "0x52A3AC0", VA = "0x52A4AC0")]
		[DebuggerHidden]
		public _003CFocusAfterBuild_003Ed__4(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600075A")]
		[Address(RVA = "0x52A54A0", Offset = "0x52A44A0", VA = "0x52A54A0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x600075B")]
		[Address(RVA = "0x52A54B0", Offset = "0x52A44B0", VA = "0x52A54B0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$MoveNext): 1 lines keep C-only constructs
			int iVar1;
			GisketchUIRoot x;
			GisketchView pGVar2;
			GisketchSearchEntry pGVar3;
			bool bVar4;
			int iVar5;
			GisketchSearchActivator.d__5<FocusInView> __this_00;

			iVar1 = this.__1__state;
			bVar4 = false;
			if (iVar1 == 2) {
				iVar5 = -1;
			}
			else if (iVar1 == 1) {
				this.__1__state = -1;
				x = this.root;
				bVar4 = ((Object)x == null);
				if (bVar4) {
					return false;
				}
				pGVar2 = this.view;
				if (pGVar2 == null) {
					return false;
				}
				pGVar3 = this.entry;
				__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchSearchActivator.d__5<FocusInView>));
				__this_00 = new Object();
				__this_00.__1__state = 0;
				__this_00.entry = pGVar3;
				__this_00.view = pGVar2;
				__this_00.playSpotlight = true;
				this.__2__current = (object)__this_00;
				bVar4 = true;
				iVar5 = 2;
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
				this.__2__current = null;
				bVar4 = true;
				iVar5 = 1;
			}
			this.__1__state = iVar5;
			return bVar4;
		}

		[Token(Token = "0x600075D")]
		[Address(RVA = "0x52A5610", Offset = "0x52A4610", VA = "0x52A5610", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusAfterBuild>d__4$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_FocusAfterBuild_d__4_System_Collections_IEnume);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20000EF")]
	[CompilerGenerated]
	private sealed class _003CFocusInView_003Ed__5 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40004CE")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40004CF")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40004D0")]
		[FieldOffset(Offset = "0x20")]
		public GisketchSearchEntry entry;

		[Token(Token = "0x40004D1")]
		[FieldOffset(Offset = "0x28")]
		public GisketchView view;

		[Token(Token = "0x40004D2")]
		[FieldOffset(Offset = "0x30")]
		public bool playSpotlight;

		[Token(Token = "0x40004D3")]
		[FieldOffset(Offset = "0x38")]
		private GameObject _003Ctarget_003E5__2;

		[Token(Token = "0x40004D4")]
		[FieldOffset(Offset = "0x40")]
		private int _003Ci_003E5__3;

		[Token(Token = "0x170000B6")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000762")]
			[Address(RVA = "0x52A6330", Offset = "0x52A5330", VA = "0x52A6330", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170000B7")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000764")]
			[Address(RVA = "0x52A6380", Offset = "0x52A5380", VA = "0x52A6380", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600075F")]
		[Address(RVA = "0x52A4B70", Offset = "0x52A3B70", VA = "0x52A4B70")]
		[DebuggerHidden]
		public _003CFocusInView_003Ed__5(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6000760")]
		[Address(RVA = "0x52A5660", Offset = "0x52A4660", VA = "0x52A5660", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6000761")]
		[Address(RVA = "0x52A5670", Offset = "0x52A4670", VA = "0x52A5670", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$MoveNext): 7 lines keep C-only constructs
			GameObject* targetAddress;
			String pSVar1;
			GisketchView pGVar2;
			GisketchSearchEntry pGVar3;
			Object pUVar4;
			bool bVar5;
			int iVar6;
			GisketchSearchActivator.d__7<WaitForMotion> __this_00;
			GisketchSearchActivator.d__6<RevealUntilVisible> pGVar7;
			GameObject pUVar8;

			switch(this.__1__state) {
			case 0:
				this.__1__state = -1;
				pGVar3 = this.entry;
				if (pGVar3 == null) {
					return false;
				}
				if (this.view == null) {
					return false;
				}
				bVar5 = String.IsNullOrEmpty(pGVar3._SectionId_k__BackingField);
				if (!bVar5) {
					pGVar2 = this.view;
					if (pGVar2 == null) goto label_053a5b9f;
					pUVar4 = (Object)pGVar2._Root_k__BackingField;
					bVar5 = (pUVar4 != null);
					if (bVar5) {
						pGVar2 = this.view;
						if ((pGVar2 == null) ||(pGVar3 = this.entry, pGVar3 == null)) goto label_053a5b9f;
						pUVar8 = pGVar2._Root_k__BackingField;
						pSVar1 = pGVar3._SectionId_k__BackingField;
						pUVar8.Select(pSVar1, true);
					}
				}
				pGVar3 = this.entry;
				if ((pGVar3 == null) ||(pGVar2 = this.view, pGVar2 == null)) goto label_053a5b9f;
				bVar5 = GisketchSearchActivator.PrepareTarget(pGVar3._TargetId_k__BackingField, pGVar2._Root_k__BackingField);
				if (bVar5) {
					this.__2__current = null;
					this.__1__state = 1;
					return true;
				}
				goto label_053a57d8;
			case 1:
				this.__1__state = -1;
		label_053a57d8: ;
				this._target_5__2 = null;
				this._i_5__3 = 0;
		label_053a580c: ;
				pUVar8 = GisketchSearchActivator.Target(this.entry, this.view);
				this._target_5__2 = pUVar8;
				pUVar4 = (Object)this._target_5__2;
				bVar5 = (pUVar4 != null);
				if (bVar5) {
		label_053a5859: ;
					pUVar4 = (Object)this._target_5__2;
					bVar5 = (pUVar4 == null);
					if (bVar5) {
						return false;
					}
					pGVar3 = this.entry;
					if (pGVar3 == null) {
		label_053a5b9f: ;
						throw new NullReferenceException();
					}
					bVar5 = String.IsNullOrEmpty(pGVar3._SectionId_k__BackingField);
					if (!bVar5) {
						pGVar2 = this.view;
						if (pGVar2 == null) goto label_053a5b9f;
						pUVar4 = (Object)pGVar2._Root_k__BackingField;
						bVar5 = (pUVar4 != null);
						if (bVar5) {
							pGVar2 = this.view;
							if ((pGVar2 == null) ||(pGVar3 = this.entry, pGVar3 == null )) goto label_053a5b9f;
							pUVar8 = pGVar2._Root_k__BackingField;
							pSVar1 = pGVar3._SectionId_k__BackingField;
							pUVar8.Select(pSVar1, true);
						}
					}
					pGVar3 = this.entry;
					pGVar2 = this.view;
					pGVar7 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchSearchActivator.d__6<RevealUntilVisible>));
					pGVar7 = new Object();
					pGVar7.__1__state = 0;
					pGVar7.entry = pGVar3;
					pGVar7.view = pGVar2;
					this.__2__current = (object)pGVar7;
					this.__1__state = 3;
				}
				else {
					this.__2__current = null;
					this.__1__state = 2;
				}
				break;
			case 2:
				this.__1__state = -1;
				iVar6 = this._i_5__3 + 1;
				this._i_5__3 = iVar6;
				if (iVar6 < 0x10) goto label_053a580c;
				goto label_053a5859;
			case 3:
				this.__1__state = -1;
				if (this.playSpotlight == false) {
					return false;
				}
				__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchSearchActivator.d__7<WaitForMotion>));
				__this_00 = new Object();
				__this_00.__1__state = 0;
				this.__2__current = (object)__this_00;
				this.__1__state = 4;
				break;
			case 4:
				this.__1__state = -1;
				pGVar2 = this.view;
				if (pGVar2 == null) goto label_053a5b9f;
				pUVar8 = pGVar2._Root_k__BackingField;
				GisketchScreenBuilder.SettleLayout(pUVar8, 2);
				pGVar3 = this.entry;
				pGVar2 = this.view;
				pGVar7 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchSearchActivator.d__6<RevealUntilVisible>));
				pGVar7 = new Object();
				pGVar7.__1__state = 0;
				pGVar7.entry = pGVar3;
				pGVar7.view = pGVar2;
				this.__2__current = (object)pGVar7;
				this.__1__state = 5;
				break;
			case 5:
				this.__1__state = -1;
				this.__2__current = null;
				this.__1__state = 6;
				break;
			case 6:
				this.__1__state = -1;
				pUVar8 = GisketchSearchActivator.Target(this.entry, this.view);
				targetAddress = &this._target_5__2;
				this._target_5__2 = pUVar8;
				pUVar4 = (Object)this._target_5__2;
				bVar5 = (pUVar4 != null);
				if (!bVar5) {
					return false;
				}
				bVar5 = GisketchScrollFocus.IsVisible(*targetAddress);
				if (bVar5) {
					GisketchSearchSpotlight.Play(*targetAddress);
				}
			default: ;
				return false;
			}
			return true;
		}

		[Token(Token = "0x6000763")]
		[Address(RVA = "0x52A6340", Offset = "0x52A5340", VA = "0x52A6340", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<FocusInView>d__5$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_FocusInView_d__5_System_Collections_IEnumerato);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20000F0")]
	[CompilerGenerated]
	private sealed class _003CRevealUntilVisible_003Ed__6 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40004D5")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40004D6")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40004D7")]
		[FieldOffset(Offset = "0x20")]
		public GisketchSearchEntry entry;

		[Token(Token = "0x40004D8")]
		[FieldOffset(Offset = "0x28")]
		public GisketchView view;

		[Token(Token = "0x40004D9")]
		[FieldOffset(Offset = "0x30")]
		private int _003Ci_003E5__2;

		[Token(Token = "0x170000B8")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000768")]
			[Address(RVA = "0x52A6650", Offset = "0x52A5650", VA = "0x52A6650", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170000B9")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600076A")]
			[Address(RVA = "0x52A66A0", Offset = "0x52A56A0", VA = "0x52A66A0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6000765")]
		[Address(RVA = "0x52A4C10", Offset = "0x52A3C10", VA = "0x52A4C10")]
		[DebuggerHidden]
		public _003CRevealUntilVisible_003Ed__6(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6000766")]
		[Address(RVA = "0x52A6390", Offset = "0x52A5390", VA = "0x52A6390", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6000767")]
		[Address(RVA = "0x52A63A0", Offset = "0x52A53A0", VA = "0x52A63A0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$MoveNext): clean
			GisketchView pGVar1;
			GameObject root;
			bool bVar2;
			int iVar3;
			Object x;
			bool bVar5;

			iVar3 = this.__1__state;
			if (iVar3 == 1) {
				this.__1__state = -1;
				iVar3 = this._i_5__2 + 1;
				this._i_5__2 = iVar3;
				if (8 < iVar3) {
					return false;
				}
			}
			else {
				if (iVar3 != 0) {
					return false;
				}
				this.__1__state = -1;
				this._i_5__2 = 0;
			}
			x = (Object)GisketchSearchActivator.Target(this.entry, this.view);
			bVar2 = (x == null);
			if (!bVar2) {
				GisketchSearchFocus.Focus((GameObject)x);
				pGVar1 = this.view;
				if (pGVar1 == null) {
					throw new NullReferenceException();
				}
				root = pGVar1._Root_k__BackingField;
				GisketchScreenBuilder.SettleLayout(root, 2);
				bVar2 = GisketchScrollFocus.IsVisible((GameObject)x);
				if (!bVar2) {
					this.__2__current = null;
					this.__1__state = 1;
				}
			}
			return bVar5;
		}

		[Token(Token = "0x6000769")]
		[Address(RVA = "0x52A6660", Offset = "0x52A5660", VA = "0x52A6660", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<RevealUntilVisible>d__6$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_RevealUntilVisible_d__6_System_Collections_IEn);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20000F1")]
	[CompilerGenerated]
	private sealed class _003CWaitForMotion_003Ed__7 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40004DA")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40004DB")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40004DC")]
		[FieldOffset(Offset = "0x20")]
		private float _003Cstart_003E5__2;

		[Token(Token = "0x170000BA")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600076E")]
			[Address(RVA = "0x52A67A0", Offset = "0x52A57A0", VA = "0x52A67A0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x170000BB")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000770")]
			[Address(RVA = "0x52A67F0", Offset = "0x52A57F0", VA = "0x52A67F0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600076B")]
		[Address(RVA = "0x52A4C80", Offset = "0x52A3C80", VA = "0x52A4C80")]
		[DebuggerHidden]
		public _003CWaitForMotion_003Ed__7(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600076C")]
		[Address(RVA = "0x52A66B0", Offset = "0x52A56B0", VA = "0x52A66B0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x600076D")]
		[Address(RVA = "0x52A66C0", Offset = "0x52A56C0", VA = "0x52A66C0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$MoveNext): 1 lines keep C-only constructs
			int iVar1;
			uint uVar2;
			bool bVar3;
			bool bVar4;
			float fVar5;

			iVar1 = this.__1__state;
			if (iVar1 == 1) {
				this.__1__state = -1;
				uVar2 = (typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (iVar1 != 0) {
					return false;
				}
				this.__1__state = -1;
				fVar5 = Time.unscaledTime;
				this._start_5__2 = fVar5;
				uVar2 = (typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
				il2cpp_codegen_runtime_class_init(typeof(GisketchMotionDriver)) ;
			}
			bVar3 = GisketchMotionDriver.HasActive;
			if (bVar3) {
				fVar5 = Time.unscaledTime;
				if (fVar5 - this._start_5__2 < 0.35) {
					this.__2__current = null;
					this.__1__state = 1;
				}
			}
			return bVar4;
		}

		[Token(Token = "0x600076F")]
		[Address(RVA = "0x52A67B0", Offset = "0x52A57B0", VA = "0x52A67B0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<WaitForMotion>d__7$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_WaitForMotion_d__7_System_Collections_IEnumera);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x40004C4")]
	private const int TargetWaitFrames = 15;

	[Token(Token = "0x40004C5")]
	private const int VisibilityWaitFrames = 8;

	[Token(Token = "0x40004C6")]
	private const float MotionWaitSeconds = 0.35f;

	[Token(Token = "0x600074E")]
	[Address(RVA = "0x529A8F0", Offset = "0x52998F0", VA = "0x529A8F0")]
	public static void Activate(GisketchSearchEntry entry, GisketchUIRoot root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$Activate): 17 lines keep C-only constructs
		GisketchSearchActivator.c__DisplayClass3_0 targetAddress;
		GisketchUIRoot pGVar1;
		GisketchScreenRouter pGVar2;
		GisketchSearchEntry pGVar3;
		GisketchView pGVar4;
		bool bVar5;
		GisketchSearchActivator.c__DisplayClass3_0 __this;
		GisketchSearchActivator.d__4<FocusAfterBuild> __this_00;
		Action<string, GisketchView> pSVar6;
		GisketchUIRoot* targetAddress_00;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchSearchActivator.c__DisplayClass3_0));
		__this = new Object();
		if (__this != null) {
			targetAddress = &__this.fields;
			__this.entry = entry;
			targetAddress_00 = &__this.root;
			__this.root = root;
			if (__this.entry == null) {
				return;
			}
			pGVar1 = *targetAddress_00;
			bVar5 = ((Object)pGVar1 == null);
			if (bVar5) {
				return;
			}
			if (*targetAddress_00 != null) {
				if (((*targetAddress_00).fields)._Screens_k__BackingField ==null) {
					return;
				}
				if (targetAddress.entry != null) {
					bVar5 = String.IsNullOrEmpty(targetAddress.entry._ScreenId_k__BackingField);
					if (!bVar5) {
						if (((targetAddress.entry == null) ||(*targetAddress_00 == null)) ||(pGVar2 = ((*targetAddress_00).fields)._Screens_k__BackingField, pGVar2 == null)) goto label_0539abd3;
						bVar5 = String.Equals(targetAddress.entry._ScreenId_k__BackingField, pGVar2._activeId, 5);
						if (!bVar5) {
							if (*targetAddress_00 != null) {
								pGVar2 = ((*targetAddress_00).fields)._Screens_k__BackingField;
								pSVar6 = new Action<string, GisketchView>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_c__DisplayClass3_0_Activate_g__OnScreenShown_0);
								if (pGVar2 != null) {
									pGVar2.add_ScreenShown(pSVar6);
									if (((*targetAddress_00 != null) &&(targetAddress.entry != null)) &&(pGVar2 = ((*targetAddress_00).fields)._Screens_k__BackingField, pGVar2 != null)) {
										bVar5 = pGVar2.ShowScreen(targetAddress.entry._ScreenId_k__BackingField);
										if (bVar5) {
											return;
										}
										if (*targetAddress_00 != null) {
											pGVar2 = ((*targetAddress_00).fields)._Screens_k__BackingField;
											pSVar6 = new Action<string, GisketchView>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_c__DisplayClass3_0_Activate_g__OnScreenShown_0);
											if (pGVar2 != null) {
												pGVar2.remove_ScreenShown(pSVar6);
												return;
											}
										}
									}
								}
							}
							goto label_0539abd3;
						}
					}
					pGVar1 = *targetAddress_00;
					if ((pGVar1 != null) &&(pGVar2 = pGVar1._Screens_k__BackingField, pGVar2 != null)) {
						pGVar3 = targetAddress.entry;
						pGVar4 = pGVar2._active;
						__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchSearchActivator.d__4<FocusAfterBuild>));
						__this_00 = new Object();
						__this_00.__1__state = 0;
						__this_00.entry = pGVar3;
						__this_00.root = pGVar1;
						__this_00.view = pGVar4;
						pGVar1.StartCoroutine((IEnumerator)__this_00);
						return;
					}
				}
			}
		}
	label_0539abd3: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600074F")]
	[Address(RVA = "0x52A4A30", Offset = "0x52A3A30", VA = "0x52A4A30")]
	[IteratorStateMachine(typeof(_003CFocusAfterBuild_003Ed__4))]
	private static IEnumerator FocusAfterBuild(GisketchSearchEntry entry, GisketchUIRoot root, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$FocusAfterBuild): 1 lines keep C-only constructs
		GisketchSearchActivator.d__4<FocusAfterBuild> __this;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchSearchActivator.d__4<FocusAfterBuild>));
		__this = new Object();
		__this.__1__state = 0;
		__this.entry = entry;
		__this.root = root;
		__this.view = view;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x6000750")]
	[Address(RVA = "0x52A4AE0", Offset = "0x52A3AE0", VA = "0x52A4AE0")]
	[IteratorStateMachine(typeof(_003CFocusInView_003Ed__5))]
	public static IEnumerator FocusInView(GisketchSearchEntry entry, GisketchView view, bool playSpotlight)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$FocusInView): 1 lines keep C-only constructs
		GisketchSearchActivator.d__5<FocusInView> __this;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchSearchActivator.d__5<FocusInView>));
		__this = new Object();
		__this.__1__state = 0;
		__this.entry = entry;
		__this.view = view;
		__this.playSpotlight = playSpotlight;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x6000751")]
	[Address(RVA = "0x52A4B90", Offset = "0x52A3B90", VA = "0x52A4B90")]
	[IteratorStateMachine(typeof(_003CRevealUntilVisible_003Ed__6))]
	private static IEnumerator RevealUntilVisible(GisketchSearchEntry entry, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$RevealUntilVisible): 1 lines keep C-only constructs
		GisketchSearchActivator.d__6<RevealUntilVisible> __this;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchSearchActivator.d__6<RevealUntilVisible>));
		__this = new Object();
		__this.__1__state = 0;
		__this.entry = entry;
		__this.view = view;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x6000752")]
	[Address(RVA = "0x52A4C30", Offset = "0x52A3C30", VA = "0x52A4C30")]
	[IteratorStateMachine(typeof(_003CWaitForMotion_003Ed__7))]
	private static IEnumerator WaitForMotion()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$WaitForMotion): 1 lines keep C-only constructs
		GisketchSearchActivator.d__7<WaitForMotion> __this;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchSearchActivator.d__7<WaitForMotion>));
		__this = new Object();
		__this.__1__state = 0;
		return (IEnumerator)__this;
	}

	[Token(Token = "0x6000753")]
	[Address(RVA = "0x52A4CA0", Offset = "0x52A3CA0", VA = "0x52A4CA0")]
	private static GameObject Target(GisketchSearchEntry entry, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$Target): 1 lines keep C-only constructs
		uint uVar1;
		String value;
		Dictionary<object, object> __this;
		GameObject __this_00;
		bool bVar2;
		Object pUVar3;
		Transform root;
		Object local_30;

		if (entry == null) goto label_053a4e5c;
		pUVar3 = (Object)entry._Target_k__BackingField;
		bVar2 = (pUVar3 != null);
		if (bVar2) {
			return entry._Target_k__BackingField;
		}
		if (view == null) goto label_053a4e5c;
		value = entry._TargetId_k__BackingField;
		local_30 = null;
		bVar2 = String.IsNullOrEmpty(value);
		pUVar3 = null;
		if (bVar2) {
	label_053a4d81: ;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			__this = (Dictionary<object, object>)view._elements;
			if (__this == null) goto label_053a4e5c;
			bVar2 = __this.TryGetValue((object)value, (object*)&local_30);
			if (bVar2) {
				pUVar3 = local_30;
				goto label_053a4d81;
			}
			pUVar3 = null;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar2 = (pUVar3 != null);
		if (!bVar2) {
			pUVar3 = (Object)GisketchSearchActivator.MaterializeTarget(entry._TargetId_k__BackingField, view._Root_k__BackingField);
			bVar2 = (pUVar3 != null);
			if (!bVar2) {
				bVar2 = String.IsNullOrEmpty(entry._SectionId_k__BackingField);
				pUVar3 = (Object)view._Root_k__BackingField;
				if (!bVar2) {
					root = null;
					bVar2 = (pUVar3 != null);
					if (bVar2) {
						__this_00 = view._Root_k__BackingField;
						if (__this_00 == null) {
	label_053a4e5c: ;
							throw new NullReferenceException();
						}
						root = __this_00.transform;
					}
					pUVar3 = (Object)GisketchSearchActivator.FindSection(root, entry._SectionId_k__BackingField);
				}
			}
		}
		return (GameObject)pUVar3;
	}

	[Token(Token = "0x6000754")]
	[Address(RVA = "0x52A4E70", Offset = "0x52A3E70", VA = "0x52A4E70")]
	private static GameObject MaterializeTarget(string targetId, GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$MaterializeTarget): 4 lines keep C-only constructs
		uint uVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		Object x;
		bool bVar4;
		Object[] pSVar5;
		ulong uVar6;
		object obj;
		VirtualInvokeData pVVar7;
		long lVar8;
		ulong uVar9;
		Object local_38;

		local_38 = null;
		bVar4 = String.IsNullOrEmpty(targetId);
		if (!bVar4) {
			bVar4 = ((Object)root == null);
			if (!bVar4) {
				if (root != null) {
					pSVar5 = root.GetComponentsInChildren<MonoBehaviour>(true);
					if (pSVar5 != null) {
						if (0 < (int)pSVar5.Length) {
							uVar6 = pSVar5.Length & 0xffffffff;
							uVar9 = 0;
							do {
								if (uVar6 <= uVar9) {
									throw new IndexOutOfRangeException();
								}
								obj = (pSVar5[uVar9] as IGisketchSearchTargetMaterializer);
								if (obj != null) {
									pIVar2 = obj.klass;
									uVar6 = (ulong)(pIVar2._2).interface_offsets_count;
									if (uVar6 != 0) {
										pIVar3 = (pIVar2._1).interfaceOffsets;
										lVar8 = 0;
										do {
											if (*(IGisketchSearchTargetMaterializer*)((long)&pIVar3.interfaceType + lVar8) == typeof(IGisketchSearchTargetMaterializer)) {
												pVVar7 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar8);
												goto label_053a4ff2;
											}
											lVar8 = lVar8 + 0x10;
										} while (uVar6 * 0x10 != lVar8);
									}
									pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IGisketchSearchTargetMaterializer), 0);
	label_053a4ff2: ;
									bVar4 = (*pVVar7.methodPtr)(obj,targetId,(GameObject*)&local_38,pVVar7.method);
									x = local_38;
									if (bVar4) {
										bVar4 = (x != null);
										if (bVar4) {
											return (GameObject)local_38;
										}
									}
								}
								uVar9 = uVar9 + 1;
								uVar1 = (uint)pSVar5.Length;
								uVar6 = (ulong)uVar1;
							} while ((long)uVar9 < (long)(int)uVar1);
						}
						return null;
					}
				}
				throw new NullReferenceException();
			}
		}
		return null;
	}

	[Token(Token = "0x6000755")]
	[Address(RVA = "0x52A51B0", Offset = "0x52A41B0", VA = "0x52A51B0")]
	private static bool PrepareTarget(string targetId, GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$PrepareTarget): 4 lines keep C-only constructs
		uint uVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		bool bVar4;
		Object[] pSVar5;
		ulong uVar6;
		VirtualInvokeData pVVar7;
		object obj;
		ulong uVar8;
		long lVar9;

		bVar4 = String.IsNullOrEmpty(targetId);
		if (!bVar4) {
			bVar4 = ((Object)root == null);
			if (!bVar4) {
				if ((root == null) ||(pSVar5 = root.GetComponentsInChildren<MonoBehaviour>(true), pSVar5 == null)) {
					throw new NullReferenceException();
				}
				if (0 < (int)pSVar5.Length) {
					uVar6 = pSVar5.Length & 0xffffffff;
					uVar8 = 0;
					do {
						if (uVar6 <= uVar8) {
							throw new IndexOutOfRangeException();
						}
						obj = (pSVar5[uVar8] as IGisketchSearchTargetPreparer);
						if (obj != null) {
							pIVar2 = obj.klass;
							uVar6 = (ulong)(pIVar2._2).interface_offsets_count;
							if (uVar6 != 0) {
								pIVar3 = (pIVar2._1).interfaceOffsets;
								lVar9 = 0;
								do {
									if (*(IGisketchSearchTargetPreparer*)((long)&pIVar3.interfaceType + lVar9) == typeof(IGisketchSearchTargetPreparer)) {
										pVVar7 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar9);
										goto label_053a528d;
									}
									lVar9 = lVar9 + 0x10;
								} while (uVar6 * 0x10 != lVar9);
							}
							pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath(obj, (Il2CppClass)typeof(IGisketchSearchTargetPreparer), 0);
	label_053a528d: ;
							bVar4 = (*pVVar7.methodPtr)(obj,targetId,pVVar7.method);
							if (bVar4) {
								return true;
							}
						}
						uVar8 = uVar8 + 1;
						uVar1 = (uint)pSVar5.Length;
						uVar6 = (ulong)uVar1;
					} while ((long)uVar8 < (long)(int)uVar1);
				}
			}
		}
		return false;
	}

	[Token(Token = "0x6000756")]
	[Address(RVA = "0x52A5060", Offset = "0x52A4060", VA = "0x52A5060")]
	private static GameObject FindSection(Transform root, string sectionId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c (Gisketch.Aottg2UI.Actions.GisketchSearchActivator$$FindSection): clean
		bool bVar1;
		int iVar2;
		String value;
		String __this;
		GameObject pUVar3;
		Transform root_00;
		Object x;
		int index;

		bVar1 = ((Object)root == null);
		if (!bVar1) {
			value = String.Concat("-section-", sectionId);
			if ((root == null) ||(__this = root.name, __this == null)) {
				throw new NullReferenceException();
			}
			bVar1 = __this.EndsWith(value, 5);
			if (bVar1) {
				return pUVar3;
			}
			index = 0;
			iVar2 = root.childCount;
			if (0 < iVar2) {
				do {
					root_00 = root.GetChild(index);
					x = (Object)GisketchSearchActivator.FindSection(root_00, sectionId);
					bVar1 = (x != null);
					if (bVar1) {
						return (GameObject)x;
					}
					index = index + 1;
					iVar2 = root.childCount;
				} while (index < iVar2);
			}
		}
		return null;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Actions/GisketchSearchActivator.c.

	// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<>c__DisplayClass3_0$$.ctor: clean
	private void c__DisplayClass3_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Actions.GisketchSearchActivator.<>c__DisplayClass3_0$$<Activate>g__OnScreenShown|0: 2 lines keep C-only constructs
	private void c__DisplayClass3_0__Activate_g__OnScreenShown_0(String screenId, GisketchView view)
	{
		GisketchSearchEntry pGVar1;
		GisketchUIRoot pGVar2;
		GisketchScreenRouter __this_00;
		bool bVar3;
		Action<string, GisketchView> __this_01;
		GisketchSearchActivator.d__4<FocusAfterBuild> __this_02;

		pGVar1 = this.entry;
		if (pGVar1 != null) {
			bVar3 = String.Equals(screenId, pGVar1._ScreenId_k__BackingField, 5);
			if (!bVar3) {
				return;
			}
			pGVar2 = this.root;
			if (pGVar2 != null) {
				__this_00 = pGVar2._Screens_k__BackingField;
				__this_01 = new Action<string, GisketchView>((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Actions_GisketchSearchActivator_c__DisplayClass3_0_Activate_g__OnScreenShown_0);
				if (__this_00 != null) {
					__this_00.remove_ScreenShown(__this_01);
					pGVar1 = this.entry;
					pGVar2 = this.root;
					__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchSearchActivator.d__4<FocusAfterBuild>));
					__this_02 = new Object();
					__this_02.__1__state = 0;
					__this_02.entry = pGVar1;
					__this_02.root = pGVar2;
					__this_02.view = view;
					if (pGVar2 != null) {
						pGVar2.StartCoroutine((IEnumerator)__this_02);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}
}
