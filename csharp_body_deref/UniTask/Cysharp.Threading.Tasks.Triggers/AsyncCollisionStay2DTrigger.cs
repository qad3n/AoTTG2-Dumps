using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001B4")]
[DisallowMultipleComponent]
public sealed class AsyncCollisionStay2DTrigger : AsyncTriggerBase<Collision2D>
{
	[Token(Token = "0x6000ADA")]
	[Address(RVA = "0x46E7760", Offset = "0x46E7760", VA = "0x46E7760")]
	private void OnCollisionStay2D(Collision2D coll)
	{
	}

	[Token(Token = "0x6000ADB")]
	[Address(RVA = "0x46E77B0", Offset = "0x46E77B0", VA = "0x46E77B0")]
	public IAsyncOnCollisionStay2DHandler GetOnCollisionStay2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000ADC")]
	[Address(RVA = "0x46E7820", Offset = "0x46E7820", VA = "0x46E7820")]
	public IAsyncOnCollisionStay2DHandler GetOnCollisionStay2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000ADD")]
	[Address(RVA = "0x46E7890", Offset = "0x46E7890", VA = "0x46E7890")]
	public UniTask<Collision2D> OnCollisionStay2DAsync()
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000ADE")]
	[Address(RVA = "0x46E7990", Offset = "0x46E7990", VA = "0x46E7990")]
	public UniTask<Collision2D> OnCollisionStay2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collision2D>);
	}

	[Token(Token = "0x6000ADF")]
	[Address(RVA = "0x46E7AA0", Offset = "0x46E7AA0", VA = "0x46E7AA0")]
	public AsyncCollisionStay2DTrigger()
	{
	}
}
