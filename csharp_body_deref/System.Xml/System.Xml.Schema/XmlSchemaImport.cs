using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000240")]
public class XmlSchemaImport : XmlSchemaExternal
{
	[Token(Token = "0x4000BB0")]
	[FieldOffset(Offset = "0x68")]
	private string ns;

	[Token(Token = "0x4000BB1")]
	[FieldOffset(Offset = "0x70")]
	private XmlSchemaAnnotation annotation;

	[Token(Token = "0x17000638")]
	[XmlAttribute("namespace", DataType = "anyURI")]
	public string Namespace
	{
		[Token(Token = "0x600169C")]
		[Address(RVA = "0x43E7B60", Offset = "0x43E7B60", VA = "0x43E7B60")]
		get
		{
			return null;
		}
		[Token(Token = "0x600169D")]
		[Address(RVA = "0x43E7B70", Offset = "0x43E7B70", VA = "0x43E7B70")]
		set
		{
		}
	}

	[Token(Token = "0x600169B")]
	[Address(RVA = "0x43E7B40", Offset = "0x43E7B40", VA = "0x43E7B40")]
	public XmlSchemaImport()
	{
	}

	[Token(Token = "0x600169E")]
	[Address(RVA = "0x43E7B80", Offset = "0x43E7B80", VA = "0x43E7B80", Slot = "10")]
	internal override void AddAnnotation(XmlSchemaAnnotation annotation)
	{
	}
}
