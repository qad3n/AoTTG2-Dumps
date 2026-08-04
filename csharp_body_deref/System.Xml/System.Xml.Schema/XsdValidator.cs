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
		[Address(RVA = "0x4771B80", Offset = "0x4771B80", VA = "0x4771B80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006C5")]
	private bool HasSchema
	{
		[Token(Token = "0x6001A3B")]
		[Address(RVA = "0x4773850", Offset = "0x4773850", VA = "0x4773850")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006C6")]
	public override bool PreserveWhitespace
	{
		[Token(Token = "0x6001A3C")]
		[Address(RVA = "0x4776AA0", Offset = "0x4776AA0", VA = "0x4776AA0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006C7")]
	private bool HasIdentityConstraints
	{
		[Token(Token = "0x6001A46")]
		[Address(RVA = "0x4774ED0", Offset = "0x4774ED0", VA = "0x4774ED0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001A29")]
	[Address(RVA = "0x4771520", Offset = "0x4771520", VA = "0x4771520")]
	internal XsdValidator(BaseValidator validator)
	{
	}

	[Token(Token = "0x6001A2A")]
	[Address(RVA = "0x4771980", Offset = "0x4771980", VA = "0x4771980")]
	internal XsdValidator(XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling)
	{
	}

	[Token(Token = "0x6001A2B")]
	[Address(RVA = "0x4771540", Offset = "0x4771540", VA = "0x4771540")]
	private void Init()
	{
	}

	[Token(Token = "0x6001A2C")]
	[Address(RVA = "0x4771AE0", Offset = "0x4771AE0", VA = "0x4771AE0", Slot = "5")]
	public override void Validate()
	{
	}

	[Token(Token = "0x6001A2D")]
	[Address(RVA = "0x4772240", Offset = "0x4772240", VA = "0x4772240", Slot = "6")]
	public override void CompleteValidation()
	{
	}

	[Token(Token = "0x6001A2F")]
	[Address(RVA = "0x4771B90", Offset = "0x4771B90", VA = "0x4771B90")]
	private void ProcessInlineSchema()
	{
	}

	[Token(Token = "0x6001A30")]
	[Address(RVA = "0x4771E90", Offset = "0x4771E90", VA = "0x4771E90")]
	private void ValidateElement()
	{
	}

	[Token(Token = "0x6001A31")]
	[Address(RVA = "0x47723A0", Offset = "0x47723A0", VA = "0x47723A0")]
	private object ValidateChildElement()
	{
		return null;
	}

	[Token(Token = "0x6001A32")]
	[Address(RVA = "0x4772600", Offset = "0x4772600", VA = "0x4772600")]
	private void ProcessElement(object particle)
	{
	}

	[Token(Token = "0x6001A33")]
	[Address(RVA = "0x4772A40", Offset = "0x4772A40", VA = "0x4772A40")]
	private void ProcessXsiAttributes(out XmlQualifiedName xsiType, out string xsiNil)
	{
	}

	[Token(Token = "0x6001A34")]
	[Address(RVA = "0x4772030", Offset = "0x4772030", VA = "0x4772030")]
	private void ValidateEndElement()
	{
	}

	[Token(Token = "0x6001A35")]
	[Address(RVA = "0x4772980", Offset = "0x4772980", VA = "0x4772980")]
	private SchemaElementDecl FastGetElementDecl(object particle)
	{
		return null;
	}

	[Token(Token = "0x6001A36")]
	[Address(RVA = "0x47733F0", Offset = "0x47733F0", VA = "0x47733F0")]
	private SchemaElementDecl ThoroughGetElementDecl(SchemaElementDecl elementDecl, XmlQualifiedName xsiType, string xsiNil)
	{
		return null;
	}

	[Token(Token = "0x6001A37")]
	[Address(RVA = "0x47738B0", Offset = "0x47738B0", VA = "0x47738B0")]
	private void ValidateStartElement()
	{
	}

	[Token(Token = "0x6001A38")]
	[Address(RVA = "0x4774230", Offset = "0x4774230", VA = "0x4774230")]
	private void ValidateEndStartElement()
	{
	}

	[Token(Token = "0x6001A39")]
	[Address(RVA = "0x4776410", Offset = "0x4776410", VA = "0x4776410")]
	private void LoadSchemaFromLocation(string uri, string url)
	{
	}

	[Token(Token = "0x6001A3A")]
	[Address(RVA = "0x4774710", Offset = "0x4774710", VA = "0x4774710")]
	private void LoadSchema(string uri, string url)
	{
	}

	[Token(Token = "0x6001A3D")]
	[Address(RVA = "0x4776AD0", Offset = "0x4776AD0", VA = "0x4776AD0")]
	private void ProcessTokenizedType(XmlTokenizedType ttype, string name)
	{
	}

	[Token(Token = "0x6001A3E")]
	[Address(RVA = "0x47748D0", Offset = "0x47748D0", VA = "0x47748D0")]
	private void CheckValue(string value, SchemaAttDef attdef)
	{
	}

	[Token(Token = "0x6001A3F")]
	[Address(RVA = "0x4776D50", Offset = "0x4776D50", VA = "0x4776D50")]
	internal void AddID(string name, object node)
	{
	}

	[Token(Token = "0x6001A40")]
	[Address(RVA = "0x4776DF0", Offset = "0x4776DF0", VA = "0x4776DF0", Slot = "7")]
	public override object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x6001A41")]
	[Address(RVA = "0x47725B0", Offset = "0x47725B0", VA = "0x47725B0")]
	public bool IsXSDRoot(string localName, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A42")]
	[Address(RVA = "0x47719A0", Offset = "0x47719A0", VA = "0x47719A0")]
	private void Push(XmlQualifiedName elementName)
	{
	}

	[Token(Token = "0x6001A43")]
	[Address(RVA = "0x4775E20", Offset = "0x4775E20", VA = "0x4775E20")]
	private void Pop()
	{
	}

	[Token(Token = "0x6001A44")]
	[Address(RVA = "0x4772250", Offset = "0x4772250", VA = "0x4772250")]
	private void CheckForwardRefs()
	{
	}

	[Token(Token = "0x6001A45")]
	[Address(RVA = "0x4773870", Offset = "0x4773870", VA = "0x4773870")]
	private void ValidateStartElementIdentityConstraints()
	{
	}

	[Token(Token = "0x6001A47")]
	[Address(RVA = "0x4776E20", Offset = "0x4776E20", VA = "0x4776E20")]
	private void AddIdentityConstraints()
	{
	}

	[Token(Token = "0x6001A48")]
	[Address(RVA = "0x4777320", Offset = "0x4777320", VA = "0x4777320")]
	private void ElementIdentityConstraints()
	{
	}

	[Token(Token = "0x6001A49")]
	[Address(RVA = "0x4775F70", Offset = "0x4775F70", VA = "0x4775F70")]
	private void AttributeIdentityConstraints(string name, string ns, object obj, string sobj, SchemaAttDef attdef)
	{
	}

	[Token(Token = "0x6001A4A")]
	[Address(RVA = "0x4775EF0", Offset = "0x4775EF0", VA = "0x4775EF0")]
	private object UnWrapUnion(object typedValue)
	{
		return null;
	}

	[Token(Token = "0x6001A4B")]
	[Address(RVA = "0x4774EE0", Offset = "0x4774EE0", VA = "0x4774EE0")]
	private void EndElementIdentityConstraints()
	{
	}
}
