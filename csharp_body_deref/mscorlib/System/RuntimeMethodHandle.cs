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
		[Address(RVA = "0x3D12510", Offset = "0x3D12510", VA = "0x3D12510")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x6000FEB")]
	[Address(RVA = "0x3D12390", Offset = "0x3D12390", VA = "0x3D12390")]
	internal RuntimeMethodHandle(IntPtr v)
	{
	}

	[Token(Token = "0x6000FEC")]
	[Address(RVA = "0x3D123A0", Offset = "0x3D123A0", VA = "0x3D123A0")]
	private RuntimeMethodHandle(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000FEE")]
	[Address(RVA = "0x3D12520", Offset = "0x3D12520", VA = "0x3D12520", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000FEF")]
	[Address(RVA = "0x3D12690", Offset = "0x3D12690", VA = "0x3D12690", Slot = "0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FF0")]
	[Address(RVA = "0x3D12770", Offset = "0x3D12770", VA = "0x3D12770", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000FF1")]
	[Address(RVA = "0x3D12780", Offset = "0x3D12780", VA = "0x3D12780")]
	internal static string ConstructInstantiation(System.Reflection.RuntimeMethodInfo method, System.TypeNameFormatFlags format)
	{
		return null;
	}

	[Token(Token = "0x6000FF2")]
	[Address(RVA = "0x3D128D0", Offset = "0x3D128D0", VA = "0x3D128D0")]
	internal bool IsNullHandle()
	{
		return default(bool);
	}
}
