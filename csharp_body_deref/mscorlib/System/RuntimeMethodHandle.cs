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
[Token(Token = "0x20001C7")]
[ComVisible(true)]
public struct RuntimeMethodHandle : ISerializable
{
	[Token(Token = "0x4000727")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr value;

	[Token(Token = "0x17000174")]
	public IntPtr Value
	{
		[Token(Token = "0x6001044")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x6001042")]
	[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
	internal RuntimeMethodHandle(IntPtr v)
	{
	}

	[Token(Token = "0x6001043")]
	[Address(RVA = "0x1B89430", Offset = "0x1B87A30", VA = "0x181B89430")]
	private RuntimeMethodHandle(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001045")]
	[Address(RVA = "0x1B892A0", Offset = "0x1B878A0", VA = "0x181B892A0", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001046")]
	[Address(RVA = "0x1B891B0", Offset = "0x1B877B0", VA = "0x181B891B0", Slot = "0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001047")]
	[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6001048")]
	[Address(RVA = "0x1B89060", Offset = "0x1B87660", VA = "0x181B89060")]
	internal static string ConstructInstantiation(System.Reflection.RuntimeMethodInfo method, System.TypeNameFormatFlags format)
	{
		return null;
	}

	[Token(Token = "0x6001049")]
	[Address(RVA = "0x187E270", Offset = "0x187C870", VA = "0x18187E270")]
	internal bool IsNullHandle()
	{
		return default(bool);
	}
}
