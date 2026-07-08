using System.Collections;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Xml.Serialization;

[Token(Token = "0x200013D")]
public abstract class XmlSerializationWriter : XmlSerializationGeneratedCode
{
	[Token(Token = "0x200013E")]
	private class WriteCallbackInfo
	{
		[Token(Token = "0x40006B1")]
		[FieldOffset(Offset = "0x10")]
		public Type Type;

		[Token(Token = "0x40006B2")]
		[FieldOffset(Offset = "0x18")]
		public string TypeName;

		[Token(Token = "0x40006B3")]
		[FieldOffset(Offset = "0x20")]
		public string TypeNs;

		[Token(Token = "0x40006B4")]
		[FieldOffset(Offset = "0x28")]
		public XmlSerializationWriteCallback Callback;

		[Token(Token = "0x6000E41")]
		[Address(RVA = "0x44F1720", Offset = "0x44F1720", VA = "0x44F1720")]
		public WriteCallbackInfo()
		{
		}
	}

	[Token(Token = "0x40006A9")]
	[FieldOffset(Offset = "0x10")]
	private ObjectIDGenerator idGenerator;

	[Token(Token = "0x40006AA")]
	[FieldOffset(Offset = "0x18")]
	private int qnameCount;

	[Token(Token = "0x40006AB")]
	[FieldOffset(Offset = "0x1C")]
	private bool topLevelElement;

	[Token(Token = "0x40006AC")]
	[FieldOffset(Offset = "0x20")]
	private ArrayList namespaces;

	[Token(Token = "0x40006AD")]
	[FieldOffset(Offset = "0x28")]
	private XmlWriter writer;

	[Token(Token = "0x40006AE")]
	[FieldOffset(Offset = "0x30")]
	private Queue referencedElements;

	[Token(Token = "0x40006AF")]
	[FieldOffset(Offset = "0x38")]
	private Hashtable callbacks;

	[Token(Token = "0x40006B0")]
	[FieldOffset(Offset = "0x40")]
	private Hashtable serializedObjects;

	[Token(Token = "0x17000395")]
	protected XmlWriter Writer
	{
		[Token(Token = "0x6000E11")]
		[Address(RVA = "0x44EDC30", Offset = "0x44EDC30", VA = "0x44EDC30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E0F")]
	[Address(RVA = "0x44EDA90", Offset = "0x44EDA90", VA = "0x44EDA90")]
	protected XmlSerializationWriter()
	{
	}

	[Token(Token = "0x6000E10")]
	[Address(RVA = "0x44EDB00", Offset = "0x44EDB00", VA = "0x44EDB00")]
	internal void Initialize(XmlWriter writer, XmlSerializerNamespaces nss)
	{
	}

	[Token(Token = "0x6000E12")]
	[Address(RVA = "0x44EDC40", Offset = "0x44EDC40", VA = "0x44EDC40")]
	protected void AddWriteCallback(Type type, string typeName, string typeNs, XmlSerializationWriteCallback callback)
	{
	}

	[Token(Token = "0x6000E13")]
	[Address(RVA = "0x44EDD60", Offset = "0x44EDD60", VA = "0x44EDD60")]
	protected Exception CreateUnknownAnyElementException(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x44EDDE0", Offset = "0x44EDDE0", VA = "0x44EDDE0")]
	protected Exception CreateUnknownTypeException(object o)
	{
		return null;
	}

	[Token(Token = "0x6000E15")]
	[Address(RVA = "0x44EDE70", Offset = "0x44EDE70", VA = "0x44EDE70")]
	protected Exception CreateUnknownTypeException(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E16")]
	[Address(RVA = "0x44EDEE0", Offset = "0x44EDEE0", VA = "0x44EDEE0")]
	protected string FromXmlQualifiedName(XmlQualifiedName xmlQualifiedName)
	{
		return null;
	}

	[Token(Token = "0x6000E17")]
	[Address(RVA = "0x44EE0F0", Offset = "0x44EE0F0", VA = "0x44EE0F0")]
	private string GetId(object o, bool addToReferencesList)
	{
		return null;
	}

	[Token(Token = "0x6000E18")]
	[Address(RVA = "0x44EE200", Offset = "0x44EE200", VA = "0x44EE200")]
	private bool AlreadyQueued(object ob)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E19")]
	[Address(RVA = "0x44EE240", Offset = "0x44EE240", VA = "0x44EE240")]
	private string GetNamespacePrefix(string ns)
	{
		return null;
	}

	[Token(Token = "0x6000E1A")]
	[Address(RVA = "0x44EE030", Offset = "0x44EE030", VA = "0x44EE030")]
	private string GetQualifiedName(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000E1B")]
	protected abstract void InitCallbacks();

	[Token(Token = "0x6000E1C")]
	[Address(RVA = "0x44EE370", Offset = "0x44EE370", VA = "0x44EE370")]
	protected void TopLevelElement()
	{
	}

	[Token(Token = "0x6000E1D")]
	[Address(RVA = "0x44EE380", Offset = "0x44EE380", VA = "0x44EE380")]
	protected void WriteAttribute(string localName, string ns, string value)
	{
	}

	[Token(Token = "0x6000E1E")]
	[Address(RVA = "0x44EE350", Offset = "0x44EE350", VA = "0x44EE350")]
	protected void WriteAttribute(string prefix, string localName, string ns, string value)
	{
	}

	[Token(Token = "0x6000E1F")]
	[Address(RVA = "0x44EE3B0", Offset = "0x44EE3B0", VA = "0x44EE3B0")]
	private void WriteXmlNode(XmlNode node)
	{
	}

	[Token(Token = "0x6000E20")]
	[Address(RVA = "0x44EE440", Offset = "0x44EE440", VA = "0x44EE440")]
	protected void WriteElementEncoded(XmlNode node, string name, string ns, bool isNullable, bool any)
	{
	}

	[Token(Token = "0x6000E21")]
	[Address(RVA = "0x44EE6E0", Offset = "0x44EE6E0", VA = "0x44EE6E0")]
	protected void WriteElementLiteral(XmlNode node, string name, string ns, bool isNullable, bool any)
	{
	}

	[Token(Token = "0x6000E22")]
	[Address(RVA = "0x44EE990", Offset = "0x44EE990", VA = "0x44EE990")]
	protected void WriteElementQualifiedName(string localName, string ns, XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6000E23")]
	[Address(RVA = "0x44EE9A0", Offset = "0x44EE9A0", VA = "0x44EE9A0")]
	protected void WriteElementQualifiedName(string localName, string ns, XmlQualifiedName value, XmlQualifiedName xsiType)
	{
	}

	[Token(Token = "0x6000E24")]
	[Address(RVA = "0x44EECE0", Offset = "0x44EECE0", VA = "0x44EECE0")]
	protected void WriteElementString(string localName, string ns, string value)
	{
	}

	[Token(Token = "0x6000E25")]
	[Address(RVA = "0x44EECF0", Offset = "0x44EECF0", VA = "0x44EECF0")]
	protected void WriteElementString(string localName, string ns, string value, XmlQualifiedName xsiType)
	{
	}

	[Token(Token = "0x6000E26")]
	[Address(RVA = "0x44EECB0", Offset = "0x44EECB0", VA = "0x44EECB0")]
	protected void WriteEndElement()
	{
	}

	[Token(Token = "0x6000E27")]
	[Address(RVA = "0x44EEEB0", Offset = "0x44EEEB0", VA = "0x44EEEB0")]
	protected void WriteEndElement(object o)
	{
	}

	[Token(Token = "0x6000E28")]
	[Address(RVA = "0x44EEF00", Offset = "0x44EEF00", VA = "0x44EEF00")]
	protected void WriteNamespaceDeclarations(XmlSerializerNamespaces xmlns)
	{
	}

	[Token(Token = "0x6000E29")]
	[Address(RVA = "0x44EF420", Offset = "0x44EF420", VA = "0x44EF420")]
	protected void WriteNullableQualifiedNameEncoded(string name, string ns, XmlQualifiedName value, XmlQualifiedName xsiType)
	{
	}

	[Token(Token = "0x6000E2A")]
	[Address(RVA = "0x44EF4B0", Offset = "0x44EF4B0", VA = "0x44EF4B0")]
	protected void WriteNullableQualifiedNameLiteral(string name, string ns, XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6000E2B")]
	[Address(RVA = "0x44EF540", Offset = "0x44EF540", VA = "0x44EF540")]
	protected void WriteNullableStringEncoded(string name, string ns, string value, XmlQualifiedName xsiType)
	{
	}

	[Token(Token = "0x6000E2C")]
	[Address(RVA = "0x44EF550", Offset = "0x44EF550", VA = "0x44EF550")]
	protected void WriteNullableStringLiteral(string name, string ns, string value)
	{
	}

	[Token(Token = "0x6000E2D")]
	[Address(RVA = "0x44EE630", Offset = "0x44EE630", VA = "0x44EE630")]
	protected void WriteNullTagEncoded(string name, string ns)
	{
	}

	[Token(Token = "0x6000E2E")]
	[Address(RVA = "0x44EE8D0", Offset = "0x44EE8D0", VA = "0x44EE8D0")]
	protected void WriteNullTagLiteral(string name, string ns)
	{
	}

	[Token(Token = "0x6000E2F")]
	[Address(RVA = "0x44EF570", Offset = "0x44EF570", VA = "0x44EF570")]
	protected void WritePotentiallyReferencingElement(string n, string ns, object o, Type ambientType, bool suppressReference, bool isNullable)
	{
	}

	[Token(Token = "0x6000E30")]
	[Address(RVA = "0x44EFC10", Offset = "0x44EFC10", VA = "0x44EFC10")]
	protected void WriteReferencedElements()
	{
	}

	[Token(Token = "0x6000E31")]
	[Address(RVA = "0x44EFB60", Offset = "0x44EFB60", VA = "0x44EFB60")]
	private bool IsPrimitiveArray(TypeData td)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E32")]
	[Address(RVA = "0x44EFE60", Offset = "0x44EFE60", VA = "0x44EFE60")]
	private void WriteArray(object o, TypeData td)
	{
	}

	[Token(Token = "0x6000E33")]
	[Address(RVA = "0x44F01C0", Offset = "0x44F01C0", VA = "0x44F01C0")]
	protected void WriteReferencingElement(string n, string ns, object o, bool isNullable)
	{
	}

	[Token(Token = "0x6000E34")]
	[Address(RVA = "0x44EFAE0", Offset = "0x44EFAE0", VA = "0x44EFAE0")]
	private void CheckReferenceQueue()
	{
	}

	[Token(Token = "0x6000E35")]
	[Address(RVA = "0x44F0390", Offset = "0x44F0390", VA = "0x44F0390")]
	protected void WriteSerializable(IXmlSerializable serializable, string name, string ns, bool isNullable)
	{
	}

	[Token(Token = "0x6000E36")]
	[Address(RVA = "0x44F03A0", Offset = "0x44F03A0", VA = "0x44F03A0")]
	protected void WriteSerializable(IXmlSerializable serializable, string name, string ns, bool isNullable, bool wrapped)
	{
	}

	[Token(Token = "0x6000E37")]
	[Address(RVA = "0x44F04E0", Offset = "0x44F04E0", VA = "0x44F04E0")]
	protected void WriteStartDocument()
	{
	}

	[Token(Token = "0x6000E38")]
	[Address(RVA = "0x44EEB50", Offset = "0x44EEB50", VA = "0x44EEB50")]
	protected void WriteStartElement(string name, string ns)
	{
	}

	[Token(Token = "0x6000E39")]
	[Address(RVA = "0x44EFAC0", Offset = "0x44EFAC0", VA = "0x44EFAC0")]
	protected void WriteStartElement(string name, string ns, bool writePrefixed)
	{
	}

	[Token(Token = "0x6000E3A")]
	[Address(RVA = "0x44F0540", Offset = "0x44F0540", VA = "0x44F0540")]
	protected void WriteStartElement(string name, string ns, object o)
	{
	}

	[Token(Token = "0x6000E3B")]
	[Address(RVA = "0x44F0530", Offset = "0x44F0530", VA = "0x44F0530")]
	protected void WriteStartElement(string name, string ns, object o, bool writePrefixed)
	{
	}

	[Token(Token = "0x6000E3C")]
	[Address(RVA = "0x44F0550", Offset = "0x44F0550", VA = "0x44F0550")]
	private void WriteStartElement(string name, string ns, object o, bool writePrefixed, ICollection namespaces)
	{
	}

	[Token(Token = "0x6000E3D")]
	[Address(RVA = "0x44F1090", Offset = "0x44F1090", VA = "0x44F1090")]
	protected void WriteTypedPrimitive(string name, string ns, object o, bool xsiType)
	{
	}

	[Token(Token = "0x6000E3E")]
	[Address(RVA = "0x44F13C0", Offset = "0x44F13C0", VA = "0x44F13C0")]
	protected void WriteValue(string value)
	{
	}

	[Token(Token = "0x6000E3F")]
	[Address(RVA = "0x44F13F0", Offset = "0x44F13F0", VA = "0x44F13F0")]
	protected void WriteXmlAttribute(XmlNode node, object container)
	{
	}

	[Token(Token = "0x6000E40")]
	[Address(RVA = "0x44EEB70", Offset = "0x44EEB70", VA = "0x44EEB70")]
	protected void WriteXsiType(string name, string ns)
	{
	}
}
