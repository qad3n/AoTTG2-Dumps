using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000110")]
internal class XmlTypeSerializationSource : SerializationSource
{
	[Token(Token = "0x4000611")]
	[FieldOffset(Offset = "0x28")]
	private string attributeOverridesHash;

	[Token(Token = "0x4000612")]
	[FieldOffset(Offset = "0x30")]
	private Type type;

	[Token(Token = "0x4000613")]
	[FieldOffset(Offset = "0x38")]
	private string rootHash;

	[Token(Token = "0x6000CD6")]
	[Address(RVA = "0x44CCEB0", Offset = "0x44CCEB0", VA = "0x44CCEB0")]
	public XmlTypeSerializationSource(Type type, XmlRootAttribute root, XmlAttributeOverrides attributeOverrides, string namspace, Type[] includedTypes)
	{
	}

	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0x44CCFF0", Offset = "0x44CCFF0", VA = "0x44CCFF0", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x44CD0C0", Offset = "0x44CD0C0", VA = "0x44CD0C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
