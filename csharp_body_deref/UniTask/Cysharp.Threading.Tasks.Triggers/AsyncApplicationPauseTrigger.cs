using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200019C")]
[DisallowMultipleComponent]
public sealed class AsyncApplicationPauseTrigger : AsyncTriggerBase<bool>
{
	[Token(Token = "0x6000A86")]
	[Address(RVA = "0x46E4DB0", Offset = "0x46E4DB0", VA = "0x46E4DB0")]
	private void OnApplicationPause(bool pauseStatus)
	{
	}

	[Token(Token = "0x6000A87")]
	[Address(RVA = "0x46E4DF0", Offset = "0x46E4DF0", VA = "0x46E4DF0")]
	public IAsyncOnApplicationPauseHandler GetOnApplicationPauseAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A88")]
	[Address(RVA = "0x46E4E60", Offset = "0x46E4E60", VA = "0x46E4E60")]
	public IAsyncOnApplicationPauseHandler GetOnApplicationPauseAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A89")]
	[Address(RVA = "0x46E4ED0", Offset = "0x46E4ED0", VA = "0x46E4ED0")]
	public UniTask<bool> OnApplicationPauseAsync()
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x6000A8A")]
	[Address(RVA = "0x46E4FC0", Offset = "0x46E4FC0", VA = "0x46E4FC0")]
	public UniTask<bool> OnApplicationPauseAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x46E50B0", Offset = "0x46E50B0", VA = "0x46E50B0")]
	public AsyncApplicationPauseTrigger()
	{
	}
}
