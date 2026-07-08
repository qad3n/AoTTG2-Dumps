using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200018E")]
[ComVisible(true)]
public readonly struct IntPtr : ISerializable, IEquatable<IntPtr>
{
	[Token(Token = "0x40006A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private unsafe readonly void* m_value;

	[Token(Token = "0x40006A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly IntPtr Zero;

	[Token(Token = "0x1700016A")]
	public static int Size
	{
		[Token(Token = "0x6000F95")]
		[Address(RVA = "0x5026D40", Offset = "0x5026D40", VA = "0x5026D40")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x5026CC0", Offset = "0x5026CC0", VA = "0x5026CC0")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public IntPtr(int value)
	{
	}

	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x5026CD0", Offset = "0x5026CD0", VA = "0x5026CD0")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public IntPtr(long value)
	{
	}

	[Token(Token = "0x6000F93")]
	[Address(RVA = "0x5026CE0", Offset = "0x5026CE0", VA = "0x5026CE0")]
	[CLSCompliant(false)]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public unsafe IntPtr(void* value)
	{
	}

	[Token(Token = "0x6000F94")]
	[Address(RVA = "0x5026CF0", Offset = "0x5026CF0", VA = "0x5026CF0")]
	private IntPtr(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000F96")]
	[Address(RVA = "0x5026D50", Offset = "0x5026D50", VA = "0x5026D50", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000F97")]
	[Address(RVA = "0x5026DF0", Offset = "0x5026DF0", VA = "0x5026DF0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F98")]
	[Address(RVA = "0x5022580", Offset = "0x5022580", VA = "0x5022580", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F99")]
	[Address(RVA = "0x5026DE0", Offset = "0x5026DE0", VA = "0x5026DE0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public long ToInt64()
	{
		return default(long);
	}

	[Token(Token = "0x6000F9A")]
	[Address(RVA = "0x5026E20", Offset = "0x5026E20", VA = "0x5026E20")]
	[CLSCompliant(false)]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public unsafe void* ToPointer()
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x5026E30", Offset = "0x5026E30", VA = "0x5026E30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000F9C")]
	[Address(RVA = "0x5026E50", Offset = "0x5026E50", VA = "0x5026E50")]
	public string ToString(string format)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F9D")]
	[Address(RVA = "0x5026E70", Offset = "0x5026E70", VA = "0x5026E70")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static bool operator ==(IntPtr value1, IntPtr value2)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F9E")]
	[Address(RVA = "0x5026E80", Offset = "0x5026E80", VA = "0x5026E80")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static bool operator !=(IntPtr value1, IntPtr value2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F9F")]
	[Address(RVA = "0x5026E90", Offset = "0x5026E90", VA = "0x5026E90")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static explicit operator IntPtr(int value)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FA0")]
	[Address(RVA = "0x5026EA0", Offset = "0x5026EA0", VA = "0x5026EA0")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static explicit operator IntPtr(long value)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FA1")]
	[Address(RVA = "0x5026EB0", Offset = "0x5026EB0", VA = "0x5026EB0")]
	[CLSCompliant(false)]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public unsafe static explicit operator IntPtr(void* value)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FA2")]
	[Address(RVA = "0x5026EC0", Offset = "0x5026EC0", VA = "0x5026EC0")]
	public static explicit operator int(IntPtr value)
	{
		return default(int);
	}

	[Token(Token = "0x6000FA3")]
	[Address(RVA = "0x5026ED0", Offset = "0x5026ED0", VA = "0x5026ED0")]
	[CLSCompliant(false)]
	public unsafe static explicit operator void*(IntPtr value)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000FA4")]
	[Address(RVA = "0x5026EE0", Offset = "0x5026EE0", VA = "0x5026EE0")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static IntPtr Add(IntPtr pointer, int offset)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FA5")]
	[Address(RVA = "0x5026EF0", Offset = "0x5026EF0", VA = "0x5026EF0")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static IntPtr operator +(IntPtr pointer, int offset)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FA6")]
	[Address(RVA = "0x5026F00", Offset = "0x5026F00", VA = "0x5026F00")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static IntPtr operator -(IntPtr pointer, int offset)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FA7")]
	[Address(RVA = "0x5026F10", Offset = "0x5026F10", VA = "0x5026F10")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal bool IsNull()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FA8")]
	[Address(RVA = "0x5026F20", Offset = "0x5026F20", VA = "0x5026F20", Slot = "5")]
	private bool System_002EIEquatable_003CSystem_002EIntPtr_003E_002EEquals(IntPtr other)
	{
		return default(bool);
	}
}
