// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.TriggerEvent
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
