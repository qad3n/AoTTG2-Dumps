// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlTypeSerializationSource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x480A610", Offset = "0x480A610", VA = "0x480A610")]
	public XmlTypeSerializationSource(Type type, XmlRootAttribute root, XmlAttributeOverrides attributeOverrides, string namspace, Type[] includedTypes)
	{
	}

	[Token(Token = "0x6000CD7")]
	[Address(RVA = "0x480A750", Offset = "0x480A750", VA = "0x480A750", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CD8")]
	[Address(RVA = "0x480A820", Offset = "0x480A820", VA = "0x480A820", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
