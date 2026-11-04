// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheetUtility
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000486")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal static class StyleSheetUtility
{
	[Token(Token = "0x4000EFD")]
	[FieldOffset(Offset = "0x0")]
	private static readonly Dictionary<string, string> SpecialEnumToStringCases;

	[Token(Token = "0x4000EFE")]
	[FieldOffset(Offset = "0x8")]
	private static readonly Dictionary<string, string> SpecialStringToEnumCases;

	[Token(Token = "0x6002300")]
	[Address(RVA = "0x312B6E0", Offset = "0x3129CE0", VA = "0x18312B6E0")]
	public static StyleSheet CreateInstanceWithHideFlags()
	{
		return null;
	}

	[Token(Token = "0x6002301")]
	[Address(RVA = "0x312BD80", Offset = "0x312A380", VA = "0x18312BD80")]
	public static Dimension ToDimension(this Length length)
	{
		return default(Dimension);
	}

	[Token(Token = "0x6002302")]
	[Address(RVA = "0x312BBD0", Offset = "0x312A1D0", VA = "0x18312BBD0")]
	public static Dimension.Unit ToDimensionUnit(this LengthUnit unit)
	{
		return default(Dimension.Unit);
	}

	[Token(Token = "0x6002303")]
	[Address(RVA = "0x312BF40", Offset = "0x312A540", VA = "0x18312BF40")]
	public static Dimension ToDimension(this Angle angle)
	{
		return default(Dimension);
	}

	[Token(Token = "0x6002304")]
	[Address(RVA = "0x312BB00", Offset = "0x312A100", VA = "0x18312BB00")]
	public static Dimension.Unit ToDimensionUnit(this AngleUnit unit)
	{
		return default(Dimension.Unit);
	}

	[Token(Token = "0x6002305")]
	[Address(RVA = "0x312BC80", Offset = "0x312A280", VA = "0x18312BC80")]
	public static Dimension ToDimension(this TimeValue timeValue)
	{
		return default(Dimension);
	}

	[Token(Token = "0x6002306")]
	[Address(RVA = "0x312BA50", Offset = "0x312A050", VA = "0x18312BA50")]
	public static Dimension.Unit ToDimensionUnit(this TimeUnit unit)
	{
		return default(Dimension.Unit);
	}

	[Token(Token = "0x6002307")]
	[Address(RVA = "0x312C140", Offset = "0x312A740", VA = "0x18312C140")]
	public static void TransferStylePropertyHandles(StyleSheet fromStyleSheet, StyleProperty fromStyleProperty, StyleSheet toStyleSheet, StyleProperty toStyleProperty)
	{
	}

	[Token(Token = "0x6002308")]
	[Address(RVA = "0x312B900", Offset = "0x3129F00", VA = "0x18312B900")]
	public static string GetEnumExportString(Enum value)
	{
		return null;
	}

	[Token(Token = "0x6002309")]
	[Address(RVA = "0x312B280", Offset = "0x3129880", VA = "0x18312B280")]
	public static string ConvertCamelToDash(string camel)
	{
		return null;
	}

	[Token(Token = "0x600230A")]
	[Address(RVA = "0x312B380", Offset = "0x3129980", VA = "0x18312B380")]
	public static string ConvertDashToHungarian(string dash)
	{
		return null;
	}

	[Token(Token = "0x600230B")]
	[Address(RVA = "0x312B3D0", Offset = "0x31299D0", VA = "0x18312B3D0")]
	public static string ConvertDashToUpperNoSpace(string dash, bool firstCase, bool addSpace)
	{
		return null;
	}

	[Token(Token = "0x600230C")]
	[Address(RVA = "0x312B740", Offset = "0x3129D40", VA = "0x18312B740")]
	public static string GetDimensionUnitExportString(Dimension.Unit unit)
	{
		return null;
	}
}
