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
	[Address(RVA = "0x62F6E90", Offset = "0x62F5E90", VA = "0x62F6E90")]
	private void OnAnimatorIK(int layerIndex)
	{
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x62F6ED0", Offset = "0x62F5ED0", VA = "0x62F6ED0")]
	public IAsyncOnAnimatorIKHandler GetOnAnimatorIKAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A97")]
	[Address(RVA = "0x62F6F40", Offset = "0x62F5F40", VA = "0x62F6F40")]
	public IAsyncOnAnimatorIKHandler GetOnAnimatorIKAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A98")]
	[Address(RVA = "0x62F6FB0", Offset = "0x62F5FB0", VA = "0x62F6FB0")]
	public UniTask<int> OnAnimatorIKAsync()
	{
		return default(UniTask<int>);
	}

	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x62F70A0", Offset = "0x62F60A0", VA = "0x62F70A0")]
	public UniTask<int> OnAnimatorIKAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<int>);
	}

	[Token(Token = "0x6000A9A")]
	[Address(RVA = "0x62F7190", Offset = "0x62F6190", VA = "0x62F7190")]
	public AsyncAnimatorIKTrigger()
	{
	}
}
