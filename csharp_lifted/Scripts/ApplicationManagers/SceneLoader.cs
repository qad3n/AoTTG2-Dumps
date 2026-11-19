// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.SceneLoader
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/SceneLoader.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/SceneLoader.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Cameras;
using GameManagers;
using Il2CppDummyDll;
using UnityEngine;
using UnityEngine.SceneManagement;

namespace ApplicationManagers;

[Token(Token = "0x2000986")]
internal class SceneLoader : MonoBehaviour
{
	[Token(Token = "0x4003022")]
	[FieldOffset(Offset = "0x0")]
	private static SceneLoader _instance;

	[Token(Token = "0x4003023")]
	[FieldOffset(Offset = "0x8")]
	public static SceneName SceneName;

	[Token(Token = "0x4003024")]
	[FieldOffset(Offset = "0x10")]
	public static BaseGameManager CurrentGameManager;

	[Token(Token = "0x4003025")]
	[FieldOffset(Offset = "0x18")]
	public static BaseCamera CurrentCamera;

	[Token(Token = "0x4003026")]
	[FieldOffset(Offset = "0x20")]
	public static MinimapCamera MinimapCamera;

	[Token(Token = "0x6005912")]
	[Address(RVA = "0x5D09E90", Offset = "0x5D08E90", VA = "0x5D09E90")]
	public static void Init()
	{
		// Lifted from source/cpp/ApplicationManagers/SceneLoader.c (ApplicationManagers.SceneLoader$$Init): 1 lines keep C-only constructs
		SceneLoader pAVar1;
		UnityAction<T0, T1> __this;

		pAVar1 = SingletonFactory.CreateSingleton<SceneLoader>((object)SceneLoader._instance);
		SceneLoader._instance = pAVar1;
		pAVar1 = SceneLoader._instance;
		__this = new UnityAction<Scene, LoadSceneMode>((object)pAVar1, (intptr_t)MethodInfo_ApplicationManagers_SceneLoader_OnSceneWasLoaded);
		SceneManager.add_sceneLoaded((UnityAction<Scene, LoadSceneMode>)__this);
		SceneLoader.LoadScene(1);
		return;
	}

	[Token(Token = "0x6005913")]
	[Address(RVA = "0x5D1D070", Offset = "0x5D1C070", VA = "0x5D1D070")]
	public static void LoadScene(SceneName sceneName)
	{
		// Lifted from source/cpp/ApplicationManagers/SceneLoader.c (ApplicationManagers.SceneLoader$$LoadScene): 4 lines keep C-only constructs
		uint uVar1;
		Dictionary<object, object> __this;
		Il2CppClass klass;

		SkyboxCustomSkinLoader.SkyboxMaterial = null;
		Time.timeScale = 1.0;
		EventManager.InvokePreLoadScene(sceneName);
		SceneLoader.SceneName = sceneName;
		ClothFactory.DisposeAllObjects();
		ClothFactory.ClearClothCache();
		if (Il2CppMethodInitialized_0754846a == false) {
			Il2CppMethodInitialized_0754846a = true;
			uVar1 = (typeof(ResourceManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(ResourceManager))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = (Dictionary<object, object>)ResourceManager._cache;
		}
		else {
			__this = *(Dictionary<object, object>*)(typeof(ResourceManager)).static_fields;
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.Clear();
		if ((typeof(AssetBundleManager)._2).cctor_finished_or_no_cctor == 0) {
			AssetBundleManager.Clear();
		}
		else {
			AssetBundleManager.Clear();
		}
		if (sceneName == 2) {
			if (((typeof(PhotonNetwork))._2).cctor_finished_or_no_cctor == 0) {
			}
			PhotonNetwork.LoadLevel(0);
			uVar1 = (typeof(FullscreenHandler)._2).cctor_finished_or_no_cctor;
			klass = typeof(FullscreenHandler);
		}
		else {
			if (((typeof(SceneManager))._2).cctor_finished_or_no_cctor == 0) {
			}
			SceneManager.LoadScene(0);
			uVar1 = (typeof(FullscreenHandler)._2).cctor_finished_or_no_cctor;
			klass = typeof(FullscreenHandler);
		}
		typeof(FullscreenHandler) = (FullscreenHandler)klass;
		if (uVar1 == 0) {
			FullscreenHandler.UpdateFPS();
			return;
		}
		FullscreenHandler.UpdateFPS();
		return;
	}

	[Token(Token = "0x6005914")]
	[Address(RVA = "0x5D1D2E0", Offset = "0x5D1C2E0", VA = "0x5D1D2E0")]
	private static void CreateGameManager()
	{
		// Lifted from source/cpp/ApplicationManagers/SceneLoader.c (ApplicationManagers.SceneLoader$$CreateGameManager): 6 lines keep C-only constructs
		bool bVar2;
		MethodInfo* ppMVar3;
		BaseGameManager pGVar4;

		pGVar4 = SceneLoader.CurrentGameManager;
		bVar2 = ((Object)pGVar4 != null);
		if (bVar2) {
			Debug.Log((Il2CppObject *)"Warning: game manager already exists.");
		}
		switch(SceneLoader.SceneName) {
		case 1:
			ppMVar3 = &MethodInfo_Utility_Util_CreateObj_MainMenuGameManager;
			break;
		case 2:
			ppMVar3 = &MethodInfo_Utility_Util_CreateObj_InGameManager;
			break;
		case 3:
			ppMVar3 = &MethodInfo_Utility_Util_CreateObj_MapEditorGameManager;
			break;
		case 4:
			ppMVar3 = &MethodInfo_Utility_Util_CreateObj_CharacterEditorGameManager;
			break;
		case 5:
		case 6:
			ppMVar3 = &MethodInfo_Utility_Util_CreateObj_BaseGameManager;
			break;
		default: ;
			return;
		}
		pGVar4 = (BaseGameManager)Util.CreateObj<object>();
		SceneLoader.CurrentGameManager = pGVar4;
		return;
	}

	[Token(Token = "0x6005915")]
	[Address(RVA = "0x5D1D4D0", Offset = "0x5D1C4D0", VA = "0x5D1D4D0")]
	private static void CreateCamera()
	{
		// Lifted from source/cpp/ApplicationManagers/SceneLoader.c (ApplicationManagers.SceneLoader$$CreateCamera): 7 lines keep C-only constructs
		ApplicationManagers_SceneLoader_StaticFields pAVar1;
		Camera __this;
		bool bVar2;
		GameObject __this_00;
		InGameCamera pCVar3;
		MinimapCamera pCVar4;
		StaticCamera pCVar5;
		BaseCamera pCVar6;
		MethodInfo* ppMVar7;
		MinimapCamera* targetAddress;

		pCVar6 = SceneLoader.CurrentCamera;
		bVar2 = ((Object)pCVar6 != null);
		if (bVar2) {
			Debug.Log((Il2CppObject *)"Warning: Camera already exists.");
		}
		if (SceneLoader.SceneName == 0) {
			return;
		}
		__this_00 = ResourceManager.InstantiateAsset<GameObject>("", "Game/MainCamera", false, false);
		switch(SceneLoader.SceneName) {
		case 2:
			if (__this_00 == null) goto label_05e1d836;
			pCVar3 = __this_00.AddComponent<InGameCamera>();
			pAVar1 = typeof(SceneLoader).static_fields;
			pAVar1.CurrentCamera = (BaseCamera)pCVar3;
			pCVar4 = Util.CreateObj<MinimapCamera>();
			pAVar1 = typeof(SceneLoader).static_fields;
			pAVar1.MinimapCamera = pCVar4;
			targetAddress = &pAVar1.MinimapCamera;
			goto label_05e1d7fb;
		case 3:
			if (__this_00 == null) goto label_05e1d836;
			ppMVar7 = &MethodInfo_UnityEngine_GameObject_AddComponent_MapEditorCamera;
			break;
		case 4:
			if (__this_00 == null) goto label_05e1d836;
			ppMVar7 = &MethodInfo_UnityEngine_GameObject_AddComponent_CharacterEditorCamera;
			break;
		default: ;
			if (__this_00 != null) {
				pCVar5 = __this_00.AddComponent<StaticCamera>();
				pAVar1 = typeof(SceneLoader).static_fields;
				pAVar1.CurrentCamera = (BaseCamera)pCVar5;
				pCVar6 = SceneLoader.CurrentCamera;
				if ((pCVar6 != null) &&(__this = pCVar6.Camera, __this != null)) {
					__this.nearClipPlane = 0.3;
					pCVar6 = SceneLoader.CurrentCamera;
					if (SceneLoader.SceneName == 5) {
						if ((pCVar6 != null) &&(pCVar5 = pCVar6.GetComponent<StaticCamera>(), pCVar5 != null)) {
							bVar2 = true;
	label_05e1d828: ;
							pCVar5.SetSkybox(bVar2);
							return;
						}
					}
					else if ((pCVar6 != null) &&(pCVar5 = pCVar6.GetComponent<StaticCamera>(), pCVar5 != null)) {
						bVar2 = false;
						goto label_05e1d828;
					}
				}
			}
	label_05e1d836: ;
			throw new NullReferenceException();
		case 7:
			if (__this_00 == null) goto label_05e1d836;
			ppMVar7 = &MethodInfo_UnityEngine_GameObject_AddComponent_TestCamera;
		}
		pCVar6 = (BaseCamera)__this_00.AddComponent<object>();
		pAVar1 = typeof(SceneLoader).static_fields;
		pAVar1.CurrentCamera = pCVar6;
		targetAddress = (MinimapCamera*)&pAVar1.CurrentCamera;
	label_05e1d7fb: ;
		return;
	}

	[Token(Token = "0x6005916")]
	[Address(RVA = "0x5D1D840", Offset = "0x5D1C840", VA = "0x5D1D840")]
	private void OnSceneWasLoaded(Scene scene, LoadSceneMode mode)
	{
		// Lifted from source/cpp/ApplicationManagers/SceneLoader.c (ApplicationManagers.SceneLoader$$OnSceneWasLoaded): clean


		Outline.ResetQueueBlocks();
		SceneLoader.CreateGameManager();
		SceneLoader.CreateCamera();
		EventManager.InvokeLoadScene(SceneLoader.SceneName);
		return;
	}

	[Token(Token = "0x6005917")]
	[Address(RVA = "0x5D1D8B0", Offset = "0x5D1C8B0", VA = "0x5D1D8B0")]
	public SceneLoader()
	{
		// Lifted from source/cpp/ApplicationManagers/SceneLoader.c (ApplicationManagers.SceneLoader$$.ctor): clean
		base();
		return;
	}
}
