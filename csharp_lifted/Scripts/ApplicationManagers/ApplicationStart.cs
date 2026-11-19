// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.ApplicationStart
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/ApplicationStart.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/ApplicationStart.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x200096E")]
internal class ApplicationStart : MonoBehaviour
{
	[Token(Token = "0x4002F6D")]
	[FieldOffset(Offset = "0x0")]
	private static bool _firstLaunch;

	[Token(Token = "0x6005842")]
	[Address(RVA = "0x5D08210", Offset = "0x5D07210", VA = "0x5D08210")]
	public void Awake()
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationStart.c (ApplicationManagers.ApplicationStart$$Awake): 6 lines keep C-only constructs
		sbyte cVar1;
		uint uVar2;
		ApplicationManagers_ApplicationStart_StaticFields pAVar3;
		Il2CppClass klass;

		if (Il2CppMethodInitialized_075483e1 == false) {
			Il2CppMethodInitialized_075483e1 = true;
			uVar2 = (typeof(ApplicationStart)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (typeof(ApplicationStart)._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pAVar3 = typeof(ApplicationStart).static_fields;
			cVar1 = pAVar3._firstLaunch;
			klass = typeof(ApplicationStart);
		}
		else {
			pAVar3 = (typeof(ApplicationStart)).static_fields;
			cVar1 = pAVar3._firstLaunch;
			klass = typeof(ApplicationStart);
		}
		if (cVar1 == false) {
			typeof(ApplicationStart) = (ApplicationStart)klass;
			return;
		}
		typeof(ApplicationStart) = (ApplicationStart)klass;
		if ((klass._2).cctor_finished_or_no_cctor == 0) {
			ApplicationStart._firstLaunch = false;
			ApplicationStart.Init();
			return;
		}
		pAVar3._firstLaunch = false;
		ApplicationStart.Init();
		return;
	}

	[Token(Token = "0x6005843")]
	[Address(RVA = "0x5D089D0", Offset = "0x5D079D0", VA = "0x5D089D0")]
	private static void InitMobile()
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationStart.c (ApplicationManagers.ApplicationStart$$InitMobile): clean
		uint uVar1;
		DebugManager __this;

		if (Il2CppMethodInitialized_075483e2 == false) {
			Il2CppMethodInitialized_075483e2 = true;
			uVar1 = (typeof(DebugManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(DebugManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			__this = DebugManager.instance;
		}
		else {
			__this = DebugManager.instance;
		}
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.enableRuntimeUI = false;
		Screen.autorotateToPortrait = false;
		Screen.autorotateToPortraitUpsideDown = false;
		Screen.autorotateToLandscapeLeft = true;
		Screen.autorotateToLandscapeRight = true;
		Screen.orientation = 3;
		MobileBuiltinAssets.Prepare();
		return;
	}

	[Token(Token = "0x6005844")]
	[Address(RVA = "0x5D082A0", Offset = "0x5D072A0", VA = "0x5D082A0")]
	private static void Init()
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationStart.c (ApplicationManagers.ApplicationStart$$Init): 4 lines keep C-only constructs
		uint uVar1;
		bool bVar3;
		CultureInfo pSVar4;
		Thread pSVar5;
		FullscreenHandler pAVar6;
		Il2CppClass klass;

		DebugConsole.Init();
		pSVar4 = CultureInfo.InvariantCulture;
		CultureInfo.DefaultThreadCurrentCulture = pSVar4;
		pSVar4 = CultureInfo.InvariantCulture;
		CultureInfo.DefaultThreadCurrentUICulture = pSVar4;
		pSVar5 = Thread.CurrentThread;
		pSVar4 = CultureInfo.InvariantCulture;
		if (pSVar5 == null) {
	label_05e089c1: ;
			throw new NullReferenceException();
		}
		pSVar5.CurrentCulture = pSVar4;
		pSVar5 = Thread.CurrentThread;
		pSVar4 = CultureInfo.InvariantCulture;
		if (pSVar5 == null) goto label_05e089c1;
		pSVar5.CurrentUICulture = pSVar4;
		PhotonNetwork.MinimalTimeScaleToDispatchInFixedUpdate = 0.0;
		PhotonNetwork.UseRpcMonoBehaviourCache = true;
		bVar3 = MobilePlatformUtility.IsMobileRuntime();
		if (bVar3) {
			ApplicationStart.InitMobile();
		}
		ApplicationConfig.Init();
		AnticheatManager.Init();
		ModeratorManager.Init();
		ChatFilter.Init();
		PhysicsLayer.Init();
		MaterialCache.Init();
		EventManager.Init();
		HumanSetup.Init();
		FolderPaths.CheckDocumentsWritable();
		SettingsManager.Init();
		if ((typeof(FullscreenHandler)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_07548426 != false) goto label_05e0862d;
	label_05e08937: ;
			g_data_07548426 = true;
			uVar1 = (typeof(FullscreenHandler)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (g_data_07548426 == false) goto label_05e08937;
	label_05e0862d: ;
			uVar1 = (typeof(FullscreenHandler)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pAVar6 = SingletonFactory.CreateSingleton<FullscreenHandler>((object)FullscreenHandler._instance);
		FullscreenHandler._instance = pAVar6;
		UIManager.Init();
		ApplicationStart.PrewarmTextMeshPro();
		SnapshotManager.Init();
		CursorManager.Init();
		WeatherManager.Init();
		GameProgressManager.Init();
		MapManager.Init();
		CustomLogicManager.Init();
		ChatManager.Init();
		AssetBundleManager.Init();
		MusicManager.Init();
		VoiceChatManager.Init();
		CustomSerialization.Init();
		AccountManager.Init();
		AottgChangelogService.Init();
		AottgCreditsService.Init();
		AottgPublicProfileService.Init();
		HeadlessManager.Init();
		DebugLagSim.Init();
		CustomDebug.Init();
		if (ApplicationConfig.DevelopmentMode == false) {
	label_05e0886a: ;
			uVar1 = (typeof(BasicTitanSetup)._2).cctor_finished_or_no_cctor;
		}
		else {
			DebugTesting.Init();
			if ((typeof(ApplicationConfig)._2).cctor_finished_or_no_cctor != 0) goto label_05e0886a;
			uVar1 = (typeof(BasicTitanSetup)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		BasicTitanSetup.Init();
		CharacterData.Init();
		MiscInfo.Init();
		SceneLoader.Init();
		EventManager.InvokeFinishInit();
		if (ApplicationConfig.DevelopmentMode != false) {
			if ((typeof(ApplicationConfig)._2).cctor_finished_or_no_cctor == 0) {
				uVar1 = (typeof(DiscordManager)._2).cctor_finished_or_no_cctor;
				klass = typeof(DiscordManager);
				goto joined_r0x05e089aa;
			}
		}
		uVar1 = (typeof(DiscordManager)._2).cctor_finished_or_no_cctor;
		klass = typeof(DiscordManager);
	joined_r0x05e089aa: ;
		typeof(DiscordManager) = (DiscordManager)klass;
		if (uVar1 == 0) {
			DiscordManager.Init();
			return;
		}
		DiscordManager.Init();
		return;
	}

	[Token(Token = "0x6005845")]
	[Address(RVA = "0x5D08D10", Offset = "0x5D07D10", VA = "0x5D08D10")]
	private static void PrewarmTextMeshPro()
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationStart.c (ApplicationManagers.ApplicationStart$$PrewarmTextMeshPro): clean
		Object obj;

		obj = new GameObject("TMP_Prewarm");
		if (obj == null) {
			throw new NullReferenceException();
		}
		obj.AddComponent<TextMeshProUGUI>();
		if ((typeof(Object)._2).cctor_finished_or_no_cctor == 0) {
			Object.Destroy(obj);
			return;
		}
		Object.Destroy(obj);
		return;
	}

	[Token(Token = "0x6005846")]
	[Address(RVA = "0x5D0A240", Offset = "0x5D09240", VA = "0x5D0A240")]
	public ApplicationStart()
	{
		// Lifted from source/cpp/ApplicationManagers/ApplicationStart.c (ApplicationManagers.ApplicationStart$$.ctor): clean
		base();
		return;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ApplicationManagers/ApplicationStart.c.

	// ApplicationManagers.ApplicationStart$$.cctor: clean
	static ApplicationStart()
	{
		ApplicationStart._firstLaunch = true;
		return;
	}
}
