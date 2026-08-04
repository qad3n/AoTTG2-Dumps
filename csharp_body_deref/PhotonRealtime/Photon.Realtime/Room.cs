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
		[Address(RVA = "0x3ED4460", Offset = "0x3ED4460", VA = "0x3ED4460")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0x3ED4470", Offset = "0x3ED4470", VA = "0x3ED4470")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000055")]
	public new string Name
	{
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x3ED4480", Offset = "0x3ED4480", VA = "0x3ED4480")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x3ED4490", Offset = "0x3ED4490", VA = "0x3ED4490")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000056")]
	public bool IsOffline
	{
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x3ED44A0", Offset = "0x3ED44A0", VA = "0x3ED44A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x3ED44B0", Offset = "0x3ED44B0", VA = "0x3ED44B0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000057")]
	public new bool IsOpen
	{
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x3ED44C0", Offset = "0x3ED44C0", VA = "0x3ED44C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x3ED44D0", Offset = "0x3ED44D0", VA = "0x3ED44D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000058")]
	public new bool IsVisible
	{
		[Token(Token = "0x60001C4")]
		[Address(RVA = "0x3ED4590", Offset = "0x3ED4590", VA = "0x3ED4590")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001C5")]
		[Address(RVA = "0x3ED45A0", Offset = "0x3ED45A0", VA = "0x3ED45A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public new int MaxPlayers
	{
		[Token(Token = "0x60001C6")]
		[Address(RVA = "0x3ED4660", Offset = "0x3ED4660", VA = "0x3ED4660")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001C7")]
		[Address(RVA = "0x3ED4670", Offset = "0x3ED4670", VA = "0x3ED4670")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public new int PlayerCount
	{
		[Token(Token = "0x60001C8")]
		[Address(RVA = "0x3ED4730", Offset = "0x3ED4730", VA = "0x3ED4730")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005B")]
	public Dictionary<int, Player> Players
	{
		[Token(Token = "0x60001C9")]
		[Address(RVA = "0x3ED4780", Offset = "0x3ED4780", VA = "0x3ED4780")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001CA")]
		[Address(RVA = "0x3ED4790", Offset = "0x3ED4790", VA = "0x3ED4790")]
		private set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	public string[] ExpectedUsers
	{
		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x3ED47A0", Offset = "0x3ED47A0", VA = "0x3ED47A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005D")]
	public int PlayerTtl
	{
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0x3ED47B0", Offset = "0x3ED47B0", VA = "0x3ED47B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x3ED47C0", Offset = "0x3ED47C0", VA = "0x3ED47C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005E")]
	public int EmptyRoomTtl
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x3ED4820", Offset = "0x3ED4820", VA = "0x3ED4820")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x3ED4830", Offset = "0x3ED4830", VA = "0x3ED4830")]
		set
		{
		}
	}

	[Token(Token = "0x1700005F")]
	public int MasterClientId
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x3ED4890", Offset = "0x3ED4890", VA = "0x3ED4890")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000060")]
	public string[] PropertiesListedInLobby
	{
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x3ED48A0", Offset = "0x3ED48A0", VA = "0x3ED48A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x3ED48B0", Offset = "0x3ED48B0", VA = "0x3ED48B0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000061")]
	public bool AutoCleanUp
	{
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x3ED48C0", Offset = "0x3ED48C0", VA = "0x3ED48C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000062")]
	public bool BroadcastPropertiesChangeToAll
	{
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x3ED48D0", Offset = "0x3ED48D0", VA = "0x3ED48D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0x3ED48E0", Offset = "0x3ED48E0", VA = "0x3ED48E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public bool SuppressRoomEvents
	{
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x3ED48F0", Offset = "0x3ED48F0", VA = "0x3ED48F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x3ED4900", Offset = "0x3ED4900", VA = "0x3ED4900")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000064")]
	public bool SuppressPlayerInfo
	{
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x3ED4910", Offset = "0x3ED4910", VA = "0x3ED4910")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x3ED4920", Offset = "0x3ED4920", VA = "0x3ED4920")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000065")]
	public bool PublishUserId
	{
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x3ED4930", Offset = "0x3ED4930", VA = "0x3ED4930")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x3ED4940", Offset = "0x3ED4940", VA = "0x3ED4940")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000066")]
	public bool DeleteNullProperties
	{
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x3ED4950", Offset = "0x3ED4950", VA = "0x3ED4950")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x3ED4960", Offset = "0x3ED4960", VA = "0x3ED4960")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x3ED4970", Offset = "0x3ED4970", VA = "0x3ED4970")]
	public Room(string roomName, RoomOptions options, bool isOffline = false)
	{
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x3ED4AF0", Offset = "0x3ED4AF0", VA = "0x3ED4AF0")]
	internal void InternalCacheRoomFlags(int roomFlags)
	{
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x3ED4B30", Offset = "0x3ED4B30", VA = "0x3ED4B30", Slot = "4")]
	protected internal override void InternalCacheProperties(Hashtable propertiesToCache)
	{
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x3ED5040", Offset = "0x3ED5040", VA = "0x3ED5040", Slot = "5")]
	public virtual bool SetCustomProperties(Hashtable propertiesToSet, [Optional] Hashtable expectedProperties, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x3ED5190", Offset = "0x3ED5190", VA = "0x3ED5190")]
	public bool SetPropertiesListedInLobby(string[] lobbyProps)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x3ED5220", Offset = "0x3ED5220", VA = "0x3ED5220", Slot = "6")]
	protected internal virtual void RemovePlayer(Player player)
	{
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x3ED5290", Offset = "0x3ED5290", VA = "0x3ED5290", Slot = "7")]
	protected internal virtual void RemovePlayer(int id)
	{
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x3ED52D0", Offset = "0x3ED52D0", VA = "0x3ED52D0")]
	public bool SetMasterClient(Player masterClientPlayer)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x3ED53E0", Offset = "0x3ED53E0", VA = "0x3ED53E0", Slot = "8")]
	public virtual bool AddPlayer(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x3ED5460", Offset = "0x3ED5460", VA = "0x3ED5460", Slot = "9")]
	public virtual Player StorePlayer(Player player)
	{
		return null;
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x3ED54D0", Offset = "0x3ED54D0", VA = "0x3ED54D0", Slot = "10")]
	public virtual Player GetPlayer(int id, bool findMaster = false)
	{
		return null;
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x3ED5550", Offset = "0x3ED5550", VA = "0x3ED5550")]
	public bool ClearExpectedUsers()
	{
		return default(bool);
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x3ED56A0", Offset = "0x3ED56A0", VA = "0x3ED56A0")]
	public bool SetExpectedUsers(string[] newExpectedUsers)
	{
		return default(bool);
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x3ED55B0", Offset = "0x3ED55B0", VA = "0x3ED55B0")]
	private bool SetExpectedUsers(string[] newExpectedUsers, string[] oldExpectedUsers)
	{
		return default(bool);
	}

	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x3ED5720", Offset = "0x3ED5720", VA = "0x3ED5720", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x3ED59D0", Offset = "0x3ED59D0", VA = "0x3ED59D0")]
	public new string ToStringFull()
	{
		return null;
	}
}
