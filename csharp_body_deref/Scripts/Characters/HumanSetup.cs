using System.Collections.Generic;
using Il2CppDummyDll;
using PatreonEffects;
using Settings;
using SimpleJSONFixed;
using UnityEngine;

namespace Characters;

[Token(Token = "0x20004CF")]
internal class HumanSetup : MonoBehaviour
{
	[Token(Token = "0x40016A0")]
	[FieldOffset(Offset = "0x0")]
	public static JSONNode CostumeInfo;

	[Token(Token = "0x40016A1")]
	[FieldOffset(Offset = "0x8")]
	public static JSONNode HairInfo;

	[Token(Token = "0x40016A2")]
	[FieldOffset(Offset = "0x10")]
	public static Material WeaponTrailMaterial;

	[Token(Token = "0x40016A3")]
	[FieldOffset(Offset = "0x20")]
	public GameObject _mount_chest;

	[Token(Token = "0x40016A4")]
	[FieldOffset(Offset = "0x28")]
	public GameObject _mount_3dmg;

	[Token(Token = "0x40016A5")]
	[FieldOffset(Offset = "0x30")]
	public GameObject _mount_gas_l;

	[Token(Token = "0x40016A6")]
	[FieldOffset(Offset = "0x38")]
	public GameObject _mount_gas_r;

	[Token(Token = "0x40016A7")]
	[FieldOffset(Offset = "0x40")]
	public GameObject _mount_gun_mag_l;

	[Token(Token = "0x40016A8")]
	[FieldOffset(Offset = "0x48")]
	public GameObject _mount_gun_mag_r;

	[Token(Token = "0x40016A9")]
	[FieldOffset(Offset = "0x50")]
	public GameObject _mount_weapon_l;

	[Token(Token = "0x40016AA")]
	[FieldOffset(Offset = "0x58")]
	public GameObject _mount_weapon_r;

	[Token(Token = "0x40016AB")]
	[FieldOffset(Offset = "0x60")]
	public GameObject _mount_ts_l;

	[Token(Token = "0x40016AC")]
	[FieldOffset(Offset = "0x68")]
	public GameObject _mount_ts_r;

	[Token(Token = "0x40016AD")]
	[FieldOffset(Offset = "0x70")]
	public GameObject _mount_back;

	[Token(Token = "0x40016AE")]
	[FieldOffset(Offset = "0x78")]
	public GameObject _mount_head_decor;

	[Token(Token = "0x40016AF")]
	[FieldOffset(Offset = "0x80")]
	public GameObject _mount_hat;

	[Token(Token = "0x40016B0")]
	[FieldOffset(Offset = "0x88")]
	public GameObject _part_3dmg;

	[Token(Token = "0x40016B1")]
	[FieldOffset(Offset = "0x90")]
	public GameObject _part_belt;

	[Token(Token = "0x40016B2")]
	[FieldOffset(Offset = "0x98")]
	public GameObject _part_gas_l;

	[Token(Token = "0x40016B3")]
	[FieldOffset(Offset = "0xA0")]
	public GameObject _part_gas_r;

	[Token(Token = "0x40016B4")]
	[FieldOffset(Offset = "0xA8")]
	public GameObject _part_arm_l;

	[Token(Token = "0x40016B5")]
	[FieldOffset(Offset = "0xB0")]
	public GameObject _part_arm_r;

	[Token(Token = "0x40016B6")]
	[FieldOffset(Offset = "0xB8")]
	public GameObject _part_blade_l;

	[Token(Token = "0x40016B7")]
	[FieldOffset(Offset = "0xC0")]
	public GameObject _part_blade_r;

	[Token(Token = "0x40016B8")]
	[FieldOffset(Offset = "0xC8")]
	public GameObject _part_brand_1;

	[Token(Token = "0x40016B9")]
	[FieldOffset(Offset = "0xD0")]
	public GameObject _part_brand_2;

	[Token(Token = "0x40016BA")]
	[FieldOffset(Offset = "0xD8")]
	public GameObject _part_brand_3;

	[Token(Token = "0x40016BB")]
	[FieldOffset(Offset = "0xE0")]
	public GameObject _part_brand_4;

	[Token(Token = "0x40016BC")]
	[FieldOffset(Offset = "0xE8")]
	public GameObject _part_cape;

	[Token(Token = "0x40016BD")]
	[FieldOffset(Offset = "0xF0")]
	public GameObject _part_chest;

	[Token(Token = "0x40016BE")]
	[FieldOffset(Offset = "0xF8")]
	public GameObject _part_chest_1;

	[Token(Token = "0x40016BF")]
	[FieldOffset(Offset = "0x100")]
	public GameObject _part_chest_2;

	[Token(Token = "0x40016C0")]
	[FieldOffset(Offset = "0x108")]
	public GameObject _part_chest_3;

	[Token(Token = "0x40016C1")]
	[FieldOffset(Offset = "0x110")]
	public GameObject _part_eye;

	[Token(Token = "0x40016C2")]
	[FieldOffset(Offset = "0x118")]
	public GameObject _part_face;

	[Token(Token = "0x40016C3")]
	[FieldOffset(Offset = "0x120")]
	public GameObject _part_glass;

	[Token(Token = "0x40016C4")]
	[FieldOffset(Offset = "0x128")]
	public GameObject _part_hair;

	[Token(Token = "0x40016C5")]
	[FieldOffset(Offset = "0x130")]
	public GameObject _part_hair_1;

	[Token(Token = "0x40016C6")]
	[FieldOffset(Offset = "0x138")]
	public GameObject _part_hand_l;

	[Token(Token = "0x40016C7")]
	[FieldOffset(Offset = "0x140")]
	public GameObject _part_hand_r;

	[Token(Token = "0x40016C8")]
	[FieldOffset(Offset = "0x148")]
	public GameObject _part_head;

	[Token(Token = "0x40016C9")]
	[FieldOffset(Offset = "0x150")]
	public GameObject _part_leg;

	[Token(Token = "0x40016CA")]
	[FieldOffset(Offset = "0x158")]
	public GameObject _part_upper_body;

	[Token(Token = "0x40016CB")]
	[FieldOffset(Offset = "0x160")]
	public GameObject _mount_cloth;

	[Token(Token = "0x40016CC")]
	[FieldOffset(Offset = "0x168")]
	public HumanSetupMeshes _meshes;

	[Token(Token = "0x40016CD")]
	[FieldOffset(Offset = "0x170")]
	public HumanSetupTextures _textures;

	[Token(Token = "0x40016CE")]
	[FieldOffset(Offset = "0x178")]
	public MeleeWeaponTrail LeftTrail;

	[Token(Token = "0x40016CF")]
	[FieldOffset(Offset = "0x180")]
	public MeleeWeaponTrail RightTrail;

	[Token(Token = "0x40016D0")]
	[FieldOffset(Offset = "0x188")]
	public GameObject _part_back;

	[Token(Token = "0x40016D1")]
	[FieldOffset(Offset = "0x190")]
	public GameObject _part_head_decor;

	[Token(Token = "0x40016D2")]
	[FieldOffset(Offset = "0x198")]
	public GameObject _part_hat;

	[Token(Token = "0x40016D3")]
	[FieldOffset(Offset = "0x1A0")]
	public string[] TierEffects;

	[Token(Token = "0x40016D4")]
	[FieldOffset(Offset = "0x1A8")]
	public Transform[] LeftTierEffects;

	[Token(Token = "0x40016D5")]
	[FieldOffset(Offset = "0x1B0")]
	public Transform[] RightTierEffects;

	[Token(Token = "0x40016D6")]
	[FieldOffset(Offset = "0x1B8")]
	public ParticleSystem LeftShingEffect;

	[Token(Token = "0x40016D7")]
	[FieldOffset(Offset = "0x1C0")]
	public ParticleSystem RightShingEffect;

	[Token(Token = "0x40016D8")]
	[FieldOffset(Offset = "0x1C8")]
	public HumanCustomSet CustomSet;

	[Token(Token = "0x40016D9")]
	[FieldOffset(Offset = "0x1D0")]
	public HumanWeapon Weapon;

	[Token(Token = "0x40016DA")]
	[FieldOffset(Offset = "0x1D8")]
	public JSONNode CurrentCostume;

	[Token(Token = "0x40016DB")]
	[FieldOffset(Offset = "0x1E0")]
	public JSONNode CurrentHair;

	[Token(Token = "0x40016DC")]
	[FieldOffset(Offset = "0x1E8")]
	public bool IsDeadBody;

	[Token(Token = "0x40016DD")]
	[FieldOffset(Offset = "0x1E9")]
	public bool Deleted;

	[Token(Token = "0x40016DE")]
	[FieldOffset(Offset = "0x18")]
	public static int EyeCount;

	[Token(Token = "0x40016DF")]
	[FieldOffset(Offset = "0x1C")]
	public static int FaceCount;

	[Token(Token = "0x40016E0")]
	[FieldOffset(Offset = "0x20")]
	public static int GlassCount;

	[Token(Token = "0x40016E1")]
	[FieldOffset(Offset = "0x24")]
	public static int CostumeMCount;

	[Token(Token = "0x40016E2")]
	[FieldOffset(Offset = "0x28")]
	public static int CostumeFCount;

	[Token(Token = "0x40016E3")]
	[FieldOffset(Offset = "0x2C")]
	public static int HairMCount;

	[Token(Token = "0x40016E4")]
	[FieldOffset(Offset = "0x30")]
	public static int HairFCount;

	[Token(Token = "0x40016E5")]
	[FieldOffset(Offset = "0x34")]
	public static int BackCount;

	[Token(Token = "0x40016E6")]
	[FieldOffset(Offset = "0x38")]
	public static int HeadCount;

	[Token(Token = "0x40016E7")]
	[FieldOffset(Offset = "0x3C")]
	public static int HatCount;

	[Token(Token = "0x40016E8")]
	[FieldOffset(Offset = "0x40")]
	public static HashSet<string> UniqueItems;

	[Token(Token = "0x40016E9")]
	[FieldOffset(Offset = "0x1F0")]
	private readonly Dictionary<Renderer, Material> _effectMaterialCache;

	[Token(Token = "0x6003354")]
	[Address(RVA = "0x3EDA7F0", Offset = "0x3EDA7F0", VA = "0x3EDA7F0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6003355")]
	[Address(RVA = "0x3EDAE60", Offset = "0x3EDAE60", VA = "0x3EDAE60")]
	private void Awake()
	{
	}

	[Token(Token = "0x6003356")]
	[Address(RVA = "0x3EDB560", Offset = "0x3EDB560", VA = "0x3EDB560")]
	public static int GetCostumeCount(bool male)
	{
		return default(int);
	}

	[Token(Token = "0x6003357")]
	[Address(RVA = "0x3EDB660", Offset = "0x3EDB660", VA = "0x3EDB660")]
	public static int GetHairCount()
	{
		return default(int);
	}

	[Token(Token = "0x6003358")]
	[Address(RVA = "0x3EDB700", Offset = "0x3EDB700", VA = "0x3EDB700")]
	public void Copy(InGameCharacterSettings settings)
	{
	}

	[Token(Token = "0x6003359")]
	[Address(RVA = "0x3EDBA50", Offset = "0x3EDBA50", VA = "0x3EDBA50")]
	public void Load(HumanCustomSet customSet, HumanWeapon weapon, bool isDeadBody = false)
	{
	}

	[Token(Token = "0x600335A")]
	[Address(RVA = "0x3EDD340", Offset = "0x3EDD340", VA = "0x3EDD340")]
	public void DeleteDie()
	{
	}

	[Token(Token = "0x600335B")]
	[Address(RVA = "0x3EDD060", Offset = "0x3EDD060", VA = "0x3EDD060")]
	public void CreateParts()
	{
	}

	[Token(Token = "0x600335C")]
	[Address(RVA = "0x3EDBEA0", Offset = "0x3EDBEA0", VA = "0x3EDBEA0")]
	public void DeleteParts()
	{
	}

	[Token(Token = "0x600335D")]
	[Address(RVA = "0x3EE00B0", Offset = "0x3EE00B0", VA = "0x3EE00B0")]
	public void Create3dmg()
	{
	}

	[Token(Token = "0x600335E")]
	[Address(RVA = "0x3EE0830", Offset = "0x3EE0830", VA = "0x3EE0830")]
	public void CreateWeapon()
	{
	}

	[Token(Token = "0x600335F")]
	[Address(RVA = "0x3EE2EA0", Offset = "0x3EE2EA0", VA = "0x3EE2EA0")]
	public void CreateCape()
	{
	}

	[Token(Token = "0x6003360")]
	[Address(RVA = "0x3EDDCC0", Offset = "0x3EDDCC0", VA = "0x3EDDCC0")]
	public void CreateHair()
	{
	}

	[Token(Token = "0x6003361")]
	[Address(RVA = "0x3EE3610", Offset = "0x3EE3610", VA = "0x3EE3610")]
	private bool CanUseCharacterEffects()
	{
		return default(bool);
	}

	[Token(Token = "0x6003362")]
	[Address(RVA = "0x3EE1F60", Offset = "0x3EE1F60", VA = "0x3EE1F60")]
	private void ApplyCharacterEffectToPart(GameObject part, CharacterEffectType type, bool isHair)
	{
	}

	[Token(Token = "0x6003363")]
	[Address(RVA = "0x3EE37C0", Offset = "0x3EE37C0", VA = "0x3EE37C0")]
	public void ReapplyCharacterEffectsToExistingParts()
	{
	}

	[Token(Token = "0x6003364")]
	[Address(RVA = "0x3EDE310", Offset = "0x3EDE310", VA = "0x3EDE310")]
	public void CreateEye()
	{
	}

	[Token(Token = "0x6003365")]
	[Address(RVA = "0x3EDE560", Offset = "0x3EDE560", VA = "0x3EDE560")]
	public void CreateFace()
	{
	}

	[Token(Token = "0x6003366")]
	[Address(RVA = "0x3EDE8F0", Offset = "0x3EDE8F0", VA = "0x3EDE8F0")]
	public void CreateGlass()
	{
	}

	[Token(Token = "0x6003367")]
	[Address(RVA = "0x3EE0EA0", Offset = "0x3EE0EA0", VA = "0x3EE0EA0")]
	public void CreateBack()
	{
	}

	[Token(Token = "0x6003368")]
	[Address(RVA = "0x3EE14B0", Offset = "0x3EE14B0", VA = "0x3EE14B0")]
	public void CreateHead()
	{
	}

	[Token(Token = "0x6003369")]
	[Address(RVA = "0x3EE1200", Offset = "0x3EE1200", VA = "0x3EE1200")]
	public void CreateHat()
	{
	}

	[Token(Token = "0x600336A")]
	[Address(RVA = "0x3EDF8E0", Offset = "0x3EDF8E0", VA = "0x3EDF8E0")]
	public void CreateArms(Material bodyMaterial)
	{
	}

	[Token(Token = "0x600336B")]
	[Address(RVA = "0x3EE4290", Offset = "0x3EE4290", VA = "0x3EE4290")]
	private void SetMaterial(Renderer renderer, Material material)
	{
	}

	[Token(Token = "0x600336C")]
	[Address(RVA = "0x3EDFE70", Offset = "0x3EDFE70", VA = "0x3EDFE70")]
	public void CreateLowerBody(Material bodyMaterial)
	{
	}

	[Token(Token = "0x600336D")]
	[Address(RVA = "0x3EDEC80", Offset = "0x3EDEC80", VA = "0x3EDEC80")]
	public void CreateUpperBody(Material bodyMaterial)
	{
	}

	[Token(Token = "0x600336E")]
	[Address(RVA = "0x3EE3920", Offset = "0x3EE3920", VA = "0x3EE3920")]
	private void SetFacialTexture(GameObject go, string type, int id, bool unique)
	{
	}

	[Token(Token = "0x600336F")]
	[Address(RVA = "0x3EDB400", Offset = "0x3EDB400", VA = "0x3EDB400")]
	private GameObject CreateMount(string transformPath)
	{
		return null;
	}

	[Token(Token = "0x6003370")]
	[Address(RVA = "0x3EE3FD0", Offset = "0x3EE3FD0", VA = "0x3EE3FD0")]
	private GameObject GenerateCloth(string cloth)
	{
		return null;
	}

	[Token(Token = "0x6003371")]
	[Address(RVA = "0x3EE1BE0", Offset = "0x3EE1BE0", VA = "0x3EE1BE0")]
	private void AttachToMount(GameObject obj, GameObject mount, bool setScale = false)
	{
	}

	[Token(Token = "0x6003372")]
	[Address(RVA = "0x3EE1760", Offset = "0x3EE1760", VA = "0x3EE1760")]
	private void DestroyIfExists(GameObject go)
	{
	}

	[Token(Token = "0x6003373")]
	[Address(RVA = "0x3EE4E60", Offset = "0x3EE4E60", VA = "0x3EE4E60")]
	public HumanSetup()
	{
	}
}
