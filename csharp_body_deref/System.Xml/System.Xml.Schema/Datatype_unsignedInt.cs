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
		[Address(RVA = "0x6162400", Offset = "0x6161400", VA = "0x6162400", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E1")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60011A3")]
		[Address(RVA = "0x6162470", Offset = "0x6161470", VA = "0x6162470", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004E2")]
	public override Type ValueType
	{
		[Token(Token = "0x60011A5")]
		[Address(RVA = "0x61624E0", Offset = "0x61614E0", VA = "0x61624E0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E3")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60011A6")]
		[Address(RVA = "0x6162550", Offset = "0x6161550", VA = "0x6162550", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x6162480", Offset = "0x6161480", VA = "0x6162480", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60011A7")]
	[Address(RVA = "0x61625C0", Offset = "0x61615C0", VA = "0x61625C0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60011A8")]
	[Address(RVA = "0x61567B0", Offset = "0x61557B0", VA = "0x61567B0")]
	public Datatype_unsignedInt()
	{
	}
}
