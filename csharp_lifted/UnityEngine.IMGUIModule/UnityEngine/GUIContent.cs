// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GUIContent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x200000C")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUIContent.h")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
public class GUIContent
{
	[Token(Token = "0x400004D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[SerializeField]
	private string m_Text;

	[Token(Token = "0x400004E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[SerializeField]
	private Texture m_Image;

	[Token(Token = "0x400004F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[SerializeField]
	private string m_Tooltip;

	[Token(Token = "0x4000050")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[SerializeField]
	private string m_TextWithWhitespace;

	[Token(Token = "0x4000051")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	[CompilerGenerated]
	[DebuggerBrowsable(DebuggerBrowsableState.Never)]
	private Action m_OnTextChanged;

	[Token(Token = "0x4000052")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly GUIContent s_Text;

	[Token(Token = "0x4000053")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly GUIContent s_Image;

	[Token(Token = "0x4000054")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly GUIContent s_TextImage;

	[Token(Token = "0x4000055")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal static string k_ZeroWidthSpace;

	[Token(Token = "0x4000056")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static GUIContent none;

	[Token(Token = "0x17000032")]
	public string text
	{
		[Token(Token = "0x60000D6")]
		[Address(RVA = "0x6980840", Offset = "0x697F840", VA = "0x6980840")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x6981000", Offset = "0x6980000", VA = "0x6981000")]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	internal string textWithWhitespace
	{
		[Token(Token = "0x60000D8")]
		[Address(RVA = "0x698AE90", Offset = "0x6989E90", VA = "0x698AE90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000D9")]
		[Address(RVA = "0x698AE20", Offset = "0x6989E20", VA = "0x698AE20")]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public Texture image
	{
		[Token(Token = "0x60000DB")]
		[Address(RVA = "0x698AF80", Offset = "0x6989F80", VA = "0x698AF80")]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public string tooltip
	{
		[Token(Token = "0x60000DC")]
		[Address(RVA = "0x6983890", Offset = "0x6982890", VA = "0x6983890")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000DD")]
		[Address(RVA = "0x698AF90", Offset = "0x6989F90", VA = "0x698AF90")]
		set
		{
		}
	}

	[Token(Token = "0x14000001")]
	internal event Action OnTextChanged
	{
		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x698AD00", Offset = "0x6989D00", VA = "0x698AD00")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x698AD90", Offset = "0x6989D90", VA = "0x698AD90")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x698AF00", Offset = "0x6989F00", VA = "0x698AF00")]
	internal void SetTextWithoutNotify(string value)
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x698AFA0", Offset = "0x6989FA0", VA = "0x698AFA0")]
	public GUIContent()
	{
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x698B020", Offset = "0x698A020", VA = "0x698B020")]
	public GUIContent(string text)
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x698B1A0", Offset = "0x698A1A0", VA = "0x698B1A0")]
	public GUIContent(string text, string tooltip)
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x698B0E0", Offset = "0x698A0E0", VA = "0x698B0E0")]
	public GUIContent(string text, Texture image, string tooltip)
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x698B260", Offset = "0x698A260", VA = "0x698B260")]
	public GUIContent(GUIContent src)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x697CEB0", Offset = "0x697BEB0", VA = "0x697CEB0")]
	internal static GUIContent Temp(string t)
	{
		return null;
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x698B330", Offset = "0x698A330", VA = "0x698B330")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void ClearStaticCache()
	{
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x698B530", Offset = "0x698A530", VA = "0x698B530", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
