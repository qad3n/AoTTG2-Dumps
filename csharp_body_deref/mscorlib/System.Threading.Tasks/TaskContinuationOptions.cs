using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x2000245")]
[Flags]
public enum TaskContinuationOptions
{
	[Token(Token = "0x4000ACE")]
	None = 0,
	[Token(Token = "0x4000ACF")]
	PreferFairness = 1,
	[Token(Token = "0x4000AD0")]
	LongRunning = 2,
	[Token(Token = "0x4000AD1")]
	AttachedToParent = 4,
	[Token(Token = "0x4000AD2")]
	DenyChildAttach = 8,
	[Token(Token = "0x4000AD3")]
	HideScheduler = 0x10,
	[Token(Token = "0x4000AD4")]
	LazyCancellation = 0x20,
	[Token(Token = "0x4000AD5")]
	RunContinuationsAsynchronously = 0x40,
	[Token(Token = "0x4000AD6")]
	NotOnRanToCompletion = 0x10000,
	[Token(Token = "0x4000AD7")]
	NotOnFaulted = 0x20000,
	[Token(Token = "0x4000AD8")]
	NotOnCanceled = 0x40000,
	[Token(Token = "0x4000AD9")]
	OnlyOnRanToCompletion = 0x60000,
	[Token(Token = "0x4000ADA")]
	OnlyOnFaulted = 0x50000,
	[Token(Token = "0x4000ADB")]
	OnlyOnCanceled = 0x30000,
	[Token(Token = "0x4000ADC")]
	ExecuteSynchronously = 0x80000
}
