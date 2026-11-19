// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIElementsUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using Unity.Profiling;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x20004C9")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule", "UnityEditor.UIToolkitAuthoringModule" })]
internal class UIElementsUtility : IUIElementsUtility
{
	[Token(Token = "0x4001089")]
	[FieldOffset(Offset = "0x0")]
	private static Stack<IMGUIContainer> s_ContainerStack;

	[Token(Token = "0x400108A")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<int, Panel> s_UIElementsCache;

	[Token(Token = "0x400108B")]
	[FieldOffset(Offset = "0x10")]
	private static Event s_EventInstance;

	[Token(Token = "0x400108C")]
	[FieldOffset(Offset = "0x18")]
	internal static Color editorPlayModeTintColor;

	[Token(Token = "0x400108D")]
	[FieldOffset(Offset = "0x28")]
	internal static float singleLineHeight;

	[Token(Token = "0x400108E")]
	[FieldOffset(Offset = "0x2C")]
	internal static bool s_EnableOSXContextualMenuEventsOnNonOSXPlatforms;

	[Token(Token = "0x400108F")]
	[FieldOffset(Offset = "0x30")]
	private static UIElementsUtility s_Instance;

	[Token(Token = "0x4001090")]
	[FieldOffset(Offset = "0x38")]
	internal static List<Panel> s_PanelsIterationList;

	[Token(Token = "0x4001091")]
	[FieldOffset(Offset = "0x40")]
	private static Action testFrameUpdateCallback;

	[Token(Token = "0x4001092")]
	[FieldOffset(Offset = "0x48")]
	internal static readonly string s_RepaintProfilerMarkerName;

	[Token(Token = "0x4001093")]
	[FieldOffset(Offset = "0x50")]
	internal static readonly string s_EventProfilerMarkerName;

	[Token(Token = "0x4001094")]
	[FieldOffset(Offset = "0x58")]
	private static readonly ProfilerMarker s_RepaintProfilerMarker;

	[Token(Token = "0x4001095")]
	[FieldOffset(Offset = "0x60")]
	private static readonly ProfilerMarker s_EventProfilerMarker;

	[Token(Token = "0x4001096")]
	[FieldOffset(Offset = "0x68")]
	internal static char[] s_Modifiers;

	[Token(Token = "0x4001097")]
	[FieldOffset(Offset = "0x70")]
	internal static readonly HashSet<StyleSheet> s_StyleSheetsRequiringRebuilding;

	[Token(Token = "0x4001098")]
	[FieldOffset(Offset = "0x78")]
	internal static readonly HashSet<string> s_ReimportedStyleSheetsPath;

	[Token(Token = "0x4001099")]
	[FieldOffset(Offset = "0x80")]
	internal static readonly List<StyleSheet> s_StyleSheetsRebuildList;

	[Token(Token = "0x400109A")]
	[FieldOffset(Offset = "0x88")]
	internal static readonly List<string> s_ReimportedStyleSheetsPathList;

	[Token(Token = "0x170009CD")]
	public static bool isOSXContextualMenuPlatform
	{
		[Token(Token = "0x60025C3")]
		[Address(RVA = "0x6B53D80", Offset = "0x6B52D80", VA = "0x6B53D80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009CE")]
	internal static bool isCommandActionKeyPlatform
	{
		[Token(Token = "0x60025C4")]
		[Address(RVA = "0x6B53E00", Offset = "0x6B52E00", VA = "0x6B53E00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60025C5")]
	[Address(RVA = "0x6B53E10", Offset = "0x6B52E10", VA = "0x6B53E10")]
	private UIElementsUtility()
	{
	}

	[Token(Token = "0x60025C6")]
	[Address(RVA = "0x6B53EF0", Offset = "0x6B52EF0", VA = "0x6B53EF0", Slot = "9")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002EMakeCurrentIMGUIContainerDirty()
	{
		return default(bool);
	}

	[Token(Token = "0x60025C7")]
	[Address(RVA = "0x6B53FE0", Offset = "0x6B52FE0", VA = "0x6B53FE0", Slot = "4")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002ETakeCapture()
	{
		return default(bool);
	}

	[Token(Token = "0x60025C8")]
	[Address(RVA = "0x6B540C0", Offset = "0x6B530C0", VA = "0x6B540C0", Slot = "5")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002EReleaseCapture()
	{
		return default(bool);
	}

	[Token(Token = "0x60025C9")]
	[Address(RVA = "0x6B540D0", Offset = "0x6B530D0", VA = "0x6B540D0", Slot = "6")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002EProcessEvent(int instanceID, IntPtr nativeEventPtr, ref bool eventHandled)
	{
		return default(bool);
	}

	[Token(Token = "0x60025CA")]
	[Address(RVA = "0x6B54950", Offset = "0x6B53950", VA = "0x6B54950", Slot = "7")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002ECleanupRoots()
	{
		return default(bool);
	}

	[Token(Token = "0x60025CB")]
	[Address(RVA = "0x6B549F0", Offset = "0x6B539F0", VA = "0x6B549F0", Slot = "8")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002EEndContainerGUIFromException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x60025CC")]
	[Address(RVA = "0x6B4F9C0", Offset = "0x6B4E9C0", VA = "0x6B4F9C0")]
	public static void RegisterCachedPanel(int instanceID, Panel panel)
	{
	}

	[Token(Token = "0x60025CD")]
	[Address(RVA = "0x6B4FB10", Offset = "0x6B4EB10", VA = "0x6B4FB10")]
	public static void RemoveCachedPanel(int instanceID)
	{
	}

	[Token(Token = "0x60025CE")]
	[Address(RVA = "0x6B4ECF0", Offset = "0x6B4DCF0", VA = "0x6B4ECF0")]
	public static bool TryGetPanel(int instanceID, out Panel panel)
	{
		return default(bool);
	}

	[Token(Token = "0x60025CF")]
	[Address(RVA = "0x6B54AF0", Offset = "0x6B53AF0", VA = "0x6B54AF0")]
	internal static void BeginContainerGUI(GUILayoutUtility.LayoutCache cache, Event evt, IMGUIContainer container)
	{
	}

	[Token(Token = "0x60025D0")]
	[Address(RVA = "0x6B54D50", Offset = "0x6B53D50", VA = "0x6B54D50")]
	internal static void EndContainerGUI(Event evt, Rect layoutSize)
	{
	}

	[Token(Token = "0x60025D1")]
	[Address(RVA = "0x6B54FC0", Offset = "0x6B53FC0", VA = "0x6B54FC0")]
	internal static EventBase CreateEvent(Event systemEvent)
	{
		return null;
	}

	[Token(Token = "0x60025D2")]
	[Address(RVA = "0x6B4E830", Offset = "0x6B4D830", VA = "0x6B4E830")]
	internal static EventBase CreateEvent(Event systemEvent, EventType eventType)
	{
		return null;
	}

	[Token(Token = "0x60025D3")]
	[Address(RVA = "0x6B542F0", Offset = "0x6B532F0", VA = "0x6B542F0")]
	private static bool DoDispatch(BaseVisualElementPanel panel)
	{
		return default(bool);
	}

	[Token(Token = "0x60025D4")]
	[Address(RVA = "0x6B4F790", Offset = "0x6B4E790", VA = "0x6B4F790")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIToolkitAuthoringModule" })]
	internal static void GetAllPanels(List<Panel> panels, ContextType contextType)
	{
	}

	[Token(Token = "0x60025D5")]
	[Address(RVA = "0x6B55020", Offset = "0x6B54020", VA = "0x6B55020")]
	internal static Dictionary<int, Panel>.Enumerator GetPanelsIterator()
	{
		return default(Dictionary<int, Panel>.Enumerator);
	}

	[Token(Token = "0x60025D6")]
	[Address(RVA = "0x6B550D0", Offset = "0x6B540D0", VA = "0x6B550D0")]
	internal static float PixelsPerUnitScaleForElement(VisualElement ve, Sprite sprite)
	{
		return default(float);
	}

	[Token(Token = "0x60025D7")]
	[Address(RVA = "0x6B55190", Offset = "0x6B54190", VA = "0x6B55190")]
	internal static string ParseMenuName(string menuName)
	{
		return null;
	}

	[Token(Token = "0x60025D8")]
	[Address(RVA = "0x6B552C0", Offset = "0x6B542C0", VA = "0x6B552C0")]
	internal static void MarkStyleSheetAsChanged(StyleSheet styleSheet)
	{
	}

	[Token(Token = "0x60025D9")]
	[Address(RVA = "0x6B55380", Offset = "0x6B54380", VA = "0x6B55380")]
	internal static void RebuildDirtyStyleSheets()
	{
	}
}
