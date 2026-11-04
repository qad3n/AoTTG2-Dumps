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
	[Address(RVA = "0x2929290", Offset = "0x2927890", VA = "0x182929290")]
	private void OnAudioFilterRead(float[] data, int channels)
	{
	}

	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x2928FF0", Offset = "0x29275F0", VA = "0x182928FF0")]
	public IAsyncOnAudioFilterReadHandler GetOnAudioFilterReadAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x2928F70", Offset = "0x2927570", VA = "0x182928F70")]
	public IAsyncOnAudioFilterReadHandler GetOnAudioFilterReadAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000ABB")]
	[Address(RVA = "0x2929170", Offset = "0x2927770", VA = "0x182929170")]
	public UniTask<(float[], int)> OnAudioFilterReadAsync()
	{
		return default(UniTask<(float[], int)>);
	}

	[Token(Token = "0x6000ABC")]
	[Address(RVA = "0x2929060", Offset = "0x2927660", VA = "0x182929060")]
	public UniTask<(float[], int)> OnAudioFilterReadAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<(float[], int)>);
	}

	[Token(Token = "0x6000ABD")]
	[Address(RVA = "0x2929320", Offset = "0x2927920", VA = "0x182929320")]
	public AsyncAudioFilterReadTrigger()
	{
	}
}
