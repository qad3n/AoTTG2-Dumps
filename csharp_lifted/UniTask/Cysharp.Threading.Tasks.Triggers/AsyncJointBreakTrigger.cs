// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncJointBreakTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001C5")]
[DisallowMultipleComponent]
public sealed class AsyncJointBreakTrigger : AsyncTriggerBase<float>
{
	[Token(Token = "0x6000B2F")]
	[Address(RVA = "0x62FBA60", Offset = "0x62FAA60", VA = "0x62FBA60")]
	private void OnJointBreak(float breakForce)
	{
	}

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x62FBAB0", Offset = "0x62FAAB0", VA = "0x62FBAB0")]
	public IAsyncOnJointBreakHandler GetOnJointBreakAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x62FBB20", Offset = "0x62FAB20", VA = "0x62FBB20")]
	public IAsyncOnJointBreakHandler GetOnJointBreakAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x62FBB90", Offset = "0x62FAB90", VA = "0x62FBB90")]
	public UniTask<float> OnJointBreakAsync()
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x62FBC80", Offset = "0x62FAC80", VA = "0x62FBC80")]
	public UniTask<float> OnJointBreakAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x62FBD70", Offset = "0x62FAD70", VA = "0x62FBD70")]
	public AsyncJointBreakTrigger()
	{
	}
}
