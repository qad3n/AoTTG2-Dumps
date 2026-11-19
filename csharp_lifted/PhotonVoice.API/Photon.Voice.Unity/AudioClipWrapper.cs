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

[Token(Token = "0x20000A1")]
public class AudioClipWrapper : IAudioReader<float>, IDataReader<float>, IDisposable, IAudioDesc
{
	[Token(Token = "0x40002AB")]
	[FieldOffset(Offset = "0x10")]
	private AudioClip audioClip;

	[Token(Token = "0x40002AC")]
	[FieldOffset(Offset = "0x18")]
	private int readPos;

	[Token(Token = "0x40002AD")]
	[FieldOffset(Offset = "0x1C")]
	private float startTime;

	[Token(Token = "0x40002AF")]
	[FieldOffset(Offset = "0x21")]
	private bool playing;

	[Token(Token = "0x170000F2")]
	public bool Loop
	{
		[Token(Token = "0x600037A")]
		[Address(RVA = "0x5721EE0", Offset = "0x5720EE0", VA = "0x5721EE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600037B")]
		[Address(RVA = "0x5721EF0", Offset = "0x5720EF0", VA = "0x5721EF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000F3")]
	public int SamplingRate
	{
		[Token(Token = "0x600037E")]
		[Address(RVA = "0x5722050", Offset = "0x5721050", VA = "0x5722050", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F4")]
	public int Channels
	{
		[Token(Token = "0x600037F")]
		[Address(RVA = "0x5722070", Offset = "0x5721070", VA = "0x5722070", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000F5")]
	public string Error
	{
		[Token(Token = "0x6000380")]
		[Address(RVA = "0x5722090", Offset = "0x5721090", VA = "0x5722090", Slot = "8")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000381")]
		[Address(RVA = "0x57220A0", Offset = "0x57210A0", VA = "0x57220A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600037C")]
	[Address(RVA = "0x5721F00", Offset = "0x5720F00", VA = "0x5721F00")]
	public AudioClipWrapper(AudioClip audioClip)
	{
	}

	[Token(Token = "0x600037D")]
	[Address(RVA = "0x5721F40", Offset = "0x5720F40", VA = "0x5721F40", Slot = "4")]
	public bool Read(float[] buffer)
	{
		return default(bool);
	}

	[Token(Token = "0x6000382")]
	[Address(RVA = "0x57220B0", Offset = "0x57210B0", VA = "0x57220B0", Slot = "5")]
	public void Dispose()
	{
	}
}
