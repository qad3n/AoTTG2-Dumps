// ==================== AoTTG2 cross-reference ====================
// Type: Settings.ListSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/ListSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/ListSetting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000D8")]
internal class ListSetting<T> : TypedSetting<List<T>>, IListSetting where T : BaseSetting, new()
{
	[Token(Token = "0x600044D")]
	public ListSetting(List<T> defaultValue)
	{
	}

	[Token(Token = "0x600044E")]
	public ListSetting(T defaultValue)
	{
	}

	[Token(Token = "0x600044F")]
	public ListSetting(T defaultValue, int count)
	{
	}

	[Token(Token = "0x6000450")]
	public ListSetting()
	{
	}

	[Token(Token = "0x6000451")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x6000452")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x6000453")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x6000454")]
	public int GetCount()
	{
		return default(int);
	}

	[Token(Token = "0x6000455")]
	public BaseSetting GetItemAt(int index)
	{
		return null;
	}

	[Token(Token = "0x6000456")]
	public List<BaseSetting> GetItems()
	{
		return null;
	}

	[Token(Token = "0x6000457")]
	public void AddItem(BaseSetting item)
	{
	}

	[Token(Token = "0x6000458")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000459")]
	private void CopyLimits(T from, T to)
	{
	}

	[Token(Token = "0x600045A")]
	private void CopyDefaultLimits(T to)
	{
	}
}
