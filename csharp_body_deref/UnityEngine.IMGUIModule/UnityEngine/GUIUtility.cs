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
		[Address(RVA = "0x4E51B90", Offset = "0x4E51B90", VA = "0x4E51B90")]
		get;
	}

	[Token(Token = "0x17000077")]
	[UnityEngine.Bindings.NativeProperty("GetGUIState().m_OnGUIDepth", true, UnityEngine.Bindings.TargetType.Field)]
	internal static extern int guiDepth
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60001C7")]
		[Address(RVA = "0x4E5B1D0", Offset = "0x4E5B1D0", VA = "0x4E5B1D0")]
		get;
	}

	[Token(Token = "0x17000078")]
	[UnityEngine.Bindings.NativeProperty("GetGUIState().m_CanvasGUIState.m_IsMouseUsed", true, UnityEngine.Bindings.TargetType.Field)]
	internal static extern bool mouseUsed
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60001C8")]
		[Address(RVA = "0x4E49BF0", Offset = "0x4E49BF0", VA = "0x4E49BF0")]
		set;
	}

	[Token(Token = "0x17000079")]
	[UnityEngine.Bindings.StaticAccessor("GetInputManager()", UnityEngine.Bindings.StaticAccessorType.Dot)]
	internal static extern bool textFieldInput
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60001C9")]
		[Address(RVA = "0x4E411B0", Offset = "0x4E411B0", VA = "0x4E411B0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60001CA")]
		[Address(RVA = "0x4E47130", Offset = "0x4E47130", VA = "0x4E47130")]
		set;
	}

	[Token(Token = "0x1700007A")]
	public static extern string systemCopyBuffer
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x4E5B200", Offset = "0x4E5B200", VA = "0x4E5B200")]
		[UnityEngine.Bindings.FreeFunction("GetCopyBuffer")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x4E5B230", Offset = "0x4E5B230", VA = "0x4E5B230")]
		[UnityEngine.Bindings.FreeFunction("SetCopyBuffer")]
		set;
	}

	[Token(Token = "0x1700007B")]
	[UnityEngine.Bindings.StaticAccessor("InputBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static extern string compositionString
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x4E47100", Offset = "0x4E47100", VA = "0x4E47100")]
		get;
	}

	[Token(Token = "0x1700007C")]
	[UnityEngine.Bindings.StaticAccessor("InputBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static extern IMECompositionMode imeCompositionMode
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x4E5B5D0", Offset = "0x4E5B5D0", VA = "0x4E5B5D0")]
		set;
	}

	[Token(Token = "0x1700007D")]
	[UnityEngine.Bindings.StaticAccessor("InputBindings", UnityEngine.Bindings.StaticAccessorType.DoubleColon)]
	internal static Vector2 compositionCursorPos
	{
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x4E5B600", Offset = "0x4E5B600", VA = "0x4E5B600")]
		set
		{
		}
	}

	[Token(Token = "0x1700007E")]
	internal static bool guiIsExiting
	{
		[Token(Token = "0x60001E5")]
		[Address(RVA = "0x4E5B7E0", Offset = "0x4E5B7E0", VA = "0x4E5B7E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700007F")]
	public static int hotControl
	{
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x4E452A0", Offset = "0x4E452A0", VA = "0x4E452A0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x4E45270", Offset = "0x4E45270", VA = "0x4E45270")]
		set
		{
		}
	}

	[Token(Token = "0x17000080")]
	public static int keyboardControl
	{
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x4E47010", Offset = "0x4E47010", VA = "0x4E47010")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x4E47040", Offset = "0x4E47040", VA = "0x4E47040")]
		set
		{
		}
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x4E5B260", Offset = "0x4E5B260", VA = "0x4E5B260")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().GetControlID")]
	private static int Internal_GetControlID(int hint, FocusType focusType, Rect rect)
	{
		return default(int);
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x4E44A10", Offset = "0x4E44A10", VA = "0x4E44A10")]
	public static int GetControlID(int hint, FocusType focusType, Rect rect)
	{
		return default(int);
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x4E5B2F0", Offset = "0x4E5B2F0", VA = "0x4E5B2F0")]
	internal static void BeginContainerFromOwner(ScriptableObject owner)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x4E5B3D0", Offset = "0x4E5B3D0", VA = "0x4E5B3D0")]
	internal static extern void BeginContainer(ObjectGUIState objectGUIState);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x4E5B400", Offset = "0x4E5B400", VA = "0x4E5B400")]
	[UnityEngine.Bindings.NativeMethod("EndContainer")]
	internal static extern void Internal_EndContainer();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x4E5B430", Offset = "0x4E5B430", VA = "0x4E5B430")]
	internal static extern int CheckForTabEvent(Event evt);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x4E5B460", Offset = "0x4E5B460", VA = "0x4E5B460")]
	internal static extern void SetKeyboardControlToFirstControlId();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x4E5B490", Offset = "0x4E5B490", VA = "0x4E5B490")]
	internal static extern void SetKeyboardControlToLastControlId();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x4E5B4C0", Offset = "0x4E5B4C0", VA = "0x4E5B4C0")]
	internal static extern bool HasFocusableControls();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x4E5B4F0", Offset = "0x4E5B4F0", VA = "0x4E5B4F0")]
	internal static extern bool OwnsId(int id);

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x4E5B520", Offset = "0x4E5B520", VA = "0x4E5B520")]
	public static Rect AlignRectToDevice(Rect rect, out int widthInPixels, out int heightInPixels)
	{
		return default(Rect);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x4E5B670", Offset = "0x4E5B670", VA = "0x4E5B670")]
	private static extern int Internal_GetHotControl();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x4E5B6A0", Offset = "0x4E5B6A0", VA = "0x4E5B6A0")]
	private static extern int Internal_GetKeyboardControl();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x4E5B6D0", Offset = "0x4E5B6D0", VA = "0x4E5B6D0")]
	private static extern void Internal_SetHotControl(int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x4E5B700", Offset = "0x4E5B700", VA = "0x4E5B700")]
	private static extern void Internal_SetKeyboardControl(int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x4E5B730", Offset = "0x4E5B730", VA = "0x4E5B730")]
	private static extern object Internal_GetDefaultSkin(int skinMode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x4E5B760", Offset = "0x4E5B760", VA = "0x4E5B760")]
	private static extern void Internal_ExitGUI();

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x4E5B790", Offset = "0x4E5B790", VA = "0x4E5B790")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	private static void MarkGUIChanged()
	{
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x4E45520", Offset = "0x4E45520", VA = "0x4E45520")]
	public static int GetControlID(FocusType focus, Rect position)
	{
		return default(int);
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x4E44650", Offset = "0x4E44650", VA = "0x4E44650")]
	public static int GetControlID(int hint, FocusType focus)
	{
		return default(int);
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x4E45E60", Offset = "0x4E45E60", VA = "0x4E45E60")]
	public static object GetStateObject(Type t, int controlID)
	{
		return null;
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x4E5B820", Offset = "0x4E5B820", VA = "0x4E5B820")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void TakeCapture()
	{
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x4E5B870", Offset = "0x4E5B870", VA = "0x4E5B870")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void RemoveCapture()
	{
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x4E595F0", Offset = "0x4E595F0", VA = "0x4E595F0")]
	internal static bool HasKeyFocus(int controlID)
	{
		return default(bool);
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x4E5B8C0", Offset = "0x4E5B8C0", VA = "0x4E5B8C0")]
	public static void ExitGUI()
	{
	}

	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x4E422D0", Offset = "0x4E422D0", VA = "0x4E422D0")]
	internal static GUISkin GetDefaultSkin()
	{
		return null;
	}

	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x4E5B980", Offset = "0x4E5B980", VA = "0x4E5B980")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void ProcessEvent(int instanceID, IntPtr nativeEventPtr, out bool result)
	{
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x4E5BA80", Offset = "0x4E5BA80", VA = "0x4E5BA80")]
	internal static void EndContainer()
	{
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x4E5BAE0", Offset = "0x4E5BAE0", VA = "0x4E5BAE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void BeginGUI(int skinMode, int instanceID, int useGUILayout)
	{
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x4E5BD30", Offset = "0x4E5BD30", VA = "0x4E5BD30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void EndGUI(int layoutType)
	{
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x4E5BF40", Offset = "0x4E5BF40", VA = "0x4E5BF40")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool EndGUIFromException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x4E5C050", Offset = "0x4E5C050", VA = "0x4E5C050")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static bool EndContainerGUIFromException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x4E5BB60", Offset = "0x4E5BB60", VA = "0x4E5BB60")]
	internal static void ResetGlobalState()
	{
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x4E5C0A0", Offset = "0x4E5C0A0", VA = "0x4E5C0A0")]
	internal static bool IsExitGUIException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x4E5BFE0", Offset = "0x4E5BFE0", VA = "0x4E5BFE0")]
	internal static bool ShouldRethrowException(Exception exception)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x4E420B0", Offset = "0x4E420B0", VA = "0x4E420B0")]
	internal static void CheckOnGUI()
	{
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x4E5C110", Offset = "0x4E5C110", VA = "0x4E5C110")]
	internal static float RoundToPixelGrid(float v)
	{
		return default(float);
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x4E5C190", Offset = "0x4E5C190", VA = "0x4E5C190")]
	public static Rect AlignRectToDevice(Rect rect)
	{
		return default(Rect);
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x4E5C200", Offset = "0x4E5C200", VA = "0x4E5C200")]
	internal static bool HitTest(Rect rect, Vector2 point, int offset)
	{
		return default(bool);
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x4E5C250", Offset = "0x4E5C250", VA = "0x4E5C250")]
	internal static bool HitTest(Rect rect, Vector2 point, bool isDirectManipulationDevice)
	{
		return default(bool);
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x4E47AF0", Offset = "0x4E47AF0", VA = "0x4E47AF0")]
	internal static bool HitTest(Rect rect, Event evt)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x4E5B2B0", Offset = "0x4E5B2B0", VA = "0x4E5B2B0")]
	private static extern int Internal_GetControlID_Injected(int hint, FocusType focusType, [In] ref Rect rect);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x4E5B3A0", Offset = "0x4E5B3A0", VA = "0x4E5B3A0")]
	private static extern void BeginContainerFromOwner_Injected(IntPtr owner);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000200")]
	[Address(RVA = "0x4E5B580", Offset = "0x4E5B580", VA = "0x4E5B580")]
	private static extern void AlignRectToDevice_Injected([In] ref Rect rect, out int widthInPixels, out int heightInPixels, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000201")]
	[Address(RVA = "0x4E5B640", Offset = "0x4E5B640", VA = "0x4E5B640")]
	private static extern void set_compositionCursorPos_Injected([In] ref Vector2 value);
}
