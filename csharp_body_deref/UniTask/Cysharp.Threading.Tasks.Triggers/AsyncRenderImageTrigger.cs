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
	[Address(RVA = "0x29375B0", Offset = "0x2935BB0", VA = "0x1829375B0")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x2937290", Offset = "0x2935890", VA = "0x182937290")]
	public IAsyncOnRenderImageHandler GetOnRenderImageAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x2937300", Offset = "0x2935900", VA = "0x182937300")]
	public IAsyncOnRenderImageHandler GetOnRenderImageAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x2937490", Offset = "0x2935A90", VA = "0x182937490")]
	public UniTask<(RenderTexture, RenderTexture)> OnRenderImageAsync()
	{
		return default(UniTask<(RenderTexture, RenderTexture)>);
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x2937380", Offset = "0x2935980", VA = "0x182937380")]
	public UniTask<(RenderTexture, RenderTexture)> OnRenderImageAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<(RenderTexture, RenderTexture)>);
	}

	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x2937640", Offset = "0x2935C40", VA = "0x182937640")]
	public AsyncRenderImageTrigger()
	{
	}
}
