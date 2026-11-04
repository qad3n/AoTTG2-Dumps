// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.Formatters.Binary.MessageEnum
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Runtime.Serialization.Formatters.Binary;

[Serializable]
[Token(Token = "0x200045E")]
[Flags]
internal enum MessageEnum
{
	[Token(Token = "0x4001230")]
	NoArgs = 1,
	[Token(Token = "0x4001231")]
	ArgsInline = 2,
	[Token(Token = "0x4001232")]
	ArgsIsArray = 4,
	[Token(Token = "0x4001233")]
	ArgsInArray = 8,
	[Token(Token = "0x4001234")]
	NoContext = 0x10,
	[Token(Token = "0x4001235")]
	ContextInline = 0x20,
	[Token(Token = "0x4001236")]
	ContextInArray = 0x40,
	[Token(Token = "0x4001237")]
	MethodSignatureInArray = 0x80,
	[Token(Token = "0x4001238")]
	PropertyInArray = 0x100,
	[Token(Token = "0x4001239")]
	NoReturnValue = 0x200,
	[Token(Token = "0x400123A")]
	ReturnValueVoid = 0x400,
	[Token(Token = "0x400123B")]
	ReturnValueInline = 0x800,
	[Token(Token = "0x400123C")]
	ReturnValueInArray = 0x1000,
	[Token(Token = "0x400123D")]
	ExceptionInArray = 0x2000,
	[Token(Token = "0x400123E")]
	GenericMethod = 0x8000
}
