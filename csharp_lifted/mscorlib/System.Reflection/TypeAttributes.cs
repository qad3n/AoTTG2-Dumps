// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.TypeAttributes
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x2000507")]
[Flags]
public enum TypeAttributes
{
	[Token(Token = "0x40013D0")]
	VisibilityMask = 7,
	[Token(Token = "0x40013D1")]
	NotPublic = 0,
	[Token(Token = "0x40013D2")]
	Public = 1,
	[Token(Token = "0x40013D3")]
	NestedPublic = 2,
	[Token(Token = "0x40013D4")]
	NestedPrivate = 3,
	[Token(Token = "0x40013D5")]
	NestedFamily = 4,
	[Token(Token = "0x40013D6")]
	NestedAssembly = 5,
	[Token(Token = "0x40013D7")]
	NestedFamANDAssem = 6,
	[Token(Token = "0x40013D8")]
	NestedFamORAssem = VisibilityMask,
	[Token(Token = "0x40013D9")]
	LayoutMask = 0x18,
	[Token(Token = "0x40013DA")]
	AutoLayout = 0,
	[Token(Token = "0x40013DB")]
	SequentialLayout = 8,
	[Token(Token = "0x40013DC")]
	ExplicitLayout = 0x10,
	[Token(Token = "0x40013DD")]
	ClassSemanticsMask = 0x20,
	[Token(Token = "0x40013DE")]
	Class = 0,
	[Token(Token = "0x40013DF")]
	Interface = ClassSemanticsMask,
	[Token(Token = "0x40013E0")]
	Abstract = 0x80,
	[Token(Token = "0x40013E1")]
	Sealed = 0x100,
	[Token(Token = "0x40013E2")]
	SpecialName = 0x400,
	[Token(Token = "0x40013E3")]
	Import = 0x1000,
	[Token(Token = "0x40013E4")]
	Serializable = 0x2000,
	[Token(Token = "0x40013E5")]
	WindowsRuntime = 0x4000,
	[Token(Token = "0x40013E6")]
	StringFormatMask = 0x30000,
	[Token(Token = "0x40013E7")]
	AnsiClass = 0,
	[Token(Token = "0x40013E8")]
	UnicodeClass = 0x10000,
	[Token(Token = "0x40013E9")]
	AutoClass = 0x20000,
	[Token(Token = "0x40013EA")]
	CustomFormatClass = StringFormatMask,
	[Token(Token = "0x40013EB")]
	CustomFormatMask = 0xC00000,
	[Token(Token = "0x40013EC")]
	BeforeFieldInit = 0x100000,
	[Token(Token = "0x40013ED")]
	RTSpecialName = 0x800,
	[Token(Token = "0x40013EE")]
	HasSecurity = 0x40000,
	[Token(Token = "0x40013EF")]
	ReservedMask = RTSpecialName | HasSecurity
}
