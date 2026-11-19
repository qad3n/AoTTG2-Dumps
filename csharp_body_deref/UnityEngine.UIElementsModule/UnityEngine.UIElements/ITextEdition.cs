// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ITextEdition
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements;

[Token(Token = "0x20004B7")]
public interface ITextEdition
{
	[Token(Token = "0x170009A3")]
	internal bool multiline
	{
		[Token(Token = "0x60024D3")]
		get;
		[Token(Token = "0x60024D4")]
		set;
	}

	[Token(Token = "0x170009A4")]
	bool isReadOnly
	{
		[Token(Token = "0x60024D5")]
		get;
		[Token(Token = "0x60024D6")]
		set;
	}

	[Token(Token = "0x170009A5")]
	int maxLength
	{
		[Token(Token = "0x60024D7")]
		get;
		[Token(Token = "0x60024D8")]
		set;
	}

	[Token(Token = "0x170009A6")]
	string placeholder
	{
		[Token(Token = "0x60024D9")]
		get;
		[Token(Token = "0x60024DA")]
		set;
	}

	[Token(Token = "0x170009A7")]
	bool isDelayed
	{
		[Token(Token = "0x60024DB")]
		get;
		[Token(Token = "0x60024DC")]
		set;
	}

	[Token(Token = "0x170009A8")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal Func<char, bool> AcceptCharacter
	{
		[Token(Token = "0x60024DF")]
		get;
		[Token(Token = "0x60024E0")]
		set;
	}

	[Token(Token = "0x170009A9")]
	internal Action<bool> UpdateScrollOffset
	{
		[Token(Token = "0x60024E1")]
		get;
		[Token(Token = "0x60024E2")]
		set;
	}

	[Token(Token = "0x170009AA")]
	internal Action UpdateValueFromText
	{
		[Token(Token = "0x60024E3")]
		get;
		[Token(Token = "0x60024E4")]
		set;
	}

	[Token(Token = "0x170009AB")]
	internal Action UpdateTextFromValue
	{
		[Token(Token = "0x60024E5")]
		get;
		[Token(Token = "0x60024E6")]
		set;
	}

	[Token(Token = "0x170009AC")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal Action MoveFocusToCompositeRoot
	{
		[Token(Token = "0x60024E7")]
		get;
		[Token(Token = "0x60024E8")]
		set;
	}

	[Token(Token = "0x170009AD")]
	internal Func<string> GetDefaultValueType
	{
		[Token(Token = "0x60024E9")]
		get;
		[Token(Token = "0x60024EA")]
		set;
	}

	[Token(Token = "0x170009AE")]
	char maskChar
	{
		[Token(Token = "0x60024ED")]
		get;
		[Token(Token = "0x60024EE")]
		set;
	}

	[Token(Token = "0x170009AF")]
	bool isPassword
	{
		[Token(Token = "0x60024EF")]
		get;
		[Token(Token = "0x60024F0")]
		set;
	}

	[Token(Token = "0x170009B0")]
	bool hidePlaceholderOnFocus
	{
		[Token(Token = "0x60024F1")]
		get;
		[Token(Token = "0x60024F2")]
		set;
	}

	[Token(Token = "0x170009B1")]
	bool autoCorrection
	{
		[Token(Token = "0x60024F3")]
		[Address(RVA = "0x6B46C00", Offset = "0x6B45C00", VA = "0x6B46C00", Slot = "32")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60024F4")]
		[Address(RVA = "0x6B46CB0", Offset = "0x6B45CB0", VA = "0x6B46CB0", Slot = "33")]
		set
		{
		}
	}

	[Token(Token = "0x170009B2")]
	bool hideSoftKeyboard
	{
		[Token(Token = "0x60024F5")]
		[Address(RVA = "0x6B46D60", Offset = "0x6B45D60", VA = "0x6B46D60", Slot = "34")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60024F6")]
		[Address(RVA = "0x6B46E10", Offset = "0x6B45E10", VA = "0x6B46E10", Slot = "35")]
		set
		{
		}
	}

	[Token(Token = "0x170009B3")]
	bool hideMobileInput
	{
		[Token(Token = "0x60024F7")]
		[Address(RVA = "0x6B46EC0", Offset = "0x6B45EC0", VA = "0x6B46EC0", Slot = "36")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60024F8")]
		[Address(RVA = "0x6B46F70", Offset = "0x6B45F70", VA = "0x6B46F70", Slot = "37")]
		set
		{
		}
	}

	[Token(Token = "0x170009B4")]
	TouchScreenKeyboard touchScreenKeyboard
	{
		[Token(Token = "0x60024F9")]
		[Address(RVA = "0x6B47020", Offset = "0x6B46020", VA = "0x6B47020", Slot = "38")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170009B5")]
	TouchScreenKeyboardType keyboardType
	{
		[Token(Token = "0x60024FA")]
		[Address(RVA = "0x6B470D0", Offset = "0x6B460D0", VA = "0x6B470D0", Slot = "39")]
		get
		{
			return default(TouchScreenKeyboardType);
		}
		[Token(Token = "0x60024FB")]
		[Address(RVA = "0x6B47180", Offset = "0x6B46180", VA = "0x6B47180", Slot = "40")]
		set
		{
		}
	}

	[Token(Token = "0x60024DD")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void SaveValueAndText();

	[Token(Token = "0x60024DE")]
	internal void RestoreValueAndText();

	[Token(Token = "0x60024EB")]
	internal void UpdateText(string value);

	[Token(Token = "0x60024EC")]
	internal string CullString(string s);
}
