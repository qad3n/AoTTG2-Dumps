// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncMouseOverTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001D1")]
[DisallowMultipleComponent]
public sealed class AsyncMouseOverTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B59")]
	[Address(RVA = "0x2932290", Offset = "0x2930890", VA = "0x182932290")]
	private void OnMouseOver()
	{
	}

	[Token(Token = "0x6000B5A")]
	[Address(RVA = "0x2931F80", Offset = "0x2930580", VA = "0x182931F80")]
	public IAsyncOnMouseOverHandler GetOnMouseOverAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B5B")]
	[Address(RVA = "0x2931FF0", Offset = "0x29305F0", VA = "0x182931FF0")]
	public IAsyncOnMouseOverHandler GetOnMouseOverAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B5C")]
	[Address(RVA = "0x2932180", Offset = "0x2930780", VA = "0x182932180")]
	public UniTask OnMouseOverAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B5D")]
	[Address(RVA = "0x2932070", Offset = "0x2930670", VA = "0x182932070")]
	public UniTask OnMouseOverAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B5E")]
	[Address(RVA = "0x2932300", Offset = "0x2930900", VA = "0x182932300")]
	public AsyncMouseOverTrigger()
	{
	}
}
