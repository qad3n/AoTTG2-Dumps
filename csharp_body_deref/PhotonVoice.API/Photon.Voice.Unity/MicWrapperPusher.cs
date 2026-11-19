// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.MicWrapperPusher
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Platforms/Unity/MicWrapperPusher.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x20000A7")]
public class MicWrapperPusher : IAudioPusher<float>, IAudioDesc, IDisposable
{
	[Token(Token = "0x40002BB")]
	[FieldOffset(Offset = "0x10")]
	private AudioSource audioSource;

	[Token(Token = "0x40002BC")]
	[FieldOffset(Offset = "0x18")]
	private AudioClip mic;

	[Token(Token = "0x40002BD")]
	[FieldOffset(Offset = "0x20")]
	private string device;

	[Token(Token = "0x40002BE")]
	[FieldOffset(Offset = "0x28")]
	private ILogger logger;

	[Token(Token = "0x40002BF")]
	[FieldOffset(Offset = "0x30")]
	private MicWrapperPusherOnAudioFilterRead onRead;

	[Token(Token = "0x40002C0")]
	[FieldOffset(Offset = "0x38")]
	private int sampleRate;

	[Token(Token = "0x40002C1")]
	[FieldOffset(Offset = "0x3C")]
	private int channels;

	[Token(Token = "0x170000FC")]
	public int SamplingRate
	{
		[Token(Token = "0x600039F")]
		[Address(RVA = "0x5724560", Offset = "0x5723560", VA = "0x5724560", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000FD")]
	public int Channels
	{
		[Token(Token = "0x60003A0")]
		[Address(RVA = "0x5724570", Offset = "0x5723570", VA = "0x5724570", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000FE")]
	public string Error
	{
		[Token(Token = "0x60003A1")]
		[Address(RVA = "0x5724580", Offset = "0x5723580", VA = "0x5724580", Slot = "7")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x5724590", Offset = "0x5723590", VA = "0x5724590")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x5723790", Offset = "0x5722790", VA = "0x5723790")]
	public MicWrapperPusher(GameObject parent, string device, int suggestedFrequency, ILogger logger)
	{
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x5724140", Offset = "0x5723140", VA = "0x5724140", Slot = "4")]
	public void SetCallback(Action<float[]> callback, ObjectFactory<float[], int> bufferFactory)
	{
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x5724340", Offset = "0x5723340", VA = "0x5724340", Slot = "8")]
	public void Dispose()
	{
	}
}
