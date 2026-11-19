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

[Token(Token = "0x200001E")]
public struct PhotonMessageInfo
{
	[Token(Token = "0x40000B8")]
	[FieldOffset(Offset = "0x0")]
	private readonly int timeInt;

	[Token(Token = "0x40000B9")]
	[FieldOffset(Offset = "0x8")]
	public readonly Player Sender;

	[Token(Token = "0x40000BA")]
	[FieldOffset(Offset = "0x10")]
	public readonly PhotonView photonView;

	[Token(Token = "0x1700003F")]
	[Obsolete("Use SentServerTime instead.")]
	public double timestamp
	{
		[Token(Token = "0x6000152")]
		[Address(RVA = "0x56E6470", Offset = "0x56E5470", VA = "0x56E6470")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x17000040")]
	public double SentServerTime
	{
		[Token(Token = "0x6000153")]
		[Address(RVA = "0x56E6480", Offset = "0x56E5480", VA = "0x56E6480")]
		get
		{
			return default(double);
		}
	}

	[Token(Token = "0x17000041")]
	public int SentServerTimestamp
	{
		[Token(Token = "0x6000154")]
		[Address(RVA = "0x56E6490", Offset = "0x56E5490", VA = "0x56E6490")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000151")]
	[Address(RVA = "0x56D76B0", Offset = "0x56D66B0", VA = "0x56D76B0")]
	public PhotonMessageInfo(Player player, int timestamp, PhotonView view)
	{
	}

	[Token(Token = "0x6000155")]
	[Address(RVA = "0x56E64A0", Offset = "0x56E54A0", VA = "0x56E64A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
