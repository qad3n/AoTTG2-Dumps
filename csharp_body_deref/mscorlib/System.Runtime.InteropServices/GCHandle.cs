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

[Token(Token = "0x2000458")]
[ComVisible(true)]
public struct GCHandle
{
	[Token(Token = "0x4001234")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr handle;

	[Token(Token = "0x17000464")]
	public bool IsAllocated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002237")]
		[Address(RVA = "0x53C5440", Offset = "0x53C4440", VA = "0x53C5440")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000465")]
	public object Target
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600223C")]
		[Address(RVA = "0x53C54E0", Offset = "0x53C44E0", VA = "0x53C54E0")]
		get
		{
			return null;
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600223D")]
		[Address(RVA = "0x53C5560", Offset = "0x53C4560", VA = "0x53C5560")]
		set
		{
		}
	}

	[Token(Token = "0x6002234")]
	[Address(RVA = "0x53C53E0", Offset = "0x53C43E0", VA = "0x53C53E0")]
	private GCHandle(IntPtr h)
	{
	}

	[Token(Token = "0x6002235")]
	[Address(RVA = "0x53C53F0", Offset = "0x53C43F0", VA = "0x53C53F0")]
	private GCHandle(object obj)
	{
	}

	[Token(Token = "0x6002236")]
	[Address(RVA = "0x53C5410", Offset = "0x53C4410", VA = "0x53C5410")]
	internal GCHandle(object value, GCHandleType type)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002238")]
	[Address(RVA = "0x53C5450", Offset = "0x53C4450", VA = "0x53C5450")]
	internal static object GetRef(IntPtr handle)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002239")]
	[Address(RVA = "0x53C5460", Offset = "0x53C4460", VA = "0x53C5460")]
	internal static void SetRef(IntPtr handle, object value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600223A")]
	[Address(RVA = "0x53C5480", Offset = "0x53C4480", VA = "0x53C5480")]
	internal static bool CanDereferenceHandle(IntPtr handle)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600223B")]
	[Address(RVA = "0x53C5490", Offset = "0x53C4490", VA = "0x53C5490")]
	private static void ThrowIfInvalid(IntPtr handle)
	{
	}

	[Token(Token = "0x600223E")]
	[Address(RVA = "0x53C5600", Offset = "0x53C4600", VA = "0x53C5600")]
	public IntPtr AddrOfPinnedObject()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600223F")]
	[Address(RVA = "0x53C5700", Offset = "0x53C4700", VA = "0x53C5700")]
	public static GCHandle Alloc(object value)
	{
		return default(GCHandle);
	}

	[Token(Token = "0x6002240")]
	[Address(RVA = "0x53C5710", Offset = "0x53C4710", VA = "0x53C5710")]
	public static GCHandle Alloc(object value, GCHandleType type)
	{
		return default(GCHandle);
	}

	[Token(Token = "0x6002241")]
	[Address(RVA = "0x53C5730", Offset = "0x53C4730", VA = "0x53C5730")]
	public void Free()
	{
	}

	[Token(Token = "0x6002242")]
	[Address(RVA = "0x53C57B0", Offset = "0x53C47B0", VA = "0x53C57B0")]
	public static explicit operator IntPtr(GCHandle value)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6002243")]
	[Address(RVA = "0x53C57C0", Offset = "0x53C47C0", VA = "0x53C57C0")]
	public static explicit operator GCHandle(IntPtr value)
	{
		return default(GCHandle);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002244")]
	[Address(RVA = "0x53C5850", Offset = "0x53C4850", VA = "0x53C5850")]
	private static extern bool CheckCurrentDomain(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002245")]
	[Address(RVA = "0x53C5550", Offset = "0x53C4550", VA = "0x53C5550")]
	private static extern object GetTarget(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002246")]
	[Address(RVA = "0x53C5430", Offset = "0x53C4430", VA = "0x53C5430")]
	private static extern IntPtr GetTargetHandle(object obj, IntPtr handle, GCHandleType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002247")]
	[Address(RVA = "0x53C57A0", Offset = "0x53C47A0", VA = "0x53C57A0")]
	private static extern void FreeHandle(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002248")]
	[Address(RVA = "0x53C56F0", Offset = "0x53C46F0", VA = "0x53C56F0")]
	private static extern IntPtr GetAddrOfPinnedObject(IntPtr handle);

	[Token(Token = "0x6002249")]
	[Address(RVA = "0x53C5860", Offset = "0x53C4860", VA = "0x53C5860")]
	public static bool operator ==(GCHandle a, GCHandle b)
	{
		return default(bool);
	}

	[Token(Token = "0x600224A")]
	[Address(RVA = "0x53C5870", Offset = "0x53C4870", VA = "0x53C5870", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x600224B")]
	[Address(RVA = "0x53C58D0", Offset = "0x53C48D0", VA = "0x53C58D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600224C")]
	[Address(RVA = "0x53C58E0", Offset = "0x53C48E0", VA = "0x53C58E0")]
	public static GCHandle FromIntPtr(IntPtr value)
	{
		return default(GCHandle);
	}

	[Token(Token = "0x600224D")]
	[Address(RVA = "0x53C58F0", Offset = "0x53C48F0", VA = "0x53C58F0")]
	public static IntPtr ToIntPtr(GCHandle value)
	{
		return default(IntPtr);
	}
}
