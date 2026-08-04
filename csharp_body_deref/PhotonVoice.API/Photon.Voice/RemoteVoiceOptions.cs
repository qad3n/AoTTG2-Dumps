// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.RemoteVoiceOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/Voice.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200005F")]
public struct RemoteVoiceOptions
{
	[Token(Token = "0x4000188")]
	[FieldOffset(Offset = "0x10")]
	private readonly ILogger logger;

	[Token(Token = "0x4000189")]
	[FieldOffset(Offset = "0x18")]
	private readonly VoiceInfo voiceInfo;

	[Token(Token = "0x17000085")]
	public Action OnRemoteVoiceRemoveAction
	{
		[Token(Token = "0x600020B")]
		[Address(RVA = "0x3F201A0", Offset = "0x3F201A0", VA = "0x3F201A0")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x600020C")]
		[Address(RVA = "0x3F201B0", Offset = "0x3F201B0", VA = "0x3F201B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public IDecoder Decoder
	{
		[Token(Token = "0x600020D")]
		[Address(RVA = "0x3F201C0", Offset = "0x3F201C0", VA = "0x3F201C0")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x600020E")]
		[Address(RVA = "0x3F201D0", Offset = "0x3F201D0", VA = "0x3F201D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	internal readonly string logPrefix
	{
		[Token(Token = "0x600020F")]
		[Address(RVA = "0x3F201E0", Offset = "0x3F201E0", VA = "0x3F201E0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x3F1FF10", Offset = "0x3F1FF10", VA = "0x3F1FF10")]
	public RemoteVoiceOptions(ILogger logger, string logPrefix, VoiceInfo voiceInfo)
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x3F1FF90", Offset = "0x3F1FF90", VA = "0x3F1FF90")]
	public void SetOutput(Action<FrameOut<float>> output)
	{
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x3F20100", Offset = "0x3F20100", VA = "0x3F20100")]
	public void SetOutput(Action<FrameOut<short>> output)
	{
	}

	[Token(Token = "0x600020A")]
	private void setOutput<T>(Action<FrameOut<T>> output)
	{
	}
}
