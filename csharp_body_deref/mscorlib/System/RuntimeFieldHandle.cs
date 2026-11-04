// ==================== AoTTG2 cross-reference ====================
// Type: System.RuntimeFieldHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20001C6")]
[ComVisible(true)]
public struct RuntimeFieldHandle : ISerializable
{
	[Token(Token = "0x4000726")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr value;

	[Token(Token = "0x17000173")]
	public IntPtr Value
	{
		[Token(Token = "0x600103B")]
		[Address(RVA = "0x72FFC0", Offset = "0x72E5C0", VA = "0x18072FFC0")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x6001039")]
	[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
	internal RuntimeFieldHandle(IntPtr v)
	{
	}

	[Token(Token = "0x600103A")]
	[Address(RVA = "0x1B88EC0", Offset = "0x1B874C0", VA = "0x181B88EC0")]
	private RuntimeFieldHandle(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600103C")]
	[Address(RVA = "0x1B88D10", Offset = "0x1B87310", VA = "0x181B88D10", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x600103D")]
	[Address(RVA = "0x1B88C20", Offset = "0x1B87220", VA = "0x181B88C20", Slot = "0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600103E")]
	[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600103F")]
	[Address(RVA = "0x1B88EB0", Offset = "0x1B874B0", VA = "0x181B88EB0")]
	private static extern void SetValueInternal(FieldInfo fi, object obj, object value);

	[Token(Token = "0x6001040")]
	[Address(RVA = "0x1B88EB0", Offset = "0x1B874B0", VA = "0x181B88EB0")]
	internal static void SetValue(System.Reflection.RuntimeFieldInfo field, object obj, object value, System.RuntimeType fieldType, FieldAttributes fieldAttr, System.RuntimeType declaringType, ref bool domainInitialized)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001041")]
	[Address(RVA = "0x1B88EA0", Offset = "0x1B874A0", VA = "0x181B88EA0")]
	internal unsafe static extern void SetValueDirect(System.Reflection.RuntimeFieldInfo field, System.RuntimeType fieldType, void* pTypedRef, object value, System.RuntimeType contextType);
}
