// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Building;
using Gisketch.Aottg2UI.Data;
using Il2CppDummyDll;
using TMPro;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.UI;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001FA")]
internal sealed class AottgSubtabStripRuntime : MonoBehaviour, IPointerClickHandler, IEventSystemHandler, IPointerMoveHandler, IPointerExitHandler, IPointerDownHandler, IPointerUpHandler
{
	[Token(Token = "0x20001FB")]
	[CompilerGenerated]
	private sealed class _003CAnimateHover_003Ed__28 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000AA4")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000AA5")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000AA6")]
		[FieldOffset(Offset = "0x20")]
		public AottgSubtabStripRuntime _003C_003E4__this;

		[Token(Token = "0x4000AA7")]
		[FieldOffset(Offset = "0x28")]
		public float target;

		[Token(Token = "0x4000AA8")]
		[FieldOffset(Offset = "0x2C")]
		public bool clearAfter;

		[Token(Token = "0x4000AA9")]
		[FieldOffset(Offset = "0x30")]
		private float _003Cstart_003E5__2;

		[Token(Token = "0x4000AAA")]
		[FieldOffset(Offset = "0x34")]
		private float _003Celapsed_003E5__3;

		[Token(Token = "0x17000156")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000BD7")]
			[Address(RVA = "0x5D7FD70", Offset = "0x5D7ED70", VA = "0x5D7FD70", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<AnimateHover>d__28$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000157")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000BD9")]
			[Address(RVA = "0x5D7FDC0", Offset = "0x5D7EDC0", VA = "0x5D7FDC0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<AnimateHover>d__28$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6000BD4")]
		[Address(RVA = "0x5D7F1E0", Offset = "0x5D7E1E0", VA = "0x5D7F1E0")]
		[DebuggerHidden]
		public _003CAnimateHover_003Ed__28(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<AnimateHover>d__28$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6000BD5")]
		[Address(RVA = "0x5D7FBF0", Offset = "0x5D7EBF0", VA = "0x5D7FBF0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<AnimateHover>d__28$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6000BD6")]
		[Address(RVA = "0x5D7FC00", Offset = "0x5D7EC00", VA = "0x5D7FC00", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<AnimateHover>d__28$$MoveNext): clean
			float fVar1;
			int iVar2;
			AottgSubtabStripRuntime __this_00;
			float fVar3;
			float fVar4;

			iVar2 = this.__1__state;
			__this_00 = this.__4__this;
			if (iVar2 == 1) {
				this.__1__state = -1;
				fVar4 = this._elapsed_5__3;
				if (0.08 <= fVar4) {
					if (__this_00 != null) {
						__this_00._hoverAmount = this.target;
						if (this.clearAfter != false) {
							__this_00._hoveredId = null;
						}
						__this_00.ApplyMeshEffects();
						__this_00._hoverTween = null;
						return false;
					}
					goto label_05e7fd62;
				}
			}
			else {
				if (iVar2 != 0) {
					return false;
				}
				this.__1__state = -1;
				if (__this_00 == null) goto label_05e7fd62;
				this._start_5__2 = __this_00._hoverAmount;
				this._elapsed_5__3 = 0.0;
				fVar4 = 0.0;
			}
			fVar3 = Time.unscaledDeltaTime;
			this._elapsed_5__3 = fVar3 + fVar4;
			if (__this_00 != null) {
				fVar1 = this._start_5__2;
				fVar3 = (fVar3 + fVar4) / 0.08;
				fVar4 = 1.0;
				if (fVar3 <= 1.0) {
					fVar4 = fVar3;
				}
				fVar4 = (float)(-(uint)(0.0 <= fVar3) & (uint)fVar4);
				fVar3 = (3.0 - (fVar4 + fVar4)) * fVar4 * fVar4;
				fVar4 = 1.0;
				if (fVar3 <= 1.0) {
					fVar4 = fVar3;
				}
				__this_00._hoverAmount =(float)(-(uint)(0.0 <= fVar3) & (uint)fVar4) * (this.target - fVar1) + fVar1;
				__this_00.ApplyMeshEffects();
				this.__2__current = null;
				this.__1__state = 1;
				return true;
			}
		label_05e7fd62: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6000BD8")]
		[Address(RVA = "0x5D7FD80", Offset = "0x5D7ED80", VA = "0x5D7FD80", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<AnimateHover>d__28$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_AnimateHover_d__28_System_Collections_IEnumerator);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20001FC")]
	[CompilerGenerated]
	private sealed class _003CRefreshGeometryNextFrame_003Ed__36 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000AAB")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000AAC")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000AAD")]
		[FieldOffset(Offset = "0x20")]
		public AottgSubtabStripRuntime _003C_003E4__this;

		[Token(Token = "0x17000158")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000BDD")]
			[Address(RVA = "0x5D7FE60", Offset = "0x5D7EE60", VA = "0x5D7FE60", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<RefreshGeometryNextFrame>d__36$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x17000159")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000BDF")]
			[Address(RVA = "0x5D7FEB0", Offset = "0x5D7EEB0", VA = "0x5D7FEB0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<RefreshGeometryNextFrame>d__36$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6000BDA")]
		[Address(RVA = "0x5D7F900", Offset = "0x5D7E900", VA = "0x5D7F900")]
		[DebuggerHidden]
		public _003CRefreshGeometryNextFrame_003Ed__36(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<RefreshGeometryNextFrame>d__36$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6000BDB")]
		[Address(RVA = "0x5D7FDD0", Offset = "0x5D7EDD0", VA = "0x5D7FDD0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<RefreshGeometryNextFrame>d__36$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6000BDC")]
		[Address(RVA = "0x5D7FDE0", Offset = "0x5D7EDE0", VA = "0x5D7FDE0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<RefreshGeometryNextFrame>d__36$$MoveNext): clean
			int iVar1;
			AottgSubtabStripRuntime __this_00;

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
				__this_00.RefreshUnderline();
				__this_00.ApplyMeshEffects();
				__this_00._geometryRefresh = null;
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x6000BDE")]
		[Address(RVA = "0x5D7FE70", Offset = "0x5D7EE70", VA = "0x5D7FE70", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime.<RefreshGeometryNextFrame>d__36$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_RefreshGeometryNextFrame_d__36_System_Collections);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4000A92")]
	private const string UnderlineName = "AoTTG Subtab Underline";

	[Token(Token = "0x4000A93")]
	private const float UnderlineHeight = 3f;

	[Token(Token = "0x4000A94")]
	private const float UnderlineOffset = 3f;

	[Token(Token = "0x4000A95")]
	private const float HoverDuration = 0.08f;

	[Token(Token = "0x4000A96")]
	private const float PressScale = 0.96f;

	[Token(Token = "0x4000A97")]
	private const float MinFontScale = 0.6f;

	[Token(Token = "0x4000A98")]
	[FieldOffset(Offset = "0x0")]
	private static bool _registered;

	[Token(Token = "0x4000A99")]
	[FieldOffset(Offset = "0x20")]
	private GisketchNodeDefinition _node;

	[Token(Token = "0x4000A9A")]
	[FieldOffset(Offset = "0x28")]
	private IGisketchActionHandler _actions;

	[Token(Token = "0x4000A9B")]
	[FieldOffset(Offset = "0x30")]
	private TextMeshProUGUI _text;

	[Token(Token = "0x4000A9C")]
	[FieldOffset(Offset = "0x38")]
	private RectTransform _underline;

	[Token(Token = "0x4000A9D")]
	[FieldOffset(Offset = "0x40")]
	private Color _activeColor;

	[Token(Token = "0x4000A9E")]
	[FieldOffset(Offset = "0x50")]
	private Color _inactiveColor;

	[Token(Token = "0x4000A9F")]
	[FieldOffset(Offset = "0x60")]
	private string _hoveredId;

	[Token(Token = "0x4000AA0")]
	[FieldOffset(Offset = "0x68")]
	private string _pressedId;

	[Token(Token = "0x4000AA1")]
	[FieldOffset(Offset = "0x70")]
	private float _hoverAmount;

	[Token(Token = "0x4000AA2")]
	[FieldOffset(Offset = "0x78")]
	private Coroutine _hoverTween;

	[Token(Token = "0x4000AA3")]
	[FieldOffset(Offset = "0x80")]
	private Coroutine _geometryRefresh;

	[Token(Token = "0x6000BB9")]
	[Address(RVA = "0x5D7D970", Offset = "0x5D7C970", VA = "0x5D7D970")]
	public static void RegisterFactory()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$RegisterFactory): 2 lines keep C-only constructs
		GisketchComponentRegistry __this;
		GisketchComponentFactory __this_00;

		if (Il2CppMethodInitialized_07548810 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(GisketchComponentRegistry)) ;
			Il2CppMethodInitialized_07548810 = true;
		}
		if (AottgSubtabStripRuntime._registered != false) {
			return;
		}
		__this = GisketchComponentRegistry.Default;
		__this_00 = new GisketchComponentFactory(null, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgSubtabStripRuntime_BuildRuntime);
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Register("AottgSubtabStrip", __this_00);
		AottgSubtabStripRuntime._registered = true;
		return;
	}

	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x5D7DE90", Offset = "0x5D7CE90", VA = "0x5D7DE90")]
	private static bool BuildRuntime(GameObject go, GisketchNodeDefinition node, GisketchBuildContext context, GisketchView view)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$BuildRuntime): 4 lines keep C-only constructs
		GisketchTheme pGVar1;
		IGisketchActionHandler pGVar2;
		int weight;
		GisketchStyleDefinition pGVar3;
		TextMeshProUGUI __this;
		String requiredText;
		TMP_FontAsset value;
		String pSVar4;
		Transform parent;
		Image __this_00;
		AottgSubtabStripRuntime __this_01;
		MethodInfo pMVar5;
		float fVar6;
		Color UVar7;
		Color UVar8;
		Color UVar9;
		float fStack_68;
		float fStack_64;
		float fStack_48;
		float fStack_44;

		if (((context != null) &&(node != null)) &&(pGVar1 = context.Theme, pGVar1 != null)) {
			pGVar3 = pGVar1.GetStyle(node.style);
			if (go != null) {
				pMVar5 = MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI;
				__this = go.AddComponent<TextMeshProUGUI>();
				if (pGVar3 == null) {
					weight = 400;
					pSVar4 = "header";
				}
				else {
					pSVar4 = pGVar3.fontFamily;
					pMVar5 = (MethodInfo)0x190;
					weight = (pGVar3.fontWeight).GetValueOrDefault(400);
				}
				requiredText = AottgSubtabStripRuntime.Labels(node);
				value = GisketchTypography.Resolve(pSVar4, weight, requiredText);
				if (__this != null) {
					__this.font = value;
					if (pGVar3 == null) {
						fVar6 = 30.0;
					}
					else {
						fVar6 = (pGVar3.fontSize).GetValueOrDefault(30.0) ;
					}
					fVar6 = GisketchTypography.FontSize(pSVar4, weight, fVar6);
					__this.fontSize = fVar6;
					__this.fontSizeMax = __this.m_fontSize;
					__this.fontSizeMin = __this.m_fontSize * 0.6;
					__this.enableAutoSizing = true;
					__this.fontStyle = 0;
					__this.alignment = 0x1001;
					__this.enableWordWrapping = false;
					__this.overflowMode = 0;
					__this.richText = true;
					__this.set_raycastTarget(true);
					pGVar1 = context.Theme;
					if (pGVar1 != null) {
						UVar7.b = (float)(int)g_data_01005870;
						UVar7.a = (float)g_data_01005870._4_4_;
						UVar7.r = (float)(int)g_data_01005870;
						UVar7.g = (float)g_data_01005870._4_4_;
						UVar7 = pGVar1.GetColor("text", UVar7);
						pGVar1 = context.Theme;
						if (pGVar1 != null) {
							UVar8.b = (float)(int)g_data_010064b0;
							UVar8.a = (float)g_data_010064b0._4_4_;
							UVar8.r = 1.0;
							UVar8.g = 1.0;
							pMVar5 = (MethodInfo *)"textMuted";
							UVar8 = pGVar1.GetColor("textMuted", UVar8);
							pSVar4 = AottgSubtabStripRuntime.BuildMarkup(node, UVar7, UVar8);
							__this.set_text(pSVar4);
							__this.ForceMeshUpdate(false, false);
							parent = go.transform;
							pGVar1 = context.Theme;
							if (pGVar1 != null) {
								UVar9.b = 1.0;
								UVar9.a = 1.0;
								UVar9.r = 1.0;
								UVar9.g = 1.0;
								pMVar5 = (MethodInfo *)"primary";
								UVar9 = pGVar1.GetColor("primary", UVar9);
								__this_00 = AottgSubtabStripRuntime.CreateUnderline(parent, UVar9) ;
								__this_01 = go.AddComponent<AottgSubtabStripRuntime>();
								if (__this_00 != null) {
									pGVar2 = context.Actions;
									pMVar5 = (MethodInfo)__this_00.rectTransform;
									if (__this_01 != null) {
										__this_01._node = node;
										__this_01._actions = pGVar2;
										__this_01._text = __this;
										__this_01._underline = (RectTransform)pMVar5;
										fStack_68 = UVar7.r;
										fStack_64 = UVar7.g;
										__this_01._activeColor.r = fStack_68;
										__this_01._activeColor.g = fStack_64;
										__this_01._activeColor.b = UVar7.b;
										__this_01._activeColor.a = UVar7.a;
										fStack_48 = UVar8.r;
										fStack_44 = UVar8.g;
										__this_01._inactiveColor.r = fStack_48;
										__this_01._inactiveColor.g = fStack_44;
										__this_01._inactiveColor.b = UVar8.b;
										__this_01._inactiveColor.a = UVar8.a;
										__this_01.QueueGeometryRefresh();
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

	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x5D7E950", Offset = "0x5D7D950", VA = "0x5D7E950")]
	private void Setup(GisketchNodeDefinition node, IGisketchActionHandler actions, TextMeshProUGUI text, RectTransform underline, Color activeColor, Color inactiveColor)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$Setup): clean
		float fStack_68;
		float fStack_64;
		float fStack_48;
		float fStack_44;

		this._node = node;
		this._actions = actions;
		this._text = text;
		this._underline = underline;
		fStack_68 = activeColor.r;
		fStack_64 = activeColor.g;
		this._activeColor.r = fStack_68;
		this._activeColor.g = fStack_64;
		this._activeColor.b = activeColor.b;
		this._activeColor.a = activeColor.a;
		fStack_48 = inactiveColor.r;
		fStack_44 = inactiveColor.g;
		this._inactiveColor.r = fStack_48;
		this._inactiveColor.g = fStack_44;
		this._inactiveColor.b = inactiveColor.b;
		this._inactiveColor.a = inactiveColor.a;
		this.QueueGeometryRefresh();
		return;
	}

	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x5D7EAE0", Offset = "0x5D7DAE0", VA = "0x5D7EAE0", Slot = "5")]
	public void OnPointerMove(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$OnPointerMove): clean
		String tabId;

		tabId = this.LinkAt(eventData);
		this.SetHovered(tabId);
		return;
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x5D7EDA0", Offset = "0x5D7DDA0", VA = "0x5D7EDA0", Slot = "6")]
	public void OnPointerExit(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$OnPointerExit): clean
		bool bVar1;

		this.SetHovered(null);
		bVar1 = String.Equals(this._pressedId, null, 5);
		if (bVar1) {
			return;
		}
		this._pressedId = null;
		this.ApplyMeshEffects();
		return;
	}

	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x5D7EE30", Offset = "0x5D7DE30", VA = "0x5D7EE30", Slot = "7")]
	public void OnPointerDown(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$OnPointerDown): clean
		bool bVar1;
		MethodInfo method_00;

		method_00 = (MethodInfo)this.LinkAt(eventData);
		bVar1 = String.Equals(this._pressedId, (String)method_00, 5);
		if (bVar1) {
			return;
		}
		this._pressedId = (String)method_00;
		this.ApplyMeshEffects();
		return;
	}

	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x5D7EE80", Offset = "0x5D7DE80", VA = "0x5D7EE80", Slot = "8")]
	public void OnPointerUp(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$OnPointerUp): clean
		bool bVar1;

		bVar1 = String.Equals(this._pressedId, null, 5);
		if (bVar1) {
			return;
		}
		this._pressedId = null;
		this.ApplyMeshEffects();
		return;
	}

	[Token(Token = "0x6000BC0")]
	[Address(RVA = "0x5D7EEC0", Offset = "0x5D7DEC0", VA = "0x5D7EEC0", Slot = "4")]
	public void OnPointerClick(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$OnPointerClick): clean
		GisketchNodeDefinition node;
		IGisketchActionHandler actions;
		bool bVar1;
		String value;
		GameObject source;

		value = this.LinkAt(eventData);
		bVar1 = String.IsNullOrEmpty(value);
		if (bVar1) {
			return;
		}
		node = this._node;
		actions = this._actions;
		source = this.gameObject;
		AottgSubtabStripRuntime.Dispatch(node, actions, source, value);
		return;
	}

	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x5D7EB00", Offset = "0x5D7DB00", VA = "0x5D7EB00")]
	private string LinkAt(PointerEventData eventData)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$LinkAt): 1 lines keep C-only constructs
		Vector2 UVar1;
		TextMeshProUGUI pTVar2;
		TMP_LinkInfo[] pTVar3;
		GisketchNodeDefinition pGVar4;
		bool bVar5;
		uint uVar6;
		Camera camera;
		TMP_TextInfo pTVar7;
		String value;
		Vector3 position;

		pTVar2 = this._text;
		bVar5 = ((Object)pTVar2 == null);
		if (((!bVar5) && (eventData != null)) &&(this._node != null)) {
			pTVar2 = this._text;
			UVar1 = eventData._position_k__BackingField;
			camera = eventData.pressEventCamera;
			position.z = 0.0;
			position._0_8_ = UVar1;
			uVar6 = TMP_TextUtilities.FindIntersectingLink((TMP_Text)pTVar2, position, camera);
			if (-1 < (int)uVar6) {
				pTVar2 = this._text;
				if ((pTVar2 != null) &&(pTVar7 = pTVar2.textInfo, pTVar7 != null)) {
					if (pTVar7.linkCount <= (int)uVar6) {
						return null;
					}
					pTVar2 = this._text;
					if (((pTVar2 != null) &&(pTVar7 = pTVar2.textInfo, pTVar7 != null)) &&(pTVar3 = pTVar7.linkInfo, pTVar3 != null)) {
						if ((uint)pTVar3.Length <= uVar6) {
							throw new IndexOutOfRangeException();
						}
						value = (pTVar3.m_Items + uVar6).GetLinkID();
						pGVar4 = this._node;
						if (pGVar4 != null) {
							bVar5 = AottgSubtabStripRuntime.Contains(pGVar4.options, value);
							if (bVar5) {
								return value;
							}
							return null;
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return null;
	}

	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x5D7EC70", Offset = "0x5D7DC70", VA = "0x5D7EC70")]
	private void SetHovered(string tabId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$SetHovered): 1 lines keep C-only constructs
		bool bVar1;
		AottgSubtabStripRuntime.d__28<AnimateHover> __this_00;
		Coroutine pUVar2;
		float local_2c;

		bVar1 = String.Equals(this._hoveredId, tabId, 5);
		if (bVar1) {
			return;
		}
		pUVar2 = this._hoverTween;
		if (pUVar2 != null) {
			this.StopCoroutine(pUVar2);
		}
		bVar1 = String.IsNullOrEmpty(tabId);
		if (!bVar1) {
			this._hoveredId = tabId;
			this._hoverAmount = 0.0;
			local_2c = 1.0;
		}
		else {
			local_2c = 0.0;
		}
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSubtabStripRuntime.d__28<AnimateHover>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.target = local_2c;
		__this_00.clearAfter = bVar1;
		pUVar2 = this.StartCoroutine((IEnumerator)__this_00);
		this._hoverTween = pUVar2;
		return;
	}

	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x5D7F160", Offset = "0x5D7E160", VA = "0x5D7F160")]
	[IteratorStateMachine(typeof(_003CAnimateHover_003Ed__28))]
	private IEnumerator AnimateHover(float target, bool clearAfter)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$AnimateHover): 1 lines keep C-only constructs
		AottgSubtabStripRuntime.d__28<AnimateHover> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSubtabStripRuntime.d__28<AnimateHover>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		__this_00.target = target;
		__this_00.clearAfter = clearAfter;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x5D7EDE0", Offset = "0x5D7DDE0", VA = "0x5D7EDE0")]
	private void SetPressed(string tabId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$SetPressed): clean
		bool bVar1;

		bVar1 = String.Equals(this._pressedId, tabId, 5);
		if (bVar1) {
			return;
		}
		this._pressedId = tabId;
		this.ApplyMeshEffects();
		return;
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x5D7F200", Offset = "0x5D7E200", VA = "0x5D7F200")]
	private void ApplyMeshEffects()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$ApplyMeshEffects): clean
		float fVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		TextMeshProUGUI pTVar10;
		bool bVar11;
		float fVar12;
		Color color;

		pTVar10 = this._text;
		bVar11 = ((Object)pTVar10 == null);
		if (bVar11) {
			return;
		}
		pTVar10 = this._text;
		if (pTVar10 != null) {
			pTVar10.ForceMeshUpdate(false, false);
			bVar11 = String.IsNullOrEmpty(this._hoveredId);
			if ((!bVar11) && (fVar1 = this._hoverAmount, 0.0 < fVar1)) {
				uVar2 = this._activeColor.r;
				uVar6 = this._activeColor.g;
				uVar3 = this._activeColor.b;
				uVar7 = this._activeColor.a;
				uVar4 = this._inactiveColor.r;
				uVar8 = this._inactiveColor.g;
				uVar5 = this._inactiveColor.b;
				uVar9 = this._inactiveColor.a;
				fVar12 = 1.0;
				if (fVar1 <= 1.0) {
					fVar12 = fVar1;
				}
				fVar12 = (float)(-(uint)(0.0 <= fVar1) & (uint)fVar12);
				color.r = ((float)uVar2 - (float)uVar4) * fVar12 + (float)uVar4;
				color.g = ((float)uVar6 - (float)uVar8) * fVar12 + (float)uVar8;
				color.b = ((float)uVar3 - (float)uVar5) * fVar12 + (float)uVar5;
				color.a = ((float)uVar7 - (float)uVar9) * fVar12 + (float)uVar9;
				this.ApplyLinkColor(this._hoveredId, color);
			}
			bVar11 = String.IsNullOrEmpty(this._pressedId);
			if (!bVar11) {
				this.ApplyLinkScale(this._pressedId, 0.96);
			}
			pTVar10 = this._text;
			if (pTVar10 != null) {
				pTVar10.UpdateVertexData(0x11);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x5D7F340", Offset = "0x5D7E340", VA = "0x5D7F340")]
	private void ApplyLinkColor(string tabId, Color color)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$ApplyLinkColor): 12 lines keep C-only constructs
		uint uVar1;
		TextMeshProUGUI pTVar2;
		TMP_CharacterInfo[] pTVar3;
		TMP_MeshInfo[] pTVar4;
		Color32[] pUVar5;
		bool bVar6;
		Color32 UVar7;
		TMP_TextInfo pTVar8;
		uint uVar9;
		int iVar10;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		TMP_LinkInfo local_78;
		byte[] local_48 = new byte[16];
		byte[] local_38 = new byte[16];

		local_38._8_4_ = in_XMM1_Dc;
		local_38._0_8_ = color._8_8_;
		local_38._12_4_ = in_XMM1_Dd;
		local_48._8_4_ = in_XMM0_Dc;
		local_48._0_8_ = color._0_8_;
		local_48._12_4_ = in_XMM0_Dd;
		local_78.linkIdLength = 0;
		local_78.linkTextfirstCharacterIndex = 0;
		local_78.linkTextLength = 0;
		local_78._28_4_ = 0;
		local_78.textComponent = null;
		local_78.hashCode = 0;
		local_78.linkIdFirstCharacterIndex = 0;
		local_78.linkID = null;
		bVar6 = this.TryFindLink(tabId, ref local_78);
		if (bVar6) {
			iVar10 = 0;
			UVar7._overlap_0 = (_union_53531)il2cpp_runtime_helper_05334d00(local_48._0_4_, local_38._0_4_, 0);
			if (0 < local_78.linkTextLength) {
				do {
					pTVar2 = this._text;
					if (((pTVar2 == null) ||(pTVar8 = pTVar2.textInfo, pTVar8 == null)) ||(pTVar3 = pTVar8.characterInfo, pTVar3 == null)) goto label_05e7f4aa;
					uVar9 = local_78.linkTextfirstCharacterIndex + iVar10;
					if ((uint)pTVar3.Length <= uVar9) goto label_05e7f498;
					if ((pTVar3[(int)uVar9].isVisible & 1U) != 0) {
						pTVar2 = this._text;
						if (pTVar2 == null) {
	label_05e7f4aa: ;
							throw new NullReferenceException();
						}
						uVar1 = pTVar3[(int)uVar9].materialReferenceIndex;
						uVar9 = pTVar3[(int)uVar9].vertexIndex;
						pTVar8 = pTVar2.textInfo;
						if ((pTVar8 == null) ||(pTVar4 = pTVar8.meshInfo, pTVar4 == null)) goto label_05e7f4aa;
						if ((uint)pTVar4.Length <= uVar1) goto label_05e7f498;
						pUVar5 = pTVar4[(int)uVar1].colors32;
						if (pUVar5 == null) goto label_05e7f4aa;
						if ((uint)pUVar5.Length <= uVar9 + 3) {
	label_05e7f498: ;
							throw new IndexOutOfRangeException();
						}
						pUVar5[(int)(uVar9 + 3)]._overlap_0._at_rgba.rgba = (int32_t)UVar7._overlap_0;
						if ((uint)pUVar5.Length <= uVar9 + 2) goto label_05e7f498;
						pUVar5[(int)(uVar9 + 2)]._overlap_0._at_rgba.rgba = (int32_t)UVar7._overlap_0;
						if (((uint)pUVar5.Length <= uVar9 + 1) ||(pUVar5[(int)(uVar9 + 1)]._overlap_0._at_rgba.rgba = (int32_t)UVar7._overlap_0,(uint)pUVar5.Length <= uVar9)) goto label_05e7f498;
						pUVar5[(int)uVar9]._overlap_0._at_rgba = (_struct_53532)UVar7._overlap_0;
					}
					iVar10 = iVar10 + 1;
				} while (iVar10 < local_78.linkTextLength);
			}
		}
		return;
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x5D7F4B0", Offset = "0x5D7E4B0", VA = "0x5D7F4B0")]
	private void ApplyLinkScale(string tabId, float scale)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$ApplyLinkScale): 5 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		int iVar5;
		TextMeshProUGUI pTVar6;
		TMP_CharacterInfo[] pTVar7;
		TMP_MeshInfo[] pTVar8;
		Vector3[] pUVar9;
		int iVar10;
		bool bVar11;
		TMP_TextInfo pTVar12;
		long lVar13;
		float pfVar14;
		uint uVar15;
		uint uVar16;
		float fVar17;
		float fVar18;
		TMP_LinkInfo local_68;
		byte[] local_38 = new byte[16];

		local_68.linkIdLength = 0;
		local_68.linkTextfirstCharacterIndex = 0;
		local_68.linkTextLength = 0;
		local_68._28_4_ = 0;
		local_68.textComponent = null;
		local_68.hashCode = 0;
		local_68.linkIdFirstCharacterIndex = 0;
		local_68.linkID = null;
		bVar11 = this.TryFindLink(tabId, ref local_68);
		if ((!bVar11) || (iVar10 = local_68.linkTextLength, local_68.linkTextLength < 1)) {
			return;
		}
		pTVar6 = this._text;
		if (pTVar6 != null) {
			uVar15 = local_68.linkTextfirstCharacterIndex;
			pTVar12 = pTVar6.textInfo;
			if ((pTVar12 != null) &&(pTVar7 = pTVar12.characterInfo, pTVar7 != null)) {
				if ((uint)pTVar7.Length <= uVar15) {
	label_05e7f718: ;
					throw new IndexOutOfRangeException();
				}
				pTVar6 = this._text;
				if (pTVar6 != null) {
					lVar13 = (long)(int)uVar15;
					fVar17 = pTVar7[lVar13].bottomLeft.x;
					local_38 = ZEXT416((uint)pTVar7[lVar13].ascender);
					fVar18 = pTVar7[lVar13].descender;
					pTVar12 = pTVar6.textInfo;
					if ((pTVar12 != null) &&(pTVar7 = pTVar12.characterInfo, pTVar7 != null)) {
						uVar16 = (uVar15 + iVar10) - 1;
						if (uVar16 < (uint)pTVar7.Length) {
							if ((int)uVar16 < (int)uVar15) {
								return;
							}
							fVar17 = (pTVar7[(int)uVar16].topRight.x + fVar17) * 0.5;
							fVar18 = (fVar18 + (float)local_38._0_4_) * 0.5;
							do {
								pTVar6 = this._text;
								if (((pTVar6 == null) ||(pTVar12 = pTVar6.textInfo, pTVar12 == null)) ||(pTVar7 = pTVar12.characterInfo, pTVar7 == null)) goto label_05e7f71d;
								if ((uint)pTVar7.Length <= uVar15) break;
								if ((pTVar7[(int)uVar15].isVisible & 1U) != 0) {
									pTVar6 = this._text;
									if (pTVar6 == null) goto label_05e7f71d;
									uVar4 = pTVar7[(int)uVar15].materialReferenceIndex;
									iVar5 = pTVar7[(int)uVar15].vertexIndex;
									lVar13 = (long)iVar5;
									pTVar12 = pTVar6.textInfo;
									if ((pTVar12 == null) ||(pTVar8 = pTVar12.meshInfo, pTVar8 == null)) goto label_05e7f71d;
									if ((uint)pTVar8.Length <= uVar4) break;
									if (iVar5 < 0x7ffffffc) {
										pUVar9 = pTVar8[(int)uVar4].vertices;
										if (pUVar9 == null) goto label_05e7f71d;
										pfVar14 = &pUVar9[lVar13].z;
										do {
											if ((uint)pUVar9.Length <= (uint)lVar13) goto label_05e7f718;
											uVar2 = ((Vector3)(pfVar14 + -2)).x;
											uVar3 = ((Vector3)(pfVar14 + -2)).y;
											fVar1 = *pfVar14;
											((Vector3)(pfVar14 + -2)).x =((float)uVar2 - fVar17) * scale + fVar17;
											((Vector3)(pfVar14 + -2)).y =((float)uVar3 - fVar18) * scale + fVar18;
											*pfVar14 = fVar1 * scale + 0.0;
											lVar13 = lVar13 + 1;
											pfVar14 = pfVar14 + 3;
										} while (lVar13 < iVar5 + 4);
									}
								}
								uVar15 = uVar15 + 1;
								if ((int)uVar16 < (int)uVar15) {
									return;
								}
							} while(true);
						}
						goto label_05e7f718;
					}
				}
			}
		}
	label_05e7f71d: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x5D7F730", Offset = "0x5D7E730", VA = "0x5D7F730")]
	private bool TryFindLink(string tabId, out TMP_LinkInfo link)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$TryFindLink): 7 lines keep C-only constructs
		ulong puVar1;
		TMP_LinkInfo[] pTVar2;
		bool bVar3;
		TMP_TextInfo pTVar4;
		String a;
		ulong uVar5;
		long lVar6;
		TextMeshProUGUI pTVar7;
		long lVar8;
		TMP_LinkInfo local_58;

		local_58.linkIdLength = 0;
		local_58.linkTextfirstCharacterIndex = 0;
		local_58.linkTextLength = 0;
		local_58._28_4_ = 0;
		local_58.textComponent = null;
		local_58.hashCode = 0;
		local_58.linkIdFirstCharacterIndex = 0;
		local_58.linkID = null;
		pTVar7 = this._text;
		if (pTVar7 != null) {
			lVar6 = 0x20;
			uVar5 = 0;
			while(true) {
				pTVar4 = pTVar7.textInfo;
				if (pTVar4 == null) break;
				lVar8 = (long)pTVar4.linkCount;
				if (lVar8 <= (long)uVar5) {
					link.linkIdLength = 0;
					link.linkTextfirstCharacterIndex = 0;
					*(ulong)&link.linkTextLength = 0;
					link.textComponent = null;
					link.hashCode = 0;
					link.linkIdFirstCharacterIndex = 0;
					link.linkID = null;
	label_05e7f85c: ;
					return (long)uVar5 < lVar8;
				}
				pTVar7 = this._text;
				if (pTVar7 == null) break;
				pTVar4 = pTVar7.textInfo;
				if ((pTVar4 == null) ||(pTVar2 = pTVar4.linkInfo, pTVar2 == null)) break;
				if ((uint)pTVar2.Length <= uVar5) {
					throw new IndexOutOfRangeException();
				}
				puVar1 = (ulong)((long)pTVar2.m_Items + lVar6 + -0x20);
				local_58.textComponent = (TMP_Text)*puVar1;
				local_58._8_8_ = puVar1[1];
				puVar1 = (ulong)((long)pTVar2.m_Items + lVar6 + -0x10);
				local_58._16_8_ = *puVar1;
				local_58._24_8_ = puVar1[1];
				local_58.linkID = *(Char[]*)((long)&pTVar2[0].textComponent + lVar6) ;
				a = local_58.GetLinkID();
				bVar3 = String.Equals(a, tabId, 5);
				if (bVar3) {
					link.linkID = local_58.linkID;
					link.linkIdLength = local_58.linkIdLength;
					link.linkTextfirstCharacterIndex = local_58.linkTextfirstCharacterIndex;
					link.linkTextLength = local_58.linkTextLength;
					*(uint)&link.field_0x1c = local_58._28_4_;
					link.textComponent = local_58.textComponent;
					link.hashCode = local_58.hashCode;
					link.linkIdFirstCharacterIndex = local_58.linkIdFirstCharacterIndex;
					goto label_05e7f85c;
				}
				lVar6 = lVar6 + 0x28;
				uVar5 = uVar5 + 1;
				pTVar7 = this._text;
				if (pTVar7 == null) break;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x5D7F880", Offset = "0x5D7E880", VA = "0x5D7F880")]
	private void OnRectTransformDimensionsChange()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$OnRectTransformDimensionsChange): clean
		this.QueueGeometryRefresh();
		return;
	}

	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x5D7E9F0", Offset = "0x5D7D9F0", VA = "0x5D7E9F0")]
	private void QueueGeometryRefresh()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$QueueGeometryRefresh): 1 lines keep C-only constructs
		TextMeshProUGUI x;
		bool bVar1;
		AottgSubtabStripRuntime.d__36<RefreshGeometryNextFrame> __this_00;
		Coroutine pUVar2;

		x = this._text;
		bVar1 = ((Object)x != null);
		if (bVar1) {
			bVar1 = this.isActiveAndEnabled ;
			if ((bVar1) && (this._geometryRefresh == null)) {
				__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSubtabStripRuntime.d__36<RefreshGeometryNextFrame>));
				__this_00 = new Object();
				__this_00.__1__state = 0;
				__this_00.__4__this = this;
				pUVar2 = this.StartCoroutine((IEnumerator)__this_00);
				this._geometryRefresh = pUVar2;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x5D7F890", Offset = "0x5D7E890", VA = "0x5D7F890")]
	[IteratorStateMachine(typeof(_003CRefreshGeometryNextFrame_003Ed__36))]
	private IEnumerator RefreshGeometryNextFrame()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$RefreshGeometryNextFrame): 1 lines keep C-only constructs
		AottgSubtabStripRuntime.d__36<RefreshGeometryNextFrame> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgSubtabStripRuntime.d__36<RefreshGeometryNextFrame>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x5D7F920", Offset = "0x5D7E920", VA = "0x5D7F920")]
	private void RefreshUnderline()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$RefreshUnderline): 3 lines keep C-only constructs
		TextMeshProUGUI pTVar1;
		RectTransform pUVar2;
		GisketchNodeDefinition pGVar3;
		TMP_CharacterInfo[] pTVar4;
		Vector2 value;
		Vector2 value_00;
		int iVar5;
		int iVar6;
		bool bVar7;
		TMP_TextInfo pTVar8;
		GameObject __this_00;
		uint uVar9;
		long lVar10;
		float fVar11;
		float fVar12;
		TMP_LinkInfo local_58;
		byte[] local_28 = new byte[16];

		local_58.linkIdLength = 0;
		local_58.linkTextfirstCharacterIndex = 0;
		local_58.linkTextLength = 0;
		local_58._28_4_ = 0;
		local_58.textComponent = null;
		local_58.hashCode = 0;
		local_58.linkIdFirstCharacterIndex = 0;
		local_58.linkID = null;
		pTVar1 = this._text;
		bVar7 = ((Object)pTVar1 == null);
		if (!bVar7) {
			pUVar2 = this._underline;
			bVar7 = ((Object)pUVar2 == null);
			if ((!bVar7) && (this._node != null)) {
				pTVar1 = this._text;
				if (pTVar1 != null) {
					pTVar1.ForceMeshUpdate(false, false);
					pGVar3 = this._node;
					if (pGVar3 != null) {
						bVar7 = this.TryFindLink(pGVar3.value, ref local_58);
						if ((bVar7) && (iVar6 = local_58.linkTextLength, 0 < local_58.linkTextLength)) {
							pTVar1 = this._text;
							if (pTVar1 != null) {
								iVar5 = local_58.linkTextfirstCharacterIndex;
								lVar10 = (long)local_58.linkTextfirstCharacterIndex;
								pTVar8 = pTVar1.textInfo;
								if ((pTVar8 != null) &&(pTVar4 = pTVar8.characterInfo, pTVar4 != null)) {
									if ((uint)pTVar4.Length <= (uint)iVar5) {
	label_05e7fbb4: ;
										throw new IndexOutOfRangeException();
									}
									pTVar1 = this._text;
									if (pTVar1 != null) {
										fVar12 = pTVar4[lVar10].bottomLeft.x;
										local_28 = ZEXT416((uint)pTVar4[lVar10].descender);
										pTVar8 = pTVar1.textInfo;
										if ((pTVar8 != null) &&(pTVar4 = pTVar8.characterInfo, pTVar4 != null) ) {
											uVar9 = (iVar6 + iVar5) - 1;
											if ((uint)pTVar4.Length <= uVar9) goto label_05e7fbb4;
											pUVar2 = this._underline;
											if (pUVar2 != null) {
												fVar11 = pTVar4[(int)uVar9].topRight.x;
												pUVar2.anchorMax = (Vector2)0x3f0000003f000000;
												pUVar2.anchorMin = (Vector2)0x3f0000003f000000;
												pUVar2 = this._underline;
												if (pUVar2 != null) {
													pUVar2.pivot = (Vector2)0x3f00000000000000;
													pUVar2 = this._underline;
													if (pUVar2 != null) {
														value.y = (float)local_28._0_4_ + -3.0;
														value.x = fVar12;
														pUVar2.anchoredPosition = value;
														pUVar2 = this._underline;
														if (pUVar2 != null) {
															fVar11 = fVar11 - fVar12;
															fVar12 = 0.0;
															if (0.0 <= fVar11) {
																fVar12 = fVar11;
															}
															value_00.y = 3.0;
															value_00.x = fVar12;
															pUVar2.sizeDelta = value_00;
															pUVar2 = this._underline;
															if ((pUVar2 != null) &&(__this_00 = pUVar2.gameObject, __this_00 != null)) {
																bVar7 = true;
																goto label_05e7fb9e;
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
						else {
							pUVar2 = this._underline;
							if ((pUVar2 != null) &&(__this_00 = pUVar2.gameObject, __this_00 != null)) {
								bVar7 = false;
	label_05e7fb9e: ;
								__this_00.SetActive(bVar7);
								return;
							}
						}
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x5D7E350", Offset = "0x5D7D350", VA = "0x5D7E350")]
	internal static string BuildMarkup(GisketchNodeDefinition node, Color active, Color inactive)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$BuildMarkup): 10 lines keep C-only constructs
		uint uVar1;
		GisketchNodeDefinition[] pGVar2;
		GisketchNodeDefinition pGVar3;
		bool bVar4;
		int iVar5;
		StringBuilder __this;
		ulong uVar6;
		StringBuilder pSVar7;
		CultureInfo provider;
		String pSVar8;
		int iVar9;
		ulong uVar10;
		float local_ac;
		ulong local_a8;
		ulong local_98;
		byte[] local_88 = new byte[8];
		byte[] local_78 = new byte[8];
		float local_68;
		float fStack_64;
		float local_58;
		float fStack_54;
		Color local_40;

		local_98 = inactive._8_8_;
		local_a8 = inactive._0_8_;
		local_78 = active._8_8_;
		local_88 = active._0_8_;
		local_ac = 0.0;
		__this = new StringBuilder();
		if ((node != null) &&(pGVar2 = node.deferredChildren, pGVar2 != null)) {
			iVar9 = (int)pGVar2.Length;
			uVar6 = pGVar2.Length & 0xffffffff;
			if (__this == null) {
				if (iVar9 < 1) goto label_05e7e6bb;
				uVar10 = 0;
				do {
					if (uVar6 <= uVar10) goto label_05e7e6c0;
					if (pGVar2[uVar10] != null) {
						bVar4 = String.IsNullOrEmpty(pGVar2[uVar10].id);
						if (!bVar4) goto label_05e7e6bb;
						uVar6 = (ulong)(uint)pGVar2.Length;
					}
					uVar10 = uVar10 + 1;
				} while ((long)uVar10 < (long)(int)uVar6);
			}
			else if (0 < iVar9) {
				uVar10 = 0;
				do {
					if (uVar6 <= uVar10) {
	label_05e7e6c0: ;
						throw new IndexOutOfRangeException();
					}
					pGVar3 = pGVar2[uVar10];
					if ((pGVar3 != null) &&(bVar4 = String.IsNullOrEmpty(pGVar3.id), !bVar4)) {
						iVar5 = __this.Length;
						if (0 < iVar5) {
							pSVar7 = __this.Append("<space=") ;
							local_ac = 32.0;
							provider = CultureInfo.InvariantCulture;
							pSVar8 = local_ac.ToString("0.###", (IFormatProvider)provider);
							if ((pSVar7 == null) ||(pSVar7 = pSVar7.Append(pSVar8), pSVar7 == null)) goto label_05e7e6bb;
							pSVar7.Append(">");
						}
						if (node == null) goto label_05e7e6bb;
						bVar4 = String.Equals(pGVar3.id, node.value, 5);
						local_58 = (float)local_88._0_4_;
						fStack_54 = (float)local_88._4_4_;
						local_68 = (float)local_78._0_4_;
						fStack_64 = (float)local_78._4_4_;
						if (!bVar4) {
							local_58 = (float)local_a8;
							fStack_54 = local_a8._4_4_;
							local_68 = (float)local_98;
							fStack_64 = local_98._4_4_;
						}
						pSVar7 = __this.Append("<link=\"");
						if ((pSVar7 == null) ||(pSVar7 = pSVar7.Append(pGVar3.id) , pSVar7 == null)) goto label_05e7e6bb;
						pSVar7 = pSVar7.Append("\"><color=#");
						local_40.r = local_58;
						local_40.g = fStack_54;
						local_40.b = local_68;
						local_40.a = fStack_64;
						pSVar8 = ColorUtility.ToHtmlStringRGBA(ref local_40);
						if ((pSVar7 == null) ||(pSVar7 = pSVar7.Append(pSVar8), pSVar7 == null)) goto label_05e7e6bb;
						pSVar7 = pSVar7.Append(">");
						pSVar8 = pGVar3.text;
						if (pSVar8 == null) {
							pSVar8 = (String)**(ulong*)(g_data_07556758 + 0xb8);
						}
						if ((pSVar7 == null) ||(pSVar7 = pSVar7.Append(pSVar8), pSVar7 == null)) goto label_05e7e6bb;
						pSVar7.Append("</color></link>");
					}
					uVar10 = uVar10 + 1;
					uVar1 = (uint)pGVar2.Length;
					uVar6 = (ulong)uVar1;
				} while ((long)uVar10 < (long)(int)uVar1);
			}
		}
		if (__this != null) {
			pSVar8 = __this.ToString();
			return pSVar8;
		}
	label_05e7e6bb: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x5D7EF20", Offset = "0x5D7DF20", VA = "0x5D7EF20")]
	internal static bool Dispatch(GisketchNodeDefinition node, IGisketchActionHandler actions, GameObject source, string tabId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$Dispatch): 6 lines keep C-only constructs
		uint uVar1;
		String[] pSVar2;
		String actionId;
		IGisketchActionHandler pGVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		GisketchActionContext context;
		bool bVar5;
		ulong uVar6;
		GisketchNodeDefinition __this;
		VirtualInvokeData pVVar7;
		ulong uVar8;
		long lVar9;
		GisketchActionContext GStack_78;
		String pSStack_58;
		GameObject pUStack_50;
		GisketchNodeDefinition pGStack_48;
		int iStack_40;
		uint uStack_3c;

		if (node == null) {
			return false;
		}
		if (actions == null) {
			return false;
		}
		pSVar2 = node.options;
		if ((pSVar2 != null) && (0 < (int)pSVar2.Length)) {
			uVar6 = pSVar2.Length & 0xffffffff;
			uVar8 = 0;
			do {
				if (uVar6 <= uVar8) {
					throw new IndexOutOfRangeException();
				}
				bVar5 = String.Equals(pSVar2[uVar8], tabId, 5);
				if (bVar5) {
					__this = new GisketchNodeDefinition();
					if (__this == null) {
						throw new NullReferenceException();
					}
					__this.id = node.id;
					__this.value = tabId;
					actionId = node.action;
					GStack_78.Node = null;
					GStack_78.InputSource = 0;
					GStack_78._28_4_ = 0;
					GStack_78.ElementId = null;
					GStack_78.GameObject = null;
					GStack_78 = new GisketchActionContext(node.id, source, __this, 1);
					pGStack_48 = GStack_78.Node;
					iStack_40 = GStack_78.InputSource;
					uStack_3c = GStack_78._28_4_;
					pSStack_58 = GStack_78.ElementId;
					pUStack_50 = GStack_78.GameObject;
					pGVar3 = actions.klass;
					uVar6 = (ulong)(pGVar3._2).interface_offsets_count;
					if (uVar6 == 0) goto label_05e7f09f;
					pIVar4 = (pGVar3._1).interfaceOffsets;
					lVar9 = 0;
					goto label_05e7f090;
				}
				uVar8 = uVar8 + 1;
				uVar1 = (uint)pSVar2.Length;
				uVar6 = (ulong)uVar1;
			} while ((long)uVar8 < (long)(int)uVar1);
		}
		return false;
		while (true) {
			lVar9 = lVar9 + 0x10;
			if (!(uVar6 * 0x10 != lVar9)) break;
	label_05e7f090: ;
			if (*(IGisketchActionHandler*)((long)&pIVar4.interfaceType + lVar9) == typeof(IGisketchActionHandler)) {
				pVVar7 = pGVar3.vtable + *(int)((long)&pIVar4.offset + lVar9);
				goto label_05e7f0bd;
			}
		}
	label_05e7f09f: ;
	label_05e7f0bd: ;
		context.GameObject = pUStack_50;
		context.ElementId = pSStack_58;
		context.Node = pGStack_48;
		context.InputSource = iStack_40;
		context._28_4_ = uStack_3c;
		actions.HandleAction(actionId, context);
		return true;
	}

	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x5D7E6D0", Offset = "0x5D7D6D0", VA = "0x5D7E6D0")]
	private static Image CreateUnderline(Transform parent, Color color)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$CreateUnderline): 3 lines keep C-only constructs
		Il2CppType handle;
		Type[] components;
		Type pSVar1;
		object pIVar2;
		GameObject __this;
		Transform __this_00;
		Image pUVar3;

		components = (Type[])new Type[3];
		handle = TypeRef_UnityEngine_RectTransform;
		pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components == null) {
	label_05e7e935: ;
			throw new NullReferenceException();
		}
		if (pSVar1 != null) {
			pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
			if (pIVar2 == null) goto label_05e7e93f;
		}
		if ((int)components.Length != 0) {
			components[0] = pSVar1;
			pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_CanvasRenderer);
			if (pSVar1 != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_05e7e93f;
			}
			if ((components.Length & 0xfffffffe) != 0) {
				components[1] = pSVar1;
				pSVar1 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UnityEngine_UI_Image);
				if (pSVar1 != null) {
					pIVar2 = il2cpp_vm_Object_IsInst((object)pSVar1, (((components.obj).klass)._1).element_class) ;
					if (pIVar2 == null) {
	label_05e7e93f: ;
						pIVar2 = new ArrayTypeMismatchException();
						throw pIVar2;
					}
				}
				if (2 < (uint)components.Length) {
					components[2] = pSVar1;
					__this = new GameObject("AoTTG Subtab Underline", components);
					if (__this != null) {
						__this_00 = __this.transform;
						if (__this_00 != null) {
							__this_00.SetParent(parent, false);
							pUVar3 = __this.GetComponent<Image>();
							if (pUVar3 != null) {
								pUVar3.set_color(color);
								pUVar3.set_raycastTarget(false);
								__this.SetActive(false);
								return pUVar3;
							}
						}
					}
					goto label_05e7e935;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x5D7F0F0", Offset = "0x5D7E0F0", VA = "0x5D7F0F0")]
	private static bool Contains(string[] values, string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$Contains): clean
		uint uVar1;
		bool bVar2;
		ulong uVar3;
		ulong uVar4;

		if ((values == null) || ((int)values.Length < 1)) {
			return false;
		}
		uVar3 = values.Length & 0xffffffff;
		uVar4 = 0;
		while(true) {
			if (uVar3 <= uVar4) {
				throw new IndexOutOfRangeException();
			}
			bVar2 = String.Equals(values[uVar4], value, 5);
			if (bVar2) break;
			uVar4 = uVar4 + 1;
			uVar1 = (uint)values.Length;
			uVar3 = (ulong)uVar1;
			if ((long)(int)uVar1 <= (long)uVar4) {
				return false;
			}
		}
		return true;
	}

	[Token(Token = "0x6000BD1")]
	[Address(RVA = "0x5D7E260", Offset = "0x5D7D260", VA = "0x5D7E260")]
	private static string Labels(GisketchNodeDefinition node)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$Labels): clean
		GisketchNodeDefinition[] pGVar1;
		int iVar2;
		StringBuilder __this;
		ulong uVar3;
		String pSVar4;
		int iVar5;
		ulong uVar6;

		__this = new StringBuilder();
		if ((node != null) &&(pGVar1 = node.deferredChildren, pGVar1 != null)) {
			iVar2 = (int)pGVar1.Length;
			if (__this == null) {
				if (iVar2 < 1) goto label_05e7e341;
				iVar5 = 0;
				do {
					if (pGVar1[iVar5] != null) goto label_05e7e341;
					iVar5 = iVar5 + 1;
				} while (iVar2 != iVar5);
			}
			else {
				if (iVar2 < 1) goto label_05e7e326;
				uVar3 = pGVar1.Length & 0xffffffff;
				uVar6 = 0;
				do {
					if (uVar3 <= uVar6) {
						throw new IndexOutOfRangeException();
					}
					if (pGVar1[uVar6] != null) {
						__this.Append(pGVar1[uVar6].text);
						uVar3 = (ulong)(uint)pGVar1.Length;
					}
					uVar6 = uVar6 + 1;
				} while ((long)uVar6 < (long)(int)uVar3);
			}
		}
		if (__this == null) {
	label_05e7e341: ;
			throw new NullReferenceException();
		}
	label_05e7e326: ;
		pSVar4 = __this.ToString() ;
		return pSVar4;
	}

	[Token(Token = "0x6000BD2")]
	[Address(RVA = "0x5D7FBC0", Offset = "0x5D7EBC0", VA = "0x5D7FBC0")]
	private static float Smooth(float value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$Smooth): clean
		return (3.0 - (value + value)) * value * value;
	}

	[Token(Token = "0x6000BD3")]
	[Address(RVA = "0x5D7FBE0", Offset = "0x5D7EBE0", VA = "0x5D7FBE0")]
	public AottgSubtabStripRuntime()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgSubtabStripRuntime.c (Gisketch.Aottg2UI.Game.AottgSubtabStripRuntime$$.ctor): clean
		base();
		return;
	}
}
