// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.DebugTesting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/DebugTesting.c
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/DebugTesting.cs
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine;

namespace ApplicationManagers;

[Token(Token = "0x2000979")]
internal class DebugTesting : MonoBehaviour
{
	[Token(Token = "0x4002FCB")]
	[FieldOffset(Offset = "0x0")]
	private static DebugTesting _instance;

	[Token(Token = "0x4002FCC")]
	[FieldOffset(Offset = "0x8")]
	public static bool DebugColliders;

	[Token(Token = "0x6005897")]
	[Address(RVA = "0x5D09C20", Offset = "0x5D08C20", VA = "0x5D09C20")]
	public static void Init()
	{
		// Lifted from source/cpp/ApplicationManagers/DebugTesting.c (ApplicationManagers.DebugTesting$$Init): 1 lines keep C-only constructs
		DebugTesting pAVar1;
		OnLoadScene __this;

		pAVar1 = SingletonFactory.CreateSingleton<DebugTesting>((object)DebugTesting._instance);
		DebugTesting._instance = pAVar1;
		__this = new OnLoadScene(null, (intptr_t)MethodInfo_ApplicationManagers_DebugTesting_OnLoadScene);
		EventManager.add_OnLoadScene(__this);
		return;
	}

	[Token(Token = "0x6005898")]
	[Address(RVA = "0x5D09CE0", Offset = "0x5D08CE0", VA = "0x5D09CE0")]
	public static void RunTests()
	{
		// Lifted from source/cpp/ApplicationManagers/DebugTesting.c (ApplicationManagers.DebugTesting$$RunTests): clean
		if ((typeof(ApplicationConfig)._2).cctor_finished_or_no_cctor == 0) {
			return;
		}
		return;
	}

	[Token(Token = "0x6005899")]
	[Address(RVA = "0x5D09F90", Offset = "0x5D08F90", VA = "0x5D09F90")]
	public static void RunLateTests()
	{
		// Lifted from source/cpp/ApplicationManagers/DebugTesting.c (ApplicationManagers.DebugTesting$$RunLateTests): clean
		if ((typeof(ApplicationConfig)._2).cctor_finished_or_no_cctor == 0) {
			return;
		}
		return;
	}

	[Token(Token = "0x600589A")]
	[Address(RVA = "0x5D14040", Offset = "0x5D13040", VA = "0x5D14040")]
	private static void OnLoadScene(SceneName sceneName)
	{
		// Lifted from source/cpp/ApplicationManagers/DebugTesting.c (ApplicationManagers.DebugTesting$$OnLoadScene): clean
		return;
	}

	[Token(Token = "0x600589B")]
	[Address(RVA = "0x5D14050", Offset = "0x5D13050", VA = "0x5D14050")]
	public static void Log(object message)
	{
		// Lifted from source/cpp/ApplicationManagers/DebugTesting.c (ApplicationManagers.DebugTesting$$Log): clean
		uint uVar1;

		if (Il2CppMethodInitialized_0754841f == false) {
			Il2CppMethodInitialized_0754841f = true;
			uVar1 = (typeof(Debug)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(Debug)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			Debug.Log(message);
			return;
		}
		Debug.Log(message);
		return;
	}

	[Token(Token = "0x600589C")]
	[Address(RVA = "0x5D140C0", Offset = "0x5D130C0", VA = "0x5D140C0")]
	private void Update()
	{
		// Lifted from source/cpp/ApplicationManagers/DebugTesting.c (ApplicationManagers.DebugTesting$$Update): clean
		return;
	}

	[Token(Token = "0x600589D")]
	[Address(RVA = "0x5D13190", Offset = "0x5D12190", VA = "0x5D13190")]
	public static void RunDebugCommand(string command)
	{
		// Lifted from source/cpp/ApplicationManagers/DebugTesting.c (ApplicationManagers.DebugTesting$$RunDebugCommand): 4 lines keep C-only constructs
		byte bVar1;
		CharacterEditorGameManager __this;
		BaseGameManager pGVar2;
		bool bVar3;
		String[] pSVar4;
		String pSVar5;
		String* ppSVar6;
		ApplicationManagers_DebugTesting_StaticFields pAVar7;

		if (Il2CppMethodInitialized_07548420 == false) {
			Il2CppMethodInitialized_07548420 = true;
			if ((typeof(ApplicationConfig)._2).cctor_finished_or_no_cctor != 0) goto label_05e131bb;
	label_05e13350: ;
			if (ApplicationConfig.DevelopmentMode != false) goto label_05e131cc;
	label_05e13369: ;
			ppSVar6 = &"Debug commands are not available in release mode.";
		}
		else {
			if ((typeof(ApplicationConfig)._2).cctor_finished_or_no_cctor == 0) goto label_05e13350;
	label_05e131bb: ;
			if (ApplicationConfig.DevelopmentMode == false) goto label_05e13369;
	label_05e131cc: ;
			if ((command == null) ||(pSVar4 = command.Split(0x20, 0), pSVar4 == null) ) {
	label_05e134ac: ;
				throw new NullReferenceException();
			}
			if ((int)pSVar4.Length == 0) {
				throw new IndexOutOfRangeException();
			}
			pSVar5 = pSVar4[0];
			bVar3 = (pSVar5 == "colliders");
			if (bVar3) {
				pAVar7 = typeof(DebugTesting).static_fields;
				pAVar7.DebugColliders = (bool)(pAVar7.DebugColliders ^ 1);
				if ((g_data_075566f0._2).cctor_finished_or_no_cctor == 0) {
					pAVar7 = typeof(DebugTesting).static_fields;
				}
				pSVar5 = (pAVar7.DebugColliders).ToString();
				pSVar5 = String.Concat("Debug colliders enabled: ", pSVar5);
				goto label_05e1338b;
			}
			bVar3 = (pSVar5 == "generate_char_previews");
			if (bVar3) {
				__this = (CharacterEditorGameManager)SceneLoader.CurrentGameManager;
				if (__this == null) goto label_05e134ac;
				bVar1 = (typeof(CharacterEditorGameManager)._2).typeHierarchyDepth;
				if ((bVar1 <= (__this.klass._2).typeHierarchyDepth) &&((__this.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(CharacterEditorGameManager))) {
					__this.GeneratePreviews();
					return;
				}
	label_05e134b6: ;
				throw new InvalidCastException();
			}
			bVar3 = (pSVar5 == "generate_titan_keyframes");
			if (bVar3) {
				pGVar2 = SceneLoader.CurrentGameManager;
				if (pGVar2 == null) goto label_05e134ac;
				bVar1 = (typeof(InGameManager)._2).typeHierarchyDepth;
				if ((bVar1 <= (pGVar2.klass._2).typeHierarchyDepth) &&((pGVar2.klass._2).typeHierarchy[(ulong)bVar1 - 1] ==typeof(InGameManager))) {
					ComponentHolderProtocol.AddComponent<DebugAttackKeyframes>((*(ulong)((sbyte)pGVar2 + 0x80))) ;
					return;
				}
				goto label_05e134b6;
			}
			ppSVar6 = &"Invalid debug command.";
		}
		pSVar5 = *ppSVar6;
	label_05e1338b: ;
		Debug.Log((object)pSVar5);
		return;
	}

	[Token(Token = "0x600589E")]
	[Address(RVA = "0x5D140D0", Offset = "0x5D130D0", VA = "0x5D140D0")]
	public DebugTesting()
	{
		// Lifted from source/cpp/ApplicationManagers/DebugTesting.c (ApplicationManagers.DebugTesting$$.ctor): clean
		base();
		return;
	}
}
