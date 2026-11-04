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
	[FieldOffset(Offset = "0x80")]
	private int startIDConstraint;

	[Token(Token = "0x4000DCF")]
	[FieldOffset(Offset = "0x88")]
	private HWStack validationStack;

	[Token(Token = "0x4000DD0")]
	[FieldOffset(Offset = "0x90")]
	private Hashtable attPresence;

	[Token(Token = "0x4000DD1")]
	[FieldOffset(Offset = "0x98")]
	private XmlNamespaceManager nsManager;

	[Token(Token = "0x4000DD2")]
	[FieldOffset(Offset = "0xA0")]
	private bool bManageNamespaces;

	[Token(Token = "0x4000DD3")]
	[FieldOffset(Offset = "0xA8")]
	private Hashtable IDs;

	[Token(Token = "0x4000DD4")]
	[FieldOffset(Offset = "0xB0")]
	private IdRefNode idRefListHead;

	[Token(Token = "0x4000DD5")]
	[FieldOffset(Offset = "0xB8")]
	private Parser inlineSchemaParser;

	[Token(Token = "0x4000DD6")]
	[FieldOffset(Offset = "0xC0")]
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
	[FieldOffset(Offset = "0xC8")]
	private string NsXmlNs;

	[Token(Token = "0x4000DDB")]
	[FieldOffset(Offset = "0xD0")]
	private string NsXs;

	[Token(Token = "0x4000DDC")]
	[FieldOffset(Offset = "0xD8")]
	private string NsXsi;

	[Token(Token = "0x4000DDD")]
	[FieldOffset(Offset = "0xE0")]
	private string XsiType;

	[Token(Token = "0x4000DDE")]
	[FieldOffset(Offset = "0xE8")]
	private string XsiNil;

	[Token(Token = "0x4000DDF")]
	[FieldOffset(Offset = "0xF0")]
	private string XsiSchemaLocation;

	[Token(Token = "0x4000DE0")]
	[FieldOffset(Offset = "0xF8")]
	private string XsiNoNamespaceSchemaLocation;

	[Token(Token = "0x4000DE1")]
	[FieldOffset(Offset = "0x100")]
	private string XsdSchema;

	[Token(Token = "0x170006C4")]
	private bool IsInlineSchemaStarted
	{
		[Token(Token = "0x6001A2E")]
		[Address(RVA = "0x2663FD0", Offset = "0x26625D0", VA = "0x182663FD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006C5")]
	private bool HasSchema
	{
		[Token(Token = "0x6001A3B")]
		[Address(RVA = "0x2663FB0", Offset = "0x26625B0", VA = "0x182663FB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006C6")]
	public override bool PreserveWhitespace
	{
		[Token(Token = "0x6001A3C")]
		[Address(RVA = "0x2663FE0", Offset = "0x26625E0", VA = "0x182663FE0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170006C7")]
	private bool HasIdentityConstraints
	{
		[Token(Token = "0x6001A46")]
		[Address(RVA = "0x26CEB60", Offset = "0x26CD160", VA = "0x1826CEB60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6001A29")]
	[Address(RVA = "0x26CEB30", Offset = "0x26CD130", VA = "0x1826CEB30")]
	internal XsdValidator(BaseValidator validator)
	{
	}

	[Token(Token = "0x6001A2A")]
	[Address(RVA = "0x26CEB00", Offset = "0x26CD100", VA = "0x1826CEB00")]
	internal XsdValidator(XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling)
	{
	}

	[Token(Token = "0x6001A2B")]
	[Address(RVA = "0x26CAD90", Offset = "0x26C9390", VA = "0x1826CAD90")]
	private void Init()
	{
	}

	[Token(Token = "0x6001A2C")]
	[Address(RVA = "0x26CE770", Offset = "0x26CCD70", VA = "0x1826CE770", Slot = "5")]
	public override void Validate()
	{
	}

	[Token(Token = "0x6001A2D")]
	[Address(RVA = "0x26C96E0", Offset = "0x26C7CE0", VA = "0x1826C96E0", Slot = "6")]
	public override void CompleteValidation()
	{
	}

	[Token(Token = "0x6001A2F")]
	[Address(RVA = "0x26CC190", Offset = "0x26CA790", VA = "0x1826CC190")]
	private void ProcessInlineSchema()
	{
	}

	[Token(Token = "0x6001A30")]
	[Address(RVA = "0x26CD6E0", Offset = "0x26CBCE0", VA = "0x1826CD6E0")]
	private void ValidateElement()
	{
	}

	[Token(Token = "0x6001A31")]
	[Address(RVA = "0x26CD470", Offset = "0x26CBA70", VA = "0x1826CD470")]
	private object ValidateChildElement()
	{
		return null;
	}

	[Token(Token = "0x6001A32")]
	[Address(RVA = "0x26CBA00", Offset = "0x26CA000", VA = "0x1826CBA00")]
	private void ProcessElement(object particle)
	{
	}

	[Token(Token = "0x6001A33")]
	[Address(RVA = "0x26CC690", Offset = "0x26CAC90", VA = "0x1826CC690")]
	private void ProcessXsiAttributes(out XmlQualifiedName xsiType, out string xsiNil)
	{
	}

	[Token(Token = "0x6001A34")]
	[Address(RVA = "0x26CD8C0", Offset = "0x26CBEC0", VA = "0x1826CD8C0")]
	private void ValidateEndElement()
	{
	}

	[Token(Token = "0x6001A35")]
	[Address(RVA = "0x26CACB0", Offset = "0x26C92B0", VA = "0x1826CACB0")]
	private SchemaElementDecl FastGetElementDecl(object particle)
	{
		return null;
	}

	[Token(Token = "0x6001A36")]
	[Address(RVA = "0x26CCFD0", Offset = "0x26CB5D0", VA = "0x1826CCFD0")]
	private SchemaElementDecl ThoroughGetElementDecl(SchemaElementDecl elementDecl, XmlQualifiedName xsiType, string xsiNil)
	{
		return null;
	}

	[Token(Token = "0x6001A37")]
	[Address(RVA = "0x26CE070", Offset = "0x26CC670", VA = "0x1826CE070")]
	private void ValidateStartElement()
	{
	}

	[Token(Token = "0x6001A38")]
	[Address(RVA = "0x26CDBF0", Offset = "0x26CC1F0", VA = "0x1826CDBF0")]
	private void ValidateEndStartElement()
	{
	}

	[Token(Token = "0x6001A39")]
	[Address(RVA = "0x26CB200", Offset = "0x26C9800", VA = "0x1826CB200")]
	private void LoadSchemaFromLocation(string uri, string url)
	{
	}

	[Token(Token = "0x6001A3A")]
	[Address(RVA = "0x26CB730", Offset = "0x26C9D30", VA = "0x1826CB730")]
	private void LoadSchema(string uri, string url)
	{
	}

	[Token(Token = "0x6001A3D")]
	[Address(RVA = "0x26CC3F0", Offset = "0x26CA9F0", VA = "0x1826CC3F0")]
	private void ProcessTokenizedType(XmlTokenizedType ttype, string name)
	{
	}

	[Token(Token = "0x6001A3E")]
	[Address(RVA = "0x26C9830", Offset = "0x26C7E30", VA = "0x1826C9830")]
	private void CheckValue(string value, SchemaAttDef attdef)
	{
	}

	[Token(Token = "0x6001A3F")]
	[Address(RVA = "0x26C8D70", Offset = "0x26C7370", VA = "0x1826C8D70")]
	internal void AddID(string name, object node)
	{
	}

	[Token(Token = "0x6001A40")]
	[Address(RVA = "0x2661630", Offset = "0x265FC30", VA = "0x182661630", Slot = "7")]
	public override object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x6001A41")]
	[Address(RVA = "0x26CB1B0", Offset = "0x26C97B0", VA = "0x1826CB1B0")]
	public bool IsXSDRoot(string localName, string ns)
	{
		return default(bool);
	}

	[Token(Token = "0x6001A42")]
	[Address(RVA = "0x26CCE30", Offset = "0x26CB430", VA = "0x1826CCE30")]
	private void Push(XmlQualifiedName elementName)
	{
	}

	[Token(Token = "0x6001A43")]
	[Address(RVA = "0x26CB900", Offset = "0x26C9F00", VA = "0x1826CB900")]
	private void Pop()
	{
	}

	[Token(Token = "0x6001A44")]
	[Address(RVA = "0x26C96E0", Offset = "0x26C7CE0", VA = "0x1826C96E0")]
	private void CheckForwardRefs()
	{
	}

	[Token(Token = "0x6001A45")]
	[Address(RVA = "0x26CE010", Offset = "0x26CC610", VA = "0x1826CE010")]
	private void ValidateStartElementIdentityConstraints()
	{
	}

	[Token(Token = "0x6001A47")]
	[Address(RVA = "0x26C8E20", Offset = "0x26C7420", VA = "0x1826C8E20")]
	private void AddIdentityConstraints()
	{
	}

	[Token(Token = "0x6001A48")]
	[Address(RVA = "0x26C9C40", Offset = "0x26C8240", VA = "0x1826C9C40")]
	private void ElementIdentityConstraints()
	{
	}

	[Token(Token = "0x6001A49")]
	[Address(RVA = "0x26C9370", Offset = "0x26C7970", VA = "0x1826C9370")]
	private void AttributeIdentityConstraints(string name, string ns, object obj, string sobj, SchemaAttDef attdef)
	{
	}

	[Token(Token = "0x6001A4A")]
	[Address(RVA = "0x26CD400", Offset = "0x26CBA00", VA = "0x1826CD400")]
	private object UnWrapUnion(object typedValue)
	{
		return null;
	}

	[Token(Token = "0x6001A4B")]
	[Address(RVA = "0x26CA040", Offset = "0x26C8640", VA = "0x1826CA040")]
	private void EndElementIdentityConstraints()
	{
	}
}
