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
		[Address(RVA = "0x46AB920", Offset = "0x46AB920", VA = "0x46AB920")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700032F")]
	public SynchronizationContext SynchronizationContext
	{
		[Token(Token = "0x6000E3F")]
		[Address(RVA = "0x46AB930", Offset = "0x46AB930", VA = "0x46AB930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000E3C")]
	[Address(RVA = "0x46AB820", Offset = "0x46AB820", VA = "0x46AB820")]
	private AsyncOperation(object userSuppliedState, SynchronizationContext syncContext)
	{
	}

	[Token(Token = "0x6000E3D")]
	[Address(RVA = "0x46AB880", Offset = "0x46AB880", VA = "0x46AB880", Slot = "1")]
	~AsyncOperation()
	{
	}

	[Token(Token = "0x6000E40")]
	[Address(RVA = "0x46AB940", Offset = "0x46AB940", VA = "0x46AB940")]
	public void Post(SendOrPostCallback d, object arg)
	{
	}

	[Token(Token = "0x6000E41")]
	[Address(RVA = "0x46ABA40", Offset = "0x46ABA40", VA = "0x46ABA40")]
	public void PostOperationCompleted(SendOrPostCallback d, object arg)
	{
	}

	[Token(Token = "0x6000E42")]
	[Address(RVA = "0x46ABB50", Offset = "0x46ABB50", VA = "0x46ABB50")]
	public void OperationCompleted()
	{
	}

	[Token(Token = "0x6000E43")]
	[Address(RVA = "0x46AB950", Offset = "0x46AB950", VA = "0x46AB950")]
	private void PostCore(SendOrPostCallback d, object arg, bool markCompleted)
	{
	}

	[Token(Token = "0x6000E44")]
	[Address(RVA = "0x46ABA60", Offset = "0x46ABA60", VA = "0x46ABA60")]
	private void OperationCompletedCore()
	{
	}

	[Token(Token = "0x6000E45")]
	[Address(RVA = "0x46ABBB0", Offset = "0x46ABBB0", VA = "0x46ABBB0")]
	private void VerifyNotCompleted()
	{
	}

	[Token(Token = "0x6000E46")]
	[Address(RVA = "0x46ABC00", Offset = "0x46ABC00", VA = "0x46ABC00")]
	private void VerifyDelegateNotNull(SendOrPostCallback d)
	{
	}

	[Token(Token = "0x6000E47")]
	[Address(RVA = "0x46ABC70", Offset = "0x46ABC70", VA = "0x46ABC70")]
	internal static AsyncOperation CreateOperation(object userSuppliedState, SynchronizationContext syncContext)
	{
		return null;
	}

	[Token(Token = "0x6000E48")]
	[Address(RVA = "0x46ABD10", Offset = "0x46ABD10", VA = "0x46ABD10")]
	internal AsyncOperation()
	{
	}
}
