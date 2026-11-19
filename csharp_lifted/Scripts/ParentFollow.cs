// ==================== AoTTG2 cross-reference ====================
// Type: ParentFollow
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ParentFollow.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/ParentFollow.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Characters;
using Il2CppDummyDll;
using UnityEngine;

[Token(Token = "0x2000009")]
public class ParentFollow : MonoBehaviour
{
	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x20")]
	private Transform bTransform;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x28")]
	public bool isActiveInScene;

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x30")]
	private Transform parent;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x38")]
	private BaseCharacter owner;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x40")]
	private SkinnedMeshRenderer ownRenderer;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x48")]
	private int appliedRenderStateVersion;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x50")]
	private Material tintedMaterial;

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x57451E0", Offset = "0x57441E0", VA = "0x57451E0")]
	private void Awake()
	{
		// Lifted from source/cpp/ParentFollow.c (ParentFollow$$Awake): clean
		Transform pUVar1;
		SkinnedMeshRenderer pUVar2;

		pUVar1 = this.transform;
		this.bTransform = pUVar1;
		pUVar2 = this.GetComponent<SkinnedMeshRenderer>() ;
		this.ownRenderer = pUVar2;
		this.isActiveInScene = true;
		return;
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x5744AB0", Offset = "0x5743AB0", VA = "0x5744AB0")]
	public void SetMaterial(Material material, Color? tint)
	{
		// Lifted from source/cpp/ParentFollow.c (ParentFollow$$SetMaterial): 3 lines keep C-only constructs
		Material* targetAddress;
		Renderer pUVar1;
		bool bVar2;
		Material pUVar3;

		pUVar3 = this.tintedMaterial;
		targetAddress = &this.tintedMaterial;
		bVar2 = ((Object)pUVar3 != null);
		if (bVar2) {
			pUVar3 = *targetAddress;
			Object.Destroy((Object)pUVar3);
		}
		pUVar1 = (Renderer)this.ownRenderer;
		if (pUVar1 != null) {
			pUVar1.material = material;
			*targetAddress = null;
			if (tint.hasValue == false) {
				return;
			}
			pUVar1 = (Renderer)this.ownRenderer;
			if (pUVar1 != null) {
				pUVar3 = pUVar1.material;
				if (pUVar3 != null) {
					pUVar3.color = tint.value;
					pUVar1 = (Renderer)this.ownRenderer;
					if (pUVar1 != null) {
						pUVar3 = pUVar1.sharedMaterial;
						*targetAddress = pUVar3;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x5745250", Offset = "0x5744250", VA = "0x5745250")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/ParentFollow.c (ParentFollow$$OnDestroy): clean
		Material pUVar1;
		bool bVar2;

		pUVar1 = this.tintedMaterial;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this.tintedMaterial;
			Object.Destroy((Object)pUVar1);
			return;
		}
		return;
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x57440F0", Offset = "0x57430F0", VA = "0x57440F0")]
	public void RemoveParent()
	{
		// Lifted from source/cpp/ParentFollow.c (ParentFollow$$RemoveParent): clean
		this.parent = null;
		this.owner = null;
		return;
	}

	[Token(Token = "0x600002B")]
	[Address(RVA = "0x5744C00", Offset = "0x5743C00", VA = "0x5744C00")]
	public void SetParent(Transform transform)
	{
		// Lifted from source/cpp/ParentFollow.c (ParentFollow$$SetParent): clean
		Transform pUVar1;
		BaseCharacter method_00;
		Quaternion value;
		Vector3 value_00;

		this.parent = transform;
		if (transform != null) {
			pUVar1 = this.bTransform;
			value_00 = transform.position;
			if (pUVar1 != null) {
				pUVar1.position = value_00;
				pUVar1 = this.bTransform;
				value = transform.rotation;
				if (pUVar1 != null) {
					pUVar1.rotation = value;
					method_00 = transform.GetComponentInParent<BaseCharacter>();
					this.owner = method_00;
					this.appliedRenderStateVersion = -1;
					this.FollowRenderState();
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600002C")]
	[Address(RVA = "0x5745390", Offset = "0x5744390", VA = "0x5745390")]
	private void Update()
	{
		// Lifted from source/cpp/ParentFollow.c (ParentFollow$$Update): clean
		Transform pUVar1;
		Transform __this_00;
		bool bVar2;
		GameObject cachedObject;
		Vector3 value;

		if (this.isActiveInScene == false) {
			return;
		}
		pUVar1 = this.parent;
		bVar2 = ((Object)pUVar1 == null);
		if (bVar2) {
			cachedObject = this.gameObject;
			ClothFactory.DisposeObject(cachedObject);
			return;
		}
		pUVar1 = this.parent;
		if (pUVar1 != null) {
			__this_00 = this.bTransform;
			value = pUVar1.position;
			if (__this_00 != null) {
				__this_00.position = value;
				this.FollowRenderState();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600002D")]
	[Address(RVA = "0x57452D0", Offset = "0x57442D0", VA = "0x57452D0")]
	private void FollowRenderState()
	{
		// Lifted from source/cpp/ParentFollow.c (ParentFollow$$FollowRenderState): clean
		int iVar1;
		BaseCharacter pCVar2;
		Object x;
		AnimationHandler __this_00;
		bool bVar3;

		pCVar2 = this.owner;
		bVar3 = ((Object)pCVar2 == null);
		if (!bVar3) {
			x = (Object)this.ownRenderer;
			bVar3 = (x == null);
			if (!bVar3) {
				pCVar2 = this.owner;
				if (pCVar2 == null) {
					throw new NullReferenceException();
				}
				__this_00 = pCVar2.Animation;
				if ((__this_00 != null) &&(iVar1 = __this_00._renderStateVersion, this.appliedRenderStateVersion != iVar1 )) {
					this.appliedRenderStateVersion = iVar1;
					__this_00.ApplyRenderState((Renderer)this.ownRenderer);
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x600002E")]
	[Address(RVA = "0x5745470", Offset = "0x5744470", VA = "0x5745470")]
	public ParentFollow()
	{
		// Lifted from source/cpp/ParentFollow.c (ParentFollow$$.ctor): clean
		this.appliedRenderStateVersion = -1;
		base();
		return;
	}
}
