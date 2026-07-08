using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000243")]
[Flags]
public enum TaskCreationOptions
{
	[Token(Token = "0x4000ABE")]
	None = 0,
	[Token(Token = "0x4000ABF")]
	PreferFairness = 1,
	[Token(Token = "0x4000AC0")]
	LongRunning = 2,
	[Token(Token = "0x4000AC1")]
	AttachedToParent = 4,
	[Token(Token = "0x4000AC2")]
	DenyChildAttach = 8,
	[Token(Token = "0x4000AC3")]
	HideScheduler = 0x10,
	[Token(Token = "0x4000AC4")]
	RunContinuationsAsynchronously = 0x40
}
