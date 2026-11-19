// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicComponentInstance
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicComponentInstance.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomLogicComponentInstance.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Map;

namespace CustomLogic;

[Token(Token = "0x2000632")]
internal class CustomLogicComponentInstance : UserClassInstance
{
	[Token(Token = "0x4001AA1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	public CustomLogicMapObjectBuiltin MapObject;

	[Token(Token = "0x4001AA2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	public CustomLogicNetworkViewBuiltin NetworkView;

	[Token(Token = "0x4001AA3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private MapScriptComponent _script;

	[Token(Token = "0x4001AA4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private readonly HashSet<CustomLogicLineRendererBuiltin> _lineRenderers;

	[Token(Token = "0x17000A5E")]
	public override bool Enabled
	{
		[Token(Token = "0x6003B1A")]
		[Address(RVA = "0x5A6C560", Offset = "0x5A6B560", VA = "0x5A6C560", Slot = "4")]
		get
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicComponentInstance.c (CustomLogic.CustomLogicComponentInstance$$get_Enabled): clean
			return this._Enabled_k__BackingField;
		}
		[Token(Token = "0x6003B1B")]
		[Address(RVA = "0x5A6C570", Offset = "0x5A6B570", VA = "0x5A6C570", Slot = "5")]
		set
		{
			// Lifted from source/cpp/CustomLogic/CustomLogicComponentInstance.c (CustomLogic.CustomLogicComponentInstance$$set_Enabled): 2 lines keep C-only constructs
			undefined3 in_register_00000031;

			this._Enabled_k__BackingField = value;
			if (CONCAT31(in_register_00000031, value) == 0) {
				this.DestroyLineRenderers();
				return;
			}
			return;
		}
	}

	[Token(Token = "0x6003B1C")]
	[Address(RVA = "0x5A6C610", Offset = "0x5A6B610", VA = "0x5A6C610")]
	public void RegisterLineRenderer(CustomLogicLineRendererBuiltin lineRenderer)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicComponentInstance.c (CustomLogic.CustomLogicComponentInstance$$RegisterLineRenderer): clean
		HashSet<object> __this_00;

		__this_00 = (HashSet<object>)this._lineRenderers;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Add((object)lineRenderer);
		return;
	}

	[Token(Token = "0x6003B1D")]
	[Address(RVA = "0x5A6C660", Offset = "0x5A6B660", VA = "0x5A6C660")]
	public void UnregisterLineRenderer(CustomLogicLineRendererBuiltin lineRenderer)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicComponentInstance.c (CustomLogic.CustomLogicComponentInstance$$UnregisterLineRenderer): clean
		HashSet<object> __this_00;

		__this_00 = (HashSet<object>)this._lineRenderers;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Remove((object)lineRenderer);
		return;
	}

	[Token(Token = "0x6003B1E")]
	[Address(RVA = "0x5A6C580", Offset = "0x5A6B580", VA = "0x5A6C580")]
	public void DestroyLineRenderers()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicComponentInstance.c (CustomLogic.CustomLogicComponentInstance$$DestroyLineRenderers): 1 lines keep C-only constructs
		uint uVar1;
		Object[] pSVar2;
		uint uVar3;

		pSVar2 = Enumerable.ToArray<CustomLogicLineRendererBuiltin>((System_Collections_Generic_IEnumerable_TSource__o)this._lineRenderers);
		if (pSVar2 == null) {
	label_05b6c5ff: ;
			throw new NullReferenceException();
		}
		uVar1 = (uint)pSVar2.Length;
		if (0 < (int)uVar1) {
			uVar3 = 0;
			do {
				if (uVar1 <= uVar3) {
					throw new IndexOutOfRangeException();
				}
				if ((CustomLogicLineRendererBuiltin)pSVar2[(int)uVar3] ==null) goto label_05b6c5ff;
				(pSVar2[(int)uVar3]).Destroy();
				uVar3 = uVar3 + 1;
				uVar1 = (uint)pSVar2.Length;
			} while ((int)uVar3 < (int)uVar1);
		}
		return;
	}

	[Token(Token = "0x6003B1F")]
	[Address(RVA = "0x5A6C6B0", Offset = "0x5A6B6B0", VA = "0x5A6C6B0")]
	public CustomLogicComponentInstance(string name, MapObject obj, MapScriptComponent script, CustomLogicNetworkViewBuiltin networkView)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicComponentInstance.c (CustomLogic.CustomLogicComponentInstance$$.ctor): 1 lines keep C-only constructs
		CustomLogicEvaluator __this_00;
		HashSet<CustomLogicLineRendererBuiltin> __this_01;
		CustomLogicMapObjectBuiltin pCVar1;

		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(HashSet<CustomLogicLineRendererBuiltin>));
		__this_01 = new HashSet<object>();
		this._lineRenderers = __this_01;
		base(name);
		if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
		}
		__this_00 = CustomLogicManager.Evaluator;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		pCVar1 = __this_00.GetOrCreateMapObjectBuiltin(obj);
		this.MapObject = pCVar1;
		this._script = script;
		this.NetworkView = networkView;
		return;
	}

	[Token(Token = "0x6003B20")]
	[Address(RVA = "0x5A6C7C0", Offset = "0x5A6B7C0", VA = "0x5A6C7C0")]
	public CustomLogicComponentInstance(string name, CustomLogicMapObjectBuiltin obj, MapScriptComponent script, CustomLogicNetworkViewBuiltin networkView)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicComponentInstance.c (CustomLogic.CustomLogicComponentInstance$$.ctor): 1 lines keep C-only constructs
		HashSet<CustomLogicLineRendererBuiltin> __this_00;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(HashSet<CustomLogicLineRendererBuiltin>));
		__this_00 = new HashSet<object>();
		this._lineRenderers = __this_00;
		base(name);
		this.MapObject = obj;
		this._script = script;
		this.NetworkView = networkView;
		return;
	}

	[Token(Token = "0x6003B21")]
	[Address(RVA = "0x5A6C890", Offset = "0x5A6B890", VA = "0x5A6C890")]
	public void LoadVariables()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicComponentInstance.c (CustomLogic.CustomLogicComponentInstance$$LoadVariables): 9 lines keep C-only constructs
		int iVar1;
		Dictionary<object, object> pSVar2;
		CustomLogicNetworkViewBuiltin value;
		MapScriptComponent pMVar3;
		List<string> __this_00;
		String pSVar4;
		CustomLogicEvaluator __this_01;
		Dictionary<object, object> __this_02;
		bool bVar5;
		String[] pSVar6;
		object pIVar7;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o source;
		System_Collections_Generic_List_TSource__o __this_03;
		String pSVar8;
		byte[] local_68 = new byte[8];
		String local_58;
		byte[] local_48 = new byte[16];
		String local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		pSVar2 = (Dictionary<object, object>)this.Variables;
		if (pSVar2 != null) {
			pSVar2.Add((Il2CppObject *)"MapObject", (object)this.MapObject);
			value = this.NetworkView;
			if (value != null) {
				pSVar2 = (Dictionary<object, object>)this.Variables;
				if (pSVar2 == null) goto label_05b6cd16;
				pSVar2.Add((Il2CppObject *)"NetworkView", (object)value);
			}
			pMVar3 = this._script;
			if ((pMVar3 != null) &&(__this_00 = pMVar3.Parameters, __this_00 != null )) {
				local_48.GetEnumerator((List<object>)__this_00);
				local_58 = local_38;
				local_68 = (byte[])local_48._0_8_;
				local_48._0_8_ = null;
				local_48._8_8_ = local_68;
				while(true) {
					bVar5 = local_68.MoveNext();
					if (!bVar5) break;
					if (local_58 == null) {
						throw new NullReferenceException();
					}
					pSVar6 = local_58.Split(0x3a, 0);
					if (pSVar6 == null) {
						throw new NullReferenceException();
					}
					iVar1 = (int)pSVar6.Length;
					if (iVar1 == 0) {
						throw new IndexOutOfRangeException();
					}
					if (iVar1 == 1) {
						throw new IndexOutOfRangeException();
					}
					pSVar2 = (Dictionary<object, object>)this.Variables;
					if (pSVar2 == null) {
						throw new NullReferenceException();
					}
					pSVar4 = pSVar6[0];
					pSVar8 = pSVar6[1];
					bVar5 = pSVar2.ContainsKey((object)pSVar4);
					if (bVar5) {
						bVar5 = (pSVar4 == "Type");
						if ((!bVar5) || (this._containsTypeOverride != false)) {
							pSVar2 = (Dictionary<object, object>)this.Variables;
							if (pSVar2 == null) {
								throw new NullReferenceException();
							}
							pIVar7 = pSVar2.get_Item((object)pSVar4);
							pIVar7 = CustomLogicComponentInstance.DeserializeValue(pIVar7, pSVar8);
							pSVar2.set_Item((object)pSVar4, pIVar7);
						}
					}
				}
				local_68.Dispose();
				pSVar2 = (Dictionary<object, object>)this.Variables;
				if (pSVar2 != null) {
					source = pSVar2.Keys;
					__this_03 = Enumerable.ToList<string>((System_Collections_Generic_IEnumerable_TSource__o)source);
					if (__this_03 != null) {
						local_48.GetEnumerator((List<object>)__this_03);
						local_58 = local_38;
						local_68 = (byte[])local_48._0_8_;
						local_48._0_8_ = null;
						local_48._8_8_ = local_68;
						while(true) {
							do {
								do {
									bVar5 = local_68.MoveNext();
									pSVar4 = local_58;
									if (!bVar5) {
										local_68.Dispose();
										return;
									}
									if (local_58 == null) {
										throw new NullReferenceException();
									}
									bVar5 = local_58.StartsWith("_");
								} while (bVar5);
								bVar5 = (pSVar4 == "Type");
							} while ((bVar5) && (this._containsTypeOverride == false));
							pSVar2 = (Dictionary<object, object>)this.Variables;
							__this_01 = CustomLogicManager.Evaluator;
							pSVar8 = this.get_ClassName();
							__this_02 = (Dictionary<object, object>)this.Variables;
							if (__this_02 == null) {
								throw new NullReferenceException();
							}
							pIVar7 = __this_02.get_Item((object)pSVar4);
							if (__this_01 == null) {
								throw new NullReferenceException();
							}
							pIVar7 = __this_01.ApplyComponentInspectorRules(pSVar8, pSVar4, pIVar7);
							if (pSVar2 == null) break;
							pSVar2.set_Item((object)pSVar4, pIVar7);
						}
						throw new NullReferenceException();
					}
				}
			}
		}
	label_05b6cd16: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003B22")]
	[Address(RVA = "0x5A6D9C0", Offset = "0x5A6C9C0", VA = "0x5A6D9C0")]
	public bool UsesCollider()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicComponentInstance.c (CustomLogic.CustomLogicComponentInstance$$UsesCollider): clean
		uint uVar1;
		CustomLogicEvaluator __this_00;
		bool bVar2;

		if (Il2CppMethodInitialized_07547329 == false) {
			Il2CppMethodInitialized_07547329 = true;
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = CustomLogicManager.Evaluator;
		}
		else {
			__this_00 = *(CustomLogicEvaluator*)((long)(typeof(CustomLogicManager)).static_fields + 8);
		}
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		bVar2 = __this_00.HasMethod((CustomLogicClassInstance)this, "OnCollisionStay");
		if ((((bVar2) ||(bVar2 = __this_00.HasMethod((CustomLogicClassInstance)this, "OnCollisionEnter"))) ||(bVar2 = __this_00.HasMethod((CustomLogicClassInstance)this, "OnCollisionExit"))) ||(bVar2 = __this_00.HasMethod((CustomLogicClassInstance)this, "OnGetHit"))) {
			return true;
		}
		bVar2 = __this_00.HasMethod((CustomLogicClassInstance)this, "OnGetHooked");
		return bVar2;
	}

	[Token(Token = "0x6003B23")]
	[Address(RVA = "0x5A6B820", Offset = "0x5A6A820", VA = "0x5A6B820")]
	public void OnCollisionStay(BuiltinClassInstance other, [Optional] BuiltinClassInstance collision)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicComponentInstance.c (CustomLogic.CustomLogicComponentInstance$$OnCollisionStay): 2 lines keep C-only constructs
		CustomLogicEvaluator __this_00;
		String methodName;
		bool bVar1;
		Object[] parameterValues;
		object pIVar2;

		parameterValues = (Object[])new object[2];
		if (parameterValues == null) {
			throw new NullReferenceException();
		}
		if ((other != null) &&(pIVar2 = il2cpp_vm_Object_IsInst((object)other, (((parameterValues.obj).klass)._1).element_class), pIVar2 == null)) {
	label_05b6b9ab: ;
			pIVar2 = new ArrayTypeMismatchException();
			throw pIVar2;
		}
		if ((int)parameterValues.Length != 0) {
			parameterValues[0] = (object)other;
			if ((collision != null) &&(pIVar2 = il2cpp_vm_Object_IsInst((object)collision, (((parameterValues.obj).klass)._1).element_class), pIVar2 == null)) goto label_05b6b9ab;
			if ((parameterValues.Length & 0xfffffffe) != 0) {
				parameterValues[1] = (object)collision;
				methodName = "OnCollisionStay";
				bVar1 = this.get_Enabled();
				if (bVar1) {
					if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
						__this_00 = CustomLogicManager.Evaluator;
					}
					else {
						__this_00 = CustomLogicManager.Evaluator;
					}
					if ((__this_00 != null) &&(bVar1 = __this_00.HasMethod((CustomLogicClassInstance)this, methodName))) {
						__this_00.EvaluateMethod((CustomLogicClassInstance)this, methodName, parameterValues, 0);
						return;
					}
				}
				return;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6003B24")]
	[Address(RVA = "0x5A6B510", Offset = "0x5A6A510", VA = "0x5A6B510")]
	public void OnCollisionEnter(BuiltinClassInstance other, [Optional] BuiltinClassInstance collision)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicComponentInstance.c (CustomLogic.CustomLogicComponentInstance$$OnCollisionEnter): 2 lines keep C-only constructs
		CustomLogicEvaluator __this_00;
		String methodName;
		bool bVar1;
		Object[] parameterValues;
		object pIVar2;

		parameterValues = (Object[])new object[2];
		if (parameterValues == null) {
			throw new NullReferenceException();
		}
		if ((other != null) &&(pIVar2 = il2cpp_vm_Object_IsInst((object)other, (((parameterValues.obj).klass)._1).element_class), pIVar2 == null)) {
	label_05b6b69b: ;
			pIVar2 = new ArrayTypeMismatchException();
			throw pIVar2;
		}
		if ((int)parameterValues.Length != 0) {
			parameterValues[0] = (object)other;
			if ((collision != null) &&(pIVar2 = il2cpp_vm_Object_IsInst((object)collision, (((parameterValues.obj).klass)._1).element_class), pIVar2 == null)) goto label_05b6b69b;
			if ((parameterValues.Length & 0xfffffffe) != 0) {
				parameterValues[1] = (object)collision;
				methodName = "OnCollisionEnter";
				bVar1 = this.get_Enabled();
				if (bVar1) {
					if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
						__this_00 = CustomLogicManager.Evaluator;
					}
					else {
						__this_00 = CustomLogicManager.Evaluator;
					}
					if ((__this_00 != null) &&(bVar1 = __this_00.HasMethod((CustomLogicClassInstance)this, methodName))) {
						__this_00.EvaluateMethod((CustomLogicClassInstance)this, methodName, parameterValues, 0);
						return;
					}
				}
				return;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6003B25")]
	[Address(RVA = "0x5A6BB30", Offset = "0x5A6AB30", VA = "0x5A6BB30")]
	public void OnCollisionExit(BuiltinClassInstance other, [Optional] BuiltinClassInstance collision)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicComponentInstance.c (CustomLogic.CustomLogicComponentInstance$$OnCollisionExit): 2 lines keep C-only constructs
		CustomLogicEvaluator __this_00;
		String methodName;
		bool bVar1;
		Object[] parameterValues;
		object pIVar2;

		parameterValues = (Object[])new object[2];
		if (parameterValues == null) {
			throw new NullReferenceException();
		}
		if ((other != null) &&(pIVar2 = il2cpp_vm_Object_IsInst((object)other, (((parameterValues.obj).klass)._1).element_class), pIVar2 == null)) {
	label_05b6bcbb: ;
			pIVar2 = new ArrayTypeMismatchException();
			throw pIVar2;
		}
		if ((int)parameterValues.Length != 0) {
			parameterValues[0] = (object)other;
			if ((collision != null) &&(pIVar2 = il2cpp_vm_Object_IsInst((object)collision, (((parameterValues.obj).klass)._1).element_class), pIVar2 == null)) goto label_05b6bcbb;
			if ((parameterValues.Length & 0xfffffffe) != 0) {
				parameterValues[1] = (object)collision;
				methodName = "OnCollisionExit";
				bVar1 = this.get_Enabled();
				if (bVar1) {
					if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
						__this_00 = CustomLogicManager.Evaluator;
					}
					else {
						__this_00 = CustomLogicManager.Evaluator;
					}
					if ((__this_00 != null) &&(bVar1 = __this_00.HasMethod((CustomLogicClassInstance)this, methodName))) {
						__this_00.EvaluateMethod((CustomLogicClassInstance)this, methodName, parameterValues, 0);
						return;
					}
				}
				return;
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6003B26")]
	[Address(RVA = "0x5A6AD70", Offset = "0x5A69D70", VA = "0x5A6AD70")]
	public void OnGetHit(CustomLogicCharacterBuiltin character, string name, int damage, string type, CustomLogicVector3Builtin position)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicComponentInstance.c (CustomLogic.CustomLogicComponentInstance$$OnGetHit): 7 lines keep C-only constructs
		CustomLogicEvaluator __this_00;
		String methodName;
		CustomLogicComponentInstance classInstance;
		bool bVar1;
		Object[] parameterValues;
		object pIVar2;
		object pIVar3;
		uint in_register_0000000c;
		MethodInfo method_00;
		int local_3c;
		CustomLogicComponentInstance local_38;

		method_00 = (MethodInfo)CONCAT44(in_register_0000000c, damage);
		local_38 = this;
		parameterValues = (Object[])new object[5];
		if (parameterValues == null) {
			throw new NullReferenceException();
		}
		if (character != null) {
			pIVar2 = il2cpp_vm_Object_IsInst((object)character, (((parameterValues.obj).klass)._1).element_class);
			if (pIVar2 == null) goto label_05b6afbb;
		}
		if ((int)parameterValues.Length != 0) {
			parameterValues[0] = (object)character;
			if (name != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)name, (((parameterValues.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_05b6afbb;
			}
			if ((parameterValues.Length & 0xfffffffe) == 0) goto label_05b6afb6;
			parameterValues[1] = (object)name;
			local_3c = damage;
			pIVar2 = (object)local_3c;
			if (pIVar2 != null) {
				pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((parameterValues.obj).klass)._1).element_class);
				if (pIVar3 == null) goto label_05b6afbb;
			}
			if ((uint)parameterValues.Length < 3) goto label_05b6afb6;
			parameterValues[2] = pIVar2;
			if (type != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)type, (((parameterValues.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_05b6afbb;
			}
			if ((parameterValues.Length & 0xfffffffc) != 0) {
				parameterValues[3] = (object)type;
				if (position != null) {
					pIVar2 = il2cpp_vm_Object_IsInst((object)position, (((parameterValues.obj).klass)._1).element_class);
					if (pIVar2 == null) {
	label_05b6afbb: ;
						pIVar2 = new ArrayTypeMismatchException();
						throw pIVar2;
					}
				}
				if (4 < (uint)parameterValues.Length) {
					parameterValues[4] = (object)position;
					methodName = "OnGetHit";
					classInstance = local_38;
					bVar1 = local_38.get_Enabled();
					if (bVar1) {
						__this_00 = CustomLogicManager.Evaluator;
						if (__this_00 != null) {
							bVar1 = __this_00.HasMethod((CustomLogicClassInstance)classInstance, methodName);
							if (bVar1) {
								__this_00.EvaluateMethod((CustomLogicClassInstance)classInstance, methodName, parameterValues, 0);
							}
						}
					}
					return;
				}
			}
		}
	label_05b6afb6: ;
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6003B27")]
	[Address(RVA = "0x5A6B1B0", Offset = "0x5A6A1B0", VA = "0x5A6B1B0")]
	public void OnGetHooked(CustomLogicHumanBuiltin human, CustomLogicVector3Builtin position, bool left)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicComponentInstance.c (CustomLogic.CustomLogicComponentInstance$$OnGetHooked): 5 lines keep C-only constructs
		CustomLogicEvaluator __this_00;
		String methodName;
		bool bVar1;
		Object[] parameterValues;
		object pIVar2;
		object pIVar3;
		undefined7 in_register_00000009;
		MethodInfo method_00;
		byte local_29;

		method_00 = (MethodInfo)CONCAT71(in_register_00000009, left);
		parameterValues = (Object[])new object[3];
		if (parameterValues == null) {
			throw new NullReferenceException();
		}
		if (human != null) {
			pIVar2 = il2cpp_vm_Object_IsInst((object)human, (((parameterValues.obj).klass)._1).element_class) ;
			if (pIVar2 == null) goto label_05b6b37a;
		}
		if ((int)parameterValues.Length != 0) {
			parameterValues[0] = (object)human;
			if (position != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)position, (((parameterValues.obj).klass)._1).element_class);
				if (pIVar2 == null) goto label_05b6b37a;
			}
			if ((parameterValues.Length & 0xfffffffe) != 0) {
				parameterValues[1] = (object)position;
				local_29 = left;
				pIVar2 = (object)local_29;
				if (pIVar2 != null) {
					pIVar3 = il2cpp_vm_Object_IsInst(pIVar2, (((parameterValues.obj).klass)._1).element_class);
					if (pIVar3 == null) {
	label_05b6b37a: ;
						pIVar2 = new ArrayTypeMismatchException();
						throw pIVar2;
					}
				}
				if (2 < (uint)parameterValues.Length) {
					parameterValues[2] = pIVar2;
					methodName = "OnGetHooked";
					bVar1 = this.get_Enabled();
					if (bVar1) {
						__this_00 = CustomLogicManager.Evaluator;
						if (__this_00 != null) {
							bVar1 = __this_00.HasMethod((CustomLogicClassInstance)this, methodName);
							if (bVar1) {
								__this_00.EvaluateMethod((CustomLogicClassInstance)this, methodName, parameterValues, 0);
							}
						}
					}
					return;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x6003B28")]
	[Address(RVA = "0x5A6DBC0", Offset = "0x5A6CBC0", VA = "0x5A6DBC0")]
	public void EvaluateMethodForCallbacks(string methodName, [Optional] object[] parameters)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicComponentInstance.c (CustomLogic.CustomLogicComponentInstance$$EvaluateMethodForCallbacks): clean
		CustomLogicEvaluator __this_00;
		bool bVar1;

		bVar1 = this.get_Enabled();
		if (bVar1) {
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
				__this_00 = CustomLogicManager.Evaluator;
			}
			else {
				__this_00 = CustomLogicManager.Evaluator;
			}
			if ((__this_00 != null) &&(bVar1 = __this_00.HasMethod((CustomLogicClassInstance)this, methodName))) {
				__this_00.EvaluateMethod((CustomLogicClassInstance)this, methodName, parameters, 0);
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6003B29")]
	[Address(RVA = "0x5A6CE50", Offset = "0x5A6BE50", VA = "0x5A6CE50")]
	public static object DeserializeValue(object obj, string value)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicComponentInstance.c (CustomLogic.CustomLogicComponentInstance$$DeserializeValue): 9 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		bool bVar3;
		int r;
		int g;
		int b;
		int a;
		Il2CppClass pIVar4;
		object pIVar5;
		Color255 __this;
		CustomLogicColorBuiltin __this_00;
		CustomLogicVector3Builtin __this_01;
		CustomLogicDictBuiltin __this_02;
		CustomLogicListBuiltin pCVar6;
		String[] pSVar7;
		CustomLogic_CustomLogicComponentInstance___c_StaticFields pCVar8;
		Func<string, object> __this_03;
		System_Collections_Generic_IEnumerable_TResult__o enumerable;
		float data;
		Vector3 value_00;
		byte local_65;
		float local_64;
		float local_60;
		float local_5c;
		float local_58;
		float local_48;

		if (obj == null) {
			pIVar5 = null;
			(value == "null");
		}
		else {
			pIVar4 = g_data_07556758;
			if (obj.klass != g_data_07556758) {
				bVar3 = (value == "null");
				if (obj == null) {
					return null;
				}
				if (bVar3) {
					return null;
				}
				pIVar4 = obj.klass;
			}
			if (pIVar4 == g_data_07556710) {
				local_5c = (float)Int32.Parse(value);
				data = &local_5c;
				pIVar4 = g_data_07556710;
			}
			else if (pIVar4 == g_data_07556740) {
				local_60 = Single.Parse(value);
				data = &local_60;
				pIVar4 = g_data_07556740;
			}
			else {
				if (pIVar4 == g_data_07556758) {
					return (object)value;
				}
				if (pIVar4 != g_data_075566f0) {
					bVar1 = (pIVar4._2).typeHierarchyDepth;
					bVar2 = (typeof(CustomLogicColorBuiltin)._2).typeHierarchyDepth;
					if ((bVar1 < bVar2) ||((pIVar4._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicColorBuiltin))) {
						bVar2 = (typeof(CustomLogicVector3Builtin)._2).typeHierarchyDepth;
						if ((bVar1 < bVar2) ||((pIVar4._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicVector3Builtin))) {
							bVar2 = (typeof(CustomLogicDictBuiltin)._2).typeHierarchyDepth;
							if ((bVar2 <= bVar1) &&((pIVar4._2).typeHierarchy[(ulong)bVar2 - 1] ==typeof(CustomLogicDictBuiltin))) {
								__this_02 = new CustomLogicDictBuiltin();
								return (object)__this_02;
							}
							bVar2 = (typeof(CustomLogicListBuiltin)._2).typeHierarchyDepth;
							if ((bVar1 < bVar2) ||((pIVar4._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(CustomLogicListBuiltin))) {
								return null;
							}
							bVar3 = String.IsNullOrEmpty(value);
							if (bVar3) {
								pCVar6 = new CustomLogicListBuiltin();
								return (object)pCVar6;
							}
							if (value != null) {
								pSVar7 = value.Split(0x2f, 0);
								pCVar8 = typeof(CustomLogicComponentInstance.c).static_fields;
								__this_03 = pCVar8.__9__20_0;
								if (__this_03 == null) {
									if ((typeof(CustomLogicComponentInstance.c)._2).cctor_finished_or_no_cctor == 0) {
										pCVar8 = typeof(CustomLogicComponentInstance.c).static_fields;
									}
									pIVar5 = (object)pCVar8.__9;
									__this_03 = new Func<string, object>(pIVar5, (intptr_t) MethodInfo_CustomLogic_CustomLogicComponentInstance_c_DeserializeValue_b__20_0);
									pCVar8 = typeof(CustomLogicComponentInstance.c).static_fields;
									pCVar8.__9__20_0 = __this_03;
								}
								enumerable = Enumerable.Select<string, object>((System_Collections_Generic_IEnumerable_TSource__o)pSVar7, (System_Func_TSource__TResult__o)__this_03);
								pCVar6 = new CustomLogicListBuiltin((IEnumerable<object>)enumerable, false);
								return (object)pCVar6;
							}
						}
						else if ((value != null) &&(pSVar7 = value.Split(0x2f, 0), pSVar7 != null)) {
							if (((int)pSVar7.Length != 0) &&((local_48 = Single.Parse(pSVar7[0]),(pSVar7.Length & 0xfffffffe) != 0 &&(local_58 = Single.Parse(pSVar7[1]), 2 < (uint)pSVar7.Length)))) {
								local_64 = Single.Parse(pSVar7[2]);
								value_00.y = local_58;
								value_00.x = local_48;
								value_00.z = local_64;
								__this_01 = new CustomLogicVector3Builtin(value_00);
								return (object)__this_01;
							}
							goto label_05b6d33d;
						}
					}
					else if ((value != null) &&(pSVar7 = value.Split(0x2f, 0), pSVar7 != null)) {
						if (((int)pSVar7.Length != 0) &&(((r = Int32.Parse(pSVar7[0]),(pSVar7.Length & 0xfffffffe) != 0 &&(g = Int32.Parse(pSVar7[1]), 2 < (uint)pSVar7.Length)) && (b = Int32.Parse(pSVar7[2]),(pSVar7.Length & 0xfffffffc) != 0)))) {
							a = Int32.Parse(pSVar7[3]);
							__this = new Color255(r, g, b, a);
							__this_00 = il2cpp_codegen_object_new(typeof(CustomLogicColorBuiltin)) ;
							__this_00 = new CustomLogicColorBuiltin(__this);
							return (object)__this_00;
						}
	label_05b6d33d: ;
						throw new IndexOutOfRangeException();
					}
					throw new NullReferenceException();
				}
				local_65 = (value == "true");
				data = (float)&local_65;
				pIVar4 = g_data_075566f0;
			}
			pIVar5 = (object)data;
		}
		return pIVar5;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/CustomLogic/CustomLogicComponentInstance.c.

	// CustomLogic.CustomLogicComponentInstance.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new CustomLogicComponentInstance.c();
		CustomLogicComponentInstance.c.__9 =(CustomLogicComponentInstance.c)__this;
		return;
	}

	// CustomLogic.CustomLogicComponentInstance.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// CustomLogic.CustomLogicComponentInstance.<>c$$<DeserializeValue>b__20_0: clean
	private object c__DeserializeValue_b__20_0(String item)
	{
		object pIVar1;
		byte[] auStack_4 = new byte[4];

		Int32.Parse(item);
		return pIVar1;
	}
}
