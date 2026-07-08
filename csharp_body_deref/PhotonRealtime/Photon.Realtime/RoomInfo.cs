using System.Runtime.CompilerServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000049")]
public class RoomInfo
{
	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0x10")]
	public bool RemovedFromList;

	[Token(Token = "0x4000220")]
	[FieldOffset(Offset = "0x18")]
	private Hashtable customProperties;

	[Token(Token = "0x4000221")]
	[FieldOffset(Offset = "0x20")]
	protected int maxPlayers;

	[Token(Token = "0x4000222")]
	[FieldOffset(Offset = "0x24")]
	protected int emptyRoomTtl;

	[Token(Token = "0x4000223")]
	[FieldOffset(Offset = "0x28")]
	protected int playerTtl;

	[Token(Token = "0x4000224")]
	[FieldOffset(Offset = "0x30")]
	protected string[] expectedUsers;

	[Token(Token = "0x4000225")]
	[FieldOffset(Offset = "0x38")]
	protected bool isOpen;

	[Token(Token = "0x4000226")]
	[FieldOffset(Offset = "0x39")]
	protected bool isVisible;

	[Token(Token = "0x4000227")]
	[FieldOffset(Offset = "0x3A")]
	protected bool autoCleanUp;

	[Token(Token = "0x4000228")]
	[FieldOffset(Offset = "0x40")]
	protected string name;

	[Token(Token = "0x4000229")]
	[FieldOffset(Offset = "0x48")]
	public int masterClientId;

	[Token(Token = "0x400022A")]
	[FieldOffset(Offset = "0x50")]
	protected string[] propertiesListedInLobby;

	[Token(Token = "0x17000067")]
	public Hashtable CustomProperties
	{
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x3BE03A0", Offset = "0x3BE03A0", VA = "0x3BE03A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000068")]
	public string Name
	{
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x3BE03B0", Offset = "0x3BE03B0", VA = "0x3BE03B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000069")]
	public int PlayerCount
	{
		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x3BE03C0", Offset = "0x3BE03C0", VA = "0x3BE03C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x3BE03D0", Offset = "0x3BE03D0", VA = "0x3BE03D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public int MaxPlayers
	{
		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x3BE03E0", Offset = "0x3BE03E0", VA = "0x3BE03E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700006B")]
	public bool IsOpen
	{
		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x3BE03F0", Offset = "0x3BE03F0", VA = "0x3BE03F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700006C")]
	public bool IsVisible
	{
		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x3BE0400", Offset = "0x3BE0400", VA = "0x3BE0400")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x3BDF0F0", Offset = "0x3BDF0F0", VA = "0x3BDF0F0")]
	protected internal RoomInfo(string roomName, Hashtable roomProperties)
	{
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x3BE0410", Offset = "0x3BE0410", VA = "0x3BE0410", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x3BE04A0", Offset = "0x3BE04A0", VA = "0x3BE04A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x3BE04D0", Offset = "0x3BE04D0", VA = "0x3BE04D0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x3BE0730", Offset = "0x3BE0730", VA = "0x3BE0730")]
	public string ToStringFull()
	{
		return null;
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x3BDF240", Offset = "0x3BDF240", VA = "0x3BDF240", Slot = "4")]
	protected internal virtual void InternalCacheProperties(Hashtable propertiesToCache)
	{
	}
}
