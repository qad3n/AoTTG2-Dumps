// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.DecoderConfigFrame
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/Util.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000055")]
public class DecoderConfigFrame : IDisposable
{
	[Token(Token = "0x400014B")]
	[FieldOffset(Offset = "0x10")]
	private ILogger logger;

	[Token(Token = "0x400014C")]
	[FieldOffset(Offset = "0x18")]
	private IDecoder decoder;

	[Token(Token = "0x400014D")]
	[FieldOffset(Offset = "0x20")]
	private FrameBuffer configFrame;

	[Token(Token = "0x400014E")]
	[FieldOffset(Offset = "0x58")]
	private bool configFrameDecoded;

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x3F1B320", Offset = "0x3F1B320", VA = "0x3F1B320")]
	public DecoderConfigFrame(ILogger logger, IDecoder decoder)
	{
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x3F1B360", Offset = "0x3F1B360", VA = "0x3F1B360")]
	public bool TryConfigure(ref FrameBuffer buf, bool decoderReady)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x3F1B8C0", Offset = "0x3F1B8C0", VA = "0x3F1B8C0", Slot = "4")]
	public void Dispose()
	{
	}
}
