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
		[Address(RVA = "0x47176B0", Offset = "0x47176B0", VA = "0x47176B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700056D")]
	private bool HasSchema
	{
		[Token(Token = "0x60014B9")]
		[Address(RVA = "0x4719FB0", Offset = "0x4719FB0", VA = "0x4719FB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700056E")]
	public override bool PreserveWhitespace
	{
		[Token(Token = "0x60014BA")]
		[Address(RVA = "0x4719FD0", Offset = "0x4719FD0", VA = "0x4719FD0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60014AA")]
	[Address(RVA = "0x4717170", Offset = "0x4717170", VA = "0x4717170")]
	internal XdrValidator(BaseValidator validator)
	{
	}

	[Token(Token = "0x60014AB")]
	[Address(RVA = "0x4717400", Offset = "0x4717400", VA = "0x4717400")]
	internal XdrValidator(XmlValidatingReaderImpl reader, XmlSchemaCollection schemaCollection, IValidationEventHandling eventHandling)
	{
	}

	[Token(Token = "0x60014AC")]
	[Address(RVA = "0x47171F0", Offset = "0x47171F0", VA = "0x47171F0")]
	private void Init()
	{
	}

	[Token(Token = "0x60014AD")]
	[Address(RVA = "0x4717610", Offset = "0x4717610", VA = "0x4717610", Slot = "5")]
	public override void Validate()
	{
	}

	[Token(Token = "0x60014AE")]
	[Address(RVA = "0x4717950", Offset = "0x4717950", VA = "0x4717950")]
	private void ValidateElement()
	{
	}

	[Token(Token = "0x60014AF")]
	[Address(RVA = "0x4717CF0", Offset = "0x4717CF0", VA = "0x4717CF0")]
	private void ValidateChildElement()
	{
	}

	[Token(Token = "0x60014B1")]
	[Address(RVA = "0x47176C0", Offset = "0x47176C0", VA = "0x47176C0")]
	private void ProcessInlineSchema()
	{
	}

	[Token(Token = "0x60014B2")]
	[Address(RVA = "0x4717E50", Offset = "0x4717E50", VA = "0x4717E50")]
	private void ProcessElement()
	{
	}

	[Token(Token = "0x60014B3")]
	[Address(RVA = "0x4717B10", Offset = "0x4717B10", VA = "0x4717B10")]
	private void ValidateEndElement()
	{
	}

	[Token(Token = "0x60014B4")]
	[Address(RVA = "0x4717F30", Offset = "0x4717F30", VA = "0x4717F30")]
	private SchemaElementDecl ThoroughGetElementDecl()
	{
		return null;
	}

	[Token(Token = "0x60014B5")]
	[Address(RVA = "0x4718340", Offset = "0x4718340", VA = "0x4718340")]
	private void ValidateStartElement()
	{
	}

	[Token(Token = "0x60014B6")]
	[Address(RVA = "0x47188E0", Offset = "0x47188E0", VA = "0x47188E0")]
	private void ValidateEndStartElement()
	{
	}

	[Token(Token = "0x60014B7")]
	[Address(RVA = "0x4719830", Offset = "0x4719830", VA = "0x4719830")]
	private void LoadSchemaFromLocation(string uri)
	{
	}

	[Token(Token = "0x60014B8")]
	[Address(RVA = "0x4719560", Offset = "0x4719560", VA = "0x4719560")]
	private void LoadSchema(string uri)
	{
	}

	[Token(Token = "0x60014BB")]
	[Address(RVA = "0x471A000", Offset = "0x471A000", VA = "0x471A000")]
	private void ProcessTokenizedType(XmlTokenizedType ttype, string name)
	{
	}

	[Token(Token = "0x60014BC")]
	[Address(RVA = "0x471A320", Offset = "0x471A320", VA = "0x471A320", Slot = "6")]
	public override void CompleteValidation()
	{
	}

	[Token(Token = "0x60014BD")]
	[Address(RVA = "0x4718CE0", Offset = "0x4718CE0", VA = "0x4718CE0")]
	private void CheckValue(string value, SchemaAttDef attdef)
	{
	}

	[Token(Token = "0x60014BE")]
	[Address(RVA = "0x47121F0", Offset = "0x47121F0", VA = "0x47121F0")]
	public static void CheckDefaultValue(string value, SchemaAttDef attdef, SchemaInfo sinfo, XmlNamespaceManager nsManager, XmlNameTable NameTable, object sender, ValidationEventHandler eventhandler, string baseUri, int lineNo, int linePos)
	{
	}

	[Token(Token = "0x60014BF")]
	[Address(RVA = "0x471A280", Offset = "0x471A280", VA = "0x471A280")]
	internal void AddID(string name, object node)
	{
	}

	[Token(Token = "0x60014C0")]
	[Address(RVA = "0x471A610", Offset = "0x471A610", VA = "0x471A610", Slot = "7")]
	public override object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x60014C1")]
	[Address(RVA = "0x47174A0", Offset = "0x47174A0", VA = "0x47174A0")]
	private void Push(XmlQualifiedName elementName)
	{
	}

	[Token(Token = "0x60014C2")]
	[Address(RVA = "0x47194D0", Offset = "0x47194D0", VA = "0x47194D0")]
	private void Pop()
	{
	}

	[Token(Token = "0x60014C3")]
	[Address(RVA = "0x471A3D0", Offset = "0x471A3D0", VA = "0x471A3D0")]
	private void CheckForwardRefs()
	{
	}

	[Token(Token = "0x60014C4")]
	[Address(RVA = "0x4719770", Offset = "0x4719770", VA = "0x4719770")]
	private XmlQualifiedName QualifiedName(string name, string ns)
	{
		return null;
	}
}
