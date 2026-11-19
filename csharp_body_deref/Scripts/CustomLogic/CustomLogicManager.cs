// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CustomLogicManager
// Update status: unchanged since the previous dump
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

[Token(Token = "0x2000642")]
internal class CustomLogicManager : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x4001B72")]
	[FieldOffset(Offset = "0x0")]
	public static CustomLogicManager _instance;

	[Token(Token = "0x4001B73")]
	[FieldOffset(Offset = "0x8")]
	public static CustomLogicEvaluator Evaluator;

	[Token(Token = "0x4001B74")]
	[FieldOffset(Offset = "0x10")]
	public static bool LogicLoaded;

	[Token(Token = "0x4001B75")]
	[FieldOffset(Offset = "0x11")]
	public static bool AddonsLoaded;

	[Token(Token = "0x4001B76")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<string, string> CustomAddonSources;

	[Token(Token = "0x4001B77")]
	[FieldOffset(Offset = "0x20")]
	public static bool LogicWasLocallyLoaded;

	[Token(Token = "0x4001B78")]
	[FieldOffset(Offset = "0x28")]
	public static string Logic;

	[Token(Token = "0x4001B79")]
	[FieldOffset(Offset = "0x30")]
	public static string LogicHash;

	[Token(Token = "0x4001B7A")]
	[FieldOffset(Offset = "0x38")]
	public static string BaseLogic;

	[Token(Token = "0x4001B7B")]
	[FieldOffset(Offset = "0x40")]
	public static CustomLogicCompiler Compiler;

	[Token(Token = "0x4001B7C")]
	[FieldOffset(Offset = "0x48")]
	public static bool Cutscene;

	[Token(Token = "0x4001B7D")]
	[FieldOffset(Offset = "0x49")]
	public static bool ManualCamera;

	[Token(Token = "0x4001B7E")]
	[FieldOffset(Offset = "0x4C")]
	public static float CameraFOV;

	[Token(Token = "0x4001B7F")]
	[FieldOffset(Offset = "0x50")]
	public static bool SkipCutscene;

	[Token(Token = "0x4001B80")]
	[FieldOffset(Offset = "0x54")]
	public static Vector3 CameraPosition;

	[Token(Token = "0x4001B81")]
	[FieldOffset(Offset = "0x60")]
	public static Vector3 CameraRotation;

	[Token(Token = "0x4001B82")]
	[FieldOffset(Offset = "0x6C")]
	public static Vector3 CameraVelocity;

	[Token(Token = "0x4001B83")]
	[FieldOffset(Offset = "0x78")]
	public static CameraInputMode? CameraMode;

	[Token(Token = "0x4001B84")]
	[FieldOffset(Offset = "0x80")]
	public static bool CameraLocked;

	[Token(Token = "0x4001B85")]
	[FieldOffset(Offset = "0x81")]
	public static bool CursorVisible;

	[Token(Token = "0x4001B86")]
	[FieldOffset(Offset = "0x88")]
	public static HashSet<KeybindSetting> KeybindDefaultDisabled;

	[Token(Token = "0x4001B87")]
	[FieldOffset(Offset = "0x90")]
	public static HashSet<KeybindSetting> KeybindHold;

	[Token(Token = "0x4001B88")]
	[FieldOffset(Offset = "0x98")]
	public static Dictionary<string, object> RoomData;

	[Token(Token = "0x4001B89")]
	[FieldOffset(Offset = "0xA0")]
	public static Dictionary<string, object> PersistentData;

	[Token(Token = "0x4001B8A")]
	[FieldOffset(Offset = "0xA8")]
	public static HashSet<string> GeneralComponents;

	[Token(Token = "0x4001B8B")]
	[FieldOffset(Offset = "0xB0")]
	public static HashSet<string> InternalComponents;

	[Token(Token = "0x4001B8C")]
	[FieldOffset(Offset = "0xB8")]
	private static bool _hasRestarted;

	[Token(Token = "0x17000A82")]
	public static bool IsWaitingForRestart
	{
		[Token(Token = "0x6003C47")]
		[Address(RVA = "0x5A75BB0", Offset = "0x5A74BB0", VA = "0x5A75BB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6003C48")]
	[Address(RVA = "0x5A75C20", Offset = "0x5A74C20", VA = "0x5A75C20")]
	public static void WaitForRestart()
	{
	}

	[Token(Token = "0x6003C49")]
	[Address(RVA = "0x5A75C80", Offset = "0x5A74C80", VA = "0x5A75C80", Slot = "41")]
	public override void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6003C4A")]
	[Address(RVA = "0x5A75D60", Offset = "0x5A74D60", VA = "0x5A75D60")]
	public static void Init()
	{
	}

	[Token(Token = "0x6003C4B")]
	[Address(RVA = "0x5A76220", Offset = "0x5A75220", VA = "0x5A76220")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6003C4C")]
	[Address(RVA = "0x5A76470", Offset = "0x5A75470", VA = "0x5A76470")]
	public static void ToggleCutscene(bool cutscene)
	{
	}

	[Token(Token = "0x6003C4D")]
	[Address(RVA = "0x5A76650", Offset = "0x5A75650", VA = "0x5A76650")]
	private static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6003C4E")]
	[Address(RVA = "0x5A766D0", Offset = "0x5A756D0", VA = "0x5A766D0")]
	public static void StartInGame()
	{
	}

	[Token(Token = "0x6003C4F")]
	[Address(RVA = "0x5A76B10", Offset = "0x5A75B10", VA = "0x5A76B10")]
	public static void OnLoadBuiltinLogicRPC(string name, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003C50")]
	[Address(RVA = "0x5A76AB0", Offset = "0x5A75AB0", VA = "0x5A76AB0")]
	public static void OnLoadCachedLogicRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6003C51")]
	[Address(RVA = "0x5A76C80", Offset = "0x5A75C80", VA = "0x5A76C80")]
	public static void FinishLoadLogic()
	{
	}

	[Token(Token = "0x6003C52")]
	[Address(RVA = "0x5A76D70", Offset = "0x5A75D70", VA = "0x5A76D70")]
	public static void ApplyAddonBundle(string bundleJson)
	{
	}

	[Token(Token = "0x6003C53")]
	[Address(RVA = "0x5A76F70", Offset = "0x5A75F70", VA = "0x5A76F70")]
	public static void FinishLoadAddons()
	{
	}

	[Token(Token = "0x6003C54")]
	[Address(RVA = "0x5A77060", Offset = "0x5A76060", VA = "0x5A77060", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x6003C55")]
	[Address(RVA = "0x5A77370", Offset = "0x5A76370", VA = "0x5A77370")]
	public static Dictionary<string, BaseSetting> GetModeSettings(string source)
	{
		return null;
	}

	[Token(Token = "0x6003C56")]
	[Address(RVA = "0x5A77AE0", Offset = "0x5A76AE0", VA = "0x5A77AE0")]
	public static Dictionary<string, BaseSetting> GetAddonSettings(string addonName, string source)
	{
		return null;
	}

	[Token(Token = "0x6003C57")]
	[Address(RVA = "0x5A78F50", Offset = "0x5A77F50", VA = "0x5A78F50")]
	public static Dictionary<string, Dictionary<string, BaseSetting>> GetAddonSettingsGrouped(string addonName, string source)
	{
		return null;
	}

	[Token(Token = "0x6003C58")]
	[Address(RVA = "0x5A79190", Offset = "0x5A78190", VA = "0x5A79190")]
	public static Dictionary<string, Dictionary<string, BaseSetting>> GetSelectedAddonSettings(List<string> addonNames)
	{
		return null;
	}

	[Token(Token = "0x6003C59")]
	[Address(RVA = "0x5A79510", Offset = "0x5A78510", VA = "0x5A79510")]
	public static string GetModeDescription(Dictionary<string, BaseSetting> settings)
	{
		return null;
	}

	[Token(Token = "0x6003C5A")]
	[Address(RVA = "0x5A773D0", Offset = "0x5A763D0", VA = "0x5A773D0")]
	public static CustomLogicEvaluator GetEditorEvaluator(string source, bool loadBaseLogic = true)
	{
		return null;
	}

	[Token(Token = "0x6003C5B")]
	[Address(RVA = "0x5A79650", Offset = "0x5A78650", VA = "0x5A79650")]
	public static string TryParseLogic(string source)
	{
		return null;
	}

	[Token(Token = "0x6003C5C")]
	[Address(RVA = "0x5A798B0", Offset = "0x5A788B0", VA = "0x5A798B0")]
	public static void StartLogic(Dictionary<string, BaseSetting> modeSettings, Dictionary<string, Dictionary<string, BaseSetting>> addonSettings)
	{
	}

	[Token(Token = "0x6003C5D")]
	[Address(RVA = "0x5A7B590", Offset = "0x5A7A590", VA = "0x5A7B590")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x6003C5E")]
	[Address(RVA = "0x5A7B6F0", Offset = "0x5A7A6F0", VA = "0x5A7B6F0")]
	private void Update()
	{
	}

	[Token(Token = "0x6003C5F")]
	[Address(RVA = "0x5A7BA60", Offset = "0x5A7AA60", VA = "0x5A7BA60")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6003C60")]
	[Address(RVA = "0x5A7BB90", Offset = "0x5A7AB90", VA = "0x5A7BB90")]
	public CustomLogicManager()
	{
	}
}
