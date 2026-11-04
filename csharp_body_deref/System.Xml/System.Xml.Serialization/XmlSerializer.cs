// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlSerializer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x2784BA0", Offset = "0x27831A0", VA = "0x182784BA0")]
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
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E5E")]
	[Address(RVA = "0x278C950", Offset = "0x278AF50", VA = "0x18278C950")]
	static XmlSerializer()
	{
	}

	[Token(Token = "0x6000E5F")]
	[Address(RVA = "0x278CA50", Offset = "0x278B050", VA = "0x18278CA50")]
	public XmlSerializer(Type type, XmlAttributeOverrides overrides, Type[] extraTypes, XmlRootAttribute root, string defaultNamespace)
	{
	}

	[Token(Token = "0x6000E61")]
	[Address(RVA = "0x278C3B0", Offset = "0x278A9B0", VA = "0x18278C3B0", Slot = "4")]
	internal virtual void OnUnknownAttribute(XmlAttributeEventArgs e)
	{
	}

	[Token(Token = "0x6000E62")]
	[Address(RVA = "0x278C3D0", Offset = "0x278A9D0", VA = "0x18278C3D0", Slot = "5")]
	internal virtual void OnUnknownElement(XmlElementEventArgs e)
	{
	}

	[Token(Token = "0x6000E63")]
	[Address(RVA = "0x278C3F0", Offset = "0x278A9F0", VA = "0x18278C3F0", Slot = "6")]
	internal virtual void OnUnknownNode(XmlNodeEventArgs e)
	{
	}

	[Token(Token = "0x6000E64")]
	[Address(RVA = "0x278C410", Offset = "0x278AA10", VA = "0x18278C410", Slot = "7")]
	internal virtual void OnUnreferencedObject(UnreferencedObjectEventArgs e)
	{
	}

	[Token(Token = "0x6000E65")]
	[Address(RVA = "0x278BC40", Offset = "0x278A240", VA = "0x18278BC40", Slot = "8")]
	protected virtual XmlSerializationReader CreateReader()
	{
		return null;
	}

	[Token(Token = "0x6000E66")]
	[Address(RVA = "0x278BF30", Offset = "0x278A530", VA = "0x18278BF30", Slot = "9")]
	protected virtual XmlSerializationWriter CreateWriter()
	{
		return null;
	}

	[Token(Token = "0x6000E67")]
	[Address(RVA = "0x278C030", Offset = "0x278A630", VA = "0x18278C030")]
	public object Deserialize(TextReader textReader)
	{
		return null;
	}

	[Token(Token = "0x6000E68")]
	[Address(RVA = "0x278BF70", Offset = "0x278A570", VA = "0x18278BF70")]
	public object Deserialize(XmlReader xmlReader)
	{
		return null;
	}

	[Token(Token = "0x6000E69")]
	[Address(RVA = "0x278C150", Offset = "0x278A750", VA = "0x18278C150", Slot = "10")]
	protected virtual object Deserialize(XmlSerializationReader reader)
	{
		return null;
	}

	[Token(Token = "0x6000E6A")]
	[Address(RVA = "0x278C4C0", Offset = "0x278AAC0", VA = "0x18278C4C0", Slot = "11")]
	protected virtual void Serialize(object o, XmlSerializationWriter writer)
	{
	}

	[Token(Token = "0x6000E6B")]
	[Address(RVA = "0x278C430", Offset = "0x278AA30", VA = "0x18278C430")]
	public void Serialize(TextWriter textWriter, object o)
	{
	}

	[Token(Token = "0x6000E6C")]
	[Address(RVA = "0x278C930", Offset = "0x278AF30", VA = "0x18278C930")]
	public void Serialize(XmlWriter xmlWriter, object o)
	{
	}

	[Token(Token = "0x6000E6D")]
	[Address(RVA = "0x278C6A0", Offset = "0x278ACA0", VA = "0x18278C6A0")]
	public void Serialize(XmlWriter xmlWriter, object o, XmlSerializerNamespaces namespaces)
	{
	}

	[Token(Token = "0x6000E6E")]
	[Address(RVA = "0x278BC80", Offset = "0x278A280", VA = "0x18278BC80")]
	private XmlSerializationWriter CreateWriter(XmlMapping typeMapping)
	{
		return null;
	}

	[Token(Token = "0x6000E6F")]
	[Address(RVA = "0x278BBE0", Offset = "0x278A1E0", VA = "0x18278BBE0")]
	private XmlSerializationReader CreateReader(XmlMapping typeMapping)
	{
		return null;
	}
}
