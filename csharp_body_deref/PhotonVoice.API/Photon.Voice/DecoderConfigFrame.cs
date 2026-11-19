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
	[Address(RVA = "0x5705F30", Offset = "0x5704F30", VA = "0x5705F30")]
	public DecoderConfigFrame(ILogger logger, IDecoder decoder)
	{
	}

	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x5705F70", Offset = "0x5704F70", VA = "0x5705F70")]
	public bool TryConfigure(ref FrameBuffer buf, bool decoderReady)
	{
		return default(bool);
	}

	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x57064C0", Offset = "0x57054C0", VA = "0x57064C0", Slot = "4")]
	public void Dispose()
	{
	}
}
