// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Serialization.XmlSerializationWriter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x482EE80", Offset = "0x482EE80", VA = "0x482EE80")]
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
		[Address(RVA = "0x482B390", Offset = "0x482B390", VA = "0x482B390")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E0F")]
	[Address(RVA = "0x482B1F0", Offset = "0x482B1F0", VA = "0x482B1F0")]
	protected XmlSerializationWriter()
	{
	}

	[Token(Token = "0x6000E10")]
	[Address(RVA = "0x482B260", Offset = "0x482B260", VA = "0x482B260")]
	internal void Initialize(XmlWriter writer, XmlSerializerNamespaces nss)
	{
	}

	[Token(Token = "0x6000E12")]
	[Address(RVA = "0x482B3A0", Offset = "0x482B3A0", VA = "0x482B3A0")]
	protected void AddWriteCallback(Type type, string typeName, string typeNs, XmlSerializationWriteCallback callback)
	{
	}

	[Token(Token = "0x6000E13")]
	[Address(RVA = "0x482B4C0", Offset = "0x482B4C0", VA = "0x482B4C0")]
	protected Exception CreateUnknownAnyElementException(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x482B540", Offset = "0x482B540", VA = "0x482B540")]
	protected Exception CreateUnknownTypeException(object o)
	{
		return null;
	}

	[Token(Token = "0x6000E15")]
	[Address(RVA = "0x482B5D0", Offset = "0x482B5D0", VA = "0x482B5D0")]
	protected Exception CreateUnknownTypeException(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E16")]
	[Address(RVA = "0x482B640", Offset = "0x482B640", VA = "0x482B640")]
	protected string FromXmlQualifiedName(XmlQualifiedName xmlQualifiedName)
	{
		return null;
	}

	[Token(Token = "0x6000E17")]
	[Address(RVA = "0x482B850", Offset = "0x482B850", VA = "0x482B850")]
	private string GetId(object o, bool addToReferencesList)
	{
		return null;
	}

	[Token(Token = "0x6000E18")]
	[Address(RVA = "0x482B960", Offset = "0x482B960", VA = "0x482B960")]
	private bool AlreadyQueued(object ob)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E19")]
	[Address(RVA = "0x482B9A0", Offset = "0x482B9A0", VA = "0x482B9A0")]
	private string GetNamespacePrefix(string ns)
	{
		return null;
	}

	[Token(Token = "0x6000E1A")]
	[Address(RVA = "0x482B790", Offset = "0x482B790", VA = "0x482B790")]
	private string GetQualifiedName(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000E1B")]
	protected abstract void InitCallbacks();

	[Token(Token = "0x6000E1C")]
	[Address(RVA = "0x482BAD0", Offset = "0x482BAD0", VA = "0x482BAD0")]
	protected void TopLevelElement()
	{
	}

	[Token(Token = "0x6000E1D")]
	[Address(RVA = "0x482BAE0", Offset = "0x482BAE0", VA = "0x482BAE0")]
	protected void WriteAttribute(string localName, string ns, string value)
	{
	}

	[Token(Token = "0x6000E1E")]
	[Address(RVA = "0x482BAB0", Offset = "0x482BAB0", VA = "0x482BAB0")]
	protected void WriteAttribute(string prefix, string localName, string ns, string value)
	{
	}

	[Token(Token = "0x6000E1F")]
	[Address(RVA = "0x482BB10", Offset = "0x482BB10", VA = "0x482BB10")]
	private void WriteXmlNode(XmlNode node)
	{
	}

	[Token(Token = "0x6000E20")]
	[Address(RVA = "0x482BBA0", Offset = "0x482BBA0", VA = "0x482BBA0")]
	protected void WriteElementEncoded(XmlNode node, string name, string ns, bool isNullable, bool any)
	{
	}

	[Token(Token = "0x6000E21")]
	[Address(RVA = "0x482BE40", Offset = "0x482BE40", VA = "0x482BE40")]
	protected void WriteElementLiteral(XmlNode node, string name, string ns, bool isNullable, bool any)
	{
	}

	[Token(Token = "0x6000E22")]
	[Address(RVA = "0x482C0F0", Offset = "0x482C0F0", VA = "0x482C0F0")]
	protected void WriteElementQualifiedName(string localName, string ns, XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6000E23")]
	[Address(RVA = "0x482C100", Offset = "0x482C100", VA = "0x482C100")]
	protected void WriteElementQualifiedName(string localName, string ns, XmlQualifiedName value, XmlQualifiedName xsiType)
	{
	}

	[Token(Token = "0x6000E24")]
	[Address(RVA = "0x482C440", Offset = "0x482C440", VA = "0x482C440")]
	protected void WriteElementString(string localName, string ns, string value)
	{
	}

	[Token(Token = "0x6000E25")]
	[Address(RVA = "0x482C450", Offset = "0x482C450", VA = "0x482C450")]
	protected void WriteElementString(string localName, string ns, string value, XmlQualifiedName xsiType)
	{
	}

	[Token(Token = "0x6000E26")]
	[Address(RVA = "0x482C410", Offset = "0x482C410", VA = "0x482C410")]
	protected void WriteEndElement()
	{
	}

	[Token(Token = "0x6000E27")]
	[Address(RVA = "0x482C610", Offset = "0x482C610", VA = "0x482C610")]
	protected void WriteEndElement(object o)
	{
	}

	[Token(Token = "0x6000E28")]
	[Address(RVA = "0x482C660", Offset = "0x482C660", VA = "0x482C660")]
	protected void WriteNamespaceDeclarations(XmlSerializerNamespaces xmlns)
	{
	}

	[Token(Token = "0x6000E29")]
	[Address(RVA = "0x482CB80", Offset = "0x482CB80", VA = "0x482CB80")]
	protected void WriteNullableQualifiedNameEncoded(string name, string ns, XmlQualifiedName value, XmlQualifiedName xsiType)
	{
	}

	[Token(Token = "0x6000E2A")]
	[Address(RVA = "0x482CC10", Offset = "0x482CC10", VA = "0x482CC10")]
	protected void WriteNullableQualifiedNameLiteral(string name, string ns, XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6000E2B")]
	[Address(RVA = "0x482CCA0", Offset = "0x482CCA0", VA = "0x482CCA0")]
	protected void WriteNullableStringEncoded(string name, string ns, string value, XmlQualifiedName xsiType)
	{
	}

	[Token(Token = "0x6000E2C")]
	[Address(RVA = "0x482CCB0", Offset = "0x482CCB0", VA = "0x482CCB0")]
	protected void WriteNullableStringLiteral(string name, string ns, string value)
	{
	}

	[Token(Token = "0x6000E2D")]
	[Address(RVA = "0x482BD90", Offset = "0x482BD90", VA = "0x482BD90")]
	protected void WriteNullTagEncoded(string name, string ns)
	{
	}

	[Token(Token = "0x6000E2E")]
	[Address(RVA = "0x482C030", Offset = "0x482C030", VA = "0x482C030")]
	protected void WriteNullTagLiteral(string name, string ns)
	{
	}

	[Token(Token = "0x6000E2F")]
	[Address(RVA = "0x482CCD0", Offset = "0x482CCD0", VA = "0x482CCD0")]
	protected void WritePotentiallyReferencingElement(string n, string ns, object o, Type ambientType, bool suppressReference, bool isNullable)
	{
	}

	[Token(Token = "0x6000E30")]
	[Address(RVA = "0x482D370", Offset = "0x482D370", VA = "0x482D370")]
	protected void WriteReferencedElements()
	{
	}

	[Token(Token = "0x6000E31")]
	[Address(RVA = "0x482D2C0", Offset = "0x482D2C0", VA = "0x482D2C0")]
	private bool IsPrimitiveArray(TypeData td)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E32")]
	[Address(RVA = "0x482D5C0", Offset = "0x482D5C0", VA = "0x482D5C0")]
	private void WriteArray(object o, TypeData td)
	{
	}

	[Token(Token = "0x6000E33")]
	[Address(RVA = "0x482D920", Offset = "0x482D920", VA = "0x482D920")]
	protected void WriteReferencingElement(string n, string ns, object o, bool isNullable)
	{
	}

	[Token(Token = "0x6000E34")]
	[Address(RVA = "0x482D240", Offset = "0x482D240", VA = "0x482D240")]
	private void CheckReferenceQueue()
	{
	}

	[Token(Token = "0x6000E35")]
	[Address(RVA = "0x482DAF0", Offset = "0x482DAF0", VA = "0x482DAF0")]
	protected void WriteSerializable(IXmlSerializable serializable, string name, string ns, bool isNullable)
	{
	}

	[Token(Token = "0x6000E36")]
	[Address(RVA = "0x482DB00", Offset = "0x482DB00", VA = "0x482DB00")]
	protected void WriteSerializable(IXmlSerializable serializable, string name, string ns, bool isNullable, bool wrapped)
	{
	}

	[Token(Token = "0x6000E37")]
	[Address(RVA = "0x482DC40", Offset = "0x482DC40", VA = "0x482DC40")]
	protected void WriteStartDocument()
	{
	}

	[Token(Token = "0x6000E38")]
	[Address(RVA = "0x482C2B0", Offset = "0x482C2B0", VA = "0x482C2B0")]
	protected void WriteStartElement(string name, string ns)
	{
	}

	[Token(Token = "0x6000E39")]
	[Address(RVA = "0x482D220", Offset = "0x482D220", VA = "0x482D220")]
	protected void WriteStartElement(string name, string ns, bool writePrefixed)
	{
	}

	[Token(Token = "0x6000E3A")]
	[Address(RVA = "0x482DCA0", Offset = "0x482DCA0", VA = "0x482DCA0")]
	protected void WriteStartElement(string name, string ns, object o)
	{
	}

	[Token(Token = "0x6000E3B")]
	[Address(RVA = "0x482DC90", Offset = "0x482DC90", VA = "0x482DC90")]
	protected void WriteStartElement(string name, string ns, object o, bool writePrefixed)
	{
	}

	[Token(Token = "0x6000E3C")]
	[Address(RVA = "0x482DCB0", Offset = "0x482DCB0", VA = "0x482DCB0")]
	private void WriteStartElement(string name, string ns, object o, bool writePrefixed, ICollection namespaces)
	{
	}

	[Token(Token = "0x6000E3D")]
	[Address(RVA = "0x482E7F0", Offset = "0x482E7F0", VA = "0x482E7F0")]
	protected void WriteTypedPrimitive(string name, string ns, object o, bool xsiType)
	{
	}

	[Token(Token = "0x6000E3E")]
	[Address(RVA = "0x482EB20", Offset = "0x482EB20", VA = "0x482EB20")]
	protected void WriteValue(string value)
	{
	}

	[Token(Token = "0x6000E3F")]
	[Address(RVA = "0x482EB50", Offset = "0x482EB50", VA = "0x482EB50")]
	protected void WriteXmlAttribute(XmlNode node, object container)
	{
	}

	[Token(Token = "0x6000E40")]
	[Address(RVA = "0x482C2D0", Offset = "0x482C2D0", VA = "0x482C2D0")]
	protected void WriteXsiType(string name, string ns)
	{
	}
}
