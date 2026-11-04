// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.MicWrapper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Platforms/Unity/MicWrapper.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x20000AA")]
public class MicWrapper : IAudioReader<float>, IDataReader<float>, IDisposable, IAudioDesc
{
	[Token(Token = "0x40002C2")]
	[FieldOffset(Offset = "0x10")]
	private AudioClip mic;

	[Token(Token = "0x40002C3")]
	[FieldOffset(Offset = "0x18")]
	private string device;

	[Token(Token = "0x40002C4")]
	[FieldOffset(Offset = "0x20")]
	private ILogger logger;

	[Token(Token = "0x40002C6")]
	[FieldOffset(Offset = "0x30")]
	private int micPrevPos;

	[Token(Token = "0x40002C7")]
	[FieldOffset(Offset = "0x34")]
	private int micLoopCnt;

	[Token(Token = "0x40002C8")]
	[FieldOffset(Offset = "0x38")]
	private int readAbsPos;

	[Token(Token = "0x170000FC")]
	public int SamplingRate
	{
		[Token(Token = "0x60003AE")]
		[Address(RVA = "0x1D85AA0", Offset = "0x1D840A0", VA = "0x181D85AA0", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000FD")]
	public int Channels
	{
		[Token(Token = "0x60003AF")]
		[Address(RVA = "0x1D85A70", Offset = "0x1D84070", VA = "0x181D85A70", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000FE")]
	public string Error
	{
		[Token(Token = "0x60003B0")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "8")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60003B1")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60003AD")]
	[Address(RVA = "0x1D856E0", Offset = "0x1D83CE0", VA = "0x181D856E0")]
	public MicWrapper(string device, int suggestedFrequency, ILogger logger)
	{
	}

	[Token(Token = "0x60003B2")]
	[Address(RVA = "0x1D85510", Offset = "0x1D83B10", VA = "0x181D85510", Slot = "5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60003B3")]
	[Address(RVA = "0x1D85520", Offset = "0x1D83B20", VA = "0x181D85520", Slot = "4")]
	public bool Read(float[] buffer)
	{
		return default(bool);
	}
}
