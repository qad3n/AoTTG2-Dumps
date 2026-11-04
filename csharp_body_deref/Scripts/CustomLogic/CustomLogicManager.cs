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

[Token(Token = "0x20005E3")]
internal class CustomLogicManager : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x40019D1")]
	[FieldOffset(Offset = "0x0")]
	public static CustomLogicManager _instance;

	[Token(Token = "0x40019D2")]
	[FieldOffset(Offset = "0x8")]
	public static CustomLogicEvaluator Evaluator;

	[Token(Token = "0x40019D3")]
	[FieldOffset(Offset = "0x10")]
	public static bool LogicLoaded;

	[Token(Token = "0x40019D4")]
	[FieldOffset(Offset = "0x11")]
	public static bool AddonsLoaded;

	[Token(Token = "0x40019D5")]
	[FieldOffset(Offset = "0x18")]
	public static Dictionary<string, string> CustomAddonSources;

	[Token(Token = "0x40019D6")]
	[FieldOffset(Offset = "0x20")]
	public static bool LogicWasLocallyLoaded;

	[Token(Token = "0x40019D7")]
	[FieldOffset(Offset = "0x28")]
	public static string Logic;

	[Token(Token = "0x40019D8")]
	[FieldOffset(Offset = "0x30")]
	public static string LogicHash;

	[Token(Token = "0x40019D9")]
	[FieldOffset(Offset = "0x38")]
	public static string BaseLogic;

	[Token(Token = "0x40019DA")]
	[FieldOffset(Offset = "0x40")]
	public static CustomLogicCompiler Compiler;

	[Token(Token = "0x40019DB")]
	[FieldOffset(Offset = "0x48")]
	public static bool Cutscene;

	[Token(Token = "0x40019DC")]
	[FieldOffset(Offset = "0x49")]
	public static bool ManualCamera;

	[Token(Token = "0x40019DD")]
	[FieldOffset(Offset = "0x4C")]
	public static float CameraFOV;

	[Token(Token = "0x40019DE")]
	[FieldOffset(Offset = "0x50")]
	public static bool SkipCutscene;

	[Token(Token = "0x40019DF")]
	[FieldOffset(Offset = "0x54")]
	public static Vector3 CameraPosition;

	[Token(Token = "0x40019E0")]
	[FieldOffset(Offset = "0x60")]
	public static Vector3 CameraRotation;

	[Token(Token = "0x40019E1")]
	[FieldOffset(Offset = "0x6C")]
	public static Vector3 CameraVelocity;

	[Token(Token = "0x40019E2")]
	[FieldOffset(Offset = "0x78")]
	public static CameraInputMode? CameraMode;

	[Token(Token = "0x40019E3")]
	[FieldOffset(Offset = "0x80")]
	public static bool CameraLocked;

	[Token(Token = "0x40019E4")]
	[FieldOffset(Offset = "0x81")]
	public static bool CursorVisible;

	[Token(Token = "0x40019E5")]
	[FieldOffset(Offset = "0x88")]
	public static HashSet<KeybindSetting> KeybindDefaultDisabled;

	[Token(Token = "0x40019E6")]
	[FieldOffset(Offset = "0x90")]
	public static HashSet<KeybindSetting> KeybindHold;

	[Token(Token = "0x40019E7")]
	[FieldOffset(Offset = "0x98")]
	public static Dictionary<string, object> RoomData;

	[Token(Token = "0x40019E8")]
	[FieldOffset(Offset = "0xA0")]
	public static Dictionary<string, object> PersistentData;

	[Token(Token = "0x40019E9")]
	[FieldOffset(Offset = "0xA8")]
	public static HashSet<string> GeneralComponents;

	[Token(Token = "0x40019EA")]
	[FieldOffset(Offset = "0xB0")]
	public static HashSet<string> InternalComponents;

	[Token(Token = "0x40019EB")]
	[FieldOffset(Offset = "0xB8")]
	private static bool _hasRestarted;

	[Token(Token = "0x17000A3A")]
	public static bool IsWaitingForRestart
	{
		[Token(Token = "0x60039B9")]
		[Address(RVA = "0x20A67B0", Offset = "0x20A4DB0", VA = "0x1820A67B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60039BA")]
	[Address(RVA = "0x20A6450", Offset = "0x20A4A50", VA = "0x1820A6450")]
	public static void WaitForRestart()
	{
	}

	[Token(Token = "0x60039BB")]
	[Address(RVA = "0x20A46C0", Offset = "0x20A2CC0", VA = "0x1820A46C0", Slot = "41")]
	public override void OnJoinedRoom()
	{
	}

	[Token(Token = "0x60039BC")]
	[Address(RVA = "0x20A4190", Offset = "0x20A2790", VA = "0x1820A4190")]
	public static void Init()
	{
	}

	[Token(Token = "0x60039BD")]
	[Address(RVA = "0x20A4CC0", Offset = "0x20A32C0", VA = "0x1820A4CC0")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x60039BE")]
	[Address(RVA = "0x20A5D00", Offset = "0x20A4300", VA = "0x1820A5D00")]
	public static void ToggleCutscene(bool cutscene)
	{
	}

	[Token(Token = "0x60039BF")]
	[Address(RVA = "0x20A49A0", Offset = "0x20A2FA0", VA = "0x1820A49A0")]
	private static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x60039C0")]
	[Address(RVA = "0x20A4FF0", Offset = "0x20A35F0", VA = "0x1820A4FF0")]
	public static void StartInGame()
	{
	}

	[Token(Token = "0x60039C1")]
	[Address(RVA = "0x20A4790", Offset = "0x20A2D90", VA = "0x1820A4790")]
	public static void OnLoadBuiltinLogicRPC(string name, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60039C2")]
	[Address(RVA = "0x20A4930", Offset = "0x20A2F30", VA = "0x1820A4930")]
	public static void OnLoadCachedLogicRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60039C3")]
	[Address(RVA = "0x20A3330", Offset = "0x20A1930", VA = "0x1820A3330")]
	public static void FinishLoadLogic()
	{
	}

	[Token(Token = "0x60039C4")]
	[Address(RVA = "0x20A2FD0", Offset = "0x20A15D0", VA = "0x1820A2FD0")]
	public static void ApplyAddonBundle(string bundleJson)
	{
	}

	[Token(Token = "0x60039C5")]
	[Address(RVA = "0x20A3210", Offset = "0x20A1810", VA = "0x1820A3210")]
	public static void FinishLoadAddons()
	{
	}

	[Token(Token = "0x60039C6")]
	[Address(RVA = "0x20A4A30", Offset = "0x20A3030", VA = "0x1820A4A30", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x60039C7")]
	[Address(RVA = "0x20A3E00", Offset = "0x20A2400", VA = "0x1820A3E00")]
	public static Dictionary<string, BaseSetting> GetModeSettings(string source)
	{
		return null;
	}

	[Token(Token = "0x60039C8")]
	[Address(RVA = "0x20A36F0", Offset = "0x20A1CF0", VA = "0x1820A36F0")]
	public static Dictionary<string, BaseSetting> GetAddonSettings(string addonName, string source)
	{
		return null;
	}

	[Token(Token = "0x60039C9")]
	[Address(RVA = "0x20A34E0", Offset = "0x20A1AE0", VA = "0x1820A34E0")]
	public static Dictionary<string, Dictionary<string, BaseSetting>> GetAddonSettingsGrouped(string addonName, string source)
	{
		return null;
	}

	[Token(Token = "0x60039CA")]
	[Address(RVA = "0x20A3E70", Offset = "0x20A2470", VA = "0x1820A3E70")]
	public static Dictionary<string, Dictionary<string, BaseSetting>> GetSelectedAddonSettings(List<string> addonNames)
	{
		return null;
	}

	[Token(Token = "0x60039CB")]
	[Address(RVA = "0x20A3CC0", Offset = "0x20A22C0", VA = "0x1820A3CC0")]
	public static string GetModeDescription(Dictionary<string, BaseSetting> settings)
	{
		return null;
	}

	[Token(Token = "0x60039CC")]
	[Address(RVA = "0x20A3A70", Offset = "0x20A2070", VA = "0x1820A3A70")]
	public static CustomLogicEvaluator GetEditorEvaluator(string source, bool loadBaseLogic = true)
	{
		return null;
	}

	[Token(Token = "0x60039CD")]
	[Address(RVA = "0x20A5EF0", Offset = "0x20A44F0", VA = "0x1820A5EF0")]
	public static string TryParseLogic(string source)
	{
		return null;
	}

	[Token(Token = "0x60039CE")]
	[Address(RVA = "0x20A53C0", Offset = "0x20A39C0", VA = "0x1820A53C0")]
	public static void StartLogic(Dictionary<string, BaseSetting> modeSettings, Dictionary<string, Dictionary<string, BaseSetting>> addonSettings)
	{
	}

	[Token(Token = "0x60039CF")]
	[Address(RVA = "0x20A3450", Offset = "0x20A1A50", VA = "0x1820A3450")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x60039D0")]
	[Address(RVA = "0x20A6120", Offset = "0x20A4720", VA = "0x1820A6120")]
	private void Update()
	{
	}

	[Token(Token = "0x60039D1")]
	[Address(RVA = "0x20A4630", Offset = "0x20A2C30", VA = "0x1820A4630")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60039D2")]
	[Address(RVA = "0x190EDA0", Offset = "0x190D3A0", VA = "0x18190EDA0")]
	public CustomLogicManager()
	{
	}
}
