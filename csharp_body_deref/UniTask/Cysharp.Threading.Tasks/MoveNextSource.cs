using System;
using System.Threading.Tasks.Sources;
using Il2CppDummyDll;

namespace Cysharp.Threading.Tasks;

[Token(Token = "0x200003D")]
public abstract class MoveNextSource : IUniTaskSource<bool>, IUniTaskSource, IValueTaskSource, IValueTaskSource<bool>
{
	[Token(Token = "0x400009C")]
	[FieldOffset(Offset = "0x10")]
	protected UniTaskCompletionSourceCore<bool> completionSource;

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x46B1530", Offset = "0x46B1530", VA = "0x46B1530", Slot = "22")]
	public bool GetResult(short token)
	{
		return default(bool);
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x46B1580", Offset = "0x46B1580", VA = "0x46B1580", Slot = "10")]
	public UniTaskStatus GetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x46B15D0", Offset = "0x46B15D0", VA = "0x46B15D0", Slot = "11")]
	public void OnCompleted(Action<object> continuation, object state, short token)
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x46B1630", Offset = "0x46B1630", VA = "0x46B1630", Slot = "13")]
	public UniTaskStatus UnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x46B16E0", Offset = "0x46B16E0", VA = "0x46B16E0", Slot = "12")]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
	{
	}

	[Token(Token = "0x6000135")]
	protected bool TryGetResult<T>(UniTask<T>.Awaiter awaiter, out T result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x46B1730", Offset = "0x46B1730", VA = "0x46B1730")]
	protected bool TryGetResult(UniTask.Awaiter awaiter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x46B1890", Offset = "0x46B1890", VA = "0x46B1890")]
	protected MoveNextSource()
	{
	}
}
