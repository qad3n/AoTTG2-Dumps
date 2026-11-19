// ==================== AoTTG2 cross-reference ====================
// Type: PhotonExtensions
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/PhotonExtensions.c
// Prior real C# source (older reference): Assets/Scripts/Utility/Extensions/PhotonExtensions.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

[Token(Token = "0x2000027")]
internal static class PhotonExtensions
{
	[Token(Token = "0x6000112")]
	[Address(RVA = "0x5751270", Offset = "0x5750270", VA = "0x5751270")]
	public static void SetCustomProperty(this Player player, string key, object value)
	{
	}

	[Token(Token = "0x6000113")]
	[Address(RVA = "0x5751420", Offset = "0x5750420", VA = "0x5751420")]
	public static void SetCustomProperties(this Player player, Dictionary<string, object> dictionary)
	{
	}

	[Token(Token = "0x6000114")]
	[Address(RVA = "0x5751830", Offset = "0x5750830", VA = "0x5751830")]
	public static void ForceUpdateProps(this Player player, Dictionary<string, object> dictionary, string firstProperty, string secondProperty)
	{
	}

	[Token(Token = "0x6000115")]
	[Address(RVA = "0x57514A0", Offset = "0x57504A0", VA = "0x57514A0")]
	private static Hashtable GetChangedProperties(Player player, Dictionary<string, object> dictionary)
	{
		return null;
	}

	[Token(Token = "0x6000116")]
	[Address(RVA = "0x57513A0", Offset = "0x57503A0", VA = "0x57513A0")]
	public static object GetCustomProperty(this Player player, string key)
	{
		return null;
	}

	[Token(Token = "0x6000117")]
	[Address(RVA = "0x57518F0", Offset = "0x57508F0", VA = "0x57518F0")]
	public static int GetIntProperty(this Player player, string key, int defaultValue = 0)
	{
		return default(int);
	}

	[Token(Token = "0x6000118")]
	[Address(RVA = "0x5751980", Offset = "0x5750980", VA = "0x5751980")]
	public static float GetFloatProperty(this Player player, string key, float defaultValue = 0f)
	{
		return default(float);
	}

	[Token(Token = "0x6000119")]
	[Address(RVA = "0x5751A20", Offset = "0x5750A20", VA = "0x5751A20")]
	public static bool GetBoolProperty(this Player player, string key, bool defaultValue = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600011A")]
	[Address(RVA = "0x5751AC0", Offset = "0x5750AC0", VA = "0x5751AC0")]
	public static string GetStringProperty(this Player player, string key, string defaultValue = "")
	{
		return null;
	}

	[Token(Token = "0x600011B")]
	[Address(RVA = "0x5751C40", Offset = "0x5750C40", VA = "0x5751C40")]
	public static string GetStringProperty(this RoomInfo room, string key, string defaultValue = "")
	{
		return null;
	}

	[Token(Token = "0x600011C")]
	[Address(RVA = "0x5751CD0", Offset = "0x5750CD0", VA = "0x5751CD0")]
	public static bool GetBoolProperty(this RoomInfo room, string key, bool defaultValue = false)
	{
		return default(bool);
	}

	[Token(Token = "0x600011D")]
	[Address(RVA = "0x5751D70", Offset = "0x5750D70", VA = "0x5751D70")]
	public static bool HasSpawnPoint(this Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x600011E")]
	[Address(RVA = "0x5751DF0", Offset = "0x5750DF0", VA = "0x5751DF0")]
	public static Vector3 GetSpawnPoint(this Player player)
	{
		return default(Vector3);
	}
}
