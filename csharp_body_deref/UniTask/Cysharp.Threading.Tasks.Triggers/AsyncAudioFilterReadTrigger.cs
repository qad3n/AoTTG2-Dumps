using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001A0")]
[DisallowMultipleComponent]
public sealed class AsyncAudioFilterReadTrigger : AsyncTriggerBase<(float[] data, int channels)>
{
	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x46E5460", Offset = "0x46E5460", VA = "0x46E5460")]
	private void OnAudioFilterRead(float[] data, int channels)
	{
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x46E54E0", Offset = "0x46E54E0", VA = "0x46E54E0")]
	public IAsyncOnAudioFilterReadHandler GetOnAudioFilterReadAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x46E5550", Offset = "0x46E5550", VA = "0x46E5550")]
	public IAsyncOnAudioFilterReadHandler GetOnAudioFilterReadAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A97")]
	[Address(RVA = "0x46E55C0", Offset = "0x46E55C0", VA = "0x46E55C0")]
	public UniTask<(float[], int)> OnAudioFilterReadAsync()
	{
		return default(UniTask<(float[], int)>);
	}

	[Token(Token = "0x6000A98")]
	[Address(RVA = "0x46E56C0", Offset = "0x46E56C0", VA = "0x46E56C0")]
	public UniTask<(float[], int)> OnAudioFilterReadAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<(float[], int)>);
	}

	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x46E57E0", Offset = "0x46E57E0", VA = "0x46E57E0")]
	public AsyncAudioFilterReadTrigger()
	{
	}
}
