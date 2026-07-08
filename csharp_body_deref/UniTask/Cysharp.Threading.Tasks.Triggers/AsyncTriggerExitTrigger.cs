using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001F4")]
[DisallowMultipleComponent]
public sealed class AsyncTriggerExitTrigger : AsyncTriggerBase<Collider>
{
	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x46EE620", Offset = "0x46EE620", VA = "0x46EE620")]
	private void OnTriggerExit(Collider other)
	{
	}

	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x46EE670", Offset = "0x46EE670", VA = "0x46EE670")]
	public IAsyncOnTriggerExitHandler GetOnTriggerExitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x46EE6E0", Offset = "0x46EE6E0", VA = "0x46EE6E0")]
	public IAsyncOnTriggerExitHandler GetOnTriggerExitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x46EE750", Offset = "0x46EE750", VA = "0x46EE750")]
	public UniTask<Collider> OnTriggerExitAsync()
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x46EE850", Offset = "0x46EE850", VA = "0x46EE850")]
	public UniTask<Collider> OnTriggerExitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BBF")]
	[Address(RVA = "0x46EE960", Offset = "0x46EE960", VA = "0x46EE960")]
	public AsyncTriggerExitTrigger()
	{
	}
}
