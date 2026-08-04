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

[Token(Token = "0x20000A9")]
public class MicWrapperPusher : IAudioPusher<float>, IAudioDesc, IDisposable
{
	[Token(Token = "0x40002C0")]
	[FieldOffset(Offset = "0x10")]
	private AudioSource audioSource;

	[Token(Token = "0x40002C1")]
	[FieldOffset(Offset = "0x18")]
	private AudioClip mic;

	[Token(Token = "0x40002C2")]
	[FieldOffset(Offset = "0x20")]
	private string device;

	[Token(Token = "0x40002C3")]
	[FieldOffset(Offset = "0x28")]
	private ILogger logger;

	[Token(Token = "0x40002C4")]
	[FieldOffset(Offset = "0x30")]
	private MicWrapperPusherOnAudioFilterRead onRead;

	[Token(Token = "0x40002C5")]
	[FieldOffset(Offset = "0x38")]
	private int sampleRate;

	[Token(Token = "0x40002C6")]
	[FieldOffset(Offset = "0x3C")]
	private int channels;

	[Token(Token = "0x170000FC")]
	public int SamplingRate
	{
		[Token(Token = "0x60003A1")]
		[Address(RVA = "0x3F3AA40", Offset = "0x3F3AA40", VA = "0x3F3AA40", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000FD")]
	public int Channels
	{
		[Token(Token = "0x60003A2")]
		[Address(RVA = "0x3F3AA50", Offset = "0x3F3AA50", VA = "0x3F3AA50", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000FE")]
	public string Error
	{
		[Token(Token = "0x60003A3")]
		[Address(RVA = "0x3F3AA60", Offset = "0x3F3AA60", VA = "0x3F3AA60", Slot = "7")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60003A4")]
		[Address(RVA = "0x3F3AA70", Offset = "0x3F3AA70", VA = "0x3F3AA70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600039E")]
	[Address(RVA = "0x3F399C0", Offset = "0x3F399C0", VA = "0x3F399C0")]
	public MicWrapperPusher(GameObject parent, string device, int suggestedFrequency, ILogger logger)
	{
	}

	[Token(Token = "0x600039F")]
	[Address(RVA = "0x3F3A610", Offset = "0x3F3A610", VA = "0x3F3A610", Slot = "4")]
	public void SetCallback(Action<float[]> callback, ObjectFactory<float[], int> bufferFactory)
	{
	}

	[Token(Token = "0x60003A0")]
	[Address(RVA = "0x3F3A820", Offset = "0x3F3A820", VA = "0x3F3A820", Slot = "8")]
	public void Dispose()
	{
	}
}
