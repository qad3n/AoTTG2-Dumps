// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncDrawGizmosSelectedTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001BC")]
[DisallowMultipleComponent]
public sealed class AsyncDrawGizmosSelectedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000AF6")]
	[Address(RVA = "0x4A0D640", Offset = "0x4A0D640", VA = "0x4A0D640")]
	private void OnDrawGizmosSelected()
	{
	}

	[Token(Token = "0x6000AF7")]
	[Address(RVA = "0x4A0D6B0", Offset = "0x4A0D6B0", VA = "0x4A0D6B0")]
	public IAsyncOnDrawGizmosSelectedHandler GetOnDrawGizmosSelectedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AF8")]
	[Address(RVA = "0x4A0D720", Offset = "0x4A0D720", VA = "0x4A0D720")]
	public IAsyncOnDrawGizmosSelectedHandler GetOnDrawGizmosSelectedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AF9")]
	[Address(RVA = "0x4A0D790", Offset = "0x4A0D790", VA = "0x4A0D790")]
	public UniTask OnDrawGizmosSelectedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AFA")]
	[Address(RVA = "0x4A0D880", Offset = "0x4A0D880", VA = "0x4A0D880")]
	public UniTask OnDrawGizmosSelectedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AFB")]
	[Address(RVA = "0x4A0D970", Offset = "0x4A0D970", VA = "0x4A0D970")]
	public AsyncDrawGizmosSelectedTrigger()
	{
	}
}
