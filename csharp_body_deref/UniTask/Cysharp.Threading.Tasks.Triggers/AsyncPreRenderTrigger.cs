using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001E0")]
[DisallowMultipleComponent]
public sealed class AsyncPreRenderTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B74")]
	[Address(RVA = "0x46EC350", Offset = "0x46EC350", VA = "0x46EC350")]
	private void OnPreRender()
	{
	}

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x46EC3C0", Offset = "0x46EC3C0", VA = "0x46EC3C0")]
	public IAsyncOnPreRenderHandler GetOnPreRenderAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B76")]
	[Address(RVA = "0x46EC430", Offset = "0x46EC430", VA = "0x46EC430")]
	public IAsyncOnPreRenderHandler GetOnPreRenderAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B77")]
	[Address(RVA = "0x46EC4A0", Offset = "0x46EC4A0", VA = "0x46EC4A0")]
	public UniTask OnPreRenderAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B78")]
	[Address(RVA = "0x46EC590", Offset = "0x46EC590", VA = "0x46EC590")]
	public UniTask OnPreRenderAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B79")]
	[Address(RVA = "0x46EC680", Offset = "0x46EC680", VA = "0x46EC680")]
	public AsyncPreRenderTrigger()
	{
	}
}
