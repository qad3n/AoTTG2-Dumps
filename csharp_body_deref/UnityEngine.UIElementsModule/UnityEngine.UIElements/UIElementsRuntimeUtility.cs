// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIElementsRuntimeUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4F62C40", Offset = "0x4F62C40", VA = "0x4F62C40")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60019E5")]
		[Address(RVA = "0x4F62CB0", Offset = "0x4F62CB0", VA = "0x4F62CB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170006FF")]
	internal static bool useDefaultEventSystem
	{
		[Token(Token = "0x60019E6")]
		[Address(RVA = "0x4F62D10", Offset = "0x4F62D10", VA = "0x4F62D10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000700")]
	internal static DefaultEventSystem defaultEventSystem
	{
		[Token(Token = "0x60019E9")]
		[Address(RVA = "0x4F63250", Offset = "0x4F63250", VA = "0x4F63250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x14000022")]
	public static event Action<BaseRuntimePanel> onCreatePanel
	{
		[Token(Token = "0x60019D7")]
		[Address(RVA = "0x4F60F90", Offset = "0x4F60F90", VA = "0x4F60F90")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60019D8")]
		[Address(RVA = "0x4F61080", Offset = "0x4F61080", VA = "0x4F61080")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60019D9")]
	[Address(RVA = "0x4F61170", Offset = "0x4F61170", VA = "0x4F61170")]
	static UIElementsRuntimeUtility()
	{
	}

	[Token(Token = "0x60019DA")]
	[Address(RVA = "0x4F61530", Offset = "0x4F61530", VA = "0x4F61530")]
	public static EventBase CreateEvent(Event systemEvent)
	{
		return null;
	}

	[Token(Token = "0x60019DB")]
	[Address(RVA = "0x4F61840", Offset = "0x4F61840", VA = "0x4F61840")]
	public static BaseRuntimePanel FindOrCreateRuntimePanel(ScriptableObject ownerObject, CreateRuntimePanelDelegate createDelegate)
	{
		return null;
	}

	[Token(Token = "0x60019DC")]
	[Address(RVA = "0x4F61EE0", Offset = "0x4F61EE0", VA = "0x4F61EE0")]
	public static void DisposeRuntimePanel(ScriptableObject ownerObject)
	{
	}

	[Token(Token = "0x60019DD")]
	[Address(RVA = "0x4F61D20", Offset = "0x4F61D20", VA = "0x4F61D20")]
	private static void RegisterCachedPanelInternal(int instanceID, IPanel panel)
	{
	}

	[Token(Token = "0x60019DE")]
	[Address(RVA = "0x4F61AF0", Offset = "0x4F61AF0", VA = "0x4F61AF0")]
	private static void RemoveCachedPanelInternal(int instanceID)
	{
	}

	[Token(Token = "0x60019DF")]
	[Address(RVA = "0x4F624E0", Offset = "0x4F624E0", VA = "0x4F624E0")]
	public static void RepaintOffscreenPanels()
	{
	}

	[Token(Token = "0x60019E0")]
	[Address(RVA = "0x4F627F0", Offset = "0x4F627F0", VA = "0x4F627F0")]
	public static void RepaintOverlayPanel(BaseRuntimePanel panel)
	{
	}

	[Token(Token = "0x60019E1")]
	[Address(RVA = "0x4F62920", Offset = "0x4F62920", VA = "0x4F62920")]
	internal static void BeginRenderOverlays(int displayIndex)
	{
	}

	[Token(Token = "0x60019E2")]
	[Address(RVA = "0x4F62990", Offset = "0x4F62990", VA = "0x4F62990")]
	internal static void RenderOverlaysBeforePriority(int displayIndex, float maxPriority)
	{
	}

	[Token(Token = "0x60019E3")]
	[Address(RVA = "0x4F62BD0", Offset = "0x4F62BD0", VA = "0x4F62BD0")]
	internal static void EndRenderOverlays(int displayIndex)
	{
	}

	[Token(Token = "0x60019E7")]
	[Address(RVA = "0x4F62DF0", Offset = "0x4F62DF0", VA = "0x4F62DF0")]
	public static void RegisterEventSystem(Object eventSystem)
	{
	}

	[Token(Token = "0x60019E8")]
	[Address(RVA = "0x4F630C0", Offset = "0x4F630C0", VA = "0x4F630C0")]
	public static void UnregisterEventSystem(Object eventSystem)
	{
	}

	[Token(Token = "0x60019EA")]
	[Address(RVA = "0x4F63330", Offset = "0x4F63330", VA = "0x4F63330")]
	public static void UpdateRuntimePanels()
	{
	}

	[Token(Token = "0x60019EB")]
	[Address(RVA = "0x4F637E0", Offset = "0x4F637E0", VA = "0x4F637E0")]
	internal static void MarkPotentiallyEmpty(PanelSettings settings)
	{
	}

	[Token(Token = "0x60019EC")]
	[Address(RVA = "0x4F635C0", Offset = "0x4F635C0", VA = "0x4F635C0")]
	internal static void RemoveUnusedPanels()
	{
	}

	[Token(Token = "0x60019ED")]
	[Address(RVA = "0x4F620D0", Offset = "0x4F620D0", VA = "0x4F620D0")]
	public static void RegisterPlayerloopCallback()
	{
	}

	[Token(Token = "0x60019EE")]
	[Address(RVA = "0x4F62490", Offset = "0x4F62490", VA = "0x4F62490")]
	public static void UnregisterPlayerloopCallback()
	{
	}

	[Token(Token = "0x60019EF")]
	[Address(RVA = "0x4F63920", Offset = "0x4F63920", VA = "0x4F63920")]
	internal static void SetPanelOrderingDirty()
	{
	}

	[Token(Token = "0x60019F0")]
	[Address(RVA = "0x4F62740", Offset = "0x4F62740", VA = "0x4F62740")]
	internal static List<Panel> GetSortedPlayerPanels()
	{
		return null;
	}

	[Token(Token = "0x60019F1")]
	[Address(RVA = "0x4F63990", Offset = "0x4F63990", VA = "0x4F63990")]
	private static void SortPanels()
	{
	}

	[Token(Token = "0x60019F2")]
	[Address(RVA = "0x4F63CA0", Offset = "0x4F63CA0", VA = "0x4F63CA0")]
	internal static Vector2 MultiDisplayBottomLeftToPanelPosition(Vector2 position, out int? targetDisplay)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60019F3")]
	[Address(RVA = "0x4F63E80", Offset = "0x4F63E80", VA = "0x4F63E80")]
	internal static Vector2 MultiDisplayToLocalScreenPosition(Vector2 position, out int? targetDisplay)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60019F4")]
	[Address(RVA = "0x4F63FC0", Offset = "0x4F63FC0", VA = "0x4F63FC0")]
	internal static Vector2 ScreenBottomLeftToPanelPosition(Vector2 position, int targetDisplay)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60019F5")]
	[Address(RVA = "0x4F640A0", Offset = "0x4F640A0", VA = "0x4F640A0")]
	internal static Vector2 ScreenBottomLeftToPanelDelta(Vector2 delta)
	{
		return default(Vector2);
	}
}
