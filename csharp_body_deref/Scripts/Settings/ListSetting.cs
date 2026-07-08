using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000B7")]
internal class ListSetting<T> : TypedSetting<List<T>>, IListSetting where T : BaseSetting, new()
{
	[Token(Token = "0x60003B3")]
	public ListSetting(List<T> defaultValue)
	{
	}

	[Token(Token = "0x60003B4")]
	public ListSetting(T defaultValue)
	{
	}

	[Token(Token = "0x60003B5")]
	public ListSetting(T defaultValue, int count)
	{
	}

	[Token(Token = "0x60003B6")]
	public ListSetting()
	{
	}

	[Token(Token = "0x60003B7")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x60003B8")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x60003B9")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x60003BA")]
	public int GetCount()
	{
		return default(int);
	}

	[Token(Token = "0x60003BB")]
	public BaseSetting GetItemAt(int index)
	{
		return null;
	}

	[Token(Token = "0x60003BC")]
	public List<BaseSetting> GetItems()
	{
		return null;
	}

	[Token(Token = "0x60003BD")]
	public void AddItem(BaseSetting item)
	{
	}

	[Token(Token = "0x60003BE")]
	public void Clear()
	{
	}

	[Token(Token = "0x60003BF")]
	private void CopyLimits(T from, T to)
	{
	}

	[Token(Token = "0x60003C0")]
	private void CopyDefaultLimits(T to)
	{
	}
}
