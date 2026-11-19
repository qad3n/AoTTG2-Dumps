// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Changelog.AottgChangelogResult
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Changelog/AottgChangelogResult.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Changelog;

[Token(Token = "0x20009A8")]
public sealed class AottgChangelogResult<TValue>
{
	[Token(Token = "0x17000F8B")]
	public AottgChangelogResultState State
	{
		[Token(Token = "0x60059FE")]
		[CompilerGenerated]
		get
		{
			return default(AottgChangelogResultState);
		}
		[Token(Token = "0x60059FF")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F8C")]
	public TValue Value
	{
		[Token(Token = "0x6005A00")]
		[CompilerGenerated]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x6005A01")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F8D")]
	public string Error
	{
		[Token(Token = "0x6005A02")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005A03")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F8E")]
	public bool IsFromCache
	{
		[Token(Token = "0x6005A04")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6005A05")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F8F")]
	public bool IsStale
	{
		[Token(Token = "0x6005A06")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6005A07")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F90")]
	public bool IsRefreshing
	{
		[Token(Token = "0x6005A08")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6005A09")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60059FD")]
	private AottgChangelogResult(AottgChangelogResultState state, TValue value, string error, bool isFromCache, bool isStale, bool isRefreshing)
	{
	}

	[Token(Token = "0x6005A0A")]
	public static AottgChangelogResult<TValue> LoadingNoCache()
	{
		return null;
	}

	[Token(Token = "0x6005A0B")]
	public static AottgChangelogResult<TValue> ReadyFresh(TValue value, bool isFromCache)
	{
		return null;
	}

	[Token(Token = "0x6005A0C")]
	public static AottgChangelogResult<TValue> ReadyStaleRefreshing(TValue value)
	{
		return null;
	}

	[Token(Token = "0x6005A0D")]
	public static AottgChangelogResult<TValue> FailedNoCache(string error)
	{
		return null;
	}

	[Token(Token = "0x6005A0E")]
	public static AottgChangelogResult<TValue> FailedRefreshStale(TValue value, string error)
	{
		return null;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogResult.c.

	// ApplicationManagers.Changelog.AottgChangelogResult<object>$$.ctor: clean
	private void object___ctor(int state, object value, String error, bool isFromCache, bool isStale, bool isRefreshing)
	{
		base();
		this._State_k__BackingField = state;
		this._Value_k__BackingField = value;
		this._Error_k__BackingField = error;
		this._IsFromCache_k__BackingField = isFromCache;
		this._IsStale_k__BackingField = isStale;
		this._IsRefreshing_k__BackingField = isRefreshing;
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_State: clean
	private int object__get_State()
	{
		return this._State_k__BackingField;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_State: clean
	private void object__set_State(int value)
	{
		this._State_k__BackingField = value;
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_Value: clean
	private object object__get_Value()
	{
		return this._Value_k__BackingField;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_Value: clean
	private void object__set_Value(object value)
	{
		this._Value_k__BackingField = value;
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_Error: clean
	private String object__get_Error()
	{
		return this._Error_k__BackingField;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_Error: clean
	private void object__set_Error(String value)
	{
		this._Error_k__BackingField = value;
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_IsFromCache: clean
	private bool object__get_IsFromCache()
	{
		return this._IsFromCache_k__BackingField;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_IsFromCache: clean
	private void object__set_IsFromCache(bool value)
	{
		this._IsFromCache_k__BackingField = value;
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_IsStale: clean
	private bool object__get_IsStale()
	{
		return this._IsStale_k__BackingField;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_IsStale: clean
	private void object__set_IsStale(bool value)
	{
		this._IsStale_k__BackingField = value;
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<object>$$get_IsRefreshing: clean
	private bool object__get_IsRefreshing()
	{
		return this._IsRefreshing_k__BackingField;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<object>$$set_IsRefreshing: clean
	private void object__set_IsRefreshing(bool value)
	{
		this._IsRefreshing_k__BackingField = value;
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<object>$$LoadingNoCache: 7 lines keep C-only constructs
	private static AottgChangelogResult<TValue> object__LoadingNoCache()
	{
		Il2CppClass pIVar1;
		AottgChangelogResult<TValue> __this;

		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data[7].klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		__this = (AottgChangelogResult<TValue>)il2cpp_codegen_object_new(pIVar1);
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		__this = new Object();
		__this._State_k__BackingField = 0;
		__this._Value_k__BackingField = null;
		__this._Error_k__BackingField = null;
		__this._IsFromCache_k__BackingField = false;
		__this._IsStale_k__BackingField = false;
		__this._IsRefreshing_k__BackingField = true;
		return __this;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<object>$$ReadyFresh: 7 lines keep C-only constructs
	private static AottgChangelogResult<TValue> object__ReadyFresh(object value, bool isFromCache)
	{
		Il2CppClass pIVar1;
		AottgChangelogResult<TValue> __this;

		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data[7].klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		__this = (AottgChangelogResult<TValue>)il2cpp_codegen_object_new(pIVar1);
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		__this = new Object();
		__this._State_k__BackingField = 1;
		__this._Value_k__BackingField = value;
		__this._Error_k__BackingField = null;
		__this._IsFromCache_k__BackingField = isFromCache;
		__this._IsStale_k__BackingField = false;
		__this._IsRefreshing_k__BackingField = false;
		return __this;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<object>$$ReadyStaleRefreshing: 7 lines keep C-only constructs
	private static AottgChangelogResult<TValue> object__ReadyStaleRefreshing(object value)
	{
		Il2CppClass pIVar1;
		AottgChangelogResult<TValue> __this;

		pIVar1 = (Il2CppClass)method.klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		pIVar1 = pIVar1.rgctx_data[7].klass;
		if (((pIVar1._2).bitflags1 & 1) == 0) {
			pIVar1 = il2cpp_codegen_class_init_checked(pIVar1);
		}
		__this = (AottgChangelogResult<TValue>)il2cpp_codegen_object_new(pIVar1);
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		__this = new Object();
		__this._State_k__BackingField = 2;
		__this._Value_k__BackingField = value;
		__this._Error_k__BackingField = null;
		__this._IsFromCache_k__BackingField = true;
		__this._IsStale_k__BackingField = true;
		__this._IsRefreshing_k__BackingField = true;
		return __this;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<object>$$FailedNoCache: 7 lines keep C-only constructs
	private static AottgChangelogResult<TValue> object__FailedNoCache(String error)
	{
		String pSVar1;
		bool bVar2;
		Il2CppClass pIVar3;
		AottgChangelogResult<TValue> __this;

		bVar2 = String.IsNullOrEmpty(error);
		pSVar1 = "unknown_error";
		pIVar3 = (Il2CppClass)method.klass;
		if (((pIVar3._2).bitflags1 & 1) == 0) {
			pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
		}
		pIVar3 = pIVar3.rgctx_data[7].klass;
		if (((pIVar3._2).bitflags1 & 1) == 0) {
			pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
		}
		__this = (AottgChangelogResult<TValue>)il2cpp_codegen_object_new(pIVar3);
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		if (bVar2) {
			error = pSVar1;
		}
		__this = new Object();
		__this._State_k__BackingField = 3;
		__this._Value_k__BackingField = null;
		__this._Error_k__BackingField = error;
		__this._IsFromCache_k__BackingField = false;
		__this._IsStale_k__BackingField = false;
		__this._IsRefreshing_k__BackingField = false;
		return __this;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<object>$$FailedRefreshStale: 7 lines keep C-only constructs
	private static AottgChangelogResult<TValue> object__FailedRefreshStale(object value, String error)
	{
		String pSVar1;
		bool bVar2;
		Il2CppClass pIVar3;
		AottgChangelogResult<TValue> __this;

		bVar2 = String.IsNullOrEmpty(error);
		pSVar1 = "unknown_error";
		pIVar3 = (Il2CppClass)method.klass;
		if (((pIVar3._2).bitflags1 & 1) == 0) {
			pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
		}
		pIVar3 = pIVar3.rgctx_data[7].klass;
		if (((pIVar3._2).bitflags1 & 1) == 0) {
			pIVar3 = il2cpp_codegen_class_init_checked(pIVar3);
		}
		__this = (AottgChangelogResult<TValue>)il2cpp_codegen_object_new(pIVar3);
		if (((((Il2CppClass)method.klass)._2).bitflags1 & 1) == 0) {
			il2cpp_codegen_class_init_checked((Il2CppClass)method.klass);
		}
		if (bVar2) {
			error = pSVar1;
		}
		__this = new Object();
		__this._State_k__BackingField = 4;
		__this._Value_k__BackingField = value;
		__this._Error_k__BackingField = error;
		__this._IsFromCache_k__BackingField = true;
		__this._IsStale_k__BackingField = true;
		__this._IsRefreshing_k__BackingField = false;
		return __this;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$.ctor: 18 lines keep C-only constructs
	private void Il2CppFullySharedGenericType___ctor(int state, __Il2CppFullySharedGenericType value, String error, bool isFromCache, bool isStale, bool isRefreshing)
	{
		code *pcVar1;
		long lVar2;
		ulong puVar3;
		ulong uVar4;
		long lVar5;
		IntPtr pvVar6;
		byte uVar7;
		int iVar8;
		ulong __dest;
		__Il2CppFullySharedGenericType __src;
		undefined3 in_register_00000089;
		ulong __n;
		undefined7 in_stack_00000011;
		ulong[] apuStack_60 = new ulong[2];
		__Il2CppFullySharedGenericType local_50;
		IntPtr local_48;
		uint local_3c;
		uint local_38;
		int local_34;

		local_3c = CONCAT31(in_register_00000089, isFromCache);
		local_48 = value.monitor;
		local_38 = SUB84(error, 0);
		lVar2 = CONCAT71(in_stack_00000011, isRefreshing);
		__n = (ulong)*(uint)(*(long)(*(long)(*(long)(lVar2 + 0x20) + 0xc0) + 8) + 0xfc);
		lVar5 = -(__n + 0xf & 0xfffffffffffffff0);
		__dest = (ulong)((long)apuStack_60 + lVar5 + 8);
		local_50 = value.klass;
		local_34 = state;
		*(ulong)((long)apuStack_60 + lVar5) = 0x4daf99d;
		base();
		iVar8 = local_34;
		pcVar1 = *(code*)**(ulong*)(*(long)(lVar2 + 0x20) + 0xc0);
		*(ulong)((long)apuStack_60 + lVar5) = 0x4daf9b4;
		(*pcVar1)(this,iVar8);
		lVar2 = *(long)(lVar2 + 0x20);
		__src = (__Il2CppFullySharedGenericType)&local_50;
		if (*(int)(*(long)(*(long)(lVar2 + 0xc0) + 8) + 0x28) < 0) {
			__src = value.klass;
		}
		*(ulong)((long)apuStack_60 + lVar5) = 0x4daf9dc;
		memcpy(__dest, __src, __n);
		lVar2 = *(long)(lVar2 + 0xc0);
		puVar3 = *(ulong*)(lVar2 + 0x10);
		uVar4 = *puVar3;
		if (-1 < *(int)(*(long)(lVar2 + 8) + 0x28)) {
			__dest = (ulong)*__dest;
		}
		pcVar1 = (code)puVar3[2];
		apuStack_60[1] = __dest;
		*(ulong)((long)apuStack_60 + lVar5) = 0x4dafa09;
		(*pcVar1)(uVar4,puVar3,this,apuStack_60 + 1,__dest);
		pvVar6 = local_48;
		lVar2 = CONCAT71(in_stack_00000011, isRefreshing);
		pcVar1 = (code)**(ulong*)(*(long)(*(long)(lVar2 + 0x20) + 0xc0) + 0x18);
		*(ulong)((long)apuStack_60 + lVar5) = 0x4dafa25;
		(*pcVar1)(this,pvVar6);
		uVar7 = (undefined1)local_38;
		pcVar1 = (code)**(ulong*)(*(long)(*(long)(lVar2 + 0x20) + 0xc0) + 0x20);
		*(ulong)((long)apuStack_60 + lVar5) = 0x4dafa3d;
		(*pcVar1)(this,uVar7);
		uVar7 = (undefined1)local_3c;
		pcVar1 = (code)**(ulong*)(*(long)(*(long)(lVar2 + 0x20) + 0xc0) + 0x28);
		*(ulong)((long)apuStack_60 + lVar5) = 0x4dafa55;
		(*pcVar1)(this,uVar7);
		pcVar1 = (code)**(ulong*)(*(long)(*(long)(lVar2 + 0x20) + 0xc0) + 0x30);
		*(ulong)((long)apuStack_60 + lVar5) = 0x4dafa6d;
		(*pcVar1)(this,isStale);
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_State: 1 lines keep C-only constructs
	private int Il2CppFullySharedGenericType__get_State()
	{
		int piVar1;

		piVar1 = il2cpp_codegen_get_instance_field_data_pointer(this, (method.klass.rgctx_data. _7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_._1));
		return *piVar1;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_State: 4 lines keep C-only constructs
	private void Il2CppFullySharedGenericType__set_State(int value)
	{
		IntPtr field;
		int piVar1;

		field = (method.klass.rgctx_data._7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_._1). fields;
		il2cpp_runtime_helper_030d6090(field, 4);
		piVar1 = il2cpp_codegen_get_instance_field_data_pointer(this, field);
		*piVar1 = value;
		il2cpp_runtime_helper_030d5fc0(*(ulong)((long)field + 8), piVar1, 0);
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_Value: 4 lines keep C-only constructs
	private __Il2CppFullySharedGenericType Il2CppFullySharedGenericType__get_Value()
	{
		uint uVar1;
		long lVar2;
		IntPtr __src;
		long in_RDX;
		__Il2CppFullySharedGenericType UVar3;

		lVar2 = *(long)(*(long)(in_RDX + 0x20) + 0xc0);
		uVar1 = *(uint)(*(long)(lVar2 + 8) + 0xfc);
		__src = il2cpp_codegen_get_instance_field_data_pointer(this, (IntPtr)(*(long)(*(long)(lVar2 + 0x38) + 0x80) + 0x20));
		UVar3.klass = memmove(method, __src, (ulong)uVar1);
		UVar3.monitor = UVar3.monitor;
		return UVar3;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_Value: 3 lines keep C-only constructs
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
		*(ulong)(auStack_38 + lVar3 + -8) = 0x4dafb95;
		memcpy(auStack_38 + lVar3, __src, (ulong)size);
		lVar1 = *(long)(*(long)(*(long)(lVar1 + 0xc0) + 0x38) + 0x80);
		*(ulong)(auStack_38 + lVar3 + -8) = 0x4dafbba;
		il2cpp_codegen_write_instance_field_data(this, (IntPtr)(lVar1 + 0x20), auStack_38 + lVar3, size);
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_Error: 1 lines keep C-only constructs
	private String Il2CppFullySharedGenericType__get_Error()
	{
		ulong puVar1;

		puVar1 = il2cpp_codegen_get_instance_field_data_pointer(this, (IntPtr)((long)(method.klass.rgctx_data. _7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_._1 ) + 0x40));
		return (String)*puVar1;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_Error: 4 lines keep C-only constructs
	private void Il2CppFullySharedGenericType__set_Error(String value)
	{
		IntPtr field;
		IntPtr pvVar1;
		ulong puVar2;

		pvVar1 = (method.klass.rgctx_data._7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_._1). fields;
		field = (IntPtr)((long)pvVar1 + 0x40);
		il2cpp_runtime_helper_030d6090(field, 8);
		puVar2 = il2cpp_codegen_get_instance_field_data_pointer(this, field);
		*puVar2 = value;
		il2cpp_runtime_helper_030d5fc0(*(ulong)((long)pvVar1 + 0x48), puVar2, 0);
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_IsFromCache: 1 lines keep C-only constructs
	private bool Il2CppFullySharedGenericType__get_IsFromCache()
	{
		byte puVar1;

		puVar1 = il2cpp_codegen_get_instance_field_data_pointer(this, (IntPtr)((long)(method.klass.rgctx_data. _7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_._1 ) + 0x60));
		return (bool)*puVar1;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_IsFromCache: 4 lines keep C-only constructs
	private void Il2CppFullySharedGenericType__set_IsFromCache(bool value)
	{
		IntPtr pvVar1;
		IntPtr pvVar2;

		pvVar1 = (method.klass.rgctx_data._7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_._1). fields;
		pvVar2 = (IntPtr)((long)pvVar1 + 0x60);
		il2cpp_runtime_helper_030d6090(pvVar2, 1);
		pvVar2 = il2cpp_codegen_get_instance_field_data_pointer(this, pvVar2);
		*(bool)pvVar2 = value;
		il2cpp_runtime_helper_030d5fc0(*(ulong)((long)pvVar1 + 0x68), pvVar2, 0);
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_IsStale: 1 lines keep C-only constructs
	private bool Il2CppFullySharedGenericType__get_IsStale()
	{
		byte puVar1;

		puVar1 = il2cpp_codegen_get_instance_field_data_pointer(this, (IntPtr)((long)(method.klass.rgctx_data. _7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_._1 ) + 0x80));
		return (bool)*puVar1;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_IsStale: 4 lines keep C-only constructs
	private void Il2CppFullySharedGenericType__set_IsStale(bool value)
	{
		IntPtr pvVar1;
		IntPtr pvVar2;

		pvVar1 = (method.klass.rgctx_data._7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_._1). fields;
		pvVar2 = (IntPtr)((long)pvVar1 + 0x80);
		il2cpp_runtime_helper_030d6090(pvVar2, 1);
		pvVar2 = il2cpp_codegen_get_instance_field_data_pointer(this, pvVar2);
		*(bool)pvVar2 = value;
		il2cpp_runtime_helper_030d5fc0(*(ulong)((long)pvVar1 + 0x88), pvVar2, 0);
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$get_IsRefreshing: 1 lines keep C-only constructs
	private bool Il2CppFullySharedGenericType__get_IsRefreshing()
	{
		byte puVar1;

		puVar1 = il2cpp_codegen_get_instance_field_data_pointer(this, (IntPtr)((long)(method.klass.rgctx_data. _7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_._1 ) + 0xa0));
		return (bool)*puVar1;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$set_IsRefreshing: 4 lines keep C-only constructs
	private void Il2CppFullySharedGenericType__set_IsRefreshing(bool value)
	{
		IntPtr pvVar1;
		IntPtr pvVar2;

		pvVar1 = (method.klass.rgctx_data._7_ApplicationManagers_Changelog_AottgChangelogResult_TValue_._1). fields;
		pvVar2 = (IntPtr)((long)pvVar1 + 0xa0);
		il2cpp_runtime_helper_030d6090(pvVar2, 1);
		pvVar2 = il2cpp_codegen_get_instance_field_data_pointer(this, pvVar2);
		*(bool)pvVar2 = value;
		il2cpp_runtime_helper_030d5fc0(*(ulong)((long)pvVar1 + 0xa8), pvVar2, 0);
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$LoadingNoCache: 25 lines keep C-only constructs
	private static AottgChangelogResult<TValue> Il2CppFullySharedGenericType__LoadingNoCache()
	{
		Il2CppMethodPointer pIVar1;
		MethodInfo pMVar2;
		InvokerMethod pIVar3;
		long lVar4;
		Il2CppClass pIVar5;
		Il2CppClass pIVar6;
		AottgChangelogResult<TValue> pAVar7;
		ushort uVar8;
		ulong __n;
		byte puVar9;
		ulong __s;
		byte[] local_68 = new byte[4];
		byte local_48;
		byte local_40;
		uint local_38;
		byte local_33;
		byte local_32;
		byte local_31;

		pIVar5 = (Il2CppClass)method.klass;
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			pIVar6 = (Il2CppClass)method.klass;
		}
		else {
			pIVar6 = pIVar5;
		}
		__n = (ulong)((pIVar5.rgctx_data[1].klass)._2).stack_slot_size;
		lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
		__s = (ulong)((long)local_68 + lVar4);
		*(ulong)((long)local_68 + lVar4 + -8) = 0x4dafe6e;
		memset(__s, 0, __n);
		puVar9 = (byte)((long)local_68 + lVar4);
		if (((pIVar6._2).bitflags1 & 1) == 0) {
			*(ulong)((long)local_68 + lVar4 + -8) = 0x4dafe7f;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
			puVar9 = (byte)((long)local_68 + lVar4);
		}
		pIVar5 = pIVar6.rgctx_data[7].klass;
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			*(ulong)(puVar9 + -8) = 0x4dafe9b;
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
		}
		*(ulong)(puVar9 + -8) = 0x4dafea3;
		pAVar7 = (AottgChangelogResult<TValue>)il2cpp_codegen_object_new(pIVar5);
		pIVar5 = (Il2CppClass)method.klass;
		uVar8._0_1_ = (pIVar5._2).bitflags1;
		uVar8._1_1_ = (pIVar5._2).bitflags2;
		if ((uVar8 & 1) == 0) {
			*(ulong)(puVar9 + -8) = 0x4dafebb;
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			pIVar6 = (Il2CppClass)method.klass;
			uVar8._0_1_ = (pIVar6._2).bitflags1;
			uVar8._1_1_ = (pIVar6._2).bitflags2;
		}
		else {
			pIVar6 = pIVar5;
		}
		pIVar1 = (pIVar5.rgctx_data[8].method).methodPointer;
		if ((uVar8 & 1) == 0) {
			*(ulong)(puVar9 + -8) = 0x4dafee3;
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar6);
			pIVar6 = (Il2CppClass)method.klass;
			uVar8._0_1_ = (pIVar6._2).bitflags1;
			uVar8._1_1_ = (pIVar6._2).bitflags2;
			pMVar2 = pIVar5.rgctx_data[8].method;
		}
		else {
			pMVar2 = pIVar6.rgctx_data[8].method;
		}
		if ((uVar8 & 1) == 0) {
			*(ulong)(puVar9 + -8) = 0x4daff18;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
		}
		if (-1 < (int)pIVar6.rgctx_data[1].type[2].bits) {
			__s = (ulong)*__s;
		}
		local_38 = 0;
		local_33 = 0;
		local_32 = 0;
		local_31 = 1;
		local_68[0] = (byte)&local_38;
		local_68[2] = null;
		local_68[3] = &local_33;
		local_48 = &local_32;
		pIVar3 = pMVar2.invoker_method;
		local_68[1] = (byte)__s;
		local_40 = &local_31;
		*(ulong)(puVar9 + -8) = 0x4daff80;
		(*pIVar3)(pIVar1,pMVar2,pAVar7,local_68,&local_31);
		return pAVar7;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$ReadyFresh: 31 lines keep C-only constructs
	private static AottgChangelogResult<TValue> Il2CppFullySharedGenericType__ReadyFresh(__Il2CppFullySharedGenericType value, bool isFromCache)
	{
		Il2CppMethodPointer pIVar1;
		MethodInfo pMVar2;
		InvokerMethod pIVar3;
		long lVar4;
		ushort uVar8;
		ushort uVar9;
		Il2CppClass pIVar5;
		Il2CppClass pIVar6;
		AottgChangelogResult<TValue> pAVar7;
		undefined7 in_register_00000011;
		long lVar10;
		ulong puVar11;
		__Il2CppFullySharedGenericType __src;
		__Il2CppFullySharedGenericType pUVar12;
		ulong __n;
		ulong __dest;
		byte[] local_78 = new byte[4];
		byte local_58;
		byte local_50;
		__Il2CppFullySharedGenericType local_48;
		uint local_3c;
		uint local_38;
		byte local_33;
		byte local_32;
		byte local_31;

		lVar10 = CONCAT71(in_register_00000011, isFromCache);
		pUVar12 = value.klass;
		pIVar5 = *(Il2CppClass*)(lVar10 + 0x20);
		uVar8._0_1_ = (pIVar5._2).bitflags1;
		uVar8._1_1_ = (pIVar5._2).bitflags2;
		local_38 = value.monitor._0_4_;
		local_48 = pUVar12;
		if ((uVar8 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			pIVar6 = *(Il2CppClass*)(lVar10 + 0x20);
			uVar8._0_1_ = (pIVar6._2).bitflags1;
			uVar8._1_1_ = (pIVar6._2).bitflags2;
		}
		else {
			pIVar6 = pIVar5;
		}
		__n = (ulong)((pIVar5.rgctx_data[1].klass)._2).stack_slot_size;
		lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
		__dest = (ulong)((long)local_78 + lVar4);
		if ((uVar8 & 1) == 0) {
			*(ulong)((long)local_78 + lVar4 + -8) = 0x4db0016;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
			pIVar5 = *(Il2CppClass*)(lVar10 + 0x20);
			puVar11 = (ulong)((long)local_78 + lVar4);
		}
		else {
			pIVar5 = pIVar6;
			puVar11 = __dest;
		}
		__src = (__Il2CppFullySharedGenericType)&local_48;
		if ((int)pIVar6.rgctx_data[1].type[2].bits < 0) {
			__src = pUVar12;
		}
		puVar11[-1] = 0x4db0041;
		memcpy(__dest, __src, __n);
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			puVar11[-1] = 0x4db0052;
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
		}
		pIVar5 = pIVar5.rgctx_data[7].klass;
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			puVar11[-1] = 0x4db006e;
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
		}
		puVar11[-1] = 0x4db0076;
		pAVar7 = (AottgChangelogResult<TValue>)il2cpp_codegen_object_new(pIVar5);
		pIVar5 = *(Il2CppClass*)(lVar10 + 0x20);
		uVar9._0_1_ = (pIVar5._2).bitflags1;
		uVar9._1_1_ = (pIVar5._2).bitflags2;
		if ((uVar9 & 1) == 0) {
			puVar11[-1] = 0x4db008e;
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			pIVar6 = *(Il2CppClass*)(lVar10 + 0x20);
			uVar9._0_1_ = (pIVar6._2).bitflags1;
			uVar9._1_1_ = (pIVar6._2).bitflags2;
		}
		else {
			pIVar6 = pIVar5;
		}
		pIVar1 = (pIVar5.rgctx_data[8].method).methodPointer;
		if ((uVar9 & 1) == 0) {
			puVar11[-1] = 0x4db00b6;
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar6);
			pIVar6 = *(Il2CppClass*)(lVar10 + 0x20);
			uVar9._0_1_ = (pIVar6._2).bitflags1;
			uVar9._1_1_ = (pIVar6._2).bitflags2;
			pMVar2 = pIVar5.rgctx_data[8].method;
		}
		else {
			pMVar2 = pIVar6.rgctx_data[8].method;
		}
		if ((uVar9 & 1) == 0) {
			puVar11[-1] = 0x4db00eb;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
		}
		if (-1 < (int)pIVar6.rgctx_data[1].type[2].bits) {
			__dest = (ulong)*__dest;
		}
		local_3c = 1;
		local_33 = (undefined1)local_38;
		local_32 = 0;
		local_31 = 0;
		local_78[0] = (byte)&local_3c;
		local_78[2] = null;
		local_78[3] = &local_33;
		local_58 = &local_32;
		pIVar3 = pMVar2.invoker_method;
		local_78[1] = (byte)__dest;
		local_50 = &local_31;
		puVar11[-1] = 0x4db0153;
		(*pIVar3)(pIVar1,pMVar2,pAVar7,local_78,&local_31);
		return pAVar7;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$ReadyStaleRefreshing: 27 lines keep C-only constructs
	private static AottgChangelogResult<TValue> Il2CppFullySharedGenericType__ReadyStaleRefreshing(__Il2CppFullySharedGenericType value)
	{
		Il2CppMethodPointer pIVar1;
		MethodInfo pMVar2;
		InvokerMethod pIVar3;
		long lVar4;
		Il2CppClass pIVar5;
		Il2CppClass pIVar6;
		AottgChangelogResult<TValue> pAVar7;
		ushort uVar8;
		ushort uVar9;
		ulong puVar10;
		IntPtr pvVar11;
		__Il2CppFullySharedGenericType __src;
		__Il2CppFullySharedGenericType pUVar12;
		ulong __dest;
		ulong __n;
		byte[] local_78 = new byte[4];
		byte local_58;
		byte local_50;
		__Il2CppFullySharedGenericType local_40;
		uint local_38;
		byte local_33;
		byte local_32;
		byte local_31;

		pvVar11 = value.monitor;
		pUVar12 = value.klass;
		pIVar5 = *(Il2CppClass*)((long)pvVar11 + 0x20);
		uVar8._0_1_ = (pIVar5._2).bitflags1;
		uVar8._1_1_ = (pIVar5._2).bitflags2;
		local_40 = pUVar12;
		if ((uVar8 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			pIVar6 = *(Il2CppClass*)((long)pvVar11 + 0x20);
			uVar8._0_1_ = (pIVar6._2).bitflags1;
			uVar8._1_1_ = (pIVar6._2).bitflags2;
		}
		else {
			pIVar6 = pIVar5;
		}
		__n = (ulong)((pIVar5.rgctx_data[1].klass)._2).stack_slot_size;
		lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
		__dest = (ulong)((long)local_78 + lVar4);
		if ((uVar8 & 1) == 0) {
			*(ulong)((long)local_78 + lVar4 + -8) = 0x4db01e3;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
			pIVar5 = *(Il2CppClass*)((long)pvVar11 + 0x20);
			puVar10 = (ulong)((long)local_78 + lVar4);
		}
		else {
			pIVar5 = pIVar6;
			puVar10 = __dest;
		}
		__src = (__Il2CppFullySharedGenericType)&local_40;
		if ((int)pIVar6.rgctx_data[1].type[2].bits < 0) {
			__src = pUVar12;
		}
		puVar10[-1] = 0x4db020e;
		memcpy(__dest, __src, __n);
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			puVar10[-1] = 0x4db021f;
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
		}
		pIVar5 = pIVar5.rgctx_data[7].klass;
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			puVar10[-1] = 0x4db023b;
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
		}
		puVar10[-1] = 0x4db0243;
		pAVar7 = (AottgChangelogResult<TValue>)il2cpp_codegen_object_new(pIVar5);
		pIVar5 = *(Il2CppClass*)((long)pvVar11 + 0x20);
		uVar9._0_1_ = (pIVar5._2).bitflags1;
		uVar9._1_1_ = (pIVar5._2).bitflags2;
		if ((uVar9 & 1) == 0) {
			puVar10[-1] = 0x4db025b;
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			pIVar6 = *(Il2CppClass*)((long)pvVar11 + 0x20);
			uVar9._0_1_ = (pIVar6._2).bitflags1;
			uVar9._1_1_ = (pIVar6._2).bitflags2;
		}
		else {
			pIVar6 = pIVar5;
		}
		pIVar1 = (pIVar5.rgctx_data[8].method).methodPointer;
		if ((uVar9 & 1) == 0) {
			puVar10[-1] = 0x4db0283;
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar6);
			pIVar6 = *(Il2CppClass*)((long)pvVar11 + 0x20);
			uVar9._0_1_ = (pIVar6._2).bitflags1;
			uVar9._1_1_ = (pIVar6._2).bitflags2;
			pMVar2 = pIVar5.rgctx_data[8].method;
		}
		else {
			pMVar2 = pIVar6.rgctx_data[8].method;
		}
		if ((uVar9 & 1) == 0) {
			puVar10[-1] = 0x4db02b8;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
		}
		if (-1 < (int)pIVar6.rgctx_data[1].type[2].bits) {
			__dest = (ulong)*__dest;
		}
		local_38 = 2;
		local_33 = 1;
		local_32 = 1;
		local_31 = 1;
		local_78[0] = (byte)&local_38;
		local_78[2] = null;
		local_78[3] = &local_33;
		local_58 = &local_32;
		pIVar3 = pMVar2.invoker_method;
		local_78[1] = (byte)__dest;
		local_50 = &local_31;
		puVar10[-1] = 0x4db031f;
		(*pIVar3)(pIVar1,pMVar2,pAVar7,local_78,&local_31);
		return pAVar7;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$FailedNoCache: 29 lines keep C-only constructs
	private static AottgChangelogResult<TValue> Il2CppFullySharedGenericType__FailedNoCache(String error)
	{
		Il2CppMethodPointer pIVar1;
		MethodInfo pMVar2;
		InvokerMethod pIVar3;
		long lVar4;
		Il2CppClass pIVar5;
		AottgChangelogResult<TValue> pAVar6;
		Il2CppClass klass;
		ushort uVar7;
		ulong __n;
		byte puVar8;
		ulong __s;
		String[] local_78 = new String[4];
		byte local_58;
		byte local_50;
		String local_40;
		uint local_38;
		byte local_34;
		byte local_33;
		byte local_32;
		sbyte local_31;

		if (g_data_07541dc6 == false) {
			g_data_07541dc6 = true;
		}
		pIVar5 = (Il2CppClass)method.klass;
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
		}
		__n = (ulong)((pIVar5.rgctx_data[1].klass)._2).stack_slot_size;
		lVar4 = -(__n + 0xf & 0xfffffffffffffff0);
		__s = (ulong)((long)local_78 + lVar4);
		*(ulong)((long)local_78 + lVar4 + -8) = 0x4db03b7;
		memset(__s, 0, __n);
		*(ulong)((long)local_78 + lVar4 + -8) = 0x4db03c1;
		local_31 = String.IsNullOrEmpty(error);
		local_40 = "unknown_error";
		*(ulong)((long)local_78 + lVar4 + -8) = 0x4db03df;
		memset(__s, 0, __n);
		puVar8 = (byte)((long)local_78 + lVar4);
		pIVar5 = (Il2CppClass)method.klass;
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			*(ulong)((long)local_78 + lVar4 + -8) = 0x4db03f4;
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			puVar8 = (byte)((long)local_78 + lVar4);
		}
		pIVar5 = pIVar5.rgctx_data[7].klass;
		if (((pIVar5._2).bitflags1 & 1) == 0) {
			*(ulong)(puVar8 + -8) = 0x4db040d;
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
		}
		*(ulong)(puVar8 + -8) = 0x4db0415;
		pAVar6 = (AottgChangelogResult<TValue>)il2cpp_codegen_object_new(pIVar5);
		pIVar5 = (Il2CppClass)method.klass;
		uVar7._0_1_ = (pIVar5._2).bitflags1;
		uVar7._1_1_ = (pIVar5._2).bitflags2;
		if ((uVar7 & 1) == 0) {
			*(ulong)(puVar8 + -8) = 0x4db042d;
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			klass = (Il2CppClass)method.klass;
			uVar7._0_1_ = (klass._2).bitflags1;
			uVar7._1_1_ = (klass._2).bitflags2;
		}
		else {
			klass = pIVar5;
		}
		pIVar1 = (pIVar5.rgctx_data[8].method).methodPointer;
		if ((uVar7 & 1) == 0) {
			*(ulong)(puVar8 + -8) = 0x4db0455;
			pIVar5 = il2cpp_codegen_class_init_checked(klass);
			klass = (Il2CppClass)method.klass;
			uVar7._0_1_ = (klass._2).bitflags1;
			uVar7._1_1_ = (klass._2).bitflags2;
			pMVar2 = pIVar5.rgctx_data[8].method;
		}
		else {
			pMVar2 = klass.rgctx_data[8].method;
		}
		if ((uVar7 & 1) == 0) {
			*(ulong)(puVar8 + -8) = 0x4db048a;
			klass = il2cpp_codegen_class_init_checked(klass);
		}
		if (-1 < (int)klass.rgctx_data[1].type[2].bits) {
			__s = (ulong)*__s;
		}
		if (local_31 != false) {
			error = local_40;
		}
		local_38 = 3;
		local_34 = 0;
		local_33 = 0;
		local_32 = 0;
		local_78[0] = (String)&local_38;
		local_78[3] = (String)&local_34;
		local_58 = &local_33;
		pIVar3 = pMVar2.invoker_method;
		local_78[1] = (String)__s;
		local_78[2] = error;
		local_50 = &local_32;
		*(ulong)(puVar8 + -8) = 0x4db04fc;
		(*pIVar3)(pIVar1,pMVar2,pAVar6,local_78,&local_32);
		return pAVar6;
	}

	// ApplicationManagers.Changelog.AottgChangelogResult<__Il2CppFullySharedGenericType>$$FailedRefreshStale: 23 lines keep C-only constructs
	private static AottgChangelogResult<TValue> Il2CppFullySharedGenericType__FailedRefreshStale(__Il2CppFullySharedGenericType value, String error)
	{
		Il2CppMethodPointer pIVar1;
		MethodInfo pMVar2;
		InvokerMethod pIVar3;
		String pSVar4;
		ushort uVar10;
		bool bVar5;
		Il2CppClass pIVar6;
		ulong uVar7;
		Il2CppClass pIVar8;
		AottgChangelogResult<TValue> pAVar9;
		IntPtr __dest;
		__Il2CppFullySharedGenericType __src;
		__Il2CppFullySharedGenericType pUVar11;
		ulong __n;
		ulong __s;
		String[] local_88 = new String[4];
		byte local_68;
		byte local_60;
		__Il2CppFullySharedGenericType local_58;
		String local_50;
		String local_48;
		String local_40;
		uint local_38;
		byte local_33;
		byte local_32;
		byte local_31;

		local_48 = value.monitor;
		pUVar11 = value.klass;
		local_58 = pUVar11;
		if (g_data_07541dc7 == false) {
			g_data_07541dc7 = true;
		}
		pIVar6 = (*(ulong)((sbyte)error + 0x20));
		local_50 = error;
		if (((pIVar6._2).bitflags1 & 1) == 0) {
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
			pIVar8 = (*(ulong)((sbyte)error + 0x20));
		}
		else {
			pIVar8 = pIVar6;
		}
		__n = (ulong)((pIVar6.rgctx_data[1].klass)._2).stack_slot_size;
		uVar7 = __n + 0xf & 0xfffffffffffffff0;
		__dest = (IntPtr)((long)local_88 - uVar7);
		__s = (ulong)((long)__dest - uVar7);
		__s[-1] = 0x4db05a7;
		memset(__s, 0, __n);
		if (((pIVar8._2).bitflags1 & 1) == 0) {
			__s[-1] = 0x4db05b9;
			pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
		}
		__src = (__Il2CppFullySharedGenericType)&local_58;
		if ((int)pIVar8.rgctx_data[1].type[2].bits < 0) {
			__src = pUVar11;
		}
		__s[-1] = 0x4db05de;
		memcpy(__dest, __src, __n);
		pSVar4 = local_48;
		__s[-1] = 0x4db05e9;
		bVar5 = String.IsNullOrEmpty(pSVar4);
		local_40 = "unknown_error";
		__s[-1] = 0x4db0608;
		memcpy(__s, __dest, __n);
		pSVar4 = local_50;
		pIVar6 = (*(ulong)((sbyte)local_50 + 0x20));
		if (((pIVar6._2).bitflags1 & 1) == 0) {
			__s[-1] = 0x4db0621;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
		}
		pIVar6 = pIVar6.rgctx_data[7].klass;
		if (((pIVar6._2).bitflags1 & 1) == 0) {
			__s[-1] = 0x4db063a;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
		}
		__s[-1] = 0x4db0642;
		pAVar9 = (AottgChangelogResult<TValue>)il2cpp_codegen_object_new(pIVar6);
		pIVar6 = (*(ulong)((sbyte)pSVar4 + 0x20));
		uVar10._0_1_ = (pIVar6._2).bitflags1;
		uVar10._1_1_ = (pIVar6._2).bitflags2;
		if ((uVar10 & 1) == 0) {
			__s[-1] = 0x4db065a;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
			pIVar8 = (*(ulong)((sbyte)pSVar4 + 0x20));
			uVar10._0_1_ = (pIVar8._2).bitflags1;
			uVar10._1_1_ = (pIVar8._2).bitflags2;
		}
		else {
			pIVar8 = pIVar6;
		}
		pIVar1 = (pIVar6.rgctx_data[8].method).methodPointer;
		if ((uVar10 & 1) == 0) {
			__s[-1] = 0x4db0682;
			pIVar6 = il2cpp_codegen_class_init_checked(pIVar8);
			pIVar8 = (*(ulong)((sbyte)pSVar4 + 0x20));
			uVar10._0_1_ = (pIVar8._2).bitflags1;
			uVar10._1_1_ = (pIVar8._2).bitflags2;
			pMVar2 = pIVar6.rgctx_data[8].method;
		}
		else {
			pMVar2 = pIVar8.rgctx_data[8].method;
		}
		if ((uVar10 & 1) == 0) {
			__s[-1] = 0x4db06b7;
			pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
		}
		local_88[1] = (String)__s;
		if (-1 < (int)pIVar8.rgctx_data[1].type[2].bits) {
			local_88[1] = (String)*__s;
		}
		local_88[2] = local_48;
		if (bVar5) {
			local_88[2] = local_40;
		}
		local_38 = 4;
		local_33 = 1;
		local_32 = 1;
		local_31 = 0;
		local_88[0] = (String)&local_38;
		local_88[3] = (String)&local_33;
		local_68 = &local_32;
		pIVar3 = pMVar2.invoker_method;
		local_60 = &local_31;
		__s[-1] = 0x4db0728;
		(*pIVar3)(pIVar1,pMVar2,pAVar9,local_88,&local_31);
		return pAVar9;
	}
}
