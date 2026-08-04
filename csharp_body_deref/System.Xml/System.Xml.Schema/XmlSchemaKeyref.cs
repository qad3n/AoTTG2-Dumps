// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaKeyref
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200023F")]
public class XmlSchemaKeyref : XmlSchemaIdentityConstraint
{
	[Token(Token = "0x4000BAF")]
	[FieldOffset(Offset = "0x78")]
	private XmlQualifiedName refer;

	[Token(Token = "0x17000637")]
	[XmlAttribute("refer")]
	public XmlQualifiedName Refer
	{
		[Token(Token = "0x6001698")]
		[Address(RVA = "0x4725190", Offset = "0x4725190", VA = "0x4725190")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001699")]
		[Address(RVA = "0x47251A0", Offset = "0x47251A0", VA = "0x47251A0")]
		set
		{
		}
	}

	[Token(Token = "0x600169A")]
	[Address(RVA = "0x4725230", Offset = "0x4725230", VA = "0x4725230")]
	public XmlSchemaKeyref()
	{
	}
}
