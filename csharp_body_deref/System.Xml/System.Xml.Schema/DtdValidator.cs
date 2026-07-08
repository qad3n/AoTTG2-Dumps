using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001CC")]
internal sealed class DtdValidator : BaseValidator
{
	[Token(Token = "0x20001CD")]
	private class NamespaceManager : XmlNamespaceManager
	{
		[Token(Token = "0x60011F6")]
		[Address(RVA = "0x452BB30", Offset = "0x452BB30", VA = "0x452BB30", Slot = "16")]
		public override string LookupNamespace(string prefix)
		{
			return null;
		}

		[Token(Token = "0x60011F7")]
		[Address(RVA = "0x452BB20", Offset = "0x452BB20", VA = "0x452BB20")]
		public NamespaceManager()
		{
		}
	}

	[Token(Token = "0x400086F")]
	[FieldOffset(Offset = "0x0")]
	private static NamespaceManager namespaceManager;

	[Token(Token = "0x4000870")]
	[FieldOffset(Offset = "0x80")]
	private HWStack validationStack;

	[Token(Token = "0x4000871")]
	[FieldOffset(Offset = "0x88")]
	private Hashtable attPresence;

	[Token(Token = "0x4000872")]
	[FieldOffset(Offset = "0x90")]
	private XmlQualifiedName name;

	[Token(Token = "0x4000873")]
	[FieldOffset(Offset = "0x98")]
	private Hashtable IDs;

	[Token(Token = "0x4000874")]
	[FieldOffset(Offset = "0xA0")]
	private IdRefNode idRefListHead;

	[Token(Token = "0x4000875")]
	[FieldOffset(Offset = "0xA8")]
	private bool processIdentityConstraints;

	[Token(Token = "0x170004F8")]
	public override bool PreserveWhitespace
	{
		[Token(Token = "0x60011E9")]
		[Address(RVA = "0x452AD50", Offset = "0x452AD50", VA = "0x452AD50", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60011DD")]
	[Address(RVA = "0x4528E70", Offset = "0x4528E70", VA = "0x4528E70")]
	internal DtdValidator(XmlValidatingReaderImpl reader, IValidationEventHandling eventHandling, bool processIdentityConstraints)
	{
	}

	[Token(Token = "0x60011DE")]
	[Address(RVA = "0x4528F10", Offset = "0x4528F10", VA = "0x4528F10")]
	private void Init()
	{
	}

	[Token(Token = "0x60011DF")]
	[Address(RVA = "0x45291B0", Offset = "0x45291B0", VA = "0x45291B0", Slot = "5")]
	public override void Validate()
	{
	}

	[Token(Token = "0x60011E0")]
	[Address(RVA = "0x45294E0", Offset = "0x45294E0", VA = "0x45294E0")]
	private bool MeetsStandAloneConstraint()
	{
		return default(bool);
	}

	[Token(Token = "0x60011E1")]
	[Address(RVA = "0x4529570", Offset = "0x4529570", VA = "0x4529570")]
	private void ValidatePIComment()
	{
	}

	[Token(Token = "0x60011E2")]
	[Address(RVA = "0x45293C0", Offset = "0x45293C0", VA = "0x45293C0")]
	private void ValidateElement()
	{
	}

	[Token(Token = "0x60011E3")]
	[Address(RVA = "0x4529980", Offset = "0x4529980", VA = "0x4529980")]
	private void ValidateChildElement()
	{
	}

	[Token(Token = "0x60011E4")]
	[Address(RVA = "0x4529C10", Offset = "0x4529C10", VA = "0x4529C10")]
	private void ValidateStartElement()
	{
	}

	[Token(Token = "0x60011E5")]
	[Address(RVA = "0x452A920", Offset = "0x452A920", VA = "0x452A920")]
	private void ValidateEndStartElement()
	{
	}

	[Token(Token = "0x60011E6")]
	[Address(RVA = "0x4529AE0", Offset = "0x4529AE0", VA = "0x4529AE0")]
	private void ProcessElement()
	{
	}

	[Token(Token = "0x60011E7")]
	[Address(RVA = "0x452AB10", Offset = "0x452AB10", VA = "0x452AB10", Slot = "6")]
	public override void CompleteValidation()
	{
	}

	[Token(Token = "0x60011E8")]
	[Address(RVA = "0x45297C0", Offset = "0x45297C0", VA = "0x45297C0")]
	private void ValidateEndElement()
	{
	}

	[Token(Token = "0x60011EA")]
	[Address(RVA = "0x452AD80", Offset = "0x452AD80", VA = "0x452AD80")]
	private void ProcessTokenizedType(XmlTokenizedType ttype, string name)
	{
	}

	[Token(Token = "0x60011EB")]
	[Address(RVA = "0x452A1F0", Offset = "0x452A1F0", VA = "0x452A1F0")]
	private void CheckValue(string value, SchemaAttDef attdef)
	{
	}

	[Token(Token = "0x60011EC")]
	[Address(RVA = "0x452B020", Offset = "0x452B020", VA = "0x452B020")]
	internal void AddID(string name, object node)
	{
	}

	[Token(Token = "0x60011ED")]
	[Address(RVA = "0x452B0C0", Offset = "0x452B0C0", VA = "0x452B0C0", Slot = "7")]
	public override object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x60011EE")]
	[Address(RVA = "0x4529620", Offset = "0x4529620", VA = "0x4529620")]
	private bool GenEntity(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x60011EF")]
	[Address(RVA = "0x452B0F0", Offset = "0x452B0F0", VA = "0x452B0F0")]
	private SchemaEntity GetEntity(XmlQualifiedName qname, bool fParameterEntity)
	{
		return null;
	}

	[Token(Token = "0x60011F0")]
	[Address(RVA = "0x452AC00", Offset = "0x452AC00", VA = "0x452AC00")]
	private void CheckForwardRefs()
	{
	}

	[Token(Token = "0x60011F1")]
	[Address(RVA = "0x4529080", Offset = "0x4529080", VA = "0x4529080")]
	private void Push(XmlQualifiedName elementName)
	{
	}

	[Token(Token = "0x60011F2")]
	[Address(RVA = "0x452AB60", Offset = "0x452AB60", VA = "0x452AB60")]
	private bool Pop()
	{
		return default(bool);
	}

	[Token(Token = "0x60011F3")]
	[Address(RVA = "0x452B180", Offset = "0x452B180", VA = "0x452B180")]
	public static void SetDefaultTypedValue(SchemaAttDef attdef, IDtdParserAdapter readerAdapter)
	{
	}

	[Token(Token = "0x60011F4")]
	[Address(RVA = "0x452B5C0", Offset = "0x452B5C0", VA = "0x452B5C0")]
	public static void CheckDefaultValue(SchemaAttDef attdef, SchemaInfo sinfo, IValidationEventHandling eventHandling, string baseUriStr)
	{
	}
}
