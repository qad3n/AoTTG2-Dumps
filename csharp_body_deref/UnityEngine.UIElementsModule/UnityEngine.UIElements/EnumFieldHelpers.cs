using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000089")]
internal static class EnumFieldHelpers
{
	[Token(Token = "0x4000223")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly UxmlTypeAttributeDescription<Enum> type;

	[Token(Token = "0x4000224")]
	[FieldOffset(Offset = "0x8")]
	internal static readonly UxmlStringAttributeDescription value;

	[Token(Token = "0x4000225")]
	[FieldOffset(Offset = "0x10")]
	internal static readonly UxmlBoolAttributeDescription includeObsoleteValues;

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x4C10D80", Offset = "0x4C10D80", VA = "0x4C10D80")]
	internal static bool ExtractValue(IUxmlAttributes bag, CreationContext cc, out Type resEnumType, out Enum resEnumValue, out bool resIncludeObsoleteValues)
	{
		return default(bool);
	}
}
