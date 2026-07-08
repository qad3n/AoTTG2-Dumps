using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x2000200")]
[DisallowMultipleComponent]
public sealed class AsyncResetTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000BE4")]
	[Address(RVA = "0x46EFB00", Offset = "0x46EFB00", VA = "0x46EFB00")]
	private void Reset()
	{
	}

	[Token(Token = "0x6000BE5")]
	[Address(RVA = "0x46EFB70", Offset = "0x46EFB70", VA = "0x46EFB70")]
	public IAsyncResetHandler GetResetAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BE6")]
	[Address(RVA = "0x46EFBE0", Offset = "0x46EFBE0", VA = "0x46EFBE0")]
	public IAsyncResetHandler GetResetAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BE7")]
	[Address(RVA = "0x46EFC50", Offset = "0x46EFC50", VA = "0x46EFC50")]
	public UniTask ResetAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BE8")]
	[Address(RVA = "0x46EFD40", Offset = "0x46EFD40", VA = "0x46EFD40")]
	public UniTask ResetAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BE9")]
	[Address(RVA = "0x46EFE30", Offset = "0x46EFE30", VA = "0x46EFE30")]
	public AsyncResetTrigger()
	{
	}
}
