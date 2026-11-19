// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncMouseExitTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001CF")]
[DisallowMultipleComponent]
public sealed class AsyncMouseExitTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B52")]
	[Address(RVA = "0x62FCB80", Offset = "0x62FBB80", VA = "0x62FCB80")]
	private void OnMouseExit()
	{
	}

	[Token(Token = "0x6000B53")]
	[Address(RVA = "0x62FCBF0", Offset = "0x62FBBF0", VA = "0x62FCBF0")]
	public IAsyncOnMouseExitHandler GetOnMouseExitAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B54")]
	[Address(RVA = "0x62FCC60", Offset = "0x62FBC60", VA = "0x62FCC60")]
	public IAsyncOnMouseExitHandler GetOnMouseExitAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B55")]
	[Address(RVA = "0x62FCCD0", Offset = "0x62FBCD0", VA = "0x62FCCD0")]
	public UniTask OnMouseExitAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B56")]
	[Address(RVA = "0x62FCDC0", Offset = "0x62FBDC0", VA = "0x62FCDC0")]
	public UniTask OnMouseExitAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B57")]
	[Address(RVA = "0x62FCEB0", Offset = "0x62FBEB0", VA = "0x62FCEB0")]
	public AsyncMouseExitTrigger()
	{
	}
}
