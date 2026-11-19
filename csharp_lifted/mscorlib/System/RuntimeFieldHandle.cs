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
[Token(Token = "0x200019E")]
[ComVisible(true)]
public struct RuntimeFieldHandle : ISerializable
{
	[Token(Token = "0x4000684")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private IntPtr value;

	[Token(Token = "0x17000172")]
	public IntPtr Value
	{
		[Token(Token = "0x6001012")]
		[Address(RVA = "0x5515950", Offset = "0x5514950", VA = "0x5515950")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x6001010")]
	[Address(RVA = "0x55157D0", Offset = "0x55147D0", VA = "0x55157D0")]
	internal RuntimeFieldHandle(IntPtr v)
	{
	}

	[Token(Token = "0x6001011")]
	[Address(RVA = "0x55157E0", Offset = "0x55147E0", VA = "0x55157E0")]
	private RuntimeFieldHandle(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001013")]
	[Address(RVA = "0x5515960", Offset = "0x5514960", VA = "0x5515960", Slot = "4")]
	public void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6001014")]
	[Address(RVA = "0x5515AD0", Offset = "0x5514AD0", VA = "0x5515AD0", Slot = "0")]
	[ReliabilityContract(Consistency.WillNotCorruptState, Cer.Success)]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6001015")]
	[Address(RVA = "0x5515BB0", Offset = "0x5514BB0", VA = "0x5515BB0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001016")]
	[Address(RVA = "0x5515BC0", Offset = "0x5514BC0", VA = "0x5515BC0")]
	private static extern void SetValueInternal(FieldInfo fi, object obj, object value);

	[Token(Token = "0x6001017")]
	[Address(RVA = "0x5515BD0", Offset = "0x5514BD0", VA = "0x5515BD0")]
	internal static void SetValue(System.Reflection.RuntimeFieldInfo field, object obj, object value, System.RuntimeType fieldType, FieldAttributes fieldAttr, System.RuntimeType declaringType, ref bool domainInitialized)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001018")]
	[Address(RVA = "0x5515BE0", Offset = "0x5514BE0", VA = "0x5515BE0")]
	internal unsafe static extern void SetValueDirect(System.Reflection.RuntimeFieldInfo field, System.RuntimeType fieldType, void* pTypedRef, object value, System.RuntimeType contextType);
}
