using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001C2")]
[DisallowMultipleComponent]
public sealed class AsyncJointBreakTrigger : AsyncTriggerBase<float>
{
	[Token(Token = "0x6000B0B")]
	[Address(RVA = "0x46E8F90", Offset = "0x46E8F90", VA = "0x46E8F90")]
	private void OnJointBreak(float breakForce)
	{
	}

	[Token(Token = "0x6000B0C")]
	[Address(RVA = "0x46E8FE0", Offset = "0x46E8FE0", VA = "0x46E8FE0")]
	public IAsyncOnJointBreakHandler GetOnJointBreakAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x46E9050", Offset = "0x46E9050", VA = "0x46E9050")]
	public IAsyncOnJointBreakHandler GetOnJointBreakAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x46E90C0", Offset = "0x46E90C0", VA = "0x46E90C0")]
	public UniTask<float> OnJointBreakAsync()
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x46E91B0", Offset = "0x46E91B0", VA = "0x46E91B0")]
	public UniTask<float> OnJointBreakAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x46E92A0", Offset = "0x46E92A0", VA = "0x46E92A0")]
	public AsyncJointBreakTrigger()
	{
	}
}
