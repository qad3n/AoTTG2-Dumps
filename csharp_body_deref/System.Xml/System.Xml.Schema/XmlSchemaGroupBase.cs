// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaGroupBase
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Xml.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000239")]
public abstract class XmlSchemaGroupBase : XmlSchemaParticle
{
	[Token(Token = "0x1700062C")]
	[XmlIgnore]
	public abstract XmlSchemaObjectCollection Items
	{
		[Token(Token = "0x600167D")]
		get;
	}

	[Token(Token = "0x600167E")]
	internal abstract void SetItems(XmlSchemaObjectCollection newItems);

	[Token(Token = "0x600167F")]
	[Address(RVA = "0x471DDE0", Offset = "0x471DDE0", VA = "0x471DDE0")]
	protected XmlSchemaGroupBase()
	{
	}
}
