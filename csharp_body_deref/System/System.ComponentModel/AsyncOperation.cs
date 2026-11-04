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

[Token(Token = "0x2000154")]
public sealed class AsyncOperation
{
	[Token(Token = "0x40005F4")]
	[FieldOffset(Offset = "0x10")]
	private readonly SynchronizationContext _syncContext;

	[Token(Token = "0x40005F5")]
	[FieldOffset(Offset = "0x18")]
	private readonly object _userSuppliedState;

	[Token(Token = "0x40005F6")]
	[FieldOffset(Offset = "0x20")]
	private bool _alreadyCompleted;

	[Token(Token = "0x1700019D")]
	public object UserSuppliedState
	{
		[Token(Token = "0x6000886")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700019E")]
	public SynchronizationContext SynchronizationContext
	{
		[Token(Token = "0x6000887")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000884")]
	[Address(RVA = "0x2879BF0", Offset = "0x28781F0", VA = "0x182879BF0")]
	private AsyncOperation(object userSuppliedState, SynchronizationContext syncContext)
	{
	}

	[Token(Token = "0x6000885")]
	[Address(RVA = "0x2879640", Offset = "0x2877C40", VA = "0x182879640", Slot = "1")]
	~AsyncOperation()
	{
	}

	[Token(Token = "0x6000888")]
	[Address(RVA = "0x28799E0", Offset = "0x2877FE0", VA = "0x1828799E0")]
	public void Post(SendOrPostCallback d, object arg)
	{
	}

	[Token(Token = "0x6000889")]
	[Address(RVA = "0x28798E0", Offset = "0x2877EE0", VA = "0x1828798E0")]
	public void PostOperationCompleted(SendOrPostCallback d, object arg)
	{
	}

	[Token(Token = "0x600088A")]
	[Address(RVA = "0x2879780", Offset = "0x2877D80", VA = "0x182879780")]
	public void OperationCompleted()
	{
	}

	[Token(Token = "0x600088B")]
	[Address(RVA = "0x28797F0", Offset = "0x2877DF0", VA = "0x1828797F0")]
	private void PostCore(SendOrPostCallback d, object arg, bool markCompleted)
	{
	}

	[Token(Token = "0x600088C")]
	[Address(RVA = "0x28796C0", Offset = "0x2877CC0", VA = "0x1828796C0")]
	private void OperationCompletedCore()
	{
	}

	[Token(Token = "0x600088D")]
	[Address(RVA = "0x2879B50", Offset = "0x2878150", VA = "0x182879B50")]
	private void VerifyNotCompleted()
	{
	}

	[Token(Token = "0x600088E")]
	[Address(RVA = "0x2879AD0", Offset = "0x28780D0", VA = "0x182879AD0")]
	private void VerifyDelegateNotNull(SendOrPostCallback d)
	{
	}

	[Token(Token = "0x600088F")]
	[Address(RVA = "0x28795A0", Offset = "0x2877BA0", VA = "0x1828795A0")]
	internal static AsyncOperation CreateOperation(object userSuppliedState, SynchronizationContext syncContext)
	{
		return null;
	}

	[Token(Token = "0x6000890")]
	[Address(RVA = "0x2879BC0", Offset = "0x28781C0", VA = "0x182879BC0")]
	internal AsyncOperation()
	{
	}
}
