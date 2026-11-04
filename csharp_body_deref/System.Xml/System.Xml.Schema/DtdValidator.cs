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
		[Address(RVA = "0x8E13A0", Offset = "0x8DF9A0", VA = "0x1808E13A0", Slot = "16")]
		public override string LookupNamespace(string prefix)
		{
			return null;
		}

		[Token(Token = "0x60011F7")]
		[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
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
		[Address(RVA = "0x2663FE0", Offset = "0x26625E0", VA = "0x182663FE0", Slot = "4")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60011DD")]
	[Address(RVA = "0x27A6950", Offset = "0x27A4F50", VA = "0x1827A6950")]
	internal DtdValidator(XmlValidatingReaderImpl reader, IValidationEventHandling eventHandling, bool processIdentityConstraints)
	{
	}

	[Token(Token = "0x60011DE")]
	[Address(RVA = "0x27A4C70", Offset = "0x27A3270", VA = "0x1827A4C70")]
	private void Init()
	{
	}

	[Token(Token = "0x60011DF")]
	[Address(RVA = "0x27A6570", Offset = "0x27A4B70", VA = "0x1827A6570", Slot = "5")]
	public override void Validate()
	{
	}

	[Token(Token = "0x60011E0")]
	[Address(RVA = "0x27A4DE0", Offset = "0x27A33E0", VA = "0x1827A4DE0")]
	private bool MeetsStandAloneConstraint()
	{
		return default(bool);
	}

	[Token(Token = "0x60011E1")]
	[Address(RVA = "0x27A6090", Offset = "0x27A4690", VA = "0x1827A6090")]
	private void ValidatePIComment()
	{
	}

	[Token(Token = "0x60011E2")]
	[Address(RVA = "0x27A5920", Offset = "0x27A3F20", VA = "0x1827A5920")]
	private void ValidateElement()
	{
	}

	[Token(Token = "0x60011E3")]
	[Address(RVA = "0x27A5770", Offset = "0x27A3D70", VA = "0x1827A5770")]
	private void ValidateChildElement()
	{
	}

	[Token(Token = "0x60011E4")]
	[Address(RVA = "0x27A6140", Offset = "0x27A4740", VA = "0x1827A6140")]
	private void ValidateStartElement()
	{
	}

	[Token(Token = "0x60011E5")]
	[Address(RVA = "0x27A5F00", Offset = "0x27A4500", VA = "0x1827A5F00")]
	private void ValidateEndStartElement()
	{
	}

	[Token(Token = "0x60011E6")]
	[Address(RVA = "0x27A4F50", Offset = "0x27A3550", VA = "0x1827A4F50")]
	private void ProcessElement()
	{
	}

	[Token(Token = "0x60011E7")]
	[Address(RVA = "0x27A4840", Offset = "0x27A2E40", VA = "0x1827A4840", Slot = "6")]
	public override void CompleteValidation()
	{
	}

	[Token(Token = "0x60011E8")]
	[Address(RVA = "0x27A5D10", Offset = "0x27A4310", VA = "0x1827A5D10")]
	private void ValidateEndElement()
	{
	}

	[Token(Token = "0x60011EA")]
	[Address(RVA = "0x27A50A0", Offset = "0x27A36A0", VA = "0x1827A50A0")]
	private void ProcessTokenizedType(XmlTokenizedType ttype, string name)
	{
	}

	[Token(Token = "0x60011EB")]
	[Address(RVA = "0x27A4380", Offset = "0x27A2980", VA = "0x1827A4380")]
	private void CheckValue(string value, SchemaAttDef attdef)
	{
	}

	[Token(Token = "0x60011EC")]
	[Address(RVA = "0x27A3E60", Offset = "0x27A2460", VA = "0x1827A3E60")]
	internal void AddID(string name, object node)
	{
	}

	[Token(Token = "0x60011ED")]
	[Address(RVA = "0x27A49A0", Offset = "0x27A2FA0", VA = "0x1827A49A0", Slot = "7")]
	public override object FindId(string name)
	{
		return null;
	}

	[Token(Token = "0x60011EE")]
	[Address(RVA = "0x27A49D0", Offset = "0x27A2FD0", VA = "0x1827A49D0")]
	private bool GenEntity(XmlQualifiedName qname)
	{
		return default(bool);
	}

	[Token(Token = "0x60011EF")]
	[Address(RVA = "0x27A4BC0", Offset = "0x27A31C0", VA = "0x1827A4BC0")]
	private SchemaEntity GetEntity(XmlQualifiedName qname, bool fParameterEntity)
	{
		return null;
	}

	[Token(Token = "0x60011F0")]
	[Address(RVA = "0x27A4230", Offset = "0x27A2830", VA = "0x1827A4230")]
	private void CheckForwardRefs()
	{
	}

	[Token(Token = "0x60011F1")]
	[Address(RVA = "0x27A5350", Offset = "0x27A3950", VA = "0x1827A5350")]
	private void Push(XmlQualifiedName elementName)
	{
	}

	[Token(Token = "0x60011F2")]
	[Address(RVA = "0x27A4E70", Offset = "0x27A3470", VA = "0x1827A4E70")]
	private bool Pop()
	{
		return default(bool);
	}

	[Token(Token = "0x60011F3")]
	[Address(RVA = "0x27A54C0", Offset = "0x27A3AC0", VA = "0x1827A54C0")]
	public static void SetDefaultTypedValue(SchemaAttDef attdef, IDtdParserAdapter readerAdapter)
	{
	}

	[Token(Token = "0x60011F4")]
	[Address(RVA = "0x27A3F10", Offset = "0x27A2510", VA = "0x1827A3F10")]
	public static void CheckDefaultValue(SchemaAttDef attdef, SchemaInfo sinfo, IValidationEventHandling eventHandling, string baseUriStr)
	{
	}
}
