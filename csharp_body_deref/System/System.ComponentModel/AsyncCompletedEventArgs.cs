using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002F0")]
public class AsyncCompletedEventArgs : EventArgs
{
	[Token(Token = "0x4000E2D")]
	[FieldOffset(Offset = "0x10")]
	private readonly Exception error;

	[Token(Token = "0x4000E2E")]
	[FieldOffset(Offset = "0x18")]
	private readonly bool cancelled;

	[Token(Token = "0x4000E2F")]
	[FieldOffset(Offset = "0x20")]
	private readonly object userState;

	[Token(Token = "0x1700043A")]
	[SRDescription("True if operation was cancelled.")]
	public bool Cancelled
	{
		[Token(Token = "0x60012EA")]
		[Address(RVA = "0x4587F60", Offset = "0x4587F60", VA = "0x4587F60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700043B")]
	[SRDescription("Exception that occurred during operation.  Null if no error.")]
	public Exception Error
	{
		[Token(Token = "0x60012EB")]
		[Address(RVA = "0x4587F70", Offset = "0x4587F70", VA = "0x4587F70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700043C")]
	[SRDescription("User-supplied state to identify operation.")]
	public object UserState
	{
		[Token(Token = "0x60012EC")]
		[Address(RVA = "0x4587F80", Offset = "0x4587F80", VA = "0x4587F80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012E8")]
	[Address(RVA = "0x4587E60", Offset = "0x4587E60", VA = "0x4587E60")]
	[Obsolete("This API supports the .NET Framework infrastructure and is not intended to be used directly from your code.", true)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public AsyncCompletedEventArgs()
	{
	}

	[Token(Token = "0x60012E9")]
	[Address(RVA = "0x4587ED0", Offset = "0x4587ED0", VA = "0x4587ED0")]
	public AsyncCompletedEventArgs(Exception error, bool cancelled, object userState)
	{
	}

	[Token(Token = "0x60012ED")]
	[Address(RVA = "0x4587F90", Offset = "0x4587F90", VA = "0x4587F90")]
	protected void RaiseExceptionIfNecessary()
	{
	}
}
