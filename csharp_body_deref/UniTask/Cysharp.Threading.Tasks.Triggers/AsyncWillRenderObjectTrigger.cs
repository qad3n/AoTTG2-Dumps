// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncWillRenderObjectTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001FE")]
[DisallowMultipleComponent]
public sealed class AsyncWillRenderObjectTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000BDD")]
	[Address(RVA = "0x4A14890", Offset = "0x4A14890", VA = "0x4A14890")]
	private void OnWillRenderObject()
	{
	}

	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x4A14900", Offset = "0x4A14900", VA = "0x4A14900")]
	public IAsyncOnWillRenderObjectHandler GetOnWillRenderObjectAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x4A14970", Offset = "0x4A14970", VA = "0x4A14970")]
	public IAsyncOnWillRenderObjectHandler GetOnWillRenderObjectAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x4A149E0", Offset = "0x4A149E0", VA = "0x4A149E0")]
	public UniTask OnWillRenderObjectAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x4A14AD0", Offset = "0x4A14AD0", VA = "0x4A14AD0")]
	public UniTask OnWillRenderObjectAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x4A14BC0", Offset = "0x4A14BC0", VA = "0x4A14BC0")]
	public AsyncWillRenderObjectTrigger()
	{
	}
}
