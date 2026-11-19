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

[Token(Token = "0x2000113")]
internal class ListSetting<T> : TypedSetting<List<T>>, IListSetting where T : BaseSetting, new()
{
	[Token(Token = "0x60005CB")]
	public ListSetting(List<T> defaultValue)
	{
	}

	[Token(Token = "0x60005CC")]
	public ListSetting(T defaultValue)
	{
	}

	[Token(Token = "0x60005CD")]
	public ListSetting(T defaultValue, int count)
	{
	}

	[Token(Token = "0x60005CE")]
	public ListSetting()
	{
	}

	[Token(Token = "0x60005CF")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x60005D0")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x60005D1")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x60005D2")]
	public int GetCount()
	{
		return default(int);
	}

	[Token(Token = "0x60005D3")]
	public BaseSetting GetItemAt(int index)
	{
		return null;
	}

	[Token(Token = "0x60005D4")]
	public List<BaseSetting> GetItems()
	{
		return null;
	}

	[Token(Token = "0x60005D5")]
	public void AddItem(BaseSetting item)
	{
	}

	[Token(Token = "0x60005D6")]
	public void Clear()
	{
	}

	[Token(Token = "0x60005D7")]
	private void CopyLimits(T from, T to)
	{
	}

	[Token(Token = "0x60005D8")]
	private void CopyDefaultLimits(T to)
	{
	}
}
