// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.DoWorkEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002FB")]
public class DoWorkEventArgs : CancelEventArgs
{
	[Token(Token = "0x4000E51")]
	[FieldOffset(Offset = "0x18")]
	private object result;

	[Token(Token = "0x4000E52")]
	[FieldOffset(Offset = "0x20")]
	private object argument;

	[Token(Token = "0x1700045C")]
	[SRDescription("Argument passed into the worker handler from BackgroundWorker.RunWorkerAsync.")]
	public object Argument
	{
		[Token(Token = "0x6001344")]
		[Address(RVA = "0x48B1DF0", Offset = "0x48B1DF0", VA = "0x48B1DF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700045D")]
	[SRDescription("Result from the worker function.")]
	public object Result
	{
		[Token(Token = "0x6001345")]
		[Address(RVA = "0x48B1E00", Offset = "0x48B1E00", VA = "0x48B1E00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001346")]
		[Address(RVA = "0x48B1E10", Offset = "0x48B1E10", VA = "0x48B1E10")]
		set
		{
		}
	}

	[Token(Token = "0x6001343")]
	[Address(RVA = "0x48B1D80", Offset = "0x48B1D80", VA = "0x48B1D80")]
	public DoWorkEventArgs(object argument)
	{
	}
}
