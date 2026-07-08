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
		[Address(RVA = "0x45289A0", Offset = "0x45289A0", VA = "0x45289A0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F6")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60011D6")]
		[Address(RVA = "0x4528A10", Offset = "0x4528A10", VA = "0x4528A10", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F7")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x60011D7")]
		[Address(RVA = "0x4528A80", Offset = "0x4528A80", VA = "0x4528A80", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x60011D8")]
	[Address(RVA = "0x4528A90", Offset = "0x4528A90", VA = "0x4528A90", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60011D9")]
	[Address(RVA = "0x4528B20", Offset = "0x4528B20", VA = "0x4528B20", Slot = "6")]
	public override object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr)
	{
		return null;
	}

	[Token(Token = "0x60011DA")]
	[Address(RVA = "0x4528CF0", Offset = "0x4528CF0", VA = "0x4528CF0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60011DB")]
	[Address(RVA = "0x451AB40", Offset = "0x451AB40", VA = "0x451AB40")]
	public Datatype_uuid()
	{
	}
}
