using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ExitGames.Client.Photon;

[Token(Token = "0x200001B")]
internal class SimulationItem
{
	[Token(Token = "0x40000BB")]
	[FieldOffset(Offset = "0x10")]
	internal readonly Stopwatch stopw;

	[Token(Token = "0x40000BC")]
	[FieldOffset(Offset = "0x18")]
	public int TimeToExecute;

	[Token(Token = "0x40000BD")]
	[FieldOffset(Offset = "0x20")]
	public byte[] DelayedData;

	[Token(Token = "0x1700002D")]
	public int Delay
	{
		[Token(Token = "0x60000E2")]
		[Address(RVA = "0x3B77DC0", Offset = "0x3B77DC0", VA = "0x3B77DC0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000E3")]
		[Address(RVA = "0x3B77DD0", Offset = "0x3B77DD0", VA = "0x3B77DD0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x3B77D40", Offset = "0x3B77D40", VA = "0x3B77D40")]
	public SimulationItem()
	{
	}
}
