// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HumanSetup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/HumanSetup.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/HumanSetup.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using PatreonEffects;
using Settings;
using SimpleJSONFixed;
using UnityEngine;

namespace Characters;

[Token(Token = "0x2000514")]
internal class HumanSetup : MonoBehaviour
{
	[Token(Token = "0x40017B1")]
	[FieldOffset(Offset = "0x0")]
	public static JSONNode CostumeInfo;

	[Token(Token = "0x40017B2")]
	[FieldOffset(Offset = "0x8")]
	public static JSONNode HairInfo;

	[Token(Token = "0x40017B3")]
	[FieldOffset(Offset = "0x10")]
	public static Material WeaponTrailMaterial;

	[Token(Token = "0x40017B4")]
	[FieldOffset(Offset = "0x20")]
	public GameObject _mount_chest;

	[Token(Token = "0x40017B5")]
	[FieldOffset(Offset = "0x28")]
	public GameObject _mount_3dmg;

	[Token(Token = "0x40017B6")]
	[FieldOffset(Offset = "0x30")]
	public GameObject _mount_gas_l;

	[Token(Token = "0x40017B7")]
	[FieldOffset(Offset = "0x38")]
	public GameObject _mount_gas_r;

	[Token(Token = "0x40017B8")]
	[FieldOffset(Offset = "0x40")]
	public GameObject _mount_gun_mag_l;

	[Token(Token = "0x40017B9")]
	[FieldOffset(Offset = "0x48")]
	public GameObject _mount_gun_mag_r;

	[Token(Token = "0x40017BA")]
	[FieldOffset(Offset = "0x50")]
	public GameObject _mount_weapon_l;

	[Token(Token = "0x40017BB")]
	[FieldOffset(Offset = "0x58")]
	public GameObject _mount_weapon_r;

	[Token(Token = "0x40017BC")]
	[FieldOffset(Offset = "0x60")]
	public GameObject _mount_ts_l;

	[Token(Token = "0x40017BD")]
	[FieldOffset(Offset = "0x68")]
	public GameObject _mount_ts_r;

	[Token(Token = "0x40017BE")]
	[FieldOffset(Offset = "0x70")]
	public GameObject _mount_back;

	[Token(Token = "0x40017BF")]
	[FieldOffset(Offset = "0x78")]
	public GameObject _mount_head_decor;

	[Token(Token = "0x40017C0")]
	[FieldOffset(Offset = "0x80")]
	public GameObject _mount_hat;

	[Token(Token = "0x40017C1")]
	[FieldOffset(Offset = "0x88")]
	public GameObject _part_3dmg;

	[Token(Token = "0x40017C2")]
	[FieldOffset(Offset = "0x90")]
	public GameObject _part_belt;

	[Token(Token = "0x40017C3")]
	[FieldOffset(Offset = "0x98")]
	public GameObject _part_gas_l;

	[Token(Token = "0x40017C4")]
	[FieldOffset(Offset = "0xA0")]
	public GameObject _part_gas_r;

	[Token(Token = "0x40017C5")]
	[FieldOffset(Offset = "0xA8")]
	public GameObject _part_arm_l;

	[Token(Token = "0x40017C6")]
	[FieldOffset(Offset = "0xB0")]
	public GameObject _part_arm_r;

	[Token(Token = "0x40017C7")]
	[FieldOffset(Offset = "0xB8")]
	public GameObject _part_blade_l;

	[Token(Token = "0x40017C8")]
	[FieldOffset(Offset = "0xC0")]
	public GameObject _part_blade_r;

	[Token(Token = "0x40017C9")]
	[FieldOffset(Offset = "0xC8")]
	public GameObject _part_brand_1;

	[Token(Token = "0x40017CA")]
	[FieldOffset(Offset = "0xD0")]
	public GameObject _part_brand_2;

	[Token(Token = "0x40017CB")]
	[FieldOffset(Offset = "0xD8")]
	public GameObject _part_brand_3;

	[Token(Token = "0x40017CC")]
	[FieldOffset(Offset = "0xE0")]
	public GameObject _part_brand_4;

	[Token(Token = "0x40017CD")]
	[FieldOffset(Offset = "0xE8")]
	public GameObject _part_cape;

	[Token(Token = "0x40017CE")]
	[FieldOffset(Offset = "0xF0")]
	public GameObject _part_chest;

	[Token(Token = "0x40017CF")]
	[FieldOffset(Offset = "0xF8")]
	public GameObject _part_chest_1;

	[Token(Token = "0x40017D0")]
	[FieldOffset(Offset = "0x100")]
	public GameObject _part_chest_2;

	[Token(Token = "0x40017D1")]
	[FieldOffset(Offset = "0x108")]
	public GameObject _part_chest_3;

	[Token(Token = "0x40017D2")]
	[FieldOffset(Offset = "0x110")]
	public GameObject _part_eye;

	[Token(Token = "0x40017D3")]
	[FieldOffset(Offset = "0x118")]
	public GameObject _part_face;

	[Token(Token = "0x40017D4")]
	[FieldOffset(Offset = "0x120")]
	public GameObject _part_glass;

	[Token(Token = "0x40017D5")]
	[FieldOffset(Offset = "0x128")]
	public GameObject _part_hair;

	[Token(Token = "0x40017D6")]
	[FieldOffset(Offset = "0x130")]
	public GameObject _part_hair_1;

	[Token(Token = "0x40017D7")]
	[FieldOffset(Offset = "0x138")]
	public GameObject _part_hand_l;

	[Token(Token = "0x40017D8")]
	[FieldOffset(Offset = "0x140")]
	public GameObject _part_hand_r;

	[Token(Token = "0x40017D9")]
	[FieldOffset(Offset = "0x148")]
	public GameObject _part_head;

	[Token(Token = "0x40017DA")]
	[FieldOffset(Offset = "0x150")]
	public GameObject _part_leg;

	[Token(Token = "0x40017DB")]
	[FieldOffset(Offset = "0x158")]
	public GameObject _part_upper_body;

	[Token(Token = "0x40017DC")]
	[FieldOffset(Offset = "0x160")]
	public GameObject _mount_cloth;

	[Token(Token = "0x40017DD")]
	[FieldOffset(Offset = "0x168")]
	public HumanSetupMeshes _meshes;

	[Token(Token = "0x40017DE")]
	[FieldOffset(Offset = "0x170")]
	public HumanSetupTextures _textures;

	[Token(Token = "0x40017DF")]
	[FieldOffset(Offset = "0x178")]
	public MeleeWeaponTrail LeftTrail;

	[Token(Token = "0x40017E0")]
	[FieldOffset(Offset = "0x180")]
	public MeleeWeaponTrail RightTrail;

	[Token(Token = "0x40017E1")]
	[FieldOffset(Offset = "0x188")]
	public GameObject _part_back;

	[Token(Token = "0x40017E2")]
	[FieldOffset(Offset = "0x190")]
	public GameObject _part_head_decor;

	[Token(Token = "0x40017E3")]
	[FieldOffset(Offset = "0x198")]
	public GameObject _part_hat;

	[Token(Token = "0x40017E4")]
	[FieldOffset(Offset = "0x1A0")]
	public string[] TierEffects;

	[Token(Token = "0x40017E5")]
	[FieldOffset(Offset = "0x1A8")]
	public Transform[] LeftTierEffects;

	[Token(Token = "0x40017E6")]
	[FieldOffset(Offset = "0x1B0")]
	public Transform[] RightTierEffects;

	[Token(Token = "0x40017E7")]
	[FieldOffset(Offset = "0x1B8")]
	public ParticleSystem LeftShingEffect;

	[Token(Token = "0x40017E8")]
	[FieldOffset(Offset = "0x1C0")]
	public ParticleSystem RightShingEffect;

	[Token(Token = "0x40017E9")]
	[FieldOffset(Offset = "0x1C8")]
	public HumanCustomSet CustomSet;

	[Token(Token = "0x40017EA")]
	[FieldOffset(Offset = "0x1D0")]
	public HumanWeapon Weapon;

	[Token(Token = "0x40017EB")]
	[FieldOffset(Offset = "0x1D8")]
	public JSONNode CurrentCostume;

	[Token(Token = "0x40017EC")]
	[FieldOffset(Offset = "0x1E0")]
	public JSONNode CurrentHair;

	[Token(Token = "0x40017ED")]
	[FieldOffset(Offset = "0x1E8")]
	public bool IsDeadBody;

	[Token(Token = "0x40017EE")]
	[FieldOffset(Offset = "0x1E9")]
	public bool Deleted;

	[Token(Token = "0x40017EF")]
	[FieldOffset(Offset = "0x18")]
	public static int EyeCount;

	[Token(Token = "0x40017F0")]
	[FieldOffset(Offset = "0x1C")]
	public static int FaceCount;

	[Token(Token = "0x40017F1")]
	[FieldOffset(Offset = "0x20")]
	public static int GlassCount;

	[Token(Token = "0x40017F2")]
	[FieldOffset(Offset = "0x24")]
	public static int CostumeMCount;

	[Token(Token = "0x40017F3")]
	[FieldOffset(Offset = "0x28")]
	public static int CostumeFCount;

	[Token(Token = "0x40017F4")]
	[FieldOffset(Offset = "0x2C")]
	public static int HairMCount;

	[Token(Token = "0x40017F5")]
	[FieldOffset(Offset = "0x30")]
	public static int HairFCount;

	[Token(Token = "0x40017F6")]
	[FieldOffset(Offset = "0x34")]
	public static int BackCount;

	[Token(Token = "0x40017F7")]
	[FieldOffset(Offset = "0x38")]
	public static int HeadCount;

	[Token(Token = "0x40017F8")]
	[FieldOffset(Offset = "0x3C")]
	public static int HatCount;

	[Token(Token = "0x40017F9")]
	[FieldOffset(Offset = "0x40")]
	public static HashSet<string> UniqueItems;

	[Token(Token = "0x40017FA")]
	[FieldOffset(Offset = "0x1F0")]
	private readonly Dictionary<Renderer, Material> _effectMaterialCache;

	[Token(Token = "0x6003562")]
	[Address(RVA = "0x41E70B0", Offset = "0x41E70B0", VA = "0x41E70B0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6003563")]
	[Address(RVA = "0x41E7720", Offset = "0x41E7720", VA = "0x41E7720")]
	private void Awake()
	{
	}

	[Token(Token = "0x6003564")]
	[Address(RVA = "0x41E7E20", Offset = "0x41E7E20", VA = "0x41E7E20")]
	public static int GetCostumeCount(bool male)
	{
		return default(int);
	}

	[Token(Token = "0x6003565")]
	[Address(RVA = "0x41E7F20", Offset = "0x41E7F20", VA = "0x41E7F20")]
	public static int GetHairCount()
	{
		return default(int);
	}

	[Token(Token = "0x6003566")]
	[Address(RVA = "0x41E7FC0", Offset = "0x41E7FC0", VA = "0x41E7FC0")]
	public void Copy(InGameCharacterSettings settings)
	{
	}

	[Token(Token = "0x6003567")]
	[Address(RVA = "0x41E8310", Offset = "0x41E8310", VA = "0x41E8310")]
	public void Load(HumanCustomSet customSet, HumanWeapon weapon, bool isDeadBody = false)
	{
	}

	[Token(Token = "0x6003568")]
	[Address(RVA = "0x41E9C00", Offset = "0x41E9C00", VA = "0x41E9C00")]
	public void DeleteDie()
	{
	}

	[Token(Token = "0x6003569")]
	[Address(RVA = "0x41E9920", Offset = "0x41E9920", VA = "0x41E9920")]
	public void CreateParts()
	{
	}

	[Token(Token = "0x600356A")]
	[Address(RVA = "0x41E8760", Offset = "0x41E8760", VA = "0x41E8760")]
	public void DeleteParts()
	{
	}

	[Token(Token = "0x600356B")]
	[Address(RVA = "0x41EC970", Offset = "0x41EC970", VA = "0x41EC970")]
	public void Create3dmg()
	{
	}

	[Token(Token = "0x600356C")]
	[Address(RVA = "0x41ED0F0", Offset = "0x41ED0F0", VA = "0x41ED0F0")]
	public void CreateWeapon()
	{
	}

	[Token(Token = "0x600356D")]
	[Address(RVA = "0x41EF760", Offset = "0x41EF760", VA = "0x41EF760")]
	public void CreateCape()
	{
	}

	[Token(Token = "0x600356E")]
	[Address(RVA = "0x41EA580", Offset = "0x41EA580", VA = "0x41EA580")]
	public void CreateHair()
	{
	}

	[Token(Token = "0x600356F")]
	[Address(RVA = "0x41EFED0", Offset = "0x41EFED0", VA = "0x41EFED0")]
	private bool CanUseCharacterEffects()
	{
		return default(bool);
	}

	[Token(Token = "0x6003570")]
	[Address(RVA = "0x41EE820", Offset = "0x41EE820", VA = "0x41EE820")]
	private void ApplyCharacterEffectToPart(GameObject part, CharacterEffectType type, bool isHair)
	{
	}

	[Token(Token = "0x6003571")]
	[Address(RVA = "0x41F0080", Offset = "0x41F0080", VA = "0x41F0080")]
	public void ReapplyCharacterEffectsToExistingParts()
	{
	}

	[Token(Token = "0x6003572")]
	[Address(RVA = "0x41EABD0", Offset = "0x41EABD0", VA = "0x41EABD0")]
	public void CreateEye()
	{
	}

	[Token(Token = "0x6003573")]
	[Address(RVA = "0x41EAE20", Offset = "0x41EAE20", VA = "0x41EAE20")]
	public void CreateFace()
	{
	}

	[Token(Token = "0x6003574")]
	[Address(RVA = "0x41EB1B0", Offset = "0x41EB1B0", VA = "0x41EB1B0")]
	public void CreateGlass()
	{
	}

	[Token(Token = "0x6003575")]
	[Address(RVA = "0x41ED760", Offset = "0x41ED760", VA = "0x41ED760")]
	public void CreateBack()
	{
	}

	[Token(Token = "0x6003576")]
	[Address(RVA = "0x41EDD70", Offset = "0x41EDD70", VA = "0x41EDD70")]
	public void CreateHead()
	{
	}

	[Token(Token = "0x6003577")]
	[Address(RVA = "0x41EDAC0", Offset = "0x41EDAC0", VA = "0x41EDAC0")]
	public void CreateHat()
	{
	}

	[Token(Token = "0x6003578")]
	[Address(RVA = "0x41EC1A0", Offset = "0x41EC1A0", VA = "0x41EC1A0")]
	public void CreateArms(Material bodyMaterial)
	{
	}

	[Token(Token = "0x6003579")]
	[Address(RVA = "0x41F0B50", Offset = "0x41F0B50", VA = "0x41F0B50")]
	private void SetMaterial(Renderer renderer, Material material)
	{
	}

	[Token(Token = "0x600357A")]
	[Address(RVA = "0x41EC730", Offset = "0x41EC730", VA = "0x41EC730")]
	public void CreateLowerBody(Material bodyMaterial)
	{
	}

	[Token(Token = "0x600357B")]
	[Address(RVA = "0x41EB540", Offset = "0x41EB540", VA = "0x41EB540")]
	public void CreateUpperBody(Material bodyMaterial)
	{
	}

	[Token(Token = "0x600357C")]
	[Address(RVA = "0x41F01E0", Offset = "0x41F01E0", VA = "0x41F01E0")]
	private void SetFacialTexture(GameObject go, string type, int id, bool unique)
	{
	}

	[Token(Token = "0x600357D")]
	[Address(RVA = "0x41E7CC0", Offset = "0x41E7CC0", VA = "0x41E7CC0")]
	private GameObject CreateMount(string transformPath)
	{
		return null;
	}

	[Token(Token = "0x600357E")]
	[Address(RVA = "0x41F0890", Offset = "0x41F0890", VA = "0x41F0890")]
	private GameObject GenerateCloth(string cloth)
	{
		return null;
	}

	[Token(Token = "0x600357F")]
	[Address(RVA = "0x41EE4A0", Offset = "0x41EE4A0", VA = "0x41EE4A0")]
	private void AttachToMount(GameObject obj, GameObject mount, bool setScale = false)
	{
	}

	[Token(Token = "0x6003580")]
	[Address(RVA = "0x41EE020", Offset = "0x41EE020", VA = "0x41EE020")]
	private void DestroyIfExists(GameObject go)
	{
	}

	[Token(Token = "0x6003581")]
	[Address(RVA = "0x41F1720", Offset = "0x41F1720", VA = "0x41F1720")]
	public HumanSetup()
	{
	}
}
