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
		[Address(RVA = "0x5651E30", Offset = "0x5650E30", VA = "0x5651E30")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x5651E40", Offset = "0x5650E40", VA = "0x5651E40")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public int OutgoingLag
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x565D5B0", Offset = "0x565C5B0", VA = "0x565D5B0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x565D5C0", Offset = "0x565C5C0", VA = "0x565D5C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public int OutgoingJitter
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x565D5D0", Offset = "0x565C5D0", VA = "0x565D5D0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x565D5E0", Offset = "0x565C5E0", VA = "0x565D5E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public int OutgoingLossPercentage
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x565D5F0", Offset = "0x565C5F0", VA = "0x565D5F0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x565D600", Offset = "0x565C600", VA = "0x565D600")]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	public int IncomingLag
	{
		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x565D610", Offset = "0x565C610", VA = "0x565D610")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x565D620", Offset = "0x565C620", VA = "0x565D620")]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	public int IncomingJitter
	{
		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x565D630", Offset = "0x565C630", VA = "0x565D630")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000EF")]
		[Address(RVA = "0x565D640", Offset = "0x565C640", VA = "0x565D640")]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public int IncomingLossPercentage
	{
		[Token(Token = "0x60000F0")]
		[Address(RVA = "0x565D650", Offset = "0x565C650", VA = "0x565D650")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000F1")]
		[Address(RVA = "0x565D660", Offset = "0x565C660", VA = "0x565D660")]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public int LostPackagesOut
	{
		[Token(Token = "0x60000F2")]
		[Address(RVA = "0x565D670", Offset = "0x565C670", VA = "0x565D670")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x565D680", Offset = "0x565C680", VA = "0x565D680")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public int LostPackagesIn
	{
		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x565D690", Offset = "0x565C690", VA = "0x565D690")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x565D6A0", Offset = "0x565C6A0", VA = "0x565D6A0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x565D6B0", Offset = "0x565C6B0", VA = "0x565D6B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x565D980", Offset = "0x565C980", VA = "0x565D980")]
	public NetworkSimulationSet()
	{
	}
}
