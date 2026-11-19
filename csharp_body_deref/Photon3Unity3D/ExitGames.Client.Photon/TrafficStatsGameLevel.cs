// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.TrafficStatsGameLevel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x56888A0", Offset = "0x56878A0", VA = "0x56888A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000338")]
		[Address(RVA = "0x56888B0", Offset = "0x56878B0", VA = "0x56888B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	public int OperationCount
	{
		[Token(Token = "0x6000339")]
		[Address(RVA = "0x56888C0", Offset = "0x56878C0", VA = "0x56888C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600033A")]
		[Address(RVA = "0x56888D0", Offset = "0x56878D0", VA = "0x56888D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A3")]
	public int ResultByteCount
	{
		[Token(Token = "0x600033B")]
		[Address(RVA = "0x56888E0", Offset = "0x56878E0", VA = "0x56888E0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600033C")]
		[Address(RVA = "0x56888F0", Offset = "0x56878F0", VA = "0x56888F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A4")]
	public int ResultCount
	{
		[Token(Token = "0x600033D")]
		[Address(RVA = "0x5688900", Offset = "0x5687900", VA = "0x5688900")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600033E")]
		[Address(RVA = "0x5688910", Offset = "0x5687910", VA = "0x5688910")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A5")]
	public int EventByteCount
	{
		[Token(Token = "0x600033F")]
		[Address(RVA = "0x5688920", Offset = "0x5687920", VA = "0x5688920")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000340")]
		[Address(RVA = "0x5688930", Offset = "0x5687930", VA = "0x5688930")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A6")]
	public int EventCount
	{
		[Token(Token = "0x6000341")]
		[Address(RVA = "0x5688940", Offset = "0x5687940", VA = "0x5688940")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000342")]
		[Address(RVA = "0x5688950", Offset = "0x5687950", VA = "0x5688950")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A7")]
	public int LongestOpResponseCallback
	{
		[Token(Token = "0x6000343")]
		[Address(RVA = "0x5688960", Offset = "0x5687960", VA = "0x5688960")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000344")]
		[Address(RVA = "0x5688970", Offset = "0x5687970", VA = "0x5688970")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A8")]
	public byte LongestOpResponseCallbackOpCode
	{
		[Token(Token = "0x6000345")]
		[Address(RVA = "0x5688980", Offset = "0x5687980", VA = "0x5688980")]
		[CompilerGenerated]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x6000346")]
		[Address(RVA = "0x5688990", Offset = "0x5687990", VA = "0x5688990")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	public int LongestEventCallback
	{
		[Token(Token = "0x6000347")]
		[Address(RVA = "0x56889A0", Offset = "0x56879A0", VA = "0x56889A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000348")]
		[Address(RVA = "0x56889B0", Offset = "0x56879B0", VA = "0x56889B0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	public int LongestMessageCallback
	{
		[Token(Token = "0x6000349")]
		[Address(RVA = "0x56889C0", Offset = "0x56879C0", VA = "0x56889C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600034A")]
		[Address(RVA = "0x56889D0", Offset = "0x56879D0", VA = "0x56889D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	public int LongestRawMessageCallback
	{
		[Token(Token = "0x600034B")]
		[Address(RVA = "0x56889E0", Offset = "0x56879E0", VA = "0x56889E0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600034C")]
		[Address(RVA = "0x56889F0", Offset = "0x56879F0", VA = "0x56889F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000AC")]
	public byte LongestEventCallbackCode
	{
		[Token(Token = "0x600034D")]
		[Address(RVA = "0x5688A00", Offset = "0x5687A00", VA = "0x5688A00")]
		[CompilerGenerated]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x600034E")]
		[Address(RVA = "0x5688A10", Offset = "0x5687A10", VA = "0x5688A10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	public int LongestDeltaBetweenDispatching
	{
		[Token(Token = "0x600034F")]
		[Address(RVA = "0x5688A20", Offset = "0x5687A20", VA = "0x5688A20")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000350")]
		[Address(RVA = "0x5688A30", Offset = "0x5687A30", VA = "0x5688A30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000AE")]
	public int LongestDeltaBetweenSending
	{
		[Token(Token = "0x6000351")]
		[Address(RVA = "0x5688A40", Offset = "0x5687A40", VA = "0x5688A40")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000352")]
		[Address(RVA = "0x5688A50", Offset = "0x5687A50", VA = "0x5688A50")]
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
		[Address(RVA = "0x5688A60", Offset = "0x5687A60", VA = "0x5688A60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B0")]
	public int DispatchIncomingCommandsCalls
	{
		[Token(Token = "0x6000354")]
		[Address(RVA = "0x5688A70", Offset = "0x5687A70", VA = "0x5688A70")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000355")]
		[Address(RVA = "0x5688A80", Offset = "0x5687A80", VA = "0x5688A80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000B1")]
	public int SendOutgoingCommandsCalls
	{
		[Token(Token = "0x6000356")]
		[Address(RVA = "0x5688A90", Offset = "0x5687A90", VA = "0x5688A90")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000357")]
		[Address(RVA = "0x5688AA0", Offset = "0x5687AA0", VA = "0x5688AA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000B2")]
	public int TotalByteCount
	{
		[Token(Token = "0x6000358")]
		[Address(RVA = "0x5688AB0", Offset = "0x5687AB0", VA = "0x5688AB0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B3")]
	public int TotalMessageCount
	{
		[Token(Token = "0x6000359")]
		[Address(RVA = "0x5688AC0", Offset = "0x5687AC0", VA = "0x5688AC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B4")]
	public int TotalIncomingByteCount
	{
		[Token(Token = "0x600035A")]
		[Address(RVA = "0x5688AD0", Offset = "0x5687AD0", VA = "0x5688AD0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B5")]
	public int TotalIncomingMessageCount
	{
		[Token(Token = "0x600035B")]
		[Address(RVA = "0x5688AE0", Offset = "0x5687AE0", VA = "0x5688AE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B6")]
	public int TotalOutgoingByteCount
	{
		[Token(Token = "0x600035C")]
		[Address(RVA = "0x5688AF0", Offset = "0x5687AF0", VA = "0x5688AF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B7")]
	public int TotalOutgoingMessageCount
	{
		[Token(Token = "0x600035D")]
		[Address(RVA = "0x5688B00", Offset = "0x5687B00", VA = "0x5688B00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x5688B10", Offset = "0x5687B10", VA = "0x5688B10")]
	internal TrafficStatsGameLevel(Stopwatch sw)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x56881C0", Offset = "0x56871C0", VA = "0x56881C0")]
	internal void CountOperation(int operationBytes)
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x5688B40", Offset = "0x5687B40", VA = "0x5688B40")]
	internal void CountResult(int resultBytes)
	{
	}

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x5688B60", Offset = "0x5687B60", VA = "0x5688B60")]
	internal void CountEvent(int eventBytes)
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x5688B80", Offset = "0x5687B80", VA = "0x5688B80")]
	internal void TimeForResponseCallback(byte code, int time)
	{
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x5688B90", Offset = "0x5687B90", VA = "0x5688B90")]
	internal void TimeForEventCallback(byte code, int time)
	{
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x5688BA0", Offset = "0x5687BA0", VA = "0x5688BA0")]
	internal void TimeForMessageCallback(int time)
	{
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x5688BB0", Offset = "0x5687BB0", VA = "0x5688BB0")]
	internal void TimeForRawMessageCallback(int time)
	{
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x5688BC0", Offset = "0x5687BC0", VA = "0x5688BC0")]
	internal void DispatchIncomingCommandsCalled()
	{
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x5688C10", Offset = "0x5687C10", VA = "0x5688C10")]
	internal void SendOutgoingCommandsCalled()
	{
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x5688C60", Offset = "0x5687C60", VA = "0x5688C60")]
	public void ResetMaximumCounters()
	{
	}

	[Token(Token = "0x6000369")]
	[Address(RVA = "0x5688C90", Offset = "0x5687C90", VA = "0x5688C90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600036A")]
	[Address(RVA = "0x5688D30", Offset = "0x5687D30", VA = "0x5688D30")]
	public string ToStringVitalStats()
	{
		return null;
	}
}
