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
		[Address(RVA = "0x501D6C0", Offset = "0x501D6C0", VA = "0x501D6C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000ED8")]
	[Address(RVA = "0x501D1B0", Offset = "0x501D1B0", VA = "0x501D1B0")]
	[CLSCompliant(false)]
	public static TypedReference MakeTypedReference(object target, FieldInfo[] flds)
	{
		return (TypedReference)null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000ED9")]
	[Address(RVA = "0x501D600", Offset = "0x501D600", VA = "0x501D600")]
	private unsafe static extern void InternalMakeTypedReference(void* result, object target, IntPtr[] flds, System.RuntimeType lastFieldType);

	[Token(Token = "0x6000EDA")]
	[Address(RVA = "0x501D610", Offset = "0x501D610", VA = "0x501D610", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000EDB")]
	[Address(RVA = "0x501D670", Offset = "0x501D670", VA = "0x501D670", Slot = "0")]
	public override bool Equals(object o)
	{
		return default(bool);
	}

	[Token(Token = "0x6000EDD")]
	[Address(RVA = "0x501D6E0", Offset = "0x501D6E0", VA = "0x501D6E0")]
	[CLSCompliant(false)]
	public static void SetTypedReference(TypedReference target, object value)
	{
	}
}
