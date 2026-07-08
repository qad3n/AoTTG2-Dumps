using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000048")]
public class Room : RoomInfo
{
	[Token(Token = "0x4000218")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private bool isOffline;

	[Token(Token = "0x4000219")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Dictionary<int, Player> players;

	[Token(Token = "0x17000054")]
	public LoadBalancingClient LoadBalancingClient
	{
		[Token(Token = "0x60001BC")]
		[Address(RVA = "0x3BDEB10", Offset = "0x3BDEB10", VA = "0x3BDEB10")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0x3BDEB20", Offset = "0x3BDEB20", VA = "0x3BDEB20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000055")]
	public new string Name
	{
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x3BDEB30", Offset = "0x3BDEB30", VA = "0x3BDEB30")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x3BDEB40", Offset = "0x3BDEB40", VA = "0x3BDEB40")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000056")]
	public bool IsOffline
	{
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x3BDEB50", Offset = "0x3BDEB50", VA = "0x3BDEB50")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x3BDEB60", Offset = "0x3BDEB60", VA = "0x3BDEB60")]
		private set
		{
		}
	}

	[Token(Token = "0x17000057")]
	public new bool IsOpen
	{
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x3BDEB70", Offset = "0x3BDEB70", VA = "0x3BDEB70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x3BDEB80", Offset = "0x3BDEB80", VA = "0x3BDEB80")]
		set
		{
		}
	}

	[Token(Token = "0x17000058")]
	public new bool IsVisible
	{
		[Token(Token = "0x60001C4")]
		[Address(RVA = "0x3BDEC40", Offset = "0x3BDEC40", VA = "0x3BDEC40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001C5")]
		[Address(RVA = "0x3BDEC50", Offset = "0x3BDEC50", VA = "0x3BDEC50")]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public new int MaxPlayers
	{
		[Token(Token = "0x60001C6")]
		[Address(RVA = "0x3BDED10", Offset = "0x3BDED10", VA = "0x3BDED10")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001C7")]
		[Address(RVA = "0x3BDED20", Offset = "0x3BDED20", VA = "0x3BDED20")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public new int PlayerCount
	{
		[Token(Token = "0x60001C8")]
		[Address(RVA = "0x3BDEDE0", Offset = "0x3BDEDE0", VA = "0x3BDEDE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005B")]
	public Dictionary<int, Player> Players
	{
		[Token(Token = "0x60001C9")]
		[Address(RVA = "0x3BDEE30", Offset = "0x3BDEE30", VA = "0x3BDEE30")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001CA")]
		[Address(RVA = "0x3BDEE40", Offset = "0x3BDEE40", VA = "0x3BDEE40")]
		private set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	public string[] ExpectedUsers
	{
		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x3BDEE50", Offset = "0x3BDEE50", VA = "0x3BDEE50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005D")]
	public int PlayerTtl
	{
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x3BDEE60", Offset = "0x3BDEE60", VA = "0x3BDEE60")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x3BDEE70", Offset = "0x3BDEE70", VA = "0x3BDEE70")]
		set
		{
		}
	}

	[Token(Token = "0x1700005E")]
	public int EmptyRoomTtl
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x3BDEED0", Offset = "0x3BDEED0", VA = "0x3BDEED0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x3BDEEE0", Offset = "0x3BDEEE0", VA = "0x3BDEEE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005F")]
	public int MasterClientId
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x3BDEF40", Offset = "0x3BDEF40", VA = "0x3BDEF40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000060")]
	public string[] PropertiesListedInLobby
	{
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x3BDEF50", Offset = "0x3BDEF50", VA = "0x3BDEF50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x3BDEF60", Offset = "0x3BDEF60", VA = "0x3BDEF60")]
		private set
		{
		}
	}

	[Token(Token = "0x17000061")]
	public bool AutoCleanUp
	{
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x3BDEF70", Offset = "0x3BDEF70", VA = "0x3BDEF70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000062")]
	public bool BroadcastPropertiesChangeToAll
	{
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x3BDEF80", Offset = "0x3BDEF80", VA = "0x3BDEF80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0x3BDEF90", Offset = "0x3BDEF90", VA = "0x3BDEF90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public bool SuppressRoomEvents
	{
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x3BDEFA0", Offset = "0x3BDEFA0", VA = "0x3BDEFA0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x3BDEFB0", Offset = "0x3BDEFB0", VA = "0x3BDEFB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000064")]
	public bool SuppressPlayerInfo
	{
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x3BDEFC0", Offset = "0x3BDEFC0", VA = "0x3BDEFC0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x3BDEFD0", Offset = "0x3BDEFD0", VA = "0x3BDEFD0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000065")]
	public bool PublishUserId
	{
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x3BDEFE0", Offset = "0x3BDEFE0", VA = "0x3BDEFE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x3BDEFF0", Offset = "0x3BDEFF0", VA = "0x3BDEFF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000066")]
	public bool DeleteNullProperties
	{
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x3BDF000", Offset = "0x3BDF000", VA = "0x3BDF000")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x3BDF010", Offset = "0x3BDF010", VA = "0x3BDF010")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x3BDF020", Offset = "0x3BDF020", VA = "0x3BDF020")]
	public Room(string roomName, RoomOptions options, bool isOffline = false)
	{
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x3BDF1A0", Offset = "0x3BDF1A0", VA = "0x3BDF1A0")]
	internal void InternalCacheRoomFlags(int roomFlags)
	{
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x3BDF1E0", Offset = "0x3BDF1E0", VA = "0x3BDF1E0", Slot = "4")]
	protected internal override void InternalCacheProperties(Hashtable propertiesToCache)
	{
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x3BDF6F0", Offset = "0x3BDF6F0", VA = "0x3BDF6F0", Slot = "5")]
	public virtual bool SetCustomProperties(Hashtable propertiesToSet, [Optional] Hashtable expectedProperties, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x3BDF840", Offset = "0x3BDF840", VA = "0x3BDF840")]
	public bool SetPropertiesListedInLobby(string[] lobbyProps)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x3BDF8D0", Offset = "0x3BDF8D0", VA = "0x3BDF8D0", Slot = "6")]
	protected internal virtual void RemovePlayer(Player player)
	{
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x3BDF940", Offset = "0x3BDF940", VA = "0x3BDF940", Slot = "7")]
	protected internal virtual void RemovePlayer(int id)
	{
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x3BDF980", Offset = "0x3BDF980", VA = "0x3BDF980")]
	public bool SetMasterClient(Player masterClientPlayer)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x3BDFA90", Offset = "0x3BDFA90", VA = "0x3BDFA90", Slot = "8")]
	public virtual bool AddPlayer(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x3BDFB10", Offset = "0x3BDFB10", VA = "0x3BDFB10", Slot = "9")]
	public virtual Player StorePlayer(Player player)
	{
		return null;
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x3BDFB80", Offset = "0x3BDFB80", VA = "0x3BDFB80", Slot = "10")]
	public virtual Player GetPlayer(int id, bool findMaster = false)
	{
		return null;
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x3BDFC00", Offset = "0x3BDFC00", VA = "0x3BDFC00")]
	public bool ClearExpectedUsers()
	{
		return default(bool);
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x3BDFD50", Offset = "0x3BDFD50", VA = "0x3BDFD50")]
	public bool SetExpectedUsers(string[] newExpectedUsers)
	{
		return default(bool);
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x3BDFC60", Offset = "0x3BDFC60", VA = "0x3BDFC60")]
	private bool SetExpectedUsers(string[] newExpectedUsers, string[] oldExpectedUsers)
	{
		return default(bool);
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x3BDFDD0", Offset = "0x3BDFDD0", VA = "0x3BDFDD0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x3BE0080", Offset = "0x3BE0080", VA = "0x3BE0080")]
	public new string ToStringFull()
	{
		return null;
	}
}
