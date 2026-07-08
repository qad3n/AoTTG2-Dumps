using System.Collections.Generic;
using ApplicationManagers;
using Il2CppDummyDll;
using Photon.Pun;
using Photon.Realtime;
using UnityEngine;

namespace Map;

[Token(Token = "0x200023B")]
internal class MapManager : MonoBehaviourPunCallbacks
{
	[Token(Token = "0x4000C70")]
	[FieldOffset(Offset = "0x0")]
	public static bool MapLoaded;

	[Token(Token = "0x4000C71")]
	[FieldOffset(Offset = "0x8")]
	public static MapScript MapScript;

	[Token(Token = "0x4000C72")]
	[FieldOffset(Offset = "0x10")]
	private static MapManager _instance;

	[Token(Token = "0x4000C73")]
	[FieldOffset(Offset = "0x18")]
	public static bool NeedsNavMeshUpdate;

	[Token(Token = "0x4000C74")]
	[FieldOffset(Offset = "0x20")]
	public static string LastMapHash;

	[Token(Token = "0x4000C75")]
	[FieldOffset(Offset = "0x28")]
	public static string LastGameMode;

	[Token(Token = "0x6000D7B")]
	[Address(RVA = "0x3CAC670", Offset = "0x3CAC670", VA = "0x3CAC670")]
	public static void Init()
	{
	}

	[Token(Token = "0x6000D7C")]
	[Address(RVA = "0x3CAC920", Offset = "0x3CAC920", VA = "0x3CAC920")]
	public static bool TryGetRandomTagXform(string tag, out Transform xform)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7D")]
	[Address(RVA = "0x3CACB80", Offset = "0x3CACB80", VA = "0x3CACB80")]
	public static bool TryGetRandomTagsXform(List<string> tags, out Transform xform)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7E")]
	[Address(RVA = "0x3CACDD0", Offset = "0x3CACDD0", VA = "0x3CACDD0")]
	public static bool TryGetRandomTagXforms(string tag, Vector3 avoidPosition, float avoidRadius, int count, out List<Transform> xforms)
	{
		return default(bool);
	}

	[Token(Token = "0x6000D7F")]
	[Address(RVA = "0x3CAC9E0", Offset = "0x3CAC9E0", VA = "0x3CAC9E0")]
	public static GameObject GetRandomTag(string tag)
	{
		return null;
	}

	[Token(Token = "0x6000D80")]
	[Address(RVA = "0x3CAD3D0", Offset = "0x3CAD3D0", VA = "0x3CAD3D0")]
	private static void OnPreLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6000D81")]
	[Address(RVA = "0x3CAD440", Offset = "0x3CAD440", VA = "0x3CAD440")]
	private static void OnLoadScene(SceneName sceneName)
	{
	}

	[Token(Token = "0x6000D82")]
	[Address(RVA = "0x3CAD590", Offset = "0x3CAD590", VA = "0x3CAD590")]
	private static void StartInGame()
	{
	}

	[Token(Token = "0x6000D83")]
	[Address(RVA = "0x3CAD940", Offset = "0x3CAD940", VA = "0x3CAD940")]
	private static void StartMapEditor()
	{
	}

	[Token(Token = "0x6000D84")]
	[Address(RVA = "0x3CAE400", Offset = "0x3CAE400", VA = "0x3CAE400")]
	public static void OnLoadBuiltinMapRPC(string category, string name, PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000D85")]
	[Address(RVA = "0x3CADE60", Offset = "0x3CADE60", VA = "0x3CADE60")]
	public static void OnLoadCachedMapRPC(PhotonMessageInfo info)
	{
	}

	[Token(Token = "0x6000D86")]
	[Address(RVA = "0x3CAE690", Offset = "0x3CAE690", VA = "0x3CAE690")]
	public static void LoadMap(bool mapChanged)
	{
	}

	[Token(Token = "0x6000D87")]
	[Address(RVA = "0x3CAE7E0", Offset = "0x3CAE7E0", VA = "0x3CAE7E0", Slot = "42")]
	public override void OnPlayerEnteredRoom(Player player)
	{
	}

	[Token(Token = "0x6000D88")]
	[Address(RVA = "0x3CAEB70", Offset = "0x3CAEB70", VA = "0x3CAEB70")]
	public MapManager()
	{
	}
}
