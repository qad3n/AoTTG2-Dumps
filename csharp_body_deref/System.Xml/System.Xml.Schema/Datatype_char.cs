using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001C9")]
internal class Datatype_char : Datatype_anySimpleType
{
	[Token(Token = "0x400086B")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x400086C")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x170004F2")]
	public override Type ValueType
	{
		[Token(Token = "0x60011CA")]
		[Address(RVA = "0x4527EE0", Offset = "0x4527EE0", VA = "0x4527EE0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F3")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60011CB")]
		[Address(RVA = "0x4527F50", Offset = "0x4527F50", VA = "0x4527F50", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F4")]
	internal override RestrictionFlags ValidRestrictionFlags
	{
		[Token(Token = "0x60011CC")]
		[Address(RVA = "0x4527FC0", Offset = "0x4527FC0", VA = "0x4527FC0", Slot = "27")]
		get
		{
			return default(RestrictionFlags);
		}
	}

	[Token(Token = "0x60011CD")]
	[Address(RVA = "0x4527FD0", Offset = "0x4527FD0", VA = "0x4527FD0", Slot = "14")]
	internal override int Compare(object value1, object value2)
	{
		return default(int);
	}

	[Token(Token = "0x60011CE")]
	[Address(RVA = "0x4528050", Offset = "0x4528050", VA = "0x4528050", Slot = "6")]
	public override object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr)
	{
		return null;
	}

	[Token(Token = "0x60011CF")]
	[Address(RVA = "0x4528220", Offset = "0x4528220", VA = "0x4528220", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x60011D0")]
	[Address(RVA = "0x4518560", Offset = "0x4518560", VA = "0x4518560")]
	public Datatype_char()
	{
	}
}
