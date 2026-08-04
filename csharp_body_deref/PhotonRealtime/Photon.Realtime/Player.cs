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
		[Address(RVA = "0x3ED0350", Offset = "0x3ED0350", VA = "0x3ED0350")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x3ED0360", Offset = "0x3ED0360", VA = "0x3ED0360")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700003D")]
	public int ActorNumber
	{
		[Token(Token = "0x600015D")]
		[Address(RVA = "0x3ED0370", Offset = "0x3ED0370", VA = "0x3ED0370")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003E")]
	public bool HasRejoined
	{
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x3ED0380", Offset = "0x3ED0380", VA = "0x3ED0380")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x3ED0390", Offset = "0x3ED0390", VA = "0x3ED0390")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	public string NickName
	{
		[Token(Token = "0x6000160")]
		[Address(RVA = "0x3ED03A0", Offset = "0x3ED03A0", VA = "0x3ED03A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x3EBEA90", Offset = "0x3EBEA90", VA = "0x3EBEA90")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public string UserId
	{
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x3ED0450", Offset = "0x3ED0450", VA = "0x3ED0450")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x3ED0460", Offset = "0x3ED0460", VA = "0x3ED0460")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public bool IsMasterClient
	{
		[Token(Token = "0x6000164")]
		[Address(RVA = "0x3ED0470", Offset = "0x3ED0470", VA = "0x3ED0470")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000042")]
	public bool IsInactive
	{
		[Token(Token = "0x6000165")]
		[Address(RVA = "0x3ED0490", Offset = "0x3ED0490", VA = "0x3ED0490")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000166")]
		[Address(RVA = "0x3ED04A0", Offset = "0x3ED04A0", VA = "0x3ED04A0")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public Hashtable CustomProperties
	{
		[Token(Token = "0x6000167")]
		[Address(RVA = "0x3ED04B0", Offset = "0x3ED04B0", VA = "0x3ED04B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000168")]
		[Address(RVA = "0x3ED04C0", Offset = "0x3ED04C0", VA = "0x3ED04C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x3ED04D0", Offset = "0x3ED04D0", VA = "0x3ED04D0")]
	protected internal Player(string nickName, int actorNumber, bool isLocal)
	{
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x3EC45E0", Offset = "0x3EC45E0", VA = "0x3EC45E0")]
	protected internal Player(string nickName, int actorNumber, bool isLocal, Hashtable playerProperties)
	{
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x3ED04E0", Offset = "0x3ED04E0", VA = "0x3ED04E0")]
	public Player Get(int id)
	{
		return null;
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x3ED0510", Offset = "0x3ED0510", VA = "0x3ED0510")]
	public Player GetNext()
	{
		return null;
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x3ED0730", Offset = "0x3ED0730", VA = "0x3ED0730")]
	public Player GetNextFor(Player currentPlayer)
	{
		return null;
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x3ED0520", Offset = "0x3ED0520", VA = "0x3ED0520")]
	public Player GetNextFor(int currentPlayerId)
	{
		return null;
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x3ED0740", Offset = "0x3ED0740", VA = "0x3ED0740", Slot = "4")]
	protected internal virtual void InternalCacheProperties(Hashtable properties)
	{
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x3ED0960", Offset = "0x3ED0960", VA = "0x3ED0960", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x3ED09C0", Offset = "0x3ED09C0", VA = "0x3ED09C0")]
	public string ToStringFull()
	{
		return null;
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x3ED0C40", Offset = "0x3ED0C40", VA = "0x3ED0C40", Slot = "0")]
	public override bool Equals(object p)
	{
		return default(bool);
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x3ED0CF0", Offset = "0x3ED0CF0", VA = "0x3ED0CF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x3EC3D50", Offset = "0x3EC3D50", VA = "0x3EC3D50")]
	protected internal void ChangeLocalID(int newID)
	{
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x3EC2430", Offset = "0x3EC2430", VA = "0x3EC2430")]
	public bool SetCustomProperties(Hashtable propertiesToSet, [Optional] Hashtable expectedValues, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x3ED03B0", Offset = "0x3ED03B0", VA = "0x3ED03B0")]
	private bool SetPlayerNameProperty()
	{
		return default(bool);
	}
}
