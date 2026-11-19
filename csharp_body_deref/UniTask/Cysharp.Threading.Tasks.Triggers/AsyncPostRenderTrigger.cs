// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncPostRenderTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001DF")]
[DisallowMultipleComponent]
public sealed class AsyncPostRenderTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B8A")]
	[Address(RVA = "0x62FE740", Offset = "0x62FD740", VA = "0x62FE740")]
	private void OnPostRender()
	{
	}

	[Token(Token = "0x6000B8B")]
	[Address(RVA = "0x62FE7B0", Offset = "0x62FD7B0", VA = "0x62FE7B0")]
	public IAsyncOnPostRenderHandler GetOnPostRenderAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B8C")]
	[Address(RVA = "0x62FE820", Offset = "0x62FD820", VA = "0x62FE820")]
	public IAsyncOnPostRenderHandler GetOnPostRenderAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B8D")]
	[Address(RVA = "0x62FE890", Offset = "0x62FD890", VA = "0x62FE890")]
	public UniTask OnPostRenderAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B8E")]
	[Address(RVA = "0x62FE980", Offset = "0x62FD980", VA = "0x62FE980")]
	public UniTask OnPostRenderAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B8F")]
	[Address(RVA = "0x62FEA70", Offset = "0x62FDA70", VA = "0x62FEA70")]
	public AsyncPostRenderTrigger()
	{
	}
}
