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
		[Address(RVA = "0x5037A20", Offset = "0x5037A20", VA = "0x5037A20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6001087")]
	[Address(RVA = "0x5037A10", Offset = "0x5037A10", VA = "0x5037A10")]
	public UIntPtr(ulong value)
	{
	}

	[Token(Token = "0x6001088")]
	[Address(RVA = "0x5037A30", Offset = "0x5037A30", VA = "0x5037A30")]
	public UIntPtr(uint value)
	{
	}

	[Token(Token = "0x6001089")]
	[Address(RVA = "0x5037A40", Offset = "0x5037A40", VA = "0x5037A40")]
	[CLSCompliant(false)]
	public unsafe UIntPtr(void* value)
	{
	}

	[Token(Token = "0x600108A")]
	[Address(RVA = "0x5037A50", Offset = "0x5037A50", VA = "0x5037A50", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600108B")]
	[Address(RVA = "0x5037A80", Offset = "0x5037A80", VA = "0x5037A80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600108C")]
	[Address(RVA = "0x5037A90", Offset = "0x5037A90", VA = "0x5037A90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600108D")]
	[Address(RVA = "0x5037AB0", Offset = "0x5037AB0", VA = "0x5037AB0", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600108E")]
	[Address(RVA = "0x5037B40", Offset = "0x5037B40", VA = "0x5037B40")]
	public static bool operator ==(UIntPtr value1, UIntPtr value2)
	{
		return default(bool);
	}

	[Token(Token = "0x600108F")]
	[Address(RVA = "0x5037B50", Offset = "0x5037B50", VA = "0x5037B50")]
	public static bool operator !=(UIntPtr value1, UIntPtr value2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001090")]
	[Address(RVA = "0x5037B60", Offset = "0x5037B60", VA = "0x5037B60")]
	public static explicit operator UIntPtr(ulong value)
	{
		return default(UIntPtr);
	}

	[Token(Token = "0x6001091")]
	[Address(RVA = "0x5037B70", Offset = "0x5037B70", VA = "0x5037B70")]
	[CLSCompliant(false)]
	public unsafe static explicit operator UIntPtr(void* value)
	{
		return default(UIntPtr);
	}

	[Token(Token = "0x6001092")]
	[Address(RVA = "0x5037B80", Offset = "0x5037B80", VA = "0x5037B80")]
	public static explicit operator UIntPtr(uint value)
	{
		return default(UIntPtr);
	}

	[Token(Token = "0x6001094")]
	[Address(RVA = "0x5037B90", Offset = "0x5037B90", VA = "0x5037B90", Slot = "5")]
	private bool System_002EIEquatable_003CSystem_002EUIntPtr_003E_002EEquals(UIntPtr other)
	{
		return default(bool);
	}
}
