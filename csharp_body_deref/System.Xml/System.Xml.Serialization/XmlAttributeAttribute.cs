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
		[Address(RVA = "0x2759E80", Offset = "0x2758480", VA = "0x182759E80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000356")]
	public string DataType
	{
		[Token(Token = "0x6000D1F")]
		[Address(RVA = "0x1A8E540", Offset = "0x1A8CB40", VA = "0x181A8E540")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000D20")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		set
		{
		}
	}

	[Token(Token = "0x17000357")]
	public XmlSchemaForm Form
	{
		[Token(Token = "0x6000D21")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		get
		{
			return default(XmlSchemaForm);
		}
	}

	[Token(Token = "0x17000358")]
	public string Namespace
	{
		[Token(Token = "0x6000D22")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D1D")]
	[Address(RVA = "0x12B8CD0", Offset = "0x12B72D0", VA = "0x1812B8CD0")]
	public XmlAttributeAttribute(string attributeName)
	{
	}

	[Token(Token = "0x6000D23")]
	[Address(RVA = "0x275A9A0", Offset = "0x2758FA0", VA = "0x18275A9A0")]
	internal void AddKeyHash(StringBuilder sb)
	{
	}
}
