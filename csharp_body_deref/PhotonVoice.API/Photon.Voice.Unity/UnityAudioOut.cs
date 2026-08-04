// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.UnityAudioOut
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Platforms/Unity/UnityAudioOut.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x20000AC")]
public class UnityAudioOut : AudioOutDelayControl<float>
{
	[Token(Token = "0x40002CB")]
	[FieldOffset(Offset = "0xB0")]
	protected readonly AudioSource source;

	[Token(Token = "0x40002CC")]
	[FieldOffset(Offset = "0xB8")]
	protected AudioClip clip;

	[Token(Token = "0x170000FF")]
	public override long OutPos
	{
		[Token(Token = "0x60003AC")]
		[Address(RVA = "0x3F3AD70", Offset = "0x3F3AD70", VA = "0x3F3AD70", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x3F3AC60", Offset = "0x3F3AC60", VA = "0x3F3AC60")]
	public UnityAudioOut(AudioSource audioSource, PlayDelayConfig playDelayConfig, ILogger logger, string logPrefix, bool debugInfo)
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x3F3AD90", Offset = "0x3F3AD90", VA = "0x3F3AD90", Slot = "12")]
	public override void OutCreate(int frequency, int channels, int bufferSamples)
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x3F3AE40", Offset = "0x3F3AE40", VA = "0x3F3AE40", Slot = "13")]
	public override void OutStart()
	{
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x3F3AE60", Offset = "0x3F3AE60", VA = "0x3F3AE60", Slot = "14")]
	public override void OutWrite(float[] data, int offsetSamples)
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x3F3AE80", Offset = "0x3F3AE80", VA = "0x3F3AE80", Slot = "15")]
	public override void Stop()
	{
	}
}
