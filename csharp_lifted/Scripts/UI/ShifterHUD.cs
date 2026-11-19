// ==================== AoTTG2 cross-reference ====================
// Type: UI.ShifterHUD
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/ShifterHUD.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Characters;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x200086D")]
internal class ShifterHUD : MonoBehaviour
{
	[Token(Token = "0x4002AA9")]
	private const int Columns = 4;

	[Token(Token = "0x4002AAA")]
	private const int Rows = 7;

	[Token(Token = "0x4002AAB")]
	private const int RestFrame = 21;

	[Token(Token = "0x4002AAC")]
	private const float Width = 1024f;

	[Token(Token = "0x4002AAD")]
	private const float FramePixelWidth = 480f;

	[Token(Token = "0x4002AAE")]
	private const float BoxPixelSize = 64f;

	[Token(Token = "0x4002AAF")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Color BackdropColor;

	[Token(Token = "0x4002AB0")]
	[FieldOffset(Offset = "0x10")]
	private static readonly string[] SpecialElements;

	[Token(Token = "0x4002AB1")]
	[FieldOffset(Offset = "0x18")]
	private static readonly float[] FrameDurations;

	[Token(Token = "0x4002AB2")]
	[FieldOffset(Offset = "0x20")]
	private RawImage _image;

	[Token(Token = "0x4002AB3")]
	[FieldOffset(Offset = "0x28")]
	private BaseShifter _shifter;

	[Token(Token = "0x4002AB4")]
	[FieldOffset(Offset = "0x30")]
	private readonly List<Image> _timers;

	[Token(Token = "0x4002AB5")]
	[FieldOffset(Offset = "0x38")]
	private Sprite _icon;

	[Token(Token = "0x4002AB6")]
	[FieldOffset(Offset = "0x40")]
	private Sprite _fill;

	[Token(Token = "0x4002AB7")]
	[FieldOffset(Offset = "0x48")]
	private int _frame;

	[Token(Token = "0x4002AB8")]
	[FieldOffset(Offset = "0x4C")]
	private float _frameTime;

	[Token(Token = "0x6005062")]
	[Address(RVA = "0x5C4E7B0", Offset = "0x5C4D7B0", VA = "0x5C4E7B0")]
	public static GameObject Create(Transform parent, BaseShifter shifter)
	{
		// Lifted from source/cpp/UI/ShifterHUD.c (UI.ShifterHUD$$Create): 3 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		String path;
		Il2CppType handle;
		int iVar3;
		int iVar4;
		Texture value;
		Type[] components;
		Type obj;
		object pIVar5;
		GameObject __this;
		Transform __this_00;
		RawImage __this_01;
		RectTransform __this_02;
		ShifterHUD __this_03;
		float fVar6;
		Vector2 value_00;
		Vector2 offset;

		path = ResourcePaths.UI;
		value = (Texture)ResourceManager.LoadAsset(path, "Sprites/HUD/ShifterHUDSpriteSheet", true, false);
		if ((value != null) &&(value.klass != (Texture)typeof(Texture2D))) {
			throw new InvalidCastException();
		}
		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components != null) {
			if (obj != null) {
				pIVar5 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
				if (pIVar5 == null) {
					pIVar5 = new ArrayTypeMismatchException();
					throw pIVar5;
				}
			}
			if ((int)components.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			components[0] = obj;
			__this = new GameObject("ShifterHUD", components);
			if (__this != null) {
				__this_00 = __this.transform;
				if (__this_00 != null) {
					__this_00.SetParent(parent, false);
					__this_01 = __this.AddComponent<RawImage>();
					if (__this_01 != null) {
						__this_01.texture = value;
						__this_01.set_raycastTarget(false);
						__this_02 = (RectTransform)__this.transform;
						if (value != null) {
							iVar3 = value.get_height();
							iVar4 = value.get_width();
							if (__this_02 != null) {
								if (__this_02.klass != typeof(RectTransform)) {
									throw new InvalidCastException();
								}
								value_00.y = ((float)iVar3 * 1024.0 * 4.0) / (float)(iVar4 * 7);
								value_00.x = 1024.0;
								__this_02.sizeDelta = value_00;
								__this_03 = __this.AddComponent<ShifterHUD>();
								if (__this_03 != null) {
									__this_03._image = __this_01;
									__this_03._shifter = shifter;
									if (shifter != null) {
										fVar6 = shifter.LiveTimeRatio;
										if (0.0 <= fVar6) {
											__this_03.CreateTimer(shifter._SpecialIcon_k__BackingField);
										}
										__this.AddComponent<HUDScaler>();
										uVar1 = (Vector3.upVector).x;
										uVar2 = (Vector3.upVector).y;
										offset.x = (float)uVar1 * 10.0;
										offset.y = (float)uVar2 * 10.0;
										ElementFactory.SetAnchor(__this, 7, 7, offset);
										return __this;
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

	[Token(Token = "0x6005063")]
	[Address(RVA = "0x5C4EBA0", Offset = "0x5C4DBA0", VA = "0x5C4EBA0")]
	private void CreateTimer(string iconName)
	{
		// Lifted from source/cpp/UI/ShifterHUD.c (UI.ShifterHUD$$CreateTimer): 25 lines keep C-only constructs
		Sprite* targetAddress;
		Sprite* targetAddress_00;
		int piVar1;
		String pSVar2;
		String[] pSVar3;
		List<Image> __this_00;
		Image[] pUVar4;
		byte[] auVar5 = new byte[16];
		byte[] auVar6 = new byte[16];
		Il2CppType handle;
		bool bVar8;
		int iVar9;
		int iVar10;
		uint uVar11;
		String name;
		Texture2D pUVar12;
		Texture2D pUVar13;
		Object pUVar14;
		Sprite pUVar15;
		Type[] components;
		Type obj;
		object pIVar16;
		GameObject pUVar17;
		Transform pUVar18;
		Transform parent;
		RectTransform pUVar19;
		Image pUVar20;
		Sprite* ppUVar21;
		Object x;
		Texture2D texture;
		uint uVar22;

		pSVar2 = ResourcePaths.UI;
		name = String.Concat("Icons/Specials/", iconName);
		pUVar12 = (Texture2D)ResourceManager.LoadAsset(pSVar2, name, true, false);
		texture = null;
		if ((pUVar12 != null) &&(texture = null, pUVar12.klass == typeof(Texture2D))) {
			texture = pUVar12;
		}
		pUVar13 = (Texture2D)ResourceManager.LoadAsset(ResourcePaths.UI, "Sprites/HUD/ShifterHUDSpecialFill", true, false);
		pUVar12 = null;
		if ((pUVar13 != null) &&(pUVar12 = null, pUVar13.klass == typeof(Texture2D))) {
			pUVar12 = pUVar13;
		}
		pUVar14 = ResourceManager.LoadAsset(ResourcePaths.UI, "Prefabs/InGame/HUDBottomBlade", true, false);
		x = null;
		if ((pUVar14 != null) &&(x = null, pUVar14.klass == (Object)typeof(GameObject))) {
			x = pUVar14;
		}
		bVar8 = ((Object)texture == null);
		if (!bVar8) {
			bVar8 = ((Object)pUVar12 == null);
			if (!bVar8) {
				bVar8 = (x == null);
				if (!bVar8) {
					if (texture != null) {
						iVar9 = texture.get_width();
						iVar10 = texture.get_height();
						auVar5._4_4_ = (float)iVar10;
						auVar5._0_4_ = (float)iVar9;
						auVar5._8_8_ = 0;
						pUVar15 = Sprite.Create(texture, (Rect)(auVar5 << 0x40), (Vector2)0x3f0000003f000000);
						targetAddress = &this._icon;
						this._icon = pUVar15;
						if (pUVar12 != null) {
							iVar9 = pUVar12.get_width();
							iVar10 = pUVar12.get_height();
							auVar6._4_4_ = (float)iVar10;
							auVar6._0_4_ = (float)iVar9;
							auVar6._8_8_ = 0;
							pUVar15 = Sprite.Create(pUVar12, (Rect)(auVar6 << 0x40), (Vector2)0x3f0000003f000000);
							targetAddress_00 = &this._fill;
							this._fill = pUVar15;
							components = (Type[])new Type[1];
							handle = TypeRef_UnityEngine_RectTransform;
							obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
							if (components != null) {
								if ((obj != null) &&(pIVar16 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class), pIVar16 == null)) {
									pIVar16 = new ArrayTypeMismatchException();
									throw pIVar16;
								}
								if ((int)components.Length == 0) {
	label_05d4f336: ;
									throw new IndexOutOfRangeException();
								}
								components[0] = obj;
								pUVar17 = new GameObject("SpecialBackdrop", components);
								if (pUVar17 != null) {
									pUVar18 = pUVar17.transform;
									parent = this.transform;
									if (pUVar18 != null) {
										pUVar18.SetParent(parent, false);
										pUVar19 = (RectTransform)pUVar17.transform;
										if (pUVar19 != null) {
											if (pUVar19.klass != typeof(RectTransform)) {
												throw new InvalidCastException();
											}
											pUVar19.sizeDelta = (Vector2)0x4308888943088889;
											pUVar20 = pUVar17.AddComponent<Image>();
											if (pUVar20 != null) {
												pUVar20.sprite = *targetAddress_00;
												pUVar20.set_color((Color)(ShifterHUD.BackdropColor));
												pUVar20.set_raycastTarget(false);
												pSVar3 = ShifterHUD.SpecialElements;
												if (pSVar3 != null) {
													uVar11 = (uint)pSVar3.Length;
													if (x != null) {
														if ((int)uVar11 < 1) {
															return;
														}
														uVar22 = 0;
														while (uVar22 < uVar11) {
															pSVar2 = pSVar3[(int)uVar22];
															pUVar18 = x.transform;
															if ((pUVar18 == null) ||(pUVar18 = pUVar18.Find(pSVar2), pUVar18 == null)) goto label_05d4f331;
															pUVar17 = pUVar18.gameObject;
															pUVar18 = this.transform;
															pUVar17 = Object.Instantiate<GameObject>((object)pUVar17, pUVar18, false) ;
															if ((pUVar17 == null) ||(pUVar19 = (RectTransform)pUVar17.transform, pUVar19 == null)) goto label_05d4f331;
															if (pUVar19.klass != typeof(RectTransform)) {
																throw new InvalidCastException();
															}
															pUVar19.pivot = (Vector2)0x3f0000003f000000;
															pUVar19.anchorMax = (Vector2)0x3f0000003f000000;
															pUVar19.anchorMin = (Vector2)0x3f0000003f000000;
															pUVar19.anchoredPosition = (Vector2)(Vector2.zeroVector). fields;
															pUVar19.sizeDelta = (Vector2)0x4308888943088889;
															pUVar20 = pUVar17.GetComponent<Image>() ;
															if ((pUVar20 == null) ||(pUVar20.set_raycastTarget(false), pSVar2 == null)) goto label_05d4f331;
															bVar8 = pSVar2.StartsWith("SpecialIcon");
															ppUVar21 = targetAddress_00;
															if (bVar8) {
																ppUVar21 = targetAddress;
															}
															pUVar20.sprite = *ppUVar21;
															if (pUVar20.m_Type == 3) {
																__this_00 = this._timers;
																if (__this_00 == null) goto label_05d4f331;
																piVar1 = &__this_00._version;
																*piVar1 = *piVar1 + 1;
																pUVar4 = __this_00._items;
																if (pUVar4 == null) goto label_05d4f331;
																uVar11 = __this_00._size;
																if (uVar11 < (uint)pUVar4.Length) {
																	__this_00._size = uVar11 + 1;
																	pUVar4[(int)uVar11] = pUVar20;
																}
																else {
																	__this_00.AddWithResize((object)pUVar20);
																}
															}
															uVar22 = uVar22 + 1;
															uVar11 = (uint)pSVar3.Length;
															if ((int)uVar11 <= (int)uVar22) {
																return;
															}
														}
														goto label_05d4f336;
													}
													if ((int)uVar11 < 1) {
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
	label_05d4f331: ;
					throw new NullReferenceException();
				}
			}
		}
		return;
	}

	[Token(Token = "0x6005064")]
	[Address(RVA = "0x5C4F360", Offset = "0x5C4E360", VA = "0x5C4F360")]
	private static Sprite CreateSprite(Texture2D texture)
	{
		// Lifted from source/cpp/UI/ShifterHUD.c (UI.ShifterHUD$$CreateSprite): 5 lines keep C-only constructs
		byte[] auVar1 = new byte[16];
		int iVar2;
		int iVar3;
		Sprite pUVar4;

		if (texture == null) {
			throw new NullReferenceException();
		}
		iVar2 = texture.get_width();
		iVar3 = texture.get_height();
		auVar1._4_4_ = (float)iVar3;
		auVar1._0_4_ = (float)iVar2;
		auVar1._8_8_ = 0;
		pUVar4 = Sprite.Create(texture, (Rect)(auVar1 << 0x40), (Vector2)0x3f0000003f000000);
		return pUVar4;
	}

	[Token(Token = "0x6005065")]
	[Address(RVA = "0x5C4F3C0", Offset = "0x5C4E3C0", VA = "0x5C4F3C0")]
	private void Start()
	{
		// Lifted from source/cpp/UI/ShifterHUD.c (UI.ShifterHUD$$Start): clean
		RawImage __this_00;
		Rect value;

		__this_00 = this._image;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		value.m_Width = 0.25;
		value.m_Height = 0.14285715;
		value.m_XMin = 0.0;
		value.m_YMin = 0.85714287;
		__this_00.uvRect = value;
		return;
	}

	[Token(Token = "0x6005066")]
	[Address(RVA = "0x5C4F450", Offset = "0x5C4E450", VA = "0x5C4F450")]
	private void Update()
	{
		// Lifted from source/cpp/UI/ShifterHUD.c (UI.ShifterHUD$$Update): 10 lines keep C-only constructs
		BaseShifter pCVar1;
		List<Image> __this_00;
		RawImage __this_01;
		Image __this_02;
		bool bVar2;
		uint uVar3;
		uint uVar4;
		Single[] pSVar5;
		Il2CppClass klass;
		float fVar6;
		float fVar7;
		Rect value;
		byte[] auStack_58 = new byte[8];
		Image pUStack_48;
		byte[] auStack_38 = new byte[16];
		Image pUStack_28;

		auStack_58 = (byte[])0x0;
		pUStack_48 = null;
		pCVar1 = this._shifter;
		bVar2 = ((Object)pCVar1 != null);
		if (bVar2) {
			__this_00 = this._timers;
			if (__this_00 == null) goto label_05d4f706;
			auStack_38.GetEnumerator((List<object>)__this_00);
			pUStack_48 = pUStack_28;
			auStack_58 = (byte[])auStack_38._0_8_;
			auStack_38._0_8_ = null;
			auStack_38._8_8_ = (System_Collections_Generic_List_Enumerator_object__o)auStack_58;
			while(true) {
				bVar2 = auStack_58.MoveNext();
				__this_02 = pUStack_48;
				if (!bVar2) break;
				pCVar1 = this._shifter;
				if (pCVar1 == null) {
					throw new NullReferenceException();
				}
				fVar6 = pCVar1.LiveTimeRatio;
				if (__this_02 == null) {
					throw new NullReferenceException();
				}
				__this_02.fillAmount = fVar6;
			}
			auStack_58.Dispose();
		}
		if (this._frame < 0x15) {
			fVar6 = this._frameTime;
			fVar7 = Time.deltaTime;
			fVar7 = fVar7 + fVar6;
			this._frameTime = fVar7;
			uVar3 = this._frame;
			if ((int)uVar3 < 0x15) {
				klass = typeof(ShifterHUD);
				do {
					if ((klass._2).cctor_finished_or_no_cctor == 0) {
						klass = typeof(ShifterHUD);
					}
					pSVar5 = *(Single[]*)((long)klass.static_fields + 0x18);
					if (pSVar5 == null) goto label_05d4f706;
					uVar3 = this._frame;
					if ((uint)pSVar5.Length <= uVar3) {
	label_05d4f701: ;
						throw new IndexOutOfRangeException();
					}
					if (fVar7 < pSVar5[(int)uVar3]) break;
					fVar7 = this._frameTime;
					if ((klass._2).cctor_finished_or_no_cctor == 0) {
						pSVar5 = ShifterHUD.FrameDurations;
						if (pSVar5 == null) goto label_05d4f706;
						uVar3 = this._frame;
						klass = typeof(ShifterHUD);
					}
					if ((uint)pSVar5.Length <= uVar3) goto label_05d4f701;
					fVar7 = fVar7 - pSVar5[(int)uVar3];
					this._frameTime = fVar7;
					uVar3 = uVar3 + 1;
					this._frame = uVar3;
				} while ((int)uVar3 < 0x15);
			}
			__this_01 = this._image;
			if (__this_01 == null) {
	label_05d4f706: ;
				throw new NullReferenceException();
			}
			uVar4 = uVar3 + 3;
			if (-1 < (int)uVar3) {
				uVar4 = uVar3;
			}
			value.m_XMin = (float)((int)uVar3 % 4) * 0.25;
			value.m_YMin = (float)(((int)uVar4 >> 2) + 1) / -7.0 + 1.0;
			value.m_Width = 0.25;
			value.m_Height = 0.14285715;
			__this_01.uvRect = value;
		}
		return;
	}

	[Token(Token = "0x6005067")]
	[Address(RVA = "0x5C4F3F0", Offset = "0x5C4E3F0", VA = "0x5C4F3F0")]
	private void ShowFrame(int frame)
	{
		// Lifted from source/cpp/UI/ShifterHUD.c (UI.ShifterHUD$$ShowFrame): clean
		RawImage __this_00;
		int iVar1;
		Rect value;

		__this_00 = this._image;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		iVar1 = frame + 3;
		if (-1 < frame) {
			iVar1 = frame;
		}
		value.m_XMin = (float)(frame % 4) * 0.25;
		value.m_YMin = (float)((iVar1 >> 2) + 1) / -7.0 + 1.0;
		value.m_Width = 0.25;
		value.m_Height = 0.14285715;
		__this_00.uvRect = value;
		return;
	}

	[Token(Token = "0x6005068")]
	[Address(RVA = "0x5C4F770", Offset = "0x5C4E770", VA = "0x5C4F770")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/UI/ShifterHUD.c (UI.ShifterHUD$$OnDestroy): clean
		Object pUVar1;
		bool bVar2;

		pUVar1 = (Object)this._icon;
		bVar2 = (pUVar1 != null);
		if (bVar2) {
			pUVar1 = (Object)this._icon;
			Object.Destroy(pUVar1);
		}
		pUVar1 = (Object)this._fill;
		bVar2 = (pUVar1 != null);
		if (bVar2) {
			pUVar1 = (Object)this._fill;
			Object.Destroy(pUVar1);
			return;
		}
		return;
	}

	[Token(Token = "0x6005069")]
	[Address(RVA = "0x5C4F830", Offset = "0x5C4E830", VA = "0x5C4F830")]
	public ShifterHUD()
	{
		// Lifted from source/cpp/UI/ShifterHUD.c (UI.ShifterHUD$$.ctor): clean
		List<Image> __this_00;

		__this_00 = new List<Image>();
		this._timers = __this_00;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/ShifterHUD.c.

	// UI.ShifterHUD$$.cctor: clean
	static ShifterHUD()
	{
		UI_ShifterHUD_StaticFields pUVar1;
		String[] pSVar2;
		Single[] array;

		pUVar1 = typeof(ShifterHUD).static_fields;
		(pUVar1.BackdropColor).r = 0.0;
		(pUVar1.BackdropColor).g = 0.0;
		(pUVar1.BackdropColor).b = 0.0;
		(pUVar1.BackdropColor).a = 0.5;
		pSVar2 = (String[])new string[3];
		if (pSVar2 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar2.Length != 0) {
			pSVar2[0] = "SpecialFill";
			if ((pSVar2.Length & 0xfffffffe) != 0) {
				pSVar2[1] = "SpecialIconFill";
				if (2 < (uint)pSVar2.Length) {
					pSVar2[2] = "SpecialIconBackground";
					pUVar1 = typeof(ShifterHUD).static_fields;
					pUVar1.SpecialElements = pSVar2;
					array = (Single[])new float[0x16];
					RuntimeHelpers.InitializeArray((Array)array, FieldRva_PrivateImplementationDetails_E68591ED831414CCD8BE1313E02B27670D892A712B839224ED86D59EA2CBA42E);
					pUVar1 = typeof(ShifterHUD).static_fields;
					pUVar1.FrameDurations = array;
					return;
				}
			}
		}
		throw new IndexOutOfRangeException();
	}
}
