using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001DC")]
[DisallowMultipleComponent]
public sealed class AsyncPostRenderTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x46EBC70", Offset = "0x46EBC70", VA = "0x46EBC70")]
	private void OnPostRender()
	{
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x46EBCE0", Offset = "0x46EBCE0", VA = "0x46EBCE0")]
	public IAsyncOnPostRenderHandler GetOnPostRenderAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x46EBD50", Offset = "0x46EBD50", VA = "0x46EBD50")]
	public IAsyncOnPostRenderHandler GetOnPostRenderAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x46EBDC0", Offset = "0x46EBDC0", VA = "0x46EBDC0")]
	public UniTask OnPostRenderAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x46EBEB0", Offset = "0x46EBEB0", VA = "0x46EBEB0")]
	public UniTask OnPostRenderAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x46EBFA0", Offset = "0x46EBFA0", VA = "0x46EBFA0")]
	public AsyncPostRenderTrigger()
	{
	}
}
