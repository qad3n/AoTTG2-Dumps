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
	[Address(RVA = "0x43E0680", Offset = "0x43E0680", VA = "0x43E0680")]
	protected XmlSchemaGroupBase()
	{
	}
}
