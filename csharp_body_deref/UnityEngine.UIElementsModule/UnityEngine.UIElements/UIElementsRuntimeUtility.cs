using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Profiling;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003FC")]
internal static class UIElementsRuntimeUtility
{
	[Token(Token = "0x20003FD")]
	public delegate BaseRuntimePanel CreateRuntimePanelDelegate(ScriptableObject ownerObject);

	[Token(Token = "0x4000C38")]
	[FieldOffset(Offset = "0x8")]
	private static bool s_RegisteredPlayerloopCallback;

	[Token(Token = "0x4000C39")]
	[FieldOffset(Offset = "0x10")]
	private static List<Panel> s_SortedRuntimePanels;

	[Token(Token = "0x4000C3A")]
	[FieldOffset(Offset = "0x18")]
	private static bool s_PanelOrderingDirty;

	[Token(Token = "0x4000C3B")]
	[FieldOffset(Offset = "0x1C")]
	internal static int s_ResolvedSortingIndexMax;

	[Token(Token = "0x4000C3C")]
	[FieldOffset(Offset = "0x20")]
	internal static readonly string s_RepaintProfilerMarkerName;

	[Token(Token = "0x4000C3D")]
	[FieldOffset(Offset = "0x28")]
	private static readonly ProfilerMarker s_RepaintProfilerMarker;

	[Token(Token = "0x4000C3E")]
	[FieldOffset(Offset = "0x30")]
	private static int currentOverlayIndex;

	[Token(Token = "0x4000C40")]
	[FieldOffset(Offset = "0x40")]
	private static DefaultEventSystem s_DefaultEventSystem;

	[Token(Token = "0x4000C41")]
	[FieldOffset(Offset = "0x48")]
	private static List<PanelSettings> s_PotentiallyEmptyPanelSettings;

	[Token(Token = "0x170006FE")]
	internal static Object activeEventSystem
	{
		[Token(Token = "0x60019E4")]
		[Address(RVA = "0x4C3B310", Offset = "0x4C3B310", VA = "0x4C3B310")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60019E5")]
		[Address(RVA = "0x4C3B380", Offset = "0x4C3B380", VA = "0x4C3B380")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170006FF")]
	internal static bool useDefaultEventSystem
	{
		[Token(Token = "0x60019E6")]
		[Address(RVA = "0x4C3B3E0", Offset = "0x4C3B3E0", VA = "0x4C3B3E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000700")]
	internal static DefaultEventSystem defaultEventSystem
	{
		[Token(Token = "0x60019E9")]
		[Address(RVA = "0x4C3B920", Offset = "0x4C3B920", VA = "0x4C3B920")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000022")]
	public static event Action<BaseRuntimePanel> onCreatePanel
	{
		[Token(Token = "0x60019D7")]
		[Address(RVA = "0x4C39660", Offset = "0x4C39660", VA = "0x4C39660")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60019D8")]
		[Address(RVA = "0x4C39750", Offset = "0x4C39750", VA = "0x4C39750")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60019D9")]
	[Address(RVA = "0x4C39840", Offset = "0x4C39840", VA = "0x4C39840")]
	static UIElementsRuntimeUtility()
	{
	}

	[Token(Token = "0x60019DA")]
	[Address(RVA = "0x4C39C00", Offset = "0x4C39C00", VA = "0x4C39C00")]
	public static EventBase CreateEvent(Event systemEvent)
	{
		return null;
	}

	[Token(Token = "0x60019DB")]
	[Address(RVA = "0x4C39F10", Offset = "0x4C39F10", VA = "0x4C39F10")]
	public static BaseRuntimePanel FindOrCreateRuntimePanel(ScriptableObject ownerObject, CreateRuntimePanelDelegate createDelegate)
	{
		return null;
	}

	[Token(Token = "0x60019DC")]
	[Address(RVA = "0x4C3A5B0", Offset = "0x4C3A5B0", VA = "0x4C3A5B0")]
	public static void DisposeRuntimePanel(ScriptableObject ownerObject)
	{
	}

	[Token(Token = "0x60019DD")]
	[Address(RVA = "0x4C3A3F0", Offset = "0x4C3A3F0", VA = "0x4C3A3F0")]
	private static void RegisterCachedPanelInternal(int instanceID, IPanel panel)
	{
	}

	[Token(Token = "0x60019DE")]
	[Address(RVA = "0x4C3A1C0", Offset = "0x4C3A1C0", VA = "0x4C3A1C0")]
	private static void RemoveCachedPanelInternal(int instanceID)
	{
	}

	[Token(Token = "0x60019DF")]
	[Address(RVA = "0x4C3ABB0", Offset = "0x4C3ABB0", VA = "0x4C3ABB0")]
	public static void RepaintOffscreenPanels()
	{
	}

	[Token(Token = "0x60019E0")]
	[Address(RVA = "0x4C3AEC0", Offset = "0x4C3AEC0", VA = "0x4C3AEC0")]
	public static void RepaintOverlayPanel(BaseRuntimePanel panel)
	{
	}

	[Token(Token = "0x60019E1")]
	[Address(RVA = "0x4C3AFF0", Offset = "0x4C3AFF0", VA = "0x4C3AFF0")]
	internal static void BeginRenderOverlays(int displayIndex)
	{
	}

	[Token(Token = "0x60019E2")]
	[Address(RVA = "0x4C3B060", Offset = "0x4C3B060", VA = "0x4C3B060")]
	internal static void RenderOverlaysBeforePriority(int displayIndex, float maxPriority)
	{
	}

	[Token(Token = "0x60019E3")]
	[Address(RVA = "0x4C3B2A0", Offset = "0x4C3B2A0", VA = "0x4C3B2A0")]
	internal static void EndRenderOverlays(int displayIndex)
	{
	}

	[Token(Token = "0x60019E7")]
	[Address(RVA = "0x4C3B4C0", Offset = "0x4C3B4C0", VA = "0x4C3B4C0")]
	public static void RegisterEventSystem(Object eventSystem)
	{
	}

	[Token(Token = "0x60019E8")]
	[Address(RVA = "0x4C3B790", Offset = "0x4C3B790", VA = "0x4C3B790")]
	public static void UnregisterEventSystem(Object eventSystem)
	{
	}

	[Token(Token = "0x60019EA")]
	[Address(RVA = "0x4C3BA00", Offset = "0x4C3BA00", VA = "0x4C3BA00")]
	public static void UpdateRuntimePanels()
	{
	}

	[Token(Token = "0x60019EB")]
	[Address(RVA = "0x4C3BEB0", Offset = "0x4C3BEB0", VA = "0x4C3BEB0")]
	internal static void MarkPotentiallyEmpty(PanelSettings settings)
	{
	}

	[Token(Token = "0x60019EC")]
	[Address(RVA = "0x4C3BC90", Offset = "0x4C3BC90", VA = "0x4C3BC90")]
	internal static void RemoveUnusedPanels()
	{
	}

	[Token(Token = "0x60019ED")]
	[Address(RVA = "0x4C3A7A0", Offset = "0x4C3A7A0", VA = "0x4C3A7A0")]
	public static void RegisterPlayerloopCallback()
	{
	}

	[Token(Token = "0x60019EE")]
	[Address(RVA = "0x4C3AB60", Offset = "0x4C3AB60", VA = "0x4C3AB60")]
	public static void UnregisterPlayerloopCallback()
	{
	}

	[Token(Token = "0x60019EF")]
	[Address(RVA = "0x4C3BFF0", Offset = "0x4C3BFF0", VA = "0x4C3BFF0")]
	internal static void SetPanelOrderingDirty()
	{
	}

	[Token(Token = "0x60019F0")]
	[Address(RVA = "0x4C3AE10", Offset = "0x4C3AE10", VA = "0x4C3AE10")]
	internal static List<Panel> GetSortedPlayerPanels()
	{
		return null;
	}

	[Token(Token = "0x60019F1")]
	[Address(RVA = "0x4C3C060", Offset = "0x4C3C060", VA = "0x4C3C060")]
	private static void SortPanels()
	{
	}

	[Token(Token = "0x60019F2")]
	[Address(RVA = "0x4C3C370", Offset = "0x4C3C370", VA = "0x4C3C370")]
	internal static Vector2 MultiDisplayBottomLeftToPanelPosition(Vector2 position, out int? targetDisplay)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60019F3")]
	[Address(RVA = "0x4C3C550", Offset = "0x4C3C550", VA = "0x4C3C550")]
	internal static Vector2 MultiDisplayToLocalScreenPosition(Vector2 position, out int? targetDisplay)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60019F4")]
	[Address(RVA = "0x4C3C690", Offset = "0x4C3C690", VA = "0x4C3C690")]
	internal static Vector2 ScreenBottomLeftToPanelPosition(Vector2 position, int targetDisplay)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60019F5")]
	[Address(RVA = "0x4C3C770", Offset = "0x4C3C770", VA = "0x4C3C770")]
	internal static Vector2 ScreenBottomLeftToPanelDelta(Vector2 delta)
	{
		return default(Vector2);
	}
}
