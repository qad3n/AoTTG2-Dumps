using System.Collections;
using System.Runtime.InteropServices;
using System.Text;
using Il2CppDummyDll;

namespace System.Security;

[Serializable]
[Token(Token = "0x20002A6")]
[ComVisible(true)]
public sealed class SecurityElement
{
	[Token(Token = "0x20002A7")]
	internal class SecurityAttribute
	{
		[Token(Token = "0x4000C24")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private string _name;

		[Token(Token = "0x4000C25")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private string _value;

		[Token(Token = "0x17000265")]
		public string Name
		{
			[Token(Token = "0x60017B1")]
			[Address(RVA = "0x4E3B080", Offset = "0x4E3B080", VA = "0x4E3B080")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000266")]
		public string Value
		{
			[Token(Token = "0x60017B2")]
			[Address(RVA = "0x4E3B090", Offset = "0x4E3B090", VA = "0x4E3B090")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017B0")]
		[Address(RVA = "0x4E39D50", Offset = "0x4E39D50", VA = "0x4E39D50")]
		public SecurityAttribute(string name, string value)
		{
		}
	}

	[Token(Token = "0x4000C1B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string text;

	[Token(Token = "0x4000C1C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string tag;

	[Token(Token = "0x4000C1D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private ArrayList attributes;

	[Token(Token = "0x4000C1E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private ArrayList children;

	[Token(Token = "0x4000C1F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly char[] invalid_tag_chars;

	[Token(Token = "0x4000C20")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly char[] invalid_text_chars;

	[Token(Token = "0x4000C21")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly char[] invalid_attr_name_chars;

	[Token(Token = "0x4000C22")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly char[] invalid_attr_value_chars;

	[Token(Token = "0x4000C23")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly char[] invalid_chars;

	[Token(Token = "0x17000261")]
	public ArrayList Children
	{
		[Token(Token = "0x600179D")]
		[Address(RVA = "0x4E39770", Offset = "0x4E39770", VA = "0x4E39770")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000262")]
	public string Tag
	{
		[Token(Token = "0x600179E")]
		[Address(RVA = "0x4E39780", Offset = "0x4E39780", VA = "0x4E39780")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000263")]
	public string Text
	{
		[Token(Token = "0x600179F")]
		[Address(RVA = "0x4E39610", Offset = "0x4E39610", VA = "0x4E39610")]
		set
		{
		}
	}

	[Token(Token = "0x17000264")]
	internal string m_strText
	{
		[Token(Token = "0x60017AD")]
		[Address(RVA = "0x4E3AC30", Offset = "0x4E3AC30", VA = "0x4E3AC30")]
		set
		{
		}
	}

	[Token(Token = "0x600179B")]
	[Address(RVA = "0x4E37360", Offset = "0x4E37360", VA = "0x4E37360")]
	public SecurityElement(string tag)
	{
	}

	[Token(Token = "0x600179C")]
	[Address(RVA = "0x4E39410", Offset = "0x4E39410", VA = "0x4E39410")]
	public SecurityElement(string tag, string text)
	{
	}

	[Token(Token = "0x60017A0")]
	[Address(RVA = "0x4E37370", Offset = "0x4E37370", VA = "0x4E37370")]
	public void AddAttribute(string name, string value)
	{
	}

	[Token(Token = "0x60017A1")]
	[Address(RVA = "0x4E37520", Offset = "0x4E37520", VA = "0x4E37520")]
	public void AddChild(SecurityElement child)
	{
	}

	[Token(Token = "0x60017A2")]
	[Address(RVA = "0x4E39F90", Offset = "0x4E39F90", VA = "0x4E39F90")]
	public static string Escape(string str)
	{
		return null;
	}

	[Token(Token = "0x60017A3")]
	[Address(RVA = "0x4E39800", Offset = "0x4E39800", VA = "0x4E39800")]
	private static string Unescape(string str)
	{
		return null;
	}

	[Token(Token = "0x60017A4")]
	[Address(RVA = "0x4E3A190", Offset = "0x4E3A190", VA = "0x4E3A190")]
	public static bool IsValidAttributeName(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60017A5")]
	[Address(RVA = "0x4E3A200", Offset = "0x4E3A200", VA = "0x4E3A200")]
	public static bool IsValidAttributeValue(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60017A6")]
	[Address(RVA = "0x4E395A0", Offset = "0x4E395A0", VA = "0x4E395A0")]
	public static bool IsValidTag(string tag)
	{
		return default(bool);
	}

	[Token(Token = "0x60017A7")]
	[Address(RVA = "0x4E39790", Offset = "0x4E39790", VA = "0x4E39790")]
	public static bool IsValidText(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x60017A8")]
	[Address(RVA = "0x4E3A270", Offset = "0x4E3A270", VA = "0x4E3A270")]
	public SecurityElement SearchForChildByTag(string tag)
	{
		return null;
	}

	[Token(Token = "0x60017A9")]
	[Address(RVA = "0x4E3A390", Offset = "0x4E3A390", VA = "0x4E3A390")]
	public string SearchForTextOfTag(string tag)
	{
		return null;
	}

	[Token(Token = "0x60017AA")]
	[Address(RVA = "0x4E3A4B0", Offset = "0x4E3A4B0", VA = "0x4E3A4B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60017AB")]
	[Address(RVA = "0x4E3A530", Offset = "0x4E3A530", VA = "0x4E3A530")]
	private void ToXml(ref StringBuilder s, int level)
	{
	}

	[Token(Token = "0x60017AC")]
	[Address(RVA = "0x4E399A0", Offset = "0x4E399A0", VA = "0x4E399A0")]
	internal SecurityAttribute GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x60017AE")]
	[Address(RVA = "0x4E3AC40", Offset = "0x4E3AC40", VA = "0x4E3AC40")]
	internal string SearchForTextOfLocalName(string strLocalName)
	{
		return null;
	}
}
