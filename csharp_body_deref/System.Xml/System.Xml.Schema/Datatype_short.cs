// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_short
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001BD")]
internal class Datatype_short : Datatype_int
{
	[Token(Token = "0x4000855")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000856")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x4000857")]
	[FieldOffset(Offset = "0x10")]
	private static readonly FacetsChecker numeric10FacetsChecker;

	[Token(Token = "0x170004D1")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x6001185")]
		[Address(RVA = "0x4863000", Offset = "0x4863000", VA = "0x4863000", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D2")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001186")]
		[Address(RVA = "0x4863070", Offset = "0x4863070", VA = "0x4863070", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004D3")]
	public override Type ValueType
	{
		[Token(Token = "0x6001188")]
		[Address(RVA = "0x48630E0", Offset = "0x48630E0", VA = "0x48630E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D4")]
	internal override Type ListValueType
	{
		[Token(Token = "0x6001189")]
		[Address(RVA = "0x4863150", Offset = "0x4863150", VA = "0x4863150", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001187")]
	[Address(RVA = "0x4863080", Offset = "0x4863080", VA = "0x4863080", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x600118A")]
	[Address(RVA = "0x48631C0", Offset = "0x48631C0", VA = "0x48631C0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x600118B")]
	[Address(RVA = "0x4857A50", Offset = "0x4857A50", VA = "0x4857A50")]
	public Datatype_short()
	{
	}
}
