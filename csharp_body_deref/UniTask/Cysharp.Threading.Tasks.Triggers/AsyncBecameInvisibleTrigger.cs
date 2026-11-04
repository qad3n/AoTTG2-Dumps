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

[Token(Token = "0x20001A5")]
[DisallowMultipleComponent]
public sealed class AsyncBecameInvisibleTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000ABF")]
	[Address(RVA = "0x2929810", Offset = "0x2927E10", VA = "0x182929810")]
	private void OnBecameInvisible()
	{
	}

	[Token(Token = "0x6000AC0")]
	[Address(RVA = "0x2929580", Offset = "0x2927B80", VA = "0x182929580")]
	public IAsyncOnBecameInvisibleHandler GetOnBecameInvisibleAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AC1")]
	[Address(RVA = "0x2929500", Offset = "0x2927B00", VA = "0x182929500")]
	public IAsyncOnBecameInvisibleHandler GetOnBecameInvisibleAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AC2")]
	[Address(RVA = "0x2929700", Offset = "0x2927D00", VA = "0x182929700")]
	public UniTask OnBecameInvisibleAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AC3")]
	[Address(RVA = "0x29295F0", Offset = "0x2927BF0", VA = "0x1829295F0")]
	public UniTask OnBecameInvisibleAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AC4")]
	[Address(RVA = "0x2929880", Offset = "0x2927E80", VA = "0x182929880")]
	public AsyncBecameInvisibleTrigger()
	{
	}
}
