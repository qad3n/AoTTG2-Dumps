// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Tweening.GisketchMotionDriver
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotionDriver.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using DG.Tweening;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Tweening;

[Token(Token = "0x200001F")]
public sealed class GisketchMotionDriver : MonoBehaviour
{
	[Token(Token = "0x2000020")]
	private sealed class ActiveTween
	{
		[Token(Token = "0x4000091")]
		[FieldOffset(Offset = "0x10")]
		public readonly Tween Tween;

		[Token(Token = "0x4000092")]
		[FieldOffset(Offset = "0x18")]
		public readonly bool BlocksInput;

		[Token(Token = "0x4000093")]
		[FieldOffset(Offset = "0x1C")]
		public readonly int CreatedFrame;

		[Token(Token = "0x6000119")]
		[Address(RVA = "0x522AA40", Offset = "0x5229A40", VA = "0x522AA40")]
		public ActiveTween(Tween tween, bool blocksInput, int createdFrame)
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotionDriver.c (Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.ActiveTween$$.ctor): clean
			base();
			this.Tween = tween;
			this.BlocksInput = blocksInput;
			this.CreatedFrame = createdFrame;
			return;
		}
	}

	[Token(Token = "0x400008E")]
	[FieldOffset(Offset = "0x0")]
	private static GisketchMotionDriver _instance;

	[Token(Token = "0x400008F")]
	[FieldOffset(Offset = "0x8")]
	private static int _lastSkipFrame;

	[Token(Token = "0x4000090")]
	[FieldOffset(Offset = "0x20")]
	private readonly List<ActiveTween> _active;

	[Token(Token = "0x1700001B")]
	public static bool HasActive
	{
		[Token(Token = "0x600010E")]
		[Address(RVA = "0x521AAF0", Offset = "0x5219AF0", VA = "0x521AAF0")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotionDriver.c (Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$get_HasActive): 4 lines keep C-only constructs
			GisketchMotionDriver pGVar1;
			List<GisketchMotionDriver.ActiveTween> __this;
			bool bVar2;
			bool bVar3;
			int iVar4;
			System_Collections_Generic_List_Enumerator_T__o local_48;
			byte local_28;

			local_48._list = null;
			local_48._index = 0;
			local_48._version = 0;
			local_48._current = null;
			if ((typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(GisketchMotionDriver)) ;
			}
			pGVar1 = GisketchMotionDriver._instance;
			bVar3 = false;
			bVar2 = ((Object)pGVar1 == null);
			if (!bVar2) {
				pGVar1 = GisketchMotionDriver._instance;
				if ((pGVar1 == null) ||(__this = pGVar1._active, __this == null)) {
					throw new NullReferenceException();
				}
				local_48 = __this.GetEnumerator();
				local_28 = (byte)&local_48;
				do {
					bVar3 = local_48.MoveNext();
					if (!bVar3) {
						iVar4 = 6;
						goto label_0531ac4e;
					}
					if (local_48._current == null) {
						throw new NullReferenceException();
					}
				} while (*(sbyte)&local_48._current[1].monitor == false);
				iVar4 = 5;
		label_0531ac4e: ;
				local_48.Dispose() ;
				bVar3 = iVar4 == 5 && bVar3;
			}
			return bVar3;
		}
	}

	[Token(Token = "0x1700001C")]
	public static bool ConsumedSkipThisFrame
	{
		[Token(Token = "0x6000111")]
		[Address(RVA = "0x521BF30", Offset = "0x521AF30", VA = "0x521BF30")]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotionDriver.c (Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$get_ConsumedSkipThisFrame): 1 lines keep C-only constructs
			int iVar1;
			int iVar2;

			if ((typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor == 0) {
				il2cpp_codegen_runtime_class_init(typeof(GisketchMotionDriver)) ;
			}
			iVar1 = GisketchMotionDriver._lastSkipFrame;
			iVar2 = Time.frameCount;
			return iVar1 == iVar2;
		}
	}

	[Token(Token = "0x600010D")]
	[Address(RVA = "0x5226780", Offset = "0x5225780", VA = "0x5226780")]
	public static Tween Track(Tween tween, bool blocksInput = true)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotionDriver.c (Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$Track): 7 lines keep C-only constructs
		GisketchMotionDriver.ActiveTween* targetAddress;
		int piVar1;
		uint uVar2;
		List<GisketchMotionDriver.ActiveTween> __this;
		GisketchMotionDriver.ActiveTween[] pGVar3;
		int iVar5;
		GisketchMotionDriver.c__DisplayClass3_0 __this_00;
		GisketchMotionDriver.ActiveTween pGVar6;
		GisketchMotionDriver pGVar7;
		TweenCallback __this_01;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(GisketchMotionDriver.c__DisplayClass3_0));
		__this_00 = new Object();
		if (tween == null) {
			return null;
		}
		iVar5 = Time.frameCount;
		pGVar6 = new GisketchMotionDriver.ActiveTween();
		pGVar6.Tween = tween;
		pGVar6.BlocksInput = blocksInput;
		pGVar6.CreatedFrame = iVar5;
		if (__this_00 != null) {
			targetAddress = &__this_00.active;
			__this_00.active = pGVar6;
			pGVar7 = GisketchMotionDriver.Ensure();
			if ((pGVar7 != null) &&(__this = pGVar7._active, __this != null)) {
				pGVar6 = *targetAddress;
				piVar1 = &__this._version;
				*piVar1 = *piVar1 + 1;
				pGVar3 = __this._items;
				if (pGVar3 != null) {
					uVar2 = __this._size;
					if (uVar2 < (uint)pGVar3.Length) {
						__this._size = uVar2 + 1;
						pGVar3[(int)uVar2] = pGVar6;
					}
					else {
						__this.AddWithResize((object)pGVar6);
					}
					__this_00.onKill = tween.onKill;
					__this_01 = new TweenCallback((object)__this_00, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c__DisplayClass3_0_Track_b__0);
					TweenSettingsExtensions.OnKill<Tween>((object)tween, __this_01);
					return tween;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600010F")]
	[Address(RVA = "0x522ABE0", Offset = "0x5229BE0", VA = "0x522ABE0")]
	private void Update()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotionDriver.c (Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$Update): 2 lines keep C-only constructs
		uint uVar1;
		bool bVar2;

		if (Il2CppMethodInitialized_07542831 == false) {
			Il2CppMethodInitialized_07542831 = true;
			uVar1 = (typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchMotionDriver)) ;
		}
		bVar2 = Input.GetMouseButtonDown(0);
		if ((!bVar2) && (bVar2 = Input.GetMouseButtonDown(1), !bVar2)) {
			bVar2 = Input.GetKeyDown(0x1b);
			if (!bVar2) {
				return;
			}
		}
		if ((typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchMotionDriver)) ;
			GisketchMotionDriver.CompleteActiveForSkip();
			return;
		}
		GisketchMotionDriver.CompleteActiveForSkip();
		return;
	}

	[Token(Token = "0x6000110")]
	[Address(RVA = "0x521BF80", Offset = "0x521AF80", VA = "0x521BF80")]
	public static bool CompleteActiveForSkip()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotionDriver.c (Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$CompleteActiveForSkip): 4 lines keep C-only constructs
		uint uVar1;
		GisketchMotionDriver pGVar2;
		bool bVar3;
		bool bVar4;
		int iVar5;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07542832 == false) {
			Il2CppMethodInitialized_07542832 = true;
			uVar1 = (typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor;
			klass = typeof(GisketchMotionDriver);
		}
		else {
			uVar1 = (typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor;
			klass = typeof(GisketchMotionDriver);
		}
		typeof(GisketchMotionDriver) =(GisketchMotionDriver)klass;
		if (uVar1 == 0) {
			bVar3 = GisketchMotionDriver.HasActive;
		}
		else {
			bVar3 = GisketchMotionDriver.HasActive;
		}
		if (bVar3) {
			if (((typeof(GisketchMotionDriver))._2). cctor_finished_or_no_cctor == 0) {
			}
			pGVar2 = GisketchMotionDriver._instance;
			bVar3 = false;
			bVar4 = ((Object)pGVar2 == null);
			if (!bVar4) {
				pGVar2 = GisketchMotionDriver._instance;
				if (pGVar2 == null) {
					throw new NullReferenceException();
				}
				pGVar2.CompleteActive();
				iVar5 = Time.frameCount;
				GisketchMotionDriver._lastSkipFrame = iVar5;
				bVar3 = true;
			}
		}
		else {
			bVar3 = false;
		}
		return bVar3;
	}

	[Token(Token = "0x6000112")]
	[Address(RVA = "0x522AA80", Offset = "0x5229A80", VA = "0x522AA80")]
	private static GisketchMotionDriver Ensure()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotionDriver.c (Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$Ensure): 2 lines keep C-only constructs
		bool bVar1;
		Object target;
		GisketchMotionDriver pGVar2;

		if ((typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchMotionDriver)) ;
		}
		pGVar2 = GisketchMotionDriver._instance;
		bVar1 = ((Object)pGVar2 != null);
		if (bVar1) {
		}
		else {
			target = (Object)il2cpp_codegen_object_new(typeof(GameObject)) ;
			target = new GameObject("AoTTG Motion Driver");
			Object.DontDestroyOnLoad(target);
			if (target == null) {
				throw new NullReferenceException();
			}
			pGVar2 = target.AddComponent<GisketchMotionDriver>();
			GisketchMotionDriver._instance = pGVar2;
		}
		return GisketchMotionDriver._instance;
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x522ACC0", Offset = "0x5229CC0", VA = "0x522ACC0")]
	private static bool SkipPressed()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotionDriver.c (Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$SkipPressed): clean
		bool bVar1;

		bVar1 = Input.GetMouseButtonDown(0);
		if (!bVar1) {
			bVar1 = Input.GetMouseButtonDown(1);
			if (!bVar1) {
				if ((typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor == 0) {
					bVar1 = Input.GetKeyDown(0x1b);
					return bVar1;
				}
				bVar1 = Input.GetKeyDown(0x1b);
				return bVar1;
			}
		}
		return true;
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x521BF20", Offset = "0x521AF20", VA = "0x521BF20")]
	internal static bool IsBackKeyDown()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotionDriver.c (Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$IsBackKeyDown): clean
		bool bVar1;

		return bVar1;
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x522AF00", Offset = "0x5229F00", VA = "0x522AF00")]
	internal static bool IsKeyboardSkip(KeyCode key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotionDriver.c (Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$IsKeyboardSkip): clean
		return key == 0x1b;
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x522AD30", Offset = "0x5229D30", VA = "0x522AD30")]
	private void CompleteActive()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotionDriver.c (Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$CompleteActive): 3 lines keep C-only constructs
		List<GisketchMotionDriver.ActiveTween> pSVar1;
		object pIVar2;
		Il2CppClass t;
		int iVar3;
		Object[] pSVar4;
		il2cpp_array_size_t iVar5;
		Gisketch_Aottg2UI_Tweening_GisketchMotionDriver___c_StaticFields pGVar6;
		Predicate<T> match;
		uint uVar7;

		iVar3 = Time.frameCount;
		pSVar1 = this._active;
		if ((pSVar1 != null) &&(pSVar4 = pSVar1.ToArray() , pSVar4 != null)) {
			iVar5 = pSVar4.Length;
			if (0 < (int)iVar5) {
				uVar7 = 0;
				do {
					if ((uint)iVar5 <= uVar7) {
						throw new IndexOutOfRangeException();
					}
					pIVar2 = pSVar4[(int)uVar7];
					if (pIVar2 == null) goto label_0532aee7;
					if (((*(int)((long)&pIVar2[1].monitor + 4) != iVar3) &&(t = pIVar2[1].klass, t != null)) && (*(bool)&(t._2).cctor_thread != false)) {
						TweenExtensions.Complete((Tween)t, true);
						iVar5 = pSVar4.Length;
					}
					uVar7 = uVar7 + 1;
				} while ((int)uVar7 < (int)iVar5);
			}
			pSVar1 = this._active;
			if ((typeof(GisketchMotionDriver.c)._2).cctor_finished_or_no_cctor == 0) {
				pGVar6 = typeof(GisketchMotionDriver.c).static_fields;
				match = (Predicate<T>)pGVar6.__9__14_0;
			}
			else {
				pGVar6 = typeof(GisketchMotionDriver.c).static_fields;
				match = (Predicate<T>)pGVar6.__9__14_0;
			}
			if (match == null) {
				if (((typeof(GisketchMotionDriver.c))._2). cctor_finished_or_no_cctor == 0) {
					pGVar6 = typeof(GisketchMotionDriver.c).static_fields;
				}
				pIVar2 = (object)pGVar6.__9;
				match = new Predicate<GisketchMotionDriver.ActiveTween>(pIVar2, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver_c_CompleteActive_b__14_0);
				pGVar6 = typeof(GisketchMotionDriver.c).static_fields;
				pGVar6.__9__14_0 = (Predicate<GisketchMotionDriver.ActiveTween>)match;
			}
			if (pSVar1 != null) {
				pSVar1.RemoveAll(match);
				return;
			}
		}
	label_0532aee7: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x522AF10", Offset = "0x5229F10", VA = "0x522AF10")]
	public GisketchMotionDriver()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotionDriver.c (Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$.ctor): 1 lines keep C-only constructs
		List<GisketchMotionDriver.ActiveTween> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<GisketchMotionDriver.ActiveTween>));
		__this_00 = new List<object>();
		this._active = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Tweening/GisketchMotionDriver.c.

	// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c__DisplayClass3_0$$.ctor: clean
	private void c__DisplayClass3_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver$$.cctor: clean
	static GisketchMotionDriver()
	{
		GisketchMotionDriver._lastSkipFrame = -1;
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new GisketchMotionDriver.c();
		GisketchMotionDriver.c.__9 =(GisketchMotionDriver.c)__this;
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c$$<CompleteActive>b__14_0: clean
	private bool c__CompleteActive_b__14_0(GisketchMotionDriver.ActiveTween tween)
	{
		Tween pDVar1;

		if (tween == null) {
			throw new NullReferenceException();
		}
		pDVar1 = tween.Tween;
		if (pDVar1 == null) {
			return true;
		}
		return pDVar1._active_k__BackingField == false;
	}

	// Gisketch.Aottg2UI.Tweening.GisketchMotionDriver.<>c__DisplayClass3_0$$<Track>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass3_0__Track_b__0()
	{
		TweenCallback pDVar1;
		GisketchMotionDriver pGVar2;
		List<GisketchMotionDriver.ActiveTween> __this_00;
		bool bVar3;

		pDVar1 = this.onKill;
		if (pDVar1 != null) {
			(*(code)pDVar1.invoke_impl)(pDVar1.method_code);
		}
		if ((typeof(GisketchMotionDriver)._2).cctor_finished_or_no_cctor == 0) {
			il2cpp_codegen_runtime_class_init(typeof(GisketchMotionDriver)) ;
		}
		pGVar2 = GisketchMotionDriver._instance;
		bVar3 = ((Object)pGVar2 != null);
		if (bVar3) {
			pGVar2 = GisketchMotionDriver._instance;
			if ((pGVar2 == null) ||(__this_00 = pGVar2._active, __this_00 == null)) {
				throw new NullReferenceException();
			}
			__this_00.Remove((object)this.active);
			return;
		}
		return;
	}
}
