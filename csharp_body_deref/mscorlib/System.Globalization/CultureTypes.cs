// ==================== AoTTG2 cross-reference ====================
// Type: System.Globalization.CultureTypes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Globalization;

[Token(Token = "0x200056C")]
[Flags]
public enum CultureTypes
{
	[Token(Token = "0x40015CB")]
	NeutralCultures = 1,
	[Token(Token = "0x40015CC")]
	SpecificCultures = 2,
	[Token(Token = "0x40015CD")]
	InstalledWin32Cultures = 4,
	[Token(Token = "0x40015CE")]
	AllCultures = NeutralCultures | SpecificCultures | InstalledWin32Cultures,
	[Token(Token = "0x40015CF")]
	UserCustomCulture = 8,
	[Token(Token = "0x40015D0")]
	ReplacementCultures = 0x10,
	[Token(Token = "0x40015D1")]
	[Obsolete("This value has been deprecated.  Please use other values in CultureTypes.")]
	WindowsOnlyCultures = 0x20,
	[Token(Token = "0x40015D2")]
	[Obsolete("This value has been deprecated.  Please use other values in CultureTypes.")]
	FrameworkCultures = 0x40
}
