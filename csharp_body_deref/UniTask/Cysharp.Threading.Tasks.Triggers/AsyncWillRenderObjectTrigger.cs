using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001FE")]
[DisallowMultipleComponent]
public sealed class AsyncWillRenderObjectTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x46EF790", Offset = "0x46EF790", VA = "0x46EF790")]
	private void OnWillRenderObject()
	{
	}

	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x46EF800", Offset = "0x46EF800", VA = "0x46EF800")]
	public IAsyncOnWillRenderObjectHandler GetOnWillRenderObjectAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x46EF870", Offset = "0x46EF870", VA = "0x46EF870")]
	public IAsyncOnWillRenderObjectHandler GetOnWillRenderObjectAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x46EF8E0", Offset = "0x46EF8E0", VA = "0x46EF8E0")]
	public UniTask OnWillRenderObjectAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x46EF9D0", Offset = "0x46EF9D0", VA = "0x46EF9D0")]
	public UniTask OnWillRenderObjectAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x46EFAC0", Offset = "0x46EFAC0", VA = "0x46EFAC0")]
	public AsyncWillRenderObjectTrigger()
	{
	}
}
