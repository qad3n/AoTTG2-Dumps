// ==================== AoTTG2 cross-reference ====================
// Type: Settings.HashSetSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/HashSetSetting.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000D0")]
internal class HashSetSetting<T> : TypedSetting<HashSet<T>>
{
	[Token(Token = "0x600040C")]
	public HashSetSetting(HashSet<T> defaultValue)
	{
	}

	[Token(Token = "0x600040D")]
	public HashSetSetting()
	{
	}

	[Token(Token = "0x600040E")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x600040F")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x6000410")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x6000411")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000412")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x6000413")]
	public void Remove(T item)
	{
	}

	[Token(Token = "0x6000414")]
	public void Toggle(T item)
	{
	}

	[Token(Token = "0x6000415")]
	public void Clear()
	{
	}
}
