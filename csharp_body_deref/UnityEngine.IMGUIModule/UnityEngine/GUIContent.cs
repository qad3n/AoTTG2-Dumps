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
		[Address(RVA = "0x4B1DB00", Offset = "0x4B1DB00", VA = "0x4B1DB00")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000BA")]
		[Address(RVA = "0x4B1E1F0", Offset = "0x4B1E1F0", VA = "0x4B1E1F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	internal string textWithWhitespace
	{
		[Token(Token = "0x60000BB")]
		[Address(RVA = "0x4B26900", Offset = "0x4B26900", VA = "0x4B26900")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000BC")]
		[Address(RVA = "0x4B26890", Offset = "0x4B26890", VA = "0x4B26890")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public Texture image
	{
		[Token(Token = "0x60000BE")]
		[Address(RVA = "0x4B269F0", Offset = "0x4B269F0", VA = "0x4B269F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	public string tooltip
	{
		[Token(Token = "0x60000BF")]
		[Address(RVA = "0x4B20130", Offset = "0x4B20130", VA = "0x4B20130")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000C0")]
		[Address(RVA = "0x4B26A00", Offset = "0x4B26A00", VA = "0x4B26A00")]
		set
		{
		}
	}

	[Token(Token = "0x14000001")]
	internal event Action OnTextChanged
	{
		[Token(Token = "0x60000B7")]
		[Address(RVA = "0x4B26770", Offset = "0x4B26770", VA = "0x4B26770")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000B8")]
		[Address(RVA = "0x4B26800", Offset = "0x4B26800", VA = "0x4B26800")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x4B26970", Offset = "0x4B26970", VA = "0x4B26970")]
	internal void SetTextWithoutNotify(string value)
	{
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x4B26A10", Offset = "0x4B26A10", VA = "0x4B26A10")]
	public GUIContent()
	{
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x4B26A90", Offset = "0x4B26A90", VA = "0x4B26A90")]
	public GUIContent(string text)
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x4B26B50", Offset = "0x4B26B50", VA = "0x4B26B50")]
	public GUIContent(string text, Texture image, string tooltip)
	{
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x4B26C10", Offset = "0x4B26C10", VA = "0x4B26C10")]
	public GUIContent(GUIContent src)
	{
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x4B1AB00", Offset = "0x4B1AB00", VA = "0x4B1AB00")]
	internal static GUIContent Temp(string t)
	{
		return null;
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x4B26CE0", Offset = "0x4B26CE0", VA = "0x4B26CE0")]
	internal static void ClearStaticCache()
	{
	}

	[Token(Token = "0x60000C7")]
	[Address(RVA = "0x4B26EE0", Offset = "0x4B26EE0", VA = "0x4B26EE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
