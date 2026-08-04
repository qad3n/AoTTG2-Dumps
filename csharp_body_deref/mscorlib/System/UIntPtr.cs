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
[Token(Token = "0x20001B1")]
[CLSCompliant(false)]
[ComVisible(true)]
public readonly struct UIntPtr : ISerializable, IEquatable<UIntPtr>
{
	[Token(Token = "0x40008BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly UIntPtr Zero;

	[Token(Token = "0x40008BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private unsafe readonly void* _pointer;

	[Token(Token = "0x17000181")]
	public static int Size
	{
		[Token(Token = "0x6001093")]
		[Address(RVA = "0x3D1D540", Offset = "0x3D1D540", VA = "0x3D1D540")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001087")]
	[Address(RVA = "0x3D1D530", Offset = "0x3D1D530", VA = "0x3D1D530")]
	public UIntPtr(ulong value)
	{
	}

	[Token(Token = "0x6001088")]
	[Address(RVA = "0x3D1D550", Offset = "0x3D1D550", VA = "0x3D1D550")]
	public UIntPtr(uint value)
	{
	}

	[Token(Token = "0x6001089")]
	[Address(RVA = "0x3D1D560", Offset = "0x3D1D560", VA = "0x3D1D560")]
	[CLSCompliant(false)]
	public unsafe UIntPtr(void* value)
	{
	}

	[Token(Token = "0x600108A")]
	[Address(RVA = "0x3D1D570", Offset = "0x3D1D570", VA = "0x3D1D570", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600108B")]
	[Address(RVA = "0x3D1D5A0", Offset = "0x3D1D5A0", VA = "0x3D1D5A0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600108C")]
	[Address(RVA = "0x3D1D5B0", Offset = "0x3D1D5B0", VA = "0x3D1D5B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600108D")]
	[Address(RVA = "0x3D1D5D0", Offset = "0x3D1D5D0", VA = "0x3D1D5D0", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600108E")]
	[Address(RVA = "0x3D1D660", Offset = "0x3D1D660", VA = "0x3D1D660")]
	public static bool operator ==(UIntPtr value1, UIntPtr value2)
	{
		return default(bool);
	}

	[Token(Token = "0x600108F")]
	[Address(RVA = "0x3D1D670", Offset = "0x3D1D670", VA = "0x3D1D670")]
	public static bool operator !=(UIntPtr value1, UIntPtr value2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001090")]
	[Address(RVA = "0x3D1D680", Offset = "0x3D1D680", VA = "0x3D1D680")]
	public static explicit operator UIntPtr(ulong value)
	{
		return default(UIntPtr);
	}

	[Token(Token = "0x6001091")]
	[Address(RVA = "0x3D1D690", Offset = "0x3D1D690", VA = "0x3D1D690")]
	[CLSCompliant(false)]
	public unsafe static explicit operator UIntPtr(void* value)
	{
		return default(UIntPtr);
	}

	[Token(Token = "0x6001092")]
	[Address(RVA = "0x3D1D6A0", Offset = "0x3D1D6A0", VA = "0x3D1D6A0")]
	public static explicit operator UIntPtr(uint value)
	{
		return default(UIntPtr);
	}

	[Token(Token = "0x6001094")]
	[Address(RVA = "0x3D1D6B0", Offset = "0x3D1D6B0", VA = "0x3D1D6B0", Slot = "5")]
	private bool System_002EIEquatable_003CSystem_002EUIntPtr_003E_002EEquals(UIntPtr other)
	{
		return default(bool);
	}
}
