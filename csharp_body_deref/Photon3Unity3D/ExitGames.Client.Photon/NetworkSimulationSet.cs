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
		[Address(RVA = "0x3E611E0", Offset = "0x3E611E0", VA = "0x3E611E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x3E611F0", Offset = "0x3E611F0", VA = "0x3E611F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public int OutgoingLag
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x3E6D730", Offset = "0x3E6D730", VA = "0x3E6D730")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x3E6D740", Offset = "0x3E6D740", VA = "0x3E6D740")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public int OutgoingJitter
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x3E6D750", Offset = "0x3E6D750", VA = "0x3E6D750")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x3E6D760", Offset = "0x3E6D760", VA = "0x3E6D760")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public int OutgoingLossPercentage
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x3E6D770", Offset = "0x3E6D770", VA = "0x3E6D770")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x3E6D780", Offset = "0x3E6D780", VA = "0x3E6D780")]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	public int IncomingLag
	{
		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x3E6D790", Offset = "0x3E6D790", VA = "0x3E6D790")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x3E6D7A0", Offset = "0x3E6D7A0", VA = "0x3E6D7A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	public int IncomingJitter
	{
		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x3E6D7B0", Offset = "0x3E6D7B0", VA = "0x3E6D7B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000EF")]
		[Address(RVA = "0x3E6D7C0", Offset = "0x3E6D7C0", VA = "0x3E6D7C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public int IncomingLossPercentage
	{
		[Token(Token = "0x60000F0")]
		[Address(RVA = "0x3E6D7D0", Offset = "0x3E6D7D0", VA = "0x3E6D7D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000F1")]
		[Address(RVA = "0x3E6D7E0", Offset = "0x3E6D7E0", VA = "0x3E6D7E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public int LostPackagesOut
	{
		[Token(Token = "0x60000F2")]
		[Address(RVA = "0x3E6D7F0", Offset = "0x3E6D7F0", VA = "0x3E6D7F0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x3E6D800", Offset = "0x3E6D800", VA = "0x3E6D800")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public int LostPackagesIn
	{
		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x3E6D810", Offset = "0x3E6D810", VA = "0x3E6D810")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x3E6D820", Offset = "0x3E6D820", VA = "0x3E6D820")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x3E6D830", Offset = "0x3E6D830", VA = "0x3E6D830", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x3E6DB00", Offset = "0x3E6DB00", VA = "0x3E6DB00")]
	public NetworkSimulationSet()
	{
	}
}
