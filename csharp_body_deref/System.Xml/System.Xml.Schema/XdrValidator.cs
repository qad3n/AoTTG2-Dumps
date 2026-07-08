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
		[Address(RVA = "0x43D9F50", Offset = "0x43D9F50", VA = "0x43D9F50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700056D")]
	private bool HasSchema
	{
		[Token(Token = "0x60014B9")]
		[Address(RVA = "0x43DC850", Offset = "0x43DC850", VA = "0x43DC850")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700056E")]
	public override bool PreserveWhitespace
	{
		[Token(Token = "0x60014BA")]
		[Address(RVA = "0x43DC870", Offset = "0x43DC870", VA = "0x43DC870", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60014AA")]
	[Address(RVA = "0x43D9A10", Offset = "0x43D9A10", VA = "0x43D9A10")]
	internal XdrValidator(BaseValidator validator)
	{
	}

	[Token(Token = "0x60014AB")]
	[Address(RVA = "0x43D9CA0", Offset = "0x43D9CA0", VA = "0x43D9CA0")]
	internal XdrValidator(XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling)
	{
	}

	[Token(Token = "0x60014AC")]
	[Address(RVA = "0x43D9A90", Offset = "0x43D9A90", VA = "0x43D9A90")]
	private void Init()
	{
	}

	[Token(Token = "0x60014AD")]
	[Address(RVA = "0x43D9EB0", Offset = "0x43D9EB0", VA = "0x43D9EB0", Slot = "5")]
	public override void Validate()
	{
	}

	[Token(Token = "0x60014AE")]
	[Address(RVA = "0x43DA1F0", Offset = "0x43DA1F0", VA = "0x43DA1F0")]
	private void ValidateElement()
	{
	}

	[Token(Token = "0x60014AF")]
	[Address(RVA = "0x43DA590", Offset = "0x43DA590", VA = "0x43DA590")]
	private void ValidateChildElement()
	{
	}

	[Token(Token = "0x60014B1")]
	[Address(RVA = "0x43D9F60", Offset = "0x43D9F60", VA = "0x43D9F60")]
	private void ProcessInlineSchema()
	{
	}

	[Token(Token = "0x60014B2")]
	[Address(RVA = "0x43DA6F0", Offset = "0x43DA6F0", VA = "0x43DA6F0")]
	private void ProcessElement()
	{
	}

	[Token(Token = "0x60014B3")]
	[Address(RVA = "0x43DA3B0", Offset = "0x43DA3B0", VA = "0x43DA3B0")]
	private void ValidateEndElement()
	{
	}

	[Token(Token = "0x60014B4")]
	[Address(RVA = "0x43DA7D0", Offset = "0x43DA7D0", VA = "0x43DA7D0")]
	private SchemaElementDecl ThoroughGetElementDecl()
	{
		return null;
	}

	[Token(Token = "0x60014B5")]
	[Address(RVA = "0x43DABE0", Offset = "0x43DABE0", VA = "0x43DABE0")]
	private void ValidateStartElement()
	{
	}

	[Token(Token = "0x60014B6")]
	[Address(RVA = "0x43DB180", Offset = "0x43DB180", VA = "0x43DB180")]
	private void ValidateEndStartElement()
	{
	}

	[Token(Token = "0x60014B7")]
	[Address(RVA = "0x43DC0D0", Offset = "0x43DC0D0", VA = "0x43DC0D0")]
	private void LoadSchemaFromLocation(string uri)
	{
	}

	[Token(Token = "0x60014B8")]
	[Address(RVA = "0x43DBE00", Offset = "0x43DBE00", VA = "0x43DBE00")]
	private void LoadSchema(string uri)
	{
	}

	[Token(Token = "0x60014BB")]
	[Address(RVA = "0x43DC8A0", Offset = "0x43DC8A0", VA = "0x43DC8A0")]
	private void ProcessTokenizedType(XmlTokenizedType ttype, string name)
	{
	}

	[Token(Token = "0x60014BC")]
	[Address(RVA = "0x43DCBC0", Offset = "0x43DCBC0", VA = "0x43DCBC0", Slot = "6")]
	public override void CompleteValidation()
	{
	}

	[Token(Token = "0x60014BD")]
	[Address(RVA = "0x43DB580", Offset = "0x43DB580", VA = "0x43DB580")]
	private void CheckValue(string value, SchemaAttDef attdef)
	{
	}

	[Token(Token = "0x60014BE")]
	[Address(RVA = "0x43D4A90", Offset = "0x43D4A90", VA = "0x43D4A90")]
	public static void CheckDefaultValue(string value, SchemaAttDef attdef, SchemaInfo sinfo, XmlNamespaceManager nsManager, XmlNameTable NameTable, object sender, ValidationEventHandler eventhandler, string baseUri, int lineNo, int linePos)
	{
	}

	[Token(Token = "0x60014BF")]
	[Address(RVA = "0x43DCB20", Offset = "0x43DCB20", VA = "0x43DCB20")]
	internal void AddID(string name, object node)
	{
	}

	[Token(Token = "0x60014C0")]
	[Address(RVA = "0x43DCEB0", Offset = "0x43DCEB0", VA = "0x43DCEB0", Slot = "7")]
	public override object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x60014C1")]
	[Address(RVA = "0x43D9D40", Offset = "0x43D9D40", VA = "0x43D9D40")]
	private void Push(XmlQualifiedName elementName)
	{
	}

	[Token(Token = "0x60014C2")]
	[Address(RVA = "0x43DBD70", Offset = "0x43DBD70", VA = "0x43DBD70")]
	private void Pop()
	{
	}

	[Token(Token = "0x60014C3")]
	[Address(RVA = "0x43DCC70", Offset = "0x43DCC70", VA = "0x43DCC70")]
	private void CheckForwardRefs()
	{
	}

	[Token(Token = "0x60014C4")]
	[Address(RVA = "0x43DC010", Offset = "0x43DC010", VA = "0x43DC010")]
	private XmlQualifiedName QualifiedName(string name, string ns)
	{
		return null;
	}
}
