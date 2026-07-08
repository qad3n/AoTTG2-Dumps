using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;

[Token(Token = "0x2000026")]
internal static class PhotonExtensions
{
	[Token(Token = "0x60000FD")]
	[Address(RVA = "0x3C71CA0", Offset = "0x3C71CA0", VA = "0x3C71CA0")]
	public static void SetCustomProperty(this Player player, string key, object value)
	{
	}

	[Token(Token = "0x60000FE")]
	[Address(RVA = "0x3C71E60", Offset = "0x3C71E60", VA = "0x3C71E60")]
	public static void SetCustomProperties(this Player player, Dictionary<string, object> dictionary)
	{
	}

	[Token(Token = "0x60000FF")]
	[Address(RVA = "0x3C71DE0", Offset = "0x3C71DE0", VA = "0x3C71DE0")]
	public static object GetCustomProperty(this Player player, string key)
	{
		return null;
	}

	[Token(Token = "0x6000100")]
	[Address(RVA = "0x3C72290", Offset = "0x3C72290", VA = "0x3C72290")]
	public static int GetIntProperty(this Player player, string key, int defaultValue = 0)
	{
		return default(int);
	}

	[Token(Token = "0x6000101")]
	[Address(RVA = "0x3C72320", Offset = "0x3C72320", VA = "0x3C72320")]
	public static float GetFloatProperty(this Player player, string key, float defaultValue = 0f)
	{
		return default(float);
	}

	[Token(Token = "0x6000102")]
	[Address(RVA = "0x3C723C0", Offset = "0x3C723C0", VA = "0x3C723C0")]
	public static bool GetBoolProperty(this Player player, string key, bool defaultValue = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000103")]
	[Address(RVA = "0x3C72460", Offset = "0x3C72460", VA = "0x3C72460")]
	public static string GetStringProperty(this Player player, string key, string defaultValue = "")
	{
		return null;
	}

	[Token(Token = "0x6000104")]
	[Address(RVA = "0x3C725E0", Offset = "0x3C725E0", VA = "0x3C725E0")]
	public static string GetStringProperty(this RoomInfo room, string key, string defaultValue = "")
	{
		return null;
	}

	[Token(Token = "0x6000105")]
	[Address(RVA = "0x3C72670", Offset = "0x3C72670", VA = "0x3C72670")]
	public static bool GetBoolProperty(this RoomInfo room, string key, bool defaultValue = false)
	{
		return default(bool);
	}

	[Token(Token = "0x6000106")]
	[Address(RVA = "0x3C72710", Offset = "0x3C72710", VA = "0x3C72710")]
	public static bool HasSpawnPoint(this Player player)
	{
		return default(bool);
	}

	[Token(Token = "0x6000107")]
	[Address(RVA = "0x3C72790", Offset = "0x3C72790", VA = "0x3C72790")]
	public static Vector3 GetSpawnPoint(this Player player)
	{
		return default(Vector3);
	}
}
