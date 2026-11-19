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

[Token(Token = "0x2000115")]
public sealed class AsyncOperation
{
	[Token(Token = "0x4000525")]
	[FieldOffset(Offset = "0x10")]
	private readonly SynchronizationContext _syncContext;

	[Token(Token = "0x4000526")]
	[FieldOffset(Offset = "0x18")]
	private readonly object _userSuppliedState;

	[Token(Token = "0x4000527")]
	[FieldOffset(Offset = "0x20")]
	private bool _alreadyCompleted;

	[Token(Token = "0x1700016E")]
	public object UserSuppliedState
	{
		[Token(Token = "0x60006C6")]
		[Address(RVA = "0x6220920", Offset = "0x621F920", VA = "0x6220920")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700016F")]
	public SynchronizationContext SynchronizationContext
	{
		[Token(Token = "0x60006C7")]
		[Address(RVA = "0x6220930", Offset = "0x621F930", VA = "0x6220930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x6220810", Offset = "0x621F810", VA = "0x6220810")]
	private AsyncOperation(object userSuppliedState, SynchronizationContext syncContext)
	{
	}

	[Token(Token = "0x60006C5")]
	[Address(RVA = "0x6220870", Offset = "0x621F870", VA = "0x6220870", Slot = "1")]
	~AsyncOperation()
	{
	}

	[Token(Token = "0x60006C8")]
	[Address(RVA = "0x6220940", Offset = "0x621F940", VA = "0x6220940")]
	public void Post(SendOrPostCallback d, object arg)
	{
	}

	[Token(Token = "0x60006C9")]
	[Address(RVA = "0x6220A30", Offset = "0x621FA30", VA = "0x6220A30")]
	public void PostOperationCompleted(SendOrPostCallback d, object arg)
	{
	}

	[Token(Token = "0x60006CA")]
	[Address(RVA = "0x6220B20", Offset = "0x621FB20", VA = "0x6220B20")]
	public void OperationCompleted()
	{
	}

	[Token(Token = "0x60006CB")]
	[Address(RVA = "0x6220950", Offset = "0x621F950", VA = "0x6220950")]
	private void PostCore(SendOrPostCallback d, object arg, bool markCompleted)
	{
	}

	[Token(Token = "0x60006CC")]
	[Address(RVA = "0x6220A50", Offset = "0x621FA50", VA = "0x6220A50")]
	private void OperationCompletedCore()
	{
	}

	[Token(Token = "0x60006CD")]
	[Address(RVA = "0x6220B80", Offset = "0x621FB80", VA = "0x6220B80")]
	private void VerifyNotCompleted()
	{
	}

	[Token(Token = "0x60006CE")]
	[Address(RVA = "0x6220BD0", Offset = "0x621FBD0", VA = "0x6220BD0")]
	private void VerifyDelegateNotNull(SendOrPostCallback d)
	{
	}

	[Token(Token = "0x60006CF")]
	[Address(RVA = "0x6220C40", Offset = "0x621FC40", VA = "0x6220C40")]
	internal static AsyncOperation CreateOperation(object userSuppliedState, SynchronizationContext syncContext)
	{
		return null;
	}

	[Token(Token = "0x60006D0")]
	[Address(RVA = "0x6220CD0", Offset = "0x621FCD0", VA = "0x6220CD0")]
	internal AsyncOperation()
	{
	}
}
