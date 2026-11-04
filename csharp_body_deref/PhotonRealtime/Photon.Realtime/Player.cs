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
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600015A")]
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700003D")]
	public int ActorNumber
	{
		[Token(Token = "0x600015B")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700003E")]
	public bool HasRejoined
	{
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x12B36C0", Offset = "0x12B1CC0", VA = "0x1812B36C0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600015D")]
		[Address(RVA = "0x1D25E10", Offset = "0x1D24410", VA = "0x181D25E10")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x1700003F")]
	public string NickName
	{
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x1D25E20", Offset = "0x1D24420", VA = "0x181D25E20")]
		set
		{
		}
	}

	[Token(Token = "0x17000040")]
	public string UserId
	{
		[Token(Token = "0x6000160")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000041")]
	public bool IsMasterClient
	{
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x1D25DF0", Offset = "0x1D243F0", VA = "0x181D25DF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000042")]
	public bool IsInactive
	{
		[Token(Token = "0x6000163")]
		[Address(RVA = "0xACDD00", Offset = "0xACC300", VA = "0x180ACDD00")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000164")]
		[Address(RVA = "0xACE1A0", Offset = "0xACC7A0", VA = "0x180ACE1A0")]
		[CompilerGenerated]
		protected internal set
		{
		}
	}

	[Token(Token = "0x17000043")]
	public Hashtable CustomProperties
	{
		[Token(Token = "0x6000165")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000166")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x1D25DD0", Offset = "0x1D243D0", VA = "0x181D25DD0")]
	protected internal Player(string nickName, int actorNumber, bool isLocal)
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x1D25CD0", Offset = "0x1D242D0", VA = "0x181D25CD0")]
	protected internal Player(string nickName, int actorNumber, bool isLocal, Hashtable playerProperties)
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x1D25530", Offset = "0x1D23B30", VA = "0x181D25530")]
	public Player Get(int id)
	{
		return null;
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x1D25520", Offset = "0x1D23B20", VA = "0x181D25520")]
	public Player GetNext()
	{
		return null;
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x1D25500", Offset = "0x1D23B00", VA = "0x181D25500")]
	public Player GetNextFor(Player currentPlayer)
	{
		return null;
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x1D252E0", Offset = "0x1D238E0", VA = "0x181D252E0")]
	public Player GetNextFor(int currentPlayerId)
	{
		return null;
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x1D25560", Offset = "0x1D23B60", VA = "0x181D25560", Slot = "4")]
	protected internal virtual void InternalCacheProperties(Hashtable properties)
	{
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x1D25C70", Offset = "0x1D24270", VA = "0x181D25C70", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x1D25A10", Offset = "0x1D24010", VA = "0x181D25A10")]
	public string ToStringFull()
	{
		return null;
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x1D25230", Offset = "0x1D23830", VA = "0x181D25230", Slot = "0")]
	public override bool Equals(object p)
	{
		return default(bool);
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x1D25220", Offset = "0x1D23820", VA = "0x181D25220")]
	protected internal void ChangeLocalID(int newID)
	{
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x1D25760", Offset = "0x1D23D60", VA = "0x181D25760")]
	public bool SetCustomProperties(Hashtable propertiesToSet, [Optional] Hashtable expectedValues, [Optional] WebFlags webFlags)
	{
		return default(bool);
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x1D25960", Offset = "0x1D23F60", VA = "0x181D25960")]
	private bool SetPlayerNameProperty()
	{
		return default(bool);
	}
}
