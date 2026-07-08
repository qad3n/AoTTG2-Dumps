using System.Collections;
using System.IO;
using System.Reflection;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x2000141")]
public class XmlSerializer
{
	[Token(Token = "0x2000142")]
	internal class SerializerData
	{
		[Token(Token = "0x40006C5")]
		[FieldOffset(Offset = "0x10")]
		public MethodInfo ReaderMethod;

		[Token(Token = "0x40006C6")]
		[FieldOffset(Offset = "0x18")]
		public Type WriterType;

		[Token(Token = "0x40006C7")]
		[FieldOffset(Offset = "0x20")]
		public MethodInfo WriterMethod;

		[Token(Token = "0x40006C8")]
		[FieldOffset(Offset = "0x28")]
		public XmlSerializerImplementation Implementation;

		[Token(Token = "0x6000E70")]
		[Address(RVA = "0x44F9EC0", Offset = "0x44F9EC0", VA = "0x44F9EC0")]
		public XmlSerializationWriter CreateWriter()
		{
			return null;
		}
	}

	[Token(Token = "0x40006B9")]
	[FieldOffset(Offset = "0x0")]
	private static int generationThreshold;

	[Token(Token = "0x40006BA")]
	[FieldOffset(Offset = "0x4")]
	private static bool backgroundGeneration;

	[Token(Token = "0x40006BB")]
	[FieldOffset(Offset = "0x5")]
	private static bool deleteTempFiles;

	[Token(Token = "0x40006BC")]
	[FieldOffset(Offset = "0x6")]
	private static bool generatorFallback;

	[Token(Token = "0x40006BD")]
	[FieldOffset(Offset = "0x10")]
	private bool customSerializer;

	[Token(Token = "0x40006BE")]
	[FieldOffset(Offset = "0x18")]
	private XmlMapping typeMapping;

	[Token(Token = "0x40006BF")]
	[FieldOffset(Offset = "0x20")]
	private SerializerData serializerData;

	[Token(Token = "0x40006C0")]
	[FieldOffset(Offset = "0x8")]
	private static Hashtable serializerTypes;

	[Token(Token = "0x40006C1")]
	[FieldOffset(Offset = "0x28")]
	private UnreferencedObjectEventHandler onUnreferencedObject;

	[Token(Token = "0x40006C2")]
	[FieldOffset(Offset = "0x30")]
	private XmlAttributeEventHandler onUnknownAttribute;

	[Token(Token = "0x40006C3")]
	[FieldOffset(Offset = "0x38")]
	private XmlElementEventHandler onUnknownElement;

	[Token(Token = "0x40006C4")]
	[FieldOffset(Offset = "0x40")]
	private XmlNodeEventHandler onUnknownNode;

	[Token(Token = "0x17000396")]
	internal XmlMapping Mapping
	{
		[Token(Token = "0x6000E60")]
		[Address(RVA = "0x44F9140", Offset = "0x44F9140", VA = "0x44F9140")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E5E")]
	[Address(RVA = "0x44F8F20", Offset = "0x44F8F20", VA = "0x44F8F20")]
	static XmlSerializer()
	{
	}

	[Token(Token = "0x6000E5F")]
	[Address(RVA = "0x44F8FD0", Offset = "0x44F8FD0", VA = "0x44F8FD0")]
	public XmlSerializer(Type type, XmlAttributeOverrides overrides, Type[] extraTypes, XmlRootAttribute root, string defaultNamespace)
	{
	}

	[Token(Token = "0x6000E61")]
	[Address(RVA = "0x44F9150", Offset = "0x44F9150", VA = "0x44F9150", Slot = "4")]
	internal virtual void OnUnknownAttribute(XmlAttributeEventArgs e)
	{
	}

	[Token(Token = "0x6000E62")]
	[Address(RVA = "0x44F9170", Offset = "0x44F9170", VA = "0x44F9170", Slot = "5")]
	internal virtual void OnUnknownElement(XmlElementEventArgs e)
	{
	}

	[Token(Token = "0x6000E63")]
	[Address(RVA = "0x44F9190", Offset = "0x44F9190", VA = "0x44F9190", Slot = "6")]
	internal virtual void OnUnknownNode(XmlNodeEventArgs e)
	{
	}

	[Token(Token = "0x6000E64")]
	[Address(RVA = "0x44F91B0", Offset = "0x44F91B0", VA = "0x44F91B0", Slot = "7")]
	internal virtual void OnUnreferencedObject(UnreferencedObjectEventArgs e)
	{
	}

	[Token(Token = "0x6000E65")]
	[Address(RVA = "0x44F91D0", Offset = "0x44F91D0", VA = "0x44F91D0", Slot = "8")]
	protected virtual XmlSerializationReader CreateReader()
	{
		return null;
	}

	[Token(Token = "0x6000E66")]
	[Address(RVA = "0x44F9210", Offset = "0x44F9210", VA = "0x44F9210", Slot = "9")]
	protected virtual XmlSerializationWriter CreateWriter()
	{
		return null;
	}

	[Token(Token = "0x6000E67")]
	[Address(RVA = "0x44F9250", Offset = "0x44F9250", VA = "0x44F9250")]
	public object Deserialize(TextReader textReader)
	{
		return null;
	}

	[Token(Token = "0x6000E68")]
	[Address(RVA = "0x44F92D0", Offset = "0x44F92D0", VA = "0x44F92D0")]
	public object Deserialize(XmlReader xmlReader)
	{
		return null;
	}

	[Token(Token = "0x6000E69")]
	[Address(RVA = "0x44F93D0", Offset = "0x44F93D0", VA = "0x44F93D0", Slot = "10")]
	protected virtual object Deserialize(XmlSerializationReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000E6A")]
	[Address(RVA = "0x44F96B0", Offset = "0x44F96B0", VA = "0x44F96B0", Slot = "11")]
	protected virtual void Serialize(object o, XmlSerializationWriter writer)
	{
	}

	[Token(Token = "0x6000E6B")]
	[Address(RVA = "0x44F98D0", Offset = "0x44F98D0", VA = "0x44F98D0")]
	public void Serialize(TextWriter textWriter, object o)
	{
	}

	[Token(Token = "0x6000E6C")]
	[Address(RVA = "0x44F9C80", Offset = "0x44F9C80", VA = "0x44F9C80")]
	public void Serialize(XmlWriter xmlWriter, object o)
	{
	}

	[Token(Token = "0x6000E6D")]
	[Address(RVA = "0x44F9950", Offset = "0x44F9950", VA = "0x44F9950")]
	public void Serialize(XmlWriter xmlWriter, object o, XmlSerializerNamespaces namespaces)
	{
	}

	[Token(Token = "0x6000E6E")]
	[Address(RVA = "0x44F9C90", Offset = "0x44F9C90", VA = "0x44F9C90")]
	private XmlSerializationWriter CreateWriter(XmlMapping typeMapping)
	{
		return null;
	}

	[Token(Token = "0x6000E6F")]
	[Address(RVA = "0x44F9380", Offset = "0x44F9380", VA = "0x44F9380")]
	private XmlSerializationReader CreateReader(XmlMapping typeMapping)
	{
		return null;
	}
}
