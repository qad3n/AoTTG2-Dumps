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

[Token(Token = "0x2000064")]
public class AudioDesc : IAudioDesc, IDisposable
{
	[Token(Token = "0x17000093")]
	public int SamplingRate
	{
		[Token(Token = "0x600022F")]
		[Address(RVA = "0x3F269A0", Offset = "0x3F269A0", VA = "0x3F269A0", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000230")]
		[Address(RVA = "0x3F269B0", Offset = "0x3F269B0", VA = "0x3F269B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000094")]
	public int Channels
	{
		[Token(Token = "0x6000231")]
		[Address(RVA = "0x3F269C0", Offset = "0x3F269C0", VA = "0x3F269C0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000232")]
		[Address(RVA = "0x3F269D0", Offset = "0x3F269D0", VA = "0x3F269D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000095")]
	public string Error
	{
		[Token(Token = "0x6000233")]
		[Address(RVA = "0x3F269E0", Offset = "0x3F269E0", VA = "0x3F269E0", Slot = "6")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000234")]
		[Address(RVA = "0x3F269F0", Offset = "0x3F269F0", VA = "0x3F269F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x600022E")]
	[Address(RVA = "0x3F26960", Offset = "0x3F26960", VA = "0x3F26960")]
	public AudioDesc(int samplingRate, int channels, string error)
	{
	}

	[Token(Token = "0x6000235")]
	[Address(RVA = "0x3F26A00", Offset = "0x3F26A00", VA = "0x3F26A00", Slot = "7")]
	public void Dispose()
	{
	}
}
