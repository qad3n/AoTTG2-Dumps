// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_long
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001BB")]
internal class Datatype_long : Datatype_integer
{
	[Token(Token = "0x400084F")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000850")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x4000851")]
	[FieldOffset(Offset = "0x10")]
	private static readonly FacetsChecker numeric10FacetsChecker;

	[Token(Token = "0x170004C8")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x6001174")]
		[Address(RVA = "0x4862700", Offset = "0x4862700", VA = "0x4862700", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004C9")]
	internal override bool HasValueFacets
	{
		[Token(Token = "0x6001175")]
		[Address(RVA = "0x4862770", Offset = "0x4862770", VA = "0x4862770", Slot = "11")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170004CA")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001176")]
		[Address(RVA = "0x4862780", Offset = "0x4862780", VA = "0x4862780", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x170004CB")]
	public override Type ValueType
	{
		[Token(Token = "0x6001178")]
		[Address(RVA = "0x48627F0", Offset = "0x48627F0", VA = "0x48627F0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004CC")]
	internal override Type ListValueType
	{
		[Token(Token = "0x6001179")]
		[Address(RVA = "0x4862860", Offset = "0x4862860", VA = "0x4862860", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001177")]
	[Address(RVA = "0x4862790", Offset = "0x4862790", VA = "0x4862790", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x600117A")]
	[Address(RVA = "0x48628D0", Offset = "0x48628D0", VA = "0x48628D0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x600117B")]
	[Address(RVA = "0x48571C0", Offset = "0x48571C0", VA = "0x48571C0")]
	public Datatype_long()
	{
	}
}
