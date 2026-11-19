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
		[Address(RVA = "0x61614D0", Offset = "0x61604D0", VA = "0x61614D0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D2")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001186")]
		[Address(RVA = "0x6161540", Offset = "0x6160540", VA = "0x6161540", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004D3")]
	public override Type ValueType
	{
		[Token(Token = "0x6001188")]
		[Address(RVA = "0x61615B0", Offset = "0x61605B0", VA = "0x61615B0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D4")]
	internal override Type ListValueType
	{
		[Token(Token = "0x6001189")]
		[Address(RVA = "0x6161620", Offset = "0x6160620", VA = "0x6161620", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001187")]
	[Address(RVA = "0x6161550", Offset = "0x6160550", VA = "0x6161550", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x600118A")]
	[Address(RVA = "0x6161690", Offset = "0x6160690", VA = "0x6161690", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x600118B")]
	[Address(RVA = "0x6156190", Offset = "0x6155190", VA = "0x6156190")]
	public Datatype_short()
	{
	}
}
