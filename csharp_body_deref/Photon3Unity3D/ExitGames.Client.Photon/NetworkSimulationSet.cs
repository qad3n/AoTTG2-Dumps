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
		[Address(RVA = "0x3B6B890", Offset = "0x3B6B890", VA = "0x3B6B890")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60000E5")]
		[Address(RVA = "0x3B6B8A0", Offset = "0x3B6B8A0", VA = "0x3B6B8A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public int OutgoingLag
	{
		[Token(Token = "0x60000E6")]
		[Address(RVA = "0x3B77DE0", Offset = "0x3B77DE0", VA = "0x3B77DE0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000E7")]
		[Address(RVA = "0x3B77DF0", Offset = "0x3B77DF0", VA = "0x3B77DF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	public int OutgoingJitter
	{
		[Token(Token = "0x60000E8")]
		[Address(RVA = "0x3B77E00", Offset = "0x3B77E00", VA = "0x3B77E00")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000E9")]
		[Address(RVA = "0x3B77E10", Offset = "0x3B77E10", VA = "0x3B77E10")]
		set
		{
		}
	}

	[Token(Token = "0x17000031")]
	public int OutgoingLossPercentage
	{
		[Token(Token = "0x60000EA")]
		[Address(RVA = "0x3B77E20", Offset = "0x3B77E20", VA = "0x3B77E20")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000EB")]
		[Address(RVA = "0x3B77E30", Offset = "0x3B77E30", VA = "0x3B77E30")]
		set
		{
		}
	}

	[Token(Token = "0x17000032")]
	public int IncomingLag
	{
		[Token(Token = "0x60000EC")]
		[Address(RVA = "0x3B77E40", Offset = "0x3B77E40", VA = "0x3B77E40")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000ED")]
		[Address(RVA = "0x3B77E50", Offset = "0x3B77E50", VA = "0x3B77E50")]
		set
		{
		}
	}

	[Token(Token = "0x17000033")]
	public int IncomingJitter
	{
		[Token(Token = "0x60000EE")]
		[Address(RVA = "0x3B77E60", Offset = "0x3B77E60", VA = "0x3B77E60")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000EF")]
		[Address(RVA = "0x3B77E70", Offset = "0x3B77E70", VA = "0x3B77E70")]
		set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public int IncomingLossPercentage
	{
		[Token(Token = "0x60000F0")]
		[Address(RVA = "0x3B77E80", Offset = "0x3B77E80", VA = "0x3B77E80")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000F1")]
		[Address(RVA = "0x3B77E90", Offset = "0x3B77E90", VA = "0x3B77E90")]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public int LostPackagesOut
	{
		[Token(Token = "0x60000F2")]
		[Address(RVA = "0x3B77EA0", Offset = "0x3B77EA0", VA = "0x3B77EA0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000F3")]
		[Address(RVA = "0x3B77EB0", Offset = "0x3B77EB0", VA = "0x3B77EB0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public int LostPackagesIn
	{
		[Token(Token = "0x60000F4")]
		[Address(RVA = "0x3B77EC0", Offset = "0x3B77EC0", VA = "0x3B77EC0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000F5")]
		[Address(RVA = "0x3B77ED0", Offset = "0x3B77ED0", VA = "0x3B77ED0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x3B77EE0", Offset = "0x3B77EE0", VA = "0x3B77EE0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x3B781B0", Offset = "0x3B781B0", VA = "0x3B781B0")]
	public NetworkSimulationSet()
	{
	}
}
