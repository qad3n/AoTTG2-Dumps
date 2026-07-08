using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001AE")]
[DisallowMultipleComponent]
public sealed class AsyncCollisionExitTrigger : AsyncTriggerBase<Collision>
{
	[Token(Token = "0x6000AC5")]
	[Address(RVA = "0x46E6CE0", Offset = "0x46E6CE0", VA = "0x46E6CE0")]
	private void OnCollisionExit(Collision coll)
	{
	}

	[Token(Token = "0x6000AC6")]
	[Address(RVA = "0x46E6D30", Offset = "0x46E6D30", VA = "0x46E6D30")]
	public IAsyncOnCollisionExitHandler GetOnCollisionExitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000AC7")]
	[Address(RVA = "0x46E6DA0", Offset = "0x46E6DA0", VA = "0x46E6DA0")]
	public IAsyncOnCollisionExitHandler GetOnCollisionExitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000AC8")]
	[Address(RVA = "0x46E6E10", Offset = "0x46E6E10", VA = "0x46E6E10")]
	public UniTask<Collision> OnCollisionExitAsync()
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000AC9")]
	[Address(RVA = "0x46E6F10", Offset = "0x46E6F10", VA = "0x46E6F10")]
	public UniTask<Collision> OnCollisionExitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collision>);
	}

	[Token(Token = "0x6000ACA")]
	[Address(RVA = "0x46E7020", Offset = "0x46E7020", VA = "0x46E7020")]
	public AsyncCollisionExitTrigger()
	{
	}
}
