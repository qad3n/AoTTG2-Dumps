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
	[Address(RVA = "0x293A4A0", Offset = "0x2938AA0", VA = "0x18293A4A0")]
	private void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x6000BDF")]
	[Address(RVA = "0x293A200", Offset = "0x2938800", VA = "0x18293A200")]
	public IAsyncOnTriggerExitHandler GetOnTriggerExitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BE0")]
	[Address(RVA = "0x293A180", Offset = "0x2938780", VA = "0x18293A180")]
	public IAsyncOnTriggerExitHandler GetOnTriggerExitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BE1")]
	[Address(RVA = "0x293A380", Offset = "0x2938980", VA = "0x18293A380")]
	public UniTask<Collider> OnTriggerExitAsync()
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BE2")]
	[Address(RVA = "0x293A270", Offset = "0x2938870", VA = "0x18293A270")]
	public UniTask<Collider> OnTriggerExitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BE3")]
	[Address(RVA = "0x293A4F0", Offset = "0x2938AF0", VA = "0x18293A4F0")]
	public AsyncTriggerExitTrigger()
	{
	}
}
