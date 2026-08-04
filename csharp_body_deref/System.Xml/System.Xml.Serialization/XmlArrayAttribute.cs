// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlArrayAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4810FF0", Offset = "0x4810FF0", VA = "0x4810FF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000348")]
	public XmlSchemaForm Form
	{
		[Token(Token = "0x6000D0B")]
		[Address(RVA = "0x4811020", Offset = "0x4811020", VA = "0x4811020")]
		get
		{
			return default(XmlSchemaForm);
		}
	}

	[Token(Token = "0x17000349")]
	public bool IsNullable
	{
		[Token(Token = "0x6000D0C")]
		[Address(RVA = "0x4811030", Offset = "0x4811030", VA = "0x4811030")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700034A")]
	public string Namespace
	{
		[Token(Token = "0x6000D0D")]
		[Address(RVA = "0x4811040", Offset = "0x4811040", VA = "0x4811040")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700034B")]
	public int Order
	{
		[Token(Token = "0x6000D0E")]
		[Address(RVA = "0x4811050", Offset = "0x4811050", VA = "0x4811050")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000D0F")]
	[Address(RVA = "0x4811060", Offset = "0x4811060", VA = "0x4811060")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
