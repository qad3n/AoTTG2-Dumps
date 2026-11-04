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

[Token(Token = "0x2000032")]
public class RoomOptions
{
	[Token(Token = "0x400019E")]
	[FieldOffset(Offset = "0x10")]
	private bool isVisible;

	[Token(Token = "0x400019F")]
	[FieldOffset(Offset = "0x11")]
	private bool isOpen;

	[Token(Token = "0x40001A0")]
	[FieldOffset(Offset = "0x14")]
	public int MaxPlayers;

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0x18")]
	public int PlayerTtl;

	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0x1C")]
	public int EmptyRoomTtl;

	[Token(Token = "0x40001A3")]
	[FieldOffset(Offset = "0x20")]
	private bool cleanupCacheOnLeave;

	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x28")]
	public Hashtable CustomRoomProperties;

	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x30")]
	public string[] CustomRoomPropertiesForLobby;

	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0x38")]
	public string[] Plugins;

	[Token(Token = "0x40001AB")]
	[FieldOffset(Offset = "0x44")]
	private bool broadcastPropsChangeToAll;

	[Token(Token = "0x1700002E")]
	public bool IsVisible
	{
		[Token(Token = "0x6000123")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public bool IsOpen
	{
		[Token(Token = "0x6000125")]
		[Address(RVA = "0xE5A330", Offset = "0xE58930", VA = "0x180E5A330")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x1AE80B0", Offset = "0x1AE66B0", VA = "0x181AE80B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public bool CleanupCacheOnLeave
	{
		[Token(Token = "0x6000127")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000128")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public bool SuppressRoomEvents
	{
		[Token(Token = "0x6000129")]
		[Address(RVA = "0xA374E0", Offset = "0xA35AE0", VA = "0x180A374E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600012A")]
		[Address(RVA = "0xA374F0", Offset = "0xA35AF0", VA = "0x180A374F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	public bool SuppressPlayerInfo
	{
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x1AD8270", Offset = "0x1AD6870", VA = "0x181AD8270")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600012C")]
		[Address(RVA = "0x1D263A0", Offset = "0x1D249A0", VA = "0x181D263A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	public bool PublishUserId
	{
		[Token(Token = "0x600012D")]
		[Address(RVA = "0x1D26370", Offset = "0x1D24970", VA = "0x181D26370")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600012E")]
		[Address(RVA = "0x1D26390", Offset = "0x1D24990", VA = "0x181D26390")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public bool DeleteNullProperties
	{
		[Token(Token = "0x600012F")]
		[Address(RVA = "0x1AD8260", Offset = "0x1AD6860", VA = "0x181AD8260")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x1D26380", Offset = "0x1D24980", VA = "0x181D26380")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public bool BroadcastPropsChangeToAll
	{
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x1CC5A60", Offset = "0x1CC4060", VA = "0x181CC5A60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000132")]
		[Address(RVA = "0x1CC5C30", Offset = "0x1CC4230", VA = "0x181CC5C30")]
		set
		{
		}
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x1D26310", Offset = "0x1D24910", VA = "0x181D26310")]
	public RoomOptions()
	{
	}
}
