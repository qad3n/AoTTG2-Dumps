// ==================== AoTTG2 cross-reference ====================
// Type: Utility.Cycle
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/Cycle.c
// Prior real C# source (older reference): Assets/Scripts/Utility/Cycle.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Utility;

[Token(Token = "0x2000923")]
public class Cycle<T> where T : Enum
{
	[Token(Token = "0x4002E0A")]
	[FieldOffset(Offset = "0x0")]
	private T[] values;

	[Token(Token = "0x4002E0B")]
	[FieldOffset(Offset = "0x0")]
	private int index;

	[Token(Token = "0x6005668")]
	public Cycle()
	{
	}

	[Token(Token = "0x6005669")]
	public T Next()
	{
		return (T)null;
	}

	[Token(Token = "0x600566A")]
	public T Previous()
	{
		return (T)null;
	}

	[Token(Token = "0x600566B")]
	public T Current()
	{
		return (T)null;
	}

	[Token(Token = "0x600566C")]
	public T Set(T value)
	{
		return (T)null;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Utility/Cycle.c.

	// Utility.Cycle<Int32Enum>$$.ctor: 10 lines keep C-only constructs
	private void Int32Enum___ctor()
	{
		RuntimeTypeHandle handle;
		Type enumType;
		object obj;
		Il2CppClass klass;
		Object[] pSVar1;
		object pIVar2;

		base();
		handle.value = (RuntimeTypeHandle)method.klass.rgctx_data._0_T;
		enumType = Type.GetTypeFromHandle(handle);
		obj = (object)Enum.GetValues(enumType);
		klass = method.klass.rgctx_data._1_T__;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		if (obj == null) {
			pSVar1 = null;
		}
		else {
			pSVar1 = (Object[])il2cpp_vm_Object_IsInst(obj, klass);
			if (pSVar1 == null) goto label_04a4c40b;
		}
		this.values = pSVar1;
		klass = method.klass.rgctx_data._1_T__;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		if ((obj == null) ||(pIVar2 = il2cpp_vm_Object_IsInst(obj, klass), pIVar2 != null)) {
			this.index = 0;
			return;
		}
	label_04a4c40b: ;
		throw new InvalidCastException();
	}

	// Utility.Cycle<Int32Enum>$$Next: clean
	private int Int32Enum__Next()
	{
		uint uVar1;
		Object[] pSVar2;
		uint uVar3;

		pSVar2 = this.values;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		uVar1 = (uint)pSVar2.Length;
		uVar3 = (this.index + 1) % (int)uVar1;
		this.index = uVar3;
		if (uVar1 <= uVar3) {
			throw new IndexOutOfRangeException();
		}
		return *(int)((long)pSVar2.m_Items + (long)(int)uVar3 * 4);
	}

	// Utility.Cycle<Int32Enum>$$Previous: clean
	private int Int32Enum__Previous()
	{
		uint uVar1;
		Object[] pSVar2;
		uint uVar3;

		pSVar2 = this.values;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		uVar1 = (uint)pSVar2.Length;
		uVar3 = (int)(this.index + uVar1 + -1) % (int)uVar1;
		this.index = uVar3;
		if (uVar1 <= uVar3) {
			throw new IndexOutOfRangeException();
		}
		return *(int)((long)pSVar2.m_Items + (long)(int)uVar3 * 4);
	}

	// Utility.Cycle<Int32Enum>$$Current: clean
	private int Int32Enum__Current()
	{
		uint uVar1;
		Object[] pSVar2;

		pSVar2 = this.values;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		uVar1 = this.index;
		if ((uint)pSVar2.Length <= uVar1) {
			throw new IndexOutOfRangeException();
		}
		return *(int)((long)pSVar2.m_Items + (long)(int)uVar1 * 4);
	}

	// Utility.Cycle<Int32Enum>$$Set: clean
	private int Int32Enum__Set(int value)
	{
		Object[] pSVar1;
		uint uVar2;

		uVar2 = Array.IndexOf<Int32Enum>((Int32Enum[])this.values, value);
		this.index = uVar2;
		pSVar1 = this.values;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		if ((uint)pSVar1.Length <= uVar2) {
			throw new IndexOutOfRangeException();
		}
		return *(int)((long)pSVar1.m_Items + (long)(int)uVar2 * 4);
	}

	// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$.ctor: 10 lines keep C-only constructs
	private void Il2CppFullySharedGenericStructType___ctor()
	{
		RuntimeTypeHandle handle;
		Type enumType;
		object obj;
		Il2CppClass klass;
		Object[] pSVar1;
		object pIVar2;

		base();
		handle.value = (RuntimeTypeHandle)method.klass.rgctx_data._0_T;
		enumType = Type.GetTypeFromHandle(handle);
		obj = (object)Enum.GetValues(enumType);
		klass = method.klass.rgctx_data._1_T__;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		if (obj == null) {
			pSVar1 = null;
		}
		else {
			pSVar1 = (Object[])il2cpp_vm_Object_IsInst(obj, klass);
			if (pSVar1 == null) goto label_04a4c60b;
		}
		this.values = pSVar1;
		klass = method.klass.rgctx_data._1_T__;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		if ((obj == null) ||(pIVar2 = il2cpp_vm_Object_IsInst(obj, klass), pIVar2 != null)) {
			this.index = 0;
			return;
		}
	label_04a4c60b: ;
		throw new InvalidCastException();
	}

	// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$Next: 3 lines keep C-only constructs
	private __Il2CppFullySharedGenericStructType Il2CppFullySharedGenericStructType__Next()
	{
		uint uVar1;
		uint uVar2;
		Object[] pSVar3;
		__Il2CppFullySharedGenericStructType UVar4;
		uint uVar5;
		long in_RDX;

		pSVar3 = this.values;
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		uVar1 = *(uint)(*(long)(*(long)(*(long)(in_RDX + 0x20) + 0xc0) + 0x18) + 0xfc);
		uVar2 = (uint)pSVar3.Length;
		uVar5 = (this.index + 1) % (int)uVar2;
		this.index = uVar5;
		if (uVar2 <= uVar5) {
			throw new IndexOutOfRangeException();
		}
		UVar4._tail =(__Il2CppFullySharedGenericStructType)memmove(method, (object*)((long)pSVar3.m_Items +(ulong)(((pSVar3.obj).klass)._2).element_size * (long)(int)uVar5), (ulong)uVar1);
		return (__Il2CppFullySharedGenericStructType)UVar4._tail;
	}

	// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$Previous: 3 lines keep C-only constructs
	private __Il2CppFullySharedGenericStructType Il2CppFullySharedGenericStructType__Previous()
	{
		uint uVar1;
		uint uVar2;
		Object[] pSVar3;
		__Il2CppFullySharedGenericStructType UVar4;
		uint uVar5;
		long in_RDX;

		pSVar3 = this.values;
		if (pSVar3 == null) {
			throw new NullReferenceException();
		}
		uVar1 = *(uint)(*(long)(*(long)(*(long)(in_RDX + 0x20) + 0xc0) + 0x18) + 0xfc);
		uVar2 = (uint)pSVar3.Length;
		uVar5 = (int)(this.index + uVar2 + -1) % (int)uVar2;
		this.index = uVar5;
		if (uVar2 <= uVar5) {
			throw new IndexOutOfRangeException();
		}
		UVar4._tail =(__Il2CppFullySharedGenericStructType)memmove(method, (object*)((long)pSVar3.m_Items +(ulong)(((pSVar3.obj).klass)._2).element_size * (long)(int)uVar5), (ulong)uVar1);
		return (__Il2CppFullySharedGenericStructType)UVar4._tail;
	}

	// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$Current: 2 lines keep C-only constructs
	private __Il2CppFullySharedGenericStructType Il2CppFullySharedGenericStructType__Current()
	{
		uint uVar1;
		Object[] pSVar2;
		__Il2CppFullySharedGenericStructType UVar3;
		long in_RDX;

		pSVar2 = this.values;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		uVar1 = this.index;
		if ((uint)pSVar2.Length <= uVar1) {
			throw new IndexOutOfRangeException();
		}
		UVar3._tail =(__Il2CppFullySharedGenericStructType)memmove(method, (object*)((long)pSVar2.m_Items +(ulong)(((pSVar2.obj).klass)._2).element_size * (long)(int)uVar1), (ulong)*(uint)(*(long)(*(long)(*(long)(in_RDX + 0x20) + 0xc0) + 0x18) + 0xfc));
		return (__Il2CppFullySharedGenericStructType)UVar3._tail;
	}

	// Utility.Cycle<__Il2CppFullySharedGenericStructType>$$Set: 14 lines keep C-only constructs
	private __Il2CppFullySharedGenericStructType Il2CppFullySharedGenericStructType__Set(__Il2CppFullySharedGenericStructType value)
	{
		uint uVar1;
		long lVar2;
		Object[] pSVar3;
		ulong puVar4;
		ulong uVar5;
		code *pcVar6;
		long lVar7;
		MethodInfo_494C780 __dest;
		__Il2CppFullySharedGenericStructType UVar8;
		long in_RCX;
		ulong __n;
		ulong uStack_60;
		Object[] local_58;
		IntPtr local_50;
		MethodInfo_494C780 local_40;
		uint local_34;

		lVar2 = *(long)(in_RCX + 0x20);
		__n = (ulong)*(uint)(*(long)(*(long)(lVar2 + 0xc0) + 0x18) + 0xfc);
		lVar7 = -(__n + 0xf & 0xfffffffffffffff0);
		pSVar3 = this.values;
		local_40 = method;
		*(ulong)((long)&uStack_60 + lVar7) = 0x4a4c7ce;
		memcpy((IntPtr)((long)&local_58 + lVar7), (IntPtr)value._tail, __n);
		puVar4 = *(ulong*)(*(long)(lVar2 + 0xc0) + 0x20);
		uVar5 = *puVar4;
		pcVar6 = (code)puVar4[2];
		local_58 = pSVar3;
		local_50 = (IntPtr)((long)&local_58 + lVar7);
		*(ulong)((long)&uStack_60 + lVar7) = 0x4a4c7f1;
		(*pcVar6)(uVar5,puVar4,0,&local_58,&local_34);
		__dest = local_40;
		this.index = local_34;
		pSVar3 = this.values;
		if (pSVar3 == null) {
			*(ulong)((long)&uStack_60 + lVar7) = 0x4a4c83e;
			throw new NullReferenceException();
		}
		if ((uint)pSVar3.Length <= local_34) {
			*(ulong)((long)&uStack_60 + lVar7) = 0x4a4c843;
			throw new IndexOutOfRangeException();
		}
		uVar1 = (((pSVar3.obj).klass)._2).element_size;
		*(ulong)((long)&uStack_60 + lVar7) = 0x4a4c82a;
		UVar8._tail =(__Il2CppFullySharedGenericStructType)memmove(__dest, (object*)((long)pSVar3.m_Items + (ulong)uVar1 * (long)(int)local_34), __n);
		return (__Il2CppFullySharedGenericStructType)UVar8._tail;
	}
}
