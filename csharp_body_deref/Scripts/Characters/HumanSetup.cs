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

[Token(Token = "0x20006CD")]
internal class HumanSetup : MonoBehaviour
{
	[Token(Token = "0x4001FEB")]
	[FieldOffset(Offset = "0x0")]
	public static JSONNode CostumeInfo;

	[Token(Token = "0x4001FEC")]
	[FieldOffset(Offset = "0x8")]
	public static JSONNode HairInfo;

	[Token(Token = "0x4001FED")]
	[FieldOffset(Offset = "0x10")]
	public static Material WeaponTrailMaterial;

	[Token(Token = "0x4001FEE")]
	private const float CloakedGearScale = 0.5f;

	[Token(Token = "0x4001FEF")]
	private const string HairShaderName = "Universal Render Pipeline/Lit";

	[Token(Token = "0x4001FF0")]
	private const string HoodedHairShaderName = "AoTTG/Hair";

	[Token(Token = "0x4001FF1")]
	[FieldOffset(Offset = "0x20")]
	public GameObject _mount_chest;

	[Token(Token = "0x4001FF2")]
	[FieldOffset(Offset = "0x28")]
	public GameObject _mount_3dmg;

	[Token(Token = "0x4001FF3")]
	[FieldOffset(Offset = "0x30")]
	public GameObject _mount_gas_l;

	[Token(Token = "0x4001FF4")]
	[FieldOffset(Offset = "0x38")]
	public GameObject _mount_gas_r;

	[Token(Token = "0x4001FF5")]
	[FieldOffset(Offset = "0x40")]
	public GameObject _mount_gun_mag_l;

	[Token(Token = "0x4001FF6")]
	[FieldOffset(Offset = "0x48")]
	public GameObject _mount_gun_mag_r;

	[Token(Token = "0x4001FF7")]
	[FieldOffset(Offset = "0x50")]
	public GameObject _mount_weapon_l;

	[Token(Token = "0x4001FF8")]
	[FieldOffset(Offset = "0x58")]
	public GameObject _mount_weapon_r;

	[Token(Token = "0x4001FF9")]
	[FieldOffset(Offset = "0x60")]
	public GameObject _mount_ts_l;

	[Token(Token = "0x4001FFA")]
	[FieldOffset(Offset = "0x68")]
	public GameObject _mount_ts_r;

	[Token(Token = "0x4001FFB")]
	[FieldOffset(Offset = "0x70")]
	public GameObject _mount_back;

	[Token(Token = "0x4001FFC")]
	[FieldOffset(Offset = "0x78")]
	public GameObject _mount_head_decor;

	[Token(Token = "0x4001FFD")]
	[FieldOffset(Offset = "0x80")]
	public GameObject _mount_hat;

	[Token(Token = "0x4001FFE")]
	[FieldOffset(Offset = "0x88")]
	public GameObject _part_3dmg;

	[Token(Token = "0x4001FFF")]
	[FieldOffset(Offset = "0x90")]
	public GameObject _part_belt;

	[Token(Token = "0x4002000")]
	[FieldOffset(Offset = "0x98")]
	public GameObject _part_gas_l;

	[Token(Token = "0x4002001")]
	[FieldOffset(Offset = "0xA0")]
	public GameObject _part_gas_r;

	[Token(Token = "0x4002002")]
	[FieldOffset(Offset = "0xA8")]
	public GameObject _part_arm_l;

	[Token(Token = "0x4002003")]
	[FieldOffset(Offset = "0xB0")]
	public GameObject _part_arm_r;

	[Token(Token = "0x4002004")]
	[FieldOffset(Offset = "0xB8")]
	public GameObject _part_blade_l;

	[Token(Token = "0x4002005")]
	[FieldOffset(Offset = "0xC0")]
	public GameObject _part_blade_r;

	[Token(Token = "0x4002006")]
	[FieldOffset(Offset = "0xC8")]
	public GameObject _part_brand_1;

	[Token(Token = "0x4002007")]
	[FieldOffset(Offset = "0xD0")]
	public GameObject _part_brand_2;

	[Token(Token = "0x4002008")]
	[FieldOffset(Offset = "0xD8")]
	public GameObject _part_brand_3;

	[Token(Token = "0x4002009")]
	[FieldOffset(Offset = "0xE0")]
	public GameObject _part_brand_4;

	[Token(Token = "0x400200A")]
	[FieldOffset(Offset = "0xE8")]
	public GameObject _part_cape;

	[Token(Token = "0x400200B")]
	[FieldOffset(Offset = "0xF0")]
	public GameObject _part_chest;

	[Token(Token = "0x400200C")]
	[FieldOffset(Offset = "0xF8")]
	public GameObject _part_chest_1;

	[Token(Token = "0x400200D")]
	[FieldOffset(Offset = "0x100")]
	public GameObject _part_chest_2;

	[Token(Token = "0x400200E")]
	[FieldOffset(Offset = "0x108")]
	public GameObject _part_chest_3;

	[Token(Token = "0x400200F")]
	[FieldOffset(Offset = "0x110")]
	public GameObject _part_eye;

	[Token(Token = "0x4002010")]
	[FieldOffset(Offset = "0x118")]
	public GameObject _part_face;

	[Token(Token = "0x4002011")]
	[FieldOffset(Offset = "0x120")]
	public GameObject _part_glass;

	[Token(Token = "0x4002012")]
	[FieldOffset(Offset = "0x128")]
	public GameObject _part_hair;

	[Token(Token = "0x4002013")]
	[FieldOffset(Offset = "0x130")]
	public GameObject _part_hair_1;

	[Token(Token = "0x4002014")]
	[FieldOffset(Offset = "0x138")]
	public GameObject _part_hand_l;

	[Token(Token = "0x4002015")]
	[FieldOffset(Offset = "0x140")]
	public GameObject _part_hand_r;

	[Token(Token = "0x4002016")]
	[FieldOffset(Offset = "0x148")]
	public GameObject _part_head;

	[Token(Token = "0x4002017")]
	[FieldOffset(Offset = "0x150")]
	public GameObject _part_leg;

	[Token(Token = "0x4002018")]
	[FieldOffset(Offset = "0x158")]
	public GameObject _part_upper_body;

	[Token(Token = "0x4002019")]
	[FieldOffset(Offset = "0x160")]
	public GameObject _mount_cloth;

	[Token(Token = "0x400201A")]
	[FieldOffset(Offset = "0x168")]
	public HumanSetupMeshes _meshes;

	[Token(Token = "0x400201B")]
	[FieldOffset(Offset = "0x170")]
	public HumanSetupTextures _textures;

	[Token(Token = "0x400201C")]
	[FieldOffset(Offset = "0x178")]
	public MeleeWeaponTrail LeftTrail;

	[Token(Token = "0x400201D")]
	[FieldOffset(Offset = "0x180")]
	public MeleeWeaponTrail RightTrail;

	[Token(Token = "0x400201E")]
	[FieldOffset(Offset = "0x188")]
	public GameObject _part_back;

	[Token(Token = "0x400201F")]
	[FieldOffset(Offset = "0x190")]
	public GameObject _part_head_decor;

	[Token(Token = "0x4002020")]
	[FieldOffset(Offset = "0x198")]
	public GameObject _part_hat;

	[Token(Token = "0x4002021")]
	[FieldOffset(Offset = "0x1A0")]
	public string[] TierEffects;

	[Token(Token = "0x4002022")]
	[FieldOffset(Offset = "0x1A8")]
	public Transform[] LeftTierEffects;

	[Token(Token = "0x4002023")]
	[FieldOffset(Offset = "0x1B0")]
	public Transform[] RightTierEffects;

	[Token(Token = "0x4002024")]
	[FieldOffset(Offset = "0x1B8")]
	public ParticleSystem LeftShingEffect;

	[Token(Token = "0x4002025")]
	[FieldOffset(Offset = "0x1C0")]
	public ParticleSystem RightShingEffect;

	[Token(Token = "0x4002026")]
	[FieldOffset(Offset = "0x1C8")]
	public HumanCustomSet CustomSet;

	[Token(Token = "0x4002027")]
	[FieldOffset(Offset = "0x1D0")]
	public HumanWeapon Weapon;

	[Token(Token = "0x4002028")]
	[FieldOffset(Offset = "0x1D8")]
	public JSONNode CurrentCostume;

	[Token(Token = "0x4002029")]
	[FieldOffset(Offset = "0x1E0")]
	public JSONNode CurrentHair;

	[Token(Token = "0x400202A")]
	[FieldOffset(Offset = "0x1E8")]
	public bool IsDeadBody;

	[Token(Token = "0x400202B")]
	[FieldOffset(Offset = "0x1E9")]
	public bool Deleted;

	[Token(Token = "0x400202C")]
	[FieldOffset(Offset = "0x18")]
	public static int EyeCount;

	[Token(Token = "0x400202D")]
	[FieldOffset(Offset = "0x1C")]
	public static int FaceCount;

	[Token(Token = "0x400202E")]
	[FieldOffset(Offset = "0x20")]
	public static int GlassCount;

	[Token(Token = "0x400202F")]
	[FieldOffset(Offset = "0x24")]
	public static int CostumeMCount;

	[Token(Token = "0x4002030")]
	[FieldOffset(Offset = "0x28")]
	public static int CostumeFCount;

	[Token(Token = "0x4002031")]
	[FieldOffset(Offset = "0x2C")]
	public static int HairMCount;

	[Token(Token = "0x4002032")]
	[FieldOffset(Offset = "0x30")]
	public static int HairFCount;

	[Token(Token = "0x4002033")]
	[FieldOffset(Offset = "0x34")]
	public static int BackCount;

	[Token(Token = "0x4002034")]
	[FieldOffset(Offset = "0x38")]
	public static int HeadCount;

	[Token(Token = "0x4002035")]
	[FieldOffset(Offset = "0x3C")]
	public static int HatCount;

	[Token(Token = "0x4002036")]
	[FieldOffset(Offset = "0x40")]
	public static HashSet<string> UniqueItems;

	[Token(Token = "0x4002037")]
	[FieldOffset(Offset = "0x1F0")]
	private readonly Dictionary<Renderer, Material> _effectMaterialCache;

	[Token(Token = "0x4002038")]
	[FieldOffset(Offset = "0x1F8")]
	private readonly HashSet<Material> _ownedMaterials;

	[Token(Token = "0x4002039")]
	[FieldOffset(Offset = "0x48")]
	private static readonly int HairClipPlaneId;

	[Token(Token = "0x400203A")]
	[FieldOffset(Offset = "0x4C")]
	private static readonly int HairClipLeftPlaneId;

	[Token(Token = "0x400203B")]
	[FieldOffset(Offset = "0x50")]
	private static readonly int HairClipRightPlaneId;

	[Token(Token = "0x400203C")]
	[FieldOffset(Offset = "0x54")]
	private static readonly int HairClipTopPlaneId;

	[Token(Token = "0x400203D")]
	[FieldOffset(Offset = "0x200")]
	private readonly List<Renderer> _hairRenderers;

	[Token(Token = "0x400203E")]
	[FieldOffset(Offset = "0x208")]
	private MaterialPropertyBlock _hairClipProperties;

	[Token(Token = "0x400203F")]
	[FieldOffset(Offset = "0x210")]
	private Bounds _headBounds;

	[Token(Token = "0x4002040")]
	[FieldOffset(Offset = "0x228")]
	private Vector3 _hairClipForward;

	[Token(Token = "0x4002041")]
	[FieldOffset(Offset = "0x234")]
	private Vector3 _hairClipRight;

	[Token(Token = "0x4002042")]
	[FieldOffset(Offset = "0x240")]
	private Vector3 _hairClipUp;

	[Token(Token = "0x4002043")]
	[FieldOffset(Offset = "0x24C")]
	[SerializeField]
	[Range(-1f, 1f)]
	private float _hoodieHairClipOffset;

	[Token(Token = "0x4002044")]
	[FieldOffset(Offset = "0x250")]
	[SerializeField]
	[Range(0f, 1.5f)]
	private float _hoodieHairClipWidth;

	[Token(Token = "0x4002045")]
	[FieldOffset(Offset = "0x254")]
	[SerializeField]
	[Range(-1f, 1.5f)]
	private float _hoodieHairClipTop;

	[Token(Token = "0x17000B5F")]
	public bool HasWeapon
	{
		[Token(Token = "0x6004227")]
		[Address(RVA = "0x5AFB5B0", Offset = "0x5AFA5B0", VA = "0x5AFB5B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B60")]
	public bool HasODM
	{
		[Token(Token = "0x6004228")]
		[Address(RVA = "0x5AFB5C0", Offset = "0x5AFA5C0", VA = "0x5AFB5C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B61")]
	public bool HasCloak
	{
		[Token(Token = "0x6004229")]
		[Address(RVA = "0x5AFB5D0", Offset = "0x5AFA5D0", VA = "0x5AFB5D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000B62")]
	public bool IsHooded
	{
		[Token(Token = "0x600422A")]
		[Address(RVA = "0x5AFB620", Offset = "0x5AFA620", VA = "0x5AFB620")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600422B")]
	[Address(RVA = "0x5AFB6B0", Offset = "0x5AFA6B0", VA = "0x5AFB6B0")]
	public static void Init()
	{
	}

	[Token(Token = "0x600422C")]
	[Address(RVA = "0x5AFBCD0", Offset = "0x5AFACD0", VA = "0x5AFBCD0")]
	private void Awake()
	{
	}

	[Token(Token = "0x600422D")]
	[Address(RVA = "0x5AFC7D0", Offset = "0x5AFB7D0", VA = "0x5AFC7D0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x600422E")]
	[Address(RVA = "0x5AFCF30", Offset = "0x5AFBF30", VA = "0x5AFCF30")]
	public void RefreshHairMaterials()
	{
	}

	[Token(Token = "0x600422F")]
	[Address(RVA = "0x5AFC880", Offset = "0x5AFB880", VA = "0x5AFC880")]
	private void UpdateHairClipPlane()
	{
	}

	[Token(Token = "0x6004230")]
	[Address(RVA = "0x5AFD470", Offset = "0x5AFC470", VA = "0x5AFD470")]
	private Vector4 GetHairClipPlane(Vector3 normal, float offset)
	{
		return default(Vector4);
	}

	[Token(Token = "0x6004231")]
	[Address(RVA = "0x5AFD640", Offset = "0x5AFC640", VA = "0x5AFD640")]
	public static int GetCostumeCount(bool male)
	{
		return default(int);
	}

	[Token(Token = "0x6004232")]
	[Address(RVA = "0x5AFD730", Offset = "0x5AFC730", VA = "0x5AFD730")]
	public static int GetHairCount()
	{
		return default(int);
	}

	[Token(Token = "0x6004233")]
	[Address(RVA = "0x5AFD7D0", Offset = "0x5AFC7D0", VA = "0x5AFD7D0")]
	public void Copy(InGameCharacterSettings settings)
	{
	}

	[Token(Token = "0x6004234")]
	[Address(RVA = "0x5AE97A0", Offset = "0x5AE87A0", VA = "0x5AE97A0")]
	public void Load(HumanCustomSet customSet, HumanWeapon weapon, bool isDeadBody = false)
	{
	}

	[Token(Token = "0x6004235")]
	[Address(RVA = "0x5AFEBE0", Offset = "0x5AFDBE0", VA = "0x5AFEBE0")]
	public void DeleteDie()
	{
	}

	[Token(Token = "0x6004236")]
	[Address(RVA = "0x5AFE8B0", Offset = "0x5AFD8B0", VA = "0x5AFE8B0")]
	public void CreateParts()
	{
	}

	[Token(Token = "0x6004237")]
	[Address(RVA = "0x5AFDA50", Offset = "0x5AFCA50", VA = "0x5AFDA50")]
	public void DeleteParts()
	{
	}

	[Token(Token = "0x6004238")]
	[Address(RVA = "0x5B029F0", Offset = "0x5B019F0", VA = "0x5B029F0")]
	private void OnDestroy()
	{
	}

	[Token(Token = "0x6004239")]
	[Address(RVA = "0x5AFEC80", Offset = "0x5AFDC80", VA = "0x5AFEC80")]
	private Material Own(Material material)
	{
		return null;
	}

	[Token(Token = "0x600423A")]
	[Address(RVA = "0x5AFD3B0", Offset = "0x5AFC3B0", VA = "0x5AFD3B0")]
	private Material OwnInstance(Renderer renderer)
	{
		return null;
	}

	[Token(Token = "0x600423B")]
	[Address(RVA = "0x5B02620", Offset = "0x5B01620", VA = "0x5B02620")]
	private void DestroyOwnedMaterials()
	{
	}

	[Token(Token = "0x600423C")]
	[Address(RVA = "0x5B027E0", Offset = "0x5B017E0", VA = "0x5B027E0")]
	private void DisposeCloth()
	{
	}

	[Token(Token = "0x600423D")]
	[Address(RVA = "0x5B02A10", Offset = "0x5B01A10", VA = "0x5B02A10")]
	private static void DisposeClothPart(ref GameObject part)
	{
	}

	[Token(Token = "0x600423E")]
	[Address(RVA = "0x5B00F50", Offset = "0x5AFFF50", VA = "0x5B00F50")]
	public void Create3dmg()
	{
	}

	[Token(Token = "0x600423F")]
	[Address(RVA = "0x5B02BE0", Offset = "0x5B01BE0", VA = "0x5B02BE0")]
	private void ScaleGearForCloak(GameObject gear)
	{
	}

	[Token(Token = "0x6004240")]
	[Address(RVA = "0x5B016B0", Offset = "0x5B006B0", VA = "0x5B016B0")]
	public void CreateWeapon()
	{
	}

	[Token(Token = "0x6004241")]
	[Address(RVA = "0x5B03F50", Offset = "0x5B02F50", VA = "0x5B03F50")]
	public void CreateCape()
	{
	}

	[Token(Token = "0x6004242")]
	[Address(RVA = "0x5B04510", Offset = "0x5B03510", VA = "0x5B04510")]
	public void SetHood(bool hoodUp)
	{
	}

	[Token(Token = "0x6004243")]
	[Address(RVA = "0x5B02430", Offset = "0x5B01430", VA = "0x5B02430")]
	private void UpdateCloakVisibility()
	{
	}

	[Token(Token = "0x6004244")]
	[Address(RVA = "0x5AFECE0", Offset = "0x5AFDCE0", VA = "0x5AFECE0")]
	public void CreateHair()
	{
	}

	[Token(Token = "0x6004245")]
	[Address(RVA = "0x5B04790", Offset = "0x5B03790", VA = "0x5B04790")]
	private bool CanUseCharacterEffects()
	{
		return default(bool);
	}

	[Token(Token = "0x6004246")]
	[Address(RVA = "0x5B02E60", Offset = "0x5B01E60", VA = "0x5B02E60")]
	private void ApplyCharacterEffectToPart(GameObject part, CharacterEffectType type, bool isHair)
	{
	}

	[Token(Token = "0x6004247")]
	[Address(RVA = "0x5B04940", Offset = "0x5B03940", VA = "0x5B04940")]
	public void ReapplyCharacterEffectsToExistingParts()
	{
	}

	[Token(Token = "0x6004248")]
	[Address(RVA = "0x5AFF340", Offset = "0x5AFE340", VA = "0x5AFF340")]
	public void CreateEye()
	{
	}

	[Token(Token = "0x6004249")]
	[Address(RVA = "0x5AFF550", Offset = "0x5AFE550", VA = "0x5AFF550")]
	public void CreateFace()
	{
	}

	[Token(Token = "0x600424A")]
	[Address(RVA = "0x5AFF890", Offset = "0x5AFE890", VA = "0x5AFF890")]
	public void CreateGlass()
	{
	}

	[Token(Token = "0x600424B")]
	[Address(RVA = "0x5B01CE0", Offset = "0x5B00CE0", VA = "0x5B01CE0")]
	public void CreateBack()
	{
	}

	[Token(Token = "0x600424C")]
	[Address(RVA = "0x5B02200", Offset = "0x5B01200", VA = "0x5B02200")]
	public void CreateHead()
	{
	}

	[Token(Token = "0x600424D")]
	[Address(RVA = "0x5B01FC0", Offset = "0x5B00FC0", VA = "0x5B01FC0")]
	public void CreateHat()
	{
	}

	[Token(Token = "0x600424E")]
	[Address(RVA = "0x5B00820", Offset = "0x5AFF820", VA = "0x5B00820")]
	public void CreateArms(Material bodyMaterial)
	{
	}

	[Token(Token = "0x600424F")]
	[Address(RVA = "0x5B04B90", Offset = "0x5B03B90", VA = "0x5B04B90")]
	private void SetMaterial(Renderer renderer, Material material)
	{
	}

	[Token(Token = "0x6004250")]
	[Address(RVA = "0x5B00D70", Offset = "0x5AFFD70", VA = "0x5B00D70")]
	public void CreateLowerBody(Material bodyMaterial)
	{
	}

	[Token(Token = "0x6004251")]
	[Address(RVA = "0x5AFFBD0", Offset = "0x5AFEBD0", VA = "0x5AFFBD0")]
	public void CreateUpperBody(Material bodyMaterial)
	{
	}

	[Token(Token = "0x6004252")]
	[Address(RVA = "0x5B04A60", Offset = "0x5B03A60", VA = "0x5B04A60")]
	private void SetFacialTexture(GameObject go, string type, int id, bool unique)
	{
	}

	[Token(Token = "0x6004253")]
	[Address(RVA = "0x5AFC650", Offset = "0x5AFB650", VA = "0x5AFC650")]
	private GameObject CreateMount(string transformPath)
	{
		return null;
	}

	[Token(Token = "0x6004254")]
	[Address(RVA = "0x5B04250", Offset = "0x5B03250", VA = "0x5B04250")]
	private GameObject GenerateCloth(string cloth)
	{
		return null;
	}

	[Token(Token = "0x6004255")]
	[Address(RVA = "0x5B02A70", Offset = "0x5B01A70", VA = "0x5B02A70")]
	private void AttachToMount(GameObject obj, GameObject mount, bool setScale = false)
	{
	}

	[Token(Token = "0x6004256")]
	[Address(RVA = "0x5B02970", Offset = "0x5B01970", VA = "0x5B02970")]
	private void DestroyIfExists(GameObject go)
	{
	}

	[Token(Token = "0x6004257")]
	[Address(RVA = "0x5B04BB0", Offset = "0x5B03BB0", VA = "0x5B04BB0")]
	public HumanSetup()
	{
	}
}
