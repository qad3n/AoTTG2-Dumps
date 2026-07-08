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
		[Address(RVA = "0x3C2A850", Offset = "0x3C2A850", VA = "0x3C2A850")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x600020C")]
		[Address(RVA = "0x3C2A860", Offset = "0x3C2A860", VA = "0x3C2A860")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public IDecoder Decoder
	{
		[Token(Token = "0x600020D")]
		[Address(RVA = "0x3C2A870", Offset = "0x3C2A870", VA = "0x3C2A870")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x600020E")]
		[Address(RVA = "0x3C2A880", Offset = "0x3C2A880", VA = "0x3C2A880")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	internal readonly string logPrefix
	{
		[Token(Token = "0x600020F")]
		[Address(RVA = "0x3C2A890", Offset = "0x3C2A890", VA = "0x3C2A890")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x3C2A5C0", Offset = "0x3C2A5C0", VA = "0x3C2A5C0")]
	public RemoteVoiceOptions(ILogger logger, string logPrefix, VoiceInfo voiceInfo)
	{
	}

	[Token(Token = "0x6000208")]
	[Address(RVA = "0x3C2A640", Offset = "0x3C2A640", VA = "0x3C2A640")]
	public void SetOutput(Action<FrameOut<float>> output)
	{
	}

	[Token(Token = "0x6000209")]
	[Address(RVA = "0x3C2A7B0", Offset = "0x3C2A7B0", VA = "0x3C2A7B0")]
	public void SetOutput(Action<FrameOut<short>> output)
	{
	}

	[Token(Token = "0x600020A")]
	private void setOutput<T>(Action<FrameOut<T>> output)
	{
	}
}
