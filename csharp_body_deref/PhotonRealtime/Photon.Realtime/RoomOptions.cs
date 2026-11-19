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
		[Address(RVA = "0x56BB540", Offset = "0x56BA540", VA = "0x56BB540")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000124")]
		[Address(RVA = "0x56BB550", Offset = "0x56BA550", VA = "0x56BB550")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public bool IsOpen
	{
		[Token(Token = "0x6000125")]
		[Address(RVA = "0x56BB560", Offset = "0x56BA560", VA = "0x56BB560")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000126")]
		[Address(RVA = "0x56BB570", Offset = "0x56BA570", VA = "0x56BB570")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public bool CleanupCacheOnLeave
	{
		[Token(Token = "0x6000127")]
		[Address(RVA = "0x56BB580", Offset = "0x56BA580", VA = "0x56BB580")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000128")]
		[Address(RVA = "0x56BB590", Offset = "0x56BA590", VA = "0x56BB590")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public bool SuppressRoomEvents
	{
		[Token(Token = "0x6000129")]
		[Address(RVA = "0x56BB5A0", Offset = "0x56BA5A0", VA = "0x56BB5A0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600012A")]
		[Address(RVA = "0x56BB5B0", Offset = "0x56BA5B0", VA = "0x56BB5B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	public bool SuppressPlayerInfo
	{
		[Token(Token = "0x600012B")]
		[Address(RVA = "0x56BB5C0", Offset = "0x56BA5C0", VA = "0x56BB5C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600012C")]
		[Address(RVA = "0x56BB5D0", Offset = "0x56BA5D0", VA = "0x56BB5D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	public bool PublishUserId
	{
		[Token(Token = "0x600012D")]
		[Address(RVA = "0x56BB5E0", Offset = "0x56BA5E0", VA = "0x56BB5E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600012E")]
		[Address(RVA = "0x56BB5F0", Offset = "0x56BA5F0", VA = "0x56BB5F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public bool DeleteNullProperties
	{
		[Token(Token = "0x600012F")]
		[Address(RVA = "0x56BB600", Offset = "0x56BA600", VA = "0x56BB600")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000130")]
		[Address(RVA = "0x56BB610", Offset = "0x56BA610", VA = "0x56BB610")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public bool BroadcastPropsChangeToAll
	{
		[Token(Token = "0x6000131")]
		[Address(RVA = "0x56BB620", Offset = "0x56BA620", VA = "0x56BB620")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000132")]
		[Address(RVA = "0x56BB630", Offset = "0x56BA630", VA = "0x56BB630")]
		set
		{
		}
	}

	[Token(Token = "0x6000133")]
	[Address(RVA = "0x56B8C70", Offset = "0x56B7C70", VA = "0x56B8C70")]
	public RoomOptions()
	{
	}
}
