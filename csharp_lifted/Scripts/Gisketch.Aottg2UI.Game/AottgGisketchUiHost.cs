// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGisketchUiHost
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using ApplicationManagers;
using Il2CppDummyDll;
using UI;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x20001E0")]
public sealed class AottgGisketchUiHost : MonoBehaviour
{
	[Token(Token = "0x20001E1")]
	private sealed class LegacyPopupSorting : MonoBehaviour
	{
		[Token(Token = "0x6000B26")]
		[Address(RVA = "0x5D74C20", Offset = "0x5D73C20", VA = "0x5D74C20")]
		private void OnEnable()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost.LegacyPopupSorting$$OnEnable): clean
			Canvas __this_00;

			__this_00 = this.GetComponent<Canvas>();
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.overrideSorting = true;
			__this_00.sortingOrder = 0x1771;
			return;
		}

		[Token(Token = "0x6000B27")]
		[Address(RVA = "0x5D74C80", Offset = "0x5D73C80", VA = "0x5D74C80")]
		public LegacyPopupSorting()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost.LegacyPopupSorting$$.ctor): clean
			base();
			return;
		}
	}

	[Token(Token = "0x20001E3")]
	[CompilerGenerated]
	private sealed class _003CApplyLanguageAfterFrame_003Ed__34 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000A3B")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000A3C")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x17000129")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000B2D")]
			[Address(RVA = "0x5D74D60", Offset = "0x5D73D60", VA = "0x5D74D60", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<ApplyLanguageAfterFrame>d__34$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700012A")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000B2F")]
			[Address(RVA = "0x5D74DB0", Offset = "0x5D73DB0", VA = "0x5D74DB0", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<ApplyLanguageAfterFrame>d__34$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6000B2A")]
		[Address(RVA = "0x5D74510", Offset = "0x5D73510", VA = "0x5D74510")]
		[DebuggerHidden]
		public _003CApplyLanguageAfterFrame_003Ed__34(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<ApplyLanguageAfterFrame>d__34$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6000B2B")]
		[Address(RVA = "0x5D74CC0", Offset = "0x5D73CC0", VA = "0x5D74CC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<ApplyLanguageAfterFrame>d__34$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6000B2C")]
		[Address(RVA = "0x5D74CD0", Offset = "0x5D73CD0", VA = "0x5D74CD0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<ApplyLanguageAfterFrame>d__34$$MoveNext): clean
			int iVar1;

			iVar1 = this.__1__state;
			if (iVar1 == 0) {
				this.__1__state = -1;
				this.__2__current = null;
				this.__1__state = 1;
			}
			else if (iVar1 == 1) {
				this.__1__state = -1;
				UIManager.ApplyLanguageAndTheme();
			}
			return iVar1 == 0;
		}

		[Token(Token = "0x6000B2E")]
		[Address(RVA = "0x5D74D70", Offset = "0x5D73D70", VA = "0x5D74D70", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<ApplyLanguageAfterFrame>d__34$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_ApplyLanguageAfterFrame_d__34_System_Collections_IEnu);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x20001E4")]
	[CompilerGenerated]
	private sealed class _003CRefreshGameCreateAfterActivation_003Ed__35 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x4000A3D")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x4000A3E")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x4000A3F")]
		[FieldOffset(Offset = "0x20")]
		public AottgGisketchUiHost _003C_003E4__this;

		[Token(Token = "0x1700012B")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000B33")]
			[Address(RVA = "0x5D74EE0", Offset = "0x5D73EE0", VA = "0x5D74EE0", Slot = "4")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<RefreshGameCreateAfterActivation>d__35$$System.Collections.Generic.IEnumerator<System.Object>.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x1700012C")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000B35")]
			[Address(RVA = "0x5D74F30", Offset = "0x5D73F30", VA = "0x5D74F30", Slot = "7")]
			[DebuggerHidden]
			get
			{
				// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<RefreshGameCreateAfterActivation>d__35$$System.Collections.IEnumerator.get_Current): clean
				return this.__2__current;
			}
		}

		[Token(Token = "0x6000B30")]
		[Address(RVA = "0x5D74530", Offset = "0x5D73530", VA = "0x5D74530")]
		[DebuggerHidden]
		public _003CRefreshGameCreateAfterActivation_003Ed__35(int _003C_003E1__state)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<RefreshGameCreateAfterActivation>d__35$$.ctor): clean
			base();
			this.__1__state = __1__state;
			return;
		}

		[Token(Token = "0x6000B31")]
		[Address(RVA = "0x5D74DC0", Offset = "0x5D73DC0", VA = "0x5D74DC0", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<RefreshGameCreateAfterActivation>d__35$$System.IDisposable.Dispose): clean
			return;
		}

		[Token(Token = "0x6000B32")]
		[Address(RVA = "0x5D74DD0", Offset = "0x5D73DD0", VA = "0x5D74DD0", Slot = "6")]
		private bool MoveNext()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<RefreshGameCreateAfterActivation>d__35$$MoveNext): clean
			int iVar1;
			AottgGisketchUiHost pGVar2;
			GisketchUIRoot pGVar3;
			bool bVar4;
			bool bVar5;

			iVar1 = this.__1__state;
			pGVar2 = this.__4__this;
			if (iVar1 == 2) {
				this.__1__state = -1;
				if (pGVar2 == null) {
		label_05e74ed9: ;
					throw new NullReferenceException();
				}
				pGVar3 = pGVar2._root;
				AottgGameCreateScreen.Refresh(pGVar3);
			}
			else if (iVar1 == 1) {
				this.__1__state = -1;
				if (pGVar2 == null) goto label_05e74ed9;
				pGVar3 = pGVar2._root;
				bVar4 = AottgGameCreateScreen.Refresh(pGVar3);
				if (!bVar4) {
					this.__2__current = null;
					this.__1__state = 2;
				}
			}
			else if (iVar1 == 0) {
				this.__1__state = -1;
				this.__2__current = null;
				this.__1__state = 1;
			}
			else {
			}
			return bVar5;
		}

		[Token(Token = "0x6000B34")]
		[Address(RVA = "0x5D74EF0", Offset = "0x5D73EF0", VA = "0x5D74EF0", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<RefreshGameCreateAfterActivation>d__35$$System.Collections.IEnumerator.Reset): 4 lines keep C-only constructs
			Il2CppClass klass;
			NotSupportedException __this_00;
			MethodInfo lastManagedFrame;

			klass = il2cpp_codegen_get_runtime_metadata(&typeof(NotSupportedException));
			__this_00 = (NotSupportedException)il2cpp_codegen_object_new(klass);
			__this_00 = new NotSupportedException();
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(& MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_RefreshGameCreateAfterActivation_d__35_System_Collect);
			throw (object)__this_00;
		}
	}

	[Token(Token = "0x4000A2C")]
	private const int InGameSortingBase = 5000;

	[Token(Token = "0x4000A2D")]
	private const string OverlayLayerName = "AoTTG Overlays";

	[Token(Token = "0x4000A2E")]
	private const string ToastLayerName = "AoTTG Toasts";

	[Token(Token = "0x4000A2F")]
	private const int OverlaySortingOrder = 900;

	[Token(Token = "0x4000A30")]
	private const int ToastSortingOrder = 1000;

	[Token(Token = "0x4000A31")]
	private const int LegacyPopupSortingOrder = 6001;

	[Token(Token = "0x4000A32")]
	[FieldOffset(Offset = "0x0")]
	private static AottgGisketchUiHost _instance;

	[Token(Token = "0x4000A33")]
	[FieldOffset(Offset = "0x20")]
	private GisketchUIRoot _root;

	[Token(Token = "0x4000A34")]
	[FieldOffset(Offset = "0x28")]
	private AottgGameUiActions _actions;

	[Token(Token = "0x4000A35")]
	[FieldOffset(Offset = "0x30")]
	private AottgMainMenuTipPanelController _tipPanel;

	[Token(Token = "0x4000A36")]
	[FieldOffset(Offset = "0x38")]
	private int _lastHiddenFrame;

	[Token(Token = "0x4000A37")]
	[FieldOffset(Offset = "0x3C")]
	private bool _inGameOverlayClosing;

	[Token(Token = "0x4000A38")]
	[FieldOffset(Offset = "0x3D")]
	private bool _inGameOverlaySorting;

	[Token(Token = "0x4000A39")]
	[FieldOffset(Offset = "0x3E")]
	private bool _refreshPending;

	[Token(Token = "0x17000124")]
	public static GisketchUIRoot Root
	{
		[Token(Token = "0x6000B0A")]
		[Address(RVA = "0x5D732A0", Offset = "0x5D722A0", VA = "0x5D732A0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$get_Root): clean
			AottgGisketchUiHost pGVar1;

			pGVar1 = AottgGisketchUiHost.Ensure("main-menu");
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			return pGVar1._root;
		}
	}

	[Token(Token = "0x17000125")]
	public static bool IsInGameOverlayActive
	{
		[Token(Token = "0x6000B0B")]
		[Address(RVA = "0x5D73430", Offset = "0x5D72430", VA = "0x5D73430")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$get_IsInGameOverlayActive): clean
			AottgGisketchUiHost pGVar1;
			bool bVar2;

			pGVar1 = AottgGisketchUiHost._instance;
			bVar2 = ((Object)pGVar1 != null);
			if ((bVar2) && (SceneLoader.SceneName == 2)) {
				pGVar1 = AottgGisketchUiHost._instance;
				if (pGVar1 == null) {
					throw new NullReferenceException();
				}
				if (pGVar1._inGameOverlayClosing == false) {
					bVar2 = pGVar1.IsVisible;
					return bVar2;
				}
			}
			return false;
		}
	}

	[Token(Token = "0x17000126")]
	public static bool IsPauseScreenActive
	{
		[Token(Token = "0x6000B0C")]
		[Address(RVA = "0x5D735D0", Offset = "0x5D725D0", VA = "0x5D735D0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$get_IsPauseScreenActive): 1 lines keep C-only constructs
			bool bVar1;
			String* ppSVar2;

			if (g_data_07548792 == false) {
				ppSVar2 = &"pause";
				g_data_07548792 = true;
			}
			bVar1 = AottgGisketchUiHost.IsInGameOverlayActive;
			if (bVar1) {
				bVar1 = AottgGisketchUiHost.IsScreenActive("pause");
				return bVar1;
			}
			return false;
		}
	}

	[Token(Token = "0x17000127")]
	public static bool ClosedInGameOverlayThisFrame
	{
		[Token(Token = "0x6000B0D")]
		[Address(RVA = "0x5D73710", Offset = "0x5D72710", VA = "0x5D73710")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$get_ClosedInGameOverlayThisFrame): clean
			int iVar1;
			AottgGisketchUiHost pGVar2;
			bool bVar3;
			int iVar4;
			bool bVar5;

			pGVar2 = AottgGisketchUiHost._instance;
			bVar3 = ((Object)pGVar2 != null);
			if (bVar3) {
				pGVar2 = AottgGisketchUiHost._instance;
				if (pGVar2 == null) {
					throw new NullReferenceException();
				}
				iVar1 = pGVar2._lastHiddenFrame;
				iVar4 = Time.frameCount;
				bVar5 = iVar1 == iVar4;
			}
			return bVar5;
		}
	}

	[Token(Token = "0x17000128")]
	private bool IsVisible
	{
		[Token(Token = "0x6000B0E")]
		[Address(RVA = "0x5D734F0", Offset = "0x5D724F0", VA = "0x5D734F0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$get_IsVisible): clean
			GisketchUIRoot pGVar1;
			bool bVar2;
			Canvas x;

			pGVar1 = this._root;
			x = null;
			bVar2 = ((Object)pGVar1 != null);
			if (bVar2) {
				pGVar1 = this._root;
				if (pGVar1 == null) goto label_05e735bd;
				x = pGVar1.GetComponentInChildren<Canvas>(true);
			}
			bVar2 = ((Object)x != null);
			if (!bVar2) {
				return false;
			}
			if (x != null) {
				bVar2 = x.enabled;
				return bVar2;
			}
		label_05e735bd: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x5D73610", Offset = "0x5D72610", VA = "0x5D73610")]
	public static bool IsScreenActive(string screenId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$IsScreenActive): clean
		AottgGisketchUiHost pGVar1;
		GisketchUIRoot pGVar2;
		GisketchScreenRouter pGVar3;
		bool bVar4;

		pGVar1 = AottgGisketchUiHost._instance;
		bVar4 = ((Object)pGVar1 != null);
		if (bVar4) {
			pGVar1 = AottgGisketchUiHost._instance;
			if (pGVar1 == null) {
	label_05e73706: ;
				throw new NullReferenceException();
			}
			pGVar2 = pGVar1._root;
			bVar4 = ((Object)pGVar2 != null);
			if (bVar4) {
				pGVar1 = AottgGisketchUiHost._instance;
				if ((pGVar1 == null) ||(pGVar2 = pGVar1._root, pGVar2 == null)) goto label_05e73706;
				pGVar3 = pGVar2._Screens_k__BackingField;
				if (pGVar3 != null) {
					bVar4 = (pGVar3._activeId == screenId);
					return bVar4;
				}
			}
		}
		return false;
	}

	[Token(Token = "0x6000B10")]
	internal static T AboveOverlay<T>(T popup) where T : BasePopup
	{
		return null;
	}

	[Token(Token = "0x6000B11")]
	[Address(RVA = "0x5D737B0", Offset = "0x5D727B0", VA = "0x5D737B0")]
	public static AottgMainMenuTipPanelController ShowMainMenu()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$ShowMainMenu): clean
		AottgGisketchUiHost __this;

		__this = AottgGisketchUiHost.ShowMenuScreen("main-menu");
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.EnsureMainMenuControllers();
		return __this._tipPanel;
	}

	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x5D73800", Offset = "0x5D72800", VA = "0x5D73800")]
	private static AottgGisketchUiHost ShowMenuScreen(string screenId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$ShowMenuScreen): clean
		GisketchUIRoot pGVar1;
		GisketchScreenRouter __this;
		AottgGisketchUiHost __this_00;

		__this_00 = AottgGisketchUiHost.Ensure(screenId);
		if (__this_00 != null) {
			__this_00.ApplyThemeAndScale();
			__this_00.SetCanvasSorting(false);
			pGVar1 = __this_00._root;
			if (pGVar1 != null) {
				__this = pGVar1._Screens_k__BackingField;
				if (__this != null) {
					__this.ShowScreen(screenId);
				}
				__this_00.SetVisible(true);
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000B13")]
	[Address(RVA = "0x5D73EC0", Offset = "0x5D72EC0", VA = "0x5D73EC0")]
	public static void PrepareForScene(SceneName sceneName)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$PrepareForScene): clean
		GisketchUIRoot pGVar1;
		GisketchScreenRouter __this;
		String screenId;
		bool bVar2;
		AottgGisketchUiHost pGVar3;

		if (Il2CppMethodInitialized_07548797 == false) {
			Il2CppMethodInitialized_07548797 = true;
			if (Il2CppMethodInitialized_07548798 == false) goto label_05e73f24;
	label_05e73ed9: ;
			screenId = "gallery";
			if (sceneName == 6) goto joined_r0x05e73f55;
	label_05e73ede: ;
			screenId = "snapshot-viewer";
			if (sceneName == 5) goto joined_r0x05e73f55;
		}
		else {
			if (Il2CppMethodInitialized_07548798 != false) goto label_05e73ed9;
	label_05e73f24: ;
			Il2CppMethodInitialized_07548798 = true;
			screenId = "gallery";
			if (sceneName != 6) goto label_05e73ede;
	joined_r0x05e73f55: ;
			if (screenId != null) {
				AottgGisketchUiHost.ShowMenuScreen(screenId);
				return;
			}
		}
		pGVar3 = AottgGisketchUiHost._instance;
		bVar2 = ((Object)pGVar3 == null);
		if ((sceneName == 1) || (bVar2)) {
			return;
		}
		pGVar3 = AottgGisketchUiHost._instance;
		if (pGVar3 == null) {
	label_05e73ff5: ;
			throw new NullReferenceException();
		}
		pGVar3._inGameOverlayClosing = false;
		pGVar1 = pGVar3._root;
		if ((pGVar1 != null) &&(__this = pGVar1._Screens_k__BackingField, __this != null)) {
			__this.DeactivateActive(false, null);
			pGVar3 = AottgGisketchUiHost._instance;
			if (pGVar3 == null) goto label_05e73ff5;
		}
		pGVar3.SetVisible(false);
		return;
	}

	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x5D74000", Offset = "0x5D73000", VA = "0x5D74000")]
	private static string ViewerScreenId(SceneName sceneName)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$ViewerScreenId): clean
		if (sceneName == 5) {
			return "snapshot-viewer";
		}
		if (sceneName == 6) {
			return "gallery";
		}
		return null;
	}

	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x5D74060", Offset = "0x5D73060", VA = "0x5D74060")]
	public static void ShowPause()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$ShowPause): clean
		int iVar1;
		GisketchUIRoot pGVar2;
		GisketchScreenRouter __this;
		int iVar3;
		AottgGisketchUiHost __this_00;

		__this_00 = AottgGisketchUiHost.Ensure("pause");
		if (__this_00 != null) {
			iVar1 = __this_00._lastHiddenFrame;
			iVar3 = Time.frameCount;
			if (iVar1 == iVar3) {
				return;
			}
			GisketchInputCapture.BlockThisFrame();
			__this_00._inGameOverlayClosing = false;
			__this_00.ApplyThemeAndScale();
			__this_00.SetCanvasSorting(true);
			pGVar2 = __this_00._root;
			if (pGVar2 != null) {
				__this = pGVar2._Screens_k__BackingField;
				if (__this != null) {
					__this.ShowScreen("pause");
				}
				__this_00.SetVisible(true);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x5D74130", Offset = "0x5D73130", VA = "0x5D74130")]
	public static void ShowGameCreate(bool multiplayer, bool restart = false)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$ShowGameCreate): 1 lines keep C-only constructs
		uint uVar1;
		GisketchUIRoot pGVar2;
		GisketchScreenRouter __this;
		bool bVar3;
		AottgGisketchUiHost __this_00;
		AottgGisketchUiHost.d__35<RefreshGameCreateAfterActivation> __this_01;
		uint launchContext;
		bool bVar5;

		bVar5 = multiplayer;
		if ((!restart) || (multiplayer)) goto label_05e741ea;
		bVar5 = false;
		bVar3 = PhotonNetwork.InRoom;
		if (!bVar3) goto label_05e741ea;
		if ((typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_07544cc2 != false) goto label_05e741cc;
	label_05e7432d: ;
			g_data_07544cc2 = true;
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_07544cc2 == false) goto label_05e7432d;
	label_05e741cc: ;
			uVar1 = (typeof(PhotonNetwork)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar5 = PhotonNetwork.offlineMode == false;
	label_05e741ea: ;
		launchContext = 2;
		if (!restart) {
			launchContext = (uint)multiplayer;
		}
		AottgGameCreateSession.Begin(launchContext, bVar5);
		__this_00 = AottgGisketchUiHost.Ensure("game-create");
		if (__this_00 != null) {
			__this_00._inGameOverlayClosing = false;
			__this_00.ApplyThemeAndScale();
			__this_00.SetCanvasSorting(restart);
			pGVar2 = __this_00._root;
			if (pGVar2 != null) {
				__this = pGVar2._Screens_k__BackingField;
				if (__this != null) {
					__this.ShowScreen("game-create");
				}
				__this_00.SetVisible(true);
				pGVar2 = __this_00._root;
				bVar5 = AottgGameCreateScreen.Refresh(pGVar2);
				if (bVar5) {
					return;
				}
				__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGisketchUiHost.d__35<RefreshGameCreateAfterActivation>));
				__this_01 = new Object();
				__this_01.__1__state = 0;
				__this_01.__4__this = __this_00;
				__this_00.StartCoroutine((IEnumerator)__this_01);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x5D743E0", Offset = "0x5D733E0", VA = "0x5D743E0")]
	public static void ApplyLanguageNextFrame()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$ApplyLanguageNextFrame): 1 lines keep C-only constructs
		AottgGisketchUiHost pGVar1;
		bool bVar2;
		AottgGisketchUiHost.d__34<ApplyLanguageAfterFrame> __this;

		pGVar1 = AottgGisketchUiHost._instance;
		bVar2 = ((Object)pGVar1 != null);
		if (bVar2) {
			pGVar1 = AottgGisketchUiHost._instance;
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGisketchUiHost.d__34<ApplyLanguageAfterFrame>));
			__this = new Object();
			__this.__1__state = 0;
			pGVar1.StartCoroutine((IEnumerator)__this);
			return;
		}
		return;
	}

	[Token(Token = "0x6000B18")]
	[Address(RVA = "0x5D744C0", Offset = "0x5D734C0", VA = "0x5D744C0")]
	[IteratorStateMachine(typeof(_003CApplyLanguageAfterFrame_003Ed__34))]
	private IEnumerator ApplyLanguageAfterFrame()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$ApplyLanguageAfterFrame): 1 lines keep C-only constructs
		AottgGisketchUiHost.d__34<ApplyLanguageAfterFrame> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGisketchUiHost.d__34<ApplyLanguageAfterFrame>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x5D74370", Offset = "0x5D73370", VA = "0x5D74370")]
	[IteratorStateMachine(typeof(_003CRefreshGameCreateAfterActivation_003Ed__35))]
	private IEnumerator RefreshGameCreateAfterActivation()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$RefreshGameCreateAfterActivation): 1 lines keep C-only constructs
		AottgGisketchUiHost.d__35<RefreshGameCreateAfterActivation> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGisketchUiHost.d__35<RefreshGameCreateAfterActivation>));
		__this_00 = new Object();
		__this_00.__1__state = 0;
		__this_00.__4__this = this;
		return (IEnumerator)__this_00;
	}

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x5D74550", Offset = "0x5D73550", VA = "0x5D74550")]
	public static void CloseOverlays()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$CloseOverlays): clean
		AottgGisketchUiHost pGVar1;
		GisketchUIRoot pGVar2;
		GisketchOverlayManager __this;
		bool bVar3;

		pGVar1 = AottgGisketchUiHost._instance;
		bVar3 = ((Object)pGVar1 != null);
		if (bVar3) {
			pGVar1 = AottgGisketchUiHost._instance;
			if (pGVar1 == null) {
				throw new NullReferenceException();
			}
			pGVar2 = pGVar1._root;
			if ((pGVar2 != null) &&(__this = pGVar2._Overlays_k__BackingField, __this != null)) {
				__this.CloseAll();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x5D74600", Offset = "0x5D73600", VA = "0x5D74600")]
	public static void HideInGameOverlay(bool returnToGameplay = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$HideInGameOverlay): 11 lines keep C-only constructs
		byte bVar1;
		AottgGisketchUiHost pGVar2;
		BaseMenu pUVar3;
		BaseMenu pUVar4;
		GisketchUIRoot pGVar5;
		GisketchScreenRouter __this;
		bool bVar6;
		int iVar7;
		AottgGisketchUiHost.c__DisplayClass37_0 __this_00;
		Action __this_01;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo method_00;
		MethodInfo extraout_RDX_01;
		AottgGisketchUiHost.c__DisplayClass37_0 targetAddress;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgGisketchUiHost.c__DisplayClass37_0));
		__this_00 = new Object();
		pGVar2 = AottgGisketchUiHost._instance;
		bVar6 = ((Object)pGVar2 == null);
		if (bVar6) {
			return;
		}
		if (__this_00 != null) {
			targetAddress = &__this_00.fields;
			__this_00.host = AottgGisketchUiHost._instance;
			pGVar2 = __this_00.host;
			if (pGVar2 != null) {
				pGVar2._inGameOverlayClosing = true;
				iVar7 = Time.frameCount;
				pGVar2._lastHiddenFrame = iVar7;
				method_00 = extraout_RDX;
				if (returnToGameplay) {
					if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
						method_00 = extraout_RDX_00;
					}
					pUVar3 = UIManager.CurrentMenu;
					if (pUVar3 != null) {
						pUVar4 = pUVar3.klass;
						bVar1 = (typeof(InGameMenu)._2).typeHierarchyDepth;
						method_00 = (MethodInfo)(ulong)bVar1;
						if ((bVar1 <= (pUVar4._2).typeHierarchyDepth) &&((pUVar4._2).typeHierarchy[(long)&method_00[-1].field_0x57] ==typeof(InGameMenu))) {
							CursorManager.SetHidden(true);
							method_00 = extraout_RDX_01;
						}
					}
				}
				pGVar2 = targetAddress.host;
				if (pGVar2 != null) {
					pGVar5 = pGVar2._root;
					if ((pGVar5 != null) &&(__this = pGVar5._Screens_k__BackingField, __this != null)) {
						__this_01 = new Action((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgGisketchUiHost_c__DisplayClass37_0_HideInGameOverlay_b__0);
						__this.DeactivateActive(true, __this_01);
						return;
					}
					pGVar2.SetVisible(false);
					if (targetAddress.host != null) {
						targetAddress.host._inGameOverlayClosing = false;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x5D732E0", Offset = "0x5D722E0", VA = "0x5D732E0")]
	private static AottgGisketchUiHost Ensure(string initialScreenId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$Ensure): clean
		bool bVar1;
		Object target;
		AottgGisketchUiHost pGVar2;

		pGVar2 = AottgGisketchUiHost._instance;
		bVar1 = ((Object)pGVar2 != null);
		if (bVar1) {
	label_05e7340a: ;
			return AottgGisketchUiHost._instance;
		}
		target = new GameObject("AoTTG Gisketch UI");
		Object.DontDestroyOnLoad(target);
		if (target != null) {
			pGVar2 = target.AddComponent<AottgGisketchUiHost>();
			AottgGisketchUiHost._instance = pGVar2;
			pGVar2 = AottgGisketchUiHost._instance;
			if (pGVar2 != null) {
				pGVar2.Initialize(initialScreenId);
				goto label_05e7340a;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x5D74830", Offset = "0x5D73830", VA = "0x5D74830")]
	private void Initialize(string initialScreenId)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$Initialize): 7 lines keep C-only constructs
		GisketchUIRoot* targetAddress;
		bool bVar1;
		GameObject pUVar2;
		GisketchUIRoot pGVar3;
		AottgGameUiActions pGVar4;
		AottgGameCreateFileWatcher __this_00;
		MethodInfo method_00;

		if (Il2CppMethodInitialized_075487a1 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIRoot) ;
			Il2CppMethodInitialized_075487a1 = true;
		}
		pUVar2 = this.gameObject;
		if (pUVar2 != null) {
			pGVar3 = pUVar2.AddComponent<GisketchUIRoot>();
			targetAddress = &this._root;
			this._root = pGVar3;
			pUVar2 = this.gameObject;
			if (pUVar2 != null) {
				pGVar4 = pUVar2.AddComponent<AottgGameUiActions>();
				this._actions = pGVar4;
				pUVar2 = this.gameObject;
				if (pUVar2 != null) {
					__this_00 = pUVar2.AddComponent<AottgGameCreateFileWatcher>();
					if (__this_00 != null) {
						__this_00.Setup(*targetAddress) ;
						bVar1 = MobilePlatformUtility.IsMobileRuntime();
						if (bVar1) {
							pUVar2 = this.gameObject;
							if (pUVar2 == null) goto label_05e749b6;
							pUVar2.AddComponent<AottgMobileUiSafeArea>();
						}
						pGVar3 = *targetAddress;
						bVar1 = String.IsNullOrEmpty(initialScreenId);
						if (pGVar3 != null) {
							if (bVar1) {
								initialScreenId = "main-menu";
							}
							pGVar3.SetSelectedScreen(initialScreenId);
							if (*targetAddress != null) {
								method_00 = (MethodInfo)this._actions;
								(*targetAddress).SetActionHandler((MonoBehaviour)method_00);
								this.ApplyThemeAndScale();
								return;
							}
						}
					}
				}
			}
		}
	label_05e749b6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x5D73A30", Offset = "0x5D72A30", VA = "0x5D73A30")]
	private void ApplyThemeAndScale()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$ApplyThemeAndScale): clean
		GisketchUIState pGVar1;
		AottgMainMenuTipPanelController pGVar2;
		AottgGameUiActions pGVar3;
		UISettings pSVar4;
		FloatSetting pSVar5;
		bool bVar6;
		String path;
		Object x;
		GisketchUIRoot pGVar7;

		pGVar7 = this._root;
		bVar6 = ((Object)pGVar7 == null);
		if (bVar6) {
			return;
		}
		path = AottgGisketchUiHost.GisketchThemePath();
		x = (Object)Resources.Load<TextAsset>(path);
		pGVar7 = this._root;
		if (pGVar7 == null) goto label_05e73c1e;
		pGVar1 = pGVar7._State_k__BackingField;
		if (this._refreshPending == false) {
			bVar6 = (x != null);
			pGVar7 = this._root;
			if (bVar6) {
				if (pGVar7 == null) goto label_05e73c1e;
				pGVar7.SetTheme((TextAsset)x);
			}
			else {
				if (pGVar7 == null) goto label_05e73c1e;
				if (pGVar7._Manifest_k__BackingField ==null) {
					pGVar7.Build();
				}
			}
		}
		else {
			pGVar7.RefreshActiveScreen((TextAsset)x);
		}
		this._refreshPending = false;
		pGVar7 = this._root;
		if (pGVar7 != null) {
			if (pGVar7._State_k__BackingField != pGVar1) {
				pGVar2 = this._tipPanel;
				bVar6 = ((Object)pGVar2 != null);
				if (bVar6) {
					pGVar2 = this._tipPanel;
					if (pGVar2 == null) goto label_05e73c1e;
					pGVar2.ShowRandomTip(false);
				}
				pGVar3 = this._actions;
				bVar6 = ((Object)pGVar3 != null);
				if (bVar6) {
					pGVar3 = this._actions;
					if (pGVar3 == null) goto label_05e73c1e;
					pGVar3.RefreshAccountState();
				}
			}
			pSVar4 = SettingsManager.UISettings;
			if (pSVar4 == null) {
				return;
			}
			pSVar5 = pSVar4.UIMasterScale;
			if ((pSVar5 != null) &&(pGVar7 = this._root, pGVar7 != null)) {
				pGVar7.SetScale(pSVar5._value);
				return;
			}
		}
	label_05e73c1e: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000B1F")]
	[Address(RVA = "0x5D73870", Offset = "0x5D72870", VA = "0x5D73870")]
	private void EnsureMainMenuControllers()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$EnsureMainMenuControllers): 5 lines keep C-only constructs
		AottgMainMenuTipPanelController* targetAddress;
		bool bVar1;
		AottgMainMenuPanelHoverSlide pGVar2;
		GameObject pUVar3;
		AottgMainMenuTipPanelController pGVar4;

		pGVar2 = this.GetComponent<AottgMainMenuPanelHoverSlide>();
		bVar1 = ((Object)pGVar2 == null);
		if (bVar1) {
			pUVar3 = this.gameObject;
			if (pUVar3 == null) goto label_05e73a26;
			pGVar2 = pUVar3.AddComponent<AottgMainMenuPanelHoverSlide>();
			if (pGVar2 == null) goto label_05e73a26;
			pGVar2._root = this._root;
		}
		pGVar4 = this._tipPanel;
		bVar1 = ((Object)pGVar4 == null);
		if (!bVar1) {
			return;
		}
		pUVar3 = this.gameObject;
		if (pUVar3 != null) {
			targetAddress = &this._tipPanel;
			pGVar4 = pUVar3.GetComponent<AottgMainMenuTipPanelController>() ;
			*targetAddress = pGVar4;
			pGVar4 = *targetAddress;
			bVar1 = ((Object)pGVar4 == null);
			if (bVar1) {
				pUVar3 = this.gameObject;
				if (pUVar3 == null) goto label_05e73a26;
				pGVar4 = pUVar3.AddComponent<AottgMainMenuTipPanelController>();
				*targetAddress = pGVar4;
			}
			if (*targetAddress != null) {
				(*targetAddress).Setup(this._root);
				return;
			}
		}
	label_05e73a26: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000B20")]
	[Address(RVA = "0x5D73DA0", Offset = "0x5D72DA0", VA = "0x5D73DA0")]
	private void SetVisible(bool visible)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$SetVisible): clean
		GisketchUIRoot pGVar1;
		AottgGameUiActions pGVar2;
		bool bVar3;
		uint uVar4;
		Object[] pSVar5;
		uint uVar6;

		pGVar1 = this._root;
		bVar3 = ((Object)pGVar1 != null);
		if (bVar3) {
			pGVar1 = this._root;
			if (pGVar1 == null) goto label_05e73eb2;
			pGVar1.enabled = visible;
		}
		pGVar2 = this._actions;
		bVar3 = ((Object)pGVar2 != null);
		if (bVar3) {
			pGVar2 = this._actions;
			if (pGVar2 == null) goto label_05e73eb2;
			pGVar2.enabled = visible;
		}
		pSVar5 = this.GetComponentsInChildren<Canvas>(true);
		if (pSVar5 != null) {
			uVar4 = (uint)pSVar5.Length;
			if (0 < (int)uVar4) {
				uVar6 = 0;
				do {
					if (uVar4 <= uVar6) {
						throw new IndexOutOfRangeException();
					}
					if ((Behaviour)pSVar5[(int)uVar6] == null) goto label_05e73eb2;
					(pSVar5[(int)uVar6]).enabled = visible;
					uVar6 = uVar6 + 1;
					uVar4 = (uint)pSVar5.Length;
				} while ((int)uVar6 < (int)uVar4);
			}
			return;
		}
	label_05e73eb2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000B21")]
	[Address(RVA = "0x5D73C30", Offset = "0x5D72C30", VA = "0x5D73C30")]
	private void SetCanvasSorting(bool inGameOverlay)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$SetCanvasSorting): clean
		Canvas __this_00;
		bool bVar1;
		uint uVar2;
		Object[] pSVar3;
		Object __this_01;
		String a;
		int iVar4;
		uint uVar5;
		int iVar6;

		this._inGameOverlaySorting = inGameOverlay;
		pSVar3 = this.GetComponentsInChildren<Canvas>(true);
		if (pSVar3 == null) {
	label_05e73d91: ;
			throw new NullReferenceException();
		}
		uVar5 = 0;
		iVar4 = 5000;
		if (!inGameOverlay) {
			iVar4 = 0;
		}
		uVar2 = (uint)pSVar3.Length;
		if (0 < (int)uVar2) {
			do {
				if (uVar2 <= uVar5) {
					throw new IndexOutOfRangeException();
				}
				__this_00 = (Canvas)pSVar3[(int)uVar5];
				if (__this_00 == null) goto label_05e73d91;
				__this_01 = (Object)__this_00.gameObject;
				if (__this_01 == null) goto label_05e73d91;
				a = __this_01.name;
				bVar1 = (a == "AoTTG Overlays");
				iVar6 = 900;
				if (!bVar1) {
					bVar1 = (a == "AoTTG Toasts");
					iVar6 = 1000;
					if (!bVar1) {
						iVar6 = 0;
					}
				}
				__this_00.overrideSorting = iVar6 != 0 || inGameOverlay;
				__this_00.sortingOrder = iVar6 + iVar4;
				uVar5 = uVar5 + 1;
				uVar2 = (uint)pSVar3.Length;
			} while ((int)uVar5 < (int)uVar2);
		}
		return;
	}

	[Token(Token = "0x6000B22")]
	[Address(RVA = "0x5D74A70", Offset = "0x5D73A70", VA = "0x5D74A70")]
	private static int LayerSortingOrder(string layerName)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$LayerSortingOrder): clean
		bool bVar1;
		int iVar2;

		bVar1 = (layerName == "AoTTG Overlays");
		if (!bVar1) {
			bVar1 = (layerName == "AoTTG Toasts");
			if (!bVar1) {
			}
		}
		return iVar2;
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x5D74AF0", Offset = "0x5D73AF0", VA = "0x5D74AF0")]
	public static void RefreshLanguageAndTheme()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$RefreshLanguageAndTheme): clean
		AottgGisketchUiHost pGVar1;
		GisketchUIRoot pGVar2;
		bool bVar3;

		pGVar1 = AottgGisketchUiHost._instance;
		bVar3 = ((Object)pGVar1 == null);
		if (!bVar3) {
			pGVar1 = AottgGisketchUiHost._instance;
			if (pGVar1 == null) {
	label_05e74c07: ;
				throw new NullReferenceException();
			}
			pGVar2 = pGVar1._root;
			bVar3 = ((Object)pGVar2 == null);
			if (!bVar3) {
				pGVar1 = AottgGisketchUiHost._instance;
				if ((pGVar1 == null) ||(pGVar2 = pGVar1._root, pGVar2 == null)) goto label_05e74c07;
				if (pGVar2._Screens_k__BackingField != null ) {
					pGVar1._refreshPending = true;
					bVar3 = pGVar1.IsVisible;
					if (bVar3) {
						pGVar1 = AottgGisketchUiHost._instance;
						if (pGVar1 != null) {
							pGVar1.ApplyThemeAndScale();
							pGVar1 = AottgGisketchUiHost._instance;
							if (pGVar1 != null) {
								pGVar1.SetCanvasSorting(pGVar1._inGameOverlaySorting);
								return;
							}
						}
						goto label_05e74c07;
					}
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x5D749C0", Offset = "0x5D739C0", VA = "0x5D749C0")]
	private static string GisketchThemePath()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$GisketchThemePath): clean
		UISettings pSVar1;
		StringSetting pSVar2;
		bool bVar3;

		pSVar1 = SettingsManager.UISettings;
		if (pSVar1 != null) {
			pSVar2 = pSVar1.UITheme;
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			bVar3 = (pSVar2._value == "Light");
			if (bVar3) {
				return "UI/Themes/Aottg2Light";
			}
		}
		return "UI/Themes/Aottg2Dark";
	}

	[Token(Token = "0x6000B25")]
	[Address(RVA = "0x5D74C10", Offset = "0x5D73C10", VA = "0x5D74C10")]
	public AottgGisketchUiHost()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c (Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$.ctor): clean
		this._lastHiddenFrame = -1;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c.

	// Gisketch.Aottg2UI.Game.AottgGisketchUiHost$$AboveOverlay<object>: clean
	private static object AboveOverlay_object(object popup)
	{
		bool bVar1;
		GameObject pUVar2;
		object local_18;
		object local_10;

		local_10 = null;
		local_18 = null;
		if (popup == null) goto label_0358875e;
		bVar1 = popup.TryGetComponent<AottgGisketchUiHost.LegacyPopupSorting>(ref local_10);
		if (!bVar1) {
			bVar1 = popup.TryGetComponent<Canvas>(ref local_18);
			if (!bVar1) {
				pUVar2 = popup.gameObject;
				if (pUVar2 == null) goto label_0358875e;
				pUVar2.AddComponent<Canvas>();
				pUVar2 = popup.gameObject;
				if (pUVar2 == null) goto label_0358875e;
				pUVar2.AddComponent<GraphicRaycaster>() ;
			}
			pUVar2 = popup.gameObject;
			if (pUVar2 == null) {
	label_0358875e: ;
				throw new NullReferenceException();
			}
			pUVar2.AddComponent<AottgGisketchUiHost.LegacyPopupSorting>();
		}
		return popup;
	}

	// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<>c__DisplayClass37_0$$.ctor: clean
	private void c__DisplayClass37_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgGisketchUiHost.<>c__DisplayClass37_0$$<HideInGameOverlay>b__0: clean
	private void c__DisplayClass37_0__HideInGameOverlay_b__0()
	{
		AottgGisketchUiHost pGVar1;

		pGVar1 = this.host;
		if (pGVar1 != null) {
			pGVar1.SetVisible(false);
			pGVar1 = this.host;
			if (pGVar1 != null) {
				pGVar1._inGameOverlayClosing = false;
				return;
			}
		}
		throw new NullReferenceException();
	}
}
