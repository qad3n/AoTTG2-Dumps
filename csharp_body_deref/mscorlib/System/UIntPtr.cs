// ==================== AoTTG2 cross-reference ====================
// Type: System.UIntPtr
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20001B4")]
[CLSCompliant(false)]
[ComVisible(true)]
public readonly struct UIntPtr : ISerializable, IEquatable<UIntPtr>
{
	[Token(Token = "0x400087F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly UIntPtr Zero;

	[Token(Token = "0x4000880")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private unsafe readonly void* _pointer;

	[Token(Token = "0x17000182")]
	public static int Size
	{
		[Token(Token = "0x60010C3")]
		[Address(RVA = "0x5520790", Offset = "0x551F790", VA = "0x5520790")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60010B5")]
	[Address(RVA = "0x5520780", Offset = "0x551F780", VA = "0x5520780")]
	public UIntPtr(ulong value)
	{
	}

	[Token(Token = "0x60010B6")]
	[Address(RVA = "0x55207A0", Offset = "0x551F7A0", VA = "0x55207A0")]
	public UIntPtr(uint value)
	{
	}

	[Token(Token = "0x60010B7")]
	[Address(RVA = "0x55207B0", Offset = "0x551F7B0", VA = "0x55207B0")]
	[CLSCompliant(false)]
	public unsafe UIntPtr(void* value)
	{
	}

	[Token(Token = "0x60010B8")]
	[Address(RVA = "0x55207C0", Offset = "0x551F7C0", VA = "0x55207C0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010B9")]
	[Address(RVA = "0x55207F0", Offset = "0x551F7F0", VA = "0x55207F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60010BA")]
	[Address(RVA = "0x5520800", Offset = "0x551F800", VA = "0x5520800")]
	[CLSCompliant(false)]
	public unsafe void* ToPointer()
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x60010BB")]
	[Address(RVA = "0x5520810", Offset = "0x551F810", VA = "0x5520810", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60010BC")]
	[Address(RVA = "0x5520830", Offset = "0x551F830", VA = "0x5520830", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60010BD")]
	[Address(RVA = "0x55208C0", Offset = "0x551F8C0", VA = "0x55208C0")]
	public static bool operator ==(UIntPtr value1, UIntPtr value2)
	{
		return default(bool);
	}

	[Token(Token = "0x60010BE")]
	[Address(RVA = "0x55208D0", Offset = "0x551F8D0", VA = "0x55208D0")]
	public static bool operator !=(UIntPtr value1, UIntPtr value2)
	{
		return default(bool);
	}

	[Token(Token = "0x60010BF")]
	[Address(RVA = "0x55208E0", Offset = "0x551F8E0", VA = "0x55208E0")]
	public static explicit operator UIntPtr(ulong value)
	{
		return default(UIntPtr);
	}

	[Token(Token = "0x60010C0")]
	[Address(RVA = "0x55208F0", Offset = "0x551F8F0", VA = "0x55208F0")]
	[CLSCompliant(false)]
	public unsafe static explicit operator UIntPtr(void* value)
	{
		return default(UIntPtr);
	}

	[Token(Token = "0x60010C1")]
	[Address(RVA = "0x5520900", Offset = "0x551F900", VA = "0x5520900")]
	[CLSCompliant(false)]
	public unsafe static explicit operator void*(UIntPtr value)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x60010C2")]
	[Address(RVA = "0x5520910", Offset = "0x551F910", VA = "0x5520910")]
	public static explicit operator UIntPtr(uint value)
	{
		return default(UIntPtr);
	}

	[Token(Token = "0x60010C4")]
	[Address(RVA = "0x5520920", Offset = "0x551F920", VA = "0x5520920", Slot = "5")]
	private bool System_002EIEquatable_003CSystem_002EUIntPtr_003E_002EEquals(UIntPtr other)
	{
		return default(bool);
	}
}
