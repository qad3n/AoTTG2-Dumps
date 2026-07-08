using System.Reflection;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200019C")]
[ComVisible(true)]
public struct RuntimeMethodHandle : ISerializable
{
	[Token(Token = "0x40006C3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr value;

	[Token(Token = "0x17000172")]
	public IntPtr Value
	{
		[Token(Token = "0x6000FED")]
		[Address(RVA = "0x502C9F0", Offset = "0x502C9F0", VA = "0x502C9F0")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x502C870", Offset = "0x502C870", VA = "0x502C870")]
	internal RuntimeMethodHandle(IntPtr v)
	{
	}

	[Token(Token = "0x6000FEC")]
	[Address(RVA = "0x502C880", Offset = "0x502C880", VA = "0x502C880")]
	private RuntimeMethodHandle(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000FEE")]
	[Address(RVA = "0x502CA00", Offset = "0x502CA00", VA = "0x502CA00", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000FEF")]
	[Address(RVA = "0x502CB70", Offset = "0x502CB70", VA = "0x502CB70", Slot = "0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FF0")]
	[Address(RVA = "0x502CC50", Offset = "0x502CC50", VA = "0x502CC50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000FF1")]
	[Address(RVA = "0x502CC60", Offset = "0x502CC60", VA = "0x502CC60")]
	internal static string ConstructInstantiation(System.Reflection.RuntimeMethodInfo method, System.TypeNameFormatFlags format)
	{
		return null;
	}

	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x502CDB0", Offset = "0x502CDB0", VA = "0x502CDB0")]
	internal bool IsNullHandle()
	{
		return default(bool);
	}
}
