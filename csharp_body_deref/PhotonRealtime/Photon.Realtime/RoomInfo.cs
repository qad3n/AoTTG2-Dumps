// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.RoomInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/RoomInfo.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000047")]
public class RoomInfo
{
	[Token(Token = "0x400021A")]
	[FieldOffset(Offset = "0x10")]
	public bool RemovedFromList;

	[Token(Token = "0x400021B")]
	[FieldOffset(Offset = "0x18")]
	private Hashtable customProperties;

	[Token(Token = "0x400021C")]
	[FieldOffset(Offset = "0x20")]
	protected int maxPlayers;

	[Token(Token = "0x400021D")]
	[FieldOffset(Offset = "0x24")]
	protected int emptyRoomTtl;

	[Token(Token = "0x400021E")]
	[FieldOffset(Offset = "0x28")]
	protected int playerTtl;

	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0x30")]
	protected string[] expectedUsers;

	[Token(Token = "0x4000220")]
	[FieldOffset(Offset = "0x38")]
	protected bool isOpen;

	[Token(Token = "0x4000221")]
	[FieldOffset(Offset = "0x39")]
	protected bool isVisible;

	[Token(Token = "0x4000222")]
	[FieldOffset(Offset = "0x3A")]
	protected bool autoCleanUp;

	[Token(Token = "0x4000223")]
	[FieldOffset(Offset = "0x40")]
	protected string name;

	[Token(Token = "0x4000224")]
	[FieldOffset(Offset = "0x48")]
	public int masterClientId;

	[Token(Token = "0x4000225")]
	[FieldOffset(Offset = "0x50")]
	protected string[] propertiesListedInLobby;

	[Token(Token = "0x17000067")]
	public Hashtable CustomProperties
	{
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000068")]
	public string Name
	{
		[Token(Token = "0x60001ED")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000069")]
	public int PlayerCount
	{
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x1BD3CB0", Offset = "0x1BD22B0", VA = "0x181BD3CB0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x1ADFEB0", Offset = "0x1ADE4B0", VA = "0x181ADFEB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public int MaxPlayers
	{
		[Token(Token = "0x60001F0")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006B")]
	public bool IsOpen
	{
		[Token(Token = "0x60001F1")]
		[Address(RVA = "0xF1D190", Offset = "0xF1B790", VA = "0x180F1D190")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006C")]
	public bool IsVisible
	{
		[Token(Token = "0x60001F2")]
		[Address(RVA = "0xF1D4C0", Offset = "0xF1BAC0", VA = "0x180F1D4C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x1D2A360", Offset = "0x1D28960", VA = "0x181D2A360")]
	protected internal RoomInfo(string roomName, Hashtable roomProperties)
	{
	}

	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x1D29860", Offset = "0x1D27E60", VA = "0x181D29860", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x1D298F0", Offset = "0x1D27EF0", VA = "0x181D298F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x1D2A0D0", Offset = "0x1D286D0", VA = "0x181D2A0D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x1D29DD0", Offset = "0x1D283D0", VA = "0x181D29DD0")]
	public string ToStringFull()
	{
		return null;
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x1D29920", Offset = "0x1D27F20", VA = "0x181D29920", Slot = "4")]
	protected internal virtual void InternalCacheProperties(Hashtable propertiesToCache)
	{
	}
}
