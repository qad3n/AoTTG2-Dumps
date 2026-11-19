// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicCollisionHandler
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicCollisionHandler.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomLogicCollisionHandler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x2000631")]
internal class CustomLogicCollisionHandler : MonoBehaviour
{
	[Token(Token = "0x4001A9E")]
	[FieldOffset(Offset = "0x20")]
	private List<CustomLogicComponentInstance> _classInstances;

	[Token(Token = "0x4001A9F")]
	[FieldOffset(Offset = "0x28")]
	private readonly HashSet<object> _enteredThisStep;

	[Token(Token = "0x4001AA0")]
	[FieldOffset(Offset = "0x30")]
	private float _enterStepTime;

	[Token(Token = "0x6003B0D")]
	[Address(RVA = "0x5A6A820", Offset = "0x5A69820", VA = "0x5A6A820")]
	public void RegisterInstance(CustomLogicComponentInstance classInstance)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollisionHandler.c (CustomLogic.CustomLogicCollisionHandler$$RegisterInstance): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<CustomLogicComponentInstance> __this_00;
		CustomLogicComponentInstance[] pCVar3;

		__this_00 = this._classInstances;
		if (__this_00 != null) {
			piVar1 = &__this_00._version;
			*piVar1 = *piVar1 + 1;
			pCVar3 = __this_00._items;
			if (pCVar3 != null) {
				uVar2 = __this_00._size;
				if (uVar2 < (uint)pCVar3.Length) {
					__this_00._size = uVar2 + 1;
					pCVar3[(int)uVar2] = classInstance;
					return;
				}
				__this_00.AddWithResize((object)classInstance);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003B0E")]
	[Address(RVA = "0x5A6A8C0", Offset = "0x5A698C0", VA = "0x5A6A8C0")]
	public void GetHit(BaseCharacter character, string name, int damage, string type, Vector3 position)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollisionHandler.c (CustomLogic.CustomLogicCollisionHandler$$GetHit): 10 lines keep C-only constructs
		List<CustomLogicComponentInstance> __this_00;
		object __this_01;
		bool bVar1;
		CustomLogicCharacterBuiltin character_00;
		CustomLogicVector3Builtin __this_02;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		Vector3 value;
		System_Collections_Generic_List_Enumerator_T__o local_78;
		System_Collections_Generic_List_Enumerator_T__o local_50;
		byte[] local_48 = new byte[16];

		value.z = position.z;
		local_48._8_4_ = in_XMM0_Dc;
		local_48._0_8_ = position._0_8_;
		local_48._12_4_ = in_XMM0_Dd;
		local_78._list = null;
		local_78._index = 0;
		local_78._version = 0;
		local_78._current = null;
		character_00 = CustomLogicEvaluator.GetCharacterBuiltin(character);
		__this_00 = this._classInstances;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_78 = __this_00.GetEnumerator();
		local_50 = &local_78;
		while(true) {
			bVar1 = local_78.MoveNext();
			__this_01 = local_78._current;
			if (!bVar1) {
				local_78.Dispose();
				return;
			}
			value.x = (float)local_48._0_4_;
			value.y = (float)local_48._4_4_;
			__this_02 = new CustomLogicVector3Builtin(value);
			if ((CustomLogicComponentInstance)__this_01 ==null) break;
			__this_01.OnGetHit(character_00, name, damage, type, __this_02);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003B0F")]
	[Address(RVA = "0x5A6AFD0", Offset = "0x5A69FD0", VA = "0x5A6AFD0")]
	public void GetHooked(Human human, Vector3 position, bool left)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollisionHandler.c (CustomLogic.CustomLogicCollisionHandler$$GetHooked): 10 lines keep C-only constructs
		List<CustomLogicComponentInstance> __this_00;
		object __this_01;
		bool bVar1;
		CustomLogicHumanBuiltin __this_02;
		CustomLogicVector3Builtin __this_03;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		Vector3 value;
		System_Collections_Generic_List_Enumerator_T__o local_78;
		System_Collections_Generic_List_Enumerator_T__o local_50;
		byte[] local_48 = new byte[16];

		value.z = position.z;
		local_48._8_4_ = in_XMM0_Dc;
		local_48._0_8_ = position._0_8_;
		local_48._12_4_ = in_XMM0_Dd;
		local_78._list = null;
		local_78._index = 0;
		local_78._version = 0;
		local_78._current = null;
		__this_02 = new CustomLogicHumanBuiltin(human);
		__this_00 = this._classInstances;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		local_78 = __this_00.GetEnumerator();
		local_50 = &local_78;
		while(true) {
			bVar1 = local_78.MoveNext();
			__this_01 = local_78._current;
			if (!bVar1) {
				local_78.Dispose();
				return;
			}
			value.x = (float)local_48._0_4_;
			value.y = (float)local_48._4_4_;
			__this_03 = new CustomLogicVector3Builtin(value);
			if ((CustomLogicComponentInstance)__this_01 ==null) break;
			__this_01.OnGetHooked(__this_02, __this_03, left);
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6003B10")]
	[Address(RVA = "0x5A6B390", Offset = "0x5A6A390", VA = "0x5A6B390")]
	protected void OnCollisionEnter(Collision other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollisionHandler.c (CustomLogic.CustomLogicCollisionHandler$$OnCollisionEnter): 2 lines keep C-only constructs
		List<CustomLogicComponentInstance> __this_00;
		bool bVar1;
		Collider other_00;
		object target;
		BuiltinClassInstance other_01;
		System_Collections_Generic_List_Enumerator_T__o SStack_48;
		byte puStack_20;

		SStack_48._list = null;
		SStack_48._index = 0;
		SStack_48._version = 0;
		SStack_48._current = null;
		if (other == null) {
	label_05b6b496: ;
			throw new NullReferenceException();
		}
		other_00 = other.collider;
		target = CustomLogicCollisionHandler.FindTarget(other_00);
		other_01 = CustomLogicCollisionHandler.BuiltinFromTarget(target);
		if (other_01 != null) {
			__this_00 = this._classInstances;
			if (__this_00 == null) goto label_05b6b496;
			SStack_48 = __this_00.GetEnumerator();
			puStack_20 = (byte)&SStack_48;
			while(true) {
				bVar1 = SStack_48.MoveNext();
				if (!bVar1) break;
				if ((CustomLogicComponentInstance)SStack_48._current ==null) {
					throw new NullReferenceException();
				}
				SStack_48._current.OnCollisionEnter(other_01, null);
			}
			SStack_48.Dispose();
		}
		return;
	}

	[Token(Token = "0x6003B11")]
	[Address(RVA = "0x5A6B6B0", Offset = "0x5A6A6B0", VA = "0x5A6B6B0")]
	protected void OnCollisionStay(Collision other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollisionHandler.c (CustomLogic.CustomLogicCollisionHandler$$OnCollisionStay): 2 lines keep C-only constructs
		List<CustomLogicComponentInstance> __this_00;
		bool bVar1;
		Collider other_00;
		object target;
		BuiltinClassInstance other_01;
		System_Collections_Generic_List_Enumerator_T__o SStack_48;
		byte puStack_20;

		SStack_48._list = null;
		SStack_48._index = 0;
		SStack_48._version = 0;
		SStack_48._current = null;
		if (other == null) {
	label_05b6b7b6: ;
			throw new NullReferenceException();
		}
		other_00 = other.collider;
		target = CustomLogicCollisionHandler.FindTarget(other_00);
		other_01 = CustomLogicCollisionHandler.BuiltinFromTarget(target);
		if (other_01 != null) {
			__this_00 = this._classInstances;
			if (__this_00 == null) goto label_05b6b7b6;
			SStack_48 = __this_00.GetEnumerator();
			puStack_20 = (byte)&SStack_48;
			while(true) {
				bVar1 = SStack_48.MoveNext();
				if (!bVar1) break;
				if ((CustomLogicComponentInstance)SStack_48._current ==null) {
					throw new NullReferenceException();
				}
				SStack_48._current.OnCollisionStay(other_01, null);
			}
			SStack_48.Dispose();
		}
		return;
	}

	[Token(Token = "0x6003B12")]
	[Address(RVA = "0x5A6B9C0", Offset = "0x5A6A9C0", VA = "0x5A6B9C0")]
	protected void OnCollisionExit(Collision other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollisionHandler.c (CustomLogic.CustomLogicCollisionHandler$$OnCollisionExit): 2 lines keep C-only constructs
		List<CustomLogicComponentInstance> __this_00;
		bool bVar1;
		Collider other_00;
		object target;
		BuiltinClassInstance other_01;
		System_Collections_Generic_List_Enumerator_T__o SStack_48;
		byte puStack_20;

		SStack_48._list = null;
		SStack_48._index = 0;
		SStack_48._version = 0;
		SStack_48._current = null;
		if (other == null) {
	label_05b6bac6: ;
			throw new NullReferenceException();
		}
		other_00 = other.collider;
		target = CustomLogicCollisionHandler.FindTarget(other_00);
		other_01 = CustomLogicCollisionHandler.BuiltinFromTarget(target);
		if (other_01 != null) {
			__this_00 = this._classInstances;
			if (__this_00 == null) goto label_05b6bac6;
			SStack_48 = __this_00.GetEnumerator();
			puStack_20 = (byte)&SStack_48;
			while(true) {
				bVar1 = SStack_48.MoveNext();
				if (!bVar1) break;
				if ((CustomLogicComponentInstance)SStack_48._current ==null) {
					throw new NullReferenceException();
				}
				SStack_48._current.OnCollisionExit(other_01, null);
			}
			SStack_48.Dispose();
		}
		return;
	}

	[Token(Token = "0x6003B13")]
	[Address(RVA = "0x5A6BCD0", Offset = "0x5A6ACD0", VA = "0x5A6BCD0")]
	public void OnTriggerEnter(Collider other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollisionHandler.c (CustomLogic.CustomLogicCollisionHandler$$OnTriggerEnter): 4 lines keep C-only constructs
		float pfVar1;
		HashSet<object> pSVar2;
		List<CustomLogicComponentInstance> __this_00;
		bool bVar3;
		MethodInfo pMVar4;
		BuiltinClassInstance other_00;
		float fVar5;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_20;

		pMVar4 = (MethodInfo)other;
		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		pMVar4 = (MethodInfo)CustomLogicCollisionHandler.FindTarget(other);
		if (pMVar4 != null) {
			fVar5 = Time.fixedTime;
			pfVar1 = &this._enterStepTime;
			if ((fVar5 != *pfVar1) || (NAN(fVar5) || NAN(*pfVar1))) {
				fVar5 = Time.fixedTime;
				this._enterStepTime = fVar5;
				pSVar2 = this._enteredThisStep;
				if (pSVar2 == null) goto label_05b6be46;
				pSVar2.Clear();
			}
			pSVar2 = this._enteredThisStep;
			if (pSVar2 == null) {
	label_05b6be46: ;
				throw new NullReferenceException();
			}
			bVar3 = pSVar2.Add((object)pMVar4);
			if (bVar3) {
				other_00 = CustomLogicCollisionHandler.BuiltinFromTarget((object)pMVar4);
				if (other_00 != null) {
					__this_00 = this._classInstances;
					if (__this_00 == null) goto label_05b6be46;
					local_48 = __this_00.GetEnumerator();
					local_20 = (byte)&local_48;
					while(true) {
						bVar3 = local_48.MoveNext();
						if (!bVar3) break;
						if ((CustomLogicComponentInstance)local_48._current ==null) {
							throw new NullReferenceException();
						}
						local_48._current.OnCollisionEnter(other_00, null);
					}
					local_48.Dispose() ;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6003B14")]
	[Address(RVA = "0x5A6C0C0", Offset = "0x5A6B0C0", VA = "0x5A6C0C0")]
	protected void OnTriggerStay(Collider other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollisionHandler.c (CustomLogic.CustomLogicCollisionHandler$$OnTriggerStay): 2 lines keep C-only constructs
		List<CustomLogicComponentInstance> __this_00;
		bool bVar1;
		object target;
		BuiltinClassInstance other_00;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_20;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		target = CustomLogicCollisionHandler.FindTarget(other);
		other_00 = CustomLogicCollisionHandler.BuiltinFromTarget(target);
		if (other_00 != null) {
			__this_00 = this._classInstances;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			local_48 = __this_00.GetEnumerator();
			local_20 = (byte)&local_48;
			while(true) {
				bVar1 = local_48.MoveNext();
				if (!bVar1) break;
				if ((CustomLogicComponentInstance)local_48._current ==null) {
					throw new NullReferenceException();
				}
				local_48._current.OnCollisionStay(other_00, null);
			}
			local_48.Dispose();
		}
		return;
	}

	[Token(Token = "0x6003B15")]
	[Address(RVA = "0x5A6C220", Offset = "0x5A6B220", VA = "0x5A6C220")]
	protected void OnTriggerExit(Collider other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollisionHandler.c (CustomLogic.CustomLogicCollisionHandler$$OnTriggerExit): 2 lines keep C-only constructs
		List<CustomLogicComponentInstance> __this_00;
		bool bVar1;
		object target;
		BuiltinClassInstance other_00;
		System_Collections_Generic_List_Enumerator_T__o local_48;
		byte local_20;

		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		target = CustomLogicCollisionHandler.FindTarget(other);
		other_00 = CustomLogicCollisionHandler.BuiltinFromTarget(target);
		if (other_00 != null) {
			__this_00 = this._classInstances;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			local_48 = __this_00.GetEnumerator();
			local_20 = (byte)&local_48;
			while(true) {
				bVar1 = local_48.MoveNext();
				if (!bVar1) break;
				if ((CustomLogicComponentInstance)local_48._current ==null) {
					throw new NullReferenceException();
				}
				local_48._current.OnCollisionExit(other_00, null);
			}
			local_48.Dispose();
		}
		return;
	}

	[Token(Token = "0x6003B16")]
	[Address(RVA = "0x5A6B500", Offset = "0x5A6A500", VA = "0x5A6B500")]
	public static BuiltinClassInstance GetBuiltin(Collider other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollisionHandler.c (CustomLogic.CustomLogicCollisionHandler$$GetBuiltin): clean
		BuiltinClassInstance pCVar1;

		return pCVar1;
	}

	[Token(Token = "0x6003B17")]
	[Address(RVA = "0x5A6BEB0", Offset = "0x5A6AEB0", VA = "0x5A6BEB0")]
	private static object FindTarget(Collider other)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollisionHandler.c (CustomLogic.CustomLogicCollisionHandler$$FindTarget): clean
		bool bVar1;
		Transform pUVar2;
		BaseCharacter x;
		MapObject pMVar3;

		bVar1 = ((Object)other == null);
		if (bVar1) {
			return null;
		}
		if (((other == null) ||(pUVar2 = other.transform, pUVar2 == null)) ||(pUVar2 = pUVar2.root, pUVar2 == null)) {
			throw new NullReferenceException();
		}
		x = pUVar2.GetComponent<BaseCharacter>();
		bVar1 = ((Object)x != null);
		if (bVar1) {
			return (object)x;
		}
		pMVar3 = MapLoader.FindObjectFromCollider(other);
		return (object)pMVar3;
	}

	[Token(Token = "0x6003B18")]
	[Address(RVA = "0x5A6BFB0", Offset = "0x5A6AFB0", VA = "0x5A6BFB0")]
	private static BuiltinClassInstance BuiltinFromTarget(object target)
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollisionHandler.c (CustomLogic.CustomLogicCollisionHandler$$BuiltinFromTarget): 2 lines keep C-only constructs
		byte bVar1;
		byte bVar2;
		Il2CppClass pIVar3;
		CustomLogicEvaluator __this;
		CustomLogicCharacterBuiltin pCVar4;
		CustomLogicMapObjectBuiltin pCVar5;
		MethodInfo method_01;

		if (target != null) {
			pIVar3 = target.klass;
			bVar1 = (pIVar3._2).typeHierarchyDepth;
			bVar2 = (typeof(BaseCharacter)._2).typeHierarchyDepth;
			method_01 = (MethodInfo)(ulong)bVar2;
			if ((bVar2 <= bVar1) &&((pIVar3._2).typeHierarchy[(long)&method_01[-1].field_0x57] ==typeof(BaseCharacter))) {
				pCVar4 = CustomLogicEvaluator.GetCharacterBuiltin((BaseCharacter)target);
				return (BuiltinClassInstance)pCVar4;
			}
			bVar2 = (typeof(MapObject)._2).typeHierarchyDepth;
			if ((bVar2 <= bVar1) &&((pIVar3._2).typeHierarchy[(ulong)bVar2 - 1] == typeof(MapObject))) {
				if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
				}
				__this = CustomLogicManager.Evaluator;
				if (__this != null) {
					pCVar5 = __this.GetOrCreateMapObjectBuiltin((MapObject)target);
					return (BuiltinClassInstance)pCVar5;
				}
			}
		}
		return null;
	}

	[Token(Token = "0x6003B19")]
	[Address(RVA = "0x5A6C490", Offset = "0x5A6B490", VA = "0x5A6C490")]
	public CustomLogicCollisionHandler()
	{
		// Lifted from source/cpp/CustomLogic/CustomLogicCollisionHandler.c (CustomLogic.CustomLogicCollisionHandler$$.ctor): 1 lines keep C-only constructs
		List<CustomLogicComponentInstance> __this_00;
		HashSet<object> __this_01;

		__this_00 = il2cpp_codegen_object_new(typeof(List<CustomLogicComponentInstance>)) ;
		__this_00 = new List<object>();
		this._classInstances = __this_00;
		__this_01 = new HashSet<object>();
		this._enteredThisStep = __this_01;
		this._enterStepTime = -1.0;
		base();
		return;
	}
}
