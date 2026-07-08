using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20003F1")]
public interface ITextEdition
{
	[Token(Token = "0x170006DC")]
	internal bool multiline
	{
		[Token(Token = "0x600197F")]
		get;
		[Token(Token = "0x6001980")]
		set;
	}

	[Token(Token = "0x170006DD")]
	bool isReadOnly
	{
		[Token(Token = "0x6001981")]
		get;
		[Token(Token = "0x6001982")]
		set;
	}

	[Token(Token = "0x170006DE")]
	int maxLength
	{
		[Token(Token = "0x6001983")]
		get;
		[Token(Token = "0x6001984")]
		set;
	}

	[Token(Token = "0x170006DF")]
	string placeholder
	{
		[Token(Token = "0x6001985")]
		get;
		[Token(Token = "0x6001986")]
		set;
	}

	[Token(Token = "0x170006E0")]
	bool isDelayed
	{
		[Token(Token = "0x6001987")]
		get;
		[Token(Token = "0x6001988")]
		set;
	}

	[Token(Token = "0x170006E1")]
	internal Func<char, bool> AcceptCharacter
	{
		[Token(Token = "0x600198C")]
		get;
		[Token(Token = "0x600198D")]
		set;
	}

	[Token(Token = "0x170006E2")]
	internal Action<bool> UpdateScrollOffset
	{
		[Token(Token = "0x600198E")]
		get;
		[Token(Token = "0x600198F")]
		set;
	}

	[Token(Token = "0x170006E3")]
	internal Action UpdateValueFromText
	{
		[Token(Token = "0x6001990")]
		get;
		[Token(Token = "0x6001991")]
		set;
	}

	[Token(Token = "0x170006E4")]
	internal Action UpdateTextFromValue
	{
		[Token(Token = "0x6001992")]
		get;
		[Token(Token = "0x6001993")]
		set;
	}

	[Token(Token = "0x170006E5")]
	internal Action MoveFocusToCompositeRoot
	{
		[Token(Token = "0x6001994")]
		get;
		[Token(Token = "0x6001995")]
		set;
	}

	[Token(Token = "0x170006E6")]
	internal Func<string> GetDefaultValueType
	{
		[Token(Token = "0x6001996")]
		get;
		[Token(Token = "0x6001997")]
		set;
	}

	[Token(Token = "0x170006E7")]
	char maskChar
	{
		[Token(Token = "0x600199A")]
		get;
		[Token(Token = "0x600199B")]
		set;
	}

	[Token(Token = "0x170006E8")]
	bool isPassword
	{
		[Token(Token = "0x600199C")]
		get;
		[Token(Token = "0x600199D")]
		set;
	}

	[Token(Token = "0x170006E9")]
	bool hidePlaceholderOnFocus
	{
		[Token(Token = "0x600199E")]
		get;
		[Token(Token = "0x600199F")]
		set;
	}

	[Token(Token = "0x170006EA")]
	bool autoCorrection
	{
		[Token(Token = "0x60019A0")]
		[Address(RVA = "0x4C37510", Offset = "0x4C37510", VA = "0x4C37510", Slot = "33")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60019A1")]
		[Address(RVA = "0x4C375C0", Offset = "0x4C375C0", VA = "0x4C375C0", Slot = "34")]
		set
		{
		}
	}

	[Token(Token = "0x170006EB")]
	bool hideMobileInput
	{
		[Token(Token = "0x60019A2")]
		[Address(RVA = "0x4C37670", Offset = "0x4C37670", VA = "0x4C37670", Slot = "35")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60019A3")]
		[Address(RVA = "0x4C37720", Offset = "0x4C37720", VA = "0x4C37720", Slot = "36")]
		set
		{
		}
	}

	[Token(Token = "0x170006EC")]
	TouchScreenKeyboardType keyboardType
	{
		[Token(Token = "0x60019A4")]
		[Address(RVA = "0x4C377D0", Offset = "0x4C377D0", VA = "0x4C377D0", Slot = "37")]
		get
		{
			return default(TouchScreenKeyboardType);
		}
		[Token(Token = "0x60019A5")]
		[Address(RVA = "0x4C37880", Offset = "0x4C37880", VA = "0x4C37880", Slot = "38")]
		set
		{
		}
	}

	[Token(Token = "0x6001989")]
	internal void ResetValueAndText();

	[Token(Token = "0x600198A")]
	internal void SaveValueAndText();

	[Token(Token = "0x600198B")]
	internal void RestoreValueAndText();

	[Token(Token = "0x6001998")]
	internal void UpdateText(string value);

	[Token(Token = "0x6001999")]
	internal string CullString(string s);
}
