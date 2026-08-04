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
		[Address(RVA = "0x3BBDA40", Offset = "0x3BBDA40", VA = "0x3BBDA40")]
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
	[Address(RVA = "0x3BBD900", Offset = "0x3BBD900", VA = "0x3BBD900")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	protected SafeHandle(IntPtr invalidHandleValue, bool ownsHandle)
	{
	}

	[Token(Token = "0x60021DE")]
	[Address(RVA = "0x3BBD990", Offset = "0x3BBD990", VA = "0x3BBD990", Slot = "1")]
	~SafeHandle()
	{
	}

	[Token(Token = "0x60021DF")]
	[Address(RVA = "0x3BBDA20", Offset = "0x3BBDA20", VA = "0x3BBDA20")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	protected void SetHandle(IntPtr handle)
	{
	}

	[Token(Token = "0x60021E0")]
	[Address(RVA = "0x3BBDA30", Offset = "0x3BBDA30", VA = "0x3BBDA30")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public IntPtr DangerousGetHandle()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60021E3")]
	[Address(RVA = "0x3BBDA50", Offset = "0x3BBDA50", VA = "0x3BBDA50")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void Close()
	{
	}

	[Token(Token = "0x60021E4")]
	[Address(RVA = "0x3BBDA70", Offset = "0x3BBDA70", VA = "0x3BBDA70", Slot = "4")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void Dispose()
	{
	}

	[Token(Token = "0x60021E5")]
	[Address(RVA = "0x3BBDA90", Offset = "0x3BBDA90", VA = "0x3BBDA90", Slot = "6")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	protected virtual void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60021E6")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	protected abstract bool ReleaseHandle();

	[Token(Token = "0x60021E7")]
	[Address(RVA = "0x3BBDB60", Offset = "0x3BBDB60", VA = "0x3BBDB60")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void SetHandleAsInvalid()
	{
	}

	[Token(Token = "0x60021E8")]
	[Address(RVA = "0x3BBD050", Offset = "0x3BBD050", VA = "0x3BBD050")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public void DangerousAddRef(ref bool success)
	{
	}

	[Token(Token = "0x60021E9")]
	[Address(RVA = "0x3BBD1C0", Offset = "0x3BBD1C0", VA = "0x3BBD1C0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public void DangerousRelease()
	{
	}

	[Token(Token = "0x60021EA")]
	[Address(RVA = "0x3BBDAB0", Offset = "0x3BBDAB0", VA = "0x3BBDAB0")]
	private void InternalDispose()
	{
	}

	[Token(Token = "0x60021EB")]
	[Address(RVA = "0x3BBDB50", Offset = "0x3BBDB50", VA = "0x3BBDB50")]
	private void InternalFinalize()
	{
	}

	[Token(Token = "0x60021EC")]
	[Address(RVA = "0x3BBDBD0", Offset = "0x3BBDBD0", VA = "0x3BBDBD0")]
	private void DangerousReleaseInternal(bool dispose)
	{
	}
}
