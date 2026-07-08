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
	[Address(RVA = "0x3C259D0", Offset = "0x3C259D0", VA = "0x3C259D0")]
	public DecoderConfigFrame(ILogger logger, IDecoder decoder)
	{
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x3C25A10", Offset = "0x3C25A10", VA = "0x3C25A10")]
	public bool TryConfigure(ref FrameBuffer buf, bool decoderReady)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x3C25F70", Offset = "0x3C25F70", VA = "0x3C25F70", Slot = "4")]
	public void Dispose()
	{
	}
}
