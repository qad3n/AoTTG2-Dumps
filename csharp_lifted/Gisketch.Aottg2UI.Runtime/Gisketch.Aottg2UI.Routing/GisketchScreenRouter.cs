// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Routing.GisketchScreenRouter
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using DG.Tweening;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine;

namespace Gisketch.Aottg2UI.Routing;

[Token(Token = "0x2000042")]
public sealed class GisketchScreenRouter
{
	[Token(Token = "0x2000046")]
	[CompilerGenerated]
	private sealed class _003CActivateNextFrame_003Ed__41 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000156")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000157")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000158")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public GisketchScreenRouter _003C_003E4__this;

		[Token(Token = "0x4000159")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public GisketchScreenDefinition screen;

		[Token(Token = "0x400015A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public string id;

		[Token(Token = "0x1700003C")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x600027B")]
			[Address(RVA = "0x5251780", Offset = "0x5250780", VA = "0x5251780", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__41$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700003D")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600027D")]
			[Address(RVA = "0x52517D0", Offset = "0x52507D0", VA = "0x52517D0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__41$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6000278")]
		[Address(RVA = "0x5250F00", Offset = "0x524FF00", VA = "0x5250F00")]
		[DebuggerHidden]
		public _003CActivateNextFrame_003Ed__41(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__41$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6000279")]
		[Address(RVA = "0x52516F0", Offset = "0x52506F0", VA = "0x52516F0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__41$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x600027A")]
		[Address(RVA = "0x5251700", Offset = "0x5250700", VA = "0x5251700", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__41$$MoveNext): clean
			int iVar1;
			GisketchScreenRouter __this_00;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				this.__2__current = null;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				__this_00 = this.__4__this;
				this.__1__state = -1;
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				__this_00._pendingActivation = null;
				__this_00.Activate(this.screen, this.id);
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x600027C")]
		[Address(RVA = "0x5251790", Offset = "0x5250790", VA = "0x5251790", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<ActivateNextFrame>d__41$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_ActivateNextFrame_d__41_System_Collections_IEnume);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000047")]
	[CompilerGenerated]
	private sealed class _003CPrewarmCachedScreen_003Ed__39 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x400015B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x400015C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x400015D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public GisketchScreenRouter _003C_003E4__this;

		[Token(Token = "0x400015E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public string id;

		[Token(Token = "0x400015F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public GisketchScreenDefinition screen;

		[Token(Token = "0x4000160")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public int keepAliveFrames;

		[Token(Token = "0x4000161")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private long _003CstartMs_003E5__2;

		[Token(Token = "0x4000162")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private GisketchView _003Cview_003E5__3;

		[Token(Token = "0x4000163")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
		private int _003Cframes_003E5__4;

		[Token(Token = "0x4000164")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x54")]
		private int _003Ci_003E5__5;

		[Token(Token = "0x1700003E")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000281")]
			[Address(RVA = "0x5251E90", Offset = "0x5250E90", VA = "0x5251E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmCachedScreen>d__39$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700003F")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000283")]
			[Address(RVA = "0x5251EE0", Offset = "0x5250EE0", VA = "0x5251EE0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmCachedScreen>d__39$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x600027E")]
		[Address(RVA = "0x5250E40", Offset = "0x524FE40", VA = "0x5250E40")]
		[DebuggerHidden]
		public _003CPrewarmCachedScreen_003Ed__39(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmCachedScreen>d__39$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x600027F")]
		[Address(RVA = "0x52517E0", Offset = "0x52507E0", VA = "0x52517E0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmCachedScreen>d__39$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6000280")]
		[Address(RVA = "0x52517F0", Offset = "0x52507F0", VA = "0x52517F0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmCachedScreen>d__39$$MoveNext): 11 lines keep C-only constructs
			GisketchView* targetAddress;
			GisketchScreenRouter __this_00;
			Dictionary<object, object> pSVar1;
			Object pUVar2;
			Stopwatch pSVar3;
			GisketchScreenDefinition screen;
			GisketchBuildContext context;
			GameObject pUVar4;
			bool bVar5;
			int iVar6;
			long iVar7;
			GisketchView pGVar8;
			Transform pUVar9;
			GisketchScreenRouter __this_01;
			String str2;
			String pSVar10;
			int iVar11;
			GisketchView view;
			String* __this_02;
			object pIStack_40;
			long lStack_38;

			__this_02 = (String*)this;
			if (Il2CppMethodInitialized_07542923 == false) {
				__this_02 = &" elapsed=";
				Il2CppMethodInitialized_07542923 = true;
			}
			pIStack_40 = null;
			iVar6 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar6 == 1) {
				this.__1__state = -1;
				iVar6 = this._i_5__5 + 1;
				this._i_5__5 = iVar6;
				if (iVar6 < this._frames_5__4) {
					if (__this_00 == null) goto label_05351e06;
					pGVar8 = __this_00._prewarmCachedView;
					view = this._view_5__3;
					if (pGVar8 == view) goto label_05351d3c;
					goto label_053519d7;
				}
				if (__this_00 == null) goto label_05351e06;
				view = this._view_5__3;
				if (__this_00._prewarmCachedView != view) {
					return false;
				}
			}
			else {
				if (iVar6 != 0) {
					return false;
				}
				this.__1__state = -1;
				if ((__this_00 == null) ||(pSVar1 = (Dictionary<object, object>)__this_00._screenCache, pSVar1 == null)) goto label_05351e06;
				bVar5 = pSVar1.TryGetValue((object)this.id, ref pIStack_40);
				if ((bVar5) && (pIStack_40 != null)) {
					pUVar2 = pIStack_40[1].monitor;
					bVar5 = (pUVar2 != null);
					if (bVar5) {
						return false;
					}
				}
				__this_00.CancelPrewarm("replace");
				if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
					if (Il2CppMethodInitialized_075429aa == false) goto label_05351aae;
		label_05351977: ;
					if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor != 0) goto label_05351987;
		label_05351ad1: ;
					pSVar3 = GisketchUiPerfLog.Clock;
				}
				else {
					if (Il2CppMethodInitialized_075429aa != false) goto label_05351977;
		label_05351aae: ;
					Il2CppMethodInitialized_075429aa = true;
					if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) goto label_05351ad1;
		label_05351987: ;
					pSVar3 = GisketchUiPerfLog.Clock;
				}
				if (pSVar3 == null) goto label_05351e06;
				iVar7 = pSVar3.ElapsedMilliseconds;
				this._startMs_5__2 = iVar7;
				GisketchUiPerfLog.Mark("ScreenPrewarm.StartCached", this.id) ;
				screen = this.screen;
				context = __this_00._context;
				pUVar9 = __this_00._screenLayer;
				pGVar8 = GisketchScreenBuilder.BuildView(screen, pUVar9, context);
				targetAddress = &this._view_5__3;
				this._view_5__3 = pGVar8;
				pGVar8 = this._view_5__3;
				if (pGVar8 == null) {
					return false;
				}
				pUVar2 = (Object)pGVar8._Root_k__BackingField;
				bVar5 = (pUVar2 == null);
				if (bVar5) {
					return false;
				}
				pSVar1 = (Dictionary<object, object>)__this_00._screenCache;
				if (pSVar1 == null) goto label_05351e06;
				pSVar1.set_Item((object)this.id, (object)this._view_5__3);
				__this_00._prewarmCachedView = this._view_5__3;
				pGVar8 = this._view_5__3;
				if (pGVar8 == null) goto label_05351e06;
				__this_00._prewarmHost = pGVar8._Root_k__BackingField;
				__this_00._prewarmId = this.id;
				pGVar8 = this._view_5__3;
				if (((pGVar8 == null) ||(pUVar4 = pGVar8._Root_k__BackingField, pUVar4 == null)) ||(pUVar9 = pUVar4.transform, pUVar9 == null)) goto label_05351e06;
				pUVar9.SetAsFirstSibling();
				if ((*targetAddress == null) ||(pUVar4 = ((*targetAddress).fields)._Root_k__BackingField, pUVar4 == null)) goto label_05351e06;
				pUVar4.SetActive(true);
				if (*targetAddress == null) goto label_05351e06;
				pUVar4 = ((*targetAddress).fields)._Root_k__BackingField;
				if ((typeof(GisketchScreenRouter)._2).cctor_finished_or_no_cctor == 0) {
				}
				GisketchScreenRouter.SetInputLocked(pUVar4, true);
				if (*targetAddress == null) goto label_05351e06;
				GisketchScreenRouter.SetRaycasterEnabled(((*targetAddress).fields)._Root_k__BackingField, false);
				if ((*targetAddress == null) ||(pUVar4 = ((*targetAddress).fields)._Root_k__BackingField, pUVar4 == null)) goto label_05351e06;
				__this_01 = (GisketchScreenRouter)pUVar4.GetComponent<CanvasGroup>();
				__this_02 = (String*)__this_01;
				bVar5 = ((Object)__this_01 != null);
				if (bVar5) {
					if (__this_01 == null) goto label_05351e06;
					__this_01.alpha = 0.0;
					__this_02 = (String*)__this_01;
				}
				iVar6 = this.keepAliveFrames;
				iVar11 = 1;
				if (1 < iVar6) {
					iVar11 = iVar6;
				}
				this._frames_5__4 = iVar11;
				this._i_5__5 = 0;
				pGVar8 = __this_00._prewarmCachedView;
				view = this._view_5__3;
				if (pGVar8 == view) {
		label_05351d3c: ;
					this.__2__current = null;
					this.__1__state = 1;
					return true;
				}
		label_053519d7: ;
				if (pGVar8 != view) {
					return false;
				}
			}
			__this_02.HideCachedView(view);
			__this_00._prewarmCachedView = null;
			__this_00._prewarmHost = null;
			__this_00._prewarmId = null;
			pSVar10 = this.id;
			if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
				if (Il2CppMethodInitialized_075429aa == false) goto label_05351d73;
		label_05351a73: ;
				if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor != 0) goto label_05351a83;
		label_05351d96: ;
				il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
				pSVar3 = GisketchUiPerfLog.Clock;
			}
			else {
				if (Il2CppMethodInitialized_075429aa != false) goto label_05351a73;
		label_05351d73: ;
				Il2CppMethodInitialized_075429aa = true;
				if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) goto label_05351d96;
		label_05351a83: ;
				pSVar3 = GisketchUiPerfLog.Clock;
			}
			if (pSVar3 != null) {
				iVar7 = pSVar3.ElapsedMilliseconds;
				lStack_38 = iVar7 - this._startMs_5__2;
				str2 = lStack_38.ToString();
				pSVar10 = String.Concat(pSVar10, " elapsed=", str2, "ms");
				GisketchUiPerfLog.Mark("ScreenPrewarm.CompleteCached", pSVar10);
				return false;
			}
		label_05351e06: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6000282")]
		[Address(RVA = "0x5251EA0", Offset = "0x5250EA0", VA = "0x5251EA0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmCachedScreen>d__39$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_PrewarmCachedScreen_d__39_System_Collections_IEnu);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x2000048")]
	[CompilerGenerated]
	private sealed class _003CPrewarmScreen_003Ed__37 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000165")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000166")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000167")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public string id;

		[Token(Token = "0x4000168")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public GisketchScreenRouter _003C_003E4__this;

		[Token(Token = "0x4000169")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public int keepAliveFrames;

		[Token(Token = "0x400016A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		private long _003CstartMs_003E5__2;

		[Token(Token = "0x400016B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		private GameObject _003Chost_003E5__3;

		[Token(Token = "0x400016C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
		private int _003Cframes_003E5__4;

		[Token(Token = "0x400016D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
		private int _003Ci_003E5__5;

		[Token(Token = "0x17000040")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000288")]
			[Address(RVA = "0x5252760", Offset = "0x5251760", VA = "0x5252760", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__37$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000041")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600028A")]
			[Address(RVA = "0x52527B0", Offset = "0x52517B0", VA = "0x52527B0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__37$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6000284")]
		[Address(RVA = "0x5250C80", Offset = "0x524FC80", VA = "0x5250C80")]
		[DebuggerHidden]
		public _003CPrewarmScreen_003Ed__37(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__37$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6000285")]
		[Address(RVA = "0x5251EF0", Offset = "0x5250EF0", VA = "0x5251EF0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__37$$System.IDisposable.Dispose): clean
			int iVar1;

			iVar1 = this.__1__state;
			if ((iVar1 == 2) || (iVar1 == -3)) {
				this.__m__Finally1();
				return;
			}
			return;
		}

		[Token(Token = "0x6000286")]
		[Address(RVA = "0x5251F10", Offset = "0x5250F10", VA = "0x5251F10", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__37$$MoveNext): 4 lines keep C-only constructs
			GisketchScreenRouter __this_00;
			GisketchBuildContext pGVar1;
			GisketchManifestDefinition __this_01;
			Object x;
			Stopwatch __this_02;
			Il2CppType handle;
			bool bVar3;
			int iVar4;
			GisketchScreenDefinition screen;
			long iVar5;
			String pSVar6;
			Type[] components;
			Type value;
			GameObject pUVar7;
			Transform pUVar8;
			RectTransform rect;
			CanvasGroup __this_03;
			GisketchView pGVar9;
			String str2;
			object pIVar10;
			int iVar11;
			GameObject pUVar12;
			GisketchScreenRouter.d__37<PrewarmScreen> pGStack_50;
			long lStack_48;
			GisketchScreenRouter.d__37<PrewarmScreen>* ppGStack_40;
			long iStack_38;

			pGStack_50 = this;
			iStack_38 = 0;
			lStack_48 = 0;
			ppGStack_40 = &pGStack_50;
			iVar4 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar4 == 2) {
				this.__1__state = -3;
				iVar4 = this._i_5__5 + 1;
				this._i_5__5 = iVar4;
				if (this._frames_5__4 <= iVar4) {
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					pUVar7 = __this_00._prewarmHost;
					pUVar12 = this._host_5__3;
					goto label_05352487;
				}
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
			}
			else {
				if (iVar4 == 1) {
					this.__1__state = -1;
					return false;
				}
				if (iVar4 != 0) {
					return false;
				}
				this.__1__state = -1;
				bVar3 = Application.isPlaying;
				if (!bVar3) {
					return false;
				}
				bVar3 = String.IsNullOrEmpty(pGStack_50.id);
				if (bVar3) {
					return false;
				}
				if (__this_00 == null) {
					throw new NullReferenceException();
				}
				pUVar8 = __this_00._screenLayer;
				bVar3 = ((Object)pUVar8 == null);
				if (bVar3) {
					return false;
				}
				bVar3 = String.Equals(__this_00._activeId, pGStack_50.id, 5);
				if (bVar3) {
					return false;
				}
				bVar3 = String.Equals(__this_00._pendingId, pGStack_50.id, 5);
				if (bVar3) {
					return false;
				}
				pGVar1 = __this_00._context;
				if (pGVar1 == null) {
					throw new NullReferenceException();
				}
				__this_01 = pGVar1.Manifest;
				if (__this_01 == null) {
					throw new NullReferenceException();
				}
				screen = __this_01.FindScreen(pGStack_50.id);
				if (screen == null) {
					return false;
				}
				if (screen.lifecycle != 1) {
					pIVar10 = (object)__this_00.PrewarmCachedScreen(screen, pGStack_50.id, pGStack_50.keepAliveFrames);
					pGStack_50.__2__current = pIVar10;
					pGStack_50.__1__state = 1;
					return true;
				}
				__this_00.CancelPrewarm("replace");
				iVar5 = GisketchUiPerfLog.NowMs();
				pGStack_50._startMs_5__2 = iVar5;
				pSVar6 = String.Concat("AoTTG Prewarm ", pGStack_50.id);
				components = (Type[])new Type[1];
				handle = TypeRef_UnityEngine_RectTransform;
				value = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
				if (components == null) {
					throw new NullReferenceException();
				}
				il2cpp_codegen_array_element_type_check((Array)components, (object)value);
				il2cpp_runtime_helper_02ad5c00(components, 0, value);
				pUVar7 = new GameObject(pSVar6, components);
				pGStack_50._host_5__3 = pUVar7;
				pUVar7 = pGStack_50._host_5__3;
				if (pUVar7 == null) {
					throw new NullReferenceException();
				}
				pUVar8 = pUVar7.transform;
				if (pUVar8 == null) {
					throw new NullReferenceException();
				}
				pUVar8.SetParent(__this_00._screenLayer, false);
				pUVar7 = pGStack_50._host_5__3;
				if (pUVar7 == null) {
					throw new NullReferenceException();
				}
				pUVar8 = pUVar7.transform;
				if (pUVar8 == null) {
					throw new NullReferenceException();
				}
				pUVar8.SetAsFirstSibling();
				pUVar7 = pGStack_50._host_5__3;
				if (pUVar7 == null) {
					throw new NullReferenceException();
				}
				rect = pUVar7.GetComponent<RectTransform>();
				GisketchScreenRouter.Stretch(rect);
				pUVar7 = pGStack_50._host_5__3;
				if (pUVar7 == null) {
					throw new NullReferenceException();
				}
				__this_03 = pUVar7.AddComponent<CanvasGroup>();
				if (__this_03 == null) {
					throw new NullReferenceException();
				}
				__this_03.alpha = 0.0;
				__this_03.interactable = false;
				__this_03.blocksRaycasts = false;
				__this_00._prewarmHost = pGStack_50._host_5__3;
				__this_00._prewarmId = pGStack_50.id;
				GisketchUiPerfLog.Mark("ScreenPrewarm.Start", pGStack_50.id);
				pGStack_50.__1__state = -3;
				pUVar7 = pGStack_50._host_5__3;
				if (pUVar7 == null) {
					throw new NullReferenceException();
				}
				method = (MethodInfo)pUVar7.transform;
				pGVar1 = __this_00._context;
				pGVar9 = GisketchScreenBuilder.BuildView(screen, (Transform)method, pGVar1);
				if (pGVar9 != null) {
					x = (Object)pGVar9._Root_k__BackingField;
					method = null;
					bVar3 = (x != null);
					if (bVar3) {
						pUVar7 = pGVar9._Root_k__BackingField;
						if (pUVar7 == null) {
							throw new NullReferenceException();
						}
						method = (MethodInfo)0x1;
						pUVar7.SetActive(true);
					}
				}
				iVar4 = pGStack_50.keepAliveFrames;
				iVar11 = 1;
				if (1 < iVar4) {
					iVar11 = iVar4;
				}
				pGStack_50._frames_5__4 = iVar11;
				pGStack_50._i_5__5 = 0;
				this = pGStack_50;
			}
			pUVar7 = __this_00._prewarmHost;
			pUVar12 = this._host_5__3;
			if (pUVar7 == pUVar12) {
				this.__2__current = null;
				pGStack_50.__1__state = 2;
				return true;
			}
		label_05352487: ;
			if (pUVar7 == pUVar12) {
				pSVar6 = this.id;
				__this_02 = GisketchUiPerfLog.Clock;
				if (__this_02 == null) {
					throw new NullReferenceException();
				}
				iVar5 = __this_02.ElapsedMilliseconds;
				iStack_38 = iVar5 - pGStack_50._startMs_5__2;
				str2 = iStack_38.ToString();
				method = (MethodInfo)String.Concat(pSVar6, " elapsed=", str2, "ms");
				GisketchUiPerfLog.Mark("ScreenPrewarm.Complete", (String)method);
				this = pGStack_50;
			}
			this.__m__Finally1();
			if (lStack_48 != 0) {
				il2cpp_runtime_helper_02d4b050(*ppGStack_40);
				throw;
			}
			return false;
		}

		[Token(Token = "0x6000287")]
		[Address(RVA = "0x52526B0", Offset = "0x52516B0", VA = "0x52526B0")]
		private void _003C_003Em__Finally1()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__37$$<>m__Finally1): clean
			GisketchScreenRouter pGVar1;
			GameObject root;

			this.__1__state = -1;
			pGVar1 = this.__4__this;
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			root = pGVar1._prewarmHost;
			if (root != this._host_5__3) {
				return;
			}
			GisketchScreenRouter.DestroyRoot(root);
			pGVar1._prewarmHost = null;
			pGVar1._prewarmId = null;
			return;
		}

		[Token(Token = "0x6000289")]
		[Address(RVA = "0x5252770", Offset = "0x5251770", VA = "0x5252770", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<PrewarmScreen>d__37$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_PrewarmScreen_d__37_System_Collections_IEnumerato);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x400013C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly ProfilerMarker ShowScreenMarker;

	[Token(Token = "0x400013D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly MonoBehaviour _runner;

	[Token(Token = "0x400013E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly GisketchBuildContext _context;

	[Token(Token = "0x400013F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly Transform _screenLayer;

	[Token(Token = "0x4000140")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly Dictionary<string, GisketchView> _screenCache;

	[Token(Token = "0x4000141")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private GisketchView _active;

	[Token(Token = "0x4000142")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private string _activeId;

	[Token(Token = "0x4000143")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string _pendingId;

	[Token(Token = "0x4000144")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private Coroutine _pendingActivation;

	[Token(Token = "0x4000145")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private Tween _outgoingExit;

	[Token(Token = "0x4000146")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private GisketchView _outgoingView;

	[Token(Token = "0x4000147")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private string _outgoingId;

	[Token(Token = "0x4000148")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private GameObject _prewarmHost;

	[Token(Token = "0x4000149")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private GisketchView _prewarmCachedView;

	[Token(Token = "0x400014A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private string _prewarmId;

	[Token(Token = "0x400014C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	[CompilerGenerated]
	private Action<string, GisketchView> m_ScreenShown;

	[Token(Token = "0x17000037")]
	public GisketchView Active
	{
		[Token(Token = "0x600024C")]
		[Address(RVA = "0x524D860", Offset = "0x524C860", VA = "0x524D860")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$get_Active): clean
			return this._active;
		}
	}

	[Token(Token = "0x17000038")]
	public string ActiveId
	{
		[Token(Token = "0x600024D")]
		[Address(RVA = "0x524D870", Offset = "0x524C870", VA = "0x524D870")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$get_ActiveId): clean
			return this._activeId;
		}
	}

	[Token(Token = "0x17000039")]
	public bool IsTransitioning
	{
		[Token(Token = "0x600024E")]
		[Address(RVA = "0x524D880", Offset = "0x524C880", VA = "0x524D880")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$get_IsTransitioning): clean
			Tween t;
			bool bVar1;

			if (this._pendingActivation != null) {
				return true;
			}
			t = this._outgoingExit;
			if (t == null) {
				return false;
			}
			return bVar1;
		}
	}

	[Token(Token = "0x1700003A")]
	public bool IsPrewarming
	{
		[Token(Token = "0x600024F")]
		[Address(RVA = "0x524D8A0", Offset = "0x524C8A0", VA = "0x524D8A0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$get_IsPrewarming): clean
			Object x;
			bool bVar1;
			bool bVar2;

			x = (Object)this._prewarmHost;
			bVar1 = (x != null);
			if (!bVar1) {
				bVar2 = this._prewarmCachedView != null;
			}
			return bVar2;
		}
	}

	[Token(Token = "0x1700003B")]
	public Func<string, bool> CanShowScreen
	{
		[Token(Token = "0x6000250")]
		[Address(RVA = "0x524D910", Offset = "0x524C910", VA = "0x524D910")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$get_CanShowScreen): clean
			return this._CanShowScreen_k__BackingField;
		}
		[Token(Token = "0x6000251")]
		[Address(RVA = "0x524D920", Offset = "0x524C920", VA = "0x524D920")]
		[CompilerGenerated]
		set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$set_CanShowScreen): clean
			this._CanShowScreen_k__BackingField = value;
			return;
		}
	}

	[Token(Token = "0x14000002")]
	public event Action<string, GisketchView> ScreenShown
	{
		[Token(Token = "0x6000252")]
		[Address(RVA = "0x524D930", Offset = "0x524C930", VA = "0x524D930")]
		[CompilerGenerated]
		add
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$add_ScreenShown): 1 lines keep C-only constructs
			Action<string, GisketchView> pSVar2;
			Delegate obj;
			object value_00;
			Action<string, GisketchView> a;
			bool bVar3;

			a = this.ScreenShown;
			do {
				obj = Delegate.Combine((Delegate)a, (Delegate)value);
				value_00 = null;
				if (obj != null) {
					value_00 = ((object)obj as Action<string, GisketchView>);
					if (value_00 == null) {
						throw new InvalidCastException();
					}
				}
				pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&this.ScreenShown, value_00, a);
				bVar3 = pSVar2 != a;
				a = pSVar2;
			} while (bVar3);
			return;
		}
		[Token(Token = "0x6000253")]
		[Address(RVA = "0x524D9E0", Offset = "0x524C9E0", VA = "0x524D9E0")]
		[CompilerGenerated]
		remove
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$remove_ScreenShown): 1 lines keep C-only constructs
			Action<string, GisketchView> pSVar2;
			Delegate obj;
			object value_00;
			Action<string, GisketchView> source;
			bool bVar3;

			source = this.ScreenShown;
			do {
				obj = Delegate.Remove((Delegate)source, (Delegate)value);
				value_00 = null;
				if (obj != null) {
					value_00 = ((object)obj as Action<string, GisketchView>);
					if (value_00 == null) {
						throw new InvalidCastException();
					}
				}
				pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&this.ScreenShown, value_00, source);
				bVar3 = pSVar2 != source;
				source = pSVar2;
			} while (bVar3);
			return;
		}
	}

	[Token(Token = "0x600024B")]
	[Address(RVA = "0x524D6F0", Offset = "0x524C6F0", VA = "0x524D6F0")]
	public GisketchScreenRouter(Transform screenLayer, GisketchBuildContext context, [Optional] MonoBehaviour runner)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$.ctor): 1 lines keep C-only constructs
		uint uVar1;
		OrdinalIgnoreCaseComparer comparer;
		Dictionary<string, GisketchView> __this_00;

		if (Il2CppMethodInitialized_07542900 == false) {
			Il2CppMethodInitialized_07542900 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		comparer = StringComparer.s_ordinalIgnoreCase;
		__this_00 = new Dictionary<string, GisketchView>((System_Collections_Generic_IEqualityComparer_TKey__o)comparer);
		this._screenCache = __this_00;
		base();
		this._screenLayer = screenLayer;
		this._context = context;
		this._runner = runner;
		return;
	}

	[Token(Token = "0x6000254")]
	[Address(RVA = "0x524DA90", Offset = "0x524CA90", VA = "0x524DA90")]
	public bool ShowScreen(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$ShowScreen): 16 lines keep C-only constructs
		String* targetAddress;
		Gisketch_Aottg2UI_Routing_GisketchScreenRouter_StaticFields markerPtr;
		GisketchBuildContext pGVar1;
		GisketchManifestDefinition __this_00;
		Func<string, bool> pSVar2;
		bool bVar3;
		sbyte cVar4;
		String pSVar5;
		GisketchScreenDefinition screen;
		MethodInfo method_00;
		Gisketch_Aottg2UI_Routing_GisketchScreenRouter_StaticFields local_90;
		GisketchUiPerfLog.Scope local_88;
		Gisketch_Aottg2UI_Routing_GisketchScreenRouter_StaticFields local_60;
		GisketchUiPerfLog.Scope local_58;

		local_90.ShowScreenMarker.m_Ptr =(ProfilerMarker)(ProfilerMarker)0x0;
		local_58._startMs._0_4_ = 0;
		local_58._startMs._4_2_ = 0;
		local_58._startMs._6_2_ = 0;
		local_58._enabled = false;
		local_58._hotLoop = false;
		local_58._26_6_ = 0;
		local_58._area = null;
		local_58._detail = null;
		markerPtr.ShowScreenMarker.m_Ptr =(ProfilerMarker)(GisketchScreenRouter.ShowScreenMarker).m_Ptr ;
		if (markerPtr.ShowScreenMarker.m_Ptr != (ProfilerMarker)0x0) {
			ProfilerUnsafeUtility.BeginSample((intptr_t)markerPtr.ShowScreenMarker.m_Ptr);
		}
		local_60 = &local_90;
		local_90.ShowScreenMarker.m_Ptr = markerPtr.ShowScreenMarker.m_Ptr;
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_88._area = null;
		local_88._detail = null;
		local_88._startMs._0_4_ = 0;
		local_88._startMs._4_2_ = 0;
		local_88._startMs._6_2_ = 0;
		local_88._enabled = false;
		local_88._hotLoop = false;
		local_88._26_6_ = 0;
		local_88 = new GisketchUiPerfLog.Scope("ScreenRouter.ShowScreen", id);
		local_58._startMs = local_88._startMs;
		local_58._enabled = local_88._enabled;
		local_58._hotLoop = local_88._hotLoop;
		local_58._26_6_ = local_88._26_6_;
		local_58._area = local_88._area;
		local_58._detail = local_88._detail;
		local_88._area = null;
		local_88._detail = (String)&local_58;
		pSVar5 = String.Concat("find screen active=", this._activeId, " pending=", this._pendingId);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GisketchUiPerfLog.Mark("ScreenRouter.ShowScreen", pSVar5);
		pGVar1 = this._context;
		if (pGVar1 == null) {
			throw new NullReferenceException();
		}
		__this_00 = pGVar1.Manifest;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		screen = __this_00.FindScreen(id);
		if (screen == null) {
			pSVar5 = String.Concat("missing ", id);
			if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			}
			GisketchUiPerfLog.Mark("ScreenRouter.ShowScreen", pSVar5);
			pSVar5 = String.Concat("Gisketch screen not found: ", id);
			screen = null;
			Debug.LogWarning((object)pSVar5);
	label_0534dd6c: ;
			bVar3 = false;
			goto label_0534dd71;
		}
		bVar3 = String.Equals(this._activeId, id, 5);
		if (bVar3) {
	label_0534dcac: ;
			screen = (GisketchScreenDefinition)String.Concat("skip duplicate ", id);
			if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			}
			GisketchUiPerfLog.Mark("ScreenRouter.ShowScreen", (String)screen);
		}
		else {
			targetAddress = &this._pendingId;
			bVar3 = String.Equals(*targetAddress, id, 5);
			if (bVar3) goto label_0534dcac;
			pSVar2 = this._CanShowScreen_k__BackingField;
			if ((pSVar2 != null) &&(cVar4 = (*(code)pSVar2.invoke_impl)(pSVar2.method_code,id,pSVar2.method), cVar4 == false)) {
				screen = (GisketchScreenDefinition)String.Concat("blocked ", id);
				if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
				}
				GisketchUiPerfLog.Mark("ScreenRouter.ShowScreen", (String)screen);
				goto label_0534dd6c;
			}
			method_00 = (MethodInfo)String.Concat("route ", id);
			this.CancelPrewarm((String)method_00);
			this.CancelTransition();
			*targetAddress = id;
			this.ShowPrepared(screen, id);
		}
		bVar3 = true;
	label_0534dd71: ;
		local_58.Dispose();
		if (local_90.ShowScreenMarker.m_Ptr != (ProfilerMarker)0x0) {
			ProfilerUnsafeUtility.EndSample((intptr_t)local_90.ShowScreenMarker.m_Ptr);
		}
		return bVar3;
	}

	[Token(Token = "0x6000255")]
	[Address(RVA = "0x524EA00", Offset = "0x524DA00", VA = "0x524EA00")]
	public bool Back()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$Back): 3 lines keep C-only constructs
		GisketchBuildContext pGVar1;
		GisketchManifestDefinition pGVar2;
		object obj;
		GisketchView pGVar3;
		GisketchActionContext context;
		bool bVar6;
		GisketchScreenDefinition pGVar7;
		String elementId;
		GameObject gameObject;
		String pSVar11;
		GisketchActionContext local_68;
		String local_48;
		GameObject pUStack_40;
		GisketchNodeDefinition local_38;
		int iStack_30;
		uint uStack_2c;

		pGVar1 = this._context;
		if ((pGVar1 == null) ||(pGVar2 = pGVar1.Manifest, pGVar2 == null )) {
	label_0534ec02: ;
			throw new NullReferenceException();
		}
		pGVar7 = pGVar2.FindScreen(this._activeId);
		if (pGVar7 == null) {
			pSVar11 = null;
		}
		else {
			bVar6 = String.IsNullOrEmpty(pGVar7.backActionId);
			if (!bVar6) {
				pGVar1 = this._context;
				if (pGVar1 != null) {
					obj = (object)pGVar1.Actions;
					pSVar11 = pGVar7.backActionId;
					gameObject = null;
					elementId = String.Concat(pGVar7.id, "-back") ;
					pGVar3 = this._active;
					if (pGVar3 != null) {
						gameObject = pGVar3._Root_k__BackingField;
					}
					local_68.Node = null;
					local_68.InputSource = 0;
					local_68._28_4_ = 0;
					local_68.ElementId = null;
					local_68.GameObject = null;
					local_68 = new GisketchActionContext(elementId, gameObject, pGVar7.root, 2);
					if (obj != null) {
						local_38 = local_68.Node;
						iStack_30 = local_68.InputSource;
						uStack_2c = local_68._28_4_;
						local_48 = local_68.ElementId;
						pUStack_40 = local_68.GameObject;
						context.GameObject = pUStack_40;
						context.ElementId = local_48;
						context.Node = local_38;
						context.InputSource = iStack_30;
						context._28_4_ = uStack_2c;
						obj.HandleAction(pSVar11, context);
						return true;
					}
				}
				goto label_0534ec02;
			}
			pSVar11 = pGVar7.backScreenId;
		}
		bVar6 = String.IsNullOrEmpty(pSVar11);
		if ((!bVar6) &&(bVar6 = String.Equals(pSVar11, this._activeId, 5), !bVar6)) {
			pGVar1 = this._context;
			if ((pGVar1 == null) ||(pGVar2 = pGVar1.Manifest, pGVar2 == null)) goto label_0534ec02;
			pGVar7 = pGVar2.FindScreen(pSVar11);
			if (pGVar7 != null) {
				bVar6 = this.ShowScreen(pSVar11);
				return bVar6;
			}
		}
		return false;
	}

	[Token(Token = "0x6000256")]
	[Address(RVA = "0x524EC10", Offset = "0x524DC10", VA = "0x524EC10")]
	public bool RefreshNode(string nodeId, GisketchNodeDefinition replacement, [Optional] GisketchNodeRefreshOptions options)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$RefreshNode): clean
		GisketchView pGVar1;
		GisketchBuildContext context;
		MonoBehaviour pUVar2;
		bool bVar3;
		int index;
		Object pUVar4;
		Transform pUVar5;
		GisketchScrollSnapshot __this_00;
		String focusId;
		Transform __this_01;
		GameObject pUVar6;
		IEnumerator routine;

		pGVar1 = this._active;
		if (pGVar1 == null) {
			return false;
		}
		pUVar4 = (Object)pGVar1._Root_k__BackingField;
		bVar3 = (pUVar4 == null);
		if (replacement == null) {
			return false;
		}
		if (bVar3) {
			return false;
		}
		bVar3 = String.Equals(replacement.id, nodeId, 5);
		if (!bVar3) {
			return false;
		}
		pGVar1 = this._active;
		if (pGVar1 == null) goto label_0534f075;
		pUVar4 = (Object)pGVar1.Find(nodeId);
		bVar3 = (pUVar4 == null);
		if (bVar3) {
			return false;
		}
		if ((pUVar4 == null) ||(pUVar5 = pUVar4.transform, pUVar5 == null)) goto label_0534f075;
		pUVar5 = pUVar5.parent;
		bVar3 = ((Object)pUVar5 == null);
		if (bVar3) {
			return false;
		}
		if (options == null) {
			options = new GisketchNodeRefreshOptions();
			if (options == null) goto label_0534f075;
		}
		if (options.PreserveScroll == false) {
			__this_00 = GisketchScrollSnapshot.Empty();
			if (options.PreserveFocus != false) goto label_0534edf3;
	label_0534ee52: ;
			focusId = null;
		}
		else {
			pGVar1 = this._active;
			if (pGVar1 == null) goto label_0534f075;
			pUVar6 = pGVar1._Root_k__BackingField;
			__this_00 = GisketchScrollSnapshot.CaptureAll(pUVar6);
			if (options.PreserveFocus == false) goto label_0534ee52;
	label_0534edf3: ;
			focusId = GisketchScreenRouter.FocusedNodeId((GameObject)pUVar4);
		}
		pUVar5 = pUVar4.transform;
		if (pUVar5 != null) {
			pUVar5 = pUVar5.parent;
			__this_01 = pUVar4.transform;
			if (__this_01 != null) {
				index = __this_01.GetSiblingIndex();
				pGVar1 = this._active;
				if (pGVar1 != null) {
					pGVar1.UnregisterSubtree((GameObject)pUVar4);
					pUVar4.SetActive(false);
					GisketchScreenRouter.DestroyRoot((GameObject)pUVar4) ;
					context = this._context;
					pGVar1 = this._active;
					pUVar6 = GisketchScreenBuilder.BuildNodeInto(replacement, pUVar5, context, pGVar1);
					if ((pUVar6 != null) &&(pUVar5 = pUVar6.transform, pUVar5 != null)) {
						pUVar5.SetSiblingIndex(index);
						pGVar1 = this._active;
						if (options.SettleLayout == false) {
							if (pGVar1 == null) goto label_0534f075;
							pGVar1.MarkLayoutDirty();
						}
						else {
							if (pGVar1 == null) goto label_0534f075;
							pUVar6 = pGVar1._Root_k__BackingField;
							GisketchScreenBuilder.SettleLayout(pUVar6, 2) ;
							pGVar1 = this._active;
							if (pGVar1 == null) goto label_0534f075;
							pGVar1.MarkLayoutSettled();
						}
						pGVar1 = this._active;
						if ((pGVar1 != null) &&(__this_00 != null)) {
							__this_00.Restore(pGVar1._Root_k__BackingField);
							pUVar2 = this._runner;
							bVar3 = ((Object)pUVar2 != null);
							if (bVar3) {
								bVar3 = Application.isPlaying;
								if (bVar3) {
									pGVar1 = this._active;
									if (pGVar1 != null) {
										pUVar2 = this._runner;
										routine = __this_00.RestoreNextFrame(pGVar1._Root_k__BackingField);
										if (pUVar2 != null) {
											pUVar2.StartCoroutine(routine);
											goto label_0534f045;
										}
									}
									goto label_0534f075;
								}
							}
	label_0534f045: ;
							pGVar1 = this._active;
							if ((typeof(GisketchScreenRouter)._2).cctor_finished_or_no_cctor == 0) {
							}
							GisketchScreenRouter.RestoreFocus(pGVar1, focusId);
							return true;
						}
					}
				}
			}
		}
	label_0534f075: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000257")]
	[Address(RVA = "0x524FA00", Offset = "0x524EA00", VA = "0x524FA00")]
	public void Clear()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$Clear): clean
		MethodInfo pMVar1;

		pMVar1 = (MethodInfo *)"clear";
		this.CancelPrewarm("clear");
		this.CancelTransition();
		this.CloseActive(null);
		this.DestroyCachedViews();
		this._active = null;
		this._activeId = null;
		this._pendingId = null;
		return;
	}

	[Token(Token = "0x6000258")]
	[Address(RVA = "0x524FDE0", Offset = "0x524EDE0", VA = "0x524FDE0")]
	public void DeactivateActive([Optional][DefaultParameterValue(false)] bool animate, [Optional] Action afterDeactivate)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$DeactivateActive): 15 lines keep C-only constructs
		Action* targetAddress;
		GisketchView* targetAddress_00;
		GisketchView pGVar1;
		Object x;
		GameObject root;
		Action pSVar2;
		bool bVar3;
		GisketchScreenRouter.c__DisplayClass35_0 __this_00;
		Tween t;
		TweenCallback __this_01;
		MethodInfo pMVar4;
		String* targetAddress_01;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchScreenRouter.c__DisplayClass35_0));
		__this_00 = new Object();
		if (__this_00 == null) goto label_0535008a;
		__this_00.__4__this = this;
		targetAddress = &__this_00.afterDeactivate;
		__this_00.afterDeactivate = afterDeactivate;
		pMVar4 = (MethodInfo *)"deactivate active";
		this.CancelPrewarm("deactivate active");
		this.CancelTransition();
		targetAddress_00 = &__this_00.old;
		__this_00.old = this._active;
		targetAddress_01 = &__this_00.oldId;
		__this_00.oldId = this._activeId;
		this._active = null;
		this._activeId = null;
		this._pendingId = null;
		pGVar1 = __this_00.old;
		if (pGVar1 != null) {
			x = (Object)pGVar1._Root_k__BackingField;
			bVar3 = (x == null);
			if (!bVar3) {
				if (*targetAddress_00 != null) {
					root = ((*targetAddress_00).fields)._Root_k__BackingField;
					if ((typeof(GisketchScreenRouter)._2).cctor_finished_or_no_cctor == 0) {
					}
					GisketchScreenRouter.SetInputLocked(root, true);
					if (*targetAddress_00 != null) {
						GisketchScreenRouter.SetRaycasterEnabled(((*targetAddress_00).fields)._Root_k__BackingField, false);
						if (animate) {
							pGVar1 = *targetAddress_00;
							t = GisketchMotion.PlayViewExit(pGVar1);
							if (t != null) {
								__this_01 = new TweenCallback((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass35_0_DeactivateActive_b__0);
								TweenSettingsExtensions.OnComplete<Tween>((object)t, __this_01);
								return;
							}
						}
						this.ReleaseDepartedView(*targetAddress_01, *targetAddress_00);
						goto label_05350052;
					}
				}
	label_0535008a: ;
				throw new NullReferenceException();
			}
		}
	label_05350052: ;
		pSVar2 = *targetAddress;
		if (pSVar2 == null) {
			return;
		}
		(*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar2.method);
		return;
	}

	[Token(Token = "0x6000259")]
	[Address(RVA = "0x5250360", Offset = "0x524F360", VA = "0x5250360")]
	public bool InvalidateScreen(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$InvalidateScreen): 3 lines keep C-only constructs
		Tween* targetAddress;
		GisketchBuildContext pGVar1;
		GisketchManifestDefinition __this_00;
		bool bVar2;
		GisketchScreenDefinition screen;
		String pSVar3;
		bool bVar5;
		GisketchScreenRouter __this_01;
		Tween t;

		bVar2 = String.IsNullOrEmpty(id);
		if (!bVar2) {
			pGVar1 = this._context;
			if ((pGVar1 == null) ||(__this_00 = pGVar1.Manifest, __this_00 == null)) {
				throw new NullReferenceException();
			}
			screen = __this_00.FindScreen(id);
			if (screen == null) {
			}
			else {
				pSVar3 = String.Concat("invalidate ", id);
				this.CancelPrewarm(pSVar3);
				bVar2 = String.Equals(this._activeId, id, 5);
				if (bVar2) {
					pSVar3 = String.Concat("active ", id);
					if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
					}
					GisketchUiPerfLog.Mark("ScreenRouter.InvalidateScreen", pSVar3);
					__this_01 = this;
					this.RemoveCachedView(id);
					__this_01.DestroyView(this._active);
					this._active = null;
					this._activeId = null;
					this._pendingId = id;
					this.Activate(screen, id);
				}
				else {
					bVar2 = String.Equals(this._outgoingId, id, 5);
					if (!bVar2) {
						bVar2 = this.RemoveCachedView(id);
						return bVar2;
					}
					pSVar3 = String.Concat("outgoing ", id);
					if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
					}
					GisketchUiPerfLog.Mark("ScreenRouter.InvalidateScreen", pSVar3);
					this.RemoveCachedView(id);
					targetAddress = &this._outgoingExit;
					t = this._outgoingExit;
					if (t != null) {
						bVar2 = TweenExtensions.IsActive(t);
						if (bVar2) {
							t = *targetAddress;
							TweenExtensions.Kill(t, false);
						}
					}
					t.DestroyView(this._outgoingView);
					this._outgoingView = null;
					this._outgoingId = null;
					this._outgoingExit = null;
				}
			}
		}
		return bVar5;
	}

	[Token(Token = "0x600025A")]
	[Address(RVA = "0x5250BF0", Offset = "0x524FBF0", VA = "0x5250BF0")]
	[IteratorStateMachine(typeof(_003CPrewarmScreen_003Ed__37))]
	public IEnumerator PrewarmScreen(string id, int keepAliveFrames)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$PrewarmScreen): 1 lines keep C-only constructs
		GisketchScreenRouter.d__37<PrewarmScreen> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchScreenRouter.d__37<PrewarmScreen>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.id = id;
		__this_00.keepAliveFrames = keepAliveFrames;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600025B")]
	[Address(RVA = "0x524E160", Offset = "0x524D160", VA = "0x524E160")]
	public void CancelPrewarm([Optional] string reason)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$CancelPrewarm): 13 lines keep C-only constructs
		GameObject* targetAddress;
		String* targetAddress_00;
		Object x;
		GameObject root;
		bool bVar1;
		String str1;
		String pSVar2;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo pMVar3;
		GisketchView* targetAddress_01;
		GisketchScreenRouter __this_00;

		x = (Object)this._prewarmHost;
		bVar1 = (x == null);
		if ((bVar1) && (this._prewarmCachedView == null)) {
			return;
		}
		pSVar2 = this._prewarmId;
		bVar1 = String.IsNullOrEmpty(reason);
		__this_00 = (Gisketch_Aottg2UI_Routing_GisketchScreenRouter_o *)"ScreenPrewarm.Cancel";
		if (bVar1) {
			str1 = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		else {
			str1 = String.Concat(" reason=", reason);
		}
		pSVar2 = String.Concat(pSVar2, str1);
		pMVar3 = extraout_RDX;
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
			pMVar3 = extraout_RDX_00;
		}
		targetAddress = &this._prewarmHost;
		targetAddress_00 = &this._prewarmId;
		GisketchUiPerfLog.Mark((String)__this_00, pSVar2);
		pMVar3 = (MethodInfo)this._prewarmCachedView;
		targetAddress_01 = &this._prewarmCachedView;
		if (pMVar3 == null) {
			root = *targetAddress;
			GisketchScreenRouter.DestroyRoot(root);
		}
		else {
			__this_00.HideCachedView((GisketchView)pMVar3);
		}
		*targetAddress = null;
		*targetAddress_01 = null;
		*targetAddress_00 = null;
		return;
	}

	[Token(Token = "0x600025C")]
	[Address(RVA = "0x5250DA0", Offset = "0x524FDA0", VA = "0x5250DA0")]
	[IteratorStateMachine(typeof(_003CPrewarmCachedScreen_003Ed__39))]
	private IEnumerator PrewarmCachedScreen(GisketchScreenDefinition screen, string id, int keepAliveFrames)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$PrewarmCachedScreen): 1 lines keep C-only constructs
		GisketchScreenRouter.d__39<PrewarmCachedScreen> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchScreenRouter.d__39<PrewarmCachedScreen>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.screen = screen;
		__this_00.id = id;
		__this_00.keepAliveFrames = keepAliveFrames;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600025D")]
	[Address(RVA = "0x524E420", Offset = "0x524D420", VA = "0x524E420")]
	private void ShowPrepared(GisketchScreenDefinition screen, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$ShowPrepared): 30 lines keep C-only constructs
		GisketchView* targetAddress;
		String* targetAddress_00;
		uint uVar1;
		GisketchView view;
		MonoBehaviour pUVar2;
		String area;
		bool bVar3;
		GisketchScreenRouter.c__DisplayClass40_0 __this_00;
		String str1;
		String str3;
		String pSVar4;
		GisketchScreenRouter.d__41<ActivateNextFrame> __this_01;
		Coroutine pUVar5;
		TweenCallback __this_02;
		MethodInfo pMVar6;
		Object x;
		bool local_b1;
		Tween local_b0;
		GisketchView* local_a8;
		String local_a0;
		GisketchScreenDefinition local_98;
		String* local_90;
		GisketchUiPerfLog.Scope local_88;
		GisketchScreenRouter.c__DisplayClass40_0 local_60;
		GisketchUiPerfLog.Scope local_58;

		local_98 = screen;
		local_58._startMs._0_4_ = 0;
		local_58._startMs._4_2_ = 0;
		local_58._startMs._6_2_ = 0;
		local_58._enabled = false;
		local_58._hotLoop = false;
		local_58._26_6_ = 0;
		local_58._area = null;
		local_58._detail = null;
		local_b1 = false;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchScreenRouter.c__DisplayClass40_0));
		__this_00 = new Object();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_88._area = null;
		local_88._detail = null;
		local_88._startMs._0_4_ = 0;
		local_88._startMs._4_2_ = 0;
		local_88._startMs._6_2_ = 0;
		local_88._enabled = false;
		local_88._hotLoop = false;
		local_88._26_6_ = 0;
		local_88 = new GisketchUiPerfLog.Scope("ScreenRouter.ShowPrepared", id);
		local_58._startMs = local_88._startMs;
		local_58._enabled = local_88._enabled;
		local_58._hotLoop = local_88._hotLoop;
		local_58._26_6_ = local_88._26_6_;
		local_58._area = local_88._area;
		local_58._detail = local_88._detail;
		local_88._area = null;
		local_88._detail = (String)&local_58;
		local_a8 = &__this_00.old;
		__this_00.old = this._active;
		local_90 = &__this_00.oldId;
		__this_00.oldId = this._activeId;
		targetAddress = &this._active;
		if (*local_a8 == null) {
			x = null;
		}
		else {
			x = (Object)((*local_a8).fields)._Root_k__BackingField;
		}
		*targetAddress = null;
		local_a0 = id;
		local_60 = __this_00;
		targetAddress_00 = &this._activeId;
		*targetAddress_00 = null;
		view = *local_a8;
		if (view == null) {
			local_b0 = null;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			local_b0 = GisketchMotion.PlayViewExit(view);
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar3 = (x != null);
		pSVar4 = "oldRoot=";
		area = "ScreenRouter.ShowPrepared";
		if (bVar3) {
			if (x == null) {
				throw new NullReferenceException();
			}
			str1 = x.name;
		}
		else {
			str1 = "null";
		}
		local_b1 = local_b0 != null;
		str3 = local_b1.ToString();
		pSVar4 = String.Concat(pSVar4, str1, " oldExit=", str3);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GisketchUiPerfLog.Mark(area, pSVar4);
		bVar3 = (x == null);
		pMVar6 = (MethodInfo)CONCAT71((int7)((ulong)str3 >> 8), local_b0 == null);
		if (bVar3 || local_b0 == null) {
			this.Activate(local_98, local_a0);
			__this_02 = (TweenCallback)*local_90;
			this.ReleaseDepartedView((String)__this_02, *local_a8);
			goto label_0534e943;
		}
		if ((typeof(GisketchScreenRouter)._2).cctor_finished_or_no_cctor == 0) {
		}
		GisketchScreenRouter.SetInputLocked((GameObject)x, true) ;
		GisketchScreenRouter.SetRaycasterEnabled((GameObject)x, false);
		this._outgoingView = *local_a8;
		this._outgoingId = *local_90;
		this._outgoingExit = local_b0;
		pUVar2 = this._runner;
		bVar3 = ((Object)pUVar2 != null);
		if (bVar3) {
			bVar3 = Application.isPlaying;
			if (!bVar3) goto label_0534e8d9;
			pUVar2 = this._runner;
			__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchScreenRouter.d__41<ActivateNextFrame>));
			__this_01 = new Object();
			__this_01.__1__state = 0;
			__this_01.__4__this = this;
			__this_01.screen = local_98;
			__this_01.id = local_a0;
			if (pUVar2 == null) {
				throw new NullReferenceException();
			}
			pUVar5 = pUVar2.StartCoroutine((IEnumerator)__this_01);
		}
		else {
	label_0534e8d9: ;
			pUVar5 = null;
		}
		this._pendingActivation = pUVar5;
		if (this._pendingActivation == null) {
			this.Activate(local_98, local_a0);
		}
		__this_02 = new TweenCallback((object)local_60, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass40_0_ShowPrepared_b__0);
		TweenSettingsExtensions.OnComplete<Tween>((object)local_b0, __this_02);
	label_0534e943: ;
		local_58.Dispose();
		return;
	}

	[Token(Token = "0x600025E")]
	[Address(RVA = "0x5250E70", Offset = "0x524FE70", VA = "0x5250E70")]
	[IteratorStateMachine(typeof(_003CActivateNextFrame_003Ed__41))]
	private IEnumerator ActivateNextFrame(GisketchScreenDefinition screen, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$ActivateNextFrame): 1 lines keep C-only constructs
		GisketchScreenRouter.d__41<ActivateNextFrame> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchScreenRouter.d__41<ActivateNextFrame>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.screen = screen;
		__this_00.id = id;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x600025F")]
	[Address(RVA = "0x524FA90", Offset = "0x524EA90", VA = "0x524FA90")]
	private void CloseActive(TweenCallback afterClose)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$CloseActive): 10 lines keep C-only constructs
		TweenCallback* targetAddress;
		GisketchView pGVar1;
		Object x;
		bool bVar2;
		GisketchScreenRouter.c__DisplayClass42_0 __this_00;
		Tween t;
		TweenCallback pDVar3;
		GisketchView* targetAddress_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchScreenRouter.c__DisplayClass42_0));
		__this_00 = new Object();
		if (__this_00 == null) goto label_0534fc53;
		targetAddress = &__this_00.afterClose;
		__this_00.afterClose = afterClose;
		pGVar1 = this._active;
		if (pGVar1 != null) {
			x = (Object)pGVar1._Root_k__BackingField;
			bVar2 = (x == null);
			if (!bVar2) {
				targetAddress_00 = &this._active;
				if (*targetAddress_00 == null) {
	label_0534fc53: ;
					throw new NullReferenceException();
				}
				__this_00.oldRoot = ((*targetAddress_00).fields)._Root_k__BackingField;
				pGVar1 = *targetAddress_00;
				t = GisketchMotion.PlayViewExit(pGVar1);
				pDVar3 = new TweenCallback((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Routing_GisketchScreenRouter_c__DisplayClass42_0_CloseActive_b__0);
				if (t == null) {
					if (pDVar3 == null) goto label_0534fc53;
					(*(code)pDVar3.invoke_impl)(pDVar3.method_code,pDVar3.method);
				}
				else {
					TweenSettingsExtensions.OnComplete<Tween>((object)t, pDVar3);
				}
				*targetAddress_00 = null;
				return;
			}
		}
		pDVar3 = *targetAddress;
		if (pDVar3 == null) {
			return;
		}
		(*(code)pDVar3.invoke_impl)(pDVar3.method_code,pDVar3.method);
		return;
	}

	[Token(Token = "0x6000260")]
	[Address(RVA = "0x5250730", Offset = "0x524F730", VA = "0x5250730")]
	private void Activate(GisketchScreenDefinition screen, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$Activate): 39 lines keep C-only constructs
		String* targetAddress;
		GisketchView* targetAddress_00;
		Object pUVar1;
		GameObject pUVar2;
		Action<string, GisketchView> pSVar3;
		bool bVar4;
		GisketchView pGVar5;
		String str1;
		MethodInfo pMVar6;
		String pSVar7;
		Transform __this_00;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		GisketchUiPerfLog.Scope local_88;
		String local_60;
		GisketchUiPerfLog.Scope local_58;

		local_58._startMs._0_4_ = 0;
		local_58._startMs._4_2_ = 0;
		local_58._startMs._6_2_ = 0;
		local_58._enabled = false;
		local_58._hotLoop = false;
		local_58._26_6_ = 0;
		local_58._area = null;
		local_58._detail = null;
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_88._area = null;
		local_88._detail = null;
		local_88._startMs._0_4_ = 0;
		local_88._startMs._4_2_ = 0;
		local_88._startMs._6_2_ = 0;
		local_88._enabled = false;
		local_88._hotLoop = false;
		local_88._26_6_ = 0;
		local_88 = new GisketchUiPerfLog.Scope("ScreenRouter.Activate", id);
		local_58._startMs = local_88._startMs;
		local_58._enabled = local_88._enabled;
		local_58._hotLoop = local_88._hotLoop;
		local_58._26_6_ = local_88._26_6_;
		local_58._area = local_88._area;
		local_58._detail = local_88._detail;
		local_88._area = null;
		local_88._detail = (String)&local_58;
		bVar4 = String.Equals(this._pendingId, id, 5);
		targetAddress = &this._pendingId;
		if (!bVar4) {
			pMVar6 = (MethodInfo)String.Concat("skip pending mismatch pending=", *targetAddress);
			if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			}
			GisketchUiPerfLog.Mark("ScreenRouter.Activate", (String)pMVar6);
			goto label_05350b1b;
		}
		pMVar6 = extraout_RDX;
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
			pMVar6 = extraout_RDX_00;
		}
		GisketchUiPerfLog.Mark("ScreenRouter.Activate", "build view start");
		pGVar5 = this.GetOrBuildView(screen, id);
		targetAddress_00 = &this._active;
		this._active = pGVar5;
		pSVar7 = "view ready root=";
		local_60 = "ScreenRouter.Activate";
		if (*targetAddress_00 == null) {
	label_05350978: ;
			str1 = "null";
		}
		else {
			pUVar1 = (Object)((*targetAddress_00).fields)._Root_k__BackingField;
			bVar4 = (pUVar1 != null);
			if (!bVar4) goto label_05350978;
			if (*targetAddress_00 == null) {
				throw new NullReferenceException();
			}
			pUVar1 = (Object)((*targetAddress_00).fields)._Root_k__BackingField;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
			str1 = pUVar1.name;
		}
		pSVar7 = String.Concat(pSVar7, str1);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GisketchUiPerfLog.Mark(local_60, pSVar7);
		this._activeId = id;
		*targetAddress = null;
		if (*targetAddress_00 == null) {
			throw new NullReferenceException();
		}
		pUVar2 = ((*targetAddress_00).fields)._Root_k__BackingField;
		if (pUVar2 == null) {
			throw new NullReferenceException();
		}
		pUVar2.SetActive(true);
		if (*targetAddress_00 == null) {
			throw new NullReferenceException();
		}
		pUVar2 = ((*targetAddress_00).fields)._Root_k__BackingField;
		if ((typeof(GisketchScreenRouter)._2).cctor_finished_or_no_cctor == 0) {
		}
		GisketchScreenRouter.SetInputLocked(pUVar2, false);
		if (*targetAddress_00 == null) {
			throw new NullReferenceException();
		}
		GisketchScreenRouter.SetRaycasterEnabled(((*targetAddress_00).fields)._Root_k__BackingField, true);
		if (*targetAddress_00 == null) {
			throw new NullReferenceException();
		}
		GisketchScreenRouter.ResetRootVisibility(((*targetAddress_00).fields)._Root_k__BackingField);
		if (*targetAddress_00 == null) {
			throw new NullReferenceException();
		}
		pUVar2 = ((*targetAddress_00).fields)._Root_k__BackingField;
		if (pUVar2 == null) {
			throw new NullReferenceException();
		}
		__this_00 = pUVar2.transform;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetAsLastSibling();
		GisketchUiPerfLog.Mark("ScreenRouter.Activate", "play enter") ;
		pGVar5 = *targetAddress_00;
		GisketchMotion.PlayViewEnter(pGVar5);
		pSVar3 = this.ScreenShown;
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code,id,*targetAddress_00,pSVar3.method);
		}
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		pMVar6 = (MethodInfo *)"screen shown event";
		GisketchUiPerfLog.Mark("ScreenRouter.Activate", "screen shown event");
	label_05350b1b: ;
		local_58.Dispose();
		return;
	}

	[Token(Token = "0x6000261")]
	[Address(RVA = "0x524E310", Offset = "0x524D310", VA = "0x524E310")]
	private void CancelTransition()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$CancelTransition): 6 lines keep C-only constructs
		Coroutine* targetAddress;
		Tween* targetAddress_00;
		MonoBehaviour pUVar1;
		Tween t;
		bool bVar2;

		targetAddress = &this._pendingActivation;
		if (this._pendingActivation != null) {
			pUVar1 = this._runner;
			bVar2 = ((Object)pUVar1 != null);
			if (bVar2) {
				pUVar1 = this._runner;
				if (pUVar1 == null) {
					throw new NullReferenceException();
				}
				pUVar1.StopCoroutine(*targetAddress);
			}
		}
		this._pendingActivation = null;
		targetAddress_00 = &this._outgoingExit;
		t = this._outgoingExit;
		if (t != null) {
			bVar2 = TweenExtensions.IsActive(t);
			if (bVar2) {
				TweenExtensions.Kill(*targetAddress_00, false);
			}
		}
		this.ReleaseDepartedView(this._outgoingId, this._outgoingView);
		this._outgoingExit = null;
		this._outgoingView = null;
		this._outgoingId = null;
		return;
	}

	[Token(Token = "0x6000262")]
	[Address(RVA = "0x5250F30", Offset = "0x524FF30", VA = "0x5250F30")]
	private GisketchView GetOrBuildView(GisketchScreenDefinition screen, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$GetOrBuildView): 2 lines keep C-only constructs
		GisketchBuildContext context;
		Transform parent;
		Dictionary<object, object> pSVar1;
		Object x;
		bool bVar2;
		String pSVar3;
		GisketchView value;
		GisketchView local_30;

		local_30 = null;
		if ((screen != null) &&(screen.lifecycle != 1)) {
			pSVar1 = (Dictionary<object, object>)this._screenCache;
			if (pSVar1 == null) goto label_05351141;
			bVar2 = pSVar1.TryGetValue((object)id, (object*)&local_30);
			if ((bVar2) && (local_30 != null)) {
				x = (Object)local_30._Root_k__BackingField;
				bVar2 = (x != null);
				if (bVar2) {
					pSVar3 = String.Concat("cache hit ", id);
					if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
					}
					GisketchUiPerfLog.Mark("ScreenRouter.Activate", pSVar3);
					return local_30;
				}
			}
		}
		pSVar3 = String.Concat("cache miss ", id);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		GisketchUiPerfLog.Mark("ScreenRouter.Activate", pSVar3);
		context = this._context;
		parent = this._screenLayer;
		value = GisketchScreenBuilder.BuildView(screen, parent, context) ;
		if ((screen != null) &&(screen.lifecycle != 1)) {
			pSVar1 = (Dictionary<object, object>)this._screenCache;
			if (pSVar1 == null) {
	label_05351141: ;
				throw new NullReferenceException();
			}
			pSVar1.set_Item((object)id, (object)value);
		}
		return value;
	}

	[Token(Token = "0x6000263")]
	[Address(RVA = "0x5250280", Offset = "0x524F280", VA = "0x5250280")]
	private void ReleaseDepartedView(string id, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$ReleaseDepartedView): 1 lines keep C-only constructs
		Object x;
		bool bVar1;
		GisketchScreenRouter __this_00;
		GisketchView local_28;

		if (view != null) {
			x = (Object)view._Root_k__BackingField;
			bVar1 = (x == null);
			if (!bVar1) {
				local_28 = null;
				__this_00 = (GisketchScreenRouter)id;
				bVar1 = String.IsNullOrEmpty(id);
				if (!bVar1) {
					__this_00 = (GisketchScreenRouter)this._screenCache;
					if (__this_00 == null) {
						throw new NullReferenceException();
					}
					bVar1 = __this_00.TryGetValue((object)id, (object*)&local_28);
					if ((bVar1) && (local_28 == view)) {
						__this_00.HideCachedView(view);
						return;
					}
				}
				__this_00.DestroyView(view);
			}
		}
		return;
	}

	[Token(Token = "0x6000264")]
	[Address(RVA = "0x5251220", Offset = "0x5250220", VA = "0x5251220")]
	private bool IsCachedView(string id, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$IsCachedView): 1 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		bool bVar1;
		bool bVar2;
		GisketchView local_28;

		local_28 = null;
		bVar1 = String.IsNullOrEmpty(id);
		if ((view != null) && (!bVar1)) {
			__this_00 = (Dictionary<object, object>)this._screenCache;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar1 = __this_00.TryGetValue((object)id, (object*)&local_28);
			if (bVar1) {
				bVar2 = local_28 == view;
			}
			else {
			}
		}
		return bVar2;
	}

	[Token(Token = "0x6000265")]
	[Address(RVA = "0x5250CA0", Offset = "0x524FCA0", VA = "0x5250CA0")]
	private void HideCachedView(GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$HideCachedView): clean
		Object x;
		GameObject pUVar1;
		bool bVar2;

		if (view != null) {
			x = (Object)view._Root_k__BackingField;
			bVar2 = (x == null);
			if (!bVar2) {
				pUVar1 = view._Root_k__BackingField;
				if ((typeof(GisketchScreenRouter)._2).cctor_finished_or_no_cctor == 0) {
				}
				GisketchScreenRouter.SetInputLocked(pUVar1, true);
				GisketchScreenRouter.SetRaycasterEnabled(view._Root_k__BackingField, false);
				GisketchScreenRouter.ClearSelectedIfInside(view._Root_k__BackingField);
				GisketchMotion.ResetViewToRest(view);
				GisketchScreenRouter.ResetRootVisibility(view._Root_k__BackingField);
				pUVar1 = view._Root_k__BackingField;
				if (pUVar1 == null) {
					throw new NullReferenceException();
				}
				pUVar1.SetActive(false);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000266")]
	[Address(RVA = "0x52505E0", Offset = "0x524F5E0", VA = "0x52505E0")]
	private bool RemoveCachedView(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$RemoveCachedView): 1 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		bool bVar1;
		GisketchScreenRouter __this_01;
		GisketchView local_20;

		local_20 = null;
		__this_00 = (Dictionary<object, object>)this._screenCache;
		if (__this_00 == null) {
	label_05350677: ;
			throw new NullReferenceException();
		}
		bVar1 = __this_00.TryGetValue((object)id, (object*)&local_20);
		if (bVar1) {
			__this_01 = (GisketchScreenRouter)this._screenCache;
			if (__this_01 == null) goto label_05350677;
			__this_01.Remove((object)id);
			__this_01.DestroyView(local_20);
		}
		return bVar1;
	}

	[Token(Token = "0x6000267")]
	[Address(RVA = "0x524FC60", Offset = "0x524EC60", VA = "0x524FC60")]
	private void DestroyCachedViews()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$DestroyCachedViews): 3 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_00;
		GisketchScreenRouter __this_01;
		byte[] local_48 = new byte[16];
		GisketchView local_38;

		local_48._0_8_ = null;
		local_48._8_8_ = null;
		local_38 = null;
		pSVar1 = (Dictionary<object, object>)this._screenCache;
		if (pSVar1 != null) {
			__this_00 = pSVar1.Values;
			if (__this_00 != null) {
				local_48.GetEnumerator(__this_00);
				while(true) {
					__this_01 = (GisketchScreenRouter)local_48;
					bVar2 = local_48.MoveNext();
					if (!bVar2) break;
					__this_01.DestroyView(local_38);
				}
				local_48.Dispose();
				pSVar1 = (Dictionary<object, object>)this._screenCache;
				if (pSVar1 != null) {
					pSVar1.Clear();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000268")]
	[Address(RVA = "0x5250680", Offset = "0x524F680", VA = "0x5250680")]
	private void DestroyView(GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$DestroyView): clean
		Object x;
		GameObject root;
		bool bVar1;

		if (view != null) {
			x = (Object)view._Root_k__BackingField;
			bVar1 = (x == null);
			if (!bVar1) {
				root = view._Root_k__BackingField;
				if ((typeof(GisketchScreenRouter)._2).cctor_finished_or_no_cctor == 0) {
				}
				GisketchScreenRouter.SetInputLocked(root, false);
				GisketchScreenRouter.SetRaycasterEnabled(view._Root_k__BackingField, true);
				GisketchScreenRouter.DestroyRoot(view._Root_k__BackingField) ;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000269")]
	[Address(RVA = "0x52500A0", Offset = "0x524F0A0", VA = "0x52500A0")]
	private static void SetInputLocked(GameObject root, bool locked)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$SetInputLocked): clean
		bool bVar1;
		CanvasGroup __this;

		bVar1 = ((Object)root == null);
		if (bVar1) {
			return;
		}
		if (root != null) {
			__this = root.GetComponent<CanvasGroup>() ;
			bVar1 = ((Object)__this == null);
			if (bVar1) {
				__this = root.AddComponent<CanvasGroup>();
			}
			bVar1 = ((Object)__this == null);
			if (bVar1) {
				return;
			}
			if (__this != null) {
				__this.interactable = !locked;
				__this.blocksRaycasts = !locked;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600026A")]
	[Address(RVA = "0x52501C0", Offset = "0x524F1C0", VA = "0x52501C0")]
	private static void SetRaycasterEnabled(GameObject root, bool enabled)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$SetRaycasterEnabled): clean
		bool bVar1;
		GraphicRaycaster x;

		bVar1 = ((Object)root == null);
		if (bVar1) {
			return;
		}
		if (root != null) {
			x = root.GetComponent<GraphicRaycaster>() ;
			bVar1 = ((Object)x != null);
			if (!bVar1) {
				return;
			}
			if (x != null) {
				x.enabled = enabled;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600026B")]
	[Address(RVA = "0x5251150", Offset = "0x5250150", VA = "0x5251150")]
	private static void ResetRootVisibility(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$ResetRootVisibility): clean
		bool bVar1;
		CanvasGroup __this;

		bVar1 = ((Object)root == null);
		if (bVar1) {
			return;
		}
		if (root != null) {
			__this = root.GetComponent<CanvasGroup>() ;
			bVar1 = ((Object)__this != null);
			if (!bVar1) {
				return;
			}
			if (__this != null) {
				__this.alpha = 1.0;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x52512B0", Offset = "0x52502B0", VA = "0x52512B0")]
	private static void ClearSelectedIfInside(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$ClearSelectedIfInside): clean
		bool bVar1;
		EventSystem pUVar2;
		Transform __this;
		Transform parent;
		Object x;

		pUVar2 = EventSystem.current;
		x = null;
		bVar1 = ((Object)pUVar2 != null);
		if (bVar1) {
			pUVar2 = EventSystem.current;
			if (pUVar2 == null) goto label_05351415;
			x = (Object)pUVar2.m_CurrentSelected;
		}
		bVar1 = (x != null);
		if (bVar1) {
			bVar1 = ((Object)root != null);
			if (bVar1) {
				if (((x != null) &&(__this = x.transform, root != null)) &&(parent = root.transform, __this != null)) {
					bVar1 = __this.IsChildOf(parent);
					if (!bVar1) {
						return;
					}
					pUVar2 = EventSystem.current;
					if (pUVar2 != null) {
						pUVar2.SetSelectedGameObject(null);
						return;
					}
				}
	label_05351415: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x524F670", Offset = "0x524E670", VA = "0x524F670")]
	private static void DestroyRoot(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$DestroyRoot): clean
		uint uVar1;
		bool bVar2;

		bVar2 = ((Object)root == null);
		if (bVar2) {
			return;
		}
		GisketchSurfaceMaterialOwner.ReleaseAll(root);
		bVar2 = Application.isPlaying;
		uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		if (bVar2) {
			if (uVar1 == 0) {
			}
			Object.Destroy((Object)root);
			return;
		}
		if (uVar1 == 0) {
		}
		Object.DestroyImmediate((Object)root);
		return;
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x5251420", Offset = "0x5250420", VA = "0x5251420")]
	private static void Stretch(RectTransform rect)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$Stretch): clean
		bool bVar1;

		bVar1 = ((Object)rect == null);
		if (bVar1) {
			return;
		}
		if (rect == null) {
			throw new NullReferenceException();
		}
		rect.anchorMin = (Vector2)(Vector2.zeroVector);
		rect.anchorMax = (Vector2)(Vector2.oneVector);
		rect.offsetMin = (Vector2)(Vector2.zeroVector);
		rect.offsetMax = (Vector2)(Vector2.zeroVector);
		return;
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x524F520", Offset = "0x524E520", VA = "0x524F520")]
	private static string FocusedNodeId(GameObject scope)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$FocusedNodeId): clean
		bool bVar1;
		EventSystem pUVar2;
		Transform __this;
		Transform parent;
		String pSVar3;
		Object x;

		pUVar2 = EventSystem.current;
		x = null;
		bVar1 = ((Object)pUVar2 != null);
		if (bVar1) {
			pUVar2 = EventSystem.current;
			if (pUVar2 == null) goto label_0534f660;
			x = (Object)pUVar2.m_CurrentSelected;
		}
		bVar1 = (x == null);
		if (!bVar1) {
			bVar1 = ((Object)scope == null);
			if (!bVar1) {
				if (((x != null) &&(__this = x.transform, scope != null)) &&(parent = scope.transform, __this != null)) {
					bVar1 = __this.IsChildOf(parent);
					if (bVar1) {
						return pSVar3;
					}
					return null;
				}
	label_0534f660: ;
				throw new NullReferenceException();
			}
		}
		return null;
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x524F8D0", Offset = "0x524E8D0", VA = "0x524F8D0")]
	private static void RestoreFocus(GisketchView view, string focusId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c (Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$RestoreFocus): clean
		bool bVar1;
		EventSystem pUVar2;
		Object x;

		pUVar2 = EventSystem.current;
		bVar1 = ((Object)pUVar2 == null);
		if (((!bVar1) && (view != null)) &&(bVar1 = String.IsNullOrEmpty(focusId), !bVar1)) {
			x = (Object)view.Find(focusId);
			bVar1 = (x != null);
			if (bVar1) {
				if (x != null) {
					bVar1 = x.activeInHierarchy ;
					if (!bVar1) {
						return;
					}
					pUVar2 = EventSystem.current;
					if (pUVar2 != null) {
						pUVar2.SetSelectedGameObject((GameObject)x);
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Routing/GisketchScreenRouter.c.

	// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass35_0$$.ctor: clean
	private void c__DisplayClass35_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass40_0$$.ctor: clean
	private void c__DisplayClass40_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass42_0$$.ctor: clean
	private void c__DisplayClass42_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Routing.GisketchScreenRouter$$.cctor: clean
	static GisketchScreenRouter()
	{
		IntPtr iVar1;

		iVar1 = ProfilerUnsafeUtility.CreateMarker("Gisketch.ScreenRouter.ShowScreen", 1, 0, 0);
		(GisketchScreenRouter.ShowScreenMarker).m_Ptr = iVar1;
		return;
	}

	// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass35_0$$<DeactivateActive>b__0: clean
	private void c__DisplayClass35_0__DeactivateActive_b__0()
	{
		GisketchScreenRouter __this_00;
		Action pSVar1;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.ReleaseDepartedView(this.oldId, this.old);
		pSVar1 = this.afterDeactivate;
		if (pSVar1 == null) {
			return;
		}
		(*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar1.method);
		return;
	}

	// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass40_0$$<ShowPrepared>b__0: clean
	private void c__DisplayClass40_0__ShowPrepared_b__0()
	{
		GisketchScreenRouter pGVar1;
		GisketchView view;

		pGVar1 = this.__4__this;
		if (pGVar1 != null) {
			view = pGVar1._outgoingView;
			if (view != this.old) {
				return;
			}
			pGVar1.ReleaseDepartedView(this.oldId, view);
			pGVar1 = this.__4__this;
			if (pGVar1 != null) {
				pGVar1._outgoingView = null;
				pGVar1 = this.__4__this;
				if (pGVar1 != null) {
					pGVar1._outgoingId = null;
					pGVar1 = this.__4__this;
					if (pGVar1 != null) {
						pGVar1._outgoingExit = null;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Gisketch.Aottg2UI.Routing.GisketchScreenRouter.<>c__DisplayClass42_0$$<CloseActive>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass42_0__CloseActive_b__0()
	{
		GameObject root;
		TweenCallback pDVar1;
		code *vtableDispatch;
		ulong extraout_RDX;

		root = this.oldRoot;
		GisketchScreenRouter.DestroyRoot(root);
		pDVar1 = this.afterClose;
		if (pDVar1 == null) {
			return;
		}
		vtableDispatch = (code)pDVar1.invoke_impl;
		(*vtableDispatch)(pDVar1.method_code,pDVar1.method,extraout_RDX,vtableDispatch);
		return;
	}
}
