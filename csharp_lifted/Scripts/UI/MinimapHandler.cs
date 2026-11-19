// ==================== AoTTG2 cross-reference ====================
// Type: UI.MinimapHandler
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/MinimapHandler.c
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/MinimapHandler.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Cameras;
using Characters;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000850")]
internal class MinimapHandler : MonoBehaviour
{
	[Token(Token = "0x4002A0E")]
	[FieldOffset(Offset = "0x0")]
	public static MinimapHandler Instance;

	[Token(Token = "0x4002A0F")]
	[FieldOffset(Offset = "0x20")]
	private float _height;

	[Token(Token = "0x4002A10")]
	[FieldOffset(Offset = "0x8")]
	private static Color _mineColor;

	[Token(Token = "0x4002A11")]
	[FieldOffset(Offset = "0x18")]
	private static Color _titanColor;

	[Token(Token = "0x4002A12")]
	[FieldOffset(Offset = "0x28")]
	private static Color _humanColor;

	[Token(Token = "0x4002A13")]
	[FieldOffset(Offset = "0x38")]
	private static Color _teamBlueColor;

	[Token(Token = "0x4002A14")]
	[FieldOffset(Offset = "0x48")]
	private static Color _teamRedColor;

	[Token(Token = "0x4002A15")]
	[FieldOffset(Offset = "0x28")]
	private GameObject _minimapPanel;

	[Token(Token = "0x4002A16")]
	[FieldOffset(Offset = "0x30")]
	private Text _positionLabel;

	[Token(Token = "0x4002A17")]
	[FieldOffset(Offset = "0x38")]
	private Text _compassLabel;

	[Token(Token = "0x4002A18")]
	[FieldOffset(Offset = "0x40")]
	private RawImage[] _images;

	[Token(Token = "0x4002A19")]
	[FieldOffset(Offset = "0x48")]
	private Transform _tileTransform;

	[Token(Token = "0x4002A1A")]
	[FieldOffset(Offset = "0x50")]
	private Transform _maskTransform;

	[Token(Token = "0x4002A1B")]
	[FieldOffset(Offset = "0x58")]
	private Dictionary<Vector2Int, Texture2D> _tileTextures;

	[Token(Token = "0x4002A1C")]
	[FieldOffset(Offset = "0x60")]
	private Queue<Vector2Int> _createTileQueue;

	[Token(Token = "0x4002A1D")]
	[FieldOffset(Offset = "0x68")]
	private HashSet<Vector2Int> _finishedTiles;

	[Token(Token = "0x4002A1E")]
	[FieldOffset(Offset = "0x70")]
	private Vector2Int _currentTile;

	[Token(Token = "0x4002A1F")]
	[FieldOffset(Offset = "0x78")]
	private Dictionary<Transform, Transform> _icons;

	[Token(Token = "0x4002A20")]
	[FieldOffset(Offset = "0x80")]
	private Dictionary<Transform, BaseCharacter> _characters;

	[Token(Token = "0x4002A21")]
	[FieldOffset(Offset = "0x88")]
	private List<Transform> _iconsToRemove;

	[Token(Token = "0x4002A22")]
	[FieldOffset(Offset = "0x90")]
	private Vector3 _currentTileCenter;

	[Token(Token = "0x4002A23")]
	[FieldOffset(Offset = "0x9C")]
	private bool _needUpdateTiles;

	[Token(Token = "0x4002A24")]
	private const int MaxTilesFromCenter = 2;

	[Token(Token = "0x6004F7E")]
	[Address(RVA = "0x5C370A0", Offset = "0x5C360A0", VA = "0x5C370A0")]
	private void Awake()
	{
		// Lifted from source/cpp/UI/MinimapHandler.c (UI.MinimapHandler$$Awake): 7 lines keep C-only constructs
		byte bVar1;
		GeneralSettings pSVar2;
		FloatSetting pSVar3;
		BaseMenu pUVar4;
		GameObject pUVar5;
		RawImage[] pUVar6;
		uint in_EAX;
		Transform pUVar7;
		Text pUVar8;
		String pSVar9;
		RawImage obj;
		object pIVar10;
		uint uVar11;
		ulong uStack_38;

		uStack_38._0_4_ = in_EAX;
		uStack_38 = (ulong)(uint)uStack_38;
		MinimapHandler.Instance = this;
		pSVar2 = SettingsManager.GeneralSettings;
		if ((pSVar2 != null) &&(pSVar3 = pSVar2.MinimapCameraHeight, pSVar3 != null)) {
			this._height = pSVar3._value;
			pUVar4 = UIManager.CurrentMenu;
			if (pUVar4 != null) {
				bVar1 = (typeof(InGameMenu)._2).typeHierarchyDepth;
				if (((pUVar4.klass._2).typeHierarchyDepth < bVar1) ||((pUVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameMenu))) {
					throw new InvalidCastException();
				}
				this._minimapPanel = (*(ulong)((sbyte)pUVar4 + 0x1d0));
				pUVar5 = this._minimapPanel;
				if (pUVar5 != null) {
					pUVar7 = pUVar5.transform;
					if (pUVar7 != null) {
						pUVar7 = pUVar7.Find("PositionLabel");
						if (pUVar7 != null) {
							pUVar8 = pUVar7.GetComponent<Text>();
							this._positionLabel = pUVar8;
							pUVar5 = this._minimapPanel;
							if (pUVar5 != null) {
								pUVar7 = pUVar5.transform;
								if (pUVar7 != null) {
									pUVar7 = pUVar7.Find("CompassLabel");
									if (pUVar7 != null) {
										pUVar8 = pUVar7.GetComponent<Text>();
										this._compassLabel = pUVar8;
										pUVar5 = this._minimapPanel;
										if (pUVar5 != null) {
											pUVar7 = pUVar5.transform;
											if (pUVar7 != null) {
												pUVar7 = pUVar7.Find("Mask");
												if (pUVar7 != null) {
													pUVar7 = pUVar7.transform;
													this._maskTransform = pUVar7;
													pUVar7 = this._maskTransform;
													if (pUVar7 != null) {
														uVar11 = 0;
														pUVar7 = pUVar7.Find("Tiles") ;
														if (pUVar7 != null) {
															pUVar7 = pUVar7.transform;
															this._tileTransform = pUVar7;
															uStack_38 = uStack_38 & 0xffffffff;
															while(true) {
																pUVar6 = this._images;
																pUVar7 = this._tileTransform;
																pSVar9 = (((long)&uStack_38 + 4)).ToString();
																pSVar9 = String.Concat("Image", pSVar9);
																if (pUVar7 == null) break;
																pUVar7 = pUVar7.Find(pSVar9);
																if (pUVar7 == null) break;
																obj = pUVar7.GetComponent<RawImage>();
																if (pUVar6 == null) break;
																if (obj != null) {
																	pIVar10 = il2cpp_vm_Object_IsInst((object)obj, (((pUVar6.obj).klass)._1).element_class);
																	if (pIVar10 == null) {
																		pIVar10 = new ArrayTypeMismatchException();
																		throw pIVar10;
																	}
																}
																if ((uint)pUVar6.Length <= uVar11) {
																	throw new IndexOutOfRangeException();
																}
																pUVar6[(int)uVar11] = obj;
																uVar11 = uStack_38._4_4_ + 1;
																uStack_38 = CONCAT44(uVar11, (uint)uStack_38);
																if (8 < (int)uVar11) {
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
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F7F")]
	[Address(RVA = "0x5C37480", Offset = "0x5C36480", VA = "0x5C37480")]
	public static void CreateMinimapIcon(Transform transform, string type)
	{
		// Lifted from source/cpp/UI/MinimapHandler.c (UI.MinimapHandler$$CreateMinimapIcon): clean
		MinimapHandler x;
		bool bVar1;
		Color color;

		x = MinimapHandler.Instance;
		bVar1 = ((Object)x == null);
		if (bVar1) {
			return;
		}
		if ((typeof(MinimapHandler)._2).cctor_finished_or_no_cctor == 0) {
		}
		color.b = 1.0;
		color.a = 1.0;
		color.r = 1.0;
		color.g = 1.0;
		MinimapHandler.SetupIcon("Minimap/Textures/MinimapSupplyIcon", color, transform);
		return;
	}

	[Token(Token = "0x6004F80")]
	[Address(RVA = "0x5C37950", Offset = "0x5C36950", VA = "0x5C37950")]
	public static void CreateMinimapIcon(BaseCharacter character)
	{
		// Lifted from source/cpp/UI/MinimapHandler.c (UI.MinimapHandler$$CreateMinimapIcon): 19 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		byte bVar3;
		uint uVar4;
		MinimapHandler x;
		String pSVar6;
		bool bVar7;
		String* ppSVar8;
		float pfVar9;
		Transform transform;
		Color pUVar10;
		String a;
		Color color;
		ulong local_48;
		ulong local_38;

		x = MinimapHandler.Instance;
		bVar7 = ((Object)x == null);
		if (bVar7) {
			return;
		}
		if (character == null) {
			throw new NullReferenceException();
		}
		a = character.Team;
		bVar7 = (a == TeamInfo.None);
		if (bVar7) {
			bVar3 = (typeof(Human)._2).typeHierarchyDepth;
			if (((character.klass._2).typeHierarchyDepth < bVar3) ||((character.klass._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(Human))) {
				ppSVar8 = &TeamInfo.Titan;
			}
			else {
				ppSVar8 = &TeamInfo.Human;
			}
			a = *ppSVar8;
		}
		bVar7 = character.IsMainCharacter();
		pSVar6 = "Mine";
		if (bVar7) {
			local_38._0_4_ = (MinimapHandler._mineColor).r;
			local_38._4_4_ = (MinimapHandler._mineColor).g;
			uVar1 = (MinimapHandler._mineColor).b;
			uVar2 = (MinimapHandler._mineColor).a;
			a = pSVar6;
		}
		else {
			uVar1 = 0x3f800000;
			uVar2 = 0x3f800000;
			local_38 = 0x3f8000003f800000;
		}
		local_48 = CONCAT44(uVar2, uVar1);
		bVar3 = (typeof(Human)._2).typeHierarchyDepth;
		if (((character.klass._2).typeHierarchyDepth < bVar3) ||((character.klass._2).typeHierarchy[(ulong)bVar3 - 1] != typeof(Human))) {
			uVar4 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
			pSVar6 = "Minimap/Textures/MinimapTitanIcon";
		}
		else {
			uVar4 = (typeof(TeamInfo)._2).cctor_finished_or_no_cctor;
			pSVar6 = "Minimap/Textures/MinimapHumanIcon";
		}
		if (uVar4 == 0) {
		}
		bVar7 = (a == TeamInfo.Human) ;
		if (bVar7) {
			pUVar10 = &MinimapHandler._humanColor;
			pfVar9 = &(MinimapHandler._humanColor).b;
		}
		else {
			bVar7 = (a == TeamInfo.Titan);
			if (bVar7) {
				pUVar10 = &MinimapHandler._titanColor;
				pfVar9 = &(MinimapHandler._titanColor).b;
			}
			else {
				bVar7 = (a == TeamInfo.Blue);
				if (bVar7) {
					pUVar10 = &MinimapHandler._teamBlueColor;
					pfVar9 = &(MinimapHandler._teamBlueColor).b;
				}
				else {
					bVar7 = (a == TeamInfo.Red);
					if (!bVar7) goto label_05d37cc8;
					pUVar10 = &MinimapHandler._teamRedColor;
					pfVar9 = &(MinimapHandler._teamRedColor).b;
				}
			}
		}
		local_38._0_4_ = pUVar10.r;
		local_38._4_4_ = pUVar10.g;
		local_48 = *(ulong)pfVar9;
	label_05d37cc8: ;
		transform = character.transform;
		if ((typeof(MinimapHandler)._2).cctor_finished_or_no_cctor == 0) {
		}
		color.b = (float)(undefined4)local_48;
		color.a = (float)local_48._4_4_;
		color.r = (float)(undefined4)local_38;
		color.g = (float)local_38._4_4_;
		MinimapHandler.SetupIcon(pSVar6, color, transform);
		return;
	}

	[Token(Token = "0x6004F81")]
	[Address(RVA = "0x5C36BB0", Offset = "0x5C35BB0", VA = "0x5C36BB0")]
	public static Dictionary<Transform, Transform> GetIcons()
	{
		// Lifted from source/cpp/UI/MinimapHandler.c (UI.MinimapHandler$$GetIcons): clean
		MinimapHandler pUVar1;
		bool bVar2;
		Dictionary<Transform, Transform> pSVar3;

		pUVar1 = MinimapHandler.Instance;
		bVar2 = ((Object)pUVar1 == null);
		if (!bVar2) {
			pUVar1 = MinimapHandler.Instance;
			if (pUVar1 == null) {
				throw new NullReferenceException();
			}
		}
		return pSVar3;
	}

	[Token(Token = "0x6004F82")]
	[Address(RVA = "0x5C37550", Offset = "0x5C36550", VA = "0x5C37550")]
	private static void SetupIcon(string texture, Color color, Transform transform)
	{
		// Lifted from source/cpp/UI/MinimapHandler.c (UI.MinimapHandler$$SetupIcon): 2 lines keep C-only constructs
		String path;
		MinimapHandler pUVar1;
		Dictionary<object, object> pSVar2;
		bool bVar3;
		GameObject pUVar4;
		RawImage __this;
		Texture value;
		Transform pUVar5;
		GameObject __this_00;
		BaseCharacter x;

		path = ResourcePaths.UI;
		pUVar4 = ResourceManager.InstantiateAsset<GameObject>(path, "Minimap/Prefabs/MinimapIcon", true, false);
		LanguageFonts.Localize(pUVar4);
		if (pUVar4 != null) {
			__this = pUVar4.GetComponent<RawImage>();
			value = (Texture)ResourceManager.LoadAsset(ResourcePaths.UI, texture, true, false) ;
			if (__this != null) {
				if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) {
					throw new InvalidCastException();
				}
				__this.texture = value;
				__this.set_color(color);
				pUVar1 = MinimapHandler.Instance;
				if (pUVar1 != null) {
					pSVar2 = (Dictionary<object, object>)pUVar1._icons;
					pUVar5 = pUVar4.transform;
					if (pSVar2 != null) {
						pSVar2.Add((object)transform, (object)pUVar5);
						if (transform != null) {
							__this_00 = transform.gameObject;
							if (__this_00 != null) {
								x = __this_00.GetComponent<BaseCharacter>();
								bVar3 = ((Object)x != null);
								if (bVar3) {
									pUVar1 = MinimapHandler.Instance;
									if ((pUVar1 == null) ||(pSVar2 = (Dictionary<object, object>)pUVar1._characters, pSVar2 == null)) goto label_05d3793c;
									pSVar2.Add((object)transform, (object)x);
								}
								pUVar5 = pUVar4.transform;
								pUVar1 = MinimapHandler.Instance;
								if ((pUVar1 != null) && (pUVar5 != null)) {
									pUVar5.SetParent(pUVar1._maskTransform);
									pUVar5 = pUVar4.transform;
									if (pUVar5 != null) {
										pUVar5.localPosition = (Vector3)(Vector3.zeroVector);
										pUVar5 = pUVar4.transform;
										if (pUVar5 != null) {
											pUVar5.rotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
											pUVar4 = pUVar4.gameObject;
											if (pUVar4 != null) {
												pUVar4.SetActive(false);
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
	label_05d3793c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F83")]
	[Address(RVA = "0x5C37D40", Offset = "0x5C36D40", VA = "0x5C37D40")]
	private void Update()
	{
		// Lifted from source/cpp/UI/MinimapHandler.c (UI.MinimapHandler$$Update): 1 lines keep C-only constructs
		byte bVar1;
		GameObject __this_00;
		InGameCamera camera;
		BaseComponentCache pUVar2;
		Transform pUVar3;
		bool bVar4;
		float y;
		Vector3 position;
		Vector3 UVar5;
		Vector3 euler;
		Quaternion UStack_20;

		this.RemoveOldIcons();
		__this_00 = this._minimapPanel;
		if (__this_00 != null) {
			bVar4 = __this_00.activeSelf;
			if (!bVar4) {
				return;
			}
			camera = (InGameCamera)SceneLoader.CurrentCamera;
			if (camera != null) {
				bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
				if (((camera.klass._2).typeHierarchyDepth < bVar1) ||((camera.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera)) ) {
					throw new InvalidCastException();
				}
				pUVar2 = camera.Cache;
				if ((pUVar2 != null) &&(pUVar3 = pUVar2.Transform, pUVar3 != null)) {
					position = pUVar3.position;
					pUVar2 = camera.Cache;
					if ((pUVar2 != null) &&(pUVar3 = pUVar2.Transform, pUVar3 != null)) {
						UStack_20 = pUVar3.rotation;
						UVar5 = Quaternion.Internal_ToEulerRad(ref UStack_20);
						euler.x = UVar5.x * 57.29578;
						euler.y = UVar5.y * 57.29578;
						euler.z = UVar5.z * 57.29578;
						UVar5 = Quaternion.Internal_MakePositive(euler);
						euler.y = UVar5.y;
						y = euler.y;
						this.UpdateTiles(position, euler.y);
						this.UpdateIcons(position, y);
						this.UpdateCompass(camera, position, euler.y);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F84")]
	[Address(RVA = "0x5C39300", Offset = "0x5C38300", VA = "0x5C39300")]
	private void UpdateCompass(InGameCamera camera, Vector3 position, float y)
	{
		// Lifted from source/cpp/UI/MinimapHandler.c (UI.MinimapHandler$$UpdateCompass): 2 lines keep C-only constructs
		Text pUVar1;
		UISettings pSVar2;
		IntSetting pSVar3;
		BaseCharacter pCVar4;
		BaseComponentCache pUVar5;
		Transform __this_00;
		bool bVar6;
		String* ppSVar7;
		String[] values;
		String pSVar8;
		float fVar9;
		Vector3 local_48;
		float local_38;

		local_48 = position;
		if (g_data_07547e57 == false) {
			local_38 = y;
			g_data_07547e57 = true;
			y = local_38;
		}
		fVar9 = (float)(~-(uint)(y < 0.0) & (uint)y | (uint)(y + 360.0) & -(uint)(y < 0.0));
		fVar9 = (float)(~-(uint)(360.0 < fVar9) & (uint)fVar9 | (uint)(fVar9 + -360.0) & -(uint)(360.0 < fVar9));
		pSVar8 = "";
		if ((fVar9 < 22.5) || (202.5 < fVar9)) {
			if ((202.5 <= fVar9) && (fVar9 <= 337.5)) {
				if (fVar9 <= 247.5) {
					ppSVar7 = &"SW";
				}
				else if ((fVar9 < 247.5) || (292.5 < fVar9)) {
					if (fVar9 < 292.5) goto label_05d3953c;
					ppSVar7 = &"NW";
				}
				else {
					ppSVar7 = &"W";
				}
				goto label_05d39539;
			}
			if (fVar9 <= 22.5) {
				pSVar8 = "N";
			}
			if (337.5 <= fVar9) {
				pSVar8 = "N";
			}
		}
		else {
			if (fVar9 <= 67.5) {
				ppSVar7 = &"NE";
			}
			else if ((fVar9 < 67.5) || (112.5 < fVar9)) {
				if ((fVar9 < 112.5) || (157.5 < fVar9)) {
					if (fVar9 < 157.5) goto label_05d3953c;
					ppSVar7 = &"S";
				}
				else {
					ppSVar7 = &"SE";
				}
			}
			else {
				ppSVar7 = &"E";
			}
	label_05d39539: ;
			pSVar8 = *ppSVar7;
		}
	label_05d3953c: ;
		pUVar1 = this._compassLabel;
		if (pUVar1 != null) {
			pUVar1.set_text(pSVar8);
			pSVar2 = SettingsManager.UISettings;
			if ((pSVar2 != null) &&(pSVar3 = pSVar2.Coordinates, pSVar3 != null)) {
				if (pSVar3._value == 1) {
					if (camera != null) {
						pCVar4 = camera._follow;
						bVar6 = ((Object)pCVar4 != null);
						if (bVar6) {
							pCVar4 = camera._follow;
							if (((pCVar4 == null) ||(pUVar5 = pCVar4.Cache, pUVar5 == null)) ||(__this_00 = pUVar5.Transform, __this_00 == null)) goto label_05d3974c;
							local_48 = __this_00.position;
						}
						pUVar1 = this._positionLabel;
						values = (String[])new string[5];
						pSVar8 = local_48.ToString("F0") ;
						if (values != null) {
							if ((int)values.Length != 0) {
								values[0] = pSVar8;
								if ((values.Length & 0xfffffffe) != 0) {
									values[1] = ", ";
									pSVar8 = local_48.y.ToString("F0");
									if (2 < (uint)values.Length) {
										values[2] = pSVar8;
										if ((values.Length & 0xfffffffc) != 0) {
											values[3] = ", ";
											pSVar8 = local_48.z.ToString("F0");
											if (4 < (uint)values.Length) {
												values[4] = pSVar8;
												pSVar8 = String.Concat(values);
												if (pUVar1 != null) {
													pUVar1.set_text(pSVar8);
													return;
												}
												goto label_05d3974c;
											}
										}
									}
								}
							}
							throw new IndexOutOfRangeException();
						}
					}
				}
				else {
					pUVar1 = this._positionLabel;
					if (pUVar1 != null) {
						pUVar1.set_text("");
						return;
					}
				}
			}
		}
	label_05d3974c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F85")]
	[Address(RVA = "0x5C37EC0", Offset = "0x5C36EC0", VA = "0x5C37EC0")]
	private void RemoveOldIcons()
	{
		// Lifted from source/cpp/UI/MinimapHandler.c (UI.MinimapHandler$$RemoveOldIcons): 11 lines keep C-only constructs
		int piVar1;
		int length;
		uint uVar2;
		List<Transform> pSVar3;
		Dictionary<object, object> pSVar4;
		Transform[] pUVar5;
		Transform x;
		object key;
		bool bVar7;
		bool bVar8;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_00;
		Object pUVar9;
		Component __this_01;
		byte[] auStack_80 = new byte[16];
		Transform pUStack_70;
		byte[] auStack_68 = new byte[8];
		Transform pUStack_58;
		System_Collections_Generic_List_Enumerator_T__o SStack_48;

		auStack_68 = (byte[])0x0;
		pUStack_58 = null;
		SStack_48._list = null;
		SStack_48._index = 0;
		SStack_48._version = 0;
		SStack_48._current = null;
		pSVar3 = this._iconsToRemove;
		if (pSVar3 != null) {
			piVar1 = &pSVar3._version;
			*piVar1 = *piVar1 + 1;
			length = pSVar3._size;
			pSVar3._size = 0;
			if (0 < length) {
				Array.Clear((Array)pSVar3._items, 0, length);
			}
			pSVar4 = (Dictionary<object, object>)this._icons;
			if (pSVar4 != null) {
				__this_00 = pSVar4.Keys;
				if (__this_00 != null) {
					auStack_80.GetEnumerator(__this_00);
					pUStack_58 = pUStack_70;
					auStack_68 = (byte[])auStack_80._0_8_;
					auStack_80._0_8_ = null;
					auStack_80._8_8_ = auStack_68;
	label_05d3807a: ;
					do {
						bVar7 = auStack_68.MoveNext();
						x = pUStack_58;
						if (!bVar7) goto label_05d38207;
						pSVar4 = (Dictionary<object, object>)this._characters;
						if (pSVar4 == null) {
							throw new NullReferenceException();
						}
						bVar8 = pSVar4.ContainsKey((object)pUStack_58);
						bVar7 = false;
						if (bVar8) {
							pSVar4 = (Dictionary<object, object>)this._characters;
							if (pSVar4 == null) {
								throw new NullReferenceException();
							}
							pUVar9 = (Object)pSVar4.get_Item((object)x);
							bVar8 = (pUVar9 == null);
							if (!bVar8) {
								if (pUVar9 == null) {
									throw new NullReferenceException();
								}
								if (*(sbyte)&(*(ulong)((sbyte)pUVar9 + 0x78)) == false) goto label_05d3811d;
							}
							bVar7 = true;
						}
	label_05d3811d: ;
						bVar8 = ((Object)x == null);
						if (bVar7 || bVar8) {
							pSVar4 = (Dictionary<object, object>)this._icons;
							if (pSVar4 == null) {
								throw new NullReferenceException();
							}
							__this_01 = (Component)pSVar4.get_Item((object)x);
							pSVar3 = this._iconsToRemove;
							if (pSVar3 != null) {
								piVar1 = &pSVar3._version;
								*piVar1 = *piVar1 + 1;
								pUVar5 = pSVar3._items;
								if (pUVar5 != null) {
									uVar2 = pSVar3._size;
									if (uVar2 < (uint)pUVar5.Length) {
										pSVar3._size = uVar2 + 1;
										pUVar5[(int)uVar2] = x;
									}
									else {
										pSVar3.AddWithResize((object)x);
									}
									if (__this_01 != null) {
										pUVar9 = (Object)__this_01.gameObject;
										Object.Destroy(pUVar9);
										goto label_05d3807a;
									}
								}
							}
							throw new NullReferenceException();
						}
					} while(true);
				}
			}
		}
	label_05d382fa: ;
		throw new NullReferenceException();
	label_05d38207: ;
		auStack_68.Dispose();
		pSVar3 = this._iconsToRemove;
		if (pSVar3 != null) {
			SStack_48 = pSVar3.GetEnumerator();
			auStack_80._0_8_ = null;
			auStack_80._8_8_ = &SStack_48;
			while(true) {
				bVar7 = SStack_48.MoveNext();
				key = SStack_48._current;
				if (!bVar7) {
					SStack_48.Dispose();
					return;
				}
				pSVar4 = (Dictionary<object, object>)this._icons;
				if (pSVar4 == null) break;
				pSVar4.Remove(SStack_48._current);
				pSVar4 = (Dictionary<object, object>)this._characters;
				if (pSVar4 == null) {
					throw new NullReferenceException();
				}
				pSVar4.Remove(key);
			}
			throw new NullReferenceException();
		}
		goto label_05d382fa;
	}

	[Token(Token = "0x6004F86")]
	[Address(RVA = "0x5C38E70", Offset = "0x5C37E70", VA = "0x5C38E70")]
	private void UpdateIcons(Vector3 position, float y)
	{
		// Lifted from source/cpp/UI/MinimapHandler.c (UI.MinimapHandler$$UpdateIcons): 28 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		Dictionary<object, object> pSVar3;
		object __this_00;
		bool bVar4;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_01;
		Transform __this_02;
		GameObject pUVar5;
		uint in_XMM0_Dc;
		uint extraout_XMM0_Dc;
		uint in_XMM0_Dd;
		uint extraout_XMM0_Dd;
		float fVar6;
		Vector3 UVar7;
		System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o local_a8;
		byte[] local_90 = new byte[16];
		Transform local_80;
		byte[] local_78 = new byte[8];
		float fStack_70;
		float fStack_6c;
		float local_68;
		byte[] local_58 = new byte[16];
		byte[] local_48 = new byte[24];

		local_58._8_4_ = in_XMM0_Dc;
		local_58._0_8_ = position._0_8_;
		local_58._12_4_ = in_XMM0_Dd;
		if (Il2CppMethodInitialized_07547e59 == false) {
			Il2CppMethodInitialized_07547e59 = true;
		}
		local_a8._dictionary = null;
		local_a8._index = 0;
		local_a8._version = 0;
		local_a8._currentKey = null;
		pSVar3 = (Dictionary<object, object>)this._icons;
		if ((pSVar3 == null) ||(__this_01 = pSVar3.Keys, __this_01 == null)) {
			throw new NullReferenceException();
		}
		local_90.GetEnumerator(__this_01) ;
		local_a8._currentKey = (object)local_80;
		local_a8._dictionary = (Dictionary<TKey, TValue>)local_90._0_8_;
		local_a8._index = local_90._8_4_;
		local_a8._version = local_90._12_4_;
		local_90._0_8_ = null;
		local_90._8_8_ = &local_a8;
		while(true) {
			while(true) {
				do {
					bVar4 = local_a8.MoveNext();
					__this_00 = local_a8._currentKey;
					if (!bVar4) {
						local_a8.Dispose();
						return;
					}
					pSVar3 = (Dictionary<object, object>)this._icons;
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					__this_02 = pSVar3.get_Item(local_a8._currentKey);
					bVar4 = ((Object)__this_00 != null);
				} while (!bVar4);
				if ((Transform)__this_00 == null) {
					throw new NullReferenceException();
				}
				UVar7 = __this_00.position;
				local_48._8_4_ = extraout_XMM0_Dc;
				local_48._0_8_ = UVar7._0_8_;
				local_48._12_4_ = extraout_XMM0_Dd;
				UVar7 = __this_00.position;
				local_68 = UVar7.z;
				_local_78 = ZEXT416((uint)((float)MinimapCamera.MinimapSize /this._height));
				if (Il2CppMethodInitialized_0753e729 == false) {
					Il2CppMethodInitialized_0753e729 = true;
					uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar2 == 0) {
				}
				local_68 = (local_68 - position.z) * (float)local_78._0_4_;
				fVar6 = (float)local_78._0_4_ * 0.0;
				local_78._4_4_ = (float)local_78._0_4_ * ((float)local_48._0_4_ - (float)local_58._0_4_);
				fStack_70 = (float)local_78._0_4_ * 0.0;
				fStack_6c = (float)local_78._0_4_ * ((float)local_48._4_4_ - (float)local_58._4_4_);
				local_78._0_4_ = fVar6;
				fVar6 = (float)local_78._4_4_ * (float)local_78._4_4_ + local_68 * local_68 + fVar6 * fVar6;
				if (fVar6 < 0.0) {
					fVar6 = sqrtf(fVar6);
				}
				else {
					fVar6 = SQRT(fVar6);
				}
				if ((float)MinimapCamera.MinimapSize * 0.5 < fVar6) break;
				if (__this_02 == null) {
					throw new NullReferenceException();
				}
				pUVar5 = __this_02.gameObject;
				if (pUVar5 == null) {
					throw new NullReferenceException();
				}
				bVar4 = pUVar5.activeSelf;
				if (!bVar4) {
					pUVar5 = __this_02.gameObject ;
					if (pUVar5 == null) {
						throw new NullReferenceException();
					}
					pUVar5.SetActive(true);
				}
				UVar7.y = local_68;
				UVar7.x = (float)local_78._4_4_;
				UVar7.z = (float)local_78._0_4_;
				__this_02.localPosition = UVar7;
				uVar1 = ((Quaternion)typeof(Quaternion).static_fields).w;
				__this_02.rotation = (UnityEngine_Quaternion_o) *(Quaternion)typeof(Quaternion).static_fields;
			}
			if (__this_02 == null) {
				throw new NullReferenceException();
			}
			pUVar5 = __this_02.gameObject;
			if (pUVar5 == null) break;
			bVar4 = pUVar5.activeSelf;
			if (bVar4) {
				pUVar5 = __this_02.gameObject;
				if (pUVar5 == null) {
					throw new NullReferenceException();
				}
				pUVar5.SetActive(false);
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F87")]
	[Address(RVA = "0x5C383D0", Offset = "0x5C373D0", VA = "0x5C383D0")]
	private void UpdateTiles(Vector3 position, float rotation)
	{
		// Lifted from source/cpp/UI/MinimapHandler.c (UI.MinimapHandler$$UpdateTiles): 36 lines keep C-only constructs
		int piVar1;
		float fVar2;
		uint uVar3;
		int width;
		Dictionary<Vector2Int, Texture2D> pSVar4;
		Vector2Int[] pUVar5;
		HashSet<Vector2Int> pSVar6;
		RawImage[] pUVar7;
		Transform pUVar8;
		Queue<Vector2Int> pSVar9;
		MinimapCamera __this_00;
		byte[] auVar11 = new byte[16];
		bool bVar12;
		int iVar13;
		uint uVar14;
		int iVar15;
		List<Vector2Int> __this_01;
		System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o __this_02;
		Texture2D pUVar16;
		Texture value;
		Vector2Int tile;
		uint uVar17;
		Vector2Int UVar18;
		ulong uVar19;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		float fVar20;
		float fVar21;
		float fVar22;
		Vector3 value_00;
		Quaternion value_01;
		byte[] local_d8 = new byte[16];
		Vector2Int local_c8;
		Vector2Int local_c0;
		byte[] local_b8 = new byte[16];
		float local_9c;
		byte[] local_98 = new byte[8];
		Vector2Int local_88;
		byte[] local_78 = new byte[8];
		Vector2Int local_68;
		byte[] local_58 = new byte[16];
		float local_48;

		local_48 = position.z;
		local_58._8_4_ = in_XMM0_Dc;
		local_58._0_8_ = position._0_8_;
		local_58._12_4_ = in_XMM0_Dd;
		fVar22 = position.x;
		local_9c = rotation;
		if (g_data_07547e5a == false) {
			local_b8._8_4_ = in_XMM0_Dc;
			local_b8._0_8_ = position._0_8_;
			local_b8._12_4_ = in_XMM0_Dd;
			g_data_07547e5a = true;
			fVar22 = (float)local_b8._0_4_;
		}
		auVar11 = local_b8;
		local_98 = (byte[])0x0;
		local_88.m_X = 0;
		local_88.m_Y = 0;
		local_78 = (byte[])0x0;
		local_68.m_X = 0;
		local_68.m_Y = 0;
		fVar2 = this._height;
		fVar21 = fVar2 * 0.5;
		if (fVar22 <= 0.0) {
			if (fVar22 < 0.0) {
				fVar22 = fVar22 - fVar21;
			}
		}
		else {
			fVar22 = fVar22 + fVar21;
		}
		if (local_48 <= 0.0) {
			fVar20 = local_48;
			if (local_48 < 0.0) {
				fVar20 = local_48 - fVar21;
			}
		}
		else {
			fVar20 = fVar21 + local_48;
		}
		iVar13 = (int)(fVar20 / fVar2);
		local_b8._0_4_ = (BADTYPE)(fVar22 / fVar2);
		local_b8._4_4_ = 0;
		local_b8._8_8_ = auVar11._8_8_;
		local_c0.m_Y = iVar13;
		local_c0.m_X = local_b8._0_4_;
		if (local_c0 == this._currentTile) {
			if (this._needUpdateTiles != false) goto label_05d38618;
		}
		else {
			this._needUpdateTiles = true;
	label_05d38618: ;
			this._needUpdateTiles = false;
			this._currentTile = local_c0;
			this._currentTileCenter.x = (float)(int)local_b8._0_4_ * fVar2;
			this._currentTileCenter.y = fVar2;
			this._currentTileCenter.z = (float)iVar13 * fVar2;
			__this_01 = new List<Vector2Int>();
			pSVar4 = this._tileTextures;
			if ((pSVar4 == null) ||(__this_02 = pSVar4.Keys , __this_02 == null)) goto label_05d38d84;
			local_d8.GetEnumerator(__this_02);
			local_88 = local_c8;
			local_98 = (byte[])local_d8._0_8_;
			local_d8._0_8_ = null;
			local_d8._8_8_ = local_98;
			if (__this_01 == null) {
				do {
					bVar12 = local_98.MoveNext();
					UVar18 = local_88;
					if (!bVar12) goto label_05d38909;
					if (Il2CppMethodInitialized_07541ba3 == false) {
						Il2CppMethodInitialized_07541ba3 = true;
						uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					if (uVar3 == 0) {
					}
					uVar14 = UVar18.m_X - local_b8._0_4_;
					uVar17 = -uVar14;
					if ((int)uVar17 < 0) {
						uVar17 = uVar14;
					}
					if (2 < uVar17) break;
					if (Il2CppMethodInitialized_07541ba3 == false) {
						Il2CppMethodInitialized_07541ba3 = true;
						uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					else {
						uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
					}
					if (uVar3 == 0) {
					}
					uVar14 = UVar18.m_Y - iVar13;
					uVar17 = -uVar14;
					if ((int)uVar17 < 0) {
						uVar17 = uVar14;
					}
				} while (uVar17 < 3);
	label_05d38d89: ;
				throw new NullReferenceException();
			}
	label_05d3870c: ;
			bVar12 = local_98.MoveNext();
			UVar18 = local_88;
			if (bVar12) {
				if (Il2CppMethodInitialized_07541ba3 == false) {
					Il2CppMethodInitialized_07541ba3 = true;
					uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
				}
				if (uVar3 == 0) {
				}
				uVar14 = UVar18.m_X - local_b8._0_4_;
				uVar17 = -uVar14;
				if ((int)uVar17 < 0) {
					uVar17 = uVar14;
				}
				if (uVar17 < 3) goto code_r0x05d38773;
				goto label_05d387c7;
			}
	label_05d38909: ;
			local_98.Dispose();
			if (__this_01 == null) goto label_05d38d84;
			local_d8.GetEnumerator(__this_01);
			local_68 = local_c8;
			local_78 = (byte[])local_d8._0_8_;
			local_d8._0_8_ = null;
			local_d8._8_8_ = (System_Collections_Generic_List_Enumerator_T__o)local_78;
			while(true) {
				bVar12 = local_78.MoveNext();
				UVar18 = local_68;
				if (!bVar12) break;
				pSVar4 = this._tileTextures;
				if (pSVar4 == null) {
					throw new NullReferenceException();
				}
				pUVar16 = pSVar4.get_Item((Vector2Int)local_68);
				pSVar4 = this._tileTextures;
				if (pSVar4 == null) {
					throw new NullReferenceException();
				}
				pSVar4.Remove((Vector2Int)UVar18);
				Object.Destroy((Object)pUVar16);
				pSVar6 = this._finishedTiles;
				if (pSVar6 == null) {
					throw new NullReferenceException();
				}
				bVar12 = pSVar6.Contains((Vector2Int)UVar18);
				if (bVar12) {
					pSVar6 = this._finishedTiles;
					if (pSVar6 == null) {
						throw new NullReferenceException();
					}
					pSVar6.Remove((Vector2Int)UVar18);
				}
			}
			local_78.Dispose() ;
			pSVar9 = this._createTileQueue;
			if (pSVar9 == null) goto label_05d38d84;
			pSVar9.Clear();
			pSVar6 = this._finishedTiles;
			if (pSVar6 == null) goto label_05d38d84;
			bVar12 = pSVar6.Contains((Vector2Int)local_c0);
			if (!bVar12) {
				pSVar9 = this._createTileQueue;
				if (pSVar9 == null) goto label_05d38d84;
				pSVar9.Enqueue((Vector2Int)local_c0);
			}
			auVar11 = local_b8;
			iVar15 = local_b8._0_4_;
			local_b8._4_4_ = 0;
			local_b8._0_4_ = iVar15 - 1;
			local_b8._8_8_ = auVar11._8_8_;
			uVar19 = 0;
			do {
				pSVar4 = this._tileTextures;
				if (pSVar4 == null) goto label_05d38d84;
				iVar15 = (int)((uVar19 & 0xffffffff) / 3);
				UVar18.m_X = local_b8._0_4_ + iVar15 * -3 + (int)uVar19;
				UVar18.m_Y = (iVar13 + 1) - iVar15;
				bVar12 = pSVar4.ContainsKey((Vector2Int)UVar18);
				if (!bVar12) {
					pSVar4 = this._tileTextures;
					width = MinimapCamera.MinimapSize;
					pUVar16 = new Texture2D(width, width, 3, false);
					if (pSVar4 == null) goto label_05d38d84;
					pSVar4.set_Item((Vector2Int)UVar18, (object)pUVar16);
				}
				pSVar6 = this._finishedTiles;
				if (pSVar6 == null) goto label_05d38d84;
				bVar12 = pSVar6.Contains((Vector2Int)UVar18);
				if ((!bVar12) && (UVar18 != local_c0)) {
					pSVar9 = this._createTileQueue;
					if (pSVar9 == null) goto label_05d38d84;
					pSVar9.Enqueue((Vector2Int)UVar18);
				}
				pSVar4 = this._tileTextures;
				if (pSVar4 == null) goto label_05d38d84;
				value = (Texture)pSVar4.get_Item((Vector2Int)UVar18);
				pUVar7 = this._images;
				if (pUVar7 == null) goto label_05d38d84;
				if ((uint)pUVar7.Length <= uVar19) {
					throw new IndexOutOfRangeException();
				}
				if (pUVar7[uVar19] == null) goto label_05d38d84;
				(pUVar7[uVar19]).texture = value;
				uVar19 = uVar19 + 1;
			} while (uVar19 != 9);
		}
		pUVar8 = this._tileTransform;
		if (pUVar8 != null) {
			fVar22 = (float)MinimapCamera.MinimapSize / this._height;
			value_00.x = fVar22 * (this._currentTileCenter.x - (float)local_58._0_4_);
			value_00.y = fVar22 * (this._currentTileCenter.z - local_48);
			value_00.z = 0.0;
			pUVar8.localPosition = value_00;
			pUVar8 = this._maskTransform;
			local_d8._0_8_ = null;
			local_d8._8_4_ = local_9c * 0.017453292;
			value_01 = Quaternion.Internal_FromEulerRad((Vector3)local_d8);
			if (pUVar8 != null) {
				pUVar8.localRotation = value_01;
				pSVar9 = this._createTileQueue;
				if (pSVar9 != null) {
					if (0 < pSVar9._size) {
						__this_00 = SceneLoader.MinimapCamera;
						if (__this_00 == null) goto label_05d38d84;
						bVar12 = __this_00.Ready();
						if (bVar12) {
							pSVar9 = this._createTileQueue;
							if (pSVar9 == null) goto label_05d38d84;
							tile = pSVar9.Dequeue();
							this.CreateTile(tile);
						}
					}
					return;
				}
			}
		}
	label_05d38d84: ;
		throw new NullReferenceException();
	code_r0x05d38773: ;
		if (Il2CppMethodInitialized_07541ba3 == false) {
			Il2CppMethodInitialized_07541ba3 = true;
			uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar3 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		uVar14 = UVar18.m_Y - iVar13;
		uVar17 = -uVar14;
		if ((int)uVar17 < 0) {
			uVar17 = uVar14;
		}
		if (2 < uVar17) {
	label_05d387c7: ;
			piVar1 = &__this_01._version;
			*piVar1 = *piVar1 + 1;
			pUVar5 = __this_01._items;
			if (pUVar5 == null) goto label_05d38d89;
			uVar17 = __this_01._size;
			if (uVar17 < (uint)pUVar5.Length) {
				__this_01._size = uVar17 + 1;
				pUVar5[(int)uVar17] = UVar18;
			}
			else {
				__this_01.AddWithResize((Vector2Int)UVar18);
			}
		}
		goto label_05d3870c;
	}

	[Token(Token = "0x6004F88")]
	[Address(RVA = "0x5C39760", Offset = "0x5C38760", VA = "0x5C39760")]
	private Vector2Int GetCurrentTile(Vector3 position)
	{
		// Lifted from source/cpp/UI/MinimapHandler.c (UI.MinimapHandler$$GetCurrentTile): clean
		float fVar1;
		Vector2Int UVar2;
		float fVar3;
		float fVar4;
		float fVar5;

		fVar3 = position.z;
		fVar5 = position.x;
		fVar1 = this._height;
		fVar4 = fVar1 * 0.5;
		if (fVar5 <= 0.0) {
			if (fVar5 < 0.0) {
				fVar5 = fVar5 - fVar4;
			}
		}
		else {
			fVar5 = fVar5 + fVar4;
		}
		if (fVar3 <= 0.0) {
			if (fVar3 < 0.0) {
				fVar3 = fVar3 - fVar4;
			}
		}
		else {
			fVar3 = fVar3 + fVar4;
		}
		UVar2.m_X = (int)(fVar5 / fVar1);
		UVar2.m_Y = (int)(fVar3 / fVar1);
		return (Vector2Int)UVar2;
	}

	[Token(Token = "0x6004F89")]
	[Address(RVA = "0x5C397D0", Offset = "0x5C387D0", VA = "0x5C397D0")]
	private Vector3 GetTilePosition(Vector2Int tile)
	{
		// Lifted from source/cpp/UI/MinimapHandler.c (UI.MinimapHandler$$GetTilePosition): clean
		float fVar1;
		Vector3 UVar2;

		fVar1 = this._height;
		UVar2.z = (float)tile.m_Y * fVar1;
		UVar2.x = (float)tile.m_X * fVar1;
		UVar2.y = fVar1;
		return (Vector3)UVar2;
	}

	[Token(Token = "0x6004F8A")]
	[Address(RVA = "0x5C397F0", Offset = "0x5C387F0", VA = "0x5C397F0")]
	private void CreateTile(Vector2Int tile)
	{
		// Lifted from source/cpp/UI/MinimapHandler.c (UI.MinimapHandler$$CreateTile): clean
		float height;
		Dictionary<Vector2Int, Texture2D> pSVar1;
		MinimapCamera __this_00;
		HashSet<Vector2Int> __this_01;
		bool bVar2;
		Texture2D texture;
		Vector3 position;

		pSVar1 = this._tileTextures;
		if (pSVar1 != null) {
			bVar2 = pSVar1.ContainsKey(tile);
			if (!bVar2) {
				return;
			}
			pSVar1 = this._tileTextures;
			if (pSVar1 != null) {
				texture = pSVar1.get_Item(tile);
				bVar2 = ((Object)texture == null);
				if (bVar2) {
					return;
				}
				__this_00 = SceneLoader.MinimapCamera;
				if (__this_00 != null) {
					height = this._height;
					position.x = (float)tile.m_X * height;
					position.z = (float)tile.m_Y * height;
					position.y = height;
					__this_00.TakeSnapshot(position, height, texture, true, false);
					__this_01 = this._finishedTiles;
					if (__this_01 != null) {
						__this_01.Add(tile);
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004F8B")]
	[Address(RVA = "0x5C39930", Offset = "0x5C38930", VA = "0x5C39930")]
	public MinimapHandler()
	{
		// Lifted from source/cpp/UI/MinimapHandler.c (UI.MinimapHandler$$.ctor): 3 lines keep C-only constructs
		RawImage[] pUVar1;
		Dictionary<Vector2Int, Texture2D> __this_00;
		Queue<Vector2Int> __this_01;
		HashSet<Vector2Int> __this_02;
		Dictionary<Transform, Transform> __this_03;
		Dictionary<Transform, BaseCharacter> __this_04;
		List<Transform> __this_05;

		if (Il2CppMethodInitialized_07547e5c == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Vector2Int_ctor) ;
			Il2CppMethodInitialized_07547e5c = true;
		}
		pUVar1 = (RawImage[])new RawImage[9];
		this._images = pUVar1;
		__this_00 = new Dictionary<Vector2Int, Texture2D>() ;
		this._tileTextures = __this_00;
		__this_01 = new Queue<Vector2Int>();
		this._createTileQueue = __this_01;
		__this_02 = il2cpp_codegen_object_new(typeof(HashSet<Vector2Int>)) ;
		__this_02 = new HashSet<Vector2Int>();
		this._finishedTiles = __this_02;
		__this_03 = new Dictionary<Transform, Transform>();
		this._icons = __this_03;
		__this_04 = il2cpp_codegen_object_new(typeof(Dictionary<Transform, BaseCharacter>));
		__this_04 = new Dictionary<object, object>();
		this._characters = __this_04;
		__this_05 = new List<Transform>();
		this._iconsToRemove = __this_05;
		this._needUpdateTiles = true;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MinimapHandler.c.

	// UI.MinimapHandler$$.cctor: clean
	static MinimapHandler()
	{
		UI_MinimapHandler_StaticFields pUVar1;
		MinimapHandler pUVar2;

		pUVar2 = typeof(MinimapHandler);
		pUVar1 = typeof(MinimapHandler).static_fields;
		(pUVar1._mineColor).r = 0.455;
		(pUVar1._mineColor).g = 0.608;
		(pUVar1._mineColor).b = 0.816;
		(pUVar1._mineColor).a = 1.0;
		pUVar1 = pUVar2.static_fields;
		(pUVar1._titanColor).r = 1.0;
		(pUVar1._titanColor).g = 1.0;
		(pUVar1._titanColor).b = 0.44;
		(pUVar1._titanColor).a = 1.0;
		pUVar1 = pUVar2.static_fields;
		(pUVar1._humanColor).r = 0.58;
		(pUVar1._humanColor).g = 1.0;
		(pUVar1._humanColor).b = 0.5;
		(pUVar1._humanColor).a = 1.0;
		pUVar1 = pUVar2.static_fields;
		(pUVar1._teamBlueColor).r = 0.0;
		(pUVar1._teamBlueColor).g = 0.67;
		(pUVar1._teamBlueColor).b = 1.0;
		(pUVar1._teamBlueColor).a = 1.0;
		pUVar1 = pUVar2.static_fields;
		(pUVar1._teamRedColor).r = 0.87;
		(pUVar1._teamRedColor).g = 0.25;
		(pUVar1._teamRedColor).b = 0.25;
		(pUVar1._teamRedColor).a = 1.0;
		return;
	}
}
