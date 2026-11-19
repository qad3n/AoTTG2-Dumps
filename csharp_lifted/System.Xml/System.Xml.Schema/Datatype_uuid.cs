// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_uuid
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001CB")]
internal class Datatype_uuid : Datatype_anySimpleType
{
	[Token(Token = "0x400086D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x400086E")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x170004F5")]
	public override Type ValueType
	{
		[Token(Token = "0x60011D5")]
		[Address(RVA = "0x6164570", Offset = "0x6163570", VA = "0x6164570", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F6")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60011D6")]
		[Address(RVA = "0x61645E0", Offset = "0x61635E0", VA = "0x61645E0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F7")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x60011D7")]
		[Address(RVA = "0x6164650", Offset = "0x6163650", VA = "0x6164650", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x60011D8")]
	[Address(RVA = "0x6164660", Offset = "0x6163660", VA = "0x6164660", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60011D9")]
	[Address(RVA = "0x61646E0", Offset = "0x61636E0", VA = "0x61646E0", Slot = "6")]
	public override object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr)
	{
		return null;
	}

	[Token(Token = "0x60011DA")]
	[Address(RVA = "0x61648A0", Offset = "0x61638A0", VA = "0x61648A0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60011DB")]
	[Address(RVA = "0x61569E0", Offset = "0x61559E0", VA = "0x61569E0")]
	public Datatype_uuid()
	{
	}
}
