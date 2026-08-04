// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.Datatype_NCName
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x20001B3")]
internal class Datatype_NCName : Datatype_Name
{
	[Token(Token = "0x170004B4")]
	public override XmlTypeCode TypeCode
	{
		[Token(Token = "0x6001150")]
		[Address(RVA = "0x4861990", Offset = "0x4861990", VA = "0x4861990", Slot = "8")]
		get
		{
			return default(XmlTypeCode);
		}
	}

	[Token(Token = "0x6001151")]
	[Address(RVA = "0x48619A0", Offset = "0x48619A0", VA = "0x48619A0", Slot = "16")]
	internal override Exception TryParseValue(string s, XmlNameTable nameTable, IXmlNamespaceResolver nsmgr, out object typedValue)
	{
		return null;
	}

	[Token(Token = "0x6001152")]
	[Address(RVA = "0x48574F0", Offset = "0x48574F0", VA = "0x48574F0")]
	public Datatype_NCName()
	{
	}
}
