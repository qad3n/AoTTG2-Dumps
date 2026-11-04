// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncAnimatorIKTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000199")]
[DisallowMultipleComponent]
public sealed class AsyncAnimatorIKTrigger : AsyncTriggerBase<int>
{
	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x2928020", Offset = "0x2926620", VA = "0x182928020")]
	private void OnAnimatorIK(int layerIndex)
	{
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x2927D10", Offset = "0x2926310", VA = "0x182927D10")]
	public IAsyncOnAnimatorIKHandler GetOnAnimatorIKAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A97")]
	[Address(RVA = "0x2927D80", Offset = "0x2926380", VA = "0x182927D80")]
	public IAsyncOnAnimatorIKHandler GetOnAnimatorIKAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A98")]
	[Address(RVA = "0x2927E00", Offset = "0x2926400", VA = "0x182927E00")]
	public UniTask<int> OnAnimatorIKAsync()
	{
		return default(UniTask<int>);
	}

	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x2927F10", Offset = "0x2926510", VA = "0x182927F10")]
	public UniTask<int> OnAnimatorIKAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<int>);
	}

	[Token(Token = "0x6000A9A")]
	[Address(RVA = "0x2928070", Offset = "0x2926670", VA = "0x182928070")]
	public AsyncAnimatorIKTrigger()
	{
	}
}
