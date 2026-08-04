// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.RoomOptions
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/LoadbalancingPeer.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x2000034")]
public class RoomOptions
{
	[Token(Token = "0x40001A3")]
	[FieldOffset(Offset = "0x10")]
	private bool isVisible;

	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x11")]
	private bool isOpen;

	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x14")]
	public int MaxPlayers;

	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0x18")]
	public int PlayerTtl;

	[Token(Token = "0x40001A7")]
	[FieldOffset(Offset = "0x1C")]
	public int EmptyRoomTtl;

	[Token(Token = "0x40001A8")]
	[FieldOffset(Offset = "0x20")]
	private bool cleanupCacheOnLeave;

	[Token(Token = "0x40001A9")]
	[FieldOffset(Offset = "0x28")]
	public Hashtable CustomRoomProperties;

	[Token(Token = "0x40001AA")]
	[FieldOffset(Offset = "0x30")]
	public string[] CustomRoomPropertiesForLobby;

	[Token(Token = "0x40001AB")]
	[FieldOffset(Offset = "0x38")]
	public string[] Plugins;

	[Token(Token = "0x40001B0")]
	[FieldOffset(Offset = "0x44")]
	private bool broadcastPropsChangeToAll;

	[Token(Token = "0x1700002E")]
	public bool IsVisible
	{
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x3ECEF00", Offset = "0x3ECEF00", VA = "0x3ECEF00")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x3ECEF10", Offset = "0x3ECEF10", VA = "0x3ECEF10")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public bool IsOpen
	{
		[Token(Token = "0x6000127")]
		[Address(RVA = "0x3ECEF20", Offset = "0x3ECEF20", VA = "0x3ECEF20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000128")]
		[Address(RVA = "0x3ECEF30", Offset = "0x3ECEF30", VA = "0x3ECEF30")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public bool CleanupCacheOnLeave
	{
		[Token(Token = "0x6000129")]
		[Address(RVA = "0x3ECEF40", Offset = "0x3ECEF40", VA = "0x3ECEF40")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600012A")]
		[Address(RVA = "0x3ECEF50", Offset = "0x3ECEF50", VA = "0x3ECEF50")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public bool SuppressRoomEvents
	{
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x3ECEF60", Offset = "0x3ECEF60", VA = "0x3ECEF60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600012C")]
		[Address(RVA = "0x3ECEF70", Offset = "0x3ECEF70", VA = "0x3ECEF70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	public bool SuppressPlayerInfo
	{
		[Token(Token = "0x600012D")]
		[Address(RVA = "0x3ECEF80", Offset = "0x3ECEF80", VA = "0x3ECEF80")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600012E")]
		[Address(RVA = "0x3ECEF90", Offset = "0x3ECEF90", VA = "0x3ECEF90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	public bool PublishUserId
	{
		[Token(Token = "0x600012F")]
		[Address(RVA = "0x3ECEFA0", Offset = "0x3ECEFA0", VA = "0x3ECEFA0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x3ECEFB0", Offset = "0x3ECEFB0", VA = "0x3ECEFB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public bool DeleteNullProperties
	{
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x3ECEFC0", Offset = "0x3ECEFC0", VA = "0x3ECEFC0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000132")]
		[Address(RVA = "0x3ECEFD0", Offset = "0x3ECEFD0", VA = "0x3ECEFD0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public bool BroadcastPropsChangeToAll
	{
		[Token(Token = "0x6000133")]
		[Address(RVA = "0x3ECEFE0", Offset = "0x3ECEFE0", VA = "0x3ECEFE0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000134")]
		[Address(RVA = "0x3ECEFF0", Offset = "0x3ECEFF0", VA = "0x3ECEFF0")]
		set
		{
		}
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x3ECC600", Offset = "0x3ECC600", VA = "0x3ECC600")]
	public RoomOptions()
	{
	}
}
