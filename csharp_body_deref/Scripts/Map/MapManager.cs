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

[Token(Token = "0x2000274")]
internal class MapManager : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x4000D56")]
	[FieldOffset(Offset = "0x0")]
	public static bool MapLoaded;

	[Token(Token = "0x4000D57")]
	[FieldOffset(Offset = "0x8")]
	public static MapScript MapScript;

	[Token(Token = "0x4000D58")]
	[FieldOffset(Offset = "0x10")]
	private static MapManager _instance;

	[Token(Token = "0x4000D59")]
	[FieldOffset(Offset = "0x18")]
	public static bool NeedsNavMeshUpdate;

	[Token(Token = "0x4000D5A")]
	[FieldOffset(Offset = "0x20")]
	public static string LastMapHash;

	[Token(Token = "0x4000D5B")]
	[FieldOffset(Offset = "0x28")]
	public static string LastGameMode;

	[Token(Token = "0x6000F25")]
	[Address(RVA = "0x3FB1E10", Offset = "0x3FB1E10", VA = "0x3FB1E10")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000F26")]
	[Address(RVA = "0x3FB20D0", Offset = "0x3FB20D0", VA = "0x3FB20D0")]
	public static bool TryGetRandomTagXform(string tag, out Transform xform)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F27")]
	[Address(RVA = "0x3FB2330", Offset = "0x3FB2330", VA = "0x3FB2330")]
	public static bool TryGetRandomTagsXform(List<string> tags, out Transform xform)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F28")]
	[Address(RVA = "0x3FB2580", Offset = "0x3FB2580", VA = "0x3FB2580")]
	public static bool TryGetRandomTagXforms(string tag, Vector3 avoidPosition, float avoidRadius, int count, out List<Transform> xforms)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F29")]
	[Address(RVA = "0x3FB2190", Offset = "0x3FB2190", VA = "0x3FB2190")]
	public static GameObject GetRandomTag(string tag)
	{
		return null;
	}

	[Token(Token = "0x6000F2A")]
	[Address(RVA = "0x3FB2B80", Offset = "0x3FB2B80", VA = "0x3FB2B80")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6000F2B")]
	[Address(RVA = "0x3FB2BF0", Offset = "0x3FB2BF0", VA = "0x3FB2BF0")]
	private static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6000F2C")]
	[Address(RVA = "0x3FB2D40", Offset = "0x3FB2D40", VA = "0x3FB2D40")]
	private static void StartInGame()
	{
	}

	[Token(Token = "0x6000F2D")]
	[Address(RVA = "0x3FB30F0", Offset = "0x3FB30F0", VA = "0x3FB30F0")]
	private static void StartMapEditor()
	{
	}

	[Token(Token = "0x6000F2E")]
	[Address(RVA = "0x3FB3E60", Offset = "0x3FB3E60", VA = "0x3FB3E60")]
	public static void OnLoadBuiltinMapRPC(string category, string name, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000F2F")]
	[Address(RVA = "0x3FB38C0", Offset = "0x3FB38C0", VA = "0x3FB38C0")]
	public static void OnLoadCachedMapRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000F30")]
	[Address(RVA = "0x3FB40F0", Offset = "0x3FB40F0", VA = "0x3FB40F0")]
	public static void LoadMap(bool mapChanged)
	{
	}

	[Token(Token = "0x6000F31")]
	[Address(RVA = "0x3FB4240", Offset = "0x3FB4240", VA = "0x3FB4240", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x6000F32")]
	[Address(RVA = "0x3FB45D0", Offset = "0x3FB45D0", VA = "0x3FB45D0")]
	public MapManager()
	{
	}
}
