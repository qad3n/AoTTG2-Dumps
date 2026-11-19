// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.PublicProfiles.AottgPublicProfileCache
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileCache.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace ApplicationManagers.PublicProfiles;

[Token(Token = "0x200098B")]
public sealed class AottgPublicProfileCache
{
	[Token(Token = "0x200098C")]
	private sealed class Entry
	{
		[Token(Token = "0x4003041")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly List<Action<AottgPublicProfileFetchResponse>> Subscribers;

		[Token(Token = "0x4003042")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public AottgPublicProfileFetchResponse Response;

		[Token(Token = "0x4003043")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public DateTimeOffset CachedAt;

		[Token(Token = "0x4003044")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public bool InFlight;

		[Token(Token = "0x600593E")]
		[Address(RVA = "0x5D1F6D0", Offset = "0x5D1E6D0", VA = "0x5D1F6D0")]
		public bool HasFreshValue(DateTimeOffset now)
		{
			// Lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileCache.c (ApplicationManagers.PublicProfiles.AottgPublicProfileCache.Entry$$HasFreshValue): 4 lines keep C-only constructs
			uint uVar1;
			AottgPublicProfileFetchResponse pAVar2;
			TimeSpan t2;
			ulong uVar3;
			ushort uVar4;
			bool bVar5;
			ApplicationManagers_PublicProfiles_AottgPublicProfileCache_StaticFields pAVar6;
			TimeSpan t1;
			DateTimeOffset right;
			DateTimeOffset left;

			pAVar2 = this.Response;
			if (pAVar2 == null) {
				return false;
			}
			uVar1 = (typeof(AottgPublicProfileCache)._2).cctor_finished_or_no_cctor ;
			if (pAVar2._Success_k__BackingField == false) {
				if (uVar1 == 0) {
				}
				pAVar6 = (ApplicationManagers_PublicProfiles_AottgPublicProfileCache_StaticFields)&AottgPublicProfileCache.FailureTtl;
			}
			else {
				if (uVar1 == 0) {
				}
				pAVar6 = typeof(AottgPublicProfileCache).static_fields;
			}
			t2._ticks = (TimeSpan)(pAVar6.SuccessTtl)._ticks;
			uVar3 = this.CachedAt._dateTime;
			uVar4 = this.CachedAt._offsetMinutes;
			right._offsetMinutes = uVar4;
			right._dateTime._dateData = (DateTime)(DateTime)uVar3;
			right._10_6_ = 0;
			left._12_4_ = 0;
			left._dateTime._dateData =((DateTime)now._dateTime._dateData);
			left._offsetMinutes = now._offsetMinutes;
			left._10_2_ = now._10_2_;
			t1 = (left - right);
			bVar5 = (t1 < t2);
			return bVar5;
		}

		[Token(Token = "0x600593F")]
		[Address(RVA = "0x5D1F650", Offset = "0x5D1E650", VA = "0x5D1F650")]
		public Entry()
		{
			// Lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileCache.c (ApplicationManagers.PublicProfiles.AottgPublicProfileCache.Entry$$.ctor): 1 lines keep C-only constructs
			List<Action<AottgPublicProfileFetchResponse>> __this_00;

			__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<Action<AottgPublicProfileFetchResponse>>));
			__this_00 = new List<object>();
			this.Subscribers = __this_00;
			base();
			return;
		}
	}

	[Token(Token = "0x400303C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	public static readonly TimeSpan SuccessTtl;

	[Token(Token = "0x400303D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly TimeSpan FailureTtl;

	[Token(Token = "0x400303E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private readonly Action<string, Action<AottgPublicProfileFetchResponse>> _fetch;

	[Token(Token = "0x400303F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private readonly Func<DateTimeOffset> _now;

	[Token(Token = "0x4003040")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private readonly Dictionary<string, Entry> _entries;

	[Token(Token = "0x6005939")]
	[Address(RVA = "0x5D1F050", Offset = "0x5D1E050", VA = "0x5D1F050")]
	public AottgPublicProfileCache(Action<string, Action<AottgPublicProfileFetchResponse>> fetch, [Optional] Func<DateTimeOffset> now)
	{
		// Lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileCache.c (ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$.ctor): 7 lines keep C-only constructs
		object @object;
		Dictionary<string, AottgPublicProfileCache.Entry> __this_00;
		ApplicationManagers_PublicProfiles_AottgPublicProfileCache___c_StaticFields pAVar1;
		Il2CppClass klass;
		ArgumentNullException __this_01;
		String paramName;
		MethodInfo lastManagedFrame;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<string, AottgPublicProfileCache.Entry>));
		__this_00 = new Dictionary<@object, @object>();
		this._entries = __this_00;
		base();
		if (fetch == null) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentNullException));
			__this_01 = (ArgumentNullException)il2cpp_codegen_object_new(klass);
			paramName = il2cpp_codegen_get_runtime_metadata(&"fetch");
			__this_01 = new ArgumentNullException(paramName);
			lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_ctor);
			throw (object)__this_01;
		}
		if (this == null) {
			throw new NullReferenceException();
		}
		this._fetch = fetch;
		if (now == null) {
			if ((typeof(AottgPublicProfileCache.c)._2).cctor_finished_or_no_cctor == 0) {
				pAVar1 = typeof(AottgPublicProfileCache.c).static_fields;
				now = pAVar1.__9__5_0;
			}
			else {
				pAVar1 = typeof(AottgPublicProfileCache.c).static_fields;
				now = pAVar1.__9__5_0;
			}
			if (now == null) {
				if (((typeof(AottgPublicProfileCache.c))._2). cctor_finished_or_no_cctor == 0) {
					pAVar1 = typeof(AottgPublicProfileCache.c).static_fields;
				}
				@object = (object)pAVar1.__9;
				now = new Func<DateTimeOffset>(@object, (intptr_t)MethodInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c_ctor_b__5_0);
				pAVar1 = typeof(AottgPublicProfileCache.c).static_fields;
				pAVar1.__9__5_0 = now;
			}
		}
		this._now = now;
		return;
	}

	[Token(Token = "0x600593A")]
	[Address(RVA = "0x5D1F230", Offset = "0x5D1E230", VA = "0x5D1F230")]
	public void Clear()
	{
		// Lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileCache.c (ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$Clear): clean
		Dictionary<object, object> __this_00;

		__this_00 = (Dictionary<object, object>)this._entries;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Clear();
		return;
	}

	[Token(Token = "0x600593B")]
	[Address(RVA = "0x5D1F270", Offset = "0x5D1E270", VA = "0x5D1F270")]
	public void Get(string accountId, Action<AottgPublicProfileFetchResponse> onResult)
	{
		// Lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileCache.c (ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$Get): 12 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		code *vtableDispatch;
		Dictionary<object, object> pSVar3;
		Action<AottgPublicProfileFetchResponse>[] pSVar4;
		System_Action_string__Action_AottgPublicProfileFetchResponse___o pSVar5;
		String pSVar6;
		bool bVar7;
		AottgPublicProfileCache.c__DisplayClass7_0 __this_00;
		AottgPublicProfileFetchResponse pAVar8;
		AottgPublicProfileCache.Entry pAVar9;
		List<Action<AottgPublicProfileFetchResponse>> pSVar10;
		Action<AottgPublicProfileFetchResponse> __this_01;
		Func<DateTimeOffset> method_00;
		String* targetAddress;
		DateTimeOffset now;
		AottgPublicProfileCache.Entry pAStack_38;

		pAStack_38 = null;
		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgPublicProfileCache.c__DisplayClass7_0));
		__this_00 = new Object();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			targetAddress = &__this_00.accountId;
			__this_00.accountId = accountId;
			bVar7 = String.IsNullOrEmpty(__this_00.accountId);
			if (bVar7) {
				if (onResult == null) {
					return;
				}
				pAVar8 = AottgPublicProfileFetchResponse.Fail("bad_account_id");
				vtableDispatch = (code)onResult.invoke_impl;
				(*vtableDispatch)(onResult.method_code,pAVar8,onResult.method,vtableDispatch);
				return;
			}
			pSVar3 = (Dictionary<object, object>)this._entries;
			if (pSVar3 != null) {
				bVar7 = pSVar3.TryGetValue((object)*targetAddress, (object*)&pAStack_38);
				if (!bVar7) {
					pAVar9 = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgPublicProfileCache.Entry));
					pSVar10 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<Action<AottgPublicProfileFetchResponse>>));
					pSVar10 = new List<object>();
					pAVar9.Subscribers = pSVar10;
					pAVar9 = new Object();
					pSVar3 = (Dictionary<object, object>)this._entries;
					pAStack_38 = pAVar9;
					if (pSVar3 == null) goto label_05e1f59b;
					pSVar3.set_Item((object)*targetAddress, (object)pAVar9);
				}
				pAVar9 = pAStack_38;
				method_00 = this._now;
				if ((method_00 != null) &&(now = (DateTimeOffset)(*(code)method_00.invoke_impl)(((_union_14)&method_00.method_code).genericMethod,(Il2CppType)method_00.method), pAVar9 != null)) {
					bVar7 = pAVar9.HasFreshValue(now);
					if (bVar7) {
						if (onResult != null) {
							if (pAStack_38 == null) goto label_05e1f59b;
							(*(code)onResult.invoke_impl)(onResult.method_code,pAStack_38.Response,onResult.method) ;
						}
					}
					else {
						if (onResult != null) {
							if ((pAStack_38 == null) ||(pSVar10 = pAStack_38.Subscribers, pSVar10 == null)) goto label_05e1f59b;
							piVar1 = &pSVar10._version;
							*piVar1 = *piVar1 + 1;
							pSVar4 = pSVar10._items;
							if (pSVar4 == null) goto label_05e1f59b;
							uVar2 = pSVar10._size;
							if (uVar2 < (uint)pSVar4.Length) {
								pSVar10._size = uVar2 + 1;
								pSVar4[(int)uVar2] = onResult;
							}
							else {
								pSVar10.AddWithResize((object)onResult);
							}
						}
						if (pAStack_38 == null) goto label_05e1f59b;
						if (pAStack_38.InFlight == false) {
							pAStack_38.InFlight = true;
							pSVar5 = this._fetch;
							pSVar6 = __this_00.accountId;
							__this_01 = new Action<AottgPublicProfileFetchResponse>((object)__this_00, (intptr_t) MethodInfo_ApplicationManagers_PublicProfiles_AottgPublicProfileCache_c__DisplayClass7_0_Get_b__0);
							if (pSVar5 == null) goto label_05e1f59b;
							(*(code)pSVar5.invoke_impl)(pSVar5.method_code,pSVar6,__this_01,pSVar5.method);
						}
					}
					return;
				}
			}
		}
	label_05e1f59b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600593C")]
	[Address(RVA = "0x5D1F7E0", Offset = "0x5D1E7E0", VA = "0x5D1F7E0")]
	private void Complete(string accountId, AottgPublicProfileFetchResponse response)
	{
		// Lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileCache.c (ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$Complete): 4 lines keep C-only constructs
		int piVar1;
		int length;
		Dictionary<object, object> __this_00;
		Func<DateTimeOffset> pSVar2;
		Il2CppClass pIVar3;
		object pIVar4;
		bool bVar5;
		Object[] pSVar6;
		ulong uVar7;
		ulong uVar8;
		unkbyte10 Var9;
		object local_20;

		local_20 = null;
		__this_00 = (Dictionary<object, object>)this._entries;
		if (__this_00 != null) {
			bVar5 = __this_00.TryGetValue((object)accountId, ref local_20);
			pIVar4 = local_20;
			if (!bVar5) {
				return;
			}
			if (local_20 != null) {
				*(byte)&local_20[3].klass = 0;
				if (response == null) {
					response = AottgPublicProfileFetchResponse.Fail("unknown_error");
				}
				pIVar4[1].monitor = response;
				pIVar4 = local_20;
				pSVar2 = this._now;
				if (((((pSVar2 != null) &&(Var9 = (*(code)pSVar2.invoke_impl)(pSVar2.method_code,pSVar2.method), pIVar4 != null)) &&(*(unkbyte10)(pIVar4 + 2) = Var9, local_20 != null)) &&((local_20[1].klass != null &&(pSVar6 = local_20[1].klass.ToArray(), local_20 != null)))) &&(pIVar3 = local_20[1].klass, pIVar3 != null)) {
					piVar1 = (int)((long)&(pIVar3._1).namespaze + 4);
					*piVar1 = *piVar1 + 1;
					length = *(int)&(pIVar3._1).namespaze;
					*(uint)&(pIVar3._1).namespaze = 0;
					if (0 < length) {
						Array.Clear((Array)(pIVar3._1).name, 0, length);
					}
					if (pSVar6 != null) {
						if ((int)pSVar6.Length < 1) {
							return;
						}
						uVar7 = pSVar6.Length & 0xffffffff;
						uVar8 = 0;
						do {
							if (uVar7 <= uVar8) {
								throw new IndexOutOfRangeException();
							}
							pIVar4 = pSVar6[uVar8];
							if (pIVar4 != null) {
								if ((local_20 == null) || (pIVar4 == null)) break;
								(*pIVar4[1].monitor)(pIVar4[4].klass,local_20[1].monitor,pIVar4[2].monitor);
								uVar7 = (ulong)(uint)pSVar6.Length;
							}
							uVar8 = uVar8 + 1;
							if ((long)(int)uVar7 <= (long)uVar8) {
								return;
							}
						} while(true);
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileCache.c.

	// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c__DisplayClass7_0$$.ctor: clean
	private void c__DisplayClass7_0__ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.PublicProfiles.AottgPublicProfileCache$$.cctor: clean
	static AottgPublicProfileCache()
	{
		TimeSpan SVar1;

		SVar1 = TimeSpan.FromMinutes(10.0);
		(AottgPublicProfileCache.SuccessTtl). _ticks = (int64_t)SVar1._ticks;
		SVar1 = TimeSpan.FromSeconds(45.0);
		(AottgPublicProfileCache.FailureTtl). _ticks = (int64_t)SVar1._ticks;
		return;
	}

	// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new AottgPublicProfileCache.c();
		AottgPublicProfileCache.c.__9 =(AottgPublicProfileCache.c)__this;
		return;
	}

	// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c$$<.ctor>b__5_0: clean
	private DateTimeOffset c__ctor_b__5_0()
	{
		uint uVar1;
		DateTimeOffset SVar2;

		if (Il2CppMethodInitialized_075484a4 == false) {
			Il2CppMethodInitialized_075484a4 = true;
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

	// ApplicationManagers.PublicProfiles.AottgPublicProfileCache.<>c__DisplayClass7_0$$<Get>b__0: clean
	private void c__DisplayClass7_0__Get_b__0(AottgPublicProfileFetchResponse response)
	{
		AottgPublicProfileCache __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Complete(this.accountId, response);
		return;
	}
}
