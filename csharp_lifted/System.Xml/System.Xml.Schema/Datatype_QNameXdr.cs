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
		[Address(RVA = "0x61636D0", Offset = "0x61626D0", VA = "0x61636D0", Slot = "5")]
		get
		{
			return default(XmlTokenizedType);
		}
	}

	[Token(Token = "0x170004EF")]
	public override Type ValueType
	{
		[Token(Token = "0x60011C4")]
		[Address(RVA = "0x6163930", Offset = "0x6162930", VA = "0x6163930", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170004F0")]
	internal override Type ListValueType
	{
		[Token(Token = "0x60011C5")]
		[Address(RVA = "0x61639A0", Offset = "0x61629A0", VA = "0x61639A0", Slot = "26")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60011C3")]
	[Address(RVA = "0x61636E0", Offset = "0x61626E0", VA = "0x61636E0", Slot = "6")]
	public override object ParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr)
	{
		return null;
	}

	[Token(Token = "0x60011C6")]
	[Address(RVA = "0x61560D0", Offset = "0x61550D0", VA = "0x61560D0")]
	public Datatype_QNameXdr()
	{
	}
}
