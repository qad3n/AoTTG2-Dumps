// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.SettingsScreen.IAottgSettingAdapter
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Gisketch.Aottg2UI.Actions;
using Il2CppDummyDll;

namespace Gisketch.Aottg2UI.SettingsScreen;

[Token(Token = "0x2000120")]
internal interface IAottgSettingAdapter
{
	[Token(Token = "0x170000C9")]
	string TextValue
	{
		[Token(Token = "0x60005DF")]
		get;
	}

	[Token(Token = "0x170000CA")]
	float FloatValue
	{
		[Token(Token = "0x60005E0")]
		get;
	}

	[Token(Token = "0x170000CB")]
	bool BoolValue
	{
		[Token(Token = "0x60005E1")]
		get;
	}

	[Token(Token = "0x170000CC")]
	float MinValue
	{
		[Token(Token = "0x60005E2")]
		get;
	}

	[Token(Token = "0x170000CD")]
	float MaxValue
	{
		[Token(Token = "0x60005E3")]
		get;
	}

	[Token(Token = "0x170000CE")]
	bool HasMinValue
	{
		[Token(Token = "0x60005E4")]
		get;
	}

	[Token(Token = "0x170000CF")]
	bool HasMaxValue
	{
		[Token(Token = "0x60005E5")]
		get;
	}

	[Token(Token = "0x170000D0")]
	int MaxCharacters
	{
		[Token(Token = "0x60005E6")]
		get;
	}

	[Token(Token = "0x60005E7")]
	void SetBool(bool value);

	[Token(Token = "0x60005E8")]
	void SetFloat(float value);

	[Token(Token = "0x60005E9")]
	void SetText(string value);

	[Token(Token = "0x60005EA")]
	void SetValueFromContext(GisketchActionContext context);
}
