// ==================== AoTTG2 cross-reference ====================
// Type: System.UIntPtr
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20001DC")]
[ComVisible(true)]
[CLSCompliant(false)]
public readonly struct UIntPtr : ISerializable, IEquatable<UIntPtr>
{
	[Token(Token = "0x4000921")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly UIntPtr Zero;

	[Token(Token = "0x4000922")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private unsafe readonly void* _pointer;

	[Token(Token = "0x17000183")]
	public static int Size
	{
		[Token(Token = "0x60010EC")]
		[Address(RVA = "0x846F50", Offset = "0x845550", VA = "0x180846F50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60010DE")]
	[Address(RVA = "0x1BA8F10", Offset = "0x1BA7510", VA = "0x181BA8F10")]
	public UIntPtr(ulong value)
	{
	}

	[Token(Token = "0x60010DF")]
	[Address(RVA = "0x1BA8F00", Offset = "0x1BA7500", VA = "0x181BA8F00")]
	public UIntPtr(uint value)
	{
	}

	[Token(Token = "0x60010E0")]
	[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
	[CLSCompliant(false)]
	public unsafe UIntPtr(void* value)
	{
	}

	[Token(Token = "0x60010E1")]
	[Address(RVA = "0x1BA8DC0", Offset = "0x1BA73C0", VA = "0x181BA8DC0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60010E2")]
	[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60010E3")]
	[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
	[CLSCompliant(false)]
	public unsafe void* ToPointer()
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x60010E4")]
	[Address(RVA = "0x1BA8EC0", Offset = "0x1BA74C0", VA = "0x181BA8EC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60010E5")]
	[Address(RVA = "0x1BA8E20", Offset = "0x1BA7420", VA = "0x181BA8E20", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x60010E6")]
	[Address(RVA = "0x841F20", Offset = "0x840520", VA = "0x180841F20")]
	public static bool operator ==(UIntPtr value1, UIntPtr value2)
	{
		return default(bool);
	}

	[Token(Token = "0x60010E7")]
	[Address(RVA = "0x5286D0", Offset = "0x526CD0", VA = "0x1805286D0")]
	public static bool operator !=(UIntPtr value1, UIntPtr value2)
	{
		return default(bool);
	}

	[Token(Token = "0x60010E8")]
	[Address(RVA = "0x1B827F0", Offset = "0x1B80DF0", VA = "0x181B827F0")]
	public static explicit operator UIntPtr(ulong value)
	{
		return default(UIntPtr);
	}

	[Token(Token = "0x60010E9")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
	[CLSCompliant(false)]
	public unsafe static explicit operator UIntPtr(void* value)
	{
		return default(UIntPtr);
	}

	[Token(Token = "0x60010EA")]
	[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
	[CLSCompliant(false)]
	public unsafe static explicit operator void*(UIntPtr value)
	{
		//IL_0002: Expected I, but got O
		return (void*)unchecked((nint)null);
	}

	[Token(Token = "0x60010EB")]
	[Address(RVA = "0x611500", Offset = "0x60FB00", VA = "0x180611500")]
	public static explicit operator UIntPtr(uint value)
	{
		return default(UIntPtr);
	}

	[Token(Token = "0x60010ED")]
	[Address(RVA = "0x187DED0", Offset = "0x187C4D0", VA = "0x18187DED0", Slot = "5")]
	private bool System_002EIEquatable_003CSystem_002EUIntPtr_003E_002EEquals(UIntPtr other)
	{
		return default(bool);
	}
}
