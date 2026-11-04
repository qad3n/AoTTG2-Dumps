// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.PhotonPing
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/PhotonPing.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200003A")]
public abstract class PhotonPing : IDisposable
{
	[Token(Token = "0x40001D4")]
	[FieldOffset(Offset = "0x10")]
	public string DebugString;

	[Token(Token = "0x40001D5")]
	[FieldOffset(Offset = "0x18")]
	public bool Successful;

	[Token(Token = "0x40001D6")]
	[FieldOffset(Offset = "0x19")]
	protected internal bool GotResult;

	[Token(Token = "0x40001D7")]
	[FieldOffset(Offset = "0x1C")]
	protected internal int PingLength;

	[Token(Token = "0x40001D8")]
	[FieldOffset(Offset = "0x20")]
	protected internal byte[] PingBytes;

	[Token(Token = "0x40001D9")]
	[FieldOffset(Offset = "0x28")]
	protected internal byte PingId;

	[Token(Token = "0x40001DA")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Random RandomIdProvider;

	[Token(Token = "0x600014F")]
	[Address(RVA = "0x1D24AD0", Offset = "0x1D230D0", VA = "0x181D24AD0", Slot = "5")]
	public virtual bool StartPing(string ip)
	{
		return default(bool);
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x1D24A10", Offset = "0x1D23010", VA = "0x181D24A10", Slot = "6")]
	public virtual bool Done()
	{
		return default(bool);
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x1D249D0", Offset = "0x1D22FD0", VA = "0x181D249D0", Slot = "7")]
	public virtual void Dispose()
	{
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x1D24A50", Offset = "0x1D23050", VA = "0x181D24A50")]
	protected internal void Init()
	{
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x1D24B90", Offset = "0x1D23190", VA = "0x181D24B90")]
	protected PhotonPing()
	{
	}
}
