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

[Token(Token = "0x20000AA")]
public class UnityAudioOut : AudioOutDelayControl<float>
{
	[Token(Token = "0x40002C6")]
	[FieldOffset(Offset = "0xB0")]
	protected readonly AudioSource source;

	[Token(Token = "0x40002C7")]
	[FieldOffset(Offset = "0xB8")]
	protected AudioClip clip;

	[Token(Token = "0x170000FF")]
	public override long OutPos
	{
		[Token(Token = "0x60003AA")]
		[Address(RVA = "0x5724880", Offset = "0x5723880", VA = "0x5724880", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x60003A9")]
	[Address(RVA = "0x5724770", Offset = "0x5723770", VA = "0x5724770")]
	public UnityAudioOut(AudioSource audioSource, PlayDelayConfig playDelayConfig, ILogger logger, string logPrefix, bool debugInfo)
	{
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x57248A0", Offset = "0x57238A0", VA = "0x57248A0", Slot = "12")]
	public override void OutCreate(int frequency, int channels, int bufferSamples)
	{
	}

	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x5724950", Offset = "0x5723950", VA = "0x5724950", Slot = "13")]
	public override void OutStart()
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x5724970", Offset = "0x5723970", VA = "0x5724970", Slot = "14")]
	public override void OutWrite(float[] data, int offsetSamples)
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x5724990", Offset = "0x5723990", VA = "0x5724990", Slot = "15")]
	public override void Stop()
	{
	}
}
