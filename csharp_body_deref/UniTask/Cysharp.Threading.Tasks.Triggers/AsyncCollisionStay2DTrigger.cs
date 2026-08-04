// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncCollisionStay2DTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001B4")]
[DisallowMultipleComponent]
public sealed class AsyncCollisionStay2DTrigger : AsyncTriggerBase<Collision2D>
{
	[Token(Token = "0x6000ADA")]
	[Address(RVA = "0x4A0C860", Offset = "0x4A0C860", VA = "0x4A0C860")]
	private void OnCollisionStay2D(Collision2D coll)
	{
	}

	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x4A0C8B0", Offset = "0x4A0C8B0", VA = "0x4A0C8B0")]
	public IAsyncOnCollisionStay2DHandler GetOnCollisionStay2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x4A0C920", Offset = "0x4A0C920", VA = "0x4A0C920")]
	public IAsyncOnCollisionStay2DHandler GetOnCollisionStay2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x4A0C990", Offset = "0x4A0C990", VA = "0x4A0C990")]
	public UniTask<Collision2D> OnCollisionStay2DAsync()
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x4A0CA90", Offset = "0x4A0CA90", VA = "0x4A0CA90")]
	public UniTask<Collision2D> OnCollisionStay2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x4A0CBA0", Offset = "0x4A0CBA0", VA = "0x4A0CBA0")]
	public AsyncCollisionStay2DTrigger()
	{
	}
}
