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

[Token(Token = "0x200005D")]
public struct RemoteVoiceOptions
{
	[Token(Token = "0x4000183")]
	[FieldOffset(Offset = "0x10")]
	private readonly ILogger logger;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0x18")]
	private readonly VoiceInfo voiceInfo;

	[Token(Token = "0x17000085")]
	public Action OnRemoteVoiceRemoveAction
	{
		[Token(Token = "0x6000209")]
		[Address(RVA = "0x570ACF0", Offset = "0x5709CF0", VA = "0x570ACF0")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x600020A")]
		[Address(RVA = "0x570AD00", Offset = "0x5709D00", VA = "0x570AD00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public IDecoder Decoder
	{
		[Token(Token = "0x600020B")]
		[Address(RVA = "0x570AD10", Offset = "0x5709D10", VA = "0x570AD10")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x600020C")]
		[Address(RVA = "0x570AD20", Offset = "0x5709D20", VA = "0x570AD20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	internal readonly string logPrefix
	{
		[Token(Token = "0x600020D")]
		[Address(RVA = "0x570AD30", Offset = "0x5709D30", VA = "0x570AD30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x570AA70", Offset = "0x5709A70", VA = "0x570AA70")]
	public RemoteVoiceOptions(ILogger logger, string logPrefix, VoiceInfo voiceInfo)
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x570AAF0", Offset = "0x5709AF0", VA = "0x570AAF0")]
	public void SetOutput(Action<FrameOut<float>> output)
	{
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x570AC50", Offset = "0x5709C50", VA = "0x570AC50")]
	public void SetOutput(Action<FrameOut<short>> output)
	{
	}

	[Token(Token = "0x6000208")]
	private void setOutput<T>(Action<FrameOut<T>> output)
	{
	}
}
