// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaContentModel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200021F")]
public abstract class XmlSchemaContentModel : XmlSchemaAnnotated
{
	[Token(Token = "0x170005EE")]
	[XmlIgnore]
	public abstract XmlSchemaContent Content
	{
		[Token(Token = "0x60015DC")]
		get;
		[Token(Token = "0x60015DD")]
		set;
	}

	[Token(Token = "0x60015DE")]
	[Address(RVA = "0x4720790", Offset = "0x4720790", VA = "0x4720790")]
	protected XmlSchemaContentModel()
	{
	}
}
