// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIElementsRuntimeUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x20004C3")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIToolkitAuthoringModule" })]
internal static class UIElementsRuntimeUtility
{
	[Token(Token = "0x20004C4")]
	public delegate BaseRuntimePanel CreateRuntimePanelDelegate(ScriptableObject ownerObject);

	[Token(Token = "0x4001077")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<BaseRuntimePanel> m_onCreatePanel;

	[Token(Token = "0x4001078")]
	[FieldOffset(Offset = "0x8")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private static Action<BaseRuntimePanel> onWillDestroyPanel;

	[Token(Token = "0x4001079")]
	[FieldOffset(Offset = "0x10")]
	private static bool s_RegisteredPlayerloopCallback;

	[Token(Token = "0x400107A")]
	[FieldOffset(Offset = "0x18")]
	private static readonly List<BaseRuntimePanel> s_SortedScreenOverlayPanels;

	[Token(Token = "0x400107B")]
	[FieldOffset(Offset = "0x20")]
	private static readonly List<BaseRuntimePanel> s_CachedWorldSpacePanels;

	[Token(Token = "0x400107C")]
	[FieldOffset(Offset = "0x28")]
	private static readonly List<BaseRuntimePanel> s_SortedPlayerPanels;

	[Token(Token = "0x400107D")]
	[FieldOffset(Offset = "0x30")]
	private static bool s_PanelOrderingOrDrawInCameraDirty;

	[Token(Token = "0x400107E")]
	[FieldOffset(Offset = "0x34")]
	internal static int s_ResolvedSortingIndexMax;

	[Token(Token = "0x400107F")]
	[FieldOffset(Offset = "0x38")]
	private static int currentOverlayIndex;

	[Token(Token = "0x4001083")]
	[FieldOffset(Offset = "0x50")]
	private static DefaultEventSystem s_DefaultEventSystem;

	[Token(Token = "0x4001084")]
	[FieldOffset(Offset = "0x58")]
	private static List<PanelSettings> s_PotentiallyEmptyPanelSettings;

	[Token(Token = "0x170009C8")]
	internal static Object activeEventSystem
	{
		[Token(Token = "0x600258A")]
		[Address(RVA = "0x6B50DA0", Offset = "0x6B4FDA0", VA = "0x6B50DA0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600258B")]
		[Address(RVA = "0x6B50E10", Offset = "0x6B4FE10", VA = "0x6B50E10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170009C9")]
	internal static bool useDefaultEventSystem
	{
		[Token(Token = "0x600258C")]
		[Address(RVA = "0x6B50E70", Offset = "0x6B4FE70", VA = "0x6B50E70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009CA")]
	internal static bool? overrideUseDefaultEventSystem
	{
		[Token(Token = "0x600258D")]
		[Address(RVA = "0x6B51000", Offset = "0x6B50000", VA = "0x6B51000")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600258E")]
		[Address(RVA = "0x6B51070", Offset = "0x6B50070", VA = "0x6B51070")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170009CB")]
	internal static bool autoUpdateEventSystem
	{
		[Token(Token = "0x600258F")]
		[Address(RVA = "0x6B510C0", Offset = "0x6B500C0", VA = "0x6B510C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009CC")]
	internal static DefaultEventSystem defaultEventSystem
	{
		[Token(Token = "0x6002592")]
		[Address(RVA = "0x6B51590", Offset = "0x6B50590", VA = "0x6B51590")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1400002D")]
	public static event Action<BaseRuntimePanel> onCreatePanel
	{
		[Token(Token = "0x600257A")]
		[Address(RVA = "0x6B4E2A0", Offset = "0x6B4D2A0", VA = "0x6B4E2A0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600257B")]
		[Address(RVA = "0x6B4E390", Offset = "0x6B4D390", VA = "0x6B4E390")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600257C")]
	[Address(RVA = "0x6B4E480", Offset = "0x6B4D480", VA = "0x6B4E480")]
	static UIElementsRuntimeUtility()
	{
	}

	[Token(Token = "0x600257D")]
	[Address(RVA = "0x6B4E7D0", Offset = "0x6B4D7D0", VA = "0x6B4E7D0")]
	public static EventBase CreateEvent(Event systemEvent)
	{
		return null;
	}

	[Token(Token = "0x600257E")]
	[Address(RVA = "0x6B4EAE0", Offset = "0x6B4DAE0", VA = "0x6B4EAE0")]
	public static BaseRuntimePanel FindOrCreateRuntimePanel(ScriptableObject ownerObject, CreateRuntimePanelDelegate createDelegate)
	{
		return null;
	}

	[Token(Token = "0x600257F")]
	[Address(RVA = "0x6B4F1E0", Offset = "0x6B4E1E0", VA = "0x6B4F1E0")]
	public static void DisposeRuntimePanel(ScriptableObject ownerObject)
	{
	}

	[Token(Token = "0x6002580")]
	[Address(RVA = "0x6B4F3C0", Offset = "0x6B4E3C0", VA = "0x6B4F3C0")]
	private static void GetPlayerPanelsByRenderMode(List<BaseRuntimePanel> outScreenSpaceOverlayPanels, List<BaseRuntimePanel> outWorldSpacePanels)
	{
	}

	[Token(Token = "0x6002581")]
	[Address(RVA = "0x6B4F020", Offset = "0x6B4E020", VA = "0x6B4F020")]
	private static void RegisterCachedPanelInternal(int instanceID, IPanel panel)
	{
	}

	[Token(Token = "0x6002582")]
	[Address(RVA = "0x6B4ED90", Offset = "0x6B4DD90", VA = "0x6B4ED90")]
	private static void RemoveCachedPanelInternal(int instanceID)
	{
	}

	[Token(Token = "0x6002583")]
	[Address(RVA = "0x6B502B0", Offset = "0x6B4F2B0", VA = "0x6B502B0")]
	public static void RenderOffscreenPanels()
	{
	}

	[Token(Token = "0x6002584")]
	[Address(RVA = "0x6B50630", Offset = "0x6B4F630", VA = "0x6B50630")]
	public static void RepaintPanel(BaseRuntimePanel panel)
	{
	}

	[Token(Token = "0x6002585")]
	[Address(RVA = "0x6B50560", Offset = "0x6B4F560", VA = "0x6B50560")]
	public static void RenderPanel(BaseRuntimePanel panel, bool restoreState = true)
	{
	}

	[Token(Token = "0x6002586")]
	[Address(RVA = "0x6B50690", Offset = "0x6B4F690", VA = "0x6B50690")]
	internal static void BeginRenderOverlays(int displayIndex)
	{
	}

	[Token(Token = "0x6002587")]
	[Address(RVA = "0x6B50700", Offset = "0x6B4F700", VA = "0x6B50700")]
	internal static void RenderOverlaysBeforePriority(int displayIndex, float maxPriority)
	{
	}

	[Token(Token = "0x6002588")]
	[Address(RVA = "0x6B50990", Offset = "0x6B4F990", VA = "0x6B50990")]
	internal static void EndRenderOverlays(int displayIndex)
	{
	}

	[Token(Token = "0x6002589")]
	[Address(RVA = "0x6B50A00", Offset = "0x6B4FA00", VA = "0x6B50A00")]
	public static void RepaintPanels(bool onlyOffscreen)
	{
	}

	[Token(Token = "0x6002590")]
	[Address(RVA = "0x6B51130", Offset = "0x6B50130", VA = "0x6B51130")]
	public static void RegisterEventSystem(Object eventSystem)
	{
	}

	[Token(Token = "0x6002591")]
	[Address(RVA = "0x6B51400", Offset = "0x6B50400", VA = "0x6B51400")]
	public static void UnregisterEventSystem(Object eventSystem)
	{
	}

	[Token(Token = "0x6002593")]
	[Address(RVA = "0x6B51670", Offset = "0x6B50670", VA = "0x6B51670")]
	public static void UpdatePanels()
	{
	}

	[Token(Token = "0x6002594")]
	[Address(RVA = "0x6B51B10", Offset = "0x6B50B10", VA = "0x6B51B10")]
	internal static void UpdateEventSystem()
	{
	}

	[Token(Token = "0x6002595")]
	[Address(RVA = "0x6B51C80", Offset = "0x6B50C80", VA = "0x6B51C80")]
	internal static void MarkPotentiallyEmpty(PanelSettings settings)
	{
	}

	[Token(Token = "0x6002596")]
	[Address(RVA = "0x6B518D0", Offset = "0x6B508D0", VA = "0x6B518D0")]
	internal static void RemoveUnusedPanels()
	{
	}

	[Token(Token = "0x6002597")]
	[Address(RVA = "0x6B4FA60", Offset = "0x6B4EA60", VA = "0x6B4FA60")]
	public static void EnableRenderingAndInputCallbacks()
	{
	}

	[Token(Token = "0x6002598")]
	[Address(RVA = "0x6B50210", Offset = "0x6B4F210", VA = "0x6B50210")]
	public static void DisableRenderingAndInputCallbacks()
	{
	}

	[Token(Token = "0x6002599")]
	[Address(RVA = "0x6B51DC0", Offset = "0x6B50DC0", VA = "0x6B51DC0")]
	internal static void SetPanelOrderingDirty()
	{
	}

	[Token(Token = "0x600259A")]
	[Address(RVA = "0x6B51E30", Offset = "0x6B50E30", VA = "0x6B51E30")]
	internal static void SetPanelsDrawInCameraDirty()
	{
	}

	[Token(Token = "0x600259B")]
	[Address(RVA = "0x6B51EA0", Offset = "0x6B50EA0", VA = "0x6B51EA0")]
	internal static List<BaseRuntimePanel> GetWorldSpacePlayerPanels()
	{
		return null;
	}

	[Token(Token = "0x600259C")]
	[Address(RVA = "0x6B504B0", Offset = "0x6B4F4B0", VA = "0x6B504B0")]
	public static List<BaseRuntimePanel> GetSortedScreenOverlayPlayerPanels()
	{
		return null;
	}

	[Token(Token = "0x600259D")]
	[Address(RVA = "0x6B50CF0", Offset = "0x6B4FCF0", VA = "0x6B50CF0")]
	public static List<BaseRuntimePanel> GetSortedPlayerPanels()
	{
		return null;
	}

	[Token(Token = "0x600259E")]
	[Address(RVA = "0x6B4FBB0", Offset = "0x6B4EBB0", VA = "0x6B4FBB0")]
	private static void SortPanels()
	{
	}

	[Token(Token = "0x600259F")]
	[Address(RVA = "0x6B51F50", Offset = "0x6B50F50", VA = "0x6B51F50")]
	internal static Vector2 MultiDisplayBottomLeftToPanelPosition(Vector2 position, out int? targetDisplay)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60025A0")]
	[Address(RVA = "0x6B52170", Offset = "0x6B51170", VA = "0x6B52170")]
	internal static Vector2 MultiDisplayToLocalScreenPosition(Vector2 position, out int? targetDisplay)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60025A1")]
	[Address(RVA = "0x6B522A0", Offset = "0x6B512A0", VA = "0x6B522A0")]
	internal static Vector2 ScreenBottomLeftToPanelPosition(Vector2 position, int targetDisplay)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60025A2")]
	[Address(RVA = "0x6B523E0", Offset = "0x6B513E0", VA = "0x6B523E0")]
	internal static Vector2 ScreenBottomLeftToPanelDelta(Vector2 delta)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60025A3")]
	[Address(RVA = "0x6B52470", Offset = "0x6B51470", VA = "0x6B52470")]
	internal static Vector2 PanelToScreenBottomLeftPosition(Vector2 panelPosition, int targetDisplay)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60025A4")]
	[Address(RVA = "0x6B523C0", Offset = "0x6B513C0", VA = "0x6B523C0")]
	internal static Vector2 FlipY(Vector2 p, float displayHeight)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60025A5")]
	[Address(RVA = "0x6B52450", Offset = "0x6B51450", VA = "0x6B52450")]
	private static Vector2 FlipDeltaY(Vector2 delta)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60025A6")]
	[Address(RVA = "0x6B52310", Offset = "0x6B51310", VA = "0x6B52310")]
	private static float GetRuntimeDisplayHeight(int targetDisplay)
	{
		return default(float);
	}
}
