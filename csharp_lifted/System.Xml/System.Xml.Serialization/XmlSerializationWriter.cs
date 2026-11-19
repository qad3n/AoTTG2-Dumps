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
		[Address(RVA = "0x612ED50", Offset = "0x612DD50", VA = "0x612ED50")]
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
		[Address(RVA = "0x612B3D0", Offset = "0x612A3D0", VA = "0x612B3D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E0F")]
	[Address(RVA = "0x612B230", Offset = "0x612A230", VA = "0x612B230")]
	protected XmlSerializationWriter()
	{
	}

	[Token(Token = "0x6000E10")]
	[Address(RVA = "0x612B2A0", Offset = "0x612A2A0", VA = "0x612B2A0")]
	internal void Initialize(XmlWriter writer, XmlSerializerNamespaces nss)
	{
	}

	[Token(Token = "0x6000E12")]
	[Address(RVA = "0x612B3E0", Offset = "0x612A3E0", VA = "0x612B3E0")]
	protected void AddWriteCallback(Type type, string typeName, string typeNs, XmlSerializationWriteCallback callback)
	{
	}

	[Token(Token = "0x6000E13")]
	[Address(RVA = "0x612B500", Offset = "0x612A500", VA = "0x612B500")]
	protected Exception CreateUnknownAnyElementException(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x612B580", Offset = "0x612A580", VA = "0x612B580")]
	protected Exception CreateUnknownTypeException(object o)
	{
		return null;
	}

	[Token(Token = "0x6000E15")]
	[Address(RVA = "0x612B610", Offset = "0x612A610", VA = "0x612B610")]
	protected Exception CreateUnknownTypeException(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E16")]
	[Address(RVA = "0x612B680", Offset = "0x612A680", VA = "0x612B680")]
	protected string FromXmlQualifiedName(XmlQualifiedName xmlQualifiedName)
	{
		return null;
	}

	[Token(Token = "0x6000E17")]
	[Address(RVA = "0x612B890", Offset = "0x612A890", VA = "0x612B890")]
	private string GetId(object o, bool addToReferencesList)
	{
		return null;
	}

	[Token(Token = "0x6000E18")]
	[Address(RVA = "0x612B9A0", Offset = "0x612A9A0", VA = "0x612B9A0")]
	private bool AlreadyQueued(object ob)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E19")]
	[Address(RVA = "0x612B9E0", Offset = "0x612A9E0", VA = "0x612B9E0")]
	private string GetNamespacePrefix(string ns)
	{
		return null;
	}

	[Token(Token = "0x6000E1A")]
	[Address(RVA = "0x612B7D0", Offset = "0x612A7D0", VA = "0x612B7D0")]
	private string GetQualifiedName(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000E1B")]
	protected abstract void InitCallbacks();

	[Token(Token = "0x6000E1C")]
	[Address(RVA = "0x612BB10", Offset = "0x612AB10", VA = "0x612BB10")]
	protected void TopLevelElement()
	{
	}

	[Token(Token = "0x6000E1D")]
	[Address(RVA = "0x612BB20", Offset = "0x612AB20", VA = "0x612BB20")]
	protected void WriteAttribute(string localName, string ns, string value)
	{
	}

	[Token(Token = "0x6000E1E")]
	[Address(RVA = "0x612BAF0", Offset = "0x612AAF0", VA = "0x612BAF0")]
	protected void WriteAttribute(string prefix, string localName, string ns, string value)
	{
	}

	[Token(Token = "0x6000E1F")]
	[Address(RVA = "0x612BB50", Offset = "0x612AB50", VA = "0x612BB50")]
	private void WriteXmlNode(XmlNode node)
	{
	}

	[Token(Token = "0x6000E20")]
	[Address(RVA = "0x612BBE0", Offset = "0x612ABE0", VA = "0x612BBE0")]
	protected void WriteElementEncoded(XmlNode node, string name, string ns, bool isNullable, bool any)
	{
	}

	[Token(Token = "0x6000E21")]
	[Address(RVA = "0x612BE80", Offset = "0x612AE80", VA = "0x612BE80")]
	protected void WriteElementLiteral(XmlNode node, string name, string ns, bool isNullable, bool any)
	{
	}

	[Token(Token = "0x6000E22")]
	[Address(RVA = "0x612C130", Offset = "0x612B130", VA = "0x612C130")]
	protected void WriteElementQualifiedName(string localName, string ns, XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6000E23")]
	[Address(RVA = "0x612C140", Offset = "0x612B140", VA = "0x612C140")]
	protected void WriteElementQualifiedName(string localName, string ns, XmlQualifiedName value, XmlQualifiedName xsiType)
	{
	}

	[Token(Token = "0x6000E24")]
	[Address(RVA = "0x612C480", Offset = "0x612B480", VA = "0x612C480")]
	protected void WriteElementString(string localName, string ns, string value)
	{
	}

	[Token(Token = "0x6000E25")]
	[Address(RVA = "0x612C490", Offset = "0x612B490", VA = "0x612C490")]
	protected void WriteElementString(string localName, string ns, string value, XmlQualifiedName xsiType)
	{
	}

	[Token(Token = "0x6000E26")]
	[Address(RVA = "0x612C450", Offset = "0x612B450", VA = "0x612C450")]
	protected void WriteEndElement()
	{
	}

	[Token(Token = "0x6000E27")]
	[Address(RVA = "0x612C650", Offset = "0x612B650", VA = "0x612C650")]
	protected void WriteEndElement(object o)
	{
	}

	[Token(Token = "0x6000E28")]
	[Address(RVA = "0x612C6A0", Offset = "0x612B6A0", VA = "0x612C6A0")]
	protected void WriteNamespaceDeclarations(XmlSerializerNamespaces xmlns)
	{
	}

	[Token(Token = "0x6000E29")]
	[Address(RVA = "0x612CB00", Offset = "0x612BB00", VA = "0x612CB00")]
	protected void WriteNullableQualifiedNameEncoded(string name, string ns, XmlQualifiedName value, XmlQualifiedName xsiType)
	{
	}

	[Token(Token = "0x6000E2A")]
	[Address(RVA = "0x612CB90", Offset = "0x612BB90", VA = "0x612CB90")]
	protected void WriteNullableQualifiedNameLiteral(string name, string ns, XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6000E2B")]
	[Address(RVA = "0x612CC20", Offset = "0x612BC20", VA = "0x612CC20")]
	protected void WriteNullableStringEncoded(string name, string ns, string value, XmlQualifiedName xsiType)
	{
	}

	[Token(Token = "0x6000E2C")]
	[Address(RVA = "0x612CC30", Offset = "0x612BC30", VA = "0x612CC30")]
	protected void WriteNullableStringLiteral(string name, string ns, string value)
	{
	}

	[Token(Token = "0x6000E2D")]
	[Address(RVA = "0x612BDD0", Offset = "0x612ADD0", VA = "0x612BDD0")]
	protected void WriteNullTagEncoded(string name, string ns)
	{
	}

	[Token(Token = "0x6000E2E")]
	[Address(RVA = "0x612C070", Offset = "0x612B070", VA = "0x612C070")]
	protected void WriteNullTagLiteral(string name, string ns)
	{
	}

	[Token(Token = "0x6000E2F")]
	[Address(RVA = "0x612CC50", Offset = "0x612BC50", VA = "0x612CC50")]
	protected void WritePotentiallyReferencingElement(string n, string ns, object o, Type ambientType, bool suppressReference, bool isNullable)
	{
	}

	[Token(Token = "0x6000E30")]
	[Address(RVA = "0x612D2D0", Offset = "0x612C2D0", VA = "0x612D2D0")]
	protected void WriteReferencedElements()
	{
	}

	[Token(Token = "0x6000E31")]
	[Address(RVA = "0x612D220", Offset = "0x612C220", VA = "0x612D220")]
	private bool IsPrimitiveArray(TypeData td)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E32")]
	[Address(RVA = "0x612D520", Offset = "0x612C520", VA = "0x612D520")]
	private void WriteArray(object o, TypeData td)
	{
	}

	[Token(Token = "0x6000E33")]
	[Address(RVA = "0x612D880", Offset = "0x612C880", VA = "0x612D880")]
	protected void WriteReferencingElement(string n, string ns, object o, bool isNullable)
	{
	}

	[Token(Token = "0x6000E34")]
	[Address(RVA = "0x612D1A0", Offset = "0x612C1A0", VA = "0x612D1A0")]
	private void CheckReferenceQueue()
	{
	}

	[Token(Token = "0x6000E35")]
	[Address(RVA = "0x612DA50", Offset = "0x612CA50", VA = "0x612DA50")]
	protected void WriteSerializable(IXmlSerializable serializable, string name, string ns, bool isNullable)
	{
	}

	[Token(Token = "0x6000E36")]
	[Address(RVA = "0x612DA60", Offset = "0x612CA60", VA = "0x612DA60")]
	protected void WriteSerializable(IXmlSerializable serializable, string name, string ns, bool isNullable, bool wrapped)
	{
	}

	[Token(Token = "0x6000E37")]
	[Address(RVA = "0x612DC30", Offset = "0x612CC30", VA = "0x612DC30")]
	protected void WriteStartDocument()
	{
	}

	[Token(Token = "0x6000E38")]
	[Address(RVA = "0x612C2F0", Offset = "0x612B2F0", VA = "0x612C2F0")]
	protected void WriteStartElement(string name, string ns)
	{
	}

	[Token(Token = "0x6000E39")]
	[Address(RVA = "0x612D180", Offset = "0x612C180", VA = "0x612D180")]
	protected void WriteStartElement(string name, string ns, bool writePrefixed)
	{
	}

	[Token(Token = "0x6000E3A")]
	[Address(RVA = "0x612DC90", Offset = "0x612CC90", VA = "0x612DC90")]
	protected void WriteStartElement(string name, string ns, object o)
	{
	}

	[Token(Token = "0x6000E3B")]
	[Address(RVA = "0x612DC80", Offset = "0x612CC80", VA = "0x612DC80")]
	protected void WriteStartElement(string name, string ns, object o, bool writePrefixed)
	{
	}

	[Token(Token = "0x6000E3C")]
	[Address(RVA = "0x612DCA0", Offset = "0x612CCA0", VA = "0x612DCA0")]
	private void WriteStartElement(string name, string ns, object o, bool writePrefixed, ICollection namespaces)
	{
	}

	[Token(Token = "0x6000E3D")]
	[Address(RVA = "0x612E6B0", Offset = "0x612D6B0", VA = "0x612E6B0")]
	protected void WriteTypedPrimitive(string name, string ns, object o, bool xsiType)
	{
	}

	[Token(Token = "0x6000E3E")]
	[Address(RVA = "0x612E9E0", Offset = "0x612D9E0", VA = "0x612E9E0")]
	protected void WriteValue(string value)
	{
	}

	[Token(Token = "0x6000E3F")]
	[Address(RVA = "0x612EA10", Offset = "0x612DA10", VA = "0x612EA10")]
	protected void WriteXmlAttribute(XmlNode node, object container)
	{
	}

	[Token(Token = "0x6000E40")]
	[Address(RVA = "0x612C310", Offset = "0x612B310", VA = "0x612C310")]
	protected void WriteXsiType(string name, string ns)
	{
	}
}
