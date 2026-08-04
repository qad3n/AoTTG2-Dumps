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

[Token(Token = "0x200019F")]
[UnityEngine.Bindings.NativeHeader("Runtime/Input/KeyboardOnScreen.h")]
[UnityEngine.Bindings.NativeConditional("ENABLE_ONSCREEN_KEYBOARD")]
[UnityEngine.Bindings.NativeHeader("Runtime/Export/TouchScreenKeyboard/TouchScreenKeyboard.bindings.h")]
public class TouchScreenKeyboard
{
	[Token(Token = "0x20001A0")]
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

	[Token(Token = "0x17000207")]
	public static bool isSupported
	{
		[Token(Token = "0x6000BCC")]
		[Address(RVA = "0x4E05FF0", Offset = "0x4E05FF0", VA = "0x4E05FF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000208")]
	internal static bool disableInPlaceEditing
	{
		[Token(Token = "0x6000BCD")]
		[Address(RVA = "0x4E06060", Offset = "0x4E06060", VA = "0x4E06060")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000209")]
	public static bool isInPlaceEditingAllowed
	{
		[Token(Token = "0x6000BCE")]
		[Address(RVA = "0x4E060A0", Offset = "0x4E060A0", VA = "0x4E060A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700020A")]
	public extern string text
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BD1")]
		[Address(RVA = "0x4E06210", Offset = "0x4E06210", VA = "0x4E06210")]
		[UnityEngine.Bindings.NativeName("GetText")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BD2")]
		[Address(RVA = "0x4E06240", Offset = "0x4E06240", VA = "0x4E06240")]
		[UnityEngine.Bindings.NativeName("SetText")]
		set;
	}

	[Token(Token = "0x1700020B")]
	public static extern bool hideInput
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BD3")]
		[Address(RVA = "0x4E06280", Offset = "0x4E06280", VA = "0x4E06280")]
		[UnityEngine.Bindings.NativeName("SetInputHidden")]
		set;
	}

	[Token(Token = "0x1700020C")]
	public extern bool active
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BD4")]
		[Address(RVA = "0x4E062B0", Offset = "0x4E062B0", VA = "0x4E062B0")]
		[UnityEngine.Bindings.NativeName("IsActive")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BD5")]
		[Address(RVA = "0x4E062E0", Offset = "0x4E062E0", VA = "0x4E062E0")]
		[UnityEngine.Bindings.NativeName("SetActive")]
		set;
	}

	[Token(Token = "0x1700020D")]
	public extern Status status
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BD6")]
		[Address(RVA = "0x4E06320", Offset = "0x4E06320", VA = "0x4E06320")]
		[UnityEngine.Bindings.NativeName("GetKeyboardStatus")]
		get;
	}

	[Token(Token = "0x1700020E")]
	public extern int characterLimit
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BD7")]
		[Address(RVA = "0x4E06350", Offset = "0x4E06350", VA = "0x4E06350")]
		[UnityEngine.Bindings.NativeName("SetCharacterLimit")]
		set;
	}

	[Token(Token = "0x1700020F")]
	public extern bool canGetSelection
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BD8")]
		[Address(RVA = "0x4E06390", Offset = "0x4E06390", VA = "0x4E06390")]
		[UnityEngine.Bindings.NativeName("CanGetSelection")]
		get;
	}

	[Token(Token = "0x17000210")]
	public extern bool canSetSelection
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000BD9")]
		[Address(RVA = "0x4E063C0", Offset = "0x4E063C0", VA = "0x4E063C0")]
		[UnityEngine.Bindings.NativeName("CanSetSelection")]
		get;
	}

	[Token(Token = "0x17000211")]
	public RangeInt selection
	{
		[Token(Token = "0x6000BDA")]
		[Address(RVA = "0x4E063F0", Offset = "0x4E063F0", VA = "0x4E063F0")]
		get
		{
			return default(RangeInt);
		}
		[Token(Token = "0x6000BDB")]
		[Address(RVA = "0x4E06480", Offset = "0x4E06480", VA = "0x4E06480")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BC7")]
	[Address(RVA = "0x4E05CC0", Offset = "0x4E05CC0", VA = "0x4E05CC0")]
	[UnityEngine.Bindings.FreeFunction("TouchScreenKeyboard_Destroy", IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr ptr);

	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x4E05CF0", Offset = "0x4E05CF0", VA = "0x4E05CF0")]
	private void Destroy()
	{
	}

	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x4E05D80", Offset = "0x4E05D80", VA = "0x4E05D80", Slot = "1")]
	~TouchScreenKeyboard()
	{
	}

	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x4E05E80", Offset = "0x4E05E80", VA = "0x4E05E80")]
	public TouchScreenKeyboard(string text, TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure, bool alert, string textPlaceholder, int characterLimit)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x4E05FB0", Offset = "0x4E05FB0", VA = "0x4E05FB0")]
	[UnityEngine.Bindings.FreeFunction("TouchScreenKeyboard_InternalConstructorHelper")]
	private static extern IntPtr TouchScreenKeyboard_InternalConstructorHelper(ref TouchScreenKeyboard_InternalConstructorHelperArguments arguments, string text, string textPlaceholder);

	[Token(Token = "0x6000BCF")]
	[Address(RVA = "0x4E060D0", Offset = "0x4E060D0", VA = "0x4E060D0")]
	public static TouchScreenKeyboard Open(string text, [DefaultValue("TouchScreenKeyboardType.Default")] TouchScreenKeyboardType keyboardType, [DefaultValue("true")] bool autocorrection, [DefaultValue("false")] bool multiline, [DefaultValue("false")] bool secure, [DefaultValue("false")] bool alert, [DefaultValue("\"\"")] string textPlaceholder, [DefaultValue("0")] int characterLimit)
	{
		return null;
	}

	[Token(Token = "0x6000BD0")]
	[Address(RVA = "0x4E06160", Offset = "0x4E06160", VA = "0x4E06160")]
	[ExcludeFromDocs]
	public static TouchScreenKeyboard Open(string text, TouchScreenKeyboardType keyboardType, bool autocorrection, bool multiline, bool secure)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BDC")]
	[Address(RVA = "0x4E06440", Offset = "0x4E06440", VA = "0x4E06440")]
	private static extern void GetSelection(out int start, out int length);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x4E06560", Offset = "0x4E06560", VA = "0x4E06560")]
	private static extern void SetSelection(int start, int length);
}
