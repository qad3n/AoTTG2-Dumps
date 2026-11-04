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
	[Address(RVA = "0x293DEF0", Offset = "0x293C4F0", VA = "0x18293DEF0")]
	private void OnTriggerStay(Collider other)
	{
	}

	[Token(Token = "0x6000BED")]
	[Address(RVA = "0x293DC50", Offset = "0x293C250", VA = "0x18293DC50")]
	public IAsyncOnTriggerStayHandler GetOnTriggerStayAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BEE")]
	[Address(RVA = "0x293DBD0", Offset = "0x293C1D0", VA = "0x18293DBD0")]
	public IAsyncOnTriggerStayHandler GetOnTriggerStayAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BEF")]
	[Address(RVA = "0x293DCC0", Offset = "0x293C2C0", VA = "0x18293DCC0")]
	public UniTask<Collider> OnTriggerStayAsync()
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BF0")]
	[Address(RVA = "0x293DDE0", Offset = "0x293C3E0", VA = "0x18293DDE0")]
	public UniTask<Collider> OnTriggerStayAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BF1")]
	[Address(RVA = "0x293DF40", Offset = "0x293C540", VA = "0x18293DF40")]
	public AsyncTriggerStayTrigger()
	{
	}
}
