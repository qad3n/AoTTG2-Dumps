// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncTriggerStayTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001FB")]
[DisallowMultipleComponent]
public sealed class AsyncTriggerStayTrigger : AsyncTriggerBase<Collider>
{
	[Token(Token = "0x6000BEC")]
	[Address(RVA = "0x63017F0", Offset = "0x63007F0", VA = "0x63017F0")]
	private void OnTriggerStay(Collider other)
	{
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x6301840", Offset = "0x6300840", VA = "0x6301840")]
	public IAsyncOnTriggerStayHandler GetOnTriggerStayAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x63018B0", Offset = "0x63008B0", VA = "0x63018B0")]
	public IAsyncOnTriggerStayHandler GetOnTriggerStayAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x6301920", Offset = "0x6300920", VA = "0x6301920")]
	public UniTask<Collider> OnTriggerStayAsync()
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x6301A20", Offset = "0x6300A20", VA = "0x6301A20")]
	public UniTask<Collider> OnTriggerStayAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x6301B30", Offset = "0x6300B30", VA = "0x6301B30")]
	public AsyncTriggerStayTrigger()
	{
	}
}
