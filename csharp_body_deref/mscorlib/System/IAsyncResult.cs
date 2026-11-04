// ==================== AoTTG2 cross-reference ====================
// Type: System.IAsyncResult
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000F2")]
public interface IAsyncResult
{
	[Token(Token = "0x1700008D")]
	bool IsCompleted
	{
		[Token(Token = "0x60007C3")]
		get;
	}

	[Token(Token = "0x1700008E")]
	WaitHandle AsyncWaitHandle
	{
		[Token(Token = "0x60007C4")]
		get;
	}

	[Token(Token = "0x1700008F")]
	object AsyncState
	{
		[Token(Token = "0x60007C5")]
		get;
	}

	[Token(Token = "0x17000090")]
	bool CompletedSynchronously
	{
		[Token(Token = "0x60007C6")]
		get;
	}
}
