// ==================== AoTTG2 cross-reference ====================
// Type: Characters.HumanSetup
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Characters/HumanSetup.c
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/HumanSetup.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
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
			// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$get_HasWeapon): clean
			return this.Weapon - 6U < 0xfffffffe;
		}
	}

	[Token(Token = "0x17000B60")]
	public bool HasODM
	{
		[Token(Token = "0x6004228")]
		[Address(RVA = "0x5AFB5C0", Offset = "0x5AFA5C0", VA = "0x5AFB5C0")]
		get
		{
			// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$get_HasODM): clean
			return this.Weapon != 5;
		}
	}

	[Token(Token = "0x17000B61")]
	public bool HasCloak
	{
		[Token(Token = "0x6004229")]
		[Address(RVA = "0x5AFB5D0", Offset = "0x5AFA5D0", VA = "0x5AFB5D0")]
		get
		{
			// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$get_HasCloak): clean
			HumanCustomSet pSVar1;
			IntSetting pSVar2;

			pSVar1 = this.CustomSet;
			if (pSVar1 == null) {
				return false;
			}
			pSVar2 = pSVar1.Cape;
			if (pSVar2 == null) {
				throw new NullReferenceException();
			}
			return pSVar2._value == 2;
		}
	}

	[Token(Token = "0x17000B62")]
	public bool IsHooded
	{
		[Token(Token = "0x600422A")]
		[Address(RVA = "0x5AFB620", Offset = "0x5AFA620", VA = "0x5AFB620")]
		get
		{
			// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$get_IsHooded): clean
			HumanCustomSet pSVar1;
			IntSetting pSVar2;
			BoolSetting pSVar3;

			if (Il2CppMethodInitialized_07547657 == false) {
				Il2CppMethodInitialized_07547657 = true;
				pSVar1 = this.CustomSet;
			}
			else {
				pSVar1 = this.CustomSet;
			}
			if (pSVar1 == null) {
				return false;
			}
			pSVar2 = pSVar1.Cape;
			if (pSVar2 != null) {
				if (pSVar2._value != 2) {
					return false;
				}
				pSVar3 = pSVar1.HoodUp;
				if (pSVar3 != null) {
					return pSVar3._value != false;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x600422B")]
	[Address(RVA = "0x5AFB6B0", Offset = "0x5AFA6B0", VA = "0x5AFB6B0")]
	public static void Init()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$Init): 3 lines keep C-only constructs
		Characters_HumanSetup_StaticFields pCVar1;
		HashSet<object> __this;
		bool bVar2;
		int iVar3;
		String pSVar4;
		JSONNode pSVar5;
		JSONNode pSVar6;
		JSONArray pSVar7;
		KeyValuePair<string, JSONNode> SVar8;
		JSONNode.Enumerator local_78;

		local_78.m_Array._list = null;
		local_78.m_Array._index = 0;
		local_78.m_Array._version = 0;
		local_78.m_Object._current.value = null;
		local_78.m_Object._getEnumeratorRetType = 0;
		local_78.m_Object._36_4_ = 0;
		local_78.m_Object._version = 0;
		local_78.m_Object._index = 0;
		local_78.m_Object._current.key = null;
		local_78.type = 0;
		local_78._4_4_ = 0;
		local_78.m_Object._dictionary = null;
		local_78.m_Array._current = null;
		pSVar4 = ResourcePaths.Info;
		pSVar4 = ResourceManager.TryLoadText(pSVar4, "CostumeInfo");
		pSVar5 = JSON.Parse(pSVar4);
		if (pSVar5 != null) {
			pSVar6 = pSVar5.get_Item("Costume");
			HumanSetup.CostumeInfo = pSVar6;
			pSVar6 = pSVar5.get_Item("Hair");
			pCVar1 = typeof(HumanSetup).static_fields;
			pCVar1.HairInfo = pSVar6;
			pSVar6 = pSVar5.get_Item("EyeCount");
			if (pSVar6 != null) {
				iVar3 = pSVar6.get_AsInt();
				HumanSetup.EyeCount = iVar3;
				pSVar6 = pSVar5.get_Item("FaceCount");
				if (pSVar6 != null) {
					iVar3 = pSVar6.get_AsInt();
					HumanSetup.FaceCount = iVar3;
					pSVar6 = pSVar5.get_Item("GlassCount");
					if (pSVar6 != null) {
						iVar3 = pSVar6.get_AsInt();
						HumanSetup.GlassCount = iVar3;
						pSVar6 = pSVar5.get_Item("BackCount");
						if (pSVar6 != null) {
							iVar3 = pSVar6.get_AsInt();
							HumanSetup.BackCount = iVar3;
							pSVar6 = pSVar5.get_Item("HatCount");
							if (pSVar6 != null) {
								iVar3 = pSVar6.get_AsInt();
								HumanSetup.HatCount = iVar3;
								pSVar6 = pSVar5.get_Item("HeadCount");
								if (pSVar6 != null) {
									iVar3 = pSVar6.get_AsInt();
									pCVar1 = typeof(HumanSetup).static_fields;
									pCVar1.HeadCount = iVar3;
									pSVar6 = pCVar1.CostumeInfo;
									if ((pSVar6 != null) &&(pSVar6 = pSVar6.get_Item("Male"), pSVar6 != null)) {
										iVar3 = pSVar6.get_Count();
										pCVar1 = typeof(HumanSetup).static_fields;
										pCVar1.CostumeMCount = iVar3;
										pSVar6 = pCVar1.CostumeInfo;
										if ((pSVar6 != null) &&(pSVar6 = pSVar6.get_Item("Female"), pSVar6 != null)) {
											iVar3 = pSVar6.get_Count();
											pCVar1 = typeof(HumanSetup).static_fields;
											pCVar1.CostumeFCount = iVar3;
											pSVar6 = pCVar1.HairInfo;
											if ((pSVar6 != null) &&(pSVar6 = pSVar6.get_Item("Male"), pSVar6 != null)) {
												iVar3 = pSVar6.get_Count();
												pCVar1 = typeof(HumanSetup).static_fields;
												pCVar1.HairMCount = iVar3;
												pSVar6 = pCVar1.HairInfo;
												if ((pSVar6 != null) &&(pSVar6 = pSVar6.get_Item("Female"), pSVar6 != null)) {
													iVar3 = pSVar6.get_Count();
													HumanSetup.HairFCount = iVar3;
													pSVar5 = pSVar5.get_Item("UniqueItem");
													if (pSVar5 != null) {
														pSVar7 = pSVar5.get_AsArray();
														if (pSVar7 != null) {
															(**(code*)((long)pSVar7.klass + 0x338))(&local_78,pSVar7,*(ulong)((long)pSVar7.klass + 0x340));
															bVar2 = local_78.MoveNext();
															if (bVar2) {
																do {
																	SVar8 = local_78.Current;
																	__this = (HashSet<object>)HumanSetup.UniqueItems;
																	pSVar4 = ((JSONNode)SVar8.value);
																	if (__this == null) goto label_05bfbcca;
																	__this.Add((object)pSVar4);
																	bVar2 = local_78.MoveNext();
																} while (bVar2);
															}
															HumanSetupMaterials.Init();
															return;
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05bfbcca: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600422C")]
	[Address(RVA = "0x5AFBCD0", Offset = "0x5AFACD0", VA = "0x5AFBCD0")]
	private void Awake()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$Awake): 65 lines keep C-only constructs
		uint uVar1;
		byte[] auVar2 = new byte[16];
		byte[] auVar3 = new byte[16];
		Bounds pUVar4;
		HumanSetupMeshes __this_00;
		HumanSetupTextures __this_01;
		Transform pUVar5;
		Transform pUVar6;
		Transform pUVar7;
		GameObject pUVar8;
		MeshFilter __this_02;
		Mesh __this_03;
		UnityEngine_Vector3_StaticFields pUVar9;
		float fVar10;
		uint extraout_XMM0_Db;
		uint extraout_XMM0_Db_00;
		uint extraout_XMM0_Db_01;
		float fVar11;
		uint in_XMM1_Db;
		uint uVar12;
		uint uVar13;
		byte[] auVar14 = new byte[16];
		Vector3 UVar15;
		byte[] auStack_50 = new byte[12];
		float fStack_44;
		Bounds UStack_38;

		__this_00 = new HumanSetupMeshes(this);
		this._meshes = __this_00;
		__this_01 = new HumanSetupTextures(this);
		this._textures = __this_01;
		pUVar5 = this.transform;
		if ((((pUVar5 == null) ||(pUVar5 = pUVar5.Find("Armature/Core/Controller_Body/hip"), pUVar5 == null)) ||(pUVar6 = pUVar5.Find("spine/chest/neck/head"), pUVar6 == null)) ||(pUVar7 = pUVar6.Find("char_head"), pUVar7 == null)) goto label_05bfc640;
		pUVar8 = pUVar7.gameObject;
		this._part_head = pUVar8;
		pUVar7 = this.transform;
		if ((pUVar7 == null) ||(pUVar7 = pUVar7.Find("character_leg"), pUVar7 == null)) goto label_05bfc640;
		pUVar8 = pUVar7.gameObject;
		this._part_leg = pUVar8;
		pUVar7 = this.transform;
		if ((pUVar7 == null) ||(pUVar7 = pUVar7.Find("character_chest"), pUVar7 == null)) goto label_05bfc640;
		pUVar8 = pUVar7.gameObject;
		this._part_chest = pUVar8;
		pUVar5 = pUVar5.Find("spine/chest");
		if (pUVar5 == null) goto label_05bfc640;
		pUVar8 = pUVar5.gameObject;
		this._mount_back = pUVar8;
		pUVar8 = pUVar6.gameObject;
		this._mount_hat = pUVar8;
		pUVar8 = pUVar6.gameObject;
		this._mount_head_decor = pUVar8;
		pUVar8 = this.CreateMount("spine/chest");
		this._mount_chest = pUVar8;
		pUVar8 = this.CreateMount("spine/chest");
		this._mount_3dmg = pUVar8;
		pUVar8 = this.CreateMount("spine");
		this._mount_gas_l = pUVar8;
		pUVar8 = this.CreateMount("spine");
		this._mount_gas_r = pUVar8;
		pUVar8 = this.CreateMount("thigh_L");
		this._mount_gun_mag_l = pUVar8;
		pUVar8 = this.CreateMount("thigh_R");
		this._mount_gun_mag_r = pUVar8;
		pUVar8 = this.CreateMount("spine/chest/shoulder_L/upper_arm_L/forearm_L/hand_L");
		this._mount_weapon_l = pUVar8;
		pUVar8 = this.CreateMount("spine/chest/shoulder_R/upper_arm_R/forearm_R/hand_R");
		this._mount_weapon_r = pUVar8;
		pUVar8 = this.CreateMount("spine/chest/shoulder_L/upper_arm_L/forearm_L");
		this._mount_ts_l = pUVar8;
		pUVar8 = this.CreateMount("spine/chest/shoulder_R/upper_arm_R/forearm_R");
		this._mount_ts_r = pUVar8;
		this._mount_cloth = this._part_leg;
		pUVar8 = this._part_head;
		if (((pUVar8 == null) ||(__this_02 = pUVar8.GetComponent<MeshFilter>(), __this_02 == null)) ||(__this_03 = __this_02.sharedMesh, __this_03 == null)) goto label_05bfc640;
		UStack_38 = __this_03.bounds;
		pUVar4 = &this._headBounds;
		pUVar4.m_Extents.y = UStack_38.m_Extents.y;
		pUVar4.m_Extents.z = UStack_38.m_Extents.z;
		pUVar4 = &this._headBounds;
		pUVar4.m_Center.x = UStack_38.m_Center.x;
		pUVar4.m_Center.y = UStack_38.m_Center.y;
		*(ulong)&this._headBounds.m_Center.z = UStack_38._8_8_;
		pUVar8 = this._part_head;
		if (pUVar8 == null) goto label_05bfc640;
		pUVar5 = pUVar8.transform;
		pUVar6 = this.transform;
		if ((pUVar6 == null) ||(UVar15 = pUVar6.forward, pUVar5 == null)) goto label_05bfc640;
		UVar15 = pUVar5.InverseTransformDirection(UVar15);
		fVar11 = UVar15.z;
		if (Il2CppMethodInitialized_0753e72d == false) {
			in_XMM1_Db = 0;
			Il2CppMethodInitialized_0753e72d = true;
			auStack_50._0_4_ = 0.0;
			auStack_50._4_4_ = 0.0;
			if (g_data_0753e729 == false) goto label_05bfc530;
	label_05bfc21c: ;
			auStack_50._0_4_ = 0.0;
			auStack_50._4_4_ = 0.0;
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			auStack_50._0_4_ = 0.0;
			auStack_50._4_4_ = 0.0;
			if (g_data_0753e729 != false) goto label_05bfc21c;
	label_05bfc530: ;
			auStack_50._0_4_ = 0.0;
			auStack_50._4_4_ = 0.0;
			in_XMM1_Db = 0;
			g_data_0753e729 = true;
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			in_XMM1_Db = 0;
		}
		fVar10 = fVar11 * fVar11 + fStack_44 * fStack_44 + (float)auStack_50._8_4_ * (float)auStack_50._8_4_;
		if (fVar10 < 0.0) {
			fVar10 = sqrtf(fVar10);
			uVar12 = 0;
			in_XMM1_Db = extraout_XMM0_Db;
			if (1e-05 < fVar10) goto label_05bfc292;
	label_05bfc266: ;
			pUVar9 = typeof(Vector3).static_fields;
			fVar11 = (pUVar9.zeroVector).z;
			uVar12 = 0;
		}
		else {
			fVar10 = SQRT(fVar10);
			uVar12 = in_XMM1_Db;
			if (fVar10 <= 1e-05) goto label_05bfc266;
	label_05bfc292: ;
			fVar11 = fVar11 / fVar10;
			auVar14._4_4_ = fVar10;
			auVar14._0_4_ = fVar10;
			auVar14._8_4_ = in_XMM1_Db;
			auVar14._12_4_ = in_XMM1_Db;
			auVar14 = divps(stack0xffffffffffffffb8, auVar14);
			auStack_50._0_4_ = auVar14._0_4_;
			auStack_50._4_4_ = auVar14._4_4_;
			pUVar9 = (UnityEngine_Vector3_StaticFields)auStack_50;
		}
		fVar10 = (pUVar9.zeroVector).y;
		this._hairClipForward.x = (pUVar9.zeroVector).x;
		this._hairClipForward.y = fVar10;
		this._hairClipForward.z = fVar11;
		pUVar8 = this._part_head;
		if (pUVar8 == null) goto label_05bfc640;
		pUVar5 = pUVar8.transform;
		pUVar6 = this.transform;
		if ((pUVar6 == null) ||(UVar15 = pUVar6.right, pUVar5 == null)) goto label_05bfc640;
		UVar15 = pUVar5.InverseTransformDirection(UVar15);
		fVar11 = UVar15.z;
		if (Il2CppMethodInitialized_0753e72d == false) {
			uVar12 = 0;
			Il2CppMethodInitialized_0753e72d = true;
			auStack_50._0_4_ = 0.0;
			auStack_50._4_4_ = 0.0;
			if (g_data_0753e729 == false) goto label_05bfc59f;
	label_05bfc33c: ;
			auStack_50._0_4_ = 0.0;
			auStack_50._4_4_ = 0.0;
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			auStack_50._0_4_ = 0.0;
			auStack_50._4_4_ = 0.0;
			if (g_data_0753e729 != false) goto label_05bfc33c;
	label_05bfc59f: ;
			auStack_50._0_4_ = 0.0;
			auStack_50._4_4_ = 0.0;
			uVar12 = 0;
			g_data_0753e729 = true;
			uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			uVar12 = 0;
		}
		fVar10 = fVar11 * fVar11 + fStack_44 * fStack_44 + (float)auStack_50._8_4_ * (float)auStack_50._8_4_;
		if (fVar10 < 0.0) {
			fVar10 = sqrtf(fVar10);
			uVar13 = 0;
			uVar12 = extraout_XMM0_Db_00;
			if (1e-05 < fVar10) goto label_05bfc3ab;
	label_05bfc37f: ;
			pUVar9 = typeof(Vector3).static_fields;
			fVar11 = (pUVar9.zeroVector).z;
			uVar13 = 0;
		}
		else {
			fVar10 = SQRT(fVar10);
			uVar13 = uVar12;
			if (fVar10 <= 1e-05) goto label_05bfc37f;
	label_05bfc3ab: ;
			fVar11 = fVar11 / fVar10;
			auVar3._4_4_ = fVar10;
			auVar3._0_4_ = fVar10;
			auVar3._8_4_ = uVar12;
			auVar3._12_4_ = uVar12;
			auVar14 = divps(stack0xffffffffffffffb8, auVar3);
			auStack_50._0_4_ = auVar14._0_4_;
			auStack_50._4_4_ = auVar14._4_4_;
			pUVar9 = (UnityEngine_Vector3_StaticFields)auStack_50;
		}
		fVar10 = (pUVar9.zeroVector).y;
		this._hairClipRight.x = (pUVar9.zeroVector).x;
		this._hairClipRight.y = fVar10;
		this._hairClipRight.z = fVar11;
		pUVar8 = this._part_head;
		if (pUVar8 != null) {
			pUVar5 = pUVar8.transform;
			pUVar6 = this.transform;
			if ((pUVar6 != null) &&(UVar15 = pUVar6.up, pUVar5 != null)) {
				UVar15 = pUVar5.InverseTransformDirection(UVar15);
				fVar11 = UVar15.z;
				if (Il2CppMethodInitialized_0753e72d == false) {
					uVar13 = 0;
					Il2CppMethodInitialized_0753e72d = true;
					auStack_50._0_4_ = 0.0;
					auStack_50._4_4_ = 0.0;
				}
				else {
					auStack_50._0_4_ = 0.0;
					auStack_50._4_4_ = 0.0;
				}
				if (g_data_0753e729 == false) {
					auStack_50._0_4_ = 0.0;
					auStack_50._4_4_ = 0.0;
					uVar13 = 0;
					g_data_0753e729 = true;
					uVar1 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					auStack_50._0_4_ = 0.0;
					auStack_50._4_4_ = 0.0;
					uVar1 = ((typeof(Math))._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
					uVar13 = 0;
				}
				fVar10 = fVar11 * fVar11 + fStack_44 * fStack_44 + (float)auStack_50._8_4_ * (float)auStack_50._8_4_;
				if (fVar10 < 0.0) {
					fVar10 = sqrtf(fVar10);
					uVar13 = extraout_XMM0_Db_01;
				}
				else {
					fVar10 = SQRT(fVar10);
				}
				if (1e-05 < fVar10) {
					fVar11 = fVar11 / fVar10;
					auVar2._4_4_ = fVar10;
					auVar2._0_4_ = fVar10;
					auVar2._8_4_ = uVar13;
					auVar2._12_4_ = uVar13;
					auVar14 = divps(unique0x10000b5a, auVar2);
					auStack_50._0_4_ = auVar14._0_4_;
					auStack_50._4_4_ = auVar14._4_4_;
					pUVar9 = (UnityEngine_Vector3_StaticFields)auStack_50;
				}
				else {
					pUVar9 = typeof(Vector3).static_fields;
					fVar11 = (pUVar9.zeroVector).z;
				}
				fVar10 = (pUVar9.zeroVector).y;
				this._hairClipUp.x = (pUVar9.zeroVector).x;
				this._hairClipUp.y = fVar10;
				this._hairClipUp.z = fVar11;
				return;
			}
		}
	label_05bfc640: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600422D")]
	[Address(RVA = "0x5AFC7D0", Offset = "0x5AFB7D0", VA = "0x5AFC7D0")]
	private void LateUpdate()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$LateUpdate): clean
		HumanCustomSet pSVar1;
		IntSetting pSVar2;
		BoolSetting pSVar3;

		if (Il2CppMethodInitialized_07547658 == false) {
			Il2CppMethodInitialized_07547658 = true;
			if (Il2CppMethodInitialized_07547657 == false) goto label_05bfc810;
	label_05bfc7e6: ;
			pSVar1 = this.CustomSet;
		}
		else {
			if (Il2CppMethodInitialized_07547657 != false) goto label_05bfc7e6;
	label_05bfc810: ;
			Il2CppMethodInitialized_07547657 = true;
			pSVar1 = this.CustomSet;
		}
		if (pSVar1 != null) {
			pSVar2 = pSVar1.Cape;
			if (pSVar2 == null) {
	label_05bfc870: ;
				throw new NullReferenceException();
			}
			if (pSVar2._value == 2) {
				pSVar3 = pSVar1.HoodUp;
				if (pSVar3 == null) goto label_05bfc870;
				if (((pSVar3._value != false) && (this.IsDeadBody == false)) &&(this.Deleted == false)) {
					this.UpdateHairClipPlane();
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x600422E")]
	[Address(RVA = "0x5AFCF30", Offset = "0x5AFBF30", VA = "0x5AFCF30")]
	public void RefreshHairMaterials()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$RefreshHairMaterials): 5 lines keep C-only constructs
		uint uVar1;
		HumanCustomSet pSVar2;
		IntSetting pSVar3;
		BoolSetting pSVar4;
		List<Renderer> __this_00;
		Object x;
		bool bVar5;
		int value;
		String* ppSVar6;
		Object x_00;
		Material pUVar7;
		Object pUVar8;
		String pSVar9;
		String[] value_00;
		byte[] local_68 = new byte[8];
		Object local_58;
		byte[] local_48 = new byte[16];
		Object local_38;

		local_68 = (byte[])0x0;
		local_58 = null;
		if (Il2CppMethodInitialized_07547658 == false) {
			Il2CppMethodInitialized_07547658 = true;
			if (Il2CppMethodInitialized_07547657 == false) goto label_05bfcffc;
	label_05bfcfc8: ;
			pSVar2 = this.CustomSet;
		}
		else {
			if (Il2CppMethodInitialized_07547657 != false) goto label_05bfcfc8;
	label_05bfcffc: ;
			Il2CppMethodInitialized_07547657 = true;
			pSVar2 = this.CustomSet;
		}
		ppSVar6 = &"Universal Render Pipeline/Lit";
		if (pSVar2 != null) {
			ppSVar6 = &"Universal Render Pipeline/Lit";
			pSVar3 = pSVar2.Cape;
			if (pSVar3 == null) goto label_05bfd308;
			if (pSVar3._value == 2) {
				pSVar4 = pSVar2.HoodUp;
				if (pSVar4 == null) goto label_05bfd308;
				if (pSVar4._value != false) {
					if (this.IsDeadBody == false) {
						ppSVar6 = &"AoTTG/Hair";
					}
					else {
						ppSVar6 = &"Universal Render Pipeline/Lit";
					}
				}
			}
		}
		x_00 = (Object)Shader.Find(*ppSVar6);
		bVar5 = (x_00 != null);
		if (bVar5) {
			__this_00 = this._hairRenderers;
			if (__this_00 == null) {
	label_05bfd308: ;
				throw new NullReferenceException();
			}
			local_48.GetEnumerator((List<object>)__this_00);
			local_58 = local_38;
			local_68 = (byte[])local_48._0_8_;
			local_48._0_8_ = null;
			local_48._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)local_68;
	label_05bfd100: ;
			bVar5 = local_68.MoveNext();
			x = local_58;
			if (bVar5) {
				bVar5 = (x != null);
				if (bVar5) {
					if (x == null) {
						throw new NullReferenceException();
					}
					pUVar7 = x.sharedMaterial;
					uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					pUVar7 = null;
					uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				if (uVar1 == 0) {
				}
				bVar5 = ((Object)pUVar7 == null);
				if (!bVar5) {
					if (pUVar7 == null) {
						throw new NullReferenceException();
					}
					pUVar8 = (Object)pUVar7.shader;
					bVar5 = (pUVar8 == null);
					if (!bVar5) {
						pUVar8 = (Object)pUVar7.shader;
						bVar5 = (pUVar8 == x_00);
						if (!bVar5) {
							pUVar8 = (Object)pUVar7.shader;
							if (pUVar8 == null) {
								throw new NullReferenceException();
							}
							pSVar9 = pUVar8.name;
							bVar5 = (pSVar9 != "Universal Render Pipeline/Lit");
							if (bVar5) {
								pUVar8 = (Object)pUVar7.shader;
								if (pUVar8 == null) {
									throw new NullReferenceException();
								}
								pSVar9 = pUVar8.name;
								bVar5 = (pSVar9 != "AoTTG/Hair");
								if (bVar5) goto label_05bfd100;
							}
							pUVar7 = this.OwnInstance((Renderer)x);
							if (pUVar7 == null) {
								throw new NullReferenceException();
							}
							value = pUVar7.renderQueue;
							value_00 = pUVar7.shaderKeywords;
							pUVar7.shader = (Shader)x_00;
							pUVar7.shaderKeywords = value_00;
							pUVar7.renderQueue = value;
						}
					}
				}
				goto label_05bfd100;
			}
			local_68.Dispose();
		}
		this.UpdateHairClipPlane();
		return;
	}

	[Token(Token = "0x600422F")]
	[Address(RVA = "0x5AFC880", Offset = "0x5AFB880", VA = "0x5AFC880")]
	private void UpdateHairClipPlane()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$UpdateHairClipPlane): 85 lines keep C-only constructs
		MaterialPropertyBlock* targetAddress;
		ulong uVar1;
		ulong uVar2;
		HumanCustomSet pSVar3;
		IntSetting pSVar4;
		BoolSetting pSVar5;
		List<Renderer> pSVar6;
		object pIVar7;
		bool bVar8;
		GameObject __this_00;
		ulong extraout_RAX;
		MaterialPropertyBlock pUVar9;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dc_00;
		uint extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dc_02;
		uint extraout_XMM0_Dd;
		uint extraout_XMM0_Dd_00;
		uint extraout_XMM0_Dd_01;
		uint extraout_XMM0_Dd_02;
		uint uVar10;
		uint uVar11;
		Vector4 UVar12;
		Vector4 value;
		Vector4 value_00;
		Vector4 value_01;
		Vector3 normal;
		Vector3 normal_00;
		System_Collections_Generic_List_Enumerator_object__o local_f8;
		byte[] local_d8 = new byte[16];
		Object local_c8;
		ulong local_c0;
		byte[] local_b8 = new byte[16];
		byte[] local_a8 = new byte[16];
		byte[] local_98 = new byte[16];
		byte[] local_88 = new byte[16];
		byte[] local_78 = new byte[16];
		byte[] local_68 = new byte[16];
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[16];

		local_f8._list = null;
		local_f8._index = 0;
		local_f8._version = 0;
		local_f8._current = null;
		if (Il2CppMethodInitialized_07547658 == false) {
			Il2CppMethodInitialized_07547658 = true;
			if (Il2CppMethodInitialized_07547657 == false) goto label_05bfc946;
	label_05bfc91b: ;
			pSVar3 = this.CustomSet;
		}
		else {
			if (Il2CppMethodInitialized_07547657 != false) goto label_05bfc91b;
	label_05bfc946: ;
			Il2CppMethodInitialized_07547657 = true;
			pSVar3 = this.CustomSet;
		}
		if (pSVar3 != null) {
			pSVar4 = pSVar3.Cape;
			if (pSVar4 == null) goto label_05bfce46;
			if (pSVar4._value == 2) {
				pSVar5 = pSVar3.HoodUp;
				if (pSVar5 == null) goto label_05bfce46;
				if ((pSVar5._value != false) && (this.IsDeadBody == false)) {
					pSVar6 = this._hairRenderers;
					if (pSVar6 == null) goto label_05bfce46;
					local_d8.GetEnumerator((List<object>)pSVar6);
					local_f8._current = (object)local_c8;
					local_f8._list = (List<T>)local_d8._0_8_;
					local_f8._index = local_d8._8_4_;
					local_f8._version = local_d8._12_4_;
					local_d8._0_8_ = null;
					targetAddress = &this._hairClipProperties;
					local_68 = ZEXT816(0);
					local_c0 = 0;
					local_78 = ZEXT816(0);
					local_88 = ZEXT816(0);
					local_98 = ZEXT816(0);
					local_a8 = ZEXT816(0);
					local_b8 = ZEXT816(0);
					local_48 = ZEXT816(0);
					local_58 = ZEXT816(0);
					local_d8._8_8_ = &local_f8;
					while (true) {
						bVar8 = local_f8.MoveNext();
						pIVar7 = local_f8._current;
						if (!(bVar8)) break;
						bVar8 = ((Object)pIVar7 == null);
						if (!bVar8) {
							if ((Object)pIVar7 == null) {
								throw new NullReferenceException();
							}
							bVar8 = pIVar7.enabled;
							if ((bVar8) &&(bVar8 = pIVar7.forceRenderingOff, !bVar8)) {
								__this_00 = pIVar7.gameObject;
								if (__this_00 == null) {
									throw new NullReferenceException();
								}
								bVar8 = __this_00.activeInHierarchy;
								if (bVar8) {
									if ((local_c0 & 1) == 0) {
										uVar10 = 0;
										uVar11 = 0;
										UVar12 = this.GetHairClipPlane((Vector3)this._hairClipForward, this._hoodieHairClipOffset);
										local_48._8_4_ = extraout_XMM0_Dc;
										local_48._0_8_ = UVar12._0_8_;
										local_48._12_4_ = extraout_XMM0_Dd;
										local_58._8_4_ = uVar10;
										local_58._0_8_ = UVar12._8_8_;
										local_58._12_4_ = uVar11;
										uVar10 = 0;
										uVar11 = 0;
										UVar12 = this.GetHairClipPlane((Vector3)this._hairClipRight, -this._hoodieHairClipWidth);
										local_78._8_4_ = extraout_XMM0_Dc_00;
										local_78._0_8_ = UVar12._0_8_;
										local_78._12_4_ = extraout_XMM0_Dd_00;
										local_68._8_4_ = uVar10;
										local_68._0_8_ = UVar12._8_8_;
										local_68._12_4_ = uVar11;
										uVar1._0_4_ = this._hairClipRight.x;
										uVar1._4_4_ = this._hairClipRight.y;
										uVar10 = 0x80000000;
										uVar11 = 0x80000000;
										normal.z = -this._hairClipRight.z;
										normal.x = (float)(int)(uVar1 ^ 0x8000000080000000);
										normal.y = (float)(int)((uVar1 ^ 0x8000000080000000) >> 0x20);
										UVar12 = this.GetHairClipPlane(normal, -this._hoodieHairClipWidth);
										local_98._8_4_ = extraout_XMM0_Dc_01;
										local_98._0_8_ = UVar12._0_8_;
										local_98._12_4_ = extraout_XMM0_Dd_01;
										local_88._8_4_ = uVar10;
										local_88._0_8_ = UVar12._8_8_;
										local_88._12_4_ = uVar11;
										uVar2._0_4_ = this._hairClipUp.x;
										uVar2._4_4_ = this._hairClipUp.y;
										uVar10 = 0x80000000;
										uVar11 = 0x80000000;
										normal_00.z = -this._hairClipUp.z;
										normal_00.x = (float)(int)(uVar2 ^ 0x8000000080000000);
										normal_00.y = (float)(int)((uVar2 ^ 0x8000000080000000) >> 0x20);
										UVar12 = this.GetHairClipPlane(normal_00, -this._hoodieHairClipTop);
										local_b8._8_4_ = extraout_XMM0_Dc_02;
										local_b8._0_8_ = UVar12._0_8_;
										local_b8._12_4_ = extraout_XMM0_Dd_02;
										local_a8._8_4_ = uVar10;
										local_a8._0_8_ = UVar12._8_8_;
										local_a8._12_4_ = uVar11;
										local_c0 = CONCAT71((int7)((ulong)extraout_RAX >> 8), 1);
										if (*targetAddress == null) {
											pUVar9 = new MaterialPropertyBlock();
											*targetAddress = pUVar9;
										}
									}
									pIVar7.GetPropertyBlock(*targetAddress);
									pUVar9 = *targetAddress;
									if (pUVar9 == null) {
										throw new NullReferenceException();
									}
									UVar12.z = (float)local_58._0_4_;
									UVar12.w = (float)local_58._4_4_;
									UVar12.x = (float)local_48._0_4_;
									UVar12.y = (float)local_48._4_4_;
									pUVar9.SetVector(HumanSetup.HairClipPlaneId, UVar12);
									if (*targetAddress == null) {
										throw new NullReferenceException();
									}
									value.z = (float)local_68._0_4_;
									value.w = (float)local_68._4_4_;
									value.x = (float)local_78._0_4_;
									value.y = (float)local_78._4_4_;
									(*targetAddress).SetVector(HumanSetup.HairClipLeftPlaneId, value);
									if (*targetAddress == null) {
										throw new NullReferenceException();
									}
									value_00.z = (float)local_88._0_4_;
									value_00.w = (float)local_88._4_4_;
									value_00.x = (float)local_98._0_4_;
									value_00.y = (float)local_98._4_4_;
									(*targetAddress).SetVector(HumanSetup.HairClipRightPlaneId, value_00);
									if (*targetAddress == null) {
										throw new NullReferenceException();
									}
									value_01.z = (float)local_a8._0_4_;
									value_01.w = (float)local_a8._4_4_;
									value_01.x = (float)local_b8._0_4_;
									value_01.y = (float)local_b8._4_4_;
									(*targetAddress).SetVector(HumanSetup.HairClipTopPlaneId, value_01);
									pIVar7.SetPropertyBlock(*targetAddress);
								}
							}
						}
					}
					goto label_05bfce1b;
				}
			}
		}
		pSVar6 = this._hairRenderers;
		if (pSVar6 != null) {
			local_d8.GetEnumerator((List<object>)pSVar6);
			local_f8._current = (object)local_c8;
			local_f8._list = (List<T>)local_d8._0_8_;
			local_f8._index = local_d8._8_4_;
			local_f8._version = local_d8._12_4_;
			local_d8._0_8_ = null;
			local_d8._8_8_ = &local_f8;
			while (true) {
				bVar8 = local_f8.MoveNext();
				pIVar7 = local_f8._current;
				if (!(bVar8)) break;
				bVar8 = ((Object)pIVar7 != null);
				if (bVar8) {
					if ((Object)pIVar7 == null) {
						throw new NullReferenceException();
					}
					bVar8 = pIVar7.HasPropertyBlock();
					if (bVar8) {
						pIVar7.SetPropertyBlock(null);
					}
				}
			}
	label_05bfce1b: ;
			local_f8.Dispose();
			return;
		}
	label_05bfce46: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004230")]
	[Address(RVA = "0x5AFD470", Offset = "0x5AFC470", VA = "0x5AFD470")]
	private Vector4 GetHairClipPlane(Vector3 normal, float offset)
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$GetHairClipPlane): 2 lines keep C-only constructs
		float fVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		GameObject __this_00;
		Bounds pUVar6;
		Transform __this_01;
		float fVar7;
		float fVar8;
		Vector4 UVar9;
		float local_118;
		float fStack_114;
		Matrix4x4 local_c8;
		Matrix4x4 local_88;
		Matrix4x4 local_40;

		fVar7 = normal.z;
		__this_00 = this._part_head;
		if (__this_00 != null) {
			pUVar6 = &this._headBounds;
			uVar2 = pUVar6.m_Extents.x;
			uVar4 = pUVar6.m_Extents.y;
			fVar8 = this._headBounds.m_Extents.z;
			pUVar6 = &this._headBounds;
			uVar3 = pUVar6.m_Center.x;
			uVar5 = pUVar6.m_Center.y;
			fVar1 = this._headBounds.m_Center.z;
			__this_01 = __this_00.transform;
			if (__this_01 != null) {
				local_118 = normal.x;
				fStack_114 = normal.y;
				fVar8 = ((float)uVar2 * ABS(local_118) + ABS(fStack_114) * (float)uVar4 + fVar8 * ABS(fVar7)) * offset;
				fVar8 = ((float)uVar3 + fVar8 * local_118) * local_118 +((float)uVar5 + fStack_114 * fVar8) * fStack_114 + (fVar1 + fVar8 * fVar7) * fVar7;
				local_40 = __this_01.worldToLocalMatrix;
				local_c8.m03 = local_40.m03;
				local_c8.m13 = local_40.m13;
				local_c8.m23 = local_40.m23;
				local_c8.m33 = local_40.m33;
				local_c8.m02 = local_40.m02;
				local_c8.m12 = local_40.m12;
				local_c8.m22 = local_40.m22;
				local_c8.m32 = local_40.m32;
				local_c8.m01 = local_40.m01;
				local_c8.m11 = local_40.m11;
				local_c8.m21 = local_40.m21;
				local_c8.m31 = local_40.m31;
				local_c8.m00 = local_40.m00;
				local_c8.m10 = local_40.m10;
				local_c8.m20 = local_40.m20;
				local_c8.m30 = local_40.m30;
				local_88 = Matrix4x4.Internal_Transpose(ref local_c8);
				UVar9.x =(fVar7 * local_88.m02 + fStack_114 * local_88.m01 + local_118 * local_88.m00) - fVar8 * local_88.m03;
				UVar9.y =(fVar7 * local_88.m12 + fStack_114 * local_88.m11 + local_118 * local_88.m10) - fVar8 * local_88.m13;
				UVar9.w =(fVar7 * local_88.m32 + fStack_114 * local_88.m31 + local_118 * local_88.m30) - fVar8 * local_88.m33;
				UVar9.z =(fVar7 * local_88.m22 + fStack_114 * local_88.m21 + local_118 * local_88.m20) - fVar8 * local_88.m23;
				return (Vector4)UVar9;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004231")]
	[Address(RVA = "0x5AFD640", Offset = "0x5AFC640", VA = "0x5AFD640")]
	public static int GetCostumeCount(bool male)
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$GetCostumeCount): 4 lines keep C-only constructs
		uint uVar1;
		code *vtableDispatch;
		int iVar2;
		String* ppSVar3;
		JSONNode pSVar4;
		long plVar5;

		uVar1 = (typeof(HumanSetup)._2).cctor_finished_or_no_cctor;
		if (male) {
			if (uVar1 == 0) {
			}
			pSVar4 = HumanSetup.CostumeInfo;
			if (pSVar4 == null) goto label_05bfd721;
			ppSVar3 = &"Male";
		}
		else {
			if (uVar1 == 0) {
			}
			pSVar4 = HumanSetup.CostumeInfo;
			if (pSVar4 == null) goto label_05bfd721;
			ppSVar3 = &"Female";
		}
		pSVar4 = pSVar4.get_Item(*ppSVar3);
		if (pSVar4 != null) {
			plVar5 = (long)pSVar4.get_AsArray();
			if (plVar5 != null) {
				vtableDispatch = *(code*)(*plVar5 + 0x1e8);
				iVar2 = (*vtableDispatch)(plVar5,*(ulong)(*plVar5 + 0x1f0),vtableDispatch);
				return iVar2;
			}
		}
	label_05bfd721: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004232")]
	[Address(RVA = "0x5AFD730", Offset = "0x5AFC730", VA = "0x5AFD730")]
	public static int GetHairCount()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$GetHairCount): clean
		uint uVar1;
		JSONNode pSVar2;
		int iVar3;
		JSONArray pSVar4;

		if (Il2CppMethodInitialized_0754765e == false) {
			Il2CppMethodInitialized_0754765e = true;
			uVar1 = (typeof(HumanSetup)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(HumanSetup)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = HumanSetup.HairInfo;
		}
		else {
			pSVar2 = *(JSONNode*)((long)(typeof(HumanSetup)).static_fields + 8);
		}
		if ((pSVar2 == null) ||(pSVar4 = pSVar2.get_AsArray(), pSVar4 == null)) {
			throw new NullReferenceException();
		}
		return iVar3;
	}

	[Token(Token = "0x6004233")]
	[Address(RVA = "0x5AFD7D0", Offset = "0x5AFC7D0", VA = "0x5AFD7D0")]
	public void Copy(InGameCharacterSettings settings)
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$Copy): 3 lines keep C-only constructs
		byte bVar1;
		int index;
		int iVar2;
		HumanCustomSettings pSVar3;
		IntSetting pSVar4;
		IntSetting pSVar5;
		ListSetting<T> pSVar6;
		StringSetting pSVar7;
		String loadout;
		HumanCustomSet pSVar8;
		int iVar9;
		Settings_SetSettingsContainer_HumanCustomSet__o pSVar10;
		HumanCustomSet pSVar11;

		pSVar3 = SettingsManager.HumanCustomSettings;
		if (((((pSVar3 == null) ||(settings == null)) ||(pSVar4 = settings.CustomSet, pSVar4 == null)) ||((pSVar5 = settings.Costume, pSVar5 == null ||(pSVar10 = pSVar3.Costume1Sets, pSVar10 == null)))) ||(pSVar6 = pSVar10.Sets, pSVar6 == null)) goto label_05bfda34;
		pSVar10 = pSVar3.CustomSets;
		index = pSVar4._value;
		iVar2 = pSVar5._value;
		iVar9 = pSVar6.GetCount();
		if (index < iVar9) {
			if (iVar2 == 2) {
				pSVar3 = SettingsManager.HumanCustomSettings;
				if (pSVar3 == null) goto label_05bfda34;
				pSVar10 = pSVar3.Costume3Sets;
			}
			else if (iVar2 == 1) {
				pSVar3 = SettingsManager.HumanCustomSettings;
				if (pSVar3 == null) goto label_05bfda34;
				pSVar10 = pSVar3.Costume2Sets;
			}
			else {
				pSVar3 = SettingsManager.HumanCustomSettings;
				if (pSVar3 == null) goto label_05bfda34;
				pSVar10 = pSVar3.Costume1Sets;
			}
			if ((pSVar10 == null) ||(pSVar6 = pSVar10.Sets, pSVar6 == null)) goto label_05bfda34;
			pSVar11 = (HumanCustomSet)pSVar6.GetItemAt(index);
			if (pSVar11 == null) goto label_05bfd914;
	label_05bfd992: ;
			pSVar8 = typeof(HumanCustomSet);
			bVar1 = (typeof(HumanCustomSet)._2).typeHierarchyDepth;
			if (((pSVar11.klass._2).typeHierarchyDepth < bVar1) ||((pSVar11.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(HumanCustomSet))) {
	label_05bfda39: ;
				throw new InvalidCastException();
			}
			this.CustomSet = pSVar11;
			if (((pSVar11.klass._2).typeHierarchyDepth < bVar1) ||((pSVar11.klass._2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass)pSVar8)) goto label_05bfda39;
		}
		else {
			if ((pSVar10 == null) ||(pSVar6 = pSVar10.Sets, pSVar6 == null)) goto label_05bfda34;
			pSVar11 = (HumanCustomSet)pSVar6.GetItemAt(index - iVar9);
			if (pSVar11 != null) goto label_05bfd992;
	label_05bfd914: ;
			this.CustomSet = null;
		}
		pSVar7 = settings.Loadout;
		if (pSVar7 != null) {
			loadout = pSVar7._value;
			iVar9 = HumanLoadout.ToWeapon(loadout);
			this.Weapon = iVar9;
			return;
		}
	label_05bfda34: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004234")]
	[Address(RVA = "0x5AE97A0", Offset = "0x5AE87A0", VA = "0x5AE97A0")]
	public void Load(HumanCustomSet customSet, HumanWeapon weapon, bool isDeadBody = false)
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$Load): 9 lines keep C-only constructs
		HumanCustomSet* targetAddress;
		int iVar1;
		HumanCustomSet pSVar2;
		IntSetting pSVar3;
		IntSetting pSVar4;
		StringSetting pSVar5;
		bool bVar6;
		int iVar7;
		String* ppSVar8;
		JSONNode pSVar9;
		String pSVar10;
		BaseCharacter __this_00;

		targetAddress = &this.CustomSet;
		this.CustomSet = customSet;
		this.Weapon = weapon;
		this.IsDeadBody = isDeadBody;
		pSVar2 = this.CustomSet;
		if ((pSVar2 == null) ||(pSVar3 = pSVar2.Sex, pSVar3 == null)) goto label_05be9d04;
		pSVar4 = pSVar2.Costume;
		if (pSVar3._value == 0) {
			if (pSVar4 == null) goto label_05be9d04;
			iVar1 = pSVar4._value;
			if ((typeof(HumanSetup)._2).cctor_finished_or_no_cctor == 0) {
				if (HumanSetup.CostumeMCount <= iVar1) goto label_05be99fb;
	label_05be9948: ;
				if ((typeof(HumanSetup)._2).cctor_finished_or_no_cctor != 0) goto label_05be9955;
	label_05be9a35: ;
				pSVar9 = HumanSetup.CostumeInfo;
			}
			else {
				if (iVar1 < HumanSetup.CostumeMCount) goto label_05be9948;
	label_05be99fb: ;
				if ((*targetAddress == null) ||(pSVar3 = ((*targetAddress).fields).Costume, pSVar3 == null)) goto label_05be9d04;
				pSVar3.Value = 0;
				if ((typeof(HumanSetup)._2).cctor_finished_or_no_cctor == 0) goto label_05be9a35;
	label_05be9955: ;
				pSVar9 = HumanSetup.CostumeInfo;
			}
			if (pSVar9 == null) goto label_05be9d04;
			ppSVar8 = &"Male";
		}
		else {
			if (pSVar4 == null) goto label_05be9d04;
			iVar1 = pSVar4._value;
			if ((typeof(HumanSetup)._2).cctor_finished_or_no_cctor == 0) {
				if (HumanSetup.CostumeFCount <= iVar1) goto label_05be9985;
	label_05be98f0: ;
				if ((typeof(HumanSetup)._2).cctor_finished_or_no_cctor != 0) goto label_05be98fd;
	label_05be99bf: ;
				pSVar9 = HumanSetup.CostumeInfo;
			}
			else {
				if (iVar1 < HumanSetup.CostumeFCount) goto label_05be98f0;
	label_05be9985: ;
				if ((*targetAddress == null) ||(pSVar3 = ((*targetAddress).fields).Costume, pSVar3 == null)) goto label_05be9d04;
				pSVar3.Value = 0;
				if ((typeof(HumanSetup)._2).cctor_finished_or_no_cctor == 0) goto label_05be99bf;
	label_05be98fd: ;
				pSVar9 = HumanSetup.CostumeInfo;
			}
			if (pSVar9 == null) goto label_05be9d04;
			ppSVar8 = &"Female";
		}
		pSVar9 = pSVar9.get_Item(*ppSVar8);
		if (((*targetAddress == null) ||(pSVar3 = ((*targetAddress).fields).Costume, pSVar3 == null)) ||(pSVar9 == null)) goto label_05be9d04;
		pSVar9 = pSVar9.get_Item(pSVar3._value);
		this.CurrentCostume = pSVar9;
		if (((*targetAddress == null) ||(pSVar5 = ((*targetAddress).fields).Hair, pSVar5 == null)) ||(pSVar10 = pSVar5._value, pSVar10 == null)) goto label_05be9d04;
		bVar6 = pSVar10.StartsWith("HairM");
		if (bVar6) {
			pSVar9 = HumanSetup.HairInfo;
			if (pSVar9 == null) goto label_05be9d04;
			ppSVar8 = &"Male";
	label_05be9b84: ;
			pSVar9 = pSVar9.get_Item(*ppSVar8);
			pSVar10 = pSVar10.Substring(5);
			iVar7 = Int32.Parse(pSVar10);
			if (pSVar9 == null) goto label_05be9d04;
			pSVar9 = pSVar9.get_Item(iVar7);
			this.CurrentHair = pSVar9;
		}
		else {
			bVar6 = pSVar10.StartsWith("HairF");
			if (bVar6) {
				pSVar9 = HumanSetup.HairInfo;
				if (pSVar9 == null) goto label_05be9d04;
				ppSVar8 = &"Female";
				goto label_05be9b84;
			}
		}
		pSVar9 = this.CurrentCostume;
		bVar6 = (pSVar9 == null);
		if (bVar6) {
			DebugConsole.Log("Warning: costume does not exist in CostumeInfo JSON.", false);
		}
		pSVar9 = this.CurrentHair;
		bVar6 = (pSVar9 == null);
		if (bVar6) {
			DebugConsole.Log("Warning: hair does not exist in CostumeInfo JSON", false);
		}
		this.DeleteParts();
		this.CreateParts();
		__this_00 = this.GetComponent<BaseCharacter>();
		bVar6 = ((Object)__this_00 != null);
		if (!bVar6) {
			return;
		}
		if (__this_00 != null) {
			__this_00.RefreshRenderers();
			return;
		}
	label_05be9d04: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004235")]
	[Address(RVA = "0x5AFEBE0", Offset = "0x5AFDBE0", VA = "0x5AFEBE0")]
	public void DeleteDie()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$DeleteDie): clean
		uint uVar1;
		Object[] pSVar2;
		uint uVar3;

		if (this.Deleted != false) {
			return;
		}
		this.DeleteParts();
		pSVar2 = this.GetComponentsInChildren<Renderer>() ;
		if (pSVar2 == null) {
	label_05bfec72: ;
			throw new NullReferenceException();
		}
		uVar1 = (uint)pSVar2.Length;
		if (0 < (int)uVar1) {
			uVar3 = 0;
			do {
				if (uVar1 <= uVar3) {
					throw new IndexOutOfRangeException();
				}
				if ((Renderer)pSVar2[(int)uVar3] == null) goto label_05bfec72;
				(pSVar2[(int)uVar3]).enabled = false;
				uVar3 = uVar3 + 1;
				uVar1 = (uint)pSVar2.Length;
			} while ((int)uVar3 < (int)uVar1);
		}
		this.Deleted = true;
		return;
	}

	[Token(Token = "0x6004236")]
	[Address(RVA = "0x5AFE8B0", Offset = "0x5AFD8B0", VA = "0x5AFE8B0")]
	public void CreateParts()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$CreateParts): clean
		HumanSetupTextures pCVar1;
		HumanCustomSet pSVar2;
		ColorSetting pSVar3;
		Color255 pUVar4;
		HashSet<object> __this_00;
		String mainTexture;
		String maskTexture;
		String colorTexture;
		String pantsTexture;
		MethodInfo method_00;
		Color shirt;
		Color straps;
		Color pants;
		Color jacket;
		Color boots;

		pCVar1 = this._textures;
		if (pCVar1 != null) {
			mainTexture = pCVar1.GetBodyMainTexture();
			pCVar1 = this._textures;
			if (pCVar1 != null) {
				maskTexture = pCVar1.GetBodyMaskTexture();
				pCVar1 = this._textures;
				if (pCVar1 != null) {
					colorTexture = pCVar1.GetBodyColorTexture();
					pCVar1 = this._textures;
					if (pCVar1 != null) {
						pantsTexture = pCVar1.GetBodyPantsTexture();
						pSVar2 = this.CustomSet;
						if (((pSVar2 != null) &&(pSVar3 = pSVar2.ShirtColor, pSVar3 != null)) &&(pUVar4 = pSVar3._value, pUVar4 != null)) {
							shirt = pUVar4.ToColor();
							pSVar2 = this.CustomSet;
							if ((pSVar2 != null) &&(pSVar3 = pSVar2.StrapsColor, pSVar3 != null)) {
								pUVar4 = pSVar3._value;
								if (pUVar4 != null) {
									straps = pUVar4.ToColor();
									pSVar2 = this.CustomSet;
									if ((pSVar2 != null) &&(pSVar3 = pSVar2.PantsColor, pSVar3 != null)) {
										pUVar4 = pSVar3._value;
										if (pUVar4 != null) {
											pants = pUVar4.ToColor();
											pSVar2 = this.CustomSet;
											if ((pSVar2 != null) &&(pSVar3 = pSVar2.JacketColor, pSVar3 != null)) {
												pUVar4 = pSVar3._value;
												if (pUVar4 != null) {
													jacket = pUVar4.ToColor();
													pSVar2 = this.CustomSet;
													if ((pSVar2 != null) &&(pSVar3 = pSVar2.BootsColor, pSVar3 != null)) {
														pUVar4 = pSVar3._value;
														if (pUVar4 != null) {
															boots = pUVar4.ToColor();
															method_00 = (MethodInfo)HumanSetupMaterials.GetCostumeMaterial(mainTexture, maskTexture, colorTexture, pantsTexture, shirt, straps, pants, jacket, boots);
															__this_00 = (HashSet<object>)this._ownedMaterials;
															if (__this_00 != null) {
																__this_00.Add((object)method_00);
																this.CreateHair();
																this.CreateEye();
																this.CreateFace();
																this.CreateGlass();
																this.CreateUpperBody((Material)method_00);
																this.CreateArms((Material)method_00);
																this.CreateLowerBody((Material)method_00);
																this.Create3dmg();
																this.CreateWeapon();
																this.CreateBack();
																this.CreateHat();
																this.CreateHead();
																this.UpdateCloakVisibility();
																return;
															}
														}
													}
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004237")]
	[Address(RVA = "0x5AFDA50", Offset = "0x5AFCA50", VA = "0x5AFDA50")]
	public void DeleteParts()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$DeleteParts): 2 lines keep C-only constructs
		int piVar1;
		int length;
		uint uVar2;
		List<Renderer> pSVar3;
		Dictionary<object, object> __this_00;
		Object pUVar4;
		bool bVar5;

		pSVar3 = this._hairRenderers;
		if (pSVar3 != null) {
			piVar1 = &pSVar3._version;
			*piVar1 = *piVar1 + 1;
			length = pSVar3._size;
			pSVar3._size = 0;
			if (0 < length) {
				Array.Clear((Array)pSVar3._items, 0, length);
			}
			this.DestroyOwnedMaterials();
			__this_00 = (Dictionary<object, object>)this._effectMaterialCache;
			if (__this_00 != null) {
				__this_00.Clear();
				this.DisposeCloth();
				pUVar4 = (Object)this._part_eye;
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					pUVar4 = (Object)this._part_face;
				}
				else {
					pUVar4 = (Object)this._part_face;
				}
				if (Il2CppMethodInitialized_0754767f == false) {
					Il2CppMethodInitialized_0754767f = true;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					pUVar4 = (Object)this._part_glass;
				}
				else {
					pUVar4 = (Object)this._part_glass;
				}
				if (Il2CppMethodInitialized_0754767f == false) {
					Il2CppMethodInitialized_0754767f = true;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					pUVar4 = (Object)this._part_hair;
				}
				else {
					pUVar4 = (Object)this._part_hair;
				}
				if (Il2CppMethodInitialized_0754767f == false) {
					Il2CppMethodInitialized_0754767f = true;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					pUVar4 = (Object)this._part_upper_body;
				}
				else {
					pUVar4 = (Object)this._part_upper_body;
				}
				if (Il2CppMethodInitialized_0754767f == false) {
					Il2CppMethodInitialized_0754767f = true;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					pUVar4 = (Object)this._part_arm_l;
				}
				else {
					pUVar4 = (Object)this._part_arm_l;
				}
				if (Il2CppMethodInitialized_0754767f == false) {
					Il2CppMethodInitialized_0754767f = true;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					pUVar4 = (Object)this._part_arm_r;
				}
				else {
					pUVar4 = (Object)this._part_arm_r;
				}
				if (Il2CppMethodInitialized_0754767f == false) {
					Il2CppMethodInitialized_0754767f = true;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					pUVar4 = (Object)this._part_hand_l;
				}
				else {
					pUVar4 = (Object)this._part_hand_l;
				}
				if (Il2CppMethodInitialized_0754767f == false) {
					Il2CppMethodInitialized_0754767f = true;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					pUVar4 = (Object)this._part_hand_r;
				}
				else {
					pUVar4 = (Object)this._part_hand_r;
				}
				if (Il2CppMethodInitialized_0754767f == false) {
					Il2CppMethodInitialized_0754767f = true;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					pUVar4 = (Object)this._part_brand_1;
				}
				else {
					pUVar4 = (Object)this._part_brand_1;
				}
				if (Il2CppMethodInitialized_0754767f == false) {
					Il2CppMethodInitialized_0754767f = true;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					pUVar4 = (Object)this._part_brand_2;
				}
				else {
					pUVar4 = (Object)this._part_brand_2;
				}
				if (Il2CppMethodInitialized_0754767f == false) {
					Il2CppMethodInitialized_0754767f = true;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					pUVar4 = (Object)this._part_brand_3;
				}
				else {
					pUVar4 = (Object)this._part_brand_3;
				}
				if (Il2CppMethodInitialized_0754767f == false) {
					Il2CppMethodInitialized_0754767f = true;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					pUVar4 = (Object)this._part_brand_4;
				}
				else {
					pUVar4 = (Object)this._part_brand_4;
				}
				if (Il2CppMethodInitialized_0754767f == false) {
					Il2CppMethodInitialized_0754767f = true;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					pUVar4 = (Object)this._part_chest_1;
				}
				else {
					pUVar4 = (Object)this._part_chest_1;
				}
				if (Il2CppMethodInitialized_0754767f == false) {
					Il2CppMethodInitialized_0754767f = true;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					pUVar4 = (Object)this._part_chest_2;
				}
				else {
					pUVar4 = (Object)this._part_chest_2;
				}
				if (Il2CppMethodInitialized_0754767f == false) {
					Il2CppMethodInitialized_0754767f = true;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					pUVar4 = (Object)this._part_3dmg;
				}
				else {
					pUVar4 = (Object)this._part_3dmg;
				}
				if (Il2CppMethodInitialized_0754767f == false) {
					Il2CppMethodInitialized_0754767f = true;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					pUVar4 = (Object)this._part_belt;
				}
				else {
					pUVar4 = (Object)this._part_belt;
				}
				if (Il2CppMethodInitialized_0754767f == false) {
					Il2CppMethodInitialized_0754767f = true;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					pUVar4 = (Object)this._part_gas_l;
				}
				else {
					pUVar4 = (Object)this._part_gas_l;
				}
				if (Il2CppMethodInitialized_0754767f == false) {
					Il2CppMethodInitialized_0754767f = true;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					pUVar4 = (Object)this._part_gas_r;
				}
				else {
					pUVar4 = (Object)this._part_gas_r;
				}
				if (Il2CppMethodInitialized_0754767f == false) {
					Il2CppMethodInitialized_0754767f = true;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					pUVar4 = (Object)this._part_blade_l;
				}
				else {
					pUVar4 = (Object)this._part_blade_l;
				}
				if (Il2CppMethodInitialized_0754767f == false) {
					Il2CppMethodInitialized_0754767f = true;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					pUVar4 = (Object)this._part_blade_r;
				}
				else {
					pUVar4 = (Object)this._part_blade_r;
				}
				if (Il2CppMethodInitialized_0754767f == false) {
					Il2CppMethodInitialized_0754767f = true;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					pUVar4 = (Object)this._part_back;
				}
				else {
					pUVar4 = (Object)this._part_back;
				}
				if (Il2CppMethodInitialized_0754767f == false) {
					Il2CppMethodInitialized_0754767f = true;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					pUVar4 = (Object)this._part_hat;
				}
				else {
					pUVar4 = (Object)this._part_hat;
				}
				if (Il2CppMethodInitialized_0754767f == false) {
					Il2CppMethodInitialized_0754767f = true;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					pUVar4 = (Object)this._part_head_decor;
				}
				else {
					pUVar4 = (Object)this._part_head_decor;
				}
				if (Il2CppMethodInitialized_0754767f == false) {
					Il2CppMethodInitialized_0754767f = true;
					uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				bVar5 = (pUVar4 != null);
				if (bVar5) {
					Object.Destroy(pUVar4);
					return;
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004238")]
	[Address(RVA = "0x5B029F0", Offset = "0x5B019F0", VA = "0x5B029F0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$OnDestroy): clean
		this.DisposeCloth();
		this.DestroyOwnedMaterials();
		return;
	}

	[Token(Token = "0x6004239")]
	[Address(RVA = "0x5AFEC80", Offset = "0x5AFDC80", VA = "0x5AFEC80")]
	private Material Own(Material material)
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$Own): clean
		HashSet<object> __this_00;

		__this_00 = (HashSet<object>)this._ownedMaterials;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Add((object)material);
		return material;
	}

	[Token(Token = "0x600423A")]
	[Address(RVA = "0x5AFD3B0", Offset = "0x5AFC3B0", VA = "0x5AFD3B0")]
	private Material OwnInstance(Renderer renderer)
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$OwnInstance): clean
		HashSet<object> __this_00;
		bool bVar1;
		Material y;
		Material x;

		if (renderer == null) {
	label_05bfd466: ;
			throw new NullReferenceException();
		}
		y = renderer.sharedMaterial;
		x = renderer.material;
		bVar1 = ((Object)x == (Object)y);
		if (!bVar1) {
			__this_00 = (HashSet<object>)this._ownedMaterials;
			if (__this_00 == null) goto label_05bfd466;
			__this_00.Add((object)x);
		}
		return x;
	}

	[Token(Token = "0x600423B")]
	[Address(RVA = "0x5B02620", Offset = "0x5B01620", VA = "0x5B02620")]
	private void DestroyOwnedMaterials()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$DestroyOwnedMaterials): 2 lines keep C-only constructs
		HashSet<object> pSVar1;
		object x;
		bool bVar2;
		System_Collections_Generic_HashSet_Enumerator_T__o local_58;
		byte local_30;

		local_58._set = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		pSVar1 = (HashSet<object>)this._ownedMaterials;
		if (pSVar1 != null) {
			local_58 = pSVar1.GetEnumerator();
			local_30 = (byte)&local_58;
			while(true) {
				bVar2 = local_58.MoveNext();
				x = local_58._current;
				if (!bVar2) break;
				bVar2 = ((Object)x != null);
				if (bVar2) {
					Object.Destroy((Object)x);
				}
			}
			local_58.Dispose();
			pSVar1 = (HashSet<object>)this._ownedMaterials;
			if (pSVar1 != null) {
				pSVar1.Clear();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600423C")]
	[Address(RVA = "0x5B027E0", Offset = "0x5B017E0", VA = "0x5B027E0")]
	private void DisposeCloth()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$DisposeCloth): 7 lines keep C-only constructs
		GameObject pUVar1;
		GameObject* ppUVar2;

		if (this.IsDeadBody != false) {
			return;
		}
		ppUVar2 = &this._part_hair_1;
		pUVar1 = *ppUVar2;
		ClothFactory.DisposeObject(pUVar1);
		this._part_hair_1 = null;
		ppUVar2 = &this._part_cape;
		pUVar1 = *ppUVar2;
		ClothFactory.DisposeObject(pUVar1);
		this._part_cape = null;
		ppUVar2 = &this._part_chest_3;
		pUVar1 = *ppUVar2;
		ClothFactory.DisposeObject(pUVar1);
		*ppUVar2 = null;
		return;
	}

	[Token(Token = "0x600423D")]
	[Address(RVA = "0x5B02A10", Offset = "0x5B01A10", VA = "0x5B02A10")]
	private static void DisposeClothPart(ref GameObject part)
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$DisposeClothPart): 1 lines keep C-only constructs
		GameObject cachedObject;

		cachedObject = *part;
		ClothFactory.DisposeObject(cachedObject);
		*part = null;
		return;
	}

	[Token(Token = "0x600423E")]
	[Address(RVA = "0x5B00F50", Offset = "0x5AFFF50", VA = "0x5B00F50")]
	public void Create3dmg()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$Create3dmg): 14 lines keep C-only constructs
		GameObject* ppUVar1;
		uint uVar2;
		HumanSetupTextures __this_00;
		HumanSetupMeshes pCVar3;
		HumanCustomSet pSVar4;
		IntSetting pSVar5;
		bool bVar6;
		String pSVar7;
		Material value;
		String pSVar8;
		GameObject pUVar9;
		Renderer __this_01;
		HumanSetup pCVar10;
		Object pUVar12;

		if (Il2CppMethodInitialized_07547669 == false) {
			Il2CppMethodInitialized_07547669 = true;
			pUVar12 = (Object)this._part_3dmg;
			if (Il2CppMethodInitialized_0754767f != false) goto label_05c00f80;
	label_05c01100: ;
			Il2CppMethodInitialized_0754767f = true;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			pUVar12 = (Object)this._part_3dmg;
			if (Il2CppMethodInitialized_0754767f == false) goto label_05c01100;
	label_05c00f80: ;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar6 = (pUVar12 != null);
		if (bVar6) {
			Object.Destroy(pUVar12);
			pUVar12 = (Object)this._part_belt;
			if (Il2CppMethodInitialized_0754767f != false) goto label_05c00fc1;
	label_05c01166: ;
			Il2CppMethodInitialized_0754767f = true;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			pUVar12 = (Object)this._part_belt;
			if (Il2CppMethodInitialized_0754767f == false) goto label_05c01166;
	label_05c00fc1: ;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar6 = (pUVar12 != null);
		if (bVar6) {
			Object.Destroy(pUVar12);
			pUVar12 = (Object)this._part_gas_l;
			if (Il2CppMethodInitialized_0754767f != false) goto label_05c00ffb;
	label_05c011c5: ;
			Il2CppMethodInitialized_0754767f = true;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			pUVar12 = (Object)this._part_gas_l;
			if (Il2CppMethodInitialized_0754767f == false) goto label_05c011c5;
	label_05c00ffb: ;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar6 = (pUVar12 != null);
		if (bVar6) {
			Object.Destroy(pUVar12);
			pUVar12 = (Object)this._part_gas_r;
			if (Il2CppMethodInitialized_0754767f != false) goto label_05c01035;
	label_05c01224: ;
			Il2CppMethodInitialized_0754767f = true;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			pUVar12 = (Object)this._part_gas_r;
			if (Il2CppMethodInitialized_0754767f == false) goto label_05c01224;
	label_05c01035: ;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar6 = (pUVar12 != null);
		if (bVar6) {
			Object.Destroy(pUVar12);
		}
		if (this.Weapon == 5) {
			return;
		}
		__this_00 = this._textures;
		if (__this_00 != null) {
			pSVar7 = __this_00.Get3dmgTexture();
			value = HumanSetupMaterials.GetPartMaterial(pSVar7, false);
			pCVar3 = this._meshes;
			if (pCVar3 != null) {
				ppUVar1 = &this._part_3dmg;
				pSVar7 = ResourcePaths.Characters;
				pSVar8 = pCVar3.Get3dmgMesh();
				pUVar9 = ResourceManager.InstantiateAsset<GameObject>(pSVar7, pSVar8, true, false);
				this._part_3dmg = pUVar9;
				pCVar10 = (HumanSetup)ppUVar1;
				pCVar10.AttachToMount(this._part_3dmg, this._mount_3dmg, false);
				pUVar9 = this._part_3dmg;
				if ((pUVar9 != null) &&(__this_01 = pUVar9.GetComponentInChildren<Renderer>(), __this_01 != null)) {
					__this_01.material = value;
					pSVar4 = this.CustomSet;
					if ((pSVar4 != null) &&(pSVar5 = pSVar4.Cape, pSVar5 != null)) {
						if ((pSVar5._value == 2) && ((this.Weapon | 2U) == 3)) {
							if (*ppUVar1 == null) goto label_05c016a2;
							(*ppUVar1).SetActive(false);
						}
						pCVar3 = this._meshes;
						if (pCVar3 != null) {
							pSVar7 = pCVar3.GetBeltMesh();
							bVar6 = (pSVar7 != (String)**(ulong*)(g_data_07556758 + 0xb8));
							if (bVar6) {
								ppUVar1 = &this._part_belt;
								pSVar8 = ResourcePaths.Characters;
								if ((typeof(ResourceManager)._2).cctor_finished_or_no_cctor == 0) {
									il2cpp_codegen_runtime_class_init(typeof(ResourceManager)) ;
								}
								pUVar9 = ResourceManager.InstantiateAsset<GameObject>(pSVar8, pSVar7, true, false);
								*ppUVar1 = pUVar9;
								if ((*ppUVar1 == null) ||(pCVar10 = (HumanSetup)(*ppUVar1).GetComponent<Renderer>(), pCVar10 == null)) goto label_05c016a2;
								pCVar10.material = value;
								pCVar10.AttachToMount(this._part_belt, this._mount_3dmg, false);
							}
							if (this.Weapon - 3U < 2) {
	label_05c01684: ;
								this.ScaleGearForCloak(this._part_3dmg);
								return;
							}
							pCVar3 = this._meshes;
							if (pCVar3 != null) {
								ppUVar1 = &this._part_gas_l;
								pSVar7 = ResourcePaths.Characters;
								pSVar8 = pCVar3.GetGasMesh(true);
								if ((typeof(ResourceManager)._2).cctor_finished_or_no_cctor == 0) {
									il2cpp_codegen_runtime_class_init(typeof(ResourceManager)) ;
								}
								pUVar9 = ResourceManager.InstantiateAsset<GameObject>(pSVar7, pSVar8, true, false);
								*ppUVar1 = pUVar9;
								if ((*ppUVar1 != null) &&(pCVar10 = (HumanSetup)(*ppUVar1).GetComponent<Renderer>(), pCVar10 != null)) {
									pCVar10.material = value;
									pCVar10.AttachToMount(this._part_gas_l, (&this._mount_gas_l)[(ulong)(this.Weapon == 1) * 2], false);
									pCVar3 = this._meshes;
									if (pCVar3 != null) {
										ppUVar1 = &this._part_gas_r;
										pSVar7 = ResourcePaths.Characters;
										pSVar8 = pCVar3.GetGasMesh(false);
										pUVar9 = ResourceManager.InstantiateAsset<GameObject>(pSVar7, pSVar8, true, false);
										*ppUVar1 = pUVar9;
										if ((*ppUVar1 != null) &&(pCVar10 = (HumanSetup)(*ppUVar1).GetComponent<Renderer>(), pCVar10 != null)) {
											pCVar10.material = value;
											pCVar10.AttachToMount(this._part_gas_r, (&this._mount_gas_r)[(ulong)(this.Weapon == 1) * 2], false);
											goto label_05c01684;
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05c016a2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600423F")]
	[Address(RVA = "0x5B02BE0", Offset = "0x5B01BE0", VA = "0x5B02BE0")]
	private void ScaleGearForCloak(GameObject gear)
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$ScaleGearForCloak): 7 lines keep C-only constructs
		HumanCustomSet pSVar1;
		IntSetting pSVar2;
		bool bVar3;
		Object x;
		Transform pUVar4;
		Transform __this_00;
		uint extraout_XMM0_Dc;
		uint extraout_XMM0_Dd;
		float fVar5;
		Vector3 UVar6;
		Vector3 UVar7;
		Vector3 value;
		Bounds UStack_60;
		float fStack_48;
		float fStack_44;
		byte[] auStack_38 = new byte[24];

		if (Il2CppMethodInitialized_0754766a == false) {
			Il2CppMethodInitialized_0754766a = true;
			if (Il2CppMethodInitialized_07547657 != false) goto label_05c02c03;
	label_05c02c3c: ;
			Il2CppMethodInitialized_07547657 = true;
			pSVar1 = this.CustomSet;
		}
		else {
			if (Il2CppMethodInitialized_07547657 == false) goto label_05c02c3c;
	label_05c02c03: ;
			pSVar1 = this.CustomSet;
		}
		if (pSVar1 == null) {
			return;
		}
		pSVar2 = pSVar1.Cape;
		if (pSVar2 != null) {
			if (pSVar2._value != 2) {
				return;
			}
			if (((typeof(Object))._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar3 = ((Object)gear == null);
			if (bVar3) {
				return;
			}
			if (gear != null) {
				x = (Object)gear.GetComponentInChildren<Renderer>(true);
				bVar3 = (x != null);
				if (bVar3) {
					if (x == null) goto label_05c02e57;
					pUVar4 = x.transform;
					UStack_60 = x.localBounds;
					if (pUVar4 == null) goto label_05c02e57;
					UVar6 = pUVar4.TransformPoint(UStack_60.m_Center);
					fVar5 = UVar6.z;
					fStack_48 = UVar6.x;
					fStack_44 = UVar6.y;
				}
				else {
					pUVar4 = gear.transform;
					if (pUVar4 == null) goto label_05c02e57;
					UVar6 = pUVar4.position;
					fVar5 = UVar6.z;
					fStack_48 = UVar6.x;
					fStack_44 = UVar6.y;
				}
				pUVar4 = gear.transform;
				if (pUVar4 != null) {
					UVar6 = pUVar4.localScale;
					UVar7.x = UVar6.x * 0.5;
					UVar7.y = UVar6.y * 0.5;
					UVar7.z = UVar6.z * 0.5;
					pUVar4.localScale = UVar7;
					bVar3 = (x != null);
					if (!bVar3) {
						return;
					}
					pUVar4 = gear.transform;
					if (pUVar4 != null) {
						UVar6 = pUVar4.position;
						auStack_38._8_4_ = extraout_XMM0_Dc;
						auStack_38._0_8_ = UVar6._0_8_;
						auStack_38._12_4_ = extraout_XMM0_Dd;
						if (x != null) {
							__this_00 = x.transform;
							UStack_60 = x.localBounds;
							if (__this_00 != null) {
								UVar7 = __this_00.TransformPoint(UStack_60.m_Center);
								value.x = (float)auStack_38._0_4_ + (fStack_48 - UVar7.x);
								value.y = (float)auStack_38._4_4_ + (fStack_44 - UVar7.y);
								value.z = UVar6.z + (fVar5 - UVar7.z);
								pUVar4.position = value;
								return;
							}
						}
					}
				}
			}
		}
	label_05c02e57: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004240")]
	[Address(RVA = "0x5B016B0", Offset = "0x5B006B0", VA = "0x5B016B0")]
	public void CreateWeapon()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$CreateWeapon): 11 lines keep C-only constructs
		GameObject* ppUVar1;
		uint uVar2;
		int iVar3;
		HumanSetupTextures __this_00;
		HumanCustomSet pSVar4;
		StringSetting pSVar5;
		HumanSetupMeshes pCVar6;
		bool bVar7;
		int type;
		String pSVar8;
		Material value;
		HumanSetup pCVar9;
		GameObject pUVar10;
		MeleeWeaponTrail pMVar11;
		Renderer pUVar12;
		Object pUVar13;

		if (Il2CppMethodInitialized_0754766b == false) {
			Il2CppMethodInitialized_0754766b = true;
			pUVar13 = (Object)this._part_blade_l;
			if (Il2CppMethodInitialized_0754767f == false) goto label_05c01977;
	label_05c016df: ;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			pUVar13 = (Object)this._part_blade_l;
			if (Il2CppMethodInitialized_0754767f != false) goto label_05c016df;
	label_05c01977: ;
			Il2CppMethodInitialized_0754767f = true;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar7 = (pUVar13 != null);
		if (bVar7) {
			Object.Destroy(pUVar13);
			pUVar13 = (Object)this._part_blade_r;
			if (Il2CppMethodInitialized_0754767f == false) goto label_05c019da;
	label_05c0171e: ;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			pUVar13 = (Object)this._part_blade_r;
			if (Il2CppMethodInitialized_0754767f != false) goto label_05c0171e;
	label_05c019da: ;
			Il2CppMethodInitialized_0754767f = true;
			uVar2 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		bVar7 = (pUVar13 != null);
		if (bVar7) {
			Object.Destroy(pUVar13);
		}
		__this_00 = this._textures;
		if (__this_00 != null) {
			pSVar8 = __this_00.Get3dmgTexture();
			iVar3 = this.Weapon;
			value = HumanSetupMaterials.GetPartMaterial(pSVar8, iVar3 == 3);
			pSVar4 = this.CustomSet;
			if ((pSVar4 != null) &&(pSVar5 = pSVar4.BladeEffect, pSVar5 != null)) {
				pSVar8 = pSVar5._value;
				type = CharacterEffectPresets.ParseOrDefault(pSVar8);
				pCVar6 = this._meshes;
				if (pCVar6 != null) {
					pCVar9 = (HumanSetup)pCVar6.GetWeaponMesh(true);
					bVar7 = ((String)pCVar9 != (String)**(ulong*)(g_data_07556758 + 0xb8));
					if (bVar7) {
						ppUVar1 = &this._part_blade_l;
						pSVar8 = ResourcePaths.Characters;
						pUVar10 = ResourceManager.InstantiateAsset<GameObject>(pSVar8, (String)pCVar9, true, false);
						*ppUVar1 = pUVar10;
						if (pCVar9 == null) goto label_05c01ccf;
						bVar7 = pCVar9.Contains("thunderspear");
						if (bVar7) {
							pCVar9.AttachToMount(*ppUVar1, this._mount_ts_l, false);
						}
						else {
							pCVar9.AttachToMount(*ppUVar1, this._mount_weapon_l, false);
							pUVar10 = this._part_blade_l;
							if ((pUVar10 == null) ||(pUVar12 = pUVar10.GetComponentInChildren<Renderer>(), pUVar12 == null)) goto label_05c01ccf;
							pUVar12.material = value;
						}
						this.ApplyCharacterEffectToPart(this._part_blade_l, type, false);
						pUVar10 = this._part_blade_l;
						if (pUVar10 == null) goto label_05c01ccf;
						pMVar11 = pUVar10.GetComponentInChildren<MeleeWeaponTrail>();
						bVar7 = ((Object)pMVar11 != null);
						if (bVar7) {
							if (*ppUVar1 == null) goto label_05c01ccf;
							pMVar11 = (*ppUVar1).GetComponentInChildren<MeleeWeaponTrail>();
							this.LeftTrail = pMVar11;
							pMVar11 = this.LeftTrail;
							if (pMVar11 == null) goto label_05c01ccf;
							pMVar11._emit = false;
							pMVar11.enabled = false;
						}
					}
					pCVar6 = this._meshes;
					if (pCVar6 != null) {
						pCVar9 = (HumanSetup)pCVar6.GetWeaponMesh(false);
						bVar7 = ((String)pCVar9 != (String)**(ulong*)(g_data_07556758 + 0xb8));
						if (!bVar7) {
							return;
						}
						ppUVar1 = &this._part_blade_r;
						pSVar8 = ResourcePaths.Characters;
						pUVar10 = ResourceManager.InstantiateAsset<GameObject>(pSVar8, (String)pCVar9, true, false);
						*ppUVar1 = pUVar10;
						if (pCVar9 != null) {
							bVar7 = pCVar9.Contains("thunderspear") ;
							if (bVar7) {
								pCVar9.AttachToMount(*ppUVar1, this._mount_ts_r, false) ;
							}
							else {
								pCVar9.AttachToMount(*ppUVar1, this._mount_weapon_r, false);
								pUVar10 = this._part_blade_r;
								if ((pUVar10 == null) ||(pUVar12 = pUVar10.GetComponentInChildren<Renderer>(), pUVar12 == null)) goto label_05c01ccf;
								pUVar12.material = value;
							}
							this.ApplyCharacterEffectToPart(this._part_blade_r, type, false);
							pUVar10 = this._part_blade_r;
							if (pUVar10 != null) {
								pMVar11 = pUVar10.GetComponentInChildren<MeleeWeaponTrail>();
								bVar7 = ((Object)pMVar11 != null);
								if (!bVar7) {
									return;
								}
								if (*ppUVar1 != null) {
									pMVar11 = (*ppUVar1).GetComponentInChildren<MeleeWeaponTrail>();
									this.RightTrail = pMVar11;
									pMVar11 = this.RightTrail;
									if (pMVar11 != null) {
										pMVar11._emit = false;
										pMVar11.enabled = false;
										return;
									}
								}
							}
						}
					}
				}
			}
		}
	label_05c01ccf: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004241")]
	[Address(RVA = "0x5B03F50", Offset = "0x5B02F50", VA = "0x5B03F50")]
	public void CreateCape()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$CreateCape): 5 lines keep C-only constructs
		HumanSetupMeshes __this_00;
		HumanCustomSet pSVar1;
		IntSetting pSVar2;
		HumanSetupTextures pCVar3;
		bool bVar4;
		String pSVar5;
		GameObject pUVar6;
		String texture;
		Material material;
		Renderer __this_01;
		MethodInfo method_00;
		GameObject* targetAddress;

		if (this.IsDeadBody != false) {
			return;
		}
		targetAddress = &this._part_cape;
		pUVar6 = *targetAddress;
		ClothFactory.DisposeObject(pUVar6);
		this._part_cape = null;
		__this_00 = this._meshes;
		if (__this_00 != null) {
			pSVar5 = __this_00.GetCapeMesh();
			method_00 = (MethodInfo)**(ulong*)(g_data_07556758 + 0xb8);
			bVar4 = (pSVar5 != (String)method_00);
			if (!bVar4) {
	label_05c04225: ;
				this.RefreshHairMaterials();
				this.UpdateCloakVisibility();
				return;
			}
			pSVar1 = this.CustomSet;
			if ((pSVar1 != null) &&(pSVar2 = pSVar1.Cape, pSVar2 != null)) {
				if (pSVar2._value == 2) {
					pUVar6 = this.GenerateCloth(pSVar5);
					this._part_cape = pUVar6;
					pCVar3 = this._textures;
					if (pCVar3 != null) {
						pSVar5 = pCVar3.GetBrandTexture();
						bVar4 = (pSVar5 == (String)**(ulong*)(g_data_07556758 + 0xb8));
						if (bVar4) {
							pSVar5 = "Brand/Aottg_hero_brand_unbranded_cloak";
						}
						else {
							pSVar5 = String.Concat(pSVar5, "_cloak");
						}
						if (*targetAddress != null) {
							__this_01 = (*targetAddress).GetComponent<Renderer>();
							method_00 = (MethodInfo)HumanSetupMaterials.GetPartMaterial(pSVar5, false);
							if (__this_01 != null) {
								__this_01.material = (Material)method_00;
								goto label_05c04225;
							}
						}
					}
				}
				else {
					pCVar3 = this._textures;
					if (pCVar3 != null) {
						pUVar6 = this._mount_cloth;
						texture = pCVar3.GetBrandTexture();
						material = HumanSetupMaterials.GetPartMaterial(texture, false);
						method_00 = (MethodInfo)ClothFactory.GetCape(pUVar6, pSVar5, material);
						*targetAddress = (GameObject)method_00;
						goto label_05c04225;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004242")]
	[Address(RVA = "0x5B04510", Offset = "0x5B03510", VA = "0x5B04510")]
	public void SetHood(bool hoodUp)
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$SetHood): 2 lines keep C-only constructs
		HumanCustomSet pSVar1;
		IntSetting pSVar2;
		BoolSetting __this_00;
		HumanSetupMeshes __this_01;
		String path;
		GameObject __this_02;
		Bounds value;
		bool bVar3;
		String name;
		Object pUVar4;
		SkinnedMeshRenderer __this_03;
		SkinnedMeshRenderer __this_04;
		Mesh value_00;
		Bounds UStack_30;

		if (Il2CppMethodInitialized_0754766d == false) {
			Il2CppMethodInitialized_0754766d = true;
			if (Il2CppMethodInitialized_07547657 == false) goto label_05c045a8;
	label_05c0452f: ;
			pSVar1 = this.CustomSet;
		}
		else {
			if (Il2CppMethodInitialized_07547657 != false) goto label_05c0452f;
	label_05c045a8: ;
			Il2CppMethodInitialized_07547657 = true;
			pSVar1 = this.CustomSet;
		}
		if (pSVar1 == null) {
			return;
		}
		pSVar2 = pSVar1.Cape;
		if (pSVar2 != null) {
			if (pSVar2._value != 2) {
				return;
			}
			if (this.IsDeadBody != false) {
				return;
			}
			__this_00 = pSVar1.HoodUp;
			if (__this_00 != null) {
				if ((((Settings_TypedSetting_bool__Fields)&__this_00.fields)._value != false) == hoodUp) {
					return;
				}
				__this_00.Value = hoodUp;
				pUVar4 = (Object)this._part_cape;
				bVar3 = (pUVar4 != null);
				if (!bVar3) {
	label_05c04761: ;
					this.RefreshHairMaterials();
					this.UpdateCloakVisibility();
					return;
				}
				__this_01 = this._meshes;
				if (__this_01 != null) {
					path = ResourcePaths.Characters;
					name = __this_01.GetCapeMesh();
					pUVar4 = ResourceManager.LoadAsset(path, name, true, false);
					if (pUVar4 != null) {
						if (pUVar4.klass != (Object)typeof(GameObject)) {
							throw new InvalidCastException();
						}
						__this_03 = pUVar4.GetComponent<SkinnedMeshRenderer>();
						__this_02 = this._part_cape;
						if (((__this_02 != null) &&(__this_04 = __this_02.GetComponent<SkinnedMeshRenderer>(), __this_03 != null)) &&(value_00 = __this_03.sharedMesh, __this_04 != null)) {
							__this_04.sharedMesh = value_00;
							UStack_30 = __this_03.localBounds;
							value.m_Center.z = UStack_30.m_Center.z;
							value.m_Extents.x = UStack_30.m_Extents.x;
							value.m_Center.x = UStack_30.m_Center.x;
							value.m_Center.y = UStack_30.m_Center.y;
							value.m_Extents.y = UStack_30.m_Extents.y;
							value.m_Extents.z = UStack_30.m_Extents.z;
							__this_04.localBounds = value ;
							goto label_05c04761;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004243")]
	[Address(RVA = "0x5B02430", Offset = "0x5B01430", VA = "0x5B02430")]
	private void UpdateCloakVisibility()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$UpdateCloakVisibility): clean
		Object pUVar1;
		GameObject pUVar2;
		HumanCustomSet pSVar3;
		IntSetting pSVar4;
		BoolSetting pSVar5;
		bool bVar6;

		pUVar1 = (Object)this._part_hat;
		bVar6 = (pUVar1 != null);
		if (bVar6) {
			pUVar2 = this._part_hat;
			if (Il2CppMethodInitialized_07547658 == false) {
				Il2CppMethodInitialized_07547658 = true;
				if (Il2CppMethodInitialized_07547657 == false) goto label_05c024d0;
	label_05c024a4: ;
				pSVar3 = this.CustomSet;
			}
			else {
				if (Il2CppMethodInitialized_07547657 != false) goto label_05c024a4;
	label_05c024d0: ;
				Il2CppMethodInitialized_07547657 = true;
				pSVar3 = this.CustomSet;
			}
			bVar6 = true;
			if (pSVar3 != null) {
				bVar6 = true;
				pSVar4 = pSVar3.Cape;
				if (pSVar4 == null) goto label_05c02611;
				if (pSVar4._value == 2) {
					pSVar5 = pSVar3.HoodUp;
					if (pSVar5 == null) goto label_05c02611;
					bVar6 = pSVar5._value == false;
				}
			}
			if (pUVar2 == null) goto label_05c02611;
			pUVar2.SetActive(bVar6);
		}
		pUVar1 = (Object)this._part_head_decor;
		bVar6 = (pUVar1 != null);
		if (!bVar6) {
			return;
		}
		pUVar2 = this._part_head_decor;
		if (Il2CppMethodInitialized_07547658 == false) {
			Il2CppMethodInitialized_07547658 = true;
			if (Il2CppMethodInitialized_07547657 == false) goto label_05c025ae;
	label_05c02576: ;
			pSVar3 = this.CustomSet;
		}
		else {
			if (Il2CppMethodInitialized_07547657 != false) goto label_05c02576;
	label_05c025ae: ;
			Il2CppMethodInitialized_07547657 = true;
			pSVar3 = this.CustomSet;
		}
		bVar6 = true;
		if (pSVar3 != null) {
			bVar6 = true;
			pSVar4 = pSVar3.Cape;
			if (pSVar4 == null) goto label_05c02611;
			if (pSVar4._value == 2) {
				pSVar5 = pSVar3.HoodUp;
				if (pSVar5 == null) goto label_05c02611;
				bVar6 = pSVar5._value == false;
			}
		}
		if (pUVar2 != null) {
			pUVar2.SetActive(bVar6);
			return;
		}
	label_05c02611: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004244")]
	[Address(RVA = "0x5AFECE0", Offset = "0x5AFDCE0", VA = "0x5AFECE0")]
	public void CreateHair()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$CreateHair): 6 lines keep C-only constructs
		int piVar1;
		int length;
		List<Renderer> pSVar2;
		Object pUVar3;
		HumanCustomSet pSVar4;
		StringSetting pSVar5;
		HumanSetupMeshes pCVar6;
		HumanSetupTextures pCVar7;
		ColorSetting pSVar8;
		Color255 pUVar9;
		bool bVar10;
		int type;
		uint uVar11;
		String pSVar12;
		GameObject pUVar13;
		Object[] pSVar14;
		Material pUVar15;
		String pSVar16;
		GameObject* targetAddress;
		HumanSetup __this_00;
		uint uVar17;
		Color UVar18;

		pSVar2 = this._hairRenderers;
		if (pSVar2 == null) goto label_05bff329;
		piVar1 = &pSVar2._version;
		*piVar1 = *piVar1 + 1;
		length = pSVar2._size;
		pSVar2._size = 0;
		if (0 < length) {
			Array.Clear((Array)pSVar2._items, 0, length);
		}
		pUVar3 = (Object)this._part_hair;
		bVar10 = (pUVar3 != null);
		if (bVar10) {
			Object.Destroy(pUVar3);
			if (this.IsDeadBody != false) goto label_05bfee25;
	label_05bfee60: ;
			targetAddress = &this._part_hair_1;
			pUVar13 = *targetAddress;
			ClothFactory.DisposeObject(pUVar13);
			*targetAddress = null;
			pSVar4 = this.CustomSet;
		}
		else {
			if (this.IsDeadBody == false) goto label_05bfee60;
	label_05bfee25: ;
			pSVar4 = this.CustomSet;
		}
		if ((pSVar4 != null) &&(pSVar5 = pSVar4.HairEffect, pSVar5 != null)) {
			pSVar12 = pSVar5._value;
			if (((typeof(CharacterEffectPresets))._2).cctor_finished_or_no_cctor == 0) {
			}
			type = CharacterEffectPresets.ParseOrDefault(pSVar12);
			pCVar6 = this._meshes;
			if (pCVar6 != null) {
				pSVar12 = pCVar6.GetHairMesh();
				bVar10 = (pSVar12 != (String)**(ulong*)(g_data_07556758 + 0xb8)) ;
				if (bVar10) {
					__this_00 = (HumanSetup)&this._part_hair;
					pSVar16 = ResourcePaths.Characters;
					pUVar13 = ResourceManager.InstantiateAsset<GameObject>(pSVar16, pSVar12, true, false);
					this._part_hair = pUVar13;
					__this_00.AttachToMount(this._part_hair, this._part_head, false);
					pUVar13 = this._part_hair;
					if ((pUVar13 == null) ||(pSVar14 = pUVar13.GetComponentsInChildren<Renderer>(), pSVar14 == null)) goto label_05bff329;
					uVar11 = (uint)pSVar14.Length;
					if (0 < (int)uVar11) {
						uVar17 = 0;
						do {
							if (uVar11 <= uVar17) {
								throw new IndexOutOfRangeException();
							}
							pCVar7 = this._textures;
							if (pCVar7 == null) goto label_05bff329;
							pUVar3 = (Object)pSVar14[(int)uVar17];
							pSVar12 = pCVar7.GetHairTexture();
							pUVar15 = HumanSetupMaterials.GetHairMaterial(pSVar12);
							if (pUVar3 == null) goto label_05bff329;
							pUVar3.material = pUVar15;
							pSVar12 = pUVar3.name;
							if (pSVar12 == null) goto label_05bff329;
							bVar10 = pSVar12.Contains("IgnoreColor");
							if (!bVar10) {
								pUVar15 = this.OwnInstance((Renderer)pUVar3);
								pSVar4 = this.CustomSet;
								if ((((pSVar4 == null) ||(pSVar8 = pSVar4.HairColor, pSVar8 == null)) ||(pUVar9 = pSVar8._value, pUVar9 == null)) ||(UVar18 = pUVar9.ToColor(), pUVar15 == null)) goto label_05bff329;
								pUVar15.color = UVar18;
							}
							uVar17 = uVar17 + 1;
							uVar11 = (uint)pSVar14.Length;
						} while ((int)uVar17 < (int)uVar11);
					}
					this.ApplyCharacterEffectToPart(this._part_hair, type, true);
					pUVar13 = this._part_hair;
					if (pUVar13 == null) goto label_05bff329;
					pSVar2 = this._hairRenderers;
					pSVar14 = pUVar13.GetComponentsInChildren<Renderer>();
					if (pSVar2 == null) goto label_05bff329;
					pSVar2.AddRange((IEnumerable<T>)pSVar14);
				}
				pCVar6 = this._meshes;
				if (pCVar6 != null) {
					pSVar12 = pCVar6.GetHairClothMesh();
					pSVar14 = (Object[])**(ulong*)(g_data_07556758 + 0xb8);
					bVar10 = (pSVar12 != (String)pSVar14);
					if ((!bVar10) || (this.IsDeadBody != false)) {
	label_05bff2f5: ;
						this.RefreshHairMaterials();
						return;
					}
					pCVar7 = this._textures;
					if (pCVar7 != null) {
						pSVar16 = pCVar7.GetHairTexture();
						pUVar15 = HumanSetupMaterials.GetHairMaterial(pSVar16);
						pSVar4 = this.CustomSet;
						if (((pSVar4 != null) &&(pSVar8 = pSVar4.HairColor, pSVar8 != null)) &&(pUVar9 = pSVar8._value, pUVar9 != null)) {
							pUVar13 = this._mount_cloth;
							UVar18 = pUVar9.ToColor();
							pUVar13 = ClothFactory.GetHair(pUVar13, pSVar12, pUVar15, UVar18);
							this._part_hair_1 = pUVar13;
							this.ApplyCharacterEffectToPart(this._part_hair_1, type, true);
							pUVar13 = this._part_hair_1;
							if (pUVar13 != null) {
								pSVar2 = this._hairRenderers;
								pSVar14 = pUVar13.GetComponentsInChildren<Renderer>() ;
								if (pSVar2 != null) {
									pSVar2.AddRange((IEnumerable<T>)pSVar14) ;
									goto label_05bff2f5;
								}
							}
						}
					}
				}
			}
		}
	label_05bff329: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004245")]
	[Address(RVA = "0x5B04790", Offset = "0x5B03790", VA = "0x5B04790")]
	private bool CanUseCharacterEffects()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$CanUseCharacterEffects): clean
		HumanCustomSet pSVar1;
		StringSetting pSVar2;
		String pSVar3;
		bool bVar4;
		bool bVar5;
		int iVar6;
		PhotonView x;

		pSVar1 = this.CustomSet;
		if (pSVar1 == null) {
		}
		else {
			pSVar2 = pSVar1.HairEffect;
			if (pSVar2 == null) {
	label_05c0492e: ;
				throw new NullReferenceException();
			}
			pSVar3 = pSVar2._value;
			iVar6 = CharacterEffectPresets.ParseOrDefault(pSVar3);
			if (iVar6 == 0) {
				pSVar1 = this.CustomSet;
				if ((pSVar1 == null) ||(pSVar2 = pSVar1.BladeEffect, pSVar2 == null)) goto label_05c0492e;
				pSVar3 = pSVar2._value;
				iVar6 = CharacterEffectPresets.ParseOrDefault(pSVar3);
				if (iVar6 == 0) {
					return false;
				}
			}
			if (SceneLoader.SceneName == 4) {
	label_05c048ea: ;
				return bVar5;
			}
			x = this.GetComponent<PhotonView>();
			bVar4 = ((Object)x != null);
			if (bVar4) {
				if (x == null) goto label_05c0492e;
				if (x._IsMine_k__BackingField != false) goto label_05c048ea;
			}
		}
		return bVar5;
	}

	[Token(Token = "0x6004246")]
	[Address(RVA = "0x5B02E60", Offset = "0x5B01E60", VA = "0x5B02E60")]
	private void ApplyCharacterEffectToPart(GameObject part, CharacterEffectType type, bool isHair)
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$ApplyCharacterEffectToPart): 72 lines keep C-only constructs
		uint uVar1;
		int iVar2;
		HumanCustomSet pSVar3;
		ColorSetting pSVar4;
		Color255 pUVar5;
		Object x;
		Dictionary<object, object> pSVar6;
		HashSet<object> __this_00;
		GraphicsSettings pSVar7;
		IntSetting pSVar8;
		Vector2 UVar9;
		HumanSetup pCVar10;
		bool bVar11;
		Object[] pSVar12;
		Material __this_01;
		Object x_00;
		Material x_01;
		Material pUVar13;
		undefined7 in_register_00000009;
		String* ppSVar14;
		ulong uVar15;
		Texture value;
		String pSVar16;
		ulong uVar17;
		float fVar18;
		uint extraout_XMM0_Dc;
		float extraout_XMM0_Dc_00;
		float extraout_XMM0_Dc_01;
		uint extraout_XMM0_Dd;
		float extraout_XMM0_Dd_00;
		float extraout_XMM0_Dd_01;
		ulong in_XMM1_Qb;
		byte[] auVar19 = new byte[16];
		byte[] auVar20 = new byte[16];
		float fVar21;
		float fVar22;
		float fVar23;
		uint uVar24;
		float fVar25;
		float fVar26;
		float fVar27;
		float fVar28;
		Color UVar29;
		Color value_00;
		Color value_01;
		Color value_02;
		Color value_03;
		Material local_1d0;
		uint local_1c4;
		float local_1c0;
		float local_1bc;
		float local_1b8;
		float local_1b4;
		float local_1b0;
		float local_1ac;
		float local_1a8;
		float local_1a4;
		float local_1a0;
		float local_19c;
		float local_198;
		float local_194;
		float local_190;
		float local_18c;
		HumanSetup local_188;
		float local_180;
		float local_17c;
		float local_178;
		float local_174;
		float local_170;
		float local_16c;
		float local_168;
		float local_164;
		float local_160;
		float local_15c;
		byte[] local_158 = new byte[16];
		CharacterEffectPreset local_140;
		Object[] local_100;
		float local_f8;
		float fStack_f4;
		float fStack_f0;
		float fStack_ec;
		float local_e8;
		float fStack_e4;
		float fStack_e0;
		float fStack_dc;
		float local_d8;
		float fStack_d4;
		float fStack_d0;
		float fStack_cc;
		float local_c8;
		float fStack_c4;
		float fStack_c0;
		float fStack_bc;
		byte[] local_b8 = new byte[16];
		float local_a8;
		float fStack_a4;
		byte[] local_98 = new byte[16];
		byte[] local_88 = new byte[16];
		byte[] local_78 = new byte[16];
		byte[] local_68 = new byte[16];
		ulong local_58;
		byte[] local_48 = new byte[16];

		local_1c4 = (undefined4)CONCAT71(in_register_00000009, isHair);
		local_1d0 = null;
		local_188 = this;
		bVar11 = ((Object)part == null);
		if (((type == 0) || (bVar11)) ||(bVar11 = local_188.CanUseCharacterEffects(), !bVar11)) {
			return;
		}
		local_140 = CharacterEffectPresets.GetPreset(type);
		pCVar10 = local_188;
		pSVar3 = local_188.CustomSet;
		if (((pSVar3 != null) &&(pSVar4 = pSVar3.HairColor, pSVar4 != null)) &&(pUVar5 = pSVar4._value, pUVar5 != null)) {
			local_18c = local_140.GlowIntensity;
			local_190 = local_140.OutlineThickness;
			local_15c = local_140.OutlinePower;
			local_160 = local_140.PulseSpeed;
			local_164 = local_140.PulseAmount;
			local_168 = local_140.FlowSpeed;
			local_16c = local_140.FlowStrength;
			local_194 = local_140.TexturePreserve;
			local_198 = local_140.EmissionFromTexture;
			local_19c = local_140.DetailScale;
			local_1a0 = local_140.DetailSpeed;
			local_170 = local_140.SecondaryScroll;
			local_1b4 = local_140.EdgeSpark;
			local_1a4 = local_140.StyleStrength;
			UVar29 = pUVar5.ToColor();
			local_58 = UVar29._8_8_;
			local_48._8_4_ = extraout_XMM0_Dc;
			local_48._0_8_ = UVar29._0_8_;
			local_48._12_4_ = extraout_XMM0_Dd;
			pSVar3 = pCVar10.CustomSet;
			if ((char)local_1c4 == false) {
				if (((pSVar3 == null) ||(pSVar4 = pSVar3.BladeEffectColor, pSVar4 == null)) ||(pUVar5 = pSVar4._value, pUVar5 == null)) goto label_05c03f3a;
				UVar29 = pUVar5.ToColor();
				local_b8._0_8_ = UVar29._8_8_;
				local_b8._8_8_ = in_XMM1_Qb;
				local_a8 = UVar29.r;
				fStack_a4 = UVar29.g;
				fVar22 = UVar29.a;
				fVar18 = 1.0;
				if (fVar22 <= 1.0) {
					fVar18 = fVar22;
				}
				uVar24 = -(uint)(0.0 <= fVar22) & (uint)fVar18;
				fVar25 = 1.0 - local_a8;
				fVar26 = 1.0 - fStack_a4;
				fVar27 = 0.0 - extraout_XMM0_Dc_01;
				fVar28 = 0.0 - extraout_XMM0_Dd_01;
				fVar18 = 0.35;
				fVar22 = 0.35;
				local_d8 = fVar25 * 0.35 + local_a8;
				fStack_d4 = fVar26 * 0.35 + fStack_a4;
				fStack_d0 = fVar27 * 0.0 + extraout_XMM0_Dc_01;
				fStack_cc = fVar28 * 0.0 + extraout_XMM0_Dd_01;
				fVar21 = 0.6;
				fVar23 = 0.6;
				fStack_f0 = extraout_XMM0_Dc_01;
				fStack_ec = extraout_XMM0_Dd_01;
			}
			else {
				if (((pSVar3 == null) ||(pSVar4 = pSVar3.HairEffectColor, pSVar4 == null)) ||(pUVar5 = pSVar4._value, pUVar5 == null)) goto label_05c03f3a;
				UVar29 = pUVar5.ToColor();
				local_b8._0_8_ = UVar29._8_8_;
				local_b8._8_8_ = in_XMM1_Qb;
				local_a8 = UVar29.r;
				fStack_a4 = UVar29.g;
				fVar22 = UVar29.a;
				fVar18 = 1.0;
				if (fVar22 <= 1.0) {
					fVar18 = fVar22;
				}
				uVar24 = -(uint)(0.0 <= fVar22) & (uint)fVar18;
				fVar25 = 1.0 - local_a8;
				fVar26 = 1.0 - fStack_a4;
				fVar27 = 0.0 - extraout_XMM0_Dc_00;
				fVar28 = 0.0 - extraout_XMM0_Dd_00;
				fVar18 = 0.2;
				fVar22 = 0.2;
				local_d8 = fVar25 * 0.2 + local_a8;
				fStack_d4 = fVar26 * 0.2 + fStack_a4;
				fStack_d0 = fVar27 * 0.0 + extraout_XMM0_Dc_00;
				fStack_cc = fVar28 * 0.0 + extraout_XMM0_Dd_00;
				fVar21 = 0.45;
				fVar23 = 0.45;
				fStack_f0 = extraout_XMM0_Dc_00;
				fStack_ec = extraout_XMM0_Dd_00;
			}
			local_158 = ZEXT416(uVar24);
			local_f8 = fVar25 * fVar21 + local_a8;
			fStack_f4 = fVar26 * fVar23 + fStack_a4;
			fStack_f0 = fVar27 * 0.0 + fStack_f0;
			fStack_ec = fVar28 * 0.0 + fStack_ec;
			local_e8 = local_b8._0_4_;
			fStack_e4 = local_b8._4_4_;
			fStack_e0 = local_b8._8_4_;
			fStack_dc = local_b8._12_4_;
			local_c8 = fVar18 * (1.0 - local_e8) + local_e8;
			fStack_c4 = fVar22 * (1.0 - fStack_e4) + fStack_e4;
			fStack_c0 = (0.0 - fStack_e0) * 0.0 + fStack_e0;
			fStack_bc = (0.0 - fStack_dc) * 0.0 + fStack_dc;
			local_e8 = (1.0 - local_e8) * fVar21 + local_e8;
			fStack_e4 = (1.0 - fStack_e4) * fVar23 + fStack_e4;
			fStack_e0 = (0.0 - fStack_e0) * 0.0 + fStack_e0;
			fStack_dc = (0.0 - fStack_dc) * 0.0 + fStack_dc;
			if ((part != null) &&(pSVar12 = part.GetComponentsInChildren<Renderer>(), pSVar12 != null)) {
				if ((int)pSVar12.Length < 1) {
					return;
				}
				fVar22 = local_198 * 0.7;
				fVar18 = 1.0;
				if (fVar22 <= 1.0) {
					fVar18 = fVar22;
				}
				local_68 = ZEXT416(-(uint)(0.0 <= fVar22) & (uint)fVar18);
				fVar22 = local_194 * 0.95;
				fVar18 = 1.5;
				if (fVar22 <= 1.5) {
					fVar18 = fVar22;
				}
				local_78 = ZEXT416(~-(uint)(0.5 <= fVar22) & 0x3f000000 | (uint)fVar18 & -(uint)(0.5 <= fVar22));
				fVar22 = local_198 + 0.22;
				local_1a8 = 1.0;
				fVar18 = 1.0;
				if (fVar22 <= 1.0) {
					fVar18 = fVar22;
				}
				local_88 = ZEXT416(-(uint)(0.0 <= fVar22) & (uint)fVar18);
				fVar22 = local_194 + 0.14;
				fVar18 = 1.5;
				if (fVar22 <= 1.5) {
					fVar18 = fVar22;
				}
				local_98 = ZEXT416(~-(uint)(0.5 <= fVar22) & 0x3f000000 | (uint)fVar18 & -(uint)(0.5 <= fVar22));
				local_1ac = 0.0;
				if ((char)local_1c4 == false) {
					local_1ac = 2.0;
				}
				uVar15 = pSVar12.Length & 0xffffffff;
				if ((char)local_1c4 == false) {
					local_1a8 = 0.0;
				}
				local_174 = (float)local_140.StyleMode;
				local_178 = local_1b4 * 1.25 * (float)local_158._0_4_;
				local_1c0 = local_18c * 1.15 * (float)local_158._0_4_;
				local_1b0 = local_1a4 * (float)local_158._0_4_;
				local_1b8 = local_18c * 0.45 * (float)local_158._0_4_;
				local_1bc = local_19c * 1.15;
				local_17c = local_1a0 * 1.1;
				auVar19._0_4_ = SUB124(ZEXT812(0x3f666666), 0) * local_190;
				auVar19._4_8_ = SUB128(ZEXT812(0x3f666666), 4);
				auVar19._12_4_ = 0;
				local_158._0_4_ = (float)local_158._0_4_ * local_1b4;
				uVar17 = 0;
				local_180 = auVar19._0_4_;
				local_100 = pSVar12;
				do {
					if (uVar15 <= uVar17) {
						throw new IndexOutOfRangeException();
					}
					x = (Object)local_100[uVar17];
					bVar11 = (x == null);
					if (!bVar11) {
						if (x == null) break;
						__this_01 = x.sharedMaterial;
						x_00 = (Object)Shader.Find("Custom/CharacterEffectShader");
						bVar11 = ((Object)__this_01 == null) ;
						if (!bVar11) {
							bVar11 = (x_00 == null);
							if (!bVar11) {
								local_1d0 = null;
								pSVar6 = (Dictionary<object, object>)local_188._effectMaterialCache;
								if (pSVar6 == null) break;
								bVar11 = pSVar6.TryGetValue((object)x, (object*)&local_1d0);
								pUVar13 = local_1d0;
								if (bVar11) {
									bVar11 = ((Object)pUVar13 != null);
									if (!bVar11) goto label_05c036b3;
									x_01 = x.sharedMaterial ;
									pUVar13 = local_1d0;
									bVar11 = ((Object)x_01 != (Object)pUVar13);
									if (bVar11) goto label_05c0373f;
								}
								else {
	label_05c036b3: ;
									pUVar13 = new Material((Shader)x_00);
									pCVar10 = local_188;
									__this_00 = (HashSet<object>)local_188._ownedMaterials;
									if (__this_00 == null) break;
									__this_00.Add((object)pUVar13);
									pSVar6 = (Dictionary<object, object>)pCVar10._effectMaterialCache;
									local_1d0 = pUVar13;
									if (pSVar6 == null) break;
									pSVar6.set_Item((object)x, (object)pUVar13);
	label_05c0373f: ;
									x.sharedMaterial = local_1d0;
								}
								if (__this_01 == null) break;
								bVar11 = __this_01.HasProperty("_BaseMap");
								ppSVar14 = &"_BaseMap";
								if (bVar11) {
	label_05c03797: ;
									pSVar16 = *ppSVar14;
									if (pSVar16 != null) {
										value = __this_01.GetTexture(pSVar16);
										goto label_05c037b3;
									}
									pSVar16 = null;
									value = null;
									uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
								}
								else {
									bVar11 = __this_01.HasProperty("_MainTex");
									ppSVar14 = &"_MainTex";
									pSVar16 = null;
									value = null;
									if (bVar11) goto label_05c03797;
	label_05c037b3: ;
									uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
								}
								if (uVar1 == 0) {
								}
								bVar11 = ((Object)value != null) ;
								if (bVar11) {
									if (local_1d0 == null) break;
									local_1d0.SetTexture("_MainTex", value);
									pUVar13 = local_1d0;
									UVar9 = __this_01.GetTextureScale(pSVar16);
									if (pUVar13 == null) break;
									pUVar13.SetTextureScale("_MainTex", UVar9);
									pUVar13 = local_1d0;
									UVar9 = __this_01.GetTextureOffset(pSVar16);
									if (pUVar13 == null) break;
									pUVar13.SetTextureOffset("_MainTex", UVar9);
								}
								if ((char)local_1c4 == false) {
									bVar11 = __this_01.HasProperty("_Color");
									pUVar13 = local_1d0;
									if (bVar11) {
										UVar29 = __this_01.GetColor("_Color");
										if (pUVar13 == null) break;
										pUVar13.SetColor("_Color", UVar29);
									}
									else {
										bVar11 = __this_01.HasProperty("_BaseColor");
										pUVar13 = local_1d0;
										if (bVar11) {
											UVar29 = __this_01.GetColor("_BaseColor") ;
											auVar20._8_8_ = auVar19._8_8_;
											auVar20._0_8_ = UVar29._8_8_;
											fVar18 = UVar29.r;
											fVar22 = UVar29.g;
											if (pUVar13 == null) break;
										}
										else {
											if (local_1d0 == null) break;
											fVar18 = (float)g_data_01005870;
											fVar22 = g_data_01005870._4_4_;
											auVar20 = _DAT_01005870;
										}
										UVar29.g = fVar22;
										UVar29.r = fVar18;
										UVar29._8_8_ = auVar20._0_8_;
										pUVar13.SetColor("_Color", UVar29);
									}
								}
								else {
									if (local_1d0 == null) break;
									value_00.b = (float)(undefined4)local_58;
									value_00.a = (float)local_58._4_4_;
									value_00.r = (float)local_48._0_4_;
									value_00.g = (float)local_48._4_4_;
									local_1d0.SetColor("_Color", value_00);
								}
								if (local_1d0 == null) break;
								value_01.g = fStack_a4;
								value_01.r = local_a8;
								value_01.b = (float)local_b8._0_4_;
								value_01.a = (float)local_b8._4_4_;
								local_1d0.SetColor("_NeonColor", value_01);
								if ((local_1d0 == null) ||(value_02.g = fStack_d4, value_02.r = local_d8, value_02.a = fStack_c4, value_02.b = local_c8, local_1d0.SetColor("_GlowColor", value_02), local_1d0 == null)) break;
								value_03.g = fStack_f4;
								value_03.r = local_f8;
								auVar19._8_4_ = fStack_e0;
								auVar19._0_8_ = CONCAT44(fStack_e4, local_e8);
								auVar19._12_4_ = fStack_dc;
								value_03.b = local_e8;
								value_03.a = fStack_e4;
								local_1d0.SetColor("_OutlineColor", value_03);
								if (((local_1d0 == null) ||(((((local_1d0.SetFloat("_GlowIntensity", local_18c), local_1d0 == null ||(local_1d0.SetFloat("_OutlineThickness", local_190), local_1d0 == null)) ||(local_1d0.SetFloat("_OutlinePower", local_15c), local_1d0 == null)) ||((local_1d0.SetFloat("_PulseSpeed", local_160), local_1d0 == null ||(local_1d0.SetFloat("_PulseAmount", local_164), local_1d0 == null)))) ||(local_1d0.SetFloat("_FlowSpeed", local_168), local_1d0 == null)))) ||(((((local_1d0.SetFloat("_FlowStrength", local_16c), local_1d0 == null ||(local_1d0.SetFloat("_TexturePreserve", local_194), local_1d0 == null)) ||(local_1d0.SetFloat("_EmissionFromTexture", local_198), local_1d0 == null)) ||((((local_1d0.SetFloat("_DetailScale", local_19c), local_1d0 == null ||(local_1d0.SetFloat("_DetailSpeed", local_1a0), local_1d0 == null)) ||(local_1d0.SetFloat("_SecondaryScroll", local_170), local_1d0 == null)) ||((local_1d0.SetFloat("_EdgeSpark", local_1b4), local_1d0 == null ||(local_1d0.SetFloat("_StyleMode", local_174), local_1d0 == null)))))) ||((local_1d0.SetFloat("_StyleStrength", local_1a4), local_1d0 == null ||(local_1d0.SetFloat("_IsHair", local_1a8), local_1d0 == null)))))) break;
								local_1d0.SetFloat("_CullMode", local_1ac);
								pSVar7 = SettingsManager.GraphicsSettings;
								fVar18 = 2.0;
								if (pSVar7 != null) {
									pSVar8 = pSVar7.PresetQuality;
									if (pSVar8 == null) break;
									iVar2 = pSVar8._value;
									fVar18 = 0.0;
									if (1 < iVar2) {
										fVar18 = *(float)(&g_data_0100ab00 + (ulong)(iVar2 < 3) * 4);
									}
								}
								if (local_1d0 == null) break;
								local_1d0.SetFloat("_QualityLevel", fVar18);
								if ((char)local_1c4 == false) {
									if (local_1d0 == null) break;
									local_1d0.SetFloat("_EmissionFromTexture", (float)local_68._0_4_);
									if (local_1d0 == null) break;
									local_1d0.SetFloat("_TexturePreserve", (float)local_78._0_4_);
									if (((local_1d0 == null) ||(local_1d0.SetFloat("_EdgeSpark", local_178), local_1d0 == null)) ||(local_1d0.SetFloat("_GlowIntensity", local_1c0), local_1d0 == null)) break;
									pSVar16 = "_StyleStrength";
									fVar18 = local_1b0;
								}
								else {
									if ((local_1d0 == null) ||(local_1d0.SetFloat("_GlowIntensity", local_1b8), local_1d0 == null)) break;
									local_1d0.SetFloat("_EmissionFromTexture", (float)local_88._0_4_);
									if (local_1d0 == null) break;
									local_1d0.SetFloat("_TexturePreserve", (float)local_98._0_4_);
									if ((((local_1d0 == null) ||(local_1d0.SetFloat("_DetailScale", local_1bc), local_1d0 == null)) ||(local_1d0.SetFloat("_DetailSpeed", local_17c), local_1d0 == null)) ||((local_1d0.SetFloat("_OutlineThickness", local_180), local_1d0 == null ||(local_1d0.SetFloat("_StyleStrength", local_1b0), local_1d0 == null)))) break;
									pSVar16 = "_EdgeSpark";
									fVar18 = (float)local_158._0_4_;
								}
								local_1d0.SetFloat(pSVar16, fVar18);
								if ((local_1d0 == null) ||(local_1d0.EnableKeyword("_EMISSION"), local_1d0 == null)) break;
								local_1d0.globalIlluminationFlags = 1;
								x.sharedMaterial = local_1d0;
							}
						}
					}
					uVar17 = uVar17 + 1;
					uVar24 = (uint)local_100.Length;
					uVar15 = (ulong)uVar24;
					if ((long)(int)uVar24 <= (long)uVar17) {
						return;
					}
				} while(true);
			}
		}
	label_05c03f3a: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004247")]
	[Address(RVA = "0x5B04940", Offset = "0x5B03940", VA = "0x5B04940")]
	public void ReapplyCharacterEffectsToExistingParts()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$ReapplyCharacterEffectsToExistingParts): clean
		HumanCustomSet pSVar1;
		StringSetting pSVar2;
		String raw;
		bool bVar3;
		int type;
		int type_00;

		if (this.CustomSet != null) {
			bVar3 = this.CanUseCharacterEffects();
			if (bVar3) {
				pSVar1 = this.CustomSet;
				if ((pSVar1 != null) &&(pSVar2 = pSVar1.HairEffect, pSVar2 != null)) {
					raw = pSVar2._value;
					type = CharacterEffectPresets.ParseOrDefault(raw);
					pSVar1 = this.CustomSet;
					if ((pSVar1 != null) &&(pSVar2 = pSVar1.BladeEffect, pSVar2 != null)) {
						type_00 = CharacterEffectPresets.ParseOrDefault(pSVar2._value);
						this.ApplyCharacterEffectToPart(this._part_hair, type, true);
						this.ApplyCharacterEffectToPart(this._part_hair_1, type, true);
						this.ApplyCharacterEffectToPart(this._part_blade_l, type_00, false);
						this.ApplyCharacterEffectToPart(this._part_blade_r, type_00, false);
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x6004248")]
	[Address(RVA = "0x5AFF340", Offset = "0x5AFE340", VA = "0x5AFF340")]
	public void CreateEye()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$CreateEye): 1 lines keep C-only constructs
		uint uVar1;
		Object x;
		HumanSetupMeshes __this_00;
		String path;
		HumanCustomSet pSVar2;
		IntSetting pSVar3;
		bool bVar4;
		String name;
		GameObject pUVar5;
		HumanSetup __this_01;

		if (Il2CppMethodInitialized_07547673 == false) {
			Il2CppMethodInitialized_07547673 = true;
			x = (Object)this._part_eye;
		}
		else {
			x = (Object)this._part_eye;
		}
		if (Il2CppMethodInitialized_0754767f == false) {
			Il2CppMethodInitialized_0754767f = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar4 = (x != null);
		if (bVar4) {
			Object.Destroy(x);
			uVar1 = (typeof(ResourcePaths)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ResourcePaths)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this_00 = this._meshes;
		}
		else {
			__this_00 = this._meshes;
		}
		if (__this_00 != null) {
			__this_01 = (HumanSetup)&this._part_eye;
			path = *(String*)((long)(typeof(ResourcePaths)).static_fields + 8);
			name = __this_00.GetEyeMesh();
			pUVar5 = ResourceManager.InstantiateAsset<GameObject>(path, name, true, false);
			this._part_eye = pUVar5;
			__this_01.AttachToMount(this._part_eye, this._part_head, false);
			pSVar2 = this.CustomSet;
			if ((pSVar2 != null) &&(pSVar3 = pSVar2.Eye, pSVar3 != null)) {
				__this_01.SetFacialTexture(this._part_eye, "Eye", pSVar3._value, false);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004249")]
	[Address(RVA = "0x5AFF550", Offset = "0x5AFE550", VA = "0x5AFF550")]
	public void CreateFace()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$CreateFace): 6 lines keep C-only constructs
		uint uVar1;
		Object x;
		HumanCustomSet pSVar2;
		StringSetting pSVar3;
		HashSet<object> __this_00;
		HumanSetupMeshes __this_01;
		String path;
		bool bVar4;
		int id;
		HumanSetup __this_02;
		String pSVar5;
		GameObject pUVar6;
		GameObject* ppUVar7;
		HumanSetup __this_03;

		if (Il2CppMethodInitialized_07547674 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_07547674 = true;
			x = (Object)this._part_face;
		}
		else {
			x = (Object)this._part_face;
		}
		if (Il2CppMethodInitialized_0754767f == false) {
			Il2CppMethodInitialized_0754767f = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar4 = (x != null);
		if (bVar4) {
			Object.Destroy(x);
		}
		pSVar2 = this.CustomSet;
		if (((pSVar2 != null) &&(pSVar3 = pSVar2.Face, pSVar3 != null)) &&(pSVar5 = pSVar3._value, pSVar5 != null)) {
			__this_02 = (HumanSetup)pSVar5.Substring(4);
			bVar4 = ((String)__this_02 != "None") ;
			if (!bVar4) {
				return;
			}
			pSVar2 = this.CustomSet;
			if ((pSVar2 != null) &&(pSVar3 = pSVar2.Face, pSVar3 != null)) {
				pSVar5 = pSVar3._value;
				__this_00 = (HashSet<object>)HumanSetup.UniqueItems;
				if (__this_00 != null) {
					bVar4 = __this_00.Contains((object)pSVar5);
					if (bVar4) {
						uVar1 = (typeof(ResourcePaths)._2).cctor_finished_or_no_cctor;
					}
					else {
						pSVar5 = (String)**(ulong*)(g_data_07556758 + 0xb8);
						uVar1 = (typeof(ResourcePaths)._2).cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
						__this_01 = this._meshes;
					}
					else {
						__this_01 = this._meshes;
					}
					if (__this_01 != null) {
						__this_03 = (HumanSetup)&this._part_face;
						path = ResourcePaths.Characters;
						pSVar5 = __this_01.GetFaceMesh(pSVar5);
						pUVar6 = ResourceManager.InstantiateAsset<GameObject>(path, pSVar5, true, false);
						this._part_face = pUVar6;
						ppUVar7 = &this._part_head;
						if (bVar4) {
							ppUVar7 = &this._mount_head_decor;
						}
						__this_03.AttachToMount(this._part_face, *ppUVar7, bVar4) ;
						pUVar6 = this._part_face;
						id = Int32.Parse((String)__this_02);
						__this_02.SetFacialTexture(pUVar6, "Face", id, bVar4);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600424A")]
	[Address(RVA = "0x5AFF890", Offset = "0x5AFE890", VA = "0x5AFF890")]
	public void CreateGlass()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$CreateGlass): 6 lines keep C-only constructs
		uint uVar1;
		Object x;
		HumanCustomSet pSVar2;
		StringSetting pSVar3;
		HashSet<object> __this_00;
		HumanSetupMeshes __this_01;
		String path;
		bool bVar4;
		int id;
		HumanSetup __this_02;
		String pSVar5;
		GameObject pUVar6;
		GameObject* ppUVar7;
		HumanSetup __this_03;

		if (Il2CppMethodInitialized_07547675 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_07547675 = true;
			x = (Object)this._part_glass;
		}
		else {
			x = (Object)this._part_glass;
		}
		if (Il2CppMethodInitialized_0754767f == false) {
			Il2CppMethodInitialized_0754767f = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar4 = (x != null);
		if (bVar4) {
			Object.Destroy(x);
		}
		pSVar2 = this.CustomSet;
		if (((pSVar2 != null) &&(pSVar3 = pSVar2.Glass, pSVar3 != null)) &&(pSVar5 = pSVar3._value, pSVar5 != null)) {
			__this_02 = (HumanSetup)pSVar5.Substring(5);
			bVar4 = ((String)__this_02 != "None") ;
			if (!bVar4) {
				return;
			}
			pSVar2 = this.CustomSet;
			if ((pSVar2 != null) &&(pSVar3 = pSVar2.Glass, pSVar3 != null)) {
				pSVar5 = pSVar3._value;
				__this_00 = (HashSet<object>)HumanSetup.UniqueItems;
				if (__this_00 != null) {
					bVar4 = __this_00.Contains((object)pSVar5);
					if (bVar4) {
						uVar1 = (typeof(ResourcePaths)._2).cctor_finished_or_no_cctor;
					}
					else {
						pSVar5 = (String)**(ulong*)(g_data_07556758 + 0xb8);
						uVar1 = (typeof(ResourcePaths)._2).cctor_finished_or_no_cctor;
					}
					if (uVar1 == 0) {
						__this_01 = this._meshes;
					}
					else {
						__this_01 = this._meshes;
					}
					if (__this_01 != null) {
						__this_03 = (HumanSetup)&this._part_glass;
						path = ResourcePaths.Characters;
						pSVar5 = __this_01.GetGlassMesh(pSVar5);
						pUVar6 = ResourceManager.InstantiateAsset<GameObject>(path, pSVar5, true, false);
						this._part_glass = pUVar6;
						ppUVar7 = &this._part_head;
						if (bVar4) {
							ppUVar7 = &this._mount_head_decor;
						}
						__this_03.AttachToMount(this._part_glass, *ppUVar7, bVar4);
						pUVar6 = this._part_glass;
						id = Int32.Parse((String)__this_02);
						__this_02.SetFacialTexture(pUVar6, "Glass", id, bVar4);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600424B")]
	[Address(RVA = "0x5B01CE0", Offset = "0x5B00CE0", VA = "0x5B01CE0")]
	public void CreateBack()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$CreateBack): 3 lines keep C-only constructs
		uint uVar1;
		HumanCustomSet pSVar2;
		StringSetting pSVar3;
		String path;
		bool bVar4;
		String pSVar5;
		GameObject pUVar6;
		EZSoftBone x;
		Transform pUVar7;
		Transform* targetAddress;
		Object x_00;
		HumanSetup __this_00;

		if (Il2CppMethodInitialized_07547676 == false) {
			Il2CppMethodInitialized_07547676 = true;
			x_00 = (Object)this._part_back;
			if (Il2CppMethodInitialized_0754767f != false) goto label_05c01d0d;
	label_05c01f79: ;
			Il2CppMethodInitialized_0754767f = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			x_00 = (Object)this._part_back;
			if (Il2CppMethodInitialized_0754767f == false) goto label_05c01f79;
	label_05c01d0d: ;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar4 = (x_00 != null);
		if (bVar4) {
			Object.Destroy(x_00);
		}
		pSVar2 = this.CustomSet;
		if (((pSVar2 == null) ||(pSVar3 = pSVar2.Back, pSVar3 == null)) ||(pSVar5 = pSVar3._value, pSVar5 == null)) {
	label_05c01fae: ;
			throw new NullReferenceException();
		}
		pSVar5 = pSVar5.Substring(4);
		bVar4 = (pSVar5 != "None");
		if (bVar4) {
			path = ResourcePaths.Characters;
			__this_00 = (HumanSetup)&this._part_back;
			pSVar5 = HumanSetupPrefabs.GetBackPrefab(pSVar5);
			pUVar6 = ResourceManager.InstantiateAsset<GameObject>(path, pSVar5, true, false);
			this._part_back = pUVar6;
			__this_00.AttachToMount(this._part_back, this._mount_back, true);
			pUVar6 = this._part_back;
			if (pUVar6 == null) goto label_05c01fae;
			x = pUVar6.GetComponentInChildren<EZSoftBone>();
			bVar4 = ((Object)x != null);
			if (bVar4) {
				if (x == null) goto label_05c01fae;
				pUVar7 = x.m_SimulateSpace;
				bVar4 = ((Object)pUVar7 != null);
				if (bVar4) {
					targetAddress = &x.m_SimulateSpace;
					pUVar7 = this.transform;
					*targetAddress = pUVar7;
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x600424C")]
	[Address(RVA = "0x5B02200", Offset = "0x5B01200", VA = "0x5B02200")]
	public void CreateHead()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$CreateHead): 1 lines keep C-only constructs
		uint uVar1;
		Object x;
		HumanCustomSet pSVar2;
		StringSetting pSVar3;
		String path;
		bool bVar4;
		String pSVar5;
		GameObject pUVar6;
		MethodInfo method_00;
		HumanSetup __this_00;

		if (Il2CppMethodInitialized_07547677 == false) {
			Il2CppMethodInitialized_07547677 = true;
			x = (Object)this._part_head_decor;
		}
		else {
			x = (Object)this._part_head_decor;
		}
		if (Il2CppMethodInitialized_0754767f == false) {
			Il2CppMethodInitialized_0754767f = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar4 = (x != null);
		if (bVar4) {
			Object.Destroy(x);
		}
		pSVar2 = this.CustomSet;
		if (((pSVar2 == null) ||(pSVar3 = pSVar2.Head, pSVar3 == null)) ||(pSVar5 = pSVar3._value, pSVar5 == null)) {
			throw new NullReferenceException();
		}
		pSVar5 = pSVar5.Substring(4);
		bVar4 = (pSVar5 != "None");
		if (bVar4) {
			path = ResourcePaths.Characters;
			__this_00 = (HumanSetup)&this._part_head_decor;
			pSVar5 = HumanSetupPrefabs.GetHeadPrefab(pSVar5);
			pUVar6 = ResourceManager.InstantiateAsset<GameObject>(path, pSVar5, true, false);
			this._part_head_decor = pUVar6;
			method_00 = (MethodInfo)this._part_head_decor;
			__this_00.AttachToMount((GameObject)method_00, this._mount_head_decor, true);
			this.UpdateCloakVisibility();
			return;
		}
		return;
	}

	[Token(Token = "0x600424D")]
	[Address(RVA = "0x5B01FC0", Offset = "0x5B00FC0", VA = "0x5B01FC0")]
	public void CreateHat()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$CreateHat): 1 lines keep C-only constructs
		uint uVar1;
		Object x;
		HumanCustomSet pSVar2;
		StringSetting pSVar3;
		String path;
		bool bVar4;
		String pSVar5;
		GameObject pUVar6;
		MethodInfo method_00;
		HumanSetup __this_00;

		if (Il2CppMethodInitialized_07547678 == false) {
			Il2CppMethodInitialized_07547678 = true;
			x = (Object)this._part_hat;
		}
		else {
			x = (Object)this._part_hat;
		}
		if (Il2CppMethodInitialized_0754767f == false) {
			Il2CppMethodInitialized_0754767f = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar4 = (x != null);
		if (bVar4) {
			Object.Destroy(x);
		}
		pSVar2 = this.CustomSet;
		if (((pSVar2 == null) ||(pSVar3 = pSVar2.Hat, pSVar3 == null)) ||(pSVar5 = pSVar3._value, pSVar5 == null)) {
			throw new NullReferenceException();
		}
		pSVar5 = pSVar5.Substring(3);
		bVar4 = (pSVar5 != "None");
		if (bVar4) {
			path = ResourcePaths.Characters;
			__this_00 = (HumanSetup)&this._part_hat;
			pSVar5 = HumanSetupPrefabs.GetHatPrefab(pSVar5);
			pUVar6 = ResourceManager.InstantiateAsset<GameObject>(path, pSVar5, true, false);
			this._part_hat = pUVar6;
			method_00 = (MethodInfo)this._part_hat;
			__this_00.AttachToMount((GameObject)method_00, this._mount_hat, true);
			this.UpdateCloakVisibility();
			return;
		}
		return;
	}

	[Token(Token = "0x600424E")]
	[Address(RVA = "0x5B00820", Offset = "0x5AFF820", VA = "0x5B00820")]
	public void CreateArms(Material bodyMaterial)
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$CreateArms): clean
		uint uVar1;
		Object pUVar2;
		HumanSetupTextures __this_00;
		HumanCustomSet pSVar3;
		ColorSetting pSVar4;
		Color255 __this_01;
		HashSet<object> __this_02;
		HumanSetupMeshes pCVar5;
		bool bVar6;
		String pSVar7;
		Material value;
		GameObject pUVar8;
		Renderer pUVar9;
		Color color;

		if (Il2CppMethodInitialized_07547679 == false) {
			Il2CppMethodInitialized_07547679 = true;
			pUVar2 = (Object)this._part_arm_l;
		}
		else {
			pUVar2 = (Object)this._part_arm_l;
		}
		if (Il2CppMethodInitialized_0754767f == false) {
			Il2CppMethodInitialized_0754767f = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar6 = (pUVar2 != null);
		if (bVar6) {
			Object.Destroy(pUVar2);
			pUVar2 = (Object)this._part_hand_l;
		}
		else {
			pUVar2 = (Object)this._part_hand_l;
		}
		if (Il2CppMethodInitialized_0754767f == false) {
			Il2CppMethodInitialized_0754767f = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar6 = (pUVar2 != null);
		if (bVar6) {
			Object.Destroy(pUVar2);
			pUVar2 = (Object)this._part_arm_r;
		}
		else {
			pUVar2 = (Object)this._part_arm_r;
		}
		if (Il2CppMethodInitialized_0754767f == false) {
			Il2CppMethodInitialized_0754767f = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar6 = (pUVar2 != null);
		if (bVar6) {
			Object.Destroy(pUVar2);
			pUVar2 = (Object)this._part_hand_r;
		}
		else {
			pUVar2 = (Object)this._part_hand_r;
		}
		if (Il2CppMethodInitialized_0754767f == false) {
			Il2CppMethodInitialized_0754767f = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(Object))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar6 = (pUVar2 != null);
		if (bVar6) {
			Object.Destroy(pUVar2);
		}
		__this_00 = this._textures;
		if (__this_00 != null) {
			pSVar7 = __this_00.GetSkinTexture();
			pSVar3 = this.CustomSet;
			if (((pSVar3 != null) &&(pSVar4 = pSVar3.SkinColor, pSVar4 != null)) &&(__this_01 = pSVar4._value, __this_01 != null)) {
				color = __this_01.ToColor();
				value = HumanSetupMaterials.GetSkinMaterial(pSVar7, color);
				__this_02 = (HashSet<object>)this._ownedMaterials;
				if (__this_02 != null) {
					__this_02.Add((object)value);
					pCVar5 = this._meshes;
					if (pCVar5 != null) {
						pSVar7 = pCVar5.GetArmMesh(true);
						pUVar8 = this.GenerateCloth(pSVar7);
						this._part_arm_l = pUVar8;
						pUVar8 = this._part_arm_l;
						if ((pUVar8 != null) &&(pUVar9 = pUVar8.GetComponent<Renderer>(), pUVar9 != null)) {
							pUVar9.material = bodyMaterial;
							pCVar5 = this._meshes;
							if (pCVar5 != null) {
								pSVar7 = pCVar5.GetHandMesh(true);
								pUVar8 = this.GenerateCloth(pSVar7);
								this._part_hand_l = pUVar8;
								pUVar8 = this._part_hand_l;
								if ((pUVar8 != null) &&(pUVar9 = pUVar8.GetComponent<Renderer>(), pUVar9 != null)) {
									pUVar9.material = value;
									pCVar5 = this._meshes;
									if (pCVar5 != null) {
										pSVar7 = pCVar5.GetArmMesh(false);
										pUVar8 = this.GenerateCloth(pSVar7);
										this._part_arm_r = pUVar8;
										pUVar8 = this._part_arm_r;
										if ((pUVar8 != null) &&(pUVar9 = pUVar8.GetComponent<Renderer>(), pUVar9 != null)) {
											pUVar9.material = bodyMaterial;
											pCVar5 = this._meshes;
											if (pCVar5 != null) {
												pSVar7 = pCVar5.GetHandMesh(false);
												pUVar8 = this.GenerateCloth(pSVar7);
												this._part_hand_r = pUVar8;
												pUVar8 = this._part_hand_r;
												if ((pUVar8 != null) &&(pUVar9 = pUVar8.GetComponent<Renderer>(), pUVar9 != null)) {
													pUVar9.material = value;
													return;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600424F")]
	[Address(RVA = "0x5B04B90", Offset = "0x5B03B90", VA = "0x5B04B90")]
	private void SetMaterial(Renderer renderer, Material material)
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$SetMaterial): clean
		if (renderer == null) {
			throw new NullReferenceException();
		}
		renderer.material = material;
		return;
	}

	[Token(Token = "0x6004250")]
	[Address(RVA = "0x5B00D70", Offset = "0x5AFFD70", VA = "0x5B00D70")]
	public void CreateLowerBody(Material bodyMaterial)
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$CreateLowerBody): 1 lines keep C-only constructs
		uint uVar1;
		HumanCustomSet pSVar2;
		IntSetting pSVar3;
		HumanSetupMeshes __this_00;
		String path;
		GameObject pUVar4;
		String name;
		Object __this_01;
		Transform __this_02;
		SkinnedMeshRenderer pUVar5;
		SkinnedMeshRenderer __this_03;
		Mesh value;

		if (Il2CppMethodInitialized_0754767a == false) {
			Il2CppMethodInitialized_0754767a = true;
			uVar1 = (typeof(ResourcePaths)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(ResourcePaths)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pSVar2 = this.CustomSet;
		}
		else {
			pSVar2 = this.CustomSet;
		}
		if (((pSVar2 != null) &&(pSVar3 = pSVar2.Boots, pSVar3 != null)) &&(__this_00 = this._meshes, __this_00 != null)) {
			path = *(String*)((long)(typeof(ResourcePaths)).static_fields + 8);
			name = __this_00.GetBootsMesh(pSVar3._value);
			__this_01 = ResourceManager.LoadAsset(path, name, true, false);
			if (__this_01 != null) {
				if (__this_01.klass != (Object)typeof(GameObject)) {
					throw new InvalidCastException();
				}
				__this_02 = __this_01.transform;
				pUVar4 = this._part_leg;
				if (((pUVar4 != null) &&(pUVar5 = pUVar4.GetComponent<SkinnedMeshRenderer>(), __this_02 != null)) &&((__this_03 = __this_02.GetComponent<SkinnedMeshRenderer>(), __this_03 != null &&(value = __this_03.sharedMesh, pUVar5 != null)))) {
					pUVar5.sharedMesh = value;
					pUVar4 = this._part_leg;
					if ((pUVar4 != null) &&(pUVar5 = pUVar4.GetComponent<SkinnedMeshRenderer>(), pUVar5 != null)) {
						pUVar5.material = bodyMaterial;
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004251")]
	[Address(RVA = "0x5AFFBD0", Offset = "0x5AFEBD0", VA = "0x5AFFBD0")]
	public void CreateUpperBody(Material bodyMaterial)
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$CreateUpperBody): 5 lines keep C-only constructs
		uint uVar1;
		HumanSetupMeshes pCVar2;
		String pSVar3;
		HumanSetupTextures pCVar4;
		HumanCustomSet pSVar5;
		ColorSetting pSVar6;
		Color255 __this_00;
		HashSet<object> __this_01;
		bool bVar7;
		String pSVar8;
		GameObject pUVar9;
		Renderer pUVar10;
		Material pUVar11;
		JSONNode pSVar12;
		GameObject* targetAddress;
		Object pUVar13;
		HumanSetup pCVar15;
		Color color;

		if (Il2CppMethodInitialized_0754767b == false) {
			Il2CppMethodInitialized_0754767b = true;
			pUVar13 = (Object)this._part_upper_body;
			if (Il2CppMethodInitialized_0754767f == false) goto label_05c00594;
	label_05bffc05: ;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			pUVar13 = (Object)this._part_upper_body;
			if (Il2CppMethodInitialized_0754767f != false) goto label_05bffc05;
	label_05c00594: ;
			Il2CppMethodInitialized_0754767f = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar7 = (pUVar13 != null);
		if (bVar7) {
			Object.Destroy(pUVar13);
			pUVar13 = (Object)this._part_brand_1;
			if (Il2CppMethodInitialized_0754767f == false) goto label_05c005f9;
	label_05bffc45: ;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			pUVar13 = (Object)this._part_brand_1;
			if (Il2CppMethodInitialized_0754767f != false) goto label_05bffc45;
	label_05c005f9: ;
			Il2CppMethodInitialized_0754767f = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar7 = (pUVar13 != null);
		if (bVar7) {
			Object.Destroy(pUVar13);
			pUVar13 = (Object)this._part_brand_2;
			if (Il2CppMethodInitialized_0754767f == false) goto label_05c00657;
	label_05bffc7e: ;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			pUVar13 = (Object)this._part_brand_2;
			if (Il2CppMethodInitialized_0754767f != false) goto label_05bffc7e;
	label_05c00657: ;
			Il2CppMethodInitialized_0754767f = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar7 = (pUVar13 != null);
		if (bVar7) {
			Object.Destroy(pUVar13);
			pUVar13 = (Object)this._part_brand_3;
			if (Il2CppMethodInitialized_0754767f == false) goto label_05c006b5;
	label_05bffcb7: ;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			pUVar13 = (Object)this._part_brand_3;
			if (Il2CppMethodInitialized_0754767f != false) goto label_05bffcb7;
	label_05c006b5: ;
			Il2CppMethodInitialized_0754767f = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar7 = (pUVar13 != null);
		if (bVar7) {
			Object.Destroy(pUVar13);
			pUVar13 = (Object)this._part_brand_4;
			if (Il2CppMethodInitialized_0754767f == false) goto label_05c00713;
	label_05bffcf0: ;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			pUVar13 = (Object)this._part_brand_4;
			if (Il2CppMethodInitialized_0754767f != false) goto label_05bffcf0;
	label_05c00713: ;
			Il2CppMethodInitialized_0754767f = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar7 = (pUVar13 != null);
		if (bVar7) {
			Object.Destroy(pUVar13);
			pUVar13 = (Object)this._part_chest_1;
			if (Il2CppMethodInitialized_0754767f == false) goto label_05c00771;
	label_05bffd29: ;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			pUVar13 = (Object)this._part_chest_1;
			if (Il2CppMethodInitialized_0754767f != false) goto label_05bffd29;
	label_05c00771: ;
			Il2CppMethodInitialized_0754767f = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar7 = (pUVar13 != null);
		if (bVar7) {
			Object.Destroy(pUVar13);
			pUVar13 = (Object)this._part_chest_2;
			if (Il2CppMethodInitialized_0754767f == false) goto label_05c007cf;
	label_05bffd62: ;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		else {
			pUVar13 = (Object)this._part_chest_2;
			if (Il2CppMethodInitialized_0754767f != false) goto label_05bffd62;
	label_05c007cf: ;
			Il2CppMethodInitialized_0754767f = true;
			uVar1 = (typeof(Object)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar7 = (pUVar13 != null);
		if (bVar7) {
			Object.Destroy(pUVar13);
		}
		if (this.IsDeadBody == false) {
			targetAddress = &this._part_chest_3;
			pUVar9 = *targetAddress;
			ClothFactory.DisposeObject(pUVar9);
			*targetAddress = null;
		}
		this.CreateCape();
		pCVar2 = this._meshes;
		if (pCVar2 == null) goto label_05c0081b;
		pSVar8 = pCVar2.GetChestMesh(1);
		bVar7 = (pSVar8 != (String)**(ulong*)(g_data_07556758 + 0xb8));
		if (bVar7) {
			pCVar15 = (HumanSetup)&this._part_chest_1;
			pSVar3 = ResourcePaths.Characters;
			pUVar9 = ResourceManager.InstantiateAsset<GameObject>(pSVar3, pSVar8, true, false);
			this._part_chest_1 = pUVar9;
			pCVar15.AttachToMount(this._part_chest_1, this._mount_chest, false);
			pUVar9 = this._part_chest_1;
			if (pUVar9 == null) goto label_05c0081b;
			pUVar10 = pUVar9.GetComponent<Renderer>() ;
			pCVar4 = this._textures;
			if (pCVar4 == null) goto label_05c0081b;
			pSVar8 = pCVar4.GetChestTexture(1);
			pUVar11 = HumanSetupMaterials.GetPartMaterial(pSVar8, false);
			if (pUVar10 == null) goto label_05c0081b;
			pUVar10.material = pUVar11;
		}
		pCVar2 = this._meshes;
		if (pCVar2 != null) {
			pSVar8 = pCVar2.GetChestMesh(2);
			bVar7 = (pSVar8 != (String)**(ulong*)(g_data_07556758 + 0xb8));
			if (bVar7) {
				pCVar15 = (HumanSetup)&this._part_chest_2;
				pSVar3 = ResourcePaths.Characters;
				pUVar9 = ResourceManager.InstantiateAsset<GameObject>(pSVar3, pSVar8, true, false);
				this._part_chest_2 = pUVar9;
				pCVar15.AttachToMount(this._part_chest_2, this._mount_chest, false);
				pUVar9 = this._part_chest_2;
				if ((pUVar9 == null) ||(pUVar10 = pUVar9.GetComponent<Renderer>(), pUVar10 == null)) goto label_05c0081b;
				pUVar10.material = bodyMaterial;
			}
			pCVar2 = this._meshes;
			if (pCVar2 != null) {
				pSVar8 = pCVar2.GetChestMesh(3);
				bVar7 = (pSVar8 != (String)**(ulong*)(g_data_07556758 + 0xb8));
				if ((bVar7) && (this.IsDeadBody == false)) {
					pUVar9 = this._mount_cloth;
					pUVar9 = ClothFactory.GetCape(pUVar9, pSVar8, bodyMaterial);
					this._part_chest_3 = pUVar9;
				}
				pCVar2 = this._meshes;
				if (pCVar2 != null) {
					pSVar8 = pCVar2.GetBodyMesh();
					pUVar9 = this.GenerateCloth(pSVar8);
					this._part_upper_body = pUVar9;
					pUVar9 = this._part_upper_body;
					if ((pUVar9 != null) &&(pUVar10 = pUVar9.GetComponent<Renderer>(), pUVar10 != null)) {
						pUVar10.material = bodyMaterial;
						pCVar4 = this._textures;
						if (pCVar4 != null) {
							pSVar8 = pCVar4.GetBrandTexture();
							pUVar11 = HumanSetupMaterials.GetPartMaterial(pSVar8, false);
							pSVar12 = this.CurrentCostume;
							if (((pSVar12 != null) &&(pSVar12 = pSVar12.get_Item("Type"), pSVar12 != null)) &&(pSVar8 = pSVar12.get_Value(), pSVar8 != null)) {
								bVar7 = pSVar8.StartsWith("Uniform");
								if (bVar7) {
									pCVar2 = this._meshes;
									if (pCVar2 == null) goto label_05c0081b;
									pSVar8 = pCVar2.GetBrandMesh(1);
									pUVar9 = this.GenerateCloth(pSVar8);
									this._part_brand_1 = pUVar9;
									pUVar9 = this._part_brand_1;
									if ((pUVar9 == null) ||(pUVar10 = pUVar9.GetComponent<Renderer>(), pUVar10 == null)) goto label_05c0081b;
									pUVar10.material = pUVar11;
									pCVar2 = this._meshes;
									if (pCVar2 == null) goto label_05c0081b;
									pSVar8 = pCVar2.GetBrandMesh(2);
									pUVar9 = this.GenerateCloth(pSVar8);
									this._part_brand_2 = pUVar9;
									pUVar9 = this._part_brand_2;
									if ((pUVar9 == null) ||(pUVar10 = pUVar9.GetComponent<Renderer>(), pUVar10 == null)) goto label_05c0081b;
									pUVar10.material = pUVar11;
									pCVar2 = this._meshes;
									if (pCVar2 == null) goto label_05c0081b;
									pSVar8 = pCVar2.GetBrandMesh(3);
									pUVar9 = this.GenerateCloth(pSVar8);
									this._part_brand_3 = pUVar9;
									pUVar9 = this._part_brand_3;
									if ((pUVar9 == null) ||(pUVar10 = pUVar9.GetComponent<Renderer>(), pUVar10 == null)) goto label_05c0081b;
									pUVar10.material = pUVar11;
									pCVar2 = this._meshes;
									if (pCVar2 == null) goto label_05c0081b;
									pSVar8 = pCVar2.GetBrandMesh(4);
									pUVar9 = this.GenerateCloth(pSVar8);
									this._part_brand_4 = pUVar9;
									pUVar9 = this._part_brand_4;
									if ((pUVar9 == null) ||(pUVar10 = pUVar9.GetComponent<Renderer>(), pUVar10 == null)) goto label_05c0081b;
									pUVar10.material = pUVar11;
								}
								pCVar4 = this._textures;
								if (pCVar4 != null) {
									pSVar8 = pCVar4.GetSkinTexture();
									pSVar5 = this.CustomSet;
									if (((pSVar5 != null) &&(pSVar6 = pSVar5.SkinColor, pSVar6 != null)) &&(__this_00 = pSVar6._value, __this_00 != null)) {
										color = __this_00.ToColor();
										pUVar11 = HumanSetupMaterials.GetSkinMaterial(pSVar8, color);
										__this_01 = (HashSet<object>)this._ownedMaterials ;
										if (__this_01 != null) {
											__this_01.Add((object)pUVar11);
											pUVar9 = this._part_head;
											if ((pUVar9 != null) &&(pUVar10 = pUVar9.GetComponent<Renderer>(), pUVar10 != null)) {
												pUVar10.material = pUVar11;
												pUVar9 = this._part_chest;
												if ((pUVar9 != null) &&(pUVar10 = pUVar9.GetComponent<Renderer>() , pUVar10 != null)) {
													pUVar10.material = pUVar11;
													return;
												}
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05c0081b: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004252")]
	[Address(RVA = "0x5B04A60", Offset = "0x5B03A60", VA = "0x5B04A60")]
	private void SetFacialTexture(GameObject go, string type, int id, bool unique)
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$SetFacialTexture): clean
		Renderer pUVar1;
		String pSVar2;
		Material value;
		int iStack_24;

		if (id < 0) {
			if (go != null) {
				pUVar1 = go.GetComponentInChildren<Renderer>();
				if (pUVar1 != null) {
					pUVar1.material = MaterialCache.TransparentMaterial;
					return;
				}
			}
		}
		else if (go != null) {
			pUVar1 = go.GetComponentInChildren<Renderer>();
			pSVar2 = iStack_24.ToString();
			pSVar2 = String.Concat(type, pSVar2);
			value = HumanSetupMaterials.GetFaceMaterial(pSVar2, unique);
			if (pUVar1 != null) {
				pUVar1.material = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004253")]
	[Address(RVA = "0x5AFC650", Offset = "0x5AFB650", VA = "0x5AFC650")]
	private GameObject CreateMount(string transformPath)
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$CreateMount): clean
		GameObject __this_00;
		String n;
		Transform pUVar1;
		Transform pUVar2;
		Quaternion value;
		Vector3 UVar3;
		Vector3 euler;
		Vector3 local_48;
		Quaternion local_38;

		__this_00 = new GameObject();
		n = String.Concat("Armature/Core/Controller_Body/hip/", transformPath);
		pUVar1 = this.transform;
		if (__this_00 != null) {
			pUVar2 = __this_00.transform;
			if (pUVar1 != null) {
				UVar3 = pUVar1.position;
				if (pUVar2 != null) {
					pUVar2.position = UVar3;
					pUVar2 = __this_00.transform;
					local_38 = pUVar1.rotation;
					UVar3 = Quaternion.Internal_ToEulerRad(ref local_38);
					euler.x = UVar3.x * 57.29578;
					euler.y = UVar3.y * 57.29578;
					euler.z = UVar3.z * 57.29578;
					UVar3 = Quaternion.Internal_MakePositive(euler);
					local_48.x = 4.712389;
					local_48.y = UVar3.y * 0.017453292;
					local_48.z = 0.0;
					value = Quaternion.Internal_FromEulerRad(ref local_48);
					if (pUVar2 != null) {
						pUVar2.rotation = value;
						pUVar2 = __this_00.transform;
						pUVar1 = pUVar1.Find(n);
						if (pUVar2 != null) {
							pUVar2.parent = pUVar1;
							return __this_00;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004254")]
	[Address(RVA = "0x5B04250", Offset = "0x5B03250", VA = "0x5B04250")]
	private GameObject GenerateCloth(string cloth)
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$GenerateCloth): clean
		String path;
		bool bVar1;
		Object x;
		Transform[] value;
		GameObject pUVar2;
		SkinnedMeshRenderer __this_00;
		Transform pUVar3;
		Transform pUVar4;

		pUVar2 = this._mount_cloth;
		if (pUVar2 != null) {
			x = (Object)pUVar2.GetComponent<SkinnedMeshRenderer>();
			bVar1 = (x == null);
			if (bVar1) {
				pUVar2 = this._mount_cloth;
				if (pUVar2 == null) goto label_05c04505;
				x = (Object)pUVar2.AddComponent<SkinnedMeshRenderer>();
			}
			if (x != null) {
				value = x.bones;
				path = ResourcePaths.Characters;
				pUVar2 = ResourceManager.InstantiateAsset<GameObject>(path, cloth, true, false);
				if (pUVar2 != null) {
					__this_00 = pUVar2.GetComponent<SkinnedMeshRenderer>();
					if (__this_00 != null) {
						pUVar2 = __this_00.gameObject;
						if (pUVar2 != null) {
							pUVar3 = pUVar2.transform;
							pUVar2 = x.gameObject;
							if (pUVar2 != null) {
								pUVar4 = pUVar2.transform;
								if (pUVar4 != null) {
									pUVar4 = pUVar4.parent;
									if (pUVar3 != null) {
										pUVar3.parent = pUVar4;
										pUVar3 = __this_00.transform;
										if (pUVar3 != null) {
											pUVar3.localPosition = (Vector3)(Vector3.zeroVector);
											pUVar3 = __this_00.transform;
											if (pUVar3 != null) {
												pUVar3.localScale = (Vector3)(Vector3.oneVector);
												__this_00.bones = value;
												__this_00.quality = 4;
												pUVar3 = x.rootBone;
												__this_00.rootBone = pUVar3;
												pUVar2 = __this_00.gameObject;
												return pUVar2;
											}
										}
									}
								}
							}
						}
					}
				}
			}
		}
	label_05c04505: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004255")]
	[Address(RVA = "0x5B02A70", Offset = "0x5B01A70", VA = "0x5B02A70")]
	private void AttachToMount(GameObject obj, GameObject mount, bool setScale = false)
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$AttachToMount): 1 lines keep C-only constructs
		Transform pUVar1;
		Transform p;

		if (obj != null) {
			pUVar1 = obj.transform;
			if (mount != null) {
				p = mount.transform;
				if (pUVar1 != null) {
					pUVar1.SetParent(p);
					pUVar1 = obj.transform;
					if (pUVar1 != null) {
						pUVar1.localPosition = (Vector3)(Vector3.zeroVector);
						pUVar1 = obj.transform;
						if (pUVar1 != null) {
							pUVar1.localRotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
							if (!setScale) {
								return;
							}
							pUVar1 = obj.transform;
							if (pUVar1 != null) {
								pUVar1.localScale = (Vector3)(Vector3.oneVector);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004256")]
	[Address(RVA = "0x5B02970", Offset = "0x5B01970", VA = "0x5B02970")]
	private void DestroyIfExists(GameObject go)
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$DestroyIfExists): clean
		bool bVar1;

		bVar1 = ((Object)go != null);
		if (bVar1) {
			Object.Destroy((Object)go);
			return;
		}
		return;
	}

	[Token(Token = "0x6004257")]
	[Address(RVA = "0x5B04BB0", Offset = "0x5B03BB0", VA = "0x5B04BB0")]
	public HumanSetup()
	{
		// Lifted from source/cpp/Characters/HumanSetup.c (Characters.HumanSetup$$.ctor): 1 lines keep C-only constructs
		String[] pSVar1;
		Dictionary<Renderer, Material> __this_00;
		HashSet<Material> __this_01;
		List<Renderer> __this_02;

		pSVar1 = (String[])new string[3];
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = "Fire1";
			if ((pSVar1.Length & 0xfffffffe) != 0) {
				pSVar1[1] = "Fire2";
				if (2 < (uint)pSVar1.Length) {
					pSVar1[2] = "Lightning1";
					this.TierEffects = pSVar1;
					__this_00 = il2cpp_codegen_object_new(typeof(Dictionary<Renderer, Material>));
					__this_00 = new Dictionary<object, object>();
					this._effectMaterialCache = __this_00;
					__this_01 = new HashSet<Material>();
					this._ownedMaterials = __this_01;
					__this_02 = new List<Renderer>();
					this._hairRenderers = __this_02;
					this._hoodieHairClipOffset = 0.25;
					this._hoodieHairClipWidth = 0.75;
					base();
					return;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Characters/HumanSetup.c.

	// Characters.HumanSetup$$.cctor: clean
	static HumanSetup()
	{
		int iVar2;
		HashSet<string> __this;

		__this = new HashSet<string>();
		HumanSetup.UniqueItems = __this;
		iVar2 = Shader.PropertyToID("_HairClipPlane");
		HumanSetup.HairClipPlaneId = iVar2;
		iVar2 = Shader.PropertyToID("_HairClipLeftPlane");
		HumanSetup.HairClipLeftPlaneId = iVar2;
		iVar2 = Shader.PropertyToID("_HairClipRightPlane");
		HumanSetup.HairClipRightPlaneId = iVar2;
		iVar2 = Shader.PropertyToID("_HairClipTopPlane");
		HumanSetup.HairClipTopPlaneId = iVar2;
		return;
	}
}
