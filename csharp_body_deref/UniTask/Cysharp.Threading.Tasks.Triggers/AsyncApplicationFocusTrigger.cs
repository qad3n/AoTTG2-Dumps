using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x200019A")]
[DisallowMultipleComponent]
public sealed class AsyncApplicationFocusTrigger : AsyncTriggerBase<bool>
{
	[Token(Token = "0x6000A7F")]
	[Address(RVA = "0x46E4A70", Offset = "0x46E4A70", VA = "0x46E4A70")]
	private void OnApplicationFocus(bool hasFocus)
	{
	}

	[Token(Token = "0x6000A80")]
	[Address(RVA = "0x46E4AB0", Offset = "0x46E4AB0", VA = "0x46E4AB0")]
	public IAsyncOnApplicationFocusHandler GetOnApplicationFocusAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A81")]
	[Address(RVA = "0x46E4B20", Offset = "0x46E4B20", VA = "0x46E4B20")]
	public IAsyncOnApplicationFocusHandler GetOnApplicationFocusAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A82")]
	[Address(RVA = "0x46E4B90", Offset = "0x46E4B90", VA = "0x46E4B90")]
	public UniTask<bool> OnApplicationFocusAsync()
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x6000A83")]
	[Address(RVA = "0x46E4C80", Offset = "0x46E4C80", VA = "0x46E4C80")]
	public UniTask<bool> OnApplicationFocusAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<bool>);
	}

	[Token(Token = "0x6000A84")]
	[Address(RVA = "0x46E4D70", Offset = "0x46E4D70", VA = "0x46E4D70")]
	public AsyncApplicationFocusTrigger()
	{
	}
}
