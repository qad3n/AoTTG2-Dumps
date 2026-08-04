// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaImport
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x47252C0", Offset = "0x47252C0", VA = "0x47252C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600169D")]
		[Address(RVA = "0x47252D0", Offset = "0x47252D0", VA = "0x47252D0")]
		set
		{
		}
	}

	[Token(Token = "0x600169B")]
	[Address(RVA = "0x47252A0", Offset = "0x47252A0", VA = "0x47252A0")]
	public XmlSchemaImport()
	{
	}

	[Token(Token = "0x600169E")]
	[Address(RVA = "0x47252E0", Offset = "0x47252E0", VA = "0x47252E0", Slot = "10")]
	internal override void AddAnnotation(XmlSchemaAnnotation annotation)
	{
	}
}
