// ==================== AoTTG2 cross-reference ====================
// Type: Characters.WallColossalComponentCache
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/WallColossalComponentCache.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Shifters/WallColossal/WallColossalComponentCache.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000703")]
internal class WallColossalComponentCache : ShifterComponentCache
{
	[Token(Token = "0x4002136")]
	[FieldOffset(Offset = "0x100")]
	public ParticleSystem ColossalSteam1;

	[Token(Token = "0x4002137")]
	[FieldOffset(Offset = "0x108")]
	public ParticleSystem ColossalSteam2;

	[Token(Token = "0x4002138")]
	[FieldOffset(Offset = "0x110")]
	public Transform LeftHand;

	[Token(Token = "0x4002139")]
	[FieldOffset(Offset = "0x118")]
	public Transform RightHand;

	[Token(Token = "0x400213A")]
	[FieldOffset(Offset = "0x120")]
	public ParticleSystem LeftHandSteam;

	[Token(Token = "0x400213B")]
	[FieldOffset(Offset = "0x128")]
	public ParticleSystem RightHandSteam;

	[Token(Token = "0x400213C")]
	[FieldOffset(Offset = "0x130")]
	public GameObject SteamWarningZone;

	[Token(Token = "0x400213D")]
	[FieldOffset(Offset = "0x138")]
	public WallColossalSteamWarningZone SteamWarningZoneComponent;

	[Token(Token = "0x60043AA")]
	[Address(RVA = "0x5B1DDA0", Offset = "0x5B1CDA0", VA = "0x5B1DDA0")]
	public WallColossalComponentCache(GameObject owner)
	{
		// Lifted from source/cpp/Characters/WallColossalComponentCache.c (Characters.WallColossalComponentCache$$.ctor): 16 lines keep C-only constructs
		GameObject* targetAddress;
		byte bVar1;
		BaseHitbox pCVar2;
		Object x;
		bool bVar3;
		Transform pUVar4;
		ParticleSystem pUVar5;
		GameObject pUVar6;
		Transform pUVar7;
		WallColossalSteamWarningZone pCVar8;
		BoxCollider pUVar9;
		Rigidbody __this_00;
		BoxCollider __this_01;
		Vector3 UVar10;
		Vector3 value;
		Quaternion value_00;

		base(owner);
		pUVar4 = this.Transform;
		if (pUVar4 == null) goto label_05c1e48b;
		pUVar4 = pUVar4.Find("Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/neck/head");
		this.Head = pUVar4;
		pUVar4 = this.Transform;
		if (pUVar4 == null) goto label_05c1e48b;
		pUVar4 = pUVar4.Find("Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/neck");
		this.Neck = pUVar4;
		pUVar4 = this.Transform;
		if (pUVar4 == null) goto label_05c1e48b;
		pUVar4 = pUVar4.Find("Armature_VER2/Core");
		this.Core = pUVar4;
		pUVar4 = this.Transform;
		if (pUVar4 == null) goto label_05c1e48b;
		pUVar4 = pUVar4.Find("Armature_VER2/Core/Controller_Body/hip");
		this.Hip = pUVar4;
		pUVar4 = this.Neck;
		if ((pUVar4 == null) ||(pUVar4 = pUVar4.Find("ColossalSteam1"), pUVar4 == null)) goto label_05c1e48b;
		pUVar5 = pUVar4.GetComponent<ParticleSystem>();
		this.ColossalSteam1 = pUVar5;
		pUVar4 = this.Neck;
		if ((pUVar4 == null) ||(pUVar4 = pUVar4.Find("ColossalSteam2"), pUVar4 == null)) goto label_05c1e48b;
		pUVar5 = pUVar4.GetComponent<ParticleSystem>();
		this.ColossalSteam2 = pUVar5;
		pUVar4 = this.Transform;
		if (pUVar4 == null) goto label_05c1e48b;
		pUVar4 = pUVar4.Find("Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_L/upper_arm_L/forearm_L/hand_L");
		this.LeftHand = pUVar4;
		pUVar4 = this.Transform;
		if (pUVar4 == null) goto label_05c1e48b;
		pUVar4 = pUVar4.Find("Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_R/upper_arm_R/forearm_R/hand_R");
		this.RightHand = pUVar4;
		pUVar4 = this.Transform;
		if ((pUVar4 == null) ||(pUVar4 = pUVar4.Find("Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_L/upper_arm_L/forearm_L/ArmSmokeParticle"), pUVar4 == null)) goto label_05c1e48b;
		pUVar5 = pUVar4.GetComponent<ParticleSystem>();
		this.LeftHandSteam = pUVar5;
		pUVar4 = this.Transform;
		if ((pUVar4 == null) ||(pUVar4 = pUVar4.Find("Armature_VER2/Core/Controller_Body/hip/spine/chest/upperchest/shoulder_R/upper_arm_R/forearm_R/ArmSmokeParticle"), pUVar4 == null)) goto label_05c1e48b;
		pUVar5 = pUVar4.GetComponent<ParticleSystem>();
		this.RightHandSteam = pUVar5;
		this.LoadAudio("Shifters/Prefabs/ShifterSounds", this.Neck);
		this.LoadAudio("Titans/Prefabs/TitanSounds", this.Neck);
		pCVar2 = this.SteamHitbox;
		bVar3 = ((Object)pCVar2 != null);
		if (!bVar3) {
			return;
		}
		pCVar2 = this.SteamHitbox;
		if (pCVar2 == null) goto label_05c1e48b;
		x = (Object)pCVar2._collider;
		bVar3 = (x != null);
		if (!bVar3) {
			return;
		}
		pUVar6 = new GameObject("SteamWarningZone");
		targetAddress = &this.SteamWarningZone;
		this.SteamWarningZone = pUVar6;
		pUVar6 = this.SteamWarningZone;
		if (pUVar6 == null) goto label_05c1e48b;
		pUVar4 = pUVar6.transform;
		pCVar2 = this.SteamHitbox;
		if (((pCVar2 == null) ||(pUVar7 = pCVar2.transform, pUVar7 == null)) ||(pUVar7 = pUVar7.parent, pUVar4 == null)) goto label_05c1e48b;
		pUVar4.SetParent(pUVar7);
		if (*targetAddress == null) goto label_05c1e48b;
		pUVar4 = (*targetAddress).transform;
		pCVar2 = this.SteamHitbox;
		if (((pCVar2 == null) ||(pUVar7 = pCVar2.transform, pUVar7 == null)) ||(UVar10 = pUVar7.localPosition, pUVar4 == null)) goto label_05c1e48b;
		pUVar4.localPosition = UVar10;
		if (*targetAddress == null) goto label_05c1e48b;
		pUVar4 = (*targetAddress).transform;
		pCVar2 = this.SteamHitbox;
		if (((pCVar2 == null) ||(pUVar7 = pCVar2.transform, pUVar7 == null)) ||(value_00 = pUVar7.localRotation, pUVar4 == null)) goto label_05c1e48b;
		pUVar4.localRotation = value_00;
		pUVar6 = *targetAddress;
		if (pUVar6 == null) goto label_05c1e48b;
		pUVar6.layer = PhysicsLayer.CharacterDetection;
		if (*targetAddress == null) goto label_05c1e48b;
		pCVar8 = (*targetAddress).AddComponent<WallColossalSteamWarningZone>();
		this.SteamWarningZoneComponent = pCVar8;
		pCVar2 = this.SteamHitbox;
		if (pCVar2 == null) goto label_05c1e48b;
		pUVar9 = (BoxCollider)pCVar2._collider;
		if (pUVar9 == null) {
	label_05c1e390: ;
			__this_01 = null;
			pUVar6 = *targetAddress;
		}
		else {
			bVar1 = (typeof(BoxCollider)._2).typeHierarchyDepth;
			if ((pUVar9.klass._2).typeHierarchyDepth < bVar1) goto label_05c1e390;
			__this_01 = null;
			if ((pUVar9.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(BoxCollider) ) {
				__this_01 = pUVar9;
			}
			pUVar6 = *targetAddress;
		}
		if (((pUVar6 != null) &&(pUVar9 = pUVar6.AddComponent<BoxCollider>(), __this_01 != null)) &&(UVar10 = __this_01.center, pUVar9 != null)) {
			pUVar9.center = UVar10;
			UVar10 = __this_01.size;
			value.x = UVar10.x * 2.4;
			value.y = UVar10.y * 2.4;
			value.z = UVar10.z * 2.4;
			pUVar9.size = value;
			pUVar9.isTrigger = true;
			if ((*targetAddress != null) &&(__this_00 = (*targetAddress).AddComponent<Rigidbody>() , __this_00 != null)) {
				__this_00.isKinematic = true;
				__this_00.useGravity = false;
				if (*targetAddress != null) {
					(*targetAddress).SetActive(false);
					return;
				}
			}
		}
	label_05c1e48b: ;
		throw new NullReferenceException();
	}
}
