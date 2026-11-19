// ==================== AoTTG2 cross-reference ====================
// Type: PostProcessingManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/PostProcessingManager.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/PostProcessingManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using ApplicationManagers;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.Rendering;
using UnityEngine.Rendering.Universal;

[Token(Token = "0x2000006")]
public class PostProcessingManager : MonoBehaviour
{
	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x0")]
	public static VolumeProfile DefaultVolumeProfile;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x8")]
	private static PostProcessingManager _instance;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x20")]
	private bool _customVolumes;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x28")]
	private Volume defaultVolume;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x30")]
	private Volume waterVolume;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x38")]
	private Bloom _bloom;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x40")]
	private ChromaticAberration _chromaticAberration;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x48")]
	private DepthOfField _depthOfField;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x50")]
	private MotionBlur _motionBlur;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x58")]
	private ColorAdjustments _colorAdjustments;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x60")]
	public bool InsideWater;

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x5743360", Offset = "0x5742360", VA = "0x5743360")]
	public void Awake()
	{
		// Lifted from source/cpp/PostProcessingManager.c (PostProcessingManager$$Awake): 11 lines keep C-only constructs
		Volume* targetAddress;
		bool bVar2;
		Transform pUVar3;
		Volume pUVar4;
		VolumeProfile pUVar5;
		OnLoadScene __this_00;

		PostProcessingManager._instance = this;
		pUVar3 = this.transform;
		if (pUVar3 != null) {
			pUVar3 = pUVar3.Find("DefaultVolume");
			if (pUVar3 != null) {
				pUVar4 = pUVar3.GetComponent<Volume>();
				targetAddress = &this.defaultVolume;
				this.defaultVolume = pUVar4;
				pUVar3 = this.transform;
				if (pUVar3 != null) {
					pUVar3 = pUVar3.Find("WaterVolume");
					if (pUVar3 != null) {
						pUVar4 = pUVar3.GetComponent<Volume>();
						this.waterVolume = pUVar4;
						pUVar5 = PostProcessingManager.DefaultVolumeProfile;
						bVar2 = ((Object)pUVar5 == null);
						if (bVar2) {
							if (*targetAddress == null) goto label_058436bb;
							pUVar5 = (*targetAddress).profile;
							pUVar5 = Object.Instantiate<VolumeProfile>((object)pUVar5) ;
							PostProcessingManager.DefaultVolumeProfile = pUVar5;
						}
						pUVar4 = *targetAddress;
						if (pUVar4 != null) {
							pUVar4.m_InternalProfile = PostProcessingManager.DefaultVolumeProfile;
							pUVar5 = PostProcessingManager.DefaultVolumeProfile;
							if (pUVar5 != null) {
								pUVar5.TryGet<Bloom>((object*)&this._bloom);
								pUVar5 = PostProcessingManager.DefaultVolumeProfile;
								if (pUVar5 != null) {
									pUVar5.TryGet<ChromaticAberration>((object*)&this._chromaticAberration);
									pUVar5 = PostProcessingManager.DefaultVolumeProfile;
									if (pUVar5 != null) {
										pUVar5.TryGet<DepthOfField>((object*)&this._depthOfField);
										pUVar5 = PostProcessingManager.DefaultVolumeProfile;
										if (pUVar5 != null) {
											pUVar5.TryGet<MotionBlur>((object*)&this._motionBlur);
											pUVar5 = PostProcessingManager.DefaultVolumeProfile;
											if (pUVar5 != null) {
												pUVar5.TryGet<ColorAdjustments>((object*)&this._colorAdjustments);
												pUVar4 = this.waterVolume;
												if (pUVar4 != null) {
													pUVar4.enabled = false;
													this.Apply();
													__this_00 = new OnLoadScene((object)this, (intptr_t)MethodInfo_PostProcessingManager_OnLoadScene);
													EventManager.add_OnLoadScene(__this_00);
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
	label_058436bb: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x5743810", Offset = "0x5742810", VA = "0x5743810")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/PostProcessingManager.c (PostProcessingManager$$OnDestroy): 1 lines keep C-only constructs
		OnLoadScene __this_00;

		__this_00 = new OnLoadScene((object)this, (intptr_t)MethodInfo_PostProcessingManager_OnLoadScene);
		EventManager.remove_OnLoadScene(__this_00);
		return;
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x5743880", Offset = "0x5742880", VA = "0x5743880")]
	private void OnLoadScene(SceneName sceneName)
	{
		// Lifted from source/cpp/PostProcessingManager.c (PostProcessingManager$$OnLoadScene): clean


		this._customVolumes = false;
		this.ApplyCamera();
		return;
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x57439A0", Offset = "0x57429A0", VA = "0x57439A0")]
	public static void EnableCustomVolumes()
	{
		// Lifted from source/cpp/PostProcessingManager.c (PostProcessingManager$$EnableCustomVolumes): clean
		PostProcessingManager pPVar1;
		bool bVar2;

		pPVar1 = PostProcessingManager._instance;
		bVar2 = ((Object)pPVar1 == null);
		if (!bVar2) {
			pPVar1 = PostProcessingManager._instance;
			if (pPVar1 == null) {
				throw new NullReferenceException();
			}
			if (pPVar1._customVolumes == false) {
				pPVar1._customVolumes = true;
				pPVar1.ApplyCamera();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x5743A40", Offset = "0x5742A40", VA = "0x5743A40")]
	protected void FixedUpdate()
	{
		// Lifted from source/cpp/PostProcessingManager.c (PostProcessingManager$$FixedUpdate): 1 lines keep C-only constructs
		GraphicsSettings pSVar1;
		IntSetting pSVar2;
		bool bVar3;
		MethodInfo method_00;
		Volume pUVar4;

		if (this.InsideWater == false) {
	label_05843ac2: ;
			pUVar4 = this.waterVolume;
			if (pUVar4 == null) {
	label_05843af6: ;
				throw new NullReferenceException();
			}
			bVar3 = pUVar4.enabled;
			if (!bVar3) goto label_05843af0;
			pUVar4 = this.waterVolume;
			if (pUVar4 == null) goto label_05843af6;
			method_00 = null;
		}
		else {
			pSVar1 = SettingsManager.GraphicsSettings;
			if ((pSVar1 == null) ||(pSVar2 = pSVar1.WaterFX, pSVar2 == null)) goto label_05843af6;
			if (pSVar2._value == 0) goto label_05843ac2;
			pUVar4 = this.waterVolume;
			if (pUVar4 == null) goto label_05843af6;
			bVar3 = pUVar4.enabled;
			if (bVar3) goto label_05843af0;
			pUVar4 = this.waterVolume;
			if (pUVar4 == null) goto label_05843af6;
			method_00 = (MethodInfo)0x1;
		}
		pUVar4.enabled = SUB81(method_00, 0);
		this.ApplyCamera();
	label_05843af0: ;
		this.InsideWater = false;
		return;
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x5743B00", Offset = "0x5742B00", VA = "0x5743B00")]
	protected void ToggleWaterFX(bool active)
	{
		// Lifted from source/cpp/PostProcessingManager.c (PostProcessingManager$$ToggleWaterFX): clean
		Volume pUVar1;
		bool bVar2;

		pUVar1 = this.waterVolume;
		if (pUVar1 != null) {
			bVar2 = pUVar1.enabled;
			if (bVar2 == active) {
				return;
			}
			pUVar1 = this.waterVolume;
			if (pUVar1 != null) {
				pUVar1.enabled = active;
				this.ApplyCamera();
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x5743890", Offset = "0x5742890", VA = "0x5743890")]
	private void ApplyCamera()
	{
		// Lifted from source/cpp/PostProcessingManager.c (PostProcessingManager$$ApplyCamera): clean
		BaseCamera pCVar1;
		Volume __this_00;
		Bloom pUVar2;
		ChromaticAberration pUVar3;
		DepthOfField pUVar4;
		MotionBlur pUVar5;
		ColorAdjustments pUVar6;
		bool bVar7;
		bool bVar8;
		UniversalAdditionalCameraData pUVar9;

		pCVar1 = SceneLoader.CurrentCamera;
		bVar7 = ((Object)pCVar1 == null);
		if (bVar7) {
			return;
		}
		bVar7 = true;
		if (this._customVolumes == false) {
			__this_00 = this.waterVolume;
			if (__this_00 == null) goto label_05843997;
			bVar8 = __this_00.enabled;
			if (!bVar8) {
				pUVar2 = this._bloom;
				if (pUVar2 == null) goto label_05843997;
				if (pUVar2.active == false) {
					pUVar3 = this._chromaticAberration;
					if (pUVar3 == null) goto label_05843997;
					if (pUVar3.active == false) {
						pUVar4 = this._depthOfField;
						if (pUVar4 == null) goto label_05843997;
						if (pUVar4.active == false) {
							pUVar5 = this._motionBlur;
							if (pUVar5 == null) goto label_05843997;
							if (pUVar5.active == false) {
								pUVar6 = this._colorAdjustments;
								if (pUVar6 == null) goto label_05843997;
								bVar7 = pUVar6.active;
							}
						}
					}
				}
			}
		}
		pCVar1 = SceneLoader.CurrentCamera;
		if ((pCVar1 != null) &&(pUVar9 = CameraExtensions.GetUniversalAdditionalCameraData(pCVar1.Camera), pUVar9 != null)) {
			pUVar9.m_RenderPostProcessing = bVar7;
			return;
		}
	label_05843997: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x57436C0", Offset = "0x57426C0", VA = "0x57436C0")]
	public void Apply()
	{
		// Lifted from source/cpp/PostProcessingManager.c (PostProcessingManager$$Apply): clean
		uint quality;
		VolumeProfile x;
		GraphicsSettings pSVar1;
		IntSetting pSVar2;
		ChromaticAberration pUVar3;
		DepthOfField pUVar4;
		ColorAdjustments pUVar5;
		bool bVar6;

		x = PostProcessingManager.DefaultVolumeProfile;
		bVar6 = ((Object)x == null);
		if ((bVar6) ||(pSVar1 = SettingsManager.GraphicsSettings, pSVar1 == null)) {
			return;
		}
		pSVar2 = pSVar1.Bloom;
		if (pSVar2 != null) {
			this.SetBloomQuality(pSVar2._value);
			pSVar2 = pSVar1.ChromaticAberrationFX;
			if ((pSVar2 != null) &&(pUVar3 = this._chromaticAberration, pUVar3 != null)) {
				pUVar3.active = pSVar2._value != 0;
				pSVar2 = pSVar1.DepthOfField;
				if ((pSVar2 != null) &&(pUVar4 = this._depthOfField, pUVar4 != null)) {
					pUVar4.active = pSVar2._value != 0;
					pSVar2 = pSVar1.MotionBlur;
					if (pSVar2 != null) {
						quality = pSVar2._value;
						this.SetMotionBlurQuality(quality);
						pSVar2 = pSVar1.ColorGrading;
						if ((pSVar2 != null) &&(pUVar5 = this._colorAdjustments, pUVar5 != null)) {
							pUVar5.active = pSVar2._value != 0;
							this.ApplyCamera();
							return;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x5743CD0", Offset = "0x5742CD0", VA = "0x5743CD0")]
	public void SetColorGradingQuality(ColorGradingLevel quality)
	{
		// Lifted from source/cpp/PostProcessingManager.c (PostProcessingManager$$SetColorGradingQuality): clean
		ColorAdjustments pUVar1;

		pUVar1 = this._colorAdjustments;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.active = quality != 0;
		return;
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x5743B50", Offset = "0x5742B50", VA = "0x5743B50")]
	public void SetBloomQuality(BloomLevel quality)
	{
		// Lifted from source/cpp/PostProcessingManager.c (PostProcessingManager$$SetBloomQuality): 4 lines keep C-only constructs
		Bloom pUVar1;
		BoolParameter pUVar2;
		Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;

		if (quality == 2) {
			pUVar1 = this._bloom;
			if (pUVar1 != null) {
				pUVar1.active = true;
				pUVar2 = pUVar1.highQualityFiltering;
				if (pUVar2 != null) {
					UNRECOVERED_JUMPTABLE_00 = (pUVar2.klass.vtable)._15_set_value.methodPtr;
					(*UNRECOVERED_JUMPTABLE_00)(pUVar2,1,(pUVar2.klass.vtable)._15_set_value.method,UNRECOVERED_JUMPTABLE_00);
					return;
				}
			}
		}
		else {
			if (quality != 1) {
				if (quality == 0) {
					pUVar1 = this._bloom;
					if (pUVar1 == null) goto label_05843bc9;
					pUVar1.active = false;
				}
				return;
			}
			pUVar1 = this._bloom;
			if (pUVar1 != null) {
				pUVar1.active = true;
				pUVar2 = pUVar1.highQualityFiltering;
				if (pUVar2 != null) {
					UNRECOVERED_JUMPTABLE_00 = (pUVar2.klass.vtable)._15_set_value.methodPtr;
					(*UNRECOVERED_JUMPTABLE_00)(pUVar2,0,(pUVar2.klass.vtable)._15_set_value.method,UNRECOVERED_JUMPTABLE_00);
					return;
				}
			}
		}
	label_05843bc9: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x5743BD0", Offset = "0x5742BD0", VA = "0x5743BD0")]
	public void SetChromaticAberrationQuality(ChromaticAberrationLevel quality)
	{
		// Lifted from source/cpp/PostProcessingManager.c (PostProcessingManager$$SetChromaticAberrationQuality): clean
		ChromaticAberration pUVar1;

		pUVar1 = this._chromaticAberration;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.active = quality != 0;
		return;
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x5743BF0", Offset = "0x5742BF0", VA = "0x5743BF0")]
	public void SetDepthOfFieldQuality(DepthOfFieldLevel quality)
	{
		// Lifted from source/cpp/PostProcessingManager.c (PostProcessingManager$$SetDepthOfFieldQuality): clean
		DepthOfField pUVar1;

		pUVar1 = this._depthOfField;
		if (pUVar1 == null) {
			throw new NullReferenceException();
		}
		pUVar1.active = quality != 0;
		return;
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x5743C10", Offset = "0x5742C10", VA = "0x5743C10")]
	public void SetMotionBlurQuality(MotionBlurLevel quality)
	{
		// Lifted from source/cpp/PostProcessingManager.c (PostProcessingManager$$SetMotionBlurQuality): 6 lines keep C-only constructs
		MotionBlur pUVar1;
		MotionBlurQualityParameter pUVar2;
		Il2CppMethodPointer vtableDispatch;

		switch(quality) {
		case 0:
			pUVar1 = this._motionBlur;
			if (pUVar1 != null) {
				pUVar1.active = false;
				return;
			}
			break;
		case 1:
			pUVar1 = this._motionBlur;
			if (pUVar1 != null) {
				pUVar1.active = true;
				pUVar2 = pUVar1.quality;
				if (pUVar2 != null) {
					vtableDispatch = (pUVar2.klass.vtable)._15_set_value.methodPtr;
					(*vtableDispatch)(pUVar2,0,(pUVar2.klass.vtable)._15_set_value.method,vtableDispatch);
					return;
				}
			}
			break;
		case 2:
			pUVar1 = this._motionBlur;
			if (pUVar1 != null) {
				pUVar1.active = true;
				pUVar2 = pUVar1.quality;
				if (pUVar2 != null) {
					vtableDispatch = (pUVar2.klass.vtable)._15_set_value.methodPtr;
					(*vtableDispatch)(pUVar2,1,(pUVar2.klass.vtable)._15_set_value.method,vtableDispatch);
					return;
				}
			}
			break;
		case 3:
			pUVar1 = this._motionBlur;
			if (pUVar1 != null) {
				pUVar1.active = true;
				pUVar2 = pUVar1.quality;
				if (pUVar2 != null) {
					vtableDispatch = (pUVar2.klass.vtable)._15_set_value.methodPtr;
					(*vtableDispatch)(pUVar2,2,(pUVar2.klass.vtable)._15_set_value.method,vtableDispatch);
					return;
				}
			}
			break;
		default: ;
			return;
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x5743CF0", Offset = "0x5742CF0", VA = "0x5743CF0")]
	public PostProcessingManager()
	{
		// Lifted from source/cpp/PostProcessingManager.c (PostProcessingManager$$.ctor): clean
		base();
		return;
	}
}
