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
[Token(Token = "0x20002AE")]
[ComVisible(true)]
public sealed class SecurityElement
{
	[Token(Token = "0x20002AF")]
	internal class SecurityAttribute
	{
		[Token(Token = "0x4000B91")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private string _name;

		[Token(Token = "0x4000B92")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private string _value;

		[Token(Token = "0x17000266")]
		public string Name
		{
			[Token(Token = "0x60017F6")]
			[Address(RVA = "0x532A9F0", Offset = "0x53299F0", VA = "0x532A9F0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000267")]
		public string Value
		{
			[Token(Token = "0x60017F7")]
			[Address(RVA = "0x532AA00", Offset = "0x5329A00", VA = "0x532AA00")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60017F5")]
		[Address(RVA = "0x5329720", Offset = "0x5328720", VA = "0x5329720")]
		public SecurityAttribute(string name, string value)
		{
		}
	}

	[Token(Token = "0x4000B88")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string text;

	[Token(Token = "0x4000B89")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string tag;

	[Token(Token = "0x4000B8A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private ArrayList attributes;

	[Token(Token = "0x4000B8B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private ArrayList children;

	[Token(Token = "0x4000B8C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly char[] invalid_tag_chars;

	[Token(Token = "0x4000B8D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly char[] invalid_text_chars;

	[Token(Token = "0x4000B8E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly char[] invalid_attr_name_chars;

	[Token(Token = "0x4000B8F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly char[] invalid_attr_value_chars;

	[Token(Token = "0x4000B90")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly char[] invalid_chars;

	[Token(Token = "0x17000262")]
	public ArrayList Children
	{
		[Token(Token = "0x60017E2")]
		[Address(RVA = "0x53291E0", Offset = "0x53281E0", VA = "0x53291E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000263")]
	public string Tag
	{
		[Token(Token = "0x60017E3")]
		[Address(RVA = "0x53291F0", Offset = "0x53281F0", VA = "0x53291F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000264")]
	public string Text
	{
		[Token(Token = "0x60017E4")]
		[Address(RVA = "0x5329080", Offset = "0x5328080", VA = "0x5329080")]
		set
		{
		}
	}

	[Token(Token = "0x17000265")]
	internal string m_strText
	{
		[Token(Token = "0x60017F2")]
		[Address(RVA = "0x532A5A0", Offset = "0x53295A0", VA = "0x532A5A0")]
		set
		{
		}
	}

	[Token(Token = "0x60017E0")]
	[Address(RVA = "0x5326ED0", Offset = "0x5325ED0", VA = "0x5326ED0")]
	public SecurityElement(string tag)
	{
	}

	[Token(Token = "0x60017E1")]
	[Address(RVA = "0x5328E80", Offset = "0x5327E80", VA = "0x5328E80")]
	public SecurityElement(string tag, string text)
	{
	}

	[Token(Token = "0x60017E5")]
	[Address(RVA = "0x5326EE0", Offset = "0x5325EE0", VA = "0x5326EE0")]
	public void AddAttribute(string name, string value)
	{
	}

	[Token(Token = "0x60017E6")]
	[Address(RVA = "0x5327090", Offset = "0x5326090", VA = "0x5327090")]
	public void AddChild(SecurityElement child)
	{
	}

	[Token(Token = "0x60017E7")]
	[Address(RVA = "0x5329950", Offset = "0x5328950", VA = "0x5329950")]
	public static string Escape(string str)
	{
		return null;
	}

	[Token(Token = "0x60017E8")]
	[Address(RVA = "0x5329270", Offset = "0x5328270", VA = "0x5329270")]
	private static string Unescape(string str)
	{
		return null;
	}

	[Token(Token = "0x60017E9")]
	[Address(RVA = "0x5329B50", Offset = "0x5328B50", VA = "0x5329B50")]
	public static bool IsValidAttributeName(string name)
	{
		return default(bool);
	}

	[Token(Token = "0x60017EA")]
	[Address(RVA = "0x5329BC0", Offset = "0x5328BC0", VA = "0x5329BC0")]
	public static bool IsValidAttributeValue(string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60017EB")]
	[Address(RVA = "0x5329010", Offset = "0x5328010", VA = "0x5329010")]
	public static bool IsValidTag(string tag)
	{
		return default(bool);
	}

	[Token(Token = "0x60017EC")]
	[Address(RVA = "0x5329200", Offset = "0x5328200", VA = "0x5329200")]
	public static bool IsValidText(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x60017ED")]
	[Address(RVA = "0x5329C30", Offset = "0x5328C30", VA = "0x5329C30")]
	public SecurityElement SearchForChildByTag(string tag)
	{
		return null;
	}

	[Token(Token = "0x60017EE")]
	[Address(RVA = "0x5329D40", Offset = "0x5328D40", VA = "0x5329D40")]
	public string SearchForTextOfTag(string tag)
	{
		return null;
	}

	[Token(Token = "0x60017EF")]
	[Address(RVA = "0x5329E60", Offset = "0x5328E60", VA = "0x5329E60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60017F0")]
	[Address(RVA = "0x5329EE0", Offset = "0x5328EE0", VA = "0x5329EE0")]
	private void ToXml(ref StringBuilder s, int level)
	{
	}

	[Token(Token = "0x60017F1")]
	[Address(RVA = "0x5329410", Offset = "0x5328410", VA = "0x5329410")]
	internal SecurityAttribute GetAttribute(string name)
	{
		return null;
	}

	[Token(Token = "0x60017F3")]
	[Address(RVA = "0x532A5B0", Offset = "0x53295B0", VA = "0x532A5B0")]
	internal string SearchForTextOfLocalName(string strLocalName)
	{
		return null;
	}
}
