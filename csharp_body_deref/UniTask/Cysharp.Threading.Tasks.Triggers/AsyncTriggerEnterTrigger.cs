using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001F0")]
[DisallowMultipleComponent]
public sealed class AsyncTriggerEnterTrigger : AsyncTriggerBase<Collider>
{
	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x46EDF20", Offset = "0x46EDF20", VA = "0x46EDF20")]
	private void OnTriggerEnter(Collider other)
	{
	}

	[Token(Token = "0x6000BAD")]
	[Address(RVA = "0x46EDF70", Offset = "0x46EDF70", VA = "0x46EDF70")]
	public IAsyncOnTriggerEnterHandler GetOnTriggerEnterAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BAE")]
	[Address(RVA = "0x46EDFE0", Offset = "0x46EDFE0", VA = "0x46EDFE0")]
	public IAsyncOnTriggerEnterHandler GetOnTriggerEnterAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BAF")]
	[Address(RVA = "0x46EE050", Offset = "0x46EE050", VA = "0x46EE050")]
	public UniTask<Collider> OnTriggerEnterAsync()
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x46EE150", Offset = "0x46EE150", VA = "0x46EE150")]
	public UniTask<Collider> OnTriggerEnterAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x46EE260", Offset = "0x46EE260", VA = "0x46EE260")]
	public AsyncTriggerEnterTrigger()
	{
	}
}
