// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_unsignedLong
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001C0")]
internal class Datatype_unsignedLong : Datatype_nonNegativeInteger
{
	[Token(Token = "0x400085C")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x400085D")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x400085E")]
	[FieldOffset(Offset = "0x10")]
	private static readonly FacetsChecker numeric10FacetsChecker;

	[Token(Token = "0x170004DC")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x600119A")]
		[Address(RVA = "0x4863A70", Offset = "0x4863A70", VA = "0x4863A70", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004DD")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x600119B")]
		[Address(RVA = "0x4863AE0", Offset = "0x4863AE0", VA = "0x4863AE0", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004DE")]
	public override Type ValueType
	{
		[Token(Token = "0x600119D")]
		[Address(RVA = "0x4863B50", Offset = "0x4863B50", VA = "0x4863B50", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004DF")]
	internal override Type ListValueType
	{
		[Token(Token = "0x600119E")]
		[Address(RVA = "0x4863BC0", Offset = "0x4863BC0", VA = "0x4863BC0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600119C")]
	[Address(RVA = "0x4863AF0", Offset = "0x4863AF0", VA = "0x4863AF0", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x600119F")]
	[Address(RVA = "0x4863C30", Offset = "0x4863C30", VA = "0x4863C30", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60011A0")]
	[Address(RVA = "0x4858120", Offset = "0x4858120", VA = "0x4858120")]
	public Datatype_unsignedLong()
	{
	}
}
