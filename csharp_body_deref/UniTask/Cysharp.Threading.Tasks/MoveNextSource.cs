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
	[Address(RVA = "0x290E890", Offset = "0x290CE90", VA = "0x18290E890", Slot = "22")]
	public bool GetResult(short token)
	{
		return default(bool);
	}

	[Token(Token = "0x600012F")]
	[Address(RVA = "0x290E8E0", Offset = "0x290CEE0", VA = "0x18290E8E0", Slot = "10")]
	public UniTaskStatus GetStatus(short token)
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000130")]
	[Address(RVA = "0x290EA30", Offset = "0x290D030", VA = "0x18290EA30", Slot = "11")]
	public void OnCompleted(Action<object> continuation, object state, short token)
	{
	}

	[Token(Token = "0x6000131")]
	[Address(RVA = "0x290EC70", Offset = "0x290D270", VA = "0x18290EC70", Slot = "13")]
	public UniTaskStatus UnsafeGetStatus()
	{
		return default(UniTaskStatus);
	}

	[Token(Token = "0x6000132")]
	[Address(RVA = "0x290E840", Offset = "0x290CE40", VA = "0x18290E840", Slot = "12")]
	private void Cysharp_002EThreading_002ETasks_002EIUniTaskSource_002EGetResult(short token)
	{
	}

	[Token(Token = "0x6000133")]
	protected bool TryGetResult<T>(UniTask<T>.Awaiter awaiter, out T result)
	{
		return default(bool);
	}

	[Token(Token = "0x6000134")]
	[Address(RVA = "0x290EBF0", Offset = "0x290D1F0", VA = "0x18290EBF0")]
	protected bool TryGetResult(UniTask.Awaiter awaiter)
	{
		return default(bool);
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected MoveNextSource()
	{
	}
}
