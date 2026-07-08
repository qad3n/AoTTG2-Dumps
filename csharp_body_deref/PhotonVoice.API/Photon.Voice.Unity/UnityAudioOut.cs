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
		[Address(RVA = "0x3C45420", Offset = "0x3C45420", VA = "0x3C45420", Slot = "11")]
		get
		{
			return default(long);
		}
	}

	[Token(Token = "0x60003AB")]
	[Address(RVA = "0x3C45310", Offset = "0x3C45310", VA = "0x3C45310")]
	public UnityAudioOut(AudioSource audioSource, PlayDelayConfig playDelayConfig, ILogger logger, string logPrefix, bool debugInfo)
	{
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x3C45440", Offset = "0x3C45440", VA = "0x3C45440", Slot = "12")]
	public override void OutCreate(int frequency, int channels, int bufferSamples)
	{
	}

	[Token(Token = "0x60003AE")]
	[Address(RVA = "0x3C454F0", Offset = "0x3C454F0", VA = "0x3C454F0", Slot = "13")]
	public override void OutStart()
	{
	}

	[Token(Token = "0x60003AF")]
	[Address(RVA = "0x3C45510", Offset = "0x3C45510", VA = "0x3C45510", Slot = "14")]
	public override void OutWrite(float[] data, int offsetSamples)
	{
	}

	[Token(Token = "0x60003B0")]
	[Address(RVA = "0x3C45530", Offset = "0x3C45530", VA = "0x3C45530", Slot = "15")]
	public override void Stop()
	{
	}
}
