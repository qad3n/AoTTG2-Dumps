using System.Collections.Generic;
using ApplicationManagers;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using Settings;
using UnityEngine;

namespace CustomLogic;

[Token(Token = "0x2000447")]
internal class CustomLogicManager : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x400127F")]
	[FieldOffset(Offset = "0x0")]
	public static CustomLogicManager _instance;

	[Token(Token = "0x4001280")]
	[FieldOffset(Offset = "0x8")]
	public static CustomLogicEvaluator Evaluator;

	[Token(Token = "0x4001281")]
	[FieldOffset(Offset = "0x10")]
	public static bool LogicLoaded;

	[Token(Token = "0x4001282")]
	[FieldOffset(Offset = "0x18")]
	public static string Logic;

	[Token(Token = "0x4001283")]
	[FieldOffset(Offset = "0x20")]
	public static string LogicHash;

	[Token(Token = "0x4001284")]
	[FieldOffset(Offset = "0x28")]
	public static string BaseLogic;

	[Token(Token = "0x4001285")]
	[FieldOffset(Offset = "0x30")]
	public static CustomLogicCompiler Compiler;

	[Token(Token = "0x4001286")]
	[FieldOffset(Offset = "0x38")]
	public static bool Cutscene;

	[Token(Token = "0x4001287")]
	[FieldOffset(Offset = "0x39")]
	public static bool ManualCamera;

	[Token(Token = "0x4001288")]
	[FieldOffset(Offset = "0x3C")]
	public static float CameraFOV;

	[Token(Token = "0x4001289")]
	[FieldOffset(Offset = "0x40")]
	public static bool SkipCutscene;

	[Token(Token = "0x400128A")]
	[FieldOffset(Offset = "0x44")]
	public static Vector3 CameraPosition;

	[Token(Token = "0x400128B")]
	[FieldOffset(Offset = "0x50")]
	public static Vector3 CameraRotation;

	[Token(Token = "0x400128C")]
	[FieldOffset(Offset = "0x5C")]
	public static Vector3 CameraVelocity;

	[Token(Token = "0x400128D")]
	[FieldOffset(Offset = "0x68")]
	public static CameraInputMode? CameraMode;

	[Token(Token = "0x400128E")]
	[FieldOffset(Offset = "0x70")]
	public static bool CameraLocked;

	[Token(Token = "0x400128F")]
	[FieldOffset(Offset = "0x71")]
	public static bool CursorVisible;

	[Token(Token = "0x4001290")]
	[FieldOffset(Offset = "0x78")]
	public static HashSet<KeybindSetting> KeybindDefaultDisabled;

	[Token(Token = "0x4001291")]
	[FieldOffset(Offset = "0x80")]
	public static HashSet<KeybindSetting> KeybindHold;

	[Token(Token = "0x4001292")]
	[FieldOffset(Offset = "0x88")]
	public static Dictionary<string, object> RoomData;

	[Token(Token = "0x4001293")]
	[FieldOffset(Offset = "0x90")]
	public static Dictionary<string, object> PersistentData;

	[Token(Token = "0x4001294")]
	[FieldOffset(Offset = "0x98")]
	public static HashSet<string> GeneralComponents;

	[Token(Token = "0x4001295")]
	[FieldOffset(Offset = "0xA0")]
	public static HashSet<string> InternalComponents;

	[Token(Token = "0x4001296")]
	[FieldOffset(Offset = "0xA8")]
	private static bool _hasRestarted;

	[Token(Token = "0x170008D9")]
	public static bool IsWaitingForRestart
	{
		[Token(Token = "0x6002E30")]
		[Address(RVA = "0x3E52880", Offset = "0x3E52880", VA = "0x3E52880")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6002E31")]
	[Address(RVA = "0x3E528F0", Offset = "0x3E528F0", VA = "0x3E528F0")]
	public static void WaitForRestart()
	{
	}

	[Token(Token = "0x6002E32")]
	[Address(RVA = "0x3E52950", Offset = "0x3E52950", VA = "0x3E52950", Slot = "41")]
	public override void OnJoinedRoom()
	{
	}

	[Token(Token = "0x6002E33")]
	[Address(RVA = "0x3E52A20", Offset = "0x3E52A20", VA = "0x3E52A20")]
	public static void Init()
	{
	}

	[Token(Token = "0x6002E34")]
	[Address(RVA = "0x3E52ED0", Offset = "0x3E52ED0", VA = "0x3E52ED0")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6002E35")]
	[Address(RVA = "0x3E530D0", Offset = "0x3E530D0", VA = "0x3E530D0")]
	public static void ToggleCutscene(bool cutscene)
	{
	}

	[Token(Token = "0x6002E36")]
	[Address(RVA = "0x3E53290", Offset = "0x3E53290", VA = "0x3E53290")]
	private static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6002E37")]
	[Address(RVA = "0x3E53310", Offset = "0x3E53310", VA = "0x3E53310")]
	public static void StartInGame()
	{
	}

	[Token(Token = "0x6002E38")]
	[Address(RVA = "0x3E536E0", Offset = "0x3E536E0", VA = "0x3E536E0")]
	public static void OnLoadBuiltinLogicRPC(string name, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6002E39")]
	[Address(RVA = "0x3E53680", Offset = "0x3E53680", VA = "0x3E53680")]
	public static void OnLoadCachedLogicRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6002E3A")]
	[Address(RVA = "0x3E53850", Offset = "0x3E53850", VA = "0x3E53850")]
	public static void FinishLoadLogic()
	{
	}

	[Token(Token = "0x6002E3B")]
	[Address(RVA = "0x3E53940", Offset = "0x3E53940", VA = "0x3E53940", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x6002E3C")]
	[Address(RVA = "0x3E53BB0", Offset = "0x3E53BB0", VA = "0x3E53BB0")]
	public static Dictionary<string, BaseSetting> GetModeSettings(string source)
	{
		return null;
	}

	[Token(Token = "0x6002E3D")]
	[Address(RVA = "0x3E53E00", Offset = "0x3E53E00", VA = "0x3E53E00")]
	public static Dictionary<string, BaseSetting> GetAddonSettings(string source)
	{
		return null;
	}

	[Token(Token = "0x6002E3E")]
	[Address(RVA = "0x3E541A0", Offset = "0x3E541A0", VA = "0x3E541A0")]
	public static Dictionary<string, Dictionary<string, BaseSetting>> GetSelectedAddonSettings(List<string> addonNames)
	{
		return null;
	}

	[Token(Token = "0x6002E3F")]
	[Address(RVA = "0x3E544F0", Offset = "0x3E544F0", VA = "0x3E544F0")]
	public static string GetModeDescription(Dictionary<string, BaseSetting> settings)
	{
		return null;
	}

	[Token(Token = "0x6002E40")]
	[Address(RVA = "0x3E53C10", Offset = "0x3E53C10", VA = "0x3E53C10")]
	public static CustomLogicEvaluator GetEditorEvaluator(string source, bool loadBaseLogic = true)
	{
		return null;
	}

	[Token(Token = "0x6002E41")]
	[Address(RVA = "0x3E54630", Offset = "0x3E54630", VA = "0x3E54630")]
	public static string TryParseLogic(string source)
	{
		return null;
	}

	[Token(Token = "0x6002E42")]
	[Address(RVA = "0x3E54850", Offset = "0x3E54850", VA = "0x3E54850")]
	public static void StartLogic(Dictionary<string, BaseSetting> modeSettings, Dictionary<string, Dictionary<string, BaseSetting>> addonSettings)
	{
	}

	[Token(Token = "0x6002E43")]
	[Address(RVA = "0x3E55180", Offset = "0x3E55180", VA = "0x3E55180")]
	private void FixedUpdate()
	{
	}

	[Token(Token = "0x6002E44")]
	[Address(RVA = "0x3E55220", Offset = "0x3E55220", VA = "0x3E55220")]
	private void Update()
	{
	}

	[Token(Token = "0x6002E45")]
	[Address(RVA = "0x3E55540", Offset = "0x3E55540", VA = "0x3E55540")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x6002E46")]
	[Address(RVA = "0x3E555E0", Offset = "0x3E555E0", VA = "0x3E555E0")]
	public CustomLogicManager()
	{
	}
}
