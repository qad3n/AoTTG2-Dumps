using System.Collections.Generic;
using System.Collections.Specialized;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Settings;

[Token(Token = "0x20000AB")]
internal abstract class BaseSettingsContainer : BaseSetting
{
	[Token(Token = "0x4000466")]
	[FieldOffset(Offset = "0x10")]
	public OrderedDictionary Settings;

	[Token(Token = "0x4000467")]
	[FieldOffset(Offset = "0x18")]
	public Dictionary<string, BaseSetting> TypedSettings;

	[Token(Token = "0x6000361")]
	[Address(RVA = "0x3E0B7D0", Offset = "0x3E0B7D0", VA = "0x3E0B7D0")]
	public BaseSettingsContainer()
	{
	}

	[Token(Token = "0x6000362")]
	[Address(RVA = "0x3E0B960", Offset = "0x3E0B960", VA = "0x3E0B960", Slot = "10")]
	protected virtual void Setup()
	{
	}

	[Token(Token = "0x6000363")]
	[Address(RVA = "0x3E0B980", Offset = "0x3E0B980", VA = "0x3E0B980")]
	protected void RegisterSettings()
	{
	}

	[Token(Token = "0x6000364")]
	[Address(RVA = "0x3E0C010", Offset = "0x3E0C010", VA = "0x3E0C010", Slot = "4")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x6000365")]
	[Address(RVA = "0x3E0C3F0", Offset = "0x3E0C3F0", VA = "0x3E0C3F0", Slot = "11")]
	public virtual void Apply()
	{
	}

	[Token(Token = "0x6000366")]
	[Address(RVA = "0x3E0C400", Offset = "0x3E0C400", VA = "0x3E0C400", Slot = "5")]
	public override JSONNode SerializeToJsonObject()
	{
		return null;
	}

	[Token(Token = "0x6000367")]
	[Address(RVA = "0x3E0C8A0", Offset = "0x3E0C8A0", VA = "0x3E0C8A0", Slot = "6")]
	public override void DeserializeFromJsonObject(JSONNode json)
	{
	}

	[Token(Token = "0x6000368")]
	[Address(RVA = "0x3E0CF30", Offset = "0x3E0CF30", VA = "0x3E0CF30", Slot = "12")]
	protected virtual bool Validate()
	{
		return default(bool);
	}
}
