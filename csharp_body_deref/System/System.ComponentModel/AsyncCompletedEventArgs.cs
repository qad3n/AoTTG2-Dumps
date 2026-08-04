// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.AsyncCompletedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x48AD060", Offset = "0x48AD060", VA = "0x48AD060")]
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
		[Address(RVA = "0x48AD070", Offset = "0x48AD070", VA = "0x48AD070")]
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
		[Address(RVA = "0x48AD080", Offset = "0x48AD080", VA = "0x48AD080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60012E8")]
	[Address(RVA = "0x48ACF60", Offset = "0x48ACF60", VA = "0x48ACF60")]
	[Obsolete("This API supports the .NET Framework infrastructure and is not intended to be used directly from your code.", true)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public AsyncCompletedEventArgs()
	{
	}

	[Token(Token = "0x60012E9")]
	[Address(RVA = "0x48ACFD0", Offset = "0x48ACFD0", VA = "0x48ACFD0")]
	public AsyncCompletedEventArgs(Exception error, bool cancelled, object userState)
	{
	}

	[Token(Token = "0x60012ED")]
	[Address(RVA = "0x48AD090", Offset = "0x48AD090", VA = "0x48AD090")]
	protected void RaiseExceptionIfNecessary()
	{
	}
}
