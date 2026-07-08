using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Photon.Voice.Unity;

[Token(Token = "0x20000A8")]
public class MicWrapper : IAudioReader<float>, IDataReader<float>, IDisposable, IAudioDesc
{
	[Token(Token = "0x40002B9")]
	[FieldOffset(Offset = "0x10")]
	private AudioClip mic;

	[Token(Token = "0x40002BA")]
	[FieldOffset(Offset = "0x18")]
	private string device;

	[Token(Token = "0x40002BB")]
	[FieldOffset(Offset = "0x20")]
	private ILogger logger;

	[Token(Token = "0x40002BD")]
	[FieldOffset(Offset = "0x30")]
	private int micPrevPos;

	[Token(Token = "0x40002BE")]
	[FieldOffset(Offset = "0x34")]
	private int micLoopCnt;

	[Token(Token = "0x40002BF")]
	[FieldOffset(Offset = "0x38")]
	private int readAbsPos;

	[Token(Token = "0x170000F9")]
	public int SamplingRate
	{
		[Token(Token = "0x6000398")]
		[Address(RVA = "0x3C43D20", Offset = "0x3C43D20", VA = "0x3C43D20", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000FA")]
	public int Channels
	{
		[Token(Token = "0x6000399")]
		[Address(RVA = "0x3C43D50", Offset = "0x3C43D50", VA = "0x3C43D50", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000FB")]
	public string Error
	{
		[Token(Token = "0x600039A")]
		[Address(RVA = "0x3C43D80", Offset = "0x3C43D80", VA = "0x3C43D80", Slot = "8")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600039B")]
		[Address(RVA = "0x3C43D90", Offset = "0x3C43D90", VA = "0x3C43D90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6000397")]
	[Address(RVA = "0x3C42DE0", Offset = "0x3C42DE0", VA = "0x3C42DE0")]
	public MicWrapper(string device, int suggestedFrequency, ILogger logger)
	{
	}

	[Token(Token = "0x600039C")]
	[Address(RVA = "0x3C43DA0", Offset = "0x3C43DA0", VA = "0x3C43DA0", Slot = "5")]
	public void Dispose()
	{
	}

	[Token(Token = "0x600039D")]
	[Address(RVA = "0x3C43DC0", Offset = "0x3C43DC0", VA = "0x3C43DC0", Slot = "4")]
	public bool Read(float[] buffer)
	{
		return default(bool);
	}
}
