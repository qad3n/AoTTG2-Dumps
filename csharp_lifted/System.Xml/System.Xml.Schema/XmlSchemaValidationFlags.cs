// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.XmlSchemaValidationFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000261")]
[Flags]
public enum XmlSchemaValidationFlags
{
	[Token(Token = "0x4000C1E")]
	None = 0,
	[Token(Token = "0x4000C1F")]
	ProcessInlineSchema = 1,
	[Token(Token = "0x4000C20")]
	ProcessSchemaLocation = 2,
	[Token(Token = "0x4000C21")]
	ReportValidationWarnings = 4,
	[Token(Token = "0x4000C22")]
	ProcessIdentityConstraints = 8,
	[Token(Token = "0x4000C23")]
	AllowXmlAttributes = 0x10
}
