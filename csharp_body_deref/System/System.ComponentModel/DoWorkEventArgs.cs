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
		[Address(RVA = "0x458CCF0", Offset = "0x458CCF0", VA = "0x458CCF0")]
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
		[Address(RVA = "0x458CD00", Offset = "0x458CD00", VA = "0x458CD00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001346")]
		[Address(RVA = "0x458CD10", Offset = "0x458CD10", VA = "0x458CD10")]
		set
		{
		}
	}

	[Token(Token = "0x6001343")]
	[Address(RVA = "0x458CC80", Offset = "0x458CC80", VA = "0x458CC80")]
	public DoWorkEventArgs(object argument)
	{
	}
}
