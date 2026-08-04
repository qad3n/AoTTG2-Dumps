// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicManager
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/CustomLogic/CustomLogicManager.c
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using ApplicationManagers;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using Settings;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x200048C")]
internal class CustomLogicManager : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x400138B")]
	[FieldOffset(Offset = "0x0")]
	public static CustomLogicManager _instance;

	[Token(Token = "0x400138C")]
	[FieldOffset(Offset = "0x8")]
	public static CustomLogicEvaluator Evaluator;

	[Token(Token = "0x400138D")]
	[FieldOffset(Offset = "0x10")]
	public static bool LogicLoaded;

	[Token(Token = "0x400138E")]
	[FieldOffset(Offset = "0x11")]
	public static bool AddonsLoaded;

	[Token(Token = "0x400138F")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<string, string> CustomAddonSources;

	[Token(Token = "0x4001390")]
	[FieldOffset(Offset = "0x20")]
	public static bool LogicWasLocallyLoaded;

	[Token(Token = "0x4001391")]
	[FieldOffset(Offset = "0x28")]
	public static string Logic;

	[Token(Token = "0x4001392")]
	[FieldOffset(Offset = "0x30")]
	public static string LogicHash;

	[Token(Token = "0x4001393")]
	[FieldOffset(Offset = "0x38")]
	public static string BaseLogic;

	[Token(Token = "0x4001394")]
	[FieldOffset(Offset = "0x40")]
	public static CustomLogicCompiler Compiler;

	[Token(Token = "0x4001395")]
	[FieldOffset(Offset = "0x48")]
	public static bool Cutscene;

	[Token(Token = "0x4001396")]
	[FieldOffset(Offset = "0x49")]
	public static bool ManualCamera;

	[Token(Token = "0x4001397")]
	[FieldOffset(Offset = "0x4C")]
	public static float CameraFOV;

	[Token(Token = "0x4001398")]
	[FieldOffset(Offset = "0x50")]
	public static bool SkipCutscene;

	[Token(Token = "0x4001399")]
	[FieldOffset(Offset = "0x54")]
	public static Vector3 CameraPosition;

	[Token(Token = "0x400139A")]
	[FieldOffset(Offset = "0x60")]
	public static Vector3 CameraRotation;

	[Token(Token = "0x400139B")]
	[FieldOffset(Offset = "0x6C")]
	public static Vector3 CameraVelocity;

	[Token(Token = "0x400139C")]
	[FieldOffset(Offset = "0x78")]
	public static CameraInputMode? CameraMode;

	[Token(Token = "0x400139D")]
	[FieldOffset(Offset = "0x80")]
	public static bool CameraLocked;

	[Token(Token = "0x400139E")]
	[FieldOffset(Offset = "0x81")]
	public static bool CursorVisible;

	[Token(Token = "0x400139F")]
	[FieldOffset(Offset = "0x88")]
	public static HashSet<KeybindSetting> KeybindDefaultDisabled;

	[Token(Token = "0x40013A0")]
	[FieldOffset(Offset = "0x90")]
	public static HashSet<KeybindSetting> KeybindHold;

	[Token(Token = "0x40013A1")]
	[FieldOffset(Offset = "0x98")]
	public static Dictionary<string, object> RoomData;

	[Token(Token = "0x40013A2")]
	[FieldOffset(Offset = "0xA0")]
	public static Dictionary<string, object> PersistentData;

	[Token(Token = "0x40013A3")]
	[FieldOffset(Offset = "0xA8")]
	public static HashSet<string> GeneralComponents;

	[Token(Token = "0x40013A4")]
	[FieldOffset(Offset = "0xB0")]
	public static HashSet<string> InternalComponents;

	[Token(Token = "0x40013A5")]
	[FieldOffset(Offset = "0xB8")]
	private static bool _hasRestarted;

	[Token(Token = "0x17000943")]
	public static bool IsWaitingForRestart
	{
		[Token(Token = "0x600303A")]
		[Address(RVA = "0x415E040", Offset = "0x415E040", VA = "0x415E040")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600303B")]
	[Address(RVA = "0x415E0B0", Offset = "0x415E0B0", VA = "0x415E0B0")]
	public static void WaitForRestart()
	{
	}

	[Token(Token = "0x600303C")]
	[Address(RVA = "0x415E110", Offset = "0x415E110", VA = "0x415E110", Slot = "41")]
	public override void OnJoinedRoom()
	{
	}

	[Token(Token = "0x600303D")]
	[Address(RVA = "0x415E1F0", Offset = "0x415E1F0", VA = "0x415E1F0")]
	public static void Init()
	{
	}

	[Token(Token = "0x600303E")]
	[Address(RVA = "0x415E760", Offset = "0x415E760", VA = "0x415E760")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x600303F")]
	[Address(RVA = "0x415E9A0", Offset = "0x415E9A0", VA = "0x415E9A0")]
	public static void ToggleCutscene(bool cutscene)
	{
	}

	[Token(Token = "0x6003040")]
	[Address(RVA = "0x415EB60", Offset = "0x415EB60", VA = "0x415EB60")]
	private static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6003041")]
	[Address(RVA = "0x415EBE0", Offset = "0x415EBE0", VA = "0x415EBE0")]
	public static void StartInGame()
	{
	}

	[Token(Token = "0x6003042")]
	[Address(RVA = "0x415F010", Offset = "0x415F010", VA = "0x415F010")]
	public static void OnLoadBuiltinLogicRPC(string name, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003043")]
	[Address(RVA = "0x415EFB0", Offset = "0x415EFB0", VA = "0x415EFB0")]
	public static void OnLoadCachedLogicRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003044")]
	[Address(RVA = "0x415F180", Offset = "0x415F180", VA = "0x415F180")]
	public static void FinishLoadLogic()
	{
	}

	[Token(Token = "0x6003045")]
	[Address(RVA = "0x415F270", Offset = "0x415F270", VA = "0x415F270")]
	public static void ApplyAddonBundle(string bundleJson)
	{
	}

	[Token(Token = "0x6003046")]
	[Address(RVA = "0x415F4D0", Offset = "0x415F4D0", VA = "0x415F4D0")]
	public static void FinishLoadAddons()
	{
	}

	[Token(Token = "0x6003047")]
	[Address(RVA = "0x415F5C0", Offset = "0x415F5C0", VA = "0x415F5C0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x6003048")]
	[Address(RVA = "0x415F9D0", Offset = "0x415F9D0", VA = "0x415F9D0")]
	public static Dictionary<string, BaseSetting> GetModeSettings(string source)
	{
		return null;
	}

	[Token(Token = "0x6003049")]
	[Address(RVA = "0x415FC70", Offset = "0x415FC70", VA = "0x415FC70")]
	public static Dictionary<string, BaseSetting> GetAddonSettings(string addonName, string source)
	{
		return null;
	}

	[Token(Token = "0x600304A")]
	[Address(RVA = "0x41603C0", Offset = "0x41603C0", VA = "0x41603C0")]
	public static Dictionary<string, Dictionary<string, BaseSetting>> GetAddonSettingsGrouped(string addonName, string source)
	{
		return null;
	}

	[Token(Token = "0x600304B")]
	[Address(RVA = "0x4160610", Offset = "0x4160610", VA = "0x4160610")]
	public static Dictionary<string, Dictionary<string, BaseSetting>> GetSelectedAddonSettings(List<string> addonNames)
	{
		return null;
	}

	[Token(Token = "0x600304C")]
	[Address(RVA = "0x4160A00", Offset = "0x4160A00", VA = "0x4160A00")]
	public static string GetModeDescription(Dictionary<string, BaseSetting> settings)
	{
		return null;
	}

	[Token(Token = "0x600304D")]
	[Address(RVA = "0x415FA30", Offset = "0x415FA30", VA = "0x415FA30")]
	public static CustomLogicEvaluator GetEditorEvaluator(string source, bool loadBaseLogic = true)
	{
		return null;
	}

	[Token(Token = "0x600304E")]
	[Address(RVA = "0x4160B40", Offset = "0x4160B40", VA = "0x4160B40")]
	public static string TryParseLogic(string source)
	{
		return null;
	}

	[Token(Token = "0x600304F")]
	[Address(RVA = "0x4160DA0", Offset = "0x4160DA0", VA = "0x4160DA0")]
	public static void StartLogic(Dictionary<string, BaseSetting> modeSettings, Dictionary<string, Dictionary<string, BaseSetting>> addonSettings)
	{
	}

	[Token(Token = "0x6003050")]
	[Address(RVA = "0x4161900", Offset = "0x4161900", VA = "0x4161900")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x6003051")]
	[Address(RVA = "0x41619A0", Offset = "0x41619A0", VA = "0x41619A0")]
	private void Update()
	{
	}

	[Token(Token = "0x6003052")]
	[Address(RVA = "0x4161CC0", Offset = "0x4161CC0", VA = "0x4161CC0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6003053")]
	[Address(RVA = "0x4161D60", Offset = "0x4161D60", VA = "0x4161D60")]
	public CustomLogicManager()
	{
	}
}
