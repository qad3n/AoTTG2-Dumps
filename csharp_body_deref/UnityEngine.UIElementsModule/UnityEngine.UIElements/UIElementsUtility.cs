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
	[Address(RVA = "0x4C3E120", Offset = "0x4C3E120", VA = "0x4C3E120")]
	private UIElementsUtility()
	{
	}

	[Token(Token = "0x6001A14")]
	[Address(RVA = "0x4C3E200", Offset = "0x4C3E200", VA = "0x4C3E200", Slot = "9")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002EMakeCurrentIMGUIContainerDirty()
	{
		return default(bool);
	}

	[Token(Token = "0x6001A15")]
	[Address(RVA = "0x4C3E2F0", Offset = "0x4C3E2F0", VA = "0x4C3E2F0", Slot = "4")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002ETakeCapture()
	{
		return default(bool);
	}

	[Token(Token = "0x6001A16")]
	[Address(RVA = "0x4C3E3E0", Offset = "0x4C3E3E0", VA = "0x4C3E3E0", Slot = "5")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002EReleaseCapture()
	{
		return default(bool);
	}

	[Token(Token = "0x6001A17")]
	[Address(RVA = "0x4C3E3F0", Offset = "0x4C3E3F0", VA = "0x4C3E3F0", Slot = "6")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002EProcessEvent(int instanceID, IntPtr nativeEventPtr, ref bool eventHandled)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A18")]
	[Address(RVA = "0x4C3EB90", Offset = "0x4C3EB90", VA = "0x4C3EB90", Slot = "7")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002ECleanupRoots()
	{
		return default(bool);
	}

	[Token(Token = "0x6001A19")]
	[Address(RVA = "0x4C3EC30", Offset = "0x4C3EC30", VA = "0x4C3EC30", Slot = "8")]
	private bool UnityEngine_002EUIElements_002EIUIElementsUtility_002EEndContainerGUIFromException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A1A")]
	[Address(RVA = "0x4C3A700", Offset = "0x4C3A700", VA = "0x4C3A700")]
	public static void RegisterCachedPanel(int instanceID, Panel panel)
	{
	}

	[Token(Token = "0x6001A1B")]
	[Address(RVA = "0x4C3A830", Offset = "0x4C3A830", VA = "0x4C3A830")]
	public static void RemoveCachedPanel(int instanceID)
	{
	}

	[Token(Token = "0x6001A1C")]
	[Address(RVA = "0x4C3A120", Offset = "0x4C3A120", VA = "0x4C3A120")]
	public static bool TryGetPanel(int instanceID, out Panel panel)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A1D")]
	[Address(RVA = "0x4C3ED10", Offset = "0x4C3ED10", VA = "0x4C3ED10")]
	internal static void BeginContainerGUI(GUILayoutUtility.LayoutCache cache, Event evt, IMGUIContainer container)
	{
	}

	[Token(Token = "0x6001A1E")]
	[Address(RVA = "0x4C3EF20", Offset = "0x4C3EF20", VA = "0x4C3EF20")]
	internal static void EndContainerGUI(Event evt, Rect layoutSize)
	{
	}

	[Token(Token = "0x6001A1F")]
	[Address(RVA = "0x4C3F130", Offset = "0x4C3F130", VA = "0x4C3F130")]
	internal static EventBase CreateEvent(Event systemEvent)
	{
		return null;
	}

	[Token(Token = "0x6001A20")]
	[Address(RVA = "0x4C39C60", Offset = "0x4C39C60", VA = "0x4C39C60")]
	internal static EventBase CreateEvent(Event systemEvent, EventType eventType)
	{
		return null;
	}

	[Token(Token = "0x6001A21")]
	[Address(RVA = "0x4C3E4F0", Offset = "0x4C3E4F0", VA = "0x4C3E4F0")]
	private static bool DoDispatch(BaseVisualElementPanel panel)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A22")]
	[Address(RVA = "0x4C3A8D0", Offset = "0x4C3A8D0", VA = "0x4C3A8D0")]
	internal static void GetAllPanels(List<Panel> panels, ContextType contextType)
	{
	}

	[Token(Token = "0x6001A23")]
	[Address(RVA = "0x4C3F190", Offset = "0x4C3F190", VA = "0x4C3F190")]
	internal static Dictionary<int, Panel>.Enumerator GetPanelsIterator()
	{
		return default(Dictionary<int, Panel>.Enumerator);
	}

	[Token(Token = "0x6001A24")]
	[Address(RVA = "0x4C3F240", Offset = "0x4C3F240", VA = "0x4C3F240")]
	internal static float PixelsPerUnitScaleForElement(VisualElement ve, Sprite sprite)
	{
		return default(float);
	}
}
