// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlElementAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Text;
using System.Xml.Schema;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000120")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field | AttributeTargets.Parameter | AttributeTargets.ReturnValue, AllowMultiple = true)]
public class XmlElementAttribute : Attribute
{
	[Token(Token = "0x400064E")]
	[FieldOffset(Offset = "0x10")]
	private string dataType;

	[Token(Token = "0x400064F")]
	[FieldOffset(Offset = "0x18")]
	private string elementName;

	[Token(Token = "0x4000650")]
	[FieldOffset(Offset = "0x20")]
	private XmlSchemaForm form;

	[Token(Token = "0x4000651")]
	[FieldOffset(Offset = "0x28")]
	private string ns;

	[Token(Token = "0x4000652")]
	[FieldOffset(Offset = "0x30")]
	private bool isNullable;

	[Token(Token = "0x4000653")]
	[FieldOffset(Offset = "0x38")]
	private Type type;

	[Token(Token = "0x4000654")]
	[FieldOffset(Offset = "0x40")]
	private int order;

	[Token(Token = "0x1700036B")]
	public string DataType
	{
		[Token(Token = "0x6000D45")]
		[Address(RVA = "0x2759E80", Offset = "0x2758480", VA = "0x182759E80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700036C")]
	public string ElementName
	{
		[Token(Token = "0x6000D46")]
		[Address(RVA = "0x1A8E540", Offset = "0x1A8CB40", VA = "0x181A8E540")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700036D")]
	public XmlSchemaForm Form
	{
		[Token(Token = "0x6000D47")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(XmlSchemaForm);
		}
	}

	[Token(Token = "0x1700036E")]
	public string Namespace
	{
		[Token(Token = "0x6000D48")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700036F")]
	public bool IsNullable
	{
		[Token(Token = "0x6000D49")]
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000370")]
	public int Order
	{
		[Token(Token = "0x6000D4A")]
		[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000371")]
	public Type Type
	{
		[Token(Token = "0x6000D4B")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D43")]
	[Address(RVA = "0x275E600", Offset = "0x275CC00", VA = "0x18275E600")]
	public XmlElementAttribute(string elementName)
	{
	}

	[Token(Token = "0x6000D44")]
	[Address(RVA = "0x275E5A0", Offset = "0x275CBA0", VA = "0x18275E5A0")]
	public XmlElementAttribute(string elementName, Type type)
	{
	}

	[Token(Token = "0x6000D4C")]
	[Address(RVA = "0x275E440", Offset = "0x275CA40", VA = "0x18275E440")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
