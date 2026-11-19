// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Overlays.GisketchOverlayManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Gilzoide.FlexUi;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Overlays;

[Token(Token = "0x200004D")]
public sealed class GisketchOverlayManager
{
	[Token(Token = "0x200004E")]
	private enum OverlayKind
	{
		[Token(Token = "0x4000187")]
		Dialog,
		[Token(Token = "0x4000188")]
		Popover
	}

	[Token(Token = "0x200004F")]
	private sealed class OverlayInstance
	{
		[Token(Token = "0x4000189")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly OverlayKind Kind;

		[Token(Token = "0x400018A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly string Id;

		[Token(Token = "0x400018B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public readonly GameObject Host;

		[Token(Token = "0x400018C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public readonly GisketchView View;

		[Token(Token = "0x400018D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public readonly bool GuardUnsavedChanges;

		[Token(Token = "0x400018F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
		public readonly RectTransform HostRect;

		[Token(Token = "0x17000046")]
		public GameObject ContentRoot
		{
			[Token(Token = "0x60002E2")]
			[Address(RVA = "0x5258FD0", Offset = "0x5257FD0", VA = "0x5258FD0")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$get_ContentRoot): clean
				return this._ContentRoot_k__BackingField;
			}
			[Token(Token = "0x60002E3")]
			[Address(RVA = "0x5258FE0", Offset = "0x5257FE0", VA = "0x5258FE0")]
			[CompilerGenerated]
			private set
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$set_ContentRoot): clean
				this._ContentRoot_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x17000047")]
		public GameObject PreviousSelected
		{
			[Token(Token = "0x60002E4")]
			[Address(RVA = "0x5258FF0", Offset = "0x5257FF0", VA = "0x5258FF0")]
			[CompilerGenerated]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$get_PreviousSelected): clean
				return this._PreviousSelected_k__BackingField;
			}
			[Token(Token = "0x60002E5")]
			[Address(RVA = "0x5259000", Offset = "0x5258000", VA = "0x5259000")]
			[CompilerGenerated]
			private set
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$set_PreviousSelected): clean
				this._PreviousSelected_k__BackingField = value;
				return;
			}
		}

		[Token(Token = "0x60002E6")]
		[Address(RVA = "0x5254E60", Offset = "0x5253E60", VA = "0x5254E60")]
		public OverlayInstance(OverlayKind kind, string id, GameObject host, GisketchView inner, bool guardUnsavedChanges)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$.ctor): 3 lines keep C-only constructs
			GisketchView* targetAddress;
			List<GisketchMotionTarget> __this_00;
			GisketchView pGVar1;
			RectTransform pUVar2;

			base();
			this.Kind = kind;
			this.Id = id;
			this.Host = host;
			this.GuardUnsavedChanges = guardUnsavedChanges;
			pGVar1 = new GisketchView();
			targetAddress = &this.View;
			this.View = pGVar1;
			pGVar1 = this.View;
			if (pGVar1 != null) {
				pGVar1.SetRoot(host);
				pGVar1 = *targetAddress;
				if (((pGVar1 != null) &&(inner != null)) &&(__this_00 = pGVar1._MotionTargets_k__BackingField, __this_00 != null)) {
					__this_00.AddRange((IEnumerable<T>)inner._MotionTargets_k__BackingField);
					this._ContentRoot_k__BackingField = inner._Root_k__BackingField;
					if (host != null) {
						pUVar2 = host.GetComponent<RectTransform>();
						this.HostRect = pUVar2;
						return;
					}
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x60002E7")]
		[Address(RVA = "0x5256840", Offset = "0x5255840", VA = "0x5256840")]
		public void ReplaceContent(GisketchView inner)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$ReplaceContent): 2 lines keep C-only constructs
			int piVar1;
			int length;
			GisketchView pGVar2;
			List<GisketchMotionTarget> pSVar3;

			pGVar2 = this.View;
			if ((pGVar2 != null) &&(pSVar3 = pGVar2._MotionTargets_k__BackingField, pSVar3 != null)) {
				piVar1 = &pSVar3._version;
				*piVar1 = *piVar1 + 1;
				length = pSVar3._size;
				pSVar3._size = 0;
				if (0 < length) {
					Array.Clear((Array)pSVar3._items, 0, length);
				}
				if (inner == null) {
					this._ContentRoot_k__BackingField = null;
					return;
				}
				pGVar2 = this.View;
				if ((pGVar2 != null) &&(pSVar3 = pGVar2._MotionTargets_k__BackingField, pSVar3 != null)) {
					pSVar3.AddRange((IEnumerable<T>)inner._MotionTargets_k__BackingField);
					this._ContentRoot_k__BackingField = inner._Root_k__BackingField;
					return;
				}
			}
			throw new NullReferenceException();
		}

		[Token(Token = "0x60002E8")]
		[Address(RVA = "0x5255520", Offset = "0x5254520", VA = "0x5255520")]
		public void SetPreviousSelected(GameObject previousSelected)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.OverlayInstance$$SetPreviousSelected): clean
			this._PreviousSelected_k__BackingField = previousSelected;
			return;
		}
	}

	[Token(Token = "0x400017C")]
	private const float DialogEdgePadding = 64f;

	[Token(Token = "0x400017D")]
	private const float PopoverGap = 24f;

	[Token(Token = "0x400017E")]
	private const bool DefaultFocusOnOpen = true;

	[Token(Token = "0x400017F")]
	private const bool DefaultRestoreFocus = true;

	[Token(Token = "0x4000180")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Transform _layer;

	[Token(Token = "0x4000181")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly GisketchBuildContext _context;

	[Token(Token = "0x4000182")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly List<OverlayInstance> _stack;

	[Token(Token = "0x4000183")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly Dictionary<string, OverlayInstance> _cached;

	[Token(Token = "0x4000184")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private OverlayInstance _activePopover;

	[Token(Token = "0x4000185")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private OverlayInstance _pendingUnsavedClose;

	[Token(Token = "0x17000045")]
	public bool HasOpenOverlays
	{
		[Token(Token = "0x60002BC")]
		[Address(RVA = "0x52575B0", Offset = "0x52565B0", VA = "0x52575B0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$get_HasOpenOverlays): clean
			List<GisketchOverlayManager.OverlayInstance> pSVar1;

			pSVar1 = this._stack;
			if (pSVar1 == null) {
				throw new NullReferenceException();
			}
			if (pSVar1._size < 1) {
				return this._activePopover !=null;
			}
			return true;
		}
	}

	[Token(Token = "0x60002A7")]
	[Address(RVA = "0x5254190", Offset = "0x5253190", VA = "0x5254190")]
	private OverlayInstance BuildOverlayInstance(GisketchOverlayDefinition overlay, GameObject anchor, OverlayKind kind, bool forceBelow, bool matchAnchorWidth, float popoverGap)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$BuildOverlayInstance): 19 lines keep C-only constructs
		GisketchBuildContext context;
		Object x;
		GameObject pUVar1;
		Il2CppType handle;
		bool bVar2;
		String pSVar3;
		Type[] components;
		Type obj;
		object pIVar4;
		GameObject __this_00;
		Transform pUVar5;
		RectTransform rect;
		FlexLayout flex;
		GisketchView inner;
		GisketchFormState __this_01;
		GisketchOverlayManager.OverlayInstance __this_02;
		String* ppSVar7;
		MethodInfo pMVar8;
		GisketchUiPerfLog.Scope local_88;
		GameObject local_60;
		GisketchUiPerfLog.Scope local_58;

		local_60 = anchor;
		local_58._startMs._0_4_ = 0;
		local_58._startMs._4_2_ = 0;
		local_58._startMs._6_2_ = 0;
		local_58._enabled = false;
		local_58._hotLoop = false;
		local_58._26_6_ = 0;
		local_58._area = null;
		local_58._detail = null;
		local_88._area =(String)typeof(GisketchOverlayManager.OverlayKind);
		local_88._detail = (String)0xffffffffffffffff;
		local_88._startMs = CONCAT44(local_88._startMs._4_4_, kind);
		pSVar3 = local_88.ToString();
		pMVar8 = (MethodInfo *)"Overlay.BuildOverlayInstance";
		if (overlay == null) {
			ppSVar7 = &"null";
		}
		else {
			ppSVar7 = &overlay.id;
		}
		pSVar3 = String.Concat(pSVar3, " ", ((GisketchOverlayDefinition)ppSVar7).id);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_88._startMs._0_4_ = 0;
		local_88._startMs._4_2_ = 0;
		local_88._startMs._6_2_ = 0;
		local_88._enabled = false;
		local_88._hotLoop = false;
		local_88._26_6_ = 0;
		local_88._area = null;
		local_88._detail = null;
		local_88 = new GisketchUiPerfLog.Scope((String)pMVar8, pSVar3);
		local_58._startMs = local_88._startMs;
		local_58._enabled = local_88._enabled;
		local_58._hotLoop = local_88._hotLoop;
		local_58._26_6_ = local_88._26_6_;
		local_58._area = local_88._area;
		local_58._detail = local_88._detail;
		local_88._area = null;
		local_88._detail = (String)&local_58;
		pSVar3 = GisketchOverlayManager.OverlayName(overlay);
		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) {
			throw new NullReferenceException();
		}
		if (obj != null) {
			pIVar4 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
			if (pIVar4 == null) {
				pIVar4 = new ArrayTypeMismatchException();
				throw pIVar4;
			}
		}
		if ((int)components.Length == 0) {
			throw new IndexOutOfRangeException();
		}
		components[0] = obj;
		__this_00 = new GameObject(pSVar3, components);
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pUVar5 = __this_00.transform;
		if (pUVar5 == null) {
			throw new NullReferenceException();
		}
		pUVar5.SetParent(this._layer, false);
		__this_00.AddComponent<CanvasGroup>();
		pMVar8 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
		rect = __this_00.GetComponent<RectTransform>();
		GisketchOverlayManager.Stretch(rect);
		flex = __this_00.AddComponent<FlexLayout>() ;
		if (overlay == null) {
			throw new NullReferenceException();
		}
		GisketchOverlayManager.ConfigureHost(flex, overlay.modal);
		if (overlay.modal == false) {
			if (overlay.dismissOnBackdrop != false) {
				pUVar5 = __this_00.transform;
				this.AddBackdrop(pUVar5, true, (Color)ZEXT816(0));
			}
		}
		else {
			pUVar5 = __this_00.transform;
			this.AddBackdrop(pUVar5, overlay.dismissOnBackdrop, (Color)(ZEXT816(0x3f1eb85200000000) << 0x40));
		}
		pUVar5 = __this_00.transform;
		context = this._context;
		inner = GisketchScreenBuilder.BuildOverlay(overlay, pUVar5, context);
		if (inner == null) {
			throw new NullReferenceException();
		}
		GisketchOverlayManager.PrepareLayout(overlay, inner._Root_k__BackingField, rect, local_60, forceBelow, matchAnchorWidth, popoverGap);
		if ((overlay.guardUnsavedChanges != false) || (overlay.lifecycle == 1)) {
			x = (Object)inner._Root_k__BackingField;
			bVar2 = (x != null);
			if (bVar2) {
				pUVar1 = inner._Root_k__BackingField;
				if (pUVar1 == null) {
					throw new NullReferenceException();
				}
				__this_01 = pUVar1.GetComponent<GisketchFormState>();
				if (__this_01 == null) {
					pUVar1 = inner._Root_k__BackingField;
					if (pUVar1 == null) {
						throw new NullReferenceException();
					}
					__this_01 = pUVar1.AddComponent<GisketchFormState>();
					if (__this_01 == null) {
						throw new NullReferenceException();
					}
				}
				__this_01.CaptureBaseline();
			}
		}
		pSVar3 = overlay.id;
		bVar2 = overlay.guardUnsavedChanges;
		__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchOverlayManager.OverlayInstance));
		pMVar8 = (MethodInfo)(ulong)(uint)kind;
		__this_02 = new GisketchOverlayManager.OverlayInstance(kind, pSVar3, __this_00, inner, bVar2);
		local_58.Dispose();
		return __this_02;
	}

	[Token(Token = "0x60002A8")]
	[Address(RVA = "0x5254FA0", Offset = "0x5253FA0", VA = "0x5254FA0")]
	private void OpenInstance(OverlayInstance instance, GameObject anchor, bool focusOnOpen, bool forceBelow, bool matchAnchorWidth, float popoverGap, bool animate)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$OpenInstance): 18 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		String detail;
		List<GisketchOverlayManager.OverlayInstance> __this_00;
		GisketchOverlayManager.OverlayInstance[] pGVar3;
		GisketchView view;
		MethodInfo pMVar5;
		GameObject pUVar6;
		String* method_00;
		undefined3 in_register_00000089;
		uint uVar7;
		GisketchUiPerfLog.Scope local_88;
		GameObject local_60;
		GisketchUiPerfLog.Scope local_58;

		uVar7 = CONCAT31(in_register_00000089, matchAnchorWidth);
		local_60 = anchor;
		pMVar5 = (MethodInfo *)"Overlay.OpenInstance";
		local_58._startMs._0_4_ = 0;
		local_58._startMs._4_2_ = 0;
		local_58._startMs._6_2_ = 0;
		local_58._enabled = false;
		local_58._hotLoop = false;
		local_58._26_6_ = 0;
		local_58._area = null;
		local_58._detail = null;
		if (instance == null) {
			method_00 = &"null";
		}
		else {
			method_00 = &instance.Id;
		}
		detail = (String)((MethodInfo)method_00).methodPointer;
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_88._startMs._0_4_ = 0;
		local_88._startMs._4_2_ = 0;
		local_88._startMs._6_2_ = 0;
		local_88._enabled = false;
		local_88._hotLoop = false;
		local_88._26_6_ = 0;
		local_88._area = null;
		local_88._detail = null;
		local_88 = new GisketchUiPerfLog.Scope((String)pMVar5, detail);
		local_58._startMs = local_88._startMs;
		local_58._enabled = local_88._enabled;
		local_58._hotLoop = local_88._hotLoop;
		local_58._26_6_ = local_88._26_6_;
		local_58._area = local_88._area;
		local_58._detail = local_88._detail;
		local_88._area = null;
		local_88._detail = (String)&local_58;
		if (instance == null) {
	label_053551c7: ;
			local_58.Dispose();
			return;
		}
		pUVar6 = instance.Host;
		if (pUVar6 == null) {
			throw new NullReferenceException();
		}
		pMVar5 = (MethodInfo)pUVar6.transform;
		if (pMVar5 == null) {
			throw new NullReferenceException();
		}
		pMVar5.SetAsLastSibling();
		pMVar5.PrepareLayoutForShow(instance, local_60, forceBelow, matchAnchorWidth, popoverGap);
		if (focusOnOpen) {
			pUVar6 = GisketchOverlayManager.CurrentSelected();
		}
		else {
			pUVar6 = null;
		}
		instance._PreviousSelected_k__BackingField = pUVar6;
		__this_00 = this._stack;
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pGVar3 = __this_00._items;
			if (pGVar3 != null) {
				uVar2 = __this_00._size;
				pMVar5 = (MethodInfo)instance;
				if (uVar2 < (uint)pGVar3.Length) {
					__this_00._size = uVar2 + 1;
					pGVar3[(int)uVar2] = instance;
				}
				else {
					__this_00.AddWithResize((object)instance);
				}
				if (instance.Kind == 1) {
					this._activePopover = instance;
					pMVar5 = (MethodInfo)instance;
				}
				if (animate) {
					view = instance.View;
					if ((typeof(GisketchMotion)._2).cctor_finished_or_no_cctor == 0) {
						il2cpp_codegen_runtime_class_init(typeof(GisketchMotion)) ;
					}
					pMVar5 = null;
					GisketchMotion.PlayViewEnter(view);
				}
				if (focusOnOpen) {
					GisketchOverlayManager.SelectInitialFocus(instance);
				}
				goto label_053551c7;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60002A9")]
	[Address(RVA = "0x5255260", Offset = "0x5254260", VA = "0x5255260")]
	private void PrepareLayoutForShow(OverlayInstance instance, GameObject anchor, bool forceBelow, bool matchAnchorWidth, float popoverGap)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PrepareLayoutForShow): 11 lines keep C-only constructs
		String detail;
		GameObject pUVar1;
		String area;
		String* method_00;
		undefined3 in_register_00000081;
		uint uVar2;
		GisketchUiPerfLog.Scope local_78;
		GisketchUiPerfLog.Scope local_58;

		uVar2 = CONCAT31(in_register_00000081, matchAnchorWidth);
		area = "Overlay.PrepareLayoutForShow";
		if (instance == null) {
			method_00 = &"null";
		}
		else {
			method_00 = &instance.Id;
		}
		detail = (String)((MethodInfo)method_00).methodPointer;
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_78._startMs._0_4_ = 0;
		local_78._startMs._4_2_ = 0;
		local_78._startMs._6_2_ = 0;
		local_78._enabled = false;
		local_78._hotLoop = false;
		local_78._26_6_ = 0;
		local_78._area = null;
		local_78._detail = null;
		local_78 = new GisketchUiPerfLog.Scope(area, detail);
		local_58._startMs = local_78._startMs;
		local_58._enabled = local_78._enabled;
		local_58._hotLoop = local_78._hotLoop;
		local_58._26_6_ = local_78._26_6_;
		local_58._area = local_78._area;
		local_58._detail = local_78._detail;
		local_78._area = null;
		local_78._detail = (String)&local_58;
		if (instance == null) {
			throw new NullReferenceException();
		}
		if (instance.Kind == 1) {
			if (matchAnchorWidth) {
				GisketchOverlayManager.MatchPopoverWidth(instance._ContentRoot_k__BackingField, instance.HostRect, anchor);
			}
			pUVar1 = instance.Host;
			GisketchScreenBuilder.SettleLayout(pUVar1, 2);
			GisketchOverlayManager.PositionPopover(instance._ContentRoot_k__BackingField, instance.HostRect, anchor, forceBelow, popoverGap);
			GisketchScreenBuilder.SettleLayout(instance.Host, 1);
		}
		else {
			GisketchOverlayManager.ApplyDialogMaxHeight(instance.HostRect, instance._ContentRoot_k__BackingField);
			pUVar1 = instance.Host;
			GisketchScreenBuilder.SettleLayout(pUVar1, 1);
		}
		local_58.Dispose();
		return;
	}

	[Token(Token = "0x60002AA")]
	[Address(RVA = "0x5254C00", Offset = "0x5253C00", VA = "0x5254C00")]
	private static void PrepareLayout(GisketchOverlayDefinition overlay, GameObject root, RectTransform hostRect, GameObject anchor, bool forceBelow, bool matchAnchorWidth, float popoverGap)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PrepareLayout): 15 lines keep C-only constructs
		String detail;
		String area;
		GameObject pUVar1;
		String* method_00;
		undefined3 in_register_00000081;
		uint uVar2;
		GisketchUiPerfLog.Scope local_78;
		GisketchUiPerfLog.Scope local_58;

		uVar2 = CONCAT31(in_register_00000081, forceBelow);
		area = "Overlay.PrepareLayout";
		local_58._startMs._0_4_ = 0;
		local_58._startMs._4_2_ = 0;
		local_58._startMs._6_2_ = 0;
		local_58._enabled = false;
		local_58._hotLoop = false;
		local_58._26_6_ = 0;
		local_58._area = null;
		local_58._detail = null;
		if (overlay == null) {
			method_00 = &"null";
		}
		else {
			method_00 = &overlay.id;
		}
		detail = (String)((MethodInfo)method_00).methodPointer;
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_78._startMs._0_4_ = 0;
		local_78._startMs._4_2_ = 0;
		local_78._startMs._6_2_ = 0;
		local_78._enabled = false;
		local_78._hotLoop = false;
		local_78._26_6_ = 0;
		local_78._area = null;
		local_78._detail = null;
		local_78 = new GisketchUiPerfLog.Scope(area, detail);
		local_58._startMs = local_78._startMs;
		local_58._enabled = local_78._enabled;
		local_58._hotLoop = local_78._hotLoop;
		local_58._26_6_ = local_78._26_6_;
		local_58._area = local_78._area;
		local_58._detail = local_78._detail;
		local_78._area = null;
		local_78._detail = (String)&local_58;
		if (overlay == null) {
			throw new NullReferenceException();
		}
		if (overlay.modal == false) {
			if (!matchAnchorWidth) goto label_05354d3b;
		}
		else {
			GisketchOverlayManager.ApplyDialogMaxHeight(hostRect, root);
			if (((overlay.modal ^ 0xffU) & matchAnchorWidth) == 0) goto label_05354d3b;
		}
		GisketchOverlayManager.MatchPopoverWidth(root, hostRect, anchor);
	label_05354d3b: ;
		if (hostRect == null) {
			throw new NullReferenceException();
		}
		pUVar1 = hostRect.gameObject;
		GisketchScreenBuilder.SettleLayout(pUVar1, 2);
		if (overlay.modal == false) {
			GisketchOverlayManager.PositionPopover(root, hostRect, anchor, forceBelow, popoverGap);
		}
		pUVar1 = hostRect.gameObject;
		GisketchScreenBuilder.SettleLayout(pUVar1, 1);
		local_58.Dispose();
		return;
	}

	[Token(Token = "0x60002AB")]
	[Address(RVA = "0x5255E10", Offset = "0x5254E10", VA = "0x5255E10")]
	public GameObject ShowDynamicPopover(string id, GisketchNodeDefinition root, GameObject anchor, bool focusOnOpen = true, bool matchAnchorWidth = false, float gap = 0f, bool animate = true, GisketchOverlayLifecycle lifecycle = GisketchOverlayLifecycle.Fresh)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowDynamicPopover): 2 lines keep C-only constructs
		GisketchOverlayDefinition overlay;
		GisketchOverlayManager.OverlayInstance pGVar1;
		GameObject pUVar2;
		undefined7 in_register_00000081;
		MethodInfo method_00;

		method_00 = (MethodInfo)CONCAT71(in_register_00000081, focusOnOpen);
		if (root == null) {
		}
		else {
			pGVar1 = this._activePopover;
			if (pGVar1 != null) {
				this.CloseInstance(pGVar1, false, false);
			}
			overlay.modal = true;
			overlay.dismissOnBackdrop = true;
			overlay = new GisketchOverlayDefinition();
			overlay.id = id;
			overlay.modal = false;
			overlay.root = root;
			overlay.lifecycle = lifecycle;
			pGVar1 = this.ShowOverlay(overlay, anchor, 1, focusOnOpen, false, matchAnchorWidth, gap, animate);
			if (pGVar1 != null) {
			}
		}
		return pUVar2;
	}

	[Token(Token = "0x60002AC")]
	[Address(RVA = "0x5256340", Offset = "0x5255340", VA = "0x5256340")]
	public GameObject ShowDynamicDialog(string id, GisketchNodeDefinition root, bool focusOnOpen = true, bool dismissOnBackdrop = true, bool animate = true, GisketchOverlayLifecycle lifecycle = GisketchOverlayLifecycle.Fresh)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowDynamicDialog): 2 lines keep C-only constructs
		GisketchOverlayManager.OverlayInstance pGVar1;
		GisketchOverlayDefinition overlay;
		undefined7 in_register_00000081;
		MethodInfo method_01;
		GameObject pUVar2;

		method_01 = (MethodInfo)CONCAT71(in_register_00000081, dismissOnBackdrop);
		if (root == null) {
		}
		else {
			pGVar1 = this.FindDialog(id);
			if (pGVar1 != null) {
				this.CloseInstance(pGVar1, false, false);
			}
			overlay.modal = true;
			overlay.dismissOnBackdrop = true;
			overlay = new GisketchOverlayDefinition();
			overlay.id = id;
			overlay.modal = true;
			overlay.dismissOnBackdrop = dismissOnBackdrop;
			overlay.root = root;
			overlay.lifecycle = lifecycle;
			pGVar1 = this.ShowOverlay(overlay, null, 0, focusOnOpen, false, false, 0.0, animate);
			if (pGVar1 != null) {
			}
		}
		return pUVar2;
	}

	[Token(Token = "0x60002AD")]
	[Address(RVA = "0x5256540", Offset = "0x5255540", VA = "0x5256540")]
	public bool ClosePopover(string id, bool animate = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ClosePopover): clean
		GisketchOverlayManager.OverlayInstance pGVar1;
		bool bVar2;

		if (this._activePopover ==null) {
			bVar2 = false;
		}
		else {
			bVar2 = String.IsNullOrEmpty(id);
			if (!bVar2) {
				pGVar1 = this._activePopover;
				if (pGVar1 == null) {
					throw new NullReferenceException();
				}
				bVar2 = (pGVar1.Id != id);
				if (bVar2) {
					return false;
				}
			}
			this.CloseInstance(this._activePopover, false, animate);
			bVar2 = true;
		}
		return bVar2;
	}

	[Token(Token = "0x60002AE")]
	[Address(RVA = "0x52565B0", Offset = "0x52555B0", VA = "0x52565B0")]
	public bool RefreshDialogContent(string id, bool focusOnRefresh = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$RefreshDialogContent): 5 lines keep C-only constructs
		Func<string, GisketchOverlayDefinition> pSVar1;
		GisketchManifestDefinition __this_00;
		GameObject __this_01;
		GisketchOverlayManager.OverlayInstance __this_02;
		GisketchBuildContext pGVar2;
		GisketchOverlayDefinition overlay;
		Transform parent;
		GisketchView inner;
		undefined7 in_register_00000011;
		MethodInfo method_01;
		MethodInfo pMVar3;
		byte[] auVar4 = new byte[16];

		pMVar3 = (MethodInfo)CONCAT71(in_register_00000011, focusOnRefresh);
		__this_02 = this.FindDialog(id);
		if (__this_02 == null) {
			return false;
		}
		pGVar2 = this._context;
		if (pGVar2 == null) goto label_05356702;
		pSVar1 = pGVar2.DialogResolver;
		if (pSVar1 == null) {
	label_05356631: ;
			__this_00 = pGVar2.Manifest;
			if ((__this_00 == null) ||(overlay = __this_00.FindDialog(id), method_01 = (MethodInfo)id, overlay == null)) {
				return false;
			}
		}
		else {
			method_01 = (MethodInfo)id;
			auVar4 = (*(code)pSVar1.invoke_impl)(pSVar1.method_code,id,pSVar1.method);
			overlay = auVar4._0_8_;
			if (overlay == null) {
				pGVar2 = this._context;
				if (pGVar2 == null) goto label_05356702;
				goto label_05356631;
			}
		}
		GisketchOverlayManager.DestroyObject(__this_02._ContentRoot_k__BackingField);
		__this_01 = __this_02.Host;
		if (__this_01 != null) {
			parent = __this_01.transform;
			pGVar2 = this._context;
			inner = GisketchScreenBuilder.BuildOverlay(overlay, parent, pGVar2);
			if (inner != null) {
				GisketchOverlayManager.PrepareLayout(overlay, inner._Root_k__BackingField, __this_02.HostRect, null, false, false, 0.0);
				__this_02.ReplaceContent(inner);
				GisketchScreenBuilder.SettleLayout(__this_02.Host, 1);
				if (focusOnRefresh) {
					GisketchOverlayManager.SelectInitialFocus(__this_02);
					return true;
				}
				return true;
			}
		}
	label_05356702: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60002AF")]
	[Address(RVA = "0x5256920", Offset = "0x5255920", VA = "0x5256920")]
	public bool CycleFocus(bool backwards)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CycleFocus): clean
		int iVar1;
		List<GisketchOverlayManager.OverlayInstance> __this_00;
		bool bVar2;
		object pIVar3;

		__this_00 = this._stack;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		iVar1 = __this_00._size;
		if (0 < iVar1) {
			pIVar3 = __this_00.get_Item(iVar1 + -1);
			if (pIVar3 != null) {
				bVar2 = GisketchFocusNavigation.Cycle(pIVar3[3].monitor, backwards);
				return bVar2;
			}
		}
		return false;
	}

	[Token(Token = "0x60002B0")]
	[Address(RVA = "0x5256A00", Offset = "0x5255A00", VA = "0x5256A00")]
	private static void SelectInitialFocus(OverlayInstance instance)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$SelectInitialFocus): clean
		uint uVar1;
		bool bVar2;
		TMP_InputField __this;
		Selectable selectable;
		GameObject root;

		if ((instance == null) ||(instance.Kind != 0)) {
			__this = null;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			__this = GisketchOverlayManager.FirstInput(instance._ContentRoot_k__BackingField);
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar2 = ((Object)__this != null);
		if (bVar2) {
			GisketchOverlayManager.SetSelected((Selectable)__this);
			if (__this == null) {
				throw new NullReferenceException();
			}
			__this.Select();
			__this.ActivateInputField();
			return;
		}
		if (instance == null) {
			root = null;
		}
		else {
			root = instance._ContentRoot_k__BackingField;
		}
		selectable = GisketchOverlayManager.FirstSelectable(root);
		GisketchOverlayManager.SetSelected(selectable);
		return;
	}

	[Token(Token = "0x60002B1")]
	[Address(RVA = "0x5256AE0", Offset = "0x5255AE0", VA = "0x5256AE0")]
	private static TMP_InputField FirstInput(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$FirstInput): clean
		uint uVar1;
		TMP_InputField x;
		bool bVar2;
		Object[] pSVar3;
		ulong uVar4;
		ulong uVar5;

		bVar2 = ((Object)root == null);
		if (!bVar2) {
			if ((root == null) ||(pSVar3 = root.GetComponentsInChildren<TMP_InputField>(false), pSVar3 == null)) {
	label_05356c0a: ;
				throw new NullReferenceException();
			}
			if (0 < (int)pSVar3.Length) {
				uVar4 = pSVar3.Length & 0xffffffff;
				uVar5 = 0;
				do {
					if (uVar4 <= uVar5) {
						throw new IndexOutOfRangeException();
					}
					x = (TMP_InputField)pSVar3[uVar5];
					bVar2 = ((Object)x != null);
					if (bVar2) {
						if (x == null) goto label_05356c0a;
						bVar2 = x.IsActive();
						if ((bVar2) &&(bVar2 = x.IsInteractable())) {
							return x;
						}
					}
					uVar5 = uVar5 + 1;
					uVar1 = (uint)pSVar3.Length;
					uVar4 = (ulong)uVar1;
				} while ((long)uVar5 < (long)(int)uVar1);
			}
		}
		return null;
	}

	[Token(Token = "0x60002B2")]
	[Address(RVA = "0x5255C00", Offset = "0x5254C00", VA = "0x5255C00")]
	private static void ApplyDialogMaxHeight(RectTransform host, GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ApplyDialogMaxHeight): 1 lines keep C-only constructs
		YGValue GVar1;
		bool bVar2;
		int iVar3;
		FlexLayout __this;
		RectTransform __this_00;
		YGValue value;
		float value_00;
		float fVar4;
		Rect UVar5;

		__this = null;
		bVar2 = ((Object)root != null);
		if (bVar2) {
			if (root == null) goto label_05355e06;
			__this = root.GetComponent<FlexLayout>();
		}
		bVar2 = ((Object)__this == null);
		if (bVar2) {
			return;
		}
		if (host != null) {
			UVar5 = host.rect;
			fVar4 = UVar5.m_Height;
			if (((fVar4 <= 0.0) &&(__this_00 = (RectTransform)host.parent, __this_00 != null)) &&(__this_00.klass == typeof(RectTransform))) {
				UVar5 = __this_00.rect;
				fVar4 = UVar5.m_Height;
			}
			if (fVar4 <= 0.0) {
				iVar3 = Screen.height;
				fVar4 = (float)iVar3;
			}
			if (__this != null) {
				value_00 = 0.0;
				if (0.0 <= fVar4 + -64.0) {
					value_00 = fVar4 + -64.0;
				}
				GVar1 = __this._maxHeight;
				if (GVar1.Unit == 1) {
					fVar4 = GVar1.Value;
					if ((0.0 < fVar4) && (fVar4 <= value_00)) {
						value_00 = fVar4;
					}
				}
				value = ((YGValue)value_00);
				__this.MaxHeight = value;
				return;
			}
		}
	label_05355e06: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60002B3")]
	[Address(RVA = "0x52556E0", Offset = "0x52546E0", VA = "0x52556E0")]
	private static void PositionPopover(GameObject root, RectTransform host, GameObject anchor, bool forceBelow = false, float gap = 24f)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PositionPopover): 22 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		FlexLayout __this;
		RectTransform __this_00;
		YGValue GVar3;
		float fVar4;
		ulong extraout_XMM0_Qb;
		float fVar5;
		float fVar7;
		ulong in_XMM1_Qb;
		ulong uVar8;
		byte[] auVar6 = new byte[16];
		float fVar10;
		byte[] auVar9 = new byte[16];
		float fVar11;
		float fVar12;
		float fVar13;
		float fVar14;
		Vector3 value;
		Rect UVar15;
		Rect UVar16;
		Rect UVar17;
		float local_e8;
		float fStack_e4;
		float fStack_e0;
		float fStack_dc;
		Vector2 local_d8;
		float fStack_d0;
		float fStack_cc;
		float local_b8;
		float fStack_b4;
		float local_88;
		float fStack_84;

		__this = null;
		bVar2 = ((Object)root != null);
		if (bVar2) {
			if (root == null) goto label_05355bf9;
			__this = root.GetComponent<FlexLayout>();
		}
		__this_00 = null;
		bVar2 = ((Object)root != null);
		if (bVar2) {
			if (root == null) goto label_05355bf9;
			__this_00 = root.GetComponent<RectTransform>();
		}
		bVar2 = ((Object)__this == null);
		if (!bVar2) {
			bVar2 = ((Object)__this_00 == null);
			if (!bVar2) {
				bVar2 = ((Object)host == null);
				if (!bVar2) {
					bVar2 = ((Object)anchor == null);
					if (!bVar2) {
						if (host != null) {
							UVar15 = host.rect;
							UVar16 = GisketchOverlayManager.AnchorRect(host, anchor);
							uVar8 = in_XMM1_Qb;
							if (__this_00 != null) {
								UVar17 = __this_00.rect;
								auVar9._0_8_ = UVar17._8_8_;
								auVar9._8_8_ = uVar8;
								if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
									auVar9 = maxps(_DAT_01005870, auVar9);
								}
								else {
									auVar9 = maxps(_DAT_01005870, auVar9);
								}
								fStack_84 = UVar15.m_YMin;
								local_d8.y = UVar16.m_YMin;
								local_b8 = UVar15.m_Width;
								fStack_b4 = UVar15.m_Height;
								fVar11 = fStack_b4 + fStack_84;
								local_e8 = UVar16.m_Width;
								fStack_e4 = UVar16.m_Height;
								fStack_e0 = (float)in_XMM1_Qb;
								fStack_dc = (float)((ulong)in_XMM1_Qb >> 0x20);
								fVar14 = fStack_e4 + local_d8.y;
								fVar10 = auVar9._4_4_;
								bVar2 = true;
								if ((!forceBelow) && (local_d8.y - fStack_84 < fVar10 + gap)) {
									bVar2 = fVar11 - fVar14 <= local_d8.y - fStack_84;
								}
								local_d8.x = UVar16.m_XMin;
								fStack_d0 = (float)extraout_XMM0_Qb;
								fStack_cc = (float)((ulong)extraout_XMM0_Qb >> 0x20);
								local_d8.x = local_d8.x + local_e8 * 0.5;
								fVar7 = local_d8.y + fStack_e4 * 0.5;
								fVar5 = local_d8.x - auVar9._0_4_ * 0.5;
								local_88 = UVar15.m_XMin;
								fVar13 = (local_b8 + local_88) - auVar9._0_4_;
								fVar4 = fVar13;
								if (fVar5 <= fVar13) {
									fVar4 = fVar5;
								}
								uVar1 = (typeof(Rect)._2).cctor_finished_or_no_cctor;
								if (bVar2) {
									if (uVar1 == 0) {
									}
									fVar12 = local_d8.y - gap;
									fVar14 = local_d8.y;
								}
								else {
									if (uVar1 == 0) {
									}
									fVar12 = fVar14 + gap + fVar10;
								}
								fVar4 = (float)(~-(uint)(fVar13 < local_88) &(~-(uint)(local_88 <= fVar5) & (uint)local_88 |(uint)fVar4 & -(uint)(local_88 <= fVar5)) | -(uint)(fVar13 < local_88) & (uint)local_88);
								GVar3 = ((YGValue)fVar4 - local_88);
								if (__this != null) {
									fVar13 = fStack_84 + fVar10;
									fVar5 = fVar11;
									if (fVar12 <= fVar11) {
										fVar5 = fVar12;
									}
									fVar5 = (float)(-(uint)(fVar11 < fVar13) & (uint)fVar13 | ~-(uint)(fVar11 < fVar13) &(~-(uint)(fVar13 <= fVar12) & (uint)fVar13 |(uint)fVar5 & -(uint)(fVar13 <= fVar12)));
									__this.MarginLeft = GVar3;
									GVar3 = ((YGValue)fVar11 - fVar5);
									__this.MarginTop = GVar3;
									auVar6._0_4_ = local_d8.x - fVar4;
									auVar6._4_4_ = fVar7 - (fVar5 - fVar10);
									auVar6._8_4_ = (fStack_d0 + fStack_e0 * 0.0) -(float)(~(uint)fStack_b4 &(~(uint)fVar7 & (uint)fStack_84 | (uint)fStack_b4 & (uint)fVar7) |(uint)fStack_b4 & (uint)fStack_84);
									auVar6._12_4_ =(fStack_cc + fStack_dc * 0.0) -(float)((uint)fVar11 & (uint)fStack_84 | ~(uint)fVar11 & (~(uint)fVar14 & (uint)fStack_84 | (uint)fVar11 & (uint)fVar14));
									auVar9 = divps(auVar6, auVar9);
									value = __this_00.position;
									local_d8 = auVar9._0_8_;
									__this_00.pivot = local_d8;
									__this_00.position = value;
									return;
								}
							}
						}
	label_05355bf9: ;
						throw new NullReferenceException();
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x5256E90", Offset = "0x5255E90", VA = "0x5256E90")]
	private static Rect AnchorRect(RectTransform host, GameObject anchor)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$AnchorRect): 31 lines keep C-only constructs
		uint uVar1;
		Vector2 UVar2;
		uint uVar3;
		uint uVar4;
		byte[] auVar5 = new byte[16];
		Vector3 worldPoint;
		byte[] auVar6 = new byte[16];
		bool bVar7;
		RectTransform pUVar8;
		Transform __this;
		Vector3[] fourCornersArray;
		ulong uVar9;
		RectTransform __this_00;
		float pfVar10;
		ulong uVar11;
		Vector2 UVar12;
		Vector2 UVar13;
		ulong uVar15;
		byte[] auVar14 = new byte[16];
		ulong extraout_XMM0_Qb;
		float fVar16;
		byte[] auVar17 = new byte[16];
		Vector3 UVar18;
		Vector3 worldPoint_00;
		Rect UVar19;
		Vector2 local_70;
		float local_68;
		float fStack_64;
		uint uStack_60;
		uint uStack_5c;
		float local_4c;
		Vector2 local_48;
		ulong uStack_40;

		if (anchor != null) {
			pUVar8 = (RectTransform)anchor.transform;
			__this_00 = null;
			if ((pUVar8 != null) &&(__this_00 = null, pUVar8.klass == typeof(RectTransform))) {
				__this_00 = pUVar8;
			}
			bVar7 = ((Object)__this_00 == null);
			if (bVar7) {
				__this = anchor.transform;
				if (__this != null) {
					UVar18 = __this.position;
					worldPoint = UVar18;
					if ((typeof(RectTransformUtility)._2).cctor_finished_or_no_cctor == 0) {
						local_68 = UVar18.z;
						worldPoint.z = local_68;
						worldPoint.x = UVar18.x;
						worldPoint.y = UVar18.y;
					}
					UVar12 = RectTransformUtility.WorldToScreenPoint(null, worldPoint);
					local_70.x = 0.0;
					local_70.y = 0.0;
					RectTransformUtility.ScreenPointToLocalPointInRectangle(host, UVar12, null, ref local_70);
					UVar13 = local_70;
					UVar2 = (Vector2.zeroVector);
					local_68 = UVar2.x;
					fStack_64 = UVar2.y;
	label_05357264: ;
					UVar19.m_Height = fStack_64;
					UVar19.m_Width = local_68;
					UVar19.m_XMin = UVar13.x;
					UVar19.m_YMin = UVar13.y;
					return (Rect)UVar19;
				}
			}
			else {
				fourCornersArray = (Vector3[])new Vector3[4];
				if (__this_00 != null) {
					__this_00.GetWorldCorners(fourCornersArray);
					if (fourCornersArray != null) {
						if ((int)fourCornersArray.Length == 0) {
	label_05357273: ;
							throw new IndexOutOfRangeException();
						}
						uVar1 = fourCornersArray[0].x;
						uVar3 = fourCornersArray[0].y;
						UVar18.y = (float)uVar3;
						UVar18.x = (float)uVar1;
						fVar16 = fourCornersArray[0].z;
						if ((typeof(RectTransformUtility)._2).cctor_finished_or_no_cctor == 0) {
							local_68 = fVar16;
							fVar16 = local_68;
						}
						UVar18.z = fVar16;
						UVar12 = RectTransformUtility.WorldToScreenPoint(null, UVar18);
						local_70.x = 0.0;
						local_70.y = 0.0;
						RectTransformUtility.ScreenPointToLocalPointInRectangle(host, UVar12, null, ref local_70);
						auVar14._8_8_ = 0;
						auVar14._0_4_ = local_70.x;
						auVar14._4_4_ = local_70.y;
						local_68 = local_70.x;
						fStack_64 = local_70.y;
						uStack_60 = 0;
						uStack_5c = 0;
						if ((int)fourCornersArray.Length < 2) {
							UVar13 = local_70;
						}
						else {
							uVar9 = fourCornersArray.Length & 0xffffffff;
							pfVar10 = &fourCornersArray[1].z;
							uVar11 = 1;
							do {
								if (uVar9 <= uVar11) goto label_05357273;
								UVar12.x = ((Vector3)(pfVar10 + -2)).x;
								UVar12.y = ((Vector3)(pfVar10 + -2)).y;
								fVar16 = *pfVar10;
								if ((typeof(RectTransformUtility)._2).cctor_finished_or_no_cctor == 0) {
									uStack_40 = 0;
									local_4c = *pfVar10;
									local_48 = UVar12;
									fVar16 = local_4c;
									UVar12 = local_48;
								}
								worldPoint_00.z = fVar16;
								worldPoint_00.x = UVar12.x;
								worldPoint_00.y = UVar12.y;
								UVar12 = RectTransformUtility.WorldToScreenPoint(null, worldPoint_00);
								uVar15 = extraout_XMM0_Qb;
								if (Il2CppMethodInitialized_07542949 == false) {
									local_48 = UVar12;
									uStack_40 = extraout_XMM0_Qb;
									Il2CppMethodInitialized_07542949 = true;
									UVar12 = local_48;
									uVar15 = uStack_40;
								}
								local_70.x = 0.0;
								local_70.y = 0.0;
								if ((typeof(RectTransformUtility)._2).cctor_finished_or_no_cctor == 0) {
									local_48 = UVar12;
									uStack_40 = uVar15;
									UVar12 = local_48;
								}
								RectTransformUtility.ScreenPointToLocalPointInRectangle(host, UVar12, null, ref local_70);
								auVar17._8_8_ = 0;
								auVar17._0_4_ = local_70.x;
								auVar17._4_4_ = local_70.y;
								auVar14 = minps(auVar14, auVar17);
								auVar6._4_4_ = fStack_64;
								auVar6._0_4_ = local_68;
								auVar6._8_4_ = uStack_60;
								auVar6._12_4_ = uStack_5c;
								auVar5._8_8_ = 0;
								auVar5._0_4_ = local_70.x;
								auVar5._4_4_ = local_70.y;
								auVar17 = maxps(auVar6, auVar5);
								local_68 = auVar17._0_4_;
								fStack_64 = auVar17._4_4_;
								uStack_60 = auVar17._8_4_;
								uStack_5c = auVar17._12_4_;
								uVar11 = uVar11 + 1;
								uVar4 = (uint)fourCornersArray.Length;
								uVar9 = (ulong)uVar4;
								pfVar10 = pfVar10 + 3;
								UVar13 = auVar14._0_8_;
							} while ((long)uVar11 < (long)(int)uVar4);
						}
						local_68 = local_68 - UVar13.x;
						fStack_64 = fStack_64 - UVar13.y;
						goto label_05357264;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x5255540", Offset = "0x5254540", VA = "0x5255540")]
	private static void MatchPopoverWidth(GameObject root, RectTransform host, GameObject anchor)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$MatchPopoverWidth): clean
		bool bVar1;
		FlexLayout __this;
		YGValue value;
		float value_00;
		Rect UVar2;

		__this = null;
		bVar1 = ((Object)root != null);
		if (bVar1) {
			if (root == null) goto label_053556d3;
			__this = root.GetComponent<FlexLayout>();
		}
		bVar1 = ((Object)__this == null);
		if (!bVar1) {
			bVar1 = ((Object)host == null);
			if (!bVar1) {
				bVar1 = ((Object)anchor == null);
				if (!bVar1) {
					UVar2 = GisketchOverlayManager.AnchorRect(host, anchor);
					value_00 = 1.0;
					if (1.0 <= UVar2.m_Width) {
						value_00 = UVar2.m_Width;
					}
					value = ((YGValue)value_00);
					if (__this != null) {
						__this.Width = value;
						return;
					}
	label_053556d3: ;
					throw new NullReferenceException();
				}
			}
		}
		return;
	}

	[Token(Token = "0x60002B6")]
	[Address(RVA = "0x52573A0", Offset = "0x52563A0", VA = "0x52573A0")]
	private static Vector2 LocalPoint(RectTransform host, Vector2 screenPoint)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$LocalPoint): 14 lines keep C-only constructs
		Vector2 screenPoint_00;
		float fVar1;
		float fVar2;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		Vector2 local_20;
		byte[] local_18 = new byte[8];
		uint uStack_10;
		uint uStack_c;

		fVar1 = screenPoint.x;
		fVar2 = screenPoint.y;
		if (Il2CppMethodInitialized_07542949 == false) {
			uStack_10 = in_XMM0_Dc;
			local_18 = (byte[])screenPoint;
			uStack_c = in_XMM0_Dd;
			Il2CppMethodInitialized_07542949 = true;
			fVar1 = (float)local_18._0_4_;
			fVar2 = (float)local_18._4_4_;
			in_XMM0_Dc = uStack_10;
			in_XMM0_Dd = uStack_c;
		}
		local_20.x = 0.0;
		local_20.y = 0.0;
		if ((typeof(RectTransformUtility)._2).cctor_finished_or_no_cctor == 0) {
			local_18._4_4_ = fVar2;
			local_18._0_4_ = fVar1;
			uStack_10 = in_XMM0_Dc;
			uStack_c = in_XMM0_Dd;
			fVar1 = (float)local_18._0_4_;
			fVar2 = (float)local_18._4_4_;
		}
		screenPoint_00.y = fVar2;
		screenPoint_00.x = fVar1;
		RectTransformUtility.ScreenPointToLocalPointInRectangle(host, screenPoint_00, null, ref local_20);
		return (Vector2)local_20;
	}

	[Token(Token = "0x60002B7")]
	[Address(RVA = "0x5257280", Offset = "0x5256280", VA = "0x5257280")]
	private static Vector2 PopoverSize(RectTransform rect)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PopoverSize): 8 lines keep C-only constructs
		byte[] auVar1 = new byte[16];
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		Rect UVar2;

		if (rect == null) {
			throw new NullReferenceException();
		}
		UVar2 = rect.rect;
		auVar1._8_4_ = in_XMM1_Dc;
		auVar1._0_8_ = UVar2._8_8_;
		auVar1._12_4_ = in_XMM1_Dd;
		auVar1 = maxps(_DAT_01005870, auVar1);
		return (Vector2)auVar1._0_8_;
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x5257320", Offset = "0x5256320", VA = "0x5257320")]
	private static Vector2 PivotFor(Vector2 anchor, float left, float top, Vector2 size)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$PivotFor): 16 lines keep C-only constructs
		ulong in_XMM0_Qb;
		byte[] auVar1 = new byte[16];
		byte[] auVar2 = new byte[16];
		float in_XMM1_Db;
		float in_XMM2_Db;
		uint in_XMM3_Dc;
		uint in_XMM3_Dd;

		auVar1._0_4_ = anchor.x - left;
		auVar1._4_4_ = anchor.y - (top - size.y);
		auVar1._8_4_ = (float)in_XMM0_Qb - in_XMM1_Db;
		auVar1._12_4_ = (float)((ulong)in_XMM0_Qb >> 0x20) - in_XMM2_Db;
		auVar2._8_4_ = in_XMM3_Dc;
		auVar2._0_8_ = size;
		auVar2._12_4_ = in_XMM3_Dd;
		auVar2 = divps(auVar1, auVar2);
		return (Vector2)auVar2._0_8_;
	}

	[Token(Token = "0x60002B9")]
	[Address(RVA = "0x5257340", Offset = "0x5256340", VA = "0x5257340")]
	private static void SetPivot(RectTransform rect, Vector2 pivot)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$SetPivot): clean
		Vector3 value;

		if (rect == null) {
			throw new NullReferenceException();
		}
		value = rect.position;
		rect.pivot = pivot;
		rect.position = value;
		return;
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x52572F0", Offset = "0x52562F0", VA = "0x52572F0")]
	private static float Clamp(float value, float min, float max)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Clamp): clean
		float fVar1;

		fVar1 = max;
		if (value <= max) {
			fVar1 = value;
		}
		return (float)(~-(uint)(max < min) &(~-(uint)(min <= value) & (uint)min | (uint)fVar1 & -(uint)(min <= value)) | -(uint)(max < min) & (uint)min);
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x5257420", Offset = "0x5256420", VA = "0x5257420")]
	public GisketchOverlayManager(Transform layer, GisketchBuildContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$.ctor): 3 lines keep C-only constructs
		uint uVar1;
		OrdinalIgnoreCaseComparer comparer;
		List<GisketchOverlayManager.OverlayInstance> __this_00;
		Dictionary<string, GisketchOverlayManager.OverlayInstance> __this_01;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<GisketchOverlayManager.OverlayInstance>));
		__this_00 = new List<object>();
		this._stack = __this_00;
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
		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, GisketchOverlayManager.OverlayInstance>));
		__this_01 = new Dictionary<object, object>((System_Collections_Generic_IEqualityComparer_TKey__o)comparer);
		this._cached = __this_01;
		base();
		this._layer = layer;
		this._context = context;
		return;
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x5257600", Offset = "0x5256600", VA = "0x5257600")]
	public void ShowDialog(string id, bool focusOnOpen = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowDialog): 14 lines keep C-only constructs
		Func<string, GisketchOverlayDefinition> pSVar1;
		GisketchManifestDefinition __this_00;
		GisketchOverlayManager.OverlayInstance instance;
		MethodInfo method_00;
		GisketchBuildContext pGVar2;
		String pSVar3;
		byte[] auVar5 = new byte[16];
		GisketchUiPerfLog.Scope local_78;
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
		local_78._area = null;
		local_78._detail = null;
		local_78._startMs._0_4_ = 0;
		local_78._startMs._4_2_ = 0;
		local_78._startMs._6_2_ = 0;
		local_78._enabled = false;
		local_78._hotLoop = false;
		local_78._26_6_ = 0;
		local_78 = new GisketchUiPerfLog.Scope("Overlay.ShowDialog", id);
		local_58._startMs = local_78._startMs;
		local_58._enabled = local_78._enabled;
		local_58._hotLoop = local_78._hotLoop;
		local_58._26_6_ = local_78._26_6_;
		local_58._area = local_78._area;
		local_58._detail = local_78._detail;
		local_78._area = null;
		local_78._detail = (String)&local_58;
		instance = this.FindDialog(id);
		if (instance != null) {
			method_00 = (MethodInfo)String.Concat("focus existing ", id);
			if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			}
			GisketchUiPerfLog.Mark("Overlay.ShowDialog", (String)method_00);
			if (focusOnOpen) {
				GisketchOverlayManager.SelectInitialFocus(instance);
			}
			goto label_05357820;
		}
		pGVar2 = this._context;
		if (pGVar2 == null) {
	label_05357839: ;
			throw new NullReferenceException();
		}
		pSVar1 = pGVar2.DialogResolver;
		if (pSVar1 == null) {
	label_05357770: ;
			__this_00 = pGVar2.Manifest;
			if (__this_00 != null) {
				method_00 = (MethodInfo)__this_00.FindDialog(id);
				if (method_00 != null) goto label_05357786;
			}
			pSVar3 = String.Concat("missing ", id);
			if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			}
			GisketchUiPerfLog.Mark("Overlay.ShowDialog", pSVar3);
			pSVar3 = String.Concat("Gisketch dialog not found: ", id);
			method_00 = null;
			Debug.LogWarning((object)pSVar3);
		}
		else {
			auVar5 = (*(code)pSVar1.invoke_impl)(pSVar1.method_code,id,pSVar1.method);
			method_00 = auVar5._0_8_;
			if (method_00 == null) {
				pGVar2 = this._context;
				if (pGVar2 == null) goto label_05357839;
				goto label_05357770;
			}
	label_05357786: ;
			this.ShowOverlay((GisketchOverlayDefinition)method_00, null, 0, focusOnOpen, false, false, 24.0, true);
		}
	label_05357820: ;
		local_58.Dispose();
		return;
	}

	[Token(Token = "0x60002BE")]
	[Address(RVA = "0x52578A0", Offset = "0x52568A0", VA = "0x52578A0")]
	public GameObject ShowPopover(string id, [Optional] GameObject anchor, bool focusOnOpen = true, float gap = 24f)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowPopover): clean
		GisketchBuildContext pGVar1;
		GisketchManifestDefinition __this_00;
		GameObject root;
		bool bVar2;
		GisketchOverlayDefinition overlay;
		GisketchOverlayManager.OverlayInstance pGVar3;

		pGVar1 = this._context;
		if ((pGVar1 == null) ||(__this_00 = pGVar1.Manifest, __this_00 == null)) goto label_053579be;
		overlay = __this_00.FindPopover(id);
		if (overlay == null) {
			return null;
		}
		pGVar3 = this._activePopover;
		if (pGVar3 != null) {
			bVar2 = (pGVar3.Id == id);
			pGVar3 = this._activePopover;
			if (bVar2) {
				if (pGVar3 == null) {
	label_053579be: ;
					throw new NullReferenceException();
				}
				root = pGVar3.Host;
				GisketchScreenBuilder.SettleLayout(root, 2);
				pGVar3 = this._activePopover;
				if (pGVar3 == null) goto label_053579be;
				GisketchOverlayManager.PositionPopover(pGVar3._ContentRoot_k__BackingField, pGVar3.HostRect, anchor, false, gap);
				pGVar3 = this._activePopover;
				if (pGVar3 == null) goto label_053579be;
				GisketchScreenBuilder.SettleLayout(pGVar3.Host, 1);
				pGVar3 = this._activePopover;
				if (focusOnOpen) {
					GisketchOverlayManager.SelectInitialFocus(pGVar3);
					pGVar3 = this._activePopover;
				}
				if (pGVar3 == null) goto label_053579be;
				goto label_05357a06;
			}
			this.CloseInstance(pGVar3, false, false);
		}
		pGVar3 = this.ShowOverlay(overlay, anchor, 1, focusOnOpen, false, false, gap, true);
		if (pGVar3 == null) {
			return null;
		}
	label_05357a06: ;
		return pGVar3._ContentRoot_k__BackingField;
	}

	[Token(Token = "0x60002BF")]
	[Address(RVA = "0x5257B40", Offset = "0x5256B40", VA = "0x5257B40")]
	public bool CloseTop(bool restoreFocus = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CloseTop): clean
		int iVar1;
		List<GisketchOverlayManager.OverlayInstance> __this_00;
		bool bVar2;
		GisketchOverlayManager.OverlayInstance instance;

		__this_00 = this._stack;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		iVar1 = __this_00._size;
		if (iVar1 < 1) {
			return false;
		}
		instance = (GisketchOverlayManager.OverlayInstance)__this_00.get_Item(iVar1 + -1);
		if (instance == null) {
			return false;
		}
		if ((((instance.Kind == 0) && (instance.GuardUnsavedChanges != false)) &&(bVar2 = (instance.Id != "gisketch-unsaved-changes"))) &&(bVar2 = GisketchFormState.IsDirty(instance._ContentRoot_k__BackingField))) {
			this.ShowUnsavedChanges(instance);
			return true;
		}
		this.CloseInstance(instance, restoreFocus, true);
		return true;
	}

	[Token(Token = "0x60002C0")]
	[Address(RVA = "0x5257DA0", Offset = "0x5256DA0", VA = "0x5257DA0")]
	public bool CloseTopForced(bool restoreFocus = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CloseTopForced): clean
		int iVar1;
		List<GisketchOverlayManager.OverlayInstance> __this_00;
		GisketchOverlayManager.OverlayInstance instance;

		__this_00 = this._stack;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		iVar1 = __this_00._size;
		if (0 < iVar1) {
			instance = (GisketchOverlayManager.OverlayInstance)__this_00.get_Item(iVar1 + -1);
			if (instance != null) {
				this.CloseInstance(instance, restoreFocus, true);
				return true;
			}
		}
		return false;
	}

	[Token(Token = "0x60002C1")]
	[Address(RVA = "0x5257E30", Offset = "0x5256E30", VA = "0x5257E30")]
	public bool CloseDialog(string id, bool restoreFocus = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CloseDialog): clean
		bool bVar1;
		GisketchOverlayManager.OverlayInstance instance;

		instance = this.FindDialog(id);
		if (instance != null) {
			if ((instance.Kind == 0) && (instance.GuardUnsavedChanges != false)) {
				bVar1 = (instance.Id != "gisketch-unsaved-changes");
				if (bVar1) {
					bVar1 = GisketchFormState.IsDirty(instance._ContentRoot_k__BackingField);
					if (bVar1) {
						this.ShowUnsavedChanges(instance);
						goto label_05357e7c;
					}
				}
			}
			this.CloseInstance(instance, restoreFocus, true);
		}
	label_05357e7c: ;
		return instance != null;
	}

	[Token(Token = "0x60002C2")]
	[Address(RVA = "0x5257ED0", Offset = "0x5256ED0", VA = "0x5257ED0")]
	public bool CloseDialogForced(string id, bool restoreFocus = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CloseDialogForced): clean
		GisketchOverlayManager.OverlayInstance instance;

		instance = this.FindDialog(id);
		if (instance != null) {
			this.CloseInstance(instance, restoreFocus, true);
		}
		return instance != null;
	}

	[Token(Token = "0x60002C3")]
	[Address(RVA = "0x5257F10", Offset = "0x5256F10", VA = "0x5257F10")]
	public void DiscardPendingUnsavedChanges()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$DiscardPendingUnsavedChanges): 1 lines keep C-only constructs
		int iVar1;
		List<GisketchOverlayManager.OverlayInstance> __this_00;
		Object x;
		String overlayId;
		GameObject source;
		bool bVar2;
		GisketchOverlayManager.OverlayInstance pGVar3;

		if (Il2CppMethodInitialized_0754294f == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchFormDiscardActions)) ;
			Il2CppMethodInitialized_0754294f = true;
		}
		if (Il2CppMethodInitialized_07542959 == false) {
			Il2CppMethodInitialized_07542959 = true;
			__this_00 = this._stack;
		}
		else {
			__this_00 = this._stack;
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		iVar1 = __this_00._size;
		if (((0 < iVar1) &&(pGVar3 = (GisketchOverlayManager.OverlayInstance)__this_00.get_Item(iVar1 + -1), pGVar3 != null)) &&(bVar2 = (pGVar3.Id == "gisketch-unsaved-changes"))) {
			this.CloseInstance(pGVar3, false, true);
		}
		pGVar3 = this._pendingUnsavedClose;
		this._pendingUnsavedClose =null;
		if (pGVar3 != null) {
			x = (Object)pGVar3.Host;
			bVar2 = (x == null);
			if (!bVar2) {
				overlayId = pGVar3.Id;
				source = pGVar3._ContentRoot_k__BackingField;
				GisketchFormDiscardActions.Invoke(overlayId, source);
				this.CloseInstance(pGVar3, true, true);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x60002C4")]
	[Address(RVA = "0x52580A0", Offset = "0x52570A0", VA = "0x52580A0")]
	public void CloseAll()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CloseAll): clean
		int iVar1;
		List<GisketchOverlayManager.OverlayInstance> __this_00;
		GisketchOverlayManager.OverlayInstance instance;

		__this_00 = this._stack;
		while(true) {
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			iVar1 = __this_00._size;
			if (iVar1 < 1) break;
			instance = (GisketchOverlayManager.OverlayInstance)__this_00.get_Item(iVar1 + -1);
			this.CloseInstance(instance, false, false);
			__this_00 = this._stack;
		}
		this._pendingUnsavedClose =null;
		GisketchOverlayManager.SetSelected(null) ;
		return;
	}

	[Token(Token = "0x60002C5")]
	[Address(RVA = "0x5258140", Offset = "0x5257140", VA = "0x5258140")]
	public void Clear()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Clear): 5 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		bool bVar2;
		System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o __this_00;
		MethodInfo method_00;
		System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o local_48;
		byte local_20;

		local_48._dictionary = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._currentValue = null;
		this.CloseAll();
		pSVar1 = (Dictionary<object, object>)this._cached;
		if (pSVar1 != null) {
			__this_00 = pSVar1.Values;
			if (__this_00 != null) {
				local_48 = __this_00.GetEnumerator();
				local_20 = (byte)&local_48;
				while(true) {
					method_00 = MethodInfo_System_Collections_Generic_Dictionary_ValueCollection_Enumerator_string_GisketchOverlayManager_O_71902d0 ;
					bVar2 = local_48.MoveNext();
					if (!bVar2) break;
					if (local_48._currentValue == null) {
						throw new NullReferenceException();
					}
					GisketchOverlayManager.DestroyObject((GameObject)local_48._currentValue[2].klass);
				}
				local_48.Dispose();
				pSVar1 = (Dictionary<object, object>)this._cached;
				if (pSVar1 != null) {
					pSVar1.Clear();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x52582D0", Offset = "0x52572D0", VA = "0x52582D0")]
	public void FocusTopFromNavigation()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$FocusTopFromNavigation): clean
		int iVar1;
		List<GisketchOverlayManager.OverlayInstance> __this_00;
		bool bVar2;
		GisketchOverlayManager.OverlayInstance instance;
		uint index;

		__this_00 = this._stack;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		iVar1 = __this_00._size;
		if (0 < iVar1) {
			index = iVar1 - 1;
			instance = (GisketchOverlayManager.OverlayInstance)__this_00.get_Item(index);
			if (instance != null) {
				bVar2 = GisketchOverlayManager.ContainsSelected(instance);
				if (!bVar2) {
					GisketchOverlayManager.SelectInitialFocus(instance);
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x5256130", Offset = "0x5255130", VA = "0x5256130")]
	private OverlayInstance ShowOverlay(GisketchOverlayDefinition overlay, GameObject anchor, OverlayKind kind, bool focusOnOpen, bool forceBelow = false, bool matchAnchorWidth = false, float popoverGap = 24f, bool animate = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowOverlay): 10 lines keep C-only constructs
		String area;
		GameObject anchor_00;
		String pSVar1;
		MethodInfo instance;
		String* ppSVar3;
		GisketchUiPerfLog.Scope local_88;
		GameObject local_60;
		GisketchUiPerfLog.Scope local_58;

		local_60 = anchor;
		local_88._area =(String)typeof(GisketchOverlayManager.OverlayKind);
		local_88._detail = (String)0xffffffffffffffff;
		local_88._startMs = CONCAT44(local_88._startMs._4_4_, kind);
		pSVar1 = local_88.ToString();
		area = "Overlay.ShowOverlay";
		if (overlay == null) {
			ppSVar3 = &"null";
		}
		else {
			ppSVar3 = &overlay.id;
		}
		pSVar1 = String.Concat(pSVar1, " ", ((GisketchOverlayDefinition)ppSVar3).id);
		if ((typeof(GisketchUiPerfLog)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchUiPerfLog)) ;
		}
		local_88._startMs._0_4_ = 0;
		local_88._startMs._4_2_ = 0;
		local_88._startMs._6_2_ = 0;
		local_88._enabled = false;
		local_88._hotLoop = false;
		local_88._26_6_ = 0;
		local_88._area = null;
		local_88._detail = null;
		local_88 = new GisketchUiPerfLog.Scope(area, pSVar1);
		anchor_00 = local_60;
		local_58._startMs = local_88._startMs;
		local_58._enabled = local_88._enabled;
		local_58._hotLoop = local_88._hotLoop;
		local_58._26_6_ = local_88._26_6_;
		local_58._area = local_88._area;
		local_58._detail = local_88._detail;
		local_88._area = null;
		local_88._detail = (String)&local_58;
		instance = (MethodInfo)this.GetOrBuildOverlayInstance(overlay, local_60, kind, forceBelow, matchAnchorWidth, popoverGap);
		this.OpenInstance((GisketchOverlayManager.OverlayInstance)instance, anchor_00, focusOnOpen, forceBelow, matchAnchorWidth, popoverGap, animate);
		local_58.Dispose();
		return (GisketchOverlayManager.OverlayInstance)instance;
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x52548D0", Offset = "0x52538D0", VA = "0x52548D0")]
	private static void ConfigureHost(FlexLayout flex, bool modal)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ConfigureHost): clean
		YGValue GVar1;

		if (flex == null) {
			throw new NullReferenceException();
		}
		flex.FlexDirection = 0;
		flex.FlexWrap = 0;
		flex.JustifyContent = (uint)modal;
		flex.AlignItems = modal + 1;
		GVar1 = YGValue.Percent(100.0);
		flex.Width = GVar1;
		GVar1 = YGValue.Percent(100.0);
		flex.Height = GVar1;
		return;
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x5254710", Offset = "0x5253710", VA = "0x5254710")]
	private static string OverlayName(GisketchOverlayDefinition overlay)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$OverlayName): 2 lines keep C-only constructs
		bool bVar1;
		String* ppSVar2;
		String pSVar3;

		if (overlay == null) {
			throw new NullReferenceException();
		}
		if (overlay.modal == false) {
			ppSVar2 = &"Popover";
		}
		else {
			ppSVar2 = &"Dialog";
		}
		pSVar3 = *ppSVar2;
		bVar1 = String.IsNullOrEmpty(overlay.id);
		if (bVar1) {
			pSVar3 = String.Concat("AoTTG ", pSVar3);
			return pSVar3;
		}
		pSVar3 = String.Concat("AoTTG ", pSVar3, " ", overlay.id);
		return pSVar3;
	}

	[Token(Token = "0x60002CA")]
	[Address(RVA = "0x5254990", Offset = "0x5253990", VA = "0x5254990")]
	private void AddBackdrop(Transform parent, bool dismiss, Color color)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$AddBackdrop): 2 lines keep C-only constructs
		UnityEvent __this_00;
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar1;
		GameObject __this_01;
		Transform __this_02;
		RectTransform rect;
		Image pUVar2;
		Button __this_03;
		UnityAction __this_04;

		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components != null) {
			if (obj != null) {
				pIVar1 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
				if (pIVar1 == null) {
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((int)components.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			components[0] = obj;
			__this_01 = new GameObject("AoTTG Backdrop", components);
			if (__this_01 != null) {
				__this_02 = __this_01.transform;
				if (__this_02 != null) {
					__this_02.SetParent(parent, false);
					rect = __this_01.GetComponent<RectTransform>();
					GisketchOverlayManager.Stretch(rect);
					pUVar2 = __this_01.AddComponent<Image>();
					if (pUVar2 != null) {
						pUVar2.set_color(color);
						if (!dismiss) {
							return;
						}
						__this_03 = __this_01.AddComponent<Button>();
						if (__this_03 != null) {
							__this_03.transition = 0;
							__this_00 = (UnityEvent)__this_03.m_OnClick;
							__this_04 = new UnityAction((object)this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_AddBackdrop_b__48_0);
							if (__this_00 != null) {
								__this_00.AddListener(__this_04);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60002CB")]
	[Address(RVA = "0x52547D0", Offset = "0x52537D0", VA = "0x52547D0")]
	private static void Stretch(RectTransform rect)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Stretch): clean
		if (rect == null) {
			throw new NullReferenceException();
		}
		rect.anchorMin = (Vector2)(Vector2.zeroVector);
		rect.anchorMax = (Vector2)(Vector2.oneVector);
		rect.offsetMin = (Vector2)(Vector2.zeroVector);
		rect.offsetMax = (Vector2)(Vector2.zeroVector);
		return;
	}

	[Token(Token = "0x60002CC")]
	[Address(RVA = "0x5256450", Offset = "0x5255450", VA = "0x5256450")]
	private OverlayInstance FindDialog(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$FindDialog): clean
		int index;
		List<GisketchOverlayManager.OverlayInstance> pSVar1;
		Object x;
		bool bVar2;
		GisketchOverlayManager.OverlayInstance pGVar3;

		pSVar1 = this._stack;
		if (pSVar1 != null) {
			index = pSVar1._size;
			while(true) {
				index = index + -1;
				if (index < 0) {
					return null;
				}
				pSVar1 = this._stack;
				if ((pSVar1 == null) ||(pGVar3 = (GisketchOverlayManager.OverlayInstance)pSVar1.get_Item(index), pGVar3 == null)) break;
				if ((pGVar3.Kind == 0) &&(bVar2 = (pGVar3.Id == id))) {
					x = (Object)pGVar3.Host;
					bVar2 = (x != null);
					if (bVar2) {
						return pGVar3;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60002CD")]
	[Address(RVA = "0x5258430", Offset = "0x5257430", VA = "0x5258430")]
	private OverlayInstance GetOrBuildOverlayInstance(GisketchOverlayDefinition overlay, GameObject anchor, OverlayKind kind, bool forceBelow, bool matchAnchorWidth, float popoverGap)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$GetOrBuildOverlayInstance): 3 lines keep C-only constructs
		Dictionary<object, object> pSVar1;
		Object x;
		bool bVar2;
		String pSVar3;
		GisketchOverlayManager.OverlayInstance pGVar4;
		String str0;
		GisketchOverlayManager.OverlayInstance local_60;
		GameObject local_58;
		Enum local_50;
		String local_38;

		local_60 = null;
		if (overlay == null) {
			pGVar4 = this.BuildOverlayInstance(null, anchor, kind, forceBelow, matchAnchorWidth, popoverGap);
			return pGVar4;
		}
		if (overlay.lifecycle == 1) {
			pSVar1 = (Dictionary<object, object>)this._cached;
			local_38 = overlay.id;
			local_58 = anchor;
			local_50.klass = (Enum)typeof(GisketchOverlayManager.OverlayKind);
			local_50.monitor = (IntPtr)0xffffffffffffffff;
			pSVar3 = local_50.ToString();
			pSVar3 = String.Concat(pSVar3, ":", local_38);
			if (pSVar1 == null) goto label_05358691;
			bVar2 = pSVar1.TryGetValue((object)pSVar3, (object*)&local_60);
			anchor = local_58;
			if ((bVar2) && (local_60 != null)) {
				x = (Object)local_60.Host;
				bVar2 = (x != null);
				anchor = local_58;
				if (bVar2) {
					GisketchOverlayManager.ResetCachedInstance(local_60);
					return local_60;
				}
			}
		}
		pGVar4 = this.BuildOverlayInstance(overlay, anchor, kind, forceBelow, matchAnchorWidth, popoverGap);
		if ((overlay.lifecycle == 1) &&(pGVar4 != null)) {
			pSVar1 = (Dictionary<object, object>)this._cached;
			pSVar3 = overlay.id;
			local_50.klass = (Enum)typeof(GisketchOverlayManager.OverlayKind);
			local_50.monitor = (IntPtr)0xffffffffffffffff;
			str0 = local_50.ToString();
			pSVar3 = String.Concat(str0, ":", pSVar3);
			if (pSVar1 == null) {
	label_05358691: ;
				throw new NullReferenceException();
			}
			pSVar1.set_Item((object)pSVar3, (object)pGVar4);
		}
		return pGVar4;
	}

	[Token(Token = "0x60002CE")]
	[Address(RVA = "0x52586A0", Offset = "0x52576A0", VA = "0x52586A0")]
	private static string CacheKey(OverlayKind kind, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CacheKey): 1 lines keep C-only constructs
		String pSVar1;
		Enum SStack_28;

		SStack_28.klass = (Enum)typeof(GisketchOverlayManager.OverlayKind);
		SStack_28.monitor = (IntPtr)0xffffffffffffffff;
		pSVar1 = SStack_28.ToString();
		pSVar1 = String.Concat(pSVar1, ":", id);
		return pSVar1;
	}

	[Token(Token = "0x60002CF")]
	[Address(RVA = "0x52569A0", Offset = "0x52559A0", VA = "0x52569A0")]
	private OverlayInstance Top()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Top): clean
		int iVar1;
		List<GisketchOverlayManager.OverlayInstance> __this_00;
		GisketchOverlayManager.OverlayInstance pGVar2;

		__this_00 = this._stack;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		iVar1 = __this_00._size;
		if (iVar1 < 1) {
			return null;
		}
		pGVar2 = (GisketchOverlayManager.OverlayInstance)__this_00.get_Item(iVar1 + -1);
		return pGVar2;
	}

	[Token(Token = "0x60002D0")]
	[Address(RVA = "0x5257C30", Offset = "0x5256C30", VA = "0x5257C30")]
	private bool ShouldGuardClose(OverlayInstance instance)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShouldGuardClose): clean
		bool bVar1;

		if (((instance != null) &&(instance.Kind == 0)) && (instance.GuardUnsavedChanges != false)) {
			bVar1 = (instance.Id != "gisketch-unsaved-changes");
			if (bVar1) {
				bVar1 = GisketchFormState.IsDirty(instance._ContentRoot_k__BackingField);
				return bVar1;
			}
		}
		return false;
	}

	[Token(Token = "0x60002D1")]
	[Address(RVA = "0x5257C90", Offset = "0x5256C90", VA = "0x5257C90")]
	private bool ShowUnsavedChanges(OverlayInstance instance)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ShowUnsavedChanges): 1 lines keep C-only constructs
		int iVar1;
		List<GisketchOverlayManager.OverlayInstance> pSVar2;
		bool bVar3;
		object pIVar4;

		this._pendingUnsavedClose = instance;
		pSVar2 = this._stack;
		if (pSVar2 == null) {
	label_05357d99: ;
			throw new NullReferenceException();
		}
		iVar1 = pSVar2._size;
		if ((0 < iVar1) &&(pIVar4 = pSVar2.get_Item(iVar1 + -1), pIVar4 != null)) {
			if (Il2CppMethodInitialized_07542959 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_GisketchOverlayManager_OverlayInstance_get_Count) ;
				Il2CppMethodInitialized_07542959 = true;
			}
			pSVar2 = this._stack;
			if (((pSVar2 == null) ||(iVar1 = pSVar2._size, iVar1 < 1)) ||(pIVar4 = pSVar2.get_Item(iVar1 + -1), pIVar4 == null)) goto label_05357d99;
			bVar3 = (pIVar4[1].monitor != "gisketch-unsaved-changes");
			if (!bVar3) {
				return true;
			}
		}
		this.ShowDialog("gisketch-unsaved-changes", true);
		return true;
	}

	[Token(Token = "0x60002D2")]
	[Address(RVA = "0x5256710", Offset = "0x5255710", VA = "0x5256710")]
	private GisketchOverlayDefinition ResolveDialog(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ResolveDialog): 5 lines keep C-only constructs
		Func<string, GisketchOverlayDefinition> pSVar1;
		GisketchManifestDefinition __this_00;
		GisketchBuildContext pGVar2;
		GisketchOverlayDefinition pGVar3;
		byte[] auVar4 = new byte[16];

		pGVar2 = this._context;
		if (pGVar2 == null) {
	label_05356772: ;
			throw new NullReferenceException();
		}
		pSVar1 = pGVar2.DialogResolver;
		if (pSVar1 != null) {
			auVar4 = (*(code)pSVar1.invoke_impl)(pSVar1.method_code,id,pSVar1.method);
			method = auVar4._8_8_;
			if (auVar4._0_8_ != null) {
				return auVar4._0_8_;
			}
			pGVar2 = this._context;
			if (pGVar2 == null) goto label_05356772;
		}
		__this_00 = pGVar2.Manifest;
		if (__this_00 == null) {
			return null;
		}
		return pGVar3;
	}

	[Token(Token = "0x60002D3")]
	[Address(RVA = "0x5255F20", Offset = "0x5254F20", VA = "0x5255F20")]
	private void CloseInstance(OverlayInstance instance, bool restoreFocus, bool animate)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CloseInstance): 13 lines keep C-only constructs
		GisketchOverlayManager.OverlayInstance* ppGVar1;
		List<GisketchOverlayManager.OverlayInstance> __this_00;
		GisketchView view;
		bool bVar2;
		GisketchOverlayManager.c__DisplayClass57_0 __this_01;
		Tween t;
		TweenCallback __this_02;
		GisketchOverlayManager.OverlayInstance pGVar4;
		GisketchOverlayManager.OverlayInstance* targetAddress;

		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchOverlayManager.c__DisplayClass57_0));
		__this_01 = new Object();
		if (__this_01 == null) goto label_05356117;
		targetAddress = &__this_01.instance;
		__this_01.instance = instance;
		pGVar4 = __this_01.instance;
		if (pGVar4 == null) {
			return;
		}
		__this_00 = this._stack;
		if (__this_00 == null) goto label_05356117;
		__this_00.Remove((object)pGVar4);
		pGVar4 = *targetAddress;
		if (this._activePopover == pGVar4) {
			ppGVar1 = &this._activePopover;
			*ppGVar1 = null;
			pGVar4 = *targetAddress;
			if (this._pendingUnsavedClose == pGVar4) goto label_053560d8;
		}
		else {
			if (this._pendingUnsavedClose == pGVar4) {
	label_053560d8: ;
				ppGVar1 = &this._pendingUnsavedClose;
				*ppGVar1 = null;
				pGVar4 = *targetAddress;
			}
		}
		bVar2 = this.IsCached(pGVar4);
		__this_01.cache = bVar2;
		if (animate) {
			if (*targetAddress == null) goto label_05356117;
			view = ((*targetAddress).fields).View;
			t = GisketchMotion.PlayViewExit(view);
		}
		else {
			t = null;
		}
		__this_02 = new TweenCallback((object)__this_01, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_c__DisplayClass57_0_CloseInstance_b__0);
		if (t == null) {
			if (__this_02 == null) {
	label_05356117: ;
				throw new NullReferenceException();
			}
			(*(code)__this_02.invoke_impl)(__this_02.method_code,__this_02.method);
		}
		else {
			TweenSettingsExtensions.OnComplete<Tween>((object)t, __this_02);
		}
		if (restoreFocus) {
			this.FocusAfterClose(*targetAddress);
			return;
		}
		return;
	}

	[Token(Token = "0x60002D4")]
	[Address(RVA = "0x5258950", Offset = "0x5257950", VA = "0x5258950")]
	private bool IsCached(OverlayInstance instance)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$IsCached): 2 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		bool bVar2;
		String str0;
		String pSVar3;
		GisketchOverlayManager.OverlayInstance local_40;
		Enum local_38;

		local_40 = null;
		if (instance != null) {
			__this_00 = (Dictionary<object, object>)this._cached;
			pSVar3 = instance.Id;
			local_38.klass = (Enum)typeof(GisketchOverlayManager.OverlayKind);
			local_38.monitor = (IntPtr)0xffffffffffffffff;
			str0 = local_38.ToString();
			pSVar3 = String.Concat(str0, ":", pSVar3);
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar2 = __this_00.TryGetValue((object)pSVar3, (object*)&local_40);
			if (bVar2) {
				return local_40 == instance;
			}
		}
		return false;
	}

	[Token(Token = "0x60002D5")]
	[Address(RVA = "0x5258AE0", Offset = "0x5257AE0", VA = "0x5258AE0")]
	private static void HideCachedInstance(OverlayInstance instance)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$HideCachedInstance): clean
		Object x;
		GisketchView view;
		GameObject pUVar1;
		bool bVar2;
		CanvasGroup __this;

		if (instance != null) {
			x = (Object)instance.Host;
			bVar2 = (x == null);
			if (!bVar2) {
				view = instance.View;
				GisketchMotion.ResetViewToRest(view);
				GisketchFormState.Reset(instance._ContentRoot_k__BackingField);
				GisketchOverlayManager.SetInputLocked(instance.Host, true);
				GisketchOverlayManager.ClearSelectedIfInside(instance._ContentRoot_k__BackingField);
				pUVar1 = instance.Host;
				if (pUVar1 != null) {
					__this = pUVar1.GetComponent<CanvasGroup>();
					bVar2 = ((Object)__this != null);
					if (bVar2) {
						if (__this == null) goto label_05358c16;
						__this.alpha = 1.0;
					}
					pUVar1 = instance.Host;
					if (pUVar1 != null) {
						pUVar1.SetActive(false);
						return;
					}
				}
	label_05358c16: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x60002D6")]
	[Address(RVA = "0x5258720", Offset = "0x5257720", VA = "0x5258720")]
	private static void ResetCachedInstance(OverlayInstance instance)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ResetCachedInstance): clean
		Object x;
		GameObject pUVar1;
		bool bVar2;
		CanvasGroup __this;

		if (instance != null) {
			x = (Object)instance.Host;
			bVar2 = (x == null);
			if (!bVar2) {
				GisketchFormState.Reset(instance._ContentRoot_k__BackingField);
				pUVar1 = instance.Host;
				if (pUVar1 != null) {
					__this = pUVar1.GetComponent<CanvasGroup>();
					bVar2 = ((Object)__this != null);
					if (bVar2) {
						if (__this == null) goto label_0535881b;
						__this.alpha = 1.0;
					}
					pUVar1 = instance.Host;
					if (pUVar1 != null) {
						pUVar1.SetActive(true);
						GisketchOverlayManager.SetInputLocked(instance.Host, false);
						return;
					}
				}
	label_0535881b: ;
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x5258C20", Offset = "0x5257C20", VA = "0x5258C20")]
	private static void SetInputLocked(GameObject root, bool locked)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$SetInputLocked): clean
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
			if (__this != null) {
				__this.interactable = !locked;
				__this.blocksRaycasts = !locked;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x5258D20", Offset = "0x5257D20", VA = "0x5258D20")]
	private static void ClearSelectedIfInside(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ClearSelectedIfInside): 2 lines keep C-only constructs
		bool bVar1;
		Object x;
		Transform __this;
		Transform parent;
		EventSystem pUVar2;
		Object* method_00;

		if (Il2CppMethodInitialized_07542961 == false) {
			method_00 = &typeof(Object);
			Il2CppMethodInitialized_07542961 = true;
		}
		x = (Object)GisketchOverlayManager.CurrentSelected();
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
					bVar1 = ((Object)pUVar2 != null);
					if (!bVar1) {
						return;
					}
					pUVar2 = EventSystem.current;
					if (pUVar2 != null) {
						pUVar2.SetSelectedGameObject(null);
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x5258A50", Offset = "0x5257A50", VA = "0x5258A50")]
	private void FocusAfterClose(OverlayInstance closed)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$FocusAfterClose): clean
		uint uVar1;
		List<GisketchOverlayManager.OverlayInstance> __this_00;
		GisketchOverlayManager.OverlayInstance instance;
		MethodInfo method_00;

		__this_00 = this._stack;
		if (__this_00 != null) {
			uVar1 = __this_00._size;
			if (0 < (int)uVar1) {
				method_00 = (MethodInfo)(ulong)(uVar1 - 1);
				instance = (GisketchOverlayManager.OverlayInstance)__this_00.get_Item(uVar1 - 1);
				if (instance != null) {
					GisketchOverlayManager.SelectInitialFocus(instance);
					return;
				}
			}
			if (closed != null) {
				GisketchOverlayManager.Restore(closed._PreviousSelected_k__BackingField);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x5255530", Offset = "0x5254530", VA = "0x5255530")]
	private static void Focus(OverlayInstance instance, bool focus)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Focus): 2 lines keep C-only constructs
		undefined3 in_register_00000031;

		if (CONCAT31(in_register_00000031, focus) == 0) {
			return;
		}
		GisketchOverlayManager.SelectInitialFocus(instance);
		return;
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x5258350", Offset = "0x5257350", VA = "0x5258350")]
	private static bool ContainsSelected(OverlayInstance instance)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$ContainsSelected): 2 lines keep C-only constructs
		Object x;
		GameObject __this;
		bool bVar1;
		Object x_00;
		Transform __this_00;
		Transform parent;
		Object* method_00;

		if (g_data_07542962 == false) {
			method_00 = &typeof(Object);
			g_data_07542962 = true;
		}
		x_00 = (Object)GisketchOverlayManager.CurrentSelected();
		bVar1 = (x_00 != null);
		if ((bVar1) && (instance != null)) {
			x = (Object)instance._ContentRoot_k__BackingField;
			bVar1 = (x != null);
			if (bVar1) {
				if (x_00 != null) {
					__this_00 = x_00.transform;
					__this = instance._ContentRoot_k__BackingField;
					if (__this != null) {
						parent = __this.transform;
						if (__this_00 != null) {
							bVar1 = __this_00.IsChildOf(parent);
							return bVar1;
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return false;
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x5256D60", Offset = "0x5255D60", VA = "0x5256D60")]
	private static Selectable FirstSelectable(GameObject root)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$FirstSelectable): clean
		uint uVar1;
		Selectable x;
		bool bVar2;
		Object[] pSVar3;
		ulong uVar4;
		ulong uVar5;

		bVar2 = ((Object)root == null);
		if (!bVar2) {
			if ((root == null) ||(pSVar3 = root.GetComponentsInChildren<Selectable>(false), pSVar3 == null)) {
	label_05356e8a: ;
				throw new NullReferenceException();
			}
			if (0 < (int)pSVar3.Length) {
				uVar4 = pSVar3.Length & 0xffffffff;
				uVar5 = 0;
				do {
					if (uVar4 <= uVar5) {
						throw new IndexOutOfRangeException();
					}
					x = (Selectable)pSVar3[uVar5];
					bVar2 = ((Object)x != null);
					if (bVar2) {
						if (x == null) goto label_05356e8a;
						bVar2 = x.IsActive();
						if ((bVar2) &&(bVar2 = x.IsInteractable())) {
							return x;
						}
					}
					uVar5 = uVar5 + 1;
					uVar1 = (uint)pSVar3.Length;
					uVar4 = (ulong)uVar1;
				} while ((long)uVar5 < (long)(int)uVar1);
			}
		}
		return null;
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x5258E70", Offset = "0x5257E70", VA = "0x5258E70")]
	private static void Restore(GameObject go)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$Restore): clean
		bool bVar1;
		Selectable x;
		Selectable selectable;

		x = null;
		bVar1 = ((Object)go != null);
		if (bVar1) {
			if (go == null) goto label_05358f54;
			x = go.GetComponent<Selectable>();
		}
		bVar1 = ((Object)x != null);
		selectable = null;
		if (bVar1) {
			if (x == null) {
	label_05358f54: ;
				throw new NullReferenceException();
			}
			bVar1 = x.IsActive();
			if (bVar1) {
				bVar1 = x.IsInteractable();
				selectable = null;
				if (bVar1) {
					selectable = x;
				}
			}
			else {
				selectable = null;
			}
		}
		GisketchOverlayManager.SetSelected(selectable);
		return;
	}

	[Token(Token = "0x60002DE")]
	[Address(RVA = "0x5255470", Offset = "0x5254470", VA = "0x5255470")]
	private static GameObject CurrentSelected()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$CurrentSelected): clean
		bool bVar1;
		EventSystem pUVar2;
		GameObject pUVar3;

		pUVar2 = EventSystem.current;
		bVar1 = ((Object)pUVar2 != null);
		if (bVar1) {
			pUVar2 = EventSystem.current;
			if (pUVar2 == null) {
				throw new NullReferenceException();
			}
		}
		return pUVar3;
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x5256C10", Offset = "0x5255C10", VA = "0x5256C10")]
	private static void SetSelected(Selectable selectable)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$SetSelected): clean
		bool bVar1;
		EventSystem pUVar2;
		GameObject pUVar3;

		pUVar2 = EventSystem.current;
		bVar1 = ((Object)pUVar2 != null);
		if (!bVar1) {
			return;
		}
		pUVar2 = EventSystem.current;
		pUVar3 = null;
		bVar1 = ((Object)selectable != null);
		if (bVar1) {
			if (selectable == null) goto label_05356d54;
			pUVar3 = selectable.gameObject;
		}
		if (pUVar2 == null) {
	label_05356d54: ;
			throw new NullReferenceException();
		}
		pUVar2.SetSelectedGameObject(pUVar3);
		pUVar3 = null;
		bVar1 = ((Object)selectable != null);
		if (bVar1) {
			if (selectable == null) goto label_05356d54;
			pUVar3 = selectable.gameObject;
		}
		GisketchScrollFocus.Reveal(pUVar3, 12.0);
		return;
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x5256780", Offset = "0x5255780", VA = "0x5256780")]
	private static void DestroyObject(GameObject go)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c (Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$DestroyObject): clean
		uint uVar1;
		bool bVar2;

		bVar2 = ((Object)go == null);
		if (bVar2) {
			return;
		}
		bVar2 = Application.isPlaying;
		uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		if (bVar2) {
			if (uVar1 == 0) {
			}
			Object.Destroy((Object)go);
			return;
		}
		if (uVar1 == 0) {
		}
		Object.DestroyImmediate((Object)go);
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Overlays/GisketchOverlayManager.c.

	// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.<>c__DisplayClass57_0$$.ctor: clean
	private void c__DisplayClass57_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager$$<AddBackdrop>b__48_0: clean
	private void AddBackdrop_b__48_0()
	{
		bool bVar1;

		bVar1 = this.CloseTop(true);
		if (bVar1) {
			if ((typeof(GisketchUiSounds)._2).cctor_finished_or_no_cctor == 0) {
				GisketchUiSounds.Play(1);
				return;
			}
			GisketchUiSounds.Play(1);
			return;
		}
		return;
	}

	// Gisketch.Aottg2UI.Overlays.GisketchOverlayManager.<>c__DisplayClass57_0$$<CloseInstance>b__0: clean
	private void c__DisplayClass57_0__CloseInstance_b__0()
	{
		GisketchOverlayManager.OverlayInstance instance;

		instance = this.instance;
		if (this.cache != false) {
			GisketchOverlayManager.HideCachedInstance(instance);
			return;
		}
		if (instance == null) {
			throw new NullReferenceException();
		}
		GisketchOverlayManager.DestroyObject(instance.Host);
		return;
	}
}
