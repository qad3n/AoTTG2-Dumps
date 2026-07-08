using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001FC")]
[DisallowMultipleComponent]
public sealed class AsyncValidateTrigger : AsyncTriggerBase<AsyncUnit>
{
	[Token(Token = "0x6000BD6")]
	[Address(RVA = "0x46EF420", Offset = "0x46EF420", VA = "0x46EF420")]
	private void OnValidate()
	{
	}

	[Token(Token = "0x6000BD7")]
	[Address(RVA = "0x46EF490", Offset = "0x46EF490", VA = "0x46EF490")]
	public IAsyncOnValidateHandler GetOnValidateAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000BD8")]
	[Address(RVA = "0x46EF500", Offset = "0x46EF500", VA = "0x46EF500")]
	public IAsyncOnValidateHandler GetOnValidateAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000BD9")]
	[Address(RVA = "0x46EF570", Offset = "0x46EF570", VA = "0x46EF570")]
	public UniTask OnValidateAsync()
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BDA")]
	[Address(RVA = "0x46EF660", Offset = "0x46EF660", VA = "0x46EF660")]
	public UniTask OnValidateAsync(CancellationToken cancellationToken)
	{
		return default(UniTask);
	}

	[Token(Token = "0x6000BDB")]
	[Address(RVA = "0x46EF750", Offset = "0x46EF750", VA = "0x46EF750")]
	public AsyncValidateTrigger()
	{
	}
}
