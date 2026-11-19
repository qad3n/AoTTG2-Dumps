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
[Token(Token = "0x2000191")]
[ComVisible(true)]
public readonly struct IntPtr : ISerializable, IEquatable<IntPtr>
{
	[Token(Token = "0x4000669")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private unsafe readonly void* m_value;

	[Token(Token = "0x400066A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly IntPtr Zero;

	[Token(Token = "0x1700016B")]
	public static int Size
	{
		[Token(Token = "0x6000FC2")]
		[Address(RVA = "0x5510250", Offset = "0x550F250", VA = "0x5510250")]
		[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000FBE")]
	[Address(RVA = "0x55101D0", Offset = "0x550F1D0", VA = "0x55101D0")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public IntPtr(int value)
	{
	}

	[Token(Token = "0x6000FBF")]
	[Address(RVA = "0x55101E0", Offset = "0x550F1E0", VA = "0x55101E0")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public IntPtr(long value)
	{
	}

	[Token(Token = "0x6000FC0")]
	[Address(RVA = "0x55101F0", Offset = "0x550F1F0", VA = "0x55101F0")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	[CLSCompliant(false)]
	public unsafe IntPtr(void* value)
	{
	}

	[Token(Token = "0x6000FC1")]
	[Address(RVA = "0x5510200", Offset = "0x550F200", VA = "0x5510200")]
	private IntPtr(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000FC3")]
	[Address(RVA = "0x5510260", Offset = "0x550F260", VA = "0x5510260", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000FC4")]
	[Address(RVA = "0x5510300", Offset = "0x550F300", VA = "0x5510300", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FC5")]
	[Address(RVA = "0x550B940", Offset = "0x550A940", VA = "0x550B940", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000FC6")]
	[Address(RVA = "0x55102F0", Offset = "0x550F2F0", VA = "0x55102F0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public long ToInt64()
	{
		return default(long);
	}

	[Token(Token = "0x6000FC7")]
	[Address(RVA = "0x5510330", Offset = "0x550F330", VA = "0x5510330")]
	[CLSCompliant(false)]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public unsafe void* ToPointer()
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000FC8")]
	[Address(RVA = "0x5510340", Offset = "0x550F340", VA = "0x5510340", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000FC9")]
	[Address(RVA = "0x5510360", Offset = "0x550F360", VA = "0x5510360")]
	public string ToString(string format)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FCA")]
	[Address(RVA = "0x5510380", Offset = "0x550F380", VA = "0x5510380")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static bool operator ==(IntPtr value1, IntPtr value2)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000FCB")]
	[Address(RVA = "0x5510390", Offset = "0x550F390", VA = "0x5510390")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public static bool operator !=(IntPtr value1, IntPtr value2)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FCC")]
	[Address(RVA = "0x55103A0", Offset = "0x550F3A0", VA = "0x55103A0")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static explicit operator IntPtr(int value)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FCD")]
	[Address(RVA = "0x55103B0", Offset = "0x550F3B0", VA = "0x55103B0")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static explicit operator IntPtr(long value)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FCE")]
	[Address(RVA = "0x55103C0", Offset = "0x550F3C0", VA = "0x55103C0")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	[CLSCompliant(false)]
	public unsafe static explicit operator IntPtr(void* value)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FCF")]
	[Address(RVA = "0x55103D0", Offset = "0x550F3D0", VA = "0x55103D0")]
	public static explicit operator int(IntPtr value)
	{
		return default(int);
	}

	[Token(Token = "0x6000FD0")]
	[Address(RVA = "0x55103E0", Offset = "0x550F3E0", VA = "0x55103E0")]
	public static explicit operator long(IntPtr value)
	{
		return default(long);
	}

	[Token(Token = "0x6000FD1")]
	[Address(RVA = "0x55103F0", Offset = "0x550F3F0", VA = "0x55103F0")]
	[CLSCompliant(false)]
	public unsafe static explicit operator void*(IntPtr value)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x6000FD2")]
	[Address(RVA = "0x5510400", Offset = "0x550F400", VA = "0x5510400")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static IntPtr Add(IntPtr pointer, int offset)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FD3")]
	[Address(RVA = "0x5510410", Offset = "0x550F410", VA = "0x5510410")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static IntPtr operator +(IntPtr pointer, int offset)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FD4")]
	[Address(RVA = "0x5510420", Offset = "0x550F420", VA = "0x5510420")]
	[ReliabilityContract(Consistency.MayCorruptInstance, Cer.MayFail)]
	public static IntPtr operator -(IntPtr pointer, int offset)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000FD5")]
	[Address(RVA = "0x5510430", Offset = "0x550F430", VA = "0x5510430")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	internal bool IsNull()
	{
		return default(bool);
	}

	[Token(Token = "0x6000FD6")]
	[Address(RVA = "0x5510440", Offset = "0x550F440", VA = "0x5510440", Slot = "5")]
	private bool System_002EIEquatable_003CSystem_002EIntPtr_003E_002EEquals(IntPtr other)
	{
		return default(bool);
	}
}
