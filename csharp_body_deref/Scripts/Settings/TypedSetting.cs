// ==================== AoTTG2 cross-reference ====================
// Type: Settings.TypedSetting
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Settings/TypedSetting.c
// Prior real C# source (older reference): Assets/Scripts/Settings/SettingTypes/TypedSetting.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Settings;

[Token(Token = "0x20000C5")]
internal abstract class TypedSetting<T> : BaseSetting
{
	[Token(Token = "0x40004A9")]
	[FieldOffset(Offset = "0x0")]
	protected T DefaultValue;

	[Token(Token = "0x40004AA")]
	[FieldOffset(Offset = "0x0")]
	protected T _value;

	[Token(Token = "0x170000A2")]
	public T Value
	{
		[Token(Token = "0x6000405")]
		get
		{
			return (T)null;
		}
		[Token(Token = "0x6000406")]
		set
		{
		}
	}

	[Token(Token = "0x6000407")]
	public TypedSetting()
	{
	}

	[Token(Token = "0x6000408")]
	public TypedSetting(T defaultValue)
	{
	}

	[Token(Token = "0x6000409")]
	public override void SetDefault()
	{
	}

	[Token(Token = "0x600040A")]
	protected virtual T SanitizeValue(T value)
	{
		return (T)null;
	}

	[Token(Token = "0x600040B")]
	public override string ToString()
	{
		return null;
	}
}
