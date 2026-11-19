// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Realtime.Player
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonRealtime/Code/Player.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;

namespace Photon.Realtime;

[Token(Token = "0x200003C")]
public class Player
{
	[Token(Token = "0x40001DD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int actorNumber;

	[Token(Token = "0x40001DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	public readonly bool IsLocal;

	[Token(Token = "0x40001E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private string nickName;

	[Token(Token = "0x40001E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public object TagObject;

	[Token(Token = "0x1700003C")]
	protected internal Room RoomReference
	{
		[Token(Token = "0x6000159")]
		[Address(RVA = "0x56BC900", Offset = "0x56BB900", VA = "0x56BC900")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600015A")]
		[Address(RVA = "0x56BC910", Offset = "0x56BB910", VA = "0x56BC910")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700003D")]
	public int ActorNumber
	{
		[Token(Token = "0x600015B")]
		[Address(RVA = "0x56BC920", Offset = "0x56BB920", VA = "0x56BC920")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003E")]
	public bool HasRejoined
	{
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x56BC930", Offset = "0x56BB930", VA = "0x56BC930")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600015D")]
		[Address(RVA = "0x56BC940", Offset = "0x56BB940", VA = "0x56BC940")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	public string NickName
	{
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x56BC950", Offset = "0x56BB950", VA = "0x56BC950")]
		get
		{
			return null;
		}
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x56AB550", Offset = "0x56AA550", VA = "0x56AB550")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public string UserId
	{
		[Token(Token = "0x6000160")]
		[Address(RVA = "0x56BCA00", Offset = "0x56BBA00", VA = "0x56BCA00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x56BCA10", Offset = "0x56BBA10", VA = "0x56BCA10")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public bool IsMasterClient
	{
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x56BCA20", Offset = "0x56BBA20", VA = "0x56BCA20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000042")]
	public bool IsInactive
	{
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x56BCA40", Offset = "0x56BBA40", VA = "0x56BCA40")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000164")]
		[Address(RVA = "0x56BCA50", Offset = "0x56BBA50", VA = "0x56BCA50")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public Hashtable CustomProperties
	{
		[Token(Token = "0x6000165")]
		[Address(RVA = "0x56BCA60", Offset = "0x56BBA60", VA = "0x56BCA60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000166")]
		[Address(RVA = "0x56BCA70", Offset = "0x56BBA70", VA = "0x56BCA70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x56BCA80", Offset = "0x56BBA80", VA = "0x56BCA80")]
	protected internal Player(string nickName, int actorNumber, bool isLocal)
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x56B0FC0", Offset = "0x56AFFC0", VA = "0x56B0FC0")]
	protected internal Player(string nickName, int actorNumber, bool isLocal, Hashtable playerProperties)
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x56BCA90", Offset = "0x56BBA90", VA = "0x56BCA90")]
	public Player Get(int id)
	{
		return null;
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x56BCAC0", Offset = "0x56BBAC0", VA = "0x56BCAC0")]
	public Player GetNext()
	{
		return null;
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x56BCCD0", Offset = "0x56BBCD0", VA = "0x56BCCD0")]
	public Player GetNextFor(Player currentPlayer)
	{
		return null;
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x56BCAD0", Offset = "0x56BBAD0", VA = "0x56BCAD0")]
	public Player GetNextFor(int currentPlayerId)
	{
		return null;
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x56BCCE0", Offset = "0x56BBCE0", VA = "0x56BCCE0", Slot = "4")]
	protected internal virtual void InternalCacheProperties(Hashtable properties)
	{
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x56BCEB0", Offset = "0x56BBEB0", VA = "0x56BCEB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x56BCF10", Offset = "0x56BBF10", VA = "0x56BCF10")]
	public string ToStringFull()
	{
		return null;
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x56BD1A0", Offset = "0x56BC1A0", VA = "0x56BD1A0", Slot = "0")]
	public override bool Equals(object p)
	{
		return default(bool);
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x56BD230", Offset = "0x56BC230", VA = "0x56BD230", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x56B0780", Offset = "0x56AF780", VA = "0x56B0780")]
	protected internal void ChangeLocalID(int newID)
	{
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x56AEEF0", Offset = "0x56ADEF0", VA = "0x56AEEF0")]
	public bool SetCustomProperties(Hashtable propertiesToSet, [Optional] Hashtable expectedValues, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x56BC960", Offset = "0x56BB960", VA = "0x56BC960")]
	private bool SetPlayerNameProperty()
	{
		return default(bool);
	}
}
