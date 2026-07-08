using System.Collections.Generic;
using Il2CppDummyDll;
using Settings;
using UnityEngine;

namespace UI;

[Token(Token = "0x20005A6")]
internal abstract class BaseSettingElement : MonoBehaviour
{
	[Token(Token = "0x4001B69")]
	[FieldOffset(Offset = "0x20")]
	protected BaseSetting _setting;

	[Token(Token = "0x4001B6A")]
	[FieldOffset(Offset = "0x28")]
	protected SettingType _settingType;

	[Token(Token = "0x4001B6B")]
	[FieldOffset(Offset = "0x30")]
	protected ElementStyle _style;

	[Token(Token = "0x17000B11")]
	protected virtual HashSet<SettingType> SupportedSettingTypes
	{
		[Token(Token = "0x6003A28")]
		[Address(RVA = "0x3F80910", Offset = "0x3F80910", VA = "0x3F80910", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6003A29")]
	[Address(RVA = "0x3F80970", Offset = "0x3F80970", VA = "0x3F80970", Slot = "5")]
	public virtual void Setup(BaseSetting setting, ElementStyle style, string title, string tooltip)
	{
	}

	[Token(Token = "0x6003A2A")]
	[Address(RVA = "0x3F80D30", Offset = "0x3F80D30", VA = "0x3F80D30")]
	protected void SetupTooltip(string tooltip, ElementStyle style)
	{
	}

	[Token(Token = "0x6003A2B")]
	public abstract void SyncElement();

	[Token(Token = "0x6003A2C")]
	[Address(RVA = "0x3F80AA0", Offset = "0x3F80AA0", VA = "0x3F80AA0")]
	protected SettingType GetSettingType(BaseSetting setting)
	{
		return default(SettingType);
	}

	[Token(Token = "0x6003A2D")]
	[Address(RVA = "0x3F80AB0", Offset = "0x3F80AB0", VA = "0x3F80AB0")]
	protected void SetupTitle(string title, int fontSize, float titleWidth)
	{
	}

	[Token(Token = "0x6003A2E")]
	[Address(RVA = "0x3F80E20", Offset = "0x3F80E20", VA = "0x3F80E20")]
	protected void SetupLabel(GameObject obj, string title, int fontSize)
	{
	}

	[Token(Token = "0x6003A2F")]
	[Address(RVA = "0x3F80EA0", Offset = "0x3F80EA0", VA = "0x3F80EA0")]
	protected void SetupLabel(GameObject obj, string title)
	{
	}

	[Token(Token = "0x6003A30")]
	[Address(RVA = "0x3F80F10", Offset = "0x3F80F10", VA = "0x3F80F10")]
	protected BaseSettingElement()
	{
	}
}
