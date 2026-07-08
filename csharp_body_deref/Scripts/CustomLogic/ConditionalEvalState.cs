using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x2000455")]
internal enum ConditionalEvalState
{
	[Token(Token = "0x400131C")]
	None,
	[Token(Token = "0x400131D")]
	PassedIf,
	[Token(Token = "0x400131E")]
	FailedIf,
	[Token(Token = "0x400131F")]
	PassedElseIf,
	[Token(Token = "0x4001320")]
	FailedElseIf
}
