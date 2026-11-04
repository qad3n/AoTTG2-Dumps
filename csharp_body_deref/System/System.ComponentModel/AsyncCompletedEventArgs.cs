// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.AsyncCompletedEventArgs
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001FB")]
public class AsyncCompletedEventArgs : EventArgs
{
	[Token(Token = "0x4000764")]
	[FieldOffset(Offset = "0x10")]
	private readonly Exception error;

	[Token(Token = "0x4000765")]
	[FieldOffset(Offset = "0x18")]
	private readonly bool cancelled;

	[Token(Token = "0x4000766")]
	[FieldOffset(Offset = "0x20")]
	private readonly object userState;

	[Token(Token = "0x170002A9")]
	[SRDescription("True if operation was cancelled.")]
	public bool Cancelled
	{
		[Token(Token = "0x6000D32")]
		[Address(RVA = "0x111AD30", Offset = "0x1119330", VA = "0x18111AD30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170002AA")]
	[SRDescription("Exception that occurred during operation.  Null if no error.")]
	public Exception Error
	{
		[Token(Token = "0x6000D33")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170002AB")]
	[SRDescription("User-supplied state to identify operation.")]
	public object UserState
	{
		[Token(Token = "0x6000D34")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000D30")]
	[Address(RVA = "0x28ADB60", Offset = "0x28AC160", VA = "0x1828ADB60")]
	[Obsolete("This API supports the .NET Framework infrastructure and is not intended to be used directly from your code.", true)]
	[EditorBrowsable(EditorBrowsableState.Never)]
	public AsyncCompletedEventArgs()
	{
	}

	[Token(Token = "0x6000D31")]
	[Address(RVA = "0x28ADAE0", Offset = "0x28AC0E0", VA = "0x1828ADAE0")]
	public AsyncCompletedEventArgs(Exception error, bool cancelled, object userState)
	{
	}

	[Token(Token = "0x6000D35")]
	[Address(RVA = "0x28AD9F0", Offset = "0x28ABFF0", VA = "0x1828AD9F0")]
	protected void RaiseExceptionIfNecessary()
	{
	}
}
