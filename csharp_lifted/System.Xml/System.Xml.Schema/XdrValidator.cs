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
		[Address(RVA = "0x601FD40", Offset = "0x601ED40", VA = "0x601FD40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700056D")]
	private bool HasSchema
	{
		[Token(Token = "0x60014B9")]
		[Address(RVA = "0x6022250", Offset = "0x6021250", VA = "0x6022250")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700056E")]
	public override bool PreserveWhitespace
	{
		[Token(Token = "0x60014BA")]
		[Address(RVA = "0x6022270", Offset = "0x6021270", VA = "0x6022270", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60014AA")]
	[Address(RVA = "0x601F7F0", Offset = "0x601E7F0", VA = "0x601F7F0")]
	internal XdrValidator(BaseValidator validator)
	{
	}

	[Token(Token = "0x60014AB")]
	[Address(RVA = "0x601FA80", Offset = "0x601EA80", VA = "0x601FA80")]
	internal XdrValidator(XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling)
	{
	}

	[Token(Token = "0x60014AC")]
	[Address(RVA = "0x601F870", Offset = "0x601E870", VA = "0x601F870")]
	private void Init()
	{
	}

	[Token(Token = "0x60014AD")]
	[Address(RVA = "0x601FCA0", Offset = "0x601ECA0", VA = "0x601FCA0", Slot = "5")]
	public override void Validate()
	{
	}

	[Token(Token = "0x60014AE")]
	[Address(RVA = "0x601FFA0", Offset = "0x601EFA0", VA = "0x601FFA0")]
	private void ValidateElement()
	{
	}

	[Token(Token = "0x60014AF")]
	[Address(RVA = "0x6020340", Offset = "0x601F340", VA = "0x6020340")]
	private void ValidateChildElement()
	{
	}

	[Token(Token = "0x60014B1")]
	[Address(RVA = "0x601FD50", Offset = "0x601ED50", VA = "0x601FD50")]
	private void ProcessInlineSchema()
	{
	}

	[Token(Token = "0x60014B2")]
	[Address(RVA = "0x6020490", Offset = "0x601F490", VA = "0x6020490")]
	private void ProcessElement()
	{
	}

	[Token(Token = "0x60014B3")]
	[Address(RVA = "0x6020160", Offset = "0x601F160", VA = "0x6020160")]
	private void ValidateEndElement()
	{
	}

	[Token(Token = "0x60014B4")]
	[Address(RVA = "0x6020570", Offset = "0x601F570", VA = "0x6020570")]
	private SchemaElementDecl ThoroughGetElementDecl()
	{
		return null;
	}

	[Token(Token = "0x60014B5")]
	[Address(RVA = "0x6020970", Offset = "0x601F970", VA = "0x6020970")]
	private void ValidateStartElement()
	{
	}

	[Token(Token = "0x60014B6")]
	[Address(RVA = "0x6020E60", Offset = "0x601FE60", VA = "0x6020E60")]
	private void ValidateEndStartElement()
	{
	}

	[Token(Token = "0x60014B7")]
	[Address(RVA = "0x6021BB0", Offset = "0x6020BB0", VA = "0x6021BB0")]
	private void LoadSchemaFromLocation(string uri)
	{
	}

	[Token(Token = "0x60014B8")]
	[Address(RVA = "0x60218E0", Offset = "0x60208E0", VA = "0x60218E0")]
	private void LoadSchema(string uri)
	{
	}

	[Token(Token = "0x60014BB")]
	[Address(RVA = "0x60222A0", Offset = "0x60212A0", VA = "0x60222A0")]
	private void ProcessTokenizedType(XmlTokenizedType ttype, string name)
	{
	}

	[Token(Token = "0x60014BC")]
	[Address(RVA = "0x60225D0", Offset = "0x60215D0", VA = "0x60225D0", Slot = "6")]
	public override void CompleteValidation()
	{
	}

	[Token(Token = "0x60014BD")]
	[Address(RVA = "0x6021240", Offset = "0x6020240", VA = "0x6021240")]
	private void CheckValue(string value, SchemaAttDef attdef)
	{
	}

	[Token(Token = "0x60014BE")]
	[Address(RVA = "0x601A890", Offset = "0x6019890", VA = "0x601A890")]
	public static void CheckDefaultValue(string value, SchemaAttDef attdef, SchemaInfo sinfo, XmlNamespaceManager nsManager, XmlNameTable NameTable, object sender, ValidationEventHandler eventhandler, string baseUri, int lineNo, int linePos)
	{
	}

	[Token(Token = "0x60014BF")]
	[Address(RVA = "0x6022530", Offset = "0x6021530", VA = "0x6022530")]
	internal void AddID(string name, object node)
	{
	}

	[Token(Token = "0x60014C0")]
	[Address(RVA = "0x60228C0", Offset = "0x60218C0", VA = "0x60228C0", Slot = "7")]
	public override object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x60014C1")]
	[Address(RVA = "0x601FB20", Offset = "0x601EB20", VA = "0x601FB20")]
	private void Push(XmlQualifiedName elementName)
	{
	}

	[Token(Token = "0x60014C2")]
	[Address(RVA = "0x6021850", Offset = "0x6020850", VA = "0x6021850")]
	private void Pop()
	{
	}

	[Token(Token = "0x60014C3")]
	[Address(RVA = "0x6022680", Offset = "0x6021680", VA = "0x6022680")]
	private void CheckForwardRefs()
	{
	}

	[Token(Token = "0x60014C4")]
	[Address(RVA = "0x6021AF0", Offset = "0x6020AF0", VA = "0x6021AF0")]
	private XmlQualifiedName QualifiedName(string name, string ns)
	{
		return null;
	}
}
