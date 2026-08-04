// ==================== AoTTG2 cross-reference ====================
// Type: System.Security.SecurityElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
			[Address(RVA = "0x3B20BA0", Offset = "0x3B20BA0", VA = "0x3B20BA0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000266")]
		public string Value
		{
			[Token(Token = "0x60017B2")]
			[Address(RVA = "0x3B20BB0", Offset = "0x3B20BB0", VA = "0x3B20BB0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017B0")]
		[Address(RVA = "0x3B1F870", Offset = "0x3B1F870", VA = "0x3B1F870")]
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
		[Address(RVA = "0x3B1F290", Offset = "0x3B1F290", VA = "0x3B1F290")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000262")]
	public string Tag
	{
		[Token(Token = "0x600179E")]
		[Address(RVA = "0x3B1F2A0", Offset = "0x3B1F2A0", VA = "0x3B1F2A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000263")]
	public string Text
	{
		[Token(Token = "0x600179F")]
		[Address(RVA = "0x3B1F130", Offset = "0x3B1F130", VA = "0x3B1F130")]
		set
		{
		}
	}

	[Token(Token = "0x17000264")]
	internal string m_strText
	{
		[Token(Token = "0x60017AD")]
		[Address(RVA = "0x3B20750", Offset = "0x3B20750", VA = "0x3B20750")]
		set
		{
		}
	}

	[Token(Token = "0x600179B")]
	[Address(RVA = "0x3B1CE80", Offset = "0x3B1CE80", VA = "0x3B1CE80")]
	public SecurityElement(string tag)
	{
	}

	[Token(Token = "0x600179C")]
	[Address(RVA = "0x3B1EF30", Offset = "0x3B1EF30", VA = "0x3B1EF30")]
	public SecurityElement(string tag, string text)
	{
	}

	[Token(Token = "0x60017A0")]
	[Address(RVA = "0x3B1CE90", Offset = "0x3B1CE90", VA = "0x3B1CE90")]
	public void AddAttribute(string name, string value)
	{
	}

	[Token(Token = "0x60017A1")]
	[Address(RVA = "0x3B1D040", Offset = "0x3B1D040", VA = "0x3B1D040")]
	public void AddChild(SecurityElement child)
	{
	}

	[Token(Token = "0x60017A2")]
	[Address(RVA = "0x3B1FAB0", Offset = "0x3B1FAB0", VA = "0x3B1FAB0")]
	public static string Escape(string str)
	{
		return null;
	}

	[Token(Token = "0x60017A3")]
	[Address(RVA = "0x3B1F320", Offset = "0x3B1F320", VA = "0x3B1F320")]
	private static string Unescape(string str)
	{
		return null;
	}

	[Token(Token = "0x60017A4")]
	[Address(RVA = "0x3B1FCB0", Offset = "0x3B1FCB0", VA = "0x3B1FCB0")]
	public static bool IsValidAttributeName(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60017A5")]
	[Address(RVA = "0x3B1FD20", Offset = "0x3B1FD20", VA = "0x3B1FD20")]
	public static bool IsValidAttributeValue(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60017A6")]
	[Address(RVA = "0x3B1F0C0", Offset = "0x3B1F0C0", VA = "0x3B1F0C0")]
	public static bool IsValidTag(string tag)
	{
		return default(bool);
	}

	[Token(Token = "0x60017A7")]
	[Address(RVA = "0x3B1F2B0", Offset = "0x3B1F2B0", VA = "0x3B1F2B0")]
	public static bool IsValidText(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x60017A8")]
	[Address(RVA = "0x3B1FD90", Offset = "0x3B1FD90", VA = "0x3B1FD90")]
	public SecurityElement SearchForChildByTag(string tag)
	{
		return null;
	}

	[Token(Token = "0x60017A9")]
	[Address(RVA = "0x3B1FEB0", Offset = "0x3B1FEB0", VA = "0x3B1FEB0")]
	public string SearchForTextOfTag(string tag)
	{
		return null;
	}

	[Token(Token = "0x60017AA")]
	[Address(RVA = "0x3B1FFD0", Offset = "0x3B1FFD0", VA = "0x3B1FFD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60017AB")]
	[Address(RVA = "0x3B20050", Offset = "0x3B20050", VA = "0x3B20050")]
	private void ToXml(ref StringBuilder s, int level)
	{
	}

	[Token(Token = "0x60017AC")]
	[Address(RVA = "0x3B1F4C0", Offset = "0x3B1F4C0", VA = "0x3B1F4C0")]
	internal SecurityAttribute GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x60017AE")]
	[Address(RVA = "0x3B20760", Offset = "0x3B20760", VA = "0x3B20760")]
	internal string SearchForTextOfLocalName(string strLocalName)
	{
		return null;
	}
}
