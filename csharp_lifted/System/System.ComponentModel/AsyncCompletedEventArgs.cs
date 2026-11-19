// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.AsyncCompletedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001BC")]
public class AsyncCompletedEventArgs : EventArgs
{
	[Token(Token = "0x4000695")]
	[FieldOffset(Offset = "0x10")]
	private readonly Exception error;

	[Token(Token = "0x4000696")]
	[FieldOffset(Offset = "0x18")]
	private readonly bool cancelled;

	[Token(Token = "0x4000697")]
	[FieldOffset(Offset = "0x20")]
	private readonly object userState;

	[Token(Token = "0x1700027A")]
	[SRDescription("True if operation was cancelled.")]
	public bool Cancelled
	{
		[Token(Token = "0x6000B72")]
		[Address(RVA = "0x624C470", Offset = "0x624B470", VA = "0x624C470")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700027B")]
	[SRDescription("Exception that occurred during operation.  Null if no error.")]
	public Exception Error
	{
		[Token(Token = "0x6000B73")]
		[Address(RVA = "0x624C480", Offset = "0x624B480", VA = "0x624C480")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700027C")]
	[SRDescription("User-supplied state to identify operation.")]
	public object UserState
	{
		[Token(Token = "0x6000B74")]
		[Address(RVA = "0x624C490", Offset = "0x624B490", VA = "0x624C490")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B70")]
	[Address(RVA = "0x624C370", Offset = "0x624B370", VA = "0x624C370")]
	[Obsolete("This API supports the .NET Framework infrastructure and is not intended to be used directly from your code.", true)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public AsyncCompletedEventArgs()
	{
	}

	[Token(Token = "0x6000B71")]
	[Address(RVA = "0x624C3E0", Offset = "0x624B3E0", VA = "0x624C3E0")]
	public AsyncCompletedEventArgs(Exception error, bool cancelled, object userState)
	{
	}

	[Token(Token = "0x6000B75")]
	[Address(RVA = "0x624C4A0", Offset = "0x624B4A0", VA = "0x624C4A0")]
	protected void RaiseExceptionIfNecessary()
	{
	}
}
