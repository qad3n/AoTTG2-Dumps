// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncWillRenderObjectTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000201")]
[DisallowMultipleComponent]
public sealed class AsyncWillRenderObjectTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000C01")]
	[Address(RVA = "0x6302260", Offset = "0x6301260", VA = "0x6302260")]
	private void OnWillRenderObject()
	{
	}

	[Token(Token = "0x6000C02")]
	[Address(RVA = "0x63022D0", Offset = "0x63012D0", VA = "0x63022D0")]
	public IAsyncOnWillRenderObjectHandler GetOnWillRenderObjectAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000C03")]
	[Address(RVA = "0x6302340", Offset = "0x6301340", VA = "0x6302340")]
	public IAsyncOnWillRenderObjectHandler GetOnWillRenderObjectAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000C04")]
	[Address(RVA = "0x63023B0", Offset = "0x63013B0", VA = "0x63023B0")]
	public UniTask OnWillRenderObjectAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000C05")]
	[Address(RVA = "0x63024A0", Offset = "0x63014A0", VA = "0x63024A0")]
	public UniTask OnWillRenderObjectAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000C06")]
	[Address(RVA = "0x6302590", Offset = "0x6301590", VA = "0x6302590")]
	public AsyncWillRenderObjectTrigger()
	{
	}
}
