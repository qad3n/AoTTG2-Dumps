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

[Token(Token = "0x20001F7")]
[DisallowMultipleComponent]
public sealed class AsyncTriggerExitTrigger : AsyncTriggerBase<Collider>
{
	[Token(Token = "0x6000BDE")]
	[Address(RVA = "0x63010F0", Offset = "0x63000F0", VA = "0x63010F0")]
	private void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x6301140", Offset = "0x6300140", VA = "0x6301140")]
	public IAsyncOnTriggerExitHandler GetOnTriggerExitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x63011B0", Offset = "0x63001B0", VA = "0x63011B0")]
	public IAsyncOnTriggerExitHandler GetOnTriggerExitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x6301220", Offset = "0x6300220", VA = "0x6301220")]
	public UniTask<Collider> OnTriggerExitAsync()
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x6301320", Offset = "0x6300320", VA = "0x6301320")]
	public UniTask<Collider> OnTriggerExitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x6301430", Offset = "0x6300430", VA = "0x6301430")]
	public AsyncTriggerExitTrigger()
	{
	}
}
