using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using System.Security;
using Il2CppDummyDll;

namespace System.Runtime.InteropServices;

[Token(Token = "0x2000451")]
public static class Marshal
{
	[Token(Token = "0x2000452")]
	internal delegate IntPtr SecureStringAllocator(int len);

	[Token(Token = "0x2000453")]
	internal class MarshalerInstanceKeyComparer : IEqualityComparer<(Type, string)>
	{
		[Token(Token = "0x600223A")]
		[Address(RVA = "0x4EDA740", Offset = "0x4EDA740", VA = "0x4EDA740", Slot = "4")]
		public bool Equals((Type, string) lhs, (Type, string) rhs)
		{
			return default(bool);
		}

		[Token(Token = "0x600223B")]
		[Address(RVA = "0x4EDA7A0", Offset = "0x4EDA7A0", VA = "0x4EDA7A0", Slot = "5")]
		public int GetHashCode((Type, string) key)
		{
			return default(int);
		}

		[Token(Token = "0x600223C")]
		[Address(RVA = "0x4EDA7F0", Offset = "0x4EDA7F0", VA = "0x4EDA7F0")]
		public MarshalerInstanceKeyComparer()
		{
		}
	}

	[Token(Token = "0x40012D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly int SystemMaxDBCSCharSize;

	[Token(Token = "0x40012D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	public static readonly int SystemDefaultCharSize;

	[Token(Token = "0x40012D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static Dictionary<(Type, string), ICustomMarshaler> MarshalerInstanceCache;

	[Token(Token = "0x40012D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal static readonly object MarshalerInstanceCacheLock;

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002206")]
	[Address(RVA = "0x4ED86F0", Offset = "0x4ED86F0", VA = "0x4ED86F0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static extern IntPtr AllocHGlobal(IntPtr cb);

	[Token(Token = "0x6002207")]
	[Address(RVA = "0x4ED8700", Offset = "0x4ED8700", VA = "0x4ED8700")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static IntPtr AllocHGlobal(int cb)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002208")]
	[Address(RVA = "0x4ED8760", Offset = "0x4ED8760", VA = "0x4ED8760")]
	private unsafe static extern void copy_to_unmanaged_fixed(Array source, int startIndex, IntPtr destination, int length, void* fixed_source_element);

	[Token(Token = "0x6002209")]
	[Address(RVA = "0x4ED8770", Offset = "0x4ED8770", VA = "0x4ED8770")]
	private static bool skip_fixed(Array array, int startIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x600220A")]
	[Address(RVA = "0x4ED87A0", Offset = "0x4ED87A0", VA = "0x4ED87A0")]
	internal static void copy_to_unmanaged(byte[] source, int startIndex, IntPtr destination, int length)
	{
	}

	[Token(Token = "0x600220B")]
	[Address(RVA = "0x4ED88A0", Offset = "0x4ED88A0", VA = "0x4ED88A0")]
	public static void Copy(byte[] source, int startIndex, IntPtr destination, int length)
	{
	}

	[Token(Token = "0x600220C")]
	[Address(RVA = "0x4ED89B0", Offset = "0x4ED89B0", VA = "0x4ED89B0")]
	internal static void copy_from_unmanaged(IntPtr source, int startIndex, Array destination, int length)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600220D")]
	[Address(RVA = "0x4ED8A20", Offset = "0x4ED8A20", VA = "0x4ED8A20")]
	private unsafe static extern void copy_from_unmanaged_fixed(IntPtr source, int startIndex, Array destination, int length, void* fixed_destination_element);

	[Token(Token = "0x600220E")]
	[Address(RVA = "0x4ED8A30", Offset = "0x4ED8A30", VA = "0x4ED8A30")]
	public static void Copy(IntPtr source, byte[] destination, int startIndex, int length)
	{
	}

	[Token(Token = "0x600220F")]
	[Address(RVA = "0x4ED8B70", Offset = "0x4ED8B70", VA = "0x4ED8B70")]
	public static void Copy(IntPtr source, char[] destination, int startIndex, int length)
	{
	}

	[Token(Token = "0x6002210")]
	[Address(RVA = "0x4ED8CB0", Offset = "0x4ED8CB0", VA = "0x4ED8CB0")]
	public static void Copy(IntPtr source, short[] destination, int startIndex, int length)
	{
	}

	[Token(Token = "0x6002211")]
	[Address(RVA = "0x4ED8DF0", Offset = "0x4ED8DF0", VA = "0x4ED8DF0")]
	public static void Copy(IntPtr source, float[] destination, int startIndex, int length)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002212")]
	[Address(RVA = "0x4ED8F30", Offset = "0x4ED8F30", VA = "0x4ED8F30")]
	public static extern void FreeBSTR(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002213")]
	[Address(RVA = "0x4ED8F40", Offset = "0x4ED8F40", VA = "0x4ED8F40")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern void FreeHGlobal(IntPtr hglobal);

	[Token(Token = "0x6002214")]
	[Address(RVA = "0x4ED8F50", Offset = "0x4ED8F50", VA = "0x4ED8F50")]
	private static void ClearBSTR(IntPtr ptr)
	{
	}

	[Token(Token = "0x6002215")]
	[Address(RVA = "0x4ED9090", Offset = "0x4ED9090", VA = "0x4ED9090")]
	public static void ZeroFreeBSTR(IntPtr s)
	{
	}

	[Token(Token = "0x6002216")]
	[Address(RVA = "0x4ED90E0", Offset = "0x4ED90E0", VA = "0x4ED90E0")]
	private static void ClearAnsi(IntPtr ptr)
	{
	}

	[Token(Token = "0x6002217")]
	[Address(RVA = "0x4ED91A0", Offset = "0x4ED91A0", VA = "0x4ED91A0")]
	private static void ClearUnicode(IntPtr ptr)
	{
	}

	[Token(Token = "0x6002218")]
	[Address(RVA = "0x4ED9350", Offset = "0x4ED9350", VA = "0x4ED9350")]
	public static void ZeroFreeGlobalAllocAnsi(IntPtr s)
	{
	}

	[Token(Token = "0x6002219")]
	[Address(RVA = "0x4ED93A0", Offset = "0x4ED93A0", VA = "0x4ED93A0")]
	public static void ZeroFreeGlobalAllocUnicode(IntPtr s)
	{
	}

	[Token(Token = "0x600221A")]
	[Address(RVA = "0x4ED93F0", Offset = "0x4ED93F0", VA = "0x4ED93F0")]
	public static int GetHRForException(Exception e)
	{
		return default(int);
	}

	[Token(Token = "0x600221B")]
	[Address(RVA = "0x4ED9400", Offset = "0x4ED9400", VA = "0x4ED9400")]
	public static bool IsComObject(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600221C")]
	[Address(RVA = "0x4ED9410", Offset = "0x4ED9410", VA = "0x4ED9410")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int GetLastWin32Error();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600221D")]
	[Address(RVA = "0x4ED9420", Offset = "0x4ED9420", VA = "0x4ED9420")]
	public static extern string PtrToStringAnsi(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600221E")]
	[Address(RVA = "0x4ED9430", Offset = "0x4ED9430", VA = "0x4ED9430")]
	public static extern string PtrToStringUni(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600221F")]
	[Address(RVA = "0x4ED9440", Offset = "0x4ED9440", VA = "0x4ED9440")]
	[ComVisible(true)]
	public static extern object PtrToStructure(IntPtr ptr, Type structureType);

	[Token(Token = "0x6002220")]
	public static T PtrToStructure<T>(IntPtr ptr)
	{
		return (T)null;
	}

	[Token(Token = "0x6002221")]
	[Address(RVA = "0x4ED9180", Offset = "0x4ED9180", VA = "0x4ED9180")]
	public static byte ReadByte(IntPtr ptr, int ofs)
	{
		return default(byte);
	}

	[Token(Token = "0x6002222")]
	[Address(RVA = "0x4ED9300", Offset = "0x4ED9300", VA = "0x4ED9300")]
	public static short ReadInt16(IntPtr ptr, int ofs)
	{
		return default(short);
	}

	[Token(Token = "0x6002223")]
	[Address(RVA = "0x4ED9020", Offset = "0x4ED9020", VA = "0x4ED9020")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static int ReadInt32(IntPtr ptr, int ofs)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002224")]
	[Address(RVA = "0x4ED9450", Offset = "0x4ED9450", VA = "0x4ED9450")]
	public static extern int SizeOf(Type t);

	[Token(Token = "0x6002225")]
	public static int SizeOf<T>()
	{
		return default(int);
	}

	[Token(Token = "0x6002226")]
	public static int SizeOf<T>(T structure)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002227")]
	[Address(RVA = "0x4ED9460", Offset = "0x4ED9460", VA = "0x4ED9460")]
	private unsafe static extern IntPtr StringToHGlobalAnsi(char* s, int length);

	[Token(Token = "0x6002228")]
	[Address(RVA = "0x4ED9470", Offset = "0x4ED9470", VA = "0x4ED9470")]
	public static IntPtr StringToHGlobalAnsi(string s)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6002229")]
	[Address(RVA = "0x4ED9500", Offset = "0x4ED9500", VA = "0x4ED9500")]
	public static IntPtr SecureStringToBSTR(SecureString s)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600222A")]
	[Address(RVA = "0x4ED9630", Offset = "0x4ED9630", VA = "0x4ED9630")]
	internal static IntPtr SecureStringGlobalAllocator(int len)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600222B")]
	[Address(RVA = "0x4ED96D0", Offset = "0x4ED96D0", VA = "0x4ED96D0")]
	internal static IntPtr SecureStringToUnicode(SecureString s, SecureStringAllocator allocator)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600222C")]
	[Address(RVA = "0x4ED9A10", Offset = "0x4ED9A10", VA = "0x4ED9A10")]
	public static IntPtr SecureStringToGlobalAllocUnicode(SecureString s)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600222D")]
	[Address(RVA = "0x4ED9C10", Offset = "0x4ED9C10", VA = "0x4ED9C10")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	[ComVisible(true)]
	public static extern void StructureToPtr(object structure, IntPtr ptr, bool fDeleteOld);

	[Token(Token = "0x600222E")]
	public static void StructureToPtr<T>(T structure, IntPtr ptr, bool fDeleteOld)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600222F")]
	[Address(RVA = "0x4ED9620", Offset = "0x4ED9620", VA = "0x4ED9620")]
	private unsafe static extern IntPtr BufferToBSTR(char* ptr, int slen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002230")]
	[Address(RVA = "0x4ED9C20", Offset = "0x4ED9C20", VA = "0x4ED9C20")]
	public static extern IntPtr UnsafeAddrOfPinnedArrayElement(Array arr, int index);

	[Token(Token = "0x6002231")]
	public static IntPtr UnsafeAddrOfPinnedArrayElement<T>(T[] arr, int index)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6002232")]
	[Address(RVA = "0x4ED9070", Offset = "0x4ED9070", VA = "0x4ED9070")]
	public static void WriteByte(IntPtr ptr, int ofs, byte val)
	{
	}

	[Token(Token = "0x6002233")]
	[Address(RVA = "0x4ED92B0", Offset = "0x4ED92B0", VA = "0x4ED92B0")]
	public static void WriteInt16(IntPtr ptr, int ofs, short val)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002234")]
	[Address(RVA = "0x4ED9C30", Offset = "0x4ED9C30", VA = "0x4ED9C30")]
	private static extern IntPtr GetFunctionPointerForDelegateInternal(Delegate d);

	[Token(Token = "0x6002235")]
	public static IntPtr GetFunctionPointerForDelegate<TDelegate>(TDelegate d)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6002236")]
	[Address(RVA = "0x4ED9C40", Offset = "0x4ED9C40", VA = "0x4ED9C40")]
	internal static ICustomMarshaler GetCustomMarshalerInstance(Type type, string cookie)
	{
		return null;
	}
}
