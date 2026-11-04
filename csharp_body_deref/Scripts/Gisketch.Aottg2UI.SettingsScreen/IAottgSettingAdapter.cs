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

[Token(Token = "0x2000167")]
internal interface IAottgSettingAdapter
{
	[Token(Token = "0x170000E1")]
	string TextValue
	{
		[Token(Token = "0x6000753")]
		get;
	}

	[Token(Token = "0x170000E2")]
	float FloatValue
	{
		[Token(Token = "0x6000754")]
		get;
	}

	[Token(Token = "0x170000E3")]
	bool BoolValue
	{
		[Token(Token = "0x6000755")]
		get;
	}

	[Token(Token = "0x170000E4")]
	float MinValue
	{
		[Token(Token = "0x6000756")]
		get;
	}

	[Token(Token = "0x170000E5")]
	float MaxValue
	{
		[Token(Token = "0x6000757")]
		get;
	}

	[Token(Token = "0x170000E6")]
	bool HasMinValue
	{
		[Token(Token = "0x6000758")]
		get;
	}

	[Token(Token = "0x170000E7")]
	bool HasMaxValue
	{
		[Token(Token = "0x6000759")]
		get;
	}

	[Token(Token = "0x170000E8")]
	int MaxCharacters
	{
		[Token(Token = "0x600075A")]
		get;
	}

	[Token(Token = "0x600075B")]
	void SetBool(bool value);

	[Token(Token = "0x600075C")]
	void SetFloat(float value);

	[Token(Token = "0x600075D")]
	void SetText(string value);

	[Token(Token = "0x600075E")]
	void SetValueFromContext(GisketchActionContext context);
}
