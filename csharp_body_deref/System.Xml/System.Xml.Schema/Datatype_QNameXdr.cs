// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_QNameXdr
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4865210", Offset = "0x4865210", VA = "0x4865210", Slot = "5")]
		get
		{
			return default(XmlTokenizedType);
		}
	}

	[Token(Token = "0x170004EF")]
	public override Type ValueType
	{
		[Token(Token = "0x60011C4")]
		[Address(RVA = "0x4865490", Offset = "0x4865490", VA = "0x4865490", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F0")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60011C5")]
		[Address(RVA = "0x4865500", Offset = "0x4865500", VA = "0x4865500", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011C3")]
	[Address(RVA = "0x4865220", Offset = "0x4865220", VA = "0x4865220", Slot = "6")]
	public override object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr)
	{
		return null;
	}

	[Token(Token = "0x60011C6")]
	[Address(RVA = "0x4857990", Offset = "0x4857990", VA = "0x4857990")]
	public Datatype_QNameXdr()
	{
	}
}
