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
	[Address(RVA = "0x44F9F90", Offset = "0x44F9F90", VA = "0x44F9F90")]
	public XmlSerializerFactory()
	{
	}

	[Token(Token = "0x6000E72")]
	[Address(RVA = "0x44F9FA0", Offset = "0x44F9FA0", VA = "0x44F9FA0")]
	public XmlSerializer CreateSerializer(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E73")]
	[Address(RVA = "0x44FA290", Offset = "0x44FA290", VA = "0x44FA290")]
	public XmlSerializer CreateSerializer(Type type, XmlRootAttribute root)
	{
		return null;
	}

	[Token(Token = "0x6000E74")]
	[Address(RVA = "0x44F9FC0", Offset = "0x44F9FC0", VA = "0x44F9FC0")]
	public XmlSerializer CreateSerializer(Type type, XmlAttributeOverrides overrides, Type[] extraTypes, XmlRootAttribute root, string defaultNamespace)
	{
		return null;
	}
}
