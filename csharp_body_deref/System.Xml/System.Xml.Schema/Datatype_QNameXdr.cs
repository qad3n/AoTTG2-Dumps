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
		[Address(RVA = "0x1B56090", Offset = "0x1B54690", VA = "0x181B56090", Slot = "5")]
		get
		{
			return default(XmlTokenizedType);
		}
	}

	[Token(Token = "0x170004EF")]
	public override Type ValueType
	{
		[Token(Token = "0x60011C4")]
		[Address(RVA = "0x279AF00", Offset = "0x2799500", VA = "0x18279AF00", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F0")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60011C5")]
		[Address(RVA = "0x279AEB0", Offset = "0x27994B0", VA = "0x18279AEB0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011C3")]
	[Address(RVA = "0x279AB50", Offset = "0x2799150", VA = "0x18279AB50", Slot = "6")]
	public override object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr)
	{
		return null;
	}

	[Token(Token = "0x60011C6")]
	[Address(RVA = "0x279AE30", Offset = "0x2799430", VA = "0x18279AE30")]
	public Datatype_QNameXdr()
	{
	}
}
