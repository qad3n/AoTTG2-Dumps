// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgGisketchUiHost
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgGisketchUiHost.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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

[Token(Token = "0x20001CA")]
public sealed class AottgGisketchUiHost : MonoBehaviour
{
	[Token(Token = "0x20001CB")]
	private sealed class LegacyPopupSorting : MonoBehaviour
	{
		[Token(Token = "0x6000A72")]
		[Address(RVA = "0x23B9330", Offset = "0x23B7930", VA = "0x1823B9330")]
		private void OnEnable()
		{
		}

		[Token(Token = "0x6000A73")]
		[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
		public LegacyPopupSorting()
		{
		}
	}

	[Token(Token = "0x20001CD")]
	[CompilerGenerated]
	private sealed class _003CRefreshGameCreateAfterActivation_003Ed__28 : IEnumerator<object>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40009C9")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40009CA")]
		[FieldOffset(Offset = "0x18")]
		private object _003C_003E2__current;

		[Token(Token = "0x40009CB")]
		[FieldOffset(Offset = "0x20")]
		public AottgGisketchUiHost _003C_003E4__this;

		[Token(Token = "0x17000126")]
		private object System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002EObject_003E_002ECurrent
		{
			[Token(Token = "0x6000A79")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "4")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000127")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000A7B")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "7")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000A76")]
		[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
		[DebuggerHidden]
		public _003CRefreshGameCreateAfterActivation_003Ed__28(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x6000A77")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x6000A78")]
		[Address(RVA = "0x23B9550", Offset = "0x23B7B50", VA = "0x1823B9550", Slot = "6")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000A7A")]
		[Address(RVA = "0x23B9660", Offset = "0x23B7C60", VA = "0x1823B9660", Slot = "8")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}
	}

	[Token(Token = "0x40009BC")]
	private const int InGameSortingBase = 5000;

	[Token(Token = "0x40009BD")]
	private const string OverlayLayerName = "AoTTG Overlays";

	[Token(Token = "0x40009BE")]
	private const string ToastLayerName = "AoTTG Toasts";

	[Token(Token = "0x40009BF")]
	private const int OverlaySortingOrder = 900;

	[Token(Token = "0x40009C0")]
	private const int ToastSortingOrder = 1000;

	[Token(Token = "0x40009C1")]
	private const int LegacyPopupSortingOrder = 6001;

	[Token(Token = "0x40009C2")]
	[FieldOffset(Offset = "0x0")]
	private static AottgGisketchUiHost _instance;

	[Token(Token = "0x40009C3")]
	[FieldOffset(Offset = "0x20")]
	private GisketchUIRoot _root;

	[Token(Token = "0x40009C4")]
	[FieldOffset(Offset = "0x28")]
	private AottgGameUiActions _actions;

	[Token(Token = "0x40009C5")]
	[FieldOffset(Offset = "0x30")]
	private AottgMainMenuTipPanelController _tipPanel;

	[Token(Token = "0x40009C6")]
	[FieldOffset(Offset = "0x38")]
	private int _lastHiddenFrame;

	[Token(Token = "0x40009C7")]
	[FieldOffset(Offset = "0x3C")]
	private bool _inGameOverlayClosing;

	[Token(Token = "0x17000121")]
	public static GisketchUIRoot Root
	{
		[Token(Token = "0x6000A5D")]
		[Address(RVA = "0x23B15C0", Offset = "0x23AFBC0", VA = "0x1823B15C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000122")]
	public static bool IsInGameOverlayActive
	{
		[Token(Token = "0x6000A5E")]
		[Address(RVA = "0x23B1110", Offset = "0x23AF710", VA = "0x1823B1110")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000123")]
	public static bool IsPauseScreenActive
	{
		[Token(Token = "0x6000A5F")]
		[Address(RVA = "0x23B1290", Offset = "0x23AF890", VA = "0x1823B1290")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000124")]
	public static bool ClosedInGameOverlayThisFrame
	{
		[Token(Token = "0x6000A60")]
		[Address(RVA = "0x23B1070", Offset = "0x23AF670", VA = "0x1823B1070")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000125")]
	private bool IsVisible
	{
		[Token(Token = "0x6000A61")]
		[Address(RVA = "0x23B14F0", Offset = "0x23AFAF0", VA = "0x1823B14F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000A62")]
	internal static T AboveOverlay<T>(T popup) where T : BasePopup
	{
		return null;
	}

	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x23B0EE0", Offset = "0x23AF4E0", VA = "0x1823B0EE0")]
	public static AottgMainMenuTipPanelController ShowMainMenu()
	{
		return null;
	}

	[Token(Token = "0x6000A64")]
	[Address(RVA = "0x23B0900", Offset = "0x23AEF00", VA = "0x1823B0900")]
	public static void PrepareForScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x23B0F80", Offset = "0x23AF580", VA = "0x1823B0F80")]
	public static void ShowPause()
	{
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x23B0D10", Offset = "0x23AF310", VA = "0x1823B0D10")]
	public static void ShowGameCreate(bool multiplayer, bool restart = false)
	{
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x23B0A00", Offset = "0x23AF000", VA = "0x1823B0A00")]
	[IteratorStateMachine(typeof(_003CRefreshGameCreateAfterActivation_003Ed__28))]
	private IEnumerator RefreshGameCreateAfterActivation()
	{
		return null;
	}

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x23B04E0", Offset = "0x23AEAE0", VA = "0x1823B04E0")]
	public static void HideInGameOverlay(bool returnToGameplay = true)
	{
	}

	[Token(Token = "0x6000A69")]
	[Address(RVA = "0x23B0190", Offset = "0x23AE790", VA = "0x1823B0190")]
	private static AottgGisketchUiHost Ensure(string initialScreenId)
	{
		return null;
	}

	[Token(Token = "0x6000A6A")]
	[Address(RVA = "0x23B0730", Offset = "0x23AED30", VA = "0x1823B0730")]
	private void Initialize(string initialScreenId)
	{
	}

	[Token(Token = "0x6000A6B")]
	[Address(RVA = "0x23AFE20", Offset = "0x23AE420", VA = "0x1823AFE20")]
	private void ApplyThemeAndScale()
	{
	}

	[Token(Token = "0x6000A6C")]
	[Address(RVA = "0x23AFFE0", Offset = "0x23AE5E0", VA = "0x1823AFFE0")]
	private void EnsureMainMenuControllers()
	{
	}

	[Token(Token = "0x6000A6D")]
	[Address(RVA = "0x23B0BE0", Offset = "0x23AF1E0", VA = "0x1823B0BE0")]
	private void SetVisible(bool visible)
	{
	}

	[Token(Token = "0x6000A6E")]
	[Address(RVA = "0x23B0A70", Offset = "0x23AF070", VA = "0x1823B0A70")]
	private void SetCanvasSorting(bool inGameOverlay)
	{
	}

	[Token(Token = "0x6000A6F")]
	[Address(RVA = "0x23B0880", Offset = "0x23AEE80", VA = "0x1823B0880")]
	private static int LayerSortingOrder(string layerName)
	{
		return default(int);
	}

	[Token(Token = "0x6000A70")]
	[Address(RVA = "0x23B0430", Offset = "0x23AEA30", VA = "0x1823B0430")]
	private static string GisketchThemePath()
	{
		return null;
	}

	[Token(Token = "0x6000A71")]
	[Address(RVA = "0x23B1060", Offset = "0x23AF660", VA = "0x1823B1060")]
	public AottgGisketchUiHost()
	{
	}
}
