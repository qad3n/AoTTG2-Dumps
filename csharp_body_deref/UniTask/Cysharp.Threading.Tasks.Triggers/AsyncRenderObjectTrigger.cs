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

[Token(Token = "0x20001EB")]
[DisallowMultipleComponent]
public sealed class AsyncRenderObjectTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x62FFC30", Offset = "0x62FEC30", VA = "0x62FFC30")]
	private void OnRenderObject()
	{
	}

	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x62FFCA0", Offset = "0x62FECA0", VA = "0x62FFCA0")]
	public IAsyncOnRenderObjectHandler GetOnRenderObjectAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BB6")]
	[Address(RVA = "0x62FFD10", Offset = "0x62FED10", VA = "0x62FFD10")]
	public IAsyncOnRenderObjectHandler GetOnRenderObjectAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x62FFD80", Offset = "0x62FED80", VA = "0x62FFD80")]
	public UniTask OnRenderObjectAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x62FFE70", Offset = "0x62FEE70", VA = "0x62FFE70")]
	public UniTask OnRenderObjectAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BB9")]
	[Address(RVA = "0x62FFF60", Offset = "0x62FEF60", VA = "0x62FFF60")]
	public AsyncRenderObjectTrigger()
	{
	}
}
