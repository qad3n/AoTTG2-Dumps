// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.DtdValidator
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4869290", Offset = "0x4869290", VA = "0x4869290", Slot = "16")]
		public override string LookupNamespace(string prefix)
		{
			return null;
		}

		[Token(Token = "0x60011F7")]
		[Address(RVA = "0x4869280", Offset = "0x4869280", VA = "0x4869280")]
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
		[Address(RVA = "0x48684B0", Offset = "0x48684B0", VA = "0x48684B0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60011DD")]
	[Address(RVA = "0x48665D0", Offset = "0x48665D0", VA = "0x48665D0")]
	internal DtdValidator(XmlValidatingReaderImpl reader, IValidationEventHandling eventHandling, bool processIdentityConstraints)
	{
	}

	[Token(Token = "0x60011DE")]
	[Address(RVA = "0x4866670", Offset = "0x4866670", VA = "0x4866670")]
	private void Init()
	{
	}

	[Token(Token = "0x60011DF")]
	[Address(RVA = "0x4866910", Offset = "0x4866910", VA = "0x4866910", Slot = "5")]
	public override void Validate()
	{
	}

	[Token(Token = "0x60011E0")]
	[Address(RVA = "0x4866C40", Offset = "0x4866C40", VA = "0x4866C40")]
	private bool MeetsStandAloneConstraint()
	{
		return default(bool);
	}

	[Token(Token = "0x60011E1")]
	[Address(RVA = "0x4866CD0", Offset = "0x4866CD0", VA = "0x4866CD0")]
	private void ValidatePIComment()
	{
	}

	[Token(Token = "0x60011E2")]
	[Address(RVA = "0x4866B20", Offset = "0x4866B20", VA = "0x4866B20")]
	private void ValidateElement()
	{
	}

	[Token(Token = "0x60011E3")]
	[Address(RVA = "0x48670E0", Offset = "0x48670E0", VA = "0x48670E0")]
	private void ValidateChildElement()
	{
	}

	[Token(Token = "0x60011E4")]
	[Address(RVA = "0x4867370", Offset = "0x4867370", VA = "0x4867370")]
	private void ValidateStartElement()
	{
	}

	[Token(Token = "0x60011E5")]
	[Address(RVA = "0x4868080", Offset = "0x4868080", VA = "0x4868080")]
	private void ValidateEndStartElement()
	{
	}

	[Token(Token = "0x60011E6")]
	[Address(RVA = "0x4867240", Offset = "0x4867240", VA = "0x4867240")]
	private void ProcessElement()
	{
	}

	[Token(Token = "0x60011E7")]
	[Address(RVA = "0x4868270", Offset = "0x4868270", VA = "0x4868270", Slot = "6")]
	public override void CompleteValidation()
	{
	}

	[Token(Token = "0x60011E8")]
	[Address(RVA = "0x4866F20", Offset = "0x4866F20", VA = "0x4866F20")]
	private void ValidateEndElement()
	{
	}

	[Token(Token = "0x60011EA")]
	[Address(RVA = "0x48684E0", Offset = "0x48684E0", VA = "0x48684E0")]
	private void ProcessTokenizedType(XmlTokenizedType ttype, string name)
	{
	}

	[Token(Token = "0x60011EB")]
	[Address(RVA = "0x4867950", Offset = "0x4867950", VA = "0x4867950")]
	private void CheckValue(string value, SchemaAttDef attdef)
	{
	}

	[Token(Token = "0x60011EC")]
	[Address(RVA = "0x4868780", Offset = "0x4868780", VA = "0x4868780")]
	internal void AddID(string name, object node)
	{
	}

	[Token(Token = "0x60011ED")]
	[Address(RVA = "0x4868820", Offset = "0x4868820", VA = "0x4868820", Slot = "7")]
	public override object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x60011EE")]
	[Address(RVA = "0x4866D80", Offset = "0x4866D80", VA = "0x4866D80")]
	private bool GenEntity(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x60011EF")]
	[Address(RVA = "0x4868850", Offset = "0x4868850", VA = "0x4868850")]
	private SchemaEntity GetEntity(XmlQualifiedName qname, bool fParameterEntity)
	{
		return null;
	}

	[Token(Token = "0x60011F0")]
	[Address(RVA = "0x4868360", Offset = "0x4868360", VA = "0x4868360")]
	private void CheckForwardRefs()
	{
	}

	[Token(Token = "0x60011F1")]
	[Address(RVA = "0x48667E0", Offset = "0x48667E0", VA = "0x48667E0")]
	private void Push(XmlQualifiedName elementName)
	{
	}

	[Token(Token = "0x60011F2")]
	[Address(RVA = "0x48682C0", Offset = "0x48682C0", VA = "0x48682C0")]
	private bool Pop()
	{
		return default(bool);
	}

	[Token(Token = "0x60011F3")]
	[Address(RVA = "0x48688E0", Offset = "0x48688E0", VA = "0x48688E0")]
	public static void SetDefaultTypedValue(SchemaAttDef attdef, IDtdParserAdapter readerAdapter)
	{
	}

	[Token(Token = "0x60011F4")]
	[Address(RVA = "0x4868D20", Offset = "0x4868D20", VA = "0x4868D20")]
	public static void CheckDefaultValue(SchemaAttDef attdef, SchemaInfo sinfo, IValidationEventHandling eventHandling, string baseUriStr)
	{
	}
}
