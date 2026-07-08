using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Internal;

namespace UnityEngine;

[Token(Token = "0x200019C")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/KeyboardOnScreen.h")]
[UnityEngine.Bindings.NativeConditional("ENABLE_ONSCREEN_KEYBOARD")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/TouchScreenKeyboard/TouchScreenKeyboard.bindings.h")]
public class TouchScreenKeyboard
{
	[Token(Token = "0x200019D")]
	public enum Status
	{
		[Token(Token = "0x40005D9")]
		Visible,
		[Token(Token = "0x40005DA")]
		Done,
		[Token(Token = "0x40005DB")]
		Canceled,
		[Token(Token = "0x40005DC")]
		LostFocus
	}

	[NonSerialized]
	[Token(Token = "0x40005D6")]
	[FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x17000206")]
	public static bool isSupported
	{
		[Token(Token = "0x6000BCA")]
		[Address(RVA = "0x4ADE6C0", Offset = "0x4ADE6C0", VA = "0x4ADE6C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000207")]
	internal static bool disableInPlaceEditing
	{
		[Token(Token = "0x6000BCB")]
		[Address(RVA = "0x4ADE730", Offset = "0x4ADE730", VA = "0x4ADE730")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000208")]
	public static bool isInPlaceEditingAllowed
	{
		[Token(Token = "0x6000BCC")]
		[Address(RVA = "0x4ADE770", Offset = "0x4ADE770", VA = "0x4ADE770")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000209")]
	public extern string text
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BCF")]
		[Address(RVA = "0x4ADE8E0", Offset = "0x4ADE8E0", VA = "0x4ADE8E0")]
		[UnityEngine.Bindings.NativeName("GetText")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BD0")]
		[Address(RVA = "0x4ADE910", Offset = "0x4ADE910", VA = "0x4ADE910")]
		[UnityEngine.Bindings.NativeName("SetText")]
		set;
	}

	[Token(Token = "0x1700020A")]
	public static extern bool hideInput
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BD1")]
		[Address(RVA = "0x4ADE950", Offset = "0x4ADE950", VA = "0x4ADE950")]
		[UnityEngine.Bindings.NativeName("SetInputHidden")]
		set;
	}

	[Token(Token = "0x1700020B")]
	public extern bool active
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BD2")]
		[Address(RVA = "0x4ADE980", Offset = "0x4ADE980", VA = "0x4ADE980")]
		[UnityEngine.Bindings.NativeName("IsActive")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BD3")]
		[Address(RVA = "0x4ADE9B0", Offset = "0x4ADE9B0", VA = "0x4ADE9B0")]
		[UnityEngine.Bindings.NativeName("SetActive")]
		set;
	}

	[Token(Token = "0x1700020C")]
	public extern Status status
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BD4")]
		[Address(RVA = "0x4ADE9F0", Offset = "0x4ADE9F0", VA = "0x4ADE9F0")]
		[UnityEngine.Bindings.NativeName("GetKeyboardStatus")]
		get;
	}

	[Token(Token = "0x1700020D")]
	public extern int characterLimit
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BD5")]
		[Address(RVA = "0x4ADEA20", Offset = "0x4ADEA20", VA = "0x4ADEA20")]
		[UnityEngine.Bindings.NativeName("SetCharacterLimit")]
		set;
	}

	[Token(Token = "0x1700020E")]
	public extern bool canGetSelection
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BD6")]
		[Address(RVA = "0x4ADEA60", Offset = "0x4ADEA60", VA = "0x4ADEA60")]
		[UnityEngine.Bindings.NativeName("CanGetSelection")]
		get;
	}

	[Token(Token = "0x1700020F")]
	public extern bool canSetSelection
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BD7")]
		[Address(RVA = "0x4ADEA90", Offset = "0x4ADEA90", VA = "0x4ADEA90")]
		[UnityEngine.Bindings.NativeName("CanSetSelection")]
		get;
	}

	[Token(Token = "0x17000210")]
	public RangeInt selection
	{
		[Token(Token = "0x6000BD8")]
		[Address(RVA = "0x4ADEAC0", Offset = "0x4ADEAC0", VA = "0x4ADEAC0")]
		get
		{
			return default(RangeInt);
		}
		[Token(Token = "0x6000BD9")]
		[Address(RVA = "0x4ADEB50", Offset = "0x4ADEB50", VA = "0x4ADEB50")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x4ADE390", Offset = "0x4ADE390", VA = "0x4ADE390")]
	[UnityEngine.Bindings.FreeFunction("TouchScreenKeyboard_Destroy", IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr ptr);

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x4ADE3C0", Offset = "0x4ADE3C0", VA = "0x4ADE3C0")]
	private void Destroy()
	{
	}

	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x4ADE450", Offset = "0x4ADE450", VA = "0x4ADE450", Slot = "1")]
	~TouchScreenKeyboard()
	{
	}

	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x4ADE550", Offset = "0x4ADE550", VA = "0x4ADE550")]
	public TouchScreenKeyboard(string text, TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, string textPlaceholder, int characterLimit)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x4ADE680", Offset = "0x4ADE680", VA = "0x4ADE680")]
	[UnityEngine.Bindings.FreeFunction("TouchScreenKeyboard_InternalConstructorHelper")]
	private static extern IntPtr TouchScreenKeyboard_InternalConstructorHelper(ref TouchScreenKeyboard_InternalConstructorHelperArguments arguments, string text, string textPlaceholder);

	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x4ADE7A0", Offset = "0x4ADE7A0", VA = "0x4ADE7A0")]
	public static TouchScreenKeyboard Open(string text, [DefaultValue("TouchScreenKeyboardType.Default")] TouchScreenKeyboardType keyboardType, [DefaultValue("true")] bool autocorrection, [DefaultValue("false")] bool multiline, [DefaultValue("false")] bool secure, [DefaultValue("false")] bool alert, [DefaultValue("\"\"")] string textPlaceholder, [DefaultValue("0")] int characterLimit)
	{
		return null;
	}

	[Token(Token = "0x6000BCE")]
	[Address(RVA = "0x4ADE830", Offset = "0x4ADE830", VA = "0x4ADE830")]
	[ExcludeFromDocs]
	public static TouchScreenKeyboard Open(string text, TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x4ADEB10", Offset = "0x4ADEB10", VA = "0x4ADEB10")]
	private static extern void GetSelection(out int start, out int length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x4ADEC30", Offset = "0x4ADEC30", VA = "0x4ADEC30")]
	private static extern void SetSelection(int start, int length);
}
