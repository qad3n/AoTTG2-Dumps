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
		[Address(RVA = "0x4ED8300", Offset = "0x4ED8300", VA = "0x4ED8300")]
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
		[Address(RVA = "0x4ED8350", Offset = "0x4ED8350", VA = "0x4ED8350")]
		get
		{
			return null;
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60021F5")]
		[Address(RVA = "0x4ED83D0", Offset = "0x4ED83D0", VA = "0x4ED83D0")]
		set
		{
		}
	}

	[Token(Token = "0x60021ED")]
	[Address(RVA = "0x4ED82A0", Offset = "0x4ED82A0", VA = "0x4ED82A0")]
	private GCHandle(IntPtr h)
	{
	}

	[Token(Token = "0x60021EE")]
	[Address(RVA = "0x4ED82B0", Offset = "0x4ED82B0", VA = "0x4ED82B0")]
	private GCHandle(object obj)
	{
	}

	[Token(Token = "0x60021EF")]
	[Address(RVA = "0x4ED82D0", Offset = "0x4ED82D0", VA = "0x4ED82D0")]
	internal GCHandle(object value, GCHandleType type)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021F1")]
	[Address(RVA = "0x4ED8310", Offset = "0x4ED8310", VA = "0x4ED8310")]
	internal static object GetRef(IntPtr handle)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021F2")]
	[Address(RVA = "0x4ED8320", Offset = "0x4ED8320", VA = "0x4ED8320")]
	internal static void SetRef(IntPtr handle, object value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60021F3")]
	[Address(RVA = "0x4ED8340", Offset = "0x4ED8340", VA = "0x4ED8340")]
	internal static bool CanDereferenceHandle(IntPtr handle)
	{
		return default(bool);
	}

	[Token(Token = "0x60021F6")]
	[Address(RVA = "0x4ED8420", Offset = "0x4ED8420", VA = "0x4ED8420")]
	public IntPtr AddrOfPinnedObject()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60021F7")]
	[Address(RVA = "0x4ED84F0", Offset = "0x4ED84F0", VA = "0x4ED84F0")]
	public static GCHandle Alloc(object value)
	{
		return default(GCHandle);
	}

	[Token(Token = "0x60021F8")]
	[Address(RVA = "0x4ED8500", Offset = "0x4ED8500", VA = "0x4ED8500")]
	public static GCHandle Alloc(object value, GCHandleType type)
	{
		return default(GCHandle);
	}

	[Token(Token = "0x60021F9")]
	[Address(RVA = "0x4ED8520", Offset = "0x4ED8520", VA = "0x4ED8520")]
	public void Free()
	{
	}

	[Token(Token = "0x60021FA")]
	[Address(RVA = "0x4ED85A0", Offset = "0x4ED85A0", VA = "0x4ED85A0")]
	public static explicit operator IntPtr(GCHandle value)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60021FB")]
	[Address(RVA = "0x4ED85B0", Offset = "0x4ED85B0", VA = "0x4ED85B0")]
	public static explicit operator GCHandle(IntPtr value)
	{
		return default(GCHandle);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60021FC")]
	[Address(RVA = "0x4ED8640", Offset = "0x4ED8640", VA = "0x4ED8640")]
	private static extern bool CheckCurrentDomain(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60021FD")]
	[Address(RVA = "0x4ED83C0", Offset = "0x4ED83C0", VA = "0x4ED83C0")]
	private static extern object GetTarget(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60021FE")]
	[Address(RVA = "0x4ED82F0", Offset = "0x4ED82F0", VA = "0x4ED82F0")]
	private static extern IntPtr GetTargetHandle(object obj, IntPtr handle, GCHandleType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60021FF")]
	[Address(RVA = "0x4ED8590", Offset = "0x4ED8590", VA = "0x4ED8590")]
	private static extern void FreeHandle(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002200")]
	[Address(RVA = "0x4ED84E0", Offset = "0x4ED84E0", VA = "0x4ED84E0")]
	private static extern IntPtr GetAddrOfPinnedObject(IntPtr handle);

	[Token(Token = "0x6002201")]
	[Address(RVA = "0x4ED8650", Offset = "0x4ED8650", VA = "0x4ED8650")]
	public static bool operator ==(GCHandle a, GCHandle b)
	{
		return default(bool);
	}

	[Token(Token = "0x6002202")]
	[Address(RVA = "0x4ED8660", Offset = "0x4ED8660", VA = "0x4ED8660", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6002203")]
	[Address(RVA = "0x4ED86C0", Offset = "0x4ED86C0", VA = "0x4ED86C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002204")]
	[Address(RVA = "0x4ED86D0", Offset = "0x4ED86D0", VA = "0x4ED86D0")]
	public static GCHandle FromIntPtr(IntPtr value)
	{
		return default(GCHandle);
	}

	[Token(Token = "0x6002205")]
	[Address(RVA = "0x4ED86E0", Offset = "0x4ED86E0", VA = "0x4ED86E0")]
	public static IntPtr ToIntPtr(GCHandle value)
	{
		return default(IntPtr);
	}
}
