// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncTriggerExitTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001F4")]
[DisallowMultipleComponent]
public sealed class AsyncTriggerExitTrigger : AsyncTriggerBase<Collider>
{
	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x4A13720", Offset = "0x4A13720", VA = "0x4A13720")]
	private void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x4A13770", Offset = "0x4A13770", VA = "0x4A13770")]
	public IAsyncOnTriggerExitHandler GetOnTriggerExitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x4A137E0", Offset = "0x4A137E0", VA = "0x4A137E0")]
	public IAsyncOnTriggerExitHandler GetOnTriggerExitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x4A13850", Offset = "0x4A13850", VA = "0x4A13850")]
	public UniTask<Collider> OnTriggerExitAsync()
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x4A13950", Offset = "0x4A13950", VA = "0x4A13950")]
	public UniTask<Collider> OnTriggerExitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x4A13A60", Offset = "0x4A13A60", VA = "0x4A13A60")]
	public AsyncTriggerExitTrigger()
	{
	}
}
