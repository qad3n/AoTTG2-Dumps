// ==================== AoTTG2 cross-reference ====================
// Type: Utility.BaseComponentCache
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Utility/BaseComponentCache.c
// Prior real C# source (older reference): Assets/Scripts/Utility/BaseComponentCache.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Pun;
using UnityEngine;

namespace Utility;

[Token(Token = "0x200090E")]
internal class BaseComponentCache
{
	[Token(Token = "0x4002DC3")]
	[FieldOffset(Offset = "0x10")]
	public Transform Transform;

	[Token(Token = "0x4002DC4")]
	[FieldOffset(Offset = "0x18")]
	public Rigidbody Rigidbody;

	[Token(Token = "0x4002DC5")]
	[FieldOffset(Offset = "0x20")]
	public PhotonView PhotonView;

	[Token(Token = "0x4002DC6")]
	[FieldOffset(Offset = "0x28")]
	public List<Collider> Colliders;

	[Token(Token = "0x4002DC7")]
	[FieldOffset(Offset = "0x30")]
	public Dictionary<string, AudioSource> AudioSources;

	[Token(Token = "0x60055F2")]
	[Address(RVA = "0x5CCB650", Offset = "0x5CCA650", VA = "0x5CCB650")]
	public BaseComponentCache(GameObject owner)
	{
		// Lifted from source/cpp/Utility/BaseComponentCache.c (Utility.BaseComponentCache$$.ctor): 4 lines keep C-only constructs
		List<Collider>* targetAddress;
		int piVar1;
		uint uVar2;
		Collider item;
		Collider[] pUVar3;
		List<Collider> pSVar5;
		Dictionary<string, AudioSource> __this_00;
		Transform pUVar6;
		Rigidbody pUVar7;
		PhotonView pPVar8;
		Object[] pSVar9;
		ulong uVar10;
		ulong uVar11;

		pSVar5 = new List<Collider>();
		targetAddress = &this.Colliders;
		this.Colliders = pSVar5;
		__this_00 = new Dictionary<string, AudioSource>();
		this.AudioSources = __this_00;
		base();
		if (owner != null) {
			pUVar6 = owner.transform;
			this.Transform = pUVar6;
			pUVar7 = owner.GetComponent<Rigidbody>();
			this.Rigidbody = pUVar7;
			pPVar8 = owner.GetComponent<PhotonView>() ;
			this.PhotonView = pPVar8;
			pSVar9 = owner.GetComponentsInChildren<Collider>();
			if (pSVar9 != null) {
				if (0 < (int)pSVar9.Length) {
					uVar10 = pSVar9.Length & 0xffffffff;
					uVar11 = 0;
					do {
						if (uVar10 <= uVar11) {
							throw new IndexOutOfRangeException();
						}
						pSVar5 = *targetAddress;
						if (pSVar5 == null) goto label_05dcb856;
						item = (Collider)pSVar9[uVar11];
						piVar1 = &pSVar5._version;
						*piVar1 = *piVar1 + 1;
						pUVar3 = pSVar5._items;
						if (pUVar3 == null) goto label_05dcb856;
						uVar2 = pSVar5._size;
						if (uVar2 < (uint)pUVar3.Length) {
							pSVar5._size = uVar2 + 1;
							pUVar3[(int)uVar2] = item;
						}
						else {
							pSVar5.AddWithResize((object)item);
						}
						uVar11 = uVar11 + 1;
						uVar2 = (uint)pSVar9.Length;
						uVar10 = (ulong)uVar2;
					} while ((long)uVar11 < (long)(int)uVar2);
				}
				return;
			}
		}
	label_05dcb856: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60055F3")]
	[Address(RVA = "0x5CE0DC0", Offset = "0x5CDFDC0", VA = "0x5CE0DC0")]
	public void LoadAudio(string prefab, Transform parent)
	{
		// Lifted from source/cpp/Utility/BaseComponentCache.c (Utility.BaseComponentCache$$LoadAudio): clean
		Component __this_00;
		Dictionary<object, object> __this_01;
		uint uVar1;
		GameObject __this_02;
		Transform pUVar2;
		Object[] pSVar3;
		Object __this_03;
		String pSVar4;
		uint uVar5;

		pSVar4 = ResourcePaths.Characters;
		__this_02 = ResourceManager.InstantiateAsset<GameObject>(pSVar4, prefab, false, false);
		if (__this_02 != null) {
			pUVar2 = __this_02.transform;
			if (pUVar2 != null) {
				pUVar2.SetParent(parent);
				pUVar2 = __this_02.transform;
				if (pUVar2 != null) {
					pUVar2.localPosition = (Vector3)(Vector3.zeroVector);
					pSVar3 = __this_02.GetComponentsInChildren<AudioSource>();
					if (pSVar3 != null) {
						uVar1 = (uint)pSVar3.Length;
						if (0 < (int)uVar1) {
							uVar5 = 0;
							do {
								if (uVar1 <= uVar5) {
									throw new IndexOutOfRangeException();
								}
								__this_00 = (Component)pSVar3[(int)uVar5];
								if (__this_00 == null) goto label_05de0f8e;
								__this_01 = (Dictionary<object, object>)this.AudioSources;
								__this_03 = (Object)__this_00.gameObject;
								if (__this_03 == null) goto label_05de0f8e;
								pSVar4 = __this_03.name;
								if (__this_01 == null) goto label_05de0f8e;
								__this_01.Add((object)pSVar4, (object)__this_00);
								uVar5 = uVar5 + 1;
								uVar1 = (uint)pSVar3.Length;
							} while ((int)uVar5 < (int)uVar1);
						}
						return;
					}
				}
			}
		}
	label_05de0f8e: ;
		throw new NullReferenceException();
	}
}
