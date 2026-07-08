using System.Runtime.ConstrainedExecution;
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200044F")]
public abstract class SafeHandle : CriticalFinalizerObject, IDisposable
{
	[Token(Token = "0x40012CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected IntPtr handle;

	[Token(Token = "0x40012CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int _state;

	[Token(Token = "0x40012CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private bool _ownsHandle;

	[Token(Token = "0x40012CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D")]
	private bool _fullyInitialized;

	[Token(Token = "0x40012D0")]
	private const int RefCount_Mask = 2147483644;

	[Token(Token = "0x40012D1")]
	private const int RefCount_One = 4;

	[Token(Token = "0x17000460")]
	public bool IsClosed
	{
		[Token(Token = "0x60021E1")]
		[Address(RVA = "0x4ED7F20", Offset = "0x4ED7F20", VA = "0x4ED7F20")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000461")]
	public abstract bool IsInvalid
	{
		[Token(Token = "0x60021E2")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get;
	}

	[Token(Token = "0x60021DD")]
	[Address(RVA = "0x4ED7DE0", Offset = "0x4ED7DE0", VA = "0x4ED7DE0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	protected SafeHandle(IntPtr invalidHandleValue, bool ownsHandle)
	{
	}

	[Token(Token = "0x60021DE")]
	[Address(RVA = "0x4ED7E70", Offset = "0x4ED7E70", VA = "0x4ED7E70", Slot = "1")]
	~SafeHandle()
	{
	}

	[Token(Token = "0x60021DF")]
	[Address(RVA = "0x4ED7F00", Offset = "0x4ED7F00", VA = "0x4ED7F00")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	protected void SetHandle(IntPtr handle)
	{
	}

	[Token(Token = "0x60021E0")]
	[Address(RVA = "0x4ED7F10", Offset = "0x4ED7F10", VA = "0x4ED7F10")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public IntPtr DangerousGetHandle()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60021E3")]
	[Address(RVA = "0x4ED7F30", Offset = "0x4ED7F30", VA = "0x4ED7F30")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void Close()
	{
	}

	[Token(Token = "0x60021E4")]
	[Address(RVA = "0x4ED7F50", Offset = "0x4ED7F50", VA = "0x4ED7F50", Slot = "4")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void Dispose()
	{
	}

	[Token(Token = "0x60021E5")]
	[Address(RVA = "0x4ED7F70", Offset = "0x4ED7F70", VA = "0x4ED7F70", Slot = "6")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60021E6")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	protected abstract bool ReleaseHandle();

	[Token(Token = "0x60021E7")]
	[Address(RVA = "0x4ED8040", Offset = "0x4ED8040", VA = "0x4ED8040")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void SetHandleAsInvalid()
	{
	}

	[Token(Token = "0x60021E8")]
	[Address(RVA = "0x4ED7530", Offset = "0x4ED7530", VA = "0x4ED7530")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public void DangerousAddRef(ref bool success)
	{
	}

	[Token(Token = "0x60021E9")]
	[Address(RVA = "0x4ED76A0", Offset = "0x4ED76A0", VA = "0x4ED76A0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void DangerousRelease()
	{
	}

	[Token(Token = "0x60021EA")]
	[Address(RVA = "0x4ED7F90", Offset = "0x4ED7F90", VA = "0x4ED7F90")]
	private void InternalDispose()
	{
	}

	[Token(Token = "0x60021EB")]
	[Address(RVA = "0x4ED8030", Offset = "0x4ED8030", VA = "0x4ED8030")]
	private void InternalFinalize()
	{
	}

	[Token(Token = "0x60021EC")]
	[Address(RVA = "0x4ED80B0", Offset = "0x4ED80B0", VA = "0x4ED80B0")]
	private void DangerousReleaseInternal(bool dispose)
	{
	}
}
