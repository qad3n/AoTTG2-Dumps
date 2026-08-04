// ==================== AoTTG2 cross-reference ====================
// Type: System.IntPtr
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x3D0C860", Offset = "0x3D0C860", VA = "0x3D0C860")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000F91")]
	[Address(RVA = "0x3D0C7E0", Offset = "0x3D0C7E0", VA = "0x3D0C7E0")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public IntPtr(int value)
	{
	}

	[Token(Token = "0x6000F92")]
	[Address(RVA = "0x3D0C7F0", Offset = "0x3D0C7F0", VA = "0x3D0C7F0")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public IntPtr(long value)
	{
	}

	[Token(Token = "0x6000F93")]
	[Address(RVA = "0x3D0C800", Offset = "0x3D0C800", VA = "0x3D0C800")]
	[CLSCompliant(false)]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public unsafe IntPtr(void* value)
	{
	}

	[Token(Token = "0x6000F94")]
	[Address(RVA = "0x3D0C810", Offset = "0x3D0C810", VA = "0x3D0C810")]
	private IntPtr(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000F96")]
	[Address(RVA = "0x3D0C870", Offset = "0x3D0C870", VA = "0x3D0C870", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000F97")]
	[Address(RVA = "0x3D0C910", Offset = "0x3D0C910", VA = "0x3D0C910", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F98")]
	[Address(RVA = "0x3D080A0", Offset = "0x3D080A0", VA = "0x3D080A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F99")]
	[Address(RVA = "0x3D0C900", Offset = "0x3D0C900", VA = "0x3D0C900")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public long ToInt64()
	{
		return default(long);
	}

	[Token(Token = "0x6000F9A")]
	[Address(RVA = "0x3D0C940", Offset = "0x3D0C940", VA = "0x3D0C940")]
	[CLSCompliant(false)]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public unsafe void* ToPointer()
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000F9B")]
	[Address(RVA = "0x3D0C950", Offset = "0x3D0C950", VA = "0x3D0C950", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000F9C")]
	[Address(RVA = "0x3D0C970", Offset = "0x3D0C970", VA = "0x3D0C970")]
	public string ToString(string format)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F9D")]
	[Address(RVA = "0x3D0C990", Offset = "0x3D0C990", VA = "0x3D0C990")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static bool operator ==(IntPtr value1, IntPtr value2)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000F9E")]
	[Address(RVA = "0x3D0C9A0", Offset = "0x3D0C9A0", VA = "0x3D0C9A0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static bool operator !=(IntPtr value1, IntPtr value2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F9F")]
	[Address(RVA = "0x3D0C9B0", Offset = "0x3D0C9B0", VA = "0x3D0C9B0")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static explicit operator IntPtr(int value)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FA0")]
	[Address(RVA = "0x3D0C9C0", Offset = "0x3D0C9C0", VA = "0x3D0C9C0")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static explicit operator IntPtr(long value)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FA1")]
	[Address(RVA = "0x3D0C9D0", Offset = "0x3D0C9D0", VA = "0x3D0C9D0")]
	[CLSCompliant(false)]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public unsafe static explicit operator IntPtr(void* value)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FA2")]
	[Address(RVA = "0x3D0C9E0", Offset = "0x3D0C9E0", VA = "0x3D0C9E0")]
	public static explicit operator int(IntPtr value)
	{
		return default(int);
	}

	[Token(Token = "0x6000FA3")]
	[Address(RVA = "0x3D0C9F0", Offset = "0x3D0C9F0", VA = "0x3D0C9F0")]
	[CLSCompliant(false)]
	public unsafe static explicit operator void*(IntPtr value)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000FA4")]
	[Address(RVA = "0x3D0CA00", Offset = "0x3D0CA00", VA = "0x3D0CA00")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static IntPtr Add(IntPtr pointer, int offset)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FA5")]
	[Address(RVA = "0x3D0CA10", Offset = "0x3D0CA10", VA = "0x3D0CA10")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static IntPtr operator +(IntPtr pointer, int offset)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FA6")]
	[Address(RVA = "0x3D0CA20", Offset = "0x3D0CA20", VA = "0x3D0CA20")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static IntPtr operator -(IntPtr pointer, int offset)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FA7")]
	[Address(RVA = "0x3D0CA30", Offset = "0x3D0CA30", VA = "0x3D0CA30")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal bool IsNull()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FA8")]
	[Address(RVA = "0x3D0CA40", Offset = "0x3D0CA40", VA = "0x3D0CA40", Slot = "5")]
	private bool System_002EIEquatable_003CSystem_002EIntPtr_003E_002EEquals(IntPtr other)
	{
		return default(bool);
	}
}
