// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_unsignedByte
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001C3")]
internal class Datatype_unsignedByte : Datatype_unsignedShort
{
	[Token(Token = "0x4000865")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000866")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x4000867")]
	[FieldOffset(Offset = "0x10")]
	private static readonly FacetsChecker numeric10FacetsChecker;

	[Token(Token = "0x170004E8")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x60011B2")]
		[Address(RVA = "0x27A2040", Offset = "0x27A0640", VA = "0x1827A2040", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E9")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60011B3")]
		[Address(RVA = "0x242C510", Offset = "0x242AB10", VA = "0x18242C510", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004EA")]
	public override Type ValueType
	{
		[Token(Token = "0x60011B5")]
		[Address(RVA = "0x27A20E0", Offset = "0x27A06E0", VA = "0x1827A20E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004EB")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60011B6")]
		[Address(RVA = "0x27A2090", Offset = "0x27A0690", VA = "0x1827A2090", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011B4")]
	[Address(RVA = "0x27A1CA0", Offset = "0x27A02A0", VA = "0x1827A1CA0", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60011B7")]
	[Address(RVA = "0x27A1D00", Offset = "0x27A0300", VA = "0x1827A1D00", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60011B8")]
	[Address(RVA = "0x27A1FF0", Offset = "0x27A05F0", VA = "0x1827A1FF0")]
	public Datatype_unsignedByte()
	{
	}
}
