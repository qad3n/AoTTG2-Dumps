// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.AudioDesc
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceAudio.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000062")]
public class AudioDesc : IAudioDesc, IDisposable
{
	[Token(Token = "0x17000093")]
	public int SamplingRate
	{
		[Token(Token = "0x600022D")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600022E")]
		[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000094")]
	public int Channels
	{
		[Token(Token = "0x600022F")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000230")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000095")]
	public string Error
	{
		[Token(Token = "0x6000231")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000232")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x1D67D10", Offset = "0x1D66310", VA = "0x181D67D10")]
	public AudioDesc(int samplingRate, int channels, string error)
	{
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
	public void Dispose()
	{
	}
}
