// ==================== AoTTG2 cross-reference ====================
// Type: Assets.Scripts.Utility.SetItem
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Assets/Scripts/Utility/SetItem.c
// Prior real C# source (older reference): Assets/Scripts/Utility/SetItem.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Assets.Scripts.Utility;

[Token(Token = "0x2000900")]
public class SetItem<TKey, TValue>
{
	[Token(Token = "0x17000ED4")]
	public TKey Key
	{
		[Token(Token = "0x6005575")]
		[CompilerGenerated]
		get
		{
			return (TKey)null;
		}
		[Token(Token = "0x6005576")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000ED5")]
	public TValue Value
	{
		[Token(Token = "0x6005577")]
		[CompilerGenerated]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x6005578")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6005579")]
	public SetItem(TKey key, TValue value)
	{
	}

	[Token(Token = "0x600557A")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x600557B")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600557C")]
	public override string ToString()
	{
		return null;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Assets/Scripts/Utility/SetItem.c.

	// Assets.Scripts.Utility.SetItem<object, object>$$get_Key: clean
	private object object_object__get_Key()
	{
		return this._Key_k__BackingField;
	}

	// Assets.Scripts.Utility.SetItem<object, object>$$set_Key: clean
	private void object_object__set_Key(object value)
	{
		this._Key_k__BackingField = value;
		return;
	}

	// Assets.Scripts.Utility.SetItem<object, object>$$get_Value: clean
	private object object_object__get_Value()
	{
		return this._Value_k__BackingField;
	}

	// Assets.Scripts.Utility.SetItem<object, object>$$set_Value: clean
	private void object_object__set_Value(object value)
	{
		this._Value_k__BackingField = value;
		return;
	}

	// Assets.Scripts.Utility.SetItem<object, object>$$.ctor: clean
	private void object_object___ctor(object key, object value)
	{
		base();
		this._Key_k__BackingField = key;
		this._Value_k__BackingField = value;
		return;
	}

	// Assets.Scripts.Utility.SetItem<object, object>$$Equals: 8 lines keep C-only constructs
	private bool object_object__Equals(object obj)
	{
		byte bVar1;
		object pIVar2;
		Il2CppMethodPointer vtableDispatch;
		bool bVar3;
		byte uVar4;
		Type left;
		Type right;
		Il2CppClass klass;

		if (obj == null) {
			return false;
		}
		if (this != null) {
			left = this.GetType();
			right = obj.GetType();
			bVar3 = (left != right);
			if (bVar3) {
				return false;
			}
			klass = method.klass.rgctx_data._0_Assets_Scripts_Utility_SetItem_TKey__TValue_;
			if (((klass._2).bitflags1 & 1) == 0) {
				klass = il2cpp_codegen_class_init_checked(klass);
			}
			bVar1 = (klass._2).typeHierarchyDepth;
			if (((obj.klass._2).typeHierarchyDepth < bVar1) ||((obj.klass._2).typeHierarchy[(ulong)bVar1 - 1] != klass)) {
				throw new InvalidCastException();
			}
			pIVar2 = this._Key_k__BackingField;
			if (pIVar2 != null) {
				vtableDispatch = pIVar2.klass.vtable[0].methodPtr;
				uVar4 = (*vtableDispatch)(pIVar2,obj[1].klass,pIVar2.klass.vtable[0].method,vtableDispatch);
				return (bool)uVar4;
			}
		}
		throw new NullReferenceException();
	}

	// Assets.Scripts.Utility.SetItem<object, object>$$GetHashCode: 3 lines keep C-only constructs
	private int object_object__GetHashCode()
	{
		object pIVar1;
		Il2CppMethodPointer vtableDispatch;
		int iVar2;
		ulong in_RDX;

		pIVar1 = this._Key_k__BackingField;
		if (pIVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = pIVar1.klass.vtable[2].methodPtr;
		iVar2 = (*vtableDispatch)(pIVar1,pIVar1.klass.vtable[2].method,in_RDX,vtableDispatch);
		return iVar2;
	}

	// Assets.Scripts.Utility.SetItem<object, object>$$ToString: 3 lines keep C-only constructs
	private String object_object__ToString()
	{
		object pIVar1;
		Il2CppMethodPointer vtableDispatch;
		String pSVar2;
		ulong in_RDX;

		pIVar1 = this._Key_k__BackingField;
		if (pIVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = pIVar1.klass.vtable[3].methodPtr;
		pSVar2 = (String)(*vtableDispatch)(pIVar1,pIVar1.klass.vtable[3].method,in_RDX,vtableDispatch);
		return pSVar2;
	}

	// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$get_Key: 4 lines keep C-only constructs
	private __Il2CppFullySharedGenericType Il2CppFullySharedGenericType___Il2CppFullySharedGenericType__get_Key()
	{
		uint uVar1;
		long plVar2;
		IntPtr __src;
		long in_RDX;
		__Il2CppFullySharedGenericType UVar3;

		plVar2 = *(long*)(*(long)(in_RDX + 0x20) + 0xc0);
		uVar1 = *(uint)(plVar2[1] + 0xfc);
		__src = il2cpp_codegen_get_instance_field_data_pointer(this, *(IntPtr)(*plVar2 + 0x80));
		UVar3.klass = memmove(method, __src, (ulong)uVar1);
		UVar3.monitor = UVar3.monitor;
		return UVar3;
	}

	// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$set_Key: 3 lines keep C-only constructs
	private void Il2CppFullySharedGenericType___Il2CppFullySharedGenericType__set_Key(__Il2CppFullySharedGenericType value)
	{
		uint size;
		long lVar1;
		long lVar2;
		IntPtr field;
		long lVar3;
		__Il2CppFullySharedGenericType __src;
		byte[] auStack_38 = new byte[8];
		__Il2CppFullySharedGenericType local_30;

		local_30 = value.klass;
		lVar1 = *(long)((long)value.monitor + 0x20);
		lVar2 = *(long)(*(long)(lVar1 + 0xc0) + 8);
		size = *(uint)(lVar2 + 0xfc);
		lVar3 = -((ulong)size + 0xf & 0xfffffffffffffff0);
		__src = local_30;
		if (-1 < *(int)(lVar2 + 0x28)) {
			__src = (__Il2CppFullySharedGenericType)&local_30;
		}
		*(ulong)(auStack_38 + lVar3 + -8) = 0x41466e5;
		memcpy(auStack_38 + lVar3, __src, (ulong)size);
		field = *(IntPtr)(**(long*)(lVar1 + 0xc0) + 0x80);
		*(ulong)(auStack_38 + lVar3 + -8) = 0x4146705;
		il2cpp_codegen_write_instance_field_data(this, field, auStack_38 + lVar3, size);
		return;
	}

	// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$get_Value: 4 lines keep C-only constructs
	private __Il2CppFullySharedGenericType Il2CppFullySharedGenericType___Il2CppFullySharedGenericType__get_Value()
	{
		uint uVar1;
		long plVar2;
		IntPtr __src;
		long in_RDX;
		__Il2CppFullySharedGenericType UVar3;

		plVar2 = *(long*)(*(long)(in_RDX + 0x20) + 0xc0);
		uVar1 = *(uint)(plVar2[2] + 0xfc);
		__src = il2cpp_codegen_get_instance_field_data_pointer(this, (IntPtr)(*(long)(*plVar2 + 0x80) + 0x20));
		UVar3.klass = memmove(method, __src, (ulong)uVar1);
		UVar3.monitor = UVar3.monitor;
		return UVar3;
	}

	// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$set_Value: 3 lines keep C-only constructs
	private void Il2CppFullySharedGenericType___Il2CppFullySharedGenericType__set_Value(__Il2CppFullySharedGenericType value)
	{
		uint size;
		long lVar1;
		long lVar2;
		long lVar3;
		__Il2CppFullySharedGenericType __src;
		byte[] auStack_38 = new byte[8];
		__Il2CppFullySharedGenericType local_30;

		local_30 = value.klass;
		lVar1 = *(long)((long)value.monitor + 0x20);
		lVar2 = *(long)(*(long)(lVar1 + 0xc0) + 0x10);
		size = *(uint)(lVar2 + 0xfc);
		lVar3 = -((ulong)size + 0xf & 0xfffffffffffffff0);
		__src = local_30;
		if (-1 < *(int)(lVar2 + 0x28)) {
			__src = (__Il2CppFullySharedGenericType)&local_30;
		}
		*(ulong)(auStack_38 + lVar3 + -8) = 0x41467c5;
		memcpy(auStack_38 + lVar3, __src, (ulong)size);
		lVar1 = *(long)(**(long*)(lVar1 + 0xc0) + 0x80);
		*(ulong)(auStack_38 + lVar3 + -8) = 0x41467e9;
		il2cpp_codegen_write_instance_field_data(this, (IntPtr)(lVar1 + 0x20), auStack_38 + lVar3, size);
		return;
	}

	// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.ctor: 8 lines keep C-only constructs
	private void Il2CppFullySharedGenericType___Il2CppFullySharedGenericType___ctor(__Il2CppFullySharedGenericType key, __Il2CppFullySharedGenericType value)
	{
		long lVar1;
		IntPtr pvVar2;
		ulong uVar3;
		code *pcVar4;
		SetItem<TKey, TValue> pAVar5;
		__Il2CppFullySharedGenericType pUVar6;
		__Il2CppFullySharedGenericType __src;
		sbyte*** __src_00;
		ulong __dest;
		ulong puVar7;
		ulong uVar8;
		ulong puVar9;
		ulong[] auStack_80 = new ulong[2];
		__Il2CppFullySharedGenericType local_70;
		sbyte*** local_68;
		SetItem<TKey, TValue> local_60;
		sbyte*** local_58;
		__Il2CppFullySharedGenericType local_50;
		ulong local_48;
		__Il2CppFullySharedGenericType local_40;
		ulong local_38;

		pUVar6 = value.klass;
		local_68 = key.monitor;
		local_70 = key.klass;
		lVar1 = *(long)((long)(pUVar6._1).byval_arg.data + 0xc0);
		uVar8 = (ulong)*(uint)(*(long)(lVar1 + 8) + 0xfc);
		local_48 = (ulong)*(uint)(*(long)(lVar1 + 0x10) + 0xfc);
		puVar9 = (ulong)((long)auStack_80 + (8 - (uVar8 + 0xf & 0xfffffffffffffff0)));
		__dest = (ulong)((long)puVar9 - (local_48 + 0xf & 0xfffffffffffffff0));
		local_60 = this;
		local_58 = local_68;
		local_40 = local_70;
		__dest[-1] = 0x4146875;
		base();
		pvVar2 = (pUVar6._1).byval_arg.data;
		__src = (__Il2CppFullySharedGenericType)&local_70;
		if (*(int)(*(long)(*(long)((long)pvVar2 + 0xc0) + 8) + 0x28) < 0) {
			__src = local_40;
		}
		local_50 = pUVar6;
		__dest[-1] = 0x41468a1;
		memcpy(puVar9, __src, uVar8);
		pAVar5 = local_60;
		lVar1 = *(long)((long)pvVar2 + 0xc0);
		puVar7 = *(ulong*)(lVar1 + 0x18);
		uVar3 = *puVar7;
		if (-1 < *(int)(*(long)(lVar1 + 8) + 0x28)) {
			puVar9 = (ulong)*puVar9;
		}
		pcVar4 = (code)puVar7[2];
		local_38 = puVar9;
		__dest[-1] = 0x41468d2;
		(*pcVar4)(uVar3,puVar7,pAVar5,&local_38,puVar9);
		uVar8 = local_48;
		pvVar2 = (local_50._1).byval_arg.data;
		__src_00 = (sbyte***)&local_68;
		if (*(int)(*(long)(*(long)((long)pvVar2 + 0xc0) + 0x10) + 0x28) < 0) {
			__src_00 = local_58;
		}
		__dest[-1] = 0x41468fe;
		memcpy(__dest, __src_00, uVar8);
		lVar1 = *(long)((long)pvVar2 + 0xc0);
		puVar9 = *(ulong*)(lVar1 + 0x20);
		uVar3 = *puVar9;
		puVar7 = __dest;
		if (-1 < *(int)(*(long)(lVar1 + 0x10) + 0x28)) {
			puVar7 = (ulong)*__dest;
		}
		pcVar4 = (code)puVar9[2];
		local_38 = puVar7;
		__dest[-1] = 0x414692b;
		(*pcVar4)(uVar3,puVar9,pAVar5,&local_38,puVar7);
		return;
	}

	// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$Equals: 17 lines keep C-only constructs
	private bool Il2CppFullySharedGenericType___Il2CppFullySharedGenericType__Equals(object obj)
	{
		byte bVar1;
		MethodInfo pMVar2;
		Il2CppMethodPointer pIVar3;
		InvokerMethod pIVar4;
		Il2CppClass pIVar5;
		IntPtr pvVar6;
		Type left;
		MethodInfo_4046940 pMVar7;
		ulong uVar8;
		SetItem<TKey, TValue> pAVar9;
		object pIVar10;
		bool bVar11;
		uint uVar12;
		Il2CppClass pIVar13;
		ulong uVar14;
		Type right;
		Assets_Scripts_Utility_SetItem_TKey__TValue__RGCTXs pAVar15;
		IntPtr __s;
		object pIVar16;
		object data;
		bool bVar17;
		object IStack_78;
		Type local_68;
		MethodInfo_4046940 local_60;
		ulong local_58;
		SetItem<TKey, TValue> local_50;
		object local_48;
		object local_40;
		sbyte local_31;

		pIVar13 = method.klass.rgctx_data._1_TKey;
		uVar12 = (pIVar13._2).stack_slot_size;
		local_58 = (ulong)uVar12;
		local_50 = this;
		local_40 = obj;
		if (((pIVar13._2).bitflags1 & 1) == 0) {
			pIVar13 = il2cpp_codegen_class_init_checked(pIVar13);
			uVar12 = (pIVar13._2).stack_slot_size;
		}
		uVar8 = local_58;
		IStack_78.monitor = (IntPtr)((long)&IStack_78 - ((ulong)(uVar12 + 0x10) + 0xf & 0xfffffffffffffff0));
		uVar14 = local_58 + 0xf & 0xfffffffffffffff0;
		pIVar16 = (object)((long)IStack_78.monitor - uVar14);
		data = (object)((long)pIVar16 - uVar14);
		__s = (IntPtr)((long)data - uVar14);
		*(ulong)((long)__s + -8) = 0x41469d5;
		memset(__s, 0, uVar8);
		pAVar9 = local_50;
		if (local_40 != null) {
			local_60 = method;
			if (local_50 == null) {
				*(ulong)((long)__s + -8) = 0x4146b6b;
				throw new NullReferenceException();
			}
			*(ulong)((long)__s + -8) = 0x41469f8;
			local_68 = pAVar9.GetType();
			pIVar10 = local_40;
			*(ulong)((long)__s + -8) = 0x4146a07;
			right = pIVar10.GetType();
			if ((g_data_075567a8._2).cctor_finished_or_no_cctor == 0) {
				*(ulong)((long)__s + -8) = 0x4146a26;
			}
			left = local_68;
			*(ulong)((long)__s + -8) = 0x4146a37;
			bVar11 = (left != right);
			pMVar7 = local_60;
			if (!bVar11) {
				pIVar13 = local_60.klass.rgctx_data._0_Assets_Scripts_Utility_SetItem_TKey__TValue_;
				if (((pIVar13._2).bitflags1 & 1) == 0) {
					*(ulong)((long)__s + -8) = 0x4146a63;
					pIVar13 = il2cpp_codegen_class_init_checked(pIVar13);
				}
				pIVar10 = local_40;
				pAVar9 = local_50;
				bVar1 = (pIVar13._2).typeHierarchyDepth;
				if (((local_40.klass._2).typeHierarchyDepth < bVar1) ||((local_40.klass._2).typeHierarchy[(ulong)bVar1 - 1] != pIVar13)) {
					*(ulong)((long)__s + -8) = 0x4146b77;
					throw new InvalidCastException();
				}
				pMVar2 = pMVar7.klass.rgctx_data._5_Assets_Scripts_Utility_SetItem_TKey__TValue__get_Key;
				pIVar3 = pMVar2.methodPointer;
				pIVar4 = pMVar2.invoker_method;
				local_48 = pIVar16;
				*(ulong)((long)__s + -8) = 0x4146ab4;
				(*pIVar4)(pIVar3,pMVar2,pAVar9,&local_48,pIVar16);
				uVar8 = local_58;
				*(ulong)((long)__s + -8) = 0x4146ac3;
				memcpy(__s, pIVar16, uVar8);
				pIVar16 = local_40;
				pMVar2 = pMVar7.klass.rgctx_data._5_Assets_Scripts_Utility_SetItem_TKey__TValue__get_Key;
				pIVar3 = pMVar2.methodPointer;
				pIVar4 = pMVar2.invoker_method;
				local_48 = data;
				*(ulong)((long)__s + -8) = 0x4146ae8;
				(*pIVar4)(pIVar3,pMVar2,pIVar16,&local_48,data);
				pIVar13 = pMVar7.klass.rgctx_data._1_TKey;
				*(ulong)((long)__s + -8) = 0x4146b00;
				pIVar16 = (object)data;
				pAVar15 = pMVar7.klass.rgctx_data;
				pIVar13 = pAVar15._1_TKey;
				if (((pIVar13._2).bitflags1 & 1) == 0) {
					*(ulong)((long)__s + -8) = 0x4146b21;
					pIVar13 = il2cpp_codegen_class_init_checked(pIVar13);
					pAVar15 = pMVar7.klass.rgctx_data;
				}
				pvVar6 = IStack_78.monitor;
				pIVar5 = pAVar15[1]._0_Assets_Scripts_Utility_SetItem_TKey__TValue_;
				local_48 = pIVar16;
				*(ulong)((long)__s + -8) = 0x4146b4c;
				il2cpp_runtime_helper_030d6e00(pIVar13, pIVar5, pvVar6, __s, &local_48, &local_31);
				bVar17 = local_31 != false;
			}
		}
		return bVar17;
	}

	// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$GetHashCode: 8 lines keep C-only constructs
	private int Il2CppFullySharedGenericType___Il2CppFullySharedGenericType__GetHashCode()
	{
		MethodInfo pMVar1;
		Il2CppMethodPointer pIVar2;
		InvokerMethod pIVar3;
		Il2CppClass pIVar4;
		Il2CppClass pIVar5;
		SetItem<TKey, TValue> pAVar6;
		Assets_Scripts_Utility_SetItem_TKey__TValue__RGCTXs pAVar7;
		uint uVar8;
		ulong uVar9;
		byte __dest;
		byte __src;
		ulong __n;
		byte[] auStack_48 = new byte[8];
		byte local_40;
		int local_34;

		pAVar6 = method.klass;
		pIVar5 = pAVar6.rgctx_data._1_TKey;
		uVar8 = (pIVar5._2).stack_slot_size;
		__n = (ulong)uVar8;
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			uVar8 = (pIVar5._2).stack_slot_size;
			pAVar6 = method.klass;
		}
		uVar9 = __n + 0xf & 0xfffffffffffffff0;
		__src = auStack_48 + -((ulong)(uVar8 + 0x10) + 0xf & 0xfffffffffffffff0) + -uVar9;
		__dest = __src + -uVar9;
		pMVar1 = pAVar6.rgctx_data._5_Assets_Scripts_Utility_SetItem_TKey__TValue__get_Key;
		pIVar2 = pMVar1.methodPointer;
		pIVar3 = pMVar1.invoker_method;
		local_40 = __src;
		*(ulong)(__dest + -8) = 0x4146c18;
		(*pIVar3)(pIVar2,pMVar1,this,&local_40,__src);
		*(ulong)(__dest + -8) = 0x4146c26;
		memcpy(__dest, __src, __n);
		pAVar7 = method.klass.rgctx_data;
		pIVar5 = pAVar7._1_TKey;
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			*(ulong)(__dest + -8) = 0x4146c43;
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			pAVar7 = method.klass.rgctx_data;
		}
		pIVar4 = pAVar7[1]._1_TKey;
		*(ulong)(__dest + -8) = 0x4146c67;
		il2cpp_runtime_helper_030d6e00(pIVar5, pIVar4, auStack_48 + -((ulong)(uVar8 + 0x10) + 0xf & 0xfffffffffffffff0), __dest, 0, &local_34);
		return local_34;
	}

	// Assets.Scripts.Utility.SetItem<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$ToString: 9 lines keep C-only constructs
	private String Il2CppFullySharedGenericType___Il2CppFullySharedGenericType__ToString()
	{
		MethodInfo pMVar1;
		Il2CppMethodPointer pIVar2;
		InvokerMethod pIVar3;
		Il2CppClass pIVar4;
		Il2CppClass pIVar5;
		SetItem<TKey, TValue> pAVar6;
		Assets_Scripts_Utility_SetItem_TKey__TValue__RGCTXs pAVar7;
		uint uVar8;
		ulong uVar9;
		IntPtr __dest;
		String __src;
		long lVar10;
		ulong __n;
		String local_38;

		pAVar6 = method.klass;
		pIVar5 = pAVar6.rgctx_data._1_TKey;
		uVar8 = (pIVar5._2).stack_slot_size;
		__n = (ulong)uVar8;
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			uVar8 = (pIVar5._2).stack_slot_size;
			pAVar6 = method.klass;
		}
		lVar10 = (long)&local_38 - ((ulong)(uVar8 + 0x10) + 0xf & 0xfffffffffffffff0);
		uVar9 = __n + 0xf & 0xfffffffffffffff0;
		__src = (String)(lVar10 - uVar9);
		__dest = (IntPtr)((long)__src - uVar9);
		pMVar1 = pAVar6.rgctx_data._5_Assets_Scripts_Utility_SetItem_TKey__TValue__get_Key;
		pIVar2 = pMVar1.methodPointer;
		pIVar3 = pMVar1.invoker_method;
		local_38 = __src;
		*(ulong)((long)__dest + -8) = 0x4146d15;
		(*pIVar3)(pIVar2,pMVar1,this,&local_38,__src);
		*(ulong)((long)__dest + -8) = 0x4146d23;
		memcpy(__dest, __src, __n);
		pAVar7 = method.klass.rgctx_data;
		pIVar5 = pAVar7._1_TKey;
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			*(ulong)((long)__dest + -8) = 0x4146d40;
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			pAVar7 = method.klass.rgctx_data;
		}
		pIVar4 = pAVar7[1]._2_TValue;
		*(ulong)((long)__dest + -8) = 0x4146d64;
		il2cpp_runtime_helper_030d6e00(pIVar5, pIVar4, lVar10, __dest, 0, &local_38);
		return local_38;
	}
}
