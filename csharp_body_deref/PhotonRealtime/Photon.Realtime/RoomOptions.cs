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
		[Address(RVA = "0x3BD95B0", Offset = "0x3BD95B0", VA = "0x3BD95B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x3BD95C0", Offset = "0x3BD95C0", VA = "0x3BD95C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public bool IsOpen
	{
		[Token(Token = "0x6000127")]
		[Address(RVA = "0x3BD95D0", Offset = "0x3BD95D0", VA = "0x3BD95D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000128")]
		[Address(RVA = "0x3BD95E0", Offset = "0x3BD95E0", VA = "0x3BD95E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public bool CleanupCacheOnLeave
	{
		[Token(Token = "0x6000129")]
		[Address(RVA = "0x3BD95F0", Offset = "0x3BD95F0", VA = "0x3BD95F0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600012A")]
		[Address(RVA = "0x3BD9600", Offset = "0x3BD9600", VA = "0x3BD9600")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public bool SuppressRoomEvents
	{
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x3BD9610", Offset = "0x3BD9610", VA = "0x3BD9610")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600012C")]
		[Address(RVA = "0x3BD9620", Offset = "0x3BD9620", VA = "0x3BD9620")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	public bool SuppressPlayerInfo
	{
		[Token(Token = "0x600012D")]
		[Address(RVA = "0x3BD9630", Offset = "0x3BD9630", VA = "0x3BD9630")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600012E")]
		[Address(RVA = "0x3BD9640", Offset = "0x3BD9640", VA = "0x3BD9640")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	public bool PublishUserId
	{
		[Token(Token = "0x600012F")]
		[Address(RVA = "0x3BD9650", Offset = "0x3BD9650", VA = "0x3BD9650")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x3BD9660", Offset = "0x3BD9660", VA = "0x3BD9660")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public bool DeleteNullProperties
	{
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x3BD9670", Offset = "0x3BD9670", VA = "0x3BD9670")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000132")]
		[Address(RVA = "0x3BD9680", Offset = "0x3BD9680", VA = "0x3BD9680")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public bool BroadcastPropsChangeToAll
	{
		[Token(Token = "0x6000133")]
		[Address(RVA = "0x3BD9690", Offset = "0x3BD9690", VA = "0x3BD9690")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000134")]
		[Address(RVA = "0x3BD96A0", Offset = "0x3BD96A0", VA = "0x3BD96A0")]
		set
		{
		}
	}

	[Token(Token = "0x6000135")]
	[Address(RVA = "0x3BD6CB0", Offset = "0x3BD6CB0", VA = "0x3BD6CB0")]
	public RoomOptions()
	{
	}
}
