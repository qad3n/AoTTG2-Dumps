// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XsdValidator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000285")]
internal sealed class XsdValidator : BaseValidator
{
	[Token(Token = "0x4000DCE")]
	[FieldOffset(Offset = "0x7C")]
	private int startIDConstraint;

	[Token(Token = "0x4000DCF")]
	[FieldOffset(Offset = "0x80")]
	private HWStack validationStack;

	[Token(Token = "0x4000DD0")]
	[FieldOffset(Offset = "0x88")]
	private Hashtable attPresence;

	[Token(Token = "0x4000DD1")]
	[FieldOffset(Offset = "0x90")]
	private XmlNamespaceManager nsManager;

	[Token(Token = "0x4000DD2")]
	[FieldOffset(Offset = "0x98")]
	private bool bManageNamespaces;

	[Token(Token = "0x4000DD3")]
	[FieldOffset(Offset = "0xA0")]
	private Hashtable IDs;

	[Token(Token = "0x4000DD4")]
	[FieldOffset(Offset = "0xA8")]
	private IdRefNode idRefListHead;

	[Token(Token = "0x4000DD5")]
	[FieldOffset(Offset = "0xB0")]
	private Parser inlineSchemaParser;

	[Token(Token = "0x4000DD6")]
	[FieldOffset(Offset = "0xB8")]
	private XmlSchemaContentProcessing processContents;

	[Token(Token = "0x4000DD7")]
	[FieldOffset(Offset = "0x0")]
	private static readonly XmlSchemaDatatype dtCDATA;

	[Token(Token = "0x4000DD8")]
	[FieldOffset(Offset = "0x8")]
	private static readonly XmlSchemaDatatype dtQName;

	[Token(Token = "0x4000DD9")]
	[FieldOffset(Offset = "0x10")]
	private static readonly XmlSchemaDatatype dtStringArray;

	[Token(Token = "0x4000DDA")]
	[FieldOffset(Offset = "0xC0")]
	private string NsXmlNs;

	[Token(Token = "0x4000DDB")]
	[FieldOffset(Offset = "0xC8")]
	private string NsXs;

	[Token(Token = "0x4000DDC")]
	[FieldOffset(Offset = "0xD0")]
	private string NsXsi;

	[Token(Token = "0x4000DDD")]
	[FieldOffset(Offset = "0xD8")]
	private string XsiType;

	[Token(Token = "0x4000DDE")]
	[FieldOffset(Offset = "0xE0")]
	private string XsiNil;

	[Token(Token = "0x4000DDF")]
	[FieldOffset(Offset = "0xE8")]
	private string XsiSchemaLocation;

	[Token(Token = "0x4000DE0")]
	[FieldOffset(Offset = "0xF0")]
	private string XsiNoNamespaceSchemaLocation;

	[Token(Token = "0x4000DE1")]
	[FieldOffset(Offset = "0xF8")]
	private string XsdSchema;

	[Token(Token = "0x170006C4")]
	private bool IsInlineSchemaStarted
	{
		[Token(Token = "0x6001A2E")]
		[Address(RVA = "0x6077A80", Offset = "0x6076A80", VA = "0x6077A80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006C5")]
	private bool HasSchema
	{
		[Token(Token = "0x6001A3B")]
		[Address(RVA = "0x6079630", Offset = "0x6078630", VA = "0x6079630")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006C6")]
	public override bool PreserveWhitespace
	{
		[Token(Token = "0x6001A3C")]
		[Address(RVA = "0x607C210", Offset = "0x607B210", VA = "0x607C210", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006C7")]
	private bool HasIdentityConstraints
	{
		[Token(Token = "0x6001A46")]
		[Address(RVA = "0x607A980", Offset = "0x6079980", VA = "0x607A980")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001A29")]
	[Address(RVA = "0x6077410", Offset = "0x6076410", VA = "0x6077410")]
	internal XsdValidator(BaseValidator validator)
	{
	}

	[Token(Token = "0x6001A2A")]
	[Address(RVA = "0x6077870", Offset = "0x6076870", VA = "0x6077870")]
	internal XsdValidator(XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling)
	{
	}

	[Token(Token = "0x6001A2B")]
	[Address(RVA = "0x6077430", Offset = "0x6076430", VA = "0x6077430")]
	private void Init()
	{
	}

	[Token(Token = "0x6001A2C")]
	[Address(RVA = "0x60779E0", Offset = "0x60769E0", VA = "0x60779E0", Slot = "5")]
	public override void Validate()
	{
	}

	[Token(Token = "0x6001A2D")]
	[Address(RVA = "0x60780D0", Offset = "0x60770D0", VA = "0x60780D0", Slot = "6")]
	public override void CompleteValidation()
	{
	}

	[Token(Token = "0x6001A2F")]
	[Address(RVA = "0x6077A90", Offset = "0x6076A90", VA = "0x6077A90")]
	private void ProcessInlineSchema()
	{
	}

	[Token(Token = "0x6001A30")]
	[Address(RVA = "0x6077D30", Offset = "0x6076D30", VA = "0x6077D30")]
	private void ValidateElement()
	{
	}

	[Token(Token = "0x6001A31")]
	[Address(RVA = "0x6078220", Offset = "0x6077220", VA = "0x6078220")]
	private object ValidateChildElement()
	{
		return null;
	}

	[Token(Token = "0x6001A32")]
	[Address(RVA = "0x6078480", Offset = "0x6077480", VA = "0x6078480")]
	private void ProcessElement(object particle)
	{
	}

	[Token(Token = "0x6001A33")]
	[Address(RVA = "0x60788B0", Offset = "0x60778B0", VA = "0x60788B0")]
	private void ProcessXsiAttributes(out XmlQualifiedName xsiType, out string xsiNil)
	{
	}

	[Token(Token = "0x6001A34")]
	[Address(RVA = "0x6077ED0", Offset = "0x6076ED0", VA = "0x6077ED0")]
	private void ValidateEndElement()
	{
	}

	[Token(Token = "0x6001A35")]
	[Address(RVA = "0x60787F0", Offset = "0x60777F0", VA = "0x60787F0")]
	private SchemaElementDecl FastGetElementDecl(object particle)
	{
		return null;
	}

	[Token(Token = "0x6001A36")]
	[Address(RVA = "0x60791D0", Offset = "0x60781D0", VA = "0x60791D0")]
	private SchemaElementDecl ThoroughGetElementDecl(SchemaElementDecl elementDecl, XmlQualifiedName xsiType, string xsiNil)
	{
		return null;
	}

	[Token(Token = "0x6001A37")]
	[Address(RVA = "0x6079690", Offset = "0x6078690", VA = "0x6079690")]
	private void ValidateStartElement()
	{
	}

	[Token(Token = "0x6001A38")]
	[Address(RVA = "0x6079E60", Offset = "0x6078E60", VA = "0x6079E60")]
	private void ValidateEndStartElement()
	{
	}

	[Token(Token = "0x6001A39")]
	[Address(RVA = "0x607BCE0", Offset = "0x607ACE0", VA = "0x607BCE0")]
	private void LoadSchemaFromLocation(string uri, string url)
	{
	}

	[Token(Token = "0x6001A3A")]
	[Address(RVA = "0x607A320", Offset = "0x6079320", VA = "0x607A320")]
	private void LoadSchema(string uri, string url)
	{
	}

	[Token(Token = "0x6001A3D")]
	[Address(RVA = "0x607C240", Offset = "0x607B240", VA = "0x607C240")]
	private void ProcessTokenizedType(XmlTokenizedType ttype, string name)
	{
	}

	[Token(Token = "0x6001A3E")]
	[Address(RVA = "0x607A4E0", Offset = "0x60794E0", VA = "0x607A4E0")]
	private void CheckValue(string value, SchemaAttDef attdef)
	{
	}

	[Token(Token = "0x6001A3F")]
	[Address(RVA = "0x607C4D0", Offset = "0x607B4D0", VA = "0x607C4D0")]
	internal void AddID(string name, object node)
	{
	}

	[Token(Token = "0x6001A40")]
	[Address(RVA = "0x607C570", Offset = "0x607B570", VA = "0x607C570", Slot = "7")]
	public override object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x6001A41")]
	[Address(RVA = "0x6078430", Offset = "0x6077430", VA = "0x6078430")]
	public bool IsXSDRoot(string localName, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A42")]
	[Address(RVA = "0x6077890", Offset = "0x6076890", VA = "0x6077890")]
	private void Push(XmlQualifiedName elementName)
	{
	}

	[Token(Token = "0x6001A43")]
	[Address(RVA = "0x607B890", Offset = "0x607A890", VA = "0x607B890")]
	private void Pop()
	{
	}

	[Token(Token = "0x6001A44")]
	[Address(RVA = "0x60780E0", Offset = "0x60770E0", VA = "0x60780E0")]
	private void CheckForwardRefs()
	{
	}

	[Token(Token = "0x6001A45")]
	[Address(RVA = "0x6079650", Offset = "0x6078650", VA = "0x6079650")]
	private void ValidateStartElementIdentityConstraints()
	{
	}

	[Token(Token = "0x6001A47")]
	[Address(RVA = "0x607C5A0", Offset = "0x607B5A0", VA = "0x607C5A0")]
	private void AddIdentityConstraints()
	{
	}

	[Token(Token = "0x6001A48")]
	[Address(RVA = "0x607CA80", Offset = "0x607BA80", VA = "0x607CA80")]
	private void ElementIdentityConstraints()
	{
	}

	[Token(Token = "0x6001A49")]
	[Address(RVA = "0x607B9D0", Offset = "0x607A9D0", VA = "0x607B9D0")]
	private void AttributeIdentityConstraints(string name, string ns, object obj, string sobj, SchemaAttDef attdef)
	{
	}

	[Token(Token = "0x6001A4A")]
	[Address(RVA = "0x607B960", Offset = "0x607A960", VA = "0x607B960")]
	private object UnWrapUnion(object typedValue)
	{
		return null;
	}

	[Token(Token = "0x6001A4B")]
	[Address(RVA = "0x607A990", Offset = "0x6079990", VA = "0x607A990")]
	private void EndElementIdentityConstraints()
	{
	}
}
