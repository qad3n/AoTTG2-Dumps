// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIElementsRuntimeUtility
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x314D7E0", Offset = "0x314BDE0", VA = "0x18314D7E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600258B")]
		[Address(RVA = "0x314DBF0", Offset = "0x314C1F0", VA = "0x18314DBF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170009C9")]
	internal static bool useDefaultEventSystem
	{
		[Token(Token = "0x600258C")]
		[Address(RVA = "0x314D9A0", Offset = "0x314BFA0", VA = "0x18314D9A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009CA")]
	internal static bool? overrideUseDefaultEventSystem
	{
		[Token(Token = "0x600258D")]
		[Address(RVA = "0x314D950", Offset = "0x314BF50", VA = "0x18314D950")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600258E")]
		[Address(RVA = "0x314DC60", Offset = "0x314C260", VA = "0x18314DC60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170009CB")]
	internal static bool autoUpdateEventSystem
	{
		[Token(Token = "0x600258F")]
		[Address(RVA = "0x314D830", Offset = "0x314BE30", VA = "0x18314D830")]
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
		[Address(RVA = "0x314D880", Offset = "0x314BE80", VA = "0x18314D880")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1400002D")]
	public static event Action<BaseRuntimePanel> onCreatePanel
	{
		[Token(Token = "0x600257A")]
		[Address(RVA = "0x314D6D0", Offset = "0x314BCD0", VA = "0x18314D6D0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600257B")]
		[Address(RVA = "0x314DAE0", Offset = "0x314C0E0", VA = "0x18314DAE0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600257C")]
	[Address(RVA = "0x314D2E0", Offset = "0x314B8E0", VA = "0x18314D2E0")]
	static UIElementsRuntimeUtility()
	{
	}

	[Token(Token = "0x600257D")]
	[Address(RVA = "0x314A450", Offset = "0x3148A50", VA = "0x18314A450")]
	public static EventBase CreateEvent(Event systemEvent)
	{
		return null;
	}

	[Token(Token = "0x600257E")]
	[Address(RVA = "0x314A820", Offset = "0x3148E20", VA = "0x18314A820")]
	public static BaseRuntimePanel FindOrCreateRuntimePanel(ScriptableObject ownerObject, CreateRuntimePanelDelegate createDelegate)
	{
		return null;
	}

	[Token(Token = "0x600257F")]
	[Address(RVA = "0x314A550", Offset = "0x3148B50", VA = "0x18314A550")]
	public static void DisposeRuntimePanel(ScriptableObject ownerObject)
	{
	}

	[Token(Token = "0x6002580")]
	[Address(RVA = "0x314AA60", Offset = "0x3149060", VA = "0x18314AA60")]
	private static void GetPlayerPanelsByRenderMode(List<BaseRuntimePanel> outScreenSpaceOverlayPanels, List<BaseRuntimePanel> outWorldSpacePanels)
	{
	}

	[Token(Token = "0x6002581")]
	[Address(RVA = "0x314B4E0", Offset = "0x3149AE0", VA = "0x18314B4E0")]
	private static void RegisterCachedPanelInternal(int instanceID, IPanel panel)
	{
	}

	[Token(Token = "0x6002582")]
	[Address(RVA = "0x314B950", Offset = "0x3149F50", VA = "0x18314B950")]
	private static void RemoveCachedPanelInternal(int instanceID)
	{
	}

	[Token(Token = "0x6002583")]
	[Address(RVA = "0x314BDE0", Offset = "0x314A3E0", VA = "0x18314BDE0")]
	public static void RenderOffscreenPanels()
	{
	}

	[Token(Token = "0x6002584")]
	[Address(RVA = "0x314C310", Offset = "0x314A910", VA = "0x18314C310")]
	public static void RepaintPanel(BaseRuntimePanel panel)
	{
	}

	[Token(Token = "0x6002585")]
	[Address(RVA = "0x314C230", Offset = "0x314A830", VA = "0x18314C230")]
	public static void RenderPanel(BaseRuntimePanel panel, bool restoreState = true)
	{
	}

	[Token(Token = "0x6002586")]
	[Address(RVA = "0x314A3F0", Offset = "0x31489F0", VA = "0x18314A3F0")]
	internal static void BeginRenderOverlays(int displayIndex)
	{
	}

	[Token(Token = "0x6002587")]
	[Address(RVA = "0x314BFD0", Offset = "0x314A5D0", VA = "0x18314BFD0")]
	internal static void RenderOverlaysBeforePriority(int displayIndex, float maxPriority)
	{
	}

	[Token(Token = "0x6002588")]
	[Address(RVA = "0x314A7B0", Offset = "0x3148DB0", VA = "0x18314A7B0")]
	internal static void EndRenderOverlays(int displayIndex)
	{
	}

	[Token(Token = "0x6002589")]
	[Address(RVA = "0x314C390", Offset = "0x314A990", VA = "0x18314C390")]
	public static void RepaintPanels(bool onlyOffscreen)
	{
	}

	[Token(Token = "0x6002590")]
	[Address(RVA = "0x314B700", Offset = "0x3149D00", VA = "0x18314B700")]
	public static void RegisterEventSystem(Object eventSystem)
	{
	}

	[Token(Token = "0x6002591")]
	[Address(RVA = "0x314CD00", Offset = "0x314B300", VA = "0x18314CD00")]
	public static void UnregisterEventSystem(Object eventSystem)
	{
	}

	[Token(Token = "0x6002593")]
	[Address(RVA = "0x314D0C0", Offset = "0x314B6C0", VA = "0x18314D0C0")]
	public static void UpdatePanels()
	{
	}

	[Token(Token = "0x6002594")]
	[Address(RVA = "0x314CE40", Offset = "0x314B440", VA = "0x18314CE40")]
	internal static void UpdateEventSystem()
	{
	}

	[Token(Token = "0x6002595")]
	[Address(RVA = "0x314AFC0", Offset = "0x31495C0", VA = "0x18314AFC0")]
	internal static void MarkPotentiallyEmpty(PanelSettings settings)
	{
	}

	[Token(Token = "0x6002596")]
	[Address(RVA = "0x314BBF0", Offset = "0x314A1F0", VA = "0x18314BBF0")]
	internal static void RemoveUnusedPanels()
	{
	}

	[Token(Token = "0x6002597")]
	[Address(RVA = "0x314A700", Offset = "0x3148D00", VA = "0x18314A700")]
	public static void EnableRenderingAndInputCallbacks()
	{
	}

	[Token(Token = "0x6002598")]
	[Address(RVA = "0x314A4C0", Offset = "0x3148AC0", VA = "0x18314A4C0")]
	public static void DisableRenderingAndInputCallbacks()
	{
	}

	[Token(Token = "0x6002599")]
	[Address(RVA = "0x314C620", Offset = "0x314AC20", VA = "0x18314C620")]
	internal static void SetPanelOrderingDirty()
	{
	}

	[Token(Token = "0x600259A")]
	[Address(RVA = "0x314C670", Offset = "0x314AC70", VA = "0x18314C670")]
	internal static void SetPanelsDrawInCameraDirty()
	{
	}

	[Token(Token = "0x600259B")]
	[Address(RVA = "0x314AF20", Offset = "0x3149520", VA = "0x18314AF20")]
	internal static List<BaseRuntimePanel> GetWorldSpacePlayerPanels()
	{
		return null;
	}

	[Token(Token = "0x600259C")]
	[Address(RVA = "0x314AE80", Offset = "0x3149480", VA = "0x18314AE80")]
	public static List<BaseRuntimePanel> GetSortedScreenOverlayPlayerPanels()
	{
		return null;
	}

	[Token(Token = "0x600259D")]
	[Address(RVA = "0x314ADE0", Offset = "0x31493E0", VA = "0x18314ADE0")]
	public static List<BaseRuntimePanel> GetSortedPlayerPanels()
	{
		return null;
	}

	[Token(Token = "0x600259E")]
	[Address(RVA = "0x314C6C0", Offset = "0x314ACC0", VA = "0x18314C6C0")]
	private static void SortPanels()
	{
	}

	[Token(Token = "0x600259F")]
	[Address(RVA = "0x314B0F0", Offset = "0x31496F0", VA = "0x18314B0F0")]
	internal static Vector2 MultiDisplayBottomLeftToPanelPosition(Vector2 position, out int? targetDisplay)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60025A0")]
	[Address(RVA = "0x314B2F0", Offset = "0x31498F0", VA = "0x18314B2F0")]
	internal static Vector2 MultiDisplayToLocalScreenPosition(Vector2 position, out int? targetDisplay)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60025A1")]
	[Address(RVA = "0x314C5B0", Offset = "0x314ABB0", VA = "0x18314C5B0")]
	internal static Vector2 ScreenBottomLeftToPanelPosition(Vector2 position, int targetDisplay)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60025A2")]
	[Address(RVA = "0x314C540", Offset = "0x314AB40", VA = "0x18314C540")]
	internal static Vector2 ScreenBottomLeftToPanelDelta(Vector2 delta)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60025A3")]
	[Address(RVA = "0x314B470", Offset = "0x3149A70", VA = "0x18314B470")]
	internal static Vector2 PanelToScreenBottomLeftPosition(Vector2 panelPosition, int targetDisplay)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60025A4")]
	[Address(RVA = "0x314AA30", Offset = "0x3149030", VA = "0x18314AA30")]
	internal static Vector2 FlipY(Vector2 p, float displayHeight)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60025A5")]
	[Address(RVA = "0x2FC06D0", Offset = "0x2FBECD0", VA = "0x182FC06D0")]
	private static Vector2 FlipDeltaY(Vector2 delta)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60025A6")]
	[Address(RVA = "0x314AD20", Offset = "0x3149320", VA = "0x18314AD20")]
	private static float GetRuntimeDisplayHeight(int targetDisplay)
	{
		return default(float);
	}
}
