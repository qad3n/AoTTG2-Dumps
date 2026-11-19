// ==================== AoTTG2 cross-reference ====================
// Type: Characters.TitanColliderToggler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/TitanColliderToggler.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/TitanColliderToggler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200071E")]
internal class TitanColliderToggler : MonoBehaviour
{
	[Token(Token = "0x400234C")]
	[FieldOffset(Offset = "0x20")]
	public BaseTitan Owner;

	[Token(Token = "0x400234D")]
	[FieldOffset(Offset = "0x28")]
	public HashSet<BaseCharacter> NearbyCharacters;

	[Token(Token = "0x400234E")]
	[FieldOffset(Offset = "0x30")]
	public TitanProjectileDetection _projectile;

	[Token(Token = "0x400234F")]
	[FieldOffset(Offset = "0x38")]
	protected bool _look;

	[Token(Token = "0x4002350")]
	[FieldOffset(Offset = "0x39")]
	protected bool _enabled;

	[Token(Token = "0x17000C04")]
	public bool CollidersEnabled
	{
		[Token(Token = "0x600455E")]
		[Address(RVA = "0x5B47CE0", Offset = "0x5B46CE0", VA = "0x5B47CE0")]
		get
		{
			// Lifted from source/cpp/Characters/TitanColliderToggler.c (Characters.TitanColliderToggler$$get_CollidersEnabled): clean
			return this._enabled;
		}
	}

	[Token(Token = "0x600455F")]
	[Address(RVA = "0x5B47CF0", Offset = "0x5B46CF0", VA = "0x5B47CF0")]
	public static TitanColliderToggler Create(BaseTitan owner)
	{
		// Lifted from source/cpp/Characters/TitanColliderToggler.c (Characters.TitanColliderToggler$$Create): clean
		GameObject __this;
		Transform __this_00;
		Transform p;
		TitanColliderToggler __this_01;
		TitanProjectileDetection pCVar1;

		__this = new GameObject();
		if (__this != null) {
			__this_00 = __this.transform;
			if (owner != null) {
				p = owner.transform;
				if (__this_00 != null) {
					__this_00.SetParent(p);
					__this_01 = __this.AddComponent<TitanColliderToggler>();
					if (__this_01 != null) {
						__this_01.Owner = owner;
						pCVar1 = TitanProjectileDetection.Create(owner);
						__this_01._projectile = pCVar1;
						__this_01.SetColliders(false);
						return __this_01;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004560")]
	[Address(RVA = "0x5B48030", Offset = "0x5B47030", VA = "0x5B48030")]
	public void RegisterLook()
	{
		// Lifted from source/cpp/Characters/TitanColliderToggler.c (Characters.TitanColliderToggler$$RegisterLook): clean
		this._look = true;
		return;
	}

	[Token(Token = "0x6004561")]
	[Address(RVA = "0x5B48040", Offset = "0x5B47040", VA = "0x5B48040")]
	public void SetNearby(BaseCharacter character, bool nearby)
	{
		// Lifted from source/cpp/Characters/TitanColliderToggler.c (Characters.TitanColliderToggler$$SetNearby): clean
		HashSet<object> pSVar1;
		bool bVar2;

		pSVar1 = (HashSet<object>)this.NearbyCharacters;
		if (nearby) {
			if (pSVar1 != null) {
				pSVar1.Add((object)character);
				return;
			}
		}
		else if (pSVar1 != null) {
			bVar2 = pSVar1.Contains((object)character);
			if (!bVar2) {
				return;
			}
			pSVar1 = (HashSet<object>)this.NearbyCharacters;
			if (pSVar1 != null) {
				pSVar1.Remove((object)character);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004562")]
	[Address(RVA = "0x5B480F0", Offset = "0x5B470F0", VA = "0x5B480F0")]
	protected void FixedUpdate()
	{
		// Lifted from source/cpp/Characters/TitanColliderToggler.c (Characters.TitanColliderToggler$$FixedUpdate): 1 lines keep C-only constructs
		bool bVar1;
		bool bVar2;
		HashSet<BaseCharacter> pSVar3;
		TitanProjectileDetection pCVar4;

		pSVar3 = this.NearbyCharacters;
		if (pSVar3 == null) goto label_05c481d9;
		if (0 < ((HashSet<T>)&pSVar3.fields)._count) {
			Util.RemoveNullOrDead<BaseCharacter>((HashSet<T>)pSVar3);
		}
		bVar1 = this._look;
		bVar2 = this._enabled;
		if (bVar2 == false) {
			if (bVar1 == false) {
				pCVar4 = this._projectile;
				if (pCVar4 == null) goto label_05c481d9;
				if (pCVar4.Detect == false) {
					pSVar3 = this.NearbyCharacters;
					if (pSVar3 == null) goto label_05c481d9;
					if (pSVar3._count < 1) goto label_05c481cc;
				}
			}
		}
		else {
			if (bVar1 != false) goto label_05c481cc;
			pCVar4 = this._projectile;
			if (pCVar4 == null) {
	label_05c481d9: ;
				throw new NullReferenceException();
			}
			if (pCVar4.Detect != false) goto label_05c481cc;
			pSVar3 = this.NearbyCharacters;
			if (pSVar3 == null) goto label_05c481d9;
			if (pSVar3._count != 0) goto label_05c481cc;
		}
		this.SetColliders(bVar2 == false);
	label_05c481cc: ;
		this._look = false;
		return;
	}

	[Token(Token = "0x6004563")]
	[Address(RVA = "0x5B47DE0", Offset = "0x5B46DE0", VA = "0x5B47DE0")]
	protected void SetColliders(bool enable)
	{
		// Lifted from source/cpp/Characters/TitanColliderToggler.c (Characters.TitanColliderToggler$$SetColliders): 11 lines keep C-only constructs
		BaseTitan pCVar1;
		BaseTitanComponentCache pCVar2;
		List<Collider> __this_00;
		object pIVar3;
		System_Collections_Generic_List_Enumerator_object__o pSVar4;
		bool bVar5;
		System_Collections_Generic_List_Enumerator_object__o local_68;
		byte[] local_48 = new byte[16];
		Object local_38;

		pCVar1 = this.Owner;
		if (((pCVar1 == null) ||(pCVar2 = pCVar1.BaseTitanCache, pCVar2 == null)) ||(__this_00 = pCVar2.ToggleColliders, __this_00 == null)) {
			throw new NullReferenceException();
		}
		local_48.GetEnumerator((List<object>)__this_00);
		local_68._current = (object)local_38;
		local_68._list = (List<T>)local_48._0_8_;
		local_68._index = local_48._8_4_;
		local_68._version = local_48._12_4_;
		local_48._0_8_ = null;
		local_48._8_8_ = &local_68;
		pSVar4 = &local_68;
		if (enable) {
			while(true) {
				bVar5 = local_68.MoveNext();
				pIVar3 = local_68._current;
				if (!bVar5) break;
				bVar5 = ((Object)pIVar3 != null);
				if (bVar5) {
					pCVar1 = this.Owner;
					if (pCVar1 == null) {
						throw new NullReferenceException();
					}
					bVar5 = pCVar1.IsToggleColliderActive((Collider)pIVar3);
					if ((Object)pIVar3 == null) {
	label_05c47faf: ;
						throw new NullReferenceException();
					}
					pIVar3.enabled = bVar5;
				}
			}
		}
		else {
			while(true) {
				local_48._8_8_ = pSVar4;
				bVar5 = local_68.MoveNext();
				pIVar3 = local_68._current;
				if (!bVar5) break;
				bVar5 = ((Object)pIVar3 != null);
				pSVar4 = (System_Collections_Generic_List_Enumerator_object__o)local_48._8_8_;
				if (bVar5) {
					if ((Object)pIVar3 == null) goto label_05c47faf;
					pIVar3.enabled = false;
					pSVar4 = (System_Collections_Generic_List_Enumerator_object__o)local_48._8_8_;
				}
			}
		}
		local_68.Dispose();
		this._enabled = enable;
		return;
	}

	[Token(Token = "0x6004564")]
	[Address(RVA = "0x5B481E0", Offset = "0x5B471E0", VA = "0x5B481E0")]
	public TitanColliderToggler()
	{
		// Lifted from source/cpp/Characters/TitanColliderToggler.c (Characters.TitanColliderToggler$$.ctor): clean
		HashSet<BaseCharacter> __this_00;

		__this_00 = new HashSet<BaseCharacter>();
		this.NearbyCharacters = __this_00;
		base();
		return;
	}
}
