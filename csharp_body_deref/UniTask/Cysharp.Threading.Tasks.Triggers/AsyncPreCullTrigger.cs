// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncPreCullTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001E1")]
[DisallowMultipleComponent]
public sealed class AsyncPreCullTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B91")]
	[Address(RVA = "0x29366A0", Offset = "0x2934CA0", VA = "0x1829366A0")]
	private void OnPreCull()
	{
	}

	[Token(Token = "0x6000B92")]
	[Address(RVA = "0x2936390", Offset = "0x2934990", VA = "0x182936390")]
	public IAsyncOnPreCullHandler GetOnPreCullAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B93")]
	[Address(RVA = "0x2936400", Offset = "0x2934A00", VA = "0x182936400")]
	public IAsyncOnPreCullHandler GetOnPreCullAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B94")]
	[Address(RVA = "0x2936590", Offset = "0x2934B90", VA = "0x182936590")]
	public UniTask OnPreCullAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B95")]
	[Address(RVA = "0x2936480", Offset = "0x2934A80", VA = "0x182936480")]
	public UniTask OnPreCullAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B96")]
	[Address(RVA = "0x2936710", Offset = "0x2934D10", VA = "0x182936710")]
	public AsyncPreCullTrigger()
	{
	}
}
