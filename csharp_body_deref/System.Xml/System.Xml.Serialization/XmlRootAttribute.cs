using System.Text;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x200012E")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum | AttributeTargets.Interface | AttributeTargets.ReturnValue)]
public class XmlRootAttribute : Attribute
{
	[Token(Token = "0x4000673")]
	[FieldOffset(Offset = "0x10")]
	private string dataType;

	[Token(Token = "0x4000674")]
	[FieldOffset(Offset = "0x18")]
	private string elementName;

	[Token(Token = "0x4000675")]
	[FieldOffset(Offset = "0x20")]
	private bool isNullable;

	[Token(Token = "0x4000676")]
	[FieldOffset(Offset = "0x28")]
	private string ns;

	[Token(Token = "0x17000383")]
	public string DataType
	{
		[Token(Token = "0x6000D8C")]
		[Address(RVA = "0x44E0EC0", Offset = "0x44E0EC0", VA = "0x44E0EC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D8D")]
		[Address(RVA = "0x44E0EF0", Offset = "0x44E0EF0", VA = "0x44E0EF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000384")]
	public string ElementName
	{
		[Token(Token = "0x6000D8E")]
		[Address(RVA = "0x44DBED0", Offset = "0x44DBED0", VA = "0x44DBED0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D8F")]
		[Address(RVA = "0x44E0F00", Offset = "0x44E0F00", VA = "0x44E0F00")]
		set
		{
		}
	}

	[Token(Token = "0x17000385")]
	public bool IsNullable
	{
		[Token(Token = "0x6000D90")]
		[Address(RVA = "0x44E0F10", Offset = "0x44E0F10", VA = "0x44E0F10")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000D91")]
		[Address(RVA = "0x44E0F20", Offset = "0x44E0F20", VA = "0x44E0F20")]
		set
		{
		}
	}

	[Token(Token = "0x17000386")]
	public string Namespace
	{
		[Token(Token = "0x6000D92")]
		[Address(RVA = "0x44E0F30", Offset = "0x44E0F30", VA = "0x44E0F30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D93")]
		[Address(RVA = "0x44E0F40", Offset = "0x44E0F40", VA = "0x44E0F40")]
		set
		{
		}
	}

	[Token(Token = "0x6000D8A")]
	[Address(RVA = "0x44E0E80", Offset = "0x44E0E80", VA = "0x44E0E80")]
	public XmlRootAttribute()
	{
	}

	[Token(Token = "0x6000D8B")]
	[Address(RVA = "0x44E0E90", Offset = "0x44E0E90", VA = "0x44E0E90")]
	public XmlRootAttribute(string elementName)
	{
	}

	[Token(Token = "0x6000D94")]
	[Address(RVA = "0x44D6420", Offset = "0x44D6420", VA = "0x44D6420")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
