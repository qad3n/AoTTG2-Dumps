// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncRenderImageTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001E6")]
[DisallowMultipleComponent]
public sealed class AsyncRenderImageTrigger : AsyncTriggerBase<(RenderTexture source, RenderTexture destination)>
{
	[Token(Token = "0x6000B89")]
	[Address(RVA = "0x4A11EA0", Offset = "0x4A11EA0", VA = "0x4A11EA0")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x4A11F20", Offset = "0x4A11F20", VA = "0x4A11F20")]
	public IAsyncOnRenderImageHandler GetOnRenderImageAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x4A11F90", Offset = "0x4A11F90", VA = "0x4A11F90")]
	public IAsyncOnRenderImageHandler GetOnRenderImageAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B8C")]
	[Address(RVA = "0x4A12000", Offset = "0x4A12000", VA = "0x4A12000")]
	public UniTask<(RenderTexture, RenderTexture)> OnRenderImageAsync()
	{
		return default(UniTask<(RenderTexture, RenderTexture)>);
	}

	[Token(Token = "0x6000B8D")]
	[Address(RVA = "0x4A12100", Offset = "0x4A12100", VA = "0x4A12100")]
	public UniTask<(RenderTexture, RenderTexture)> OnRenderImageAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<(RenderTexture, RenderTexture)>);
	}

	[Token(Token = "0x6000B8E")]
	[Address(RVA = "0x4A12220", Offset = "0x4A12220", VA = "0x4A12220")]
	public AsyncRenderImageTrigger()
	{
	}
}
