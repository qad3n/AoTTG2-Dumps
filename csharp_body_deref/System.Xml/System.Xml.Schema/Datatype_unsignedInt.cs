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
		[Address(RVA = "0x4863F30", Offset = "0x4863F30", VA = "0x4863F30", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E1")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x60011A3")]
		[Address(RVA = "0x4863FA0", Offset = "0x4863FA0", VA = "0x4863FA0", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004E2")]
	public override Type ValueType
	{
		[Token(Token = "0x60011A5")]
		[Address(RVA = "0x4864010", Offset = "0x4864010", VA = "0x4864010", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004E3")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60011A6")]
		[Address(RVA = "0x4864080", Offset = "0x4864080", VA = "0x4864080", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011A4")]
	[Address(RVA = "0x4863FB0", Offset = "0x4863FB0", VA = "0x4863FB0", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60011A7")]
	[Address(RVA = "0x48640F0", Offset = "0x48640F0", VA = "0x48640F0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60011A8")]
	[Address(RVA = "0x4858070", Offset = "0x4858070", VA = "0x4858070")]
	public Datatype_unsignedInt()
	{
	}
}
