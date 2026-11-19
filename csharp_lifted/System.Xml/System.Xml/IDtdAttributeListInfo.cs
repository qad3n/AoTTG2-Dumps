// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.IDtdAttributeListInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x2000027")]
internal interface IDtdAttributeListInfo
{
	[Token(Token = "0x1700001A")]
	bool HasNonCDataAttributes
	{
		[Token(Token = "0x600013C")]
		get;
	}

	[Token(Token = "0x600013D")]
	IDtdAttributeInfo LookupAttribute(string prefix, string localName);

	[Token(Token = "0x600013E")]
	IEnumerable<IDtdDefaultAttributeInfo> LookupDefaultAttributes();
}
