// ==================== AoTTG2 cross-reference ====================
// Type: PhotonExtensions
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/PhotonExtensions.c
// Prior real C# source (older reference): Assets/Scripts/Utility/Extensions/PhotonExtensions.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

[Token(Token = "0x2000026")]
internal static class PhotonExtensions
{
	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x3F675F0", Offset = "0x3F675F0", VA = "0x3F675F0")]
	public static void SetCustomProperty(this Player player, string key, object value)
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x3F677B0", Offset = "0x3F677B0", VA = "0x3F677B0")]
	public static void SetCustomProperties(this Player player, Dictionary<string, object> dictionary)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x3F67730", Offset = "0x3F67730", VA = "0x3F67730")]
	public static object GetCustomProperty(this Player player, string key)
	{
		return null;
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x3F67BE0", Offset = "0x3F67BE0", VA = "0x3F67BE0")]
	public static int GetIntProperty(this Player player, string key, int defaultValue = 0)
	{
		return default(int);
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x3F67C70", Offset = "0x3F67C70", VA = "0x3F67C70")]
	public static float GetFloatProperty(this Player player, string key, float defaultValue = 0f)
	{
		return default(float);
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x3F67D10", Offset = "0x3F67D10", VA = "0x3F67D10")]
	public static bool GetBoolProperty(this Player player, string key, bool defaultValue = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x3F67DB0", Offset = "0x3F67DB0", VA = "0x3F67DB0")]
	public static string GetStringProperty(this Player player, string key, string defaultValue = "")
	{
		return null;
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x3F67F30", Offset = "0x3F67F30", VA = "0x3F67F30")]
	public static string GetStringProperty(this RoomInfo room, string key, string defaultValue = "")
	{
		return null;
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x3F67FC0", Offset = "0x3F67FC0", VA = "0x3F67FC0")]
	public static bool GetBoolProperty(this RoomInfo room, string key, bool defaultValue = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x3F68060", Offset = "0x3F68060", VA = "0x3F68060")]
	public static bool HasSpawnPoint(this Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x3F680E0", Offset = "0x3F680E0", VA = "0x3F680E0")]
	public static Vector3 GetSpawnPoint(this Player player)
	{
		return default(Vector3);
	}
}
