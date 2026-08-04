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

[Token(Token = "0x20001F8")]
[DisallowMultipleComponent]
public sealed class AsyncTriggerStayTrigger : AsyncTriggerBase<Collider>
{
	[Token(Token = "0x6000BC8")]
	[Address(RVA = "0x4A13E20", Offset = "0x4A13E20", VA = "0x4A13E20")]
	private void OnTriggerStay(Collider other)
	{
	}

	[Token(Token = "0x6000BC9")]
	[Address(RVA = "0x4A13E70", Offset = "0x4A13E70", VA = "0x4A13E70")]
	public IAsyncOnTriggerStayHandler GetOnTriggerStayAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BCA")]
	[Address(RVA = "0x4A13EE0", Offset = "0x4A13EE0", VA = "0x4A13EE0")]
	public IAsyncOnTriggerStayHandler GetOnTriggerStayAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x4A13F50", Offset = "0x4A13F50", VA = "0x4A13F50")]
	public UniTask<Collider> OnTriggerStayAsync()
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x4A14050", Offset = "0x4A14050", VA = "0x4A14050")]
	public UniTask<Collider> OnTriggerStayAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<Collider>);
	}

	[Token(Token = "0x6000BCD")]
	[Address(RVA = "0x4A14160", Offset = "0x4A14160", VA = "0x4A14160")]
	public AsyncTriggerStayTrigger()
	{
	}
}
