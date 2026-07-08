using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200003E")]
public class Player
{
	[Token(Token = "0x40001E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int actorNumber;

	[Token(Token = "0x40001E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	public readonly bool IsLocal;

	[Token(Token = "0x40001E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string nickName;

	[Token(Token = "0x40001E9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public object TagObject;

	[Token(Token = "0x1700003C")]
	protected internal Room RoomReference
	{
		[Token(Token = "0x600015B")]
		[Address(RVA = "0x3BDAA00", Offset = "0x3BDAA00", VA = "0x3BDAA00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x3BDAA10", Offset = "0x3BDAA10", VA = "0x3BDAA10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700003D")]
	public int ActorNumber
	{
		[Token(Token = "0x600015D")]
		[Address(RVA = "0x3BDAA20", Offset = "0x3BDAA20", VA = "0x3BDAA20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003E")]
	public bool HasRejoined
	{
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x3BDAA30", Offset = "0x3BDAA30", VA = "0x3BDAA30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x3BDAA40", Offset = "0x3BDAA40", VA = "0x3BDAA40")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	public string NickName
	{
		[Token(Token = "0x6000160")]
		[Address(RVA = "0x3BDAA50", Offset = "0x3BDAA50", VA = "0x3BDAA50")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x3BC9140", Offset = "0x3BC9140", VA = "0x3BC9140")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public string UserId
	{
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x3BDAB00", Offset = "0x3BDAB00", VA = "0x3BDAB00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x3BDAB10", Offset = "0x3BDAB10", VA = "0x3BDAB10")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public bool IsMasterClient
	{
		[Token(Token = "0x6000164")]
		[Address(RVA = "0x3BDAB20", Offset = "0x3BDAB20", VA = "0x3BDAB20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000042")]
	public bool IsInactive
	{
		[Token(Token = "0x6000165")]
		[Address(RVA = "0x3BDAB40", Offset = "0x3BDAB40", VA = "0x3BDAB40")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000166")]
		[Address(RVA = "0x3BDAB50", Offset = "0x3BDAB50", VA = "0x3BDAB50")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public Hashtable CustomProperties
	{
		[Token(Token = "0x6000167")]
		[Address(RVA = "0x3BDAB60", Offset = "0x3BDAB60", VA = "0x3BDAB60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000168")]
		[Address(RVA = "0x3BDAB70", Offset = "0x3BDAB70", VA = "0x3BDAB70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x3BDAB80", Offset = "0x3BDAB80", VA = "0x3BDAB80")]
	protected internal Player(string nickName, int actorNumber, bool isLocal)
	{
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x3BCEC90", Offset = "0x3BCEC90", VA = "0x3BCEC90")]
	protected internal Player(string nickName, int actorNumber, bool isLocal, Hashtable playerProperties)
	{
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x3BDAB90", Offset = "0x3BDAB90", VA = "0x3BDAB90")]
	public Player Get(int id)
	{
		return null;
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x3BDABC0", Offset = "0x3BDABC0", VA = "0x3BDABC0")]
	public Player GetNext()
	{
		return null;
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x3BDADE0", Offset = "0x3BDADE0", VA = "0x3BDADE0")]
	public Player GetNextFor(Player currentPlayer)
	{
		return null;
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x3BDABD0", Offset = "0x3BDABD0", VA = "0x3BDABD0")]
	public Player GetNextFor(int currentPlayerId)
	{
		return null;
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x3BDADF0", Offset = "0x3BDADF0", VA = "0x3BDADF0", Slot = "4")]
	protected internal virtual void InternalCacheProperties(Hashtable properties)
	{
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x3BDB010", Offset = "0x3BDB010", VA = "0x3BDB010", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x3BDB070", Offset = "0x3BDB070", VA = "0x3BDB070")]
	public string ToStringFull()
	{
		return null;
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x3BDB2F0", Offset = "0x3BDB2F0", VA = "0x3BDB2F0", Slot = "0")]
	public override bool Equals(object p)
	{
		return default(bool);
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x3BDB3A0", Offset = "0x3BDB3A0", VA = "0x3BDB3A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x3BCE400", Offset = "0x3BCE400", VA = "0x3BCE400")]
	protected internal void ChangeLocalID(int newID)
	{
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x3BCCAE0", Offset = "0x3BCCAE0", VA = "0x3BCCAE0")]
	public bool SetCustomProperties(Hashtable propertiesToSet, [Optional] Hashtable expectedValues, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x3BDAA60", Offset = "0x3BDAA60", VA = "0x3BDAA60")]
	private bool SetPlayerNameProperty()
	{
		return default(bool);
	}
}
