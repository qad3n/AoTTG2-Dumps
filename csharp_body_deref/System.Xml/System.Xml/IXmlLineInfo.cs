// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.IXmlLineInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml;

[Token(Token = "0x20000BF")]
public interface IXmlLineInfo
{
	[Token(Token = "0x170002E2")]
	int LineNumber
	{
		[Token(Token = "0x6000A78")]
		get;
	}

	[Token(Token = "0x170002E3")]
	int LinePosition
	{
		[Token(Token = "0x6000A79")]
		get;
	}

	[Token(Token = "0x6000A77")]
	bool HasLineInfo();
}
