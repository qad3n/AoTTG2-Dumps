// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.Room
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/Room.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000046")]
public class Room : RoomInfo
{
	[Token(Token = "0x4000213")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private bool isOffline;

	[Token(Token = "0x4000214")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Dictionary<int, Player> players;

	[Token(Token = "0x17000054")]
	public LoadBalancingClient LoadBalancingClient
	{
		[Token(Token = "0x60001BA")]
		[Address(RVA = "0x56C0770", Offset = "0x56BF770", VA = "0x56C0770")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BB")]
		[Address(RVA = "0x56C0780", Offset = "0x56BF780", VA = "0x56C0780")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000055")]
	public new string Name
	{
		[Token(Token = "0x60001BC")]
		[Address(RVA = "0x56C0790", Offset = "0x56BF790", VA = "0x56C0790")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0x56C07A0", Offset = "0x56BF7A0", VA = "0x56C07A0")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000056")]
	public bool IsOffline
	{
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x56C07B0", Offset = "0x56BF7B0", VA = "0x56C07B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x56C07C0", Offset = "0x56BF7C0", VA = "0x56C07C0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000057")]
	public new bool IsOpen
	{
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x56C07D0", Offset = "0x56BF7D0", VA = "0x56C07D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x56C07E0", Offset = "0x56BF7E0", VA = "0x56C07E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000058")]
	public new bool IsVisible
	{
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x56C0890", Offset = "0x56BF890", VA = "0x56C0890")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x56C08A0", Offset = "0x56BF8A0", VA = "0x56C08A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public new int MaxPlayers
	{
		[Token(Token = "0x60001C4")]
		[Address(RVA = "0x56C0950", Offset = "0x56BF950", VA = "0x56C0950")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001C5")]
		[Address(RVA = "0x56C0960", Offset = "0x56BF960", VA = "0x56C0960")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public new int PlayerCount
	{
		[Token(Token = "0x60001C6")]
		[Address(RVA = "0x56C0A20", Offset = "0x56BFA20", VA = "0x56C0A20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005B")]
	public Dictionary<int, Player> Players
	{
		[Token(Token = "0x60001C7")]
		[Address(RVA = "0x56C0A70", Offset = "0x56BFA70", VA = "0x56C0A70")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C8")]
		[Address(RVA = "0x56C0A80", Offset = "0x56BFA80", VA = "0x56C0A80")]
		private set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	public string[] ExpectedUsers
	{
		[Token(Token = "0x60001C9")]
		[Address(RVA = "0x56C0A90", Offset = "0x56BFA90", VA = "0x56C0A90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005D")]
	public int PlayerTtl
	{
		[Token(Token = "0x60001CA")]
		[Address(RVA = "0x56C0AA0", Offset = "0x56BFAA0", VA = "0x56C0AA0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x56C0AB0", Offset = "0x56BFAB0", VA = "0x56C0AB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005E")]
	public int EmptyRoomTtl
	{
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x56C0B10", Offset = "0x56BFB10", VA = "0x56C0B10")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x56C0B20", Offset = "0x56BFB20", VA = "0x56C0B20")]
		set
		{
		}
	}

	[Token(Token = "0x1700005F")]
	public int MasterClientId
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x56C0B80", Offset = "0x56BFB80", VA = "0x56C0B80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000060")]
	public string[] PropertiesListedInLobby
	{
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x56C0B90", Offset = "0x56BFB90", VA = "0x56C0B90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x56C0BA0", Offset = "0x56BFBA0", VA = "0x56C0BA0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000061")]
	public bool AutoCleanUp
	{
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x56C0BB0", Offset = "0x56BFBB0", VA = "0x56C0BB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000062")]
	public bool BroadcastPropertiesChangeToAll
	{
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x56C0BC0", Offset = "0x56BFBC0", VA = "0x56C0BC0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x56C0BD0", Offset = "0x56BFBD0", VA = "0x56C0BD0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public bool SuppressRoomEvents
	{
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x56C0BE0", Offset = "0x56BFBE0", VA = "0x56C0BE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0x56C0BF0", Offset = "0x56BFBF0", VA = "0x56C0BF0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000064")]
	public bool SuppressPlayerInfo
	{
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x56C0C00", Offset = "0x56BFC00", VA = "0x56C0C00")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x56C0C10", Offset = "0x56BFC10", VA = "0x56C0C10")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000065")]
	public bool PublishUserId
	{
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x56C0C20", Offset = "0x56BFC20", VA = "0x56C0C20")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x56C0C30", Offset = "0x56BFC30", VA = "0x56C0C30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000066")]
	public bool DeleteNullProperties
	{
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x56C0C40", Offset = "0x56BFC40", VA = "0x56C0C40")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x56C0C50", Offset = "0x56BFC50", VA = "0x56C0C50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x56C0C60", Offset = "0x56BFC60", VA = "0x56C0C60")]
	public Room(string roomName, RoomOptions options, bool isOffline = false)
	{
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x56C0DE0", Offset = "0x56BFDE0", VA = "0x56C0DE0")]
	internal void InternalCacheRoomFlags(int roomFlags)
	{
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x56C0E20", Offset = "0x56BFE20", VA = "0x56C0E20", Slot = "4")]
	protected internal override void InternalCacheProperties(Hashtable propertiesToCache)
	{
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x56C1340", Offset = "0x56C0340", VA = "0x56C1340", Slot = "5")]
	public virtual bool SetCustomProperties(Hashtable propertiesToSet, [Optional] Hashtable expectedProperties, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x56C1490", Offset = "0x56C0490", VA = "0x56C1490")]
	public bool SetPropertiesListedInLobby(string[] lobbyProps)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x56C1520", Offset = "0x56C0520", VA = "0x56C1520", Slot = "6")]
	protected internal virtual void RemovePlayer(Player player)
	{
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x56C1590", Offset = "0x56C0590", VA = "0x56C1590", Slot = "7")]
	protected internal virtual void RemovePlayer(int id)
	{
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x56C15D0", Offset = "0x56C05D0", VA = "0x56C15D0")]
	public bool SetMasterClient(Player masterClientPlayer)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x56C16E0", Offset = "0x56C06E0", VA = "0x56C16E0", Slot = "8")]
	public virtual bool AddPlayer(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x56C1760", Offset = "0x56C0760", VA = "0x56C1760", Slot = "9")]
	public virtual Player StorePlayer(Player player)
	{
		return null;
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x56C17D0", Offset = "0x56C07D0", VA = "0x56C17D0", Slot = "10")]
	public virtual Player GetPlayer(int id, bool findMaster = false)
	{
		return null;
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x56C1850", Offset = "0x56C0850", VA = "0x56C1850")]
	public bool ClearExpectedUsers()
	{
		return default(bool);
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x56C19A0", Offset = "0x56C09A0", VA = "0x56C19A0")]
	public bool SetExpectedUsers(string[] newExpectedUsers)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x56C18B0", Offset = "0x56C08B0", VA = "0x56C18B0")]
	private bool SetExpectedUsers(string[] newExpectedUsers, string[] oldExpectedUsers)
	{
		return default(bool);
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x56C1A20", Offset = "0x56C0A20", VA = "0x56C1A20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x56C1CD0", Offset = "0x56C0CD0", VA = "0x56C1CD0")]
	public new string ToStringFull()
	{
		return null;
	}
}
