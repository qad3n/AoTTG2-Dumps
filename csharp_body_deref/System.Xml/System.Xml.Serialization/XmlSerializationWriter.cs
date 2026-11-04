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
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E0F")]
	[Address(RVA = "0x2774A70", Offset = "0x2773070", VA = "0x182774A70")]
	protected XmlSerializationWriter()
	{
	}

	[Token(Token = "0x6000E10")]
	[Address(RVA = "0x2771E70", Offset = "0x2770470", VA = "0x182771E70")]
	internal void Initialize(XmlWriter writer, XmlSerializerNamespaces nss)
	{
	}

	[Token(Token = "0x6000E12")]
	[Address(RVA = "0x2771670", Offset = "0x276FC70", VA = "0x182771670")]
	protected void AddWriteCallback(Type type, string typeName, string typeNs, XmlSerializationWriteCallback callback)
	{
	}

	[Token(Token = "0x6000E13")]
	[Address(RVA = "0x2771840", Offset = "0x276FE40", VA = "0x182771840")]
	protected Exception CreateUnknownAnyElementException(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x27718C0", Offset = "0x276FEC0", VA = "0x1827718C0")]
	protected Exception CreateUnknownTypeException(object o)
	{
		return null;
	}

	[Token(Token = "0x6000E15")]
	[Address(RVA = "0x2771960", Offset = "0x276FF60", VA = "0x182771960")]
	protected Exception CreateUnknownTypeException(Type type)
	{
		return null;
	}

	[Token(Token = "0x6000E16")]
	[Address(RVA = "0x27719E0", Offset = "0x276FFE0", VA = "0x1827719E0")]
	protected string FromXmlQualifiedName(XmlQualifiedName xmlQualifiedName)
	{
		return null;
	}

	[Token(Token = "0x6000E17")]
	[Address(RVA = "0x2771AA0", Offset = "0x27700A0", VA = "0x182771AA0")]
	private string GetId(object o, bool addToReferencesList)
	{
		return null;
	}

	[Token(Token = "0x6000E18")]
	[Address(RVA = "0x2771780", Offset = "0x276FD80", VA = "0x182771780")]
	private bool AlreadyQueued(object ob)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E19")]
	[Address(RVA = "0x2771BB0", Offset = "0x27701B0", VA = "0x182771BB0")]
	private string GetNamespacePrefix(string ns)
	{
		return null;
	}

	[Token(Token = "0x6000E1A")]
	[Address(RVA = "0x2771CD0", Offset = "0x27702D0", VA = "0x182771CD0")]
	private string GetQualifiedName(string name, string ns)
	{
		return null;
	}

	[Token(Token = "0x6000E1B")]
	protected abstract void InitCallbacks();

	[Token(Token = "0x6000E1C")]
	[Address(RVA = "0x2772080", Offset = "0x2770680", VA = "0x182772080")]
	protected void TopLevelElement()
	{
	}

	[Token(Token = "0x6000E1D")]
	[Address(RVA = "0x27723C0", Offset = "0x27709C0", VA = "0x1827723C0")]
	protected void WriteAttribute(string localName, string ns, string value)
	{
	}

	[Token(Token = "0x6000E1E")]
	[Address(RVA = "0x2772380", Offset = "0x2770980", VA = "0x182772380")]
	protected void WriteAttribute(string prefix, string localName, string ns, string value)
	{
	}

	[Token(Token = "0x6000E1F")]
	[Address(RVA = "0x27748C0", Offset = "0x2772EC0", VA = "0x1827748C0")]
	private void WriteXmlNode(XmlNode node)
	{
	}

	[Token(Token = "0x6000E20")]
	[Address(RVA = "0x2772400", Offset = "0x2770A00", VA = "0x182772400")]
	protected void WriteElementEncoded(XmlNode node, string name, string ns, bool isNullable, bool any)
	{
	}

	[Token(Token = "0x6000E21")]
	[Address(RVA = "0x27724D0", Offset = "0x2770AD0", VA = "0x1827724D0")]
	protected void WriteElementLiteral(XmlNode node, string name, string ns, bool isNullable, bool any)
	{
	}

	[Token(Token = "0x6000E22")]
	[Address(RVA = "0x2772780", Offset = "0x2770D80", VA = "0x182772780")]
	protected void WriteElementQualifiedName(string localName, string ns, XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6000E23")]
	[Address(RVA = "0x27725A0", Offset = "0x2770BA0", VA = "0x1827725A0")]
	protected void WriteElementQualifiedName(string localName, string ns, XmlQualifiedName value, XmlQualifiedName xsiType)
	{
	}

	[Token(Token = "0x6000E24")]
	[Address(RVA = "0x27727A0", Offset = "0x2770DA0", VA = "0x1827727A0")]
	protected void WriteElementString(string localName, string ns, string value)
	{
	}

	[Token(Token = "0x6000E25")]
	[Address(RVA = "0x27727C0", Offset = "0x2770DC0", VA = "0x1827727C0")]
	protected void WriteElementString(string localName, string ns, string value, XmlQualifiedName xsiType)
	{
	}

	[Token(Token = "0x6000E26")]
	[Address(RVA = "0x2758820", Offset = "0x2756E20", VA = "0x182758820")]
	protected void WriteEndElement()
	{
	}

	[Token(Token = "0x6000E27")]
	[Address(RVA = "0x2772950", Offset = "0x2770F50", VA = "0x182772950")]
	protected void WriteEndElement(object o)
	{
	}

	[Token(Token = "0x6000E28")]
	[Address(RVA = "0x27729A0", Offset = "0x2770FA0", VA = "0x1827729A0")]
	protected void WriteNamespaceDeclarations(XmlSerializerNamespaces xmlns)
	{
	}

	[Token(Token = "0x6000E29")]
	[Address(RVA = "0x2772EB0", Offset = "0x27714B0", VA = "0x182772EB0")]
	protected void WriteNullableQualifiedNameEncoded(string name, string ns, XmlQualifiedName value, XmlQualifiedName xsiType)
	{
	}

	[Token(Token = "0x6000E2A")]
	[Address(RVA = "0x2772F40", Offset = "0x2771540", VA = "0x182772F40")]
	protected void WriteNullableQualifiedNameLiteral(string name, string ns, XmlQualifiedName value)
	{
	}

	[Token(Token = "0x6000E2B")]
	[Address(RVA = "0x2772FD0", Offset = "0x27715D0", VA = "0x182772FD0")]
	protected void WriteNullableStringEncoded(string name, string ns, string value, XmlQualifiedName xsiType)
	{
	}

	[Token(Token = "0x6000E2C")]
	[Address(RVA = "0x2772FF0", Offset = "0x27715F0", VA = "0x182772FF0")]
	protected void WriteNullableStringLiteral(string name, string ns, string value)
	{
	}

	[Token(Token = "0x6000E2D")]
	[Address(RVA = "0x2772D20", Offset = "0x2771320", VA = "0x182772D20")]
	protected void WriteNullTagEncoded(string name, string ns)
	{
	}

	[Token(Token = "0x6000E2E")]
	[Address(RVA = "0x2772DE0", Offset = "0x27713E0", VA = "0x182772DE0")]
	protected void WriteNullTagLiteral(string name, string ns)
	{
	}

	[Token(Token = "0x6000E2F")]
	[Address(RVA = "0x2773020", Offset = "0x2771620", VA = "0x182773020")]
	protected void WritePotentiallyReferencingElement(string n, string ns, object o, Type ambientType, bool suppressReference, bool isNullable)
	{
	}

	[Token(Token = "0x6000E30")]
	[Address(RVA = "0x27734D0", Offset = "0x2771AD0", VA = "0x1827734D0")]
	protected void WriteReferencedElements()
	{
	}

	[Token(Token = "0x6000E31")]
	[Address(RVA = "0x2771FA0", Offset = "0x27705A0", VA = "0x182771FA0")]
	private bool IsPrimitiveArray(TypeData td)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E32")]
	[Address(RVA = "0x2772090", Offset = "0x2770690", VA = "0x182772090")]
	private void WriteArray(object o, TypeData td)
	{
	}

	[Token(Token = "0x6000E33")]
	[Address(RVA = "0x2773740", Offset = "0x2771D40", VA = "0x182773740")]
	protected void WriteReferencingElement(string n, string ns, object o, bool isNullable)
	{
	}

	[Token(Token = "0x6000E34")]
	[Address(RVA = "0x27717C0", Offset = "0x276FDC0", VA = "0x1827717C0")]
	private void CheckReferenceQueue()
	{
	}

	[Token(Token = "0x6000E35")]
	[Address(RVA = "0x27739C0", Offset = "0x2771FC0", VA = "0x1827739C0")]
	protected void WriteSerializable(IXmlSerializable serializable, string name, string ns, bool isNullable)
	{
	}

	[Token(Token = "0x6000E36")]
	[Address(RVA = "0x2773890", Offset = "0x2771E90", VA = "0x182773890")]
	protected void WriteSerializable(IXmlSerializable serializable, string name, string ns, bool isNullable, bool wrapped)
	{
	}

	[Token(Token = "0x6000E37")]
	[Address(RVA = "0x2773AE0", Offset = "0x27720E0", VA = "0x182773AE0")]
	protected void WriteStartDocument()
	{
	}

	[Token(Token = "0x6000E38")]
	[Address(RVA = "0x2773B70", Offset = "0x2772170", VA = "0x182773B70")]
	protected void WriteStartElement(string name, string ns)
	{
	}

	[Token(Token = "0x6000E39")]
	[Address(RVA = "0x2773B40", Offset = "0x2772140", VA = "0x182773B40")]
	protected void WriteStartElement(string name, string ns, bool writePrefixed)
	{
	}

	[Token(Token = "0x6000E3A")]
	[Address(RVA = "0x2774220", Offset = "0x2772820", VA = "0x182774220")]
	protected void WriteStartElement(string name, string ns, object o)
	{
	}

	[Token(Token = "0x6000E3B")]
	[Address(RVA = "0x27741F0", Offset = "0x27727F0", VA = "0x1827741F0")]
	protected void WriteStartElement(string name, string ns, object o, bool writePrefixed)
	{
	}

	[Token(Token = "0x6000E3C")]
	[Address(RVA = "0x2773BA0", Offset = "0x27721A0", VA = "0x182773BA0")]
	private void WriteStartElement(string name, string ns, object o, bool writePrefixed, ICollection namespaces)
	{
	}

	[Token(Token = "0x6000E3D")]
	[Address(RVA = "0x2774250", Offset = "0x2772850", VA = "0x182774250")]
	protected void WriteTypedPrimitive(string name, string ns, object o, bool xsiType)
	{
	}

	[Token(Token = "0x6000E3E")]
	[Address(RVA = "0x27745B0", Offset = "0x2772BB0", VA = "0x1827745B0")]
	protected void WriteValue(string value)
	{
	}

	[Token(Token = "0x6000E3F")]
	[Address(RVA = "0x27745F0", Offset = "0x2772BF0", VA = "0x1827745F0")]
	protected void WriteXmlAttribute(XmlNode node, object container)
	{
	}

	[Token(Token = "0x6000E40")]
	[Address(RVA = "0x2774990", Offset = "0x2772F90", VA = "0x182774990")]
	protected void WriteXsiType(string name, string ns)
	{
	}
}
