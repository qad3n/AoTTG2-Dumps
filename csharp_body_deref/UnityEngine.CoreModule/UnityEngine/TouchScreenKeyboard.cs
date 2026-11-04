// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TouchScreenKeyboard
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;

namespace UnityEngine;

[Token(Token = "0x20001DB")]
[UnityEngine.Bindings.NativeConditional("ENABLE_ONSCREEN_KEYBOARD")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/KeyboardOnScreen.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/TouchScreenKeyboard/TouchScreenKeyboard.bindings.h")]
public class TouchScreenKeyboard
{
	[Token(Token = "0x20001DC")]
	public enum Status
	{
		[Token(Token = "0x4000676")]
		Visible,
		[Token(Token = "0x4000677")]
		Done,
		[Token(Token = "0x4000678")]
		Canceled,
		[Token(Token = "0x4000679")]
		LostFocus
	}

	[Token(Token = "0x20001DD")]
	public enum InputFieldAppearance
	{
		[Token(Token = "0x400067B")]
		Customizable,
		[Token(Token = "0x400067C")]
		AlwaysVisible,
		[Token(Token = "0x400067D")]
		AlwaysHidden
	}

	[Token(Token = "0x20001DE")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000FBD")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(TouchScreenKeyboard touchScreenKeyboard)
		{
			return default(IntPtr);
		}
	}

	[NonSerialized]
	[Token(Token = "0x4000673")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x17000289")]
	public static bool isSupported
	{
		[Token(Token = "0x6000FA0")]
		[Address(RVA = "0x2F2A5C0", Offset = "0x2F28BC0", VA = "0x182F2A5C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700028A")]
	internal static bool disableInPlaceEditing
	{
		[Token(Token = "0x6000FA1")]
		[Address(RVA = "0x2F2A4F0", Offset = "0x2F28AF0", VA = "0x182F2A4F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700028B")]
	public static bool isInPlaceEditingAllowed
	{
		[Token(Token = "0x6000FA2")]
		[Address(RVA = "0x2F2A560", Offset = "0x2F28B60", VA = "0x182F2A560")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700028C")]
	public string text
	{
		[Token(Token = "0x6000FA6")]
		[Address(RVA = "0x2F2A790", Offset = "0x2F28D90", VA = "0x182F2A790")]
		[UnityEngine.Bindings.NativeName("GetText")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FA7")]
		[Address(RVA = "0x2F2AB60", Offset = "0x2F29160", VA = "0x182F2AB60")]
		[UnityEngine.Bindings.NativeName("SetText")]
		set
		{
		}
	}

	[Token(Token = "0x1700028D")]
	public static extern bool hideInput
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000FA8")]
		[Address(RVA = "0x2F2A9B0", Offset = "0x2F28FB0", VA = "0x182F2A9B0")]
		[UnityEngine.Bindings.NativeName("SetInputHidden")]
		set;
	}

	[Token(Token = "0x1700028E")]
	public static extern InputFieldAppearance inputFieldAppearance
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000FA9")]
		[Address(RVA = "0x2F2A530", Offset = "0x2F28B30", VA = "0x182F2A530")]
		[UnityEngine.Bindings.NativeName("GetInputFieldAppearance")]
		get;
	}

	[Token(Token = "0x1700028F")]
	public bool active
	{
		[Token(Token = "0x6000FAA")]
		[Address(RVA = "0x2F2A350", Offset = "0x2F28950", VA = "0x182F2A350")]
		[UnityEngine.Bindings.NativeName("IsActive")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FAB")]
		[Address(RVA = "0x2F2A8B0", Offset = "0x2F28EB0", VA = "0x182F2A8B0")]
		[UnityEngine.Bindings.NativeName("SetActive")]
		set
		{
		}
	}

	[Token(Token = "0x17000290")]
	public Status status
	{
		[Token(Token = "0x6000FAC")]
		[Address(RVA = "0x2F2A6E0", Offset = "0x2F28CE0", VA = "0x182F2A6E0")]
		[UnityEngine.Bindings.NativeName("GetKeyboardStatus")]
		get
		{
			return default(Status);
		}
	}

	[Token(Token = "0x17000291")]
	public int characterLimit
	{
		[Token(Token = "0x6000FAD")]
		[Address(RVA = "0x2F2A950", Offset = "0x2F28F50", VA = "0x182F2A950")]
		[UnityEngine.Bindings.NativeName("SetCharacterLimit")]
		set
		{
		}
	}

	[Token(Token = "0x17000292")]
	public bool canGetSelection
	{
		[Token(Token = "0x6000FAE")]
		[Address(RVA = "0x2F2A3F0", Offset = "0x2F289F0", VA = "0x182F2A3F0")]
		[UnityEngine.Bindings.NativeName("CanGetSelection")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000293")]
	public bool canSetSelection
	{
		[Token(Token = "0x6000FAF")]
		[Address(RVA = "0x2F2A490", Offset = "0x2F28A90", VA = "0x182F2A490")]
		[UnityEngine.Bindings.NativeName("CanSetSelection")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000294")]
	public RangeInt selection
	{
		[Token(Token = "0x6000FB0")]
		[Address(RVA = "0x2F2A650", Offset = "0x2F28C50", VA = "0x182F2A650")]
		get
		{
			return default(RangeInt);
		}
		[Token(Token = "0x6000FB1")]
		[Address(RVA = "0x2F2A9F0", Offset = "0x2F28FF0", VA = "0x182F2A9F0")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x2F29B60", Offset = "0x2F28160", VA = "0x182F29B60")]
	[UnityEngine.Bindings.FreeFunction("TouchScreenKeyboard_Destroy", IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr ptr);

	[Token(Token = "0x6000F9C")]
	[Address(RVA = "0x2F299B0", Offset = "0x2F27FB0", VA = "0x182F299B0")]
	private void Destroy()
	{
	}

	[Token(Token = "0x6000F9D")]
	[Address(RVA = "0x2F29A40", Offset = "0x2F28040", VA = "0x182F29A40", Slot = "1")]
	~TouchScreenKeyboard()
	{
	}

	[Token(Token = "0x6000F9E")]
	[Address(RVA = "0x2F2A1F0", Offset = "0x2F287F0", VA = "0x182F2A1F0")]
	public TouchScreenKeyboard(string text, TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, string textPlaceholder, int characterLimit)
	{
	}

	[Token(Token = "0x6000F9F")]
	[Address(RVA = "0x2F29F40", Offset = "0x2F28540", VA = "0x182F29F40")]
	[UnityEngine.Bindings.FreeFunction("TouchScreenKeyboard_InternalConstructorHelper")]
	private static IntPtr TouchScreenKeyboard_InternalConstructorHelper(ref TouchScreenKeyboard_InternalConstructorHelperArguments arguments, string text, string textPlaceholder)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FA3")]
	[Address(RVA = "0x2F29BA0", Offset = "0x2F281A0", VA = "0x182F29BA0")]
	private static extern bool IsInPlaceEditingAllowed();

	[Token(Token = "0x6000FA4")]
	[Address(RVA = "0x2F29BD0", Offset = "0x2F281D0", VA = "0x182F29BD0")]
	public static TouchScreenKeyboard Open(string text, [DefaultValue("TouchScreenKeyboardType.Default")] TouchScreenKeyboardType keyboardType, [DefaultValue("true")] bool autocorrection, [DefaultValue("false")] bool multiline, [DefaultValue("false")] bool secure, [DefaultValue("false")] bool alert, [DefaultValue("\"\"")] string textPlaceholder, [DefaultValue("0")] int characterLimit)
	{
		return null;
	}

	[Token(Token = "0x6000FA5")]
	[Address(RVA = "0x2F29D30", Offset = "0x2F28330", VA = "0x182F29D30")]
	[ExcludeFromDocs]
	public static TouchScreenKeyboard Open(string text, TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB2")]
	[Address(RVA = "0x2F29B10", Offset = "0x2F28110", VA = "0x182F29B10")]
	private static extern void GetSelection(out int start, out int length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB3")]
	[Address(RVA = "0x2F29EA0", Offset = "0x2F284A0", VA = "0x182F29EA0")]
	private static extern void SetSelection(int start, int length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB4")]
	[Address(RVA = "0x2F29EE0", Offset = "0x2F284E0", VA = "0x182F29EE0")]
	private static extern IntPtr TouchScreenKeyboard_InternalConstructorHelper_Injected(ref TouchScreenKeyboard_InternalConstructorHelperArguments arguments, ref ManagedSpanWrapper text, ref ManagedSpanWrapper textPlaceholder);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB5")]
	[Address(RVA = "0x2F2A740", Offset = "0x2F28D40", VA = "0x182F2A740")]
	private static extern void get_text_Injected(IntPtr _unity_self, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB6")]
	[Address(RVA = "0x2F2AB10", Offset = "0x2F29110", VA = "0x182F2AB10")]
	private static extern void set_text_Injected(IntPtr _unity_self, ref ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB7")]
	[Address(RVA = "0x2F2A310", Offset = "0x2F28910", VA = "0x182F2A310")]
	private static extern bool get_active_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB8")]
	[Address(RVA = "0x2F2A860", Offset = "0x2F28E60", VA = "0x182F2A860")]
	private static extern void set_active_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB9")]
	[Address(RVA = "0x2F2A6A0", Offset = "0x2F28CA0", VA = "0x182F2A6A0")]
	private static extern Status get_status_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FBA")]
	[Address(RVA = "0x2F2A910", Offset = "0x2F28F10", VA = "0x182F2A910")]
	private static extern void set_characterLimit_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x2F2A3B0", Offset = "0x2F289B0", VA = "0x182F2A3B0")]
	private static extern bool get_canGetSelection_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FBC")]
	[Address(RVA = "0x2F2A450", Offset = "0x2F28A50", VA = "0x182F2A450")]
	private static extern bool get_canSetSelection_Injected(IntPtr _unity_self);
}
