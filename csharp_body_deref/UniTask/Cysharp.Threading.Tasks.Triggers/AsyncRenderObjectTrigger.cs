// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncRenderObjectTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001E8")]
[DisallowMultipleComponent]
public sealed class AsyncRenderObjectTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x4A12260", Offset = "0x4A12260", VA = "0x4A12260")]
	private void OnRenderObject()
	{
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x4A122D0", Offset = "0x4A122D0", VA = "0x4A122D0")]
	public IAsyncOnRenderObjectHandler GetOnRenderObjectAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x4A12340", Offset = "0x4A12340", VA = "0x4A12340")]
	public IAsyncOnRenderObjectHandler GetOnRenderObjectAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B93")]
	[Address(RVA = "0x4A123B0", Offset = "0x4A123B0", VA = "0x4A123B0")]
	public UniTask OnRenderObjectAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x4A124A0", Offset = "0x4A124A0", VA = "0x4A124A0")]
	public UniTask OnRenderObjectAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x4A12590", Offset = "0x4A12590", VA = "0x4A12590")]
	public AsyncRenderObjectTrigger()
	{
	}
}
