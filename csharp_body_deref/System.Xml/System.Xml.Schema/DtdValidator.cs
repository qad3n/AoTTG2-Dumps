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
		[Address(RVA = "0x6167230", Offset = "0x6166230", VA = "0x6167230", Slot = "16")]
		public override string LookupNamespace(string prefix)
		{
			return null;
		}

		[Token(Token = "0x60011F7")]
		[Address(RVA = "0x6167220", Offset = "0x6166220", VA = "0x6167220")]
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
		[Address(RVA = "0x6166660", Offset = "0x6165660", VA = "0x6166660", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60011DD")]
	[Address(RVA = "0x6164A20", Offset = "0x6163A20", VA = "0x6164A20")]
	internal DtdValidator(XmlValidatingReaderImpl reader, IValidationEventHandling eventHandling, bool processIdentityConstraints)
	{
	}

	[Token(Token = "0x60011DE")]
	[Address(RVA = "0x6164AC0", Offset = "0x6163AC0", VA = "0x6164AC0")]
	private void Init()
	{
	}

	[Token(Token = "0x60011DF")]
	[Address(RVA = "0x6164D60", Offset = "0x6163D60", VA = "0x6164D60", Slot = "5")]
	public override void Validate()
	{
	}

	[Token(Token = "0x60011E0")]
	[Address(RVA = "0x61650A0", Offset = "0x61640A0", VA = "0x61650A0")]
	private bool MeetsStandAloneConstraint()
	{
		return default(bool);
	}

	[Token(Token = "0x60011E1")]
	[Address(RVA = "0x6165130", Offset = "0x6164130", VA = "0x6165130")]
	private void ValidatePIComment()
	{
	}

	[Token(Token = "0x60011E2")]
	[Address(RVA = "0x6164F80", Offset = "0x6163F80", VA = "0x6164F80")]
	private void ValidateElement()
	{
	}

	[Token(Token = "0x60011E3")]
	[Address(RVA = "0x6165540", Offset = "0x6164540", VA = "0x6165540")]
	private void ValidateChildElement()
	{
	}

	[Token(Token = "0x60011E4")]
	[Address(RVA = "0x61657D0", Offset = "0x61647D0", VA = "0x61657D0")]
	private void ValidateStartElement()
	{
	}

	[Token(Token = "0x60011E5")]
	[Address(RVA = "0x6166240", Offset = "0x6165240", VA = "0x6166240")]
	private void ValidateEndStartElement()
	{
	}

	[Token(Token = "0x60011E6")]
	[Address(RVA = "0x6165690", Offset = "0x6164690", VA = "0x6165690")]
	private void ProcessElement()
	{
	}

	[Token(Token = "0x60011E7")]
	[Address(RVA = "0x6166430", Offset = "0x6165430", VA = "0x6166430", Slot = "6")]
	public override void CompleteValidation()
	{
	}

	[Token(Token = "0x60011E8")]
	[Address(RVA = "0x6165380", Offset = "0x6164380", VA = "0x6165380")]
	private void ValidateEndElement()
	{
	}

	[Token(Token = "0x60011EA")]
	[Address(RVA = "0x6166690", Offset = "0x6165690", VA = "0x6166690")]
	private void ProcessTokenizedType(XmlTokenizedType ttype, string name)
	{
	}

	[Token(Token = "0x60011EB")]
	[Address(RVA = "0x6165CD0", Offset = "0x6164CD0", VA = "0x6165CD0")]
	private void CheckValue(string value, SchemaAttDef attdef)
	{
	}

	[Token(Token = "0x60011EC")]
	[Address(RVA = "0x6166930", Offset = "0x6165930", VA = "0x6166930")]
	internal void AddID(string name, object node)
	{
	}

	[Token(Token = "0x60011ED")]
	[Address(RVA = "0x61669D0", Offset = "0x61659D0", VA = "0x61669D0", Slot = "7")]
	public override object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x60011EE")]
	[Address(RVA = "0x61651E0", Offset = "0x61641E0", VA = "0x61651E0")]
	private bool GenEntity(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x60011EF")]
	[Address(RVA = "0x6166A00", Offset = "0x6165A00", VA = "0x6166A00")]
	private SchemaEntity GetEntity(XmlQualifiedName qname, bool fParameterEntity)
	{
		return null;
	}

	[Token(Token = "0x60011F0")]
	[Address(RVA = "0x6166520", Offset = "0x6165520", VA = "0x6166520")]
	private void CheckForwardRefs()
	{
	}

	[Token(Token = "0x60011F1")]
	[Address(RVA = "0x6164C30", Offset = "0x6163C30", VA = "0x6164C30")]
	private void Push(XmlQualifiedName elementName)
	{
	}

	[Token(Token = "0x60011F2")]
	[Address(RVA = "0x6166480", Offset = "0x6165480", VA = "0x6166480")]
	private bool Pop()
	{
		return default(bool);
	}

	[Token(Token = "0x60011F3")]
	[Address(RVA = "0x6166AA0", Offset = "0x6165AA0", VA = "0x6166AA0")]
	public static void SetDefaultTypedValue(SchemaAttDef attdef, IDtdParserAdapter readerAdapter)
	{
	}

	[Token(Token = "0x60011F4")]
	[Address(RVA = "0x6166DB0", Offset = "0x6165DB0", VA = "0x6166DB0")]
	public static void CheckDefaultValue(SchemaAttDef attdef, SchemaInfo sinfo, IValidationEventHandling eventHandling, string baseUriStr)
	{
	}
}
