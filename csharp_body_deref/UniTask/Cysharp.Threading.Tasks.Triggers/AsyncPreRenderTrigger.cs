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
	[Address(RVA = "0x2936A60", Offset = "0x2935060", VA = "0x182936A60")]
	private void OnPreRender()
	{
	}

	[Token(Token = "0x6000B99")]
	[Address(RVA = "0x2936750", Offset = "0x2934D50", VA = "0x182936750")]
	public IAsyncOnPreRenderHandler GetOnPreRenderAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B9A")]
	[Address(RVA = "0x29367C0", Offset = "0x2934DC0", VA = "0x1829367C0")]
	public IAsyncOnPreRenderHandler GetOnPreRenderAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B9B")]
	[Address(RVA = "0x2936840", Offset = "0x2934E40", VA = "0x182936840")]
	public UniTask OnPreRenderAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B9C")]
	[Address(RVA = "0x2936950", Offset = "0x2934F50", VA = "0x182936950")]
	public UniTask OnPreRenderAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B9D")]
	[Address(RVA = "0x2936AD0", Offset = "0x29350D0", VA = "0x182936AD0")]
	public AsyncPreRenderTrigger()
	{
	}
}
