// ==================== AoTTG2 cross-reference ====================
// Type: Cysharp.Threading.Tasks.Triggers.AsyncAudioFilterReadTrigger
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;
using UnityEngine;

namespace Cysharp.Threading.Tasks.Triggers;

[Token(Token = "0x20001A3")]
[DisallowMultipleComponent]
public sealed class AsyncAudioFilterReadTrigger : AsyncTriggerBase<(float[] data, int channels)>
{
	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x62F7F30", Offset = "0x62F6F30", VA = "0x62F7F30")]
	private void OnAudioFilterRead(float[] data, int channels)
	{
	}

	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x62F7FB0", Offset = "0x62F6FB0", VA = "0x62F7FB0")]
	public IAsyncOnAudioFilterReadHandler GetOnAudioFilterReadAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x62F8020", Offset = "0x62F7020", VA = "0x62F8020")]
	public IAsyncOnAudioFilterReadHandler GetOnAudioFilterReadAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0x62F8090", Offset = "0x62F7090", VA = "0x62F8090")]
	public UniTask<(float[], int)> OnAudioFilterReadAsync()
	{
		return default(UniTask<(float[], int)>);
	}

	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x62F8190", Offset = "0x62F7190", VA = "0x62F8190")]
	public UniTask<(float[], int)> OnAudioFilterReadAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<(float[], int)>);
	}

	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x62F82B0", Offset = "0x62F72B0", VA = "0x62F82B0")]
	public AsyncAudioFilterReadTrigger()
	{
	}
}
