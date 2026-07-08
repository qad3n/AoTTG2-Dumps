using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000AA")]
internal abstract class BaseSetting
{
	[Token(Token = "0x600035A")]
	public abstract void SetDefault();

	[Token(Token = "0x600035B")]
	public abstract JSONNode SerializeToJsonObject();

	[Token(Token = "0x600035C")]
	public abstract void DeserializeFromJsonObject(JSONNode json);

	[Token(Token = "0x600035D")]
	[Address(RVA = "0x3E0B8A0", Offset = "0x3E0B8A0", VA = "0x3E0B8A0", Slot = "7")]
	public virtual string SerializeToJsonString()
	{
		return null;
	}

	[Token(Token = "0x600035E")]
	[Address(RVA = "0x3E0B8E0", Offset = "0x3E0B8E0", VA = "0x3E0B8E0", Slot = "8")]
	public virtual void DeserializeFromJsonString(string json)
	{
	}

	[Token(Token = "0x600035F")]
	[Address(RVA = "0x3E0B910", Offset = "0x3E0B910", VA = "0x3E0B910", Slot = "9")]
	public virtual void Copy(BaseSetting other)
	{
	}

	[Token(Token = "0x6000360")]
	[Address(RVA = "0x3E0B950", Offset = "0x3E0B950", VA = "0x3E0B950")]
	protected BaseSetting()
	{
	}
}
