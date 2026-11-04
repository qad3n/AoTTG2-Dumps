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

[Token(Token = "0x2000053")]
public class DecoderConfigFrame : IDisposable
{
	[Token(Token = "0x4000146")]
	[FieldOffset(Offset = "0x10")]
	private ILogger logger;

	[Token(Token = "0x4000147")]
	[FieldOffset(Offset = "0x18")]
	private IDecoder decoder;

	[Token(Token = "0x4000148")]
	[FieldOffset(Offset = "0x20")]
	private FrameBuffer configFrame;

	[Token(Token = "0x4000149")]
	[FieldOffset(Offset = "0x58")]
	private bool configFrameDecoded;

	[Token(Token = "0x60001B7")]
	[Address(RVA = "0xC8DAD0", Offset = "0xC8C0D0", VA = "0x180C8DAD0")]
	public DecoderConfigFrame(ILogger logger, IDecoder decoder)
	{
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x1D68A30", Offset = "0x1D67030", VA = "0x181D68A30")]
	public bool TryConfigure(ref FrameBuffer buf, bool decoderReady)
	{
		return default(bool);
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x1D689E0", Offset = "0x1D66FE0", VA = "0x181D689E0", Slot = "4")]
	public void Dispose()
	{
	}
}
