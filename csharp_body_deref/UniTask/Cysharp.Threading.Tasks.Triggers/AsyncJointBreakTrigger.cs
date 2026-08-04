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

[Token(Token = "0x20001C2")]
[DisallowMultipleComponent]
public sealed class AsyncJointBreakTrigger : AsyncTriggerBase<float>
{
	[Token(Token = "0x6000B0B")]
	[Address(RVA = "0x4A0E090", Offset = "0x4A0E090", VA = "0x4A0E090")]
	private void OnJointBreak(float breakForce)
	{
	}

	[Token(Token = "0x6000B0C")]
	[Address(RVA = "0x4A0E0E0", Offset = "0x4A0E0E0", VA = "0x4A0E0E0")]
	public IAsyncOnJointBreakHandler GetOnJointBreakAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B0D")]
	[Address(RVA = "0x4A0E150", Offset = "0x4A0E150", VA = "0x4A0E150")]
	public IAsyncOnJointBreakHandler GetOnJointBreakAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B0E")]
	[Address(RVA = "0x4A0E1C0", Offset = "0x4A0E1C0", VA = "0x4A0E1C0")]
	public UniTask<float> OnJointBreakAsync()
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x6000B0F")]
	[Address(RVA = "0x4A0E2B0", Offset = "0x4A0E2B0", VA = "0x4A0E2B0")]
	public UniTask<float> OnJointBreakAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x6000B10")]
	[Address(RVA = "0x4A0E3A0", Offset = "0x4A0E3A0", VA = "0x4A0E3A0")]
	public AsyncJointBreakTrigger()
	{
	}
}
