// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.AsyncOperation
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Threading;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000249")]
public sealed class AsyncOperation
{
	[Token(Token = "0x4000CBD")]
	[FieldOffset(Offset = "0x10")]
	private readonly SynchronizationContext _syncContext;

	[Token(Token = "0x4000CBE")]
	[FieldOffset(Offset = "0x18")]
	private readonly object _userSuppliedState;

	[Token(Token = "0x4000CBF")]
	[FieldOffset(Offset = "0x20")]
	private bool _alreadyCompleted;

	[Token(Token = "0x1700032E")]
	public object UserSuppliedState
	{
		[Token(Token = "0x6000E3E")]
		[Address(RVA = "0x49D0A20", Offset = "0x49D0A20", VA = "0x49D0A20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700032F")]
	public SynchronizationContext SynchronizationContext
	{
		[Token(Token = "0x6000E3F")]
		[Address(RVA = "0x49D0A30", Offset = "0x49D0A30", VA = "0x49D0A30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E3C")]
	[Address(RVA = "0x49D0920", Offset = "0x49D0920", VA = "0x49D0920")]
	private AsyncOperation(object userSuppliedState, SynchronizationContext syncContext)
	{
	}

	[Token(Token = "0x6000E3D")]
	[Address(RVA = "0x49D0980", Offset = "0x49D0980", VA = "0x49D0980", Slot = "1")]
	~AsyncOperation()
	{
	}

	[Token(Token = "0x6000E40")]
	[Address(RVA = "0x49D0A40", Offset = "0x49D0A40", VA = "0x49D0A40")]
	public void Post(SendOrPostCallback d, object arg)
	{
	}

	[Token(Token = "0x6000E41")]
	[Address(RVA = "0x49D0B40", Offset = "0x49D0B40", VA = "0x49D0B40")]
	public void PostOperationCompleted(SendOrPostCallback d, object arg)
	{
	}

	[Token(Token = "0x6000E42")]
	[Address(RVA = "0x49D0C50", Offset = "0x49D0C50", VA = "0x49D0C50")]
	public void OperationCompleted()
	{
	}

	[Token(Token = "0x6000E43")]
	[Address(RVA = "0x49D0A50", Offset = "0x49D0A50", VA = "0x49D0A50")]
	private void PostCore(SendOrPostCallback d, object arg, bool markCompleted)
	{
	}

	[Token(Token = "0x6000E44")]
	[Address(RVA = "0x49D0B60", Offset = "0x49D0B60", VA = "0x49D0B60")]
	private void OperationCompletedCore()
	{
	}

	[Token(Token = "0x6000E45")]
	[Address(RVA = "0x49D0CB0", Offset = "0x49D0CB0", VA = "0x49D0CB0")]
	private void VerifyNotCompleted()
	{
	}

	[Token(Token = "0x6000E46")]
	[Address(RVA = "0x49D0D00", Offset = "0x49D0D00", VA = "0x49D0D00")]
	private void VerifyDelegateNotNull(SendOrPostCallback d)
	{
	}

	[Token(Token = "0x6000E47")]
	[Address(RVA = "0x49D0D70", Offset = "0x49D0D70", VA = "0x49D0D70")]
	internal static AsyncOperation CreateOperation(object userSuppliedState, SynchronizationContext syncContext)
	{
		return null;
	}

	[Token(Token = "0x6000E48")]
	[Address(RVA = "0x49D0E10", Offset = "0x49D0E10", VA = "0x49D0E10")]
	internal AsyncOperation()
	{
	}
}
