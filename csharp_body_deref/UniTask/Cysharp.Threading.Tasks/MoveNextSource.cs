// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.MoveNextSource
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x49D6630", Offset = "0x49D6630", VA = "0x49D6630", Slot = "22")]
	public bool GetResult(short token)
	{
		return default(bool);
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x49D6680", Offset = "0x49D6680", VA = "0x49D6680", Slot = "10")]
	public UniTaskStatus GetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x49D66D0", Offset = "0x49D66D0", VA = "0x49D66D0", Slot = "11")]
	public void OnCompleted(Action<object> continuation, object state, short token)
	{
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x49D6730", Offset = "0x49D6730", VA = "0x49D6730", Slot = "13")]
	public UniTaskStatus UnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x49D67E0", Offset = "0x49D67E0", VA = "0x49D67E0", Slot = "12")]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
	{
	}

	[Token(Token = "0x6000135")]
	protected bool TryGetResult<T>(UniTask<T>.Awaiter awaiter, out T result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x49D6830", Offset = "0x49D6830", VA = "0x49D6830")]
	protected bool TryGetResult(UniTask.Awaiter awaiter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000137")]
	[Address(RVA = "0x49D6990", Offset = "0x49D6990", VA = "0x49D6990")]
	protected MoveNextSource()
	{
	}
}
