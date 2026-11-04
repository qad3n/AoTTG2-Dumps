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

[Token(Token = "0x20000AE")]
public class UnityAudioOut : AudioOutDelayControl<float>
{
	[Token(Token = "0x40002D4")]
	[FieldOffset(Offset = "0xB0")]
	protected readonly AudioSource source;

	[Token(Token = "0x40002D5")]
	[FieldOffset(Offset = "0xB8")]
	protected AudioClip clip;

	[Token(Token = "0x17000102")]
	public override long OutPos
	{
		[Token(Token = "0x60003C2")]
		[Address(RVA = "0x1D87300", Offset = "0x1D85900", VA = "0x181D87300", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x1D871F0", Offset = "0x1D857F0", VA = "0x181D871F0")]
	public UnityAudioOut(AudioSource audioSource, PlayDelayConfig playDelayConfig, ILogger logger, string logPrefix, bool debugInfo)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x1D87010", Offset = "0x1D85610", VA = "0x181D87010", Slot = "12")]
	public override void OutCreate(int frequency, int channels, int bufferSamples)
	{
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x1D870C0", Offset = "0x1D856C0", VA = "0x181D870C0", Slot = "13")]
	public override void OutStart()
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x1D870F0", Offset = "0x1D856F0", VA = "0x181D870F0", Slot = "14")]
	public override void OutWrite(float[] data, int offsetSamples)
	{
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x1D87120", Offset = "0x1D85720", VA = "0x181D87120", Slot = "15")]
	public override void Stop()
	{
	}
}
