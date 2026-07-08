using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200023A")]
public enum TaskStatus
{
	[Token(Token = "0x4000A7D")]
	Created,
	[Token(Token = "0x4000A7E")]
	WaitingForActivation,
	[Token(Token = "0x4000A7F")]
	WaitingToRun,
	[Token(Token = "0x4000A80")]
	Running,
	[Token(Token = "0x4000A81")]
	WaitingForChildrenToComplete,
	[Token(Token = "0x4000A82")]
	RanToCompletion,
	[Token(Token = "0x4000A83")]
	Canceled,
	[Token(Token = "0x4000A84")]
	Faulted
}
