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

[Token(Token = "0x20007E9")]
internal abstract class BaseSettingElement : MonoBehaviour
{
	[Token(Token = "0x400277A")]
	[FieldOffset(Offset = "0x20")]
	protected BaseSetting _setting;

	[Token(Token = "0x400277B")]
	[FieldOffset(Offset = "0x28")]
	protected SettingType _settingType;

	[Token(Token = "0x400277C")]
	[FieldOffset(Offset = "0x30")]
	protected ElementStyle _style;

	[Token(Token = "0x17000D43")]
	protected virtual HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6004C10")]
		[Address(RVA = "0x5BED130", Offset = "0x5BEC130", VA = "0x5BED130", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6004C11")]
	[Address(RVA = "0x5BED190", Offset = "0x5BEC190", VA = "0x5BED190", Slot = "5")]
	public virtual void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip)
	{
	}

	[Token(Token = "0x6004C12")]
	[Address(RVA = "0x5BED550", Offset = "0x5BEC550", VA = "0x5BED550")]
	protected void SetupTooltip(string tooltip, ElementStyle style)
	{
	}

	[Token(Token = "0x6004C13")]
	public abstract void SyncElement();

	[Token(Token = "0x6004C14")]
	[Address(RVA = "0x5BED2C0", Offset = "0x5BEC2C0", VA = "0x5BED2C0")]
	protected SettingType GetSettingType(BaseSetting setting)
	{
		return default(SettingType);
	}

	[Token(Token = "0x6004C15")]
	[Address(RVA = "0x5BED2D0", Offset = "0x5BEC2D0", VA = "0x5BED2D0")]
	protected void SetupTitle(string title, int fontSize, float titleWidth)
	{
	}

	[Token(Token = "0x6004C16")]
	[Address(RVA = "0x5BED650", Offset = "0x5BEC650", VA = "0x5BED650")]
	protected void SetupLabel(GameObject obj, string title, int fontSize)
	{
	}

	[Token(Token = "0x6004C17")]
	[Address(RVA = "0x5BED6D0", Offset = "0x5BEC6D0", VA = "0x5BED6D0")]
	protected void SetupLabel(GameObject obj, string title)
	{
	}

	[Token(Token = "0x6004C18")]
	[Address(RVA = "0x5BED740", Offset = "0x5BEC740", VA = "0x5BED740")]
	protected BaseSettingElement()
	{
	}
}
