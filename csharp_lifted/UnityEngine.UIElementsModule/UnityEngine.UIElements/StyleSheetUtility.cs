// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheetUtility
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x6B25970", Offset = "0x6B24970", VA = "0x6B25970")]
	public static StyleSheet CreateInstanceWithHideFlags()
	{
		return null;
	}

	[Token(Token = "0x6002301")]
	[Address(RVA = "0x6B259C0", Offset = "0x6B249C0", VA = "0x6B259C0")]
	public static Dimension ToDimension(this Length length)
	{
		return default(Dimension);
	}

	[Token(Token = "0x6002302")]
	[Address(RVA = "0x6B25AE0", Offset = "0x6B24AE0", VA = "0x6B25AE0")]
	public static Dimension.Unit ToDimensionUnit(this LengthUnit unit)
	{
		return default(Dimension.Unit);
	}

	[Token(Token = "0x6002303")]
	[Address(RVA = "0x6B25B70", Offset = "0x6B24B70", VA = "0x6B25B70")]
	public static Dimension ToDimension(this Angle angle)
	{
		return default(Dimension);
	}

	[Token(Token = "0x6002304")]
	[Address(RVA = "0x6B25CB0", Offset = "0x6B24CB0", VA = "0x6B25CB0")]
	public static Dimension.Unit ToDimensionUnit(this AngleUnit unit)
	{
		return default(Dimension.Unit);
	}

	[Token(Token = "0x6002305")]
	[Address(RVA = "0x6B25D40", Offset = "0x6B24D40", VA = "0x6B25D40")]
	public static Dimension ToDimension(this TimeValue timeValue)
	{
		return default(Dimension);
	}

	[Token(Token = "0x6002306")]
	[Address(RVA = "0x6B25DC0", Offset = "0x6B24DC0", VA = "0x6B25DC0")]
	public static Dimension.Unit ToDimensionUnit(this TimeUnit unit)
	{
		return default(Dimension.Unit);
	}

	[Token(Token = "0x6002307")]
	[Address(RVA = "0x6B25E50", Offset = "0x6B24E50", VA = "0x6B25E50")]
	public static void TransferStylePropertyHandles(StyleSheet fromStyleSheet, StyleProperty fromStyleProperty, StyleSheet toStyleSheet, StyleProperty toStyleProperty)
	{
	}

	[Token(Token = "0x6002308")]
	[Address(RVA = "0x6B26550", Offset = "0x6B25550", VA = "0x6B26550")]
	public static string GetEnumExportString(Enum value)
	{
		return null;
	}

	[Token(Token = "0x6002309")]
	[Address(RVA = "0x6B265C0", Offset = "0x6B255C0", VA = "0x6B265C0")]
	public static string ConvertCamelToDash(string camel)
	{
		return null;
	}

	[Token(Token = "0x600230A")]
	[Address(RVA = "0x6B266D0", Offset = "0x6B256D0", VA = "0x6B266D0")]
	public static string ConvertDashToHungarian(string dash)
	{
		return null;
	}

	[Token(Token = "0x600230B")]
	[Address(RVA = "0x6B26720", Offset = "0x6B25720", VA = "0x6B26720")]
	public static string ConvertDashToUpperNoSpace(string dash, bool firstCase, bool addSpace)
	{
		return null;
	}

	[Token(Token = "0x600230C")]
	[Address(RVA = "0x6B26A70", Offset = "0x6B25A70", VA = "0x6B26A70")]
	public static string GetDimensionUnitExportString(Dimension.Unit unit)
	{
		return null;
	}
}
