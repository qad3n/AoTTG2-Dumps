// ==================== AoTTG2 cross-reference ====================
// Type: Map.CustomPhysicsMaterial
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/CustomPhysicsMaterial.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Component/CustomPhysicsMaterial.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Map;

[Token(Token = "0x20003D8")]
internal class CustomPhysicsMaterial : MonoBehaviour
{
	[Token(Token = "0x40013A1")]
	[FieldOffset(Offset = "0x20")]
	private PhysicsMaterial _material;

	[Token(Token = "0x1700029E")]
	public float Bounciness
	{
		[Token(Token = "0x6001866")]
		[Address(RVA = "0x5869230", Offset = "0x5868230", VA = "0x5869230")]
		get
		{
			// Lifted from source/cpp/Map/CustomPhysicsMaterial.c (Map.CustomPhysicsMaterial$$get_Bounciness): clean
			PhysicsMaterial __this_00;
			float fVar1;

			__this_00 = this._material;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return fVar1;
		}
		[Token(Token = "0x6001867")]
		[Address(RVA = "0x5869250", Offset = "0x5868250", VA = "0x5869250")]
		set
		{
			// Lifted from source/cpp/Map/CustomPhysicsMaterial.c (Map.CustomPhysicsMaterial$$set_Bounciness): clean
			PhysicsMaterial __this_00;

			__this_00 = this._material;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.bounciness = value;
			return;
		}
	}

	[Token(Token = "0x1700029F")]
	public float StaticFriction
	{
		[Token(Token = "0x6001868")]
		[Address(RVA = "0x5869270", Offset = "0x5868270", VA = "0x5869270")]
		get
		{
			// Lifted from source/cpp/Map/CustomPhysicsMaterial.c (Map.CustomPhysicsMaterial$$get_StaticFriction): clean
			PhysicsMaterial __this_00;
			float fVar1;

			__this_00 = this._material;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return fVar1;
		}
		[Token(Token = "0x6001869")]
		[Address(RVA = "0x5869290", Offset = "0x5868290", VA = "0x5869290")]
		set
		{
			// Lifted from source/cpp/Map/CustomPhysicsMaterial.c (Map.CustomPhysicsMaterial$$set_StaticFriction): clean
			PhysicsMaterial __this_00;

			__this_00 = this._material;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.staticFriction = value;
			return;
		}
	}

	[Token(Token = "0x170002A0")]
	public float DynamicFriction
	{
		[Token(Token = "0x600186A")]
		[Address(RVA = "0x58692B0", Offset = "0x58682B0", VA = "0x58692B0")]
		get
		{
			// Lifted from source/cpp/Map/CustomPhysicsMaterial.c (Map.CustomPhysicsMaterial$$get_DynamicFriction): clean
			PhysicsMaterial __this_00;
			float fVar1;

			__this_00 = this._material;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return fVar1;
		}
		[Token(Token = "0x600186B")]
		[Address(RVA = "0x58692D0", Offset = "0x58682D0", VA = "0x58692D0")]
		set
		{
			// Lifted from source/cpp/Map/CustomPhysicsMaterial.c (Map.CustomPhysicsMaterial$$set_DynamicFriction): clean
			PhysicsMaterial __this_00;

			__this_00 = this._material;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.dynamicFriction = value;
			return;
		}
	}

	[Token(Token = "0x170002A1")]
	public PhysicsMaterialCombine FrictionCombine
	{
		[Token(Token = "0x600186C")]
		[Address(RVA = "0x58692F0", Offset = "0x58682F0", VA = "0x58692F0")]
		get
		{
			// Lifted from source/cpp/Map/CustomPhysicsMaterial.c (Map.CustomPhysicsMaterial$$get_FrictionCombine): clean
			PhysicsMaterial __this_00;
			int iVar1;

			__this_00 = this._material;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return iVar1;
		}
		[Token(Token = "0x600186D")]
		[Address(RVA = "0x5869310", Offset = "0x5868310", VA = "0x5869310")]
		set
		{
			// Lifted from source/cpp/Map/CustomPhysicsMaterial.c (Map.CustomPhysicsMaterial$$set_FrictionCombine): clean
			PhysicsMaterial __this_00;

			__this_00 = this._material;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.frictionCombine = value;
			return;
		}
	}

	[Token(Token = "0x170002A2")]
	public PhysicsMaterialCombine BounceCombine
	{
		[Token(Token = "0x600186E")]
		[Address(RVA = "0x5869330", Offset = "0x5868330", VA = "0x5869330")]
		get
		{
			// Lifted from source/cpp/Map/CustomPhysicsMaterial.c (Map.CustomPhysicsMaterial$$get_BounceCombine): clean
			PhysicsMaterial __this_00;
			int iVar1;

			__this_00 = this._material;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			return iVar1;
		}
		[Token(Token = "0x600186F")]
		[Address(RVA = "0x5869350", Offset = "0x5868350", VA = "0x5869350")]
		set
		{
			// Lifted from source/cpp/Map/CustomPhysicsMaterial.c (Map.CustomPhysicsMaterial$$set_BounceCombine): clean
			PhysicsMaterial __this_00;

			__this_00 = this._material;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.bounceCombine = value;
			return;
		}
	}

	[Token(Token = "0x6001870")]
	[Address(RVA = "0x5869370", Offset = "0x5868370", VA = "0x5869370")]
	public void Setup(bool allChildColliders)
	{
		// Lifted from source/cpp/Map/CustomPhysicsMaterial.c (Map.CustomPhysicsMaterial$$Setup): 4 lines keep C-only constructs
		PhysicsMaterial* targetAddress;
		bool bVar1;
		uint uVar2;
		PhysicsMaterial __this_00;
		GameObject __this_01;
		Object[] pSVar3;
		Object x;
		uint uVar4;

		__this_00 = new PhysicsMaterial();
		targetAddress = &this._material;
		this._material = __this_00;
		__this_01 = this.gameObject;
		if (allChildColliders) {
			if ((__this_01 != null) &&(pSVar3 = __this_01.GetComponentsInChildren<Collider>(), pSVar3 != null)) {
				uVar2 = (uint)pSVar3.Length;
				if (0 < (int)uVar2) {
					uVar4 = 0;
					do {
						if (uVar2 <= uVar4) {
							throw new IndexOutOfRangeException();
						}
						if ((Collider)pSVar3[(int)uVar4] == null) goto label_059694c1;
						(pSVar3[(int)uVar4]).material = *targetAddress;
						uVar4 = uVar4 + 1;
						uVar2 = (uint)pSVar3.Length;
					} while ((int)uVar4 < (int)uVar2);
				}
				return;
			}
		}
		else if (__this_01 != null) {
			x = (Object)__this_01.GetComponentInChildren<Collider>();
			bVar1 = (x != null);
			if (!bVar1) {
				return;
			}
			if (x != null) {
				x.material = *targetAddress;
				return;
			}
		}
	label_059694c1: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001871")]
	[Address(RVA = "0x58694D0", Offset = "0x58684D0", VA = "0x58694D0")]
	public CustomPhysicsMaterial()
	{
		// Lifted from source/cpp/Map/CustomPhysicsMaterial.c (Map.CustomPhysicsMaterial$$.ctor): clean
		base();
		return;
	}
}
