// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.UIElementsUtility
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x31500A0", Offset = "0x314E6A0", VA = "0x1831500A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170009CE")]
	internal static bool isCommandActionKeyPlatform
	{
		[Token(Token = "0x60025C4")]
		[Address(RVA = "0x3150080", Offset = "0x314E680", VA = "0x183150080")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60025C5")]
	[Address(RVA = "0x314FFC0", Offset = "0x314E5C0", VA = "0x18314FFC0")]
	private UIElementsUtility()
	{
	}

	[Token(Token = "0x60025C6")]
	[Address(RVA = "0x314F640", Offset = "0x314DC40", VA = "0x18314F640", Slot = "9")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002EMakeCurrentIMGUIContainerDirty()
	{
		return default(bool);
	}

	[Token(Token = "0x60025C7")]
	[Address(RVA = "0x314F940", Offset = "0x314DF40", VA = "0x18314F940", Slot = "4")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002ETakeCapture()
	{
		return default(bool);
	}

	[Token(Token = "0x60025C8")]
	[Address(RVA = "0x795DE0", Offset = "0x7943E0", VA = "0x180795DE0", Slot = "5")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002EReleaseCapture()
	{
		return default(bool);
	}

	[Token(Token = "0x60025C9")]
	[Address(RVA = "0x314F700", Offset = "0x314DD00", VA = "0x18314F700", Slot = "6")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002EProcessEvent(int instanceID, IntPtr nativeEventPtr, ref bool eventHandled)
	{
		return default(bool);
	}

	[Token(Token = "0x60025CA")]
	[Address(RVA = "0x314F490", Offset = "0x314DA90", VA = "0x18314F490", Slot = "7")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002ECleanupRoots()
	{
		return default(bool);
	}

	[Token(Token = "0x60025CB")]
	[Address(RVA = "0x314F560", Offset = "0x314DB60", VA = "0x18314F560", Slot = "8")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002EEndContainerGUIFromException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x60025CC")]
	[Address(RVA = "0x314F2F0", Offset = "0x314D8F0", VA = "0x18314F2F0")]
	public static void RegisterCachedPanel(int instanceID, Panel panel)
	{
	}

	[Token(Token = "0x60025CD")]
	[Address(RVA = "0x314F380", Offset = "0x314D980", VA = "0x18314F380")]
	public static void RemoveCachedPanel(int instanceID)
	{
	}

	[Token(Token = "0x60025CE")]
	[Address(RVA = "0x314F400", Offset = "0x314DA00", VA = "0x18314F400")]
	public static bool TryGetPanel(int instanceID, out Panel panel)
	{
		return default(bool);
	}

	[Token(Token = "0x60025CF")]
	[Address(RVA = "0x314DCC0", Offset = "0x314C2C0", VA = "0x18314DCC0")]
	internal static void BeginContainerGUI(GUILayoutUtility.LayoutCache cache, Event evt, IMGUIContainer container)
	{
	}

	[Token(Token = "0x60025D0")]
	[Address(RVA = "0x314E8F0", Offset = "0x314CEF0", VA = "0x18314E8F0")]
	internal static void EndContainerGUI(Event evt, Rect layoutSize)
	{
	}

	[Token(Token = "0x60025D1")]
	[Address(RVA = "0x314DF20", Offset = "0x314C520", VA = "0x18314DF20")]
	internal static EventBase CreateEvent(Event systemEvent)
	{
		return null;
	}

	[Token(Token = "0x60025D2")]
	[Address(RVA = "0x314DF90", Offset = "0x314C590", VA = "0x18314DF90")]
	internal static EventBase CreateEvent(Event systemEvent, EventType eventType)
	{
		return null;
	}

	[Token(Token = "0x60025D3")]
	[Address(RVA = "0x314E340", Offset = "0x314C940", VA = "0x18314E340")]
	private static bool DoDispatch(BaseVisualElementPanel panel)
	{
		return default(bool);
	}

	[Token(Token = "0x60025D4")]
	[Address(RVA = "0x314EB50", Offset = "0x314D150", VA = "0x18314EB50")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIToolkitAuthoringModule" })]
	internal static void GetAllPanels(List<Panel> panels, ContextType contextType)
	{
	}

	[Token(Token = "0x60025D5")]
	[Address(RVA = "0x314ECE0", Offset = "0x314D2E0", VA = "0x18314ECE0")]
	internal static Dictionary<int, Panel>.Enumerator GetPanelsIterator()
	{
		return default(Dictionary<int, Panel>.Enumerator);
	}

	[Token(Token = "0x60025D6")]
	[Address(RVA = "0x314EF80", Offset = "0x314D580", VA = "0x18314EF80")]
	internal static float PixelsPerUnitScaleForElement(VisualElement ve, Sprite sprite)
	{
		return default(float);
	}

	[Token(Token = "0x60025D7")]
	[Address(RVA = "0x314EE40", Offset = "0x314D440", VA = "0x18314EE40")]
	internal static string ParseMenuName(string menuName)
	{
		return null;
	}

	[Token(Token = "0x60025D8")]
	[Address(RVA = "0x314ED90", Offset = "0x314D390", VA = "0x18314ED90")]
	internal static void MarkStyleSheetAsChanged(StyleSheet styleSheet)
	{
	}

	[Token(Token = "0x60025D9")]
	[Address(RVA = "0x314F050", Offset = "0x314D650", VA = "0x18314F050")]
	internal static void RebuildDirtyStyleSheets()
	{
	}
}
