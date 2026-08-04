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

[Token(Token = "0x2000170")]
[CLSCompliant(false)]
[System.Runtime.Versioning.NonVersionable]
[ComVisible(true)]
public ref struct TypedReference
{
	[Token(Token = "0x40005FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private RuntimeTypeHandle type;

	[Token(Token = "0x40005FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private IntPtr Value;

	[Token(Token = "0x4000600")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private IntPtr Type;

	[Token(Token = "0x17000150")]
	internal bool IsNull
	{
		[Token(Token = "0x6000EDC")]
		[Address(RVA = "0x3D031E0", Offset = "0x3D031E0", VA = "0x3D031E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000ED8")]
	[Address(RVA = "0x3D02CD0", Offset = "0x3D02CD0", VA = "0x3D02CD0")]
	[CLSCompliant(false)]
	public static TypedReference MakeTypedReference(object target, FieldInfo[] flds)
	{
		return (TypedReference)null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED9")]
	[Address(RVA = "0x3D03120", Offset = "0x3D03120", VA = "0x3D03120")]
	private unsafe static extern void InternalMakeTypedReference(void* result, object target, IntPtr[] flds, System.RuntimeType lastFieldType);

	[Token(Token = "0x6000EDA")]
	[Address(RVA = "0x3D03130", Offset = "0x3D03130", VA = "0x3D03130", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000EDB")]
	[Address(RVA = "0x3D03190", Offset = "0x3D03190", VA = "0x3D03190", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EDD")]
	[Address(RVA = "0x3D03200", Offset = "0x3D03200", VA = "0x3D03200")]
	[CLSCompliant(false)]
	public static void SetTypedReference(TypedReference target, object value)
	{
	}
}
