using System.Threading;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000CA")]
public interface IAsyncResult
{
	[Token(Token = "0x1700008D")]
	bool IsCompleted
	{
		[Token(Token = "0x6000791")]
		get;
	}

	[Token(Token = "0x1700008E")]
	WaitHandle AsyncWaitHandle
	{
		[Token(Token = "0x6000792")]
		get;
	}

	[Token(Token = "0x1700008F")]
	object AsyncState
	{
		[Token(Token = "0x6000793")]
		get;
	}

	[Token(Token = "0x17000090")]
	bool CompletedSynchronously
	{
		[Token(Token = "0x6000794")]
		get;
	}
}
