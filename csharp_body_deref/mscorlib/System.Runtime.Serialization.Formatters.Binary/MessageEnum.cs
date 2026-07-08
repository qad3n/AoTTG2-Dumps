using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Serializable]
[Token(Token = "0x200042F")]
[Flags]
internal enum MessageEnum
{
	[Token(Token = "0x400122E")]
	NoArgs = 1,
	[Token(Token = "0x400122F")]
	ArgsInline = 2,
	[Token(Token = "0x4001230")]
	ArgsIsArray = 4,
	[Token(Token = "0x4001231")]
	ArgsInArray = 8,
	[Token(Token = "0x4001232")]
	NoContext = 0x10,
	[Token(Token = "0x4001233")]
	ContextInline = 0x20,
	[Token(Token = "0x4001234")]
	ContextInArray = 0x40,
	[Token(Token = "0x4001235")]
	MethodSignatureInArray = 0x80,
	[Token(Token = "0x4001236")]
	PropertyInArray = 0x100,
	[Token(Token = "0x4001237")]
	NoReturnValue = 0x200,
	[Token(Token = "0x4001238")]
	ReturnValueVoid = 0x400,
	[Token(Token = "0x4001239")]
	ReturnValueInline = 0x800,
	[Token(Token = "0x400123A")]
	ReturnValueInArray = 0x1000,
	[Token(Token = "0x400123B")]
	ExceptionInArray = 0x2000,
	[Token(Token = "0x400123C")]
	GenericMethod = 0x8000
}
