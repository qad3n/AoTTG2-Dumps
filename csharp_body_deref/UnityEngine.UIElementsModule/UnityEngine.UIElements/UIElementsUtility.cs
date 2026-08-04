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

namespace UnityEngine.UIElements;

[Token(Token = "0x2000402")]
internal class UIElementsUtility : IUIElementsUtility
{
	[Token(Token = "0x4000C46")]
	[FieldOffset(Offset = "0x0")]
	private static Stack<IMGUIContainer> s_ContainerStack;

	[Token(Token = "0x4000C47")]
	[FieldOffset(Offset = "0x8")]
	private static Dictionary<int, Panel> s_UIElementsCache;

	[Token(Token = "0x4000C48")]
	[FieldOffset(Offset = "0x10")]
	private static Event s_EventInstance;

	[Token(Token = "0x4000C49")]
	[FieldOffset(Offset = "0x18")]
	internal static Color editorPlayModeTintColor;

	[Token(Token = "0x4000C4A")]
	[FieldOffset(Offset = "0x28")]
	internal static float singleLineHeight;

	[Token(Token = "0x4000C4B")]
	[FieldOffset(Offset = "0x30")]
	private static UIElementsUtility s_Instance;

	[Token(Token = "0x4000C4C")]
	[FieldOffset(Offset = "0x38")]
	internal static List<Panel> s_PanelsIterationList;

	[Token(Token = "0x4000C4D")]
	[FieldOffset(Offset = "0x40")]
	internal static readonly string s_RepaintProfilerMarkerName;

	[Token(Token = "0x4000C4E")]
	[FieldOffset(Offset = "0x48")]
	internal static readonly string s_EventProfilerMarkerName;

	[Token(Token = "0x4000C4F")]
	[FieldOffset(Offset = "0x50")]
	private static readonly ProfilerMarker s_RepaintProfilerMarker;

	[Token(Token = "0x4000C50")]
	[FieldOffset(Offset = "0x58")]
	private static readonly ProfilerMarker s_EventProfilerMarker;

	[Token(Token = "0x6001A13")]
	[Address(RVA = "0x4F65A50", Offset = "0x4F65A50", VA = "0x4F65A50")]
	private UIElementsUtility()
	{
	}

	[Token(Token = "0x6001A14")]
	[Address(RVA = "0x4F65B30", Offset = "0x4F65B30", VA = "0x4F65B30", Slot = "9")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002EMakeCurrentIMGUIContainerDirty()
	{
		return default(bool);
	}

	[Token(Token = "0x6001A15")]
	[Address(RVA = "0x4F65C20", Offset = "0x4F65C20", VA = "0x4F65C20", Slot = "4")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002ETakeCapture()
	{
		return default(bool);
	}

	[Token(Token = "0x6001A16")]
	[Address(RVA = "0x4F65D10", Offset = "0x4F65D10", VA = "0x4F65D10", Slot = "5")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002EReleaseCapture()
	{
		return default(bool);
	}

	[Token(Token = "0x6001A17")]
	[Address(RVA = "0x4F65D20", Offset = "0x4F65D20", VA = "0x4F65D20", Slot = "6")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002EProcessEvent(int instanceID, IntPtr nativeEventPtr, ref bool eventHandled)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A18")]
	[Address(RVA = "0x4F664C0", Offset = "0x4F664C0", VA = "0x4F664C0", Slot = "7")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002ECleanupRoots()
	{
		return default(bool);
	}

	[Token(Token = "0x6001A19")]
	[Address(RVA = "0x4F66560", Offset = "0x4F66560", VA = "0x4F66560", Slot = "8")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002EEndContainerGUIFromException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A1A")]
	[Address(RVA = "0x4F62030", Offset = "0x4F62030", VA = "0x4F62030")]
	public static void RegisterCachedPanel(int instanceID, Panel panel)
	{
	}

	[Token(Token = "0x6001A1B")]
	[Address(RVA = "0x4F62160", Offset = "0x4F62160", VA = "0x4F62160")]
	public static void RemoveCachedPanel(int instanceID)
	{
	}

	[Token(Token = "0x6001A1C")]
	[Address(RVA = "0x4F61A50", Offset = "0x4F61A50", VA = "0x4F61A50")]
	public static bool TryGetPanel(int instanceID, out Panel panel)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A1D")]
	[Address(RVA = "0x4F66640", Offset = "0x4F66640", VA = "0x4F66640")]
	internal static void BeginContainerGUI(GUILayoutUtility.LayoutCache cache, Event evt, IMGUIContainer container)
	{
	}

	[Token(Token = "0x6001A1E")]
	[Address(RVA = "0x4F66850", Offset = "0x4F66850", VA = "0x4F66850")]
	internal static void EndContainerGUI(Event evt, Rect layoutSize)
	{
	}

	[Token(Token = "0x6001A1F")]
	[Address(RVA = "0x4F66A60", Offset = "0x4F66A60", VA = "0x4F66A60")]
	internal static EventBase CreateEvent(Event systemEvent)
	{
		return null;
	}

	[Token(Token = "0x6001A20")]
	[Address(RVA = "0x4F61590", Offset = "0x4F61590", VA = "0x4F61590")]
	internal static EventBase CreateEvent(Event systemEvent, EventType eventType)
	{
		return null;
	}

	[Token(Token = "0x6001A21")]
	[Address(RVA = "0x4F65E20", Offset = "0x4F65E20", VA = "0x4F65E20")]
	private static bool DoDispatch(BaseVisualElementPanel panel)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A22")]
	[Address(RVA = "0x4F62200", Offset = "0x4F62200", VA = "0x4F62200")]
	internal static void GetAllPanels(List<Panel> panels, ContextType contextType)
	{
	}

	[Token(Token = "0x6001A23")]
	[Address(RVA = "0x4F66AC0", Offset = "0x4F66AC0", VA = "0x4F66AC0")]
	internal static Dictionary<int, Panel>.Enumerator GetPanelsIterator()
	{
		return default(Dictionary<int, Panel>.Enumerator);
	}

	[Token(Token = "0x6001A24")]
	[Address(RVA = "0x4F66B70", Offset = "0x4F66B70", VA = "0x4F66B70")]
	internal static float PixelsPerUnitScaleForElement(VisualElement ve, Sprite sprite)
	{
		return default(float);
	}
}
