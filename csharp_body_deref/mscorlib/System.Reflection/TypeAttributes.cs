using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004FE")]
[Flags]
public enum TypeAttributes
{
	[Token(Token = "0x4001470")]
	VisibilityMask = 7,
	[Token(Token = "0x4001471")]
	NotPublic = 0,
	[Token(Token = "0x4001472")]
	Public = 1,
	[Token(Token = "0x4001473")]
	NestedPublic = 2,
	[Token(Token = "0x4001474")]
	NestedPrivate = 3,
	[Token(Token = "0x4001475")]
	NestedFamily = 4,
	[Token(Token = "0x4001476")]
	NestedAssembly = 5,
	[Token(Token = "0x4001477")]
	NestedFamANDAssem = 6,
	[Token(Token = "0x4001478")]
	NestedFamORAssem = 7,
	[Token(Token = "0x4001479")]
	LayoutMask = 0x18,
	[Token(Token = "0x400147A")]
	AutoLayout = 0,
	[Token(Token = "0x400147B")]
	SequentialLayout = 8,
	[Token(Token = "0x400147C")]
	ExplicitLayout = 0x10,
	[Token(Token = "0x400147D")]
	ClassSemanticsMask = 0x20,
	[Token(Token = "0x400147E")]
	Class = 0,
	[Token(Token = "0x400147F")]
	Interface = 0x20,
	[Token(Token = "0x4001480")]
	Abstract = 0x80,
	[Token(Token = "0x4001481")]
	Sealed = 0x100,
	[Token(Token = "0x4001482")]
	SpecialName = 0x400,
	[Token(Token = "0x4001483")]
	Import = 0x1000,
	[Token(Token = "0x4001484")]
	Serializable = 0x2000,
	[Token(Token = "0x4001485")]
	WindowsRuntime = 0x4000,
	[Token(Token = "0x4001486")]
	StringFormatMask = 0x30000,
	[Token(Token = "0x4001487")]
	AnsiClass = 0,
	[Token(Token = "0x4001488")]
	UnicodeClass = 0x10000,
	[Token(Token = "0x4001489")]
	AutoClass = 0x20000,
	[Token(Token = "0x400148A")]
	CustomFormatClass = 0x30000,
	[Token(Token = "0x400148B")]
	CustomFormatMask = 0xC00000,
	[Token(Token = "0x400148C")]
	BeforeFieldInit = 0x100000,
	[Token(Token = "0x400148D")]
	RTSpecialName = 0x800,
	[Token(Token = "0x400148E")]
	HasSecurity = 0x40000,
	[Token(Token = "0x400148F")]
	ReservedMask = 0x40800
}
