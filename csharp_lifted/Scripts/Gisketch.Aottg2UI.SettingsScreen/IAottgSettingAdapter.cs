// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.IAottgSettingAdapter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x200016F")]
internal interface IAottgSettingAdapter
{
	[Token(Token = "0x170000E4")]
	string TextValue
	{
		[Token(Token = "0x60007C9")]
		get;
	}

	[Token(Token = "0x170000E5")]
	float FloatValue
	{
		[Token(Token = "0x60007CA")]
		get;
	}

	[Token(Token = "0x170000E6")]
	bool BoolValue
	{
		[Token(Token = "0x60007CB")]
		get;
	}

	[Token(Token = "0x170000E7")]
	float MinValue
	{
		[Token(Token = "0x60007CC")]
		get;
	}

	[Token(Token = "0x170000E8")]
	float MaxValue
	{
		[Token(Token = "0x60007CD")]
		get;
	}

	[Token(Token = "0x170000E9")]
	bool HasMinValue
	{
		[Token(Token = "0x60007CE")]
		get;
	}

	[Token(Token = "0x170000EA")]
	bool HasMaxValue
	{
		[Token(Token = "0x60007CF")]
		get;
	}

	[Token(Token = "0x170000EB")]
	int MaxCharacters
	{
		[Token(Token = "0x60007D0")]
		get;
	}

	[Token(Token = "0x60007D1")]
	void SetBool(bool value);

	[Token(Token = "0x60007D2")]
	void SetFloat(float value);

	[Token(Token = "0x60007D3")]
	void SetText(string value);

	[Token(Token = "0x60007D4")]
	void SetValueFromContext(GisketchActionContext context);
}
