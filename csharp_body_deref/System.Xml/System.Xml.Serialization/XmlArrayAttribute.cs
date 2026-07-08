using System.Text;
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000118")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter | AttributeTargets.ReturnValue, AllowMultiple = false)]
public class XmlArrayAttribute : Attribute
{
	[Token(Token = "0x400062B")]
	[FieldOffset(Offset = "0x10")]
	private string elementName;

	[Token(Token = "0x400062C")]
	[FieldOffset(Offset = "0x18")]
	private XmlSchemaForm form;

	[Token(Token = "0x400062D")]
	[FieldOffset(Offset = "0x1C")]
	private bool isNullable;

	[Token(Token = "0x400062E")]
	[FieldOffset(Offset = "0x20")]
	private string ns;

	[Token(Token = "0x400062F")]
	[FieldOffset(Offset = "0x28")]
	private int order;

	[Token(Token = "0x17000347")]
	public string ElementName
	{
		[Token(Token = "0x6000D0A")]
		[Address(RVA = "0x44D3890", Offset = "0x44D3890", VA = "0x44D3890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000348")]
	public XmlSchemaForm Form
	{
		[Token(Token = "0x6000D0B")]
		[Address(RVA = "0x44D38C0", Offset = "0x44D38C0", VA = "0x44D38C0")]
		get
		{
			return default(XmlSchemaForm);
		}
	}

	[Token(Token = "0x17000349")]
	public bool IsNullable
	{
		[Token(Token = "0x6000D0C")]
		[Address(RVA = "0x44D38D0", Offset = "0x44D38D0", VA = "0x44D38D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700034A")]
	public string Namespace
	{
		[Token(Token = "0x6000D0D")]
		[Address(RVA = "0x44D38E0", Offset = "0x44D38E0", VA = "0x44D38E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034B")]
	public int Order
	{
		[Token(Token = "0x6000D0E")]
		[Address(RVA = "0x44D38F0", Offset = "0x44D38F0", VA = "0x44D38F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x44D3900", Offset = "0x44D3900", VA = "0x44D3900")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
