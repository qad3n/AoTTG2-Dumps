using System.Text;
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000119")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter | AttributeTargets.ReturnValue, AllowMultiple = true)]
public class XmlArrayItemAttribute : Attribute
{
	[Token(Token = "0x4000630")]
	[FieldOffset(Offset = "0x10")]
	private string dataType;

	[Token(Token = "0x4000631")]
	[FieldOffset(Offset = "0x18")]
	private string elementName;

	[Token(Token = "0x4000632")]
	[FieldOffset(Offset = "0x20")]
	private XmlSchemaForm form;

	[Token(Token = "0x4000633")]
	[FieldOffset(Offset = "0x28")]
	private string ns;

	[Token(Token = "0x4000634")]
	[FieldOffset(Offset = "0x30")]
	private bool isNullable;

	[Token(Token = "0x4000635")]
	[FieldOffset(Offset = "0x31")]
	private bool isNullableSpecified;

	[Token(Token = "0x4000636")]
	[FieldOffset(Offset = "0x34")]
	private int nestingLevel;

	[Token(Token = "0x4000637")]
	[FieldOffset(Offset = "0x38")]
	private Type type;

	[Token(Token = "0x1700034C")]
	public string DataType
	{
		[Token(Token = "0x6000D10")]
		[Address(RVA = "0x44D3A20", Offset = "0x44D3A20", VA = "0x44D3A20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034D")]
	public string ElementName
	{
		[Token(Token = "0x6000D11")]
		[Address(RVA = "0x44D3A50", Offset = "0x44D3A50", VA = "0x44D3A50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034E")]
	public XmlSchemaForm Form
	{
		[Token(Token = "0x6000D12")]
		[Address(RVA = "0x44D3A80", Offset = "0x44D3A80", VA = "0x44D3A80")]
		get
		{
			return default(XmlSchemaForm);
		}
	}

	[Token(Token = "0x1700034F")]
	public string Namespace
	{
		[Token(Token = "0x6000D13")]
		[Address(RVA = "0x44D3A90", Offset = "0x44D3A90", VA = "0x44D3A90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000350")]
	public bool IsNullable
	{
		[Token(Token = "0x6000D14")]
		[Address(RVA = "0x44D3AA0", Offset = "0x44D3AA0", VA = "0x44D3AA0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000351")]
	internal bool IsNullableSpecified
	{
		[Token(Token = "0x6000D15")]
		[Address(RVA = "0x44D3AB0", Offset = "0x44D3AB0", VA = "0x44D3AB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000352")]
	public Type Type
	{
		[Token(Token = "0x6000D16")]
		[Address(RVA = "0x44D3AC0", Offset = "0x44D3AC0", VA = "0x44D3AC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000353")]
	public int NestingLevel
	{
		[Token(Token = "0x6000D17")]
		[Address(RVA = "0x44D3AD0", Offset = "0x44D3AD0", VA = "0x44D3AD0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000D18")]
	[Address(RVA = "0x44D3AE0", Offset = "0x44D3AE0", VA = "0x44D3AE0")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
