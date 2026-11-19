// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.RestrictionFlags
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x2000189")]
[Flags]
internal enum RestrictionFlags
{
	[Token(Token = "0x40007B2")]
	Length = 1,
	[Token(Token = "0x40007B3")]
	MinLength = 2,
	[Token(Token = "0x40007B4")]
	MaxLength = 4,
	[Token(Token = "0x40007B5")]
	Pattern = 8,
	[Token(Token = "0x40007B6")]
	Enumeration = 0x10,
	[Token(Token = "0x40007B7")]
	WhiteSpace = 0x20,
	[Token(Token = "0x40007B8")]
	MaxInclusive = 0x40,
	[Token(Token = "0x40007B9")]
	MaxExclusive = 0x80,
	[Token(Token = "0x40007BA")]
	MinInclusive = 0x100,
	[Token(Token = "0x40007BB")]
	MinExclusive = 0x200,
	[Token(Token = "0x40007BC")]
	TotalDigits = 0x400,
	[Token(Token = "0x40007BD")]
	FractionDigits = 0x800
}
