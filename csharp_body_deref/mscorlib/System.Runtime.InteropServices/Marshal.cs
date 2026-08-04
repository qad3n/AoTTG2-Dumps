// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.InteropServices.Marshal
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000451")]
public static class Marshal
{
	[Token(Token = "0x2000452")]
	internal delegate IntPtr SecureStringAllocator(int len);

	[Token(Token = "0x2000453")]
	internal class MarshalerInstanceKeyComparer : IEqualityComparer<(Type, string)>
	{
		[Token(Token = "0x600223A")]
		[Address(RVA = "0x3BC0260", Offset = "0x3BC0260", VA = "0x3BC0260", Slot = "4")]
		public bool Equals((Type, string) lhs, (Type, string) rhs)
		{
			return default(bool);
		}

		[Token(Token = "0x600223B")]
		[Address(RVA = "0x3BC02C0", Offset = "0x3BC02C0", VA = "0x3BC02C0", Slot = "5")]
		public int GetHashCode((Type, string) key)
		{
			return default(int);
		}

		[Token(Token = "0x600223C")]
		[Address(RVA = "0x3BC0310", Offset = "0x3BC0310", VA = "0x3BC0310")]
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
	[Address(RVA = "0x3BBE210", Offset = "0x3BBE210", VA = "0x3BBE210")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static extern IntPtr AllocHGlobal(IntPtr cb);

	[Token(Token = "0x6002207")]
	[Address(RVA = "0x3BBE220", Offset = "0x3BBE220", VA = "0x3BBE220")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	public static IntPtr AllocHGlobal(int cb)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002208")]
	[Address(RVA = "0x3BBE280", Offset = "0x3BBE280", VA = "0x3BBE280")]
	private unsafe static extern void copy_to_unmanaged_fixed(Array source, int startIndex, IntPtr destination, int length, void* fixed_source_element);

	[Token(Token = "0x6002209")]
	[Address(RVA = "0x3BBE290", Offset = "0x3BBE290", VA = "0x3BBE290")]
	private static bool skip_fixed(Array array, int startIndex)
	{
		return default(bool);
	}

	[Token(Token = "0x600220A")]
	[Address(RVA = "0x3BBE2C0", Offset = "0x3BBE2C0", VA = "0x3BBE2C0")]
	internal static void copy_to_unmanaged(byte[] source, int startIndex, IntPtr destination, int length)
	{
	}

	[Token(Token = "0x600220B")]
	[Address(RVA = "0x3BBE3C0", Offset = "0x3BBE3C0", VA = "0x3BBE3C0")]
	public static void Copy(byte[] source, int startIndex, IntPtr destination, int length)
	{
	}

	[Token(Token = "0x600220C")]
	[Address(RVA = "0x3BBE4D0", Offset = "0x3BBE4D0", VA = "0x3BBE4D0")]
	internal static void copy_from_unmanaged(IntPtr source, int startIndex, Array destination, int length)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600220D")]
	[Address(RVA = "0x3BBE540", Offset = "0x3BBE540", VA = "0x3BBE540")]
	private unsafe static extern void copy_from_unmanaged_fixed(IntPtr source, int startIndex, Array destination, int length, void* fixed_destination_element);

	[Token(Token = "0x600220E")]
	[Address(RVA = "0x3BBE550", Offset = "0x3BBE550", VA = "0x3BBE550")]
	public static void Copy(IntPtr source, byte[] destination, int startIndex, int length)
	{
	}

	[Token(Token = "0x600220F")]
	[Address(RVA = "0x3BBE690", Offset = "0x3BBE690", VA = "0x3BBE690")]
	public static void Copy(IntPtr source, char[] destination, int startIndex, int length)
	{
	}

	[Token(Token = "0x6002210")]
	[Address(RVA = "0x3BBE7D0", Offset = "0x3BBE7D0", VA = "0x3BBE7D0")]
	public static void Copy(IntPtr source, short[] destination, int startIndex, int length)
	{
	}

	[Token(Token = "0x6002211")]
	[Address(RVA = "0x3BBE910", Offset = "0x3BBE910", VA = "0x3BBE910")]
	public static void Copy(IntPtr source, float[] destination, int startIndex, int length)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002212")]
	[Address(RVA = "0x3BBEA50", Offset = "0x3BBEA50", VA = "0x3BBEA50")]
	public static extern void FreeBSTR(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002213")]
	[Address(RVA = "0x3BBEA60", Offset = "0x3BBEA60", VA = "0x3BBEA60")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern void FreeHGlobal(IntPtr hglobal);

	[Token(Token = "0x6002214")]
	[Address(RVA = "0x3BBEA70", Offset = "0x3BBEA70", VA = "0x3BBEA70")]
	private static void ClearBSTR(IntPtr ptr)
	{
	}

	[Token(Token = "0x6002215")]
	[Address(RVA = "0x3BBEBB0", Offset = "0x3BBEBB0", VA = "0x3BBEBB0")]
	public static void ZeroFreeBSTR(IntPtr s)
	{
	}

	[Token(Token = "0x6002216")]
	[Address(RVA = "0x3BBEC00", Offset = "0x3BBEC00", VA = "0x3BBEC00")]
	private static void ClearAnsi(IntPtr ptr)
	{
	}

	[Token(Token = "0x6002217")]
	[Address(RVA = "0x3BBECC0", Offset = "0x3BBECC0", VA = "0x3BBECC0")]
	private static void ClearUnicode(IntPtr ptr)
	{
	}

	[Token(Token = "0x6002218")]
	[Address(RVA = "0x3BBEE70", Offset = "0x3BBEE70", VA = "0x3BBEE70")]
	public static void ZeroFreeGlobalAllocAnsi(IntPtr s)
	{
	}

	[Token(Token = "0x6002219")]
	[Address(RVA = "0x3BBEEC0", Offset = "0x3BBEEC0", VA = "0x3BBEEC0")]
	public static void ZeroFreeGlobalAllocUnicode(IntPtr s)
	{
	}

	[Token(Token = "0x600221A")]
	[Address(RVA = "0x3BBEF10", Offset = "0x3BBEF10", VA = "0x3BBEF10")]
	public static int GetHRForException(Exception e)
	{
		return default(int);
	}

	[Token(Token = "0x600221B")]
	[Address(RVA = "0x3BBEF20", Offset = "0x3BBEF20", VA = "0x3BBEF20")]
	public static bool IsComObject(object o)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600221C")]
	[Address(RVA = "0x3BBEF30", Offset = "0x3BBEF30", VA = "0x3BBEF30")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static extern int GetLastWin32Error();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600221D")]
	[Address(RVA = "0x3BBEF40", Offset = "0x3BBEF40", VA = "0x3BBEF40")]
	public static extern string PtrToStringAnsi(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600221E")]
	[Address(RVA = "0x3BBEF50", Offset = "0x3BBEF50", VA = "0x3BBEF50")]
	public static extern string PtrToStringUni(IntPtr ptr);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600221F")]
	[Address(RVA = "0x3BBEF60", Offset = "0x3BBEF60", VA = "0x3BBEF60")]
	[ComVisible(true)]
	public static extern object PtrToStructure(IntPtr ptr, Type structureType);

	[Token(Token = "0x6002220")]
	public static T PtrToStructure<T>(IntPtr ptr)
	{
		return (T)null;
	}

	[Token(Token = "0x6002221")]
	[Address(RVA = "0x3BBECA0", Offset = "0x3BBECA0", VA = "0x3BBECA0")]
	public static byte ReadByte(IntPtr ptr, int ofs)
	{
		return default(byte);
	}

	[Token(Token = "0x6002222")]
	[Address(RVA = "0x3BBEE20", Offset = "0x3BBEE20", VA = "0x3BBEE20")]
	public static short ReadInt16(IntPtr ptr, int ofs)
	{
		return default(short);
	}

	[Token(Token = "0x6002223")]
	[Address(RVA = "0x3BBEB40", Offset = "0x3BBEB40", VA = "0x3BBEB40")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static int ReadInt32(IntPtr ptr, int ofs)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002224")]
	[Address(RVA = "0x3BBEF70", Offset = "0x3BBEF70", VA = "0x3BBEF70")]
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
	[Address(RVA = "0x3BBEF80", Offset = "0x3BBEF80", VA = "0x3BBEF80")]
	private unsafe static extern IntPtr StringToHGlobalAnsi(char* s, int length);

	[Token(Token = "0x6002228")]
	[Address(RVA = "0x3BBEF90", Offset = "0x3BBEF90", VA = "0x3BBEF90")]
	public static IntPtr StringToHGlobalAnsi(string s)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6002229")]
	[Address(RVA = "0x3BBF020", Offset = "0x3BBF020", VA = "0x3BBF020")]
	public static IntPtr SecureStringToBSTR(SecureString s)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600222A")]
	[Address(RVA = "0x3BBF150", Offset = "0x3BBF150", VA = "0x3BBF150")]
	internal static IntPtr SecureStringGlobalAllocator(int len)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600222B")]
	[Address(RVA = "0x3BBF1F0", Offset = "0x3BBF1F0", VA = "0x3BBF1F0")]
	internal static IntPtr SecureStringToUnicode(SecureString s, SecureStringAllocator allocator)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600222C")]
	[Address(RVA = "0x3BBF530", Offset = "0x3BBF530", VA = "0x3BBF530")]
	public static IntPtr SecureStringToGlobalAllocUnicode(SecureString s)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600222D")]
	[Address(RVA = "0x3BBF730", Offset = "0x3BBF730", VA = "0x3BBF730")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.MayFail)]
	[ComVisible(true)]
	public static extern void StructureToPtr(object structure, IntPtr ptr, bool fDeleteOld);

	[Token(Token = "0x600222E")]
	public static void StructureToPtr<T>(T structure, IntPtr ptr, bool fDeleteOld)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600222F")]
	[Address(RVA = "0x3BBF140", Offset = "0x3BBF140", VA = "0x3BBF140")]
	private unsafe static extern IntPtr BufferToBSTR(char* ptr, int slen);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002230")]
	[Address(RVA = "0x3BBF740", Offset = "0x3BBF740", VA = "0x3BBF740")]
	public static extern IntPtr UnsafeAddrOfPinnedArrayElement(Array arr, int index);

	[Token(Token = "0x6002231")]
	public static IntPtr UnsafeAddrOfPinnedArrayElement<T>(T[] arr, int index)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6002232")]
	[Address(RVA = "0x3BBEB90", Offset = "0x3BBEB90", VA = "0x3BBEB90")]
	public static void WriteByte(IntPtr ptr, int ofs, byte val)
	{
	}

	[Token(Token = "0x6002233")]
	[Address(RVA = "0x3BBEDD0", Offset = "0x3BBEDD0", VA = "0x3BBEDD0")]
	public static void WriteInt16(IntPtr ptr, int ofs, short val)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6002234")]
	[Address(RVA = "0x3BBF750", Offset = "0x3BBF750", VA = "0x3BBF750")]
	private static extern IntPtr GetFunctionPointerForDelegateInternal(Delegate d);

	[Token(Token = "0x6002235")]
	public static IntPtr GetFunctionPointerForDelegate<TDelegate>(TDelegate d)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6002236")]
	[Address(RVA = "0x3BBF760", Offset = "0x3BBF760", VA = "0x3BBF760")]
	internal static ICustomMarshaler GetCustomMarshalerInstance(Type type, string cookie)
	{
		return null;
	}
}
