// ==================== AoTTG2 cross-reference ====================
// Type: UI.BaseSettingElement
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/UI/BaseSettingElement.c
// Prior real C# source (older reference): Assets/Scripts/UI/Elements/SettingElements/BaseSettingElement.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x2000741")]
internal abstract class BaseSettingElement : MonoBehaviour
{
	[Token(Token = "0x400240A")]
	[FieldOffset(Offset = "0x20")]
	protected BaseSetting _setting;

	[Token(Token = "0x400240B")]
	[FieldOffset(Offset = "0x28")]
	protected SettingType _settingType;

	[Token(Token = "0x400240C")]
	[FieldOffset(Offset = "0x30")]
	protected ElementStyle _style;

	[Token(Token = "0x17000CC0")]
	protected virtual HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x60046F0")]
		[Address(RVA = "0x2201F40", Offset = "0x2200540", VA = "0x182201F40", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60046F1")]
	[Address(RVA = "0x2201E10", Offset = "0x2200410", VA = "0x182201E10", Slot = "5")]
	public virtual void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip)
	{
	}

	[Token(Token = "0x60046F2")]
	[Address(RVA = "0x2201D10", Offset = "0x2200310", VA = "0x182201D10")]
	protected void SetupTooltip(string tooltip, ElementStyle style)
	{
	}

	[Token(Token = "0x60046F3")]
	public abstract void SyncElement();

	[Token(Token = "0x60046F4")]
	[Address(RVA = "0x2201960", Offset = "0x21FFF60", VA = "0x182201960")]
	protected SettingType GetSettingType(BaseSetting setting)
	{
		return default(SettingType);
	}

	[Token(Token = "0x60046F5")]
	[Address(RVA = "0x2201A70", Offset = "0x2200070", VA = "0x182201A70")]
	protected void SetupTitle(string title, int fontSize, float titleWidth)
	{
	}

	[Token(Token = "0x60046F6")]
	[Address(RVA = "0x22019E0", Offset = "0x21FFFE0", VA = "0x1822019E0")]
	protected void SetupLabel(GameObject obj, string title, int fontSize)
	{
	}

	[Token(Token = "0x60046F7")]
	[Address(RVA = "0x2201970", Offset = "0x21FFF70", VA = "0x182201970")]
	protected void SetupLabel(GameObject obj, string title)
	{
	}

	[Token(Token = "0x60046F8")]
	[Address(RVA = "0x528540", Offset = "0x526B40", VA = "0x180528540")]
	protected BaseSettingElement()
	{
	}
}
