// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.AudioClipWrapper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Platforms/Unity/AudioClipWrapper.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x20000A5")]
public class AudioClipWrapper : IAudioReader<float>, IDataReader<float>, IDisposable, IAudioDesc
{
	[Token(Token = "0x40002B9")]
	[FieldOffset(Offset = "0x10")]
	private AudioClip audioClip;

	[Token(Token = "0x40002BA")]
	[FieldOffset(Offset = "0x18")]
	private int readPos;

	[Token(Token = "0x40002BB")]
	[FieldOffset(Offset = "0x1C")]
	private float startTime;

	[Token(Token = "0x40002BD")]
	[FieldOffset(Offset = "0x21")]
	private bool playing;

	[Token(Token = "0x170000F5")]
	public bool Loop
	{
		[Token(Token = "0x6000392")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000393")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000F6")]
	public int SamplingRate
	{
		[Token(Token = "0x6000396")]
		[Address(RVA = "0x1D831E0", Offset = "0x1D817E0", VA = "0x181D831E0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F7")]
	public int Channels
	{
		[Token(Token = "0x6000397")]
		[Address(RVA = "0x1D831C0", Offset = "0x1D817C0", VA = "0x181D831C0", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F8")]
	public string Error
	{
		[Token(Token = "0x6000398")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "8")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000399")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000394")]
	[Address(RVA = "0x1D83170", Offset = "0x1D81770", VA = "0x181D83170")]
	public AudioClipWrapper(AudioClip audioClip)
	{
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x1D83040", Offset = "0x1D81640", VA = "0x181D83040", Slot = "4")]
	public bool Read(float[] buffer)
	{
		return default(bool);
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
	public void Dispose()
	{
	}
}
