// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncBecameInvisibleTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001A2")]
[DisallowMultipleComponent]
public sealed class AsyncBecameInvisibleTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000A9B")]
	[Address(RVA = "0x4A0A920", Offset = "0x4A0A920", VA = "0x4A0A920")]
	private void OnBecameInvisible()
	{
	}

	[Token(Token = "0x6000A9C")]
	[Address(RVA = "0x4A0A990", Offset = "0x4A0A990", VA = "0x4A0A990")]
	public IAsyncOnBecameInvisibleHandler GetOnBecameInvisibleAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x4A0AA00", Offset = "0x4A0AA00", VA = "0x4A0AA00")]
	public IAsyncOnBecameInvisibleHandler GetOnBecameInvisibleAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x4A0AA70", Offset = "0x4A0AA70", VA = "0x4A0AA70")]
	public UniTask OnBecameInvisibleAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A9F")]
	[Address(RVA = "0x4A0AB60", Offset = "0x4A0AB60", VA = "0x4A0AB60")]
	public UniTask OnBecameInvisibleAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x4A0AC50", Offset = "0x4A0AC50", VA = "0x4A0AC50")]
	public AsyncBecameInvisibleTrigger()
	{
	}
}
