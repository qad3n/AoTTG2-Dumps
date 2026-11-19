// ==================== AoTTG2 cross-reference ====================
// Type: UI.CursorManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/UI/CursorManager.c
// Prior real C# source (older reference): Assets/Scripts/UI/CursorManager.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.UI;

namespace UI;

[Token(Token = "0x20007D4")]
[DefaultExecutionOrder(-100)]
internal class CursorManager : MonoBehaviour
{
	[Token(Token = "0x4002746")]
	[FieldOffset(Offset = "0x0")]
	public static CursorState State;

	[Token(Token = "0x4002747")]
	[FieldOffset(Offset = "0x8")]
	private static CursorManager _instance;

	[Token(Token = "0x4002748")]
	[FieldOffset(Offset = "0x10")]
	private static Dictionary<CrosshairStyle, Texture2D> _crosshairs;

	[Token(Token = "0x4002749")]
	[FieldOffset(Offset = "0x20")]
	private bool _ready;

	[Token(Token = "0x400274A")]
	[FieldOffset(Offset = "0x21")]
	private bool _crosshairWhite;

	[Token(Token = "0x400274B")]
	[FieldOffset(Offset = "0x22")]
	private bool _lastCrosshairWhite;

	[Token(Token = "0x400274C")]
	[FieldOffset(Offset = "0x28")]
	private string _crosshairText;

	[Token(Token = "0x400274D")]
	[FieldOffset(Offset = "0x30")]
	private bool _forceNextCrosshairUpdate;

	[Token(Token = "0x400274E")]
	[FieldOffset(Offset = "0x34")]
	private CrosshairStyle _lastCrosshairStyle;

	[Token(Token = "0x400274F")]
	[FieldOffset(Offset = "0x38")]
	private Vector3 _arrowLeftPosition;

	[Token(Token = "0x4002750")]
	[FieldOffset(Offset = "0x44")]
	private Vector3 _arrowRightPosition;

	[Token(Token = "0x4002751")]
	[FieldOffset(Offset = "0x50")]
	private Quaternion _arrowLeftRotation;

	[Token(Token = "0x4002752")]
	[FieldOffset(Offset = "0x60")]
	private Quaternion _arrowRightRotation;

	[Token(Token = "0x4002753")]
	[FieldOffset(Offset = "0x70")]
	private bool _arrowLeftWhite;

	[Token(Token = "0x4002754")]
	[FieldOffset(Offset = "0x71")]
	private bool _arrowRightWhite;

	[Token(Token = "0x4002755")]
	[FieldOffset(Offset = "0x18")]
	private static Vector3 _wowCursorPosition;

	[Token(Token = "0x4002756")]
	[FieldOffset(Offset = "0x24")]
	private static int _wowCursorFrame;

	[Token(Token = "0x4002757")]
	private const float MouseAxisSensitivity = 0.1f;

	[Token(Token = "0x4002758")]
	private const float LegacyMouseDeltaScale = 1f;

	[Token(Token = "0x4002759")]
	[FieldOffset(Offset = "0x28")]
	private static bool _wowVirtualCursorActive;

	[Token(Token = "0x17000D3E")]
	private static bool UsesWOWCursor
	{
		[Token(Token = "0x6004B95")]
		[Address(RVA = "0x5BE52B0", Offset = "0x5BE42B0", VA = "0x5BE52B0")]
		get
		{
			// Lifted from source/cpp/UI/CursorManager.c (UI.CursorManager$$get_UsesWOWCursor): 1 lines keep C-only constructs
			byte bVar1;
			int iVar2;
			BaseCamera pCVar3;
			GeneralSettings pSVar4;
			BoolSetting pSVar5;

			pCVar3 = SceneLoader.CurrentCamera;
			if (pCVar3 != null) {
				bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
				if (((pCVar3.klass._2).typeHierarchyDepth < bVar1) ||((pCVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera))) {
					throw new InvalidCastException();
				}
				iVar2 = *(int)&(*(ulong)((sbyte)pCVar3 + 0x68));
				if (iVar2 == 3) {
					return true;
				}
				if (iVar2 != 1) {
					return false;
				}
				pSVar4 = SettingsManager.GeneralSettings;
				if ((pSVar4 != null) &&(pSVar5 = pSVar4.OriginalCameraWOWRotation, pSVar5 != null)) {
					return pSVar5._value != false;
				}
			}
			throw new NullReferenceException();
		}
	}

	[Token(Token = "0x17000D3F")]
	private static bool UsesCenteredCursor
	{
		[Token(Token = "0x6004B96")]
		[Address(RVA = "0x5BE5690", Offset = "0x5BE4690", VA = "0x5BE5690")]
		get
		{
			// Lifted from source/cpp/UI/CursorManager.c (UI.CursorManager$$get_UsesCenteredCursor): 1 lines keep C-only constructs
			byte bVar1;
			BaseCamera pCVar2;

			pCVar2 = SceneLoader.CurrentCamera;
			if (pCVar2 == null) {
				throw new NullReferenceException();
			}
			bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
			if (((pCVar2.klass._2).typeHierarchyDepth < bVar1) ||((pCVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera))) {
				throw new InvalidCastException();
			}
			return ((ulong)(*(ulong)((sbyte)pCVar2 + 0x68)) & 0xfffffffd) == 0;
		}
	}

	[Token(Token = "0x6004B92")]
	[Address(RVA = "0x5BE4F80", Offset = "0x5BE3F80", VA = "0x5BE4F80")]
	private static void UpdateGameplayCursorLock()
	{
		// Lifted from source/cpp/UI/CursorManager.c (UI.CursorManager$$UpdateGameplayCursorLock): 6 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		InGameCamera __this;
		BaseCamera pCVar4;
		Il2CppClass klass;
		bool bVar5;
		int iVar6;
		CustomLogic_CustomLogicManager_StaticFields pCVar7;
		byte bVar8;
		int value;

		__this = (InGameCamera)SceneLoader.CurrentCamera;
		if (__this != null) {
			bVar8 = (typeof(InGameCamera)._2).typeHierarchyDepth;
			if (((__this.klass._2).typeHierarchyDepth < bVar8) ||((__this.klass._2).typeHierarchy[(ulong)bVar8 - 1] != typeof(InGameCamera))) {
				throw new InvalidCastException();
			}
		}
		if ((typeof(CursorManager)._2).cctor_finished_or_no_cctor == 0) {
			bVar5 = CursorManager.UsesWOWCursor;
			if (bVar5) goto label_05ce5055;
	label_05ce510d: ;
			if ((typeof(CursorManager)._2).cctor_finished_or_no_cctor == 0) {
				if (Il2CppMethodInitialized_07547c14 != false) goto label_05ce512b;
	label_05ce5216: ;
				Il2CppMethodInitialized_07547c14 = true;
				uVar2 = (typeof(CursorManager)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_07547c14 == false) goto label_05ce5216;
	label_05ce512b: ;
				uVar2 = (typeof(CursorManager)._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
			}
			klass = typeof(CursorManager);
			CursorManager._wowCursorFrame = -1;
			CursorManager._wowVirtualCursorActive = false;
			bVar8 = 0;
			uVar2 = (((CursorManager)klass)._2).cctor_finished_or_no_cctor;
		}
		else {
			bVar5 = CursorManager.UsesWOWCursor;
			if (!bVar5) goto label_05ce510d;
	label_05ce5055: ;
			if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) {
				bVar5 = Application.isFocused;
				if (bVar5) goto label_05ce508c;
				goto label_05ce510d;
			}
			bVar5 = Application.isFocused;
			if (!bVar5) goto label_05ce510d;
	label_05ce508c: ;
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
				pCVar7 = typeof(CustomLogicManager).static_fields;
				if (pCVar7.CameraLocked == false) goto label_05ce50cb;
				goto label_05ce510d;
			}
			pCVar7 = typeof(CustomLogicManager).static_fields;
			if (pCVar7.CameraLocked != false) goto label_05ce510d;
	label_05ce50cb: ;
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
				pCVar7 = typeof(CustomLogicManager).static_fields;
			}
			if (pCVar7.Cutscene != false) goto label_05ce510d;
			if ((typeof(CustomLogicManager)._2).cctor_finished_or_no_cctor == 0) {
				pCVar7 = typeof(CustomLogicManager).static_fields;
			}
			if (pCVar7.ManualCamera != false) goto label_05ce510d;
			if (__this == null) goto label_05ce52aa;
			bVar5 = __this.UsesMouseLook;
			CursorManager.UpdateWOWCursorPosition(bVar5);
			bVar8 = 1;
			uVar2 = (typeof(CursorManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(CursorManager);
		}
		if (uVar2 == 0) {
		}
		pCVar4 = SceneLoader.CurrentCamera;
		if (pCVar4 != null) {
			bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
			if (((pCVar4.klass._2).typeHierarchyDepth < bVar1) ||((pCVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera))) {
				throw new InvalidCastException();
			}
			value = 2 - (uint)(bVar8 | ((ulong)(*(ulong)((sbyte)pCVar4 + 0x68)) & 0xfffffffd) == 0);
			iVar6 = Cursor.lockState;
			if (iVar6 == value) {
				return;
			}
			Cursor.lockState = value;
			return;
		}
	label_05ce52aa: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B93")]
	[Address(RVA = "0x5BE5640", Offset = "0x5BE4640", VA = "0x5BE5640")]
	private static void ResetWOWCursor()
	{
		// Lifted from source/cpp/UI/CursorManager.c (UI.CursorManager$$ResetWOWCursor): clean

		CursorManager._wowCursorFrame = -1;
		CursorManager._wowVirtualCursorActive = false;
		return;
	}

	[Token(Token = "0x6004B94")]
	[Address(RVA = "0x5BE5390", Offset = "0x5BE4390", VA = "0x5BE5390")]
	private static void UpdateWOWCursorPosition(bool rotating)
	{
		// Lifted from source/cpp/UI/CursorManager.c (UI.CursorManager$$UpdateWOWCursorPosition): clean
		float fVar1;
		uint uVar2;
		int iVar3;
		CursorManager pUVar4;
		int iVar5;
		UI_CursorManager_StaticFields pUVar6;
		Il2CppClass pIVar7;
		float fVar8;
		Vector3 UVar9;

		if (Il2CppMethodInitialized_07547c15 == false) {
			Il2CppMethodInitialized_07547c15 = true;
			if ((typeof(CursorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05ce54fb;
	label_05ce53c1: ;
			if (CursorManager._wowVirtualCursorActive != false) goto label_05ce53d2;
	label_05ce5514: ;
			UVar9 = Input.mousePosition;
			pUVar4 = typeof(CursorManager);
			pUVar6 = typeof(CursorManager).static_fields;
			(pUVar6._wowCursorPosition).x = UVar9.x;
			(pUVar6._wowCursorPosition).y = UVar9.y;
			(pUVar6._wowCursorPosition).z = UVar9.z;
			pUVar4.static_fields._wowVirtualCursorActive = true;
			iVar5 = Time.frameCount;
			pIVar7 = typeof(CursorManager);
			CursorManager._wowCursorFrame = iVar5;
			uVar2 = (((CursorManager)pIVar7)._2).cctor_finished_or_no_cctor;
		}
		else {
			if ((typeof(CursorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05ce53c1;
	label_05ce54fb: ;
			if (CursorManager._wowVirtualCursorActive == false) goto label_05ce5514;
	label_05ce53d2: ;
			uVar2 = (typeof(CursorManager)._2).cctor_finished_or_no_cctor;
			pIVar7 = typeof(CursorManager);
		}
		if (uVar2 == 0) {
			pIVar7 = typeof(CursorManager);
		}
		iVar3 = *(int)((long)pIVar7.static_fields + 0x24);
		iVar5 = Time.frameCount;
		if (iVar3 != iVar5) {
			iVar5 = Time.frameCount;
			pIVar7 = typeof(CursorManager);
			if ((typeof(CursorManager)._2).cctor_finished_or_no_cctor == 0) {
				pIVar7 = typeof(CursorManager);
				pUVar6 = typeof(CursorManager).static_fields;
				pUVar6._wowCursorFrame = iVar5;
			}
			else {
				pUVar6 = typeof(CursorManager).static_fields;
				pUVar6._wowCursorFrame = iVar5;
			}
			if (!rotating) {
				if ((pIVar7._2).cctor_finished_or_no_cctor == 0) {
					pUVar6 = typeof(CursorManager).static_fields;
				}
				fVar1 = (pUVar6._wowCursorPosition).x;
				fVar8 = Input.GetAxisRaw("Mouse X");
				(pUVar6._wowCursorPosition).x = fVar8 / 0.1 + fVar1;
				pUVar6 = typeof(CursorManager).static_fields;
				fVar1 = (pUVar6._wowCursorPosition).y;
				fVar8 = Input.GetAxisRaw("Mouse Y");
				(pUVar6._wowCursorPosition).y = fVar8 / 0.1 + fVar1;
				uVar2 = (typeof(CursorManager)._2).cctor_finished_or_no_cctor;
				goto joined_r0x05ce542a;
			}
		}
		uVar2 = (typeof(CursorManager)._2).cctor_finished_or_no_cctor;
	joined_r0x05ce542a: ;
		if (uVar2 == 0) {
		}
		fVar1 = (CursorManager._wowCursorPosition).x;
		iVar5 = Screen.width;
		fVar8 = (float)iVar5;
		if (fVar1 <= (float)iVar5) {
			fVar8 = fVar1;
		}
		pUVar6 = typeof(CursorManager).static_fields;
		(pUVar6._wowCursorPosition).x = (float)(-(uint)(0.0 <= fVar1) & (uint)fVar8);
		fVar1 = (pUVar6._wowCursorPosition).y;
		iVar5 = Screen.height;
		fVar8 = (float)iVar5;
		if (fVar1 <= (float)iVar5) {
			fVar8 = fVar1;
		}
		(CursorManager._wowCursorPosition).y =(float)(-(uint)(0.0 <= fVar1) & (uint)fVar8);
		return;
	}

	[Token(Token = "0x6004B97")]
	[Address(RVA = "0x5BE5720", Offset = "0x5BE4720", VA = "0x5BE5720")]
	public static void Init()
	{
		// Lifted from source/cpp/UI/CursorManager.c (UI.CursorManager$$Init): 14 lines keep C-only constructs
		int key;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		String path;
		Dictionary<CrosshairStyle, Texture2D> __this;
		Il2CppType handle;
		sbyte cVar4;
		CursorManager pUVar5;
		Type enumType;
		Array __this_00;
		object pIVar6;
		VirtualInvokeData pVVar7;
		int piVar8;
		String pSVar9;
		Object value;
		ulong uVar10;
		long lVar11;
		object local_70;
		object local_68;
		object* local_58;
		object* local_50;
		Enum local_48;

		local_70 = null;
		local_68 = null;
		pUVar5 = SingletonFactory.CreateSingleton<CursorManager>((object)CursorManager._instance) ;
		CursorManager._instance = pUVar5;
		handle = TypeRef_UI_CrosshairStyle;
		enumType = Type.GetTypeFromHandle((RuntimeTypeHandle)handle);
		__this_00 = Enum.GetValues(enumType);
		if (__this_00 != null) {
			pIVar6 = (object)__this_00.GetEnumerator();
			local_58 = &local_70;
			local_50 = &local_68;
			do {
				local_70 = pIVar6;
				if (pIVar6 == null) {
					throw new NullReferenceException();
				}
				pIVar2 = pIVar6.klass;
				uVar10 = (ulong)(pIVar2._2).interface_offsets_count;
				cVar4 = pIVar6.Dispose();
				pIVar6 = local_70;
				if (cVar4 == false) {
					pIVar6 = (local_70 as IDisposable);
					local_68 = pIVar6;
					if (pIVar6 == null) goto label_05ce5b66;
					pIVar2 = pIVar6.klass;
					uVar10 = (ulong)(pIVar2._2).interface_offsets_count;
					if (uVar10 == 0) goto label_05ce5b3f;
					pIVar3 = (pIVar2._1).interfaceOffsets;
					lVar11 = 0;
					goto label_05ce5b30;
				}
				if (local_70 == null) {
					throw new NullReferenceException();
				}
				pIVar2 = local_70.klass;
				uVar10 = (ulong)(pIVar2._2).interface_offsets_count;
				pIVar6 = pIVar6.Dispose();
				if (pIVar6 == null) {
					throw new NullReferenceException();
				}
				if ((pIVar6.klass._1).element_class != (typeof(CrosshairStyle)._1).element_class) {
					throw new InvalidCastException();
				}
				piVar8 = il2cpp_vm_Object_Unbox(pIVar6);
				key = *piVar8;
				path = ResourcePaths.UI;
				local_48.klass = (Enum)typeof(CrosshairStyle);
				local_48.monitor = (IntPtr)0xffffffffffffffff;
				pSVar9 = local_48.ToString();
				pSVar9 = String.Concat("Cursors/Cursor", pSVar9);
				value = ResourceManager.LoadAsset(path, pSVar9, false, false);
				if ((value != null) &&((Texture2D)value.klass != typeof(Texture2D))) {
					throw new InvalidCastException();
				}
				__this = CursorManager._crosshairs;
				if (__this == null) {
					throw new NullReferenceException();
				}
				__this.Add(key, (object)value);
				pIVar6 = local_70;
			} while(true);
		}
		goto label_05ce5bc8;
		while (true) {
			lVar11 = lVar11 + 0x10;
			if (!(uVar10 * 0x10 != lVar11)) break;
	label_05ce5b30: ;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar11) == typeof(IDisposable)) {
				pVVar7 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar11);
				goto label_05ce5b5d;
			}
		}
	label_05ce5b3f: ;
	label_05ce5b5d: ;
		pIVar6.Dispose();
	label_05ce5b66: ;
		pUVar5 = CursorManager._instance;
		if (pUVar5 != null) {
			pUVar5._ready = true;
			return;
		}
	label_05ce5bc8: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004B98")]
	[Address(RVA = "0x5BE5C30", Offset = "0x5BE4C30", VA = "0x5BE5C30")]
	private void Update()
	{
		// Lifted from source/cpp/UI/CursorManager.c (UI.CursorManager$$Update): 4 lines keep C-only constructs
		uint uVar1;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_07547c19 == false) {
			Il2CppMethodInitialized_07547c19 = true;
			uVar1 = (typeof(CursorManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(CursorManager);
		}
		else {
			uVar1 = (typeof(CursorManager)._2).cctor_finished_or_no_cctor;
			klass = typeof(CursorManager);
		}
		typeof(CursorManager) = (CursorManager)klass;
		if (uVar1 == 0) {
			CursorManager.UpdateCursorState();
			return;
		}
		CursorManager.UpdateCursorState();
		return;
	}

	[Token(Token = "0x6004B99")]
	[Address(RVA = "0x5BE5C90", Offset = "0x5BE4C90", VA = "0x5BE5C90")]
	private static void UpdateCursorState()
	{
		// Lifted from source/cpp/UI/CursorManager.c (UI.CursorManager$$UpdateCursorState): 12 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		BaseMenu pUVar3;
		BaseMenu pUVar4;
		Il2CppClass pIVar5;
		IntPtr pvVar6;
		bool bVar7;
		sbyte cVar8;
		object pIVar9;
		object pIVar10;
		BasePlayerController x;
		BasicTitan method_00;

		if (Il2CppMethodInitialized_07547c1a == false) {
			Il2CppMethodInitialized_07547c1a = true;
			if ((typeof(Application)._2).cctor_finished_or_no_cctor != 0) goto label_05ce5cb9;
	label_05ce5db4: ;
			bVar7 = Application.isFocused;
		}
		else {
			if ((typeof(Application)._2).cctor_finished_or_no_cctor == 0) goto label_05ce5db4;
	label_05ce5cb9: ;
			bVar7 = Application.isFocused;
		}
		if (!bVar7) {
			if (((typeof(CursorManager))._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar7 = true;
			goto label_05ce5de5;
		}
		uVar2 = SceneLoader.SceneName;
		if ((6 < uVar2) || ((0x73U >> (uVar2 & 0x1f) & 1) == 0)) {
			if (((typeof(UIManager))._2).cctor_finished_or_no_cctor == 0) {
			}
			pUVar3 = UIManager.CurrentMenu;
			bVar7 = ((Object)pUVar3 == null);
			if (!bVar7) {
				pUVar3 = UIManager.CurrentMenu;
				if (pUVar3 != null) {
					pUVar4 = pUVar3.klass;
					bVar1 = (typeof(InGameMenu)._2).typeHierarchyDepth;
					if ((bVar1 <= (pUVar4._2).typeHierarchyDepth) &&((pUVar4._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(InGameMenu))) {
						pIVar9 = il2cpp_codegen_is_inst_class((object)SceneLoader.CurrentGameManager, typeof(InGameManager));
						pUVar3 = UIManager.CurrentMenu;
						pIVar10 = il2cpp_codegen_is_inst_class((object)pUVar3, typeof(InGameMenu)) ;
						if (pIVar10 == null) goto label_05ce612e;
						pIVar10 = il2cpp_codegen_is_inst_class((object)pUVar3, typeof(InGameMenu)) ;
						pIVar5 = pIVar10[0xd].klass;
						bVar7 = InGameMenu.InMenu();
						if (!bVar7) {
							if (pIVar9 == null) goto label_05ce612e;
							cVar8 = (*pIVar9.klass.vtable[0x38].methodPtr)(pIVar9);
							if (((cVar8 != false) && (*(sbyte)((long)&pIVar9[9].monitor + 1) == false)) &&(*(sbyte)((long)&pIVar9[9].monitor + 2) == false)) {
								bVar7 = ((Object)pIVar5 != null) ;
								if (bVar7) {
									if (pIVar5 == null) goto label_05ce612e;
									bVar7 = pIVar5.IsInputActive();
									if (!bVar7) {
										bVar7 = pIVar5.IsPointerOverChatUI();
										if (!bVar7) goto label_05ce5fa6;
									}
								}
								else {
	label_05ce5fa6: ;
									if (CustomLogicManager.CursorVisible == false) {
										pIVar5 = pIVar9[8].klass;
										method_00 = null;
										bVar7 = ((Object)pIVar5 != null);
										if ((bVar7) && (pIVar5 = pIVar9[8].klass, pIVar5 != null)) {
											pvVar6 = (pIVar5._1).image;
											bVar1 = (typeof(Human)._2).typeHierarchyDepth;
											if ((((bVar1 <= *(byte)((long)pvVar6 + 0x130)) &&(method_00 = (BasicTitan)typeof(Human), *(Human*)(*(long)((long)pvVar6 + 200) + -8 + (ulong)bVar1 * 8) == typeof(Human))) ||((bVar1 = (typeof(BasicTitan)._2).typeHierarchyDepth, method_00 = typeof(BasicTitan), bVar1 <= *(byte)((long)pvVar6 + 0x130) && (*(BasicTitan*)(*(long)((long)pvVar6 + 200) + -8 + (ulong)bVar1 * 8) == typeof(BasicTitan))))) && (*(sbyte)&(pIVar5._1).klass == false)) {
												if (CustomLogicManager.Cutscene == false) {
													if (pIVar9[8].klass == null) {
	label_05ce612e: ;
														throw new NullReferenceException();
													}
													x = pIVar9[8].klass.GetComponent<BasePlayerController>();
													method_00 = null;
													bVar7 = ((Object)x != null);
													if (bVar7) {
														if (x == null) goto label_05ce612e;
														if (x.HideCursor == false) {
															CursorManager.SetCrosshair(false);
															return;
														}
													}
												}
											}
										}
										CursorManager.SetHidden(false);
										return;
									}
								}
							}
						}
					}
				}
			}
		}
		bVar7 = false;
	label_05ce5de5: ;
		CursorManager.SetPointer(bVar7);
		return;
	}

	[Token(Token = "0x6004B9A")]
	[Address(RVA = "0x5BE65C0", Offset = "0x5BE55C0", VA = "0x5BE65C0")]
	public static void RefreshCursorLock()
	{
		// Lifted from source/cpp/UI/CursorManager.c (UI.CursorManager$$RefreshCursorLock): clean
		uint uVar1;
		CursorManager pUVar3;
		bool bVar4;

		if (Il2CppMethodInitialized_07547c1b == false) {
			Il2CppMethodInitialized_07547c1b = true;
			uVar1 = (typeof(CursorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CursorManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		if (Il2CppMethodInitialized_07547c14 == false) {
			Il2CppMethodInitialized_07547c14 = true;
			uVar1 = (typeof(CursorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(CursorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		CursorManager._wowCursorFrame = -1;
		CursorManager._wowVirtualCursorActive = false;
		pUVar3 = CursorManager._instance;
		bVar4 = ((Object)pUVar3 != null);
		if (bVar4) {
			pUVar3 = CursorManager._instance;
			if (pUVar3 == null) {
				throw new NullReferenceException();
			}
			if (pUVar3._ready != false) {
				if ((typeof(CursorManager)._2).cctor_finished_or_no_cctor == 0) {
					CursorManager.UpdateCursorState();
					return;
				}
				CursorManager.UpdateCursorState();
				return;
			}
		}
		return;
	}

	[Token(Token = "0x6004B9B")]
	[Address(RVA = "0x5BE6720", Offset = "0x5BE5720", VA = "0x5BE6720")]
	private void OnApplicationFocus(bool focused)
	{
		// Lifted from source/cpp/UI/CursorManager.c (UI.CursorManager$$OnApplicationFocus): 2 lines keep C-only constructs
		undefined3 in_register_00000031;
		uint uVar1;

		uVar1 = CONCAT31(in_register_00000031, focused);
		if (focused) {
			return;
		}
		if (((typeof(CursorManager))._2).cctor_finished_or_no_cctor == 0) {
			CursorManager.SetPointer(true);
			return;
		}
		CursorManager.SetPointer(true);
		return;
	}

	[Token(Token = "0x6004B9C")]
	[Address(RVA = "0x5BE6140", Offset = "0x5BE5140", VA = "0x5BE6140")]
	public static void SetPointer(bool force = false)
	{
		// Lifted from source/cpp/UI/CursorManager.c (UI.CursorManager$$SetPointer): 4 lines keep C-only constructs
		int iVar1;
		uint uVar2;
		Il2CppClass klass;

		if (!force) {
			if (((typeof(CursorManager))._2).cctor_finished_or_no_cctor == 0) {
				iVar1 = CursorManager.State;
			}
			else {
				iVar1 = *(int)(typeof(CursorManager)).static_fields;
			}
			if (iVar1 == 0) {
				uVar2 = ((typeof(CursorManager))._2).cctor_finished_or_no_cctor;
				klass = typeof(CursorManager);
				goto joined_r0x05ce6228;
			}
		}
		Cursor.visible = true;
		Cursor.lockState = 0;
		klass = typeof(CursorManager);
		CursorManager.State = 0;
		uVar2 = (((CursorManager)klass)._2).cctor_finished_or_no_cctor;
	joined_r0x05ce6228: ;
		if (uVar2 == 0) {
		}
		if (Il2CppMethodInitialized_07547c14 == false) {
			Il2CppMethodInitialized_07547c14 = true;
			uVar2 = (typeof(CursorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = ((typeof(CursorManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
		}
		CursorManager._wowCursorFrame = -1;
		CursorManager._wowVirtualCursorActive = false;
		return;
	}

	[Token(Token = "0x6004B9D")]
	[Address(RVA = "0x5BE6420", Offset = "0x5BE5420", VA = "0x5BE6420")]
	public static void SetHidden(bool force = false)
	{
		// Lifted from source/cpp/UI/CursorManager.c (UI.CursorManager$$SetHidden): 1 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		BaseMenu pUVar3;
		ConfirmPopup x;
		ChatPanel __this;
		bool bVar4;

		if (!force) {
			if ((typeof(CursorManager)._2).cctor_finished_or_no_cctor == 0) {
				iVar2 = CursorManager.State;
			}
			else {
				iVar2 = CursorManager.State;
			}
			if (iVar2 == 2) goto label_05ce6583;
		}
		Cursor.visible = false;
		CursorManager.State = 2;
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			pUVar3 = UIManager.CurrentMenu;
		}
		else {
			pUVar3 = UIManager.CurrentMenu;
		}
		if (pUVar3 != null) {
			bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
			if ((bVar1 <= (pUVar3.klass._2).typeHierarchyDepth) &&((pUVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(InGameMenu))) {
				x = (*(ulong)((sbyte)pUVar3 + 0xd0));
				if (((typeof(Object))._2).cctor_finished_or_no_cctor == 0) {
				}
				bVar4 = ((Object)x != null);
				if (bVar4) {
					__this = (ChatPanel)(*(ulong)((sbyte)pUVar3 + 0xd0));
					if (__this == null) {
						throw new NullReferenceException();
					}
					__this.CloseEmojiPanel();
				}
			}
		}
	label_05ce6583: ;
		if ((typeof(CursorManager)._2).cctor_finished_or_no_cctor == 0) {
			CursorManager.UpdateGameplayCursorLock();
			return;
		}
		CursorManager.UpdateGameplayCursorLock();
		return;
	}

	[Token(Token = "0x6004B9E")]
	[Address(RVA = "0x5BE6280", Offset = "0x5BE5280", VA = "0x5BE6280")]
	public static void SetCrosshair(bool force = false)
	{
		// Lifted from source/cpp/UI/CursorManager.c (UI.CursorManager$$SetCrosshair): 1 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		BaseMenu pUVar3;
		ConfirmPopup x;
		ChatPanel __this;
		bool bVar4;

		if (!force) {
			if ((typeof(CursorManager)._2).cctor_finished_or_no_cctor == 0) {
				iVar2 = CursorManager.State;
			}
			else {
				iVar2 = CursorManager.State;
			}
			if (iVar2 == 1) goto label_05ce63e3;
		}
		Cursor.visible = false;
		CursorManager.State = 1;
		if ((typeof(UIManager)._2).cctor_finished_or_no_cctor == 0) {
			pUVar3 = UIManager.CurrentMenu;
		}
		else {
			pUVar3 = UIManager.CurrentMenu;
		}
		if (pUVar3 != null) {
			bVar1 = ((typeof(InGameMenu))._2).typeHierarchyDepth;
			if ((bVar1 <= (pUVar3.klass._2).typeHierarchyDepth) &&((pUVar3.klass._2).typeHierarchy[(ulong)bVar1 - 1] == typeof(InGameMenu))) {
				x = (*(ulong)((sbyte)pUVar3 + 0xd0));
				if (((typeof(Object))._2).cctor_finished_or_no_cctor == 0) {
				}
				bVar4 = ((Object)x != null);
				if (bVar4) {
					__this = (ChatPanel)(*(ulong)((sbyte)pUVar3 + 0xd0));
					if (__this == null) {
						throw new NullReferenceException();
					}
					__this.CloseEmojiPanel();
				}
			}
		}
	label_05ce63e3: ;
		if ((typeof(CursorManager)._2).cctor_finished_or_no_cctor == 0) {
			CursorManager.UpdateGameplayCursorLock();
			return;
		}
		CursorManager.UpdateGameplayCursorLock();
		return;
	}

	[Token(Token = "0x6004B9F")]
	[Address(RVA = "0x5BE6780", Offset = "0x5BE5780", VA = "0x5BE6780")]
	public static void SetCrosshairColor(bool white)
	{
		// Lifted from source/cpp/UI/CursorManager.c (UI.CursorManager$$SetCrosshairColor): clean
		CursorManager pUVar1;

		if (Il2CppMethodInitialized_07547c20 == false) {
			Il2CppMethodInitialized_07547c20 = true;
			if ((typeof(CursorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05ce67da;
	label_05ce67a2: ;
			pUVar1 = CursorManager._instance;
		}
		else {
			if ((typeof(CursorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05ce67a2;
	label_05ce67da: ;
			pUVar1 = CursorManager._instance;
		}
		if (pUVar1 == null) {
	label_05ce6823: ;
			throw new NullReferenceException();
		}
		if (pUVar1._crosshairWhite != white) {
			if (((typeof(CursorManager))._2).cctor_finished_or_no_cctor == 0) {
				pUVar1 = CursorManager._instance;
				if (pUVar1 == null) goto label_05ce6823;
			}
			pUVar1._crosshairWhite = white;
		}
		return;
	}

	[Token(Token = "0x6004BA0")]
	[Address(RVA = "0x5BE6830", Offset = "0x5BE5830", VA = "0x5BE6830")]
	public static void SetCrosshairText(string text)
	{
		// Lifted from source/cpp/UI/CursorManager.c (UI.CursorManager$$SetCrosshairText): clean
		uint uVar1;
		CursorManager pUVar2;

		if (Il2CppMethodInitialized_07547c21 == false) {
			Il2CppMethodInitialized_07547c21 = true;
			uVar1 = (typeof(CursorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(CursorManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pUVar2 = CursorManager._instance;
		}
		else {
			pUVar2 = *(CursorManager*)((long)(typeof(CursorManager)).static_fields + 8);
		}
		if (pUVar2 == null) {
			throw new NullReferenceException();
		}
		pUVar2._crosshairText = text;
		return;
	}

	[Token(Token = "0x6004BA1")]
	[Address(RVA = "0x5BE68C0", Offset = "0x5BE58C0", VA = "0x5BE68C0")]
	public static void SetHookArrow(bool left, Vector3 position, Quaternion rotation, bool white)
	{
		// Lifted from source/cpp/UI/CursorManager.c (UI.CursorManager$$SetHookArrow): 2 lines keep C-only constructs
		uint uVar1;
		CursorManager pUVar2;
		Quaternion pUVar3;
		CursorManager pUVar4;

		uVar1 = (typeof(CursorManager)._2).cctor_finished_or_no_cctor;
		if (left) {
			if (uVar1 == 0) {
			}
			pUVar4 = typeof(CursorManager);
			pUVar2 = CursorManager._instance;
			if (pUVar2 != null) {
				pUVar2._arrowLeftPosition.x = position.x;
				pUVar2._arrowLeftPosition.y = position.y;
				pUVar2._arrowLeftPosition.z = position.z;
				pUVar2 = pUVar4.static_fields._instance;
				if (pUVar2 != null) {
					pUVar2._arrowLeftWhite = white;
					pUVar2._arrowLeftRotation.x = rotation.x;
					pUVar2._arrowLeftRotation.y = rotation.y;
					pUVar3 = &pUVar2._arrowLeftRotation;
	label_05ce6a08: ;
					pUVar3.z = rotation.z;
					pUVar3.w = rotation.w;
					return;
				}
			}
		}
		else {
			if (uVar1 == 0) {
			}
			pUVar4 = typeof(CursorManager);
			pUVar2 = CursorManager._instance;
			if (pUVar2 != null) {
				pUVar2._arrowRightPosition.x = position.x;
				pUVar2._arrowRightPosition.y = position.y;
				pUVar2._arrowRightPosition.z = position.z;
				pUVar2 = pUVar4.static_fields._instance;
				if (pUVar2 != null) {
					pUVar2._arrowRightWhite = white;
					pUVar2._arrowRightRotation.x = rotation.x;
					pUVar2._arrowRightRotation.y = rotation.y;
					pUVar3 = &pUVar2._arrowRightRotation;
					goto label_05ce6a08;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BA2")]
	[Address(RVA = "0x5BE6A20", Offset = "0x5BE5A20", VA = "0x5BE6A20")]
	public static void UpdateHookArrows(Image hookArrowLeft, Image hookArrowRight)
	{
		// Lifted from source/cpp/UI/CursorManager.c (UI.CursorManager$$UpdateHookArrows): 1 lines keep C-only constructs
		byte bVar1;
		int iVar2;
		UI_CursorManager_StaticFields pUVar3;
		CursorManager pUVar4;
		BaseGameManager pGVar5;
		UISettings pSVar6;
		BoolSetting pSVar7;
		Object x;
		long lVar8;
		ulong uVar9;
		bool bVar10;
		GameObject pUVar11;
		Transform pUVar12;
		ulong uVar13;
		Color UVar14;
		Color UVar15;

		if (Il2CppMethodInitialized_07547c23 == false) {
			Il2CppMethodInitialized_07547c23 = true;
			if ((typeof(CursorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05ce6adc;
	label_05ce6a50: ;
			pUVar3 = typeof(CursorManager).static_fields;
			pUVar4 = pUVar3._instance;
		}
		else {
			if ((typeof(CursorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05ce6a50;
	label_05ce6adc: ;
			pUVar3 = typeof(CursorManager).static_fields;
			pUVar4 = pUVar3._instance;
		}
		if (pUVar4 != null) {
			if (pUVar4._ready == false) {
				return;
			}
			if (((typeof(CursorManager))._2).cctor_finished_or_no_cctor == 0) {
				iVar2 = CursorManager.State;
			}
			else {
				iVar2 = pUVar3.State;
			}
			if (iVar2 == 1) {
				pGVar5 = SceneLoader.CurrentGameManager;
				if (pGVar5 != null) {
					bVar1 = ((typeof(InGameManager))._2).typeHierarchyDepth;
					if (((pGVar5.klass._2).typeHierarchyDepth < bVar1) ||((pGVar5.klass._2).typeHierarchy[(ulong)bVar1 - 1] !=typeof(InGameManager))) {
						throw new InvalidCastException();
					}
				}
				pSVar6 = SettingsManager.UISettings;
				if ((pSVar6 == null) ||(pSVar7 = pSVar6.ShowCrosshairArrows, pSVar7 == null)) goto label_05ce6f25;
				if (pSVar7._value != false) {
					if (pGVar5 == null) goto label_05ce6f25;
					x = (*(ulong)((sbyte)pGVar5 + 0x80));
					if (((typeof(Object))._2).cctor_finished_or_no_cctor == 0) {
					}
					bVar10 = (x != null);
					if ((bVar10) && ((*(ulong)((sbyte)pGVar5 + 0x80)) != null)) {
						lVar8 = *(long)(*(ulong)((sbyte)pGVar5 + 0x80));
						bVar1 = (typeof(Human)._2).typeHierarchyDepth;
						if ((bVar1 <= *(byte)(lVar8 + 0x130)) &&(*(Human*)(*(long)(lVar8 + 200) + -8 + (ulong)bVar1 * 8) == typeof(Human))) {
							if ((hookArrowLeft != null) &&(pUVar11 = hookArrowLeft.gameObject, pUVar11 != null)) {
								bVar10 = pUVar11.activeSelf;
								if (!bVar10) {
									pUVar11 = hookArrowLeft.gameObject;
									if (pUVar11 == null) goto label_05ce6f25;
									pUVar11.SetActive(true);
								}
								if ((hookArrowRight != null) &&(pUVar11 = hookArrowRight.gameObject, pUVar11 != null)) {
									bVar10 = pUVar11.activeSelf;
									if (!bVar10) {
										pUVar11 = hookArrowRight.gameObject;
										if (pUVar11 == null) goto label_05ce6f25;
										pUVar11.SetActive(true);
									}
									pUVar12 = hookArrowLeft.transform;
									pUVar4 = CursorManager._instance;
									if ((pUVar4 != null) && (pUVar12 != null)) {
										pUVar12.position = (Vector3)pUVar4._arrowLeftPosition;
										pUVar12 = hookArrowRight.transform;
										pUVar4 = CursorManager._instance;
										if ((pUVar4 != null) && (pUVar12 != null)) {
											pUVar12.position = (Vector3)pUVar4._arrowRightPosition;
											pUVar12 = hookArrowLeft.transform;
											pUVar4 = CursorManager._instance;
											if ((pUVar4 != null) && (pUVar12 != null)) {
												pUVar12.rotation = (Quaternion)pUVar4._arrowLeftRotation;
												pUVar12 = hookArrowRight.transform;
												pUVar4 = CursorManager._instance;
												if ((pUVar4 != null) && (pUVar12 != null) ) {
													pUVar12.rotation = (Quaternion)pUVar4._arrowRightRotation;
													pUVar4 = CursorManager._instance;
													if (pUVar4 != null) {
														uVar13 = 0x3f8000003f800000;
														uVar9 = uVar13;
														if (pUVar4._arrowLeftWhite == false) {
															uVar13 = 0x3f80000000000000;
															uVar9 = 0x3f800000;
														}
														UVar14.b = (float)(int)uVar13;
														UVar14.a = (float)(int)((ulong)uVar13 >> 0x20);
														UVar14.r = (float)(int)uVar9;
														UVar14.g = (float)(int)((ulong)uVar9 >> 0x20);
														hookArrowLeft.set_color(UVar14) ;
														pUVar4 = CursorManager._instance;
														if (pUVar4 != null) {
															uVar13 = 0x3f8000003f800000;
															uVar9 = uVar13;
															if (pUVar4._arrowRightWhite == false) {
																uVar13 = 0x3f80000000000000;
																uVar9 = 0x3f800000;
															}
															UVar15.b = (float)(int)uVar13;
															UVar15.a = (float)(int)((ulong)uVar13 >> 0x20);
															UVar15.r = (float)(int)uVar9;
															UVar15.g = (float)(int)((ulong)uVar9 >> 0x20);
															hookArrowRight.set_color(UVar15);
															return;
														}
													}
												}
											}
										}
									}
								}
							}
							goto label_05ce6f25;
						}
					}
				}
			}
			if ((hookArrowLeft != null) &&(pUVar11 = hookArrowLeft.gameObject, pUVar11 != null)) {
				bVar10 = pUVar11.activeSelf;
				if (bVar10) {
					pUVar11 = hookArrowLeft.gameObject;
					if (pUVar11 == null) goto label_05ce6f25;
					pUVar11.SetActive(false);
				}
				if ((hookArrowRight != null) &&(pUVar11 = hookArrowRight.gameObject, pUVar11 != null)) {
					bVar10 = pUVar11.activeSelf;
					if (!bVar10) {
						return;
					}
					pUVar11 = hookArrowRight.gameObject;
					if (pUVar11 != null) {
						pUVar11.SetActive(false);
						return;
					}
				}
			}
		}
	label_05ce6f25: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BA3")]
	[Address(RVA = "0x5BE6F40", Offset = "0x5BE5F40", VA = "0x5BE6F40")]
	public static void UpdateCrosshair(RawImage crosshairImageWhite, RawImage crosshairImageRed, Text crosshairLabelWhite, Text crosshairLabelRed, bool force = false)
	{
		// Lifted from source/cpp/UI/CursorManager.c (UI.CursorManager$$UpdateCrosshair): 14 lines keep C-only constructs
		int iVar1;
		UI_CursorManager_StaticFields pUVar2;
		UISettings pSVar3;
		StringSetting pSVar4;
		IntSetting pSVar5;
		Dictionary<CrosshairStyle, Texture2D> pSVar6;
		bool bVar7;
		Texture pUVar8;
		GameObject pUVar9;
		Transform __this;
		CursorManager pUVar10;
		Il2CppClass klass;
		float fVar11;
		float fVar12;
		float fVar13;
		Vector3 value;
		Vector3 UVar14;

		if (Il2CppMethodInitialized_07547c24 == false) {
			Il2CppMethodInitialized_07547c24 = true;
			if ((typeof(CursorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05ce6ff6;
	label_05ce6f7a: ;
			pUVar2 = typeof(CursorManager).static_fields;
			pUVar10 = pUVar2._instance;
		}
		else {
			if ((typeof(CursorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05ce6f7a;
	label_05ce6ff6: ;
			pUVar2 = typeof(CursorManager).static_fields;
			pUVar10 = pUVar2._instance;
		}
		if (pUVar10 == null) goto label_05ce7505;
		if (pUVar10._ready == false) {
			return;
		}
		if (((typeof(CursorManager))._2).cctor_finished_or_no_cctor == 0) {
			iVar1 = CursorManager.State;
		}
		else {
			iVar1 = pUVar2.State;
		}
		if (iVar1 != 1) {
			if ((crosshairImageRed != null) &&(pUVar9 = crosshairImageRed.gameObject, pUVar9 != null)) {
				bVar7 = pUVar9.activeSelf;
				if (bVar7) {
					pUVar9 = crosshairImageRed.gameObject;
					if (pUVar9 == null) goto label_05ce7505;
					pUVar9.SetActive(false);
				}
				if ((crosshairImageWhite == null) ||(pUVar9 = crosshairImageWhite.gameObject, pUVar9 == null)) goto label_05ce7505;
				bVar7 = pUVar9.activeSelf;
				if (bVar7) {
					pUVar9 = crosshairImageWhite.gameObject;
					if (pUVar9 == null) goto label_05ce7505;
					pUVar9.SetActive(false);
				}
				pUVar10 = CursorManager._instance;
				bVar7 = true;
				if (pUVar10 == null) goto label_05ce7505;
				goto label_05ce74bd;
			}
			goto label_05ce7505;
		}
		pSVar3 = SettingsManager.UISettings;
		if ((pSVar3 == null) ||(pSVar4 = pSVar3.CrosshairSkin, pSVar4 == null)) goto label_05ce7505;
		bVar7 = (pSVar4._value != "");
		if (bVar7) {
			klass = typeof(CursorManager);
		}
		else {
			pSVar3 = SettingsManager.UISettings;
			if ((pSVar3 == null) ||(pSVar5 = pSVar3.CrosshairStyle, pSVar5 == null)) goto label_05ce7505;
			iVar1 = pSVar5._value;
			pUVar10 = CursorManager._instance;
			if (pUVar10 == null) goto label_05ce7505;
			if ((pUVar10._lastCrosshairStyle == iVar1) && (!force)) {
				if ((typeof(CursorManager)._2).cctor_finished_or_no_cctor == 0) {
					pUVar10 = CursorManager._instance;
					if (pUVar10 == null) goto label_05ce7505;
				}
				klass = typeof(CursorManager);
				if (pUVar10._forceNextCrosshairUpdate == false) goto label_05ce728f;
			}
			pSVar6 = CursorManager._crosshairs;
			if ((pSVar6 == null) ||(pUVar8 = (Texture)pSVar6.get_Item(iVar1), crosshairImageWhite == null)) goto label_05ce7505;
			crosshairImageWhite.texture = pUVar8;
			pSVar6 = CursorManager._crosshairs;
			if ((pSVar6 == null) ||(pUVar8 = (Texture)pSVar6.get_Item(iVar1), crosshairImageRed == null)) goto label_05ce7505;
			crosshairImageRed.texture = pUVar8;
			klass = typeof(CursorManager);
			pUVar10 = CursorManager._instance;
			if (pUVar10 == null) goto label_05ce7505;
			pUVar10._lastCrosshairStyle = iVar1;
		}
	label_05ce728f: ;
		if ((klass._2).cctor_finished_or_no_cctor == 0) {
			klass = typeof(CursorManager);
		}
		pUVar10 = *(CursorManager*)((long)klass.static_fields + 8);
		if (pUVar10 == null) goto label_05ce7505;
		if ((pUVar10._crosshairWhite != pUVar10._lastCrosshairWhite) || (force)) {
	label_05ce72f7: ;
			if (crosshairImageWhite == null) goto label_05ce7505;
			pUVar9 = crosshairImageWhite.gameObject;
			pUVar10 = CursorManager._instance;
			if (((pUVar10 == null) || (pUVar9 == null)) ||(pUVar9.SetActive(pUVar10._crosshairWhite), crosshairImageRed == null)) goto label_05ce7505;
			pUVar9 = crosshairImageRed.gameObject;
			pUVar10 = CursorManager._instance;
			if ((pUVar10 == null) || (pUVar9 == null)) goto label_05ce7505;
			pUVar9.SetActive(pUVar10._crosshairWhite == false);
			klass = typeof(CursorManager);
			pUVar10 = CursorManager._instance;
			if (pUVar10 == null) goto label_05ce7505;
			pUVar10._lastCrosshairWhite = pUVar10._crosshairWhite;
		}
		else {
			if ((klass._2).cctor_finished_or_no_cctor == 0) {
				pUVar10 = CursorManager._instance;
				klass = typeof(CursorManager);
				if (pUVar10 == null) goto label_05ce7505;
			}
			if (pUVar10._forceNextCrosshairUpdate != false) goto label_05ce72f7;
		}
		if ((klass._2).cctor_finished_or_no_cctor == 0) {
			klass = typeof(CursorManager);
		}
		pUVar10 = *(CursorManager*)((long)klass.static_fields + 8);
		if (pUVar10 == null) goto label_05ce7505;
		if (pUVar10._crosshairWhite == false) {
			crosshairLabelWhite = crosshairLabelRed;
			crosshairImageWhite = crosshairImageRed;
		}
		if ((klass._2).cctor_finished_or_no_cctor == 0) {
			pUVar10 = CursorManager._instance;
			if (pUVar10 == null) goto label_05ce7505;
		}
		if ((crosshairLabelWhite == null) ||(crosshairLabelWhite.set_text(pUVar10._crosshairText), crosshairImageWhite == null)) goto label_05ce7505;
		__this = crosshairImageWhite.transform;
		value = CursorManager.GetInGameMousePosition();
		if (__this == null) goto label_05ce7505;
		UVar14 = __this.position;
		fVar11 = UVar14.y - value.y;
		fVar12 = UVar14.z - value.z;
		fVar13 = UVar14.x - value.x;
		if (9.9999994e-11 <= fVar11 * fVar11 + fVar13 * fVar13 + fVar12 * fVar12) {
			__this.position = value;
			if ((typeof(CursorManager)._2).cctor_finished_or_no_cctor == 0) goto label_05ce74ec;
	label_05ce74ab: ;
			pUVar10 = CursorManager._instance;
		}
		else {
			if ((typeof(CursorManager)._2).cctor_finished_or_no_cctor != 0) goto label_05ce74ab;
	label_05ce74ec: ;
			pUVar10 = CursorManager._instance;
		}
		if (pUVar10 != null) {
			bVar7 = false;
	label_05ce74bd: ;
			pUVar10._forceNextCrosshairUpdate = bVar7;
			return;
		}
	label_05ce7505: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6004BA4")]
	[Address(RVA = "0x5BE7510", Offset = "0x5BE6510", VA = "0x5BE7510")]
	public static Vector3 GetInGameMousePosition()
	{
		// Lifted from source/cpp/UI/CursorManager.c (UI.CursorManager$$GetInGameMousePosition): 1 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		int iVar3;
		BaseCamera pCVar4;
		bool bVar5;
		int iVar6;
		int iVar7;
		UI_CursorManager_StaticFields pUVar8;
		Vector3 UVar9;
		Vector3 UVar10;

		if (Il2CppMethodInitialized_07547c25 == false) {
			Il2CppMethodInitialized_07547c25 = true;
			uVar2 = (typeof(CursorManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(CursorManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			iVar3 = CursorManager.State;
		}
		else {
			iVar3 = *(int)(typeof(CursorManager)).static_fields;
		}
		if (iVar3 != 0) {
			if (((typeof(Application))._2).cctor_finished_or_no_cctor == 0) {
				bVar5 = Application.isFocused;
			}
			else {
				bVar5 = Application.isFocused;
			}
			if (bVar5) {
				if (((typeof(CursorManager))._2).cctor_finished_or_no_cctor == 0) {
				}
				pCVar4 = SceneLoader.CurrentCamera;
				if (pCVar4 == null) {
					throw new NullReferenceException();
				}
				bVar1 = (typeof(InGameCamera)._2).typeHierarchyDepth;
				if (((pCVar4.klass._2).typeHierarchyDepth < bVar1) ||((pCVar4.klass._2).typeHierarchy[(ulong)bVar1 - 1] != typeof(InGameCamera)) ) {
					throw new InvalidCastException();
				}
				if (((ulong)(*(ulong)((sbyte)pCVar4 + 0x68)) & 0xfffffffd) == 0) {
					iVar6 = Screen.width;
					iVar7 = Screen.height;
					UVar9.x = (float)iVar6 * 0.5;
					UVar9.y = (float)iVar7 * 0.5;
					UVar9.z = 0.0;
					return (Vector3)UVar9;
				}
				if ((typeof(CursorManager)._2).cctor_finished_or_no_cctor == 0) {
					bVar5 = CursorManager.UsesWOWCursor;
				}
				else {
					bVar5 = CursorManager.UsesWOWCursor;
				}
				if (bVar5) {
					if (((typeof(CursorManager))._2).cctor_finished_or_no_cctor == 0) {
					}
					pUVar8 = typeof(CursorManager).static_fields;
					if (pUVar8._wowVirtualCursorActive != false) {
						if ((typeof(CursorManager)._2).cctor_finished_or_no_cctor == 0) {
							pUVar8 = typeof(CursorManager).static_fields;
						}
						return (Vector3)(pUVar8._wowCursorPosition);
					}
				}
			}
		}
		UVar10 = (Vector3)Input.mousePosition;
		return (Vector3)UVar10;
	}

	[Token(Token = "0x6004BA5")]
	[Address(RVA = "0x5BE7700", Offset = "0x5BE6700", VA = "0x5BE7700")]
	public CursorManager()
	{
		// Lifted from source/cpp/UI/CursorManager.c (UI.CursorManager$$.ctor): clean
		this._crosshairWhite = true;
		this._crosshairText = (String)**(ulong*)(g_data_07556758 + 0xb8);
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/UI/CursorManager.c.

	// UI.CursorManager$$.cctor: clean
	static CursorManager()
	{
		Dictionary<CrosshairStyle, Texture2D> __this;

		__this = new Dictionary<CrosshairStyle, Texture2D>();
		CursorManager._crosshairs = __this;
		CursorManager._wowCursorFrame = -1;
		return;
	}
}
