// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GUIContent
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

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x200000B")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUIContent.h")]
[UnityEngine.Scripting.RequiredByNativeCode(Optional = true, GenerateProxy = true)]
public class GUIContent
{
	[Token(Token = "0x400004B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	[SerializeField]
	private string m_Text;

	[Token(Token = "0x400004C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[SerializeField]
	private Texture m_Image;

	[Token(Token = "0x400004D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	[SerializeField]
	private string m_Tooltip;

	[Token(Token = "0x400004E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	[SerializeField]
	private string m_TextWithWhitespace;

	[Token(Token = "0x4000050")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly GUIContent s_Text;

	[Token(Token = "0x4000051")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly GUIContent s_Image;

	[Token(Token = "0x4000052")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly GUIContent s_TextImage;

	[Token(Token = "0x4000053")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal static string k_ZeroWidthSpace;

	[Token(Token = "0x4000054")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public static GUIContent none;

	[Token(Token = "0x1700002F")]
	public string text
	{
		[Token(Token = "0x60000B9")]
		[Address(RVA = "0x4E456C0", Offset = "0x4E456C0", VA = "0x4E456C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000BA")]
		[Address(RVA = "0x4E45DB0", Offset = "0x4E45DB0", VA = "0x4E45DB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	internal string textWithWhitespace
	{
		[Token(Token = "0x60000BB")]
		[Address(RVA = "0x4E4E4C0", Offset = "0x4E4E4C0", VA = "0x4E4E4C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000BC")]
		[Address(RVA = "0x4E4E450", Offset = "0x4E4E450", VA = "0x4E4E450")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public Texture image
	{
		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x4E4E5B0", Offset = "0x4E4E5B0", VA = "0x4E4E5B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	public string tooltip
	{
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x4E47CF0", Offset = "0x4E47CF0", VA = "0x4E47CF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x4E4E5C0", Offset = "0x4E4E5C0", VA = "0x4E4E5C0")]
		set
		{
		}
	}

	[Token(Token = "0x14000001")]
	internal event Action OnTextChanged
	{
		[Token(Token = "0x60000B7")]
		[Address(RVA = "0x4E4E330", Offset = "0x4E4E330", VA = "0x4E4E330")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000B8")]
		[Address(RVA = "0x4E4E3C0", Offset = "0x4E4E3C0", VA = "0x4E4E3C0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x4E4E530", Offset = "0x4E4E530", VA = "0x4E4E530")]
	internal void SetTextWithoutNotify(string value)
	{
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x4E4E5D0", Offset = "0x4E4E5D0", VA = "0x4E4E5D0")]
	public GUIContent()
	{
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x4E4E650", Offset = "0x4E4E650", VA = "0x4E4E650")]
	public GUIContent(string text)
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x4E4E710", Offset = "0x4E4E710", VA = "0x4E4E710")]
	public GUIContent(string text, Texture image, string tooltip)
	{
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x4E4E7D0", Offset = "0x4E4E7D0", VA = "0x4E4E7D0")]
	public GUIContent(GUIContent src)
	{
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x4E426C0", Offset = "0x4E426C0", VA = "0x4E426C0")]
	internal static GUIContent Temp(string t)
	{
		return null;
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x4E4E8A0", Offset = "0x4E4E8A0", VA = "0x4E4E8A0")]
	internal static void ClearStaticCache()
	{
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x4E4EAA0", Offset = "0x4E4EAA0", VA = "0x4E4EAA0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
