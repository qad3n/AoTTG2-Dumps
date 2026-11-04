// ==================== AoTTG2 cross-reference ====================
// Type: Map.MapManager
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Map/MapManager.c
// Prior real C# source (older reference): Assets/Scripts/Map/MapManager.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using ApplicationManagers;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;

namespace Map;

[Token(Token = "0x20003B3")]
internal class MapManager : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x4001358")]
	[FieldOffset(Offset = "0x0")]
	public static bool MapLoaded;

	[Token(Token = "0x4001359")]
	[FieldOffset(Offset = "0x8")]
	public static MapScript MapScript;

	[Token(Token = "0x400135A")]
	[FieldOffset(Offset = "0x10")]
	private static MapManager _instance;

	[Token(Token = "0x400135B")]
	[FieldOffset(Offset = "0x18")]
	public static bool NeedsNavMeshUpdate;

	[Token(Token = "0x400135C")]
	[FieldOffset(Offset = "0x20")]
	public static string LastMapHash;

	[Token(Token = "0x400135D")]
	[FieldOffset(Offset = "0x28")]
	public static string LastGameMode;

	[Token(Token = "0x600176B")]
	[Address(RVA = "0x1EB2AD0", Offset = "0x1EB10D0", VA = "0x181EB2AD0")]
	public static void Init()
	{
	}

	[Token(Token = "0x600176C")]
	[Address(RVA = "0x1EB4180", Offset = "0x1EB2780", VA = "0x181EB4180")]
	public static bool TryGetRandomTagXform(string tag, out Transform xform)
	{
		return default(bool);
	}

	[Token(Token = "0x600176D")]
	[Address(RVA = "0x1EB46F0", Offset = "0x1EB2CF0", VA = "0x181EB46F0")]
	public static bool TryGetRandomTagsXform(List<string> tags, out Transform xform)
	{
		return default(bool);
	}

	[Token(Token = "0x600176E")]
	[Address(RVA = "0x1EB4250", Offset = "0x1EB2850", VA = "0x181EB4250")]
	public static bool TryGetRandomTagXforms(string tag, Vector3 avoidPosition, float avoidRadius, int count, out List<Transform> xforms)
	{
		return default(bool);
	}

	[Token(Token = "0x600176F")]
	[Address(RVA = "0x1EB2950", Offset = "0x1EB0F50", VA = "0x181EB2950")]
	public static GameObject GetRandomTag(string tag)
	{
		return null;
	}

	[Token(Token = "0x6001770")]
	[Address(RVA = "0x1EB3880", Offset = "0x1EB1E80", VA = "0x181EB3880")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6001771")]
	[Address(RVA = "0x1EB34C0", Offset = "0x1EB1AC0", VA = "0x181EB34C0")]
	private static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6001772")]
	[Address(RVA = "0x1EB38D0", Offset = "0x1EB1ED0", VA = "0x181EB38D0")]
	private static void StartInGame()
	{
	}

	[Token(Token = "0x6001773")]
	[Address(RVA = "0x1EB3E50", Offset = "0x1EB2450", VA = "0x181EB3E50")]
	private static void StartMapEditor()
	{
	}

	[Token(Token = "0x6001774")]
	[Address(RVA = "0x1EB2FF0", Offset = "0x1EB15F0", VA = "0x181EB2FF0")]
	public static void OnLoadBuiltinMapRPC(string category, string name, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001775")]
	[Address(RVA = "0x1EB32F0", Offset = "0x1EB18F0", VA = "0x181EB32F0")]
	public static void OnLoadCachedMapRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6001776")]
	[Address(RVA = "0x1EB2E60", Offset = "0x1EB1460", VA = "0x181EB2E60")]
	public static void LoadMap(bool mapChanged)
	{
	}

	[Token(Token = "0x6001777")]
	[Address(RVA = "0x1EB3600", Offset = "0x1EB1C00", VA = "0x181EB3600", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x6001778")]
	[Address(RVA = "0x190EDA0", Offset = "0x190D3A0", VA = "0x18190EDA0")]
	public MapManager()
	{
	}
}
