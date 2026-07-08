using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001C4")]
[DisallowMultipleComponent]
public sealed class AsyncJointBreak2DTrigger : AsyncTriggerBase<Joint2D>
{
	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x46E92E0", Offset = "0x46E92E0", VA = "0x46E92E0")]
	private void OnJointBreak2D(Joint2D brokenJoint)
	{
	}

	[Token(Token = "0x6000B13")]
	[Address(RVA = "0x46E9330", Offset = "0x46E9330", VA = "0x46E9330")]
	public IAsyncOnJointBreak2DHandler GetOnJointBreak2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x46E93A0", Offset = "0x46E93A0", VA = "0x46E93A0")]
	public IAsyncOnJointBreak2DHandler GetOnJointBreak2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x46E9410", Offset = "0x46E9410", VA = "0x46E9410")]
	public UniTask<Joint2D> OnJointBreak2DAsync()
	{
		return default(UniTask<Joint2D>);
	}

	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x46E9510", Offset = "0x46E9510", VA = "0x46E9510")]
	public UniTask<Joint2D> OnJointBreak2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Joint2D>);
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x46E9620", Offset = "0x46E9620", VA = "0x46E9620")]
	public AsyncJointBreak2DTrigger()
	{
	}
}
