// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicLodBuiltin
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicLodBuiltin.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x200049B")]
[CompilerGenerated]
internal class CustomLogicLodBuiltin : BuiltinComponentInstance
{
	[Token(Token = "0x200049C")]
	public static class Factory
	{
		[Token(Token = "0x6001F5E")]
		[Address(RVA = "0x58FF3A0", Offset = "0x58FE3A0", VA = "0x58FF3A0")]
		public static CustomLogicLodBuiltin CreateInstance(object[] args)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLodBuiltin.c (CustomLogic.CustomLogicLodBuiltin.Factory$$CreateInstance): 6 lines keep C-only constructs
			CustomLogicLodBuiltin __this;
			String pSVar1;
			String str0;
			String str2;
			Il2CppClass klass;
			ArgumentException __this_00;
			MethodInfo lastManagedFrame;
			int local_14;

			if (args == null) {
				throw new NullReferenceException();
			}
			if (args.Length != 0) {
				pSVar1 = local_14.ToString();
				str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicLodBuiltin constructor found that takes ");
				str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
				pSVar1 = String.Concat(str0, pSVar1, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(ArgumentException));
				__this_00 = (ArgumentException)il2cpp_codegen_object_new(klass);
				__this_00 = new ArgumentException(pSVar1);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLodBuiltin_Factory_CreateInstance);
				throw (object)__this_00;
			}
			__this._detailPriority = 1.0;
			__this = new CustomLogicLodBuiltin(null);
			return __this;
		}
	}

	[Token(Token = "0x200049D")]
	public static class Bindings
	{
		[Token(Token = "0x40016B0")]
		[FieldOffset(Offset = "0x0")]
		public static readonly HashSet<string> MemberNames;

		[Token(Token = "0x6001F5F")]
		[Address(RVA = "0x58FF490", Offset = "0x58FE490", VA = "0x58FF490")]
		public static ICLMemberBinding CreateMemberBinding(string name)
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLodBuiltin.c (CustomLogic.CustomLogicLodBuiltin.Bindings$$CreateMemberBinding): 6 lines keep C-only constructs
			bool bVar1;
			CLPropertyBinding<CustomLogicLodBuiltin> pCVar2;
			String pSVar3;
			String str2;
			Il2CppClass klass;
			Exception __this;
			MethodInfo lastManagedFrame;

			bVar1 = (name == "DistanceThreshold");
			if (bVar1) {
				if ((typeof(CustomLogicLodBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
					pCVar2 = CustomLogicLodBuiltin.Bindings.__CreatePropertyBinding__DistanceThreshold();
					return (ICLMemberBinding)pCVar2;
				}
				pCVar2 = CustomLogicLodBuiltin.Bindings.__CreatePropertyBinding__DistanceThreshold();
				return (ICLMemberBinding)pCVar2;
			}
			bVar1 = (name == "DetailPriority");
			if (!bVar1) {
				pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
				str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicLodBuiltin not found");
				pSVar3 = String.Concat(pSVar3, name, str2);
				klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
				__this = (Exception)il2cpp_codegen_object_new(klass);
				__this = new Exception(pSVar3);
				lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings_CreateMemberBinding);
				throw (object)__this;
			}
			if ((typeof(CustomLogicLodBuiltin.Bindings)._2).cctor_finished_or_no_cctor == 0) {
				pCVar2 = CustomLogicLodBuiltin.Bindings.__CreatePropertyBinding__DetailPriority();
				return (ICLMemberBinding)pCVar2;
			}
			pCVar2 = CustomLogicLodBuiltin.Bindings.__CreatePropertyBinding__DetailPriority();
			return (ICLMemberBinding)pCVar2;
		}

		[Token(Token = "0x6001F60")]
		[Address(RVA = "0x58FF5D0", Offset = "0x58FE5D0", VA = "0x58FF5D0")]
		public static CLPropertyBinding<CustomLogicLodBuiltin> __CreatePropertyBinding__DistanceThreshold()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLodBuiltin.c (CustomLogic.CustomLogicLodBuiltin.Bindings$$__CreatePropertyBinding__DistanceThreshold): 3 lines keep C-only constructs
			Func<CustomLogicLodBuiltin, object> __this;
			Action<CustomLogicLodBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLodBuiltin> __this_01;

			__this = new Func<CustomLogicLodBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DistanceThreshold_g____gette);
			__this_00 = new Action<CustomLogicLodBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DistanceThreshold_g____sette);
			__this_01 = new CLPropertyBinding<CustomLogicLodBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}

		[Token(Token = "0x6001F61")]
		[Address(RVA = "0x58FF6B0", Offset = "0x58FE6B0", VA = "0x58FF6B0")]
		public static CLPropertyBinding<CustomLogicLodBuiltin> __CreatePropertyBinding__DetailPriority()
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLodBuiltin.c (CustomLogic.CustomLogicLodBuiltin.Bindings$$__CreatePropertyBinding__DetailPriority): 3 lines keep C-only constructs
			Func<CustomLogicLodBuiltin, object> __this;
			Action<CustomLogicLodBuiltin, object> __this_00;
			CLPropertyBinding<CustomLogicLodBuiltin> __this_01;

			__this = new Func<CustomLogicLodBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DetailPriority_g____getter_3);
			__this_00 = new Action<CustomLogicLodBuiltin, object>(null, (intptr_t) MethodInfo_CustomLogic_CustomLogicLodBuiltin_Bindings___CreatePropertyBinding__DetailPriority_g____setter_3);
			__this_01 = new CLPropertyBinding<CustomLogicLodBuiltin>((System_Func_T__object__o)__this, (System_Action_T__object__o)__this_00);
			return __this_01;
		}
	}

	[Token(Token = "0x40016AC")]
	[FieldOffset(Offset = "0x38")]
	public LODGroup Value;

	[Token(Token = "0x40016AD")]
	[FieldOffset(Offset = "0x40")]
	public CustomLogicMapObjectBuiltin OwnerMapObject;

	[Token(Token = "0x40016AE")]
	[FieldOffset(Offset = "0x48")]
	public GameObject Owner;

	[Token(Token = "0x40016AF")]
	[FieldOffset(Offset = "0x50")]
	private float _detailPriority;

	[Token(Token = "0x1700038B")]
	public float DistanceThreshold
	{
		[Token(Token = "0x6001F54")]
		[Address(RVA = "0x58FF0F0", Offset = "0x58FE0F0", VA = "0x58FF0F0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLodBuiltin.c (CustomLogic.CustomLogicLodBuiltin$$get_DistanceThreshold): clean
			LODGroup __this_00;
			LOD[] pUVar1;

			__this_00 = this.Value;
			if (__this_00 != null) {
				pUVar1 = __this_00.GetLODs();
				if (pUVar1 != null) {
					if ((int)pUVar1.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					return pUVar1[0].screenRelativeTransitionHeight;
				}
			}
			throw new NullReferenceException();
		}
		[Token(Token = "0x6001F55")]
		[Address(RVA = "0x58FF120", Offset = "0x58FE120", VA = "0x58FF120")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLodBuiltin.c (CustomLogic.CustomLogicLodBuiltin$$set_DistanceThreshold): clean
			LODGroup pUVar1;
			LOD[] lods;

			pUVar1 = this.Value;
			if (pUVar1 != null) {
				lods = pUVar1.GetLODs();
				if (lods != null) {
					if (lods.Length == 0) {
						return;
					}
					if ((int)lods.Length == 0) {
						throw new IndexOutOfRangeException();
					}
					lods[0].screenRelativeTransitionHeight = value;
					pUVar1 = this.Value;
					if (pUVar1 != null) {
						pUVar1.SetLODs(lods);
						pUVar1 = this.Value;
						if (pUVar1 != null) {
							pUVar1.RecalculateBounds();
							return;
						}
					}
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700038C")]
	public float DetailPriority
	{
		[Token(Token = "0x6001F56")]
		[Address(RVA = "0x58FF1A0", Offset = "0x58FE1A0", VA = "0x58FF1A0")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLodBuiltin.c (CustomLogic.CustomLogicLodBuiltin$$get_DetailPriority): clean
			return this._detailPriority;
		}
		[Token(Token = "0x6001F57")]
		[Address(RVA = "0x58FF1B0", Offset = "0x58FE1B0", VA = "0x58FF1B0")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLodBuiltin.c (CustomLogic.CustomLogicLodBuiltin$$set_DetailPriority): 2 lines keep C-only constructs
			GameObject __this_00;
			uint uVar1;
			Object[] pSVar2;
			uint uVar3;
			MethodInfo* method_00;
			float fVar4;
			float fVar5;

			if (g_data_07545e61 == false) {
				method_00 = &MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer;
				g_data_07545e61 = true;
			}
			fVar5 = 1.0;
			if (value <= 1.0) {
				fVar5 = value;
			}
			fVar5 = (float)(-(uint)(0.0 <= value) & (uint)fVar5);
			this._detailPriority = fVar5;
			fVar4 = CustomLogicLodBuiltin.GetDetailThreshold();
			__this_00 = this.Owner;
			if (__this_00 != null) {
				pSVar2 = __this_00.GetComponentsInChildren<Renderer>();
				if (pSVar2 != null) {
					uVar1 = (uint)pSVar2.Length;
					if (0 < (int)uVar1) {
						uVar3 = 0;
						do {
							if (uVar1 <= uVar3) {
								throw new IndexOutOfRangeException();
							}
							if ((Renderer)pSVar2[(int)uVar3] == null) goto label_059ff27f;
							(pSVar2[(int)uVar3]).enabled = fVar4 <= fVar5;
							uVar3 = uVar3 + 1;
							uVar1 = (uint)pSVar2.Length;
						} while ((int)uVar3 < (int)uVar1);
					}
					return;
				}
			}
		label_059ff27f: ;
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x1700038D")]
	public override string ClassName
	{
		[Token(Token = "0x6001F5A")]
		[Address(RVA = "0x58FF340", Offset = "0x58FE340", VA = "0x58FF340", Slot = "6")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLodBuiltin.c (CustomLogic.CustomLogicLodBuiltin$$get_ClassName): clean
			return "LodBuiltin";
		}
	}

	[Token(Token = "0x1700038E")]
	public override bool IsAbstract
	{
		[Token(Token = "0x6001F5B")]
		[Address(RVA = "0x58FF370", Offset = "0x58FE370", VA = "0x58FF370", Slot = "8")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLodBuiltin.c (CustomLogic.CustomLogicLodBuiltin$$get_IsAbstract): clean
			return true;
		}
	}

	[Token(Token = "0x1700038F")]
	public override bool IsStatic
	{
		[Token(Token = "0x6001F5C")]
		[Address(RVA = "0x58FF380", Offset = "0x58FE380", VA = "0x58FF380", Slot = "9")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLodBuiltin.c (CustomLogic.CustomLogicLodBuiltin$$get_IsStatic): clean
			return true;
		}
	}

	[Token(Token = "0x17000390")]
	public override bool InheritBaseMembers
	{
		[Token(Token = "0x6001F5D")]
		[Address(RVA = "0x58FF390", Offset = "0x58FE390", VA = "0x58FF390", Slot = "10")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicLodBuiltin.c (CustomLogic.CustomLogicLodBuiltin$$get_InheritBaseMembers): clean
			return true;
		}
	}

	[Token(Token = "0x6001F52")]
	[Address(RVA = "0x58FEE50", Offset = "0x58FDE50", VA = "0x58FEE50")]
	public CustomLogicLodBuiltin()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLodBuiltin.c (CustomLogic.CustomLogicLodBuiltin$$.ctor): clean
		this._detailPriority = 1.0;
		base(null);
		return;
	}

	[Token(Token = "0x6001F53")]
	[Address(RVA = "0x58FEE60", Offset = "0x58FDE60", VA = "0x58FEE60")]
	public CustomLogicLodBuiltin(CustomLogicMapObjectBuiltin owner)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLodBuiltin.c (CustomLogic.CustomLogicLodBuiltin$$.ctor): clean
		code cVar1;
		MapObject pMVar2;
		LODGroup pUVar3;
		LODGroup component;
		MethodInfo method_00;

		this._detailPriority = 1.0;
		if ((owner != null) &&(pMVar2 = owner.Value, pMVar2 != null)) {
			component = BuiltinComponentInstance.GetOrAddComponent<LODGroup>(pMVar2.GameObject);
			base((Component)component);
			this.OwnerMapObject = owner;
			pMVar2 = owner.Value;
			if (pMVar2 != null) {
				this.Owner = pMVar2.GameObject;
				pUVar3 = typeof(LODGroup);
				method_00 = (MethodInfo)this.Component;
				if (method_00 == null) {
					this.Value = null;
	label_059fef5f: ;
					this.SetupSingleLod(1.0);
					return;
				}
				cVar1 = (code)(typeof(LODGroup)._2).typeHierarchyDepth;
				if (((byte)cVar1 <= (byte)method_00.methodPointer[0x130]) &&(*(LODGroup*)(*(long)(method_00.methodPointer + 200) + -8 + (ulong)(byte)cVar1 * 8) == typeof(LODGroup))) {
					this.Value = (LODGroup)method_00;
					if (((byte)cVar1 <= (byte)method_00.methodPointer[0x130]) &&(*(LODGroup*)(*(long)(method_00.methodPointer + 200) + -8 + (ulong)(byte)cVar1 * 8) == pUVar3)) goto label_059fef5f;
				}
				throw new InvalidCastException();
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001F58")]
	[Address(RVA = "0x58FF290", Offset = "0x58FE290", VA = "0x58FF290")]
	private static float GetDetailThreshold()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLodBuiltin.c (CustomLogic.CustomLogicLodBuiltin$$GetDetailThreshold): clean
		GraphicsSettings pSVar1;
		IntSetting pSVar2;
		int iVar3;

		iVar3 = Util.EnumMaxValue<PresetQualityLevel>();
		pSVar1 = SettingsManager.GraphicsSettings;
		if ((pSVar1 == null) ||(pSVar2 = pSVar1.PresetQuality, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		return 1.0 - (float)pSVar2._value / (float)iVar3;
	}

	[Token(Token = "0x6001F59")]
	[Address(RVA = "0x58FEF90", Offset = "0x58FDF90", VA = "0x58FEF90")]
	public void SetupSingleLod(float threshold)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicLodBuiltin.c (CustomLogic.CustomLogicLodBuiltin$$SetupSingleLod): clean
		Object x;
		GameObject __this_00;
		LODGroup pUVar1;
		bool bVar2;
		Renderer[] renderers;
		LOD[] lods;
		LOD UStack_28;

		x = (Object)this.Value;
		bVar2 = (x == null);
		if (bVar2) {
			return;
		}
		__this_00 = this.Owner;
		if (__this_00 != null) {
			renderers = (Renderer[])__this_00.GetComponentsInChildren<Renderer>();
			lods = (LOD[])new LOD[1];
			UStack_28.screenRelativeTransitionHeight = 0.0;
			UStack_28.fadeTransitionWidth = 0.0;
			UStack_28.renderers = null;
			UStack_28 = new LOD(threshold, renderers);
			if (lods != null) {
				if ((int)lods.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				lods[0].screenRelativeTransitionHeight = UStack_28.screenRelativeTransitionHeight;
				lods[0].fadeTransitionWidth = UStack_28.fadeTransitionWidth;
				lods[0].renderers = UStack_28.renderers;
				pUVar1 = this.Value;
				if (pUVar1 != null) {
					pUVar1.SetLODs(lods);
					pUVar1 = this.Value;
					if (pUVar1 != null) {
						pUVar1.fadeMode = 0;
						pUVar1 = this.Value;
						if (pUVar1 != null) {
							pUVar1.animateCrossFading = false;
							pUVar1 = this.Value;
							if (pUVar1 != null) {
								pUVar1.RecalculateBounds();
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicLodBuiltin.c.

	// CustomLogic.CustomLogicLodBuiltin.Bindings$$.cctor: clean
	private static void Bindings__cctor()
	{
		HashSet<string> __this;

		__this = new HashSet<string>();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Add((Il2CppObject *)"DistanceThreshold");
		__this.Add((Il2CppObject *)"DetailPriority");
		CustomLogicLodBuiltin.Bindings.MemberNames = __this;
		return;
	}

	// CustomLogic.CustomLogicLodBuiltin.Bindings$$<__CreatePropertyBinding__DistanceThreshold>g____getter|2_0: clean
	private static object Bindings____CreatePropertyBinding__DistanceThreshold_g____getter_2_0(CustomLogicLodBuiltin __i)
	{
		LODGroup __this;
		LOD[] pUVar1;
		object pIVar2;
		byte[] auStack_4 = new byte[4];

		if ((__i != null) &&(__this = __i.Value, __this != null)) {
			pUVar1 = __this.GetLODs();
			if (pUVar1 != null) {
				if ((int)pUVar1.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				return pIVar2;
			}
		}
		throw new NullReferenceException();
	}

	// CustomLogic.CustomLogicLodBuiltin.Bindings$$<__CreatePropertyBinding__DistanceThreshold>g____setter|2_1: clean
	private static void Bindings____CreatePropertyBinding__DistanceThreshold_g____setter_2_1(CustomLogicLodBuiltin __i, object __v)
	{
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.DistanceThreshold = value;
		return;
	}

	// CustomLogic.CustomLogicLodBuiltin.Bindings$$<__CreatePropertyBinding__DetailPriority>g____getter|3_0: clean
	private static object Bindings____CreatePropertyBinding__DetailPriority_g____getter_3_0(CustomLogicLodBuiltin __i)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		if (__i == null) {
			throw new NullReferenceException();
		}
		return pIVar1;
	}

	// CustomLogic.CustomLogicLodBuiltin.Bindings$$<__CreatePropertyBinding__DetailPriority>g____setter|3_1: clean
	private static void Bindings____CreatePropertyBinding__DetailPriority_g____setter_3_1(CustomLogicLodBuiltin __i, object __v)
	{
		float value;

		value = CustomLogicEvaluator.ConvertTo<float>(__v);
		if (__i == null) {
			throw new NullReferenceException();
		}
		__i.DetailPriority = value;
		return;
	}
}
