// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XdrValidator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000207")]
internal sealed class XdrValidator : BaseValidator
{
	[Token(Token = "0x4000AD6")]
	[FieldOffset(Offset = "0x80")]
	private HWStack validationStack;

	[Token(Token = "0x4000AD7")]
	[FieldOffset(Offset = "0x88")]
	private Hashtable attPresence;

	[Token(Token = "0x4000AD8")]
	[FieldOffset(Offset = "0x90")]
	private XmlQualifiedName name;

	[Token(Token = "0x4000AD9")]
	[FieldOffset(Offset = "0x98")]
	private XmlNamespaceManager nsManager;

	[Token(Token = "0x4000ADA")]
	[FieldOffset(Offset = "0xA0")]
	private bool isProcessContents;

	[Token(Token = "0x4000ADB")]
	[FieldOffset(Offset = "0xA8")]
	private Hashtable IDs;

	[Token(Token = "0x4000ADC")]
	[FieldOffset(Offset = "0xB0")]
	private IdRefNode idRefListHead;

	[Token(Token = "0x4000ADD")]
	[FieldOffset(Offset = "0xB8")]
	private Parser inlineSchemaParser;

	[Token(Token = "0x1700056C")]
	private bool IsInlineSchemaStarted
	{
		[Token(Token = "0x60014B0")]
		[Address(RVA = "0x2663FD0", Offset = "0x26625D0", VA = "0x182663FD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700056D")]
	private bool HasSchema
	{
		[Token(Token = "0x60014B9")]
		[Address(RVA = "0x2663FB0", Offset = "0x26625B0", VA = "0x182663FB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700056E")]
	public override bool PreserveWhitespace
	{
		[Token(Token = "0x60014BA")]
		[Address(RVA = "0x2663FE0", Offset = "0x26625E0", VA = "0x182663FE0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60014AA")]
	[Address(RVA = "0x2663F20", Offset = "0x2662520", VA = "0x182663F20")]
	internal XdrValidator(BaseValidator validator)
	{
	}

	[Token(Token = "0x60014AB")]
	[Address(RVA = "0x2663E80", Offset = "0x2662480", VA = "0x182663E80")]
	internal XdrValidator(XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling)
	{
	}

	[Token(Token = "0x60014AC")]
	[Address(RVA = "0x2661660", Offset = "0x265FC60", VA = "0x182661660")]
	private void Init()
	{
	}

	[Token(Token = "0x60014AD")]
	[Address(RVA = "0x2663DB0", Offset = "0x26623B0", VA = "0x182663DB0", Slot = "5")]
	public override void Validate()
	{
	}

	[Token(Token = "0x60014AE")]
	[Address(RVA = "0x2662F30", Offset = "0x2661530", VA = "0x182662F30")]
	private void ValidateElement()
	{
	}

	[Token(Token = "0x60014AF")]
	[Address(RVA = "0x2662D80", Offset = "0x2661380", VA = "0x182662D80")]
	private void ValidateChildElement()
	{
	}

	[Token(Token = "0x60014B1")]
	[Address(RVA = "0x2662290", Offset = "0x2660890", VA = "0x182662290")]
	private void ProcessInlineSchema()
	{
	}

	[Token(Token = "0x60014B2")]
	[Address(RVA = "0x26621B0", Offset = "0x26607B0", VA = "0x1826621B0")]
	private void ProcessElement()
	{
	}

	[Token(Token = "0x60014B3")]
	[Address(RVA = "0x2663350", Offset = "0x2661950", VA = "0x182663350")]
	private void ValidateEndElement()
	{
	}

	[Token(Token = "0x60014B4")]
	[Address(RVA = "0x26629A0", Offset = "0x2660FA0", VA = "0x1826629A0")]
	private SchemaElementDecl ThoroughGetElementDecl()
	{
		return null;
	}

	[Token(Token = "0x60014B5")]
	[Address(RVA = "0x2663950", Offset = "0x2661F50", VA = "0x182663950")]
	private void ValidateStartElement()
	{
	}

	[Token(Token = "0x60014B6")]
	[Address(RVA = "0x2663610", Offset = "0x2661C10", VA = "0x182663610")]
	private void ValidateEndStartElement()
	{
	}

	[Token(Token = "0x60014B7")]
	[Address(RVA = "0x2661870", Offset = "0x265FE70", VA = "0x182661870")]
	private void LoadSchemaFromLocation(string uri)
	{
	}

	[Token(Token = "0x60014B8")]
	[Address(RVA = "0x2661EC0", Offset = "0x26604C0", VA = "0x182661EC0")]
	private void LoadSchema(string uri)
	{
	}

	[Token(Token = "0x60014BB")]
	[Address(RVA = "0x26624D0", Offset = "0x2660AD0", VA = "0x1826624D0")]
	private void ProcessTokenizedType(XmlTokenizedType ttype, string name)
	{
	}

	[Token(Token = "0x60014BC")]
	[Address(RVA = "0x2661370", Offset = "0x265F970", VA = "0x182661370", Slot = "6")]
	public override void CompleteValidation()
	{
	}

	[Token(Token = "0x60014BD")]
	[Address(RVA = "0x2660E40", Offset = "0x265F440", VA = "0x182660E40")]
	private void CheckValue(string value, SchemaAttDef attdef)
	{
	}

	[Token(Token = "0x60014BE")]
	[Address(RVA = "0x2660880", Offset = "0x265EE80", VA = "0x182660880")]
	public static void CheckDefaultValue(string value, SchemaAttDef attdef, SchemaInfo sinfo, XmlNamespaceManager nsManager, XmlNameTable NameTable, object sender, ValidationEventHandler eventhandler, string baseUri, int lineNo, int linePos)
	{
	}

	[Token(Token = "0x60014BF")]
	[Address(RVA = "0x26607D0", Offset = "0x265EDD0", VA = "0x1826607D0")]
	internal void AddID(string name, object node)
	{
	}

	[Token(Token = "0x60014C0")]
	[Address(RVA = "0x2661630", Offset = "0x265FC30", VA = "0x182661630", Slot = "7")]
	public override object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x60014C1")]
	[Address(RVA = "0x2662770", Offset = "0x2660D70", VA = "0x182662770")]
	private void Push(XmlQualifiedName elementName)
	{
	}

	[Token(Token = "0x60014C2")]
	[Address(RVA = "0x26620E0", Offset = "0x26606E0", VA = "0x1826620E0")]
	private void Pop()
	{
	}

	[Token(Token = "0x60014C3")]
	[Address(RVA = "0x2660CF0", Offset = "0x265F2F0", VA = "0x182660CF0")]
	private void CheckForwardRefs()
	{
	}

	[Token(Token = "0x60014C4")]
	[Address(RVA = "0x2662920", Offset = "0x2660F20", VA = "0x182662920")]
	private XmlQualifiedName QualifiedName(string name, string ns)
	{
		return null;
	}
}
