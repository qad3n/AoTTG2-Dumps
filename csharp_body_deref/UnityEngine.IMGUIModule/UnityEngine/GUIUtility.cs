// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GUIUtility
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x2000020")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUIUtility.h")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUIManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/InputBindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/InputManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Utilities/CopyPaste.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/RenderLayers/GUITexture.h")]
public class GUIUtility
{
	[Token(Token = "0x40000BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static int s_ControlCount;

	[Token(Token = "0x40000BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static int s_SkinMode;

	[Token(Token = "0x40000BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static int s_OriginalID;

	[Token(Token = "0x40000C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static Action takeCapture;

	[Token(Token = "0x40000C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static Action releaseCapture;

	[Token(Token = "0x40000C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static Func<int, IntPtr, bool> processEvent;

	[Token(Token = "0x40000C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static Action cleanupRoots;

	[Token(Token = "0x40000C4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static Func<Exception, bool> endContainerGUIFromException;

	[Token(Token = "0x40000C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static Action guiChanged;

	[Token(Token = "0x40000C6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal static Action<EventType, KeyCode, EventModifiers> beforeEventProcessed;

	[Token(Token = "0x40000C7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static Event m_Event;

	[Token(Token = "0x40000C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	internal static Func<bool> s_HasCurrentWindowKeyFocusFunc;

	[Token(Token = "0x17000079")]
	[UnityEngine.Bindings.NativeProperty("GetGUIState().m_PixelsPerPoint", true, UnityEngine.Bindings.TargetType.Field)]
	internal static extern float pixelsPerPoint
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600020E")]
		[Address(RVA = "0x698EC10", Offset = "0x698DC10", VA = "0x698EC10")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "UnityEditor.UIToolkitAuthoringModule" })]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600020F")]
		[Address(RVA = "0x699B0D0", Offset = "0x699A0D0", VA = "0x699B0D0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
		set;
	}

	[Token(Token = "0x1700007A")]
	[UnityEngine.Bindings.NativeProperty("GetGUIState().m_OnGUIDepth", true, UnityEngine.Bindings.TargetType.Field)]
	internal static extern int guiDepth
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000210")]
		[Address(RVA = "0x699B110", Offset = "0x699A110", VA = "0x699B110")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
		get;
	}

	[Token(Token = "0x1700007B")]
	[UnityEngine.Bindings.NativeProperty("GetGUIState().m_CanvasGUIState.m_IsMouseUsed", true, UnityEngine.Bindings.TargetType.Field)]
	internal static extern bool mouseUsed
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000211")]
		[Address(RVA = "0x69861D0", Offset = "0x69851D0", VA = "0x69861D0")]
		set;
	}

	[Token(Token = "0x1700007C")]
	[UnityEngine.Bindings.StaticAccessor("GetInputManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	internal static extern bool textFieldInput
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000212")]
		[Address(RVA = "0x697B0D0", Offset = "0x697A0D0", VA = "0x697B0D0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000213")]
		[Address(RVA = "0x6982DE0", Offset = "0x6981DE0", VA = "0x6982DE0")]
		set;
	}

	[Token(Token = "0x1700007D")]
	public static string systemCopyBuffer
	{
		[Token(Token = "0x6000214")]
		[Address(RVA = "0x699B140", Offset = "0x699A140", VA = "0x699B140")]
		[UnityEngine.Bindings.FreeFunction("GetCopyBuffer")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000215")]
		[Address(RVA = "0x699B270", Offset = "0x699A270", VA = "0x699B270")]
		[UnityEngine.Bindings.FreeFunction("SetCopyBuffer")]
		set
		{
		}
	}

	[Token(Token = "0x1700007E")]
	[UnityEngine.Bindings.StaticAccessor("InputBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static string compositionString
	{
		[Token(Token = "0x6000221")]
		[Address(RVA = "0x6982CE0", Offset = "0x6981CE0", VA = "0x6982CE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007F")]
	[UnityEngine.Bindings.StaticAccessor("InputBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static extern IMECompositionMode imeCompositionMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000222")]
		[Address(RVA = "0x699B9A0", Offset = "0x699A9A0", VA = "0x699B9A0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
		set;
	}

	[Token(Token = "0x17000080")]
	[UnityEngine.Bindings.StaticAccessor("InputBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static Vector2 compositionCursorPos
	{
		[Token(Token = "0x6000223")]
		[Address(RVA = "0x699B9D0", Offset = "0x699A9D0", VA = "0x699B9D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	internal static bool guiIsExiting
	{
		[Token(Token = "0x600022E")]
		[Address(RVA = "0x699BC30", Offset = "0x699AC30", VA = "0x699BC30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public static int hotControl
	{
		[Token(Token = "0x600022F")]
		[Address(RVA = "0x6980390", Offset = "0x697F390", VA = "0x6980390")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000230")]
		[Address(RVA = "0x6980310", Offset = "0x697F310", VA = "0x6980310")]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	public static int keyboardControl
	{
		[Token(Token = "0x6000233")]
		[Address(RVA = "0x6982AB0", Offset = "0x6981AB0", VA = "0x6982AB0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000234")]
		[Address(RVA = "0x6982B30", Offset = "0x6981B30", VA = "0x6982B30")]
		set
		{
		}
	}

	[Token(Token = "0x17000084")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static bool isUITK
	{
		[Token(Token = "0x6000242")]
		[Address(RVA = "0x699CBB0", Offset = "0x699BBB0", VA = "0x699CBB0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000243")]
		[Address(RVA = "0x699CC20", Offset = "0x699BC20", VA = "0x699CC20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x699B430", Offset = "0x699A430", VA = "0x699B430")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().GetControlID")]
	private static int Internal_GetControlID(int hint, FocusType focusType, Rect rect)
	{
		return default(int);
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x697F590", Offset = "0x697E590", VA = "0x697F590")]
	public static int GetControlID(int hint, FocusType focusType, Rect rect)
	{
		return default(int);
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x699B510", Offset = "0x699A510", VA = "0x699B510")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void BeginContainerFromOwner(ScriptableObject owner)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x699B610", Offset = "0x699A610", VA = "0x699B610")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void BeginContainer(ObjectGUIState objectGUIState)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021A")]
	[Address(RVA = "0x699B6D0", Offset = "0x699A6D0", VA = "0x699B6D0")]
	[UnityEngine.Bindings.NativeMethod("EndContainer")]
	internal static extern void Internal_EndContainer();

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x699B700", Offset = "0x699A700", VA = "0x699B700")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static int CheckForTabEvent(Event evt)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021C")]
	[Address(RVA = "0x699B7C0", Offset = "0x699A7C0", VA = "0x699B7C0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static extern void SetKeyboardControlToFirstControlId();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021D")]
	[Address(RVA = "0x699B7F0", Offset = "0x699A7F0", VA = "0x699B7F0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static extern void SetKeyboardControlToLastControlId();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021E")]
	[Address(RVA = "0x699B820", Offset = "0x699A820", VA = "0x699B820")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static extern bool HasFocusableControls();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021F")]
	[Address(RVA = "0x699B850", Offset = "0x699A850", VA = "0x699B850")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static extern bool OwnsId(int id);

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x699B880", Offset = "0x699A880", VA = "0x699B880")]
	public static Rect AlignRectToDevice(Rect rect, out int widthInPixels, out int heightInPixels)
	{
		return default(Rect);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000224")]
	[Address(RVA = "0x699BA90", Offset = "0x699AA90", VA = "0x699BA90")]
	private static extern int Internal_GetHotControl();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000225")]
	[Address(RVA = "0x699BAC0", Offset = "0x699AAC0", VA = "0x699BAC0")]
	private static extern int Internal_GetKeyboardControl();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000226")]
	[Address(RVA = "0x699BAF0", Offset = "0x699AAF0", VA = "0x699BAF0")]
	private static extern void Internal_SetHotControl(int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000227")]
	[Address(RVA = "0x699BB20", Offset = "0x699AB20", VA = "0x699BB20")]
	private static extern void Internal_SetKeyboardControl(int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000228")]
	[Address(RVA = "0x699BB50", Offset = "0x699AB50", VA = "0x699BB50")]
	private static extern object Internal_GetDefaultSkin(int skinMode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000229")]
	[Address(RVA = "0x699BB80", Offset = "0x699AB80", VA = "0x699BB80")]
	private static extern void Internal_ExitGUI();

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x699BBB0", Offset = "0x699ABB0", VA = "0x699BBB0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void MarkGUIChanged()
	{
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x69806C0", Offset = "0x697F6C0", VA = "0x69806C0")]
	public static int GetControlID(FocusType focus, Rect position)
	{
		return default(int);
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x697F170", Offset = "0x697E170", VA = "0x697F170")]
	public static int GetControlID(int hint, FocusType focus)
	{
		return default(int);
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x69810B0", Offset = "0x69800B0", VA = "0x69810B0")]
	public static object GetStateObject(Type t, int controlID)
	{
		return null;
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x699BC90", Offset = "0x699AC90", VA = "0x699BC90")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void TakeCapture()
	{
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x699BD10", Offset = "0x699AD10", VA = "0x699BD10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RemoveCapture()
	{
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x6998EB0", Offset = "0x6997EB0", VA = "0x6998EB0")]
	internal static bool HasKeyFocus(int controlID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x699BD90", Offset = "0x699AD90", VA = "0x699BD90")]
	public static void ExitGUI()
	{
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x697C9A0", Offset = "0x697B9A0", VA = "0x697C9A0")]
	internal static GUISkin GetDefaultSkin()
	{
		return null;
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x699BEB0", Offset = "0x699AEB0", VA = "0x699BEB0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ProcessEvent(int instanceID, IntPtr nativeEventPtr, out bool result)
	{
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x699C210", Offset = "0x699B210", VA = "0x699C210")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void EndContainer()
	{
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x699C2C0", Offset = "0x699B2C0", VA = "0x699C2C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void BeginGUI(int skinMode, int instanceID, int useGUILayout)
	{
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x699C5B0", Offset = "0x699B5B0", VA = "0x699C5B0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void DestroyGUI(int instanceID)
	{
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x699C610", Offset = "0x699B610", VA = "0x699C610")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void EndGUI(int layoutType)
	{
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x699C830", Offset = "0x699B830", VA = "0x699C830")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool EndGUIFromException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x699CA80", Offset = "0x699BA80", VA = "0x699CA80")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool EndContainerGUIFromException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x699C360", Offset = "0x699B360", VA = "0x699C360")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void ResetGlobalState()
	{
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x699CB40", Offset = "0x699BB40", VA = "0x699CB40")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static bool IsExitGUIException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x699C9B0", Offset = "0x699B9B0", VA = "0x699C9B0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static bool ShouldRethrowException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x697C6A0", Offset = "0x697B6A0", VA = "0x697C6A0")]
	internal static void CheckOnGUI()
	{
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x699BC80", Offset = "0x699AC80", VA = "0x699BC80")]
	internal static void WarnOnGUI()
	{
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x699CC70", Offset = "0x699BC70", VA = "0x699CC70")]
	public static Rect AlignRectToDevice(Rect rect)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x699CD90", Offset = "0x699BD90", VA = "0x699CD90")]
	internal static bool HitTest(Rect rect, Vector2 point, int offset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x699CEF0", Offset = "0x699BEF0", VA = "0x699CEF0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static bool HitTest(Rect rect, Vector2 point, bool isDirectManipulationDevice)
	{
		return default(bool);
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x69836C0", Offset = "0x69826C0", VA = "0x69836C0")]
	internal static bool HitTest(Rect rect, Event evt)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600024B")]
	[Address(RVA = "0x699B240", Offset = "0x699A240", VA = "0x699B240")]
	private static extern void get_systemCopyBuffer_Injected(out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600024C")]
	[Address(RVA = "0x699B400", Offset = "0x699A400", VA = "0x699B400")]
	private static extern void set_systemCopyBuffer_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600024D")]
	[Address(RVA = "0x699B4D0", Offset = "0x699A4D0", VA = "0x699B4D0")]
	private static extern int Internal_GetControlID_Injected(int hint, FocusType focusType, [In] ref Rect rect);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600024E")]
	[Address(RVA = "0x699B5E0", Offset = "0x699A5E0", VA = "0x699B5E0")]
	private static extern void BeginContainerFromOwner_Injected(IntPtr owner);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600024F")]
	[Address(RVA = "0x699B6A0", Offset = "0x699A6A0", VA = "0x699B6A0")]
	private static extern void BeginContainer_Injected(IntPtr objectGUIState);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000250")]
	[Address(RVA = "0x699B790", Offset = "0x699A790", VA = "0x699B790")]
	private static extern int CheckForTabEvent_Injected(IntPtr evt);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000251")]
	[Address(RVA = "0x699B920", Offset = "0x699A920", VA = "0x699B920")]
	private static extern void AlignRectToDevice_Injected([In] ref Rect rect, out int widthInPixels, out int heightInPixels, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000252")]
	[Address(RVA = "0x699B970", Offset = "0x699A970", VA = "0x699B970")]
	private static extern void get_compositionString_Injected(out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000253")]
	[Address(RVA = "0x699BA60", Offset = "0x699AA60", VA = "0x699BA60")]
	private static extern void set_compositionCursorPos_Injected([In] ref Vector2 value);
}
