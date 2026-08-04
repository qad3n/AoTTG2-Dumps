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

[Token(Token = "0x20001DC")]
[DisallowMultipleComponent]
public sealed class AsyncPostRenderTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B66")]
	[Address(RVA = "0x4A10D70", Offset = "0x4A10D70", VA = "0x4A10D70")]
	private void OnPostRender()
	{
	}

	[Token(Token = "0x6000B67")]
	[Address(RVA = "0x4A10DE0", Offset = "0x4A10DE0", VA = "0x4A10DE0")]
	public IAsyncOnPostRenderHandler GetOnPostRenderAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B68")]
	[Address(RVA = "0x4A10E50", Offset = "0x4A10E50", VA = "0x4A10E50")]
	public IAsyncOnPostRenderHandler GetOnPostRenderAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B69")]
	[Address(RVA = "0x4A10EC0", Offset = "0x4A10EC0", VA = "0x4A10EC0")]
	public UniTask OnPostRenderAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B6A")]
	[Address(RVA = "0x4A10FB0", Offset = "0x4A10FB0", VA = "0x4A10FB0")]
	public UniTask OnPostRenderAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B6B")]
	[Address(RVA = "0x4A110A0", Offset = "0x4A110A0", VA = "0x4A110A0")]
	public AsyncPostRenderTrigger()
	{
	}
}
