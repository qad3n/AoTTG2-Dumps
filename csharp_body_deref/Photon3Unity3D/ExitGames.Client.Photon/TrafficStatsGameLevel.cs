using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200004D")]
public class TrafficStatsGameLevel
{
	[Token(Token = "0x400021B")]
	[FieldOffset(Offset = "0x10")]
	private Stopwatch watch;

	[Token(Token = "0x400021C")]
	[FieldOffset(Offset = "0x18")]
	private int timeOfLastDispatchCall;

	[Token(Token = "0x400021D")]
	[FieldOffset(Offset = "0x1C")]
	private int timeOfLastSendCall;

	[Token(Token = "0x170000A1")]
	public int OperationByteCount
	{
		[Token(Token = "0x6000337")]
		[Address(RVA = "0x3BA57E0", Offset = "0x3BA57E0", VA = "0x3BA57E0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000338")]
		[Address(RVA = "0x3BA57F0", Offset = "0x3BA57F0", VA = "0x3BA57F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	public int OperationCount
	{
		[Token(Token = "0x6000339")]
		[Address(RVA = "0x3BA5800", Offset = "0x3BA5800", VA = "0x3BA5800")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600033A")]
		[Address(RVA = "0x3BA5810", Offset = "0x3BA5810", VA = "0x3BA5810")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A3")]
	public int ResultByteCount
	{
		[Token(Token = "0x600033B")]
		[Address(RVA = "0x3BA5820", Offset = "0x3BA5820", VA = "0x3BA5820")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600033C")]
		[Address(RVA = "0x3BA5830", Offset = "0x3BA5830", VA = "0x3BA5830")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A4")]
	public int ResultCount
	{
		[Token(Token = "0x600033D")]
		[Address(RVA = "0x3BA5840", Offset = "0x3BA5840", VA = "0x3BA5840")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600033E")]
		[Address(RVA = "0x3BA5850", Offset = "0x3BA5850", VA = "0x3BA5850")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A5")]
	public int EventByteCount
	{
		[Token(Token = "0x600033F")]
		[Address(RVA = "0x3BA5860", Offset = "0x3BA5860", VA = "0x3BA5860")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000340")]
		[Address(RVA = "0x3BA5870", Offset = "0x3BA5870", VA = "0x3BA5870")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A6")]
	public int EventCount
	{
		[Token(Token = "0x6000341")]
		[Address(RVA = "0x3BA5880", Offset = "0x3BA5880", VA = "0x3BA5880")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000342")]
		[Address(RVA = "0x3BA5890", Offset = "0x3BA5890", VA = "0x3BA5890")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A7")]
	public int LongestOpResponseCallback
	{
		[Token(Token = "0x6000343")]
		[Address(RVA = "0x3BA58A0", Offset = "0x3BA58A0", VA = "0x3BA58A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000344")]
		[Address(RVA = "0x3BA58B0", Offset = "0x3BA58B0", VA = "0x3BA58B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A8")]
	public byte LongestOpResponseCallbackOpCode
	{
		[Token(Token = "0x6000345")]
		[Address(RVA = "0x3BA58C0", Offset = "0x3BA58C0", VA = "0x3BA58C0")]
		[CompilerGenerated]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x6000346")]
		[Address(RVA = "0x3BA58D0", Offset = "0x3BA58D0", VA = "0x3BA58D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	public int LongestEventCallback
	{
		[Token(Token = "0x6000347")]
		[Address(RVA = "0x3BA58E0", Offset = "0x3BA58E0", VA = "0x3BA58E0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000348")]
		[Address(RVA = "0x3BA58F0", Offset = "0x3BA58F0", VA = "0x3BA58F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	public int LongestMessageCallback
	{
		[Token(Token = "0x6000349")]
		[Address(RVA = "0x3BA5900", Offset = "0x3BA5900", VA = "0x3BA5900")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600034A")]
		[Address(RVA = "0x3BA5910", Offset = "0x3BA5910", VA = "0x3BA5910")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	public int LongestRawMessageCallback
	{
		[Token(Token = "0x600034B")]
		[Address(RVA = "0x3BA5920", Offset = "0x3BA5920", VA = "0x3BA5920")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600034C")]
		[Address(RVA = "0x3BA5930", Offset = "0x3BA5930", VA = "0x3BA5930")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000AC")]
	public byte LongestEventCallbackCode
	{
		[Token(Token = "0x600034D")]
		[Address(RVA = "0x3BA5940", Offset = "0x3BA5940", VA = "0x3BA5940")]
		[CompilerGenerated]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x600034E")]
		[Address(RVA = "0x3BA5950", Offset = "0x3BA5950", VA = "0x3BA5950")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	public int LongestDeltaBetweenDispatching
	{
		[Token(Token = "0x600034F")]
		[Address(RVA = "0x3BA5960", Offset = "0x3BA5960", VA = "0x3BA5960")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000350")]
		[Address(RVA = "0x3BA5970", Offset = "0x3BA5970", VA = "0x3BA5970")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000AE")]
	public int LongestDeltaBetweenSending
	{
		[Token(Token = "0x6000351")]
		[Address(RVA = "0x3BA5980", Offset = "0x3BA5980", VA = "0x3BA5980")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000352")]
		[Address(RVA = "0x3BA5990", Offset = "0x3BA5990", VA = "0x3BA5990")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000AF")]
	[Obsolete("Use DispatchIncomingCommandsCalls, which has proper naming.")]
	public int DispatchCalls
	{
		[Token(Token = "0x6000353")]
		[Address(RVA = "0x3BA59A0", Offset = "0x3BA59A0", VA = "0x3BA59A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B0")]
	public int DispatchIncomingCommandsCalls
	{
		[Token(Token = "0x6000354")]
		[Address(RVA = "0x3BA59B0", Offset = "0x3BA59B0", VA = "0x3BA59B0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000355")]
		[Address(RVA = "0x3BA59C0", Offset = "0x3BA59C0", VA = "0x3BA59C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000B1")]
	public int SendOutgoingCommandsCalls
	{
		[Token(Token = "0x6000356")]
		[Address(RVA = "0x3BA59D0", Offset = "0x3BA59D0", VA = "0x3BA59D0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000357")]
		[Address(RVA = "0x3BA59E0", Offset = "0x3BA59E0", VA = "0x3BA59E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000B2")]
	public int TotalByteCount
	{
		[Token(Token = "0x6000358")]
		[Address(RVA = "0x3BA59F0", Offset = "0x3BA59F0", VA = "0x3BA59F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B3")]
	public int TotalMessageCount
	{
		[Token(Token = "0x6000359")]
		[Address(RVA = "0x3BA5A00", Offset = "0x3BA5A00", VA = "0x3BA5A00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B4")]
	public int TotalIncomingByteCount
	{
		[Token(Token = "0x600035A")]
		[Address(RVA = "0x3BA5A10", Offset = "0x3BA5A10", VA = "0x3BA5A10")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B5")]
	public int TotalIncomingMessageCount
	{
		[Token(Token = "0x600035B")]
		[Address(RVA = "0x3BA5A20", Offset = "0x3BA5A20", VA = "0x3BA5A20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B6")]
	public int TotalOutgoingByteCount
	{
		[Token(Token = "0x600035C")]
		[Address(RVA = "0x3BA5A30", Offset = "0x3BA5A30", VA = "0x3BA5A30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B7")]
	public int TotalOutgoingMessageCount
	{
		[Token(Token = "0x600035D")]
		[Address(RVA = "0x3BA5A40", Offset = "0x3BA5A40", VA = "0x3BA5A40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x3BA5A50", Offset = "0x3BA5A50", VA = "0x3BA5A50")]
	internal TrafficStatsGameLevel(Stopwatch sw)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x3BA5130", Offset = "0x3BA5130", VA = "0x3BA5130")]
	internal void CountOperation(int operationBytes)
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x3BA5A80", Offset = "0x3BA5A80", VA = "0x3BA5A80")]
	internal void CountResult(int resultBytes)
	{
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x3BA5A90", Offset = "0x3BA5A90", VA = "0x3BA5A90")]
	internal void CountEvent(int eventBytes)
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x3BA5AA0", Offset = "0x3BA5AA0", VA = "0x3BA5AA0")]
	internal void TimeForResponseCallback(byte code, int time)
	{
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x3BA5AB0", Offset = "0x3BA5AB0", VA = "0x3BA5AB0")]
	internal void TimeForEventCallback(byte code, int time)
	{
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x3BA5AC0", Offset = "0x3BA5AC0", VA = "0x3BA5AC0")]
	internal void TimeForMessageCallback(int time)
	{
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x3BA5AD0", Offset = "0x3BA5AD0", VA = "0x3BA5AD0")]
	internal void TimeForRawMessageCallback(int time)
	{
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x3BA5AE0", Offset = "0x3BA5AE0", VA = "0x3BA5AE0")]
	internal void DispatchIncomingCommandsCalled()
	{
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x3BA5B30", Offset = "0x3BA5B30", VA = "0x3BA5B30")]
	internal void SendOutgoingCommandsCalled()
	{
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x3BA5B80", Offset = "0x3BA5B80", VA = "0x3BA5B80")]
	public void ResetMaximumCounters()
	{
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x3BA5BB0", Offset = "0x3BA5BB0", VA = "0x3BA5BB0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x3BA5C50", Offset = "0x3BA5C50", VA = "0x3BA5C50")]
	public string ToStringVitalStats()
	{
		return null;
	}
}
