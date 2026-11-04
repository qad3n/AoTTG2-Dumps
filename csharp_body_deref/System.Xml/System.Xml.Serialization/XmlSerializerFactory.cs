// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlSerializerFactory
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000143")]
public class XmlSerializerFactory
{
	[Token(Token = "0x40006C9")]
	[FieldOffset(Offset = "0x0")]
	private static Hashtable serializersBySource;

	[Token(Token = "0x6000E71")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public XmlSerializerFactory()
	{
	}

	[Token(Token = "0x6000E72")]
	[Address(RVA = "0x278BAC0", Offset = "0x278A0C0", VA = "0x18278BAC0")]
	public XmlSerializer CreateSerializer(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E73")]
	[Address(RVA = "0x278BAF0", Offset = "0x278A0F0", VA = "0x18278BAF0")]
	public XmlSerializer CreateSerializer(Type type, XmlRootAttribute root)
	{
		return null;
	}

	[Token(Token = "0x6000E74")]
	[Address(RVA = "0x278B700", Offset = "0x2789D00", VA = "0x18278B700")]
	public XmlSerializer CreateSerializer(Type type, XmlAttributeOverrides overrides, Type[] extraTypes, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}
}
