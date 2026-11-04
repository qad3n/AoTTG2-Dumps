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
[Token(Token = "0x200047E")]
public abstract class SafeHandle : CriticalFinalizerObject, IDisposable
{
	[Token(Token = "0x40012CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	protected IntPtr handle;

	[Token(Token = "0x40012CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int _state;

	[Token(Token = "0x40012D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private bool _ownsHandle;

	[Token(Token = "0x40012D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D")]
	private bool _fullyInitialized;

	[Token(Token = "0x40012D2")]
	private const int RefCount_Mask = 2147483644;

	[Token(Token = "0x40012D3")]
	private const int RefCount_One = 4;

	[Token(Token = "0x17000463")]
	public bool IsClosed
	{
		[Token(Token = "0x6002252")]
		[Address(RVA = "0x1A374C0", Offset = "0x1A35AC0", VA = "0x181A374C0")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000464")]
	public abstract bool IsInvalid
	{
		[Token(Token = "0x6002253")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get;
	}

	[Token(Token = "0x600224E")]
	[Address(RVA = "0x1A37430", Offset = "0x1A35A30", VA = "0x181A37430")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	protected SafeHandle(IntPtr invalidHandleValue, bool ownsHandle)
	{
	}

	[Token(Token = "0x600224F")]
	[Address(RVA = "0x1A37280", Offset = "0x1A35880", VA = "0x181A37280", Slot = "1")]
	~SafeHandle()
	{
	}

	[Token(Token = "0x6002250")]
	[Address(RVA = "0x560EC0", Offset = "0x55F4C0", VA = "0x180560EC0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	protected void SetHandle(IntPtr handle)
	{
	}

	[Token(Token = "0x6002251")]
	[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public IntPtr DangerousGetHandle()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6002254")]
	[Address(RVA = "0x1A370A0", Offset = "0x1A356A0", VA = "0x181A370A0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void Close()
	{
	}

	[Token(Token = "0x6002255")]
	[Address(RVA = "0x1A370A0", Offset = "0x1A356A0", VA = "0x181A370A0", Slot = "4")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void Dispose()
	{
	}

	[Token(Token = "0x6002256")]
	[Address(RVA = "0x1A371C0", Offset = "0x1A357C0", VA = "0x181A371C0", Slot = "6")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6002257")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	protected abstract bool ReleaseHandle();

	[Token(Token = "0x6002258")]
	[Address(RVA = "0x1A373B0", Offset = "0x1A359B0", VA = "0x181A373B0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void SetHandleAsInvalid()
	{
	}

	[Token(Token = "0x6002259")]
	[Address(RVA = "0x1A370C0", Offset = "0x1A356C0", VA = "0x181A370C0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public void DangerousAddRef(ref bool success)
	{
	}

	[Token(Token = "0x600225A")]
	[Address(RVA = "0x1A371B0", Offset = "0x1A357B0", VA = "0x181A371B0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void DangerousRelease()
	{
	}

	[Token(Token = "0x600225B")]
	[Address(RVA = "0x1A372F0", Offset = "0x1A358F0", VA = "0x181A372F0")]
	private void InternalDispose()
	{
	}

	[Token(Token = "0x600225C")]
	[Address(RVA = "0x1A37390", Offset = "0x1A35990", VA = "0x181A37390")]
	private void InternalFinalize()
	{
	}

	[Token(Token = "0x600225D")]
	[Address(RVA = "0x1A37130", Offset = "0x1A35730", VA = "0x181A37130")]
	private void DangerousReleaseInternal(bool dispose)
	{
	}
}
