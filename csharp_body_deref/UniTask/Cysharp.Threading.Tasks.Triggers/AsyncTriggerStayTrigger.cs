using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001F8")]
[DisallowMultipleComponent]
public sealed class AsyncTriggerStayTrigger : AsyncTriggerBase<Collider>
{
	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x46EED20", Offset = "0x46EED20", VA = "0x46EED20")]
	private void OnTriggerStay(Collider other)
	{
	}

	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x46EED70", Offset = "0x46EED70", VA = "0x46EED70")]
	public IAsyncOnTriggerStayHandler GetOnTriggerStayAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x46EEDE0", Offset = "0x46EEDE0", VA = "0x46EEDE0")]
	public IAsyncOnTriggerStayHandler GetOnTriggerStayAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x46EEE50", Offset = "0x46EEE50", VA = "0x46EEE50")]
	public UniTask<Collider> OnTriggerStayAsync()
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x46EEF50", Offset = "0x46EEF50", VA = "0x46EEF50")]
	public UniTask<Collider> OnTriggerStayAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x46EF060", Offset = "0x46EF060", VA = "0x46EF060")]
	public AsyncTriggerStayTrigger()
	{
	}
}
