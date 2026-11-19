// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncPreRenderTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001E3")]
[DisallowMultipleComponent]
public sealed class AsyncPreRenderTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B98")]
	[Address(RVA = "0x62FEE20", Offset = "0x62FDE20", VA = "0x62FEE20")]
	private void OnPreRender()
	{
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x62FEE90", Offset = "0x62FDE90", VA = "0x62FEE90")]
	public IAsyncOnPreRenderHandler GetOnPreRenderAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x62FEF00", Offset = "0x62FDF00", VA = "0x62FEF00")]
	public IAsyncOnPreRenderHandler GetOnPreRenderAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x62FEF70", Offset = "0x62FDF70", VA = "0x62FEF70")]
	public UniTask OnPreRenderAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x62FF060", Offset = "0x62FE060", VA = "0x62FF060")]
	public UniTask OnPreRenderAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x62FF150", Offset = "0x62FE150", VA = "0x62FF150")]
	public AsyncPreRenderTrigger()
	{
	}
}
