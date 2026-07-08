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
		[Address(RVA = "0x4434420", Offset = "0x4434420", VA = "0x4434420")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006C5")]
	private bool HasSchema
	{
		[Token(Token = "0x6001A3B")]
		[Address(RVA = "0x44360F0", Offset = "0x44360F0", VA = "0x44360F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006C6")]
	public override bool PreserveWhitespace
	{
		[Token(Token = "0x6001A3C")]
		[Address(RVA = "0x4439340", Offset = "0x4439340", VA = "0x4439340", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006C7")]
	private bool HasIdentityConstraints
	{
		[Token(Token = "0x6001A46")]
		[Address(RVA = "0x4437770", Offset = "0x4437770", VA = "0x4437770")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001A29")]
	[Address(RVA = "0x4433DC0", Offset = "0x4433DC0", VA = "0x4433DC0")]
	internal XsdValidator(BaseValidator validator)
	{
	}

	[Token(Token = "0x6001A2A")]
	[Address(RVA = "0x4434220", Offset = "0x4434220", VA = "0x4434220")]
	internal XsdValidator(XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling)
	{
	}

	[Token(Token = "0x6001A2B")]
	[Address(RVA = "0x4433DE0", Offset = "0x4433DE0", VA = "0x4433DE0")]
	private void Init()
	{
	}

	[Token(Token = "0x6001A2C")]
	[Address(RVA = "0x4434380", Offset = "0x4434380", VA = "0x4434380", Slot = "5")]
	public override void Validate()
	{
	}

	[Token(Token = "0x6001A2D")]
	[Address(RVA = "0x4434AE0", Offset = "0x4434AE0", VA = "0x4434AE0", Slot = "6")]
	public override void CompleteValidation()
	{
	}

	[Token(Token = "0x6001A2F")]
	[Address(RVA = "0x4434430", Offset = "0x4434430", VA = "0x4434430")]
	private void ProcessInlineSchema()
	{
	}

	[Token(Token = "0x6001A30")]
	[Address(RVA = "0x4434730", Offset = "0x4434730", VA = "0x4434730")]
	private void ValidateElement()
	{
	}

	[Token(Token = "0x6001A31")]
	[Address(RVA = "0x4434C40", Offset = "0x4434C40", VA = "0x4434C40")]
	private object ValidateChildElement()
	{
		return null;
	}

	[Token(Token = "0x6001A32")]
	[Address(RVA = "0x4434EA0", Offset = "0x4434EA0", VA = "0x4434EA0")]
	private void ProcessElement(object particle)
	{
	}

	[Token(Token = "0x6001A33")]
	[Address(RVA = "0x44352E0", Offset = "0x44352E0", VA = "0x44352E0")]
	private void ProcessXsiAttributes(out XmlQualifiedName xsiType, out string xsiNil)
	{
	}

	[Token(Token = "0x6001A34")]
	[Address(RVA = "0x44348D0", Offset = "0x44348D0", VA = "0x44348D0")]
	private void ValidateEndElement()
	{
	}

	[Token(Token = "0x6001A35")]
	[Address(RVA = "0x4435220", Offset = "0x4435220", VA = "0x4435220")]
	private SchemaElementDecl FastGetElementDecl(object particle)
	{
		return null;
	}

	[Token(Token = "0x6001A36")]
	[Address(RVA = "0x4435C90", Offset = "0x4435C90", VA = "0x4435C90")]
	private SchemaElementDecl ThoroughGetElementDecl(SchemaElementDecl elementDecl, XmlQualifiedName xsiType, string xsiNil)
	{
		return null;
	}

	[Token(Token = "0x6001A37")]
	[Address(RVA = "0x4436150", Offset = "0x4436150", VA = "0x4436150")]
	private void ValidateStartElement()
	{
	}

	[Token(Token = "0x6001A38")]
	[Address(RVA = "0x4436AD0", Offset = "0x4436AD0", VA = "0x4436AD0")]
	private void ValidateEndStartElement()
	{
	}

	[Token(Token = "0x6001A39")]
	[Address(RVA = "0x4438CB0", Offset = "0x4438CB0", VA = "0x4438CB0")]
	private void LoadSchemaFromLocation(string uri, string url)
	{
	}

	[Token(Token = "0x6001A3A")]
	[Address(RVA = "0x4436FB0", Offset = "0x4436FB0", VA = "0x4436FB0")]
	private void LoadSchema(string uri, string url)
	{
	}

	[Token(Token = "0x6001A3D")]
	[Address(RVA = "0x4439370", Offset = "0x4439370", VA = "0x4439370")]
	private void ProcessTokenizedType(XmlTokenizedType ttype, string name)
	{
	}

	[Token(Token = "0x6001A3E")]
	[Address(RVA = "0x4437170", Offset = "0x4437170", VA = "0x4437170")]
	private void CheckValue(string value, SchemaAttDef attdef)
	{
	}

	[Token(Token = "0x6001A3F")]
	[Address(RVA = "0x44395F0", Offset = "0x44395F0", VA = "0x44395F0")]
	internal void AddID(string name, object node)
	{
	}

	[Token(Token = "0x6001A40")]
	[Address(RVA = "0x4439690", Offset = "0x4439690", VA = "0x4439690", Slot = "7")]
	public override object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x6001A41")]
	[Address(RVA = "0x4434E50", Offset = "0x4434E50", VA = "0x4434E50")]
	public bool IsXSDRoot(string localName, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A42")]
	[Address(RVA = "0x4434240", Offset = "0x4434240", VA = "0x4434240")]
	private void Push(XmlQualifiedName elementName)
	{
	}

	[Token(Token = "0x6001A43")]
	[Address(RVA = "0x44386C0", Offset = "0x44386C0", VA = "0x44386C0")]
	private void Pop()
	{
	}

	[Token(Token = "0x6001A44")]
	[Address(RVA = "0x4434AF0", Offset = "0x4434AF0", VA = "0x4434AF0")]
	private void CheckForwardRefs()
	{
	}

	[Token(Token = "0x6001A45")]
	[Address(RVA = "0x4436110", Offset = "0x4436110", VA = "0x4436110")]
	private void ValidateStartElementIdentityConstraints()
	{
	}

	[Token(Token = "0x6001A47")]
	[Address(RVA = "0x44396C0", Offset = "0x44396C0", VA = "0x44396C0")]
	private void AddIdentityConstraints()
	{
	}

	[Token(Token = "0x6001A48")]
	[Address(RVA = "0x4439BC0", Offset = "0x4439BC0", VA = "0x4439BC0")]
	private void ElementIdentityConstraints()
	{
	}

	[Token(Token = "0x6001A49")]
	[Address(RVA = "0x4438810", Offset = "0x4438810", VA = "0x4438810")]
	private void AttributeIdentityConstraints(string name, string ns, object obj, string sobj, SchemaAttDef attdef)
	{
	}

	[Token(Token = "0x6001A4A")]
	[Address(RVA = "0x4438790", Offset = "0x4438790", VA = "0x4438790")]
	private object UnWrapUnion(object typedValue)
	{
		return null;
	}

	[Token(Token = "0x6001A4B")]
	[Address(RVA = "0x4437780", Offset = "0x4437780", VA = "0x4437780")]
	private void EndElementIdentityConstraints()
	{
	}
}
