// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DoWorkEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001C7")]
public class DoWorkEventArgs : CancelEventArgs
{
	[Token(Token = "0x40006B9")]
	[FieldOffset(Offset = "0x18")]
	private object result;

	[Token(Token = "0x40006BA")]
	[FieldOffset(Offset = "0x20")]
	private object argument;

	[Token(Token = "0x1700029C")]
	[SRDescription("Argument passed into the worker handler from BackgroundWorker.RunWorkerAsync.")]
	public object Argument
	{
		[Token(Token = "0x6000BCC")]
		[Address(RVA = "0x6251040", Offset = "0x6250040", VA = "0x6251040")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700029D")]
	[SRDescription("Result from the worker function.")]
	public object Result
	{
		[Token(Token = "0x6000BCD")]
		[Address(RVA = "0x6251050", Offset = "0x6250050", VA = "0x6251050")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000BCE")]
		[Address(RVA = "0x6251060", Offset = "0x6250060", VA = "0x6251060")]
		set
		{
		}
	}

	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x6250FD0", Offset = "0x624FFD0", VA = "0x6250FD0")]
	public DoWorkEventArgs(object argument)
	{
	}
}
