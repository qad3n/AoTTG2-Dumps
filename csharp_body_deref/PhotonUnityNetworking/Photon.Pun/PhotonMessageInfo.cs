using System;
using Il2CppDummyDll;
using Photon.Realtime;

namespace Photon.Pun;

[Token(Token = "0x2000020")]
public struct PhotonMessageInfo
{
	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x0")]
	private readonly int timeInt;

	[Token(Token = "0x40000BE")]
	[FieldOffset(Offset = "0x8")]
	public readonly Player Sender;

	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x10")]
	public readonly PhotonView photonView;

	[Token(Token = "0x1700003F")]
	[Obsolete("Use SentServerTime instead.")]
	public double timestamp
	{
		[Token(Token = "0x6000154")]
		[Address(RVA = "0x3C17960", Offset = "0x3C17960", VA = "0x3C17960")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x17000040")]
	public double SentServerTime
	{
		[Token(Token = "0x6000155")]
		[Address(RVA = "0x3C17970", Offset = "0x3C17970", VA = "0x3C17970")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x17000041")]
	public int SentServerTimestamp
	{
		[Token(Token = "0x6000156")]
		[Address(RVA = "0x3C17980", Offset = "0x3C17980", VA = "0x3C17980")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x3C08650", Offset = "0x3C08650", VA = "0x3C08650")]
	public PhotonMessageInfo(Player player, int timestamp, PhotonView view)
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x3C17990", Offset = "0x3C17990", VA = "0x3C17990", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
