using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200019E")]
[DisallowMultipleComponent]
public sealed class AsyncApplicationQuitTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000A8D")]
	[Address(RVA = "0x46E50F0", Offset = "0x46E50F0", VA = "0x46E50F0")]
	private void OnApplicationQuit()
	{
	}

	[Token(Token = "0x6000A8E")]
	[Address(RVA = "0x46E5160", Offset = "0x46E5160", VA = "0x46E5160")]
	public IAsyncOnApplicationQuitHandler GetOnApplicationQuitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A8F")]
	[Address(RVA = "0x46E51D0", Offset = "0x46E51D0", VA = "0x46E51D0")]
	public IAsyncOnApplicationQuitHandler GetOnApplicationQuitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x46E5240", Offset = "0x46E5240", VA = "0x46E5240")]
	public UniTask OnApplicationQuitAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x46E5330", Offset = "0x46E5330", VA = "0x46E5330")]
	public UniTask OnApplicationQuitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x46E5420", Offset = "0x46E5420", VA = "0x46E5420")]
	public AsyncApplicationQuitTrigger()
	{
	}
}
