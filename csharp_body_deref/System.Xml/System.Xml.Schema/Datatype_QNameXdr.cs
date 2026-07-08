using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001C7")]
internal class Datatype_QNameXdr : Datatype_anySimpleType
{
	[Token(Token = "0x4000869")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Type atomicValueType;

	[Token(Token = "0x400086A")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Type listValueType;

	[Token(Token = "0x170004EE")]
	public override XmlTokenizedType TokenizedType
	{
		[Token(Token = "0x60011C2")]
		[Address(RVA = "0x4527AB0", Offset = "0x4527AB0", VA = "0x4527AB0", Slot = "5")]
		get
		{
			return default(XmlTokenizedType);
		}
	}

	[Token(Token = "0x170004EF")]
	public override Type ValueType
	{
		[Token(Token = "0x60011C4")]
		[Address(RVA = "0x4527D30", Offset = "0x4527D30", VA = "0x4527D30", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F0")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60011C5")]
		[Address(RVA = "0x4527DA0", Offset = "0x4527DA0", VA = "0x4527DA0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011C3")]
	[Address(RVA = "0x4527AC0", Offset = "0x4527AC0", VA = "0x4527AC0", Slot = "6")]
	public override object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr)
	{
		return null;
	}

	[Token(Token = "0x60011C6")]
	[Address(RVA = "0x451A230", Offset = "0x451A230", VA = "0x451A230")]
	public Datatype_QNameXdr()
	{
	}
}
