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

[Token(Token = "0x2000201")]
[DisallowMultipleComponent]
public sealed class AsyncWillRenderObjectTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x293F830", Offset = "0x293DE30", VA = "0x18293F830")]
	private void OnWillRenderObject()
	{
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x293F520", Offset = "0x293DB20", VA = "0x18293F520")]
	public IAsyncOnWillRenderObjectHandler GetOnWillRenderObjectAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x293F590", Offset = "0x293DB90", VA = "0x18293F590")]
	public IAsyncOnWillRenderObjectHandler GetOnWillRenderObjectAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x293F720", Offset = "0x293DD20", VA = "0x18293F720")]
	public UniTask OnWillRenderObjectAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x293F610", Offset = "0x293DC10", VA = "0x18293F610")]
	public UniTask OnWillRenderObjectAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000C06")]
	[Address(RVA = "0x293F8A0", Offset = "0x293DEA0", VA = "0x18293F8A0")]
	public AsyncWillRenderObjectTrigger()
	{
	}
}
