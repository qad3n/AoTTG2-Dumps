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
	[Address(RVA = "0x2937990", Offset = "0x2935F90", VA = "0x182937990")]
	private void OnRenderObject()
	{
	}

	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x2937700", Offset = "0x2935D00", VA = "0x182937700")]
	public IAsyncOnRenderObjectHandler GetOnRenderObjectAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BB6")]
	[Address(RVA = "0x2937680", Offset = "0x2935C80", VA = "0x182937680")]
	public IAsyncOnRenderObjectHandler GetOnRenderObjectAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x2937770", Offset = "0x2935D70", VA = "0x182937770")]
	public UniTask OnRenderObjectAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x2937880", Offset = "0x2935E80", VA = "0x182937880")]
	public UniTask OnRenderObjectAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BB9")]
	[Address(RVA = "0x2937A00", Offset = "0x2936000", VA = "0x182937A00")]
	public AsyncRenderObjectTrigger()
	{
	}
}
