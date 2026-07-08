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
