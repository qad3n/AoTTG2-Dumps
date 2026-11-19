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

[Token(Token = "0x2000172")]
[CLSCompliant(false)]
[ComVisible(true)]
[System.Runtime.Versioning.NonVersionable]
public ref struct TypedReference
{
	[Token(Token = "0x40005BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private RuntimeTypeHandle type;

	[Token(Token = "0x40005BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private IntPtr Value;

	[Token(Token = "0x40005BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr Type;

	[Token(Token = "0x17000151")]
	internal bool IsNull
	{
		[Token(Token = "0x6000F04")]
		[Address(RVA = "0x55069B0", Offset = "0x55059B0", VA = "0x55069B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000F00")]
	[Address(RVA = "0x55064C0", Offset = "0x55054C0", VA = "0x55064C0")]
	[CLSCompliant(false)]
	public static TypedReference MakeTypedReference(object target, FieldInfo[] flds)
	{
		return (TypedReference)null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000F01")]
	[Address(RVA = "0x55068F0", Offset = "0x55058F0", VA = "0x55068F0")]
	private unsafe static extern void InternalMakeTypedReference(void* result, object target, IntPtr[] flds, System.RuntimeType lastFieldType);

	[Token(Token = "0x6000F02")]
	[Address(RVA = "0x5506900", Offset = "0x5505900", VA = "0x5506900", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000F03")]
	[Address(RVA = "0x5506960", Offset = "0x5505960", VA = "0x5506960", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F05")]
	[Address(RVA = "0x55069D0", Offset = "0x55059D0", VA = "0x55069D0")]
	[CLSCompliant(false)]
	public static void SetTypedReference(TypedReference target, object value)
	{
	}
}
