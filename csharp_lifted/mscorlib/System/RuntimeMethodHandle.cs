// ==================== AoTTG2 cross-reference ====================
// Type: System.RuntimeMethodHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200019F")]
[ComVisible(true)]
public struct RuntimeMethodHandle : ISerializable
{
	[Token(Token = "0x4000685")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr value;

	[Token(Token = "0x17000173")]
	public IntPtr Value
	{
		[Token(Token = "0x600101B")]
		[Address(RVA = "0x5515D70", Offset = "0x5514D70", VA = "0x5515D70")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x6001019")]
	[Address(RVA = "0x5515BF0", Offset = "0x5514BF0", VA = "0x5515BF0")]
	internal RuntimeMethodHandle(IntPtr v)
	{
	}

	[Token(Token = "0x600101A")]
	[Address(RVA = "0x5515C00", Offset = "0x5514C00", VA = "0x5515C00")]
	private RuntimeMethodHandle(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600101C")]
	[Address(RVA = "0x5515D80", Offset = "0x5514D80", VA = "0x5515D80", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600101D")]
	[Address(RVA = "0x5515EF0", Offset = "0x5514EF0", VA = "0x5515EF0", Slot = "0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600101E")]
	[Address(RVA = "0x5515FD0", Offset = "0x5514FD0", VA = "0x5515FD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600101F")]
	[Address(RVA = "0x5515FE0", Offset = "0x5514FE0", VA = "0x5515FE0")]
	internal static string ConstructInstantiation(System.Reflection.RuntimeMethodInfo method, System.TypeNameFormatFlags format)
	{
		return null;
	}

	[Token(Token = "0x6001020")]
	[Address(RVA = "0x5516170", Offset = "0x5515170", VA = "0x5516170")]
	internal bool IsNullHandle()
	{
		return default(bool);
	}
}
