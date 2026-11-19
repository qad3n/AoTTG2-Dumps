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

[Token(Token = "0x200003B")]
public abstract class MoveNextSource : IUniTaskSource<bool>, IUniTaskSource, IValueTaskSource, IValueTaskSource<bool>
{
	[Token(Token = "0x4000097")]
	[FieldOffset(Offset = "0x10")]
	protected UniTaskCompletionSourceCore<bool> completionSource;

	[Token(Token = "0x600012E")]
	[Address(RVA = "0x62C6210", Offset = "0x62C5210", VA = "0x62C6210", Slot = "22")]
	public bool GetResult(short token)
	{
		return default(bool);
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x62C6260", Offset = "0x62C5260", VA = "0x62C6260", Slot = "10")]
	public UniTaskStatus GetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x62C62B0", Offset = "0x62C52B0", VA = "0x62C62B0", Slot = "11")]
	public void OnCompleted(Action<object> continuation, object state, short token)
	{
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x62C6310", Offset = "0x62C5310", VA = "0x62C6310", Slot = "13")]
	public UniTaskStatus UnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x62C63C0", Offset = "0x62C53C0", VA = "0x62C63C0", Slot = "12")]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
	{
	}

	[Token(Token = "0x6000133")]
	protected bool TryGetResult<T>(UniTask<T>.Awaiter awaiter, out T result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x62C6410", Offset = "0x62C5410", VA = "0x62C6410")]
	protected bool TryGetResult(UniTask.Awaiter awaiter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x62C6570", Offset = "0x62C5570", VA = "0x62C6570")]
	protected MoveNextSource()
	{
	}
}
