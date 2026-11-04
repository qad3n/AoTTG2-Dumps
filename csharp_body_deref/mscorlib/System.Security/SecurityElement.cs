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
[Token(Token = "0x20002D5")]
[ComVisible(true)]
public sealed class SecurityElement
{
	[Token(Token = "0x20002D6")]
	internal class SecurityAttribute
	{
		[Token(Token = "0x4000C31")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private string _name;

		[Token(Token = "0x4000C32")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private string _value;

		[Token(Token = "0x17000267")]
		public string Name
		{
			[Token(Token = "0x6001819")]
			[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000268")]
		public string Value
		{
			[Token(Token = "0x600181A")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6001818")]
		[Address(RVA = "0x1998A50", Offset = "0x1997050", VA = "0x181998A50")]
		public SecurityAttribute(string name, string value)
		{
		}
	}

	[Token(Token = "0x4000C28")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string text;

	[Token(Token = "0x4000C29")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string tag;

	[Token(Token = "0x4000C2A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private ArrayList attributes;

	[Token(Token = "0x4000C2B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private ArrayList children;

	[Token(Token = "0x4000C2C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly char[] invalid_tag_chars;

	[Token(Token = "0x4000C2D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly char[] invalid_text_chars;

	[Token(Token = "0x4000C2E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly char[] invalid_attr_name_chars;

	[Token(Token = "0x4000C2F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly char[] invalid_attr_value_chars;

	[Token(Token = "0x4000C30")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly char[] invalid_chars;

	[Token(Token = "0x17000263")]
	public ArrayList Children
	{
		[Token(Token = "0x6001805")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000264")]
	public string Tag
	{
		[Token(Token = "0x6001806")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000265")]
	public string Text
	{
		[Token(Token = "0x6001807")]
		[Address(RVA = "0x199B160", Offset = "0x1999760", VA = "0x18199B160")]
		set
		{
		}
	}

	[Token(Token = "0x17000266")]
	internal string m_strText
	{
		[Token(Token = "0x6001815")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		set
		{
		}
	}

	[Token(Token = "0x6001803")]
	[Address(RVA = "0x199AE80", Offset = "0x1999480", VA = "0x18199AE80")]
	public SecurityElement(string tag)
	{
	}

	[Token(Token = "0x6001804")]
	[Address(RVA = "0x199AE90", Offset = "0x1999490", VA = "0x18199AE90")]
	public SecurityElement(string tag, string text)
	{
	}

	[Token(Token = "0x6001808")]
	[Address(RVA = "0x1999700", Offset = "0x1997D00", VA = "0x181999700")]
	public void AddAttribute(string name, string value)
	{
	}

	[Token(Token = "0x6001809")]
	[Address(RVA = "0x19998F0", Offset = "0x1997EF0", VA = "0x1819998F0")]
	public void AddChild(SecurityElement child)
	{
	}

	[Token(Token = "0x600180A")]
	[Address(RVA = "0x19999E0", Offset = "0x1997FE0", VA = "0x1819999E0")]
	public static string Escape(string str)
	{
		return null;
	}

	[Token(Token = "0x600180B")]
	[Address(RVA = "0x199AAF0", Offset = "0x19990F0", VA = "0x18199AAF0")]
	private static string Unescape(string str)
	{
		return null;
	}

	[Token(Token = "0x600180C")]
	[Address(RVA = "0x1999DC0", Offset = "0x19983C0", VA = "0x181999DC0")]
	public static bool IsValidAttributeName(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x600180D")]
	[Address(RVA = "0x1999E40", Offset = "0x1998440", VA = "0x181999E40")]
	public static bool IsValidAttributeValue(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x600180E")]
	[Address(RVA = "0x1999EC0", Offset = "0x19984C0", VA = "0x181999EC0")]
	public static bool IsValidTag(string tag)
	{
		return default(bool);
	}

	[Token(Token = "0x600180F")]
	[Address(RVA = "0x1999F40", Offset = "0x1998540", VA = "0x181999F40")]
	public static bool IsValidText(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x6001810")]
	[Address(RVA = "0x1999FC0", Offset = "0x19985C0", VA = "0x181999FC0")]
	public SecurityElement SearchForChildByTag(string tag)
	{
		return null;
	}

	[Token(Token = "0x6001811")]
	[Address(RVA = "0x199A330", Offset = "0x1998930", VA = "0x18199A330")]
	public string SearchForTextOfTag(string tag)
	{
		return null;
	}

	[Token(Token = "0x6001812")]
	[Address(RVA = "0x199A4C0", Offset = "0x1998AC0", VA = "0x18199A4C0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6001813")]
	[Address(RVA = "0x199A550", Offset = "0x1998B50", VA = "0x18199A550")]
	private void ToXml(ref StringBuilder s, int level)
	{
	}

	[Token(Token = "0x6001814")]
	[Address(RVA = "0x1999C00", Offset = "0x1998200", VA = "0x181999C00")]
	internal SecurityAttribute GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x6001816")]
	[Address(RVA = "0x199A130", Offset = "0x1998730", VA = "0x18199A130")]
	internal string SearchForTextOfLocalName(string strLocalName)
	{
		return null;
	}
}
