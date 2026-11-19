// ==================== AoTTG2 cross-reference ====================
// Type: Characters.DummyTitan
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/DummyTitan.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/DummyTitan.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using CustomSkins;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace Characters;

[Token(Token = "0x200071A")]
internal class DummyTitan : DummyCharacter
{
	[Token(Token = "0x400232F")]
	[FieldOffset(Offset = "0x30")]
	public BasicTitanSetup Setup;

	[Token(Token = "0x4002330")]
	[FieldOffset(Offset = "0x38")]
	public BasicTitanComponentCache Cache;

	[Token(Token = "0x4002331")]
	[FieldOffset(Offset = "0x40")]
	protected BasicTitanAnimations BasicAnimations;

	[Token(Token = "0x4002332")]
	[FieldOffset(Offset = "0x48")]
	private TitanCustomSkinLoader _customSkinLoader;

	[Token(Token = "0x4002333")]
	[FieldOffset(Offset = "0x50")]
	private Material _defaultBodyMaterial;

	[Token(Token = "0x600454D")]
	[Address(RVA = "0x5B45570", Offset = "0x5B44570", VA = "0x5B45570", Slot = "4")]
	protected override void Awake()
	{
		// Lifted from source/cpp/Characters/DummyTitan.c (Characters.DummyTitan$$Awake): 3 lines keep C-only constructs
		BasicTitanComponentCache* targetAddress;
		Rigidbody pUVar1;
		bool bVar2;
		GameObject pUVar3;
		BasicTitanComponentCache pCVar4;
		BasicTitanSetup pCVar5;
		MethodInfo pMVar6;
		BasicTitanAnimations __this_00;
		Transform __this_01;
		Object x;
		Material pUVar7;
		Material __this_02;
		Vector3 value;

		this.Awake();
		pUVar3 = this.gameObject;
		pCVar4 = new BasicTitanComponentCache(pUVar3);
		targetAddress = &this.Cache;
		this.Cache = pCVar4;
		pCVar4 = this.Cache;
		if ((pCVar4 != null) &&(pUVar1 = pCVar4.Rigidbody, pUVar1 != null)) {
			pUVar1.freezeRotation = true;
			pCVar4 = *targetAddress;
			if ((pCVar4 != null) &&(pUVar1 = pCVar4.Rigidbody, pUVar1 != null)) {
				pUVar1.useGravity = false;
				pUVar3 = this.gameObject;
				if (pUVar3 != null) {
					pCVar5 = pUVar3.AddComponent<BasicTitanSetup>();
					this.Setup = pCVar5;
					pUVar3 = this.gameObject;
					if (pUVar3 != null) {
						pMVar6 = (MethodInfo)pUVar3.AddComponent<TitanCustomSkinLoader>();
						this._customSkinLoader = (TitanCustomSkinLoader)pMVar6;
						__this_00 = new BasicTitanAnimations();
						this.BasicAnimations = __this_00;
						__this_01 = this.transform;
						if (__this_01 != null) {
							pMVar6 = null;
							value.z = 0.1;
							value.x = 0.1;
							value.y = 0.1;
							__this_01.localScale = value;
							x = (Object)this.GetBodyRenderer();
							bVar2 = (x != null);
							if (bVar2) {
								if (x == null) goto label_05c457e8;
								pUVar7 = x.sharedMaterial ;
								bVar2 = ((Object)pUVar7 != null) ;
								if (bVar2) {
									pUVar7 = x.sharedMaterial;
									__this_02 = new Material(pUVar7);
									this._defaultBodyMaterial = __this_02;
									return;
								}
							}
							return;
						}
					}
				}
			}
		}
	label_05c457e8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600454E")]
	[Address(RVA = "0x5B458A0", Offset = "0x5B448A0", VA = "0x5B458A0")]
	public void LoadSet(TitanCustomSet set, bool applySkins = true)
	{
		// Lifted from source/cpp/Characters/DummyTitan.c (Characters.DummyTitan$$LoadSet): clean
		BasicTitanSetup __this_00;

		this.RestoreDefaultMaterials();
		__this_00 = this.Setup;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Load(set);
		if (applySkins) {
			this.LoadSkin(set);
			return;
		}
		return;
	}

	[Token(Token = "0x600454F")]
	[Address(RVA = "0x5B45990", Offset = "0x5B44990", VA = "0x5B45990")]
	private void LoadSkin(TitanCustomSet set)
	{
		// Lifted from source/cpp/Characters/DummyTitan.c (Characters.DummyTitan$$LoadSkin): 1 lines keep C-only constructs
		TitanCustomSkinLoader __this_00;
		bool bVar1;
		int iVar2;
		int iVar3;
		int head;
		TitanCustomSkinSet skinSet;
		String value;
		Object[] pSVar4;
		object pIVar5;
		IEnumerator routine;

		skinSet = CharacterEditorTitanSkinsPanel.GetPreviewSkinSet();
		if (set != null) {
			iVar2 = set.GetBody();
			iVar3 = set.GetHead();
			iVar2 = TitanSkinPicker.FindSlotIndex(skinSet, iVar2, iVar3, false);
			iVar3 = set.GetBody();
			head = set.GetHead();
			value = TitanSkinPicker.GetSkinUrls(skinSet, iVar2, iVar3, head, false);
			bVar1 = String.IsNullOrEmpty(value);
			if (bVar1) {
				return;
			}
			__this_00 = this._customSkinLoader;
			pSVar4 = (Object[])new object[1];
			if (pSVar4 != null) {
				if (value != null) {
					pIVar5 = il2cpp_vm_Object_IsInst((object)value, (((pSVar4.obj).klass)._1).element_class);
					if (pIVar5 == null) {
						pIVar5 = new ArrayTypeMismatchException();
						throw pIVar5;
					}
				}
				if ((int)pSVar4.Length == 0) {
					throw new IndexOutOfRangeException();
				}
				pSVar4[0] = (object)value;
				if (__this_00 != null) {
					routine = __this_00.LoadSkinsFromRPC(pSVar4);
					__this_00.StartCoroutine(routine);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004550")]
	[Address(RVA = "0x5B458E0", Offset = "0x5B448E0", VA = "0x5B458E0")]
	private void RestoreDefaultMaterials()
	{
		// Lifted from source/cpp/Characters/DummyTitan.c (Characters.DummyTitan$$RestoreDefaultMaterials): clean
		Material x;
		bool bVar1;
		Object x_00;

		x = this._defaultBodyMaterial;
		bVar1 = ((Object)x == null);
		if (!bVar1) {
			x_00 = (Object)this.GetBodyRenderer();
			bVar1 = (x_00 == null);
			if (!bVar1) {
				if (x_00 == null) {
					throw new NullReferenceException();
				}
				x_00.material = this._defaultBodyMaterial;
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004551")]
	[Address(RVA = "0x5B45AE0", Offset = "0x5B44AE0", VA = "0x5B45AE0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Characters/DummyTitan.c (Characters.DummyTitan$$OnDestroy): clean
		Material pUVar1;
		bool bVar2;

		pUVar1 = this._defaultBodyMaterial;
		bVar2 = ((Object)pUVar1 != null);
		if (bVar2) {
			pUVar1 = this._defaultBodyMaterial;
			Object.Destroy((Object)pUVar1);
			return;
		}
		return;
	}

	[Token(Token = "0x6004552")]
	[Address(RVA = "0x5B457F0", Offset = "0x5B447F0", VA = "0x5B457F0")]
	private Renderer GetBodyRenderer()
	{
		// Lifted from source/cpp/Characters/DummyTitan.c (Characters.DummyTitan$$GetBodyRenderer): clean
		bool bVar1;
		Transform pUVar2;
		SkinnedMeshRenderer pUVar3;

		pUVar2 = this.transform;
		if (pUVar2 != null) {
			pUVar2 = pUVar2.Find("Body");
			bVar1 = ((Object)pUVar2 == null);
			if (bVar1) {
				return null;
			}
			if (pUVar2 != null) {
				pUVar3 = pUVar2.GetComponent<SkinnedMeshRenderer>();
				return (Renderer)pUVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004553")]
	[Address(RVA = "0x5B45B60", Offset = "0x5B44B60", VA = "0x5B45B60", Slot = "5")]
	protected override string GetIdleAnimation()
	{
		// Lifted from source/cpp/Characters/DummyTitan.c (Characters.DummyTitan$$GetIdleAnimation): clean
		BasicTitanAnimations pCVar1;
		String pSVar2;

		pCVar1 = this.BasicAnimations;
		if (pCVar1 == null) {
			throw new NullReferenceException();
		}
		pSVar2 = pCVar1.get_Idle() ;
		return pSVar2;
	}

	[Token(Token = "0x6004554")]
	[Address(RVA = "0x5B45B90", Offset = "0x5B44B90", VA = "0x5B45B90", Slot = "6")]
	protected override string GetEmoteAnimation(string emote)
	{
		// Lifted from source/cpp/Characters/DummyTitan.c (Characters.DummyTitan$$GetEmoteAnimation): 5 lines keep C-only constructs
		BasicTitanAnimations pCVar1;
		bool bVar2;
		String* ppSVar3;

		bVar2 = (emote == "Laugh");
		if (bVar2) {
			pCVar1 = this.BasicAnimations;
			if (pCVar1 == null) {
	label_05c45ca5: ;
				throw new NullReferenceException();
			}
			ppSVar3 = &pCVar1.EmoteLaugh;
		}
		else {
			bVar2 = (emote == "Nod");
			if (bVar2) {
				pCVar1 = this.BasicAnimations;
				if (pCVar1 == null) goto label_05c45ca5;
				ppSVar3 = &pCVar1.EmoteNod;
			}
			else {
				bVar2 = (emote == "Shake");
				if (bVar2) {
					pCVar1 = this.BasicAnimations;
					if (pCVar1 == null) goto label_05c45ca5;
					ppSVar3 = &pCVar1.EmoteShake;
				}
				else {
					bVar2 = (emote == "Roar");
					if (bVar2) {
						pCVar1 = this.BasicAnimations;
						if (pCVar1 == null) goto label_05c45ca5;
						ppSVar3 = &pCVar1.EmoteRoar;
					}
					else {
						ppSVar3 = *(String**)(g_data_07556758 + 0xb8);
					}
				}
			}
		}
		return *ppSVar3;
	}

	[Token(Token = "0x6004555")]
	[Address(RVA = "0x5B45CB0", Offset = "0x5B44CB0", VA = "0x5B45CB0")]
	public DummyTitan()
	{
		// Lifted from source/cpp/Characters/DummyTitan.c (Characters.DummyTitan$$.ctor): clean
		base();
		return;
	}
}
