// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.SafeHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.ConstrainedExecution;
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000457")]
public abstract class SafeHandle : CriticalFinalizerObject, IDisposable
{
	[Token(Token = "0x400122E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected IntPtr handle;

	[Token(Token = "0x400122F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int _state;

	[Token(Token = "0x4001230")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private bool _ownsHandle;

	[Token(Token = "0x4001231")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D")]
	private bool _fullyInitialized;

	[Token(Token = "0x4001232")]
	private const int RefCount_Mask = 2147483644;

	[Token(Token = "0x4001233")]
	private const int RefCount_One = 4;

	[Token(Token = "0x17000462")]
	public bool IsClosed
	{
		[Token(Token = "0x6002228")]
		[Address(RVA = "0x53C5090", Offset = "0x53C4090", VA = "0x53C5090")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000463")]
	public abstract bool IsInvalid
	{
		[Token(Token = "0x6002229")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get;
	}

	[Token(Token = "0x6002224")]
	[Address(RVA = "0x53C4F40", Offset = "0x53C3F40", VA = "0x53C4F40")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	protected SafeHandle(IntPtr invalidHandleValue, bool ownsHandle)
	{
	}

	[Token(Token = "0x6002225")]
	[Address(RVA = "0x53C4FD0", Offset = "0x53C3FD0", VA = "0x53C4FD0", Slot = "1")]
	~SafeHandle()
	{
	}

	[Token(Token = "0x6002226")]
	[Address(RVA = "0x53C5070", Offset = "0x53C4070", VA = "0x53C5070")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	protected void SetHandle(IntPtr handle)
	{
	}

	[Token(Token = "0x6002227")]
	[Address(RVA = "0x53C5080", Offset = "0x53C4080", VA = "0x53C5080")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public IntPtr DangerousGetHandle()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600222A")]
	[Address(RVA = "0x53C50A0", Offset = "0x53C40A0", VA = "0x53C50A0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void Close()
	{
	}

	[Token(Token = "0x600222B")]
	[Address(RVA = "0x53C50C0", Offset = "0x53C40C0", VA = "0x53C50C0", Slot = "4")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void Dispose()
	{
	}

	[Token(Token = "0x600222C")]
	[Address(RVA = "0x53C50E0", Offset = "0x53C40E0", VA = "0x53C50E0", Slot = "6")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x600222D")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	protected abstract bool ReleaseHandle();

	[Token(Token = "0x600222E")]
	[Address(RVA = "0x53C51C0", Offset = "0x53C41C0", VA = "0x53C51C0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void SetHandleAsInvalid()
	{
	}

	[Token(Token = "0x600222F")]
	[Address(RVA = "0x53C46D0", Offset = "0x53C36D0", VA = "0x53C46D0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public void DangerousAddRef(ref bool success)
	{
	}

	[Token(Token = "0x6002230")]
	[Address(RVA = "0x53C4830", Offset = "0x53C3830", VA = "0x53C4830")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void DangerousRelease()
	{
	}

	[Token(Token = "0x6002231")]
	[Address(RVA = "0x53C5100", Offset = "0x53C4100", VA = "0x53C5100")]
	private void InternalDispose()
	{
	}

	[Token(Token = "0x6002232")]
	[Address(RVA = "0x53C51A0", Offset = "0x53C41A0", VA = "0x53C51A0")]
	private void InternalFinalize()
	{
	}

	[Token(Token = "0x6002233")]
	[Address(RVA = "0x53C5230", Offset = "0x53C4230", VA = "0x53C5230")]
	private void DangerousReleaseInternal(bool dispose)
	{
	}
}
