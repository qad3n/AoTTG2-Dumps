using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000064")]
public class AudioDesc : IAudioDesc, IDisposable
{
	[Token(Token = "0x17000093")]
	public int SamplingRate
	{
		[Token(Token = "0x600022F")]
		[Address(RVA = "0x3C31050", Offset = "0x3C31050", VA = "0x3C31050", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000230")]
		[Address(RVA = "0x3C31060", Offset = "0x3C31060", VA = "0x3C31060")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000094")]
	public int Channels
	{
		[Token(Token = "0x6000231")]
		[Address(RVA = "0x3C31070", Offset = "0x3C31070", VA = "0x3C31070", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000232")]
		[Address(RVA = "0x3C31080", Offset = "0x3C31080", VA = "0x3C31080")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000095")]
	public string Error
	{
		[Token(Token = "0x6000233")]
		[Address(RVA = "0x3C31090", Offset = "0x3C31090", VA = "0x3C31090", Slot = "6")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000234")]
		[Address(RVA = "0x3C310A0", Offset = "0x3C310A0", VA = "0x3C310A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x3C31010", Offset = "0x3C31010", VA = "0x3C31010")]
	public AudioDesc(int samplingRate, int channels, string error)
	{
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x3C310B0", Offset = "0x3C310B0", VA = "0x3C310B0", Slot = "7")]
	public void Dispose()
	{
	}
}
