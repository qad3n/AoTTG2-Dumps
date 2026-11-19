// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialogHost.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Runtime.CompilerServices;
using Gisketch.Aottg2UI.Actions;
using Gisketch.Aottg2UI.Code;
using Gisketch.Aottg2UI.Overlays;
using Gisketch.Aottg2UI.State;
using Gisketch.Aottg2UI.Styling;
using Il2CppDummyDll;
using UnityEngine;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x200020C")]
public sealed class AottgExternalLinkDialogHost : MonoBehaviour, IGisketchActionHandler
{
	[Token(Token = "0x4000ADE")]
	private const int SortingOrder = 950;

	[Token(Token = "0x4000ADF")]
	[FieldOffset(Offset = "0x20")]
	private GameObject _canvasObject;

	[Token(Token = "0x4000AE0")]
	[FieldOffset(Offset = "0x28")]
	private GisketchOverlayManager _overlays;

	[Token(Token = "0x4000AE1")]
	[FieldOffset(Offset = "0x30")]
	private GisketchUIState _state;

	[Token(Token = "0x4000AE2")]
	[FieldOffset(Offset = "0x38")]
	private AottgActionRegistry _codeActions;

	[Token(Token = "0x4000AE3")]
	[FieldOffset(Offset = "0x40")]
	private AottgCodeCatalog _catalog;

	[Token(Token = "0x17000163")]
	public static AottgExternalLinkDialogHost Current
	{
		[Token(Token = "0x6000C30")]
		[Address(RVA = "0x5D85750", Offset = "0x5D84750", VA = "0x5D85750")]
		[CompilerGenerated]
		get
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialogHost.c (Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$get_Current): clean
			return AottgExternalLinkDialogHost._Current_k__BackingField;
		}
		[Token(Token = "0x6000C31")]
		[Address(RVA = "0x5D85790", Offset = "0x5D84790", VA = "0x5D85790")]
		[CompilerGenerated]
		private set
		{
			// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialogHost.c (Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$set_Current): clean
			AottgExternalLinkDialogHost._Current_k__BackingField = value ;
			return;
		}
	}

	[Token(Token = "0x6000C32")]
	[Address(RVA = "0x5D857E0", Offset = "0x5D847E0", VA = "0x5D857E0")]
	public static bool ShowUrl(string url)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialogHost.c (Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$ShowUrl): clean
		AottgExternalLinkDialogHost pGVar1;
		bool bVar2;
		bool bVar3;

		pGVar1 = AottgExternalLinkDialogHost. _Current_k__BackingField;
		bVar2 = ((Object)pGVar1 == null);
		if (!bVar2) {
			bVar2 = String.IsNullOrWhiteSpace(url);
			if (!bVar2) {
				pGVar1 = AottgExternalLinkDialogHost. _Current_k__BackingField;
				if (pGVar1 == null) {
					throw new NullReferenceException();
				}
				pGVar1.Show(url);
			}
		}
		return bVar3;
	}

	[Token(Token = "0x6000C33")]
	[Address(RVA = "0x5D85960", Offset = "0x5D84960", VA = "0x5D85960")]
	private void Awake()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialogHost.c (Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$Awake): clean
		AottgExternalLinkDialogHost._Current_k__BackingField = this;
		return;
	}

	[Token(Token = "0x6000C34")]
	[Address(RVA = "0x5D859B0", Offset = "0x5D849B0", VA = "0x5D859B0")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialogHost.c (Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$OnDestroy): 1 lines keep C-only constructs
		AottgExternalLinkDialogHost x;
		bool bVar1;

		x = AottgExternalLinkDialogHost._Current_k__BackingField;
		bVar1 = ((Object)x == (Object)this);
		if (bVar1) {
			if (Il2CppMethodInitialized_07548887 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(AottgExternalLinkDialogHost)) ;
				Il2CppMethodInitialized_07548887 = true;
			}
			AottgExternalLinkDialogHost._Current_k__BackingField =null;
			return;
		}
		return;
	}

	[Token(Token = "0x6000C35")]
	[Address(RVA = "0x5D858C0", Offset = "0x5D848C0", VA = "0x5D858C0")]
	public void Show(string url)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialogHost.c (Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$Show): clean
		GisketchUIState __this_00;
		GisketchOverlayManager __this_01;
		String value;

		this.BuildIfNeeded();
		__this_00 = this._state;
		if ((__this_00 == null) ||(this._overlays == null)) {
			return;
		}
		if (url != null) {
			value = url.Trim();
			__this_00.Set("externalLink.url", value);
			__this_01 = this._overlays;
			if (__this_01 != null) {
				__this_01.ShowDialog("external-link-confirm", true);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000C36")]
	[Address(RVA = "0x5D85CD0", Offset = "0x5D84CD0", VA = "0x5D85CD0", Slot = "4")]
	public void HandleAction(string actionId, GisketchActionContext context)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialogHost.c (Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$HandleAction): clean
		GisketchOverlayManager pGVar1;
		GisketchUIState __this_00;
		AottgActionRegistry __this_01;
		bool bVar2;
		String pSVar3;

		bVar2 = (actionId == "overlay.close");
		if (bVar2) {
			pGVar1 = this._overlays;
			if (pGVar1 != null) {
				pGVar1.CloseTop(true);
				return;
			}
		}
		else {
			bVar2 = (actionId == "externalLink.confirm");
			if (bVar2) {
				__this_00 = this._state;
				if (__this_00 == null) {
					pSVar3 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					pGVar1 = this._overlays;
				}
				else {
					pSVar3 = __this_00.Get("externalLink.url", "");
					pGVar1 = this._overlays;
				}
				if (pGVar1 != null) {
					pGVar1.CloseTop(true);
				}
				bVar2 = String.IsNullOrWhiteSpace(pSVar3);
				if (!bVar2) {
					Application.OpenURL(pSVar3);
					return;
				}
			}
			else {
				__this_01 = this._codeActions;
				if ((__this_01 == null) ||(bVar2 = __this_01.TryHandle(actionId, context), !bVar2)) {
					pSVar3 = String.Concat("Unhandled external link dialog action: ", actionId);
					Debug.LogWarning((object)pSVar3, (Object)context.GameObject) ;
					return;
				}
			}
		}
		return;
	}

	[Token(Token = "0x6000C37")]
	[Address(RVA = "0x5D85A80", Offset = "0x5D84A80", VA = "0x5D85A80")]
	private void BuildIfNeeded()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialogHost.c (Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$BuildIfNeeded): 1 lines keep C-only constructs
		GisketchUIState pGVar1;
		AottgActionRegistry __this_00;
		MethodInfo pMVar2;
		RectTransform __this_01;
		Transform parent;
		MethodInfo layer;
		GisketchTheme theme;
		GisketchManifestDefinition __this_02;
		IGisketchLocalizer localizer;
		Func<string, GisketchOverlayDefinition> __this_03;
		GisketchBuildContext __this_04;
		GisketchOverlayManager __this_05;

		if (this._overlays != null) {
			return;
		}
		pGVar1 = new GisketchUIState();
		this._state = pGVar1;
		__this_00 = new AottgActionRegistry();
		this._codeActions = __this_00;
		pMVar2 = (MethodInfo)AottgCodeCatalog.Discover();
		this._catalog = (AottgCodeCatalog)pMVar2;
		__this_01 = this.CreateCanvas();
		if (__this_01 == null) {
			throw new NullReferenceException();
		}
		parent = __this_01.transform;
		pMVar2 = (MethodInfo *)"AoTTG External Link Overlays";
		layer = (MethodInfo)AottgExternalLinkDialogHost.CreateLayer(parent, "AoTTG External Link Overlays");
		AottgExternalLinkDialogHost.PromoteLayer((Transform)layer);
		theme = AottgExternalLinkDialogHost.Theme();
		__this_02 = new GisketchManifestDefinition();
		localizer = new Aottg2GisketchLocalizer();
		pGVar1 = this._state;
		__this_03 = new Func<string, GisketchOverlayDefinition>((object)this, (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_BuildIfNeeded_b__15_0);
		__this_04 = new GisketchBuildContext(__this_02, theme, localizer, (IGisketchActionHandler)this, pGVar1, null, __this_03) ;
		__this_05 = new GisketchOverlayManager((Transform)layer, __this_04);
		this._overlays = __this_05;
		return;
	}

	[Token(Token = "0x6000C38")]
	[Address(RVA = "0x5D85EC0", Offset = "0x5D84EC0", VA = "0x5D85EC0")]
	private RectTransform CreateCanvas()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialogHost.c (Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$CreateCanvas): 18 lines keep C-only constructs
		GameObject* targetAddress;
		UISettings __this_00;
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar1;
		GameObject pUVar2;
		Transform __this_01;
		Transform parent;
		Canvas __this_02;
		CanvasScaler __this_03;
		RectTransform rect;
		float fVar3;
		byte[] auVar4 = new byte[16];

		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components != null) {
			if (obj != null) {
				pIVar1 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
				if (pIVar1 == null) {
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((int)components.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			components[0] = obj;
			pUVar2 = new GameObject("AoTTG External Link Canvas", components);
			targetAddress = &this._canvasObject;
			this._canvasObject = pUVar2;
			pUVar2 = this._canvasObject;
			if (pUVar2 != null) {
				__this_01 = pUVar2.transform;
				parent = this.transform;
				if (__this_01 != null) {
					__this_01.SetParent(parent, false);
					if (*targetAddress != null) {
						__this_02 = (*targetAddress).AddComponent<Canvas>();
						if (__this_02 != null) {
							__this_02.renderMode = 0;
							if (*targetAddress != null) {
								(*targetAddress).AddComponent<GraphicRaycaster>();
								if (*targetAddress != null) {
									__this_03 = (*targetAddress).AddComponent<CanvasScaler>();
									if (__this_03 != null) {
										__this_03.m_UiScaleMode = 1;
										__this_03.m_MatchWidthOrHeight = 0.5;
										__this_00 = SettingsManager.UISettings;
										if (__this_00 == null) {
											fVar3 = 1.0;
										}
										else {
											fVar3 = __this_00.AppliedMasterScale;
										}
										auVar4._4_4_ = fVar3;
										auVar4._0_4_ = fVar3;
										auVar4._8_4_ = fVar3;
										auVar4._12_4_ = fVar3;
										auVar4 = divps(_DAT_0100a420, auVar4);
										__this_03.referenceResolution = (Vector2)auVar4._0_8_;
										if (*targetAddress != null) {
											rect = (*targetAddress).GetComponent<RectTransform>();
											AottgExternalLinkDialogHost.Stretch(rect);
											return rect;
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

	[Token(Token = "0x6000C39")]
	[Address(RVA = "0x5D86170", Offset = "0x5D85170", VA = "0x5D86170")]
	private static Transform CreateLayer(Transform parent, string name)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialogHost.c (Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$CreateLayer): 1 lines keep C-only constructs
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar1;
		GameObject __this;
		Transform pUVar2;
		RectTransform rect;

		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components != null) {
			if (obj != null) {
				pIVar1 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
				if (pIVar1 == null) {
					pIVar1 = new ArrayTypeMismatchException();
					throw pIVar1;
				}
			}
			if ((int)components.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			components[0] = obj;
			__this = new GameObject(name, components);
			if (__this != null) {
				pUVar2 = __this.transform;
				if (pUVar2 != null) {
					pUVar2.SetParent(parent, false);
					rect = __this.GetComponent<RectTransform>();
					AottgExternalLinkDialogHost.Stretch(rect);
					pUVar2 = __this.transform;
					return pUVar2;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000C3A")]
	[Address(RVA = "0x5D862E0", Offset = "0x5D852E0", VA = "0x5D862E0")]
	private static void PromoteLayer(Transform layer)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialogHost.c (Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$PromoteLayer): clean
		GameObject pUVar1;
		Canvas __this;

		if (layer != null) {
			pUVar1 = layer.gameObject;
			if (pUVar1 != null) {
				__this = pUVar1.AddComponent<Canvas>();
				if (__this != null) {
					__this.overrideSorting = true;
					__this.sortingOrder = 0x3b6;
					pUVar1 = layer.gameObject;
					if (pUVar1 != null) {
						pUVar1.AddComponent<GraphicRaycaster>();
						return;
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000C3B")]
	[Address(RVA = "0x5D86510", Offset = "0x5D85510", VA = "0x5D86510")]
	private static Vector2 ReferenceResolution()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialogHost.c (Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$ReferenceResolution): 7 lines keep C-only constructs
		UISettings __this;
		float fVar1;
		byte[] auVar2 = new byte[16];

		__this = SettingsManager.UISettings;
		if (__this == null) {
			fVar1 = 1.0;
		}
		else {
			fVar1 = __this.AppliedMasterScale;
		}
		auVar2._4_4_ = fVar1;
		auVar2._0_4_ = fVar1;
		auVar2._8_4_ = fVar1;
		auVar2._12_4_ = fVar1;
		auVar2 = divps(_DAT_0100a420, auVar2);
		return (Vector2)auVar2._0_8_;
	}

	[Token(Token = "0x6000C3C")]
	[Address(RVA = "0x5D86390", Offset = "0x5D85390", VA = "0x5D86390")]
	private static GisketchTheme Theme()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialogHost.c (Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$Theme): 2 lines keep C-only constructs
		UISettings pSVar1;
		StringSetting pSVar2;
		bool bVar3;
		String* ppSVar4;
		Object x;
		GisketchTheme pGVar5;

		pSVar1 = SettingsManager.UISettings;
		if (pSVar1 == null) {
	label_05e8644a: ;
			ppSVar4 = &"UI/Themes/Aottg2Dark";
		}
		else {
			pSVar2 = pSVar1.UITheme;
			if (pSVar2 == null) goto label_05e86501;
			bVar3 = (pSVar2._value == "Light");
			if (!bVar3) goto label_05e8644a;
			ppSVar4 = &"UI/Themes/Aottg2Light";
		}
		x = (Object)Resources.Load<TextAsset>(*ppSVar4);
		bVar3 = (x != null);
		if (!bVar3) {
			if ((typeof(GisketchTheme)._2).cctor_finished_or_no_cctor == 0) {
				return GisketchTheme.Default;
			}
			return GisketchTheme.Default;
		}
		if (x != null) {
			if ((typeof(GisketchTheme)._2).cctor_finished_or_no_cctor == 0) {
				return pGVar5;
			}
			return pGVar5;
		}
	label_05e86501: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000C3D")]
	[Address(RVA = "0x5D86570", Offset = "0x5D85570", VA = "0x5D86570")]
	private static void Stretch(RectTransform rect)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialogHost.c (Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$Stretch): clean
		if (rect == null) {
			throw new NullReferenceException();
		}
		rect.anchorMin = (Vector2)(Vector2.zeroVector);
		rect.anchorMax = (Vector2)(Vector2.oneVector);
		rect.offsetMin = (Vector2)(Vector2.zeroVector);
		rect.offsetMax = (Vector2)(Vector2.zeroVector);
		return;
	}

	[Token(Token = "0x6000C3E")]
	[Address(RVA = "0x5D86670", Offset = "0x5D85670", VA = "0x5D86670")]
	public AottgExternalLinkDialogHost()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialogHost.c (Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgExternalLinkDialogHost.c.

	// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$<BuildIfNeeded>b__15_0: clean
	private GisketchOverlayDefinition BuildIfNeeded_b__15_0(String id)
	{
		GisketchOverlayDefinition pGVar1;

		pGVar1 = AottgCodeManifestBuilder.BuildDialog(this._catalog, id, this._codeActions);
		return pGVar1;
	}
}
