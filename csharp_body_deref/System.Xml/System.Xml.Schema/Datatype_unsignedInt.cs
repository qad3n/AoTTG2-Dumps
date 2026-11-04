// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_unsignedInt
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001C1")]
internal class Datatype_unsignedInt : Datatype_unsignedLong
{
	[Token(Token = "0x400085F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000860")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x4000861")]
	[FieldOffset(Offset = "0x10")]
	private static readonly FacetsChecker numeric10FacetsChecker;

	[Token(Token = "0x170004E0")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x60011A2")]
		[Address(RVA = "0x27A24D0", Offset = "0x27A0AD0", VA = "0x1827A24D0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E1")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60011A3")]
		[Address(RVA = "0x27A2570", Offset = "0x27A0B70", VA = "0x1827A2570", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004E2")]
	public override Type ValueType
	{
		[Token(Token = "0x60011A5")]
		[Address(RVA = "0x27A2580", Offset = "0x27A0B80", VA = "0x1827A2580", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E3")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60011A6")]
		[Address(RVA = "0x27A2520", Offset = "0x27A0B20", VA = "0x1827A2520", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x27A2130", Offset = "0x27A0730", VA = "0x1827A2130", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60011A7")]
	[Address(RVA = "0x27A2190", Offset = "0x27A0790", VA = "0x1827A2190", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60011A8")]
	[Address(RVA = "0x27A2480", Offset = "0x27A0A80", VA = "0x1827A2480")]
	public Datatype_unsignedInt()
	{
	}
}
