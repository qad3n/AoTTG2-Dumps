// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncCollisionEnterTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001AD")]
[DisallowMultipleComponent]
public sealed class AsyncCollisionEnterTrigger : AsyncTriggerBase<Collision>
{
	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x62F90B0", Offset = "0x62F80B0", VA = "0x62F90B0")]
	private void OnCollisionEnter(Collision coll)
	{
	}

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x62F9100", Offset = "0x62F8100", VA = "0x62F9100")]
	public IAsyncOnCollisionEnterHandler GetOnCollisionEnterAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x62F9170", Offset = "0x62F8170", VA = "0x62F9170")]
	public IAsyncOnCollisionEnterHandler GetOnCollisionEnterAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x62F91E0", Offset = "0x62F81E0", VA = "0x62F91E0")]
	public UniTask<Collision> OnCollisionEnterAsync()
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x62F92E0", Offset = "0x62F82E0", VA = "0x62F92E0")]
	public UniTask<Collision> OnCollisionEnterAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x62F93F0", Offset = "0x62F83F0", VA = "0x62F93F0")]
	public AsyncCollisionEnterTrigger()
	{
	}
}
