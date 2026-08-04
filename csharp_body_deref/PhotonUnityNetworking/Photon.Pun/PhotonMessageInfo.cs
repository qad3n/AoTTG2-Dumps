// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Pun.PhotonMessageInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonUnityNetworking/Code/PunClasses.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3EFAE60", Offset = "0x3EFAE60", VA = "0x3EFAE60")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x17000040")]
	public double SentServerTime
	{
		[Token(Token = "0x6000155")]
		[Address(RVA = "0x3EFAE70", Offset = "0x3EFAE70", VA = "0x3EFAE70")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x17000041")]
	public int SentServerTimestamp
	{
		[Token(Token = "0x6000156")]
		[Address(RVA = "0x3EFAE80", Offset = "0x3EFAE80", VA = "0x3EFAE80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000153")]
	[Address(RVA = "0x3EEBB50", Offset = "0x3EEBB50", VA = "0x3EEBB50")]
	public PhotonMessageInfo(Player player, int timestamp, PhotonView view)
	{
	}

	[Token(Token = "0x6000157")]
	[Address(RVA = "0x3EFAE90", Offset = "0x3EFAE90", VA = "0x3EFAE90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
