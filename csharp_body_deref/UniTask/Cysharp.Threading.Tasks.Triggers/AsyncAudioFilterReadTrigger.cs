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

[Token(Token = "0x20001A0")]
[DisallowMultipleComponent]
public sealed class AsyncAudioFilterReadTrigger : AsyncTriggerBase<(float[] data, int channels)>
{
	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x4A0A560", Offset = "0x4A0A560", VA = "0x4A0A560")]
	private void OnAudioFilterRead(float[] data, int channels)
	{
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x4A0A5E0", Offset = "0x4A0A5E0", VA = "0x4A0A5E0")]
	public IAsyncOnAudioFilterReadHandler GetOnAudioFilterReadAsyncHandler()
	{
		return null;
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x4A0A650", Offset = "0x4A0A650", VA = "0x4A0A650")]
	public IAsyncOnAudioFilterReadHandler GetOnAudioFilterReadAsyncHandler(CancellationToken cancellationToken)
	{
		return null;
	}

	[Token(Token = "0x6000A97")]
	[Address(RVA = "0x4A0A6C0", Offset = "0x4A0A6C0", VA = "0x4A0A6C0")]
	public UniTask<(float[], int)> OnAudioFilterReadAsync()
	{
		return default(UniTask<(float[], int)>);
	}

	[Token(Token = "0x6000A98")]
	[Address(RVA = "0x4A0A7C0", Offset = "0x4A0A7C0", VA = "0x4A0A7C0")]
	public UniTask<(float[], int)> OnAudioFilterReadAsync(CancellationToken cancellationToken)
	{
		return default(UniTask<(float[], int)>);
	}

	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x4A0A8E0", Offset = "0x4A0A8E0", VA = "0x4A0A8E0")]
	public AsyncAudioFilterReadTrigger()
	{
	}
}
