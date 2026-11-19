// ==================== AoTTG2 cross-reference ====================
// Type: Settings.TypedSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/TypedSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/TypedSetting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x200011E")]
internal abstract class TypedSetting<T> : BaseSetting
{
	[Token(Token = "0x4000673")]
	[FieldOffset(Offset = "0x0")]
	protected T DefaultValue;

	[Token(Token = "0x4000674")]
	[FieldOffset(Offset = "0x0")]
	protected T _value;

	[Token(Token = "0x170000CE")]
	public T Value
	{
		[Token(Token = "0x6000611")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000612")]
		set
		{
		}
	}

	[Token(Token = "0x6000613")]
	public TypedSetting()
	{
	}

	[Token(Token = "0x6000614")]
	public TypedSetting(T defaultValue)
	{
	}

	[Token(Token = "0x6000615")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x6000616")]
	public override object GetDefaultValue()
	{
		return null;
	}

	[Token(Token = "0x6000617")]
	protected virtual T SanitizeValue(T value)
	{
		return (T)null;
	}

	[Token(Token = "0x6000618")]
	public override string ToString()
	{
		return null;
	}
}
