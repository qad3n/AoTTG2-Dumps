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
	[Address(RVA = "0x292AE70", Offset = "0x2929470", VA = "0x18292AE70")]
	private void OnCollisionEnter(Collision coll)
	{
	}

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x292AB50", Offset = "0x2929150", VA = "0x18292AB50")]
	public IAsyncOnCollisionEnterHandler GetOnCollisionEnterAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x292ABC0", Offset = "0x29291C0", VA = "0x18292ABC0")]
	public IAsyncOnCollisionEnterHandler GetOnCollisionEnterAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x292AD50", Offset = "0x2929350", VA = "0x18292AD50")]
	public UniTask<Collision> OnCollisionEnterAsync()
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x292AC40", Offset = "0x2929240", VA = "0x18292AC40")]
	public UniTask<Collision> OnCollisionEnterAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000AE0")]
	[Address(RVA = "0x292AEC0", Offset = "0x29294C0", VA = "0x18292AEC0")]
	public AsyncCollisionEnterTrigger()
	{
	}
}
