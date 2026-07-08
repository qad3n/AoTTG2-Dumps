using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001F6")]
[DisallowMultipleComponent]
public sealed class AsyncTriggerExit2DTrigger : AsyncTriggerBase<Collider2D>
{
	[Token(Token = "0x6000BC1")]
	[Address(RVA = "0x46EE9A0", Offset = "0x46EE9A0", VA = "0x46EE9A0")]
	private void OnTriggerExit2D(Collider2D other)
	{
	}

	[Token(Token = "0x6000BC2")]
	[Address(RVA = "0x46EE9F0", Offset = "0x46EE9F0", VA = "0x46EE9F0")]
	public IAsyncOnTriggerExit2DHandler GetOnTriggerExit2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BC3")]
	[Address(RVA = "0x46EEA60", Offset = "0x46EEA60", VA = "0x46EEA60")]
	public IAsyncOnTriggerExit2DHandler GetOnTriggerExit2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BC4")]
	[Address(RVA = "0x46EEAD0", Offset = "0x46EEAD0", VA = "0x46EEAD0")]
	public UniTask<Collider2D> OnTriggerExit2DAsync()
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BC5")]
	[Address(RVA = "0x46EEBD0", Offset = "0x46EEBD0", VA = "0x46EEBD0")]
	public UniTask<Collider2D> OnTriggerExit2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BC6")]
	[Address(RVA = "0x46EECE0", Offset = "0x46EECE0", VA = "0x46EECE0")]
	public AsyncTriggerExit2DTrigger()
	{
	}
}
