// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.GCHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x2000450")]
[ComVisible(true)]
public struct GCHandle
{
	[Token(Token = "0x40012D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr handle;

	[Token(Token = "0x17000462")]
	public bool IsAllocated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60021F0")]
		[Address(RVA = "0x3BBDE20", Offset = "0x3BBDE20", VA = "0x3BBDE20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000463")]
	public object Target
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60021F4")]
		[Address(RVA = "0x3BBDE70", Offset = "0x3BBDE70", VA = "0x3BBDE70")]
		get
		{
			return null;
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60021F5")]
		[Address(RVA = "0x3BBDEF0", Offset = "0x3BBDEF0", VA = "0x3BBDEF0")]
		set
		{
		}
	}

	[Token(Token = "0x60021ED")]
	[Address(RVA = "0x3BBDDC0", Offset = "0x3BBDDC0", VA = "0x3BBDDC0")]
	private GCHandle(IntPtr h)
	{
	}

	[Token(Token = "0x60021EE")]
	[Address(RVA = "0x3BBDDD0", Offset = "0x3BBDDD0", VA = "0x3BBDDD0")]
	private GCHandle(object obj)
	{
	}

	[Token(Token = "0x60021EF")]
	[Address(RVA = "0x3BBDDF0", Offset = "0x3BBDDF0", VA = "0x3BBDDF0")]
	internal GCHandle(object value, GCHandleType type)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021F1")]
	[Address(RVA = "0x3BBDE30", Offset = "0x3BBDE30", VA = "0x3BBDE30")]
	internal static object GetRef(IntPtr handle)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021F2")]
	[Address(RVA = "0x3BBDE40", Offset = "0x3BBDE40", VA = "0x3BBDE40")]
	internal static void SetRef(IntPtr handle, object value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021F3")]
	[Address(RVA = "0x3BBDE60", Offset = "0x3BBDE60", VA = "0x3BBDE60")]
	internal static bool CanDereferenceHandle(IntPtr handle)
	{
		return default(bool);
	}

	[Token(Token = "0x60021F6")]
	[Address(RVA = "0x3BBDF40", Offset = "0x3BBDF40", VA = "0x3BBDF40")]
	public IntPtr AddrOfPinnedObject()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60021F7")]
	[Address(RVA = "0x3BBE010", Offset = "0x3BBE010", VA = "0x3BBE010")]
	public static GCHandle Alloc(object value)
	{
		return default(GCHandle);
	}

	[Token(Token = "0x60021F8")]
	[Address(RVA = "0x3BBE020", Offset = "0x3BBE020", VA = "0x3BBE020")]
	public static GCHandle Alloc(object value, GCHandleType type)
	{
		return default(GCHandle);
	}

	[Token(Token = "0x60021F9")]
	[Address(RVA = "0x3BBE040", Offset = "0x3BBE040", VA = "0x3BBE040")]
	public void Free()
	{
	}

	[Token(Token = "0x60021FA")]
	[Address(RVA = "0x3BBE0C0", Offset = "0x3BBE0C0", VA = "0x3BBE0C0")]
	public static explicit operator IntPtr(GCHandle value)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60021FB")]
	[Address(RVA = "0x3BBE0D0", Offset = "0x3BBE0D0", VA = "0x3BBE0D0")]
	public static explicit operator GCHandle(IntPtr value)
	{
		return default(GCHandle);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60021FC")]
	[Address(RVA = "0x3BBE160", Offset = "0x3BBE160", VA = "0x3BBE160")]
	private static extern bool CheckCurrentDomain(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60021FD")]
	[Address(RVA = "0x3BBDEE0", Offset = "0x3BBDEE0", VA = "0x3BBDEE0")]
	private static extern object GetTarget(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60021FE")]
	[Address(RVA = "0x3BBDE10", Offset = "0x3BBDE10", VA = "0x3BBDE10")]
	private static extern IntPtr GetTargetHandle(object obj, IntPtr handle, GCHandleType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60021FF")]
	[Address(RVA = "0x3BBE0B0", Offset = "0x3BBE0B0", VA = "0x3BBE0B0")]
	private static extern void FreeHandle(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002200")]
	[Address(RVA = "0x3BBE000", Offset = "0x3BBE000", VA = "0x3BBE000")]
	private static extern IntPtr GetAddrOfPinnedObject(IntPtr handle);

	[Token(Token = "0x6002201")]
	[Address(RVA = "0x3BBE170", Offset = "0x3BBE170", VA = "0x3BBE170")]
	public static bool operator ==(GCHandle a, GCHandle b)
	{
		return default(bool);
	}

	[Token(Token = "0x6002202")]
	[Address(RVA = "0x3BBE180", Offset = "0x3BBE180", VA = "0x3BBE180", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6002203")]
	[Address(RVA = "0x3BBE1E0", Offset = "0x3BBE1E0", VA = "0x3BBE1E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002204")]
	[Address(RVA = "0x3BBE1F0", Offset = "0x3BBE1F0", VA = "0x3BBE1F0")]
	public static GCHandle FromIntPtr(IntPtr value)
	{
		return default(GCHandle);
	}

	[Token(Token = "0x6002205")]
	[Address(RVA = "0x3BBE200", Offset = "0x3BBE200", VA = "0x3BBE200")]
	public static IntPtr ToIntPtr(GCHandle value)
	{
		return default(IntPtr);
	}
}
