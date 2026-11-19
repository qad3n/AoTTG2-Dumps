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

[Token(Token = "0x2000410")]
internal class MapManager : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x40014EF")]
	[FieldOffset(Offset = "0x0")]
	public static bool MapLoaded;

	[Token(Token = "0x40014F0")]
	[FieldOffset(Offset = "0x8")]
	public static MapScript MapScript;

	[Token(Token = "0x40014F1")]
	[FieldOffset(Offset = "0x10")]
	private static MapManager _instance;

	[Token(Token = "0x40014F2")]
	[FieldOffset(Offset = "0x18")]
	public static bool NeedsNavMeshUpdate;

	[Token(Token = "0x40014F3")]
	[FieldOffset(Offset = "0x20")]
	public static string LastMapHash;

	[Token(Token = "0x40014F4")]
	[FieldOffset(Offset = "0x28")]
	public static string LastGameMode;

	[Token(Token = "0x60019D9")]
	[Address(RVA = "0x589EF50", Offset = "0x589DF50", VA = "0x589EF50")]
	public static void Init()
	{
	}

	[Token(Token = "0x60019DA")]
	[Address(RVA = "0x589F210", Offset = "0x589E210", VA = "0x589F210")]
	public static bool TryGetRandomTagXform(string tag, out Transform xform)
	{
		return default(bool);
	}

	[Token(Token = "0x60019DB")]
	[Address(RVA = "0x589F470", Offset = "0x589E470", VA = "0x589F470")]
	public static bool TryGetRandomTagsXform(List<string> tags, out Transform xform)
	{
		return default(bool);
	}

	[Token(Token = "0x60019DC")]
	[Address(RVA = "0x589F670", Offset = "0x589E670", VA = "0x589F670")]
	public static bool TryGetRandomTagXforms(string tag, Vector3 avoidPosition, float avoidRadius, int count, out List<Transform> xforms)
	{
		return default(bool);
	}

	[Token(Token = "0x60019DD")]
	[Address(RVA = "0x589F2D0", Offset = "0x589E2D0", VA = "0x589F2D0")]
	public static GameObject GetRandomTag(string tag)
	{
		return null;
	}

	[Token(Token = "0x60019DE")]
	[Address(RVA = "0x589FC60", Offset = "0x589EC60", VA = "0x589FC60")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x60019DF")]
	[Address(RVA = "0x589FCD0", Offset = "0x589ECD0", VA = "0x589FCD0")]
	private static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x60019E0")]
	[Address(RVA = "0x589FE30", Offset = "0x589EE30", VA = "0x589FE30")]
	private static void StartInGame()
	{
	}

	[Token(Token = "0x60019E1")]
	[Address(RVA = "0x58A0210", Offset = "0x589F210", VA = "0x58A0210")]
	private static void StartMapEditor()
	{
	}

	[Token(Token = "0x60019E2")]
	[Address(RVA = "0x58A11B0", Offset = "0x58A01B0", VA = "0x58A11B0")]
	public static void OnLoadBuiltinMapRPC(string category, string name, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60019E3")]
	[Address(RVA = "0x58A0B30", Offset = "0x589FB30", VA = "0x58A0B30")]
	public static void OnLoadCachedMapRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x60019E4")]
	[Address(RVA = "0x58A1460", Offset = "0x58A0460", VA = "0x58A1460")]
	public static void LoadMap(bool mapChanged)
	{
	}

	[Token(Token = "0x60019E5")]
	[Address(RVA = "0x58A15C0", Offset = "0x58A05C0", VA = "0x58A15C0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x60019E6")]
	[Address(RVA = "0x58A1940", Offset = "0x58A0940", VA = "0x58A1940")]
	public MapManager()
	{
	}
}
