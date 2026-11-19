// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgQueryResult
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgQueryResult.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x20009C8")]
public sealed class AottgQueryResult<TValue>
{
	[Token(Token = "0x17000FA1")]
	public AottgQueryResultState State
	{
		[Token(Token = "0x6005A94")]
		[CompilerGenerated]
		get
		{
			return default(AottgQueryResultState);
		}
		[Token(Token = "0x6005A95")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FA2")]
	public TValue Value
	{
		[Token(Token = "0x6005A96")]
		[CompilerGenerated]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x6005A97")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FA3")]
	public string Error
	{
		[Token(Token = "0x6005A98")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005A99")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FA4")]
	public bool IsFromCache
	{
		[Token(Token = "0x6005A9A")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6005A9B")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6005A9C")]
	public static AottgQueryResult<TValue> LoadingNoCache()
	{
		return null;
	}

	[Token(Token = "0x6005A9D")]
	public static AottgQueryResult<TValue> ReadyFresh(TValue value, bool isFromCache)
	{
		return null;
	}

	[Token(Token = "0x6005A9E")]
	public static AottgQueryResult<TValue> ReadyStaleRefreshing(TValue value)
	{
		return null;
	}

	[Token(Token = "0x6005A9F")]
	public static AottgQueryResult<TValue> FailedNoCache(string error, bool isFromCache = false)
	{
		return null;
	}

	[Token(Token = "0x6005AA0")]
	public static AottgQueryResult<TValue> FailedRefreshStale(TValue value, string error)
	{
		return null;
	}

	[Token(Token = "0x6005AA1")]
	public AottgQueryResult()
	{
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ApplicationManagers/Api/AottgQueryResult.c.

	// ApplicationManagers.Api.AottgQueryResult<object>$$get_State: clean
	private int object__get_State()
	{
		return this._State_k__BackingField;
	}

	// ApplicationManagers.Api.AottgQueryResult<object>$$set_State: clean
	private void object__set_State(int value)
	{
		this._State_k__BackingField = value;
		return;
	}

	// ApplicationManagers.Api.AottgQueryResult<object>$$get_Value: clean
	private object object__get_Value()
	{
		return this._Value_k__BackingField;
	}

	// ApplicationManagers.Api.AottgQueryResult<object>$$set_Value: clean
	private void object__set_Value(object value)
	{
		this._Value_k__BackingField = value;
		return;
	}

	// ApplicationManagers.Api.AottgQueryResult<object>$$get_Error: clean
	private String object__get_Error()
	{
		return this._Error_k__BackingField;
	}

	// ApplicationManagers.Api.AottgQueryResult<object>$$set_Error: clean
	private void object__set_Error(String value)
	{
		this._Error_k__BackingField = value;
		return;
	}

	// ApplicationManagers.Api.AottgQueryResult<object>$$get_IsFromCache: clean
	private bool object__get_IsFromCache()
	{
		return this._IsFromCache_k__BackingField;
	}

	// ApplicationManagers.Api.AottgQueryResult<object>$$set_IsFromCache: clean
	private void object__set_IsFromCache(bool value)
	{
		this._IsFromCache_k__BackingField = value;
		return;
	}

	// ApplicationManagers.Api.AottgQueryResult<object>$$LoadingNoCache: 9 lines keep C-only constructs
	private static AottgQueryResult<TValue> object__LoadingNoCache()
	{
		Il2CppClass pIVar1;
		AottgQueryResult<TValue> __this;

		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		__this = (AottgQueryResult<TValue>)il2cpp_codegen_object_new(pIVar1);
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
		__this._State_k__BackingField = 0;
		return __this;
	}

	// ApplicationManagers.Api.AottgQueryResult<object>$$ReadyFresh: 13 lines keep C-only constructs
	private static AottgQueryResult<TValue> object__ReadyFresh(object value, bool isFromCache)
	{
		Il2CppClass pIVar1;
		AottgQueryResult<TValue> __this;

		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		__this = (AottgQueryResult<TValue>)il2cpp_codegen_object_new(pIVar1);
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
		__this._State_k__BackingField = 1;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked(pIVar1);
		}
		__this._Value_k__BackingField = value;
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		__this._IsFromCache_k__BackingField = isFromCache;
		return __this;
	}

	// ApplicationManagers.Api.AottgQueryResult<object>$$ReadyStaleRefreshing: 13 lines keep C-only constructs
	private static AottgQueryResult<TValue> object__ReadyStaleRefreshing(object value)
	{
		Il2CppClass pIVar1;
		AottgQueryResult<TValue> __this;

		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		__this = (AottgQueryResult<TValue>)il2cpp_codegen_object_new(pIVar1);
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
		__this._State_k__BackingField = 2;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked(pIVar1);
		}
		__this._Value_k__BackingField = value;
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		__this._IsFromCache_k__BackingField = true;
		return __this;
	}

	// ApplicationManagers.Api.AottgQueryResult<object>$$FailedNoCache: 15 lines keep C-only constructs
	private static AottgQueryResult<TValue> object__FailedNoCache(String error, bool isFromCache)
	{
		byte bVar1;
		bool bVar2;
		Il2CppClass pIVar3;
		AottgQueryResult<TValue> __this;

		if (Il2CppMethodInitialized_07541dd9 == false) {
			Il2CppMethodInitialized_07541dd9 = true;
			pIVar3 = (Il2CppClass)method.klass;
			bVar1 = (pIVar3._2).bitflags1;
		}
		else {
			pIVar3 = (Il2CppClass)method.klass;
			bVar1 = (pIVar3._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
			pIVar3 = pIVar3.rgctx_data.klass;
			bVar1 = (pIVar3._2).bitflags1;
		}
		else {
			pIVar3 = pIVar3.rgctx_data.klass;
			bVar1 = (pIVar3._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
		}
		__this = (AottgQueryResult<TValue>)il2cpp_codegen_object_new(pIVar3);
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
		__this._State_k__BackingField = 3;
		bVar2 = String.IsNullOrEmpty(error);
		if (bVar2) {
			error = "unknown_error";
		}
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		__this._Error_k__BackingField = error;
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		__this._IsFromCache_k__BackingField = isFromCache;
		return __this;
	}

	// ApplicationManagers.Api.AottgQueryResult<object>$$FailedRefreshStale: 17 lines keep C-only constructs
	private static AottgQueryResult<TValue> object__FailedRefreshStale(object value, String error)
	{
		byte bVar1;
		bool bVar2;
		Il2CppClass pIVar3;
		AottgQueryResult<TValue> __this;

		if (Il2CppMethodInitialized_07541dda == false) {
			Il2CppMethodInitialized_07541dda = true;
			pIVar3 = (Il2CppClass)method.klass;
			bVar1 = (pIVar3._2).bitflags1;
		}
		else {
			pIVar3 = (Il2CppClass)method.klass;
			bVar1 = (pIVar3._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
			pIVar3 = pIVar3.rgctx_data.klass;
			bVar1 = (pIVar3._2).bitflags1;
		}
		else {
			pIVar3 = pIVar3.rgctx_data.klass;
			bVar1 = (pIVar3._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
		}
		__this = (AottgQueryResult<TValue>)il2cpp_codegen_object_new(pIVar3);
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		__this = new Object();
		if (__this == null) {
			throw new NullReferenceException();
		}
		pIVar3 = (Il2CppClass)method.klass;
		if (((pIVar3._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked(pIVar3);
			pIVar3 = (Il2CppClass)method.klass;
		}
		__this._State_k__BackingField = 4;
		if (((pIVar3._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked(pIVar3);
		}
		__this._Value_k__BackingField = value;
		bVar2 = String.IsNullOrEmpty(error);
		if (bVar2) {
			error = "unknown_error";
		}
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		__this._Error_k__BackingField = error;
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		__this._IsFromCache_k__BackingField = true;
		return __this;
	}

	// ApplicationManagers.Api.AottgQueryResult<object>$$.ctor: clean
	private void object___ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$get_State: 1 lines keep C-only constructs
	private int Il2CppFullySharedGenericType__get_State()
	{
		int piVar1;

		piVar1 = il2cpp_codegen_get_instance_field_data_pointer(this, (method.klass.rgctx_data._0_ApplicationManagers_Api_AottgQueryResult_TValue_. _1));
		return *piVar1;
	}

	// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$set_State: 4 lines keep C-only constructs
	private void Il2CppFullySharedGenericType__set_State(int value)
	{
		IntPtr field;
		int piVar1;

		field = (method.klass.rgctx_data._0_ApplicationManagers_Api_AottgQueryResult_TValue_._1);
		il2cpp_runtime_helper_030d6090(field, 4);
		piVar1 = il2cpp_codegen_get_instance_field_data_pointer(this, field);
		*piVar1 = value;
		il2cpp_runtime_helper_030d5fc0(*(ulong)((long)field + 8), piVar1, 0);
		return;
	}

	// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$get_Value: 4 lines keep C-only constructs
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

	// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$set_Value: 3 lines keep C-only constructs
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
		*(ulong)(auStack_38 + lVar3 + -8) = 0x4db5bd5;
		memcpy(auStack_38 + lVar3, __src, (ulong)size);
		lVar1 = *(long)(**(long*)(lVar1 + 0xc0) + 0x80);
		*(ulong)(auStack_38 + lVar3 + -8) = 0x4db5bf9;
		il2cpp_codegen_write_instance_field_data(this, (IntPtr)(lVar1 + 0x20), auStack_38 + lVar3, size);
		return;
	}

	// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$get_Error: 1 lines keep C-only constructs
	private String Il2CppFullySharedGenericType__get_Error()
	{
		ulong puVar1;

		puVar1 = il2cpp_codegen_get_instance_field_data_pointer(this, (IntPtr)((long)(method.klass.rgctx_data. _0_ApplicationManagers_Api_AottgQueryResult_TValue_._1) + 0x40));
		return (String)*puVar1;
	}

	// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$set_Error: 4 lines keep C-only constructs
	private void Il2CppFullySharedGenericType__set_Error(String value)
	{
		IntPtr field;
		IntPtr pvVar1;
		ulong puVar2;

		pvVar1 = (method.klass.rgctx_data._0_ApplicationManagers_Api_AottgQueryResult_TValue_._1);
		field = (IntPtr)((long)pvVar1 + 0x40);
		il2cpp_runtime_helper_030d6090(field, 8);
		puVar2 = il2cpp_codegen_get_instance_field_data_pointer(this, field);
		*puVar2 = value;
		il2cpp_runtime_helper_030d5fc0(*(ulong)((long)pvVar1 + 0x48), puVar2, 0);
		return;
	}

	// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$get_IsFromCache: 1 lines keep C-only constructs
	private bool Il2CppFullySharedGenericType__get_IsFromCache()
	{
		byte puVar1;

		puVar1 = il2cpp_codegen_get_instance_field_data_pointer(this, (IntPtr)((long)(method.klass.rgctx_data. _0_ApplicationManagers_Api_AottgQueryResult_TValue_._1) + 0x60));
		return (bool)*puVar1;
	}

	// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$set_IsFromCache: 4 lines keep C-only constructs
	private void Il2CppFullySharedGenericType__set_IsFromCache(bool value)
	{
		IntPtr pvVar1;
		IntPtr pvVar2;

		pvVar1 = (method.klass.rgctx_data._0_ApplicationManagers_Api_AottgQueryResult_TValue_._1);
		pvVar2 = (IntPtr)((long)pvVar1 + 0x60);
		il2cpp_runtime_helper_030d6090(pvVar2, 1);
		pvVar2 = il2cpp_codegen_get_instance_field_data_pointer(this, pvVar2);
		*(bool)pvVar2 = value;
		il2cpp_runtime_helper_030d5fc0(*(ulong)((long)pvVar1 + 0x68), pvVar2, 0);
		return;
	}

	// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$LoadingNoCache: 23 lines keep C-only constructs
	private static AottgQueryResult<TValue> Il2CppFullySharedGenericType__LoadingNoCache()
	{
		Il2CppMethodPointer pIVar1;
		Il2CppClass pIVar2;
		AottgQueryResult<TValue> pAVar3;
		Il2CppClass pIVar4;
		ushort uVar5;
		ushort uVar6;

		pIVar2 = (Il2CppClass)method.klass;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
		}
		pIVar2 = pIVar2.rgctx_data.klass;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
		}
		pAVar3 = (AottgQueryResult<TValue>)il2cpp_codegen_object_new(pIVar2);
		pIVar2 = (Il2CppClass)method.klass;
		uVar5._0_1_ = (pIVar2._2).bitflags1;
		uVar5._1_1_ = (pIVar2._2).bitflags2;
		if ((uVar5 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
			pIVar4 = (Il2CppClass)method.klass;
			uVar5._0_1_ = (pIVar4._2).bitflags1;
			uVar5._1_1_ = (pIVar4._2).bitflags2;
		}
		else {
			pIVar4 = pIVar2;
		}
		pIVar1 = (pIVar2.rgctx_data[2].method).methodPointer;
		if ((uVar5 & 1) == 0) {
			pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
		}
		(*pIVar1)(pAVar3,pIVar4.rgctx_data[2].rgctxDataDummy);
		if (pAVar3 == null) {
			throw new NullReferenceException();
		}
		pIVar2 = (Il2CppClass)method.klass;
		uVar6._0_1_ = (pIVar2._2).bitflags1;
		uVar6._1_1_ = (pIVar2._2).bitflags2;
		if ((uVar6 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
			pIVar4 = (Il2CppClass)method.klass;
			uVar6._0_1_ = (pIVar4._2).bitflags1;
			uVar6._1_1_ = (pIVar4._2).bitflags2;
		}
		else {
			pIVar4 = pIVar2;
		}
		pIVar1 = (pIVar2.rgctx_data[3].method).methodPointer;
		if ((uVar6 & 1) == 0) {
			pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
		}
		(*pIVar1)(pAVar3,0,pIVar4.rgctx_data[3].rgctxDataDummy);
		return pAVar3;
	}

	// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$ReadyFresh: 49 lines keep C-only constructs
	private static AottgQueryResult<TValue> Il2CppFullySharedGenericType__ReadyFresh(__Il2CppFullySharedGenericType value, bool isFromCache)
	{
		Il2CppMethodPointer pIVar1;
		IntPtr pvVar2;
		MethodInfo pMVar3;
		InvokerMethod pIVar4;
		long lVar5;
		AottgQueryResult<TValue> pAVar6;
		uint uVar7;
		ushort uVar10;
		ushort uVar11;
		ushort uVar12;
		ushort uVar13;
		ushort uVar14;
		Il2CppClass pIVar8;
		Il2CppClass pIVar9;
		undefined7 in_register_00000011;
		long lVar15;
		ulong puVar16;
		__Il2CppFullySharedGenericType __src;
		ulong __dest;
		ulong __n;
		ulong uStack_60;
		ulong local_58;
		__Il2CppFullySharedGenericType local_50;
		__Il2CppFullySharedGenericType local_48;
		AottgQueryResult<TValue> local_40;
		uint local_34;

		lVar15 = CONCAT71(in_register_00000011, isFromCache);
		local_50 = value.klass;
		pIVar8 = *(Il2CppClass*)(lVar15 + 0x20);
		uVar10._0_1_ = (pIVar8._2).bitflags1;
		uVar10._1_1_ = (pIVar8._2).bitflags2;
		local_34 = (uint)value.monitor;
		local_48 = local_50;
		if ((uVar10 & 1) == 0) {
			uStack_60 = 0x4db5e67;
			pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
			pIVar9 = *(Il2CppClass*)(lVar15 + 0x20);
			uVar10._0_1_ = (pIVar9._2).bitflags1;
			uVar10._1_1_ = (pIVar9._2).bitflags2;
		}
		else {
			pIVar9 = pIVar8;
		}
		__n = (ulong)((pIVar8.rgctx_data[1].klass)._2).stack_slot_size;
		lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
		__dest = (ulong)((long)&local_58 + lVar5);
		puVar16 = __dest;
		if ((uVar10 & 1) == 0) {
			*(ulong)((long)&uStack_60 + lVar5) = 0x4db5ea5;
			pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
			puVar16 = (ulong)((long)&local_58 + lVar5);
		}
		pIVar8 = pIVar9.rgctx_data.klass;
		if (((pIVar8._2).bitflags1 & 1) == 0) {
			puVar16[-1] = 0x4db5ec0;
			pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
		}
		puVar16[-1] = 0x4db5ec8;
		local_40 = (AottgQueryResult<TValue>)il2cpp_codegen_object_new(pIVar8);
		pIVar8 = *(Il2CppClass*)(lVar15 + 0x20);
		uVar11._0_1_ = (pIVar8._2).bitflags1;
		uVar11._1_1_ = (pIVar8._2).bitflags2;
		if ((uVar11 & 1) == 0) {
			puVar16[-1] = 0x4db5ee2;
			pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
			pIVar9 = *(Il2CppClass*)(lVar15 + 0x20);
			uVar11._0_1_ = (pIVar9._2).bitflags1;
			uVar11._1_1_ = (pIVar9._2).bitflags2;
		}
		else {
			pIVar9 = pIVar8;
		}
		pIVar1 = (pIVar8.rgctx_data[2].method).methodPointer;
		if ((uVar11 & 1) == 0) {
			puVar16[-1] = 0x4db5f0b;
			pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
		}
		pAVar6 = local_40;
		pvVar2 = pIVar9.rgctx_data[2].rgctxDataDummy;
		puVar16[-1] = 0x4db5f22;
		(*pIVar1)(pAVar6,pvVar2);
		if (pAVar6 == null) {
			puVar16[-1] = 0x4db60ec;
			throw new NullReferenceException();
		}
		pIVar8 = *(Il2CppClass*)(lVar15 + 0x20);
		uVar12._0_1_ = (pIVar8._2).bitflags1;
		uVar12._1_1_ = (pIVar8._2).bitflags2;
		if ((uVar12 & 1) == 0) {
			puVar16[-1] = 0x4db5f41;
			pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
			pIVar9 = *(Il2CppClass*)(lVar15 + 0x20);
			uVar12._0_1_ = (pIVar9._2).bitflags1;
			uVar12._1_1_ = (pIVar9._2).bitflags2;
		}
		else {
			pIVar9 = pIVar8;
		}
		pIVar1 = (pIVar8.rgctx_data[3].method).methodPointer;
		if ((uVar12 & 1) == 0) {
			puVar16[-1] = 0x4db5f6a;
			pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
		}
		pAVar6 = local_40;
		pvVar2 = pIVar9.rgctx_data[3].rgctxDataDummy;
		puVar16[-1] = 0x4db5f83;
		(*pIVar1)(pAVar6,1,pvVar2);
		pIVar8 = *(Il2CppClass*)(lVar15 + 0x20);
		if (((pIVar8._2).bitflags1 & 1) == 0) {
			puVar16[-1] = 0x4db5f9a;
			pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
			pIVar9 = *(Il2CppClass*)(lVar15 + 0x20);
		}
		else {
			pIVar9 = pIVar8;
		}
		__src = (__Il2CppFullySharedGenericType)&local_50;
		if ((int)pIVar8.rgctx_data[1].type[2].bits < 0) {
			__src = local_48;
		}
		puVar16[-1] = 0x4db5fca;
		memcpy(__dest, __src, __n);
		uVar13._0_1_ = (pIVar9._2).bitflags1;
		uVar13._1_1_ = (pIVar9._2).bitflags2;
		if ((uVar13 & 1) == 0) {
			puVar16[-1] = 0x4db5fdf;
			pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
			pIVar8 = *(Il2CppClass*)(lVar15 + 0x20);
			uVar13._0_1_ = (pIVar8._2).bitflags1;
			uVar13._1_1_ = (pIVar8._2).bitflags2;
		}
		else {
			pIVar8 = pIVar9;
		}
		pIVar1 = (pIVar9.rgctx_data[4].method).methodPointer;
		if ((uVar13 & 1) == 0) {
			puVar16[-1] = 0x4db600c;
			pIVar9 = il2cpp_codegen_class_init_checked(pIVar8);
			pIVar8 = *(Il2CppClass*)(lVar15 + 0x20);
			uVar13._0_1_ = (pIVar8._2).bitflags1;
			uVar13._1_1_ = (pIVar8._2).bitflags2;
			pMVar3 = pIVar9.rgctx_data[4].method;
		}
		else {
			pMVar3 = pIVar8.rgctx_data[4].method;
		}
		if ((uVar13 & 1) == 0) {
			puVar16[-1] = 0x4db6046;
			pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
		}
		uVar7 = local_34;
		pAVar6 = local_40;
		if (-1 < (int)pIVar8.rgctx_data[1].type[2].bits) {
			__dest = (ulong)*__dest;
		}
		pIVar4 = pMVar3.invoker_method;
		local_58 = __dest;
		puVar16[-1] = 0x4db607a;
		(*pIVar4)(pIVar1,pMVar3,pAVar6,&local_58,__dest);
		pIVar8 = *(Il2CppClass*)(lVar15 + 0x20);
		uVar14._0_1_ = (pIVar8._2).bitflags1;
		uVar14._1_1_ = (pIVar8._2).bitflags2;
		if ((uVar14 & 1) == 0) {
			puVar16[-1] = 0x4db6090;
			pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
			pIVar9 = *(Il2CppClass*)(lVar15 + 0x20);
			uVar14._0_1_ = (pIVar9._2).bitflags1;
			uVar14._1_1_ = (pIVar9._2).bitflags2;
		}
		else {
			pIVar9 = pIVar8;
		}
		pIVar1 = (pIVar8.rgctx_data[5].method).methodPointer;
		if ((uVar14 & 1) == 0) {
			puVar16[-1] = 0x4db60b9;
			pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
		}
		pAVar6 = local_40;
		pvVar2 = pIVar9.rgctx_data[5].rgctxDataDummy;
		puVar16[-1] = 0x4db60d5;
		(*pIVar1)(pAVar6,(ulong)(uVar7 & 0xff),pvVar2);
		return pAVar6;
	}

	// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$ReadyStaleRefreshing: 44 lines keep C-only constructs
	private static AottgQueryResult<TValue> Il2CppFullySharedGenericType__ReadyStaleRefreshing(__Il2CppFullySharedGenericType value)
	{
		Il2CppMethodPointer pIVar1;
		IntPtr pvVar2;
		MethodInfo pMVar3;
		InvokerMethod pIVar4;
		long lVar5;
		Il2CppClass pIVar6;
		Il2CppClass pIVar7;
		AottgQueryResult<TValue> pAVar8;
		ushort uVar9;
		ushort uVar10;
		ushort uVar11;
		ushort uVar12;
		ushort uVar13;
		ulong puVar14;
		IntPtr pvVar15;
		__Il2CppFullySharedGenericType __src;
		ulong __dest;
		ulong __n;
		ulong[] apuStack_58 = new ulong[2];
		__Il2CppFullySharedGenericType local_48;
		__Il2CppFullySharedGenericType local_40;
		AottgQueryResult<TValue> local_38;

		pvVar15 = value.monitor;
		local_48 = value.klass;
		pIVar6 = *(Il2CppClass*)((long)pvVar15 + 0x20);
		uVar9._0_1_ = (pIVar6._2).bitflags1;
		uVar9._1_1_ = (pIVar6._2).bitflags2;
		local_40 = local_48;
		if ((uVar9 & 1) == 0) {
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
			pIVar7 = *(Il2CppClass*)((long)pvVar15 + 0x20);
			uVar9._0_1_ = (pIVar7._2).bitflags1;
			uVar9._1_1_ = (pIVar7._2).bitflags2;
		}
		else {
			pIVar7 = pIVar6;
		}
		__n = (ulong)((pIVar6.rgctx_data[1].klass)._2).stack_slot_size;
		lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
		__dest = (ulong)((long)apuStack_58 + lVar5);
		puVar14 = __dest;
		if ((uVar9 & 1) == 0) {
			*(ulong)((long)apuStack_58 + lVar5 + -8) = 0x4db6161;
			pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
			puVar14 = (ulong)((long)apuStack_58 + lVar5);
		}
		pIVar6 = pIVar7.rgctx_data.klass;
		if (((pIVar6._2).bitflags1 & 1) == 0) {
			puVar14[-1] = 0x4db617c;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
		}
		puVar14[-1] = 0x4db6184;
		pAVar8 = (AottgQueryResult<TValue>)il2cpp_codegen_object_new(pIVar6);
		pIVar6 = *(Il2CppClass*)((long)pvVar15 + 0x20);
		uVar10._0_1_ = (pIVar6._2).bitflags1;
		uVar10._1_1_ = (pIVar6._2).bitflags2;
		if ((uVar10 & 1) == 0) {
			puVar14[-1] = 0x4db619c;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
			pIVar7 = *(Il2CppClass*)((long)pvVar15 + 0x20);
			uVar10._0_1_ = (pIVar7._2).bitflags1;
			uVar10._1_1_ = (pIVar7._2).bitflags2;
		}
		else {
			pIVar7 = pIVar6;
		}
		pIVar1 = (pIVar6.rgctx_data[2].method).methodPointer;
		if ((uVar10 & 1) == 0) {
			puVar14[-1] = 0x4db61c4;
			pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
		}
		pvVar2 = pIVar7.rgctx_data[2].rgctxDataDummy;
		puVar14[-1] = 0x4db61d7;
		(*pIVar1)(pAVar8,pvVar2);
		if (pAVar8 == null) {
			puVar14[-1] = 0x4db639e;
			throw new NullReferenceException();
		}
		pIVar6 = *(Il2CppClass*)((long)pvVar15 + 0x20);
		uVar11._0_1_ = (pIVar6._2).bitflags1;
		uVar11._1_1_ = (pIVar6._2).bitflags2;
		if ((uVar11 & 1) == 0) {
			puVar14[-1] = 0x4db61f5;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
			pIVar7 = *(Il2CppClass*)((long)pvVar15 + 0x20);
			uVar11._0_1_ = (pIVar7._2).bitflags1;
			uVar11._1_1_ = (pIVar7._2).bitflags2;
		}
		else {
			pIVar7 = pIVar6;
		}
		pIVar1 = (pIVar6.rgctx_data[3].method).methodPointer;
		if ((uVar11 & 1) == 0) {
			puVar14[-1] = 0x4db621d;
			pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
		}
		pvVar2 = pIVar7.rgctx_data[3].rgctxDataDummy;
		local_38 = pAVar8;
		puVar14[-1] = 0x4db6239;
		(*pIVar1)(pAVar8,2,pvVar2);
		pIVar6 = *(Il2CppClass*)((long)pvVar15 + 0x20);
		if (((pIVar6._2).bitflags1 & 1) == 0) {
			puVar14[-1] = 0x4db6250;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
			pIVar7 = *(Il2CppClass*)((long)pvVar15 + 0x20);
		}
		else {
			pIVar7 = pIVar6;
		}
		__src = (__Il2CppFullySharedGenericType)&local_48;
		if ((int)pIVar6.rgctx_data[1].type[2].bits < 0) {
			__src = local_40;
		}
		puVar14[-1] = 0x4db627f;
		memcpy(__dest, __src, __n);
		uVar12._0_1_ = (pIVar7._2).bitflags1;
		uVar12._1_1_ = (pIVar7._2).bitflags2;
		if ((uVar12 & 1) == 0) {
			puVar14[-1] = 0x4db6295;
			pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
			pIVar6 = *(Il2CppClass*)((long)pvVar15 + 0x20);
			uVar12._0_1_ = (pIVar6._2).bitflags1;
			uVar12._1_1_ = (pIVar6._2).bitflags2;
		}
		else {
			pIVar6 = pIVar7;
		}
		pIVar1 = (pIVar7.rgctx_data[4].method).methodPointer;
		if ((uVar12 & 1) == 0) {
			puVar14[-1] = 0x4db62c2;
			pIVar7 = il2cpp_codegen_class_init_checked(pIVar6);
			pIVar6 = *(Il2CppClass*)((long)pvVar15 + 0x20);
			uVar12._0_1_ = (pIVar6._2).bitflags1;
			uVar12._1_1_ = (pIVar6._2).bitflags2;
			pMVar3 = pIVar7.rgctx_data[4].method;
		}
		else {
			pMVar3 = pIVar6.rgctx_data[4].method;
		}
		if ((uVar12 & 1) == 0) {
			puVar14[-1] = 0x4db62fc;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
		}
		pAVar8 = local_38;
		if (-1 < (int)pIVar6.rgctx_data[1].type[2].bits) {
			__dest = (ulong)*__dest;
		}
		pIVar4 = pMVar3.invoker_method;
		apuStack_58[1] = __dest;
		puVar14[-1] = 0x4db6331;
		(*pIVar4)(pIVar1,pMVar3,pAVar8,apuStack_58 + 1,__dest);
		pIVar6 = *(Il2CppClass*)((long)pvVar15 + 0x20);
		uVar13._0_1_ = (pIVar6._2).bitflags1;
		uVar13._1_1_ = (pIVar6._2).bitflags2;
		if ((uVar13 & 1) == 0) {
			puVar14[-1] = 0x4db6346;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
			pIVar7 = *(Il2CppClass*)((long)pvVar15 + 0x20);
			uVar13._0_1_ = (pIVar7._2).bitflags1;
			uVar13._1_1_ = (pIVar7._2).bitflags2;
		}
		else {
			pIVar7 = pIVar6;
		}
		pIVar1 = (pIVar6.rgctx_data[5].method).methodPointer;
		if ((uVar13 & 1) == 0) {
			puVar14[-1] = 0x4db636e;
			pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
		}
		pvVar15 = pIVar7.rgctx_data[5].rgctxDataDummy;
		puVar14[-1] = 0x4db6387;
		(*pIVar1)(pAVar8,1,pvVar15);
		return pAVar8;
	}

	// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$FailedNoCache: 43 lines keep C-only constructs
	private static AottgQueryResult<TValue> Il2CppFullySharedGenericType__FailedNoCache(String error, bool isFromCache)
	{
		byte bVar1;
		Il2CppMethodPointer pIVar2;
		bool bVar3;
		Il2CppClass pIVar4;
		AottgQueryResult<TValue> pAVar5;
		Il2CppClass pIVar6;
		ushort uVar7;
		ushort uVar8;
		ushort uVar9;
		ushort uVar10;

		if (Il2CppMethodInitialized_07541ddb == false) {
			Il2CppMethodInitialized_07541ddb = true;
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
		pAVar5 = (AottgQueryResult<TValue>)il2cpp_codegen_object_new(pIVar4);
		pIVar4 = (Il2CppClass)method.klass;
		uVar7._0_1_ = (pIVar4._2).bitflags1;
		uVar7._1_1_ = (pIVar4._2).bitflags2;
		if ((uVar7 & 1) == 0) {
			pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
			pIVar6 = (Il2CppClass)method.klass;
			uVar7._0_1_ = (pIVar6._2).bitflags1;
			uVar7._1_1_ = (pIVar6._2).bitflags2;
		}
		else {
			pIVar6 = pIVar4;
		}
		pIVar2 = (pIVar4.rgctx_data[2].method).methodPointer;
		if ((uVar7 & 1) == 0) {
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
		}
		(*pIVar2)(pAVar5,pIVar6.rgctx_data[2].rgctxDataDummy);
		if (pAVar5 == null) {
			throw new NullReferenceException();
		}
		pIVar4 = (Il2CppClass)method.klass;
		uVar8._0_1_ = (pIVar4._2).bitflags1;
		uVar8._1_1_ = (pIVar4._2).bitflags2;
		if ((uVar8 & 1) == 0) {
			pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
			pIVar6 = (Il2CppClass)method.klass;
			uVar8._0_1_ = (pIVar6._2).bitflags1;
			uVar8._1_1_ = (pIVar6._2).bitflags2;
		}
		else {
			pIVar6 = pIVar4;
		}
		pIVar2 = (pIVar4.rgctx_data[3].method).methodPointer;
		if ((uVar8 & 1) == 0) {
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
		}
		(*pIVar2)(pAVar5,3,pIVar6.rgctx_data[3].rgctxDataDummy);
		bVar3 = String.IsNullOrEmpty(error);
		if (bVar3) {
			error = "unknown_error";
		}
		pIVar4 = (Il2CppClass)method.klass;
		uVar9._0_1_ = (pIVar4._2).bitflags1;
		uVar9._1_1_ = (pIVar4._2).bitflags2;
		if ((uVar9 & 1) == 0) {
			pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
			pIVar6 = (Il2CppClass)method.klass;
			uVar9._0_1_ = (pIVar6._2).bitflags1;
			uVar9._1_1_ = (pIVar6._2).bitflags2;
		}
		else {
			pIVar6 = pIVar4;
		}
		pIVar2 = (pIVar4.rgctx_data[6].method).methodPointer;
		if ((uVar9 & 1) == 0) {
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
		}
		(*pIVar2)(pAVar5,error,pIVar6.rgctx_data[6].rgctxDataDummy);
		pIVar4 = (Il2CppClass)method.klass;
		uVar10._0_1_ = (pIVar4._2).bitflags1;
		uVar10._1_1_ = (pIVar4._2).bitflags2;
		if ((uVar10 & 1) == 0) {
			pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
			pIVar6 = (Il2CppClass)method.klass;
			uVar10._0_1_ = (pIVar6._2).bitflags1;
			uVar10._1_1_ = (pIVar6._2).bitflags2;
		}
		else {
			pIVar6 = pIVar4;
		}
		pIVar2 = (pIVar4.rgctx_data[5].method).methodPointer;
		if ((uVar10 & 1) == 0) {
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
		}
		(*pIVar2)(pAVar5,isFromCache,pIVar6.rgctx_data[5].rgctxDataDummy);
		return pAVar5;
	}

	// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$FailedRefreshStale: 54 lines keep C-only constructs
	private static AottgQueryResult<TValue> Il2CppFullySharedGenericType__FailedRefreshStale(__Il2CppFullySharedGenericType value, String error)
	{
		Il2CppMethodPointer pIVar1;
		IntPtr pvVar2;
		MethodInfo pMVar3;
		InvokerMethod pIVar4;
		long lVar5;
		AottgQueryResult<TValue> pAVar6;
		ushort uVar10;
		ushort uVar11;
		ushort uVar12;
		ushort uVar13;
		ushort uVar14;
		ushort uVar15;
		bool bVar7;
		Il2CppClass pIVar8;
		Il2CppClass pIVar9;
		ulong puVar16;
		__Il2CppFullySharedGenericType pUVar17;
		String value_00;
		ulong __dest;
		ulong __n;
		ulong uStack_60;
		ulong local_58;
		__Il2CppFullySharedGenericType local_50;
		__Il2CppFullySharedGenericType local_48;
		String local_40;
		AottgQueryResult<TValue> local_38;

		pUVar17 = value.klass;
		local_50 = pUVar17;
		if (g_data_07541ddc == false) {
			uStack_60 = 0x4db65e3;
			g_data_07541ddc = true;
		}
		pIVar8 = (*(ulong)((sbyte)error + 0x20));
		uVar10._0_1_ = (pIVar8._2).bitflags1;
		uVar10._1_1_ = (pIVar8._2).bitflags2;
		local_40 = value.monitor;
		if ((uVar10 & 1) == 0) {
			uStack_60 = 0x4db6604;
			pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
			pIVar9 = (*(ulong)((sbyte)error + 0x20));
			uVar10._0_1_ = (pIVar9._2).bitflags1;
			uVar10._1_1_ = (pIVar9._2).bitflags2;
		}
		else {
			pIVar9 = pIVar8;
		}
		__n = (ulong)((pIVar8.rgctx_data[1].klass)._2).stack_slot_size;
		lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
		__dest = (ulong)((long)&local_58 + lVar5);
		puVar16 = __dest;
		if ((uVar10 & 1) == 0) {
			*(ulong)((long)&uStack_60 + lVar5) = 0x4db6642;
			pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
			puVar16 = (ulong)((long)&local_58 + lVar5);
		}
		pIVar8 = pIVar9.rgctx_data.klass;
		if (((pIVar8._2).bitflags1 & 1) == 0) {
			puVar16[-1] = 0x4db665d;
			pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
		}
		puVar16[-1] = 0x4db6665;
		local_38 = (AottgQueryResult<TValue>)il2cpp_codegen_object_new(pIVar8);
		pIVar8 = (*(ulong)((sbyte)error + 0x20));
		uVar11._0_1_ = (pIVar8._2).bitflags1;
		uVar11._1_1_ = (pIVar8._2).bitflags2;
		local_48 = pUVar17;
		if ((uVar11 & 1) == 0) {
			puVar16[-1] = 0x4db6683;
			pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
			pIVar9 = (*(ulong)((sbyte)error + 0x20));
			uVar11._0_1_ = (pIVar9._2).bitflags1;
			uVar11._1_1_ = (pIVar9._2).bitflags2;
		}
		else {
			pIVar9 = pIVar8;
		}
		pIVar1 = (pIVar8.rgctx_data[2].method).methodPointer;
		if ((uVar11 & 1) == 0) {
			puVar16[-1] = 0x4db66ac;
			pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
		}
		pAVar6 = local_38;
		pvVar2 = pIVar9.rgctx_data[2].rgctxDataDummy;
		puVar16[-1] = 0x4db66c3;
		(*pIVar1)(pAVar6,pvVar2);
		if (pAVar6 == null) {
			puVar16[-1] = 0x4db68fc;
			throw new NullReferenceException();
		}
		pIVar8 = (*(ulong)((sbyte)error + 0x20));
		uVar12._0_1_ = (pIVar8._2).bitflags1;
		uVar12._1_1_ = (pIVar8._2).bitflags2;
		if ((uVar12 & 1) == 0) {
			puVar16[-1] = 0x4db66e2;
			pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
			pIVar9 = (*(ulong)((sbyte)error + 0x20));
			uVar12._0_1_ = (pIVar9._2).bitflags1;
			uVar12._1_1_ = (pIVar9._2).bitflags2;
		}
		else {
			pIVar9 = pIVar8;
		}
		pIVar1 = (pIVar8.rgctx_data[3].method).methodPointer;
		if ((uVar12 & 1) == 0) {
			puVar16[-1] = 0x4db670b;
			pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
		}
		pAVar6 = local_38;
		pvVar2 = pIVar9.rgctx_data[3].rgctxDataDummy;
		puVar16[-1] = 0x4db6724;
		(*pIVar1)(pAVar6,4,pvVar2);
		pIVar8 = (*(ulong)((sbyte)error + 0x20));
		if (((pIVar8._2).bitflags1 & 1) == 0) {
			puVar16[-1] = 0x4db673b;
			pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
			pIVar9 = (*(ulong)((sbyte)error + 0x20));
		}
		else {
			pIVar9 = pIVar8;
		}
		pUVar17 = (__Il2CppFullySharedGenericType)&local_50;
		if ((int)pIVar8.rgctx_data[1].type[2].bits < 0) {
			pUVar17 = local_48;
		}
		puVar16[-1] = 0x4db676b;
		memcpy(__dest, pUVar17, __n);
		uVar13._0_1_ = (pIVar9._2).bitflags1;
		uVar13._1_1_ = (pIVar9._2).bitflags2;
		if ((uVar13 & 1) == 0) {
			puVar16[-1] = 0x4db6780;
			pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
			pIVar8 = (*(ulong)((sbyte)error + 0x20));
			uVar13._0_1_ = (pIVar8._2).bitflags1;
			uVar13._1_1_ = (pIVar8._2).bitflags2;
		}
		else {
			pIVar8 = pIVar9;
		}
		pIVar1 = (pIVar9.rgctx_data[4].method).methodPointer;
		if ((uVar13 & 1) == 0) {
			puVar16[-1] = 0x4db67ad;
			pIVar9 = il2cpp_codegen_class_init_checked(pIVar8);
			pIVar8 = (*(ulong)((sbyte)error + 0x20));
			uVar13._0_1_ = (pIVar8._2).bitflags1;
			uVar13._1_1_ = (pIVar8._2).bitflags2;
			pMVar3 = pIVar9.rgctx_data[4].method;
		}
		else {
			pMVar3 = pIVar8.rgctx_data[4].method;
		}
		if ((uVar13 & 1) == 0) {
			puVar16[-1] = 0x4db67e7;
			pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
		}
		pAVar6 = local_38;
		value_00 = local_40;
		if (-1 < (int)pIVar8.rgctx_data[1].type[2].bits) {
			__dest = (ulong)*__dest;
		}
		pIVar4 = pMVar3.invoker_method;
		local_58 = __dest;
		puVar16[-1] = 0x4db681b;
		(*pIVar4)(pIVar1,pMVar3,pAVar6,&local_58,__dest);
		puVar16[-1] = 0x4db6825;
		bVar7 = String.IsNullOrEmpty(value_00);
		if (bVar7) {
			value_00 = "unknown_error";
		}
		pIVar8 = (*(ulong)((sbyte)error + 0x20));
		uVar14._0_1_ = (pIVar8._2).bitflags1;
		uVar14._1_1_ = (pIVar8._2).bitflags2;
		if ((uVar14 & 1) == 0) {
			puVar16[-1] = 0x4db6849;
			pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
			pIVar9 = (*(ulong)((sbyte)error + 0x20));
			uVar14._0_1_ = (pIVar9._2).bitflags1;
			uVar14._1_1_ = (pIVar9._2).bitflags2;
		}
		else {
			pIVar9 = pIVar8;
		}
		pIVar1 = (pIVar8.rgctx_data[6].method).methodPointer;
		if ((uVar14 & 1) == 0) {
			puVar16[-1] = 0x4db6872;
			pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
		}
		pAVar6 = local_38;
		pvVar2 = pIVar9.rgctx_data[6].rgctxDataDummy;
		puVar16[-1] = 0x4db6889;
		(*pIVar1)(pAVar6,value_00,pvVar2);
		pIVar8 = (*(ulong)((sbyte)error + 0x20));
		uVar15._0_1_ = (pIVar8._2).bitflags1;
		uVar15._1_1_ = (pIVar8._2).bitflags2;
		if ((uVar15 & 1) == 0) {
			puVar16[-1] = 0x4db689f;
			pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
			pIVar9 = (*(ulong)((sbyte)error + 0x20));
			uVar15._0_1_ = (pIVar9._2).bitflags1;
			uVar15._1_1_ = (pIVar9._2).bitflags2;
		}
		else {
			pIVar9 = pIVar8;
		}
		pIVar1 = (pIVar8.rgctx_data[5].method).methodPointer;
		if ((uVar15 & 1) == 0) {
			puVar16[-1] = 0x4db68c8;
			pIVar9 = il2cpp_codegen_class_init_checked(pIVar9);
		}
		pAVar6 = local_38;
		pvVar2 = pIVar9.rgctx_data[5].rgctxDataDummy;
		puVar16[-1] = 0x4db68e5;
		(*pIVar1)(pAVar6,1,pvVar2);
		return pAVar6;
	}

	// ApplicationManagers.Api.AottgQueryResult<__Il2CppFullySharedGenericType>$$.ctor: clean
	private void Il2CppFullySharedGenericType___ctor()
	{
		base();
		return;
	}
}
