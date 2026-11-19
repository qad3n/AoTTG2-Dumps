// ==================== AoTTG2 cross-reference ====================
// Type: UI.MobileLayoutEditorOverlay
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/UI/MobileLayoutEditorOverlay.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Settings;
using UnityEngine;
using UnityEngine.EventSystems;
using UnityEngine.Events;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x2000764")]
internal class MobileLayoutEditorOverlay : MonoBehaviour
{
	[Token(Token = "0x4002518")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static MobileLayoutEditorOverlay _instance;

	[Token(Token = "0x4002519")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private RectTransform _root;

	[Token(Token = "0x400251A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private RectTransform _controlsRoot;

	[Token(Token = "0x400251B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private RectTransform _toolbar;

	[Token(Token = "0x400251C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private MobileLayoutEditorToolbar _toolbarPanel;

	[Token(Token = "0x400251D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private RectTransform _selectedRect;

	[Token(Token = "0x400251E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private MobileInputLayoutRole _role;

	[Token(Token = "0x400251F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private MobileInputLayout _layout;

	[Token(Token = "0x4002520")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private MobileInputControlLayout _selectedControl;

	[Token(Token = "0x4002521")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private readonly Dictionary<MobileInputControlLayout, RectTransform> _controlRects;

	[Token(Token = "0x4002522")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private readonly Dictionary<MobileInputControlLayout, MobileInputControlLayout> _controlParents;

	[Token(Token = "0x4002523")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Vector2 _toolbarDragOffset;

	[Token(Token = "0x4002524")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private bool _draggingToolbar;

	[Token(Token = "0x4002525")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private MobileInputControlLayout _draggingControl;

	[Token(Token = "0x4002526")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private int _dragPointerId;

	[Token(Token = "0x4002527")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8C")]
	private Vector2 _controlDragOffset;

	[Token(Token = "0x4002528")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private Font _font;

	[Token(Token = "0x4002529")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private GameObject _returnButton;

	[Token(Token = "0x400252A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	private GameObject _restoreObject;

	[Token(Token = "0x400252B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	private CanvasGroup _restoreGroup;

	[Token(Token = "0x400252C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private bool _restoreGroupAdded;

	[Token(Token = "0x400252D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xBC")]
	private float _restoreGroupAlpha;

	[Token(Token = "0x400252E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC0")]
	private bool _restoreGroupInteractable;

	[Token(Token = "0x400252F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC1")]
	private bool _restoreGroupBlocksRaycasts;

	[Token(Token = "0x4002530")]
	private const string ThemePanel = "DefaultPanel";

	[Token(Token = "0x4002531")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC8")]
	private readonly List<Behaviour> _suspendedUi;

	[Token(Token = "0x4002532")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
	private ColorPickPopup _colorPopup;

	[Token(Token = "0x4002533")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xD8")]
	private ImportPopup _importPopup;

	[Token(Token = "0x4002534")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xE0")]
	private ExportPopup _exportPopup;

	[Token(Token = "0x17000C0D")]
	public static bool IsOpen
	{
		[Token(Token = "0x6004751")]
		[Address(RVA = "0x5B9C710", Offset = "0x5B9B710", VA = "0x5B9C710")]
		get
		{
			// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$get_IsOpen): clean
			MobileLayoutEditorOverlay pUVar1;
			bool bVar2;
			GameObject __this;

			pUVar1 = MobileLayoutEditorOverlay._instance;
			bVar2 = ((Object)pUVar1 != null);
			if (bVar2) {
				pUVar1 = MobileLayoutEditorOverlay._instance;
				if (pUVar1 != null) {
					__this = pUVar1.gameObject;
					if (__this != null) {
						bVar2 = __this.activeSelf;
						return bVar2;
					}
				}
				throw new NullReferenceException();
			}
			return false;
		}
	}

	[Token(Token = "0x6004752")]
	[Address(RVA = "0x5B9C7C0", Offset = "0x5B9B7C0", VA = "0x5B9C7C0")]
	public static void Open(MobileInputLayoutRole role, GameObject restoreObject)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$Open): 1 lines keep C-only constructs
		BaseMenu pUVar1;
		MobileLayoutEditorOverlay pUVar2;
		Il2CppType handle;
		bool bVar3;
		Type[] components;
		Type obj;
		object pIVar4;
		GameObject __this;
		Transform __this_00;
		Transform parent;
		MobileLayoutEditorOverlay method_00;

		pUVar1 = UIManager.CurrentMenu;
		bVar3 = ((Object)pUVar1 == null);
		if (bVar3) {
			return;
		}
		pUVar2 = MobileLayoutEditorOverlay._instance;
		bVar3 = ((Object)pUVar2 == null);
		if (bVar3) {
			components = (Type[])new Type[1];
			handle = TypeRef_UnityEngine_RectTransform;
			obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			if (components == null) goto label_05c9ca69;
			if (obj != null) {
				pIVar4 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
				if (pIVar4 == null) {
					pIVar4 = new ArrayTypeMismatchException();
					throw pIVar4;
				}
			}
			if ((int)components.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			components[0] = obj;
			__this = new GameObject("MobileLayoutEditorOverlay", components);
			if (__this == null) goto label_05c9ca69;
			__this_00 = __this.transform;
			pUVar1 = UIManager.CurrentMenu;
			if (pUVar1 == null) goto label_05c9ca69;
			parent = pUVar1.transform;
			if (__this_00 == null) goto label_05c9ca69;
			__this_00.SetParent(parent, false);
			method_00 = __this.AddComponent<MobileLayoutEditorOverlay>();
			MobileLayoutEditorOverlay._instance = method_00;
			pUVar2 = MobileLayoutEditorOverlay._instance;
			if (pUVar2 == null) goto label_05c9ca69;
			pUVar2.Setup();
		}
		pUVar2 = MobileLayoutEditorOverlay._instance;
		if (pUVar2 != null) {
			pUVar2.Show(role, restoreObject);
			return;
		}
	label_05c9ca69: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004753")]
	[Address(RVA = "0x5B9CA90", Offset = "0x5B9BA90", VA = "0x5B9CA90")]
	private void Setup()
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$Setup): 13 lines keep C-only constructs
		RectTransform* targetAddress;
		Vector2 anchorMin;
		Vector2 UVar1;
		Vector2 anchorMax;
		Font pUVar2;
		RectTransform pUVar3;
		GameObject pUVar4;
		Canvas __this_00;
		CanvasGroup __this_01;
		Vector2* __this_02;
		UnityEngine_Vector2_StaticFields pUVar5;
		MethodInfo method_00;
		ColorPickPopup pUVar6;
		ImportPopup pUVar7;
		ExportPopup pUVar8;
		MethodInfo* method_01;
		float fVar9;
		float fVar10;

		pUVar2 = Resources.GetBuiltinResource<Font>("LegacyRuntime.ttf");
		pUVar2 = LanguageFonts.LegacyFont(pUVar2);
		this._font = pUVar2;
		pUVar3 = this.GetComponent<RectTransform>();
		targetAddress = &this._root;
		this._root = pUVar3;
		pUVar3 = this._root;
		if (pUVar3 != null) {
			pUVar3.anchorMin = (Vector2)(Vector2.zeroVector);
			pUVar3 = *targetAddress;
			if (pUVar3 != null) {
				pUVar3.anchorMax = (Vector2)(Vector2.oneVector);
				pUVar3 = *targetAddress;
				if (pUVar3 != null) {
					pUVar3.offsetMin = (Vector2)(Vector2.zeroVector);
					pUVar3 = *targetAddress;
					if (pUVar3 != null) {
						pUVar3.offsetMax = (Vector2)(Vector2.zeroVector);
						pUVar4 = this.gameObject;
						if ((pUVar4 != null) &&(__this_00 = pUVar4.AddComponent<Canvas>(), __this_00 != null)) {
							__this_00.overrideSorting = true;
							__this_00.sortingOrder = 30000;
							pUVar4 = this.gameObject;
							if (pUVar4 != null) {
								pUVar4.AddComponent<GraphicRaycaster>();
								pUVar4 = this.gameObject;
								if ((pUVar4 != null) &&(__this_01 = pUVar4.AddComponent<CanvasGroup>(), __this_01 != null)) {
									__this_01.blocksRaycasts = true;
									__this_01.interactable = true;
									pUVar4 = this.gameObject;
									if (pUVar4 != null) {
										method_01 = &MethodInfo_UnityEngine_GameObject_AddComponent_Image;
										__this_02 = (Vector2*)pUVar4.AddComponent<Image>();
										if ((Image)__this_02 != null) {
											__this_02.set_color((Color)(ZEXT816(0x3ea3d70a00000000) << 0x40));
											__this_02.set_raycastTarget(true);
											pUVar3 = *targetAddress;
											if (Il2CppMethodInitialized_0753ecc8 == false) {
												__this_02 = &typeof(Vector2);
												Il2CppMethodInitialized_0753ecc8 = true;
											}
											pUVar5 = typeof(Vector2).static_fields;
											anchorMin = (pUVar5.zeroVector);
											if (Il2CppMethodInitialized_07542885 == false) {
												__this_02 = &typeof(Vector2);
												Il2CppMethodInitialized_07542885 = true;
												pUVar5 = typeof(Vector2).static_fields;
												UVar1 = (pUVar5.oneVector);
												fVar9 = UVar1.x;
												fVar10 = UVar1.y;
												if (Il2CppMethodInitialized_0753ecc8 == false) {
													__this_02 = &typeof(Vector2);
													Il2CppMethodInitialized_0753ecc8 = true;
													pUVar5 = typeof(Vector2).static_fields;
												}
											}
											else {
												UVar1 = (pUVar5.oneVector);
												fVar9 = UVar1.x;
												fVar10 = UVar1.y;
											}
											UVar1 = (pUVar5.zeroVector);
											anchorMax.y = fVar10;
											anchorMax.x = fVar9;
											pUVar4 = __this_02.CreateRect("Controls", pUVar3, (Vector2)anchorMin, anchorMax, (Vector2)UVar1, (Vector2)UVar1);
											if (pUVar4 != null) {
												method_00 = (MethodInfo)pUVar4.GetComponent<RectTransform>();
												this._controlsRoot = (RectTransform)method_00;
												this.CreateToolbar();
												pUVar6 = ElementFactory.CreateDefaultPopup<ColorPickPopup>((Transform)this._root, false);
												this._colorPopup = pUVar6;
												pUVar7 = ElementFactory.CreateDefaultPopup<ImportPopup>((Transform)this._root, false);
												this._importPopup = pUVar7;
												pUVar8 = ElementFactory.CreateDefaultPopup<ExportPopup>((Transform)this._root, false);
												this._exportPopup = pUVar8;
												pUVar4 = this.gameObject;
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
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004754")]
	[Address(RVA = "0x5B9CF90", Offset = "0x5B9BF90", VA = "0x5B9CF90")]
	private void Show(MobileInputLayoutRole role, GameObject restoreObject)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$Show): 1 lines keep C-only constructs
		Object x;
		bool bVar1;
		MobileInputLayout pUVar2;
		EventSystem __this_00;
		String pSVar3;
		GameObject pUVar4;
		Transform __this_01;
		Enum SStack_38;

		pUVar2 = MobileInputLayoutManager.GetSelectedLayout(role);
		if (pUVar2 == null) {
			return;
		}
		this._role = role;
		this._restoreObject = restoreObject;
		CursorManager.SetPointer(true);
		__this_00 = EventSystem.current;
		if (__this_00 != null) {
			__this_00.SetSelectedGameObject(null);
		}
		pUVar2 = pUVar2.Clone(null, false);
		this._layout = pUVar2;
		pUVar2 = this._layout;
		SStack_38.klass = (Enum)typeof(MobileInputLayoutRole);
		SStack_38.monitor = (IntPtr)0xffffffffffffffff;
		pSVar3 = SStack_38.ToString();
		if (pUVar2 != null) {
			pUVar2.Role = pSVar3;
			pUVar4 = this.gameObject;
			if (pUVar4 != null) {
				pUVar4.SetActive(true);
				x = (Object)this._returnButton;
				bVar1 = (x != null);
				if (bVar1) {
					pUVar4 = this._returnButton;
					if (pUVar4 == null) goto label_05c9d1b7;
					pUVar4.SetActive(true);
				}
				__this_01 = this.transform;
				if (__this_01 != null) {
					__this_01.SetAsLastSibling();
					this.RebuildControls();
					MobileInputBridge.ClearState();
					this.HideRestoreObject();
					return;
				}
			}
		}
	label_05c9d1b7: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004755")]
	[Address(RVA = "0x5B9DEB0", Offset = "0x5B9CEB0", VA = "0x5B9DEB0")]
	private void HideRestoreObject()
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$HideRestoreObject): 9 lines keep C-only constructs
		CanvasGroup* targetAddress;
		Object x;
		GameObject pUVar1;
		bool bVar2;
		CanvasGroup pUVar3;
		GisketchUIRoot x_00;
		AottgGameUiActions behaviour;
		float fVar4;

		targetAddress = &this._restoreGroup;
		this._restoreGroup = null;
		this._restoreGroupAdded = false;
		x = (Object)this._restoreObject;
		bVar2 = (x == null);
		if (bVar2) {
			return;
		}
		pUVar1 = this._restoreObject;
		if (pUVar1 != null) {
			bVar2 = pUVar1.activeSelf;
			if (!bVar2) {
				return;
			}
			pUVar1 = this._restoreObject;
			if (pUVar1 != null) {
				pUVar3 = pUVar1.GetComponent<CanvasGroup>();
				*targetAddress = pUVar3;
				pUVar3 = *targetAddress;
				bVar2 = ((Object)pUVar3 == null);
				if (bVar2) {
					pUVar1 = this._restoreObject;
					if (pUVar1 == null) goto label_05c9e129;
					pUVar3 = pUVar1.AddComponent<CanvasGroup>();
					this._restoreGroup = pUVar3;
					this._restoreGroupAdded = true;
				}
				if (*targetAddress != null) {
					fVar4 = (*targetAddress).alpha;
					this._restoreGroupAlpha = fVar4;
					pUVar3 = this._restoreGroup;
					if (pUVar3 != null) {
						bVar2 = pUVar3.interactable;
						this._restoreGroupInteractable = bVar2;
						pUVar3 = this._restoreGroup;
						if (pUVar3 != null) {
							bVar2 = pUVar3.blocksRaycasts;
							this._restoreGroupBlocksRaycasts = bVar2;
							pUVar3 = this._restoreGroup;
							if (pUVar3 != null) {
								pUVar3.alpha = 0.0;
								if (*targetAddress != null) {
									(*targetAddress).interactable = false;
									if (*targetAddress != null) {
										(*targetAddress).blocksRaycasts = false;
										pUVar1 = this._restoreObject;
										if (pUVar1 != null) {
											x_00 = pUVar1.GetComponentInParent<GisketchUIRoot>();
											bVar2 = ((Object)x_00 != null);
											if (!bVar2) {
												return;
											}
											this.SuspendUi((Behaviour)x_00);
											if (x_00 != null) {
												behaviour = x_00.GetComponent<AottgGameUiActions>() ;
												this.SuspendUi((Behaviour)behaviour);
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
	label_05c9e129: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004756")]
	[Address(RVA = "0x5B9E130", Offset = "0x5B9D130", VA = "0x5B9E130")]
	private void SuspendUi(Behaviour behaviour)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$SuspendUi): 2 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		List<Behaviour> __this_00;
		Behaviour[] pUVar3;
		bool bVar5;

		bVar5 = ((Object)behaviour == null);
		if (bVar5) {
			return;
		}
		if (behaviour != null) {
			bVar5 = behaviour.enabled;
			if (!bVar5) {
				return;
			}
			__this_00 = this._suspendedUi;
			if (__this_00 != null) {
				piVar1 = &__this_00._version;
				*piVar1 = *piVar1 + 1;
				pUVar3 = __this_00._items;
				if (pUVar3 != null) {
					uVar2 = __this_00._size;
					if (uVar2 < (uint)pUVar3.Length) {
						__this_00._size = uVar2 + 1;
						pUVar3[(int)uVar2] = behaviour;
					}
					else {
						__this_00.AddWithResize((object)behaviour);
					}
					behaviour.enabled = false;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004757")]
	[Address(RVA = "0x5B9E220", Offset = "0x5B9D220", VA = "0x5B9E220")]
	private void RestoreObject()
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$RestoreObject): 10 lines keep C-only constructs
		int piVar1;
		CanvasGroup* targetAddress;
		int length;
		List<Behaviour> pSVar2;
		CanvasGroup pUVar3;
		Object x;
		bool bVar4;
		byte[] local_58 = new byte[8];
		Object local_48;
		byte[] local_40 = new byte[16];
		Object local_30;

		local_58 = (byte[])0x0;
		local_48 = null;
		pSVar2 = this._suspendedUi;
		if (pSVar2 != null) {
			local_40.GetEnumerator((List<object>)pSVar2);
			local_48 = local_30;
			local_58 = (byte[])local_40._0_8_;
			local_40._0_8_ = null;
			local_40._8_8_ = local_58;
			while(true) {
				bVar4 = local_58.MoveNext();
				x = local_48;
				if (!bVar4) break;
				bVar4 = (x != null);
				if (bVar4) {
					if (x == null) {
						throw new NullReferenceException();
					}
					x.enabled = true;
				}
			}
			local_58.Dispose();
			pSVar2 = this._suspendedUi;
			if (pSVar2 != null) {
				piVar1 = &pSVar2._version;
				*piVar1 = *piVar1 + 1;
				length = pSVar2._size;
				pSVar2._size = 0;
				if (0 < length) {
					Array.Clear((Array)pSVar2._items, 0, length);
				}
				pUVar3 = this._restoreGroup;
				targetAddress = &this._restoreGroup;
				bVar4 = ((Object)pUVar3 != null);
				if (!bVar4) {
	label_05c9e438: ;
					this._restoreGroup = null;
					this._restoreGroupAdded = false;
					this._restoreObject = null;
					return;
				}
				if (*targetAddress != null) {
					(*targetAddress).alpha = this._restoreGroupAlpha;
					pUVar3 = this._restoreGroup;
					if (pUVar3 != null) {
						pUVar3.interactable = this._restoreGroupInteractable;
						pUVar3 = this._restoreGroup;
						if (pUVar3 != null) {
							pUVar3.blocksRaycasts = this._restoreGroupBlocksRaycasts;
							if (this._restoreGroupAdded != false) {
								pUVar3 = *targetAddress;
								Object.Destroy((Object)pUVar3);
							}
							goto label_05c9e438;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004758")]
	[Address(RVA = "0x5B9E4F0", Offset = "0x5B9D4F0", VA = "0x5B9E4F0")]
	private void RefreshRestorePanel()
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$RefreshRestorePanel): clean
		Object pUVar1;
		GameObject pUVar2;
		bool bVar3;
		BasePanel __this_00;
		GisketchUIRoot root;

		pUVar1 = (Object)this._restoreObject;
		__this_00 = null;
		bVar3 = (pUVar1 != null);
		if (bVar3) {
			pUVar2 = this._restoreObject;
			if (pUVar2 == null) goto label_05c9e65c;
			__this_00 = pUVar2.GetComponent<BasePanel>();
		}
		bVar3 = ((Object)__this_00 != null);
		if (bVar3) {
			if (__this_00 == null) goto label_05c9e65c;
			__this_00.RebuildCategoryPanel();
		}
		pUVar1 = (Object)this._restoreObject;
		root = null;
		bVar3 = (pUVar1 != null);
		if (bVar3) {
			pUVar2 = this._restoreObject;
			if (pUVar2 == null) {
	label_05c9e65c: ;
				throw new NullReferenceException();
			}
			root = pUVar2.GetComponentInParent<GisketchUIRoot>();
		}
		bVar3 = ((Object)root != null);
		if (bVar3) {
			AottgSettingsScreen.RefreshCategory(root, "mobile");
			return;
		}
		return;
	}

	[Token(Token = "0x6004759")]
	[Address(RVA = "0x5B9E670", Offset = "0x5B9D670", VA = "0x5B9E670")]
	private void Update()
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$Update): 2 lines keep C-only constructs
		bool bVar1;
		MobileInputControlLayout* targetAddress;
		Vector2 local_10;

		local_10.x = 0.0;
		local_10.y = 0.0;
		if (this._draggingControl != null) {
			bVar1 = MobilePlatformUtility.TryGetHeldPointerPosition(this._dragPointerId, ref local_10);
			if (!bVar1) {
				targetAddress = &this._draggingControl;
				*targetAddress = null;
				return;
			}
			this.DragControl(this._draggingControl, (Vector2)local_10);
		}
		return;
	}

	[Token(Token = "0x600475A")]
	[Address(RVA = "0x5B9D480", Offset = "0x5B9C480", VA = "0x5B9D480")]
	private void CreateToolbar()
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$CreateToolbar): 22 lines keep C-only constructs
		RectTransform* targetAddress;
		MobileLayoutEditorToolbar* targetAddress_00;
		Object __this_00;
		RectTransform pUVar1;
		MobileLayoutEditorToolbar pUVar2;
		String pSVar3;
		Action __this_01;
		Action __this_02;
		Action __this_03;
		Action __this_04;
		Action __this_05;
		Action __this_06;
		Action __this_07;
		Transform pUVar4;
		GameObject __this_08;
		EventTrigger trigger;
		MobileLayoutEditorOverlay pUVar5;
		MobileLayoutEditorOverlay pUVar6;
		MethodInfo method_00;

		if (Il2CppMethodInitialized_07547a20 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorOverlay_CreateToolbar_b__39_0) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorOverlay_CreateToolbar_b__39_1) ;
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorOverlay_CreateToolbar_b__39_2) ;
			Il2CppMethodInitialized_07547a20 = true;
		}
		__this_00 = (Object)ElementFactory.InstantiateAndBind((Transform)this._root, "Prefabs/Panels/HeadedPanel");
		if (__this_00 != null) {
			__this_00.name = "Toolbar";
			pUVar1 = __this_00.GetComponent<RectTransform>();
			targetAddress = &this._toolbar;
			this._toolbar = pUVar1;
			pUVar1 = this._toolbar;
			if (pUVar1 != null) {
				pUVar1.anchorMin = (Vector2)0x3f8000003f000000;
				if (*targetAddress != null) {
					(*targetAddress).anchorMax = (Vector2)0x3f8000003f000000;
					if (*targetAddress != null) {
						(*targetAddress).anchoredPosition = (Vector2)0xc2ac000000000000;
						pUVar2 = __this_00.AddComponent<MobileLayoutEditorToolbar>();
						targetAddress_00 = &this._toolbarPanel;
						this._toolbarPanel = pUVar2;
						pUVar2 = this._toolbarPanel;
						method_00 = (MethodInfo *)"";
						pSVar3 = UIManager.GetLocale("SettingsPopup", "Keybinds", "MobileLayout", "", "");
						__this_01 = new Action((object)this, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_ShowLoadPopup);
						__this_02 = new Action((object)this, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_SavePreset);
						__this_03 = new Action((object)this, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_AddControl);
						__this_04 = new Action((object)this, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_EditSelected);
						__this_05 = new Action((object)this, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_DeleteSelected);
						__this_06 = new Action((object)this, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_CopySelected);
						__this_07 = new Action((object)this, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_Close);
						if (pUVar2 != null) {
							pUVar2._title = pSVar3;
							pUVar2._loadPreset = __this_01;
							pUVar2._savePreset = __this_02;
							pUVar2._add = __this_03;
							pUVar2._edit = __this_04;
							pUVar2._delete = __this_05;
							pUVar2._copy = __this_06;
							pUVar2._back = __this_07;
							pUVar2.Setup(null);
							pUVar2 = *targetAddress_00;
							if (pUVar2 != null) {
								this._returnButton = pUVar2._ReturnButton_k__BackingField;
								pUVar4 = __this_00.transform;
								if (pUVar4 != null) {
									pUVar4 = pUVar4.Find("Background");
									if (pUVar4 != null) {
										__this_08 = pUVar4.gameObject;
										if (__this_08 != null) {
											trigger = __this_08.AddComponent<EventTrigger>();
											pUVar6 = pUVar5;
											pUVar5 = new Action<BaseEventData>((object)this, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_CreateToolbar_b__39_0);
											pUVar6.AddTrigger(trigger, 2, (Action<BaseEventData>)pUVar5);
											pUVar6 = pUVar5;
											pUVar5 = new Action<BaseEventData>((object)this, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_CreateToolbar_b__39_1);
											pUVar6.AddTrigger(trigger, 5, (Action<BaseEventData>)pUVar5);
											pUVar6 = pUVar5;
											pUVar5 = new Action<BaseEventData>((object)this, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_CreateToolbar_b__39_2);
											pUVar6.AddTrigger(trigger, 3, (Action<BaseEventData>)pUVar5);
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
		throw new NullReferenceException();
	}

	[Token(Token = "0x600475B")]
	[Address(RVA = "0x5B9DA00", Offset = "0x5B9CA00", VA = "0x5B9DA00")]
	private void RebuildControls()
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$RebuildControls): 19 lines keep C-only constructs
		byte bVar1;
		RectTransform __this_00;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		Dictionary<object, object> pSVar4;
		MobileInputLayout pUVar5;
		List<MobileInputControlLayout> __this_01;
		bool bVar6;
		MethodInfo method_00;
		VirtualInvokeData pVVar7;
		Component __this_02;
		Object obj;
		object pIVar8;
		ulong uVar9;
		Transform* __this_03;
		long lVar10;
		object local_70;
		System_Collections_Generic_List_Enumerator_T__o local_60;
		object* local_58;
		object local_50;
		System_Collections_Generic_List_Enumerator_T__o local_48;

		__this_03 = (Transform*)this;
		if (Il2CppMethodInitialized_07547a21 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_RectTransform_Clear) ;
			__this_03 = &typeof(Transform);
			Il2CppMethodInitialized_07547a21 = true;
		}
		local_50 = null;
		local_48._list = null;
		local_48._index = 0;
		local_48._version = 0;
		local_48._current = null;
		__this_03.EnsureCoreControls(this._layout);
		__this_00 = this._controlsRoot;
		if (__this_00 != null) {
			local_70 = (object)__this_00.GetEnumerator();
			local_60 = (System_Collections_Generic_List_Enumerator_T__o)&local_70;
			local_58 = &local_50;
			do {
				pIVar8 = local_70;
				if (local_70 == null) {
					throw new NullReferenceException();
				}
				pIVar2 = local_70.klass;
				uVar9 = (ulong)(pIVar2._2).interface_offsets_count;
				if (uVar9 != 0) {
					pIVar3 = (pIVar2._1).interfaceOffsets;
					lVar10 = 0;
					do {
						if (*(IEnumerator*)((long)&pIVar3.interfaceType + lVar10) == typeof(IEnumerator)) {
							method_00 = (MethodInfo)(pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar10));
							goto label_05c9db83;
						}
						lVar10 = lVar10 + 0x10;
					} while (uVar9 * 0x10 != lVar10);
				}
				method_00 = (MethodInfo)GetInterfaceInvokeDataFromVTableSlowPath(local_70, typeof(IEnumerator), 0);
	label_05c9db83: ;
				bVar6 = (*method_00.methodPointer)(pIVar8,(MethodInfo)method_00.virtualMethodPointer);
				pIVar8 = local_70;
				if (!bVar6) {
					pIVar8 = (local_70 as IDisposable);
					local_50 = pIVar8;
					if (pIVar8 == null) goto label_05c9dd36;
					pIVar2 = pIVar8.klass;
					uVar9 = (ulong)(pIVar2._2).interface_offsets_count;
					method_00 = null;
					if (uVar9 == 0) goto label_05c9dd0f;
					pIVar3 = (pIVar2._1).interfaceOffsets;
					method_00 = (MethodInfo)(uVar9 * 0x10);
					lVar10 = 0;
					goto label_05c9dd00;
				}
				if (local_70 == null) {
					throw new NullReferenceException();
				}
				pIVar2 = local_70.klass;
				uVar9 = (ulong)(pIVar2._2).interface_offsets_count;
				__this_02 = (Component)pIVar8.Dispose();
				if (__this_02 == null) {
					throw new NullReferenceException();
				}
				bVar1 = (typeof(Transform)._2).typeHierarchyDepth;
				if (((__this_02.klass._2).typeHierarchyDepth < bVar1) ||((__this_02.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(Transform))) {
					throw new InvalidCastException();
				}
				obj = (Object)__this_02.gameObject;
				Object.Destroy(obj);
			} while(true);
		}
		goto label_05c9de34;
		while (true) {
			lVar10 = lVar10 + 0x10;
			if (!(method_00 != (MethodInfo)lVar10)) break;
	label_05c9dd00: ;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar10) == typeof(IDisposable)) {
				method_00 = (MethodInfo)((long)*(int)((long)&pIVar3.offset + lVar10) * 0x10);
				pVVar7 = (VirtualInvokeData)((long)&method_00[3].parameters + (long)pIVar2);
				goto label_05c9dd2d;
			}
		}
	label_05c9dd0f: ;
	label_05c9dd2d: ;
		pIVar8.Dispose();
	label_05c9dd36: ;
		pSVar4 = (Dictionary<object, object>)this._controlRects;
		if (pSVar4 != null) {
			pSVar4.Clear();
			pSVar4 = (Dictionary<object, object>)this._controlParents;
			if (pSVar4 != null) {
				pSVar4.Clear();
				this._selectedControl = null;
				this._selectedRect = null;
				pUVar5 = this._layout;
				if (pUVar5 != null) {
					pUVar5.AssignRuntimeIds();
					pUVar5 = this._layout;
					if ((pUVar5 != null) &&(__this_01 = pUVar5.Controls, __this_01 != null)) {
						local_48 = __this_01.GetEnumerator();
						local_60 = &local_48;
						while (bVar6 = local_48.MoveNext()) {
							this.CreateEditableControl((MobileInputControlLayout)local_48._current, null);
						}
						local_48.Dispose();
						return;
					}
				}
			}
		}
	label_05c9de34: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600475C")]
	[Address(RVA = "0x5B9F0E0", Offset = "0x5B9E0E0", VA = "0x5B9F0E0")]
	private void CreateEditableControl(MobileInputControlLayout control, MobileInputControlLayout parentControl)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$CreateEditableControl): 21 lines keep C-only constructs
		uint uVar1;
		uint uVar2;
		MobileInputControlLayout pUVar3;
		MobileInputControlLayout control_00;
		String name;
		Dictionary<object, object> pSVar4;
		List<MobileInputControlLayout> __this_00;
		Vector2 anchoredPosition;
		bool bVar5;
		int iVar6;
		MobileLayoutEditorOverlay.c__DisplayClass41_0 __this_01;
		GameObject __this_02;
		Image image;
		MobileInputSkin skin;
		RectTransform pUVar7;
		EventTrigger trigger;
		MobileLayoutEditorOverlay pUVar8;
		MobileLayoutEditorOverlay pUVar9;
		MobileInputControlLayout* targetAddress;
		float fVar10;
		Rect UVar11;
		Vector2 local_68;
		System_Collections_Generic_List_Enumerator_T__o local_58;
		System_Collections_Generic_List_Enumerator_T__o local_38;

		local_58._list = null;
		local_58._index = 0;
		local_58._version = 0;
		local_58._current = null;
		__this_01 = new MobileLayoutEditorOverlay.c__DisplayClass41_0();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			targetAddress = &__this_01.control;
			__this_01.control = control;
			pUVar3 = __this_01.control;
			pUVar7 = this._controlsRoot;
			if (pUVar7 != null) {
				UVar11 = pUVar7.rect;
				if ((pUVar3 != null) &&(control_00 = *targetAddress, control_00 != null)) {
					fVar10 = UVar11.m_Width;
					if (UVar11.m_Height <= UVar11.m_Width) {
						fVar10 = UVar11.m_Height;
					}
					uVar1 = pUVar3.Width;
					uVar2 = pUVar3.Height;
					local_68.y = fVar10 * (float)uVar2;
					local_68.x = fVar10 * (float)uVar1;
					name = control_00.Id;
					pUVar7 = this._controlsRoot;
					pUVar9 = this;
					anchoredPosition = this.GetControlPosition(control_00, parentControl);
					__this_02 = pUVar9.CreateRect(name, pUVar7, (Vector2)0x3f0000003f000000, (Vector2)0x3f0000003f000000, local_68, anchoredPosition);
					if (__this_02 != null) {
						image = __this_02.AddComponent<Image>();
						if (*targetAddress != null) {
							skin = (*targetAddress).GetSkin();
							if (*targetAddress != null) {
								iVar6 = (*targetAddress).GetShape();
								MobileControlSkinManager.ApplySkin(image, skin, iVar6);
								pUVar7 = __this_02.GetComponent<RectTransform>();
								this.AddControlIconOrLabel(pUVar7, *targetAddress, local_68);
								trigger = __this_02.AddComponent<EventTrigger>();
								pSVar4 = (Dictionary<object, object>)this._controlRects;
								pUVar3 = *targetAddress;
								pUVar7 = __this_02.GetComponent<RectTransform>();
								if (pSVar4 != null) {
									pSVar4.set_Item((object)pUVar3, (object)pUVar7);
									if (parentControl != null) {
										pSVar4 = (Dictionary<object, object>)this._controlParents;
										if (pSVar4 == null) goto label_05c9f5a6;
										pSVar4.set_Item((object)*targetAddress, (object)parentControl);
									}
									pUVar9 = pUVar8;
									pUVar8 = new Action<BaseEventData>((object)__this_01, (intptr_t) MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass41_0_CreateEditableControl_b__0);
									pUVar9.AddTrigger(trigger, 2, (Action<BaseEventData>)pUVar8);
									pUVar9 = pUVar8;
									pUVar8 = new Action<BaseEventData>((object)__this_01, (intptr_t) MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass41_0_CreateEditableControl_b__1);
									pUVar9.AddTrigger(trigger, 5, (Action<BaseEventData>)pUVar8);
									pUVar9 = pUVar8;
									pUVar8 = new Action<BaseEventData>((object)__this_01, (intptr_t) MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass41_0_CreateEditableControl_b__2);
									pUVar9.AddTrigger(trigger, 3, (Action<BaseEventData>)pUVar8);
									pUVar9 = pUVar8;
									pUVar8 = new Action<BaseEventData>((object)__this_01, (intptr_t) MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass41_0_CreateEditableControl_b__3);
									pUVar9.AddTrigger(trigger, 1, (Action<BaseEventData>)pUVar8);
									if (parentControl == null) {
										if (*targetAddress == null) goto label_05c9f5a6;
										iVar6 = (*targetAddress).GetKind();
										if (iVar6 == 2) {
											if (*targetAddress == null) goto label_05c9f5a6;
											__this_00 = ((*targetAddress).fields).Children;
											if (__this_00 != null) {
												local_58 = __this_00.GetEnumerator();
												local_38 = &local_58;
												while(true) {
													bVar5 = local_58.MoveNext();
													if (!bVar5) break;
													this.CreateEditableControl((MobileInputControlLayout)local_58._current, *targetAddress);
												}
												local_58.Dispose();
											}
										}
									}
									return;
								}
							}
						}
					}
				}
			}
		}
	label_05c9f5a6: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600475D")]
	[Address(RVA = "0x5B9FAA0", Offset = "0x5B9EAA0", VA = "0x5B9FAA0")]
	private void SelectControl(MobileInputControlLayout control)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$SelectControl): 9 lines keep C-only constructs
		Vector2 UVar1;
		Vector2 UVar2;
		Dictionary<object, object> __this_00;
		Vector2 anchorMin;
		Vector2 anchorMax;
		bool bVar3;
		Vector2* __this_01;
		UnityEngine_Vector2_StaticFields pUVar4;
		GameObject __this_02;
		RectTransform pUVar5;
		Image pUVar6;
		RectTransform* targetAddress;
		float fVar7;
		float fVar8;
		float fVar9;
		float fVar10;
		Color UVar11;
		RectTransform local_40;
		Vector2 local_38;
		Vector2 local_28;

		local_40 = null;
		if (control == null) {
			return;
		}
		__this_00 = (Dictionary<object, object>)this._controlRects;
		if (__this_00 != null) {
			bVar3 = __this_00.TryGetValue((object)control, (object*)&local_40);
			if (!bVar3) {
				return;
			}
			this._selectedControl = control;
			__this_01 = (Vector2*)this._selectedRect;
			targetAddress = &this._selectedRect;
			bVar3 = ((Object)__this_01 != null);
			if (bVar3) {
				if (*targetAddress == null) goto label_05c9fcdf;
				__this_01 = (Vector2*)(*targetAddress).gameObject;
				Object.Destroy((Object)__this_01);
			}
			pUVar5 = local_40;
			if (Il2CppMethodInitialized_0753ecc8 == false) {
				__this_01 = &typeof(Vector2);
				Il2CppMethodInitialized_0753ecc8 = true;
			}
			pUVar4 = typeof(Vector2).static_fields;
			UVar1 = (pUVar4.zeroVector);
			if (Il2CppMethodInitialized_07542885 == false) {
				__this_01 = &typeof(Vector2);
				local_38 = UVar1;
				Il2CppMethodInitialized_07542885 = true;
				pUVar4 = typeof(Vector2).static_fields;
				UVar1 = (pUVar4.oneVector);
				fVar9 = UVar1.x;
				fVar10 = UVar1.y;
				if (Il2CppMethodInitialized_0753ecc8 == false) {
					__this_01 = &typeof(Vector2);
					local_28 = UVar1;
					Il2CppMethodInitialized_0753ecc8 = true;
					pUVar4 = typeof(Vector2).static_fields;
					fVar9 = local_28.x;
					fVar10 = local_28.y;
				}
				fVar7 = local_38.x;
				fVar8 = local_38.y;
			}
			else {
				UVar2 = (pUVar4.oneVector);
				fVar9 = UVar2.x;
				fVar10 = UVar2.y;
				fVar7 = UVar1.x;
				fVar8 = UVar1.y;
			}
			UVar1 = (pUVar4.zeroVector);
			anchorMin.y = fVar8;
			anchorMin.x = fVar7;
			anchorMax.y = fVar10;
			anchorMax.x = fVar9;
			__this_02 = __this_01.CreateRect("Selection", pUVar5, anchorMin, anchorMax, (Vector2)UVar1, (Vector2)UVar1);
			if (__this_02 != null) {
				pUVar5 = __this_02.GetComponent<RectTransform>();
				*targetAddress = pUVar5;
				pUVar6 = __this_02.AddComponent<Image>();
				if (pUVar6 != null) {
					UVar11.b = 0.1;
					UVar11.a = 0.25;
					UVar11.r = 1.0;
					UVar11.g = 0.85;
					pUVar6.set_color(UVar11);
					pUVar6.set_raycastTarget(false);
					return;
				}
			}
		}
	label_05c9fcdf: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600475E")]
	[Address(RVA = "0x5B9FCF0", Offset = "0x5B9ECF0", VA = "0x5B9FCF0")]
	private void BeginControlDrag(MobileInputControlLayout control, PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$BeginControlDrag): clean
		Vector2 UVar1;
		Dictionary<object, object> __this_00;
		RectTransform rect;
		Vector2 UVar2;
		RectTransform __this_01;
		float fVar3;
		float fVar4;
		Vector2 UStack_40;
		Vector2 UStack_38;

		UStack_40.x = 0.0;
		UStack_40.y = 0.0;
		this.SelectControl(control);
		this._draggingControl = control;
		if (eventData != null) {
			this._dragPointerId = eventData._pointerId_k__BackingField;
			__this_00 = (Dictionary<object, object>)this._controlRects;
			if (__this_00 != null) {
				__this_01 = __this_00.get_Item((object)control);
				rect = this._controlsRoot;
				UVar1 = eventData._position_k__BackingField;
				fVar3 = UVar1.x;
				fVar4 = UVar1.y;
				if ((typeof(RectTransformUtility)._2).cctor_finished_or_no_cctor == 0) {
					UStack_38 = UVar1;
					fVar3 = UStack_38.x;
					fVar4 = UStack_38.y;
				}
				UVar2.y = fVar4;
				UVar2.x = fVar3;
				RectTransformUtility.ScreenPointToLocalPointInRectangle(rect, UVar2, null, ref UStack_40) ;
				if (__this_01 != null) {
					UVar2 = __this_01.anchoredPosition;
					UVar1.y = UVar2.y - UStack_40.y;
					UVar1.x = UVar2.x - UStack_40.x;
					this._controlDragOffset = UVar1;
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600475F")]
	[Address(RVA = "0x5B9FE00", Offset = "0x5B9EE00", VA = "0x5B9FE00")]
	private void DragControl(MobileInputControlLayout control, Vector2 screenPosition)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$DragControl): 3 lines keep C-only constructs
		Vector2 UVar1;
		Dictionary<object, object> pSVar2;
		RectTransform rect;
		Vector2 value;
		Vector2 position;
		MobileInputControlLayout pUVar3;
		bool bVar4;
		int iVar5;
		MethodInfo pMVar6;
		float fVar7;
		float fVar8;
		Vector2 local_30;
		RectTransform local_28;
		MobileInputControlLayout local_20;

		local_28 = null;
		local_30.x = 0.0;
		local_30.y = 0.0;
		if (this._draggingControl != control) {
			return;
		}
		pSVar2 = (Dictionary<object, object>)this._controlRects;
		if (pSVar2 != null) {
			bVar4 = pSVar2.TryGetValue((object)control, (object*)&local_28);
			if (!bVar4) {
				return;
			}
			rect = this._controlsRoot;
			RectTransformUtility.ScreenPointToLocalPointInRectangle(rect, screenPosition, null, ref local_30);
			if (local_28 != null) {
				UVar1 = this._controlDragOffset;
				fVar7 = UVar1.x + local_30.x;
				fVar8 = UVar1.y + local_30.y;
				position.y = fVar8;
				position.x = fVar7;
				value.y = fVar8;
				value.x = fVar7;
				local_28.anchoredPosition = value;
				local_20 = null;
				if (control == null) {
					this.SavePosition(null, position, null);
					throw new NullReferenceException();
				}
				pSVar2 = (Dictionary<object, object>)this._controlParents;
				if (pSVar2 != null) {
					pMVar6 = MethodInfo_System_Collections_Generic_Dictionary_MobileInputControlLayout_MobileInputControlLayout_TryGetVa ;
					bVar4 = pSVar2.TryGetValue((object)control, (object*)&local_20);
					pUVar3 = local_20;
					if (bVar4) {
						this.SavePosition(control, position, local_20);
						if (pUVar3 != null) {
							return;
						}
					}
					else {
						this.SavePosition(control, position, null);
					}
					iVar5 = control.GetKind();
					if (iVar5 == 2) {
						this.UpdatePopupChildRects(control);
						return;
					}
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004760")]
	[Address(RVA = "0x5BA0400", Offset = "0x5B9F400", VA = "0x5BA0400")]
	private void EndControlDrag(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$EndControlDrag): clean
		if (eventData == null) {
			throw new NullReferenceException();
		}
		if (this._dragPointerId == eventData._pointerId_k__BackingField) {
			this._draggingControl = null;
			return;
		}
		return;
	}

	[Token(Token = "0x6004761")]
	[Address(RVA = "0x5BA0440", Offset = "0x5B9F440", VA = "0x5BA0440")]
	private void EndControlDragIfReleased(PointerEventData eventData)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$EndControlDragIfReleased): clean
		if (eventData == null) {
			throw new NullReferenceException();
		}
		if (((this._dragPointerId == eventData._pointerId_k__BackingField) &&(eventData._eligibleForClick_k__BackingField == false)) &&(eventData._dragging_k__BackingField == false)) {
			this._draggingControl = null;
			return;
		}
		return;
	}

	[Token(Token = "0x6004762")]
	[Address(RVA = "0x5B9E6E0", Offset = "0x5B9D6E0", VA = "0x5B9E6E0")]
	private void UpdateControlDrag()
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$UpdateControlDrag): 2 lines keep C-only constructs
		bool bVar1;
		MobileInputControlLayout* targetAddress;
		Vector2 local_10;

		local_10.x = 0.0;
		local_10.y = 0.0;
		if (this._draggingControl != null) {
			bVar1 = MobilePlatformUtility.TryGetHeldPointerPosition(this._dragPointerId, ref local_10);
			if (!bVar1) {
				targetAddress = &this._draggingControl;
				*targetAddress = null;
				return;
			}
			this.DragControl(this._draggingControl, (Vector2)local_10);
		}
		return;
	}

	[Token(Token = "0x6004763")]
	[Address(RVA = "0x5BA0490", Offset = "0x5B9F490", VA = "0x5BA0490")]
	private void AddControl()
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$AddControl): clean
		MobileInputControlLayout __this_00;

		__this_00 = new MobileInputControlLayout();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.Label = "BTN";
		__this_00.Actions = "None";
		__this_00.X = 0.5;
		__this_00.Y = 0.5;
		__this_00.Width = 0.08;
		__this_00.Height = 0.08;
		this.ShowEditPopup(__this_00, true, null);
		return;
	}

	[Token(Token = "0x6004764")]
	[Address(RVA = "0x5BA2E90", Offset = "0x5BA1E90", VA = "0x5BA2E90")]
	private void EditSelected()
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$EditSelected): clean
		MobileInputControlLayout control;

		control = this._selectedControl;
		if (control == null) {
			return;
		}
		this.ShowEditPopup(control, false, null) ;
		return;
	}

	[Token(Token = "0x6004765")]
	[Address(RVA = "0x5BA2EB0", Offset = "0x5BA1EB0", VA = "0x5BA2EB0")]
	private void DeleteSelected()
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$DeleteSelected): 4 lines keep C-only constructs
		MobileInputControlLayout* targetAddress;
		MobileInputControlLayout pUVar1;
		Dictionary<object, object> pSVar2;
		MobileInputLayout pUVar3;
		bool bVar4;
		Object obj;
		List<MobileInputControlLayout> __this_00;
		Component local_28;
		object local_20;

		local_28 = null;
		pUVar1 = this._selectedControl;
		if (pUVar1 == null) {
			return;
		}
		pSVar2 = (Dictionary<object, object>)this._controlRects;
		if (pSVar2 == null) goto label_05ca3041;
		bVar4 = pSVar2.TryGetValue((object)pUVar1, (object*)&local_28);
		if (bVar4) {
			if (local_28 == null) goto label_05ca3041;
			obj = (Object)local_28.gameObject;
			Object.Destroy(obj);
		}
		targetAddress = &this._selectedControl;
		pUVar1 = *targetAddress;
		local_20 = null;
		if (pUVar1 == null) {
	label_05ca2fdc: ;
			pUVar3 = this._layout;
			if ((pUVar3 == null) ||(__this_00 = pUVar3.Controls, __this_00 == null)) goto label_05ca3041;
		}
		else {
			pSVar2 = (Dictionary<object, object>)this._controlParents;
			if (pSVar2 == null) goto label_05ca3041;
			bVar4 = pSVar2.TryGetValue((object)pUVar1, ref local_20);
			if (((!bVar4) || (local_20 == null)) ||(__this_00 = local_20[0xb].monitor, __this_00 == null)) goto label_05ca2fdc;
		}
		__this_00.Remove((object)this._selectedControl) ;
		pSVar2 = (Dictionary<object, object>)this._controlRects;
		if (pSVar2 != null) {
			pSVar2.Remove((object)this._selectedControl) ;
			this._selectedControl = null;
			this.RebuildControls();
			return;
		}
	label_05ca3041: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004766")]
	[Address(RVA = "0x5BA3050", Offset = "0x5BA2050", VA = "0x5BA3050")]
	private void CopySelected()
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$CopySelected): 11 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		uint uVar3;
		uint uVar4;
		uint uVar5;
		uint uVar6;
		Dictionary<object, object> __this_00;
		MobileInputLayout pUVar7;
		MobileInputControlLayout[] pUVar8;
		bool bVar10;
		MobileInputControlLayout control;
		List<MobileInputControlLayout> pSVar11;
		MobileInputControlLayout pUVar12;
		IntPtr targetAddress;
		byte[] auVar13 = new byte[16];
		object pIStack_28;

		pUVar12 = this._selectedControl;
		if (pUVar12 == null) {
			return;
		}
		control = pUVar12.Clone();
		pUVar12 = this._selectedControl;
		pIStack_28 = null;
		if (pUVar12 == null) {
	label_05ca3172: ;
			if (control == null) goto label_05ca3226;
			uVar3 = control.X;
			uVar5 = control.Y;
			auVar13._4_4_ = (float)uVar5 + 0.03;
			auVar13._0_4_ = (float)uVar3 + 0.03;
			auVar13._8_8_ = 0;
			auVar13 = minps(_DAT_01005870, auVar13);
			control.X = (float)(-(uint)(0.0 <= (float)uVar3 + 0.03) & auVar13._0_4_);
			control.Y = (float)(-(uint)(0.0 <= (float)uVar5 + 0.03) & auVar13._4_4_);
			pUVar7 = this._layout;
			if (pUVar7 == null) goto label_05ca3226;
			pSVar11 = pUVar7.Controls;
	label_05ca31af: ;
			if (pSVar11 == null) goto label_05ca3226;
		}
		else {
			__this_00 = (Dictionary<object, object>)this._controlParents;
			if (__this_00 == null) goto label_05ca3226;
			bVar10 = __this_00.TryGetValue((object)pUVar12, ref pIStack_28);
			if ((!bVar10) || (pIStack_28 == null)) goto label_05ca3172;
			if (control == null) goto label_05ca3226;
			uVar2 = control.X;
			uVar4 = control.Y;
			control.X = (float)uVar2 + 0.03;
			control.Y = (float)uVar4 + 0.03;
			pSVar11 = pIStack_28[0xb].monitor;
			if (pSVar11 == null) {
				targetAddress = &pIStack_28[0xb].monitor;
				pSVar11 = new List<MobileInputControlLayout>();
				*targetAddress = pSVar11;
				pSVar11 = *targetAddress;
				goto label_05ca31af;
			}
		}
		piVar1 = &pSVar11._version;
		*piVar1 = *piVar1 + 1;
		pUVar8 = pSVar11._items;
		if (pUVar8 != null) {
			uVar6 = pSVar11._size;
			pUVar12 = control;
			if (uVar6 < (uint)pUVar8.Length) {
				pSVar11._size = uVar6 + 1;
				pUVar8[(int)uVar6] = control;
			}
			else {
				pSVar11.AddWithResize((object)control);
			}
			this.RebuildControls();
			this.SelectControl(control);
			return;
		}
	label_05ca3226: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004767")]
	[Address(RVA = "0x5BA3230", Offset = "0x5BA2230", VA = "0x5BA3230")]
	private void SavePreset()
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$SavePreset): 2 lines keep C-only constructs
		int role;
		Transform pUVar1;
		MobileInputLayout pUVar2;
		bool bVar3;
		MobileLayoutEditorOverlay.c__DisplayClass52_0 __this_00;
		String pSVar4;
		MobileLayoutEditorModal __this_01;
		GameObject pUVar5;
		ElementStyle __this_02;
		StringSetting pSVar6;
		MobileLayoutEditorOverlay pUVar7;
		MobileLayoutEditorOverlay pUVar8;
		MethodInfo method_00;
		DateTime SStack_40;
		ElementStyle pUStack_38;

		SStack_40._dateData = (DateTime)0;
		__this_00 = new MobileLayoutEditorOverlay.c__DisplayClass52_0();
		if (__this_00 == null) {
	label_05ca36e1: ;
			throw new NullReferenceException();
		}
		__this_00.__4__this = this;
		pSVar4 = UIManager.GetLocaleCommon("SavePreset");
		__this_01 = this.CreateModal(pSVar4, 480.0, 230.0, false);
		if (__this_01 == null) goto label_05ca36e1;
		pUVar5 = __this_01.gameObject;
		__this_00.panel = pUVar5;
		pUVar1 = __this_01.SinglePanel;
		__this_02 = new ElementStyle(0x14, 150.0, 12.0, "DefaultPanel");
		pUVar2 = this._layout;
		if (pUVar2 == null) goto label_05ca36e1;
		bVar3 = String.IsNullOrEmpty(pUVar2.Name);
		if (!bVar3) {
			pUVar2 = this._layout;
			if (pUVar2 == null) goto label_05ca36e1;
			if ((pUVar2.Builtin == false) &&(bVar3 = (pUVar2.Name == "Default"), !bVar3)) {
				pUVar2 = this._layout;
				if (pUVar2 == null) goto label_05ca36e1;
				pSVar4 = pUVar2.Name;
				goto label_05ca34f1;
			}
		}
		role = this._role;
		SStack_40 = DateTime.Now;
		pSVar4 = SStack_40.ToString("MMdd-HHmmss");
		pSVar4 = String.Concat("Custom ", pSVar4);
		pSVar4 = MobileInputLayoutManager.GetUniqueLayoutName(role, pSVar4);
	label_05ca34f1: ;
		pUStack_38 = __this_02;
		pSVar6 = new StringSetting(pSVar4, 0x30);
		__this_00.name = pSVar6;
		pSVar4 = "PresetName";
		pSVar6 = __this_00.name;
		pSVar4 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar4, "", "");
		method_00 = (MethodInfo *)"";
		ElementFactory.CreateInputSetting(pUVar1, pUStack_38, (BaseSetting)pSVar6, pSVar4, "", 260.0, 34.0, false, null, null, null, null);
		pSVar4 = UIManager.GetLocaleCommon("Save");
		pUVar1 = __this_01.BottomBar;
		pUVar8 = pUVar7;
		pUVar7 = new Action((object)__this_00, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass52_0_SavePreset_b__0);
		pUVar8.CreateTextButton(pSVar4, pUVar1, (Vector2)0x4228000042f00000, (Action)pUVar7);
		pSVar4 = UIManager.GetLocaleCommon("Cancel");
		pUVar1 = __this_01.BottomBar;
		pUVar8 = pUVar7;
		pUVar7 = new Action((object)__this_00, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass52_0_SavePreset_b__1);
		pUVar8.CreateTextButton(pSVar4, pUVar1, (Vector2)0x4228000042f00000, (Action)pUVar7);
		return;
	}

	[Token(Token = "0x6004768")]
	[Address(RVA = "0x5BA3B10", Offset = "0x5BA2B10", VA = "0x5BA3B10")]
	private void ShowSavedPopup(string name)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$ShowSavedPopup): 1 lines keep C-only constructs
		Transform pUVar1;
		MobileLayoutEditorOverlay.c__DisplayClass53_0 __this_00;
		String pSVar2;
		MobileLayoutEditorModal __this_01;
		GameObject pUVar3;
		RectTransform parent;
		MobileLayoutEditorOverlay pUVar4;
		MobileLayoutEditorOverlay __this_02;
		MethodInfo method_00;
		MethodInfo method_01;

		__this_00 = new MobileLayoutEditorOverlay.c__DisplayClass53_0();
		pSVar2 = UIManager.GetLocaleCommon("Save");
		__this_01 = this.CreateModal(pSVar2, 480.0, 190.0, false);
		if (__this_01 != null) {
			pUVar3 = __this_01.gameObject;
			if (__this_00 != null) {
				__this_00.panel = pUVar3;
				pUVar1 = __this_01.SinglePanel;
				if (pUVar1 != null) {
					parent = pUVar1.GetComponent<RectTransform>() ;
					pSVar2 = "Saved";
					method_00 = (MethodInfo *)"";
					method_01 = (MethodInfo *)"";
					pUVar4 = (MobileLayoutEditorOverlay)UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar2, "", "");
					pSVar2 = String.Format((String)pUVar4, (object)name);
					pUVar4.AddModalLabel(parent, pSVar2);
					pSVar2 = UIManager.GetLocaleCommon("Okay");
					pUVar1 = __this_01.BottomBar;
					pUVar4 = __this_02;
					__this_02 = new Action((object)__this_00, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass53_0_ShowSavedPopup_b__0);
					pUVar4.CreateTextButton(pSVar2, pUVar1, (Vector2)0x4228000042f00000, (Action)__this_02);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004769")]
	[Address(RVA = "0x5BA3E60", Offset = "0x5BA2E60", VA = "0x5BA3E60")]
	private void ShowLoadPopup()
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$ShowLoadPopup): 20 lines keep C-only constructs
		Vector2 UVar1;
		Vector2 UVar2;
		Transform pUVar3;
		object @object;
		Vector2 anchorMin;
		Vector2 anchorMax;
		Il2CppType handle;
		MobileLayoutEditorOverlay.c__DisplayClass54_0 targetAddress;
		MobileLayoutEditorOverlay.c__DisplayClass54_0 __this_00;
		String pSVar4;
		MobileLayoutEditorModal pUVar5;
		GameObject pUVar6;
		MobileLayoutEditorOverlay pUVar7;
		Type enumType;
		IEnumerable source;
		System_Collections_Generic_IEnumerable_TResult__o pSVar8;
		Int32Enum[] source_00;
		UI_MobileLayoutEditorOverlay___c_StaticFields pUVar9;
		Func<T, TResult> __this_01;
		StringSetting __this_02;
		MethodInfo method_00;
		Func<string, string> __this_03;
		MobileLayoutEditorOverlay __this_04;
		UnityEngine_Vector2_StaticFields pUVar10;
		RectTransform pUVar11;
		VerticalLayoutGroup __this_05;
		LayoutElement pUVar12;
		MobileLayoutEditorOverlay pUVar13;
		Vector2* __this_06;
		float fVar14;
		float fVar15;
		float fVar16;
		float fVar17;
		Nullable<float> SStack_90;
		Vector2 UStack_88;
		Vector2 UStack_78;
		MobileLayoutEditorModal pUStack_68;
		GameObject* ppUStack_60;
		MethodInfo pMStack_58;
		MobileLayoutEditorOverlay.c__DisplayClass54_0 pUStack_50;
		Enum SStack_48;

		__this_00 = new MobileLayoutEditorOverlay.c__DisplayClass54_0();
		if (__this_00 != null) {
			__this_00.__4__this = this;
			pSVar4 = UIManager.GetLocaleCommon("LoadPreset");
			pUVar5 = this.CreateModal(pSVar4, 580.0, 640.0, true);
			if (pUVar5 != null) {
				pUVar6 = pUVar5.gameObject;
				ppUStack_60 = &__this_00.panel;
				__this_00.panel = pUVar6;
				pUVar3 = pUVar5.SinglePanel;
				if (pUVar3 != null) {
					pUVar7 = (MobileLayoutEditorOverlay)pUVar3.GetComponent<RectTransform>() ;
					UStack_88 = new ElementStyle(0x18, 200.0, 20.0, "DefaultPanel");
					handle = TypeRef_UI_MobileInputLayoutRole;
					pUStack_68 = pUVar5;
					enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
					source = (IEnumerable)Enum.GetValues(enumType);
					pSVar8 = Enumerable.Cast<MobileInputLayoutRole>(source);
					source_00 = Enumerable.ToArray<MobileInputLayoutRole>((System_Collections_Generic_IEnumerable_TSource__o)pSVar8);
					pUVar9 = typeof(MobileLayoutEditorOverlay.c).static_fields;
					__this_01 = (Func<T, TResult>)pUVar9.__9__54_0;
					if (__this_01 == null) {
						if ((typeof(MobileLayoutEditorOverlay.c)._2).cctor_finished_or_no_cctor == 0) {
							pUVar9 = typeof(MobileLayoutEditorOverlay.c).static_fields;
						}
						@object = (object)pUVar9.__9;
						__this_01 = new Func<MobileInputLayoutRole, string>(@object, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c_ShowLoadPopup_b__54_0);
						pUVar9 = typeof(MobileLayoutEditorOverlay.c).static_fields;
						pUVar9.__9__54_0 = (Func<MobileInputLayoutRole, string>)__this_01;
					}
					pSVar8 = Enumerable.Select<MobileInputLayoutRole, string>((System_Collections_Generic_IEnumerable_TSource__o)source_00, (System_Func_TSource__TResult__o)__this_01);
					UStack_78 = (Vector2)Enumerable.ToArray<string>((System_Collections_Generic_IEnumerable_TSource__o)pSVar8);
					SStack_48.klass = (Enum)typeof(MobileInputLayoutRole);
					SStack_48.monitor = (IntPtr)0xffffffffffffffff;
					pSVar4 = SStack_48.ToString();
					__this_02 = new StringSetting(pSVar4, 0x7fffffff);
					__this_00.roleSetting = __this_02;
					pUStack_50 = &__this_00.fields;
					__this_00.listRoot = null;
					pSVar4 = "PresetType";
					pMStack_58 = (MethodInfo)__this_00.roleSetting;
					method_00 = (MethodInfo)UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar4, "", "");
					__this_03 = new Func<string, string>((object)this, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_RoleOptionLabel);
					SStack_90.hasValue = false;
					SStack_90._1_3_ = 0;
					SStack_90.value = 0.0;
					SStack_90 = new Nullable<float>(260.0);
					pUVar13 = __this_04;
					__this_04 = new UnityAction((object)__this_00, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass54_0_ShowLoadPopup_b__1);
					UVar1 = UStack_88;
					pUVar6 = pUVar13.CreateLocalizedDropdownSetting((Transform)pUVar7, (ElementStyle)UStack_88, (BaseSetting)pMStack_58, (String)method_00, (String[])UStack_78, __this_03, "", 260.0, 36.0, 300.0, (Nullable<float>)SStack_90, (UnityAction)__this_04);
					this.RegisterDropdown(pUVar6);
					__this_06 = (Vector2*)pUVar7;
					ElementFactory.CreateHorizontalLine((Transform)pUVar7, (ElementStyle)UVar1, 520.0, 1.0);
					if (Il2CppMethodInitialized_0753ecc8 == false) {
						__this_06 = &typeof(Vector2);
						Il2CppMethodInitialized_0753ecc8 = true;
					}
					targetAddress = pUStack_50;
					pUVar10 = typeof(Vector2).static_fields;
					UVar1 = (pUVar10.zeroVector);
					if (Il2CppMethodInitialized_07542885 == false) {
						__this_06 = &typeof(Vector2);
						UStack_88 = UVar1;
						Il2CppMethodInitialized_07542885 = true;
						pUVar10 = typeof(Vector2).static_fields;
						UVar1 = (pUVar10.oneVector);
						fVar16 = UVar1.x;
						fVar17 = UVar1.y;
						if (Il2CppMethodInitialized_0753ecc8 == false) {
							__this_06 = &typeof(Vector2);
							UStack_78 = UVar1;
							Il2CppMethodInitialized_0753ecc8 = true;
							pUVar10 = typeof(Vector2).static_fields;
							fVar16 = UStack_78.x;
							fVar17 = UStack_78.y;
						}
						fVar14 = UStack_88.x;
						fVar15 = UStack_88.y;
					}
					else {
						UVar2 = (pUVar10.oneVector);
						fVar16 = UVar2.x;
						fVar17 = UVar2.y;
						fVar14 = UVar1.x;
						fVar15 = UVar1.y;
					}
					UVar1 = (pUVar10.zeroVector);
					anchorMin.y = fVar15;
					anchorMin.x = fVar14;
					anchorMax.y = fVar17;
					anchorMax.x = fVar16;
					pUVar6 = __this_06.CreateRect("PresetList", (RectTransform)pUVar7, anchorMin, anchorMax, (Vector2)UVar1, (Vector2)UVar1);
					if (pUVar6 != null) {
						pUVar11 = pUVar6.GetComponent<RectTransform>();
						targetAddress.listRoot = pUVar11;
						__this_05 = pUVar6.AddComponent<VerticalLayoutGroup>();
						if (__this_05 != null) {
							__this_05.spacing = 8.0;
							__this_05.childAlignment = 1;
							__this_05.childControlWidth = true;
							__this_05.childForceExpandWidth = true;
							__this_05.childForceExpandHeight = false;
							pUVar12 = pUVar6.AddComponent<LayoutElement>();
							if (pUVar12 != null) {
								pUVar12.set_flexibleHeight(1.0);
								this.PopulatePresetList(targetAddress.listRoot, *ppUStack_60, this._role);
								pSVar4 = UIManager.GetLocaleCommon("Import");
								pUVar5 = pUStack_68;
								pUVar3 = pUStack_68.BottomBar;
								pUVar7 = pUVar13;
								pUVar13 = new Action((object)__this_00, (intptr_t) MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass54_0_ShowLoadPopup_b__2);
								pUVar7.CreateTextButton(pSVar4, pUVar3, (Vector2)0x4228000042f00000, (Action)pUVar13);
								pSVar4 = UIManager.GetLocaleCommon("Export");
								pUVar3 = pUVar5.BottomBar;
								pUVar7 = pUVar13;
								pUVar13 = new Action((object)__this_00, (intptr_t) MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass54_0_ShowLoadPopup_b__3);
								pUVar7.CreateTextButton(pSVar4, pUVar3, (Vector2)0x4228000042f00000, (Action)pUVar13);
								pSVar4 = UIManager.GetLocaleCommon("Cancel");
								pUVar3 = pUVar5.BottomBar;
								pUVar7 = pUVar13;
								pUVar13 = new Action((object)__this_00, (intptr_t) MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass54_0_ShowLoadPopup_b__4);
								pUVar7.CreateTextButton(pSVar4, pUVar3, (Vector2)0x4228000042f00000, (Action)pUVar13);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600476A")]
	[Address(RVA = "0x5BA5590", Offset = "0x5BA4590", VA = "0x5BA5590")]
	private void ShowMenuPopupAboveEditor(BasePopup popup)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$ShowMenuPopupAboveEditor): clean
		bool bVar1;
		RectTransform pUVar2;

		bVar1 = ((Object)popup == null);
		if (!bVar1) {
			pUVar2 = this._root;
			bVar1 = ((Object)pUVar2 == null);
			if (!bVar1) {
				if (popup != null) {
					pUVar2 = popup.GetComponent<RectTransform>() ;
					if (pUVar2 != null) {
						pUVar2.SetParent((Transform)this._root, false);
						pUVar2.anchorMin = (Vector2)0x3f0000003f000000;
						pUVar2.anchorMax = (Vector2)0x3f0000003f000000;
						pUVar2.anchoredPosition = (Vector2)(Vector2.zeroVector);
						pUVar2.SetAsLastSibling();
						return;
					}
				}
				throw new NullReferenceException();
			}
		}
		return;
	}

	[Token(Token = "0x600476B")]
	[Address(RVA = "0x5BA56D0", Offset = "0x5BA46D0", VA = "0x5BA56D0")]
	private void ImportLayoutFromPopup(GameObject loadPanel)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$ImportLayoutFromPopup): 7 lines keep C-only constructs
		ImportPopup pUVar1;
		StringSetting pSVar2;
		int iVar3;
		String json;
		MobileInputLayout __this_00;
		MethodInfo pMVar4;
		Il2CppClass klass;
		Exception __this_01;
		MethodInfo* __this_02;

		__this_02 = (MethodInfo*)this;
		if (Il2CppMethodInitialized_07547a2d == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_JsonUtility_FromJson_MobileInputLayout) ;
			__this_02 = &MethodInfo_Settings_TypedSetting_string_get_Value;
			Il2CppMethodInitialized_07547a2d = true;
		}
		pUVar1 = this._importPopup;
		if ((pUVar1 == null) ||(pSVar2 = pUVar1.ImportSetting, pSVar2 == null)) {
			throw new NullReferenceException();
		}
		json = __this_02.NormalizeImportedLayoutJson(pSVar2._value);
		__this_00 = JsonUtility.FromJson<MobileInputLayout>(json);
		if ((__this_00 == null) ||(__this_00.Controls == null)) {
			klass = il2cpp_codegen_get_runtime_metadata(&typeof(Exception));
			__this_01 = (Exception)il2cpp_codegen_object_new(klass);
			__this_01 = new Exception();
			pMVar4 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_UI_MobileLayoutEditorOverlay_ImportLayoutFromPopup);
			throw (object)__this_01;
		}
		iVar3 = __this_00.GetRole();
		this._role = iVar3;
		pMVar4 = (MethodInfo)__this_00.Clone(null, false) ;
		this._layout = (MobileInputLayout)pMVar4;
		this.RebuildControls();
		this.RefreshRestorePanel();
		pUVar1.Hide();
		Object.Destroy((Object)loadPanel);
		return;
	}

	[Token(Token = "0x600476C")]
	[Address(RVA = "0x5BA5A70", Offset = "0x5BA4A70", VA = "0x5BA5A70")]
	private string NormalizeImportedLayoutJson(string value)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$NormalizeImportedLayoutJson): clean
		bool bVar1;
		int iVar2;
		int iVar3;
		String pSVar4;

		bVar1 = String.IsNullOrEmpty(value);
		if (bVar1) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (value != null) {
			pSVar4 = value.Trim();
			if (pSVar4 != null) {
				pSVar4 = pSVar4.Trim(0xfeff);
				if (pSVar4 != null) {
					bVar1 = pSVar4.StartsWith("```");
					if (bVar1) {
						iVar2 = pSVar4.IndexOf(10);
						if (-1 < iVar2) {
							pSVar4 = pSVar4.Substring(iVar2 + 1);
							if (pSVar4 == null) goto label_05ca5be2;
						}
						pSVar4 = pSVar4.Trim();
						if (pSVar4 == null) goto label_05ca5be2;
						bVar1 = pSVar4.EndsWith("```");
						if (bVar1) {
							pSVar4 = pSVar4.Substring(0, pSVar4._stringLength + -3);
							if (pSVar4 == null) goto label_05ca5be2;
						}
					}
					iVar2 = pSVar4.IndexOf(0x7b);
					iVar3 = pSVar4.LastIndexOf(0x7d);
					if ((-1 < iVar2) && (iVar3 - iVar2 != 0 && iVar2 <= iVar3)) {
						pSVar4 = pSVar4.Substring(iVar2, (iVar3 - iVar2) + 1);
						if (pSVar4 == null) goto label_05ca5be2;
					}
					pSVar4 = pSVar4.Trim();
					if (pSVar4 != null) {
						pSVar4 = pSVar4.Trim(0xfeff);
						return pSVar4;
					}
				}
			}
		}
	label_05ca5be2: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600476D")]
	[Address(RVA = "0x5BA5BF0", Offset = "0x5BA4BF0", VA = "0x5BA5BF0")]
	private string GetPreview(string value, bool start)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$GetPreview): clean
		int iVar1;
		bool bVar2;
		String pSVar3;
		int length;
		int startIndex;

		bVar2 = String.IsNullOrEmpty(value);
		if (bVar2) {
			return (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		if (value != null) {
			iVar1 = value._stringLength;
			length = 0x20;
			if (iVar1 < 0x20) {
				length = iVar1;
			}
			startIndex = iVar1 - length;
			if (start) {
				startIndex = 0;
			}
			pSVar3 = value.Substring(startIndex, length);
			if (pSVar3 != null) {
				pSVar3 = pSVar3.Replace("\r", "\\r");
				if (pSVar3 != null) {
					pSVar3 = pSVar3.Replace("\n", "\\n");
					return pSVar3;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600476E")]
	[Address(RVA = "0x5BA49B0", Offset = "0x5BA39B0", VA = "0x5BA49B0")]
	private void PopulatePresetList(RectTransform listRoot, GameObject panel, MobileInputLayoutRole role)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$PopulatePresetList): 29 lines keep C-only constructs
		MobileLayoutEditorOverlay.c__DisplayClass59_0* targetAddress;
		Vector2 size;
		byte bVar1;
		int iVar2;
		Il2CppClass pIVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		object pIVar5;
		bool bVar6;
		MobileLayoutEditorOverlay.c__DisplayClass59_0 __this_00;
		VirtualInvokeData pVVar7;
		Component __this_01;
		Object obj;
		MobileInputLayout obj_00;
		List<MobileInputLayout> __this_02;
		MobileLayoutEditorOverlay.c__DisplayClass59_1 __this_03;
		LayoutElement pUVar8;
		HorizontalLayoutGroup pUVar9;
		RectTransform pUVar10;
		MobileLayoutEditorOverlay pUVar11;
		String pSVar12;
		GameObject __this_04;
		MobileLayoutEditorOverlay __this_05;
		ulong uVar13;
		MethodInfo* __this_06;
		MethodInfo method_00;
		long lVar14;
		Vector2* ppUVar15;
		MobileLayoutEditorOverlay.c__DisplayClass59_1 targetAddress_00;
		object local_78;
		byte[] local_70 = new byte[16];
		MobileInputLayout local_60;
		byte[] local_58 = new byte[8];
		ulong uStack_50;
		MobileInputLayout local_48;
		MobileLayoutEditorOverlay local_40;
		MobileInputLayout local_38;

		local_40 = this;
		local_38 = null;
		local_58 = (byte[])0x0;
		uStack_50._0_4_ = 0;
		uStack_50._4_4_ = 0;
		local_48 = null;
		__this_00 = new MobileLayoutEditorOverlay.c__DisplayClass59_0();
		if (__this_00 != null) {
			__this_00.__4__this = local_40;
			__this_00.listRoot = listRoot;
			__this_00.panel = panel;
			__this_00.role = role;
			pUVar10 = __this_00.listRoot;
			if (pUVar10 != null) {
				local_78 = (object)pUVar10.GetEnumerator();
				local_70._0_8_ = null;
				local_70._8_8_ = &local_78;
				local_60 = (MobileInputLayout)&local_38;
				do {
					pIVar5 = local_78;
					if (local_78 == null) {
						throw new NullReferenceException();
					}
					pIVar3 = local_78.klass;
					uVar13 = (ulong)(pIVar3._2).interface_offsets_count;
					bVar6 = pIVar5.Dispose();
					pIVar5 = local_78;
					if (!bVar6) {
						obj_00 = (MobileInputLayout)(local_78 as IDisposable);
						local_38 = obj_00;
						if (obj_00 == null) goto label_05ca4de6;
						pIVar3 = (obj_00._1).image;
						uVar13 = (ulong)(pIVar3._2).interface_offsets_count;
						if (uVar13 == 0) goto label_05ca4dbf;
						pIVar4 = (pIVar3._1).interfaceOffsets;
						lVar14 = 0;
						goto label_05ca4db0;
					}
					if (local_78 == null) {
						throw new NullReferenceException();
					}
					pIVar3 = local_78.klass;
					uVar13 = (ulong)(pIVar3._2).interface_offsets_count;
					__this_01 = (Component)pIVar5.Dispose();
					if (__this_01 == null) {
						throw new NullReferenceException();
					}
					bVar1 = (typeof(Transform)._2).typeHierarchyDepth;
					if (((__this_01.klass._2).typeHierarchyDepth < bVar1) ||((__this_01.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(Transform))) {
						throw new InvalidCastException();
					}
					obj = (Object)__this_01.gameObject;
					Object.Destroy(obj);
				} while(true);
			}
		}
		goto label_05ca5456;
		while (true) {
			lVar14 = lVar14 + 0x10;
			if (!(uVar13 * 0x10 != lVar14)) break;
	label_05ca4db0: ;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar14) == typeof(IDisposable)) {
				pVVar7 = pIVar3.vtable + *(int)((long)&pIVar4.offset + lVar14);
				goto label_05ca4ddd;
			}
		}
	label_05ca4dbf: ;
	label_05ca4ddd: ;
		obj_00.Dispose();
	label_05ca4de6: ;
		iVar2 = __this_00.role;
		__this_02 = MobileInputLayoutManager.GetLayouts(iVar2);
		if (__this_02 != null) {
			__this_06 = &MethodInfo_System_Collections_Generic_List_MobileInputLayout_GetEnumerator;
			local_70.GetEnumerator((List<object>)__this_02);
			local_48 = local_60;
			local_58 = (byte[])local_70._0_8_;
			uStack_50 = (object*)local_70._8_8_;
			local_70._0_8_ = null;
			local_70._8_8_ = local_58;
			while(true) {
				bVar6 = local_58.MoveNext();
				if (!bVar6) {
					local_58.Dispose();
					return;
				}
				__this_03 = new MobileLayoutEditorOverlay.c__DisplayClass59_1();
				if (__this_03 == null) {
					throw new NullReferenceException();
				}
				targetAddress = &__this_03.CS___8__locals1;
				__this_03.CS___8__locals1 = __this_00;
				targetAddress_00 = &__this_03.fields;
				__this_03.layout = local_48;
				ppUVar15 = (Vector2*)targetAddress_00;
				if (*targetAddress == null) {
					throw new NullReferenceException();
				}
				pUVar10 = ((*targetAddress).fields).listRoot;
				if (Il2CppMethodInitialized_0753ecc8 == false) {
					ppUVar15 = &typeof(Vector2);
					Il2CppMethodInitialized_0753ecc8 = true;
				}
				ppUVar15 = (Vector2*)ppUVar15.CreateRect("Row", pUVar10, (Vector2)0x3f8000003f000000, (Vector2)0x3f8000003f000000, (Vector2)0x4220000000000000, (Vector2)(Vector2.zeroVector));
				if ((MobileLayoutEditorOverlay)ppUVar15 == null) {
					throw new NullReferenceException();
				}
				pUVar8 = ppUVar15.AddComponent<LayoutElement>();
				if (pUVar8 == null) {
					throw new NullReferenceException();
				}
				pUVar8.set_preferredHeight(42.0);
				pUVar8.set_flexibleWidth(1.0);
				pUVar9 = ppUVar15.AddComponent<HorizontalLayoutGroup>();
				if (pUVar9 == null) {
					throw new NullReferenceException();
				}
				pUVar9.spacing = 8.0;
				pUVar9.childAlignment = 3;
				pUVar9.childForceExpandWidth = false;
				pUVar10 = ppUVar15.GetComponent<RectTransform>() ;
				if (*targetAddress == null) {
					throw new NullReferenceException();
				}
				method_00 = (MethodInfo)targetAddress_00.layout;
				if (method_00 == null) break;
				iVar2 = ((*targetAddress).fields).role;
				pSVar12 = (String)method_00.name;
				pUVar11 = (MobileLayoutEditorOverlay)MobileInputLayoutManager.GetLayoutDisplayName(iVar2, pSVar12);
				pSVar12 = "Builtin";
				if (targetAddress_00.layout == null) {
					throw new NullReferenceException();
				}
				if (targetAddress_00.layout.Builtin == false) {
					pSVar12 = "";
				}
				else {
					method = (MethodInfo *)"";
					pSVar12 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar12, "", "");
					method_00 = null;
					pSVar12 = String.Concat(" (", pSVar12, ")");
				}
				pSVar12 = String.Concat((String)pUVar11, pSVar12);
				if (local_40 == null) {
					throw new NullReferenceException();
				}
				pUVar11.AddPresetNameLabel(pUVar10, pSVar12);
				pUVar10 = ppUVar15.GetComponent<RectTransform>() ;
				if (Il2CppMethodInitialized_0753ecc8 == false) {
					ppUVar15 = &typeof(Vector2);
					Il2CppMethodInitialized_0753ecc8 = true;
				}
				size = (Vector2.zeroVector);
				__this_04 = ppUVar15.CreateRect("Buttons", pUVar10, (Vector2)0x3f0000003f800000, (Vector2)0x3f0000003f800000, (Vector2)size, (Vector2)size);
				if (__this_04 == null) {
					throw new NullReferenceException();
				}
				pUVar8 = __this_04.AddComponent<LayoutElement>();
				if (targetAddress_00.layout == null) {
					throw new NullReferenceException();
				}
				if (pUVar8 == null) {
					throw new NullReferenceException();
				}
				pUVar8.set_preferredWidth(*(float)(&g_data_0100ae00 +(ulong)(targetAddress_00.layout.Builtin == false) * 4));
				pUVar8.set_preferredHeight(34.0);
				pUVar9 = __this_04.AddComponent<HorizontalLayoutGroup>();
				if (pUVar9 == null) {
					throw new NullReferenceException();
				}
				pUVar9.spacing = 8.0;
				pUVar9.childAlignment = 5;
				pUVar9.childForceExpandWidth = false;
				if (targetAddress_00.layout == null) {
					throw new NullReferenceException();
				}
				if (targetAddress_00.layout.Builtin == false) {
					pSVar12 = UIManager.GetLocaleCommon("Delete");
					pUVar10 = __this_04.GetComponent<RectTransform>();
					pUVar11 = __this_05;
					__this_05 = new Action((object)__this_03, (intptr_t) MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass59_1_PopulatePresetList_b__0);
					pUVar11.CreateTextButton(pSVar12, (Transform)pUVar10, (Vector2)0x42080000428c0000, (Action)__this_05);
				}
				pSVar12 = "Use";
				method = (MethodInfo *)"";
				pSVar12 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar12, "", "");
				pUVar10 = __this_04.GetComponent<RectTransform>() ;
				pUVar11 = (MobileLayoutEditorOverlay)__this_06;
				__this_06 = new Action((object)__this_03, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass59_1_PopulatePresetList_b__1);
				pUVar11.CreateTextButton(pSVar12, (Transform)pUVar10, (Vector2)0x42080000428c0000, (Action)__this_06);
			}
			throw new NullReferenceException();
		}
	label_05ca5456: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600476F")]
	[Address(RVA = "0x5BA0550", Offset = "0x5B9F550", VA = "0x5BA0550")]
	private void ShowEditPopup(MobileInputControlLayout control, [Optional][DefaultParameterValue(false)] bool addOnConfirm, [Optional] MobileInputControlLayout explicitParentControl)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$ShowEditPopup): 166 lines keep C-only constructs
		MobileInputControlLayout* ppUVar1;
		StringSetting* targetAddress;
		FloatSetting* ppSVar2;
		GameObject* ppUVar3;
		MobileInputSkinEditState* ppUVar4;
		MobileInputSkinEditState* targetAddress_00;
		FloatSetting* targetAddress_01;
		FloatSetting* targetAddress_02;
		BoolSetting* ppSVar5;
		MobileInputControlLayout pUVar6;
		Dictionary<object, object> __this_00;
		Object x;
		Transform parent;
		MobileInputControlLayout pUVar7;
		Il2CppType handle;
		bool bVar8;
		MobileLayoutEditorOverlay.c__DisplayClass60_0 __this_01;
		String pSVar9;
		MobileLayoutEditorModal pUVar10;
		GameObject pUVar11;
		MethodInfo pMVar12;
		String* ppSVar13;
		StringSetting pSVar14;
		FloatSetting pSVar15;
		MobileInputSkin pUVar16;
		MobileInputSkinEditState pUVar17;
		BoolSetting pSVar18;
		Action pSVar19;
		String[] pSVar20;
		Func<string, string> __this_02;
		MobileLayoutEditorOverlay pUVar21;
		Type pSVar22;
		MobileLayoutActionListEditor pUVar23;
		ElementStyle style;
		MobileLayoutEditorOverlay pUVar24;
		float fVar25;
		MethodInfo pMVar26;
		MethodInfo pMVar27;
		Enum local_1e0;
		StringSetting* local_1c8;
		StringSetting* local_1c0;
		Action local_1b8;
		Action local_1b0;
		Action* local_1a8;
		Action* local_1a0;
		GameObject* local_198;
		MobileLayoutActionListEditor* local_190;
		GameObject* local_188;
		GameObject* local_180;
		GameObject* local_178;
		GameObject* local_170;
		GameObject* local_168;
		GameObject* local_160;
		GameObject* local_158;
		GameObject* local_150;
		GameObject* local_148;
		GameObject* local_140;
		GameObject* local_138;
		GameObject* local_130;
		GameObject* local_128;
		GameObject* local_120;
		GameObject* local_118;
		GameObject* local_110;
		GameObject* local_108;
		BoolSetting* local_100;
		BoolSetting* local_f8;
		FloatSetting* local_f0;
		FloatSetting* local_e8;
		FloatSetting* local_e0;
		FloatSetting* local_d8;
		BoolSetting* local_d0;
		MobileInputSkinEditState* local_c8;
		MobileInputSkinEditState* local_c0;
		MobileInputSkinEditState* local_b8;
		MobileInputSkinEditState* local_b0;
		MobileInputSkinEditState* local_a8;
		MobileInputSkinEditState* local_a0;
		FloatSetting* local_98;
		MobileInputSkinEditState* local_90;
		MobileInputSkinEditState* local_88;
		MobileInputControlLayout* local_80;
		StringSetting* local_78;
		FloatSetting* local_70;
		FloatSetting* local_68;
		MobileLayoutEditorModal local_60;
		StringSetting* local_58;
		GameObject* local_50;
		Enum local_48;

		__this_01 = new MobileLayoutEditorOverlay.c__DisplayClass60_0();
		if (__this_01 == null) goto label_05ca2e80;
		__this_01.__4__this = this;
		ppUVar1 = &__this_01.control;
		__this_01.control = control;
		__this_01.addOnConfirm = addOnConfirm;
		if (explicitParentControl == null) {
			pUVar6 = *ppUVar1;
			local_1e0.klass = null;
			if (pUVar6 != null) {
				__this_00 = (Dictionary<object, object>)this._controlParents;
				if (__this_00 == null) goto label_05ca2e80;
				bVar8 = __this_00.TryGetValue((object)pUVar6, (object*)&local_1e0);
				if (bVar8) {
					explicitParentControl = (MobileInputControlLayout)local_1e0.klass;
					goto label_05ca08d4;
				}
			}
			explicitParentControl = null;
		}
	label_05ca08d4: ;
		__this_01.parentControl = explicitParentControl;
		pUVar6 = __this_01.parentControl;
		x = (Object)this._returnButton;
		bVar8 = (x != null);
		if (bVar8) {
			pUVar11 = this._returnButton;
			if (pUVar11 == null) goto label_05ca2e80;
			pUVar11.SetActive(false);
		}
		pSVar9 = "EditButton";
		pMVar12 = (MethodInfo *)"";
		pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "");
		pUVar10 = this.CreateModal(pSVar9, 540.0, 500.0, true);
		if (pUVar10 != null) {
			pUVar11 = pUVar10.gameObject;
			ppUVar3 = &__this_01.panel;
			__this_01.panel = pUVar11;
			parent = pUVar10.SinglePanel;
			pMVar12 = new ElementStyle(0x14, 150.0, 12.0, "DefaultPanel");
			pUVar7 = __this_01.control;
			if (pUVar7 != null) {
				bVar8 = String.IsNullOrEmpty(pUVar7.Label);
				local_60 = pUVar10;
				local_50 = ppUVar3;
				if (bVar8) {
					ppSVar13 = &"BTN";
				}
				else {
					if (*ppUVar1 == null) goto label_05ca2e80;
					ppSVar13 = &((*ppUVar1).fields).Label;
				}
				pSVar9 = *ppSVar13;
				pSVar14 = new StringSetting(pSVar9, 0x20);
				local_1c8 = &__this_01.label;
				__this_01.label = pSVar14;
				if (pUVar6 == null) {
					if (*ppUVar1 == null) goto label_05ca2e80;
				}
				else {
				}
				local_1e0.monitor = (IntPtr)0xffffffffffffffff;
				local_1e0.klass = (Enum)typeof(MobileInputControlKind);
				pSVar9 = local_1e0.ToString();
				pSVar14 = new StringSetting(pSVar9, 0x7fffffff);
				local_1c0 = &__this_01.kind;
				__this_01.kind = pSVar14;
				pUVar7 = __this_01.control;
				if (pUVar7 != null) {
					local_1e0.klass = (Enum)typeof(MobileInputControlShape);
					local_1e0.monitor = (IntPtr)0xffffffffffffffff;
					pSVar9 = local_1e0.ToString();
					pSVar14 = new StringSetting(pSVar9, 0x7fffffff);
					local_58 = &__this_01.shape;
					__this_01.shape = pSVar14;
					pUVar7 = __this_01.control;
					if (pUVar7 != null) {
						local_48.klass = (Enum)typeof(MobileInputPopupMode);
						local_48.monitor = (IntPtr)0xffffffffffffffff;
						pSVar9 = local_48.ToString();
						pSVar14 = new StringSetting(pSVar9, 0x7fffffff);
						targetAddress = &__this_01.popupMode;
						__this_01.popupMode = pSVar14;
						pUVar7 = __this_01.control;
						if (pUVar7 != null) {
							fVar25 = pUVar7.Width;
							pSVar15 = new FloatSetting(fVar25, 0.01, 1.0);
							ppSVar2 = &__this_01.width;
							__this_01.width = pSVar15;
							pUVar7 = __this_01.control;
							if (pUVar7 != null) {
								fVar25 = pUVar7.Height;
								local_78 = targetAddress;
								local_70 = ppSVar2;
								pSVar15 = new FloatSetting(fVar25, 0.01, 1.0);
								local_68 = &__this_01.height;
								__this_01.height = pSVar15;
								pUVar7 = __this_01.control;
								if (pUVar7 != null) {
									local_80 = ppUVar1;
									pUVar16 = pUVar7.GetSkin();
									pUVar17 = new MobileInputSkinEditState(pUVar16);
									local_88 = &__this_01.skin;
									__this_01.skin = pUVar17;
									pUVar7 = __this_01.control;
									if (pUVar7 != null) {
										pUVar16 = pUVar7.GetOnSkin();
										pUVar17 = new MobileInputSkinEditState(pUVar16);
										ppUVar4 = &__this_01.onSkin;
										__this_01.onSkin = pUVar17;
										pUVar7 = __this_01.control;
										if (pUVar7 != null) {
											pUVar16 = pUVar7.GetIcon();
											pUVar17 = new MobileInputSkinEditState(pUVar16);
											local_90 = &__this_01.icon;
											__this_01.icon = pUVar17;
											pUVar7 = __this_01.control;
											if (pUVar7 != null) {
												fVar25 = pUVar7.GetIconSize();
												pSVar15 = new FloatSetting(fVar25, 0.0, 2.0);
												local_98 = &__this_01.iconSize;
												__this_01.iconSize = pSVar15;
												pUVar7 = __this_01.control;
												if (pUVar7 != null) {
													pUVar16 = pUVar7.GetJoystickHandleSkin() ;
													pUVar17 = new MobileInputSkinEditState(pUVar16);
													local_a0 = &__this_01.joystickHandleSkin;
													__this_01.joystickHandleSkin = pUVar17;
													pUVar7 = __this_01.control;
													if (pUVar7 != null) {
														local_b0 = ppUVar4;
														pUVar16 = pUVar7.GetJoystickActiveSkin();
														pUVar17 = new MobileInputSkinEditState(pUVar16);
														local_a8 = &__this_01.joystickActiveSkin;
														__this_01.joystickActiveSkin = pUVar17;
														pUVar7 = __this_01.control;
														if (pUVar7 != null) {
															pUVar16 = pUVar7.GetJoystickRingSkin();
															pUVar17 = new MobileInputSkinEditState(pUVar16);
															ppUVar4 = &__this_01.joystickRingSkin;
															__this_01.joystickRingSkin = pUVar17;
															pUVar7 = __this_01.control;
															if (pUVar7 != null) {
																pUVar16 = pUVar7.GetJoystickReelInSkin();
																pUVar17 = new MobileInputSkinEditState(pUVar16);
																targetAddress_00 = &__this_01.joystickReelInSkin;
																__this_01.joystickReelInSkin = pUVar17;
																pUVar7 = __this_01.control;
																if (pUVar7 != null) {
																	local_c0 = ppUVar4;
																	local_b8 = targetAddress_00;
																	pUVar16 = pUVar7.GetJoystickReelOutSkin();
																	pUVar17 = new MobileInputSkinEditState(pUVar16);
																	ppUVar4 = &__this_01.joystickReelOutSkin;
																	__this_01.joystickReelOutSkin = pUVar17;
																	pUVar7 = __this_01.control;
																	if (pUVar7 != null) {
																		local_c8 = ppUVar4;
																		fVar25 = pUVar7.GetJoystickBaseScale();
																		pSVar15 = new FloatSetting(fVar25, 0.01, 2.0);
																		ppSVar2 = &__this_01.joystickBaseScale;
																		__this_01.joystickBaseScale = pSVar15;
																		pUVar7 = __this_01.control;
																		if (pUVar7 != null) {
																			fVar25 = pUVar7.GetJoystickHandleScale();
																			pSVar15 = new FloatSetting(fVar25, 0.01, 2.0);
																			targetAddress_01 = &__this_01.joystickHandleScale;
																			__this_01.joystickHandleScale = pSVar15;
																			pUVar7 = __this_01.control;
																			if (pUVar7 != null) {
																				fVar25 = pUVar7.GetJoystickReelOutRingDiameter();
																				pSVar15 = new FloatSetting(fVar25, 1.0, 2000.0);
																				targetAddress_02 = &__this_01.joystickReelOutRingDiameter;
																				__this_01.joystickReelOutRingDiameter = pSVar15;
																				pUVar7 = __this_01.control;
																				if (pUVar7 != null) {
																					local_e8 = ppSVar2;
																					local_e0 = targetAddress_01;
																					local_d8 = targetAddress_02;
																					bVar8 = pUVar7.ShouldMoveContentWithTouch();
																					pSVar18 = new BoolSetting(bVar8);
																					local_d0 = &__this_01.moveContentWithTouch;
																					__this_01.moveContentWithTouch = pSVar18;
																					pUVar7 = __this_01.control;
																					if (pUVar7 != null) {
																						bVar8 = pUVar7.AllowLookAreaThrough;
																						pSVar18 = new BoolSetting(bVar8) ;
																						ppSVar5 = &__this_01.allowLookAreaThrough;
																						__this_01.allowLookAreaThrough = pSVar18;
																						pUVar7 = __this_01.control;
																						if (pUVar7 != null) {
																							fVar25 = pUVar7.BindReelInAngle;
																							pSVar15 = il2cpp_codegen_object_new(typeof(FloatSetting));
																							pSVar15 = new FloatSetting(fVar25, 0.0, 180.0);
																							ppSVar2 = &__this_01.bindReelInAngle;
																							__this_01.bindReelInAngle = pSVar15;
																							pUVar7 = __this_01.control;
																							if (pUVar7 != null) {
																								fVar25 = pUVar7.BindReelOutAngle;
																								local_f8 = ppSVar5;
																								local_f0 = ppSVar2;
																								pSVar15 = il2cpp_codegen_object_new((Il2CppClass)typeof(FloatSetting));
																								pSVar15 = new FloatSetting(fVar25, 0.0, 180.0);
																								ppSVar2 = &__this_01.bindReelOutAngle;
																								__this_01.bindReelOutAngle = pSVar15;
																								pUVar7 = __this_01.control;
																								if (pUVar7 != null) {
																									bVar8 = pUVar7.AimAssistOnPress;
																									pSVar18 = il2cpp_codegen_object_new((Il2CppClass)typeof(BoolSetting));
																									pSVar18 = new BoolSetting(bVar8);
																									ppSVar5 = &__this_01.aimAssistOnPress;
																									__this_01.aimAssistOnPress = pSVar18;
																									pUVar7 = __this_01.control;
																									if (pUVar7 != null) {
																										bVar8 = pUVar7.AimAssistOnRelease;
																										pSVar18 = il2cpp_codegen_object_new((Il2CppClass)typeof(BoolSetting));
																										pSVar18 = new BoolSetting(bVar8);
																										local_100 = &__this_01.aimAssistOnRelease;
																										__this_01.aimAssistOnRelease = pSVar18;
																										local_190 = &__this_01.actionList;
																										__this_01.actionList =null;
																										local_188 = &__this_01.shapeDropdown;
																										__this_01.shapeDropdown =null;
																										local_180 = &__this_01.popupModeDropdown;
																										__this_01.popupModeDropdown =null;
																										local_198 = &__this_01.popupChildrenObject;
																										__this_01.popupChildrenObject =null;
																										local_178 = &__this_01.onSkinSetting;
																										__this_01.onSkinSetting =null;
																										local_170 = &__this_01.joystickHandleSkinSetting;
																										__this_01.joystickHandleSkinSetting =null;
																										local_168 = &__this_01.joystickActiveSkinSetting;
																										__this_01.joystickActiveSkinSetting =null;
																										local_160 = &__this_01.joystickRingSkinSetting;
																										__this_01.joystickRingSkinSetting =null;
																										local_158 = &__this_01.joystickReelInSkinSetting;
																										__this_01.joystickReelInSkinSetting =null;
																										local_150 = &__this_01.joystickReelOutSkinSetting;
																										__this_01.joystickReelOutSkinSetting =null;
																										local_148 = &__this_01.joystickBaseScaleSetting;
																										__this_01.joystickBaseScaleSetting =null;
																										local_140 = &__this_01.joystickHandleScaleSetting;
																										__this_01.joystickHandleScaleSetting =null;
																										local_138 = &__this_01. joystickReelOutRingDiameterSetting;
																										__this_01.joystickReelOutRingDiameterSetting =null;
																										local_130 = &__this_01.moveContentWithTouchToggle;
																										__this_01.moveContentWithTouchToggle =null;
																										local_128 = &__this_01.allowLookAreaThroughToggle;
																										__this_01.allowLookAreaThroughToggle =null;
																										local_120 = &__this_01.bindReelInAngleSetting;
																										__this_01.bindReelInAngleSetting =null;
																										local_118 = &__this_01.bindReelOutAngleSetting;
																										__this_01.bindReelOutAngleSetting =null;
																										local_110 = &__this_01.aimAssistOnPressToggle;
																										__this_01.aimAssistOnPressToggle =null;
																										local_108 = &__this_01.aimAssistOnReleaseToggle;
																										__this_01.aimAssistOnReleaseToggle =null;
																										pSVar19 = new Action((object)__this_01, (intptr_t) MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass60_0_ShowEditPopup_b__0);
																										local_1a0 = &__this_01.applyChanges;
																										__this_01.applyChanges = pSVar19;
																										local_1b8 = il2cpp_codegen_object_new(typeof(Action));
																										local_1b8 = new Action((object)__this_01, (intptr_t) MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass60_0_ShowEditPopup_b__1);
																										local_1b0 = il2cpp_codegen_object_new(typeof(Action));
																										local_1b0 = new Action((object)__this_01, (intptr_t) MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass60_0_ShowEditPopup_b__2);
																										pSVar19 = new Action((object)__this_01, (intptr_t) MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass60_0_ShowEditPopup_b__3);
																										local_1a8 = &__this_01.refreshEditableOptions;
																										__this_01.refreshEditableOptions = pSVar19;
																										pSVar9 = "Basic";
																										pUVar24 = (UI_MobileLayoutEditorOverlay_o *) "SettingsPopup";
																										pMVar27 = (MethodInfo *)"";
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										pUVar24.AddSectionHeader(parent, (ElementStyle)pMVar12, pSVar9);
																										pSVar9 = "Label";
																										pSVar14 = *local_1c8;
																										local_1c8 = (StringSetting*)ppSVar5;
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										ElementFactory.CreateInputSetting(parent, (ElementStyle)pMVar12, (BaseSetting)pSVar14, pSVar9, "", 220.0, 34.0, false, null, null, null, null);
																										pSVar9 = "Icon";
																										pUVar17 = *local_90;
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										this.CreateSkinSetting(parent, (ElementStyle)pMVar12, pUVar17, pSVar9);
																										pSVar9 = "IconSize";
																										pSVar15 = *local_98;
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										ElementFactory.CreateSliderInputSetting(parent, (ElementStyle)pMVar12, (BaseSetting)pSVar15, pSVar9, "", 170.0, 16.0, 70.0, 34.0, 2);
																										pSVar9 = "Kind";
																										if (pUVar6 == null) {
																											pSVar14 = *local_1c0;
																											pMVar26 = (MethodInfo *)"MobileLayout";
																											pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "");
																											pSVar20 = this.GetKindOptions();
																											__this_02 = il2cpp_codegen_object_new((Il2CppClass)typeof(Func<string, string>)) ;
																											__this_02 = new Func<object, object>(null, (intptr_t) MethodInfo_UI_MobileInputLayoutManager_GetControlKindDisplayName);
																											pUVar21 = (MobileLayoutEditorOverlay)il2cpp_codegen_object_new((Il2CppClass)typeof(UnityAction));
																											pUVar24 = pUVar21;
																											pUVar21 = new UnityAction((object)__this_01, (intptr_t) MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass60_0_ShowEditPopup_b__4);
																											pUVar11 = pUVar24.CreateLocalizedDropdownSetting(parent, (ElementStyle)pMVar12, (BaseSetting)pSVar14, pSVar9, pSVar20, __this_02, "", 220.0, 34.0, 300.0, (Nullable<float>)0x0, (UnityAction)pUVar21);
																											this.RegisterDropdown(pUVar11);
																										}
																										pSVar9 = "Shape";
																										pSVar14 = *local_58;
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										handle = TypeRef_UI_MobileInputControlShape;
																										pSVar22 = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
																										pSVar20 = Enum.GetNames(pSVar22);
																										pUVar21 = (MobileLayoutEditorOverlay)il2cpp_codegen_object_new((Il2CppClass)typeof(Func<string, string>));
																										pUVar24 = pUVar21;
																										pUVar21 = new Func<object, object>((object)this, (intptr_t) MethodInfo_UI_MobileLayoutEditorOverlay_ShapeOptionLabel);
																										pUVar11 = pUVar24.CreateLocalizedDropdownSetting(parent, (ElementStyle)pMVar12, (BaseSetting)pSVar14, pSVar9, pSVar20, (Func<string, string>)pUVar21, "", 220.0, 34.0, 300.0, (Nullable<float>)0x0, null);
																										ppUVar3 = local_188;
																										*local_188 = pUVar11;
																										this.RegisterDropdown(*ppUVar3);
																										pSVar9 = "PopupMode";
																										pSVar14 = *local_78;
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										pSVar22 = Type.GetTypeFromHandle((RuntimeTypeHandle)TypeRef_UI_MobileInputPopupMode);
																										pSVar20 = Enum.GetNames(pSVar22);
																										pUVar21 = (MobileLayoutEditorOverlay)il2cpp_codegen_object_new((Il2CppClass)typeof(Func<string, string>));
																										pUVar24 = pUVar21;
																										pUVar21 = new Func<object, object>((object)this, (intptr_t) MethodInfo_UI_MobileLayoutEditorOverlay_PopupModeOptionLabel);
																										pUVar11 = pUVar24.CreateLocalizedDropdownSetting(parent, (ElementStyle)pMVar12, (BaseSetting)pSVar14, pSVar9, pSVar20, (Func<string, string>)pUVar21, "", 220.0, 34.0, 300.0, (Nullable<float>)0x0, null);
																										ppUVar3 = local_180;
																										*local_180 = pUVar11;
																										this.RegisterDropdown(*ppUVar3);
																										pSVar9 = "Width";
																										pSVar15 = *local_70;
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										ElementFactory.CreateInputSetting(parent, (ElementStyle)pMVar12, (BaseSetting)pSVar15, pSVar9, "", 110.0, 34.0, false, null, null, null, null);
																										pSVar9 = "Height";
																										pSVar15 = *local_68;
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										ElementFactory.CreateInputSetting(parent, (ElementStyle)pMVar12, (BaseSetting)pSVar15, pSVar9, "", 110.0, 34.0, false, null, null, null, null);
																										this.EnsureColorPopupOnTop();
																										pSVar9 = "Appearance";
																										pUVar24 = (UI_MobileLayoutEditorOverlay_o *) "SettingsPopup";
																										pMVar27 = (MethodInfo *)"";
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										pUVar24.AddSectionHeader(parent, (ElementStyle)pMVar12, pSVar9);
																										pSVar9 = "Skin";
																										pUVar17 = *local_88;
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										this.CreateSkinSetting(parent, (ElementStyle)pMVar12, pUVar17, pSVar9);
																										pSVar9 = "OnSkin";
																										pUVar17 = *local_b0;
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										pUVar11 = this.CreateSkinSetting(parent, (ElementStyle)pMVar12, pUVar17, pSVar9);
																										*local_178 = pUVar11;
																										pSVar9 = "JoystickHandleSkin";
																										pUVar17 = *local_a0;
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										pUVar11 = this.CreateSkinSetting(parent, (ElementStyle)pMVar12, pUVar17, pSVar9);
																										*local_170 = pUVar11;
																										pSVar9 = "JoystickActiveSkin";
																										pUVar17 = *local_a8;
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										pUVar11 = this.CreateSkinSetting(parent, (ElementStyle)pMVar12, pUVar17, pSVar9);
																										*local_168 = pUVar11;
																										pSVar9 = "JoystickRingSkin";
																										pUVar17 = *local_c0;
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										pUVar11 = this.CreateSkinSetting(parent, (ElementStyle)pMVar12, pUVar17, pSVar9);
																										*local_160 = pUVar11;
																										pSVar9 = "JoystickReelInSkin";
																										pUVar17 = *local_b8;
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										pUVar11 = this.CreateSkinSetting(parent, (ElementStyle)pMVar12, pUVar17, pSVar9);
																										*local_158 = pUVar11;
																										pSVar9 = "JoystickReelOutSkin";
																										pUVar17 = *local_c8;
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										pUVar11 = this.CreateSkinSetting(parent, (ElementStyle)pMVar12, pUVar17, pSVar9);
																										*local_150 = pUVar11;
																										pSVar9 = "JoystickBaseScale";
																										pSVar15 = *local_e8;
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										pUVar11 = ElementFactory.CreateSliderInputSetting(parent, (ElementStyle)pMVar12, (BaseSetting)pSVar15, pSVar9, "", 170.0, 16.0, 70.0, 34.0, 2);
																										*local_148 = pUVar11;
																										pSVar9 = "JoystickHandleScale";
																										pSVar15 = *local_e0;
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										pUVar11 = ElementFactory.CreateSliderInputSetting(parent, (ElementStyle)pMVar12, (BaseSetting)pSVar15, pSVar9, "", 170.0, 16.0, 70.0, 34.0, 2);
																										*local_140 = pUVar11;
																										pSVar9 = "JoystickReelOutRingDiameter";
																										pSVar15 = *local_d8;
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										pUVar11 = ElementFactory.CreateSliderInputSetting(parent, (ElementStyle)pMVar12, (BaseSetting)pSVar15, pSVar9, "", 170.0, 16.0, 70.0, 34.0, 0);
																										*local_138 = pUVar11;
																										pSVar9 = "Behavior";
																										pUVar24 = (UI_MobileLayoutEditorOverlay_o *) "SettingsPopup";
																										pMVar27 = (MethodInfo *)"";
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										pUVar24.AddSectionHeader(parent, (ElementStyle)pMVar12, pSVar9);
																										pSVar9 = "MoveContentWithTouch";
																										pSVar18 = *local_d0;
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										pUVar11 = ElementFactory.CreateToggleSetting(parent, (ElementStyle)pMVar12, (BaseSetting)pSVar18, pSVar9, "", 30.0, 34.0, null);
																										*local_130 = pUVar11;
																										pSVar9 = "AllowLookAreaThrough";
																										pSVar18 = *local_f8;
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										pUVar11 = ElementFactory.CreateToggleSetting(parent, (ElementStyle)pMVar12, (BaseSetting)pSVar18, pSVar9, "", 30.0, 34.0, null);
																										*local_128 = pUVar11;
																										pSVar9 = "BindReelInAngle";
																										pSVar15 = *local_f0;
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										pUVar11 = ElementFactory.CreateSliderInputSetting(parent, (ElementStyle)pMVar12, (BaseSetting)pSVar15, pSVar9, "", 170.0, 16.0, 70.0, 34.0, 0);
																										*local_120 = pUVar11;
																										pSVar9 = "BindReelOutAngle";
																										pSVar15 = *ppSVar2;
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										pUVar11 = ElementFactory.CreateSliderInputSetting(parent, (ElementStyle)pMVar12, (BaseSetting)pSVar15, pSVar9, "", 170.0, 16.0, 70.0, 34.0, 0);
																										*local_118 = pUVar11;
																										pSVar9 = "AimAssistOnPress";
																										pSVar14 = *local_1c8;
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										pUVar11 = ElementFactory.CreateToggleSetting(parent, (ElementStyle)pMVar12, (BaseSetting)pSVar14, pSVar9, "", 30.0, 34.0, null);
																										*local_110 = pUVar11;
																										pSVar9 = "AimAssistOnRelease";
																										pSVar18 = *local_100;
																										pSVar9 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar9, "", "") ;
																										pMVar27 = (MethodInfo *)"";
																										pUVar11 = ElementFactory.CreateToggleSetting(parent, (ElementStyle)pMVar12, (BaseSetting)pSVar18, pSVar9, "", 30.0, 34.0, null);
																										*local_108 = pUVar11;
																										ppUVar1 = local_80;
																										if (*local_80 != null) {
																											pSVar20 = (*local_80).GetActionIds();
																											pUVar23 = this.CreateActionListEditor(parent, (ElementStyle)pMVar12, pSVar20);
																											*local_190 = pUVar23;
																											pMVar12 = (MethodInfo)*local_50;
																											pUVar11 = this.CreatePopupChildrenEditor(parent, style, *ppUVar1, (GameObject)pMVar12, *local_1a0);
																											*local_198 = pUVar11;
																											pSVar19 = *local_1a8;
																											if (pSVar19 != null) {
																												(*(code)pSVar19.invoke_impl)(pSVar19.method_code);
																												if ((typeof(UIManager)._2). cctor_finished_or_no_cctor == 0) {
																												}
																												pUVar24 = (UI_MobileLayoutEditorOverlay_o *) "Save";
																												pSVar9 = UIManager.GetLocaleCommon("Save");
																												pUVar10 = local_60;
																												pUVar24.CreateTextButton(pSVar9, local_60.BottomBar, (Vector2)0x4228000042f00000, local_1b8);
																												pUVar24 = (UI_MobileLayoutEditorOverlay_o *) "Cancel";
																												pSVar9 = UIManager.GetLocaleCommon("Cancel");
																												pUVar24.CreateTextButton(pSVar9, pUVar10.BottomBar, (Vector2)0x4228000042f00000, local_1b0);
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
	label_05ca2e80: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004770")]
	[Address(RVA = "0x5BA6140", Offset = "0x5BA5140", VA = "0x5BA6140")]
	private GameObject CreateSkinSetting(Transform parent, ElementStyle style, MobileInputSkinEditState state, string title)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$CreateSkinSetting): 14 lines keep C-only constructs
		MobileInputSkinEditState* targetAddress;
		Vector2 size;
		UnityEvent __this_00;
		BoolSetting setting;
		MobileLayoutEditorOverlay.c__DisplayClass61_0 __this_01;
		MobileLayoutEditorOverlay __this_02;
		LayoutElement pUVar1;
		VerticalLayoutGroup __this_03;
		Transform pUVar2;
		MobileLayoutEditorOverlay pUVar3;
		GameObject pUVar4;
		MobileLayoutEditorOverlay pUVar5;
		String pSVar6;
		Text pUVar7;
		Button pUVar8;
		UnityAction __this_04;
		RectTransform method_00;
		Vector2* __this_05;
		ColorPickPopup colorPickPopup;

		if (Il2CppMethodInitialized_07547a32 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Text) ;
			Il2CppMethodInitialized_07547a32 = true;
		}
		__this_01 = new MobileLayoutEditorOverlay.c__DisplayClass61_0();
		if (__this_01 != null) {
			__this_01.__4__this = this;
			targetAddress = &__this_01.state;
			__this_01.state = state;
			__this_05 = (Vector2*)targetAddress;
			pSVar6 = "SkinSetting";
			if (parent != null) {
				method_00 = (RectTransform)parent.klass;
				if (method_00 != typeof(RectTransform)) {
					__this_05 = (Vector2*)parent;
					parent = (Transform)parent.GetComponent<RectTransform>() ;
				}
				if (Il2CppMethodInitialized_0753ecc8 == false) {
					__this_05 = &typeof(Vector2);
					Il2CppMethodInitialized_0753ecc8 = true;
				}
				if (this != null) {
					size = (Vector2.zeroVector);
					__this_02 = (MobileLayoutEditorOverlay)__this_05.CreateRect(pSVar6, (RectTransform)parent, (Vector2)0x3f8000003f000000, (Vector2)0x3f8000003f000000, (Vector2)size, (Vector2)size);
					if (__this_02 != null) {
						pUVar1 = __this_02.AddComponent<LayoutElement>();
						if (pUVar1 != null) {
							pUVar1.set_preferredHeight(78.0);
							__this_03 = __this_02.AddComponent<VerticalLayoutGroup>();
							if (__this_03 != null) {
								__this_03.spacing = 4.0;
								__this_03.childAlignment = 0;
								__this_03.childForceExpandHeight = false;
								__this_03.childForceExpandWidth = true ;
								__this_03.childControlHeight = true ;
								__this_03.childControlWidth = true ;
								pUVar3 = __this_02;
								pUVar2 = __this_02.transform;
								pUVar3 = (MobileLayoutEditorOverlay)pUVar3.CreateSkinSettingRow(pUVar2, "ImageRow");
								if (pUVar3 != null) {
									pUVar2 = pUVar3.transform;
									pUVar4 = ElementFactory.CreateDefaultLabel(pUVar2, style, title, 0, 3);
									if (pUVar4 != null) {
										pUVar1 = pUVar4.GetComponent<LayoutElement>();
										if (pUVar1 != null) {
											pUVar1.set_preferredWidth(-1.0);
											pUVar1.set_preferredHeight(34.0);
											pUVar5 = (MobileLayoutEditorOverlay)pUVar3.transform;
											if (*targetAddress != null) {
												colorPickPopup = this._colorPopup;
												ElementFactory.CreateColorSetting((Transform)pUVar5, style, (BaseSetting)((*targetAddress).fields).Color, (String)**(ulong*)(g_data_07556758 + 0xb8), colorPickPopup, "", 90.0, 32.0, null);
												if (*targetAddress != null) {
													pSVar6 = pUVar5.GetSkinButtonLabel(((*targetAddress).fields).Image);
													pUVar5 = pUVar3;
													pUVar2 = pUVar3.transform;
													pUVar4 = pUVar5.CreateTextButton(pSVar6, pUVar2, (Vector2)0x42000000430c0000, null);
													if (pUVar4 != null) {
														pUVar1 = pUVar4.GetComponent<LayoutElement>();
														if (pUVar1 != null) {
															pUVar1.set_flexibleWidth(1.0);
															pUVar7 = pUVar4.GetComponentInChildren<Text>();
															__this_01.selectText = pUVar7;
															pUVar8 = pUVar4.GetComponent<Button>();
															if (pUVar8 != null) {
																__this_00 = (UnityEvent)pUVar8.m_OnClick;
																__this_04 = new UnityAction((object)__this_01, (intptr_t) MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass61_0_CreateSkinSetting_b__0);
																if (__this_00 != null) {
																	__this_00.AddListener(__this_04);
																	pSVar6 = UIManager.GetLocaleCommon("Clear");
																	pUVar2 = pUVar3.transform;
																	pUVar3 = pUVar5;
																	pUVar5 = new Action((object)__this_01, (intptr_t) MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass61_0_CreateSkinSetting_b__1);
																	pUVar3.CreateTextButton(pSVar6, pUVar2, (Vector2)0x4200000042f00000, (Action)pUVar5);
																	pUVar3 = __this_02;
																	pUVar2 = __this_02.transform;
																	pUVar4 = pUVar3.CreateSkinSettingRow(pUVar2, "AspectRow");
																	if (pUVar4 != null) {
																		pUVar2 = pUVar4.transform;
																		pSVar6 = "Aspect";
																		if (*targetAddress != null) {
																			setting = ((*targetAddress).fields).PreserveAspect;
																			pSVar6 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar6, "", "");
																			ElementFactory.CreateToggleSetting(pUVar2, style, (BaseSetting)setting, pSVar6, "", 30.0, 30.0, null);
																			return (GameObject)__this_02;
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
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004771")]
	[Address(RVA = "0x5BA7360", Offset = "0x5BA6360", VA = "0x5BA7360")]
	private GameObject CreateSkinSettingRow(Transform parent, string name)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$CreateSkinSettingRow): 5 lines keep C-only constructs
		Vector2 size;
		GameObject __this_00;
		LayoutElement pUVar1;
		HorizontalLayoutGroup __this_01;
		RectTransform parent_00;
		RectTransform* ppUVar2;
		Vector2* __this_02;

		__this_02 = (Vector2*)this;
		if (Il2CppMethodInitialized_07547a33 == false) {
			ppUVar2 = &typeof(RectTransform);
			Il2CppMethodInitialized_07547a33 = true;
			__this_02 = (Vector2*)ppUVar2;
		}
		if (Il2CppMethodInitialized_0753ecc8 == false) {
			__this_02 = &typeof(Vector2);
			Il2CppMethodInitialized_0753ecc8 = true;
		}
		size = (Vector2.zeroVector);
		if (parent == null) {
			parent_00 = null;
		}
		else {
			method = (MethodInfo)parent.klass;
			parent_00 = null;
			if ((RectTransform)method == typeof(RectTransform)) {
				parent_00 = (RectTransform)parent;
			}
		}
		__this_00 = __this_02.CreateRect(name, parent_00, (Vector2)0x3f80000000000000, (Vector2)0x3f8000003f800000, (Vector2)size, (Vector2)size);
		if ((__this_00 != null) &&(pUVar1 = __this_00.AddComponent<LayoutElement>(), pUVar1 != null)) {
			pUVar1.set_preferredHeight(36.0);
			__this_01 = __this_00.AddComponent<HorizontalLayoutGroup>();
			if (__this_01 != null) {
				__this_01.spacing = 8.0;
				__this_01.childAlignment = 3;
				__this_01.childForceExpandHeight = false;
				__this_01.childForceExpandWidth = false;
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004772")]
	[Address(RVA = "0x5BA6020", Offset = "0x5BA5020", VA = "0x5BA6020")]
	private void AddSectionHeader(Transform parent, ElementStyle style, string title)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$AddSectionHeader): clean
		ElementStyle __this_00;
		GameObject __this_01;
		LayoutElement pUVar1;

		ElementFactory.CreateHorizontalLine(parent, style, 460.0, 1.0);
		__this_00 = new ElementStyle(0x12, 120.0, 20.0, "DefaultPanel");
		__this_01 = ElementFactory.CreateDefaultLabel(parent, __this_00, title, 0, 3);
		if (__this_01 != null) {
			pUVar1 = __this_01.GetComponent<LayoutElement>();
			if (pUVar1 != null) {
				pUVar1.set_preferredWidth(460.0);
				pUVar1.set_preferredHeight(24.0);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004773")]
	[Address(RVA = "0x5BA74B0", Offset = "0x5BA64B0", VA = "0x5BA74B0")]
	private string GetSkinButtonLabel(string image)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$GetSkinButtonLabel): clean
		bool bVar1;
		String value;
		String pSVar2;

		value = MobileControlSkinManager.GetSkinDisplayName(image);
		bVar1 = String.IsNullOrEmpty(value);
		pSVar2 = "NoImage";
		if (bVar1) {
			pSVar2 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar2, "", "");
			return pSVar2;
		}
		return value;
	}

	[Token(Token = "0x6004774")]
	[Address(RVA = "0x5BA75B0", Offset = "0x5BA65B0", VA = "0x5BA75B0")]
	private bool IsRectangleOnlyKind(string kindValue)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$IsRectangleOnlyKind): 1 lines keep C-only constructs
		bool bVar1;
		String b;
		Enum local_20;

		local_20.klass = (Enum)typeof(MobileInputControlKind);
		local_20.monitor = (IntPtr)0xffffffffffffffff;
		b = local_20.ToString();
		bVar1 = (kindValue == b);
		return bVar1;
	}

	[Token(Token = "0x6004775")]
	[Address(RVA = "0x5BA7620", Offset = "0x5BA6620", VA = "0x5BA7620")]
	private bool IsActionListKind(string kindValue)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$IsActionListKind): 3 lines keep C-only constructs
		bool bVar1;
		bool bVar2;
		String pSVar3;
		Enum local_30;

		local_30.klass = (Enum)typeof(MobileInputControlKind);
		local_30.monitor = (IntPtr)0xffffffffffffffff;
		pSVar3 = local_30.ToString();
		bVar1 = (kindValue == pSVar3);
		if (!bVar1) {
			local_30.klass = (Enum)typeof(MobileInputControlKind);
			local_30.monitor = (IntPtr)0xffffffffffffffff;
			pSVar3 = local_30.ToString();
			bVar1 = (kindValue == pSVar3);
			if (!bVar1) {
				local_30.klass = (Enum)typeof(MobileInputControlKind);
				local_30.monitor = (IntPtr)0xffffffffffffffff;
				pSVar3 = local_30.ToString();
				bVar2 = (kindValue == pSVar3);
			}
		}
		return bVar2;
	}

	[Token(Token = "0x6004776")]
	[Address(RVA = "0x5BA7700", Offset = "0x5BA6700", VA = "0x5BA7700")]
	private bool IsSlidingContentKind(string kindValue)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$IsSlidingContentKind): 2 lines keep C-only constructs
		bool bVar1;
		bool bVar2;
		String pSVar3;
		Enum SStack_28;

		SStack_28.klass = (Enum)typeof(MobileInputControlKind);
		SStack_28.monitor = (IntPtr)0xffffffffffffffff;
		pSVar3 = SStack_28.ToString();
		bVar1 = (kindValue == pSVar3);
		if (!bVar1) {
			SStack_28.klass = (Enum)typeof(MobileInputControlKind);
			SStack_28.monitor = (IntPtr)0xffffffffffffffff;
			pSVar3 = SStack_28.ToString();
			bVar2 = (kindValue == pSVar3);
		}
		return bVar2;
	}

	[Token(Token = "0x6004777")]
	[Address(RVA = "0x5BA77A0", Offset = "0x5BA67A0", VA = "0x5BA77A0")]
	private bool CanAllowLookAreaThrough(string kindValue)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$CanAllowLookAreaThrough): 1 lines keep C-only constructs
		bool bVar1;
		String b;
		Enum local_20;

		local_20.klass = (Enum)typeof(MobileInputControlKind);
		local_20.monitor = (IntPtr)0xffffffffffffffff;
		b = local_20.ToString();
		bVar1 = (kindValue != b);
		return bVar1;
	}

	[Token(Token = "0x6004778")]
	[Address(RVA = "0x5BA7810", Offset = "0x5BA6810", VA = "0x5BA7810")]
	private bool UsesOnSkin(string kindValue)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$UsesOnSkin): 6 lines keep C-only constructs
		bool bVar1;
		bool bVar2;
		String pSVar3;
		Enum local_30;

		local_30.klass = (Enum)typeof(MobileInputControlKind);
		local_30.monitor = (IntPtr)0xffffffffffffffff;
		pSVar3 = local_30.ToString();
		bVar1 = (kindValue == pSVar3);
		if (!bVar1) {
			local_30.klass = (Enum)typeof(MobileInputControlKind);
			local_30.monitor = (IntPtr)0xffffffffffffffff;
			pSVar3 = local_30.ToString();
			bVar1 = (kindValue == pSVar3);
			if (!bVar1) {
				local_30.klass = (Enum)typeof(MobileInputControlKind);
				local_30.monitor = (IntPtr)0xffffffffffffffff;
				pSVar3 = local_30.ToString();
				bVar1 = (kindValue == pSVar3);
				if (!bVar1) {
					local_30.klass = (Enum)typeof(MobileInputControlKind);
					local_30.monitor = (IntPtr)0xffffffffffffffff;
					pSVar3 = local_30.ToString();
					bVar1 = (kindValue == pSVar3);
					if (!bVar1) {
						local_30.klass = (Enum)typeof(MobileInputControlKind);
						local_30.monitor = (IntPtr)0xffffffffffffffff;
						pSVar3 = local_30.ToString();
						bVar1 = (kindValue == pSVar3);
						if (!bVar1) {
							local_30.klass = (Enum)typeof(MobileInputControlKind);
							local_30.monitor = (IntPtr)0xffffffffffffffff;
							pSVar3 = local_30.ToString();
							bVar2 = (kindValue == pSVar3);
						}
					}
				}
			}
		}
		return bVar2;
	}

	[Token(Token = "0x6004779")]
	[Address(RVA = "0x5BA6790", Offset = "0x5BA5790", VA = "0x5BA6790")]
	private string[] GetKindOptions()
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$GetKindOptions): 6 lines keep C-only constructs
		Il2CppType handle;
		String[] pSVar1;
		String pSVar2;
		Type enumType;
		Enum local_a0;
		Enum local_88;
		Enum local_70;
		Enum local_58;
		Enum local_40;
		Enum local_28;

		handle = TypeRef_UI_MobileInputControlKind;
		if (this._role != 5) {
			enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
			pSVar1 = Enum.GetNames(enumType);
			return pSVar1;
		}
		pSVar1 = (String[])new string[6];
		local_28.klass = (Enum)typeof(MobileInputControlKind);
		local_28.monitor = (IntPtr)0xffffffffffffffff;
		pSVar2 = local_28.ToString();
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		if ((int)pSVar1.Length != 0) {
			pSVar1[0] = pSVar2;
			local_40.klass = (Enum)typeof(MobileInputControlKind);
			local_40.monitor = (IntPtr)0xffffffffffffffff;
			pSVar2 = local_40.ToString();
			if ((pSVar1.Length & 0xfffffffe) != 0) {
				pSVar1[1] = pSVar2;
				local_58.klass = (Enum)typeof(MobileInputControlKind);
				local_58.monitor = (IntPtr)0xffffffffffffffff;
				pSVar2 = local_58.ToString();
				if (2 < (uint)pSVar1.Length) {
					pSVar1[2] = pSVar2;
					local_70.klass = (Enum)typeof(MobileInputControlKind);
					local_70.monitor = (IntPtr)0xffffffffffffffff;
					pSVar2 = local_70.ToString();
					if ((pSVar1.Length & 0xfffffffc) != 0) {
						pSVar1[3] = pSVar2;
						local_88.klass = (Enum)typeof(MobileInputControlKind);
						local_88.monitor = (IntPtr)0xffffffffffffffff;
						pSVar2 = local_88.ToString();
						if (4 < (uint)pSVar1.Length) {
							pSVar1[4] = pSVar2;
							local_a0.klass = (Enum)typeof(MobileInputControlKind);
							local_a0.monitor = (IntPtr)0xffffffffffffffff;
							pSVar2 = local_a0.ToString();
							if (5 < (uint)pSVar1.Length) {
								pSVar1[5] = pSVar2;
								return pSVar1;
							}
						}
					}
				}
			}
		}
		throw new IndexOutOfRangeException();
	}

	[Token(Token = "0x600477A")]
	[Address(RVA = "0x5B9EA00", Offset = "0x5B9DA00", VA = "0x5B9EA00")]
	private void EnsureCoreControls(MobileInputLayout layout)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$EnsureCoreControls): 12 lines keep C-only constructs
		uint uVar1;
		object pIVar2;
		bool bVar3;
		int iVar4;
		Predicate<T> match;
		Func<MobileInputControlLayout, bool> pSVar5;
		MobileInputControlLayout pUVar6;
		String pSVar7;
		MobileInputSkin pUVar8;
		UI_MobileLayoutEditorOverlay___c_StaticFields pUVar9;
		Predicate<MobileInputControlLayout>* targetAddress;
		List<MobileInputControlLayout> pSVar10;
		Enum local_60;
		Enum local_48;

		if (layout == null) {
			return;
		}
		iVar4 = layout.GetRole();
		if (iVar4 == 0) {
			pSVar10 = layout.Controls;
			if ((typeof(MobileLayoutEditorOverlay.c)._2).cctor_finished_or_no_cctor == 0) {
				pUVar9 = typeof(MobileLayoutEditorOverlay.c).static_fields;
				match = (Predicate<T>)pUVar9.__9__71_0;
			}
			else {
				pUVar9 = typeof(MobileLayoutEditorOverlay.c).static_fields;
				match = (Predicate<T>)pUVar9.__9__71_0;
			}
			if (match == null) {
				if (((typeof(MobileLayoutEditorOverlay.c))._2).cctor_finished_or_no_cctor == 0) {
					pUVar9 = typeof(MobileLayoutEditorOverlay.c).static_fields;
				}
				pIVar2 = (object)pUVar9.__9;
				match = new Predicate<MobileInputControlLayout>(pIVar2, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c_EnsureCoreControls_b__71_0);
				pUVar9 = typeof(MobileLayoutEditorOverlay.c).static_fields;
				pUVar9.__9__71_0 = (Predicate<MobileInputControlLayout>)match;
				targetAddress = &pUVar9.__9__71_0;
	label_05c9ec84: ;
			}
		}
		else {
			iVar4 = layout.GetRole();
			pSVar10 = layout.Controls;
			uVar1 = (typeof(MobileLayoutEditorOverlay.c)._2).cctor_finished_or_no_cctor;
			if (iVar4 != 5) {
				if (uVar1 == 0) {
					pUVar9 = typeof(MobileLayoutEditorOverlay.c).static_fields;
					pSVar5 = pUVar9.__9__71_2;
				}
				else {
					pUVar9 = typeof(MobileLayoutEditorOverlay.c).static_fields;
					pSVar5 = pUVar9.__9__71_2;
				}
				if (pSVar5 == null) {
					if (((typeof(MobileLayoutEditorOverlay.c))._2).cctor_finished_or_no_cctor == 0) {
						pUVar9 = typeof(MobileLayoutEditorOverlay.c).static_fields;
					}
					pIVar2 = (object)pUVar9.__9;
					pSVar5 = new Func<MobileInputControlLayout, bool>(pIVar2, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c_EnsureCoreControls_b__71_2);
					pUVar9 = typeof(MobileLayoutEditorOverlay.c).static_fields;
					pUVar9.__9__71_2 = pSVar5;
				}
				bVar3 = Enumerable.Any<MobileInputControlLayout>((System_Collections_Generic_IEnumerable_TSource__o)pSVar10, (System_Func_TSource__bool__o)pSVar5) ;
				if (!bVar3) {
					pSVar10 = layout.Controls;
					pUVar6 = new MobileInputControlLayout();
					if (pUVar6 == null) goto label_05c9f0ae;
					pUVar6.Label = "MOVE";
					pUVar6.Actions = "None";
					local_48.klass = (Enum)typeof(MobileInputControlKind);
					local_48.monitor = (IntPtr)0xffffffffffffffff;
					pSVar7 = local_48.ToString();
					pUVar6.Kind = pSVar7;
					local_60.klass = (Enum)typeof(MobileInputControlShape);
					local_60.monitor = (IntPtr)0xffffffffffffffff;
					pSVar7 = local_60.ToString();
					pUVar6.Shape = pSVar7;
					pUVar6.X = 0.164;
					pUVar6.Y = 0.338;
					pUVar6.Width = 0.5723;
					pUVar6.Height = 0.43456;
					pUVar6.JoystickBaseScale = 0.45;
					pUVar6.JoystickHandleScale = 0.43;
					pUVar6.JoystickReelOutRingDiameter = 380.0;
					pUVar8 = new MobileInputSkin(0.0, 0.0, 0.0, 0.18);
					pUVar6.Skin = pUVar8;
					pUVar6.BindReelInAngle = 85.0;
					pUVar6.BindReelOutAngle = 90.0;
					if (pSVar10 == null) goto label_05c9f0ae;
					pSVar10.Insert(0, (object)pUVar6);
				}
				pSVar10 = layout.Controls;
				if ((typeof(MobileLayoutEditorOverlay.c)._2).cctor_finished_or_no_cctor == 0) {
					pUVar9 = typeof(MobileLayoutEditorOverlay.c).static_fields;
					pSVar5 = pUVar9.__9__71_3;
				}
				else {
					pUVar9 = typeof(MobileLayoutEditorOverlay.c).static_fields;
					pSVar5 = pUVar9.__9__71_3;
				}
				if (pSVar5 == null) {
					if (((typeof(MobileLayoutEditorOverlay.c))._2).cctor_finished_or_no_cctor == 0) {
						pUVar9 = typeof(MobileLayoutEditorOverlay.c).static_fields;
					}
					pIVar2 = (object)pUVar9.__9;
					pSVar5 = new Func<MobileInputControlLayout, bool>(pIVar2, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c_EnsureCoreControls_b__71_3);
					pUVar9 = typeof(MobileLayoutEditorOverlay.c).static_fields;
					pUVar9.__9__71_3 = pSVar5;
				}
				bVar3 = Enumerable.Any<MobileInputControlLayout>((System_Collections_Generic_IEnumerable_TSource__o)pSVar10, (System_Func_TSource__bool__o)pSVar5) ;
				if (bVar3) {
					return;
				}
				pSVar10 = layout.Controls;
				pUVar6 = new MobileInputControlLayout();
				if (pUVar6 != null) {
					pUVar6.Label = "LOOK";
					pUVar6.Actions = "None";
					local_48.klass = (Enum)typeof(MobileInputControlKind);
					local_48.monitor = (IntPtr)0xffffffffffffffff;
					pSVar7 = local_48.ToString();
					pUVar6.Kind = pSVar7;
					local_60.klass = (Enum)typeof(MobileInputControlShape);
					local_60.monitor = (IntPtr)0xffffffffffffffff;
					pSVar7 = local_60.ToString();
					pUVar6.Shape = pSVar7;
					pUVar6.X = 0.64;
					pUVar6.Y = 0.75;
					pUVar6.Width = 0.684;
					pUVar6.Height = 0.342;
					pUVar8 = new MobileInputSkin(0.0, 0.0, 0.0, 0.1);
					pUVar6.Skin = pUVar8;
					if (pSVar10 != null) {
						pSVar10.Insert(1, (object)pUVar6);
						return;
					}
				}
				goto label_05c9f0ae;
			}
			if (uVar1 == 0) {
				pUVar9 = typeof(MobileLayoutEditorOverlay.c).static_fields;
				match = (Predicate<T>)pUVar9.__9__71_1;
			}
			else {
				pUVar9 = typeof(MobileLayoutEditorOverlay.c).static_fields;
				match = (Predicate<T>)pUVar9.__9__71_1;
			}
			if (match == null) {
				if (((typeof(MobileLayoutEditorOverlay.c))._2).cctor_finished_or_no_cctor == 0) {
					pUVar9 = typeof(MobileLayoutEditorOverlay.c).static_fields;
				}
				pIVar2 = (object)pUVar9.__9;
				match = new Predicate<MobileInputControlLayout>(pIVar2, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c_EnsureCoreControls_b__71_1);
				pUVar9 = typeof(MobileLayoutEditorOverlay.c).static_fields;
				pUVar9.__9__71_1 = (Predicate<MobileInputControlLayout>)match;
				targetAddress = &pUVar9.__9__71_1;
				goto label_05c9ec84;
			}
		}
		if (pSVar10 != null) {
			pSVar10.RemoveAll(match);
			return;
		}
	label_05c9f0ae: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600477B")]
	[Address(RVA = "0x5BA3700", Offset = "0x5BA2700", VA = "0x5BA3700")]
	private MobileLayoutEditorModal CreateModal(string title, float width = 580f, float height = 640f, bool scrollBar = true)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$CreateModal): clean
		RectTransform pUVar1;
		bool bVar2;
		GameObject __this_00;
		MobileLayoutEditorModal __this_01;
		float fVar3;
		float fVar4;
		Rect UVar5;
		float local_40;

		__this_00 = ElementFactory.InstantiateAndBind((Transform)this._root, "Prefabs/Panels/HeadedPanel");
		if (__this_00 != null) {
			__this_01 = __this_00.AddComponent<MobileLayoutEditorModal>();
			pUVar1 = this._root;
			bVar2 = ((Object)pUVar1 != null);
			local_40 = height;
			if (bVar2) {
				pUVar1 = this._root;
				if (pUVar1 == null) goto label_05ca38e0;
				UVar5 = pUVar1.rect;
				if (0.0 < UVar5.m_Height) {
					pUVar1 = this._root;
					if (pUVar1 == null) goto label_05ca38e0;
					UVar5 = pUVar1.rect;
					fVar4 = UVar5.m_Height + -60.0;
					fVar3 = 260.0;
					if (260.0 <= fVar4) {
						fVar3 = fVar4;
					}
					if (fVar3 <= height) {
						local_40 = fVar3;
					}
				}
			}
			if (__this_01 != null) {
				__this_01._title = title;
				__this_01._width = width;
				__this_01._height = local_40;
				__this_01._scrollBar = scrollBar;
				__this_01.Setup(null);
				__this_01.ShowImmediate();
				return __this_01;
			}
		}
	label_05ca38e0: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600477C")]
	[Address(RVA = "0x5BA6A10", Offset = "0x5BA5A10", VA = "0x5BA6A10")]
	private void EnsureColorPopupOnTop()
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$EnsureColorPopupOnTop): clean
		ColorPickPopup pUVar1;
		bool bVar2;
		GameObject __this_00;
		Transform __this_01;
		Canvas __this_02;
		GraphicRaycaster x;

		pUVar1 = this._colorPopup;
		bVar2 = ((Object)pUVar1 == null);
		if (bVar2) {
			return;
		}
		pUVar1 = this._colorPopup;
		if (((pUVar1 != null) &&(__this_00 = pUVar1.gameObject, __this_00 != null)) &&(__this_01 = __this_00.transform, __this_01 != null)) {
			__this_01.SetParent((Transform)this._root, true);
			__this_02 = __this_00.GetComponent<Canvas>();
			bVar2 = ((Object)__this_02 == null);
			if (bVar2) {
				__this_02 = __this_00.AddComponent<Canvas>();
			}
			if (__this_02 != null) {
				__this_02.overrideSorting = true;
				__this_02.sortingOrder = 0x7532;
				x = __this_00.GetComponent<GraphicRaycaster>();
				bVar2 = ((Object)x == null);
				if (bVar2) {
					__this_00.AddComponent<GraphicRaycaster>();
					return;
				}
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600477D")]
	[Address(RVA = "0x5BA6BC0", Offset = "0x5BA5BC0", VA = "0x5BA6BC0")]
	private MobileLayoutActionListEditor CreateActionListEditor(Transform parent, ElementStyle style, string[] initialActionIds)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$CreateActionListEditor): 2 lines keep C-only constructs
		Vector2 size;
		RectTransform parent_00;
		GameObject __this_00;
		MobileLayoutActionListEditor __this_01;
		String pSVar1;
		Vector2* ppUVar2;

		if (parent != null) {
			parent_00 = parent.GetComponent<RectTransform>();
			if (Il2CppMethodInitialized_0753ecc8 == false) {
				ppUVar2 = &typeof(Vector2);
				Il2CppMethodInitialized_0753ecc8 = true;
				parent = (Transform)ppUVar2;
			}
			size = (Vector2.zeroVector);
			__this_00 = parent.CreateRect("ActionList", parent_00, (Vector2)0x3f8000003f000000, (Vector2)0x3f8000003f000000, (Vector2)size, (Vector2)size);
			if (__this_00 != null) {
				__this_01 = __this_00.AddComponent<MobileLayoutActionListEditor>();
				pSVar1 = "Actions";
				pSVar1 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar1, "", "");
				if (__this_01 != null) {
					__this_01.Setup(style, pSVar1, initialActionIds, (Transform)this._root, this._role);
					return __this_01;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600477E")]
	[Address(RVA = "0x5BA6D70", Offset = "0x5BA5D70", VA = "0x5BA6D70")]
	private GameObject CreatePopupChildrenEditor(Transform parent, ElementStyle style, MobileInputControlLayout popupControl, GameObject editPanel, Action applyParentChanges)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$CreatePopupChildrenEditor): 14 lines keep C-only constructs
		MobileInputControlLayout* targetAddress;
		Vector2 size;
		List<MobileInputControlLayout> pSVar1;
		MobileLayoutEditorOverlay.c__DisplayClass75_0 __this_00;
		RectTransform pUVar2;
		MobileLayoutEditorOverlay __this_01;
		VerticalLayoutGroup __this_02;
		LayoutElement pUVar3;
		GameObject __this_03;
		HorizontalLayoutGroup __this_04;
		String pSVar4;
		MobileLayoutEditorOverlay __this_05;
		MobileInputControlLayout pUVar5;
		MobileInputControlLayout child;
		MethodInfo pMVar6;
		int index;
		GameObject* targetAddress_00;
		Vector2* ppUVar7;
		MobileLayoutEditorOverlay pUVar8;
		float fVar9;

		pUVar5 = popupControl;
		__this_00 = new MobileLayoutEditorOverlay.c__DisplayClass75_0();
		if (__this_00 != null) {
			__this_00.applyParentChanges = applyParentChanges;
			targetAddress = &__this_00.popupControl;
			__this_00.popupControl = popupControl;
			__this_00.__4__this = this;
			targetAddress_00 = &__this_00.editPanel;
			__this_00.editPanel = editPanel;
			if (parent != null) {
				pUVar2 = parent.GetComponent<RectTransform>();
				if (Il2CppMethodInitialized_0753ecc8 == false) {
					ppUVar7 = &typeof(Vector2);
					Il2CppMethodInitialized_0753ecc8 = true;
					parent = (Transform)ppUVar7;
				}
				size = (Vector2.zeroVector);
				__this_01 = (MobileLayoutEditorOverlay)parent.CreateRect("PopupChildren", pUVar2, (Vector2)0x3f8000003f000000, (Vector2)0x3f8000003f000000, (Vector2)size, (Vector2)size);
				if ((__this_01 != null) &&(__this_02 = __this_01.AddComponent<VerticalLayoutGroup>(), __this_02 != null)) {
					__this_02.spacing = 6.0;
					__this_02.childAlignment = 0;
					__this_02.childControlWidth = true;
					__this_02.childForceExpandWidth = true;
					__this_02.childForceExpandHeight = false;
					pUVar3 = __this_01.AddComponent<LayoutElement>();
					if (*targetAddress != null) {
						pSVar1 = ((*targetAddress).fields).Children;
						if (pSVar1 == null) {
							fVar9 = 48.0;
						}
						else {
							fVar9 = (float)pSVar1._size * 40.0 + 48.0;
						}
						if (pUVar3 != null) {
							pUVar3.set_preferredHeight(fVar9);
							ppUVar7 = (Vector2*)__this_01;
							pUVar2 = __this_01.GetComponent<RectTransform>();
							if (Il2CppMethodInitialized_0753ecc8 == false) {
								ppUVar7 = &typeof(Vector2);
								Il2CppMethodInitialized_0753ecc8 = true;
							}
							__this_03 = ppUVar7.CreateRect("Header", pUVar2, (Vector2)0x3f8000003f000000, (Vector2)0x3f8000003f000000, (Vector2)0x4220000000000000, (Vector2)(Vector2.zeroVector));
							if ((__this_03 != null) &&(pUVar3 = __this_03.AddComponent<LayoutElement>(), pUVar3 != null)) {
								pUVar3.set_preferredHeight(40.0);
								__this_04 = __this_03.AddComponent<HorizontalLayoutGroup>();
								if (__this_04 != null) {
									__this_04.spacing = 10.0;
									__this_04.childAlignment = 3;
									__this_04.childForceExpandWidth = false;
									pUVar2 = __this_03.GetComponent<RectTransform>();
									pSVar4 = "PopupChildren";
									pMVar6 = (MethodInfo *)"";
									pUVar8 = (UI_MobileLayoutEditorOverlay_o *)"SettingsPopup";
									pSVar4 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar4, "", "");
									pUVar8.AddModalLabel(pUVar2, pSVar4);
									pSVar4 = "AddChild";
									pMVar6 = (MethodInfo *)"";
									pSVar4 = UIManager.GetLocale("SettingsPopup", "MobileLayout", pSVar4, "", "");
									pUVar2 = __this_03.GetComponent<RectTransform>();
									pUVar8 = __this_05;
									__this_05 = new Action((object)__this_00, (intptr_t) MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass75_0_CreatePopupChildrenEditor_b__0);
									pUVar8.CreateTextButton(pSVar4, (Transform)pUVar2, (Vector2)0x4208000043020000, (Action)__this_05);
									pUVar5 = __this_00.popupControl;
									if (pUVar5 != null) {
										if (pUVar5.Children ==null) {
											return (GameObject)__this_01;
										}
										index = 0;
										while (true) {
											pSVar1 = pUVar5.Children;
											if (!(pSVar1 != null)) break;
											if (pSVar1._size <= index) {
												return (GameObject)__this_01;
											}
											pUVar2 = __this_01.GetComponent<RectTransform>();
											pUVar5 = *targetAddress;
											if ((pUVar5 == null) ||(pSVar1 = pUVar5.Children, pSVar1 == null)) break;
											child = pSVar1.get_Item(index);
											this.CreatePopupChildRow(pUVar2, pUVar5, child, index, *targetAddress_00, __this_00.applyParentChanges);
											index = index + 1;
											pUVar5 = *targetAddress;
											if (pUVar5 == null) break;
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

	[Token(Token = "0x600477F")]
	[Address(RVA = "0x5BA7E60", Offset = "0x5BA6E60", VA = "0x5BA7E60")]
	private void CreatePopupChildRow(RectTransform parent, MobileInputControlLayout popupControl, MobileInputControlLayout child, int index, GameObject editPanel, Action applyParentChanges)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$CreatePopupChildRow): 12 lines keep C-only constructs
		MobileInputControlLayout* targetAddress;
		bool bVar1;
		MobileLayoutEditorOverlay.c__DisplayClass76_0 __this_00;
		String pSVar2;
		GameObject __this_01;
		LayoutElement pUVar3;
		HorizontalLayoutGroup __this_02;
		RectTransform pUVar4;
		ElementStyle __this_03;
		GameObject __this_04;
		MobileLayoutEditorOverlay pUVar5;
		String* ppSVar6;
		Vector2* __this_05;
		MobileLayoutEditorOverlay pUVar7;
		int local_34;

		__this_00 = new MobileLayoutEditorOverlay.c__DisplayClass76_0();
		if (__this_00 != null) {
			__this_00.applyParentChanges = applyParentChanges;
			__this_00.editPanel = editPanel;
			__this_00.__4__this = this;
			targetAddress = &__this_00.child;
			__this_00.child = child;
			__this_00.popupControl = popupControl;
			pSVar2 = local_34.ToString();
			ppSVar6 = &"Child";
			__this_05 = (UnityEngine_Vector2_c **)"Child";
			pSVar2 = String.Concat("Child", pSVar2);
			if (Il2CppMethodInitialized_0753ecc8 == false) {
				__this_05 = &typeof(Vector2);
				Il2CppMethodInitialized_0753ecc8 = true;
			}
			__this_01 = __this_05.CreateRect(pSVar2, parent, (Vector2)0x3f8000003f000000, (Vector2)0x3f8000003f000000, (Vector2)0x4210000000000000, (Vector2)(Vector2.zeroVector));
			if (__this_01 != null) {
				pUVar3 = __this_01.AddComponent<LayoutElement>();
				if (pUVar3 != null) {
					pUVar3.set_preferredHeight(36.0);
					__this_02 = __this_01.AddComponent<HorizontalLayoutGroup>();
					if (__this_02 != null) {
						__this_02.spacing = 8.0;
						__this_02.childAlignment = 3;
						__this_02.childForceExpandWidth = false;
						pUVar4 = __this_01.GetComponent<RectTransform>();
						__this_03 = new ElementStyle(0x12, 120.0, 20.0, "DefaultPanel");
						if (*targetAddress != null) {
							bVar1 = String.IsNullOrEmpty(((*targetAddress).fields).Label);
							if (bVar1) {
								ppSVar6 = &"BTN";
							}
							else {
								if (*targetAddress == null) goto label_05ca82be;
								ppSVar6 = &((*targetAddress).fields).Label;
							}
							__this_04 = ElementFactory.CreateDefaultLabel((Transform)pUVar4, __this_03, *ppSVar6, 0, 3) ;
							if (__this_04 != null) {
								pUVar3 = __this_04.GetComponent<LayoutElement>();
								bVar1 = ((Object)pUVar3 != null) ;
								if (bVar1) {
									if (pUVar3 == null) goto label_05ca82be;
									pUVar3.set_preferredWidth(220.0);
								}
								pSVar2 = UIManager.GetLocaleCommon("Edit");
								pUVar4 = __this_01.GetComponent<RectTransform>();
								pUVar7 = pUVar5;
								pUVar5 = new Action((object)__this_00, (intptr_t) MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass76_0_CreatePopupChildRow_b__0);
								pUVar7.CreateTextButton(pSVar2, (Transform)pUVar4, (Vector2)0x4200000042a00000, (Action)pUVar5);
								pSVar2 = UIManager.GetLocaleCommon("Delete");
								pUVar4 = __this_01.GetComponent<RectTransform>();
								pUVar7 = pUVar5;
								pUVar5 = new Action((object)__this_00, (intptr_t) MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass76_0_CreatePopupChildRow_b__1);
								pUVar7.CreateTextButton(pSVar2, (Transform)pUVar4, (Vector2)0x4200000042a00000, (Action)pUVar5);
								return;
							}
						}
					}
				}
			}
		}
	label_05ca82be: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004780")]
	[Address(RVA = "0x5BA82E0", Offset = "0x5BA72E0", VA = "0x5BA82E0")]
	private MobileInputControlLayout CreateDefaultPopupChild(int index)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$CreateDefaultPopupChild): 2 lines keep C-only constructs
		MobileInputControlLayout __this_00;
		String pSVar1;
		float fVar2;
		float fVar3;
		Enum local_40;
		Enum local_28;

		__this_00 = new MobileInputControlLayout();
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		fVar2 = (float)index * -3.1415927 * 0.25 + 1.5707964;
		__this_00.Label = "BTN";
		local_28.klass = (Enum)typeof(MobileInputControlKind);
		local_28.monitor = (IntPtr)0xffffffffffffffff;
		pSVar1 = local_28.ToString();
		__this_00.Kind = pSVar1;
		__this_00.Actions = "None";
		local_40.klass = (Enum)typeof(MobileInputControlShape);
		local_40.monitor = (IntPtr)0xffffffffffffffff;
		pSVar1 = local_40.ToString();
		__this_00.Shape = pSVar1;
		fVar3 = cosf(fVar2);
		__this_00.X = fVar3 * 0.12;
		fVar2 = sinf(fVar2);
		__this_00.Y = fVar2 * 0.12;
		__this_00.Width = 0.075;
		__this_00.Height = 0.075;
		return __this_00;
	}

	[Token(Token = "0x6004781")]
	[Address(RVA = "0x5BA48F0", Offset = "0x5BA38F0", VA = "0x5BA48F0")]
	private void RegisterDropdown(GameObject dropdownObject)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$RegisterDropdown): clean
		bool bVar1;
		DropdownSettingElement dropdown;
		MobileLayoutDropdownOverlay __this_00;

		if (dropdownObject != null) {
			dropdown = dropdownObject.GetComponent<DropdownSettingElement>();
			bVar1 = ((Object)dropdown != null);
			if (!bVar1) {
				return;
			}
			__this_00 = dropdownObject.AddComponent<MobileLayoutDropdownOverlay>();
			if (__this_00 != null) {
				__this_00.Setup(dropdown, (Transform)this._root);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004782")]
	[Address(RVA = "0x5BA85F0", Offset = "0x5BA75F0", VA = "0x5BA85F0")]
	private void Close()
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$Close): clean
		GameObject __this_00;

		this.DestroyModals<MobileLayoutEditorModal>();
		this.DestroyModals<MobileLayoutSkinPickerModal>();
		this.DestroyModals<MobileLayoutActionPickerModal>();
		__this_00 = this.gameObject;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.SetActive(false);
		return;
	}

	[Token(Token = "0x6004783")]
	private void DestroyModals<T>() where T : Component
	{
	}

	[Token(Token = "0x6004784")]
	[Address(RVA = "0x5BA8680", Offset = "0x5BA7680", VA = "0x5BA8680")]
	private void OnDisable()
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$OnDisable): clean
		MobileInputBridge.ClearState();
		GisketchInputCapture.BlockThisFrame();
		this.RestoreObject();
		return;
	}

	[Token(Token = "0x6004785")]
	[Address(RVA = "0x5BA8700", Offset = "0x5BA7700", VA = "0x5BA8700")]
	private void OnDestroy()
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$OnDestroy): clean
		MobileLayoutEditorOverlay x;
		bool bVar1;

		this.RestoreObject();
		x = MobileLayoutEditorOverlay._instance;
		bVar1 = ((Object)x == (Object)this);
		if (bVar1) {
			MobileLayoutEditorOverlay._instance = null;
			return;
		}
		return;
	}

	[Token(Token = "0x6004786")]
	[Address(RVA = "0x5BA5E10", Offset = "0x5BA4E10", VA = "0x5BA5E10")]
	private void SetReturnVisible(bool visible)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$SetReturnVisible): clean
		Object x;
		GameObject __this_00;
		bool bVar1;

		x = (Object)this._returnButton;
		bVar1 = (x != null);
		if (bVar1) {
			__this_00 = this._returnButton;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			__this_00.SetActive(visible);
			return;
		}
		return;
	}

	[Token(Token = "0x6004787")]
	[Address(RVA = "0x5B9F0C0", Offset = "0x5B9E0C0", VA = "0x5B9F0C0")]
	private void AssignLayoutIds()
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$AssignLayoutIds): clean
		MobileInputLayout __this_00;

		__this_00 = this._layout;
		if (__this_00 == null) {
			return;
		}
		__this_00.AssignRuntimeIds();
		return;
	}

	[Token(Token = "0x6004788")]
	[Address(RVA = "0x5B9FFA0", Offset = "0x5B9EFA0", VA = "0x5B9FFA0")]
	private MobileInputControlLayout GetParentControl(MobileInputControlLayout control)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$GetParentControl): 1 lines keep C-only constructs
		Dictionary<object, object> __this_00;
		bool bVar1;
		MobileInputControlLayout pUStack_18;

		pUStack_18 = null;
		if (control != null) {
			__this_00 = (Dictionary<object, object>)this._controlParents;
			if (__this_00 == null) {
				throw new NullReferenceException();
			}
			bVar1 = __this_00.TryGetValue((object)control, (object*)&pUStack_18);
			if (bVar1) {
				return pUStack_18;
			}
		}
		return null;
	}

	[Token(Token = "0x6004789")]
	[Address(RVA = "0x5B9F6B0", Offset = "0x5B9E6B0", VA = "0x5B9F6B0")]
	private Vector2 GetControlPosition(MobileInputControlLayout control, MobileInputControlLayout parentControl)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$GetControlPosition): clean
		float fVar1;
		uint uVar2;
		uint uVar3;
		RectTransform __this_00;
		float fVar4;
		Vector2 UVar5;
		float fVar6;
		Rect UVar7;

		__this_00 = this._controlsRoot;
		if (__this_00 == null) {
	label_05c9f7ae: ;
			throw new NullReferenceException();
		}
		UVar7 = __this_00.rect;
		fVar4 = UVar7.m_Width;
		fVar6 = UVar7.m_Height;
		if (parentControl == null) {
			if (control == null) goto label_05c9f7ae;
			fVar1 = control.X;
			fVar4 = fVar4 * (fVar1 + -0.5);
			fVar6 = fVar6 * (control.Y + -0.5);
		}
		else {
			UVar5 = this.GetControlPosition(parentControl, null);
			if (control == null) goto label_05c9f7ae;
			if (fVar6 <= fVar4) {
				fVar4 = fVar6;
			}
			fVar6 = 1.0;
			if (1.0 <= fVar4) {
				fVar6 = fVar4;
			}
			uVar2 = control.X;
			uVar3 = control.Y;
			fVar4 = UVar5.x + fVar6 * (float)uVar2;
			fVar6 = UVar5.y + fVar6 * (float)uVar3;
		}
		UVar5.y = fVar6;
		UVar5.x = fVar4;
		return (Vector2)UVar5;
	}

	[Token(Token = "0x600478A")]
	[Address(RVA = "0x5B9F620", Offset = "0x5B9E620", VA = "0x5B9F620")]
	private Vector2 GetControlSize(MobileInputControlLayout control)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$GetControlSize): clean
		uint uVar1;
		uint uVar2;
		RectTransform __this_00;
		Vector2 UVar3;
		float fVar4;
		Rect UVar5;

		__this_00 = this._controlsRoot;
		if (__this_00 != null) {
			UVar5 = __this_00.rect;
			if (control != null) {
				fVar4 = UVar5.m_Width;
				if (UVar5.m_Height <= UVar5.m_Width) {
					fVar4 = UVar5.m_Height;
				}
				uVar1 = control.Width;
				uVar2 = control.Height;
				UVar3.y = fVar4 * (float)uVar2;
				UVar3.x = fVar4 * (float)uVar1;
				return (Vector2)UVar3;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600478B")]
	[Address(RVA = "0x5BA0010", Offset = "0x5B9F010", VA = "0x5BA0010")]
	private void SavePosition(MobileInputControlLayout control, Vector2 position, MobileInputControlLayout parentControl)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$SavePosition): 30 lines keep C-only constructs
		float fVar1;
		RectTransform pUVar2;
		byte[] auVar3 = new byte[16];
		byte[] auVar4 = new byte[16];
		byte[] auVar5 = new byte[16];
		uint uVar6;
		uint extraout_EAX;
		uint uVar7;
		uint uVar8;
		uint uVar9;
		float fVar10;
		uint in_XMM0_Dc;
		uint in_XMM0_Dd;
		uint in_XMM1_Dc;
		uint in_XMM1_Dd;
		float fVar11;
		byte[] auVar12 = new byte[16];
		Rect UVar13;
		Rect UVar14;
		float local_58;
		float fStack_54;
		float local_48;
		float fStack_44;

		uVar8 = SUB84(method, 0);
		auVar12._8_4_ = in_XMM0_Dc;
		auVar12._0_8_ = position;
		auVar12._12_4_ = in_XMM0_Dd;
		pUVar2 = this._controlsRoot;
		if (pUVar2 == null) goto label_05ca0235;
		UVar13 = pUVar2.rect;
		auVar4._8_4_ = in_XMM1_Dc;
		auVar4._0_8_ = UVar13._8_8_;
		auVar4._12_4_ = in_XMM1_Dd;
		if (parentControl == null) {
			uVar6 = 0x727c0c8;
			if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
				uVar6 = extraout_EAX;
			}
			if (control == null) goto label_05ca0235;
			auVar12 = divps(auVar12, auVar4);
			fVar11 = auVar12._0_4_ + 0.5;
			fVar10 = auVar12._4_4_ + 0.5;
			auVar5._4_4_ = -(uint)(1.0 < fVar11);
			auVar5._0_4_ = -(uint)(1.0 < fVar10);
			auVar5._8_4_ = -(uint)(0.0 < fVar10);
			auVar5._12_4_ = -(uint)(0.0 < fVar11);
			uVar9 = movmskps(uVar8, auVar5);
			auVar3._4_4_ = -(uint)(1.0 <= fVar11);
			auVar3._0_4_ = -(uint)(1.0 <= fVar10);
			auVar3._8_4_ = -(uint)(0.0 <= fVar10);
			auVar3._12_4_ = -(uint)(0.0 <= fVar11);
			uVar7 = movmskps(uVar6, auVar3);
			if ((uVar9 & 2) == 0) {
				if ((uVar7 & 8) == 0) goto label_05ca0203;
	label_05ca0107: ;
				control.X = fVar11;
			}
			else {
				fVar11 = 1.0;
				if ((uVar7 & 8) != 0) goto label_05ca0107;
	label_05ca0203: ;
				control.X = 0.0;
			}
			if ((uVar9 & 1) != 0) {
				fVar10 = 1.0;
			}
			if ((uVar7 & 4) == 0) {
				fVar10 = 0.0;
			}
			goto label_05ca0223;
		}
		if ((typeof(Rect)._2).cctor_finished_or_no_cctor == 0) {
			if (Il2CppMethodInitialized_07547a49 == false) goto label_05ca0135;
	label_05ca0088: ;
			pUVar2 = this._controlsRoot;
		}
		else {
			if (Il2CppMethodInitialized_07547a49 != false) goto label_05ca0088;
	label_05ca0135: ;
			Il2CppMethodInitialized_07547a49 = true;
			pUVar2 = this._controlsRoot;
		}
		if (pUVar2 != null) {
			UVar14 = pUVar2.rect;
			fVar11 = parentControl.X;
			if (control != null) {
				local_58 = UVar13.m_Width;
				fStack_54 = UVar13.m_Height;
				if (fStack_54 <= local_58) {
					local_58 = fStack_54;
				}
				fVar10 = 1.0;
				if (1.0 <= local_58) {
					fVar10 = local_58;
				}
				local_48 = position.x;
				fStack_44 = position.y;
				fVar1 = parentControl.Y;
				control.X = (local_48 - (fVar11 + -0.5) * UVar14.m_Width) / fVar10;
				fVar10 = (fStack_44 - (fVar1 + -0.5) * UVar14.m_Height) / fVar10;
	label_05ca0223: ;
				control.Y = fVar10;
				return;
			}
		}
	label_05ca0235: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600478C")]
	[Address(RVA = "0x5BA0240", Offset = "0x5B9F240", VA = "0x5BA0240")]
	private void UpdatePopupChildRects(MobileInputControlLayout popupControl)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$UpdatePopupChildRects): 4 lines keep C-only constructs
		List<MobileInputControlLayout> __this_00;
		Dictionary<object, object> __this_01;
		Vector2 value;
		RectTransform __this_02;
		object control;
		bool bVar1;
		RectTransform local_70;
		System_Collections_Generic_List_Enumerator_T__o local_68;
		MobileInputControlLayout local_48;
		System_Collections_Generic_List_Enumerator_T__o local_38;

		local_68._list = null;
		local_68._index = 0;
		local_68._version = 0;
		local_68._current = null;
		local_70 = null;
		if ((popupControl != null) &&(__this_00 = popupControl.Children, __this_00 != null)) {
			local_48 = popupControl;
			local_68 = __this_00.GetEnumerator();
			local_38 = &local_68;
			while(true) {
				bVar1 = local_68.MoveNext();
				control = local_68._current;
				if (!bVar1) break;
				__this_01 = (Dictionary<object, object>)this._controlRects;
				if (__this_01 == null) {
					throw new NullReferenceException();
				}
				bVar1 = __this_01.TryGetValue(local_68._current, (object*)&local_70);
				__this_02 = local_70;
				if (bVar1) {
					value = this.GetControlPosition((MobileInputControlLayout)control, local_48);
					if (__this_02 == null) {
						throw new NullReferenceException();
					}
					__this_02.anchoredPosition = value;
				}
			}
			local_68.Dispose();
		}
		return;
	}

	[Token(Token = "0x600478D")]
	[Address(RVA = "0x5BA38F0", Offset = "0x5BA28F0", VA = "0x5BA38F0")]
	private string Locale(string item)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$Locale): clean
		String pSVar1;

		pSVar1 = UIManager.GetLocale("SettingsPopup", "MobileLayout", item, "", "");
		return pSVar1;
	}

	[Token(Token = "0x600478E")]
	[Address(RVA = "0x5BA4750", Offset = "0x5BA3750", VA = "0x5BA4750")]
	private GameObject CreateLocalizedDropdownSetting(Transform parent, ElementStyle style, BaseSetting setting, string title, string[] options, Func<string, string> optionLabel, [Optional][DefaultParameterValue("")] string tooltip, [Optional][DefaultParameterValue(140f)] float elementWidth, [Optional][DefaultParameterValue(40f)] float elementHeight, [Optional][DefaultParameterValue(300f)] float maxScrollHeight, [Optional] float? optionsWidth, [Optional] UnityAction onDropdownOptionSelect)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$CreateLocalizedDropdownSetting): clean
		Nullable<float> SVar1;
		GameObject __this_00;
		MobileLayoutLocalizedDropdownSettingElement __this_01;
		float fVar2;

		SVar1 = optionsWidth;
		__this_00 = ElementFactory.InstantiateAndBind(parent, "Prefabs/Elements/DropdownSetting");
		if (__this_00 != null) {
			__this_01 = __this_00.AddComponent<MobileLayoutLocalizedDropdownSettingElement>();
			if (SVar1.hasValue == false) {
				optionsWidth = new Nullable<float>(elementWidth);
			}
			fVar2 = optionsWidth.Value;
			if (__this_01 != null) {
				__this_01._optionLabel = optionLabel;
				__this_01.Setup(setting, style, title, options, tooltip, elementWidth, elementHeight, fVar2, maxScrollHeight, onDropdownOptionSelect, null);
				__this_01.RelabelOptions();
				__this_01.SyncElement();
				return __this_00;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600478F")]
	[Address(RVA = "0x5BA8880", Offset = "0x5BA7880", VA = "0x5BA8880")]
	private string ShapeOptionLabel(string value)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$ShapeOptionLabel): clean
		String pSVar1;

		pSVar1 = UIManager.GetLocale("SettingsPopup", "MobileLayout.Shape", value, "", value);
		return pSVar1;
	}

	[Token(Token = "0x6004790")]
	[Address(RVA = "0x5BA8910", Offset = "0x5BA7910", VA = "0x5BA8910")]
	private string PopupModeOptionLabel(string value)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$PopupModeOptionLabel): clean
		String pSVar1;

		pSVar1 = UIManager.GetLocale("SettingsPopup", "MobileLayout.PopupMode", value, "", value);
		return pSVar1;
	}

	[Token(Token = "0x6004791")]
	[Address(RVA = "0x5BA89A0", Offset = "0x5BA79A0", VA = "0x5BA89A0")]
	private string RoleOptionLabel(string value)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$RoleOptionLabel): clean
		bool bVar1;
		int local_c;

		local_c = 0;
		bVar1 = Enum.TryParse<MobileInputLayoutRole>(value, ref local_c);
		if (bVar1) {
			value = MobileInputLayoutUtil.GetRoleLabel(local_c);
		}
		return value;
	}

	[Token(Token = "0x6004792")]
	[Address(RVA = "0x5BA3980", Offset = "0x5BA2980", VA = "0x5BA3980")]
	private GameObject CreateTextButton(string label, Transform parent, Vector2 size, Action onClick)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$CreateTextButton): 1 lines keep C-only constructs
		UnityEvent __this_00;
		MobileLayoutEditorOverlay.c__DisplayClass95_0 __this_01;
		ElementStyle __this_02;
		GameObject __this_03;
		Button pUVar1;
		UnityAction __this_04;
		float local_38;
		float fStack_34;

		__this_01 = new MobileLayoutEditorOverlay.c__DisplayClass95_0();
		if (__this_01 != null) {
			__this_01.onClick = onClick;
			__this_02 = new ElementStyle(0x12, 120.0, 20.0, "DefaultPanel");
			local_38 = size.x;
			fStack_34 = size.y;
			__this_03 = ElementFactory.CreateDefaultButton(parent, __this_02, label, local_38, fStack_34, null);
			if (__this_01.onClick == null) {
				return __this_03;
			}
			if ((__this_03 != null) &&(pUVar1 = __this_03.GetComponent<Button>(), pUVar1 != null)) {
				__this_00 = (UnityEvent)pUVar1.m_OnClick;
				__this_04 = new UnityAction((object)__this_01, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass95_0_CreateTextButton_b__0);
				if (__this_00 != null) {
					__this_00.AddListener(__this_04);
					return __this_03;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004793")]
	[Address(RVA = "0x5BA3D60", Offset = "0x5BA2D60", VA = "0x5BA3D60")]
	private void AddModalLabel(RectTransform parent, string label)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$AddModalLabel): clean
		ElementStyle __this_00;
		GameObject __this_01;
		LayoutElement pUVar1;

		__this_00 = new ElementStyle(0x14, 120.0, 20.0, "DefaultPanel");
		__this_01 = ElementFactory.CreateDefaultLabel((Transform)parent, __this_00, label, 0, 3);
		if (__this_01 != null) {
			pUVar1 = __this_01.GetComponent<LayoutElement>();
			if (pUVar1 != null) {
				pUVar1.set_preferredWidth(230.0);
				pUVar1.set_preferredHeight(34.0);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004794")]
	[Address(RVA = "0x5BA5D00", Offset = "0x5BA4D00", VA = "0x5BA5D00")]
	private void AddPresetNameLabel(RectTransform parent, string label)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$AddPresetNameLabel): clean
		ElementStyle __this_00;
		GameObject __this_01;
		LayoutElement pUVar1;

		__this_00 = new ElementStyle(0x14, 120.0, 20.0, "DefaultPanel");
		__this_01 = ElementFactory.CreateDefaultLabel((Transform)parent, __this_00, label, 0, 3);
		if (__this_01 != null) {
			pUVar1 = __this_01.GetComponent<LayoutElement>();
			if (pUVar1 != null) {
				pUVar1.set_flexibleWidth(1.0);
				pUVar1.set_preferredHeight(34.0);
				return;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004795")]
	[Address(RVA = "0x5BA8A30", Offset = "0x5BA7A30", VA = "0x5BA8A30")]
	private Text AddLabel(RectTransform parent, string label, Vector2 size)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$AddLabel): 6 lines keep C-only constructs
		Vector2 anchorMin;
		Vector2 UVar1;
		uint uVar2;
		double x;
		double dVar3;
		Vector2 anchorMax;
		UnityEngine_Vector2_StaticFields pUVar4;
		GameObject __this_00;
		Text __this_01;
		MethodInfo method_00;
		String* ppSVar5;
		Vector2* __this_02;
		MethodInfo method_01;
		float fVar6;
		float fVar7;
		Color UVar8;
		float local_58;
		float fStack_54;
		Il2CppMethodPointer local_40;
		Vector2 local_38;

		__this_02 = (Vector2*)this;
		if (Il2CppMethodInitialized_07547a55 == false) {
			ppSVar5 = &"Label";
			Il2CppMethodInitialized_07547a55 = true;
			__this_02 = (Vector2*)ppSVar5;
		}
		if (Il2CppMethodInitialized_0753ecc8 == false) {
			__this_02 = &typeof(Vector2);
			Il2CppMethodInitialized_0753ecc8 = true;
		}
		pUVar4 = typeof(Vector2).static_fields;
		anchorMin = (pUVar4.zeroVector);
		if (Il2CppMethodInitialized_07542885 == false) {
			__this_02 = &typeof(Vector2);
			Il2CppMethodInitialized_07542885 = true;
			pUVar4 = typeof(Vector2).static_fields;
			UVar1 = (pUVar4.oneVector);
			fVar6 = UVar1.x;
			fVar7 = UVar1.y;
			if (Il2CppMethodInitialized_0753ecc8 == false) {
				__this_02 = &typeof(Vector2);
				local_38 = UVar1;
				Il2CppMethodInitialized_0753ecc8 = true;
				pUVar4 = typeof(Vector2).static_fields;
				fVar6 = local_38.x;
				fVar7 = local_38.y;
			}
		}
		else {
			UVar1 = (pUVar4.oneVector);
			fVar6 = UVar1.x;
			fVar7 = UVar1.y;
		}
		anchorMax.y = fVar7;
		anchorMax.x = fVar6;
		__this_00 = __this_02.CreateRect("Label", parent, (Vector2)anchorMin, anchorMax, size, (Vector2)(pUVar4.zeroVector));
		if ((__this_00 == null) ||(__this_01 = __this_00.AddComponent<Text>(), __this_01 == null)) {
			throw new NullReferenceException();
		}
		__this_01.set_text(label);
		method_00 = (MethodInfo)this._font;
		__this_01.font = (Font)method_00;
		local_58 = size.x;
		fStack_54 = size.y;
		if (fStack_54 <= local_58) {
			local_58 = fStack_54;
		}
		local_58 = local_58 * 0.42;
		fVar6 = 28.0;
		if (local_58 <= 28.0) {
			fVar6 = local_58;
		}
		fVar6 = (float)(~-(uint)(16.0 <= local_58) & 0x41800000 | (uint)fVar6 & -(uint)(16.0 <= local_58));
		if (Il2CppMethodInitialized_07541320 == false) {
			Il2CppMethodInitialized_07541320 = true;
			uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(Math)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		x = (double)fVar6;
		method_01 = (MethodInfo)&local_40;
		dVar3 = modf(x, (double)method_01, method_00);
		if (0.0 <= fVar6) {
			if ((dVar3 != 0.5) || (NAN(dVar3))) {
				local_40 = (Il2CppMethodPointer)floor(x + 0.5, method_01);
			}
			else if (((long)(double)local_40 & 1U) != 0) {
				local_40 = (Il2CppMethodPointer)((double)local_40 + 1.0);
			}
		}
		else if ((dVar3 != -0.5) || (NAN(dVar3))) {
			local_40 = (Il2CppMethodPointer)ceil(x + -0.5, method_01);
		}
		else if (((long)(double)local_40 & 1U) != 0) {
			local_40 = (Il2CppMethodPointer)((double)local_40 + -1.0);
		}
		__this_01.fontSize = (int)(double)local_40;
		UVar8.b = 1.0;
		UVar8.a = 1.0;
		UVar8.r = 1.0;
		UVar8.g = 1.0;
		__this_01.set_color(UVar8);
		__this_01.alignment = 4;
		__this_01.set_raycastTarget(false);
		return __this_01;
	}

	[Token(Token = "0x6004796")]
	[Address(RVA = "0x5B9F7C0", Offset = "0x5B9E7C0", VA = "0x5B9F7C0")]
	private void AddControlIconOrLabel(RectTransform parent, MobileInputControlLayout control, Vector2 size)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$AddControlIconOrLabel): 10 lines keep C-only constructs
		Vector2 anchorMin;
		Vector2 UVar1;
		String relativePath;
		Vector2 value;
		Vector2 anchorMax;
		bool bVar2;
		MobileLayoutEditorOverlay __this_00;
		Text pUVar3;
		UnityEngine_Vector2_StaticFields pUVar4;
		GameObject __this_01;
		Image __this_02;
		Sprite value_00;
		RectTransform __this_03;
		Vector2* __this_04;
		float fVar5;
		float fVar6;
		Color UVar7;
		ulong local_58;

		if (control == null) goto label_05c9fa8c;
		__this_00 = (MobileLayoutEditorOverlay)control.GetIcon();
		bVar2 = MobileInputLayoutUtil.ShowButtonIcons();
		if (bVar2) {
			if (__this_00 == null) goto label_05c9fa8c;
			__this_04 = (Vector2*)__this_00;
			bVar2 = __this_00.HasImage();
			if (bVar2) {
				if (Il2CppMethodInitialized_0753ecc8 == false) {
					__this_04 = &typeof(Vector2);
					Il2CppMethodInitialized_0753ecc8 = true;
				}
				pUVar4 = typeof(Vector2).static_fields;
				anchorMin = (pUVar4.zeroVector);
				if (Il2CppMethodInitialized_07542885 == false) {
					__this_04 = &typeof(Vector2);
					Il2CppMethodInitialized_07542885 = true;
					pUVar4 = typeof(Vector2).static_fields;
					UVar1 = (pUVar4.oneVector);
					fVar5 = UVar1.x;
					fVar6 = UVar1.y;
					if (Il2CppMethodInitialized_0753ecc8 == false) {
						__this_04 = &typeof(Vector2);
						Il2CppMethodInitialized_0753ecc8 = true;
						pUVar4 = typeof(Vector2).static_fields;
					}
				}
				else {
					UVar1 = (pUVar4.oneVector);
					fVar5 = UVar1.x;
					fVar6 = UVar1.y;
				}
				UVar1 = (pUVar4.zeroVector);
				anchorMax.y = fVar6;
				anchorMax.x = fVar5;
				__this_01 = __this_04.CreateRect("Icon", parent, (Vector2)anchorMin, anchorMax, (Vector2)UVar1, (Vector2)UVar1);
				if (__this_01 != null) {
					__this_02 = __this_01.AddComponent<Image>();
					relativePath = (String)__this_00._root;
					value_00 = MobileControlSkinManager.GetSprite(relativePath);
					if (__this_02 != null) {
						__this_02.sprite = value_00;
						__this_02.preserveAspect = *(bool)&__this_00._controlsRoot;
						UVar7 = __this_00.ToColor();
						__this_02.set_color(UVar7);
						__this_02.set_raycastTarget(false);
						__this_03 = __this_01.GetComponent<RectTransform>();
						fVar5 = control.GetIconSize();
						if (__this_03 != null) {
							local_58._0_4_ = size.x;
							local_58._4_4_ = size.y;
							if (local_58._4_4_ <= (float)local_58) {
								local_58._0_4_ = local_58._4_4_;
							}
							fVar5 = (1.0 - fVar5) * (float)local_58 * 0.5;
							local_58 = CONCAT44(fVar5, fVar5);
							value.y = fVar5;
							value.x = fVar5;
							__this_03.offsetMin = value;
							__this_03.offsetMax = (Vector2)(local_58 ^ 0x8000000080000000);
							return;
						}
					}
				}
				goto label_05c9fa8c;
			}
			pUVar3 = this.AddLabel(parent, control.Label, size);
		}
		else {
			pUVar3 = this.AddLabel(parent, control.Label, size);
			if (__this_00 == null) goto label_05c9fa8c;
		}
		UVar7 = __this_00.ToColor();
		if (pUVar3 != null) {
			pUVar3.set_color(UVar7);
			return;
		}
	label_05c9fa8c: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004797")]
	[Address(RVA = "0x5B9D1C0", Offset = "0x5B9C1C0", VA = "0x5B9D1C0")]
	private GameObject CreateRect(string name, RectTransform parent, Vector2 anchorMin, Vector2 anchorMax, Vector2 size, Vector2 anchoredPosition)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$CreateRect): 1 lines keep C-only constructs
		Vector2 UVar1;
		Il2CppType handle;
		Type[] components;
		Type obj;
		object pIVar2;
		GameObject __this_00;
		RectTransform __this_01;
		UnityEngine_Vector2_StaticFields pUVar3;
		float local_68;
		float fStack_64;
		float local_58;
		float fStack_54;

		components = (Type[])new Type[1];
		handle = TypeRef_UnityEngine_RectTransform;
		obj = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		if (components != null) {
			if (obj != null) {
				pIVar2 = il2cpp_vm_Object_IsInst((object)obj, (((components.obj).klass)._1).element_class);
				if (pIVar2 == null) {
					pIVar2 = new ArrayTypeMismatchException();
					throw pIVar2;
				}
			}
			if ((int)components.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			components[0] = obj;
			__this_00 = new GameObject(name, components);
			if (__this_00 != null) {
				__this_01 = __this_00.GetComponent<RectTransform>();
				if (__this_01 != null) {
					__this_01.SetParent((Transform)parent, false);
					__this_01.anchorMin = anchorMin;
					__this_01.anchorMax = anchorMax;
					__this_01.sizeDelta = size;
					__this_01.anchoredPosition = anchoredPosition;
					pUVar3 = typeof(Vector2).static_fields;
					UVar1 = (pUVar3.zeroVector);
					local_58 = anchorMin.x;
					fStack_54 = anchorMin.y;
					local_58 = local_58 - UVar1.x;
					fStack_54 = fStack_54 - UVar1.y;
					if (fStack_54 * fStack_54 + local_58 * local_58 < 9.9999994e-11) {
						if (Il2CppMethodInitialized_07542885 == false) {
							Il2CppMethodInitialized_07542885 = true;
							pUVar3 = typeof(Vector2).static_fields;
						}
						UVar1 = (pUVar3.oneVector);
						local_68 = anchorMax.x;
						fStack_64 = anchorMax.y;
						local_68 = local_68 - UVar1.x;
						fStack_64 = fStack_64 - UVar1.y;
						if (fStack_64 * fStack_64 + local_68 * local_68 < 9.9999994e-11) {
							if (Il2CppMethodInitialized_0753ecc8 == false) {
								Il2CppMethodInitialized_0753ecc8 = true;
								pUVar3 = typeof(Vector2).static_fields;
							}
							__this_01.offsetMin = (Vector2)(pUVar3.zeroVector);
							__this_01.offsetMax = (Vector2)(Vector2.zeroVector);
						}
					}
					return __this_00;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004798")]
	[Address(RVA = "0x5B9E860", Offset = "0x5B9D860", VA = "0x5B9E860")]
	private void AddTrigger(EventTrigger trigger, EventTriggerType type, Action<BaseEventData> action)
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$AddTrigger): 4 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		EventTrigger.TriggerEvent __this_00;
		EventTrigger.Entry[] pUVar3;
		MobileLayoutEditorOverlay.c__DisplayClass101_0 __this_01;
		EventTrigger.Entry __this_02;
		UnityAction<T0> __this_03;
		List<EventTrigger.Entry> __this_04;

		__this_01 = new MobileLayoutEditorOverlay.c__DisplayClass101_0();
		if (__this_01 != null) {
			__this_01.action = action;
			__this_02 = il2cpp_codegen_object_new(typeof(EventTrigger.Entry)) ;
			__this_02 = new EventTrigger.Entry();
			if (__this_02 != null) {
				__this_02.eventID = type;
				__this_00 = __this_02.callback;
				__this_03 = new UnityAction<BaseEventData>((object)__this_01, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass101_0_AddTrigger_b__0);
				if (__this_00 != null) {
					__this_00.AddListener(__this_03);
					if (trigger != null) {
						__this_04 = trigger.triggers;
						if (__this_04 != null) {
							piVar1 = &__this_04._version;
							*piVar1 = *piVar1 + 1;
							pUVar3 = __this_04._items;
							if (pUVar3 != null) {
								uVar2 = __this_04._size;
								if (uVar2 < (uint)pUVar3.Length) {
									__this_04._size = uVar2 + 1;
									pUVar3[(int)uVar2] = __this_02;
									return;
								}
								__this_04.AddWithResize((object)__this_02);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004799")]
	[Address(RVA = "0x5BA8D10", Offset = "0x5BA7D10", VA = "0x5BA8D10")]
	public MobileLayoutEditorOverlay()
	{
		// Lifted from source/cpp/UI/MobileLayoutEditorOverlay.c (UI.MobileLayoutEditorOverlay$$.ctor): 2 lines keep C-only constructs
		Dictionary<MobileInputControlLayout, RectTransform> __this_00;
		Dictionary<MobileInputControlLayout, MobileInputControlLayout> __this_01;
		List<Behaviour> __this_02;

		__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<MobileInputControlLayout, RectTransform>));
		__this_00 = new Dictionary<object, object>();
		this._controlRects = __this_00;
		__this_01 = il2cpp_codegen_object_new((Il2CppClass)typeof(Dictionary<MobileInputControlLayout, MobileInputControlLayout>));
		__this_01 = new Dictionary<object, object>();
		this._controlParents = __this_01;
		__this_02 = new List<Behaviour>();
		this._suspendedUi = __this_02;
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/MobileLayoutEditorOverlay.c.

	// UI.MobileLayoutEditorOverlay$$DestroyModals<object>: 1 lines keep C-only constructs
	private void DestroyModals_object()
	{
		RectTransform __this_00;
		uint uVar1;
		Object[] pSVar2;
		Object obj;
		uint uVar3;

		if (method.rgctx_data == null) {
			if (method.rgctx_data == null) {
				il2cpp_codegen_rgctx_method_init((MethodInfo)method);
			}
		}
		__this_00 = this._root;
		if (__this_00 != null) {
			pSVar2 = __this_00.GetComponentsInChildren<object>(true);
			if (pSVar2 != null) {
				uVar1 = (uint)pSVar2.Length;
				if (0 < (int)uVar1) {
					uVar3 = 0;
					do {
						if (uVar1 <= uVar3) {
							throw new IndexOutOfRangeException();
						}
						if ((Component)pSVar2[(int)uVar3] == null) goto label_0368de84;
						obj = (Object)(pSVar2[(int)uVar3]).gameObject;
						Object.Destroy(obj);
						uVar3 = uVar3 + 1;
						uVar1 = (uint)pSVar2.Length;
					} while ((int)uVar3 < (int)uVar1);
				}
				return;
			}
		}
	label_0368de84: ;
		throw new NullReferenceException();
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass41_0$$.ctor: clean
	private void c__DisplayClass41_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass52_0$$.ctor: clean
	private void c__DisplayClass52_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass53_0$$.ctor: clean
	private void c__DisplayClass53_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass54_0$$.ctor: clean
	private void c__DisplayClass54_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass59_0$$.ctor: clean
	private void c__DisplayClass59_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass59_1$$.ctor: clean
	private void c__DisplayClass59_1__ctor()
	{
		base();
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass60_0$$.ctor: clean
	private void c__DisplayClass60_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass61_0$$.ctor: clean
	private void c__DisplayClass61_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass75_0$$.ctor: clean
	private void c__DisplayClass75_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass76_0$$.ctor: clean
	private void c__DisplayClass76_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass95_0$$.ctor: clean
	private void c__DisplayClass95_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass101_0$$.ctor: clean
	private void c__DisplayClass101_0__ctor()
	{
		base();
		return;
	}

	// UI.MobileLayoutEditorOverlay$$<CreateToolbar>b__39_0: 2 lines keep C-only constructs
	private void CreateToolbar_b__39_0(BaseEventData eventData)
	{
		ulong uVar1;
		byte bVar2;
		RectTransform pUVar3;
		Vector2 UVar4;
		Vector2 UVar5;
		float fVar6;
		float fVar7;
		Vector2 local_30;
		ulong local_28;

		local_30.x = 0.0;
		local_30.y = 0.0;
		if (eventData != null) {
			bVar2 = (typeof(PointerEventData)._2).typeHierarchyDepth;
			if (((eventData.klass._2).typeHierarchyDepth < bVar2) ||((eventData.klass._2).typeHierarchy[(ulong)bVar2 - 1] !=typeof(PointerEventData))) {
				throw new InvalidCastException();
			}
			pUVar3 = this._root;
			uVar1 = *(ulong)((long)&(*(ulong)((sbyte)eventData + 0x140)) + 4);
			fVar6 = (float)uVar1;
			fVar7 = (float)((ulong)uVar1 >> 0x20);
			if ((typeof(RectTransformUtility)._2).cctor_finished_or_no_cctor == 0) {
				local_28 = uVar1;
				fVar6 = (float)local_28;
				fVar7 = local_28._4_4_;
			}
			UVar5.y = fVar7;
			UVar5.x = fVar6;
			RectTransformUtility.ScreenPointToLocalPointInRectangle(pUVar3, UVar5, null, ref local_30);
			pUVar3 = this._toolbar;
			if (pUVar3 != null) {
				UVar5 = pUVar3.anchoredPosition;
				UVar4.y = UVar5.y - local_30.y;
				UVar4.x = UVar5.x - local_30.x;
				this._toolbarDragOffset = UVar4;
				this._draggingToolbar = true;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// UI.MobileLayoutEditorOverlay$$<CreateToolbar>b__39_1: 2 lines keep C-only constructs
	private void CreateToolbar_b__39_1(BaseEventData eventData)
	{
		ulong uVar1;
		Vector2 UVar2;
		byte bVar3;
		RectTransform pUVar4;
		Vector2 screenPoint;
		Vector2 value;
		float fVar5;
		float fVar6;
		Vector2 UStack_30;
		ulong uStack_28;

		UStack_30.x = 0.0;
		UStack_30.y = 0.0;
		if (this._draggingToolbar == false) {
			return;
		}
		if (eventData != null) {
			bVar3 = (typeof(PointerEventData)._2).typeHierarchyDepth;
			if (((eventData.klass._2).typeHierarchyDepth < bVar3) ||((eventData.klass._2).typeHierarchy[(ulong)bVar3 - 1] !=typeof(PointerEventData))) {
				throw new InvalidCastException();
			}
			pUVar4 = this._root;
			uVar1 = *(ulong)((long)&(*(ulong)((sbyte)eventData + 0x140)) + 4);
			fVar5 = (float)uVar1;
			fVar6 = (float)((ulong)uVar1 >> 0x20);
			if ((typeof(RectTransformUtility)._2).cctor_finished_or_no_cctor == 0) {
				uStack_28 = uVar1;
				fVar5 = (float)uStack_28;
				fVar6 = uStack_28._4_4_;
			}
			screenPoint.y = fVar6;
			screenPoint.x = fVar5;
			RectTransformUtility.ScreenPointToLocalPointInRectangle(pUVar4, screenPoint, null, ref UStack_30);
			pUVar4 = this._toolbar;
			if (pUVar4 != null) {
				UVar2 = this._toolbarDragOffset;
				value.y = UVar2.y + UStack_30.y;
				value.x = UVar2.x + UStack_30.x;
				pUVar4.anchoredPosition = value;
				return;
			}
		}
		throw new NullReferenceException();
	}

	// UI.MobileLayoutEditorOverlay$$<CreateToolbar>b__39_2: clean
	private void CreateToolbar_b__39_2(BaseEventData __)
	{
		this._draggingToolbar = false;
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new MobileLayoutEditorOverlay.c();
		MobileLayoutEditorOverlay.c.__9 = (MobileLayoutEditorOverlay.c)__this;
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c$$<ShowLoadPopup>b__54_0: 1 lines keep C-only constructs
	private String c__ShowLoadPopup_b__54_0(int role)
	{
		String pSVar1;
		Enum local_20;

		local_20.klass = (Enum)typeof(MobileInputLayoutRole);
		local_20.monitor = (IntPtr)0xffffffffffffffff;
		return pSVar1;
	}

	// UI.MobileLayoutEditorOverlay.<>c$$<EnsureCoreControls>b__71_0: clean
	private bool c__EnsureCoreControls_b__71_0(MobileInputControlLayout x)
	{
		int iVar1;
		bool bVar2;

		if (x == null) {
			throw new NullReferenceException();
		}
		iVar1 = x.GetKind();
		if (iVar1 != 6) {
			iVar1 = x.GetKind();
			bVar2 = iVar1 == 7;
		}
		return bVar2;
	}

	// UI.MobileLayoutEditorOverlay.<>c$$<EnsureCoreControls>b__71_1: clean
	private bool c__EnsureCoreControls_b__71_1(MobileInputControlLayout x)
	{
		uint uVar1;

		if (x == null) {
			throw new NullReferenceException();
		}
		uVar1 = x.GetKind();
		if ((uVar1 < 5) && ((0x17U >> (uVar1 & 0x1f) & 1) != 0)) {
			return false;
		}
		return uVar1 - 8 < 0xfffffffe;
	}

	// UI.MobileLayoutEditorOverlay.<>c$$<EnsureCoreControls>b__71_2: clean
	private bool c__EnsureCoreControls_b__71_2(MobileInputControlLayout x)
	{
		int iVar1;

		if (x == null) {
			throw new NullReferenceException();
		}
		iVar1 = x.GetKind();
		return iVar1 == 6;
	}

	// UI.MobileLayoutEditorOverlay.<>c$$<EnsureCoreControls>b__71_3: clean
	private bool c__EnsureCoreControls_b__71_3(MobileInputControlLayout x)
	{
		int iVar1;

		if (x == null) {
			throw new NullReferenceException();
		}
		iVar1 = x.GetKind();
		return iVar1 == 7;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass101_0$$<AddTrigger>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass101_0__AddTrigger_b__0(BaseEventData data)
	{
		Action<BaseEventData> pSVar1;
		code *vtableDispatch;

		pSVar1 = this.action;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,data,pSVar1.method,vtableDispatch);
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass41_0$$<CreateEditableControl>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass41_0__CreateEditableControl_b__0(BaseEventData eventData)
	{
		byte bVar1;
		MobileLayoutEditorOverlay __this_00;
		MethodInfo in_RCX;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		if (eventData != null) {
			bVar1 = (typeof(PointerEventData)._2).typeHierarchyDepth;
			if (((eventData.klass._2).typeHierarchyDepth < bVar1) ||(in_RCX = (MethodInfo)(eventData.klass._2).typeHierarchy, *(PointerEventData*)((long)in_RCX + (ulong)bVar1 * 8 + -8) != typeof(PointerEventData))) {
				throw new InvalidCastException();
			}
		}
		__this_00.BeginControlDrag(this.control, (PointerEventData)eventData);
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass41_0$$<CreateEditableControl>b__1: 2 lines keep C-only constructs
	private void c__DisplayClass41_0__CreateEditableControl_b__1(BaseEventData eventData)
	{
		byte bVar1;
		MobileLayoutEditorOverlay __this_00;

		if (eventData != null) {
			bVar1 = (typeof(PointerEventData)._2).typeHierarchyDepth;
			if (((eventData.klass._2).typeHierarchyDepth < bVar1) ||((eventData.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(PointerEventData))) {
				throw new InvalidCastException();
			}
			__this_00 = this.__4__this;
			if (__this_00 != null) {
				__this_00.DragControl(this.control, (UnityEngine_Vector2_o)*(Vector2)((long)&(*(ulong)((sbyte)eventData + 0x140)) + 4));
				return;
			}
		}
		throw new NullReferenceException();
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass41_0$$<CreateEditableControl>b__2: 1 lines keep C-only constructs
	private void c__DisplayClass41_0__CreateEditableControl_b__2(BaseEventData eventData)
	{
		byte bVar1;
		MobileLayoutEditorOverlay pUVar2;

		pUVar2 = this.__4__this;
		if ((pUVar2 == null) ||(eventData == null)) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(PointerEventData)._2).typeHierarchyDepth;
		if (((eventData.klass._2).typeHierarchyDepth < bVar1) ||((eventData.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(PointerEventData))) {
			throw new InvalidCastException();
		}
		if (pUVar2._dragPointerId == *(int)&(*(ulong)((sbyte)eventData + 0x140))) {
			pUVar2._draggingControl = null;
			return;
		}
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass41_0$$<CreateEditableControl>b__3: 2 lines keep C-only constructs
	private void c__DisplayClass41_0__CreateEditableControl_b__3(BaseEventData eventData)
	{
		byte bVar1;
		MobileLayoutEditorOverlay pUVar2;

		pUVar2 = this.__4__this;
		if ((pUVar2 == null) ||(eventData == null)) {
			throw new NullReferenceException();
		}
		bVar1 = (typeof(PointerEventData)._2).typeHierarchyDepth;
		if (((eventData.klass._2).typeHierarchyDepth < bVar1) ||((eventData.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(PointerEventData))) {
			throw new InvalidCastException();
		}
		if (((pUVar2._dragPointerId == *(int)&(*(ulong)((sbyte)eventData + 0x140))) &&(*(sbyte)&(*(ulong)((sbyte)eventData + 0x138)) == false)) &&(*(sbyte)((long)&eventData[0xc].klass + 5) == false)) {
			pUVar2._draggingControl = null;
			return;
		}
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass52_0$$<SavePreset>b__0: clean
	private void c__DisplayClass52_0__SavePreset_b__0()
	{
		int iVar1;
		StringSetting pSVar2;
		MobileLayoutEditorOverlay pUVar3;
		Object obj;
		bool bVar4;
		String pSVar5;
		MobileInputLayout pUVar6;
		DateTime SStack_28;

		SStack_28._dateData = (DateTime)0;
		pSVar2 = this.name;
		if (pSVar2 != null) {
			bVar4 = String.IsNullOrWhiteSpace(pSVar2._value);
			if (bVar4) {
				pUVar3 = this.__4__this;
				if (pUVar3 == null) goto label_05ca96b4;
				iVar1 = pUVar3._role;
				SStack_28 = DateTime.Now;
				pSVar5 = SStack_28.ToString("MMdd-HHmmss");
				pSVar5 = String.Concat("Custom ", pSVar5);
				pSVar5 = MobileInputLayoutManager.GetUniqueLayoutName(iVar1, pSVar5);
			}
			else {
				pSVar2 = this.name;
				if ((pSVar2 == null) ||(pSVar5 = pSVar2._value, pSVar5 == null)) goto label_05ca96b4;
				pSVar5 = pSVar5.Trim();
			}
			pUVar3 = this.__4__this;
			if (pUVar3 != null) {
				iVar1 = pUVar3._role;
				bVar4 = MobileInputLayoutManager.IsBuiltinLayoutName(iVar1, pSVar5);
				if (bVar4) {
					pUVar3 = this.__4__this;
					if (pUVar3 == null) goto label_05ca96b4;
					iVar1 = pUVar3._role;
					pSVar5 = MobileInputLayoutManager.GetUniqueLayoutName(iVar1, pSVar5);
				}
				pUVar3 = this.__4__this;
				if ((pUVar3 != null) &&(pUVar6 = pUVar3._layout, pUVar6 != null)) {
					pUVar6.Name = pSVar5;
					pUVar3 = this.__4__this;
					if ((pUVar3 != null) &&(pUVar6 = pUVar3._layout, pUVar6 != null)) {
						pUVar6 = pUVar6.Clone(pSVar5, false);
						MobileInputLayoutManager.SaveCustomLayout(pUVar6);
						pUVar3 = this.__4__this;
						if (pUVar3 != null) {
							pUVar3.RefreshRestorePanel();
							obj = (Object)this.panel;
							Object.Destroy(obj);
							pUVar3 = this.__4__this;
							if (pUVar3 != null) {
								pUVar3.ShowSavedPopup(pSVar5);
								return;
							}
						}
					}
				}
			}
		}
	label_05ca96b4: ;
		throw new NullReferenceException();
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass52_0$$<SavePreset>b__1: clean
	private void c__DisplayClass52_0__SavePreset_b__1()
	{
		Object obj;

		obj = (Object)this.panel;
		if ((typeof(Object)._2).cctor_finished_or_no_cctor == 0) {
			Object.Destroy(obj);
			return;
		}
		Object.Destroy(obj);
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass53_0$$<ShowSavedPopup>b__0: clean
	private void c__DisplayClass53_0__ShowSavedPopup_b__0()
	{
		Object obj;

		obj = (Object)this.panel;
		if ((typeof(Object)._2).cctor_finished_or_no_cctor == 0) {
			Object.Destroy(obj);
			return;
		}
		Object.Destroy(obj);
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass54_0$$<ShowLoadPopup>b__1: clean
	private void c__DisplayClass54_0__ShowLoadPopup_b__1()
	{
		RectTransform x;
		StringSetting pSVar1;
		String value;
		MobileLayoutEditorOverlay __this_00;
		bool bVar2;
		int local_1c;

		local_1c = 0;
		x = this.listRoot;
		bVar2 = ((Object)x != null);
		if (bVar2) {
			pSVar1 = this.roleSetting;
			if (pSVar1 == null) {
	label_05ca985c: ;
				throw new NullReferenceException();
			}
			value = pSVar1._value;
			bVar2 = Enum.TryParse<MobileInputLayoutRole>(value, ref local_1c);
			if (bVar2) {
				__this_00 = this.__4__this;
				if (__this_00 == null) goto label_05ca985c;
				__this_00.PopulatePresetList(this.listRoot, this.panel, local_1c);
			}
		}
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass54_0$$<ShowLoadPopup>b__2: 1 lines keep C-only constructs
	private void c__DisplayClass54_0__ShowLoadPopup_b__2()
	{
		MobileLayoutEditorOverlay pUVar1;
		ImportPopup __this_00;
		UnityAction __this_01;

		pUVar1 = this.__4__this;
		if (pUVar1 != null) {
			__this_00 = pUVar1._importPopup;
			__this_01 = this.__9__5;
			if (__this_01 == null) {
				__this_01 = new UnityAction((object)this, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass54_0_ShowLoadPopup_b__5);
				this.__9__5 = __this_01;
			}
			if (__this_00 != null) {
				__this_00.Show(__this_01, true, "", "");
				pUVar1 = this.__4__this;
				if (pUVar1 != null) {
					pUVar1.ShowMenuPopupAboveEditor((BasePopup)__this_00);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass54_0$$<ShowLoadPopup>b__5: clean
	private void c__DisplayClass54_0__ShowLoadPopup_b__5()
	{
		MobileLayoutEditorOverlay __this_00;

		__this_00 = this.__4__this;
		if (__this_00 == null) {
			throw new NullReferenceException();
		}
		__this_00.ImportLayoutFromPopup(this.panel);
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass54_0$$<ShowLoadPopup>b__3: clean
	private void c__DisplayClass54_0__ShowLoadPopup_b__3()
	{
		MobileLayoutEditorOverlay pUVar1;
		ExportPopup __this_00;
		String value;

		pUVar1 = this.__4__this;
		if (pUVar1 != null) {
			__this_00 = pUVar1._exportPopup;
			value = JsonUtility.ToJson((object)pUVar1._layout, true);
			if (__this_00 != null) {
				__this_00.Show(value);
				pUVar1 = this.__4__this;
				if (pUVar1 != null) {
					pUVar1.ShowMenuPopupAboveEditor((BasePopup)__this_00);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass54_0$$<ShowLoadPopup>b__4: clean
	private void c__DisplayClass54_0__ShowLoadPopup_b__4()
	{
		Object obj;

		obj = (Object)this.panel;
		if ((typeof(Object)._2).cctor_finished_or_no_cctor == 0) {
			Object.Destroy(obj);
			return;
		}
		Object.Destroy(obj);
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass59_1$$<PopulatePresetList>b__0: clean
	private void c__DisplayClass59_1__PopulatePresetList_b__0()
	{
		MobileInputLayout layout;
		MobileLayoutEditorOverlay.c__DisplayClass59_0 pUVar1;
		MobileLayoutEditorOverlay __this_00;

		layout = this.layout;
		MobileInputLayoutManager.DeleteCustomLayout(layout);
		pUVar1 = this.CS___8__locals1;
		if ((pUVar1 == null) ||(__this_00 = pUVar1.__4__this, __this_00 == null)) {
			throw new NullReferenceException();
		}
		__this_00.PopulatePresetList(pUVar1.listRoot, pUVar1.panel, pUVar1.role);
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass59_1$$<PopulatePresetList>b__1: clean
	private void c__DisplayClass59_1__PopulatePresetList_b__1()
	{
		int role;
		MobileLayoutEditorOverlay.c__DisplayClass59_0 pUVar1;
		MobileInputLayout pUVar2;
		String name;
		MobileLayoutEditorOverlay pUVar3;
		Object obj;
		MethodInfo method_00;

		pUVar1 = this.CS___8__locals1;
		if ((pUVar1 != null) &&(pUVar2 = this.layout, pUVar2 != null)) {
			role = pUVar1.role;
			name = pUVar2.Name;
			MobileInputLayoutManager.SetSelectedLayoutName(role, name);
			pUVar1 = this.CS___8__locals1;
			if ((pUVar1 != null) &&(pUVar3 = pUVar1.__4__this, pUVar3 != null)) {
				pUVar3._role = pUVar1.role;
				pUVar2 = this.layout;
				if (pUVar2 != null) {
					method_00 = (MethodInfo)pUVar2.Clone(null, false);
					pUVar3._layout = (MobileInputLayout)method_00;
					pUVar1 = this.CS___8__locals1;
					if ((pUVar1 != null) &&(pUVar3 = pUVar1.__4__this, pUVar3 != null)) {
						pUVar3.RebuildControls();
						pUVar1 = this.CS___8__locals1;
						if ((pUVar1 != null) &&(pUVar3 = pUVar1.__4__this, pUVar3 != null)) {
							pUVar3.RefreshRestorePanel();
							pUVar1 = this.CS___8__locals1;
							if (pUVar1 != null) {
								obj = (Object)pUVar1.panel;
								Object.Destroy(obj);
								return;
							}
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass60_0$$<ShowEditPopup>b__0: 11 lines keep C-only constructs
	private void c__DisplayClass60_0__ShowEditPopup_b__0()
	{
		int piVar1;
		uint uVar2;
		StringSetting pSVar3;
		MobileInputControlLayout pUVar4;
		MobileLayoutActionListEditor __this_00;
		FloatSetting pSVar5;
		BoolSetting pSVar6;
		MobileInputSkinEditState pUVar7;
		MobileInputLayout pUVar8;
		MobileInputControlLayout[] pUVar9;
		bool bVar10;
		bool bVar11;
		String pSVar12;
		String pSVar13;
		MethodInfo pMVar14;
		MobileInputSkin pUVar15;
		List<MobileInputControlLayout> pSVar16;
		List<MobileInputControlLayout>* targetAddress;
		MobileInputControlLayout pUVar17;
		MobileLayoutEditorOverlay pUVar18;
		Enum SStack_38;

		pUVar18 = this.__4__this;
		if (pUVar18 != null) {
			bVar10 = false;
			if (pUVar18._role == 1) {
				pSVar3 = this.kind;
				if (pSVar3 == null) goto label_05caa313;
				pSVar13 = pSVar3._value;
				SStack_38.klass = (Enum)typeof(MobileInputControlKind);
				SStack_38.monitor = (IntPtr)0xffffffffffffffff;
				pSVar12 = SStack_38.ToString();
				bVar10 = (pSVar13 == pSVar12);
			}
			pSVar3 = this.label;
			if ((pSVar3 != null) &&(pUVar4 = this.control, pUVar4 != null)) {
				pUVar4.Label = pSVar3._value;
				pSVar3 = this.kind;
				if ((pSVar3 != null) &&(pUVar4 = this.control, pUVar4 != null)) {
					pUVar4.Kind = pSVar3._value;
					pSVar3 = this.kind;
					if ((pSVar3 != null) &&(this.__4__this != null)) {
						pUVar4 = this.control;
						pSVar13 = pSVar3._value;
						SStack_38.klass = (Enum)typeof(MobileInputControlKind);
						SStack_38.monitor = (IntPtr)0xffffffffffffffff;
						pSVar12 = SStack_38.ToString();
						bVar11 = (pSVar13 == pSVar12);
						if (bVar11) {
							SStack_38.klass = (Enum)typeof(MobileInputControlShape);
							SStack_38.monitor = (IntPtr)0xffffffffffffffff;
							pSVar13 = SStack_38.ToString();
						}
						else {
							pSVar3 = this.shape;
							if (pSVar3 == null) goto label_05caa313;
							pSVar13 = pSVar3._value;
						}
						if (pUVar4 != null) {
							pUVar4.Shape = pSVar13;
							pSVar3 = this.popupMode;
							if ((pSVar3 != null) &&(pUVar4 = this.control, pUVar4 != null)) {
								pUVar4.PopupMode = pSVar3._value;
								pUVar18 = (MobileLayoutEditorOverlay)&pUVar4.PopupMode;
								pSVar3 = this.kind;
								if ((pSVar3 != null) &&(this.__4__this != null)) {
									pUVar4 = this.control;
									pMVar14 = (MethodInfo)pSVar3._value;
									bVar11 = pUVar18.IsActionListKind((String)pMVar14);
									if (bVar11) {
										__this_00 = this.actionList;
										if (__this_00 == null) goto label_05caa313;
										pMVar14 = (MethodInfo)__this_00.GetActionsString() ;
									}
									else {
										pMVar14 = (MethodInfo *)"None";
									}
									if (pUVar4 != null) {
										pUVar4.Actions = (String)pMVar14;
										pSVar5 = this.bindReelInAngle;
										if ((pSVar5 != null) &&(pUVar4 = this.control, pUVar4 != null)) {
											pUVar4.BindReelInAngle = pSVar5._value;
											pSVar5 = this.bindReelOutAngle;
											if (pSVar5 != null) {
												pUVar4.BindReelOutAngle = pSVar5._value;
												if (bVar10 == false) {
													pUVar4.AimAssistOnPress = false;
													pUVar4.AimAssistOnRelease = false;
													pSVar5 = this.width;
												}
												else {
													pSVar6 = this.aimAssistOnPress;
													if (pSVar6 == null) goto label_05caa313;
													pUVar4.AimAssistOnPress = pSVar6._value;
													pSVar6 = this.aimAssistOnRelease;
													if (pSVar6 == null) goto label_05caa313;
													pUVar4.AimAssistOnRelease = pSVar6._value;
													pSVar5 = this.width;
												}
												if (pSVar5 != null) {
													pUVar4.Width = pSVar5._value;
													pSVar5 = this.height;
													if (pSVar5 != null) {
														pUVar4.Height = pSVar5._value;
														pUVar7 = this.skin;
														if (pUVar7 != null) {
															pMVar14 = (MethodInfo)pUVar7.ToSkin();
															pUVar4.Skin = (MobileInputSkin)pMVar14;
															pUVar7 = this.onSkin;
															if (pUVar7 != null) {
																pUVar4 = this.control;
																pMVar14 = (MethodInfo)pUVar7.ToSkin();
																if (pUVar4 != null) {
																	pUVar4.OnSkin = (MobileInputSkin)pMVar14;
																	pUVar7 = this.icon;
																	if (pUVar7 != null) {
																		pUVar4 = this.control;
																		pMVar14 = (MethodInfo)pUVar7.ToSkin();
																		if (pUVar4 != null) {
																			pUVar4.Icon = (MobileInputSkin)pMVar14;
																			pSVar5 = this.iconSize;
																			if ((pSVar5 != null) &&(pUVar4 = this.control, pUVar4 != null)) {
																				pUVar4.IconSize = pSVar5._value;
																				pUVar7 = this.joystickHandleSkin;
																				if (pUVar7 != null) {
																					pMVar14 = (MethodInfo)pUVar7.ToSkin();
																					pUVar4.JoystickHandleSkin = (MobileInputSkin)pMVar14;
																					pUVar7 = this.joystickActiveSkin;
																					if (pUVar7 != null) {
																						pUVar4 = this.control;
																						pMVar14 = (MethodInfo)pUVar7.ToSkin();
																						if (pUVar4 != null) {
																							pUVar4.JoystickActiveSkin =(MobileInputSkin)pMVar14;
																							pUVar7 = this.joystickRingSkin;
																							if (pUVar7 != null) {
																								pUVar4 = this.control;
																								pMVar14 = (MethodInfo)pUVar7.ToSkin();
																								if (pUVar4 != null) {
																									pUVar4.JoystickRingSkin =(MobileInputSkin)pMVar14;
																									pUVar7 = this.joystickReelInSkin;
																									if (pUVar7 != null) {
																										pUVar4 = this.control;
																										pMVar14 = (MethodInfo)pUVar7.ToSkin();
																										if (pUVar4 != null) {
																											pUVar4.JoystickReelInSkin =(MobileInputSkin)pMVar14;
																											pUVar7 = this.joystickReelOutSkin;
																											if (pUVar7 != null) {
																												pUVar4 = this.control;
																												pUVar15 = pUVar7.ToSkin();
																												if (pUVar4 != null) {
																													pUVar4.JoystickReelOutSkin = pUVar15;
																													pSVar5 = this.joystickBaseScale;
																													if ((pSVar5 != null) &&(pUVar4 = this.control, pUVar4 != null)) {
																														pUVar4.JoystickBaseScale =pSVar5._value;
																														pSVar5 = this.joystickHandleScale;
																														if (pSVar5 != null) {
																															pUVar4.JoystickHandleScale =pSVar5._value;
																															pSVar5 = this. joystickReelOutRingDiameter;
																															if (pSVar5 != null) {
																																pUVar4.JoystickReelOutRingDiameter =pSVar5._value;
																																pSVar6 = this.moveContentWithTouch;
																																if (pSVar6 != null) {
																																	pUVar4.DisableContentMovement =(bool)(pSVar6._value ^ 1);
																																	pSVar6 = this.allowLookAreaThrough ;
																																	if (pSVar6 != null) {
																																		pUVar4.AllowLookAreaThrough =pSVar6._value;
																																		pUVar17 = this.parentControl;
																																		if (pUVar17 ==null) {
																																			if (this.addOnConfirm == false ) {
																																				return;
																																			}
																																			pUVar18 = this.__4__this;
																																			if (((pUVar18 ==(MobileLayoutEditorOverlay)0x0) || (pUVar8 = pUVar18. _layout, pUVar8 == null)) ||(pSVar16 = pUVar8.Controls, pSVar16 ==null)) goto label_05caa313;
																												bVar10 = pSVar16.Contains((object)pUVar4);
																												if (bVar10) {
																													return;
																												}
																												pUVar18 = this.__4__this;
																												if ((pUVar18 == null) || (pUVar8 = pUVar18._layout, pUVar8 == null)) goto label_05caa313;
																												pSVar16 = pUVar8.Controls;
																												pMVar14 = MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Add ;
																												}
																												else {
																													if (pUVar17.Children ==null) {
																													targetAddress = &pUVar17.Children;
																													pSVar16 = il2cpp_codegen_object_new((Il2CppClass)typeof(List<MobileInputControlLayout>));
																												pSVar16 = new List<object>();
																												*targetAddress = pSVar16;
																												pUVar17 = this.parentControl;
																												if (pUVar17 == null) goto label_05caa313;
																												}
																												pSVar16 = pUVar17.Children;
																												if (pSVar16 ==null) goto label_05caa313;
																												bVar10 = pSVar16.Contains((object)this.control);
																												if (bVar10) {
																													return;
																												}
																												pUVar4 = this.parentControl;
																												if (pUVar4 == null) goto label_05caa313;
																												pSVar16 = pUVar4.Children;
																												pMVar14 = MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Add ;
																												}
																												MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Add = pMVar14;
																												if (pSVar16 !=null) {
																													pUVar4 = this.control;
																													piVar1 = &pSVar16._version;
																													*piVar1 = *piVar1 + 1;
																													pUVar9 = pSVar16._items;
																													if (pUVar9 != (MobileInputControlLayout[])0x0) {
																														uVar2 = pSVar16._size;
																														if (uVar2 < (uint)pUVar9.Length) {
																															pSVar16._size = uVar2 + 1;
																															pUVar9[(int)uVar2] = pUVar4;
																														}
																														else {

																												pSVar16.AddWithResize((object)pUVar4);
																												}
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
					}
				}
			}
		}
	label_05caa313: ;
		throw new NullReferenceException();
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass60_0$$<ShowEditPopup>b__1: clean
	private void c__DisplayClass60_0__ShowEditPopup_b__1()
	{
		Action pSVar1;
		Object pUVar2;
		MobileLayoutEditorOverlay pUVar3;
		Dictionary<object, object> __this_00;
		GameObject pUVar4;
		bool bVar5;

		pSVar1 = this.applyChanges;
		if (pSVar1 != null) {
			(*(code)pSVar1.invoke_impl)(pSVar1.method_code);
			pUVar2 = (Object)this.panel;
			Object.Destroy(pUVar2);
			pUVar3 = this.__4__this;
			if (pUVar3 != null) {
				pUVar3.RebuildControls();
				pUVar3 = this.__4__this;
				if ((pUVar3 != null) &&(__this_00 = (Dictionary<object, object>)pUVar3._controlRects, __this_00 != null)) {
					bVar5 = __this_00.ContainsKey((object)this.control);
					if (bVar5) {
						pUVar3 = this.__4__this;
						if (pUVar3 == null) goto label_05caa94c;
						pUVar3.SelectControl(this.control);
					}
					pUVar3 = this.__4__this;
					if (this.parentControl == null) {
						if (pUVar3 != null) {
							pUVar2 = (Object)pUVar3._returnButton;
							bVar5 = (pUVar2 != null);
							if (!bVar5) {
								return;
							}
							pUVar4 = pUVar3._returnButton;
							if (pUVar4 != null) {
								pUVar4.SetActive(true);
								return;
							}
						}
					}
					else if (pUVar3 != null) {
						pUVar2 = (Object)pUVar3._returnButton;
						bVar5 = (pUVar2 != null);
						if (bVar5) {
							pUVar4 = pUVar3._returnButton;
							if (pUVar4 == null) goto label_05caa94c;
							pUVar4.SetActive(false);
						}
						pUVar3 = this.__4__this;
						if (pUVar3 != null) {
							pUVar3.ShowEditPopup(this.parentControl, false, null) ;
							return;
						}
					}
				}
			}
		}
	label_05caa94c: ;
		throw new NullReferenceException();
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass60_0$$<ShowEditPopup>b__2: clean
	private void c__DisplayClass60_0__ShowEditPopup_b__2()
	{
		Object pUVar1;
		MobileLayoutEditorOverlay pUVar2;
		GameObject pUVar3;
		bool bVar4;

		pUVar1 = (Object)this.panel;
		Object.Destroy(pUVar1);
		pUVar2 = this.__4__this;
		if (this.parentControl == null) {
			if (pUVar2 != null) {
				pUVar1 = (Object)pUVar2._returnButton;
				bVar4 = (pUVar1 != null);
				if (!bVar4) {
					return;
				}
				pUVar3 = pUVar2._returnButton;
				if (pUVar3 != null) {
					pUVar3.SetActive(true);
					return;
				}
			}
		}
		else if (pUVar2 != null) {
			pUVar2.RebuildControls();
			pUVar2 = this.__4__this;
			if (pUVar2 != null) {
				pUVar2.SelectControl(this.parentControl);
				pUVar2 = this.__4__this;
				if (pUVar2 != null) {
					pUVar1 = (Object)pUVar2._returnButton;
					bVar4 = (pUVar1 != null);
					if (bVar4) {
						pUVar3 = pUVar2._returnButton;
						if (pUVar3 == null) goto label_05caaaf8;
						pUVar3.SetActive(false);
					}
					pUVar2 = this.__4__this;
					if (pUVar2 != null) {
						pUVar2.ShowEditPopup(this.parentControl, false, null);
						return;
					}
				}
			}
		}
	label_05caaaf8: ;
		throw new NullReferenceException();
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass60_0$$<ShowEditPopup>b__3: 13 lines keep C-only constructs
	private void c__DisplayClass60_0__ShowEditPopup_b__3()
	{
		StringSetting pSVar1;
		MobileLayoutEditorOverlay pUVar2;
		MobileLayoutActionListEditor __this_00;
		Object pUVar3;
		GameObject pUVar4;
		bool bVar5;
		bool value;
		bool value_00;
		bool value_01;
		bool bVar6;
		bool value_02;
		bool bVar7;
		String pSVar8;
		String pSVar9;
		MethodInfo* __this_01;
		Enum SStack_80;
		ulong uStack_68;
		Enum SStack_60;
		Enum SStack_48;

		__this_01 = (MethodInfo*)this;
		if (Il2CppMethodInitialized_07547a6d == false) {
			__this_01 = &MethodInfo_Settings_TypedSetting_string_set_Value;
			Il2CppMethodInitialized_07547a6d = true;
		}
		pSVar1 = this.kind;
		if ((pSVar1 != null) &&(this.__4__this != null)) {
			bVar5 = __this_01.IsActionListKind(pSVar1._value);
			pSVar1 = this.kind;
			if ((pSVar1 != null) &&(this.__4__this != null)) {
				value = __this_01.UsesOnSkin(pSVar1._value);
				pSVar1 = this.kind;
				if (pSVar1 != null) {
					pSVar9 = pSVar1._value;
					SStack_48.klass = (Enum)typeof(MobileInputControlKind);
					SStack_48.monitor = (IntPtr)0xffffffffffffffff;
					pSVar8 = SStack_48.ToString();
					value_00 = (pSVar9 == pSVar8);
					pSVar1 = this.kind;
					if (pSVar1 != null) {
						pSVar9 = pSVar1._value;
						SStack_60.klass = (Enum)typeof(MobileInputControlKind);
						SStack_60.monitor = (IntPtr)0xffffffffffffffff;
						pSVar8 = SStack_60.ToString();
						value_01 = (pSVar9 == pSVar8);
						pSVar1 = this.kind;
						if ((pSVar1 != null) &&(this.__4__this != null)) {
							pSVar9 = pSVar1._value;
							SStack_80.klass = (Enum)typeof(MobileInputControlKind);
							SStack_80.monitor = (IntPtr)0xffffffffffffffff;
							pSVar8 = SStack_80.ToString();
							bVar6 = (pSVar9 == pSVar8);
							value_02 = true;
							if (!bVar6) {
								SStack_80.klass = (Enum)typeof(MobileInputControlKind);
								SStack_80.monitor = (IntPtr)0xffffffffffffffff;
								pSVar8 = SStack_80.ToString();
								value_02 = (pSVar9 == pSVar8);
							}
							pSVar1 = this.kind;
							if ((pSVar1 != null) &&(this.__4__this != null)) {
								pSVar9 = pSVar1._value;
								SStack_80.klass = (Enum)typeof(MobileInputControlKind);
								SStack_80.monitor = (IntPtr)0xffffffffffffffff;
								uStack_68 = 0;
								pSVar8 = SStack_80.ToString();
								bVar6 = (pSVar9 != pSVar8);
								pUVar2 = this.__4__this;
								if (pUVar2 != null) {
									if (pUVar2._role == 1) {
										pSVar1 = this.kind;
										if (pSVar1 == null) goto label_05cab3f0;
										pSVar9 = pSVar1._value;
										SStack_80.klass = (Enum)typeof(MobileInputControlKind);
										SStack_80.monitor = (IntPtr)0xffffffffffffffff;
										pSVar8 = SStack_80.ToString();
										bVar7 = (pSVar9 == pSVar8);
										uStack_68 = (ulong)bVar7;
									}
									__this_00 = this.actionList;
									if (__this_00 != null) {
										__this_00.SetVisible(bVar5);
									}
									pUVar3 = (Object)this.popupModeDropdown;
									bVar5 = (pUVar3 != null);
									if (bVar5) {
										pUVar4 = this.popupModeDropdown;
										if (pUVar4 == null) goto label_05cab3f0;
										pUVar4.SetActive(value_00);
									}
									pUVar3 = (Object)this.popupChildrenObject;
									bVar5 = (pUVar3 != null);
									if (bVar5) {
										pUVar4 = this.popupChildrenObject;
										if (pUVar4 == null) goto label_05cab3f0;
										pUVar4.SetActive(value_00);
									}
									pUVar3 = (Object)this.onSkinSetting;
									bVar5 = (pUVar3 != null);
									if (bVar5) {
										pUVar4 = this.onSkinSetting;
										if (pUVar4 == null) goto label_05cab3f0;
										pUVar4.SetActive(value);
									}
									pUVar3 = (Object)this.joystickHandleSkinSetting;
									bVar5 = (pUVar3 != null);
									if (bVar5) {
										pUVar4 = this.joystickHandleSkinSetting;
										if (pUVar4 == null) goto label_05cab3f0;
										pUVar4.SetActive(value_01);
									}
									pUVar3 = (Object)this.joystickActiveSkinSetting;
									bVar5 = (pUVar3 != null);
									if (bVar5) {
										pUVar4 = this.joystickActiveSkinSetting;
										if (pUVar4 == null) goto label_05cab3f0;
										pUVar4.SetActive(value_01);
									}
									pUVar3 = (Object)this.joystickRingSkinSetting;
									bVar5 = (pUVar3 != null);
									if (bVar5) {
										pUVar4 = this.joystickRingSkinSetting;
										if (pUVar4 == null) goto label_05cab3f0;
										pUVar4.SetActive(value_01);
									}
									pUVar3 = (Object)this.joystickReelInSkinSetting;
									bVar5 = (pUVar3 != null);
									if (bVar5) {
										pUVar4 = this.joystickReelInSkinSetting;
										if (pUVar4 == null) goto label_05cab3f0;
										pUVar4.SetActive(value_01);
									}
									pUVar3 = (Object)this.joystickReelOutSkinSetting;
									bVar5 = (pUVar3 != null);
									if (bVar5) {
										pUVar4 = this.joystickReelOutSkinSetting;
										if (pUVar4 == null) goto label_05cab3f0;
										pUVar4.SetActive(value_01);
									}
									pUVar3 = (Object)this.joystickBaseScaleSetting;
									bVar5 = (pUVar3 != null);
									if (bVar5) {
										pUVar4 = this.joystickBaseScaleSetting;
										if (pUVar4 == null) goto label_05cab3f0;
										pUVar4.SetActive(value_01);
									}
									pUVar3 = (Object)this.joystickHandleScaleSetting;
									bVar5 = (pUVar3 != null);
									if (bVar5) {
										pUVar4 = this.joystickHandleScaleSetting;
										if (pUVar4 == null) goto label_05cab3f0;
										pUVar4.SetActive(value_01);
									}
									pUVar3 = (Object)this.joystickReelOutRingDiameterSetting;
									bVar5 = (pUVar3 != null);
									if (bVar5) {
										pUVar4 = this.joystickReelOutRingDiameterSetting;
										if (pUVar4 == null) goto label_05cab3f0;
										pUVar4.SetActive(value_01);
									}
									pUVar3 = (Object)this.moveContentWithTouchToggle;
									bVar5 = (pUVar3 != null);
									if (bVar5) {
										pUVar4 = this.moveContentWithTouchToggle;
										if (pUVar4 == null) goto label_05cab3f0;
										pUVar4.SetActive(value_02);
									}
									pUVar3 = (Object)this.allowLookAreaThroughToggle;
									bVar5 = (pUVar3 != null);
									if (bVar5) {
										pUVar4 = this.allowLookAreaThroughToggle;
										if (pUVar4 == null) goto label_05cab3f0;
										pUVar4.SetActive(bVar6);
									}
									pUVar3 = (Object)this.bindReelInAngleSetting;
									bVar5 = (pUVar3 != null);
									if (bVar5) {
										pUVar4 = this.bindReelInAngleSetting;
										if (pUVar4 == null) goto label_05cab3f0;
										pUVar4.SetActive(value_01);
									}
									pUVar3 = (Object)this.bindReelOutAngleSetting;
									bVar5 = (pUVar3 != null);
									if (bVar5) {
										pUVar4 = this.bindReelOutAngleSetting;
										if (pUVar4 == null) goto label_05cab3f0;
										pUVar4.SetActive(value_01);
									}
									pUVar3 = (Object)this.aimAssistOnPressToggle;
									bVar5 = (pUVar3 != null);
									if (bVar5) {
										pUVar4 = this.aimAssistOnPressToggle;
										if (pUVar4 == null) goto label_05cab3f0;
										pUVar4.SetActive(SUB81(uStack_68, 0));
									}
									pUVar3 = (Object)this.aimAssistOnReleaseToggle;
									bVar5 = (pUVar3 != null);
									if (bVar5) {
										pUVar4 = this.aimAssistOnReleaseToggle;
										if (pUVar4 == null) goto label_05cab3f0;
										pUVar4.SetActive(SUB81(uStack_68, 0));
									}
									pUVar3 = (Object)this.shapeDropdown;
									bVar5 = (pUVar3 != null);
									if (bVar5) {
										pSVar1 = this.kind;
										if ((pSVar1 == null) ||(this.__4__this == null)) goto label_05cab3f0;
										pUVar4 = this.shapeDropdown;
										pSVar9 = pSVar1._value;
										SStack_80.klass = (Enum)typeof(MobileInputControlKind);
										SStack_80.monitor = (IntPtr)0xffffffffffffffff;
										pSVar8 = SStack_80.ToString();
										bVar5 = (pSVar9 == pSVar8);
										if (pUVar4 == null) goto label_05cab3f0;
										pUVar4.SetActive(!bVar5);
									}
									pSVar1 = this.kind;
									if ((pSVar1 != null) &&(this.__4__this != null)) {
										pSVar9 = pSVar1._value;
										SStack_80.klass = (Enum)typeof(MobileInputControlKind);
										SStack_80.monitor = (IntPtr)0xffffffffffffffff;
										pSVar8 = SStack_80.ToString();
										bVar5 = (pSVar9 == pSVar8);
										if (bVar5) {
											pSVar1 = this.shape;
											SStack_80.klass = (Enum)typeof(MobileInputControlShape);
											SStack_80.monitor = (IntPtr)0xffffffffffffffff;
											pSVar9 = SStack_80.ToString();
											if (pSVar1 == null) goto label_05cab3f0;
											pSVar1.Value = (object)pSVar9;
										}
										return;
									}
								}
							}
						}
					}
				}
			}
		}
	label_05cab3f0: ;
		throw new NullReferenceException();
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass60_0$$<ShowEditPopup>b__4: 2 lines keep C-only constructs
	private void c__DisplayClass60_0__ShowEditPopup_b__4()
	{
		Action pSVar1;
		code *vtableDispatch;
		ulong in_RDX;

		pSVar1 = this.refreshEditableOptions;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,pSVar1.method,in_RDX,vtableDispatch);
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass61_0$$<CreateSkinSetting>b__0: 1 lines keep C-only constructs
	private void c__DisplayClass61_0__CreateSkinSetting_b__0()
	{
		MobileLayoutEditorOverlay pUVar1;
		RectTransform parent;
		String current;
		Action<string> __this_00;
		MethodInfo method_00;

		pUVar1 = this.__4__this;
		if ((pUVar1 == null) ||(method_00 = (MethodInfo)this.state, method_00 == null)) {
			throw new NullReferenceException();
		}
		parent = pUVar1._root;
		current = (String)method_00.name;
		__this_00 = this.__9__2;
		if (__this_00 == null) {
			method_00 = null;
			__this_00 = new Action<string>((object)this, (intptr_t)MethodInfo_UI_MobileLayoutEditorOverlay_c__DisplayClass61_0_CreateSkinSetting_b__2);
			this.__9__2 = __this_00;
		}
		MobileLayoutSkinPickerModal.Open((Transform)parent, current, __this_00);
		return;
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass61_0$$<CreateSkinSetting>b__2: clean
	private void c__DisplayClass61_0__CreateSkinSetting_b__2(String value)
	{
		MobileInputSkinEditState pUVar1;
		Text pUVar2;
		bool bVar3;
		String pSVar4;
		Text __this_00;

		pUVar1 = this.state;
		if (pUVar1 != null) {
			pUVar1.Image = value;
			__this_00 = this.selectText;
			bVar3 = ((Object)__this_00 != null);
			if (!bVar3) {
				return;
			}
			pUVar1 = this.state;
			if ((pUVar1 != null) &&(this.__4__this != null)) {
				pUVar2 = this.selectText;
				pSVar4 = __this_00.GetSkinButtonLabel(pUVar1.Image);
				if (pUVar2 != null) {
					pUVar2.set_text(pSVar4);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass61_0$$<CreateSkinSetting>b__1: clean
	private void c__DisplayClass61_0__CreateSkinSetting_b__1()
	{
		MobileInputSkinEditState pUVar1;
		Text pUVar2;
		bool bVar3;
		String pSVar4;
		Text __this_00;

		pUVar1 = this.state;
		if (pUVar1 != null) {
			pUVar1.Image = (String)**(ulong*)(g_data_07556758 + 0xb8);
			__this_00 = this.selectText;
			bVar3 = ((Object)__this_00 != null);
			if (!bVar3) {
				return;
			}
			pUVar1 = this.state;
			if ((pUVar1 != null) &&(this.__4__this != null)) {
				pUVar2 = this.selectText;
				pSVar4 = __this_00.GetSkinButtonLabel(pUVar1.Image);
				if (pUVar2 != null) {
					pUVar2.set_text(pSVar4);
					return;
				}
			}
		}
		throw new NullReferenceException();
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass75_0$$<CreatePopupChildrenEditor>b__0: 5 lines keep C-only constructs
	private void c__DisplayClass75_0__CreatePopupChildrenEditor_b__0()
	{
		int piVar1;
		uint uVar2;
		Action pSVar3;
		MobileInputControlLayout[] pUVar4;
		Object pUVar5;
		GameObject __this_00;
		bool bVar6;
		List<MobileInputControlLayout> pSVar7;
		String pSVar8;
		MobileInputControlLayout control;
		List<MobileInputControlLayout>* targetAddress;
		MobileInputControlLayout pUVar9;
		MobileLayoutEditorOverlay pUVar11;
		Enum local_40;

		pSVar3 = this.applyParentChanges;
		if (pSVar3 != null) {
			(*(code)pSVar3.invoke_impl)(pSVar3.method_code);
			pUVar9 = this.popupControl;
			if (pUVar9 != null) {
				if (pUVar9.Children == null) {
					targetAddress = &pUVar9.Children;
					pSVar7 = new List<MobileInputControlLayout>();
					*targetAddress = pSVar7;
					pUVar9 = this.popupControl;
				}
				local_40.klass = (Enum)typeof(MobileInputControlKind);
				local_40.monitor = (IntPtr)0xffffffffffffffff;
				pSVar8 = local_40.ToString();
				if (pUVar9 != null) {
					pUVar9.Kind = pSVar8;
					pUVar11 = (MobileLayoutEditorOverlay)&pUVar9.Kind;
					pUVar9 = this.popupControl;
					if (((pUVar9 != null) &&(pSVar7 = pUVar9.Children, pSVar7 != null)) &&(this.__4__this != null)) {
						control = pUVar11.CreateDefaultPopupChild(pSVar7._size);
						pUVar9 = this.popupControl;
						if ((pUVar9 != null) &&(pSVar7 = pUVar9.Children, pSVar7 != null)) {
							piVar1 = &pSVar7._version;
							*piVar1 = *piVar1 + 1;
							pUVar4 = pSVar7._items;
							if (pUVar4 != null) {
								uVar2 = pSVar7._size;
								if (uVar2 < (uint)pUVar4.Length) {
									pSVar7._size = uVar2 + 1;
									pUVar4[(int)uVar2] = control;
								}
								else {
									pSVar7.AddWithResize((object)control);
								}
								pUVar5 = (Object)this.editPanel;
								Object.Destroy(pUVar5);
								pUVar11 = this.__4__this;
								if (pUVar11 != null) {
									pUVar5 = (Object)pUVar11._returnButton;
									bVar6 = (pUVar5 != null);
									if (bVar6) {
										__this_00 = pUVar11._returnButton;
										if (__this_00 == null) goto label_05cabab8;
										__this_00.SetActive(true);
									}
									pUVar11 = this.__4__this;
									if (pUVar11 != null) {
										pUVar11.RebuildControls();
										pUVar11 = this.__4__this;
										if (pUVar11 != null) {
											pUVar11.SelectControl(control);
											pUVar11 = this.__4__this;
											if (pUVar11 != null) {
												pUVar11.ShowEditPopup(control, false, this.popupControl);
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
	label_05cabab8: ;
		throw new NullReferenceException();
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass76_0$$<CreatePopupChildRow>b__0: clean
	private void c__DisplayClass76_0__CreatePopupChildRow_b__0()
	{
		Action pSVar1;
		Object pUVar2;
		MobileLayoutEditorOverlay pUVar3;
		GameObject __this_00;
		bool bVar4;

		pSVar1 = this.applyParentChanges;
		if (pSVar1 != null) {
			(*(code)pSVar1.invoke_impl)(pSVar1.method_code);
			pUVar2 = (Object)this.editPanel;
			Object.Destroy(pUVar2);
			pUVar3 = this.__4__this;
			if (pUVar3 != null) {
				pUVar2 = (Object)pUVar3._returnButton;
				bVar4 = (pUVar2 != null);
				if (bVar4) {
					__this_00 = pUVar3._returnButton;
					if (__this_00 == null) goto label_05cabbd3;
					__this_00.SetActive(true);
				}
				pUVar3 = this.__4__this;
				if (pUVar3 != null) {
					pUVar3.RebuildControls();
					pUVar3 = this.__4__this;
					if (pUVar3 != null) {
						pUVar3.SelectControl(this.child);
						pUVar3 = this.__4__this;
						if (pUVar3 != null) {
							pUVar3.ShowEditPopup(this.child, false, this.popupControl);
							return;
						}
					}
				}
			}
		}
	label_05cabbd3: ;
		throw new NullReferenceException();
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass76_0$$<CreatePopupChildRow>b__1: clean
	private void c__DisplayClass76_0__CreatePopupChildRow_b__1()
	{
		Action pSVar1;
		MobileInputControlLayout pUVar2;
		List<MobileInputControlLayout> __this_00;
		Object pUVar3;
		MobileLayoutEditorOverlay pUVar4;
		GameObject __this_01;
		bool bVar5;

		pSVar1 = this.applyParentChanges;
		if (pSVar1 != null) {
			(*(code)pSVar1.invoke_impl)(pSVar1.method_code);
			pUVar2 = this.popupControl;
			if (pUVar2 != null) {
				__this_00 = pUVar2.Children;
				if (__this_00 != null) {
					__this_00.Remove((object)this.child);
				}
				pUVar3 = (Object)this.editPanel;
				Object.Destroy(pUVar3);
				pUVar4 = this.__4__this;
				if (pUVar4 != null) {
					pUVar3 = (Object)pUVar4._returnButton;
					bVar5 = (pUVar3 != null);
					if (bVar5) {
						__this_01 = pUVar4._returnButton;
						if (__this_01 == null) goto label_05cabd29;
						__this_01.SetActive(true);
					}
					pUVar4 = this.__4__this;
					if (pUVar4 != null) {
						pUVar4.RebuildControls();
						pUVar4 = this.__4__this;
						if (pUVar4 != null) {
							pUVar4.SelectControl(this.popupControl);
							pUVar4 = this.__4__this;
							if (pUVar4 != null) {
								pUVar4.ShowEditPopup(this.popupControl, false, null);
								return;
							}
						}
					}
				}
			}
		}
	label_05cabd29: ;
		throw new NullReferenceException();
	}

	// UI.MobileLayoutEditorOverlay.<>c__DisplayClass95_0$$<CreateTextButton>b__0: 2 lines keep C-only constructs
	private void c__DisplayClass95_0__CreateTextButton_b__0()
	{
		Action pSVar1;
		code *vtableDispatch;
		ulong in_RDX;

		pSVar1 = this.onClick;
		if (pSVar1 == null) {
			throw new NullReferenceException();
		}
		vtableDispatch = (code)pSVar1.invoke_impl;
		(*vtableDispatch)(pSVar1.method_code,pSVar1.method,in_RDX,vtableDispatch);
		return;
	}
}
