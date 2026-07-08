using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200019B")]
[ComVisible(true)]
public struct RuntimeFieldHandle : ISerializable
{
	[Token(Token = "0x40006C2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr value;

	[Token(Token = "0x17000171")]
	public IntPtr Value
	{
		[Token(Token = "0x6000FE4")]
		[Address(RVA = "0x502C5D0", Offset = "0x502C5D0", VA = "0x502C5D0")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x6000FE2")]
	[Address(RVA = "0x502C450", Offset = "0x502C450", VA = "0x502C450")]
	internal RuntimeFieldHandle(IntPtr v)
	{
	}

	[Token(Token = "0x6000FE3")]
	[Address(RVA = "0x502C460", Offset = "0x502C460", VA = "0x502C460")]
	private RuntimeFieldHandle(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000FE5")]
	[Address(RVA = "0x502C5E0", Offset = "0x502C5E0", VA = "0x502C5E0", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000FE6")]
	[Address(RVA = "0x502C750", Offset = "0x502C750", VA = "0x502C750", Slot = "0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FE7")]
	[Address(RVA = "0x502C830", Offset = "0x502C830", VA = "0x502C830", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FE8")]
	[Address(RVA = "0x502C840", Offset = "0x502C840", VA = "0x502C840")]
	private static extern void SetValueInternal(FieldInfo fi, object obj, object value);

	[Token(Token = "0x6000FE9")]
	[Address(RVA = "0x502C850", Offset = "0x502C850", VA = "0x502C850")]
	internal static void SetValue(System.Reflection.RuntimeFieldInfo field, object obj, object value, System.RuntimeType fieldType, FieldAttributes fieldAttr, System.RuntimeType declaringType, ref bool domainInitialized)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000FEA")]
	[Address(RVA = "0x502C860", Offset = "0x502C860", VA = "0x502C860")]
	internal unsafe static extern void SetValueDirect(System.Reflection.RuntimeFieldInfo field, System.RuntimeType fieldType, void* pTypedRef, object value, System.RuntimeType contextType);
}
