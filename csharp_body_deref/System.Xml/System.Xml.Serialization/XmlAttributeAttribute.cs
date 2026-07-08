using System.Text;
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x200011B")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter | AttributeTargets.ReturnValue)]
public class XmlAttributeAttribute : Attribute
{
	[Token(Token = "0x4000638")]
	[FieldOffset(Offset = "0x10")]
	private string attributeName;

	[Token(Token = "0x4000639")]
	[FieldOffset(Offset = "0x18")]
	private string dataType;

	[Token(Token = "0x400063A")]
	[FieldOffset(Offset = "0x20")]
	private Type type;

	[Token(Token = "0x400063B")]
	[FieldOffset(Offset = "0x28")]
	private XmlSchemaForm form;

	[Token(Token = "0x400063C")]
	[FieldOffset(Offset = "0x30")]
	private string ns;

	[Token(Token = "0x17000355")]
	public string AttributeName
	{
		[Token(Token = "0x6000D1E")]
		[Address(RVA = "0x44D3ED0", Offset = "0x44D3ED0", VA = "0x44D3ED0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000356")]
	public string DataType
	{
		[Token(Token = "0x6000D1F")]
		[Address(RVA = "0x44D3F00", Offset = "0x44D3F00", VA = "0x44D3F00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D20")]
		[Address(RVA = "0x44D3F30", Offset = "0x44D3F30", VA = "0x44D3F30")]
		set
		{
		}
	}

	[Token(Token = "0x17000357")]
	public XmlSchemaForm Form
	{
		[Token(Token = "0x6000D21")]
		[Address(RVA = "0x44D3F40", Offset = "0x44D3F40", VA = "0x44D3F40")]
		get
		{
			return default(XmlSchemaForm);
		}
	}

	[Token(Token = "0x17000358")]
	public string Namespace
	{
		[Token(Token = "0x6000D22")]
		[Address(RVA = "0x44D3F50", Offset = "0x44D3F50", VA = "0x44D3F50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x44D3EA0", Offset = "0x44D3EA0", VA = "0x44D3EA0")]
	public XmlAttributeAttribute(string attributeName)
	{
	}

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x44D3F60", Offset = "0x44D3F60", VA = "0x44D3F60")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
