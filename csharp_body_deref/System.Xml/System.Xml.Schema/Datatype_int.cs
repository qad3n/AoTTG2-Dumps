// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_int
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001BC")]
internal class Datatype_int : Datatype_long
{
	[Token(Token = "0x4000852")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000853")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x4000854")]
	[FieldOffset(Offset = "0x10")]
	private static readonly FacetsChecker numeric10FacetsChecker;

	[Token(Token = "0x170004CD")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x600117D")]
		[Address(RVA = "0x4862B90", Offset = "0x4862B90", VA = "0x4862B90", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CE")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x600117E")]
		[Address(RVA = "0x4862C00", Offset = "0x4862C00", VA = "0x4862C00", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004CF")]
	public override Type ValueType
	{
		[Token(Token = "0x6001180")]
		[Address(RVA = "0x4862C70", Offset = "0x4862C70", VA = "0x4862C70", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D0")]
	internal override Type ListValueType
	{
		[Token(Token = "0x6001181")]
		[Address(RVA = "0x4862CE0", Offset = "0x4862CE0", VA = "0x4862CE0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600117F")]
	[Address(RVA = "0x4862C10", Offset = "0x4862C10", VA = "0x4862C10", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x6001182")]
	[Address(RVA = "0x4862D50", Offset = "0x4862D50", VA = "0x4862D50", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x6001183")]
	[Address(RVA = "0x4856F80", Offset = "0x4856F80", VA = "0x4856F80")]
	public Datatype_int()
	{
	}
}
