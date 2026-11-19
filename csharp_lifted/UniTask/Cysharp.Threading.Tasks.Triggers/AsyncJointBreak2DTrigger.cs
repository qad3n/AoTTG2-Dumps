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
	[Address(RVA = "0x62FBDB0", Offset = "0x62FADB0", VA = "0x62FBDB0")]
	private void OnJointBreak2D(Joint2D brokenJoint)
	{
	}

	[Token(Token = "0x6000B37")]
	[Address(RVA = "0x62FBE00", Offset = "0x62FAE00", VA = "0x62FBE00")]
	public IAsyncOnJointBreak2DHandler GetOnJointBreak2DAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B38")]
	[Address(RVA = "0x62FBE70", Offset = "0x62FAE70", VA = "0x62FBE70")]
	public IAsyncOnJointBreak2DHandler GetOnJointBreak2DAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B39")]
	[Address(RVA = "0x62FBEE0", Offset = "0x62FAEE0", VA = "0x62FBEE0")]
	public UniTask<Joint2D> OnJointBreak2DAsync()
	{
		return default(UniTask<Joint2D>);
	}

	[Token(Token = "0x6000B3A")]
	[Address(RVA = "0x62FBFE0", Offset = "0x62FAFE0", VA = "0x62FBFE0")]
	public UniTask<Joint2D> OnJointBreak2DAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Joint2D>);
	}

	[Token(Token = "0x6000B3B")]
	[Address(RVA = "0x62FC0F0", Offset = "0x62FB0F0", VA = "0x62FC0F0")]
	public AsyncJointBreak2DTrigger()
	{
	}
}
