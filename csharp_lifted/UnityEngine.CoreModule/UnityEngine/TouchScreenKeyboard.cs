// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TouchScreenKeyboard
// Update status: unchanged since the previous dump
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

[Token(Token = "0x20001DC")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/TouchScreenKeyboard/TouchScreenKeyboard.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/KeyboardOnScreen.h")]
[UnityEngine.Bindings.NativeConditional("ENABLE_ONSCREEN_KEYBOARD")]
public class TouchScreenKeyboard
{
	[Token(Token = "0x20001DD")]
	public enum Status
	{
		[Token(Token = "0x400067B")]
		Visible,
		[Token(Token = "0x400067C")]
		Done,
		[Token(Token = "0x400067D")]
		Canceled,
		[Token(Token = "0x400067E")]
		LostFocus
	}

	[Token(Token = "0x20001DE")]
	public enum InputFieldAppearance
	{
		[Token(Token = "0x4000680")]
		Customizable,
		[Token(Token = "0x4000681")]
		AlwaysVisible,
		[Token(Token = "0x4000682")]
		AlwaysHidden
	}

	[Token(Token = "0x20001DF")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000FD3")]
		[Address(RVA = "0x6928CB0", Offset = "0x6927CB0", VA = "0x6928CB0")]
		public static IntPtr ConvertToNative(TouchScreenKeyboard touchScreenKeyboard)
		{
			return default(IntPtr);
		}
	}

	[NonSerialized]
	[Token(Token = "0x4000678")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x17000290")]
	public static bool isSupported
	{
		[Token(Token = "0x6000FB6")]
		[Address(RVA = "0x69280F0", Offset = "0x69270F0", VA = "0x69280F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000291")]
	internal static bool disableInPlaceEditing
	{
		[Token(Token = "0x6000FB7")]
		[Address(RVA = "0x6928180", Offset = "0x6927180", VA = "0x6928180")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000292")]
	public static bool isInPlaceEditingAllowed
	{
		[Token(Token = "0x6000FB8")]
		[Address(RVA = "0x69281C0", Offset = "0x69271C0", VA = "0x69281C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000293")]
	public string text
	{
		[Token(Token = "0x6000FBC")]
		[Address(RVA = "0x6928390", Offset = "0x6927390", VA = "0x6928390")]
		[UnityEngine.Bindings.NativeName("GetText")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FBD")]
		[Address(RVA = "0x69285B0", Offset = "0x69275B0", VA = "0x69285B0")]
		[UnityEngine.Bindings.NativeName("SetText")]
		set
		{
		}
	}

	[Token(Token = "0x17000294")]
	public static extern bool hideInput
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000FBE")]
		[Address(RVA = "0x6928760", Offset = "0x6927760", VA = "0x6928760")]
		[UnityEngine.Bindings.NativeName("SetInputHidden")]
		set;
	}

	[Token(Token = "0x17000295")]
	public static extern InputFieldAppearance inputFieldAppearance
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000FBF")]
		[Address(RVA = "0x6928790", Offset = "0x6927790", VA = "0x6928790")]
		[UnityEngine.Bindings.NativeName("GetInputFieldAppearance")]
		get;
	}

	[Token(Token = "0x17000296")]
	public bool active
	{
		[Token(Token = "0x6000FC0")]
		[Address(RVA = "0x69287C0", Offset = "0x69277C0", VA = "0x69287C0")]
		[UnityEngine.Bindings.NativeName("IsActive")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000FC1")]
		[Address(RVA = "0x6928840", Offset = "0x6927840", VA = "0x6928840")]
		[UnityEngine.Bindings.NativeName("SetActive")]
		set
		{
		}
	}

	[Token(Token = "0x17000297")]
	public Status status
	{
		[Token(Token = "0x6000FC2")]
		[Address(RVA = "0x69288D0", Offset = "0x69278D0", VA = "0x69288D0")]
		[UnityEngine.Bindings.NativeName("GetKeyboardStatus")]
		get
		{
			return default(Status);
		}
	}

	[Token(Token = "0x17000298")]
	public int characterLimit
	{
		[Token(Token = "0x6000FC3")]
		[Address(RVA = "0x6928950", Offset = "0x6927950", VA = "0x6928950")]
		[UnityEngine.Bindings.NativeName("SetCharacterLimit")]
		set
		{
		}
	}

	[Token(Token = "0x17000299")]
	public bool canGetSelection
	{
		[Token(Token = "0x6000FC4")]
		[Address(RVA = "0x69289E0", Offset = "0x69279E0", VA = "0x69289E0")]
		[UnityEngine.Bindings.NativeName("CanGetSelection")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700029A")]
	public bool canSetSelection
	{
		[Token(Token = "0x6000FC5")]
		[Address(RVA = "0x6928A60", Offset = "0x6927A60", VA = "0x6928A60")]
		[UnityEngine.Bindings.NativeName("CanSetSelection")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700029B")]
	public RangeInt selection
	{
		[Token(Token = "0x6000FC6")]
		[Address(RVA = "0x6928AE0", Offset = "0x6927AE0", VA = "0x6928AE0")]
		get
		{
			return default(RangeInt);
		}
		[Token(Token = "0x6000FC7")]
		[Address(RVA = "0x6928B60", Offset = "0x6927B60", VA = "0x6928B60")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB1")]
	[Address(RVA = "0x6927B90", Offset = "0x6926B90", VA = "0x6927B90")]
	[UnityEngine.Bindings.FreeFunction("TouchScreenKeyboard_Destroy", IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr ptr);

	[Token(Token = "0x6000FB2")]
	[Address(RVA = "0x6927BC0", Offset = "0x6926BC0", VA = "0x6927BC0")]
	private void Destroy()
	{
	}

	[Token(Token = "0x6000FB3")]
	[Address(RVA = "0x6927C50", Offset = "0x6926C50", VA = "0x6927C50", Slot = "1")]
	~TouchScreenKeyboard()
	{
	}

	[Token(Token = "0x6000FB4")]
	[Address(RVA = "0x6927D50", Offset = "0x6926D50", VA = "0x6927D50")]
	public TouchScreenKeyboard(string text, TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, string textPlaceholder, int characterLimit)
	{
	}

	[Token(Token = "0x6000FB5")]
	[Address(RVA = "0x6927E70", Offset = "0x6926E70", VA = "0x6927E70")]
	[UnityEngine.Bindings.FreeFunction("TouchScreenKeyboard_InternalConstructorHelper")]
	private static IntPtr TouchScreenKeyboard_InternalConstructorHelper(ref TouchScreenKeyboard_InternalConstructorHelperArguments arguments, string text, string textPlaceholder)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FB9")]
	[Address(RVA = "0x6928220", Offset = "0x6927220", VA = "0x6928220")]
	private static extern bool IsInPlaceEditingAllowed();

	[Token(Token = "0x6000FBA")]
	[Address(RVA = "0x6928250", Offset = "0x6927250", VA = "0x6928250")]
	public static TouchScreenKeyboard Open(string text, [DefaultValue("TouchScreenKeyboardType.Default")] TouchScreenKeyboardType keyboardType, [DefaultValue("true")] bool autocorrection, [DefaultValue("false")] bool multiline, [DefaultValue("false")] bool secure, [DefaultValue("false")] bool alert, [DefaultValue("\"\"")] string textPlaceholder, [DefaultValue("0")] int characterLimit)
	{
		return null;
	}

	[Token(Token = "0x6000FBB")]
	[Address(RVA = "0x69282E0", Offset = "0x69272E0", VA = "0x69282E0")]
	[ExcludeFromDocs]
	public static TouchScreenKeyboard Open(string text, TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC8")]
	[Address(RVA = "0x6928B20", Offset = "0x6927B20", VA = "0x6928B20")]
	private static extern void GetSelection(out int start, out int length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x6928C70", Offset = "0x6927C70", VA = "0x6928C70")]
	private static extern void SetSelection(int start, int length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FCA")]
	[Address(RVA = "0x69280B0", Offset = "0x69270B0", VA = "0x69280B0")]
	private static extern IntPtr TouchScreenKeyboard_InternalConstructorHelper_Injected(ref TouchScreenKeyboard_InternalConstructorHelperArguments arguments, ref ManagedSpanWrapper text, ref ManagedSpanWrapper textPlaceholder);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FCB")]
	[Address(RVA = "0x6928570", Offset = "0x6927570", VA = "0x6928570")]
	private static extern void get_text_Injected(IntPtr _unity_self, out ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FCC")]
	[Address(RVA = "0x6928720", Offset = "0x6927720", VA = "0x6928720")]
	private static extern void set_text_Injected(IntPtr _unity_self, ref ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FCD")]
	[Address(RVA = "0x6928810", Offset = "0x6927810", VA = "0x6928810")]
	private static extern bool get_active_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FCE")]
	[Address(RVA = "0x6928890", Offset = "0x6927890", VA = "0x6928890")]
	private static extern void set_active_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FCF")]
	[Address(RVA = "0x6928920", Offset = "0x6927920", VA = "0x6928920")]
	private static extern Status get_status_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FD0")]
	[Address(RVA = "0x69289A0", Offset = "0x69279A0", VA = "0x69289A0")]
	private static extern void set_characterLimit_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FD1")]
	[Address(RVA = "0x6928A30", Offset = "0x6927A30", VA = "0x6928A30")]
	private static extern bool get_canGetSelection_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FD2")]
	[Address(RVA = "0x6928AB0", Offset = "0x6927AB0", VA = "0x6928AB0")]
	private static extern bool get_canSetSelection_Injected(IntPtr _unity_self);
}
