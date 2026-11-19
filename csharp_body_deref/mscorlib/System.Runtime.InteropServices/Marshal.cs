// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.Marshal
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using System.Security;
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x2000459")]
public static class Marshal
{
	[Token(Token = "0x200045A")]
	internal delegate IntPtr SecureStringAllocator(int len);

	[Token(Token = "0x200045B")]
	internal class MarshalerInstanceKeyComparer : IEqualityComparer<(Type, string)>
	{
		[Token(Token = "0x6002287")]
		[Address(RVA = "0x53C7B50", Offset = "0x53C6B50", VA = "0x53C7B50", Slot = "4")]
		public bool Equals((Type, string) lhs, (Type, string) rhs)
		{
			return default(bool);
		}

		[Token(Token = "0x6002288")]
		[Address(RVA = "0x53C7BB0", Offset = "0x53C6BB0", VA = "0x53C7BB0", Slot = "5")]
		public int GetHashCode((Type, string) key)
		{
			return default(int);
		}

		[Token(Token = "0x6002289")]
		[Address(RVA = "0x53C7C00", Offset = "0x53C6C00", VA = "0x53C7C00")]
		public MarshalerInstanceKeyComparer()
		{
		}
	}

	[Token(Token = "0x4001235")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly int SystemMaxDBCSCharSize;

	[Token(Token = "0x4001236")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public static readonly int SystemDefaultCharSize;

	[Token(Token = "0x4001237")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static Dictionary<(Type, string), ICustomMarshaler> MarshalerInstanceCache;

	[Token(Token = "0x4001238")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static readonly object MarshalerInstanceCacheLock;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600224E")]
	[Address(RVA = "0x53C5900", Offset = "0x53C4900", VA = "0x53C5900")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static extern IntPtr AllocHGlobal(IntPtr cb);

	[Token(Token = "0x600224F")]
	[Address(RVA = "0x53C5910", Offset = "0x53C4910", VA = "0x53C5910")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static IntPtr AllocHGlobal(int cb)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002250")]
	[Address(RVA = "0x53C5970", Offset = "0x53C4970", VA = "0x53C5970")]
	private unsafe static extern void copy_to_unmanaged_fixed(Array source, int startIndex, IntPtr destination, int length, void* fixed_source_element);

	[Token(Token = "0x6002251")]
	[Address(RVA = "0x53C5980", Offset = "0x53C4980", VA = "0x53C5980")]
	private static bool skip_fixed(Array array, int startIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x6002252")]
	[Address(RVA = "0x53C59B0", Offset = "0x53C49B0", VA = "0x53C59B0")]
	internal static void copy_to_unmanaged(byte[] source, int startIndex, IntPtr destination, int length)
	{
	}

	[Token(Token = "0x6002253")]
	[Address(RVA = "0x53C5AA0", Offset = "0x53C4AA0", VA = "0x53C5AA0")]
	public static void Copy(byte[] source, int startIndex, IntPtr destination, int length)
	{
	}

	[Token(Token = "0x6002254")]
	[Address(RVA = "0x53C5BA0", Offset = "0x53C4BA0", VA = "0x53C5BA0")]
	internal static void copy_from_unmanaged(IntPtr source, int startIndex, Array destination, int length)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002255")]
	[Address(RVA = "0x53C5C10", Offset = "0x53C4C10", VA = "0x53C5C10")]
	private unsafe static extern void copy_from_unmanaged_fixed(IntPtr source, int startIndex, Array destination, int length, void* fixed_destination_element);

	[Token(Token = "0x6002256")]
	[Address(RVA = "0x53C5C20", Offset = "0x53C4C20", VA = "0x53C5C20")]
	public static void Copy(IntPtr source, byte[] destination, int startIndex, int length)
	{
	}

	[Token(Token = "0x6002257")]
	[Address(RVA = "0x53C5D60", Offset = "0x53C4D60", VA = "0x53C5D60")]
	public static void Copy(IntPtr source, char[] destination, int startIndex, int length)
	{
	}

	[Token(Token = "0x6002258")]
	[Address(RVA = "0x53C5EA0", Offset = "0x53C4EA0", VA = "0x53C5EA0")]
	public static void Copy(IntPtr source, short[] destination, int startIndex, int length)
	{
	}

	[Token(Token = "0x6002259")]
	[Address(RVA = "0x53C5FE0", Offset = "0x53C4FE0", VA = "0x53C5FE0")]
	public static void Copy(IntPtr source, float[] destination, int startIndex, int length)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600225A")]
	[Address(RVA = "0x53C6120", Offset = "0x53C5120", VA = "0x53C6120")]
	public static extern void FreeBSTR(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600225B")]
	[Address(RVA = "0x53C6130", Offset = "0x53C5130", VA = "0x53C6130")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern void FreeHGlobal(IntPtr hglobal);

	[Token(Token = "0x600225C")]
	[Address(RVA = "0x53C6140", Offset = "0x53C5140", VA = "0x53C6140")]
	private static void ClearBSTR(IntPtr ptr)
	{
	}

	[Token(Token = "0x600225D")]
	[Address(RVA = "0x53C6270", Offset = "0x53C5270", VA = "0x53C6270")]
	public static void ZeroFreeBSTR(IntPtr s)
	{
	}

	[Token(Token = "0x600225E")]
	[Address(RVA = "0x53C62C0", Offset = "0x53C52C0", VA = "0x53C62C0")]
	private static void ClearAnsi(IntPtr ptr)
	{
	}

	[Token(Token = "0x600225F")]
	[Address(RVA = "0x53C6370", Offset = "0x53C5370", VA = "0x53C6370")]
	private static void ClearUnicode(IntPtr ptr)
	{
	}

	[Token(Token = "0x6002260")]
	[Address(RVA = "0x53C6500", Offset = "0x53C5500", VA = "0x53C6500")]
	public static void ZeroFreeGlobalAllocAnsi(IntPtr s)
	{
	}

	[Token(Token = "0x6002261")]
	[Address(RVA = "0x53C6550", Offset = "0x53C5550", VA = "0x53C6550")]
	public static void ZeroFreeGlobalAllocUnicode(IntPtr s)
	{
	}

	[Token(Token = "0x6002262")]
	[Address(RVA = "0x53C65A0", Offset = "0x53C55A0", VA = "0x53C65A0")]
	public static int GetHRForException(Exception e)
	{
		return default(int);
	}

	[Token(Token = "0x6002263")]
	[Address(RVA = "0x53C65B0", Offset = "0x53C55B0", VA = "0x53C65B0")]
	public static bool IsComObject(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002264")]
	[Address(RVA = "0x53C65C0", Offset = "0x53C55C0", VA = "0x53C65C0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int GetLastWin32Error();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002265")]
	[Address(RVA = "0x53C65D0", Offset = "0x53C55D0", VA = "0x53C65D0")]
	public static extern IntPtr OffsetOf(Type t, string fieldName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002266")]
	[Address(RVA = "0x53C65E0", Offset = "0x53C55E0", VA = "0x53C65E0")]
	public static extern string PtrToStringAnsi(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002267")]
	[Address(RVA = "0x53C65F0", Offset = "0x53C55F0", VA = "0x53C65F0")]
	public static extern string PtrToStringUni(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002268")]
	[Address(RVA = "0x53C6600", Offset = "0x53C5600", VA = "0x53C6600")]
	[ComVisible(true)]
	public static extern object PtrToStructure(IntPtr ptr, Type structureType);

	[Token(Token = "0x6002269")]
	public static T PtrToStructure<T>(IntPtr ptr)
	{
		return (T)null;
	}

	[Token(Token = "0x600226A")]
	[Address(RVA = "0x53C6350", Offset = "0x53C5350", VA = "0x53C6350")]
	public static byte ReadByte(IntPtr ptr, int ofs)
	{
		return default(byte);
	}

	[Token(Token = "0x600226B")]
	[Address(RVA = "0x53C64B0", Offset = "0x53C54B0", VA = "0x53C64B0")]
	public static short ReadInt16(IntPtr ptr, int ofs)
	{
		return default(short);
	}

	[Token(Token = "0x600226C")]
	[Address(RVA = "0x53C6200", Offset = "0x53C5200", VA = "0x53C6200")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static int ReadInt32(IntPtr ptr, int ofs)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600226D")]
	[Address(RVA = "0x53C6610", Offset = "0x53C5610", VA = "0x53C6610")]
	public static extern int SizeOf(Type t);

	[Token(Token = "0x600226E")]
	public static int SizeOf<T>()
	{
		return default(int);
	}

	[Token(Token = "0x600226F")]
	public static int SizeOf<T>(T structure)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002270")]
	[Address(RVA = "0x53C6620", Offset = "0x53C5620", VA = "0x53C6620")]
	private unsafe static extern IntPtr StringToHGlobalAnsi(char* s, int length);

	[Token(Token = "0x6002271")]
	[Address(RVA = "0x53C6630", Offset = "0x53C5630", VA = "0x53C6630")]
	public static IntPtr StringToHGlobalAnsi(string s)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6002272")]
	[Address(RVA = "0x53C66C0", Offset = "0x53C56C0", VA = "0x53C66C0")]
	public static IntPtr SecureStringToBSTR(SecureString s)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6002273")]
	[Address(RVA = "0x53C67F0", Offset = "0x53C57F0", VA = "0x53C67F0")]
	internal static IntPtr SecureStringGlobalAllocator(int len)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6002274")]
	[Address(RVA = "0x53C6890", Offset = "0x53C5890", VA = "0x53C6890")]
	internal static IntPtr SecureStringToUnicode(SecureString s, SecureStringAllocator allocator)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6002275")]
	[Address(RVA = "0x53C6B90", Offset = "0x53C5B90", VA = "0x53C6B90")]
	public static IntPtr SecureStringToGlobalAllocUnicode(SecureString s)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002276")]
	[Address(RVA = "0x53C6D90", Offset = "0x53C5D90", VA = "0x53C6D90")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	[ComVisible(true)]
	public static extern void StructureToPtr(object structure, IntPtr ptr, bool fDeleteOld);

	[Token(Token = "0x6002277")]
	public static void StructureToPtr<T>(T structure, IntPtr ptr, bool fDeleteOld)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002278")]
	[Address(RVA = "0x53C67E0", Offset = "0x53C57E0", VA = "0x53C67E0")]
	private unsafe static extern IntPtr BufferToBSTR(char* ptr, int slen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002279")]
	[Address(RVA = "0x53C6DA0", Offset = "0x53C5DA0", VA = "0x53C6DA0")]
	public static extern IntPtr UnsafeAddrOfPinnedArrayElement(Array arr, int index);

	[Token(Token = "0x600227A")]
	public static IntPtr UnsafeAddrOfPinnedArrayElement<T>(T[] arr, int index)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600227B")]
	[Address(RVA = "0x53C6250", Offset = "0x53C5250", VA = "0x53C6250")]
	public static void WriteByte(IntPtr ptr, int ofs, byte val)
	{
	}

	[Token(Token = "0x600227C")]
	[Address(RVA = "0x53C6460", Offset = "0x53C5460", VA = "0x53C6460")]
	public static void WriteInt16(IntPtr ptr, int ofs, short val)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600227D")]
	[Address(RVA = "0x53C6DB0", Offset = "0x53C5DB0", VA = "0x53C6DB0")]
	private static extern Delegate GetDelegateForFunctionPointerInternal(IntPtr ptr, Type t);

	[Token(Token = "0x600227E")]
	[Address(RVA = "0x53C6DC0", Offset = "0x53C5DC0", VA = "0x53C6DC0")]
	public static Delegate GetDelegateForFunctionPointer(IntPtr ptr, Type t)
	{
		return null;
	}

	[Token(Token = "0x600227F")]
	public static TDelegate GetDelegateForFunctionPointer<TDelegate>(IntPtr ptr)
	{
		return (TDelegate)null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002280")]
	[Address(RVA = "0x53C7000", Offset = "0x53C6000", VA = "0x53C7000")]
	private static extern IntPtr GetFunctionPointerForDelegateInternal(Delegate d);

	[Token(Token = "0x6002281")]
	[Address(RVA = "0x53C7010", Offset = "0x53C6010", VA = "0x53C7010")]
	public static IntPtr GetFunctionPointerForDelegate(Delegate d)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6002282")]
	public static IntPtr GetFunctionPointerForDelegate<TDelegate>(TDelegate d)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6002283")]
	[Address(RVA = "0x53C70B0", Offset = "0x53C60B0", VA = "0x53C70B0")]
	internal static ICustomMarshaler GetCustomMarshalerInstance(Type type, string cookie)
	{
		return null;
	}
}
