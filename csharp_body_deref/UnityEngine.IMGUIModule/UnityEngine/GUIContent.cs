// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GUIContent
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x172DEB0", Offset = "0x172C4B0", VA = "0x18172DEB0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000D7")]
		[Address(RVA = "0x2F873F0", Offset = "0x2F859F0", VA = "0x182F873F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	internal string textWithWhitespace
	{
		[Token(Token = "0x60000D8")]
		[Address(RVA = "0x2F87260", Offset = "0x2F85860", VA = "0x182F87260")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000D9")]
		[Address(RVA = "0x2F87370", Offset = "0x2F85970", VA = "0x182F87370")]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public Texture image
	{
		[Token(Token = "0x60000DB")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public string tooltip
	{
		[Token(Token = "0x60000DC")]
		[Address(RVA = "0x2E85240", Offset = "0x2E83840", VA = "0x182E85240")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000DD")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		set
		{
		}
	}

	[Token(Token = "0x14000001")]
	internal event Action OnTextChanged
	{
		[Token(Token = "0x60000D4")]
		[Address(RVA = "0x2F871C0", Offset = "0x2F857C0", VA = "0x182F871C0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000D5")]
		[Address(RVA = "0x2F872D0", Offset = "0x2F858D0", VA = "0x182F872D0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x2F86B50", Offset = "0x2F85150", VA = "0x182F86B50")]
	internal void SetTextWithoutNotify(string value)
	{
	}

	[Token(Token = "0x60000DE")]
	[Address(RVA = "0x2F87110", Offset = "0x2F85710", VA = "0x182F87110")]
	public GUIContent()
	{
	}

	[Token(Token = "0x60000DF")]
	[Address(RVA = "0x2F87190", Offset = "0x2F85790", VA = "0x182F87190")]
	public GUIContent(string text)
	{
	}

	[Token(Token = "0x60000E0")]
	[Address(RVA = "0x2F86FF0", Offset = "0x2F855F0", VA = "0x182F86FF0")]
	public GUIContent(string text, string tooltip)
	{
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x2F86F00", Offset = "0x2F85500", VA = "0x182F86F00")]
	public GUIContent(string text, Texture image, string tooltip)
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x2F87010", Offset = "0x2F85610", VA = "0x182F87010")]
	public GUIContent(GUIContent src)
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x2F86B90", Offset = "0x2F85190", VA = "0x182F86B90")]
	internal static GUIContent Temp(string t)
	{
		return null;
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x2F86970", Offset = "0x2F84F70", VA = "0x182F86970")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void ClearStaticCache()
	{
	}

	[Token(Token = "0x60000E5")]
	[Address(RVA = "0x2F86C70", Offset = "0x2F85270", VA = "0x182F86C70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
