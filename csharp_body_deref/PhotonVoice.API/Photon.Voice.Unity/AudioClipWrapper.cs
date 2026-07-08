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
		[Address(RVA = "0x3C42630", Offset = "0x3C42630", VA = "0x3C42630")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600037D")]
		[Address(RVA = "0x3C42640", Offset = "0x3C42640", VA = "0x3C42640")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000F3")]
	public int SamplingRate
	{
		[Token(Token = "0x6000380")]
		[Address(RVA = "0x3C427A0", Offset = "0x3C427A0", VA = "0x3C427A0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F4")]
	public int Channels
	{
		[Token(Token = "0x6000381")]
		[Address(RVA = "0x3C427C0", Offset = "0x3C427C0", VA = "0x3C427C0", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F5")]
	public string Error
	{
		[Token(Token = "0x6000382")]
		[Address(RVA = "0x3C427E0", Offset = "0x3C427E0", VA = "0x3C427E0", Slot = "8")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000383")]
		[Address(RVA = "0x3C427F0", Offset = "0x3C427F0", VA = "0x3C427F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600037E")]
	[Address(RVA = "0x3C42650", Offset = "0x3C42650", VA = "0x3C42650")]
	public AudioClipWrapper(AudioClip audioClip)
	{
	}

	[Token(Token = "0x600037F")]
	[Address(RVA = "0x3C42690", Offset = "0x3C42690", VA = "0x3C42690", Slot = "4")]
	public bool Read(float[] buffer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000384")]
	[Address(RVA = "0x3C42800", Offset = "0x3C42800", VA = "0x3C42800", Slot = "5")]
	public void Dispose()
	{
	}
}
