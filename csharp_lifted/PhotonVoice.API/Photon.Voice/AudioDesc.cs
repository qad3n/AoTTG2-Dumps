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
		[Address(RVA = "0x5711340", Offset = "0x5710340", VA = "0x5711340", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600022E")]
		[Address(RVA = "0x5711350", Offset = "0x5710350", VA = "0x5711350")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000094")]
	public int Channels
	{
		[Token(Token = "0x600022F")]
		[Address(RVA = "0x5711360", Offset = "0x5710360", VA = "0x5711360", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000230")]
		[Address(RVA = "0x5711370", Offset = "0x5710370", VA = "0x5711370")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000095")]
	public string Error
	{
		[Token(Token = "0x6000231")]
		[Address(RVA = "0x5711380", Offset = "0x5710380", VA = "0x5711380", Slot = "6")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000232")]
		[Address(RVA = "0x5711390", Offset = "0x5710390", VA = "0x5711390")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600022C")]
	[Address(RVA = "0x5711300", Offset = "0x5710300", VA = "0x5711300")]
	public AudioDesc(int samplingRate, int channels, string error)
	{
	}

	[Token(Token = "0x6000233")]
	[Address(RVA = "0x57113A0", Offset = "0x57103A0", VA = "0x57113A0", Slot = "7")]
	public void Dispose()
	{
	}
}
