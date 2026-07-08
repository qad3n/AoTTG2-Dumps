using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001E8")]
[DisallowMultipleComponent]
public sealed class AsyncRenderObjectTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B90")]
	[Address(RVA = "0x46ED160", Offset = "0x46ED160", VA = "0x46ED160")]
	private void OnRenderObject()
	{
	}

	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x46ED1D0", Offset = "0x46ED1D0", VA = "0x46ED1D0")]
	public IAsyncOnRenderObjectHandler GetOnRenderObjectAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x46ED240", Offset = "0x46ED240", VA = "0x46ED240")]
	public IAsyncOnRenderObjectHandler GetOnRenderObjectAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B93")]
	[Address(RVA = "0x46ED2B0", Offset = "0x46ED2B0", VA = "0x46ED2B0")]
	public UniTask OnRenderObjectAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x46ED3A0", Offset = "0x46ED3A0", VA = "0x46ED3A0")]
	public UniTask OnRenderObjectAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x46ED490", Offset = "0x46ED490", VA = "0x46ED490")]
	public AsyncRenderObjectTrigger()
	{
	}
}
