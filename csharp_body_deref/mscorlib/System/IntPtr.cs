// ==================== AoTTG2 cross-reference ====================
// Type: System.IntPtr
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20001B9")]
[ComVisible(true)]
public readonly struct IntPtr : ISerializable, IEquatable<IntPtr>
{
	[Token(Token = "0x400070B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private unsafe readonly void* m_value;

	[Token(Token = "0x400070C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly IntPtr Zero;

	[Token(Token = "0x1700016C")]
	public static int Size
	{
		[Token(Token = "0x6000FEB")]
		[Address(RVA = "0x846F50", Offset = "0x845550", VA = "0x180846F50")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000FE7")]
	[Address(RVA = "0x1B82780", Offset = "0x1B80D80", VA = "0x181B82780")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public IntPtr(int value)
	{
	}

	[Token(Token = "0x6000FE8")]
	[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public IntPtr(long value)
	{
	}

	[Token(Token = "0x6000FE9")]
	[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	[CLSCompliant(false)]
	public unsafe IntPtr(void* value)
	{
	}

	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x1B82790", Offset = "0x1B80D90", VA = "0x181B82790")]
	private IntPtr(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000FEC")]
	[Address(RVA = "0x1B82680", Offset = "0x1B80C80", VA = "0x181B82680", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000FED")]
	[Address(RVA = "0x1B82620", Offset = "0x1B80C20", VA = "0x181B82620", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FEE")]
	[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000FEF")]
	[Address(RVA = "0x737B90", Offset = "0x736190", VA = "0x180737B90")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public long ToInt64()
	{
		return default(long);
	}

	[Token(Token = "0x6000FF0")]
	[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	[CLSCompliant(false)]
	public unsafe void* ToPointer()
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000FF1")]
	[Address(RVA = "0x1B82750", Offset = "0x1B80D50", VA = "0x181B82750", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x1B82720", Offset = "0x1B80D20", VA = "0x181B82720")]
	public string ToString(string format)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF3")]
	[Address(RVA = "0x841F20", Offset = "0x840520", VA = "0x180841F20")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static bool operator ==(IntPtr value1, IntPtr value2)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FF4")]
	[Address(RVA = "0x5286D0", Offset = "0x526CD0", VA = "0x1805286D0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static bool operator !=(IntPtr value1, IntPtr value2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FF5")]
	[Address(RVA = "0x1A83DD0", Offset = "0x1A823D0", VA = "0x181A83DD0")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static explicit operator IntPtr(int value)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FF6")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static explicit operator IntPtr(long value)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FF7")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	[CLSCompliant(false)]
	public unsafe static explicit operator IntPtr(void* value)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FF8")]
	[Address(RVA = "0x611500", Offset = "0x60FB00", VA = "0x180611500")]
	public static explicit operator int(IntPtr value)
	{
		return default(int);
	}

	[Token(Token = "0x6000FF9")]
	[Address(RVA = "0x1B827F0", Offset = "0x1B80DF0", VA = "0x181B827F0")]
	public static explicit operator long(IntPtr value)
	{
		return default(long);
	}

	[Token(Token = "0x6000FFA")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
	[CLSCompliant(false)]
	public unsafe static explicit operator void*(IntPtr value)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000FFB")]
	[Address(RVA = "0x841BC0", Offset = "0x8401C0", VA = "0x180841BC0")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static IntPtr Add(IntPtr pointer, int offset)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FFC")]
	[Address(RVA = "0x841BC0", Offset = "0x8401C0", VA = "0x180841BC0")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static IntPtr operator +(IntPtr pointer, int offset)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FFD")]
	[Address(RVA = "0x1B82800", Offset = "0x1B80E00", VA = "0x181B82800")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static IntPtr operator -(IntPtr pointer, int offset)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FFE")]
	[Address(RVA = "0x187E270", Offset = "0x187C870", VA = "0x18187E270")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal bool IsNull()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FFF")]
	[Address(RVA = "0x187DED0", Offset = "0x187C4D0", VA = "0x18187DED0", Slot = "5")]
	private bool System_002EIEquatable_003CSystem_002EIntPtr_003E_002EEquals(IntPtr other)
	{
		return default(bool);
	}
}
