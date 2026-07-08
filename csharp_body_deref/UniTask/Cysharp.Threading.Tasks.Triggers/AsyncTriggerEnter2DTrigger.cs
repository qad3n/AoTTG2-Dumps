using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001F2")]
[DisallowMultipleComponent]
public sealed class AsyncTriggerEnter2DTrigger : AsyncTriggerBase<Collider2D>
{
	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x46EE2A0", Offset = "0x46EE2A0", VA = "0x46EE2A0")]
	private void OnTriggerEnter2D(Collider2D other)
	{
	}

	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x46EE2F0", Offset = "0x46EE2F0", VA = "0x46EE2F0")]
	public IAsyncOnTriggerEnter2DHandler GetOnTriggerEnter2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x46EE360", Offset = "0x46EE360", VA = "0x46EE360")]
	public IAsyncOnTriggerEnter2DHandler GetOnTriggerEnter2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BB6")]
	[Address(RVA = "0x46EE3D0", Offset = "0x46EE3D0", VA = "0x46EE3D0")]
	public UniTask<Collider2D> OnTriggerEnter2DAsync()
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BB7")]
	[Address(RVA = "0x46EE4D0", Offset = "0x46EE4D0", VA = "0x46EE4D0")]
	public UniTask<Collider2D> OnTriggerEnter2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider2D>);
	}

	[Token(Token = "0x6000BB8")]
	[Address(RVA = "0x46EE5E0", Offset = "0x46EE5E0", VA = "0x46EE5E0")]
	public AsyncTriggerEnter2DTrigger()
	{
	}
}
