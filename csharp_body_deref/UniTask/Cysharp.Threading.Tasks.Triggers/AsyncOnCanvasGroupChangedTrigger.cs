using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001A8")]
[DisallowMultipleComponent]
public sealed class AsyncOnCanvasGroupChangedTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x46E6270", Offset = "0x46E6270", VA = "0x46E6270")]
	private void OnCanvasGroupChanged()
	{
	}

	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x46E62E0", Offset = "0x46E62E0", VA = "0x46E62E0")]
	public IAsyncOnCanvasGroupChangedHandler GetOnCanvasGroupChangedAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x46E6350", Offset = "0x46E6350", VA = "0x46E6350")]
	public IAsyncOnCanvasGroupChangedHandler GetOnCanvasGroupChangedAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x46E63C0", Offset = "0x46E63C0", VA = "0x46E63C0")]
	public UniTask OnCanvasGroupChangedAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x46E64B0", Offset = "0x46E64B0", VA = "0x46E64B0")]
	public UniTask OnCanvasGroupChangedAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000AB5")]
	[Address(RVA = "0x46E65A0", Offset = "0x46E65A0", VA = "0x46E65A0")]
	public AsyncOnCanvasGroupChangedTrigger()
	{
	}
}
