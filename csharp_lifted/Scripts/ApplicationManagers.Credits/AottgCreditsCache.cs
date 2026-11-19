// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Credits.AottgCreditsCache
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Credits/AottgCreditsCache.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Credits;

[Token(Token = "0x2000995")]
public sealed class AottgCreditsCache
{
	[Token(Token = "0x400305D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly TimeSpan DefaultTtl;

	[Token(Token = "0x400305E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly TimeSpan _ttl;

	[Token(Token = "0x400305F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly Func<DateTimeOffset> _now;

	[Token(Token = "0x4003060")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly Action<Action<AottgCreditsFetchResponse>> _fetch;

	[Token(Token = "0x4003061")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private readonly List<Action<AottgCreditsResult>> _subscribers;

	[Token(Token = "0x4003062")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private AottgCreditsResponse _cachedCredits;

	[Token(Token = "0x4003063")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private DateTimeOffset _cachedAt;

	[Token(Token = "0x4003064")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private bool _inFlight;

	[Token(Token = "0x17000F5D")]
	public bool HasCache
	{
		[Token(Token = "0x6005975")]
		[Address(RVA = "0x5D21A10", Offset = "0x5D20A10", VA = "0x5D21A10")]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsCache.c (ApplicationManagers.Credits.AottgCreditsCache$$get_HasCache): clean
			return this._cachedCredits != null;
		}
	}

	[Token(Token = "0x17000F5E")]
	public bool IsInFlight
	{
		[Token(Token = "0x6005976")]
		[Address(RVA = "0x5D21A20", Offset = "0x5D20A20", VA = "0x5D21A20")]
		get
		{
			// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsCache.c (ApplicationManagers.Credits.AottgCreditsCache$$get_IsInFlight): clean
			return this._inFlight;
		}
	}

	[Token(Token = "0x6005974")]
	[Address(RVA = "0x5D217D0", Offset = "0x5D207D0", VA = "0x5D217D0")]
	public AottgCreditsCache(Action<Action<AottgCreditsFetchResponse>> fetch, [Optional] Func<DateTimeOffset> now, [Optional] TimeSpan? ttl)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsCache.c (ApplicationManagers.Credits.AottgCreditsCache$$.ctor): 7 lines keep C-only constructs
		object @object;
		List<Action<AottgCreditsResult>> __this_00;
		ApplicationManagers_Credits_AottgCreditsCache___c_StaticFields pAVar1;
		Il2CppClass klass;
		ArgumentNullException __this_01;
		String paramName;
		MethodInfo lastManagedFrame;
		TimeSpan SVar2;

		SVar2 = ttl.value._ticks;
		__this_00 = new List<Action<AottgCreditsResult>>();
		this._subscribers = __this_00;
		base();
		if (fetch == null) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentNullException));
			__this_01 = (ArgumentNullException)il2cpp_codegen_object_new(klass);
			paramName = il2cpp_codegen_get_runtime_metadata(&"fetch");
			__this_01 = new ArgumentNullException(paramName);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_ApplicationManagers_Credits_AottgCreditsCache_ctor);
			throw (object)__this_01;
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this._fetch = fetch;
		if (now == null) {
			if ((typeof(AottgCreditsCache.c)._2).cctor_finished_or_no_cctor == 0) {
				pAVar1 = typeof(AottgCreditsCache.c).static_fields;
				now = pAVar1.__9__8_0;
			}
			else {
				pAVar1 = typeof(AottgCreditsCache.c).static_fields;
				now = pAVar1.__9__8_0;
			}
			if (now == null) {
				if (((typeof(AottgCreditsCache.c))._2). cctor_finished_or_no_cctor == 0) {
					pAVar1 = typeof(AottgCreditsCache.c).static_fields;
				}
				@object = (object)pAVar1.__9;
				now = new Func<DateTimeOffset>(@object, (intptr_t)MethodInfo_ApplicationManagers_Credits_AottgCreditsCache_c_ctor_b__8_0);
				pAVar1 = typeof(AottgCreditsCache.c).static_fields;
				pAVar1.__9__8_0 = now;
			}
		}
		this._now = now;
		if (ttl.hasValue == false) {
			if ((typeof(AottgCreditsCache)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(AottgCreditsCache)) ;
			}
			SVar2._ticks =(TimeSpan)(AottgCreditsCache.DefaultTtl)._ticks;
		}
		this._ttl._ticks = (int64_t)SVar2._ticks;
		return;
	}

	[Token(Token = "0x6005977")]
	[Address(RVA = "0x5D21A30", Offset = "0x5D20A30", VA = "0x5D21A30")]
	public void Clear()
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsCache.c (ApplicationManagers.Credits.AottgCreditsCache$$Clear): 3 lines keep C-only constructs
		int piVar1;
		int length;
		List<Action<AottgCreditsResult>> pSVar2;

		this._cachedCredits = null;
		this._cachedAt._dateTime._dateData = 0;
		*(ulong)&this._cachedAt._offsetMinutes = 0;
		this._inFlight = false;
		pSVar2 = this._subscribers;
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		piVar1 = &pSVar2._version;
		*piVar1 = *piVar1 + 1;
		length = pSVar2._size;
		pSVar2._size = 0;
		if (length < 1) {
			return;
		}
		Array.Clear((Array)pSVar2._items, 0, length);
		return;
	}

	[Token(Token = "0x6005978")]
	[Address(RVA = "0x5D21AA0", Offset = "0x5D20AA0", VA = "0x5D21AA0")]
	public void Get(Action<AottgCreditsResult> onResult, bool forceRefresh = false)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsCache.c (ApplicationManagers.Credits.AottgCreditsCache$$Get): 6 lines keep C-only constructs
		int piVar1;
		sbyte cVar2;
		uint uVar3;
		AottgCreditsResponse pAVar4;
		List<Action<AottgCreditsResult>> __this_00;
		Action<AottgCreditsResult>[] pSVar5;
		bool bVar7;
		Action<AottgCreditsFetchResponse> __this_01;
		AottgCreditsResult __this_02;

		if (onResult == null) {
			return;
		}
		if ((!forceRefresh) &&(bVar7 = this.IsFresh())) {
			pAVar4 = this._cachedCredits;
			__this_01 = new Action<AottgCreditsFetchResponse>();
			*(int)&__this_01.method_ptr = 1;
			__this_01.invoke_impl = (intptr_t)pAVar4;
			__this_01.m_target = null;
			*(ushort)&__this_01.method = 1;
			*(bool)((long)&__this_01.method + 2) = false;
	label_05e21d0f: ;
			(*(code)onResult.invoke_impl)(onResult.method_code,__this_01,onResult.method);
			return;
		}
		pAVar4 = this._cachedCredits;
		if (pAVar4 == null) {
			bVar7 = false;
			__this_02 = new AottgCreditsResult();
			__this_02._State_k__BackingField = 0;
			__this_02._Credits_k__BackingField = null;
		}
		else {
			__this_02 = new AottgCreditsResult();
			__this_02._State_k__BackingField = 2;
			__this_02._Credits_k__BackingField = pAVar4;
			bVar7 = true;
		}
		__this_02._Error_k__BackingField = null;
		__this_02._IsFromCache_k__BackingField = bVar7;
		__this_02._IsStale_k__BackingField = bVar7;
		__this_02._IsRefreshing_k__BackingField = true;
		(*(code)onResult.invoke_impl)(onResult.method_code,__this_02,onResult.method);
		__this_00 = this._subscribers;
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pSVar5 = __this_00._items;
			if (pSVar5 != null) {
				uVar3 = __this_00._size;
				if (uVar3 < (uint)pSVar5.Length) {
					__this_00._size = uVar3 + 1;
					pSVar5[(int)uVar3] = onResult;
					cVar2 = this._inFlight;
				}
				else {
					__this_00.AddWithResize((object)onResult);
					cVar2 = this._inFlight;
				}
				if (cVar2 != false) {
					return;
				}
				this._inFlight = true;
				onResult = (Action<AottgCreditsResult>)this._fetch;
				__this_01 = new Action<AottgCreditsFetchResponse>((object)this, (intptr_t)MethodInfo_ApplicationManagers_Credits_AottgCreditsCache_CompleteFetch);
				if (onResult != null) goto label_05e21d0f;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005979")]
	[Address(RVA = "0x5D21D30", Offset = "0x5D20D30", VA = "0x5D21D30")]
	private bool IsFresh()
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsCache.c (ApplicationManagers.Credits.AottgCreditsCache$$IsFresh): 7 lines keep C-only constructs
		Func<DateTimeOffset> pSVar1;
		TimeSpan t2;
		byte[] auVar2 = new byte[12];
		ulong uVar3;
		ushort uVar4;
		bool bVar5;
		TimeSpan t1;
		DateTimeOffset right;
		DateTimeOffset left;

		if (this._cachedCredits == null) {
			return false;
		}
		pSVar1 = this._now;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		auVar2 = (*(code)pSVar1.invoke_impl)(pSVar1.method_code,pSVar1.method);
		uVar3 = this._cachedAt._dateTime;
		uVar4 = this._cachedAt._offsetMinutes;
		right._offsetMinutes = uVar4;
		right._dateTime._dateData = (DateTime)(DateTime)uVar3;
		right._10_6_ = 0;
		left._12_4_ = 0;
		left._dateTime._dateData = (DateTime)(DateTime)auVar2._0_8_;
		left._offsetMinutes = auVar2._8_2_;
		left._10_2_ = auVar2._10_2_;
		t1 = (left - right);
		t2._ticks = (TimeSpan)this._ttl._ticks;
		bVar5 = (t1 < t2);
		return bVar5;
	}

	[Token(Token = "0x600597A")]
	[Address(RVA = "0x5D21F90", Offset = "0x5D20F90", VA = "0x5D21F90")]
	private void CompleteFetch(AottgCreditsFetchResponse response)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsCache.c (ApplicationManagers.Credits.AottgCreditsCache$$CompleteFetch): 7 lines keep C-only constructs
		int piVar1;
		int length;
		AottgCreditsResponse pAVar2;
		Func<DateTimeOffset> pSVar3;
		String pSVar4;
		List<Action<AottgCreditsResult>> pSVar5;
		object pIVar6;
		AottgCreditsResult __this_00;
		Object[] pSVar7;
		ulong uVar8;
		bool bVar9;
		String* ppSVar10;
		ulong uVar11;
		unkbyte10 Var12;

		this._inFlight = false;
		if (response == null) {
			pAVar2 = this._cachedCredits;
			ppSVar10 = &"unknown_error";
	joined_r0x05e22116: ;
			if (pAVar2 == null) {
				pSVar4 = *ppSVar10;
				__this_00 = new AottgCreditsResult();
				__this_00._State_k__BackingField = 3;
				__this_00._Credits_k__BackingField = null ;
				__this_00._Error_k__BackingField = pSVar4;
				goto label_05e2217e;
			}
			pSVar4 = *ppSVar10;
			__this_00 = new AottgCreditsResult();
			__this_00._State_k__BackingField = 4;
			__this_00._Credits_k__BackingField = pAVar2;
			__this_00._Error_k__BackingField = pSVar4;
			bVar9 = true;
		}
		else {
			if ((response._Success_k__BackingField == false) ||(pAVar2 = response._Credits_k__BackingField, pAVar2 == null)) {
				pAVar2 = this._cachedCredits;
				ppSVar10 = &response._Error_k__BackingField;
				goto joined_r0x05e22116;
			}
			this._cachedCredits = pAVar2;
			pSVar3 = this._now;
			if (pSVar3 == null) goto label_05e22229;
			Var12 = (*(code)pSVar3.invoke_impl)(pSVar3.method_code);
			this._cachedAt._dateTime = (DateTime)(long)Var12;
			this._cachedAt._offsetMinutes = (short)((unkuint10)Var12 >> 0x40);
			pAVar2 = this._cachedCredits;
			__this_00 = new AottgCreditsResult();
			__this_00._State_k__BackingField = 1;
			__this_00._Credits_k__BackingField = pAVar2;
			__this_00._Error_k__BackingField = null;
	label_05e2217e: ;
			bVar9 = false;
		}
		__this_00._IsFromCache_k__BackingField = bVar9;
		__this_00._IsStale_k__BackingField = bVar9;
		__this_00._IsRefreshing_k__BackingField = false;
		pSVar5 = this._subscribers;
		if (pSVar5 != null) {
			pSVar7 = pSVar5.ToArray();
			pSVar5 = this._subscribers;
			if (pSVar5 != null) {
				piVar1 = &pSVar5._version;
				*piVar1 = *piVar1 + 1;
				length = pSVar5._size;
				pSVar5._size = 0;
				if (0 < length) {
					Array.Clear((Array)pSVar5._items, 0, length);
				}
				if (pSVar7 != null) {
					if (0 < (int)pSVar7.Length) {
						uVar8 = pSVar7.Length & 0xffffffff;
						uVar11 = 0;
						do {
							if (uVar8 <= uVar11) {
								throw new IndexOutOfRangeException();
							}
							pIVar6 = pSVar7[uVar11];
							if (pIVar6 != null) {
								if (pIVar6 == null) goto label_05e22229;
								(*pIVar6[1].monitor)(pIVar6[4].klass,__this_00,pIVar6[2].monitor);
								uVar8 = (ulong)(uint)pSVar7.Length;
							}
							uVar11 = uVar11 + 1;
						} while ((long)uVar11 < (long)(int)uVar8);
					}
					return;
				}
			}
		}
	label_05e22229: ;
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsCache.c.

	// ApplicationManagers.Credits.AottgCreditsCache$$.cctor: clean
	static AottgCreditsCache()
	{
		TimeSpan SVar1;

		SVar1 = TimeSpan.FromMinutes(30.0);
		(AottgCreditsCache.DefaultTtl)._ticks =(int64_t)SVar1._ticks;
		return;
	}

	// ApplicationManagers.Credits.AottgCreditsCache.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgCreditsCache.c();
		AottgCreditsCache.c.__9 =(AottgCreditsCache.c)__this;
		return;
	}

	// ApplicationManagers.Credits.AottgCreditsCache.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.Credits.AottgCreditsCache.<>c$$<.ctor>b__8_0: clean
	private DateTimeOffset c__ctor_b__8_0()
	{
		uint uVar1;
		DateTimeOffset SVar2;

		if (Il2CppMethodInitialized_075484bc == false) {
			Il2CppMethodInitialized_075484bc = true;
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
}
