// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncMouseExitTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001CC")]
[DisallowMultipleComponent]
public sealed class AsyncMouseExitTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x4A0F1B0", Offset = "0x4A0F1B0", VA = "0x4A0F1B0")]
	private void OnMouseExit()
	{
	}

	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x4A0F220", Offset = "0x4A0F220", VA = "0x4A0F220")]
	public IAsyncOnMouseExitHandler GetOnMouseExitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x4A0F290", Offset = "0x4A0F290", VA = "0x4A0F290")]
	public IAsyncOnMouseExitHandler GetOnMouseExitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x4A0F300", Offset = "0x4A0F300", VA = "0x4A0F300")]
	public UniTask OnMouseExitAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x4A0F3F0", Offset = "0x4A0F3F0", VA = "0x4A0F3F0")]
	public UniTask OnMouseExitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x4A0F4E0", Offset = "0x4A0F4E0", VA = "0x4A0F4E0")]
	public AsyncMouseExitTrigger()
	{
	}
}
