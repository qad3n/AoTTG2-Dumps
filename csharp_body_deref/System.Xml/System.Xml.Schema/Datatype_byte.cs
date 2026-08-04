// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_byte
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001BE")]
internal class Datatype_byte : Datatype_short
{
	[Token(Token = "0x4000858")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000859")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x400085A")]
	[FieldOffset(Offset = "0x10")]
	private static readonly FacetsChecker numeric10FacetsChecker;

	[Token(Token = "0x170004D5")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x600118D")]
		[Address(RVA = "0x4863470", Offset = "0x4863470", VA = "0x4863470", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D6")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x600118E")]
		[Address(RVA = "0x48634E0", Offset = "0x48634E0", VA = "0x48634E0", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004D7")]
	public override Type ValueType
	{
		[Token(Token = "0x6001190")]
		[Address(RVA = "0x4863550", Offset = "0x4863550", VA = "0x4863550", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004D8")]
	internal override Type ListValueType
	{
		[Token(Token = "0x6001191")]
		[Address(RVA = "0x48635C0", Offset = "0x48635C0", VA = "0x48635C0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600118F")]
	[Address(RVA = "0x48634F0", Offset = "0x48634F0", VA = "0x48634F0", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x6001192")]
	[Address(RVA = "0x4863630", Offset = "0x4863630", VA = "0x4863630", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x6001193")]
	[Address(RVA = "0x4855BA0", Offset = "0x4855BA0", VA = "0x4855BA0")]
	public Datatype_byte()
	{
	}
}
