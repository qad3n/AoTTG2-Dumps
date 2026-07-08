using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001E6")]
[DisallowMultipleComponent]
public sealed class AsyncRenderImageTrigger : AsyncTriggerBase<(RenderTexture source, RenderTexture destination)>
{
	[Token(Token = "0x6000B89")]
	[Address(RVA = "0x46ECDA0", Offset = "0x46ECDA0", VA = "0x46ECDA0")]
	private void OnRenderImage(RenderTexture source, RenderTexture destination)
	{
	}

	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x46ECE20", Offset = "0x46ECE20", VA = "0x46ECE20")]
	public IAsyncOnRenderImageHandler GetOnRenderImageAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x46ECE90", Offset = "0x46ECE90", VA = "0x46ECE90")]
	public IAsyncOnRenderImageHandler GetOnRenderImageAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B8C")]
	[Address(RVA = "0x46ECF00", Offset = "0x46ECF00", VA = "0x46ECF00")]
	public UniTask<(RenderTexture, RenderTexture)> OnRenderImageAsync()
	{
		return default(UniTask<(RenderTexture, RenderTexture)>);
	}

	[Token(Token = "0x6000B8D")]
	[Address(RVA = "0x46ED000", Offset = "0x46ED000", VA = "0x46ED000")]
	public UniTask<(RenderTexture, RenderTexture)> OnRenderImageAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<(RenderTexture, RenderTexture)>);
	}

	[Token(Token = "0x6000B8E")]
	[Address(RVA = "0x46ED120", Offset = "0x46ED120", VA = "0x46ED120")]
	public AsyncRenderImageTrigger()
	{
	}
}
