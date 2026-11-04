// ==================== AoTTG2 cross-reference ====================
// Type: Settings.TypedSetting
// Update status: CHANGED in this game update
// Real method bodies (native C decompile): source/cpp/Settings/TypedSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/TypedSetting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000E3")]
internal abstract class TypedSetting<T> : BaseSetting
{
	[Token(Token = "0x4000534")]
	[FieldOffset(Offset = "0x0")]
	protected T DefaultValue;

	[Token(Token = "0x4000535")]
	[FieldOffset(Offset = "0x0")]
	protected T _value;

	[Token(Token = "0x170000B1")]
	public T Value
	{
		[Token(Token = "0x6000493")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000494")]
		set
		{
		}
	}

	[Token(Token = "0x6000495")]
	public TypedSetting()
	{
	}

	[Token(Token = "0x6000496")]
	public TypedSetting(T defaultValue)
	{
	}

	[Token(Token = "0x6000497")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x6000498")]
	public override object GetDefaultValue()
	{
		return null;
	}

	[Token(Token = "0x6000499")]
	protected virtual T SanitizeValue(T value)
	{
		return (T)null;
	}

	[Token(Token = "0x600049A")]
	public override string ToString()
	{
		return null;
	}
}
