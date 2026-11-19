// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncPreCullTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001E1")]
[DisallowMultipleComponent]
public sealed class AsyncPreCullTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x62FEAB0", Offset = "0x62FDAB0", VA = "0x62FEAB0")]
	private void OnPreCull()
	{
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x62FEB20", Offset = "0x62FDB20", VA = "0x62FEB20")]
	public IAsyncOnPreCullHandler GetOnPreCullAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B93")]
	[Address(RVA = "0x62FEB90", Offset = "0x62FDB90", VA = "0x62FEB90")]
	public IAsyncOnPreCullHandler GetOnPreCullAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x62FEC00", Offset = "0x62FDC00", VA = "0x62FEC00")]
	public UniTask OnPreCullAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x62FECF0", Offset = "0x62FDCF0", VA = "0x62FECF0")]
	public UniTask OnPreCullAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B96")]
	[Address(RVA = "0x62FEDE0", Offset = "0x62FDDE0", VA = "0x62FEDE0")]
	public AsyncPreCullTrigger()
	{
	}
}
