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
	[Address(RVA = "0x2930C30", Offset = "0x292F230", VA = "0x182930C30")]
	private void OnJointBreak(float breakForce)
	{
	}

	[Token(Token = "0x6000B30")]
	[Address(RVA = "0x29309A0", Offset = "0x292EFA0", VA = "0x1829309A0")]
	public IAsyncOnJointBreakHandler GetOnJointBreakAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x2930920", Offset = "0x292EF20", VA = "0x182930920")]
	public IAsyncOnJointBreakHandler GetOnJointBreakAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B32")]
	[Address(RVA = "0x2930A10", Offset = "0x292F010", VA = "0x182930A10")]
	public UniTask<float> OnJointBreakAsync()
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x6000B33")]
	[Address(RVA = "0x2930B20", Offset = "0x292F120", VA = "0x182930B20")]
	public UniTask<float> OnJointBreakAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<float>);
	}

	[Token(Token = "0x6000B34")]
	[Address(RVA = "0x2930C80", Offset = "0x292F280", VA = "0x182930C80")]
	public AsyncJointBreakTrigger()
	{
	}
}
