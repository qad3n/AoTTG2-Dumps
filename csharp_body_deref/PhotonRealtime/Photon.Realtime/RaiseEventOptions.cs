// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.RaiseEventOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadbalancingPeer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000035")]
public class RaiseEventOptions
{
	[Token(Token = "0x40001B1")]
	[FieldOffset(Offset = "0x0")]
	public static readonly RaiseEventOptions Default;

	[Token(Token = "0x40001B2")]
	[FieldOffset(Offset = "0x10")]
	public EventCaching CachingOption;

	[Token(Token = "0x40001B3")]
	[FieldOffset(Offset = "0x11")]
	public byte InterestGroup;

	[Token(Token = "0x40001B4")]
	[FieldOffset(Offset = "0x18")]
	public int[] TargetActors;

	[Token(Token = "0x40001B5")]
	[FieldOffset(Offset = "0x20")]
	public ReceiverGroup Receivers;

	[Token(Token = "0x40001B6")]
	[FieldOffset(Offset = "0x21")]
	[Obsolete("Not used where SendOptions are a parameter too. Use SendOptions.Channel instead.")]
	public byte SequenceChannel;

	[Token(Token = "0x40001B7")]
	[FieldOffset(Offset = "0x28")]
	public WebFlags Flags;

	[Token(Token = "0x6000136")]
	[Address(RVA = "0x3ECF000", Offset = "0x3ECF000", VA = "0x3ECF000")]
	public RaiseEventOptions()
	{
	}
}
