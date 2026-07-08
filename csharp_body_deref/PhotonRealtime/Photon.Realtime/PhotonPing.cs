using System;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200003C")]
public abstract class PhotonPing : IDisposable
{
	[Token(Token = "0x40001D9")]
	[FieldOffset(Offset = "0x10")]
	public string DebugString;

	[Token(Token = "0x40001DA")]
	[FieldOffset(Offset = "0x18")]
	public bool Successful;

	[Token(Token = "0x40001DB")]
	[FieldOffset(Offset = "0x19")]
	protected internal bool GotResult;

	[Token(Token = "0x40001DC")]
	[FieldOffset(Offset = "0x1C")]
	protected internal int PingLength;

	[Token(Token = "0x40001DD")]
	[FieldOffset(Offset = "0x20")]
	protected internal byte[] PingBytes;

	[Token(Token = "0x40001DE")]
	[FieldOffset(Offset = "0x28")]
	protected internal byte PingId;

	[Token(Token = "0x40001DF")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Random RandomIdProvider;

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x3BDA0F0", Offset = "0x3BDA0F0", VA = "0x3BDA0F0", Slot = "5")]
	public virtual bool StartPing(string ip)
	{
		return default(bool);
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x3BDA130", Offset = "0x3BDA130", VA = "0x3BDA130", Slot = "6")]
	public virtual bool Done()
	{
		return default(bool);
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x3BDA170", Offset = "0x3BDA170", VA = "0x3BDA170", Slot = "7")]
	public virtual void Dispose()
	{
	}

	[Token(Token = "0x6000154")]
	[Address(RVA = "0x3BDA1B0", Offset = "0x3BDA1B0", VA = "0x3BDA1B0")]
	protected internal void Init()
	{
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x3BDA230", Offset = "0x3BDA230", VA = "0x3BDA230")]
	protected PhotonPing()
	{
	}
}
