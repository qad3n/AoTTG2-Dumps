using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000B0")]
internal class HashSetSetting<T> : TypedSetting<HashSet<T>>
{
	[Token(Token = "0x600037B")]
	public HashSetSetting(HashSet<T> defaultValue)
	{
	}

	[Token(Token = "0x600037C")]
	public HashSetSetting()
	{
	}

	[Token(Token = "0x600037D")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x600037E")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x600037F")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x6000380")]
	public bool Contains(T item)
	{
		return default(bool);
	}

	[Token(Token = "0x6000381")]
	public void Add(T item)
	{
	}

	[Token(Token = "0x6000382")]
	public void Remove(T item)
	{
	}

	[Token(Token = "0x6000383")]
	public void Toggle(T item)
	{
	}

	[Token(Token = "0x6000384")]
	public void Clear()
	{
	}
}
