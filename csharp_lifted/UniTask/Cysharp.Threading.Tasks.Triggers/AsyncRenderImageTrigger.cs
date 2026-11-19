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

[Token(Token = "0x20001E9")]
[DisallowMultipleComponent]
public sealed class AsyncRenderImageTrigger : AsyncTriggerBase<(RenderTexture source, RenderTexture destination)>
{
	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x62FF870", Offset = "0x62FE870", VA = "0x62FF870")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x62FF8F0", Offset = "0x62FE8F0", VA = "0x62FF8F0")]
	public IAsyncOnRenderImageHandler GetOnRenderImageAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x62FF960", Offset = "0x62FE960", VA = "0x62FF960")]
	public IAsyncOnRenderImageHandler GetOnRenderImageAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x62FF9D0", Offset = "0x62FE9D0", VA = "0x62FF9D0")]
	public UniTask<(RenderTexture, RenderTexture)> OnRenderImageAsync()
	{
		return default(UniTask<(RenderTexture, RenderTexture)>);
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x62FFAD0", Offset = "0x62FEAD0", VA = "0x62FFAD0")]
	public UniTask<(RenderTexture, RenderTexture)> OnRenderImageAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<(RenderTexture, RenderTexture)>);
	}

	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x62FFBF0", Offset = "0x62FEBF0", VA = "0x62FFBF0")]
	public AsyncRenderImageTrigger()
	{
	}
}
