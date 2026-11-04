// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HumanSetup
// Update status: CHANGED in this game update
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

[Token(Token = "0x200066E")]
internal class HumanSetup : MonoBehaviour
{
	[Token(Token = "0x4001E3D")]
	[FieldOffset(Offset = "0x0")]
	public static JSONNode CostumeInfo;

	[Token(Token = "0x4001E3E")]
	[FieldOffset(Offset = "0x8")]
	public static JSONNode HairInfo;

	[Token(Token = "0x4001E3F")]
	[FieldOffset(Offset = "0x10")]
	public static Material WeaponTrailMaterial;

	[Token(Token = "0x4001E40")]
	private const float CloakedGearScale = 0.5f;

	[Token(Token = "0x4001E41")]
	private const string HairShaderName = "Universal Render Pipeline/Lit";

	[Token(Token = "0x4001E42")]
	private const string HoodedHairShaderName = "AoTTG/Hair";

	[Token(Token = "0x4001E43")]
	[FieldOffset(Offset = "0x20")]
	public GameObject _mount_chest;

	[Token(Token = "0x4001E44")]
	[FieldOffset(Offset = "0x28")]
	public GameObject _mount_3dmg;

	[Token(Token = "0x4001E45")]
	[FieldOffset(Offset = "0x30")]
	public GameObject _mount_gas_l;

	[Token(Token = "0x4001E46")]
	[FieldOffset(Offset = "0x38")]
	public GameObject _mount_gas_r;

	[Token(Token = "0x4001E47")]
	[FieldOffset(Offset = "0x40")]
	public GameObject _mount_gun_mag_l;

	[Token(Token = "0x4001E48")]
	[FieldOffset(Offset = "0x48")]
	public GameObject _mount_gun_mag_r;

	[Token(Token = "0x4001E49")]
	[FieldOffset(Offset = "0x50")]
	public GameObject _mount_weapon_l;

	[Token(Token = "0x4001E4A")]
	[FieldOffset(Offset = "0x58")]
	public GameObject _mount_weapon_r;

	[Token(Token = "0x4001E4B")]
	[FieldOffset(Offset = "0x60")]
	public GameObject _mount_ts_l;

	[Token(Token = "0x4001E4C")]
	[FieldOffset(Offset = "0x68")]
	public GameObject _mount_ts_r;

	[Token(Token = "0x4001E4D")]
	[FieldOffset(Offset = "0x70")]
	public GameObject _mount_back;

	[Token(Token = "0x4001E4E")]
	[FieldOffset(Offset = "0x78")]
	public GameObject _mount_head_decor;

	[Token(Token = "0x4001E4F")]
	[FieldOffset(Offset = "0x80")]
	public GameObject _mount_hat;

	[Token(Token = "0x4001E50")]
	[FieldOffset(Offset = "0x88")]
	public GameObject _part_3dmg;

	[Token(Token = "0x4001E51")]
	[FieldOffset(Offset = "0x90")]
	public GameObject _part_belt;

	[Token(Token = "0x4001E52")]
	[FieldOffset(Offset = "0x98")]
	public GameObject _part_gas_l;

	[Token(Token = "0x4001E53")]
	[FieldOffset(Offset = "0xA0")]
	public GameObject _part_gas_r;

	[Token(Token = "0x4001E54")]
	[FieldOffset(Offset = "0xA8")]
	public GameObject _part_arm_l;

	[Token(Token = "0x4001E55")]
	[FieldOffset(Offset = "0xB0")]
	public GameObject _part_arm_r;

	[Token(Token = "0x4001E56")]
	[FieldOffset(Offset = "0xB8")]
	public GameObject _part_blade_l;

	[Token(Token = "0x4001E57")]
	[FieldOffset(Offset = "0xC0")]
	public GameObject _part_blade_r;

	[Token(Token = "0x4001E58")]
	[FieldOffset(Offset = "0xC8")]
	public GameObject _part_brand_1;

	[Token(Token = "0x4001E59")]
	[FieldOffset(Offset = "0xD0")]
	public GameObject _part_brand_2;

	[Token(Token = "0x4001E5A")]
	[FieldOffset(Offset = "0xD8")]
	public GameObject _part_brand_3;

	[Token(Token = "0x4001E5B")]
	[FieldOffset(Offset = "0xE0")]
	public GameObject _part_brand_4;

	[Token(Token = "0x4001E5C")]
	[FieldOffset(Offset = "0xE8")]
	public GameObject _part_cape;

	[Token(Token = "0x4001E5D")]
	[FieldOffset(Offset = "0xF0")]
	public GameObject _part_chest;

	[Token(Token = "0x4001E5E")]
	[FieldOffset(Offset = "0xF8")]
	public GameObject _part_chest_1;

	[Token(Token = "0x4001E5F")]
	[FieldOffset(Offset = "0x100")]
	public GameObject _part_chest_2;

	[Token(Token = "0x4001E60")]
	[FieldOffset(Offset = "0x108")]
	public GameObject _part_chest_3;

	[Token(Token = "0x4001E61")]
	[FieldOffset(Offset = "0x110")]
	public GameObject _part_eye;

	[Token(Token = "0x4001E62")]
	[FieldOffset(Offset = "0x118")]
	public GameObject _part_face;

	[Token(Token = "0x4001E63")]
	[FieldOffset(Offset = "0x120")]
	public GameObject _part_glass;

	[Token(Token = "0x4001E64")]
	[FieldOffset(Offset = "0x128")]
	public GameObject _part_hair;

	[Token(Token = "0x4001E65")]
	[FieldOffset(Offset = "0x130")]
	public GameObject _part_hair_1;

	[Token(Token = "0x4001E66")]
	[FieldOffset(Offset = "0x138")]
	public GameObject _part_hand_l;

	[Token(Token = "0x4001E67")]
	[FieldOffset(Offset = "0x140")]
	public GameObject _part_hand_r;

	[Token(Token = "0x4001E68")]
	[FieldOffset(Offset = "0x148")]
	public GameObject _part_head;

	[Token(Token = "0x4001E69")]
	[FieldOffset(Offset = "0x150")]
	public GameObject _part_leg;

	[Token(Token = "0x4001E6A")]
	[FieldOffset(Offset = "0x158")]
	public GameObject _part_upper_body;

	[Token(Token = "0x4001E6B")]
	[FieldOffset(Offset = "0x160")]
	public GameObject _mount_cloth;

	[Token(Token = "0x4001E6C")]
	[FieldOffset(Offset = "0x168")]
	public HumanSetupMeshes _meshes;

	[Token(Token = "0x4001E6D")]
	[FieldOffset(Offset = "0x170")]
	public HumanSetupTextures _textures;

	[Token(Token = "0x4001E6E")]
	[FieldOffset(Offset = "0x178")]
	public MeleeWeaponTrail LeftTrail;

	[Token(Token = "0x4001E6F")]
	[FieldOffset(Offset = "0x180")]
	public MeleeWeaponTrail RightTrail;

	[Token(Token = "0x4001E70")]
	[FieldOffset(Offset = "0x188")]
	public GameObject _part_back;

	[Token(Token = "0x4001E71")]
	[FieldOffset(Offset = "0x190")]
	public GameObject _part_head_decor;

	[Token(Token = "0x4001E72")]
	[FieldOffset(Offset = "0x198")]
	public GameObject _part_hat;

	[Token(Token = "0x4001E73")]
	[FieldOffset(Offset = "0x1A0")]
	public string[] TierEffects;

	[Token(Token = "0x4001E74")]
	[FieldOffset(Offset = "0x1A8")]
	public Transform[] LeftTierEffects;

	[Token(Token = "0x4001E75")]
	[FieldOffset(Offset = "0x1B0")]
	public Transform[] RightTierEffects;

	[Token(Token = "0x4001E76")]
	[FieldOffset(Offset = "0x1B8")]
	public ParticleSystem LeftShingEffect;

	[Token(Token = "0x4001E77")]
	[FieldOffset(Offset = "0x1C0")]
	public ParticleSystem RightShingEffect;

	[Token(Token = "0x4001E78")]
	[FieldOffset(Offset = "0x1C8")]
	public HumanCustomSet CustomSet;

	[Token(Token = "0x4001E79")]
	[FieldOffset(Offset = "0x1D0")]
	public HumanWeapon Weapon;

	[Token(Token = "0x4001E7A")]
	[FieldOffset(Offset = "0x1D8")]
	public JSONNode CurrentCostume;

	[Token(Token = "0x4001E7B")]
	[FieldOffset(Offset = "0x1E0")]
	public JSONNode CurrentHair;

	[Token(Token = "0x4001E7C")]
	[FieldOffset(Offset = "0x1E8")]
	public bool IsDeadBody;

	[Token(Token = "0x4001E7D")]
	[FieldOffset(Offset = "0x1E9")]
	public bool Deleted;

	[Token(Token = "0x4001E7E")]
	[FieldOffset(Offset = "0x18")]
	public static int EyeCount;

	[Token(Token = "0x4001E7F")]
	[FieldOffset(Offset = "0x1C")]
	public static int FaceCount;

	[Token(Token = "0x4001E80")]
	[FieldOffset(Offset = "0x20")]
	public static int GlassCount;

	[Token(Token = "0x4001E81")]
	[FieldOffset(Offset = "0x24")]
	public static int CostumeMCount;

	[Token(Token = "0x4001E82")]
	[FieldOffset(Offset = "0x28")]
	public static int CostumeFCount;

	[Token(Token = "0x4001E83")]
	[FieldOffset(Offset = "0x2C")]
	public static int HairMCount;

	[Token(Token = "0x4001E84")]
	[FieldOffset(Offset = "0x30")]
	public static int HairFCount;

	[Token(Token = "0x4001E85")]
	[FieldOffset(Offset = "0x34")]
	public static int BackCount;

	[Token(Token = "0x4001E86")]
	[FieldOffset(Offset = "0x38")]
	public static int HeadCount;

	[Token(Token = "0x4001E87")]
	[FieldOffset(Offset = "0x3C")]
	public static int HatCount;

	[Token(Token = "0x4001E88")]
	[FieldOffset(Offset = "0x40")]
	public static HashSet<string> UniqueItems;

	[Token(Token = "0x4001E89")]
	[FieldOffset(Offset = "0x1F0")]
	private readonly Dictionary<Renderer, Material> _effectMaterialCache;

	[Token(Token = "0x4001E8A")]
	[FieldOffset(Offset = "0x1F8")]
	private readonly HashSet<Material> _ownedMaterials;

	[Token(Token = "0x4001E8B")]
	[FieldOffset(Offset = "0x48")]
	private static readonly int HairClipPlaneId;

	[Token(Token = "0x4001E8C")]
	[FieldOffset(Offset = "0x4C")]
	private static readonly int HairClipLeftPlaneId;

	[Token(Token = "0x4001E8D")]
	[FieldOffset(Offset = "0x50")]
	private static readonly int HairClipRightPlaneId;

	[Token(Token = "0x4001E8E")]
	[FieldOffset(Offset = "0x54")]
	private static readonly int HairClipTopPlaneId;

	[Token(Token = "0x4001E8F")]
	[FieldOffset(Offset = "0x200")]
	private readonly List<Renderer> _hairRenderers;

	[Token(Token = "0x4001E90")]
	[FieldOffset(Offset = "0x208")]
	private MaterialPropertyBlock _hairClipProperties;

	[Token(Token = "0x4001E91")]
	[FieldOffset(Offset = "0x210")]
	private Bounds _headBounds;

	[Token(Token = "0x4001E92")]
	[FieldOffset(Offset = "0x228")]
	private Vector3 _hairClipForward;

	[Token(Token = "0x4001E93")]
	[FieldOffset(Offset = "0x234")]
	private Vector3 _hairClipRight;

	[Token(Token = "0x4001E94")]
	[FieldOffset(Offset = "0x240")]
	private Vector3 _hairClipUp;

	[Token(Token = "0x4001E95")]
	[FieldOffset(Offset = "0x24C")]
	[SerializeField]
	[Range(-1f, 1f)]
	private float _hoodieHairClipOffset;

	[Token(Token = "0x4001E96")]
	[FieldOffset(Offset = "0x250")]
	[SerializeField]
	[Range(0f, 1.5f)]
	private float _hoodieHairClipWidth;

	[Token(Token = "0x4001E97")]
	[FieldOffset(Offset = "0x254")]
	[SerializeField]
	[Range(-1f, 1.5f)]
	private float _hoodieHairClipTop;

	[Token(Token = "0x17000B15")]
	public bool HasWeapon
	{
		[Token(Token = "0x6003F8F")]
		[Address(RVA = "0x215BAE0", Offset = "0x215A0E0", VA = "0x18215BAE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B16")]
	public bool HasODM
	{
		[Token(Token = "0x6003F90")]
		[Address(RVA = "0x215BAD0", Offset = "0x215A0D0", VA = "0x18215BAD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B17")]
	public bool HasCloak
	{
		[Token(Token = "0x6003F91")]
		[Address(RVA = "0x215BA70", Offset = "0x215A070", VA = "0x18215BA70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B18")]
	public bool IsHooded
	{
		[Token(Token = "0x6003F92")]
		[Address(RVA = "0x215BB00", Offset = "0x215A100", VA = "0x18215BB00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003F93")]
	[Address(RVA = "0x21596E0", Offset = "0x2157CE0", VA = "0x1821596E0")]
	public static void Init()
	{
	}

	[Token(Token = "0x6003F94")]
	[Address(RVA = "0x2154330", Offset = "0x2152930", VA = "0x182154330")]
	private void Awake()
	{
	}

	[Token(Token = "0x6003F95")]
	[Address(RVA = "0x2159DA0", Offset = "0x21583A0", VA = "0x182159DA0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6003F96")]
	[Address(RVA = "0x215A580", Offset = "0x2158B80", VA = "0x18215A580")]
	public void RefreshHairMaterials()
	{
	}

	[Token(Token = "0x6003F97")]
	[Address(RVA = "0x215B130", Offset = "0x2159730", VA = "0x18215B130")]
	private void UpdateHairClipPlane()
	{
	}

	[Token(Token = "0x6003F98")]
	[Address(RVA = "0x2159330", Offset = "0x2157930", VA = "0x182159330")]
	private Vector4 GetHairClipPlane(Vector3 normal, float offset)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6003F99")]
	[Address(RVA = "0x2159230", Offset = "0x2157830", VA = "0x182159230")]
	public static int GetCostumeCount(bool male)
	{
		return default(int);
	}

	[Token(Token = "0x6003F9A")]
	[Address(RVA = "0x2159650", Offset = "0x2157C50", VA = "0x182159650")]
	public static int GetHairCount()
	{
		return default(int);
	}

	[Token(Token = "0x6003F9B")]
	[Address(RVA = "0x2154C90", Offset = "0x2153290", VA = "0x182154C90")]
	public void Copy(InGameCharacterSettings settings)
	{
	}

	[Token(Token = "0x6003F9C")]
	[Address(RVA = "0x2159DE0", Offset = "0x21583E0", VA = "0x182159DE0")]
	public void Load(HumanCustomSet customSet, HumanWeapon weapon, bool isDeadBody = false)
	{
	}

	[Token(Token = "0x6003F9D")]
	[Address(RVA = "0x2158830", Offset = "0x2156E30", VA = "0x182158830")]
	public void DeleteDie()
	{
	}

	[Token(Token = "0x6003F9E")]
	[Address(RVA = "0x2157260", Offset = "0x2155860", VA = "0x182157260")]
	public void CreateParts()
	{
	}

	[Token(Token = "0x6003F9F")]
	[Address(RVA = "0x21588E0", Offset = "0x2156EE0", VA = "0x1821588E0")]
	public void DeleteParts()
	{
	}

	[Token(Token = "0x6003FA0")]
	[Address(RVA = "0x215A2D0", Offset = "0x21588D0", VA = "0x18215A2D0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6003FA1")]
	[Address(RVA = "0x215A3C0", Offset = "0x21589C0", VA = "0x18215A3C0")]
	private Material Own(Material material)
	{
		return null;
	}

	[Token(Token = "0x6003FA2")]
	[Address(RVA = "0x215A2F0", Offset = "0x21588F0", VA = "0x18215A2F0")]
	private Material OwnInstance(Renderer renderer)
	{
		return null;
	}

	[Token(Token = "0x6003FA3")]
	[Address(RVA = "0x2158BB0", Offset = "0x21571B0", VA = "0x182158BB0")]
	private void DestroyOwnedMaterials()
	{
	}

	[Token(Token = "0x6003FA4")]
	[Address(RVA = "0x2158DC0", Offset = "0x21573C0", VA = "0x182158DC0")]
	private void DisposeCloth()
	{
	}

	[Token(Token = "0x6003FA5")]
	[Address(RVA = "0x2158D50", Offset = "0x2157350", VA = "0x182158D50")]
	private static void DisposeClothPart(ref GameObject part)
	{
	}

	[Token(Token = "0x6003FA6")]
	[Address(RVA = "0x2155130", Offset = "0x2153730", VA = "0x182155130")]
	public void Create3dmg()
	{
	}

	[Token(Token = "0x6003FA7")]
	[Address(RVA = "0x215A8F0", Offset = "0x2158EF0", VA = "0x18215A8F0")]
	private void ScaleGearForCloak(GameObject gear)
	{
	}

	[Token(Token = "0x6003FA8")]
	[Address(RVA = "0x21582F0", Offset = "0x21568F0", VA = "0x1821582F0")]
	public void CreateWeapon()
	{
	}

	[Token(Token = "0x6003FA9")]
	[Address(RVA = "0x2155C00", Offset = "0x2154200", VA = "0x182155C00")]
	public void CreateCape()
	{
	}

	[Token(Token = "0x6003FAA")]
	[Address(RVA = "0x215ADA0", Offset = "0x21593A0", VA = "0x18215ADA0")]
	public void SetHood(bool hoodUp)
	{
	}

	[Token(Token = "0x6003FAB")]
	[Address(RVA = "0x215B050", Offset = "0x2159650", VA = "0x18215B050")]
	private void UpdateCloakVisibility()
	{
	}

	[Token(Token = "0x6003FAC")]
	[Address(RVA = "0x2156560", Offset = "0x2154B60", VA = "0x182156560")]
	public void CreateHair()
	{
	}

	[Token(Token = "0x6003FAD")]
	[Address(RVA = "0x2154AE0", Offset = "0x21530E0", VA = "0x182154AE0")]
	private bool CanUseCharacterEffects()
	{
		return default(bool);
	}

	[Token(Token = "0x6003FAE")]
	[Address(RVA = "0x21531D0", Offset = "0x21517D0", VA = "0x1821531D0")]
	private void ApplyCharacterEffectToPart(GameObject part, CharacterEffectType type, bool isHair)
	{
	}

	[Token(Token = "0x6003FAF")]
	[Address(RVA = "0x215A420", Offset = "0x2158A20", VA = "0x18215A420")]
	public void ReapplyCharacterEffectsToExistingParts()
	{
	}

	[Token(Token = "0x6003FB0")]
	[Address(RVA = "0x2155EF0", Offset = "0x21544F0", VA = "0x182155EF0")]
	public void CreateEye()
	{
	}

	[Token(Token = "0x6003FB1")]
	[Address(RVA = "0x2156060", Offset = "0x2154660", VA = "0x182156060")]
	public void CreateFace()
	{
	}

	[Token(Token = "0x6003FB2")]
	[Address(RVA = "0x21562E0", Offset = "0x21548E0", VA = "0x1821562E0")]
	public void CreateGlass()
	{
	}

	[Token(Token = "0x6003FB3")]
	[Address(RVA = "0x21559B0", Offset = "0x2153FB0", VA = "0x1821559B0")]
	public void CreateBack()
	{
	}

	[Token(Token = "0x6003FB4")]
	[Address(RVA = "0x2156D00", Offset = "0x2155300", VA = "0x182156D00")]
	public void CreateHead()
	{
	}

	[Token(Token = "0x6003FB5")]
	[Address(RVA = "0x2156B50", Offset = "0x2155150", VA = "0x182156B50")]
	public void CreateHat()
	{
	}

	[Token(Token = "0x6003FB6")]
	[Address(RVA = "0x2155680", Offset = "0x2153C80", VA = "0x182155680")]
	public void CreateArms(Material bodyMaterial)
	{
	}

	[Token(Token = "0x6003FB7")]
	[Address(RVA = "0x215B020", Offset = "0x2159620", VA = "0x18215B020")]
	private void SetMaterial(Renderer renderer, Material material)
	{
	}

	[Token(Token = "0x6003FB8")]
	[Address(RVA = "0x2156EA0", Offset = "0x21554A0", VA = "0x182156EA0")]
	public void CreateLowerBody(Material bodyMaterial)
	{
	}

	[Token(Token = "0x6003FB9")]
	[Address(RVA = "0x2157A60", Offset = "0x2156060", VA = "0x182157A60")]
	public void CreateUpperBody(Material bodyMaterial)
	{
	}

	[Token(Token = "0x6003FBA")]
	[Address(RVA = "0x215AC70", Offset = "0x2159270", VA = "0x18215AC70")]
	private void SetFacialTexture(GameObject go, string type, int id, bool unique)
	{
	}

	[Token(Token = "0x6003FBB")]
	[Address(RVA = "0x2157080", Offset = "0x2155680", VA = "0x182157080")]
	private GameObject CreateMount(string transformPath)
	{
		return null;
	}

	[Token(Token = "0x6003FBC")]
	[Address(RVA = "0x2158F40", Offset = "0x2157540", VA = "0x182158F40")]
	private GameObject GenerateCloth(string cloth)
	{
		return null;
	}

	[Token(Token = "0x6003FBD")]
	[Address(RVA = "0x21541B0", Offset = "0x21527B0", VA = "0x1821541B0")]
	private void AttachToMount(GameObject obj, GameObject mount, bool setScale = false)
	{
	}

	[Token(Token = "0x6003FBE")]
	[Address(RVA = "0x2158B30", Offset = "0x2157130", VA = "0x182158B30")]
	private void DestroyIfExists(GameObject go)
	{
	}

	[Token(Token = "0x6003FBF")]
	[Address(RVA = "0x215B870", Offset = "0x2159E70", VA = "0x18215B870")]
	public HumanSetup()
	{
	}
}
