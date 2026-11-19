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

[Token(Token = "0x20000A6")]
public class MicWrapper : IAudioReader<float>, IDataReader<float>, IDisposable, IAudioDesc
{
	[Token(Token = "0x40002B4")]
	[FieldOffset(Offset = "0x10")]
	private AudioClip mic;

	[Token(Token = "0x40002B5")]
	[FieldOffset(Offset = "0x18")]
	private string device;

	[Token(Token = "0x40002B6")]
	[FieldOffset(Offset = "0x20")]
	private ILogger logger;

	[Token(Token = "0x40002B8")]
	[FieldOffset(Offset = "0x30")]
	private int micPrevPos;

	[Token(Token = "0x40002B9")]
	[FieldOffset(Offset = "0x34")]
	private int micLoopCnt;

	[Token(Token = "0x40002BA")]
	[FieldOffset(Offset = "0x38")]
	private int readAbsPos;

	[Token(Token = "0x170000F9")]
	public int SamplingRate
	{
		[Token(Token = "0x6000396")]
		[Address(RVA = "0x5723440", Offset = "0x5722440", VA = "0x5723440", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000FA")]
	public int Channels
	{
		[Token(Token = "0x6000397")]
		[Address(RVA = "0x5723470", Offset = "0x5722470", VA = "0x5723470", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000FB")]
	public string Error
	{
		[Token(Token = "0x6000398")]
		[Address(RVA = "0x57234A0", Offset = "0x57224A0", VA = "0x57234A0", Slot = "8")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000399")]
		[Address(RVA = "0x57234B0", Offset = "0x57224B0", VA = "0x57234B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000395")]
	[Address(RVA = "0x5722670", Offset = "0x5721670", VA = "0x5722670")]
	public MicWrapper(string device, int suggestedFrequency, ILogger logger)
	{
	}

	[Token(Token = "0x600039A")]
	[Address(RVA = "0x57234C0", Offset = "0x57224C0", VA = "0x57234C0", Slot = "5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600039B")]
	[Address(RVA = "0x57234E0", Offset = "0x57224E0", VA = "0x57234E0", Slot = "4")]
	public bool Read(float[] buffer)
	{
		return default(bool);
	}
}
