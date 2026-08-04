// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncMouseDownTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001C6")]
[DisallowMultipleComponent]
public sealed class AsyncMouseDownTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B19")]
	[Address(RVA = "0x4A0E760", Offset = "0x4A0E760", VA = "0x4A0E760")]
	private void OnMouseDown()
	{
	}

	[Token(Token = "0x6000B1A")]
	[Address(RVA = "0x4A0E7D0", Offset = "0x4A0E7D0", VA = "0x4A0E7D0")]
	public IAsyncOnMouseDownHandler GetOnMouseDownAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B1B")]
	[Address(RVA = "0x4A0E840", Offset = "0x4A0E840", VA = "0x4A0E840")]
	public IAsyncOnMouseDownHandler GetOnMouseDownAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B1C")]
	[Address(RVA = "0x4A0E8B0", Offset = "0x4A0E8B0", VA = "0x4A0E8B0")]
	public UniTask OnMouseDownAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B1D")]
	[Address(RVA = "0x4A0E9A0", Offset = "0x4A0E9A0", VA = "0x4A0E9A0")]
	public UniTask OnMouseDownAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B1E")]
	[Address(RVA = "0x4A0EA90", Offset = "0x4A0EA90", VA = "0x4A0EA90")]
	public AsyncMouseDownTrigger()
	{
	}
}
