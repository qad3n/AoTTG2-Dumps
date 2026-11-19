// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgQueryCache
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgQueryCache.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x20009C1")]
public sealed class AottgQueryCache<TKey, TValue>
{
	[Token(Token = "0x20009C2")]
	private sealed class Entry
	{
		[Token(Token = "0x40030F7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public readonly List<Action<AottgQueryResult<TValue>>> Subscribers;

		[Token(Token = "0x40030F8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public TValue Value;

		[Token(Token = "0x40030F9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public string Error;

		[Token(Token = "0x40030FA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public DateTimeOffset CachedAt;

		[Token(Token = "0x40030FB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool HasSuccess;

		[Token(Token = "0x40030FC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool HasFailure;

		[Token(Token = "0x40030FD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public bool InFlight;

		[Token(Token = "0x6005A7D")]
		public Entry()
		{
		}
	}

	[Token(Token = "0x40030F3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Action<TKey, Action<AottgQueryFetchResult<TValue>>> _fetch;

	[Token(Token = "0x40030F4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Func<DateTimeOffset> _now;

	[Token(Token = "0x40030F5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly AottgQueryPolicy _policy;

	[Token(Token = "0x40030F6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private readonly Dictionary<TKey, Entry> _entries;

	[Token(Token = "0x6005A75")]
	public AottgQueryCache(Action<TKey, Action<AottgQueryFetchResult<TValue>>> fetch, [Optional] Func<DateTimeOffset> now, [Optional] AottgQueryPolicy policy)
	{
	}

	[Token(Token = "0x6005A76")]
	public bool HasEntry(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A77")]
	public bool IsInFlight(TKey key)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A78")]
	public void Clear()
	{
	}

	[Token(Token = "0x6005A79")]
	public void Clear(TKey key)
	{
	}

	[Token(Token = "0x6005A7A")]
	public void Get(TKey key, Action<AottgQueryResult<TValue>> onResult, bool forceRefresh = false)
	{
	}

	[Token(Token = "0x6005A7B")]
	private bool TryEmitFresh(Entry entry, DateTimeOffset now, Action<AottgQueryResult<TValue>> onResult)
	{
		return default(bool);
	}

	[Token(Token = "0x6005A7C")]
	private void Complete(TKey key, AottgQueryFetchResult<TValue> result)
	{
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ApplicationManagers/Api/AottgQueryCache.c.

	// ApplicationManagers.Api.AottgQueryCache.<>c<object, object>$$.cctor: 15 lines keep C-only constructs
	private static void c_object_object___cctor()
	{
		Il2CppClass pIVar1;
		object __this;

		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		__this = il2cpp_codegen_object_new(pIVar1);
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		__this = new Object();
		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data[2].klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		*(object*)pIVar1.static_fields = __this;
		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data[2].klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c<object, object>$$.ctor: clean
	private void c_object_object___ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c<object, object>$$<.ctor>b__4_0: clean
	private DateTimeOffset c_object_object___ctor_b__4_0()
	{
		uint uVar1;
		DateTimeOffset SVar2;

		if (Il2CppMethodInitialized_0753e8c4 == false) {
			Il2CppMethodInitialized_0753e8c4 = true;
			uVar1 = (typeof(DateTimeOffset)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(DateTimeOffset)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			SVar2 = (DateTimeOffset)DateTimeOffset.UtcNow;
			return (DateTimeOffset)SVar2;
		}
		SVar2 = (DateTimeOffset)DateTimeOffset.UtcNow;
		return (DateTimeOffset)SVar2;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.cctor: 24 lines keep C-only constructs
	private static void c___Il2CppFullySharedGenericType___Il2CppFullySharedGenericType___cctor()
	{
		Il2CppMethodPointer pIVar1;
		Il2CppClass pIVar2;
		object pIVar3;
		Il2CppClass klass;
		ushort uVar4;

		pIVar2 = (Il2CppClass)method.klass;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
		}
		pIVar2 = pIVar2.rgctx_data.klass;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
		}
		pIVar3 = il2cpp_codegen_object_new(pIVar2);
		pIVar2 = (Il2CppClass)method.klass;
		uVar4._0_1_ = (pIVar2._2).bitflags1;
		uVar4._1_1_ = (pIVar2._2).bitflags2;
		if ((uVar4 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
			klass = (Il2CppClass)method.klass;
			uVar4._0_1_ = (klass._2).bitflags1;
			uVar4._1_1_ = (klass._2).bitflags2;
		}
		else {
			klass = pIVar2;
		}
		pIVar1 = (pIVar2.rgctx_data[1].method).methodPointer;
		if ((uVar4 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		(*pIVar1)(pIVar3,klass.rgctx_data[1].rgctxDataDummy);
		pIVar2 = (Il2CppClass)method.klass;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
		}
		pIVar2 = pIVar2.rgctx_data[2].klass;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
		}
		*(object*)pIVar2.static_fields = pIVar3;
		pIVar2 = (Il2CppClass)method.klass;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
		}
		pIVar2 = pIVar2.rgctx_data[2].klass;
		if (((pIVar2._2).bitflags1 & 1) == 0) {
			pIVar2 = il2cpp_codegen_class_init_checked(pIVar2);
		}
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.ctor: clean
	private void c___Il2CppFullySharedGenericType___Il2CppFullySharedGenericType___ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$<.ctor>b__4_0: clean
	private DateTimeOffset c___Il2CppFullySharedGenericType___Il2CppFullySharedGenericType___ctor_b__4_0()
	{
		uint uVar1;
		DateTimeOffset SVar2;

		if (Il2CppMethodInitialized_0753e8c7 == false) {
			Il2CppMethodInitialized_0753e8c7 = true;
			uVar1 = (typeof(DateTimeOffset)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(DateTimeOffset)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			SVar2 = (DateTimeOffset)DateTimeOffset.UtcNow;
			return (DateTimeOffset)SVar2;
		}
		SVar2 = (DateTimeOffset)DateTimeOffset.UtcNow;
		return (DateTimeOffset)SVar2;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c<AottgChangelogService.ListKey, object>$$.cctor: 15 lines keep C-only constructs
	private static void c_AottgChangelogService_ListKey_object___cctor()
	{
		Il2CppClass pIVar1;
		object __this;

		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		__this = il2cpp_codegen_object_new(pIVar1);
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		__this = new Object();
		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data[2].klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		*(object*)pIVar1.static_fields = __this;
		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data[2].klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c<AottgChangelogService.ListKey, object>$$.ctor: clean
	private void c_AottgChangelogService_ListKey_object___ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c<AottgChangelogService.ListKey, object>$$<.ctor>b__4_0: clean
	private DateTimeOffset c_AottgChangelogService_ListKey_object___ctor_b__4_0()
	{
		uint uVar1;
		DateTimeOffset SVar2;

		if (Il2CppMethodInitialized_0753e8cd == false) {
			Il2CppMethodInitialized_0753e8cd = true;
			uVar1 = (typeof(DateTimeOffset)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(DateTimeOffset)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			SVar2 = (DateTimeOffset)DateTimeOffset.UtcNow;
			return (DateTimeOffset)SVar2;
		}
		SVar2 = (DateTimeOffset)DateTimeOffset.UtcNow;
		return (DateTimeOffset)SVar2;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c<AottgChangelogService.UnitKey, object>$$.cctor: 15 lines keep C-only constructs
	private static void c_AottgChangelogService_UnitKey_object___cctor()
	{
		Il2CppClass pIVar1;
		object __this;

		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		__this = il2cpp_codegen_object_new(pIVar1);
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		__this = new Object();
		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data[2].klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		*(object*)pIVar1.static_fields = __this;
		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data[2].klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c<AottgChangelogService.UnitKey, object>$$.ctor: clean
	private void c_AottgChangelogService_UnitKey_object___ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c<AottgChangelogService.UnitKey, object>$$<.ctor>b__4_0: clean
	private DateTimeOffset c_AottgChangelogService_UnitKey_object___ctor_b__4_0()
	{
		uint uVar1;
		DateTimeOffset SVar2;

		if (Il2CppMethodInitialized_0753e8ce == false) {
			Il2CppMethodInitialized_0753e8ce = true;
			uVar1 = (typeof(DateTimeOffset)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(DateTimeOffset)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			SVar2 = (DateTimeOffset)DateTimeOffset.UtcNow;
			return (DateTimeOffset)SVar2;
		}
		SVar2 = (DateTimeOffset)DateTimeOffset.UtcNow;
		return (DateTimeOffset)SVar2;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c<AottgCreditsService.UnitKey, object>$$.cctor: 15 lines keep C-only constructs
	private static void c_AottgCreditsService_UnitKey_object___cctor()
	{
		Il2CppClass pIVar1;
		object __this;

		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		__this = il2cpp_codegen_object_new(pIVar1);
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		__this = new Object();
		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data[2].klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		*(object*)pIVar1.static_fields = __this;
		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data[2].klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c<AottgCreditsService.UnitKey, object>$$.ctor: clean
	private void c_AottgCreditsService_UnitKey_object___ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c<AottgCreditsService.UnitKey, object>$$<.ctor>b__4_0: clean
	private DateTimeOffset c_AottgCreditsService_UnitKey_object___ctor_b__4_0()
	{
		uint uVar1;
		DateTimeOffset SVar2;

		if (Il2CppMethodInitialized_0753e8cf == false) {
			Il2CppMethodInitialized_0753e8cf = true;
			uVar1 = (typeof(DateTimeOffset)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(DateTimeOffset)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			SVar2 = (DateTimeOffset)DateTimeOffset.UtcNow;
			return (DateTimeOffset)SVar2;
		}
		SVar2 = (DateTimeOffset)DateTimeOffset.UtcNow;
		return (DateTimeOffset)SVar2;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c__DisplayClass9_0<object, object>$$.ctor: clean
	private void c__DisplayClass9_0_object_object___ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c__DisplayClass9_0<object, object>$$<Get>b__0: clean
	private void c__DisplayClass9_0_object_object___Get_b__0(AottgQueryFetchResult<TValue> result)
	{
		AottgQueryCache<TKey, TValue> __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Complete(this.key, result);
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c__DisplayClass9_0<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.ctor: clean
	private void c__DisplayClass9_0___Il2CppFullySharedGenericType___Il2CppFullySharedGenericType___ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c__DisplayClass9_0<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$<Get>b__0: 6 lines keep C-only constructs
	private void c__DisplayClass9_0___Il2CppFullySharedGenericType___Il2CppFullySharedGenericType___Get_b__0(AottgQueryFetchResult<TValue> result)
	{
		ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__RGCTXs pAVar1;
		IntPtr pvVar2;
		MethodInfo pMVar3;
		Il2CppMethodPointer pIVar4;
		InvokerMethod pIVar5;
		long lVar6;
		AottgQueryFetchResult<TValue> pAVar7;
		ulong puVar8;
		IntPtr pvVar9;
		ulong __dest;
		ulong __n;
		AottgQueryFetchResult<TValue>[] apAStack_50 = new AottgQueryFetchResult<TValue>[4];

		pAVar1 = method.klass.rgctx_data;
		__n = (ulong)(pAVar1._2_TKey._2).stack_slot_size;
		lVar6 = -(__n + 0xf & 0xfffffffffffffff0);
		__dest = (ulong)((long)apAStack_50 + lVar6 + 8);
		pvVar2 = (pAVar1._0_ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue_._1);
		apAStack_50[3] = result;
		*(ulong)((long)apAStack_50 + lVar6) = 0x39a7c11;
		puVar8 = il2cpp_codegen_get_instance_field_data_pointer(this, pvVar2);
		pvVar2 = (IntPtr)*puVar8;
		pvVar9 = (method.klass.rgctx_data. _0_ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue_._1);
		*(ulong)((long)apAStack_50 + lVar6) = 0x39a7c35;
		pvVar9 = il2cpp_codegen_get_instance_field_data_pointer(this, (IntPtr)((long)pvVar9 + 0x20));
		*(ulong)((long)apAStack_50 + lVar6) = 0x39a7c43;
		memcpy(__dest, pvVar9, __n);
		pAVar7 = apAStack_50[3];
		if (pvVar2 == null) {
			*(ulong)((long)apAStack_50 + lVar6) = 0x39a7c91;
			throw new NullReferenceException();
		}
		pAVar1 = method.klass.rgctx_data;
		pMVar3 = pAVar1._4_ApplicationManagers_Api_AottgQueryCache_TKey__TValue__Complete;
		pIVar4 = pMVar3.methodPointer;
		if (-1 < (int)(pAVar1._2_TKey._1).byval_arg.bits) {
			__dest = (ulong)*__dest;
		}
		apAStack_50[2] = apAStack_50[3];
		pIVar5 = pMVar3.invoker_method;
		apAStack_50[1] = (AottgQueryFetchResult<TValue>)__dest;
		*(ulong)((long)apAStack_50 + lVar6) = 0x39a7c7d;
		(*pIVar5)(pIVar4,pMVar3,pvVar2,apAStack_50 + 1,pAVar7);
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c__DisplayClass9_0<AottgChangelogService.ListKey, object>$$.ctor: clean
	private void c__DisplayClass9_0_AottgChangelogService_ListKey_object___ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c__DisplayClass9_0<AottgChangelogService.ListKey, object>$$<Get>b__0: clean
	private void c__DisplayClass9_0_AottgChangelogService_ListKey_object___Get_b__0(AottgQueryFetchResult<TValue> result)
	{
		AottgQueryCache<TKey, TValue> __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Complete((AottgChangelogService.ListKey)this.key, result);
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c__DisplayClass9_0<AottgChangelogService.UnitKey, object>$$.ctor: clean
	private void c__DisplayClass9_0_AottgChangelogService_UnitKey_object___ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c__DisplayClass9_0<AottgChangelogService.UnitKey, object>$$<Get>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass9_0_AottgChangelogService_UnitKey_object___Get_b__0(AottgQueryFetchResult<TValue> result)
	{
		AottgQueryCache<TKey, TValue> __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Complete((AottgChangelogService.UnitKey)SUB41(*(uint)&this.key, 0), result);
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c__DisplayClass9_0<AottgCreditsService.UnitKey, object>$$.ctor: clean
	private void c__DisplayClass9_0_AottgCreditsService_UnitKey_object___ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.<>c__DisplayClass9_0<AottgCreditsService.UnitKey, object>$$<Get>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass9_0_AottgCreditsService_UnitKey_object___Get_b__0(AottgQueryFetchResult<TValue> result)
	{
		AottgQueryCache<TKey, TValue> __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Complete((AottgCreditsService.UnitKey)SUB41(*(uint)&this.key, 0), result);
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.Entry<object, object>$$.ctor: 6 lines keep C-only constructs
	private void Entry_object_object___ctor()
	{
		Il2CppClass klass;
		System_Collections_Generic_List_Action_AottgQueryResult_TValue____o __this_00;

		klass = method.klass.rgctx_data._0_System_Collections_Generic_List_Action_AottgQueryResult_TValue___;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		__this_00 = (System_Collections_Generic_List_Action_AottgQueryResult_TValue____o)il2cpp_codegen_object_new(klass);
		__this_00 = new List<object>();
		this.Subscribers = __this_00;
		base();
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.Entry<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.ctor: 10 lines keep C-only constructs
	private void Entry___Il2CppFullySharedGenericType___Il2CppFullySharedGenericType___ctor()
	{
		IntPtr field;
		Il2CppClass klass;
		object pIVar1;
		ulong puVar2;

		klass = method.klass.rgctx_data._0_System_Collections_Generic_List_Action_AottgQueryResult_TValue___;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		pIVar1 = il2cpp_codegen_object_new(klass);
		(*method.klass.rgctx_data._1_System_Collections_Generic_List_Action_AottgQueryResult_TValue_____ctor. methodPointer)(pIVar1);
		field = (method.klass.rgctx_data._2_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_._1). fields;
		il2cpp_runtime_helper_030d6090(field, 8);
		puVar2 = il2cpp_codegen_get_instance_field_data_pointer(this, field);
		*puVar2 = pIVar1;
		il2cpp_runtime_helper_030d5fc0(*(ulong)((long)field + 8), puVar2, 0);
		base();
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.Entry<AottgChangelogService.ListKey, object>$$.ctor: 6 lines keep C-only constructs
	private void Entry_AottgChangelogService_ListKey_object___ctor()
	{
		Il2CppClass klass;
		System_Collections_Generic_List_Action_AottgQueryResult_TValue____o __this_00;

		klass = method.klass.rgctx_data._0_System_Collections_Generic_List_Action_AottgQueryResult_TValue___;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		__this_00 = (System_Collections_Generic_List_Action_AottgQueryResult_TValue____o)il2cpp_codegen_object_new(klass);
		__this_00 = new List<object>();
		this.Subscribers = __this_00;
		base();
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.Entry<AottgChangelogService.UnitKey, object>$$.ctor: 6 lines keep C-only constructs
	private void Entry_AottgChangelogService_UnitKey_object___ctor()
	{
		Il2CppClass klass;
		System_Collections_Generic_List_Action_AottgQueryResult_TValue____o __this_00;

		klass = method.klass.rgctx_data._0_System_Collections_Generic_List_Action_AottgQueryResult_TValue___;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		__this_00 = (System_Collections_Generic_List_Action_AottgQueryResult_TValue____o)il2cpp_codegen_object_new(klass);
		__this_00 = new List<object>();
		this.Subscribers = __this_00;
		base();
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache.Entry<AottgCreditsService.UnitKey, object>$$.ctor: 6 lines keep C-only constructs
	private void Entry_AottgCreditsService_UnitKey_object___ctor()
	{
		Il2CppClass klass;
		System_Collections_Generic_List_Action_AottgQueryResult_TValue____o __this_00;

		klass = method.klass.rgctx_data._0_System_Collections_Generic_List_Action_AottgQueryResult_TValue___;
		if (((klass._2).bitflags1 & 1) == 0) {
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		__this_00 = (System_Collections_Generic_List_Action_AottgQueryResult_TValue____o)il2cpp_codegen_object_new(klass);
		__this_00 = new List<object>();
		this.Subscribers = __this_00;
		base();
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache<object, object>$$.ctor: 20 lines keep C-only constructs
	private void object_object___ctor(System_Action_TKey__Action_AottgQueryFetchResult_TValue____o fetch, Func<DateTimeOffset> now, AottgQueryPolicy policy)
	{
		object @object;
		Il2CppClass pIVar1;
		Dictionary<@object, @object> __this_00;
		ArgumentNullException __this_01;
		String paramName;
		AottgQueryCache<TKey, TValue> pAVar2;

		pIVar1 = method.klass.rgctx_data. _0_System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue__;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		__this_00 = (Dictionary<@object, @object>)il2cpp_codegen_object_new(pIVar1);
		__this_00 = new Dictionary<@object, @object>();
		this._entries =(System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o)__this_00;
		base();
		if (fetch == null) {
			pIVar1 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentNullException));
			__this_01 = (ArgumentNullException)il2cpp_codegen_object_new(pIVar1);
			paramName = il2cpp_codegen_get_runtime_metadata(&"fetch");
			__this_01 = new ArgumentNullException(paramName);
			throw (object)__this_01;
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this._fetch = fetch;
		if (now == null) {
			pIVar1 = method.klass.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
			if (((pIVar1._2).bitflags1 & 1) == 0) {
				pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
			}
			pIVar1 = method.klass.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
			if (((pIVar1._2).bitflags1 & 1) == 0) {
				pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
			}
			now = *(Func<DateTimeOffset>*)((long)pIVar1.static_fields + 8);
			if (now == null) {
				pIVar1 = method.klass.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
				if (((pIVar1._2).bitflags1 & 1) == 0) {
					pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
				}
				pIVar1 = method.klass.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
				if (((pIVar1._2).bitflags1 & 1) == 0) {
					pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
				}
				@object = *(@object*)pIVar1.static_fields;
				now = new Func<DateTimeOffset>(@object, (intptr_t) method.klass.rgctx_data. _6_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue____ctor_b__4_0);
				pAVar2 = method.klass;
				pIVar1 = pAVar2.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
				if (((pIVar1._2).bitflags1 & 1) == 0) {
					pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
					pAVar2 = method.klass;
				}
				*(Func<DateTimeOffset>*)((long)pIVar1.static_fields + 8) = now;
				pIVar1 = pAVar2.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
				if (((pIVar1._2).bitflags1 & 1) == 0) {
					pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
				}
			}
		}
		this._now = now;
		if (policy == null) {
			policy = AottgQueryPolicy.Default;
		}
		this._policy = policy;
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache<object, object>$$HasEntry: clean
	private bool object_object__HasEntry(object key)
	{
		Dictionary<object, object> __this_00;
		bool bVar1;

		__this_00 = (Dictionary<object, object>)this._entries;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return bVar1;
	}

	// ApplicationManagers.Api.AottgQueryCache<object, object>$$IsInFlight: 1 lines keep C-only constructs
	private bool object_object__IsInFlight(object key)
	{
		Dictionary<object, object> __this_00;
		bool bVar1;
		object pIStack_8;

		pIStack_8 = null;
		__this_00 = (Dictionary<object, object>)this._entries;
		if (__this_00 != null) {
			bVar1 = __this_00.TryGetValue(key, ref pIStack_8);
			if (!bVar1) {
				return false;
			}
			if (pIStack_8 != null) {
				return *(sbyte)((long)&pIStack_8[3].monitor + 2) != false;
			}
		}
		throw new NullReferenceException();
	}

	// ApplicationManagers.Api.AottgQueryCache<object, object>$$Clear: clean
	private void object_object__Clear()
	{
		Dictionary<object, object> __this_00;

		__this_00 = (Dictionary<object, object>)this._entries;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Clear();
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache<object, object>$$Clear: clean
	private void object_object__Clear(object key)
	{
		Dictionary<object, object> __this_00;

		__this_00 = (Dictionary<object, object>)this._entries;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Remove(key);
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache<object, object>$$Get: 28 lines keep C-only constructs
	private void object_object__Get(object key, System_Action_AottgQueryResult_TValue___o onResult, bool forceRefresh)
	{
		int piVar1;
		uint uVar2;
		Dictionary<object, object> pSVar3;
		Func<DateTimeOffset> pSVar4;
		System_Collections_Generic_List_Action_AottgQueryResult_TValue____o __this_00;
		MethodInfo pMVar5;
		System_Action_AottgQueryResult_TValue___array pSVar6;
		System_Action_TKey__Action_AottgQueryFetchResult_TValue____o pSVar7;
		object pIVar8;
		ApplicationManagers_Api_AottgQueryCache_TKey__TValue__RGCTXs pAVar9;
		bool bVar10;
		Il2CppClass pIVar11;
		ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o __this_01;
		ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o __this_02;
		AottgQueryResult<TValue> pAVar12;
		Action<object> __this_03;
		undefined7 in_register_00000009;
		object* targetAddress;
		byte[] auVar13 = new byte[16];
		DateTimeOffset now;
		ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o local_40;
		uint local_34;

		local_40 = null;
		pIVar11 = method.klass.rgctx_data. _14_ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue_;
		local_34 = (undefined4)CONCAT71(in_register_00000009, forceRefresh);
		if (((pIVar11._2).bitflags1 & 1) == 0) {
			pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
		}
		__this_01 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o)il2cpp_codegen_object_new(pIVar11);
		__this_01 = new AottgQueryCache.__c__DisplayClass9_0<object, object>();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			targetAddress = &__this_01.key;
			__this_01.key = key;
			if (onResult == null) {
				return;
			}
			pSVar3 = (Dictionary<object, object>)this._entries;
			if (pSVar3 != null) {
				bVar10 = pSVar3.TryGetValue(*targetAddress, (object*)&local_40);
				if (!bVar10) {
					pIVar11 = method.klass.rgctx_data._11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_;
					if (((pIVar11._2).bitflags1 & 1) == 0) {
						pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
					}
					__this_02 = (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o)il2cpp_codegen_object_new(pIVar11);
					__this_02 = new AottgQueryCache.Entry<object, object>();
					pSVar3 = (Dictionary<object, object>)this._entries;
					local_40 = __this_02;
					if (pSVar3 == null) goto label_04db0dc4;
					pSVar3.set_Item(*targetAddress, (object)__this_02);
				}
				pSVar4 = this._now;
				if (pSVar4 != null) {
					auVar13 = (*(code)pSVar4.invoke_impl)(pSVar4.method_code,pSVar4.method);
					if (((char)local_34 == false) &&(now._8_8_ = auVar13._8_8_ & 0xffffffff, now._dateTime._dateData = (DateTime)((uint64_t)auVar13._0_8_)._dateData , bVar10 = this.TryEmitFresh(local_40, now, onResult), bVar10)) {
						return;
					}
					if (local_40 != null) {
						if (local_40.HasSuccess == false) {
							pAVar12 = AottgQueryResult<object>.LoadingNoCache();
						}
						else {
							pAVar12 = AottgQueryResult<object>.ReadyStaleRefreshing(local_40.Value);
						}
						(*(code)onResult.invoke_impl)(onResult.method_code,pAVar12,onResult.method);
						if ((local_40 != null) &&(__this_00 = local_40.Subscribers, __this_00 != null)) {
							pMVar5 = method.klass.rgctx_data. _27_System_Collections_Generic_List_Action_AottgQueryResult_TValue____Add;
							piVar1 = &__this_00._version;
							*piVar1 = *piVar1 + 1;
							pSVar6 = __this_00._items;
							if (pSVar6 != null) {
								uVar2 = __this_00._size;
								if (uVar2 < (uint)pSVar6.Length) {
									__this_00._size = uVar2 + 1;
									pSVar6[(int)uVar2] = onResult;
								}
								else {
									__this_00.AddWithResize((object)onResult);
								}
								if (local_40 != null) {
									if (local_40.InFlight == false) {
										local_40.InFlight = true;
										pSVar7 = this._fetch;
										pIVar8 = *targetAddress;
										pIVar11 = method.klass.rgctx_data._29_System_Action_AottgQueryFetchResult_TValue__;
										if (((pIVar11._2).bitflags1 & 1) == 0) {
											pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
										}
										__this_03 = (Action<object>)il2cpp_codegen_object_new(pIVar11);
										pAVar9 = method.klass.rgctx_data;
										__this_03 = new Action<object>((object)__this_01, (intptr_t) pAVar9. _28_ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue___Get_b__0);
										if (pSVar7 == null) goto label_04db0dc4;
										(*(code)pSVar7.invoke_impl)(pSVar7.method_code,pIVar8,__this_03,pSVar7.method);
									}
									return;
								}
							}
						}
					}
				}
			}
		}
	label_04db0dc4: ;
		throw new NullReferenceException();
	}

	// ApplicationManagers.Api.AottgQueryCache<object, object>$$TryEmitFresh: 7 lines keep C-only constructs
	private bool object_object__TryEmitFresh(ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o entry, DateTimeOffset now, System_Action_AottgQueryResult_TValue___o onResult)
	{
		AottgQueryPolicy pAVar1;
		ulong uVar2;
		ushort uVar3;
		ulong uVar4;
		ushort uVar5;
		bool bVar6;
		TimeSpan SVar7;
		AottgQueryResult<TValue> pAVar8;
		TimeSpan SVar9;
		DateTimeOffset right;
		DateTimeOffset right_00;
		DateTimeOffset left;
		DateTimeOffset left_00;
		Nullable<TimeSpan> local_40;

		local_40.hasValue = false;
		local_40._1_7_ = 0;
		if (entry == null) goto label_04db100b;
		if (entry.HasSuccess == false) {
	label_04db0efb: ;
			if (entry.HasFailure != false) {
				pAVar1 = this._policy;
				if (pAVar1 == null) goto label_04db100b;
				if (pAVar1._FailureTtl_k__BackingField.hasValue != false) {
					uVar4 = entry.CachedAt._dateTime;
					uVar5 = entry.CachedAt._offsetMinutes;
					right_00._offsetMinutes = uVar5;
					right_00._dateTime._dateData = (DateTime)(DateTime)uVar4;
					right_00._10_6_ = 0;
					left_00._12_4_ = 0;
					left_00._dateTime._dateData =((DateTime)now._dateTime._dateData);
					left_00._offsetMinutes = now._offsetMinutes;
					left_00._10_2_ = now._10_2_;
					SVar7 = (left_00 - right_00);
					pAVar1 = this._policy;
					if (pAVar1 == null) goto label_04db100b;
					local_40.value._ticks =(TimeSpan)pAVar1._FailureTtl_k__BackingField.value._ticks;
					local_40.hasValue = pAVar1._FailureTtl_k__BackingField.hasValue;
					SVar9 = local_40.Value;
					bVar6 = (SVar7 < SVar9);
					if (!bVar6) {
						return false;
					}
					pAVar8 = AottgQueryResult<object>.FailedNoCache(entry.Error, true);
					goto joined_r0x04db0fe3;
				}
			}
			bVar6 = false;
		}
		else {
			uVar2 = entry.CachedAt._dateTime;
			uVar3 = entry.CachedAt._offsetMinutes;
			right._offsetMinutes = uVar3;
			right._dateTime._dateData = (DateTime)(DateTime)uVar2;
			right._10_6_ = 0;
			left._12_4_ = 0;
			left._dateTime._dateData =((DateTime)now._dateTime._dateData);
			left._offsetMinutes = now._offsetMinutes;
			left._10_2_ = now._10_2_;
			SVar7 = (left - right);
			pAVar1 = this._policy;
			if (pAVar1 == null) goto label_04db100b;
			SVar9._ticks = (TimeSpan)pAVar1._SuccessTtl_k__BackingField._ticks;
			bVar6 = (SVar7 < SVar9);
			if (!bVar6) goto label_04db0efb;
			pAVar8 = AottgQueryResult<object>.ReadyFresh(entry.Value, true);
	joined_r0x04db0fe3: ;
			if (onResult == null) {
	label_04db100b: ;
				throw new NullReferenceException();
			}
			(*(code)onResult.invoke_impl)(onResult.method_code,pAVar8,onResult.method) ;
			bVar6 = true;
		}
		return bVar6;
	}

	// ApplicationManagers.Api.AottgQueryCache<object, object>$$Complete: 12 lines keep C-only constructs
	private void object_object__Complete(object key, AottgQueryFetchResult<TValue> result)
	{
		int piVar1;
		int length;
		Dictionary<object, object> __this_00;
		Func<DateTimeOffset> pSVar2;
		AottgQueryPolicy pAVar3;
		Il2CppClass pIVar4;
		object pIVar5;
		bool bVar6;
		AottgQueryResult<TValue> pAVar7;
		Object[] pSVar8;
		ulong uVar9;
		ulong uVar10;
		unkbyte10 Var11;
		object pIStack_28;

		pIStack_28 = null;
		__this_00 = (Dictionary<object, object>)this._entries;
		if (__this_00 == null) goto label_04db1309;
		bVar6 = __this_00.TryGetValue(key, ref pIStack_28);
		if (!bVar6) {
			return;
		}
		if ((pIStack_28 == null) ||((*(byte)((long)&pIStack_28[3].monitor + 2) = 0, result == null &&(result = AottgQueryFetchResult<object>.Fail("unknown_error"), result == null)))) goto label_04db1309;
		if (result._Success_k__BackingField == false) {
			if (pIStack_28 == null) goto label_04db1309;
			if (*(sbyte)&pIStack_28[3].monitor != false) {
				pAVar3 = this._policy;
				if (pAVar3 == null) goto label_04db1309;
				if (pAVar3._PreserveStaleOnFailure_k__BackingField != false) {
					pIStack_28[2].klass = (Il2CppClass)result._Error_k__BackingField;
					if (pIStack_28 == null) goto label_04db1309;
					pAVar7 = AottgQueryResult<object>.FailedRefreshStale(pIStack_28[1].monitor, result._Error_k__BackingField);
					goto label_04db1235;
				}
			}
			*(ushort)&pIStack_28[3].monitor = 0x100;
			pIStack_28[1].monitor = null;
			pIStack_28[2].klass = (Il2CppClass)result._Error_k__BackingField;
			pIVar5 = pIStack_28;
			pSVar2 = this._now;
			if ((pSVar2 == null) ||(Var11 = (*(code)pSVar2.invoke_impl)(pSVar2.method_code), pIVar5 == null)) goto label_04db1309;
			*(unkbyte10)&pIVar5[2].monitor = Var11;
			pAVar7 = AottgQueryResult<object>.FailedNoCache(result._Error_k__BackingField, false);
		}
		else {
			if (pIStack_28 == null) goto label_04db1309;
			*(ushort)&pIStack_28[3].monitor = 1;
			pIStack_28[1].monitor = result._Value_k__BackingField;
			if (pIStack_28 == null) goto label_04db1309;
			pIStack_28[2].klass = null;
			pIVar5 = pIStack_28;
			pSVar2 = this._now;
			if (((pSVar2 == null) ||(Var11 = (*(code)pSVar2.invoke_impl)(pSVar2.method_code), pIVar5 == null)) ||(*(unkbyte10)&pIVar5[2].monitor = Var11, pIStack_28 == null)) goto label_04db1309;
			pAVar7 = AottgQueryResult<object>.ReadyFresh(pIStack_28[1].monitor, false);
		}
	label_04db1235: ;
		if (((pIStack_28 != null) && (pIStack_28[1].klass != null)) &&((pSVar8 = pIStack_28[1].klass.ToArray(), pIStack_28 != null && (pIVar4 = pIStack_28[1].klass, pIVar4 != null)))) {
			piVar1 = (int)((long)&(pIVar4._1).namespaze + 4);
			*piVar1 = *piVar1 + 1;
			length = *(int)&(pIVar4._1).namespaze;
			*(uint)&(pIVar4._1).namespaze = 0;
			if (0 < length) {
				Array.Clear((Array)(pIVar4._1).name, 0, length);
			}
			if (pSVar8 != null) {
				if (0 < (int)pSVar8.Length) {
					uVar9 = pSVar8.Length & 0xffffffff;
					uVar10 = 0;
					do {
						if (uVar9 <= uVar10) {
							throw new IndexOutOfRangeException();
						}
						pIVar5 = pSVar8[uVar10];
						if (pIVar5 != null) {
							if (pIVar5 == null) goto label_04db1309;
							(*pIVar5[1].monitor)(pIVar5[4].klass,pAVar7,pIVar5[2].monitor);
							uVar9 = (ulong)(uint)pSVar8.Length;
						}
						uVar10 = uVar10 + 1;
					} while ((long)uVar10 < (long)(int)uVar9);
				}
				return;
			}
		}
	label_04db1309: ;
		throw new NullReferenceException();
	}

	// ApplicationManagers.Api.AottgQueryCache<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$.ctor: 21 lines keep C-only constructs
	private void Il2CppFullySharedGenericType___Il2CppFullySharedGenericType___ctor(System_Action_TKey__Action_AottgQueryFetchResult_TValue____o fetch, Func<DateTimeOffset> now, AottgQueryPolicy policy)
	{
		object @object;
		Il2CppClass pIVar1;
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o pSVar2;
		ArgumentNullException __this_00;
		String paramName;
		AottgQueryCache<TKey, TValue> pAVar3;

		pIVar1 = method.klass.rgctx_data. _0_System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue__;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pSVar2 = (System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o)il2cpp_codegen_object_new(pIVar1);
		(*method.klass.rgctx_data. _1_System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue____ctor.methodPointer)(pSVar2);
		this._entries = pSVar2;
		base();
		if (fetch == null) {
			pIVar1 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentNullException));
			__this_00 = (ArgumentNullException)il2cpp_codegen_object_new(pIVar1);
			paramName = il2cpp_codegen_get_runtime_metadata(&"fetch");
			__this_00 = new ArgumentNullException(paramName);
			throw (object)__this_00;
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this._fetch = fetch;
		if (now == null) {
			pIVar1 = method.klass.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
			if (((pIVar1._2).bitflags1 & 1) == 0) {
				pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
			}
			pIVar1 = method.klass.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
			if (((pIVar1._2).bitflags1 & 1) == 0) {
				pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
			}
			now = *(Func<DateTimeOffset>*)((long)pIVar1.static_fields + 8);
			if (now == null) {
				pIVar1 = method.klass.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
				if (((pIVar1._2).bitflags1 & 1) == 0) {
					pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
				}
				pIVar1 = method.klass.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
				if (((pIVar1._2).bitflags1 & 1) == 0) {
					pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
				}
				@object = *(@object*)pIVar1.static_fields;
				now = new Func<DateTimeOffset>(@object, (intptr_t) method.klass.rgctx_data. _6_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue____ctor_b__4_0);
				pAVar3 = method.klass;
				pIVar1 = pAVar3.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
				if (((pIVar1._2).bitflags1 & 1) == 0) {
					pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
					pAVar3 = method.klass;
				}
				*(Func<DateTimeOffset>*)((long)pIVar1.static_fields + 8) = now;
				pIVar1 = pAVar3.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
				if (((pIVar1._2).bitflags1 & 1) == 0) {
					pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
				}
			}
		}
		this._now = now;
		if (policy == null) {
			policy = AottgQueryPolicy.Default;
		}
		this._policy = policy;
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$HasEntry: 5 lines keep C-only constructs
	private bool Il2CppFullySharedGenericType___Il2CppFullySharedGenericType__HasEntry(__Il2CppFullySharedGenericType key)
	{
		long lVar1;
		long lVar2;
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o pSVar3;
		ulong puVar4;
		ulong uVar5;
		code *pcVar6;
		long lVar7;
		ulong __n;
		ulong __dest;
		__Il2CppFullySharedGenericType __src;
		ulong[] apuStack_40 = new ulong[2];
		__Il2CppFullySharedGenericType local_30;
		byte local_21;

		local_30 = key.klass;
		lVar1 = *(long)((long)key.monitor + 0x20);
		lVar2 = *(long)(*(long)(lVar1 + 0xc0) + 0x38);
		__n = (ulong)*(uint)(lVar2 + 0xfc);
		lVar7 = -(__n + 0xf & 0xfffffffffffffff0);
		__dest = (ulong)((long)apuStack_40 + lVar7 + 8);
		pSVar3 = this._entries;
		__src = local_30;
		if (-1 < *(int)(lVar2 + 0x28)) {
			__src = (__Il2CppFullySharedGenericType)&local_30;
		}
		*(ulong)((long)apuStack_40 + lVar7) = 0x4db161f;
		memcpy(__dest, __src, __n);
		if (pSVar3 == null) {
			*(ulong)((long)apuStack_40 + lVar7) = 0x4db1665;
			throw new NullReferenceException();
		}
		lVar1 = *(long)(lVar1 + 0xc0);
		puVar4 = *(ulong*)(lVar1 + 0x40);
		uVar5 = *puVar4;
		if (-1 < *(int)(*(long)(lVar1 + 0x38) + 0x28)) {
			__dest = (ulong)*__dest;
		}
		pcVar6 = (code)puVar4[2];
		apuStack_40[1] = __dest;
		*(ulong)((long)apuStack_40 + lVar7) = 0x4db1651;
		(*pcVar6)(uVar5,puVar4,pSVar3,apuStack_40 + 1,&local_21);
		return (bool)local_21;
	}

	// ApplicationManagers.Api.AottgQueryCache<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$IsInFlight: 8 lines keep C-only constructs
	private bool Il2CppFullySharedGenericType___Il2CppFullySharedGenericType__IsInFlight(__Il2CppFullySharedGenericType key)
	{
		long lVar1;
		long lVar2;
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o pSVar3;
		ulong puVar4;
		ulong uVar5;
		code *pcVar6;
		long lVar7;
		IntPtr instance;
		sbyte pcVar8;
		ulong __n;
		ulong __dest;
		__Il2CppFullySharedGenericType __src;
		bool bVar9;
		IntPtr[] appvStack_60 = new IntPtr[4];
		__Il2CppFullySharedGenericType local_40;
		IntPtr local_38;
		sbyte local_29;

		local_40 = key.klass;
		lVar1 = *(long)((long)key.monitor + 0x20);
		lVar2 = *(long)(lVar1 + 0xc0);
		__n = (ulong)*(uint)(*(long)(lVar2 + 0x38) + 0xfc);
		lVar7 = -(__n + 0xf & 0xfffffffffffffff0);
		__dest = (ulong)((long)appvStack_60 + lVar7 + 8);
		local_38 = null;
		pSVar3 = this._entries;
		__src = local_40;
		if (-1 < *(int)(*(long)(lVar2 + 0x38) + 0x28)) {
			__src = (__Il2CppFullySharedGenericType)&local_40;
		}
		*(ulong)((long)appvStack_60 + lVar7) = 0x4db16d1;
		memcpy(__dest, __src, __n);
		if (pSVar3 == null) {
			*(ulong)((long)appvStack_60 + lVar7) = 0x4db1752;
			throw new NullReferenceException();
		}
		lVar1 = *(long)(lVar1 + 0xc0);
		puVar4 = *(ulong*)(lVar1 + 0x48);
		uVar5 = *puVar4;
		if (-1 < *(int)(*(long)(lVar1 + 0x38) + 0x28)) {
			__dest = (ulong)*__dest;
		}
		appvStack_60[2] = &local_38;
		pcVar6 = (code)puVar4[2];
		appvStack_60[1] = (IntPtr)__dest;
		*(ulong)((long)appvStack_60 + lVar7) = 0x4db170c;
		(*pcVar6)(uVar5,puVar4,pSVar3,appvStack_60 + 1,&local_29);
		instance = local_38;
		if (local_29 == false) {
		}
		else {
			lVar1 = *(long)(*(long)(*(long)(*(long)((long)key.monitor + 0x20) + 0xc0) + 0x58) + 0x80);
			*(ulong)((long)appvStack_60 + lVar7) = 0x4db1736;
			pcVar8 = il2cpp_codegen_get_instance_field_data_pointer(instance, (IntPtr)(lVar1 + 0xc0));
			bVar9 = *pcVar8 != false;
		}
		return bVar9;
	}

	// ApplicationManagers.Api.AottgQueryCache<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$Clear: 1 lines keep C-only constructs
	private void Il2CppFullySharedGenericType___Il2CppFullySharedGenericType__Clear()
	{
		if (this._entries ==null) {
			throw new NullReferenceException();
		}
		(*method.klass.rgctx_data. _12_System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___Clear.methodPointer)();
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$Clear: 5 lines keep C-only constructs
	private void Il2CppFullySharedGenericType___Il2CppFullySharedGenericType__Clear(__Il2CppFullySharedGenericType key)
	{
		long lVar1;
		long lVar2;
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o pSVar3;
		ulong puVar4;
		ulong uVar5;
		code *pcVar6;
		long lVar7;
		ulong __n;
		ulong __dest;
		__Il2CppFullySharedGenericType __src;
		ulong[] apuStack_40 = new ulong[2];
		__Il2CppFullySharedGenericType local_30;
		byte local_21;

		local_30 = key.klass;
		lVar1 = *(long)((long)key.monitor + 0x20);
		lVar2 = *(long)(*(long)(lVar1 + 0xc0) + 0x38);
		__n = (ulong)*(uint)(lVar2 + 0xfc);
		lVar7 = -(__n + 0xf & 0xfffffffffffffff0);
		__dest = (ulong)((long)apuStack_40 + lVar7 + 8);
		pSVar3 = this._entries;
		__src = local_30;
		if (-1 < *(int)(lVar2 + 0x28)) {
			__src = (__Il2CppFullySharedGenericType)&local_30;
		}
		*(ulong)((long)apuStack_40 + lVar7) = 0x4db17df;
		memcpy(__dest, __src, __n);
		if (pSVar3 == null) {
			*(ulong)((long)apuStack_40 + lVar7) = 0x4db1821;
			throw new NullReferenceException();
		}
		lVar1 = *(long)(lVar1 + 0xc0);
		puVar4 = *(ulong*)(lVar1 + 0x68);
		uVar5 = *puVar4;
		if (-1 < *(int)(*(long)(lVar1 + 0x38) + 0x28)) {
			__dest = (ulong)*__dest;
		}
		pcVar6 = (code)puVar4[2];
		apuStack_40[1] = __dest;
		*(ulong)((long)apuStack_40 + lVar7) = 0x4db1811;
		(*pcVar6)(uVar5,puVar4,pSVar3,apuStack_40 + 1,&local_21);
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$Get: 85 lines keep C-only constructs
	private void Il2CppFullySharedGenericType___Il2CppFullySharedGenericType__Get(__Il2CppFullySharedGenericType key, System_Action_AottgQueryResult_TValue___o onResult, bool forceRefresh)
	{
		long lVar1;
		code *pcVar2;
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o pSVar3;
		Func<DateTimeOffset> pSVar4;
		IntPtr iVar5;
		IntPtr iVar6;
		System_Action_TKey__Action_AottgQueryFetchResult_TValue____o pSVar7;
		sbyte __n;
		Il2CppClass pIVar8;
		sbyte cVar9;
		Il2CppClass pIVar10;
		object pIVar11;
		ulong puVar12;
		IntPtr pvVar13;
		Il2CppClass pIVar14;
		sbyte pcVar15;
		IntPtr pvVar16;
		long plVar17;
		byte puVar18;
		sbyte pcVar19;
		__Il2CppFullySharedGenericType pUVar20;
		__Il2CppFullySharedGenericType __src;
		ulong uVar21;
		undefined7 in_register_00000081;
		long plVar22;
		Il2CppClass __dest;
		byte[] auVar23 = new byte[16];
		sbyte[] acStack_a0 = new sbyte[8];
		IntPtr pvStack_98;
		__Il2CppFullySharedGenericType local_90;
		Il2CppClass local_88;
		sbyte local_80;
		sbyte local_78;
		IntPtr local_70;
		sbyte local_64;
		sbyte local_60;
		object local_58;
		Il2CppClass local_50;
		Il2CppClass local_48;
		Il2CppClass local_40;
		Il2CppClass local_38;

		local_88 = key.monitor;
		pUVar20 = key.klass;
		plVar22 = (long)(CONCAT71(in_register_00000081, forceRefresh) + 0x20);
		lVar1 = *(long)(*(long)(CONCAT71(in_register_00000081, forceRefresh) + 0x20) + 0xc0);
		local_70 = (IntPtr)(ulong)*(uint)(*(long)(lVar1 + 0x38) + 0xfc);
		local_78 = (sbyte)(ulong)*(uint)(*(long)(lVar1 + 0xa0) + 0xfc);
		__dest = (Il2CppClass)((long)&pvStack_98 - ((long)local_70 + 0xfU & 0xfffffffffffffff0));
		pcVar19 = (sbyte)((long)__dest - ((ulong)(local_78 + 0xf) & 0xfffffffffffffff0));
		local_38 = null;
		pIVar10 = *(Il2CppClass*)(lVar1 + 0x70);
		_local_64 = SUB84(onResult, 0);
		local_90 = pUVar20;
		local_50 = (Il2CppClass)this;
		if (((pIVar10._2).bitflags1 & 1) == 0) {
			pcVar19[-8] = -0x39;
			pcVar19[-7] = '\x18';
			pcVar19[-6] = -0x25;
			pcVar19[-5] = '\x04';
			pcVar19[-4] = false;
			pcVar19[-3] = false;
			pcVar19[-2] = false;
			pcVar19[-1] = false;
			pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
		}
		local_80 = pcVar19;
		pcVar19[-8] = -0x2d;
		pcVar19[-7] = '\x18';
		pcVar19[-6] = -0x25;
		pcVar19[-5] = '\x04';
		pcVar19[-4] = false;
		pcVar19[-3] = false;
		pcVar19[-2] = false;
		pcVar19[-1] = false;
		pIVar11 = il2cpp_codegen_object_new(pIVar10);
		pcVar2 = (code)**(ulong*)(*(long)(*plVar22 + 0xc0) + 0x78);
		pcVar19[-8] = -0x16;
		pcVar19[-7] = '\x18';
		pcVar19[-6] = -0x25;
		pcVar19[-5] = '\x04';
		pcVar19[-4] = false;
		pcVar19[-3] = false;
		pcVar19[-2] = false;
		pcVar19[-1] = false;
		(*pcVar2)(pIVar11);
		if (pIVar11 != null) {
			pvVar16 = *(IntPtr)(*(long)(*(long)(*plVar22 + 0xc0) + 0x70) + 0x80);
			pcVar19[-8] = '\x16';
			pcVar19[-7] = '\x19';
			pcVar19[-6] = -0x25;
			pcVar19[-5] = '\x04';
			pcVar19[-4] = false;
			pcVar19[-3] = false;
			pcVar19[-2] = false;
			pcVar19[-1] = false;
			il2cpp_runtime_helper_030d6090(pvVar16, 8);
			pcVar19[-8] = '!';
			pcVar19[-7] = '\x19';
			pcVar19[-6] = -0x25;
			pcVar19[-5] = '\x04';
			pcVar19[-4] = false;
			pcVar19[-3] = false;
			pcVar19[-2] = false;
			pcVar19[-1] = false;
			puVar12 = il2cpp_codegen_get_instance_field_data_pointer(pIVar11, pvVar16);
			*puVar12 = local_50;
			uVar21 = *(ulong)((long)pvVar16 + 8);
			pcVar19[-8] = '6';
			pcVar19[-7] = '\x19';
			pcVar19[-6] = -0x25;
			pcVar19[-5] = '\x04';
			pcVar19[-4] = false;
			pcVar19[-3] = false;
			pcVar19[-2] = false;
			pcVar19[-1] = false;
			il2cpp_runtime_helper_030d5fc0(uVar21, puVar12, 0);
			pvVar16 = local_70;
			lVar1 = *plVar22;
			__src = (__Il2CppFullySharedGenericType)&local_90;
			if (*(int)(*(long)(*(long)(lVar1 + 0xc0) + 0x38) + 0x28) < 0) {
				__src = pUVar20;
			}
			pcVar19[-8] = 'c';
			pcVar19[-7] = '\x19';
			pcVar19[-6] = -0x25;
			pcVar19[-5] = '\x04';
			pcVar19[-4] = false;
			pcVar19[-3] = false;
			pcVar19[-2] = false;
			pcVar19[-1] = false;
			memcpy(__dest, __src, (size_t)pvVar16);
			lVar1 = *(long)(*(long)(*(long)(lVar1 + 0xc0) + 0x70) + 0x80);
			local_58 = pIVar11;
			pcVar19[-8] = -0x75;
			pcVar19[-7] = '\x19';
			pcVar19[-6] = -0x25;
			pcVar19[-5] = '\x04';
			pcVar19[-4] = false;
			pcVar19[-3] = false;
			pcVar19[-2] = false;
			pcVar19[-1] = false;
			il2cpp_codegen_write_instance_field_data(pIVar11, (IntPtr)(lVar1 + 0x20), __dest, (int32_t)pvVar16);
			pIVar11 = local_58;
			pIVar10 = local_88;
			if (local_88 == null) {
				return;
			}
			pSVar3 = *(System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o*)&(local_50._1).byval_arg.bits;
			lVar1 = *(long)(*(long)(*(long)(*plVar22 + 0xc0) + 0x70) + 0x80);
			pcVar19[-8] = -0x3d;
			pcVar19[-7] = '\x19';
			pcVar19[-6] = -0x25;
			pcVar19[-5] = '\x04';
			pcVar19[-4] = false;
			pcVar19[-3] = false;
			pcVar19[-2] = false;
			pcVar19[-1] = false;
			pvVar13 = il2cpp_codegen_get_instance_field_data_pointer(pIVar11, (IntPtr)(lVar1 + 0x20));
			pcVar19[-8] = -0x2f;
			pcVar19[-7] = '\x19';
			pcVar19[-6] = -0x25;
			pcVar19[-5] = '\x04';
			pcVar19[-4] = false;
			pcVar19[-3] = false;
			pcVar19[-2] = false;
			pcVar19[-1] = false;
			memcpy(__dest, pvVar13, (size_t)pvVar16);
			if (pSVar3 != null) {
				puVar12 = *(ulong*)(*(long)(*plVar22 + 0xc0) + 0x48);
				uVar21 = *puVar12;
				local_48 = __dest;
				if (-1 < *(int)(*(long)(*(long)(*plVar22 + 0xc0) + 0x38) + 0x28)) {
					local_48 = (__dest._1).image;
				}
				local_40 = (Il2CppClass)&local_38;
				pcVar2 = (code)puVar12[2];
				pcVar19[-8] = '\x16';
				pcVar19[-7] = '\x1a';
				pcVar19[-6] = -0x25;
				pcVar19[-5] = '\x04';
				pcVar19[-4] = false;
				pcVar19[-3] = false;
				pcVar19[-2] = false;
				pcVar19[-1] = false;
				(*pcVar2)(uVar21,puVar12,pSVar3,&local_48,&local_60);
				if ((char)local_60 == false) {
					pIVar14 = *(Il2CppClass*)(*(long)(*plVar22 + 0xc0) + 0x58);
					if (((pIVar14._2).bitflags1 & 1) == 0) {
						pcVar19[-8] = '=';
						pcVar19[-7] = '\x1a';
						pcVar19[-6] = -0x25;
						pcVar19[-5] = '\x04';
						pcVar19[-4] = false;
						pcVar19[-3] = false;
						pcVar19[-2] = false;
						pcVar19[-1] = false;
						pIVar14 = il2cpp_codegen_class_init_checked(pIVar14);
					}
					pcVar19[-8] = 'E';
					pcVar19[-7] = '\x1a';
					pcVar19[-6] = -0x25;
					pcVar19[-5] = '\x04';
					pcVar19[-4] = false;
					pcVar19[-3] = false;
					pcVar19[-2] = false;
					pcVar19[-1] = false;
					pIVar14 = (Il2CppClass)il2cpp_codegen_object_new(pIVar14);
					pcVar2 = (code)**(ulong*)(*(long)(*plVar22 + 0xc0) + 0x88);
					pcVar19[-8] = '_';
					pcVar19[-7] = '\x1a';
					pcVar19[-6] = -0x25;
					pcVar19[-5] = '\x04';
					pcVar19[-4] = false;
					pcVar19[-3] = false;
					pcVar19[-2] = false;
					pcVar19[-1] = false;
					(*pcVar2)(pIVar14);
					pIVar11 = local_58;
					pSVar3 = *(System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o*)&(local_50._1).byval_arg.bits;
					lVar1 = *(long)(*(long)(*(long)(*plVar22 + 0xc0) + 0x70) + 0x80);
					local_38 = pIVar14;
					pcVar19[-8] = -0x72;
					pcVar19[-7] = '\x1a';
					pcVar19[-6] = -0x25;
					pcVar19[-5] = '\x04';
					pcVar19[-4] = false;
					pcVar19[-3] = false;
					pcVar19[-2] = false;
					pcVar19[-1] = false;
					pvVar13 = il2cpp_codegen_get_instance_field_data_pointer(pIVar11, (IntPtr)(lVar1 + 0x20));
					pcVar19[-8] = -100;
					pcVar19[-7] = '\x1a';
					pcVar19[-6] = -0x25;
					pcVar19[-5] = '\x04';
					pcVar19[-4] = false;
					pcVar19[-3] = false;
					pcVar19[-2] = false;
					pcVar19[-1] = false;
					memcpy(__dest, pvVar13, (size_t)pvVar16);
					if (pSVar3 == (System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o)0x0) goto label_04db1dce;
					puVar12 = *(ulong*)(*(long)(*plVar22 + 0xc0) + 0x90);
					uVar21 = *puVar12;
					local_48 = __dest;
					if (-1 < *(int)(*(long)(*(long)(*plVar22 + 0xc0) + 0x38) + 0x28)) {
						local_48 = (__dest._1).image;
					}
					pcVar2 = (code)puVar12[2];
					pcVar19[-8] = -0x20;
					pcVar19[-7] = '\x1a';
					pcVar19[-6] = -0x25;
					pcVar19[-5] = '\x04';
					pcVar19[-4] = false;
					pcVar19[-3] = false;
					pcVar19[-2] = false;
					pcVar19[-1] = false;
					(*pcVar2)(uVar21,puVar12,pSVar3,&local_48);
				}
				pSVar4 = (Func<DateTimeOffset>)(local_50._1).namespaze;
				if (pSVar4 != null) {
					iVar5 = pSVar4.method;
					iVar6 = pSVar4.method_code;
					pcVar2 = (code)pSVar4.invoke_impl;
					pcVar19[-8] = -4;
					pcVar19[-7] = '\x1a';
					pcVar19[-6] = -0x25;
					pcVar19[-5] = '\x04';
					pcVar19[-4] = false;
					pcVar19[-3] = false;
					pcVar19[-2] = false;
					pcVar19[-1] = false;
					auVar23 = (*pcVar2)(iVar6,iVar5);
					pIVar8 = local_38;
					pIVar14 = local_50;
					if (local_64 == false) {
						pcVar2 = (code)**(ulong*)(*(long)(*plVar22 + 0xc0) + 0x98);
						pcVar19[-8] = '\'';
						pcVar19[-7] = '\x1b';
						pcVar19[-6] = -0x25;
						pcVar19[-5] = '\x04';
						pcVar19[-4] = false;
						pcVar19[-3] = false;
						pcVar19[-2] = false;
						pcVar19[-1] = false;
						cVar9 = (*pcVar2)(pIVar14,pIVar8,auVar23._0_8_,auVar23._8_8_ & 0xffffffff,pIVar10);
						if (cVar9 != false) {
							return;
						}
					}
					pIVar14 = local_38;
					lVar1 = *(long)(*(long)(*(long)(*plVar22 + 0xc0) + 0x58) + 0x80);
					pcVar19[-8] = 'R';
					pcVar19[-7] = '\x1b';
					pcVar19[-6] = -0x25;
					pcVar19[-5] = '\x04';
					pcVar19[-4] = false;
					pcVar19[-3] = false;
					pcVar19[-2] = false;
					pcVar19[-1] = false;
					pcVar15 = il2cpp_codegen_get_instance_field_data_pointer(pIVar14, (IntPtr)(lVar1 + 0x80));
					pIVar14 = local_38;
					if (*pcVar15 == false) {
						pcVar2 = (code)**(ulong*)(*(long)(*plVar22 + 0xc0) + 200);
						pcVar19[-8] = true;
						pcVar19[-7] = '\x1c';
						pcVar19[-6] = -0x25;
						pcVar19[-5] = '\x04';
						pcVar19[-4] = false;
						pcVar19[-3] = false;
						pcVar19[-2] = false;
						pcVar19[-1] = false;
						local_48 = (Il2CppClass)(*pcVar2)();
						puVar12 = *(ulong*)(*(long)(*plVar22 + 0xc0) + 0xc0);
						uVar21 = *puVar12;
					}
					else {
						lVar1 = *(long)(*(long)(*(long)(*plVar22 + 0xc0) + 0x58) + 0x80);
						pcVar19[-8] = '~';
						pcVar19[-7] = '\x1b';
						pcVar19[-6] = -0x25;
						pcVar19[-5] = '\x04';
						pcVar19[-4] = false;
						pcVar19[-3] = false;
						pcVar19[-2] = false;
						pcVar19[-1] = false;
						pvVar16 = il2cpp_codegen_get_instance_field_data_pointer(pIVar14, (IntPtr)(lVar1 + 0x20));
						__n = local_78;
						pcVar15 = local_80;
						pcVar19[-8] = -0x6f;
						pcVar19[-7] = '\x1b';
						pcVar19[-6] = -0x25;
						pcVar19[-5] = '\x04';
						pcVar19[-4] = false;
						pcVar19[-3] = false;
						pcVar19[-2] = false;
						pcVar19[-1] = false;
						memcpy(pcVar15, pvVar16, (size_t)__n);
						puVar12 = *(ulong*)(*(long)(*plVar22 + 0xc0) + 0xa8);
						uVar21 = *puVar12;
						if (-1 < *(int)(*(long)(*(long)(*plVar22 + 0xc0) + 0xa0) + 0x28)) {
							pcVar15 = *(sbyte*)pcVar15;
						}
						pcVar2 = (code)puVar12[2];
						local_60 = pcVar15;
						pcVar19[-8] = -0x39;
						pcVar19[-7] = '\x1b';
						pcVar19[-6] = -0x25;
						pcVar19[-5] = '\x04';
						pcVar19[-4] = false;
						pcVar19[-3] = false;
						pcVar19[-2] = false;
						pcVar19[-1] = false;
						(*pcVar2)(uVar21,puVar12,0,&local_60,&local_48);
						puVar12 = *(ulong*)(*(long)(*plVar22 + 0xc0) + 0xc0);
						uVar21 = *puVar12;
					}
					pIVar14 = local_48;
					pcVar2 = (code)puVar12[2];
					pcVar19[-8] = '\'';
					pcVar19[-7] = '\x1c';
					pcVar19[-6] = -0x25;
					pcVar19[-5] = '\x04';
					pcVar19[-4] = false;
					pcVar19[-3] = false;
					pcVar19[-2] = false;
					pcVar19[-1] = false;
					(*pcVar2)(uVar21,puVar12,pIVar10,&local_48,pIVar14);
					pIVar14 = local_38;
					pvVar16 = *(IntPtr)(*(long)(*(long)(*plVar22 + 0xc0) + 0x58) + 0x80);
					pcVar19[-8] = 'F';
					pcVar19[-7] = '\x1c';
					pcVar19[-6] = -0x25;
					pcVar19[-5] = '\x04';
					pcVar19[-4] = false;
					pcVar19[-3] = false;
					pcVar19[-2] = false;
					pcVar19[-1] = false;
					plVar17 = il2cpp_codegen_get_instance_field_data_pointer(pIVar14, pvVar16);
					lVar1 = *plVar17;
					if (lVar1 != 0) {
						puVar12 = *(ulong*)(*(long)(*plVar22 + 0xc0) + 0xd8);
						uVar21 = *puVar12;
						local_48 = pIVar10;
						pcVar2 = (code)puVar12[2];
						pcVar19[-8] = 'u';
						pcVar19[-7] = '\x1c';
						pcVar19[-6] = -0x25;
						pcVar19[-5] = '\x04';
						pcVar19[-4] = false;
						pcVar19[-3] = false;
						pcVar19[-2] = false;
						pcVar19[-1] = false;
						(*pcVar2)(uVar21,puVar12,lVar1,&local_48,pIVar10);
						pIVar10 = local_38;
						lVar1 = *(long)(*(long)(*(long)(*plVar22 + 0xc0) + 0x58) + 0x80);
						pcVar19[-8] = -0x67;
						pcVar19[-7] = '\x1c';
						pcVar19[-6] = -0x25;
						pcVar19[-5] = '\x04';
						pcVar19[-4] = false;
						pcVar19[-3] = false;
						pcVar19[-2] = false;
						pcVar19[-1] = false;
						pcVar15 = il2cpp_codegen_get_instance_field_data_pointer(pIVar10, (IntPtr)(lVar1 + 0xc0));
						pIVar10 = local_38;
						if (*pcVar15 != false) {
							return;
						}
						if (local_38 != null) {
							lVar1 = *(long)(*(long)(*(long)(*plVar22 + 0xc0) + 0x58) + 0x80);
							pvVar16 = (IntPtr)(lVar1 + 0xc0);
							pcVar19[-8] = -0x26;
							pcVar19[-7] = '\x1c';
							pcVar19[-6] = -0x25;
							pcVar19[-5] = '\x04';
							pcVar19[-4] = false;
							pcVar19[-3] = false;
							pcVar19[-2] = false;
							pcVar19[-1] = false;
							il2cpp_runtime_helper_030d6090(pvVar16, 1);
							pcVar19[-8] = -0x1b;
							pcVar19[-7] = '\x1c';
							pcVar19[-6] = -0x25;
							pcVar19[-5] = '\x04';
							pcVar19[-4] = false;
							pcVar19[-3] = false;
							pcVar19[-2] = false;
							pcVar19[-1] = false;
							puVar18 = il2cpp_codegen_get_instance_field_data_pointer(pIVar10, pvVar16);
							*puVar18 = 1;
							uVar21 = *(ulong)(lVar1 + 200);
							pcVar19[-8] = -6;
							pcVar19[-7] = '\x1c';
							pcVar19[-6] = -0x25;
							pcVar19[-5] = '\x04';
							pcVar19[-4] = false;
							pcVar19[-3] = false;
							pcVar19[-2] = false;
							pcVar19[-1] = false;
							il2cpp_runtime_helper_030d5fc0(uVar21, puVar18, 0);
							pIVar11 = local_58;
							pSVar7 = ((AottgQueryCache<TKey, TValue>)&(local_50._1).name). _fetch;
							lVar1 = *(long)(*(long)(*(long)(*plVar22 + 0xc0) + 0x70) + 0x80);
							pcVar19[-8] = '(';
							pcVar19[-7] = '\x1d';
							pcVar19[-6] = -0x25;
							pcVar19[-5] = '\x04';
							pcVar19[-4] = false;
							pcVar19[-3] = false;
							pcVar19[-2] = false;
							pcVar19[-1] = false;
							pvVar13 = il2cpp_codegen_get_instance_field_data_pointer(pIVar11, (IntPtr)(lVar1 + 0x20));
							pvVar16 = local_70;
							pcVar19[-8] = '7';
							pcVar19[-7] = '\x1d';
							pcVar19[-6] = -0x25;
							pcVar19[-5] = '\x04';
							pcVar19[-4] = false;
							pcVar19[-3] = false;
							pcVar19[-2] = false;
							pcVar19[-1] = false;
							memcpy(__dest, pvVar13, (size_t)pvVar16);
							pIVar10 = *(Il2CppClass*)(*(long)(*plVar22 + 0xc0) + 0xe8);
							if (((pIVar10._2).bitflags1 & 1) == 0) {
								pcVar19[-8] = 'W';
								pcVar19[-7] = '\x1d';
								pcVar19[-6] = -0x25;
								pcVar19[-5] = '\x04';
								pcVar19[-4] = false;
								pcVar19[-3] = false;
								pcVar19[-2] = false;
								pcVar19[-1] = false;
								pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
							}
							pcVar19[-8] = '_';
							pcVar19[-7] = '\x1d';
							pcVar19[-6] = -0x25;
							pcVar19[-5] = '\x04';
							pcVar19[-4] = false;
							pcVar19[-3] = false;
							pcVar19[-2] = false;
							pcVar19[-1] = false;
							pIVar10 = (Il2CppClass)il2cpp_codegen_object_new(pIVar10);
							uVar21 = *(ulong)(*(long)(*plVar22 + 0xc0) + 0xe0);
							pcVar2 = (code)**(ulong*)(*(long)(*plVar22 + 0xc0) + 0xf0);
							pcVar19[-8] = -0x7d;
							pcVar19[-7] = '\x1d';
							pcVar19[-6] = -0x25;
							pcVar19[-5] = '\x04';
							pcVar19[-4] = false;
							pcVar19[-3] = false;
							pcVar19[-2] = false;
							pcVar19[-1] = false;
							(*pcVar2)(pIVar10,pIVar11,uVar21);
							if (pSVar7 != null) {
								puVar12 = *(ulong*)(*(long)(*plVar22 + 0xc0) + 0xf8);
								uVar21 = *puVar12;
								if (-1 < *(int)(*(long)(*(long)(*plVar22 + 0xc0) + 0x38) + 0x28)) {
									__dest = (__dest._1).image;
								}
								pcVar2 = (code)puVar12[2];
								local_48 = __dest;
								pcVar19[-8] = -0x41;
								pcVar19[-7] = '\x1d';
								pcVar19[-6] = -0x25;
								pcVar19[-5] = '\x04';
								pcVar19[-4] = false;
								pcVar19[-3] = false;
								pcVar19[-2] = false;
								pcVar19[-1] = false;
								(*pcVar2)(uVar21,puVar12,pSVar7,&local_48,pIVar10);
								return;
							}
						}
					}
				}
			}
		}
	label_04db1dce: ;
		pcVar19[-8] = -0x2d;
		pcVar19[-7] = '\x1d';
		pcVar19[-6] = -0x25;
		pcVar19[-5] = '\x04';
		pcVar19[-4] = false;
		pcVar19[-3] = false;
		pcVar19[-2] = false;
		pcVar19[-1] = false;
		throw new NullReferenceException();
	}

	// ApplicationManagers.Api.AottgQueryCache<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$TryEmitFresh: 46 lines keep C-only constructs
	private bool Il2CppFullySharedGenericType___Il2CppFullySharedGenericType__TryEmitFresh(ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o entry, DateTimeOffset now, System_Action_AottgQueryResult_TValue___o onResult)
	{
		ApplicationManagers_Api_AottgQueryCache_TKey__TValue__RGCTXs pAVar1;
		AottgQueryPolicy pAVar2;
		InvokerMethod pIVar3;
		ulong uVar4;
		long lVar5;
		unkuint10 Var6;
		DateTime SVar7;
		System_Action_AottgQueryResult_TValue___o pSVar8;
		uint uVar9;
		bool bVar10;
		sbyte pcVar11;
		unkuint10 pVar12;
		TimeSpan SVar13;
		IntPtr pvVar14;
		TimeSpan SVar15;
		ulong puVar16;
		MethodInfo_4CB1DE0 pMVar17;
		byte puVar18;
		MethodInfo pMVar19;
		Il2CppMethodPointer pIVar20;
		ulong __n;
		DateTimeOffset right;
		DateTimeOffset right_00;
		DateTimeOffset left;
		DateTimeOffset left_00;
		ulong uStack_90;
		byte[] local_88 = new byte[16];
		Nullable<TimeSpan> local_78;
		DateTime local_68;
		System_Action_AottgQueryResult_TValue___o local_60;
		MethodInfo_4CB1DE0 local_58;
		byte local_50;
		AottgQueryCache<TKey, TValue> local_40;
		uint local_38;
		byte local_31;

		local_68 = now._dateTime._dateData;
		local_38 = now._8_4_;
		local_60 = onResult;
		local_40 = this;
		if (g_data_07541dcc == false) {
			uStack_90 = 0x4db1e1b;
			uStack_90 = 0x4db1e27;
			uStack_90 = 0x4db1e33;
			uStack_90 = 0x4db1e3f;
			g_data_07541dcc = true;
		}
		pAVar1 = method.klass.rgctx_data;
		__n = (ulong)(pAVar1._20_TValue._2).stack_slot_size;
		lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
		pMVar17 = (MethodInfo_4CB1DE0)(local_88 + lVar5);
		local_78.hasValue = false;
		local_78._1_7_ = 0;
		local_78.value._ticks = (TimeSpan)0;
		pvVar14 = (pAVar1._11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_._1);
		*(ulong)((long)&uStack_90 + lVar5) = 0x4db1e8e;
		pcVar11 = il2cpp_codegen_get_instance_field_data_pointer(entry, (IntPtr)((long)pvVar14 + 0x80));
		puVar18 = local_88 + lVar5;
		if (*pcVar11 == false) {
	label_04db1fe1: ;
			pvVar14 = (method.klass.rgctx_data._11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_._1) ;
			*(ulong)(puVar18 + -8) = 0x4db2004;
			pcVar11 = il2cpp_codegen_get_instance_field_data_pointer(entry, (IntPtr)((long)pvVar14 + 0xa0));
			if (*pcVar11 != false) {
				pAVar2 = local_40._policy;
				if (pAVar2 == null) goto label_04db2167;
				if (pAVar2._FailureTtl_k__BackingField.hasValue != false) {
					pvVar14 = (method.klass.rgctx_data._11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_ ._1);
					*(ulong)(puVar18 + -8) = 0x4db204d;
					pVar12 = il2cpp_codegen_get_instance_field_data_pointer(entry, (IntPtr)((long)pvVar14 + 0x60));
					Var6 = *pVar12;
					if ((typeof(DateTimeOffset)._2).cctor_finished_or_no_cctor == 0) {
						*(ulong)(puVar18 + -8) = 0x4db206d;
					}
					uVar9 = local_38;
					SVar7._dateData = local_68._dateData;
					*(ulong)(puVar18 + -8) = 0x4db2082;
					right_00._10_6_ = 0;
					right_00._0_10_ = Var6;
					left_00._8_4_ = uVar9;
					left_00._dateTime._dateData = SVar7._dateData;
					left_00._12_4_ = 0;
					SVar13 = (left_00 - right_00);
					pAVar2 = local_40._policy;
					if (pAVar2 == null) {
	label_04db2167: ;
						*(ulong)(puVar18 + -8) = 0x4db216c;
						throw new NullReferenceException();
					}
					local_78.value._ticks =(TimeSpan)pAVar2._FailureTtl_k__BackingField.value._ticks;
					local_78.hasValue = pAVar2._FailureTtl_k__BackingField.hasValue;
					*(ulong)(puVar18 + -8) = 0x4db20b8;
					SVar15 = local_78.Value;
					if ((typeof(TimeSpan)._2).cctor_finished_or_no_cctor == 0) {
						*(ulong)(puVar18 + -8) = 0x4db20d3;
					}
					*(ulong)(puVar18 + -8) = 0x4db20e2;
					bVar10 = (SVar13 < SVar15);
					if (!bVar10) {
						return false;
					}
					pvVar14 = (method.klass.rgctx_data._11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_ ._1);
					*(ulong)(puVar18 + -8) = 0x4db2108;
					puVar16 = il2cpp_codegen_get_instance_field_data_pointer(entry, (IntPtr)((long)pvVar14 + 0x40));
					uVar4 = *puVar16;
					pIVar20 = method.klass.rgctx_data. _33_ApplicationManagers_Api_AottgQueryResult_TValue__FailedNoCache.methodPointer;
					*(ulong)(puVar18 + -8) = 0x4db2124;
					pMVar17 = (MethodInfo_4CB1DE0)(*pIVar20)(uVar4,1);
					if (local_60 == null) goto label_04db2167;
					pMVar19 = method.klass.rgctx_data._24_System_Action_AottgQueryResult_TValue___Invoke;
					pIVar20 = pMVar19.methodPointer;
					local_58 = pMVar17;
					goto label_04db214d;
				}
			}
			bVar10 = false;
		}
		else {
			pvVar14 = (method.klass.rgctx_data._11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_._1) ;
			local_88._8_8_ = method;
			*(ulong)((long)&uStack_90 + lVar5) = 0x4db1ebd;
			pVar12 = il2cpp_codegen_get_instance_field_data_pointer(entry, (IntPtr)((long)pvVar14 + 0x60));
			puVar18 = local_88 + lVar5;
			Var6 = *pVar12;
			if ((typeof(DateTimeOffset)._2).cctor_finished_or_no_cctor == 0) {
				*(ulong)((long)&uStack_90 + lVar5) = 0x4db1edd;
				puVar18 = local_88 + lVar5;
			}
			uVar9 = local_38;
			SVar7._dateData = local_68._dateData;
			*(ulong)(puVar18 + -8) = 0x4db1ef2;
			right._10_6_ = 0;
			right._0_10_ = Var6;
			left._8_4_ = uVar9;
			left._dateTime._dateData = SVar7._dateData;
			left._12_4_ = 0;
			SVar13 = (left - right);
			pAVar2 = local_40._policy;
			if (pAVar2 == null) goto label_04db2167;
			SVar15._ticks = (TimeSpan)pAVar2._SuccessTtl_k__BackingField._ticks;
			if ((typeof(TimeSpan)._2).cctor_finished_or_no_cctor == 0) {
				*(ulong)(puVar18 + -8) = 0x4db1f22;
			}
			*(ulong)(puVar18 + -8) = 0x4db1f2f;
			bVar10 = (SVar13 < SVar15);
			uVar4 = local_88._8_8_;
			method = (MethodInfo_4CB1DE0)local_88._8_8_;
			if (!bVar10) goto label_04db1fe1;
			pvVar14 = ((*(AottgQueryCache<TKey, TValue>*)(local_88._8_8_ + 0x20)). rgctx_data._11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_._1);
			*(ulong)(puVar18 + -8) = 0x4db1f5d;
			pvVar14 = il2cpp_codegen_get_instance_field_data_pointer(entry, (IntPtr)((long)pvVar14 + 0x20));
			*(ulong)(puVar18 + -8) = 0x4db1f6b;
			memcpy(pMVar17, pvVar14, __n);
			pAVar1 = (*(AottgQueryCache<TKey, TValue>*)(uVar4 + 0x20)).rgctx_data;
			pMVar19 = pAVar1._32_ApplicationManagers_Api_AottgQueryResult_TValue__ReadyFresh;
			pIVar20 = pMVar19.methodPointer;
			if (-1 < (int)(pAVar1._20_TValue._1).byval_arg.bits) {
				pMVar17 = (MethodInfo_4CB1DE0)pMVar17.methodPointer;
			}
			local_31 = 1;
			local_50 = &local_31;
			pIVar3 = pMVar19.invoker_method;
			local_58 = pMVar17;
			*(ulong)(puVar18 + -8) = 0x4db1fae;
			(*pIVar3)(pIVar20,pMVar19,null,&local_58,local_88);
			if (local_60 == null) goto label_04db2167;
			pMVar19 = (*(AottgQueryCache<TKey, TValue>*)(uVar4 + 0x20)).rgctx_data. _24_System_Action_AottgQueryResult_TValue___Invoke;
			pIVar20 = pMVar19.methodPointer;
			local_58 = (MethodInfo_4CB1DE0)local_88._0_8_;
	label_04db214d: ;
			pMVar17 = local_58;
			pSVar8 = local_60;
			pIVar3 = pMVar19.invoker_method;
			*(ulong)(puVar18 + -8) = 0x4db2150;
			(*pIVar3)(pIVar20,pMVar19,pSVar8,&local_58,pMVar17);
			bVar10 = true;
		}
		return bVar10;
	}

	// ApplicationManagers.Api.AottgQueryCache<__Il2CppFullySharedGenericType, __Il2CppFullySharedGenericType>$$Complete: 98 lines keep C-only constructs
	private void Il2CppFullySharedGenericType___Il2CppFullySharedGenericType__Complete(__Il2CppFullySharedGenericType key, AottgQueryFetchResult<TValue> result)
	{
		String pSVar1;
		String pSVar2;
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o pSVar3;
		code *pcVar4;
		IntPtr pvVar5;
		Func<DateTimeOffset> pSVar6;
		IntPtr iVar7;
		IntPtr iVar8;
		Il2CppType pIVar9;
		Il2CppType pIVar10;
		ApplicationManagers_Api_AottgQueryFetchResult_TValue__RGCTXs pAVar11;
		AottgQueryPolicy pAVar12;
		InvokerMethod pIVar13;
		long lVar14;
		Il2CppClass pIVar15;
		sbyte cVar16;
		byte puVar17;
		Il2CppClass pIVar18;
		ulong puVar19;
		long plVar20;
		IntPtr pvVar21;
		sbyte pcVar22;
		ulong uVar23;
		ulong puVar24;
		long lVar25;
		ulong uVar26;
		__Il2CppFullySharedGenericType pUVar27;
		ulong puVar28;
		__Il2CppFullySharedGenericType __src;
		MethodInfo pMVar29;
		Il2CppMethodPointer pIVar30;
		ulong uVar31;
		AottgQueryFetchResult<TValue> pAVar32;
		ulong __dest;
		unkbyte10 Var33;
		ulong[] auStack_a0 = new ulong[2];
		__Il2CppFullySharedGenericType local_90;
		ulong local_88;
		sbyte local_80;
		undefined7 uStack_7f;
		AottgQueryFetchResult<TValue> local_78;
		AottgQueryCache<TKey, TValue> local_70;
		ulong local_68;
		Il2CppClass* local_60;
		Il2CppClass local_50;
		Il2CppClass local_48;
		byte local_39;
		Il2CppClass local_38;

		local_48 = key.monitor;
		pUVar27 = key.klass;
		local_90 = pUVar27;
		if (g_data_07541dcd == false) {
			auStack_a0[0] = 0x4db21aa;
			g_data_07541dcd = true;
		}
		pSVar1 = result._Error_k__BackingField;
		pSVar2 = (*(ulong)((sbyte)pSVar1 + 0xc0));
		uVar31 = (ulong)*(uint)(*(long)&(pSVar2._1).this_arg.bits + 0xfc);
		local_50 = (Il2CppClass)(ulong)*(uint)((long)(pSVar2._1).nestedTypes + 0xfc);
		puVar19 = (ulong)((long)auStack_a0 + (8 - (uVar31 + 0xf & 0xfffffffffffffff0)));
		uVar26 = (ulong)((long)&(local_50._1).gc_desc + 7U) & 0xfffffffffffffff0;
		__dest = (ulong)((long)puVar19 - uVar26);
		puVar28 = (ulong)((long)__dest - uVar26);
		local_38 = null;
		pSVar3 = this._entries;
		__src = (__Il2CppFullySharedGenericType)&local_90;
		if (*(int)(*(long)&(pSVar2._1).this_arg.bits + 0x28) < 0) {
			__src = pUVar27;
		}
		local_88 = puVar28;
		local_78 = result;
		local_70 = this;
		puVar28[-1] = 0x4db2235;
		memcpy(puVar19, __src, uVar31);
		if (pSVar3 == null) goto label_04db29d2;
		pSVar2 = (*(ulong)((sbyte)pSVar1 + 0xc0));
		pIVar18 = (pSVar2._1).castClass;
		pvVar21 = (pIVar18._1).image;
		if (-1 < *(int)(*(long)&(pSVar2._1).this_arg.bits + 0x28)) {
			puVar19 = (ulong)*puVar19;
		}
		local_60 = &local_38;
		pcVar4 = (code)(pIVar18._1).name;
		local_68 = puVar19;
		puVar28[-1] = 0x4db2273;
		(*pcVar4)(pvVar21,pIVar18,pSVar3,&local_68,&local_80);
		pIVar18 = local_38;
		if (local_80 == false) {
			return;
		}
		if (local_38 == null) goto label_04db29d2;
		pAVar32 = (AottgQueryFetchResult<TValue>)&local_78._Error_k__BackingField;
		pvVar5 = (((((*(String*)pAVar32)[8].klass)._1).parent)._1);
		pvVar21 = (IntPtr)((long)pvVar5 + 0xc0);
		puVar28[-1] = 0x4db22bd;
		il2cpp_runtime_helper_030d6090(pvVar21, 1);
		puVar28[-1] = 0x4db22c8;
		puVar17 = il2cpp_codegen_get_instance_field_data_pointer(pIVar18, pvVar21);
		*puVar17 = 0;
		uVar23 = *(ulong)((long)pvVar5 + 200);
		puVar28[-1] = 0x4db22dd;
		il2cpp_runtime_helper_030d5fc0(uVar23, puVar17, 0);
		pIVar18 = local_48;
		if (local_48 == null) {
			pcVar4 = (code)**(ulong*)&(((*(String*)pAVar32)[8].klass)._2).flags;
			puVar28[-1] = 0x4db2304;
			pIVar18 = (Il2CppClass)(*pcVar4)("unknown_error");
			if (pIVar18 == null) goto label_04db29d2;
		}
		pcVar4 = (code)**(ulong*)&(((*(String*)pAVar32)[8].klass)._2).nested_type_count;
		puVar28[-1] = 0x4db2327;
		cVar16 = (*pcVar4)(pIVar18);
		pIVar15 = local_38;
		local_78 = pAVar32;
		local_48 = pIVar18;
		if (cVar16 == false) {
			pvVar21 = (((((*(String*)pAVar32)[8].klass)._1).parent)._1);
			puVar28[-1] = 0x4db25a8;
			pcVar22 = il2cpp_codegen_get_instance_field_data_pointer(pIVar15, (IntPtr)((long)pvVar21 + 0x80));
			pIVar15 = local_38;
			if (*pcVar22 != false) {
				pAVar12 = local_70._policy;
				if (pAVar12 == null) goto label_04db29d2;
				if (pAVar12._PreserveStaleOnFailure_k__BackingField != false) {
					pcVar4 = *(code*)(((*(String*)pAVar32)[8].klass).vtable)._0_Equals.methodPtr;
					puVar28[-1] = 0x4db25e7;
					local_70 = (AottgQueryCache<TKey, TValue>)(*pcVar4)(pIVar18);
					if (pIVar15 == null) goto label_04db29d2;
					pvVar5 = (((((*(String*)pAVar32)[8].klass)._1).parent)._1);
					pvVar21 = (IntPtr)((long)pvVar5 + 0x40);
					puVar28[-1] = 0x4db261c;
					il2cpp_runtime_helper_030d6090(pvVar21, 8);
					puVar28[-1] = 0x4db2627;
					puVar19 = il2cpp_codegen_get_instance_field_data_pointer(pIVar15, pvVar21);
					*puVar19 = local_70;
					uVar23 = *(ulong)((long)pvVar5 + 0x48);
					puVar28[-1] = 0x4db263d;
					il2cpp_runtime_helper_030d5fc0(uVar23, puVar19, 0);
					pIVar18 = local_38;
					pvVar21 = (((((*(String*)pAVar32)[8].klass)._1).parent)._1);
					puVar28[-1] = 0x4db2660;
					pvVar21 = il2cpp_codegen_get_instance_field_data_pointer(pIVar18, (IntPtr)((long)pvVar21 + 0x20));
					pIVar18 = local_50;
					puVar28[-1] = 0x4db266f;
					memcpy(__dest, pvVar21, (size_t)pIVar18);
					pIVar18 = local_48;
					pcVar4 = *(code*)(((*(String*)pAVar32)[8].klass).vtable)._0_Equals.methodPtr;
					puVar28[-1] = 0x4db2687;
					local_60 = (Il2CppClass*)(*pcVar4)(pIVar18);
					pMVar29 = (((*(String*)pAVar32)[8].klass).vtable)._0_Equals.method;
					pIVar30 = pMVar29.methodPointer;
					if (-1 < *(int)((((*(String*)pAVar32)[8].klass)._1).nestedTypes + 5)) {
						__dest = (ulong)*__dest;
					}
					local_68 = __dest;
					goto label_04db26b0;
				}
			}
			if (local_38 == null) goto label_04db29d2;
			pvVar5 = (((((*(String*)pAVar32)[8].klass)._1).parent)._1);
			pvVar21 = (IntPtr)((long)pvVar5 + 0x80);
			puVar28[-1] = 0x4db2701;
			il2cpp_runtime_helper_030d6090(pvVar21, 1);
			puVar28[-1] = 0x4db270c;
			puVar17 = il2cpp_codegen_get_instance_field_data_pointer(pIVar15, pvVar21);
			*puVar17 = 0;
			uVar23 = *(ulong)((long)pvVar5 + 0x88);
			puVar28[-1] = 0x4db2720;
			il2cpp_runtime_helper_030d5fc0(uVar23, puVar17, 0);
			pIVar15 = local_38;
			if (local_38 == null) goto label_04db29d2;
			pvVar5 = (((((*(String*)pAVar32)[8].klass)._1).parent)._1);
			pvVar21 = (IntPtr)((long)pvVar5 + 0xa0);
			puVar28[-1] = 0x4db2757;
			il2cpp_runtime_helper_030d6090(pvVar21, 1);
			puVar28[-1] = 0x4db2762;
			puVar17 = il2cpp_codegen_get_instance_field_data_pointer(pIVar15, pvVar21);
			*puVar17 = 1;
			uVar23 = *(ulong)((long)pvVar5 + 0xa8);
			puVar28[-1] = 0x4db2776;
			il2cpp_runtime_helper_030d5fc0(uVar23, puVar17, 0);
			pIVar15 = local_38;
			pvVar21 = (((((*(String*)pAVar32)[8].klass)._1).parent)._1);
			puVar28[-1] = 0x4db2799;
			pvVar21 = il2cpp_codegen_get_instance_field_data_pointer(pIVar15, (IntPtr)((long)pvVar21 + 0x20));
			pIVar15 = local_50;
			puVar28[-1] = 0x4db27a7;
			memset(pvVar21, 0, (size_t)pIVar15);
			pIVar15 = local_38;
			pcVar4 = *(code*)(((*(String*)pAVar32)[8].klass).vtable)._0_Equals.methodPtr;
			puVar28[-1] = 0x4db27c2;
			uVar23 = (*pcVar4)(pIVar18);
			if (pIVar15 == null) goto label_04db29d2;
			pvVar5 = (((((*(String*)pAVar32)[8].klass)._1).parent)._1);
			pvVar21 = (IntPtr)((long)pvVar5 + 0x40);
			puVar28[-1] = 0x4db27f6;
			il2cpp_runtime_helper_030d6090(pvVar21, 8);
			puVar28[-1] = 0x4db2801;
			puVar19 = il2cpp_codegen_get_instance_field_data_pointer(pIVar15, pvVar21);
			*puVar19 = uVar23;
			uVar23 = *(ulong)((long)pvVar5 + 0x48);
			puVar28[-1] = 0x4db2813;
			il2cpp_runtime_helper_030d5fc0(uVar23, puVar19, 0);
			pIVar18 = local_38;
			pSVar6 = local_70._now;
			if (pSVar6 == null) goto label_04db29d2;
			iVar7 = pSVar6.method;
			iVar8 = pSVar6.method_code;
			pcVar4 = (code)pSVar6.invoke_impl;
			puVar28[-1] = 0x4db2833;
			Var33 = (*pcVar4)(iVar8,iVar7);
			pAVar32 = local_78;
			local_50 = (Il2CppClass)Var33;
			if (pIVar18 == null) goto label_04db29d2;
			pIVar9 = local_78.klass.rgctx_data[1]._5_ApplicationManagers_Api_AottgQueryFetchResult_TValue__set_Error [1].return_type;
			pIVar10 = pIVar9 + 6;
			puVar28[-1] = 0x4db286f;
			il2cpp_runtime_helper_030d6090(pIVar10, 0x10);
			puVar28[-1] = 0x4db287a;
			puVar24 = il2cpp_codegen_get_instance_field_data_pointer(pIVar18, pIVar10);
			*puVar24 = (ulong)local_50;
			*(short)(puVar24 + 1) = (short)((unkuint10)Var33 >> 0x40);
			uVar23 = *(ulong)&pIVar9[6].bits;
			puVar28[-1] = 0x4db2895;
			il2cpp_runtime_helper_030d5fc0(uVar23, puVar24, 0);
			pIVar18 = local_48;
			pIVar30 = (pAVar32.klass.rgctx_data[6]. _3_ApplicationManagers_Api_AottgQueryFetchResult_TValue__set_Success).methodPointer;
			puVar28[-1] = 0x4db28ad;
			uVar23 = (*pIVar30)(pIVar18);
			pIVar30 = (pAVar32.klass.rgctx_data[5]. _3_ApplicationManagers_Api_AottgQueryFetchResult_TValue__set_Success).methodPointer;
			puVar28[-1] = 0x4db28c6;
			puVar19 = (ulong)(*pIVar30)(uVar23,0);
		}
		else {
			if (local_38 == null) goto label_04db29d2;
			pvVar5 = (((((*(String*)pAVar32)[8].klass)._1).parent)._1);
			pvVar21 = (IntPtr)((long)pvVar5 + 0x80);
			puVar28[-1] = 0x4db236f;
			il2cpp_runtime_helper_030d6090(pvVar21, 1);
			puVar28[-1] = 0x4db237a;
			puVar17 = il2cpp_codegen_get_instance_field_data_pointer(pIVar15, pvVar21);
			*puVar17 = 1;
			uVar23 = *(ulong)((long)pvVar5 + 0x88);
			puVar28[-1] = 0x4db238f;
			il2cpp_runtime_helper_030d5fc0(uVar23, puVar17, 0);
			pIVar18 = local_38;
			if (local_38 == null) goto label_04db29d2;
			pvVar5 = (((((*(String*)pAVar32)[8].klass)._1).parent)._1);
			pvVar21 = (IntPtr)((long)pvVar5 + 0xa0);
			puVar28[-1] = 0x4db23c7;
			il2cpp_runtime_helper_030d6090(pvVar21, 1);
			puVar28[-1] = 0x4db23d2;
			puVar17 = il2cpp_codegen_get_instance_field_data_pointer(pIVar18, pvVar21);
			*puVar17 = 0;
			uVar23 = *(ulong)((long)pvVar5 + 0xa8);
			puVar28[-1] = 0x4db23e7;
			il2cpp_runtime_helper_030d5fc0(uVar23, puVar17, 0);
			pIVar15 = local_38;
			pIVar18 = local_48;
			puVar19 = *(ulong*)&(((*(String*)pAVar32)[8].klass)._2).typeHierarchyDepth;
			uVar23 = *puVar19;
			pcVar4 = (code)puVar19[2];
			local_68 = __dest;
			puVar28[-1] = 0x4db2412;
			(*pcVar4)(uVar23,puVar19,pIVar18,&local_68,__dest);
			pIVar18 = local_50;
			if (pIVar15 == null) goto label_04db29d2;
			pvVar21 = (((((*(String*)pAVar32)[8].klass)._1).parent)._1);
			puVar28[-1] = 0x4db2444;
			il2cpp_codegen_write_instance_field_data(pIVar15, (IntPtr)((long)pvVar21 + 0x20), __dest, (int32_t)pIVar18);
			pIVar18 = local_38;
			if (local_38 == null) goto label_04db29d2;
			pvVar5 = (((((*(String*)pAVar32)[8].klass)._1).parent)._1);
			pvVar21 = (IntPtr)((long)pvVar5 + 0x40);
			puVar28[-1] = 0x4db2478;
			il2cpp_runtime_helper_030d6090(pvVar21, 8);
			puVar28[-1] = 0x4db2483;
			puVar19 = il2cpp_codegen_get_instance_field_data_pointer(pIVar18, pvVar21);
			*puVar19 = 0;
			uVar23 = *(ulong)((long)pvVar5 + 0x48);
			puVar28[-1] = 0x4db2498;
			il2cpp_runtime_helper_030d5fc0(uVar23, puVar19, 0);
			pIVar18 = local_38;
			pSVar6 = local_70._now;
			if (pSVar6 == null) goto label_04db29d2;
			iVar7 = pSVar6.method;
			iVar8 = pSVar6.method_code;
			pcVar4 = (code)pSVar6.invoke_impl;
			puVar28[-1] = 0x4db24b8;
			Var33 = (*pcVar4)(iVar8,iVar7);
			pAVar32 = local_78;
			local_48 = (Il2CppClass)Var33;
			if (pIVar18 == null) goto label_04db29d2;
			pIVar9 = local_78.klass.rgctx_data[1]._5_ApplicationManagers_Api_AottgQueryFetchResult_TValue__set_Error [1].return_type;
			pIVar10 = pIVar9 + 6;
			puVar28[-1] = 0x4db24f4;
			il2cpp_runtime_helper_030d6090(pIVar10, 0x10);
			puVar28[-1] = 0x4db24ff;
			plVar20 = il2cpp_codegen_get_instance_field_data_pointer(pIVar18, pIVar10);
			*plVar20 = (long)local_48;
			*(short)(plVar20 + 1) = (short)((unkuint10)Var33 >> 0x40);
			uVar23 = *(ulong)&pIVar9[6].bits;
			puVar28[-1] = 0x4db251a;
			il2cpp_runtime_helper_030d5fc0(uVar23, plVar20, 0);
			pIVar18 = local_38;
			pIVar10 = pAVar32.klass.rgctx_data[1]._5_ApplicationManagers_Api_AottgQueryFetchResult_TValue__set_Error [1].return_type;
			puVar28[-1] = 0x4db253d;
			pvVar21 = il2cpp_codegen_get_instance_field_data_pointer(pIVar18, pIVar10 + 2);
			pIVar18 = local_50;
			puVar19 = local_88;
			puVar28[-1] = 0x4db2550;
			memcpy(puVar19, pvVar21, (size_t)pIVar18);
			pAVar11 = pAVar32.klass.rgctx_data;
			pMVar29 = pAVar11[5]._2_ApplicationManagers_Api_AottgQueryFetchResult_TValue___ctor;
			pIVar30 = pMVar29.methodPointer;
			if (-1 < *(int)&(pAVar11[3]._2_ApplicationManagers_Api_AottgQueryFetchResult_TValue___ctor).return_type ) {
				puVar19 = (ulong)*puVar19;
			}
			local_39 = 0;
			local_60 = (Il2CppClass*)&local_39;
			local_68 = puVar19;
	label_04db26b0: ;
			pIVar13 = pMVar29.invoker_method;
			puVar28[-1] = 0x4db26c1;
			(*pIVar13)(pIVar30,pMVar29,null,&local_68,&local_80);
			puVar19 = (ulong)CONCAT71(uStack_7f, local_80);
		}
		pIVar18 = local_38;
		pIVar10 = pAVar32.klass.rgctx_data[1]._5_ApplicationManagers_Api_AottgQueryFetchResult_TValue__set_Error [1].return_type;
		puVar28[-1] = 0x4db28e8;
		plVar20 = il2cpp_codegen_get_instance_field_data_pointer(pIVar18, pIVar10);
		if (*plVar20 != 0) {
			pIVar30 = (pAVar32.klass.rgctx_data[6]. _5_ApplicationManagers_Api_AottgQueryFetchResult_TValue__set_Error).methodPointer;
			puVar28[-1] = 0x4db2908;
			lVar25 = (*pIVar30)();
			pIVar18 = local_38;
			pIVar10 = pAVar32.klass.rgctx_data[1]._5_ApplicationManagers_Api_AottgQueryFetchResult_TValue__set_Error [1].return_type;
			puVar28[-1] = 0x4db292c;
			plVar20 = il2cpp_codegen_get_instance_field_data_pointer(pIVar18, pIVar10);
			if (*plVar20 != 0) {
				pcVar4 = ((pAVar32.klass.rgctx_data[7]._1_TValue)._1).image;
				puVar28[-1] = 0x4db294b;
				(*pcVar4)();
				if (lVar25 != 0) {
					if (0 < (int)*(ulong)(lVar25 + 0x18)) {
						uVar26 = *(ulong)(lVar25 + 0x18) & 0xffffffff;
						uVar31 = 0;
						do {
							if (uVar26 <= uVar31) {
								puVar28[-1] = 0x4db29dc;
								throw new IndexOutOfRangeException();
							}
							lVar14 = *(long)(lVar25 + 0x20 + uVar31 * 8);
							if (lVar14 != 0) {
								if (lVar14 == 0) goto label_04db29d2;
								pIVar18 = local_78.klass.rgctx_data[4]. _0_ApplicationManagers_Api_AottgQueryFetchResult_TValue_;
								pvVar21 = (pIVar18._1).image;
								pcVar4 = (code)(pIVar18._1).name;
								local_68 = puVar19;
								puVar28[-1] = 0x4db29bd;
								(*pcVar4)(pvVar21,pIVar18,lVar14,&local_68,puVar19);
								uVar26 = (ulong)*(uint)(lVar25 + 0x18);
							}
							uVar31 = uVar31 + 1;
						} while ((long)uVar31 < (long)(int)uVar26);
					}
					return;
				}
			}
		}
	label_04db29d2: ;
		puVar28[-1] = 0x4db29d7;
		throw new NullReferenceException();
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgChangelogService.ListKey, object>$$.ctor: 20 lines keep C-only constructs
	private void AottgChangelogService_ListKey_object___ctor(System_Action_TKey__Action_AottgQueryFetchResult_TValue____o fetch, Func<DateTimeOffset> now, AottgQueryPolicy policy)
	{
		object @object;
		Il2CppClass pIVar1;
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o __this_00;
		ArgumentNullException __this_01;
		String paramName;
		AottgQueryCache<TKey, TValue> pAVar2;

		pIVar1 = method.klass.rgctx_data. _0_System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue__;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		__this_00 = (System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o)il2cpp_codegen_object_new(pIVar1);
		__this_00 = new Dictionary<AottgChangelogService.ListKey, @object>();
		this._entries = __this_00;
		base();
		if (fetch == null) {
			pIVar1 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentNullException));
			__this_01 = (ArgumentNullException)il2cpp_codegen_object_new(pIVar1);
			paramName = il2cpp_codegen_get_runtime_metadata(&"fetch");
			__this_01 = new ArgumentNullException(paramName);
			throw (object)__this_01;
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this._fetch = fetch;
		if (now == null) {
			pIVar1 = method.klass.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
			if (((pIVar1._2).bitflags1 & 1) == 0) {
				pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
			}
			pIVar1 = method.klass.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
			if (((pIVar1._2).bitflags1 & 1) == 0) {
				pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
			}
			now = *(Func<DateTimeOffset>*)((long)pIVar1.static_fields + 8);
			if (now == null) {
				pIVar1 = method.klass.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
				if (((pIVar1._2).bitflags1 & 1) == 0) {
					pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
				}
				pIVar1 = method.klass.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
				if (((pIVar1._2).bitflags1 & 1) == 0) {
					pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
				}
				@object = *(@object*)pIVar1.static_fields;
				now = new Func<DateTimeOffset>(@object, (intptr_t) method.klass.rgctx_data. _6_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue____ctor_b__4_0);
				pAVar2 = method.klass;
				pIVar1 = pAVar2.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
				if (((pIVar1._2).bitflags1 & 1) == 0) {
					pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
					pAVar2 = method.klass;
				}
				*(Func<DateTimeOffset>*)((long)pIVar1.static_fields + 8) = now;
				pIVar1 = pAVar2.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
				if (((pIVar1._2).bitflags1 & 1) == 0) {
					pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
				}
			}
		}
		this._now = now;
		if (policy == null) {
			policy = AottgQueryPolicy.Default;
		}
		this._policy = policy;
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgChangelogService.ListKey, object>$$HasEntry: 1 lines keep C-only constructs
	private bool AottgChangelogService_ListKey_object__HasEntry(AottgChangelogService.ListKey key)
	{
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o __this_00;
		bool bVar1;

		__this_00 = this._entries;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return bVar1;
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgChangelogService.ListKey, object>$$IsInFlight: 2 lines keep C-only constructs
	private bool AottgChangelogService_ListKey_object__IsInFlight(AottgChangelogService.ListKey key)
	{
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o __this_00;
		bool bVar1;
		object pIStack_8;

		pIStack_8 = null;
		__this_00 = this._entries;
		if (__this_00 != null) {
			bVar1 = __this_00.TryGetValue(key, ref pIStack_8);
			if (!bVar1) {
				return false;
			}
			if (pIStack_8 != null) {
				return *(sbyte)((long)&pIStack_8[3].monitor + 2) != false;
			}
		}
		throw new NullReferenceException();
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgChangelogService.ListKey, object>$$Clear: 1 lines keep C-only constructs
	private void AottgChangelogService_ListKey_object__Clear()
	{
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o __this_00;

		__this_00 = this._entries;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Clear();
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgChangelogService.ListKey, object>$$Clear: 1 lines keep C-only constructs
	private void AottgChangelogService_ListKey_object__Clear(AottgChangelogService.ListKey key)
	{
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o __this_00;

		__this_00 = this._entries;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Remove(key);
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgChangelogService.ListKey, object>$$Get: 24 lines keep C-only constructs
	private void AottgChangelogService_ListKey_object__Get(AottgChangelogService.ListKey key, System_Action_AottgQueryResult_TValue___o onResult, bool forceRefresh)
	{
		int piVar1;
		uint uVar2;
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o pSVar3;
		Func<DateTimeOffset> pSVar4;
		System_Collections_Generic_List_Action_AottgQueryResult_TValue____o __this_00;
		MethodInfo pMVar5;
		System_Action_AottgQueryResult_TValue___array pSVar6;
		System_Action_TKey__Action_AottgQueryFetchResult_TValue____o pSVar7;
		object pIVar8;
		ApplicationManagers_Api_AottgQueryCache_TKey__TValue__RGCTXs pAVar9;
		bool bVar10;
		Il2CppClass pIVar11;
		ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o __this_01;
		ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o __this_02;
		AottgQueryResult<TValue> pAVar12;
		Action<object> __this_03;
		byte[] auVar13 = new byte[16];
		DateTimeOffset now;
		ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o pAStack_38;

		pAStack_38 = null;
		pIVar11 = method.klass.rgctx_data. _14_ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue_;
		if (((pIVar11._2).bitflags1 & 1) == 0) {
			pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
		}
		__this_01 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o)il2cpp_codegen_object_new(pIVar11);
		__this_01 = new AottgQueryCache.__c__DisplayClass9_0<AottgChangelogService.ListKey, object>();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			__this_01.key = (object)key;
			if (onResult == null) {
				return;
			}
			pSVar3 = this._entries;
			if (pSVar3 != null) {
				bVar10 = pSVar3.TryGetValue(key, (object*)&pAStack_38);
				if (!bVar10) {
					pIVar11 = method.klass.rgctx_data._11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_;
					if (((pIVar11._2).bitflags1 & 1) == 0) {
						pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
					}
					__this_02 = (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o)il2cpp_codegen_object_new(pIVar11);
					__this_02 = new AottgQueryCache.Entry<AottgChangelogService.ListKey, object>();
					pSVar3 = this._entries;
					pAStack_38 = __this_02;
					if (pSVar3 == (System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o)0x0) goto label_04db3046;
					pSVar3.set_Item((AottgChangelogService.ListKey)__this_01.key, (object)__this_02);
				}
				pSVar4 = this._now;
				if (pSVar4 != null) {
					auVar13 = (*(code)pSVar4.invoke_impl)(pSVar4.method_code,pSVar4.method);
					if ((!forceRefresh) &&(now._8_8_ = auVar13._8_8_ & 0xffffffff, now._dateTime._dateData = (DateTime)((uint64_t)auVar13._0_8_)._dateData , bVar10 = this.TryEmitFresh(pAStack_38, now, onResult), bVar10)) {
						return;
					}
					if (pAStack_38 != null) {
						if (pAStack_38.HasSuccess == false) {
							pAVar12 = AottgQueryResult<object>.LoadingNoCache();
						}
						else {
							pAVar12 = AottgQueryResult<object>.ReadyStaleRefreshing(pAStack_38.Value);
						}
						(*(code)onResult.invoke_impl)(onResult.method_code,pAVar12,onResult.method);
						if ((pAStack_38 != null) &&(__this_00 = pAStack_38.Subscribers, __this_00 != null)) {
							pMVar5 = method.klass.rgctx_data. _27_System_Collections_Generic_List_Action_AottgQueryResult_TValue____Add;
							piVar1 = &__this_00._version;
							*piVar1 = *piVar1 + 1;
							pSVar6 = __this_00._items;
							if (pSVar6 != null) {
								uVar2 = __this_00._size;
								if (uVar2 < (uint)pSVar6.Length) {
									__this_00._size = uVar2 + 1;
									pSVar6[(int)uVar2] = onResult;
								}
								else {
									__this_00.AddWithResize((object)onResult);
								}
								if (pAStack_38 != null) {
									if (pAStack_38.InFlight == false) {
										pAStack_38.InFlight = true;
										pSVar7 = this._fetch;
										pIVar8 = __this_01.key;
										pIVar11 = method.klass.rgctx_data._29_System_Action_AottgQueryFetchResult_TValue__;
										if (((pIVar11._2).bitflags1 & 1) == 0) {
											pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
										}
										__this_03 = (Action<object>)il2cpp_codegen_object_new(pIVar11);
										pAVar9 = method.klass.rgctx_data;
										__this_03 = new Action<object>((object)__this_01, (intptr_t) pAVar9. _28_ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue___Get_b__0);
										if (pSVar7 == null) goto label_04db3046;
										(*(code)pSVar7.invoke_impl)(pSVar7.method_code,pIVar8,__this_03,pSVar7.method);
									}
									return;
								}
							}
						}
					}
				}
			}
		}
	label_04db3046: ;
		throw new NullReferenceException();
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgChangelogService.ListKey, object>$$TryEmitFresh: 7 lines keep C-only constructs
	private bool AottgChangelogService_ListKey_object__TryEmitFresh(ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o entry, DateTimeOffset now, System_Action_AottgQueryResult_TValue___o onResult)
	{
		AottgQueryPolicy pAVar1;
		ulong uVar2;
		ushort uVar3;
		ulong uVar4;
		ushort uVar5;
		bool bVar6;
		TimeSpan SVar7;
		AottgQueryResult<TValue> pAVar8;
		TimeSpan SVar9;
		DateTimeOffset right;
		DateTimeOffset right_00;
		DateTimeOffset left;
		DateTimeOffset left_00;
		Nullable<TimeSpan> local_40;

		local_40.hasValue = false;
		local_40._1_7_ = 0;
		if (entry == null) goto label_04db328b;
		if (entry.HasSuccess == false) {
	label_04db317b: ;
			if (entry.HasFailure != false) {
				pAVar1 = this._policy;
				if (pAVar1 == null) goto label_04db328b;
				if (pAVar1._FailureTtl_k__BackingField.hasValue != false) {
					uVar4 = entry.CachedAt._dateTime;
					uVar5 = entry.CachedAt._offsetMinutes;
					right_00._offsetMinutes = uVar5;
					right_00._dateTime._dateData = (DateTime)(DateTime)uVar4;
					right_00._10_6_ = 0;
					left_00._12_4_ = 0;
					left_00._dateTime._dateData =((DateTime)now._dateTime._dateData);
					left_00._offsetMinutes = now._offsetMinutes;
					left_00._10_2_ = now._10_2_;
					SVar7 = (left_00 - right_00);
					pAVar1 = this._policy;
					if (pAVar1 == null) goto label_04db328b;
					local_40.value._ticks =(TimeSpan)pAVar1._FailureTtl_k__BackingField.value._ticks;
					local_40.hasValue = pAVar1._FailureTtl_k__BackingField.hasValue;
					SVar9 = local_40.Value;
					bVar6 = (SVar7 < SVar9);
					if (!bVar6) {
						return false;
					}
					pAVar8 = AottgQueryResult<object>.FailedNoCache(entry.Error, true);
					goto joined_r0x04db3263;
				}
			}
			bVar6 = false;
		}
		else {
			uVar2 = entry.CachedAt._dateTime;
			uVar3 = entry.CachedAt._offsetMinutes;
			right._offsetMinutes = uVar3;
			right._dateTime._dateData = (DateTime)(DateTime)uVar2;
			right._10_6_ = 0;
			left._12_4_ = 0;
			left._dateTime._dateData =((DateTime)now._dateTime._dateData);
			left._offsetMinutes = now._offsetMinutes;
			left._10_2_ = now._10_2_;
			SVar7 = (left - right);
			pAVar1 = this._policy;
			if (pAVar1 == null) goto label_04db328b;
			SVar9._ticks = (TimeSpan)pAVar1._SuccessTtl_k__BackingField._ticks;
			bVar6 = (SVar7 < SVar9);
			if (!bVar6) goto label_04db317b;
			pAVar8 = AottgQueryResult<object>.ReadyFresh(entry.Value, true);
	joined_r0x04db3263: ;
			if (onResult == null) {
	label_04db328b: ;
				throw new NullReferenceException();
			}
			(*(code)onResult.invoke_impl)(onResult.method_code,pAVar8,onResult.method) ;
			bVar6 = true;
		}
		return bVar6;
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgChangelogService.ListKey, object>$$Complete: 13 lines keep C-only constructs
	private void AottgChangelogService_ListKey_object__Complete(AottgChangelogService.ListKey key, AottgQueryFetchResult<TValue> result)
	{
		int piVar1;
		int length;
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o __this_00;
		Func<DateTimeOffset> pSVar2;
		AottgQueryPolicy pAVar3;
		Il2CppClass pIVar4;
		object pIVar5;
		bool bVar6;
		AottgQueryResult<TValue> pAVar7;
		Object[] pSVar8;
		ulong uVar9;
		ulong uVar10;
		unkbyte10 Var11;
		object pIStack_28;

		pIStack_28 = null;
		__this_00 = this._entries;
		if (__this_00 == null) goto label_04db3589;
		bVar6 = __this_00.TryGetValue(key, ref pIStack_28);
		if (!bVar6) {
			return;
		}
		if ((pIStack_28 == null) ||((*(byte)((long)&pIStack_28[3].monitor + 2) = 0, result == null &&(result = AottgQueryFetchResult<object>.Fail("unknown_error"), result == null)))) goto label_04db3589;
		if (result._Success_k__BackingField == false) {
			if (pIStack_28 == null) goto label_04db3589;
			if (*(sbyte)&pIStack_28[3].monitor != false) {
				pAVar3 = this._policy;
				if (pAVar3 == null) goto label_04db3589;
				if (pAVar3._PreserveStaleOnFailure_k__BackingField != false) {
					pIStack_28[2].klass = (Il2CppClass)result._Error_k__BackingField;
					if (pIStack_28 == null) goto label_04db3589;
					pAVar7 = AottgQueryResult<object>.FailedRefreshStale(pIStack_28[1].monitor, result._Error_k__BackingField);
					goto label_04db34b5;
				}
			}
			*(ushort)&pIStack_28[3].monitor = 0x100;
			pIStack_28[1].monitor = null;
			pIStack_28[2].klass = (Il2CppClass)result._Error_k__BackingField;
			pIVar5 = pIStack_28;
			pSVar2 = this._now;
			if ((pSVar2 == null) ||(Var11 = (*(code)pSVar2.invoke_impl)(pSVar2.method_code), pIVar5 == null)) goto label_04db3589;
			*(unkbyte10)&pIVar5[2].monitor = Var11;
			pAVar7 = AottgQueryResult<object>.FailedNoCache(result._Error_k__BackingField, false);
		}
		else {
			if (pIStack_28 == null) goto label_04db3589;
			*(ushort)&pIStack_28[3].monitor = 1;
			pIStack_28[1].monitor = result._Value_k__BackingField;
			if (pIStack_28 == null) goto label_04db3589;
			pIStack_28[2].klass = null;
			pIVar5 = pIStack_28;
			pSVar2 = this._now;
			if (((pSVar2 == null) ||(Var11 = (*(code)pSVar2.invoke_impl)(pSVar2.method_code), pIVar5 == null)) ||(*(unkbyte10)&pIVar5[2].monitor = Var11, pIStack_28 == null)) goto label_04db3589;
			pAVar7 = AottgQueryResult<object>.ReadyFresh(pIStack_28[1].monitor, false);
		}
	label_04db34b5: ;
		if (((pIStack_28 != null) && (pIStack_28[1].klass != null)) &&((pSVar8 = pIStack_28[1].klass.ToArray(), pIStack_28 != null && (pIVar4 = pIStack_28[1].klass, pIVar4 != null)))) {
			piVar1 = (int)((long)&(pIVar4._1).namespaze + 4);
			*piVar1 = *piVar1 + 1;
			length = *(int)&(pIVar4._1).namespaze;
			*(uint)&(pIVar4._1).namespaze = 0;
			if (0 < length) {
				Array.Clear((Array)(pIVar4._1).name, 0, length);
			}
			if (pSVar8 != null) {
				if (0 < (int)pSVar8.Length) {
					uVar9 = pSVar8.Length & 0xffffffff;
					uVar10 = 0;
					do {
						if (uVar9 <= uVar10) {
							throw new IndexOutOfRangeException();
						}
						pIVar5 = pSVar8[uVar10];
						if (pIVar5 != null) {
							if (pIVar5 == null) goto label_04db3589;
							(*pIVar5[1].monitor)(pIVar5[4].klass,pAVar7,pIVar5[2].monitor);
							uVar9 = (ulong)(uint)pSVar8.Length;
						}
						uVar10 = uVar10 + 1;
					} while ((long)uVar10 < (long)(int)uVar9);
				}
				return;
			}
		}
	label_04db3589: ;
		throw new NullReferenceException();
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgChangelogService.UnitKey, object>$$.ctor: 20 lines keep C-only constructs
	private void AottgChangelogService_UnitKey_object___ctor(System_Action_TKey__Action_AottgQueryFetchResult_TValue____o fetch, Func<DateTimeOffset> now, AottgQueryPolicy policy)
	{
		object @object;
		Il2CppClass pIVar1;
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o __this_00;
		ArgumentNullException __this_01;
		String paramName;
		AottgQueryCache<TKey, TValue> pAVar2;

		pIVar1 = method.klass.rgctx_data. _0_System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue__;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		__this_00 = (System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o)il2cpp_codegen_object_new(pIVar1);
		__this_00 = new Dictionary<AottgChangelogService.UnitKey, @object>();
		this._entries = __this_00;
		base();
		if (fetch == null) {
			pIVar1 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentNullException));
			__this_01 = (ArgumentNullException)il2cpp_codegen_object_new(pIVar1);
			paramName = il2cpp_codegen_get_runtime_metadata(&"fetch");
			__this_01 = new ArgumentNullException(paramName);
			throw (object)__this_01;
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this._fetch = fetch;
		if (now == null) {
			pIVar1 = method.klass.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
			if (((pIVar1._2).bitflags1 & 1) == 0) {
				pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
			}
			pIVar1 = method.klass.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
			if (((pIVar1._2).bitflags1 & 1) == 0) {
				pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
			}
			now = *(Func<DateTimeOffset>*)((long)pIVar1.static_fields + 8);
			if (now == null) {
				pIVar1 = method.klass.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
				if (((pIVar1._2).bitflags1 & 1) == 0) {
					pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
				}
				pIVar1 = method.klass.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
				if (((pIVar1._2).bitflags1 & 1) == 0) {
					pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
				}
				@object = *(@object*)pIVar1.static_fields;
				now = new Func<DateTimeOffset>(@object, (intptr_t) method.klass.rgctx_data. _6_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue____ctor_b__4_0);
				pAVar2 = method.klass;
				pIVar1 = pAVar2.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
				if (((pIVar1._2).bitflags1 & 1) == 0) {
					pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
					pAVar2 = method.klass;
				}
				*(Func<DateTimeOffset>*)((long)pIVar1.static_fields + 8) = now;
				pIVar1 = pAVar2.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
				if (((pIVar1._2).bitflags1 & 1) == 0) {
					pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
				}
			}
		}
		this._now = now;
		if (policy == null) {
			policy = AottgQueryPolicy.Default;
		}
		this._policy = policy;
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgChangelogService.UnitKey, object>$$HasEntry: 1 lines keep C-only constructs
	private bool AottgChangelogService_UnitKey_object__HasEntry(AottgChangelogService.UnitKey key)
	{
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o __this_00;
		bool bVar1;

		__this_00 = this._entries;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return bVar1;
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgChangelogService.UnitKey, object>$$IsInFlight: 2 lines keep C-only constructs
	private bool AottgChangelogService_UnitKey_object__IsInFlight(AottgChangelogService.UnitKey key)
	{
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o __this_00;
		bool bVar1;
		object pIStack_8;

		pIStack_8 = null;
		__this_00 = this._entries;
		if (__this_00 != null) {
			bVar1 = __this_00.TryGetValue(key, ref pIStack_8);
			if (!bVar1) {
				return false;
			}
			if (pIStack_8 != null) {
				return *(sbyte)((long)&pIStack_8[3].monitor + 2) != false;
			}
		}
		throw new NullReferenceException();
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgChangelogService.UnitKey, object>$$Clear: 1 lines keep C-only constructs
	private void AottgChangelogService_UnitKey_object__Clear()
	{
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o __this_00;

		__this_00 = this._entries;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Clear();
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgChangelogService.UnitKey, object>$$Clear: 1 lines keep C-only constructs
	private void AottgChangelogService_UnitKey_object__Clear(AottgChangelogService.UnitKey key)
	{
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o __this_00;

		__this_00 = this._entries;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Remove(key);
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgChangelogService.UnitKey, object>$$Get: 27 lines keep C-only constructs
	private void AottgChangelogService_UnitKey_object__Get(AottgChangelogService.UnitKey key, System_Action_AottgQueryResult_TValue___o onResult, bool forceRefresh)
	{
		int piVar1;
		byte uVar2;
		uint uVar3;
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o pSVar4;
		Func<DateTimeOffset> pSVar5;
		System_Collections_Generic_List_Action_AottgQueryResult_TValue____o __this_00;
		MethodInfo pMVar6;
		System_Action_AottgQueryResult_TValue___array pSVar7;
		System_Action_TKey__Action_AottgQueryFetchResult_TValue____o pSVar8;
		ApplicationManagers_Api_AottgQueryCache_TKey__TValue__RGCTXs pAVar9;
		bool bVar10;
		Il2CppClass pIVar11;
		ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o __this_01;
		ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o __this_02;
		AottgQueryResult<TValue> pAVar12;
		Action<object> __this_03;
		byte[] auVar13 = new byte[16];
		DateTimeOffset now;
		ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o pAStack_38;

		pAStack_38 = null;
		pIVar11 = method.klass.rgctx_data. _14_ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue_;
		if (((pIVar11._2).bitflags1 & 1) == 0) {
			pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
		}
		__this_01 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o)il2cpp_codegen_object_new(pIVar11);
		__this_01 = new AottgQueryCache.__c__DisplayClass9_0<AottgChangelogService.UnitKey, object>();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			*(AottgChangelogService.UnitKey)&__this_01.key = key._tail[0];
			if (onResult == null) {
				return;
			}
			pSVar4 = this._entries;
			if (pSVar4 != null) {
				bVar10 = pSVar4.TryGetValue(key, (object*)&pAStack_38);
				if (!bVar10) {
					pIVar11 = method.klass.rgctx_data._11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_;
					if (((pIVar11._2).bitflags1 & 1) == 0) {
						pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
					}
					__this_02 = (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o)il2cpp_codegen_object_new(pIVar11);
					__this_02 = new AottgQueryCache.Entry<AottgChangelogService.UnitKey, object>();
					pSVar4 = this._entries;
					pAStack_38 = __this_02;
					if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o)0x0) goto label_04db3c07;
					pSVar4.set_Item((AottgChangelogService.UnitKey)SUB41(*(uint)&__this_01.key, 0), (object)__this_02);
				}
				pSVar5 = this._now;
				if (pSVar5 != null) {
					auVar13 = (*(code)pSVar5.invoke_impl)(pSVar5.method_code,pSVar5.method);
					if ((!forceRefresh) &&(now._8_8_ = auVar13._8_8_ & 0xffffffff, now._dateTime._dateData = (DateTime)((uint64_t)auVar13._0_8_)._dateData , bVar10 = this.TryEmitFresh(pAStack_38, now, onResult), bVar10)) {
						return;
					}
					if (pAStack_38 != null) {
						if (pAStack_38.HasSuccess == false) {
							pAVar12 = AottgQueryResult<object>.LoadingNoCache();
						}
						else {
							pAVar12 = AottgQueryResult<object>.ReadyStaleRefreshing(pAStack_38.Value);
						}
						(*(code)onResult.invoke_impl)(onResult.method_code,pAVar12,onResult.method);
						if ((pAStack_38 != null) &&(__this_00 = pAStack_38.Subscribers, __this_00 != null)) {
							pMVar6 = method.klass.rgctx_data. _27_System_Collections_Generic_List_Action_AottgQueryResult_TValue____Add;
							piVar1 = &__this_00._version;
							*piVar1 = *piVar1 + 1;
							pSVar7 = __this_00._items;
							if (pSVar7 != null) {
								uVar3 = __this_00._size;
								if (uVar3 < (uint)pSVar7.Length) {
									__this_00._size = uVar3 + 1;
									pSVar7[(int)uVar3] = onResult;
								}
								else {
									__this_00.AddWithResize((object)onResult);
								}
								if (pAStack_38 != null) {
									if (pAStack_38.InFlight == false) {
										pAStack_38.InFlight = true;
										pSVar8 = this._fetch;
										uVar2 = *(byte)&__this_01.key;
										pIVar11 = method.klass.rgctx_data._29_System_Action_AottgQueryFetchResult_TValue__;
										if (((pIVar11._2).bitflags1 & 1) == 0) {
											pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
										}
										__this_03 = (Action<object>)il2cpp_codegen_object_new(pIVar11);
										pAVar9 = method.klass.rgctx_data;
										__this_03 = new Action<object>((object)__this_01, (intptr_t) pAVar9. _28_ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue___Get_b__0);
										if (pSVar8 == null) goto label_04db3c07;
										(*(code)pSVar8.invoke_impl)(pSVar8.method_code,uVar2,__this_03,pSVar8.method);
									}
									return;
								}
							}
						}
					}
				}
			}
		}
	label_04db3c07: ;
		throw new NullReferenceException();
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgChangelogService.UnitKey, object>$$TryEmitFresh: 7 lines keep C-only constructs
	private bool AottgChangelogService_UnitKey_object__TryEmitFresh(ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o entry, DateTimeOffset now, System_Action_AottgQueryResult_TValue___o onResult)
	{
		AottgQueryPolicy pAVar1;
		ulong uVar2;
		ushort uVar3;
		ulong uVar4;
		ushort uVar5;
		bool bVar6;
		TimeSpan SVar7;
		AottgQueryResult<TValue> pAVar8;
		TimeSpan SVar9;
		DateTimeOffset right;
		DateTimeOffset right_00;
		DateTimeOffset left;
		DateTimeOffset left_00;
		Nullable<TimeSpan> local_40;

		local_40.hasValue = false;
		local_40._1_7_ = 0;
		if (entry == null) goto label_04db3e4b;
		if (entry.HasSuccess == false) {
	label_04db3d3b: ;
			if (entry.HasFailure != false) {
				pAVar1 = this._policy;
				if (pAVar1 == null) goto label_04db3e4b;
				if (pAVar1._FailureTtl_k__BackingField.hasValue != false) {
					uVar4 = entry.CachedAt._dateTime;
					uVar5 = entry.CachedAt._offsetMinutes;
					right_00._offsetMinutes = uVar5;
					right_00._dateTime._dateData = (DateTime)(DateTime)uVar4;
					right_00._10_6_ = 0;
					left_00._12_4_ = 0;
					left_00._dateTime._dateData =((DateTime)now._dateTime._dateData);
					left_00._offsetMinutes = now._offsetMinutes;
					left_00._10_2_ = now._10_2_;
					SVar7 = (left_00 - right_00);
					pAVar1 = this._policy;
					if (pAVar1 == null) goto label_04db3e4b;
					local_40.value._ticks =(TimeSpan)pAVar1._FailureTtl_k__BackingField.value._ticks;
					local_40.hasValue = pAVar1._FailureTtl_k__BackingField.hasValue;
					SVar9 = local_40.Value;
					bVar6 = (SVar7 < SVar9);
					if (!bVar6) {
						return false;
					}
					pAVar8 = AottgQueryResult<object>.FailedNoCache(entry.Error, true);
					goto joined_r0x04db3e23;
				}
			}
			bVar6 = false;
		}
		else {
			uVar2 = entry.CachedAt._dateTime;
			uVar3 = entry.CachedAt._offsetMinutes;
			right._offsetMinutes = uVar3;
			right._dateTime._dateData = (DateTime)(DateTime)uVar2;
			right._10_6_ = 0;
			left._12_4_ = 0;
			left._dateTime._dateData =((DateTime)now._dateTime._dateData);
			left._offsetMinutes = now._offsetMinutes;
			left._10_2_ = now._10_2_;
			SVar7 = (left - right);
			pAVar1 = this._policy;
			if (pAVar1 == null) goto label_04db3e4b;
			SVar9._ticks = (TimeSpan)pAVar1._SuccessTtl_k__BackingField._ticks;
			bVar6 = (SVar7 < SVar9);
			if (!bVar6) goto label_04db3d3b;
			pAVar8 = AottgQueryResult<object>.ReadyFresh(entry.Value, true);
	joined_r0x04db3e23: ;
			if (onResult == null) {
	label_04db3e4b: ;
				throw new NullReferenceException();
			}
			(*(code)onResult.invoke_impl)(onResult.method_code,pAVar8,onResult.method) ;
			bVar6 = true;
		}
		return bVar6;
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgChangelogService.UnitKey, object>$$Complete: 13 lines keep C-only constructs
	private void AottgChangelogService_UnitKey_object__Complete(AottgChangelogService.UnitKey key, AottgQueryFetchResult<TValue> result)
	{
		int piVar1;
		int length;
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o __this_00;
		Func<DateTimeOffset> pSVar2;
		AottgQueryPolicy pAVar3;
		Il2CppClass pIVar4;
		object pIVar5;
		bool bVar6;
		AottgQueryResult<TValue> pAVar7;
		Object[] pSVar8;
		ulong uVar9;
		ulong uVar10;
		unkbyte10 Var11;
		object pIStack_28;

		pIStack_28 = null;
		__this_00 = this._entries;
		if (__this_00 == null) goto label_04db4144;
		bVar6 = __this_00.TryGetValue(key, ref pIStack_28);
		if (!bVar6) {
			return;
		}
		if ((pIStack_28 == null) ||((*(byte)((long)&pIStack_28[3].monitor + 2) = 0, result == null &&(result = AottgQueryFetchResult<object>.Fail("unknown_error"), result == null)))) goto label_04db4144;
		if (result._Success_k__BackingField == false) {
			if (pIStack_28 == null) goto label_04db4144;
			if (*(sbyte)&pIStack_28[3].monitor != false) {
				pAVar3 = this._policy;
				if (pAVar3 == null) goto label_04db4144;
				if (pAVar3._PreserveStaleOnFailure_k__BackingField != false) {
					pIStack_28[2].klass = (Il2CppClass)result._Error_k__BackingField;
					if (pIStack_28 == null) goto label_04db4144;
					pAVar7 = AottgQueryResult<object>.FailedRefreshStale(pIStack_28[1].monitor, result._Error_k__BackingField);
					goto label_04db406d;
				}
			}
			*(ushort)&pIStack_28[3].monitor = 0x100;
			pIStack_28[1].monitor = null;
			pIStack_28[2].klass = (Il2CppClass)result._Error_k__BackingField;
			pIVar5 = pIStack_28;
			pSVar2 = this._now;
			if ((pSVar2 == null) ||(Var11 = (*(code)pSVar2.invoke_impl)(pSVar2.method_code), pIVar5 == null)) goto label_04db4144;
			*(unkbyte10)&pIVar5[2].monitor = Var11;
			pAVar7 = AottgQueryResult<object>.FailedNoCache(result._Error_k__BackingField, false);
		}
		else {
			if (pIStack_28 == null) goto label_04db4144;
			*(ushort)&pIStack_28[3].monitor = 1;
			pIStack_28[1].monitor = result._Value_k__BackingField;
			if (pIStack_28 == null) goto label_04db4144;
			pIStack_28[2].klass = null;
			pIVar5 = pIStack_28;
			pSVar2 = this._now;
			if (((pSVar2 == null) ||(Var11 = (*(code)pSVar2.invoke_impl)(pSVar2.method_code), pIVar5 == null)) ||(*(unkbyte10)&pIVar5[2].monitor = Var11, pIStack_28 == null)) goto label_04db4144;
			pAVar7 = AottgQueryResult<object>.ReadyFresh(pIStack_28[1].monitor, false);
		}
	label_04db406d: ;
		if (((pIStack_28 != null) && (pIStack_28[1].klass != null)) &&((pSVar8 = pIStack_28[1].klass.ToArray(), pIStack_28 != null && (pIVar4 = pIStack_28[1].klass, pIVar4 != null)))) {
			piVar1 = (int)((long)&(pIVar4._1).namespaze + 4);
			*piVar1 = *piVar1 + 1;
			length = *(int)&(pIVar4._1).namespaze;
			*(uint)&(pIVar4._1).namespaze = 0;
			if (0 < length) {
				Array.Clear((Array)(pIVar4._1).name, 0, length);
			}
			if (pSVar8 != null) {
				if (0 < (int)pSVar8.Length) {
					uVar9 = pSVar8.Length & 0xffffffff;
					uVar10 = 0;
					do {
						if (uVar9 <= uVar10) {
							throw new IndexOutOfRangeException();
						}
						pIVar5 = pSVar8[uVar10];
						if (pIVar5 != null) {
							if (pIVar5 == null) goto label_04db4144;
							(*pIVar5[1].monitor)(pIVar5[4].klass,pAVar7,pIVar5[2].monitor);
							uVar9 = (ulong)(uint)pSVar8.Length;
						}
						uVar10 = uVar10 + 1;
					} while ((long)uVar10 < (long)(int)uVar9);
				}
				return;
			}
		}
	label_04db4144: ;
		throw new NullReferenceException();
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgCreditsService.UnitKey, object>$$.ctor: 20 lines keep C-only constructs
	private void AottgCreditsService_UnitKey_object___ctor(System_Action_TKey__Action_AottgQueryFetchResult_TValue____o fetch, Func<DateTimeOffset> now, AottgQueryPolicy policy)
	{
		object @object;
		Il2CppClass pIVar1;
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o __this_00;
		ArgumentNullException __this_01;
		String paramName;
		AottgQueryCache<TKey, TValue> pAVar2;

		pIVar1 = method.klass.rgctx_data. _0_System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue__;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		__this_00 = (System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o)il2cpp_codegen_object_new(pIVar1);
		__this_00 = new Dictionary<AottgCreditsService.UnitKey, @object>();
		this._entries = __this_00;
		base();
		if (fetch == null) {
			pIVar1 = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentNullException));
			__this_01 = (ArgumentNullException)il2cpp_codegen_object_new(pIVar1);
			paramName = il2cpp_codegen_get_runtime_metadata(&"fetch");
			__this_01 = new ArgumentNullException(paramName);
			throw (object)__this_01;
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this._fetch = fetch;
		if (now == null) {
			pIVar1 = method.klass.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
			if (((pIVar1._2).bitflags1 & 1) == 0) {
				pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
			}
			pIVar1 = method.klass.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
			if (((pIVar1._2).bitflags1 & 1) == 0) {
				pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
			}
			now = *(Func<DateTimeOffset>*)((long)pIVar1.static_fields + 8);
			if (now == null) {
				pIVar1 = method.klass.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
				if (((pIVar1._2).bitflags1 & 1) == 0) {
					pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
				}
				pIVar1 = method.klass.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
				if (((pIVar1._2).bitflags1 & 1) == 0) {
					pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
				}
				@object = *(@object*)pIVar1.static_fields;
				now = new Func<DateTimeOffset>(@object, (intptr_t) method.klass.rgctx_data. _6_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue____ctor_b__4_0);
				pAVar2 = method.klass;
				pIVar1 = pAVar2.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
				if (((pIVar1._2).bitflags1 & 1) == 0) {
					pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
					pAVar2 = method.klass;
				}
				*(Func<DateTimeOffset>*)((long)pIVar1.static_fields + 8) = now;
				pIVar1 = pAVar2.rgctx_data._5_ApplicationManagers_Api_AottgQueryCache___c_TKey__TValue_;
				if (((pIVar1._2).bitflags1 & 1) == 0) {
					pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
				}
			}
		}
		this._now = now;
		if (policy == null) {
			policy = AottgQueryPolicy.Default;
		}
		this._policy = policy;
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgCreditsService.UnitKey, object>$$HasEntry: 1 lines keep C-only constructs
	private bool AottgCreditsService_UnitKey_object__HasEntry(AottgCreditsService.UnitKey key)
	{
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o __this_00;
		bool bVar1;

		__this_00 = this._entries;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		return bVar1;
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgCreditsService.UnitKey, object>$$IsInFlight: 2 lines keep C-only constructs
	private bool AottgCreditsService_UnitKey_object__IsInFlight(AottgCreditsService.UnitKey key)
	{
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o __this_00;
		bool bVar1;
		object pIStack_8;

		pIStack_8 = null;
		__this_00 = this._entries;
		if (__this_00 != null) {
			bVar1 = __this_00.TryGetValue(key, ref pIStack_8);
			if (!bVar1) {
				return false;
			}
			if (pIStack_8 != null) {
				return *(sbyte)((long)&pIStack_8[3].monitor + 2) != false;
			}
		}
		throw new NullReferenceException();
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgCreditsService.UnitKey, object>$$Clear: 1 lines keep C-only constructs
	private void AottgCreditsService_UnitKey_object__Clear()
	{
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o __this_00;

		__this_00 = this._entries;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Clear();
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgCreditsService.UnitKey, object>$$Clear: 1 lines keep C-only constructs
	private void AottgCreditsService_UnitKey_object__Clear(AottgCreditsService.UnitKey key)
	{
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o __this_00;

		__this_00 = this._entries;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Remove(key);
		return;
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgCreditsService.UnitKey, object>$$Get: 27 lines keep C-only constructs
	private void AottgCreditsService_UnitKey_object__Get(AottgCreditsService.UnitKey key, System_Action_AottgQueryResult_TValue___o onResult, bool forceRefresh)
	{
		int piVar1;
		byte uVar2;
		uint uVar3;
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o pSVar4;
		Func<DateTimeOffset> pSVar5;
		System_Collections_Generic_List_Action_AottgQueryResult_TValue____o __this_00;
		MethodInfo pMVar6;
		System_Action_AottgQueryResult_TValue___array pSVar7;
		System_Action_TKey__Action_AottgQueryFetchResult_TValue____o pSVar8;
		ApplicationManagers_Api_AottgQueryCache_TKey__TValue__RGCTXs pAVar9;
		bool bVar10;
		Il2CppClass pIVar11;
		ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o __this_01;
		ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o __this_02;
		AottgQueryResult<TValue> pAVar12;
		Action<object> __this_03;
		byte[] auVar13 = new byte[16];
		DateTimeOffset now;
		ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o pAStack_38;

		pAStack_38 = null;
		pIVar11 = method.klass.rgctx_data. _14_ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue_;
		if (((pIVar11._2).bitflags1 & 1) == 0) {
			pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
		}
		__this_01 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o)il2cpp_codegen_object_new(pIVar11);
		__this_01 = new AottgQueryCache.__c__DisplayClass9_0<AottgCreditsService.UnitKey, object>();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			*(AottgCreditsService.UnitKey)&__this_01.key = key._tail[0];
			if (onResult == null) {
				return;
			}
			pSVar4 = this._entries;
			if (pSVar4 != null) {
				bVar10 = pSVar4.TryGetValue(key, (object*)&pAStack_38);
				if (!bVar10) {
					pIVar11 = method.klass.rgctx_data._11_ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue_;
					if (((pIVar11._2).bitflags1 & 1) == 0) {
						pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
					}
					__this_02 = (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o)il2cpp_codegen_object_new(pIVar11);
					__this_02 = new AottgQueryCache.Entry<AottgCreditsService.UnitKey, object>();
					pSVar4 = this._entries;
					pAStack_38 = __this_02;
					if (pSVar4 == (System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o)0x0) goto label_04db47b7;
					pSVar4.set_Item((AottgCreditsService.UnitKey)SUB41(*(uint)&__this_01.key, 0), (object)__this_02);
				}
				pSVar5 = this._now;
				if (pSVar5 != null) {
					auVar13 = (*(code)pSVar5.invoke_impl)(pSVar5.method_code,pSVar5.method);
					if ((!forceRefresh) &&(now._8_8_ = auVar13._8_8_ & 0xffffffff, now._dateTime._dateData = (DateTime)((uint64_t)auVar13._0_8_)._dateData , bVar10 = this.TryEmitFresh(pAStack_38, now, onResult), bVar10)) {
						return;
					}
					if (pAStack_38 != null) {
						if (pAStack_38.HasSuccess == false) {
							pAVar12 = AottgQueryResult<object>.LoadingNoCache();
						}
						else {
							pAVar12 = AottgQueryResult<object>.ReadyStaleRefreshing(pAStack_38.Value);
						}
						(*(code)onResult.invoke_impl)(onResult.method_code,pAVar12,onResult.method);
						if ((pAStack_38 != null) &&(__this_00 = pAStack_38.Subscribers, __this_00 != null)) {
							pMVar6 = method.klass.rgctx_data. _27_System_Collections_Generic_List_Action_AottgQueryResult_TValue____Add;
							piVar1 = &__this_00._version;
							*piVar1 = *piVar1 + 1;
							pSVar7 = __this_00._items;
							if (pSVar7 != null) {
								uVar3 = __this_00._size;
								if (uVar3 < (uint)pSVar7.Length) {
									__this_00._size = uVar3 + 1;
									pSVar7[(int)uVar3] = onResult;
								}
								else {
									__this_00.AddWithResize((object)onResult);
								}
								if (pAStack_38 != null) {
									if (pAStack_38.InFlight == false) {
										pAStack_38.InFlight = true;
										pSVar8 = this._fetch;
										uVar2 = *(byte)&__this_01.key;
										pIVar11 = method.klass.rgctx_data._29_System_Action_AottgQueryFetchResult_TValue__;
										if (((pIVar11._2).bitflags1 & 1) == 0) {
											pIVar11 = il2cpp_codegen_class_init_checked(pIVar11);
										}
										__this_03 = (Action<object>)il2cpp_codegen_object_new(pIVar11);
										pAVar9 = method.klass.rgctx_data;
										__this_03 = new Action<object>((object)__this_01, (intptr_t) pAVar9. _28_ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue___Get_b__0);
										if (pSVar8 == null) goto label_04db47b7;
										(*(code)pSVar8.invoke_impl)(pSVar8.method_code,uVar2,__this_03,pSVar8.method);
									}
									return;
								}
							}
						}
					}
				}
			}
		}
	label_04db47b7: ;
		throw new NullReferenceException();
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgCreditsService.UnitKey, object>$$TryEmitFresh: 7 lines keep C-only constructs
	private bool AottgCreditsService_UnitKey_object__TryEmitFresh(ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o entry, DateTimeOffset now, System_Action_AottgQueryResult_TValue___o onResult)
	{
		AottgQueryPolicy pAVar1;
		ulong uVar2;
		ushort uVar3;
		ulong uVar4;
		ushort uVar5;
		bool bVar6;
		TimeSpan SVar7;
		AottgQueryResult<TValue> pAVar8;
		TimeSpan SVar9;
		DateTimeOffset right;
		DateTimeOffset right_00;
		DateTimeOffset left;
		DateTimeOffset left_00;
		Nullable<TimeSpan> local_40;

		local_40.hasValue = false;
		local_40._1_7_ = 0;
		if (entry == null) goto label_04db49fb;
		if (entry.HasSuccess == false) {
	label_04db48eb: ;
			if (entry.HasFailure != false) {
				pAVar1 = this._policy;
				if (pAVar1 == null) goto label_04db49fb;
				if (pAVar1._FailureTtl_k__BackingField.hasValue != false) {
					uVar4 = entry.CachedAt._dateTime;
					uVar5 = entry.CachedAt._offsetMinutes;
					right_00._offsetMinutes = uVar5;
					right_00._dateTime._dateData = (DateTime)(DateTime)uVar4;
					right_00._10_6_ = 0;
					left_00._12_4_ = 0;
					left_00._dateTime._dateData =((DateTime)now._dateTime._dateData);
					left_00._offsetMinutes = now._offsetMinutes;
					left_00._10_2_ = now._10_2_;
					SVar7 = (left_00 - right_00);
					pAVar1 = this._policy;
					if (pAVar1 == null) goto label_04db49fb;
					local_40.value._ticks =(TimeSpan)pAVar1._FailureTtl_k__BackingField.value._ticks;
					local_40.hasValue = pAVar1._FailureTtl_k__BackingField.hasValue;
					SVar9 = local_40.Value;
					bVar6 = (SVar7 < SVar9);
					if (!bVar6) {
						return false;
					}
					pAVar8 = AottgQueryResult<object>.FailedNoCache(entry.Error, true);
					goto joined_r0x04db49d3;
				}
			}
			bVar6 = false;
		}
		else {
			uVar2 = entry.CachedAt._dateTime;
			uVar3 = entry.CachedAt._offsetMinutes;
			right._offsetMinutes = uVar3;
			right._dateTime._dateData = (DateTime)(DateTime)uVar2;
			right._10_6_ = 0;
			left._12_4_ = 0;
			left._dateTime._dateData =((DateTime)now._dateTime._dateData);
			left._offsetMinutes = now._offsetMinutes;
			left._10_2_ = now._10_2_;
			SVar7 = (left - right);
			pAVar1 = this._policy;
			if (pAVar1 == null) goto label_04db49fb;
			SVar9._ticks = (TimeSpan)pAVar1._SuccessTtl_k__BackingField._ticks;
			bVar6 = (SVar7 < SVar9);
			if (!bVar6) goto label_04db48eb;
			pAVar8 = AottgQueryResult<object>.ReadyFresh(entry.Value, true);
	joined_r0x04db49d3: ;
			if (onResult == null) {
	label_04db49fb: ;
				throw new NullReferenceException();
			}
			(*(code)onResult.invoke_impl)(onResult.method_code,pAVar8,onResult.method) ;
			bVar6 = true;
		}
		return bVar6;
	}

	// ApplicationManagers.Api.AottgQueryCache<AottgCreditsService.UnitKey, object>$$Complete: 13 lines keep C-only constructs
	private void AottgCreditsService_UnitKey_object__Complete(AottgCreditsService.UnitKey key, AottgQueryFetchResult<TValue> result)
	{
		int piVar1;
		int length;
		System_Collections_Generic_Dictionary_TKey__AottgQueryCache_Entry_TKey__TValue___o __this_00;
		Func<DateTimeOffset> pSVar2;
		AottgQueryPolicy pAVar3;
		Il2CppClass pIVar4;
		object pIVar5;
		bool bVar6;
		AottgQueryResult<TValue> pAVar7;
		Object[] pSVar8;
		ulong uVar9;
		ulong uVar10;
		unkbyte10 Var11;
		object pIStack_28;

		pIStack_28 = null;
		__this_00 = this._entries;
		if (__this_00 == null) goto label_04db4cf4;
		bVar6 = __this_00.TryGetValue(key, ref pIStack_28);
		if (!bVar6) {
			return;
		}
		if ((pIStack_28 == null) ||((*(byte)((long)&pIStack_28[3].monitor + 2) = 0, result == null &&(result = AottgQueryFetchResult<object>.Fail("unknown_error"), result == null)))) goto label_04db4cf4;
		if (result._Success_k__BackingField == false) {
			if (pIStack_28 == null) goto label_04db4cf4;
			if (*(sbyte)&pIStack_28[3].monitor != false) {
				pAVar3 = this._policy;
				if (pAVar3 == null) goto label_04db4cf4;
				if (pAVar3._PreserveStaleOnFailure_k__BackingField != false) {
					pIStack_28[2].klass = (Il2CppClass)result._Error_k__BackingField;
					if (pIStack_28 == null) goto label_04db4cf4;
					pAVar7 = AottgQueryResult<object>.FailedRefreshStale(pIStack_28[1].monitor, result._Error_k__BackingField);
					goto label_04db4c1d;
				}
			}
			*(ushort)&pIStack_28[3].monitor = 0x100;
			pIStack_28[1].monitor = null;
			pIStack_28[2].klass = (Il2CppClass)result._Error_k__BackingField;
			pIVar5 = pIStack_28;
			pSVar2 = this._now;
			if ((pSVar2 == null) ||(Var11 = (*(code)pSVar2.invoke_impl)(pSVar2.method_code), pIVar5 == null)) goto label_04db4cf4;
			*(unkbyte10)&pIVar5[2].monitor = Var11;
			pAVar7 = AottgQueryResult<object>.FailedNoCache(result._Error_k__BackingField, false);
		}
		else {
			if (pIStack_28 == null) goto label_04db4cf4;
			*(ushort)&pIStack_28[3].monitor = 1;
			pIStack_28[1].monitor = result._Value_k__BackingField;
			if (pIStack_28 == null) goto label_04db4cf4;
			pIStack_28[2].klass = null;
			pIVar5 = pIStack_28;
			pSVar2 = this._now;
			if (((pSVar2 == null) ||(Var11 = (*(code)pSVar2.invoke_impl)(pSVar2.method_code), pIVar5 == null)) ||(*(unkbyte10)&pIVar5[2].monitor = Var11, pIStack_28 == null)) goto label_04db4cf4;
			pAVar7 = AottgQueryResult<object>.ReadyFresh(pIStack_28[1].monitor, false);
		}
	label_04db4c1d: ;
		if (((pIStack_28 != null) && (pIStack_28[1].klass != null)) &&((pSVar8 = pIStack_28[1].klass.ToArray(), pIStack_28 != null && (pIVar4 = pIStack_28[1].klass, pIVar4 != null)))) {
			piVar1 = (int)((long)&(pIVar4._1).namespaze + 4);
			*piVar1 = *piVar1 + 1;
			length = *(int)&(pIVar4._1).namespaze;
			*(uint)&(pIVar4._1).namespaze = 0;
			if (0 < length) {
				Array.Clear((Array)(pIVar4._1).name, 0, length);
			}
			if (pSVar8 != null) {
				if (0 < (int)pSVar8.Length) {
					uVar9 = pSVar8.Length & 0xffffffff;
					uVar10 = 0;
					do {
						if (uVar9 <= uVar10) {
							throw new IndexOutOfRangeException();
						}
						pIVar5 = pSVar8[uVar10];
						if (pIVar5 != null) {
							if (pIVar5 == null) goto label_04db4cf4;
							(*pIVar5[1].monitor)(pIVar5[4].klass,pAVar7,pIVar5[2].monitor);
							uVar9 = (ulong)(uint)pSVar8.Length;
						}
						uVar10 = uVar10 + 1;
					} while ((long)uVar10 < (long)(int)uVar9);
				}
				return;
			}
		}
	label_04db4cf4: ;
		throw new NullReferenceException();
	}
}
