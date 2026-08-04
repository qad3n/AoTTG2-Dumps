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

[Token(Token = "0x20000A3")]
public class AudioClipWrapper : IAudioReader<float>, IDataReader<float>, IDisposable, IAudioDesc
{
	[Token(Token = "0x40002B0")]
	[FieldOffset(Offset = "0x10")]
	private AudioClip audioClip;

	[Token(Token = "0x40002B1")]
	[FieldOffset(Offset = "0x18")]
	private int readPos;

	[Token(Token = "0x40002B2")]
	[FieldOffset(Offset = "0x1C")]
	private float startTime;

	[Token(Token = "0x40002B4")]
	[FieldOffset(Offset = "0x21")]
	private bool playing;

	[Token(Token = "0x170000F2")]
	public bool Loop
	{
		[Token(Token = "0x600037C")]
		[Address(RVA = "0x3F37F80", Offset = "0x3F37F80", VA = "0x3F37F80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600037D")]
		[Address(RVA = "0x3F37F90", Offset = "0x3F37F90", VA = "0x3F37F90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000F3")]
	public int SamplingRate
	{
		[Token(Token = "0x6000380")]
		[Address(RVA = "0x3F380F0", Offset = "0x3F380F0", VA = "0x3F380F0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F4")]
	public int Channels
	{
		[Token(Token = "0x6000381")]
		[Address(RVA = "0x3F38110", Offset = "0x3F38110", VA = "0x3F38110", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F5")]
	public string Error
	{
		[Token(Token = "0x6000382")]
		[Address(RVA = "0x3F38130", Offset = "0x3F38130", VA = "0x3F38130", Slot = "8")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000383")]
		[Address(RVA = "0x3F38140", Offset = "0x3F38140", VA = "0x3F38140")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x3F37FA0", Offset = "0x3F37FA0", VA = "0x3F37FA0")]
	public AudioClipWrapper(AudioClip audioClip)
	{
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x3F37FE0", Offset = "0x3F37FE0", VA = "0x3F37FE0", Slot = "4")]
	public bool Read(float[] buffer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000384")]
	[Address(RVA = "0x3F38150", Offset = "0x3F38150", VA = "0x3F38150", Slot = "5")]
	public void Dispose()
	{
	}
}
