// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgQueryFetchResult
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgQueryFetchResult.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x20009C5")]
public sealed class AottgQueryFetchResult<TValue>
{
	[Token(Token = "0x17000F9B")]
	public bool Success
	{
		[Token(Token = "0x6005A83")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6005A84")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F9C")]
	public TValue Value
	{
		[Token(Token = "0x6005A85")]
		[CompilerGenerated]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x6005A86")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F9D")]
	public string Error
	{
		[Token(Token = "0x6005A87")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005A88")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6005A89")]
	public static AottgQueryFetchResult<TValue> Ok(TValue value)
	{
		return null;
	}

	[Token(Token = "0x6005A8A")]
	public static AottgQueryFetchResult<TValue> Fail(string error)
	{
		return null;
	}

	[Token(Token = "0x6005A8B")]
	public AottgQueryFetchResult()
	{
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ApplicationManagers/Api/AottgQueryFetchResult.c.

	// ApplicationManagers.Api.AottgQueryFetchResult<object>$$get_Success: clean
	private bool object__get_Success()
	{
		return this._Success_k__BackingField;
	}

	// ApplicationManagers.Api.AottgQueryFetchResult<object>$$set_Success: clean
	private void object__set_Success(bool value)
	{
		this._Success_k__BackingField = value;
		return;
	}

	// ApplicationManagers.Api.AottgQueryFetchResult<object>$$get_Value: clean
	private object object__get_Value()
	{
		return this._Value_k__BackingField;
	}

	// ApplicationManagers.Api.AottgQueryFetchResult<object>$$set_Value: clean
	private void object__set_Value(object value)
	{
		this._Value_k__BackingField = value;
		return;
	}

	// ApplicationManagers.Api.AottgQueryFetchResult<object>$$get_Error: clean
	private String object__get_Error()
	{
		return this._Error_k__BackingField;
	}

	// ApplicationManagers.Api.AottgQueryFetchResult<object>$$set_Error: clean
	private void object__set_Error(String value)
	{
		this._Error_k__BackingField = value;
		return;
	}

	// ApplicationManagers.Api.AottgQueryFetchResult<object>$$Ok: 11 lines keep C-only constructs
	private static AottgQueryFetchResult<TValue> object__Ok(object value)
	{
		Il2CppClass pIVar1;
		AottgQueryFetchResult<TValue> __this;

		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		__this = (AottgQueryFetchResult<TValue>)il2cpp_codegen_object_new(pIVar1);
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		__this = new Object();
		if (__this == null) {
			throw new NullReferenceException();
		}
		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked(pIVar1);
			pIVar1 = (Il2CppClass)method.klass;
		}
		__this._Success_k__BackingField = true;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked(pIVar1);
		}
		__this._Value_k__BackingField = value;
		return __this;
	}

	// ApplicationManagers.Api.AottgQueryFetchResult<object>$$Fail: 13 lines keep C-only constructs
	private static AottgQueryFetchResult<TValue> object__Fail(String error)
	{
		byte bVar1;
		String pSVar2;
		bool bVar3;
		Il2CppClass pIVar4;
		AottgQueryFetchResult<TValue> __this;

		if (Il2CppMethodInitialized_07541dd7 == false) {
			Il2CppMethodInitialized_07541dd7 = true;
			pIVar4 = (Il2CppClass)method.klass;
			bVar1 = (pIVar4._2).bitflags1;
		}
		else {
			pIVar4 = (Il2CppClass)method.klass;
			bVar1 = (pIVar4._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
			pIVar4 = pIVar4.rgctx_data.klass;
			bVar1 = (pIVar4._2).bitflags1;
		}
		else {
			pIVar4 = pIVar4.rgctx_data.klass;
			bVar1 = (pIVar4._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
		}
		__this = (AottgQueryFetchResult<TValue>)il2cpp_codegen_object_new(pIVar4);
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		__this = new Object();
		if (__this == null) {
			throw new NullReferenceException();
		}
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		__this._Success_k__BackingField = false;
		bVar3 = String.IsNullOrEmpty(error);
		pSVar2 = "unknown_error";
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		if (bVar3) {
			error = pSVar2;
		}
		__this._Error_k__BackingField = error;
		return __this;
	}

	// ApplicationManagers.Api.AottgQueryFetchResult<object>$$.ctor: clean
	private void object___ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$get_Success: 1 lines keep C-only constructs
	private bool Il2CppFullySharedGenericType__get_Success()
	{
		byte puVar1;

		puVar1 = il2cpp_codegen_get_instance_field_data_pointer(this, (method.klass.rgctx_data. _0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_._1));
		return (bool)*puVar1;
	}

	// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$set_Success: 4 lines keep C-only constructs
	private void Il2CppFullySharedGenericType__set_Success(bool value)
	{
		IntPtr field;
		IntPtr pvVar1;

		field = (method.klass.rgctx_data._0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_._1);
		il2cpp_runtime_helper_030d6090(field, 1);
		pvVar1 = il2cpp_codegen_get_instance_field_data_pointer(this, field);
		*(bool)pvVar1 = value;
		il2cpp_runtime_helper_030d5fc0(*(ulong)((long)field + 8), pvVar1, 0);
		return;
	}

	// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$get_Value: 4 lines keep C-only constructs
	private __Il2CppFullySharedGenericType Il2CppFullySharedGenericType__get_Value()
	{
		uint uVar1;
		long plVar2;
		IntPtr __src;
		long in_RDX;
		__Il2CppFullySharedGenericType UVar3;

		plVar2 = *(long*)(*(long)(in_RDX + 0x20) + 0xc0);
		uVar1 = *(uint)(plVar2[1] + 0xfc);
		__src = il2cpp_codegen_get_instance_field_data_pointer(this, (IntPtr)(*(long)(*plVar2 + 0x80) + 0x20));
		UVar3.klass = memmove(method, __src, (ulong)uVar1);
		UVar3.monitor = UVar3.monitor;
		return UVar3;
	}

	// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$set_Value: 3 lines keep C-only constructs
	private void Il2CppFullySharedGenericType__set_Value(__Il2CppFullySharedGenericType value)
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
		lVar2 = *(long)(*(long)(lVar1 + 0xc0) + 8);
		size = *(uint)(lVar2 + 0xfc);
		lVar3 = -((ulong)size + 0xf & 0xfffffffffffffff0);
		__src = local_30;
		if (-1 < *(int)(lVar2 + 0x28)) {
			__src = (__Il2CppFullySharedGenericType)&local_30;
		}
		*(ulong)(auStack_38 + lVar3 + -8) = 0x4db5065;
		memcpy(auStack_38 + lVar3, __src, (ulong)size);
		lVar1 = *(long)(**(long*)(lVar1 + 0xc0) + 0x80);
		*(ulong)(auStack_38 + lVar3 + -8) = 0x4db5089;
		il2cpp_codegen_write_instance_field_data(this, (IntPtr)(lVar1 + 0x20), auStack_38 + lVar3, size);
		return;
	}

	// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$get_Error: 1 lines keep C-only constructs
	private String Il2CppFullySharedGenericType__get_Error()
	{
		ulong puVar1;

		puVar1 = il2cpp_codegen_get_instance_field_data_pointer(this, (IntPtr)((long)(method.klass.rgctx_data. _0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_._1). fields + 0x40));
		return (String)*puVar1;
	}

	// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$set_Error: 4 lines keep C-only constructs
	private void Il2CppFullySharedGenericType__set_Error(String value)
	{
		IntPtr field;
		IntPtr pvVar1;
		ulong puVar2;

		pvVar1 = (method.klass.rgctx_data._0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_._1);
		field = (IntPtr)((long)pvVar1 + 0x40);
		il2cpp_runtime_helper_030d6090(field, 8);
		puVar2 = il2cpp_codegen_get_instance_field_data_pointer(this, field);
		*puVar2 = value;
		il2cpp_runtime_helper_030d5fc0(*(ulong)((long)pvVar1 + 0x48), puVar2, 0);
		return;
	}

	// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$Ok: 37 lines keep C-only constructs
	private static AottgQueryFetchResult<TValue> Il2CppFullySharedGenericType__Ok(__Il2CppFullySharedGenericType value)
	{
		Il2CppMethodPointer pIVar1;
		IntPtr pvVar2;
		MethodInfo pMVar3;
		InvokerMethod pIVar4;
		long lVar5;
		Il2CppClass pIVar6;
		Il2CppClass pIVar7;
		AottgQueryFetchResult<TValue> pAVar8;
		ushort uVar9;
		ushort uVar10;
		ushort uVar11;
		ushort uVar12;
		ulong puVar13;
		IntPtr pvVar14;
		__Il2CppFullySharedGenericType __src;
		ulong __n;
		ulong __dest;
		ulong[] apuStack_58 = new ulong[2];
		__Il2CppFullySharedGenericType local_48;
		__Il2CppFullySharedGenericType local_40;
		AottgQueryFetchResult<TValue> local_38;

		pvVar14 = value.monitor;
		local_48 = value.klass;
		pIVar6 = *(Il2CppClass*)((long)pvVar14 + 0x20);
		uVar9._0_1_ = (pIVar6._2).bitflags1;
		uVar9._1_1_ = (pIVar6._2).bitflags2;
		local_40 = local_48;
		if ((uVar9 & 1) == 0) {
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
			pIVar7 = *(Il2CppClass*)((long)pvVar14 + 0x20);
			uVar9._0_1_ = (pIVar7._2).bitflags1;
			uVar9._1_1_ = (pIVar7._2).bitflags2;
		}
		else {
			pIVar7 = pIVar6;
		}
		__n = (ulong)((pIVar6.rgctx_data[1].klass)._2).stack_slot_size;
		lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
		__dest = (ulong)((long)apuStack_58 + lVar5);
		puVar13 = __dest;
		if ((uVar9 & 1) == 0) {
			*(ulong)((long)apuStack_58 + lVar5 + -8) = 0x4db51a1;
			pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
			puVar13 = (ulong)((long)apuStack_58 + lVar5);
		}
		pIVar6 = pIVar7.rgctx_data.klass;
		if (((pIVar6._2).bitflags1 & 1) == 0) {
			puVar13[-1] = 0x4db51bc;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
		}
		puVar13[-1] = 0x4db51c4;
		pAVar8 = (AottgQueryFetchResult<TValue>)il2cpp_codegen_object_new(pIVar6);
		pIVar6 = *(Il2CppClass*)((long)pvVar14 + 0x20);
		uVar10._0_1_ = (pIVar6._2).bitflags1;
		uVar10._1_1_ = (pIVar6._2).bitflags2;
		if ((uVar10 & 1) == 0) {
			puVar13[-1] = 0x4db51dc;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
			pIVar7 = *(Il2CppClass*)((long)pvVar14 + 0x20);
			uVar10._0_1_ = (pIVar7._2).bitflags1;
			uVar10._1_1_ = (pIVar7._2).bitflags2;
		}
		else {
			pIVar7 = pIVar6;
		}
		pIVar1 = (pIVar6.rgctx_data[2].method).methodPointer;
		if ((uVar10 & 1) == 0) {
			puVar13[-1] = 0x4db5204;
			pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
		}
		pvVar2 = pIVar7.rgctx_data[2].rgctxDataDummy;
		puVar13[-1] = 0x4db5217;
		(*pIVar1)(pAVar8,pvVar2);
		if (pAVar8 == null) {
			puVar13[-1] = 0x4db5387;
			throw new NullReferenceException();
		}
		pIVar6 = *(Il2CppClass*)((long)pvVar14 + 0x20);
		uVar11._0_1_ = (pIVar6._2).bitflags1;
		uVar11._1_1_ = (pIVar6._2).bitflags2;
		if ((uVar11 & 1) == 0) {
			puVar13[-1] = 0x4db5235;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
			pIVar7 = *(Il2CppClass*)((long)pvVar14 + 0x20);
			uVar11._0_1_ = (pIVar7._2).bitflags1;
			uVar11._1_1_ = (pIVar7._2).bitflags2;
		}
		else {
			pIVar7 = pIVar6;
		}
		pIVar1 = (pIVar6.rgctx_data[3].method).methodPointer;
		if ((uVar11 & 1) == 0) {
			puVar13[-1] = 0x4db525d;
			pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
		}
		pvVar2 = pIVar7.rgctx_data[3].rgctxDataDummy;
		local_38 = pAVar8;
		puVar13[-1] = 0x4db5279;
		(*pIVar1)(pAVar8,1,pvVar2);
		pIVar6 = *(Il2CppClass*)((long)pvVar14 + 0x20);
		if (((pIVar6._2).bitflags1 & 1) == 0) {
			puVar13[-1] = 0x4db5290;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
			pIVar7 = *(Il2CppClass*)((long)pvVar14 + 0x20);
		}
		else {
			pIVar7 = pIVar6;
		}
		__src = (__Il2CppFullySharedGenericType)&local_48;
		if ((int)pIVar6.rgctx_data[1].type[2].bits < 0) {
			__src = local_40;
		}
		puVar13[-1] = 0x4db52bf;
		memcpy(__dest, __src, __n);
		uVar12._0_1_ = (pIVar7._2).bitflags1;
		uVar12._1_1_ = (pIVar7._2).bitflags2;
		if ((uVar12 & 1) == 0) {
			puVar13[-1] = 0x4db52d5;
			pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
			pIVar6 = *(Il2CppClass*)((long)pvVar14 + 0x20);
			uVar12._0_1_ = (pIVar6._2).bitflags1;
			uVar12._1_1_ = (pIVar6._2).bitflags2;
		}
		else {
			pIVar6 = pIVar7;
		}
		pIVar1 = (pIVar7.rgctx_data[4].method).methodPointer;
		if ((uVar12 & 1) == 0) {
			puVar13[-1] = 0x4db5302;
			pIVar7 = il2cpp_codegen_class_init_checked(pIVar6);
			pIVar6 = *(Il2CppClass*)((long)pvVar14 + 0x20);
			uVar12._0_1_ = (pIVar6._2).bitflags1;
			uVar12._1_1_ = (pIVar6._2).bitflags2;
			pMVar3 = pIVar7.rgctx_data[4].method;
		}
		else {
			pMVar3 = pIVar6.rgctx_data[4].method;
		}
		if ((uVar12 & 1) == 0) {
			puVar13[-1] = 0x4db533c;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
		}
		pAVar8 = local_38;
		if (-1 < (int)pIVar6.rgctx_data[1].type[2].bits) {
			__dest = (ulong)*__dest;
		}
		pIVar4 = pMVar3.invoker_method;
		apuStack_58[1] = __dest;
		puVar13[-1] = 0x4db5370;
		(*pIVar4)(pIVar1,pMVar3,pAVar8,apuStack_58 + 1,__dest);
		return pAVar8;
	}

	// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$Fail: 34 lines keep C-only constructs
	private static AottgQueryFetchResult<TValue> Il2CppFullySharedGenericType__Fail(String error)
	{
		byte bVar1;
		Il2CppMethodPointer pIVar2;
		String pSVar3;
		bool bVar4;
		Il2CppClass pIVar5;
		AottgQueryFetchResult<TValue> pAVar6;
		Il2CppClass pIVar7;
		ushort uVar8;
		ushort uVar9;
		ushort uVar10;

		if (Il2CppMethodInitialized_07541dd8 == false) {
			Il2CppMethodInitialized_07541dd8 = true;
			pIVar5 = (Il2CppClass)method.klass;
			bVar1 = (pIVar5._2).bitflags1;
		}
		else {
			pIVar5 = (Il2CppClass)method.klass;
			bVar1 = (pIVar5._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			pIVar5 = pIVar5.rgctx_data.klass;
			bVar1 = (pIVar5._2).bitflags1;
		}
		else {
			pIVar5 = pIVar5.rgctx_data.klass;
			bVar1 = (pIVar5._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
		}
		pAVar6 = (AottgQueryFetchResult<TValue>)il2cpp_codegen_object_new(pIVar5);
		pIVar5 = (Il2CppClass)method.klass;
		uVar8._0_1_ = (pIVar5._2).bitflags1;
		uVar8._1_1_ = (pIVar5._2).bitflags2;
		if ((uVar8 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			pIVar7 = (Il2CppClass)method.klass;
			uVar8._0_1_ = (pIVar7._2).bitflags1;
			uVar8._1_1_ = (pIVar7._2).bitflags2;
		}
		else {
			pIVar7 = pIVar5;
		}
		pIVar2 = (pIVar5.rgctx_data[2].method).methodPointer;
		if ((uVar8 & 1) == 0) {
			il2cpp_codegen_class_init_checked(pIVar7);
		}
		(*pIVar2)(pAVar6);
		if (pAVar6 == null) {
			throw new NullReferenceException();
		}
		pIVar5 = (Il2CppClass)method.klass;
		uVar9._0_1_ = (pIVar5._2).bitflags1;
		uVar9._1_1_ = (pIVar5._2).bitflags2;
		if ((uVar9 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			pIVar7 = (Il2CppClass)method.klass;
			uVar9._0_1_ = (pIVar7._2).bitflags1;
			uVar9._1_1_ = (pIVar7._2).bitflags2;
		}
		else {
			pIVar7 = pIVar5;
		}
		pIVar2 = (pIVar5.rgctx_data[3].method).methodPointer;
		if ((uVar9 & 1) == 0) {
			pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
		}
		(*pIVar2)(pAVar6,0,pIVar7.rgctx_data[3].rgctxDataDummy);
		bVar4 = String.IsNullOrEmpty(error);
		pSVar3 = "unknown_error";
		pIVar5 = (Il2CppClass)method.klass;
		uVar10._0_1_ = (pIVar5._2).bitflags1;
		uVar10._1_1_ = (pIVar5._2).bitflags2;
		if ((uVar10 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			pIVar7 = (Il2CppClass)method.klass;
			uVar10._0_1_ = (pIVar7._2).bitflags1;
			uVar10._1_1_ = (pIVar7._2).bitflags2;
		}
		else {
			pIVar7 = pIVar5;
		}
		pIVar2 = (pIVar5.rgctx_data[5].method).methodPointer;
		if ((uVar10 & 1) == 0) {
			pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
		}
		if (bVar4) {
			error = pSVar3;
		}
		(*pIVar2)(pAVar6,error,pIVar7.rgctx_data[5].rgctxDataDummy);
		return pAVar6;
	}

	// ApplicationManagers.Api.AottgQueryFetchResult<__Il2CppFullySharedGenericType>$$.ctor: clean
	private void Il2CppFullySharedGenericType___ctor()
	{
		base();
		return;
	}
}
