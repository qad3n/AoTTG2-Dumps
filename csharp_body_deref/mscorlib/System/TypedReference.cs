// ==================== AoTTG2 cross-reference ====================
// Type: System.TypedReference
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Runtime.Versioning;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x200019A")]
[System.Runtime.Versioning.NonVersionable]
[CLSCompliant(false)]
[ComVisible(true)]
public ref struct TypedReference
{
	[Token(Token = "0x400065F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private RuntimeTypeHandle type;

	[Token(Token = "0x4000660")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private IntPtr Value;

	[Token(Token = "0x4000661")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr Type;

	[Token(Token = "0x17000151")]
	internal bool IsNull
	{
		[Token(Token = "0x6000F2A")]
		[Address(RVA = "0x1B91E20", Offset = "0x1B90420", VA = "0x181B91E20")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F26")]
	[Address(RVA = "0x1B91830", Offset = "0x1B8FE30", VA = "0x181B91830")]
	[CLSCompliant(false)]
	public static TypedReference MakeTypedReference(object target, FieldInfo[] flds)
	{
		return (TypedReference)null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F27")]
	[Address(RVA = "0x1B91820", Offset = "0x1B8FE20", VA = "0x181B91820")]
	private unsafe static extern void InternalMakeTypedReference(void* result, object target, IntPtr[] flds, System.RuntimeType lastFieldType);

	[Token(Token = "0x6000F28")]
	[Address(RVA = "0x1B917C0", Offset = "0x1B8FDC0", VA = "0x181B917C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F29")]
	[Address(RVA = "0x1B91760", Offset = "0x1B8FD60", VA = "0x181B91760", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F2B")]
	[Address(RVA = "0x1B91DD0", Offset = "0x1B903D0", VA = "0x181B91DD0")]
	[CLSCompliant(false)]
	public static void SetTypedReference(TypedReference target, object value)
	{
	}
}
