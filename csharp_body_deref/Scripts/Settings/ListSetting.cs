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

[Token(Token = "0x20000BA")]
internal class ListSetting<T> : TypedSetting<List<T>>, IListSetting where T : BaseSetting, new()
{
	[Token(Token = "0x60003C3")]
	public ListSetting(List<T> defaultValue)
	{
	}

	[Token(Token = "0x60003C4")]
	public ListSetting(T defaultValue)
	{
	}

	[Token(Token = "0x60003C5")]
	public ListSetting(T defaultValue, int count)
	{
	}

	[Token(Token = "0x60003C6")]
	public ListSetting()
	{
	}

	[Token(Token = "0x60003C7")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x60003C8")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x60003C9")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x60003CA")]
	public int GetCount()
	{
		return default(int);
	}

	[Token(Token = "0x60003CB")]
	public BaseSetting GetItemAt(int index)
	{
		return null;
	}

	[Token(Token = "0x60003CC")]
	public List<BaseSetting> GetItems()
	{
		return null;
	}

	[Token(Token = "0x60003CD")]
	public void AddItem(BaseSetting item)
	{
	}

	[Token(Token = "0x60003CE")]
	public void Clear()
	{
	}

	[Token(Token = "0x60003CF")]
	private void CopyLimits(T from, T to)
	{
	}

	[Token(Token = "0x60003D0")]
	private void CopyDefaultLimits(T to)
	{
	}
}
