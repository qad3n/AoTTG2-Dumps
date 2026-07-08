using Il2CppDummyDll;

namespace System.Threading.Tasks;

[Token(Token = "0x200025C")]
public class UnobservedTaskExceptionEventArgs : EventArgs
{
	[Token(Token = "0x4000B06")]
	[FieldOffset(Offset = "0x10")]
	private AggregateException m_exception;

	[Token(Token = "0x4000B07")]
	[FieldOffset(Offset = "0x18")]
	internal bool m_observed;

	[Token(Token = "0x60014F7")]
	[Address(RVA = "0x5066B80", Offset = "0x5066B80", VA = "0x5066B80")]
	public UnobservedTaskExceptionEventArgs(AggregateException exception)
	{
	}
}
