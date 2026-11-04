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
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x600020A")]
		[Address(RVA = "0xD25150", Offset = "0xD23750", VA = "0x180D25150")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public IDecoder Decoder
	{
		[Token(Token = "0x600020B")]
		[Address(RVA = "0xADC170", Offset = "0xADA770", VA = "0x180ADC170")]
		[CompilerGenerated]
		readonly get
		{
			return null;
		}
		[Token(Token = "0x600020C")]
		[Address(RVA = "0x1D69900", Offset = "0x1D67F00", VA = "0x181D69900")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000087")]
	internal readonly string logPrefix
	{
		[Token(Token = "0x600020D")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x1D70BC0", Offset = "0x1D6F1C0", VA = "0x181D70BC0")]
	public RemoteVoiceOptions(ILogger logger, string logPrefix, VoiceInfo voiceInfo)
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x1D709B0", Offset = "0x1D6EFB0", VA = "0x181D709B0")]
	public void SetOutput(Action<FrameOut<float>> output)
	{
	}

	[Token(Token = "0x6000207")]
	[Address(RVA = "0x1D70B10", Offset = "0x1D6F110", VA = "0x181D70B10")]
	public void SetOutput(Action<FrameOut<short>> output)
	{
	}

	[Token(Token = "0x6000208")]
	private void setOutput<T>(Action<FrameOut<T>> output)
	{
	}
}
