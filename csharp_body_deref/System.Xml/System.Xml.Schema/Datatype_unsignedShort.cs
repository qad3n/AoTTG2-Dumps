// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_unsignedShort
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001C2")]
internal class Datatype_unsignedShort : Datatype_unsignedInt
{
	[Token(Token = "0x4000862")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000863")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x4000864")]
	[FieldOffset(Offset = "0x10")]
	private static readonly FacetsChecker numeric10FacetsChecker;

	[Token(Token = "0x170004E4")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x60011AA")]
		[Address(RVA = "0x48643B0", Offset = "0x48643B0", VA = "0x48643B0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E5")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60011AB")]
		[Address(RVA = "0x4864420", Offset = "0x4864420", VA = "0x4864420", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004E6")]
	public override Type ValueType
	{
		[Token(Token = "0x60011AD")]
		[Address(RVA = "0x4864490", Offset = "0x4864490", VA = "0x4864490", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E7")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60011AE")]
		[Address(RVA = "0x4864500", Offset = "0x4864500", VA = "0x4864500", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011AC")]
	[Address(RVA = "0x4864430", Offset = "0x4864430", VA = "0x4864430", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60011AF")]
	[Address(RVA = "0x4864570", Offset = "0x4864570", VA = "0x4864570", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60011B0")]
	[Address(RVA = "0x4858180", Offset = "0x4858180", VA = "0x4858180")]
	public Datatype_unsignedShort()
	{
	}
}
