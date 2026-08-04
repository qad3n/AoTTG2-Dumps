// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlAttributeAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4811630", Offset = "0x4811630", VA = "0x4811630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000356")]
	public string DataType
	{
		[Token(Token = "0x6000D1F")]
		[Address(RVA = "0x4811660", Offset = "0x4811660", VA = "0x4811660")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D20")]
		[Address(RVA = "0x4811690", Offset = "0x4811690", VA = "0x4811690")]
		set
		{
		}
	}

	[Token(Token = "0x17000357")]
	public XmlSchemaForm Form
	{
		[Token(Token = "0x6000D21")]
		[Address(RVA = "0x48116A0", Offset = "0x48116A0", VA = "0x48116A0")]
		get
		{
			return default(XmlSchemaForm);
		}
	}

	[Token(Token = "0x17000358")]
	public string Namespace
	{
		[Token(Token = "0x6000D22")]
		[Address(RVA = "0x48116B0", Offset = "0x48116B0", VA = "0x48116B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x4811600", Offset = "0x4811600", VA = "0x4811600")]
	public XmlAttributeAttribute(string attributeName)
	{
	}

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x48116C0", Offset = "0x48116C0", VA = "0x48116C0")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
