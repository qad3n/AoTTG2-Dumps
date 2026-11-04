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
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BB")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000055")]
	public new string Name
	{
		[Token(Token = "0x60001BC")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000056")]
	public bool IsOffline
	{
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x12BF1A0", Offset = "0x12BD7A0", VA = "0x1812BF1A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x12BF400", Offset = "0x12BDA00", VA = "0x1812BF400")]
		private set
		{
		}
	}

	[Token(Token = "0x17000057")]
	public new bool IsOpen
	{
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0xF1D190", Offset = "0xF1B790", VA = "0x180F1D190")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x1D2B490", Offset = "0x1D29A90", VA = "0x181D2B490")]
		set
		{
		}
	}

	[Token(Token = "0x17000058")]
	public new bool IsVisible
	{
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0xF1D4C0", Offset = "0xF1BAC0", VA = "0x180F1D4C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x1D2B560", Offset = "0x1D29B60", VA = "0x181D2B560")]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	public new int MaxPlayers
	{
		[Token(Token = "0x60001C4")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001C5")]
		[Address(RVA = "0x1D2B630", Offset = "0x1D29C30", VA = "0x181D2B630")]
		set
		{
		}
	}

	[Token(Token = "0x1700005A")]
	public new int PlayerCount
	{
		[Token(Token = "0x60001C6")]
		[Address(RVA = "0x1D2B380", Offset = "0x1D29980", VA = "0x181D2B380")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700005B")]
	public Dictionary<int, Player> Players
	{
		[Token(Token = "0x60001C7")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C8")]
		[Address(RVA = "0xB48780", Offset = "0xB46D80", VA = "0x180B48780")]
		private set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	public string[] ExpectedUsers
	{
		[Token(Token = "0x60001C9")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005D")]
	public int PlayerTtl
	{
		[Token(Token = "0x60001CA")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001CB")]
		[Address(RVA = "0x1D2B700", Offset = "0x1D29D00", VA = "0x181D2B700")]
		set
		{
		}
	}

	[Token(Token = "0x1700005E")]
	public int EmptyRoomTtl
	{
		[Token(Token = "0x60001CC")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x1D2B420", Offset = "0x1D29A20", VA = "0x181D2B420")]
		set
		{
		}
	}

	[Token(Token = "0x1700005F")]
	public int MasterClientId
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000060")]
	public string[] PropertiesListedInLobby
	{
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x5853D0", Offset = "0x5839D0", VA = "0x1805853D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0xF1D7F0", Offset = "0xF1BDF0", VA = "0x180F1D7F0")]
		private set
		{
		}
	}

	[Token(Token = "0x17000061")]
	public bool AutoCleanUp
	{
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x19EDC10", Offset = "0x19EC210", VA = "0x1819EDC10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000062")]
	public bool BroadcastPropertiesChangeToAll
	{
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x1D2B360", Offset = "0x1D29960", VA = "0x181D2B360")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x1D2B400", Offset = "0x1D29A00", VA = "0x181D2B400")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000063")]
	public bool SuppressRoomEvents
	{
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x1D2B3F0", Offset = "0x1D299F0", VA = "0x181D2B3F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0x1D2B790", Offset = "0x1D29D90", VA = "0x181D2B790")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000064")]
	public bool SuppressPlayerInfo
	{
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x1D2B3E0", Offset = "0x1D299E0", VA = "0x181D2B3E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x1D2B780", Offset = "0x1D29D80", VA = "0x181D2B780")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000065")]
	public bool PublishUserId
	{
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x1D2B3D0", Offset = "0x1D299D0", VA = "0x181D2B3D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x1D2B770", Offset = "0x1D29D70", VA = "0x181D2B770")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000066")]
	public bool DeleteNullProperties
	{
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x1D2B370", Offset = "0x1D29970", VA = "0x181D2B370")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x1D2B410", Offset = "0x1D29A10", VA = "0x181D2B410")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x1D2B220", Offset = "0x1D29820", VA = "0x181D2B220")]
	public Room(string roomName, RoomOptions options, bool isOffline = false)
	{
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x1D2A5F0", Offset = "0x1D28BF0", VA = "0x181D2A5F0")]
	internal void InternalCacheRoomFlags(int roomFlags)
	{
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x1D2A580", Offset = "0x1D28B80", VA = "0x181D2A580", Slot = "4")]
	protected internal override void InternalCacheProperties(Hashtable propertiesToCache)
	{
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x1D2A6E0", Offset = "0x1D28CE0", VA = "0x181D2A6E0", Slot = "5")]
	public virtual bool SetCustomProperties(Hashtable propertiesToSet, [Optional] Hashtable expectedProperties, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x1D2AB00", Offset = "0x1D29100", VA = "0x181D2AB00")]
	public bool SetPropertiesListedInLobby(string[] lobbyProps)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x1D2A670", Offset = "0x1D28C70", VA = "0x181D2A670", Slot = "6")]
	protected internal virtual void RemovePlayer(Player player)
	{
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x1D2A630", Offset = "0x1D28C30", VA = "0x181D2A630", Slot = "7")]
	protected internal virtual void RemovePlayer(int id)
	{
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x1D2A9E0", Offset = "0x1D28FE0", VA = "0x181D2A9E0")]
	public bool SetMasterClient(Player masterClientPlayer)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x1D2A400", Offset = "0x1D28A00", VA = "0x181D2A400", Slot = "8")]
	public virtual bool AddPlayer(Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x1D2ABB0", Offset = "0x1D291B0", VA = "0x181D2ABB0", Slot = "9")]
	public virtual Player StorePlayer(Player player)
	{
		return null;
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x1D2A500", Offset = "0x1D28B00", VA = "0x181D2A500", Slot = "10")]
	public virtual Player GetPlayer(int id, bool findMaster = false)
	{
		return null;
	}

	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x1D2A490", Offset = "0x1D28A90", VA = "0x181D2A490")]
	public bool ClearExpectedUsers()
	{
		return default(bool);
	}

	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x1D2A840", Offset = "0x1D28E40", VA = "0x181D2A840")]
	public bool SetExpectedUsers(string[] newExpectedUsers)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x1D2A8D0", Offset = "0x1D28ED0", VA = "0x181D2A8D0")]
	private bool SetExpectedUsers(string[] newExpectedUsers, string[] oldExpectedUsers)
	{
		return default(bool);
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x1D2AF60", Offset = "0x1D29560", VA = "0x181D2AF60", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x1D2AC20", Offset = "0x1D29220", VA = "0x181D2AC20")]
	public new string ToStringFull()
	{
		return null;
	}
}
