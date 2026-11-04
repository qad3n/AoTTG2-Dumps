// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.NetworkSimulationSet
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Threading;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200001C")]
public class NetworkSimulationSet
{
	[Token(Token = "0x40000BF")]
	[FieldOffset(Offset = "0x10")]
	private bool isSimulationEnabled;

	[Token(Token = "0x40000C0")]
	[FieldOffset(Offset = "0x14")]
	private int outgoingLag;

	[Token(Token = "0x40000C1")]
	[FieldOffset(Offset = "0x18")]
	private int outgoingJitter;

	[Token(Token = "0x40000C2")]
	[FieldOffset(Offset = "0x1C")]
	private int outgoingLossPercentage;

	[Token(Token = "0x40000C3")]
	[FieldOffset(Offset = "0x20")]
	private int incomingLag;

	[Token(Token = "0x40000C4")]
	[FieldOffset(Offset = "0x24")]
	private int incomingJitter;

	[Token(Token = "0x40000C5")]
	[FieldOffset(Offset = "0x28")]
	private int incomingLossPercentage;

	[Token(Token = "0x40000C6")]
	[FieldOffset(Offset = "0x30")]
	internal PeerBase peerBase;

	[Token(Token = "0x40000C7")]
	[FieldOffset(Offset = "0x38")]
	private Thread netSimThread;

	[Token(Token = "0x40000C8")]
	[FieldOffset(Offset = "0x40")]
	protected internal readonly ManualResetEvent NetSimManualResetEvent;

	[Token(Token = "0x1700002E")]
	protected internal bool IsSimulationEnabled
	{
		[Token(Token = "0x60000E4")]
		[Address(RVA = "0x1CC78D0", Offset = "0x1CC5ED0", VA = "0x181CC78D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x1CC78E0", Offset = "0x1CC5EE0", VA = "0x181CC78E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public int OutgoingLag
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x152EFE0", Offset = "0x152D5E0", VA = "0x18152EFE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public int OutgoingJitter
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0xB3E0C0", Offset = "0xB3C6C0", VA = "0x180B3E0C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public int OutgoingLossPercentage
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0xAD35F0", Offset = "0xAD1BF0", VA = "0x180AD35F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000EB")]
		[Address(RVA = "0xD23F80", Offset = "0xD22580", VA = "0x180D23F80")]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	public int IncomingLag
	{
		[Token(Token = "0x60000EC")]
		[Address(RVA = "0xE28270", Offset = "0xE26870", VA = "0x180E28270")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000ED")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	public int IncomingJitter
	{
		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x1CC78C0", Offset = "0x1CC5EC0", VA = "0x181CC78C0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000EF")]
		[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public int IncomingLossPercentage
	{
		[Token(Token = "0x60000F0")]
		[Address(RVA = "0xE282E0", Offset = "0xE268E0", VA = "0x180E282E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000F1")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public int LostPackagesOut
	{
		[Token(Token = "0x60000F2")]
		[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000F3")]
		[Address(RVA = "0xB3E0D0", Offset = "0xB3C6D0", VA = "0x180B3E0D0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public int LostPackagesIn
	{
		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x58A610", Offset = "0x588C10", VA = "0x18058A610")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x58A9A0", Offset = "0x588FA0", VA = "0x18058A9A0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x1CC7500", Offset = "0x1CC5B00", VA = "0x181CC7500", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x1CC7830", Offset = "0x1CC5E30", VA = "0x181CC7830")]
	public NetworkSimulationSet()
	{
	}
}
