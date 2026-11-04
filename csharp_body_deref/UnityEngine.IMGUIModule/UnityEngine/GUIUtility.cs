// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GUIUtility
// Update status: CHANGED in this game update
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
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/RenderLayers/GUITexture.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/InputBindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUIManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Utilities/CopyPaste.h")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUIUtility.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/InputManager.h")]
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
		[Address(RVA = "0x2F99780", Offset = "0x2F97D80", VA = "0x182F99780")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "UnityEditor.UIToolkitAuthoringModule" })]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600020F")]
		[Address(RVA = "0x2F99BD0", Offset = "0x2F981D0", VA = "0x182F99BD0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
		set;
	}

	[Token(Token = "0x1700007A")]
	[UnityEngine.Bindings.NativeProperty("GetGUIState().m_OnGUIDepth", true, UnityEngine.Bindings.TargetType.Field)]
	internal static extern int guiDepth
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000210")]
		[Address(RVA = "0x2F99640", Offset = "0x2F97C40", VA = "0x182F99640")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
		get;
	}

	[Token(Token = "0x1700007B")]
	[UnityEngine.Bindings.NativeProperty("GetGUIState().m_CanvasGUIState.m_IsMouseUsed", true, UnityEngine.Bindings.TargetType.Field)]
	internal static extern bool mouseUsed
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000211")]
		[Address(RVA = "0x2F99B90", Offset = "0x2F98190", VA = "0x182F99B90")]
		set;
	}

	[Token(Token = "0x1700007C")]
	[UnityEngine.Bindings.StaticAccessor("GetInputManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	internal static extern bool textFieldInput
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000212")]
		[Address(RVA = "0x2F998D0", Offset = "0x2F97ED0", VA = "0x182F998D0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000213")]
		[Address(RVA = "0x2F99DF0", Offset = "0x2F983F0", VA = "0x182F99DF0")]
		set;
	}

	[Token(Token = "0x1700007D")]
	public static string systemCopyBuffer
	{
		[Token(Token = "0x6000214")]
		[Address(RVA = "0x2F997F0", Offset = "0x2F97DF0", VA = "0x182F997F0")]
		[UnityEngine.Bindings.FreeFunction("GetCopyBuffer")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000215")]
		[Address(RVA = "0x2F99C50", Offset = "0x2F98250", VA = "0x182F99C50")]
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
		[Address(RVA = "0x2F99560", Offset = "0x2F97B60", VA = "0x182F99560")]
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
		[Address(RVA = "0x2F99A80", Offset = "0x2F98080", VA = "0x182F99A80")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
		set;
	}

	[Token(Token = "0x17000080")]
	[UnityEngine.Bindings.StaticAccessor("InputBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static Vector2 compositionCursorPos
	{
		[Token(Token = "0x6000223")]
		[Address(RVA = "0x2F99940", Offset = "0x2F97F40", VA = "0x182F99940")]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	internal static bool guiIsExiting
	{
		[Token(Token = "0x600022E")]
		[Address(RVA = "0x2F999B0", Offset = "0x2F97FB0", VA = "0x182F999B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public static int hotControl
	{
		[Token(Token = "0x600022F")]
		[Address(RVA = "0x2F99670", Offset = "0x2F97C70", VA = "0x182F99670")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000230")]
		[Address(RVA = "0x2F99A10", Offset = "0x2F98010", VA = "0x182F99A10")]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	public static int keyboardControl
	{
		[Token(Token = "0x6000233")]
		[Address(RVA = "0x2F99720", Offset = "0x2F97D20", VA = "0x182F99720")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000234")]
		[Address(RVA = "0x2F99B20", Offset = "0x2F98120", VA = "0x182F99B20")]
		set
		{
		}
	}

	[Token(Token = "0x17000084")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static bool isUITK
	{
		[Token(Token = "0x6000242")]
		[Address(RVA = "0x2F996D0", Offset = "0x2F97CD0", VA = "0x182F996D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000243")]
		[Address(RVA = "0x2F99AC0", Offset = "0x2F980C0", VA = "0x182F99AC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x2F98B30", Offset = "0x2F97130", VA = "0x182F98B30")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().GetControlID")]
	private static int Internal_GetControlID(int hint, FocusType focusType, Rect rect)
	{
		return default(int);
	}

	[Token(Token = "0x6000217")]
	[Address(RVA = "0x2F981B0", Offset = "0x2F967B0", VA = "0x182F981B0")]
	public static int GetControlID(int hint, FocusType focusType, Rect rect)
	{
		return default(int);
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x2F973C0", Offset = "0x2F959C0", VA = "0x182F973C0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void BeginContainerFromOwner(ScriptableObject owner)
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x2F97490", Offset = "0x2F95A90", VA = "0x182F97490")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void BeginContainer(ObjectGUIState objectGUIState)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021A")]
	[Address(RVA = "0x2F98A80", Offset = "0x2F97080", VA = "0x182F98A80")]
	[UnityEngine.Bindings.NativeMethod("EndContainer")]
	internal static extern void Internal_EndContainer();

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x2F97770", Offset = "0x2F95D70", VA = "0x182F97770")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static int CheckForTabEvent(Event evt)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021C")]
	[Address(RVA = "0x2F992C0", Offset = "0x2F978C0", VA = "0x182F992C0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static extern void SetKeyboardControlToFirstControlId();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021D")]
	[Address(RVA = "0x2F992F0", Offset = "0x2F978F0", VA = "0x182F992F0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static extern void SetKeyboardControlToLastControlId();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021E")]
	[Address(RVA = "0x2F984A0", Offset = "0x2F96AA0", VA = "0x182F984A0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static extern bool HasFocusableControls();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600021F")]
	[Address(RVA = "0x2F98DD0", Offset = "0x2F973D0", VA = "0x182F98DD0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static extern bool OwnsId(int id);

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x2F97210", Offset = "0x2F95810", VA = "0x182F97210")]
	public static Rect AlignRectToDevice(Rect rect, out int widthInPixels, out int heightInPixels)
	{
		return default(Rect);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000224")]
	[Address(RVA = "0x2F98BF0", Offset = "0x2F971F0", VA = "0x182F98BF0")]
	private static extern int Internal_GetHotControl();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000225")]
	[Address(RVA = "0x2F98C20", Offset = "0x2F97220", VA = "0x182F98C20")]
	private static extern int Internal_GetKeyboardControl();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000226")]
	[Address(RVA = "0x2F98C50", Offset = "0x2F97250", VA = "0x182F98C50")]
	private static extern void Internal_SetHotControl(int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000227")]
	[Address(RVA = "0x2F98C90", Offset = "0x2F97290", VA = "0x182F98C90")]
	private static extern void Internal_SetKeyboardControl(int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000228")]
	[Address(RVA = "0x2F98BB0", Offset = "0x2F971B0", VA = "0x182F98BB0")]
	private static extern object Internal_GetDefaultSkin(int skinMode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000229")]
	[Address(RVA = "0x2F98AB0", Offset = "0x2F970B0", VA = "0x182F98AB0")]
	private static extern void Internal_ExitGUI();

	[Token(Token = "0x600022A")]
	[Address(RVA = "0x2F98D60", Offset = "0x2F97360", VA = "0x182F98D60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void MarkGUIChanged()
	{
	}

	[Token(Token = "0x600022B")]
	[Address(RVA = "0x2F97FD0", Offset = "0x2F965D0", VA = "0x182F97FD0")]
	public static int GetControlID(FocusType focus, Rect position)
	{
		return default(int);
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x2F98040", Offset = "0x2F96640", VA = "0x182F98040")]
	public static int GetControlID(int hint, FocusType focus)
	{
		return default(int);
	}

	[Token(Token = "0x600022D")]
	[Address(RVA = "0x2F98320", Offset = "0x2F96920", VA = "0x182F98320")]
	public static object GetStateObject(Type t, int controlID)
	{
		return null;
	}

	[Token(Token = "0x6000231")]
	[Address(RVA = "0x2F993E0", Offset = "0x2F979E0", VA = "0x182F993E0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void TakeCapture()
	{
	}

	[Token(Token = "0x6000232")]
	[Address(RVA = "0x2F990C0", Offset = "0x2F976C0", VA = "0x182F990C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RemoveCapture()
	{
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x2F984D0", Offset = "0x2F96AD0", VA = "0x182F984D0")]
	internal static bool HasKeyFocus(int controlID)
	{
		return default(bool);
	}

	[Token(Token = "0x6000236")]
	[Address(RVA = "0x2F97F70", Offset = "0x2F96570", VA = "0x182F97F70")]
	public static void ExitGUI()
	{
	}

	[Token(Token = "0x6000237")]
	[Address(RVA = "0x2F98280", Offset = "0x2F96880", VA = "0x182F98280")]
	internal static GUISkin GetDefaultSkin()
	{
		return null;
	}

	[Token(Token = "0x6000238")]
	[Address(RVA = "0x2F98E10", Offset = "0x2F97410", VA = "0x182F98E10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ProcessEvent(int instanceID, IntPtr nativeEventPtr, out bool result)
	{
	}

	[Token(Token = "0x6000239")]
	[Address(RVA = "0x2F97A20", Offset = "0x2F96020", VA = "0x182F97A20")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void EndContainer()
	{
	}

	[Token(Token = "0x600023A")]
	[Address(RVA = "0x2F97500", Offset = "0x2F95B00", VA = "0x182F97500")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void BeginGUI(int skinMode, int instanceID, int useGUILayout)
	{
	}

	[Token(Token = "0x600023B")]
	[Address(RVA = "0x2F978A0", Offset = "0x2F95EA0", VA = "0x182F978A0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void DestroyGUI(int instanceID)
	{
	}

	[Token(Token = "0x600023C")]
	[Address(RVA = "0x2F97BB0", Offset = "0x2F961B0", VA = "0x182F97BB0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void EndGUI(int layoutType)
	{
	}

	[Token(Token = "0x600023D")]
	[Address(RVA = "0x2F97AA0", Offset = "0x2F960A0", VA = "0x182F97AA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool EndGUIFromException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x600023E")]
	[Address(RVA = "0x2F97980", Offset = "0x2F95F80", VA = "0x182F97980")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool EndContainerGUIFromException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x600023F")]
	[Address(RVA = "0x2F99130", Offset = "0x2F97730", VA = "0x182F99130")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void ResetGlobalState()
	{
	}

	[Token(Token = "0x6000240")]
	[Address(RVA = "0x2F98CD0", Offset = "0x2F972D0", VA = "0x182F98CD0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static bool IsExitGUIException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x6000241")]
	[Address(RVA = "0x2F99320", Offset = "0x2F97920", VA = "0x182F99320")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static bool ShouldRethrowException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x6000244")]
	[Address(RVA = "0x2F977E0", Offset = "0x2F95DE0", VA = "0x182F977E0")]
	internal static void CheckOnGUI()
	{
	}

	[Token(Token = "0x6000245")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	internal static void WarnOnGUI()
	{
	}

	[Token(Token = "0x6000246")]
	[Address(RVA = "0x2F972A0", Offset = "0x2F958A0", VA = "0x182F972A0")]
	public static Rect AlignRectToDevice(Rect rect)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000247")]
	[Address(RVA = "0x2F98830", Offset = "0x2F96E30", VA = "0x182F98830")]
	internal static bool HitTest(Rect rect, Vector2 point, int offset)
	{
		return default(bool);
	}

	[Token(Token = "0x6000248")]
	[Address(RVA = "0x2F98950", Offset = "0x2F96F50", VA = "0x182F98950")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static bool HitTest(Rect rect, Vector2 point, bool isDirectManipulationDevice)
	{
		return default(bool);
	}

	[Token(Token = "0x6000249")]
	[Address(RVA = "0x2F985F0", Offset = "0x2F96BF0", VA = "0x182F985F0")]
	internal static bool HitTest(Rect rect, Event evt)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600024B")]
	[Address(RVA = "0x2F997B0", Offset = "0x2F97DB0", VA = "0x182F997B0")]
	private static extern void get_systemCopyBuffer_Injected(out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600024C")]
	[Address(RVA = "0x2F99C10", Offset = "0x2F98210", VA = "0x182F99C10")]
	private static extern void set_systemCopyBuffer_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600024D")]
	[Address(RVA = "0x2F98AE0", Offset = "0x2F970E0", VA = "0x182F98AE0")]
	private static extern int Internal_GetControlID_Injected(int hint, FocusType focusType, [In] ref Rect rect);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600024E")]
	[Address(RVA = "0x2F97380", Offset = "0x2F95980", VA = "0x182F97380")]
	private static extern void BeginContainerFromOwner_Injected(IntPtr owner);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600024F")]
	[Address(RVA = "0x2F97450", Offset = "0x2F95A50", VA = "0x182F97450")]
	private static extern void BeginContainer_Injected(IntPtr objectGUIState);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000250")]
	[Address(RVA = "0x2F97730", Offset = "0x2F95D30", VA = "0x182F97730")]
	private static extern int CheckForTabEvent_Injected(IntPtr evt);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000251")]
	[Address(RVA = "0x2F971C0", Offset = "0x2F957C0", VA = "0x182F971C0")]
	private static extern void AlignRectToDevice_Injected([In] ref Rect rect, out int widthInPixels, out int heightInPixels, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000252")]
	[Address(RVA = "0x2F99520", Offset = "0x2F97B20", VA = "0x182F99520")]
	private static extern void get_compositionString_Injected(out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000253")]
	[Address(RVA = "0x2F99900", Offset = "0x2F97F00", VA = "0x182F99900")]
	private static extern void set_compositionCursorPos_Injected([In] ref Vector2 value);
}
