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

[Token(Token = "0x2000480")]
public static class Marshal
{
	[Token(Token = "0x2000481")]
	internal delegate IntPtr SecureStringAllocator(int len);

	[Token(Token = "0x2000482")]
	internal class MarshalerInstanceKeyComparer : IEqualityComparer<(Type, string)>
	{
		[Token(Token = "0x60022BA")]
		[Address(RVA = "0x1A2DB60", Offset = "0x1A2C160", VA = "0x181A2DB60", Slot = "4")]
		public bool Equals((Type, string) lhs, (Type, string) rhs)
		{
			return default(bool);
		}

		[Token(Token = "0x60022BB")]
		[Address(RVA = "0x1A2DBC0", Offset = "0x1A2C1C0", VA = "0x181A2DBC0", Slot = "5")]
		public int GetHashCode((Type, string) key)
		{
			return default(int);
		}

		[Token(Token = "0x60022BC")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public MarshalerInstanceKeyComparer()
		{
		}
	}

	[Token(Token = "0x40012D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly int SystemMaxDBCSCharSize;

	[Token(Token = "0x40012D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public static readonly int SystemDefaultCharSize;

	[Token(Token = "0x40012D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static Dictionary<(Type, string), ICustomMarshaler> MarshalerInstanceCache;

	[Token(Token = "0x40012D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static readonly object MarshalerInstanceCacheLock;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002278")]
	[Address(RVA = "0x1A2B360", Offset = "0x1A29960", VA = "0x181A2B360")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static extern IntPtr AllocHGlobal(IntPtr cb);

	[Token(Token = "0x6002279")]
	[Address(RVA = "0x1A2B370", Offset = "0x1A29970", VA = "0x181A2B370")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static IntPtr AllocHGlobal(int cb)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600227A")]
	[Address(RVA = "0x1A2D9E0", Offset = "0x1A2BFE0", VA = "0x181A2D9E0")]
	internal static void copy_to_unmanaged(Array source, int startIndex, IntPtr destination, int length)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600227B")]
	[Address(RVA = "0x1A2D9D0", Offset = "0x1A2BFD0", VA = "0x181A2D9D0")]
	private unsafe static extern void copy_to_unmanaged_fixed(Array source, int startIndex, IntPtr destination, int length, void* fixed_source_element);

	[Token(Token = "0x600227C")]
	[Address(RVA = "0x1A2DB20", Offset = "0x1A2C120", VA = "0x181A2DB20")]
	private static bool skip_fixed(Array array, int startIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x600227D")]
	[Address(RVA = "0x1A2DA50", Offset = "0x1A2C050", VA = "0x181A2DA50")]
	internal static void copy_to_unmanaged(byte[] source, int startIndex, IntPtr destination, int length)
	{
	}

	[Token(Token = "0x600227E")]
	[Address(RVA = "0x1A2B5C0", Offset = "0x1A29BC0", VA = "0x181A2B5C0")]
	public static void Copy(byte[] source, int startIndex, IntPtr destination, int length)
	{
	}

	[Token(Token = "0x600227F")]
	[Address(RVA = "0x1A2BA30", Offset = "0x1A2A030", VA = "0x181A2BA30")]
	public static void Copy(short[] source, int startIndex, IntPtr destination, int length)
	{
	}

	[Token(Token = "0x6002280")]
	[Address(RVA = "0x1A2B700", Offset = "0x1A29D00", VA = "0x181A2B700")]
	public static void Copy(int[] source, int startIndex, IntPtr destination, int length)
	{
	}

	[Token(Token = "0x6002281")]
	[Address(RVA = "0x1A2B810", Offset = "0x1A29E10", VA = "0x181A2B810")]
	public static void Copy(IntPtr[] source, int startIndex, IntPtr destination, int length)
	{
	}

	[Token(Token = "0x6002282")]
	[Address(RVA = "0x1A2D960", Offset = "0x1A2BF60", VA = "0x181A2D960")]
	internal static void copy_from_unmanaged(IntPtr source, int startIndex, Array destination, int length)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002283")]
	[Address(RVA = "0x1A2D950", Offset = "0x1A2BF50", VA = "0x181A2D950")]
	private unsafe static extern void copy_from_unmanaged_fixed(IntPtr source, int startIndex, Array destination, int length, void* fixed_destination_element);

	[Token(Token = "0x6002284")]
	[Address(RVA = "0x1A2BF80", Offset = "0x1A2A580", VA = "0x181A2BF80")]
	public static void Copy(IntPtr source, byte[] destination, int startIndex, int length)
	{
	}

	[Token(Token = "0x6002285")]
	[Address(RVA = "0x1A2BB40", Offset = "0x1A2A140", VA = "0x181A2BB40")]
	public static void Copy(IntPtr source, char[] destination, int startIndex, int length)
	{
	}

	[Token(Token = "0x6002286")]
	[Address(RVA = "0x1A2BC50", Offset = "0x1A2A250", VA = "0x181A2BC50")]
	public static void Copy(IntPtr source, short[] destination, int startIndex, int length)
	{
	}

	[Token(Token = "0x6002287")]
	[Address(RVA = "0x1A2BD60", Offset = "0x1A2A360", VA = "0x181A2BD60")]
	public static void Copy(IntPtr source, int[] destination, int startIndex, int length)
	{
	}

	[Token(Token = "0x6002288")]
	[Address(RVA = "0x1A2B920", Offset = "0x1A29F20", VA = "0x181A2B920")]
	public static void Copy(IntPtr source, float[] destination, int startIndex, int length)
	{
	}

	[Token(Token = "0x6002289")]
	[Address(RVA = "0x1A2BE70", Offset = "0x1A2A470", VA = "0x181A2BE70")]
	public static void Copy(IntPtr source, IntPtr[] destination, int startIndex, int length)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600228A")]
	[Address(RVA = "0x1A2C090", Offset = "0x1A2A690", VA = "0x181A2C090")]
	public static extern void FreeBSTR(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600228B")]
	[Address(RVA = "0x1A2C0A0", Offset = "0x1A2A6A0", VA = "0x181A2C0A0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern void FreeHGlobal(IntPtr hglobal);

	[Token(Token = "0x600228C")]
	[Address(RVA = "0x1A2B3E0", Offset = "0x1A299E0", VA = "0x181A2B3E0")]
	private static void ClearBSTR(IntPtr ptr)
	{
	}

	[Token(Token = "0x600228D")]
	[Address(RVA = "0x1A2D660", Offset = "0x1A2BC60", VA = "0x181A2D660")]
	public static void ZeroFreeBSTR(IntPtr s)
	{
	}

	[Token(Token = "0x600228E")]
	[Address(RVA = "0x1A2B4C0", Offset = "0x1A29AC0", VA = "0x181A2B4C0")]
	private static void ClearUnicode(IntPtr ptr)
	{
	}

	[Token(Token = "0x600228F")]
	[Address(RVA = "0x1A2D770", Offset = "0x1A2BD70", VA = "0x181A2D770")]
	public static void ZeroFreeGlobalAllocUnicode(IntPtr s)
	{
	}

	[Token(Token = "0x6002290")]
	[Address(RVA = "0x1A2CC80", Offset = "0x1A2B280", VA = "0x181A2CC80")]
	public static int GetHRForException(Exception e)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002291")]
	[Address(RVA = "0x1A2CCA0", Offset = "0x1A2B2A0", VA = "0x181A2CCA0")]
	public static extern bool IsComObject(object o);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002292")]
	[Address(RVA = "0x1A2CC90", Offset = "0x1A2B290", VA = "0x181A2CC90")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int GetLastWin32Error();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002293")]
	[Address(RVA = "0x1A2CCB0", Offset = "0x1A2B2B0", VA = "0x181A2CCB0")]
	public static extern IntPtr OffsetOf(Type t, string fieldName);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002294")]
	[Address(RVA = "0x1A2CCC0", Offset = "0x1A2B2C0", VA = "0x181A2CCC0")]
	public static extern string PtrToStringAnsi(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002295")]
	[Address(RVA = "0x1A2CCD0", Offset = "0x1A2B2D0", VA = "0x181A2CCD0")]
	public static extern string PtrToStringAnsi(IntPtr ptr, int len);

	[Token(Token = "0x6002296")]
	[Address(RVA = "0x1A2CCE0", Offset = "0x1A2B2E0", VA = "0x181A2CCE0")]
	public static string PtrToStringAuto(IntPtr ptr)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002297")]
	[Address(RVA = "0x1A2CD70", Offset = "0x1A2B370", VA = "0x181A2CD70")]
	public static extern string PtrToStringUni(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002298")]
	[Address(RVA = "0x1A2CD80", Offset = "0x1A2B380", VA = "0x181A2CD80")]
	[ComVisible(true)]
	public static extern object PtrToStructure(IntPtr ptr, Type structureType);

	[Token(Token = "0x6002299")]
	public static T PtrToStructure<T>(IntPtr ptr)
	{
		return (T)null;
	}

	[Token(Token = "0x600229A")]
	[Address(RVA = "0x1A2CD90", Offset = "0x1A2B390", VA = "0x181A2CD90")]
	public static short ReadInt16(IntPtr ptr, int ofs)
	{
		return default(short);
	}

	[Token(Token = "0x600229B")]
	[Address(RVA = "0x1A2CDE0", Offset = "0x1A2B3E0", VA = "0x181A2CDE0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static int ReadInt32(IntPtr ptr, int ofs)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600229C")]
	[Address(RVA = "0x1A2CE30", Offset = "0x1A2B430", VA = "0x181A2CE30")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	private static extern int ReleaseInternal(IntPtr pUnk);

	[Token(Token = "0x600229D")]
	[Address(RVA = "0x1A2CE40", Offset = "0x1A2B440", VA = "0x181A2CE40")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static int Release(IntPtr pUnk)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600229E")]
	[Address(RVA = "0x1A2D4B0", Offset = "0x1A2BAB0", VA = "0x181A2D4B0")]
	public static extern int SizeOf(Type t);

	[Token(Token = "0x600229F")]
	public static int SizeOf<T>()
	{
		return default(int);
	}

	[Token(Token = "0x60022A0")]
	public static int SizeOf<T>(T structure)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60022A1")]
	[Address(RVA = "0x1A2D4C0", Offset = "0x1A2BAC0", VA = "0x181A2D4C0")]
	private unsafe static extern IntPtr StringToHGlobalAnsi(char* s, int length);

	[Token(Token = "0x60022A2")]
	[Address(RVA = "0x1A2D4D0", Offset = "0x1A2BAD0", VA = "0x181A2D4D0")]
	public static IntPtr StringToHGlobalAnsi(string s)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60022A3")]
	[Address(RVA = "0x1A2D5B0", Offset = "0x1A2BBB0", VA = "0x181A2D5B0")]
	private unsafe static extern IntPtr StringToHGlobalUni(char* s, int length);

	[Token(Token = "0x60022A4")]
	[Address(RVA = "0x1A2D540", Offset = "0x1A2BB40", VA = "0x181A2D540")]
	public static IntPtr StringToHGlobalUni(string s)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60022A5")]
	[Address(RVA = "0x1A2CF70", Offset = "0x1A2B570", VA = "0x181A2CF70")]
	public static IntPtr SecureStringToBSTR(SecureString s)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60022A6")]
	[Address(RVA = "0x1A2CEE0", Offset = "0x1A2B4E0", VA = "0x181A2CEE0")]
	internal static IntPtr SecureStringGlobalAllocator(int len)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60022A7")]
	[Address(RVA = "0x1A2D220", Offset = "0x1A2B820", VA = "0x181A2D220")]
	internal static IntPtr SecureStringToUnicode(SecureString s, SecureStringAllocator allocator)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60022A8")]
	[Address(RVA = "0x1A2D0B0", Offset = "0x1A2B6B0", VA = "0x181A2D0B0")]
	public static IntPtr SecureStringToGlobalAllocUnicode(SecureString s)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60022A9")]
	[Address(RVA = "0x1A2D5C0", Offset = "0x1A2BBC0", VA = "0x181A2D5C0")]
	[ComVisible(true)]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static extern void StructureToPtr(object structure, IntPtr ptr, bool fDeleteOld);

	[Token(Token = "0x60022AA")]
	public static void StructureToPtr<T>(T structure, IntPtr ptr, bool fDeleteOld)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60022AB")]
	[Address(RVA = "0x1A2B3D0", Offset = "0x1A299D0", VA = "0x181A2B3D0")]
	private unsafe static extern IntPtr BufferToBSTR(char* ptr, int slen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60022AC")]
	[Address(RVA = "0x1A2D5D0", Offset = "0x1A2BBD0", VA = "0x181A2D5D0")]
	public static extern IntPtr UnsafeAddrOfPinnedArrayElement(Array arr, int index);

	[Token(Token = "0x60022AD")]
	public static IntPtr UnsafeAddrOfPinnedArrayElement<T>(T[] arr, int index)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60022AE")]
	[Address(RVA = "0x1A2D5E0", Offset = "0x1A2BBE0", VA = "0x181A2D5E0")]
	public static void WriteByte(IntPtr ptr, int ofs, byte val)
	{
	}

	[Token(Token = "0x60022AF")]
	[Address(RVA = "0x1A2D610", Offset = "0x1A2BC10", VA = "0x181A2D610")]
	public static void WriteInt16(IntPtr ptr, int ofs, short val)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60022B0")]
	[Address(RVA = "0x1A2C940", Offset = "0x1A2AF40", VA = "0x181A2C940")]
	private static extern Delegate GetDelegateForFunctionPointerInternal(IntPtr ptr, Type t);

	[Token(Token = "0x60022B1")]
	[Address(RVA = "0x1A2C950", Offset = "0x1A2AF50", VA = "0x181A2C950")]
	public static Delegate GetDelegateForFunctionPointer(IntPtr ptr, Type t)
	{
		return null;
	}

	[Token(Token = "0x60022B2")]
	public static TDelegate GetDelegateForFunctionPointer<TDelegate>(IntPtr ptr)
	{
		return (TDelegate)null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60022B3")]
	[Address(RVA = "0x1A2CBD0", Offset = "0x1A2B1D0", VA = "0x181A2CBD0")]
	private static extern IntPtr GetFunctionPointerForDelegateInternal(Delegate d);

	[Token(Token = "0x60022B4")]
	[Address(RVA = "0x1A2CBE0", Offset = "0x1A2B1E0", VA = "0x181A2CBE0")]
	public static IntPtr GetFunctionPointerForDelegate(Delegate d)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60022B5")]
	public static IntPtr GetFunctionPointerForDelegate<TDelegate>(TDelegate d)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60022B6")]
	[Address(RVA = "0x1A2C0B0", Offset = "0x1A2A6B0", VA = "0x181A2C0B0")]
	internal static ICustomMarshaler GetCustomMarshalerInstance(Type type, string cookie)
	{
		return null;
	}
}
