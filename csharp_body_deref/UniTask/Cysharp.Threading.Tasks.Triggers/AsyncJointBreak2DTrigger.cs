// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncJointBreak2DTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001C4")]
[DisallowMultipleComponent]
public sealed class AsyncJointBreak2DTrigger : AsyncTriggerBase<Joint2D>
{
	[Token(Token = "0x6000B12")]
	[Address(RVA = "0x4A0E3E0", Offset = "0x4A0E3E0", VA = "0x4A0E3E0")]
	private void OnJointBreak2D(Joint2D brokenJoint)
	{
	}

	[Token(Token = "0x6000B13")]
	[Address(RVA = "0x4A0E430", Offset = "0x4A0E430", VA = "0x4A0E430")]
	public IAsyncOnJointBreak2DHandler GetOnJointBreak2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B14")]
	[Address(RVA = "0x4A0E4A0", Offset = "0x4A0E4A0", VA = "0x4A0E4A0")]
	public IAsyncOnJointBreak2DHandler GetOnJointBreak2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B15")]
	[Address(RVA = "0x4A0E510", Offset = "0x4A0E510", VA = "0x4A0E510")]
	public UniTask<Joint2D> OnJointBreak2DAsync()
	{
		return default(UniTask<Joint2D>);
	}

	[Token(Token = "0x6000B16")]
	[Address(RVA = "0x4A0E610", Offset = "0x4A0E610", VA = "0x4A0E610")]
	public UniTask<Joint2D> OnJointBreak2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Joint2D>);
	}

	[Token(Token = "0x6000B17")]
	[Address(RVA = "0x4A0E720", Offset = "0x4A0E720", VA = "0x4A0E720")]
	public AsyncJointBreak2DTrigger()
	{
	}
}
