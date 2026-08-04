// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_union
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200018F")]
internal class Datatype_union : Datatype_anySimpleType
{
	[Token(Token = "0x4000830")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x4000831")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x4000832")]
	[FieldOffset(Offset = "0x38")]
	private XmlSchemaSimpleType[] types;

	[Token(Token = "0x1700044B")]
	public override Type ValueType
	{
		[Token(Token = "0x600108E")]
		[Address(RVA = "0x485D060", Offset = "0x485D060", VA = "0x485D060", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700044C")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x600108F")]
		[Address(RVA = "0x485D0D0", Offset = "0x485D0D0", VA = "0x485D0D0", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x1700044D")]
	internal override FacetsChecker FacetsChecker
	{
		[Token(Token = "0x6001090")]
		[Address(RVA = "0x485D0E0", Offset = "0x485D0E0", VA = "0x485D0E0", Slot = "18")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700044E")]
	internal override Type ListValueType
	{
		[Token(Token = "0x6001091")]
		[Address(RVA = "0x485D150", Offset = "0x485D150", VA = "0x485D150", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700044F")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x6001092")]
		[Address(RVA = "0x485D1C0", Offset = "0x485D1C0", VA = "0x485D1C0", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x17000450")]
	internal XmlSchemaSimpleType[] BaseMemberTypes
	{
		[Token(Token = "0x6001093")]
		[Address(RVA = "0x485D1D0", Offset = "0x485D1D0", VA = "0x485D1D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600108B")]
	[Address(RVA = "0x485CF60", Offset = "0x485CF60", VA = "0x485CF60", Slot = "25")]
	internal override XmlValueConverter CreateValueConverter(XmlSchemaType schemaType)
	{
		return null;
	}

	[Token(Token = "0x600108C")]
	[Address(RVA = "0x485A920", Offset = "0x485A920", VA = "0x485A920")]
	internal Datatype_union(XmlSchemaSimpleType[] types)
	{
	}

	[Token(Token = "0x600108D")]
	[Address(RVA = "0x485CF70", Offset = "0x485CF70", VA = "0x485CF70", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x6001094")]
	[Address(RVA = "0x485A710", Offset = "0x485A710", VA = "0x485A710")]
	internal bool HasAtomicMembers()
	{
		return default(bool);
	}

	[Token(Token = "0x6001095")]
	[Address(RVA = "0x485AC50", Offset = "0x485AC50", VA = "0x485AC50")]
	internal bool IsUnionBaseOf(DatatypeImplementation derivedType)
	{
		return default(bool);
	}

	[Token(Token = "0x6001096")]
	[Address(RVA = "0x485D1E0", Offset = "0x485D1E0", VA = "0x485D1E0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x6001097")]
	[Address(RVA = "0x485D410", Offset = "0x485D410", VA = "0x485D410", Slot = "17")]
	internal override Exception TryParseValue(object value, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}
}
