using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000307")]
public class RunWorkerCompletedEventArgs : AsyncCompletedEventArgs
{
	[Token(Token = "0x4000E98")]
	[FieldOffset(Offset = "0x28")]
	private object result;

	[Token(Token = "0x1700047E")]
	public object Result
	{
		[Token(Token = "0x60013E5")]
		[Address(RVA = "0x45A17B0", Offset = "0x45A17B0", VA = "0x45A17B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700047F")]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[Browsable(false)]
	public new object UserState
	{
		[Token(Token = "0x60013E6")]
		[Address(RVA = "0x45A17D0", Offset = "0x45A17D0", VA = "0x45A17D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60013E4")]
	[Address(RVA = "0x45A1770", Offset = "0x45A1770", VA = "0x45A1770")]
	public RunWorkerCompletedEventArgs(object result, Exception error, bool cancelled)
	{
	}
}
