using System;
using System.Threading;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x2000073")]
public struct TriggerEvent<T>
{
	[Token(Token = "0x40000F9")]
	[FieldOffset(Offset = "0x0")]
	private ITriggerHandler<T> head;

	[Token(Token = "0x40000FA")]
	[FieldOffset(Offset = "0x0")]
	private ITriggerHandler<T> iteratingHead;

	[Token(Token = "0x40000FB")]
	[FieldOffset(Offset = "0x0")]
	private ITriggerHandler<T> iteratingNode;

	[Token(Token = "0x6000192")]
	private void LogError(Exception ex)
	{
	}

	[Token(Token = "0x6000193")]
	public void SetResult(T value)
	{
	}

	[Token(Token = "0x6000194")]
	public void SetCanceled(CancellationToken cancellationToken)
	{
	}

	[Token(Token = "0x6000195")]
	public void SetCompleted()
	{
	}

	[Token(Token = "0x6000196")]
	public void SetError(Exception exception)
	{
	}

	[Token(Token = "0x6000197")]
	public void Add(ITriggerHandler<T> handler)
	{
	}

	[Token(Token = "0x6000198")]
	public void Remove(ITriggerHandler<T> handler)
	{
	}
}
