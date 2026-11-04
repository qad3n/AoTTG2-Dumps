// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.GCHandle
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x200047F")]
[ComVisible(true)]
public struct GCHandle
{
	[Token(Token = "0x40012D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr handle;

	[Token(Token = "0x17000465")]
	public bool IsAllocated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002261")]
		[Address(RVA = "0xA507A0", Offset = "0xA4EDA0", VA = "0x180A507A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000466")]
	public object Target
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002266")]
		[Address(RVA = "0x1A2AB50", Offset = "0x1A29150", VA = "0x181A2AB50")]
		get
		{
			return null;
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002267")]
		[Address(RVA = "0x1A2ABD0", Offset = "0x1A291D0", VA = "0x181A2ABD0")]
		set
		{
		}
	}

	[Token(Token = "0x600225E")]
	[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
	private GCHandle(IntPtr h)
	{
	}

	[Token(Token = "0x600225F")]
	[Address(RVA = "0x1A2AB20", Offset = "0x1A29120", VA = "0x181A2AB20")]
	private GCHandle(object obj)
	{
	}

	[Token(Token = "0x6002260")]
	[Address(RVA = "0x1A2AAF0", Offset = "0x1A290F0", VA = "0x181A2AAF0")]
	internal GCHandle(object value, GCHandleType type)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002262")]
	[Address(RVA = "0x1A2AA20", Offset = "0x1A29020", VA = "0x181A2AA20")]
	internal static object GetRef(IntPtr handle)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002263")]
	[Address(RVA = "0x1A2AA60", Offset = "0x1A29060", VA = "0x181A2AA60")]
	internal static void SetRef(IntPtr handle, object value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002264")]
	[Address(RVA = "0x1A2A810", Offset = "0x1A28E10", VA = "0x181A2A810")]
	internal static bool CanDereferenceHandle(IntPtr handle)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6002265")]
	[Address(RVA = "0x1A2AA90", Offset = "0x1A29090", VA = "0x181A2AA90")]
	private static void ThrowIfInvalid(IntPtr handle)
	{
	}

	[Token(Token = "0x6002268")]
	[Address(RVA = "0x1A2A6B0", Offset = "0x1A28CB0", VA = "0x181A2A6B0")]
	public IntPtr AddrOfPinnedObject()
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6002269")]
	[Address(RVA = "0x1A2A800", Offset = "0x1A28E00", VA = "0x181A2A800")]
	public static GCHandle Alloc(object value)
	{
		return default(GCHandle);
	}

	[Token(Token = "0x600226A")]
	[Address(RVA = "0x1A2A7E0", Offset = "0x1A28DE0", VA = "0x181A2A7E0")]
	public static GCHandle Alloc(object value, GCHandleType type)
	{
		return default(GCHandle);
	}

	[Token(Token = "0x600226B")]
	[Address(RVA = "0x1A2A8D0", Offset = "0x1A28ED0", VA = "0x181A2A8D0")]
	public void Free()
	{
	}

	[Token(Token = "0x600226C")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
	public static explicit operator IntPtr(GCHandle value)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600226D")]
	[Address(RVA = "0x1A2A950", Offset = "0x1A28F50", VA = "0x181A2A950")]
	public static explicit operator GCHandle(IntPtr value)
	{
		return default(GCHandle);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600226E")]
	[Address(RVA = "0x1A2A820", Offset = "0x1A28E20", VA = "0x181A2A820")]
	private static extern bool CheckCurrentDomain(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600226F")]
	[Address(RVA = "0x1A2AA50", Offset = "0x1A29050", VA = "0x181A2AA50")]
	private static extern object GetTarget(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002270")]
	[Address(RVA = "0x1A2AA40", Offset = "0x1A29040", VA = "0x181A2AA40")]
	private static extern IntPtr GetTargetHandle(object obj, IntPtr handle, GCHandleType type);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002271")]
	[Address(RVA = "0x1A2A8C0", Offset = "0x1A28EC0", VA = "0x181A2A8C0")]
	private static extern void FreeHandle(IntPtr handle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002272")]
	[Address(RVA = "0x1A2AA10", Offset = "0x1A29010", VA = "0x181A2AA10")]
	private static extern IntPtr GetAddrOfPinnedObject(IntPtr handle);

	[Token(Token = "0x6002273")]
	[Address(RVA = "0x841F20", Offset = "0x840520", VA = "0x180841F20")]
	public static bool operator ==(GCHandle a, GCHandle b)
	{
		return default(bool);
	}

	[Token(Token = "0x6002274")]
	[Address(RVA = "0x1A2A830", Offset = "0x1A28E30", VA = "0x181A2A830", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6002275")]
	[Address(RVA = "0x194C610", Offset = "0x194AC10", VA = "0x18194C610", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6002276")]
	[Address(RVA = "0x1A2A950", Offset = "0x1A28F50", VA = "0x181A2A950")]
	public static GCHandle FromIntPtr(IntPtr value)
	{
		return default(GCHandle);
	}

	[Token(Token = "0x6002277")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
	public static IntPtr ToIntPtr(GCHandle value)
	{
		return default(IntPtr);
	}
}
