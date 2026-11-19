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

[Token(Token = "0x200010B")]
internal class HashSetSetting<T> : TypedSetting<HashSet<T>>
{
	[Token(Token = "0x600058A")]
	public HashSetSetting(HashSet<T> defaultValue)
	{
	}

	[Token(Token = "0x600058B")]
	public HashSetSetting()
	{
	}

	[Token(Token = "0x600058C")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x600058D")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x600058E")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x600058F")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000590")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x6000591")]
	public void Remove(T item)
	{
	}

	[Token(Token = "0x6000592")]
	public void Toggle(T item)
	{
	}

	[Token(Token = "0x6000593")]
	public void Clear()
	{
	}
}
