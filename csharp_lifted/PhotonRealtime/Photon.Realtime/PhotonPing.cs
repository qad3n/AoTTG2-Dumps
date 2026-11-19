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
	[Address(RVA = "0x56BC0A0", Offset = "0x56BB0A0", VA = "0x56BC0A0", Slot = "5")]
	public virtual bool StartPing(string ip)
	{
		return default(bool);
	}

	[Token(Token = "0x6000150")]
	[Address(RVA = "0x56BC0E0", Offset = "0x56BB0E0", VA = "0x56BC0E0", Slot = "6")]
	public virtual bool Done()
	{
		return default(bool);
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x56BC120", Offset = "0x56BB120", VA = "0x56BC120", Slot = "7")]
	public virtual void Dispose()
	{
	}

	[Token(Token = "0x6000152")]
	[Address(RVA = "0x56BC160", Offset = "0x56BB160", VA = "0x56BC160")]
	protected internal void Init()
	{
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x56BC1E0", Offset = "0x56BB1E0", VA = "0x56BC1E0")]
	protected PhotonPing()
	{
	}
}
