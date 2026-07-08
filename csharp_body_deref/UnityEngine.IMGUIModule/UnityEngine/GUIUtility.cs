using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Token(Token = "0x200001D")]
[UnityEngine.Bindings.NativeHeader("Runtime/Camera/RenderLayers/GUITexture.h")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUIUtility.h")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUIManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Utilities/CopyPaste.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/InputManager.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/InputBindings.h")]
public class GUIUtility
{
	[Token(Token = "0x40000BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static int s_ControlCount;

	[Token(Token = "0x40000BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	internal static int s_SkinMode;

	[Token(Token = "0x40000BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static int s_OriginalID;

	[Token(Token = "0x40000BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static Action takeCapture;

	[Token(Token = "0x40000BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal static Action releaseCapture;

	[Token(Token = "0x40000C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal static Func<int, IntPtr, bool> processEvent;

	[Token(Token = "0x40000C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal static Action cleanupRoots;

	[Token(Token = "0x40000C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	internal static Func<Exception, bool> endContainerGUIFromException;

	[Token(Token = "0x40000C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal static Action guiChanged;

	[Token(Token = "0x40000C5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	internal static Func<bool> s_HasCurrentWindowKeyFocusFunc;

	[Token(Token = "0x17000076")]
	[UnityEngine.Bindings.NativeProperty("GetGUIState().m_PixelsPerPoint", true, UnityEngine.Bindings.TargetType.Field)]
	internal static extern float pixelsPerPoint
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60001C6")]
		[Address(RVA = "0x4B29FD0", Offset = "0x4B29FD0", VA = "0x4B29FD0")]
		get;
	}

	[Token(Token = "0x17000077")]
	[UnityEngine.Bindings.NativeProperty("GetGUIState().m_OnGUIDepth", true, UnityEngine.Bindings.TargetType.Field)]
	internal static extern int guiDepth
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60001C7")]
		[Address(RVA = "0x4B33610", Offset = "0x4B33610", VA = "0x4B33610")]
		get;
	}

	[Token(Token = "0x17000078")]
	[UnityEngine.Bindings.NativeProperty("GetGUIState().m_CanvasGUIState.m_IsMouseUsed", true, UnityEngine.Bindings.TargetType.Field)]
	internal static extern bool mouseUsed
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60001C8")]
		[Address(RVA = "0x4B22030", Offset = "0x4B22030", VA = "0x4B22030")]
		set;
	}

	[Token(Token = "0x17000079")]
	[UnityEngine.Bindings.StaticAccessor("GetInputManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	internal static extern bool textFieldInput
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60001C9")]
		[Address(RVA = "0x4B195F0", Offset = "0x4B195F0", VA = "0x4B195F0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60001CA")]
		[Address(RVA = "0x4B1F570", Offset = "0x4B1F570", VA = "0x4B1F570")]
		set;
	}

	[Token(Token = "0x1700007A")]
	public static extern string systemCopyBuffer
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x4B33640", Offset = "0x4B33640", VA = "0x4B33640")]
		[UnityEngine.Bindings.FreeFunction("GetCopyBuffer")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x4B33670", Offset = "0x4B33670", VA = "0x4B33670")]
		[UnityEngine.Bindings.FreeFunction("SetCopyBuffer")]
		set;
	}

	[Token(Token = "0x1700007B")]
	[UnityEngine.Bindings.StaticAccessor("InputBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static extern string compositionString
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x4B1F540", Offset = "0x4B1F540", VA = "0x4B1F540")]
		get;
	}

	[Token(Token = "0x1700007C")]
	[UnityEngine.Bindings.StaticAccessor("InputBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static extern IMECompositionMode imeCompositionMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x4B33A10", Offset = "0x4B33A10", VA = "0x4B33A10")]
		set;
	}

	[Token(Token = "0x1700007D")]
	[UnityEngine.Bindings.StaticAccessor("InputBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static Vector2 compositionCursorPos
	{
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x4B33A40", Offset = "0x4B33A40", VA = "0x4B33A40")]
		set
		{
		}
	}

	[Token(Token = "0x1700007E")]
	internal static bool guiIsExiting
	{
		[Token(Token = "0x60001E5")]
		[Address(RVA = "0x4B33C20", Offset = "0x4B33C20", VA = "0x4B33C20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public static int hotControl
	{
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x4B1D6E0", Offset = "0x4B1D6E0", VA = "0x4B1D6E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x4B1D6B0", Offset = "0x4B1D6B0", VA = "0x4B1D6B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000080")]
	public static int keyboardControl
	{
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x4B1F450", Offset = "0x4B1F450", VA = "0x4B1F450")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x4B1F480", Offset = "0x4B1F480", VA = "0x4B1F480")]
		set
		{
		}
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x4B336A0", Offset = "0x4B336A0", VA = "0x4B336A0")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().GetControlID")]
	private static int Internal_GetControlID(int hint, FocusType focusType, Rect rect)
	{
		return default(int);
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x4B1CE50", Offset = "0x4B1CE50", VA = "0x4B1CE50")]
	public static int GetControlID(int hint, FocusType focusType, Rect rect)
	{
		return default(int);
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x4B33730", Offset = "0x4B33730", VA = "0x4B33730")]
	internal static void BeginContainerFromOwner(ScriptableObject owner)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x4B33810", Offset = "0x4B33810", VA = "0x4B33810")]
	internal static extern void BeginContainer(ObjectGUIState objectGUIState);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x4B33840", Offset = "0x4B33840", VA = "0x4B33840")]
	[UnityEngine.Bindings.NativeMethod("EndContainer")]
	internal static extern void Internal_EndContainer();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x4B33870", Offset = "0x4B33870", VA = "0x4B33870")]
	internal static extern int CheckForTabEvent(Event evt);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x4B338A0", Offset = "0x4B338A0", VA = "0x4B338A0")]
	internal static extern void SetKeyboardControlToFirstControlId();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x4B338D0", Offset = "0x4B338D0", VA = "0x4B338D0")]
	internal static extern void SetKeyboardControlToLastControlId();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x4B33900", Offset = "0x4B33900", VA = "0x4B33900")]
	internal static extern bool HasFocusableControls();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x4B33930", Offset = "0x4B33930", VA = "0x4B33930")]
	internal static extern bool OwnsId(int id);

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x4B33960", Offset = "0x4B33960", VA = "0x4B33960")]
	public static Rect AlignRectToDevice(Rect rect, out int widthInPixels, out int heightInPixels)
	{
		return default(Rect);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x4B33AB0", Offset = "0x4B33AB0", VA = "0x4B33AB0")]
	private static extern int Internal_GetHotControl();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x4B33AE0", Offset = "0x4B33AE0", VA = "0x4B33AE0")]
	private static extern int Internal_GetKeyboardControl();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x4B33B10", Offset = "0x4B33B10", VA = "0x4B33B10")]
	private static extern void Internal_SetHotControl(int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x4B33B40", Offset = "0x4B33B40", VA = "0x4B33B40")]
	private static extern void Internal_SetKeyboardControl(int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x4B33B70", Offset = "0x4B33B70", VA = "0x4B33B70")]
	private static extern object Internal_GetDefaultSkin(int skinMode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x4B33BA0", Offset = "0x4B33BA0", VA = "0x4B33BA0")]
	private static extern void Internal_ExitGUI();

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x4B33BD0", Offset = "0x4B33BD0", VA = "0x4B33BD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void MarkGUIChanged()
	{
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x4B1D960", Offset = "0x4B1D960", VA = "0x4B1D960")]
	public static int GetControlID(FocusType focus, Rect position)
	{
		return default(int);
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x4B1CA90", Offset = "0x4B1CA90", VA = "0x4B1CA90")]
	public static int GetControlID(int hint, FocusType focus)
	{
		return default(int);
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x4B1E2A0", Offset = "0x4B1E2A0", VA = "0x4B1E2A0")]
	public static object GetStateObject(Type t, int controlID)
	{
		return null;
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x4B33C60", Offset = "0x4B33C60", VA = "0x4B33C60")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void TakeCapture()
	{
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x4B33CB0", Offset = "0x4B33CB0", VA = "0x4B33CB0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RemoveCapture()
	{
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x4B31A30", Offset = "0x4B31A30", VA = "0x4B31A30")]
	internal static bool HasKeyFocus(int controlID)
	{
		return default(bool);
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x4B33D00", Offset = "0x4B33D00", VA = "0x4B33D00")]
	public static void ExitGUI()
	{
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x4B1A710", Offset = "0x4B1A710", VA = "0x4B1A710")]
	internal static GUISkin GetDefaultSkin()
	{
		return null;
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x4B33DC0", Offset = "0x4B33DC0", VA = "0x4B33DC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ProcessEvent(int instanceID, IntPtr nativeEventPtr, out bool result)
	{
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x4B33EC0", Offset = "0x4B33EC0", VA = "0x4B33EC0")]
	internal static void EndContainer()
	{
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x4B33F20", Offset = "0x4B33F20", VA = "0x4B33F20")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void BeginGUI(int skinMode, int instanceID, int useGUILayout)
	{
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x4B34170", Offset = "0x4B34170", VA = "0x4B34170")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void EndGUI(int layoutType)
	{
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x4B34380", Offset = "0x4B34380", VA = "0x4B34380")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool EndGUIFromException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x4B34490", Offset = "0x4B34490", VA = "0x4B34490")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool EndContainerGUIFromException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x4B33FA0", Offset = "0x4B33FA0", VA = "0x4B33FA0")]
	internal static void ResetGlobalState()
	{
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x4B344E0", Offset = "0x4B344E0", VA = "0x4B344E0")]
	internal static bool IsExitGUIException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x4B34420", Offset = "0x4B34420", VA = "0x4B34420")]
	internal static bool ShouldRethrowException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x4B1A4F0", Offset = "0x4B1A4F0", VA = "0x4B1A4F0")]
	internal static void CheckOnGUI()
	{
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x4B34550", Offset = "0x4B34550", VA = "0x4B34550")]
	internal static float RoundToPixelGrid(float v)
	{
		return default(float);
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x4B345D0", Offset = "0x4B345D0", VA = "0x4B345D0")]
	public static Rect AlignRectToDevice(Rect rect)
	{
		return default(Rect);
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x4B34640", Offset = "0x4B34640", VA = "0x4B34640")]
	internal static bool HitTest(Rect rect, Vector2 point, int offset)
	{
		return default(bool);
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x4B34690", Offset = "0x4B34690", VA = "0x4B34690")]
	internal static bool HitTest(Rect rect, Vector2 point, bool isDirectManipulationDevice)
	{
		return default(bool);
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x4B1FF30", Offset = "0x4B1FF30", VA = "0x4B1FF30")]
	internal static bool HitTest(Rect rect, Event evt)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x4B336F0", Offset = "0x4B336F0", VA = "0x4B336F0")]
	private static extern int Internal_GetControlID_Injected(int hint, FocusType focusType, [In] ref Rect rect);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x4B337E0", Offset = "0x4B337E0", VA = "0x4B337E0")]
	private static extern void BeginContainerFromOwner_Injected(IntPtr owner);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000200")]
	[Address(RVA = "0x4B339C0", Offset = "0x4B339C0", VA = "0x4B339C0")]
	private static extern void AlignRectToDevice_Injected([In] ref Rect rect, out int widthInPixels, out int heightInPixels, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000201")]
	[Address(RVA = "0x4B33A80", Offset = "0x4B33A80", VA = "0x4B33A80")]
	private static extern void set_compositionCursorPos_Injected([In] ref Vector2 value);
}
