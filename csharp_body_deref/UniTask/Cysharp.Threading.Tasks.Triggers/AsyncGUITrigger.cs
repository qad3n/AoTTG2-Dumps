using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001C0")]
[DisallowMultipleComponent]
public sealed class AsyncGUITrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000B04")]
	[Address(RVA = "0x46E8C20", Offset = "0x46E8C20", VA = "0x46E8C20")]
	private void OnGUI()
	{
	}

	[Token(Token = "0x6000B05")]
	[Address(RVA = "0x46E8C90", Offset = "0x46E8C90", VA = "0x46E8C90")]
	public IAsyncOnGUIHandler GetOnGUIAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000B06")]
	[Address(RVA = "0x46E8D00", Offset = "0x46E8D00", VA = "0x46E8D00")]
	public IAsyncOnGUIHandler GetOnGUIAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000B07")]
	[Address(RVA = "0x46E8D70", Offset = "0x46E8D70", VA = "0x46E8D70")]
	public UniTask OnGUIAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B08")]
	[Address(RVA = "0x46E8E60", Offset = "0x46E8E60", VA = "0x46E8E60")]
	public UniTask OnGUIAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000B09")]
	[Address(RVA = "0x46E8F50", Offset = "0x46E8F50", VA = "0x46E8F50")]
	public AsyncGUITrigger()
	{
	}
}
