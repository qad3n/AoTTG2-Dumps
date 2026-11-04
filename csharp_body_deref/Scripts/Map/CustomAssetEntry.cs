// ==================== AoTTG2 cross-reference ====================
// Type: Map.CustomAssetEntry
// Update status: NEW in this game update
// Real method bodies (native C decompile): source/cpp/Map/CustomAssetEntry.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Map;

[Token(Token = "0x20003B9")]
public class CustomAssetEntry
{
	[Token(Token = "0x4001386")]
	[FieldOffset(Offset = "0x0")]
	public static readonly string[] PlatformKeys;

	[Token(Token = "0x4001387")]
	[FieldOffset(Offset = "0x8")]
	public static readonly string[] PlatformNames;

	[Token(Token = "0x4001388")]
	[FieldOffset(Offset = "0x10")]
	public string Bundle;

	[Token(Token = "0x4001389")]
	[FieldOffset(Offset = "0x18")]
	public string DefaultUrl;

	[Token(Token = "0x400138A")]
	[FieldOffset(Offset = "0x20")]
	public Dictionary<string, string> PlatformUrls;

	[Token(Token = "0x17000274")]
	public static string CurrentPlatformKey
	{
		[Token(Token = "0x6001797")]
		[Address(RVA = "0x1E9CB30", Offset = "0x1E9B130", VA = "0x181E9CB30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6001791")]
	[Address(RVA = "0x1E9C250", Offset = "0x1E9A850", VA = "0x181E9C250")]
	public static CustomAssetEntry Parse(string str)
	{
		return null;
	}

	[Token(Token = "0x6001792")]
	[Address(RVA = "0x1E9C520", Offset = "0x1E9AB20", VA = "0x181E9C520")]
	public string Serialize()
	{
		return null;
	}

	[Token(Token = "0x6001793")]
	[Address(RVA = "0x1E9C110", Offset = "0x1E9A710", VA = "0x181E9C110")]
	public string GetUrl()
	{
		return null;
	}

	[Token(Token = "0x6001794")]
	[Address(RVA = "0x1E9C050", Offset = "0x1E9A650", VA = "0x181E9C050")]
	public string GetPlatformUrl(string key)
	{
		return null;
	}

	[Token(Token = "0x6001795")]
	[Address(RVA = "0x1E9C770", Offset = "0x1E9AD70", VA = "0x181E9C770")]
	public void SetPlatformUrl(string key, string url)
	{
	}

	[Token(Token = "0x6001796")]
	[Address(RVA = "0x1E9BF80", Offset = "0x1E9A580", VA = "0x181E9BF80")]
	public static string GetPlatformKey(string name)
	{
		return null;
	}

	[Token(Token = "0x6001798")]
	[Address(RVA = "0x1E9CA70", Offset = "0x1E9B070", VA = "0x181E9CA70")]
	public CustomAssetEntry()
	{
	}
}
