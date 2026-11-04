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

[Token(Token = "0x20000AB")]
public class MicWrapperPusher : IAudioPusher<float>, IAudioDesc, IDisposable
{
	[Token(Token = "0x40002C9")]
	[FieldOffset(Offset = "0x10")]
	private AudioSource audioSource;

	[Token(Token = "0x40002CA")]
	[FieldOffset(Offset = "0x18")]
	private AudioClip mic;

	[Token(Token = "0x40002CB")]
	[FieldOffset(Offset = "0x20")]
	private string device;

	[Token(Token = "0x40002CC")]
	[FieldOffset(Offset = "0x28")]
	private ILogger logger;

	[Token(Token = "0x40002CD")]
	[FieldOffset(Offset = "0x30")]
	private MicWrapperPusherOnAudioFilterRead onRead;

	[Token(Token = "0x40002CE")]
	[FieldOffset(Offset = "0x38")]
	private int sampleRate;

	[Token(Token = "0x40002CF")]
	[FieldOffset(Offset = "0x3C")]
	private int channels;

	[Token(Token = "0x170000FF")]
	public int SamplingRate
	{
		[Token(Token = "0x60003B7")]
		[Address(RVA = "0x1D85500", Offset = "0x1D83B00", VA = "0x181D85500", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000100")]
	public int Channels
	{
		[Token(Token = "0x60003B8")]
		[Address(RVA = "0x1D854F0", Offset = "0x1D83AF0", VA = "0x181D854F0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000101")]
	public string Error
	{
		[Token(Token = "0x60003B9")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0", Slot = "7")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60003BA")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60003B4")]
	[Address(RVA = "0x1D84E80", Offset = "0x1D83480", VA = "0x181D84E80")]
	public MicWrapperPusher(GameObject parent, string device, int suggestedFrequency, ILogger logger)
	{
	}

	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x1D84D20", Offset = "0x1D83320", VA = "0x181D84D20", Slot = "4")]
	public void SetCallback(Action<float[]> callback, ObjectFactory<float[], int> bufferFactory)
	{
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x1D84C20", Offset = "0x1D83220", VA = "0x181D84C20", Slot = "8")]
	public void Dispose()
	{
	}
}
