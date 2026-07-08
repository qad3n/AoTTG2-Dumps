using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000192")]
[DisallowMultipleComponent]
public sealed class AsyncFixedUpdateTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000A63")]
	[Address(RVA = "0x46E3CE0", Offset = "0x46E3CE0", VA = "0x46E3CE0")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x6000A64")]
	[Address(RVA = "0x46E3D50", Offset = "0x46E3D50", VA = "0x46E3D50")]
	public IAsyncFixedUpdateHandler GetFixedUpdateAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A65")]
	[Address(RVA = "0x46E3DC0", Offset = "0x46E3DC0", VA = "0x46E3DC0")]
	public IAsyncFixedUpdateHandler GetFixedUpdateAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A66")]
	[Address(RVA = "0x46E3E30", Offset = "0x46E3E30", VA = "0x46E3E30")]
	public UniTask FixedUpdateAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A67")]
	[Address(RVA = "0x46E3F20", Offset = "0x46E3F20", VA = "0x46E3F20")]
	public UniTask FixedUpdateAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000A68")]
	[Address(RVA = "0x46E4010", Offset = "0x46E4010", VA = "0x46E4010")]
	public AsyncFixedUpdateTrigger()
	{
	}
}
