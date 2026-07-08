using Il2CppDummyDll;

namespace System.Threading;

[Serializable]
[Token(Token = "0x2000204")]
internal enum StackCrawlMark
{
	[Token(Token = "0x40009DB")]
	LookForMe,
	[Token(Token = "0x40009DC")]
	LookForMyCaller,
	[Token(Token = "0x40009DD")]
	LookForMyCallersCaller,
	[Token(Token = "0x40009DE")]
	LookForThread
}
