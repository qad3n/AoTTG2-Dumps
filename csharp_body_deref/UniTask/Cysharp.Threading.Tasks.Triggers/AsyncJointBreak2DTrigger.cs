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

[Token(Token = "0x20001C7")]
[DisallowMultipleComponent]
public sealed class AsyncJointBreak2DTrigger : AsyncTriggerBase<Joint2D>
{
	[Token(Token = "0x6000B36")]
	[Address(RVA = "0x2930890", Offset = "0x292EE90", VA = "0x182930890")]
	private void OnJointBreak2D(Joint2D brokenJoint)
	{
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x29305F0", Offset = "0x292EBF0", VA = "0x1829305F0")]
	public IAsyncOnJointBreak2DHandler GetOnJointBreak2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x2930570", Offset = "0x292EB70", VA = "0x182930570")]
	public IAsyncOnJointBreak2DHandler GetOnJointBreak2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x2930770", Offset = "0x292ED70", VA = "0x182930770")]
	public UniTask<Joint2D> OnJointBreak2DAsync()
	{
		return default(UniTask<Joint2D>);
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x2930660", Offset = "0x292EC60", VA = "0x182930660")]
	public UniTask<Joint2D> OnJointBreak2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Joint2D>);
	}

	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x29308E0", Offset = "0x292EEE0", VA = "0x1829308E0")]
	public AsyncJointBreak2DTrigger()
	{
	}
}
