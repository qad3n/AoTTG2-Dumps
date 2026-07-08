using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000244")]
[Flags]
internal enum InternalTaskOptions
{
	[Token(Token = "0x4000AC6")]
	None = 0,
	[Token(Token = "0x4000AC7")]
	InternalOptionsMask = 0xFF00,
	[Token(Token = "0x4000AC8")]
	ContinuationTask = 0x200,
	[Token(Token = "0x4000AC9")]
	PromiseTask = 0x400,
	[Token(Token = "0x4000ACA")]
	LazyCancellation = 0x1000,
	[Token(Token = "0x4000ACB")]
	QueuedByRuntime = 0x2000,
	[Token(Token = "0x4000ACC")]
	DoNotDispose = 0x4000
}
