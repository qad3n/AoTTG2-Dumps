// ==================== AoTTG2 cross-reference ====================
// Type: ExitGames.Client.Photon.SimulationItem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x3E6D710", Offset = "0x3E6D710", VA = "0x3E6D710")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60000E3")]
		[Address(RVA = "0x3E6D720", Offset = "0x3E6D720", VA = "0x3E6D720")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x3E6D690", Offset = "0x3E6D690", VA = "0x3E6D690")]
	public SimulationItem()
	{
	}
}
