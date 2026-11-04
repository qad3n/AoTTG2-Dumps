// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheet
// Update status: CHANGED in this game update
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

[Serializable]
[Token(Token = "0x2000482")]
[HelpURL("UIE-USS")]
public class StyleSheet : ScriptableObject
{
	[Token(Token = "0x2000483")]
	[Flags]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal enum RebuildOptions
	{
		[Token(Token = "0x4000EF3")]
		None = 0,
		[Token(Token = "0x4000EF4")]
		Synchronous = 1
	}

	[Serializable]
	[Token(Token = "0x2000484")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal struct ImportStruct
	{
		[Token(Token = "0x4000EF5")]
		[FieldOffset(Offset = "0x0")]
		public StyleSheet styleSheet;

		[Token(Token = "0x4000EF6")]
		[FieldOffset(Offset = "0x8")]
		public string[] mediaQueries;
	}

	[Token(Token = "0x2000485")]
	internal enum OrderedSelectorType
	{
		[Token(Token = "0x4000EF8")]
		None = -1,
		[Token(Token = "0x4000EF9")]
		Name,
		[Token(Token = "0x4000EFA")]
		Type,
		[Token(Token = "0x4000EFB")]
		Class,
		[Token(Token = "0x4000EFC")]
		Length
	}

	[NonSerialized]
	[Token(Token = "0x4000EE0")]
	[FieldOffset(Offset = "0x18")]
	private bool m_RequiresRebuild;

	[Token(Token = "0x4000EE1")]
	[FieldOffset(Offset = "0x19")]
	[SerializeField]
	private bool m_ImportedWithErrors;

	[Token(Token = "0x4000EE2")]
	[FieldOffset(Offset = "0x1A")]
	[SerializeField]
	private bool m_ImportedWithWarnings;

	[Token(Token = "0x4000EE3")]
	[FieldOffset(Offset = "0x20")]
	[SerializeField]
	private StyleRule[] m_Rules;

	[Token(Token = "0x4000EE4")]
	[FieldOffset(Offset = "0x28")]
	[SerializeField]
	internal float[] floats;

	[Token(Token = "0x4000EE5")]
	[FieldOffset(Offset = "0x30")]
	[SerializeField]
	internal Dimension[] dimensions;

	[Token(Token = "0x4000EE6")]
	[FieldOffset(Offset = "0x38")]
	[SerializeField]
	internal Color[] colors;

	[Token(Token = "0x4000EE7")]
	[FieldOffset(Offset = "0x40")]
	[SerializeField]
	internal string[] strings;

	[Token(Token = "0x4000EE8")]
	[FieldOffset(Offset = "0x48")]
	[SerializeField]
	internal Object[] assets;

	[Token(Token = "0x4000EE9")]
	[FieldOffset(Offset = "0x50")]
	[SerializeField]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal ImportStruct[] imports;

	[Token(Token = "0x4000EEA")]
	[FieldOffset(Offset = "0x58")]
	[SerializeField]
	private List<StyleSheet> m_FlattenedImportedStyleSheets;

	[Token(Token = "0x4000EEB")]
	[FieldOffset(Offset = "0x60")]
	[SerializeField]
	private int m_ContentHash;

	[Token(Token = "0x4000EEC")]
	[FieldOffset(Offset = "0x68")]
	[SerializeField]
	internal ScalableImage[] scalableImages;

	[NonSerialized]
	[Token(Token = "0x4000EED")]
	[FieldOffset(Offset = "0x70")]
	internal Dictionary<string, StyleComplexSelector>[] m_Tables;

	[NonSerialized]
	[Token(Token = "0x4000EEE")]
	[FieldOffset(Offset = "0x78")]
	internal int nonEmptyTablesMask;

	[NonSerialized]
	[Token(Token = "0x4000EEF")]
	[FieldOffset(Offset = "0x80")]
	internal StyleComplexSelector firstRootSelector;

	[NonSerialized]
	[Token(Token = "0x4000EF0")]
	[FieldOffset(Offset = "0x88")]
	internal StyleComplexSelector firstWildCardSelector;

	[NonSerialized]
	[Token(Token = "0x4000EF1")]
	[FieldOffset(Offset = "0x90")]
	private bool m_IsDefaultStyleSheet;

	[Token(Token = "0x1700092E")]
	public bool importedWithErrors
	{
		[Token(Token = "0x60022A4")]
		[Address(RVA = "0x2E85210", Offset = "0x2E83810", VA = "0x182E85210")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60022A5")]
		[Address(RVA = "0x18C3360", Offset = "0x18C1960", VA = "0x1818C3360")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700092F")]
	public bool importedWithWarnings
	{
		[Token(Token = "0x60022A6")]
		[Address(RVA = "0x2E85220", Offset = "0x2E83820", VA = "0x182E85220")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60022A7")]
		[Address(RVA = "0x1CB9D80", Offset = "0x1CB8380", VA = "0x181CB9D80")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000930")]
	internal StyleRule[] rules
	{
		[Token(Token = "0x60022A8")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000931")]
	internal List<StyleSheet> flattenedRecursiveImports
	{
		[Token(Token = "0x60022A9")]
		[Address(RVA = "0x58A570", Offset = "0x588B70", VA = "0x18058A570")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000932")]
	public int contentHash
	{
		[Token(Token = "0x60022AA")]
		[Address(RVA = "0x30E5ED0", Offset = "0x30E44D0", VA = "0x1830E5ED0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60022AB")]
		[Address(RVA = "0x1B6A390", Offset = "0x1B68990", VA = "0x181B6A390")]
		set
		{
		}
	}

	[Token(Token = "0x17000933")]
	internal Dictionary<string, StyleComplexSelector>[] tables
	{
		[Token(Token = "0x60022AC")]
		[Address(RVA = "0x311B820", Offset = "0x3119E20", VA = "0x18311B820")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000934")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool isDefaultStyleSheet
	{
		[Token(Token = "0x60022AD")]
		[Address(RVA = "0x311B810", Offset = "0x3119E10", VA = "0x18311B810")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60022AE")]
		[Address(RVA = "0x311BAF0", Offset = "0x311A0F0", VA = "0x18311BAF0")]
		set
		{
		}
	}

	[Token(Token = "0x60022AF")]
	private bool TryCheckAccess<T>(T[] list, StyleValueType type, StyleValueHandle handle, out T value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022B0")]
	private T CheckAccess<T>(T[] list, StyleValueType type, StyleValueHandle handle)
	{
		return (T)null;
	}

	[Token(Token = "0x60022B1")]
	[Address(RVA = "0x3118DF0", Offset = "0x31173F0", VA = "0x183118DF0", Slot = "4")]
	internal virtual void OnEnable()
	{
	}

	[Token(Token = "0x60022B2")]
	[Address(RVA = "0x3118CF0", Offset = "0x31172F0", VA = "0x183118CF0")]
	internal void FlattenImportedStyleSheetsRecursive()
	{
	}

	[Token(Token = "0x60022B3")]
	[Address(RVA = "0x3118BD0", Offset = "0x31171D0", VA = "0x183118BD0")]
	private void FlattenImportedStyleSheetsRecursive(StyleSheet sheet)
	{
	}

	[Token(Token = "0x60022B4")]
	[Address(RVA = "0x3118910", Offset = "0x3116F10", VA = "0x183118910")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal StyleRule AddRule()
	{
		return null;
	}

	[Token(Token = "0x60022B5")]
	[Address(RVA = "0x3118900", Offset = "0x3116F00", VA = "0x183118900")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal StyleRule AddRuleAtIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x60022B6")]
	[Address(RVA = "0x3118920", Offset = "0x3116F20", VA = "0x183118920")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal StyleRule AddRule(string selector)
	{
		return null;
	}

	[Token(Token = "0x60022B7")]
	[Address(RVA = "0x3118630", Offset = "0x3116C30", VA = "0x183118630")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal StyleRule AddRuleAtIndex(int index, string selector)
	{
		return null;
	}

	[Token(Token = "0x60022B8")]
	[Address(RVA = "0x31197E0", Offset = "0x3117DE0", VA = "0x1831197E0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool RemoveRule(StyleRule rule)
	{
		return default(bool);
	}

	[Token(Token = "0x60022B9")]
	[Address(RVA = "0x31196E0", Offset = "0x3117CE0", VA = "0x1831196E0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void RemoveRule(int ruleIndex)
	{
	}

	[Token(Token = "0x60022BA")]
	[Address(RVA = "0x3119980", Offset = "0x3117F80", VA = "0x183119980")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void SetRules(StyleRule[] newRules)
	{
	}

	[Token(Token = "0x60022BB")]
	[Address(RVA = "0x3119940", Offset = "0x3117F40", VA = "0x183119940")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void RequestRebuild(RebuildOptions options = RebuildOptions.None)
	{
	}

	[Token(Token = "0x60022BC")]
	[Address(RVA = "0x31196D0", Offset = "0x3117CD0", VA = "0x1831196D0")]
	internal void RebuildIfNecessary()
	{
	}

	[Token(Token = "0x60022BD")]
	[Address(RVA = "0x31199B0", Offset = "0x3117FB0", VA = "0x1831199B0")]
	internal void SetupReferences()
	{
	}

	[Token(Token = "0x60022BE")]
	private int AddValueToArray<T>(ref T[] array, T value)
	{
		return default(int);
	}

	[Token(Token = "0x60022BF")]
	private int InsertValueInArray<T>(ref T[] array, int index, T value)
	{
		return default(int);
	}

	[Token(Token = "0x60022C0")]
	[Address(RVA = "0x3118A00", Offset = "0x3117000", VA = "0x183118A00")]
	internal int AddValue(StyleValueKeyword keyword)
	{
		return default(int);
	}

	[Token(Token = "0x60022C1")]
	[Address(RVA = "0x3118A00", Offset = "0x3117000", VA = "0x183118A00")]
	internal int AddValue(StyleValueFunction function)
	{
		return default(int);
	}

	[Token(Token = "0x60022C2")]
	[Address(RVA = "0x3118A20", Offset = "0x3117020", VA = "0x183118A20")]
	internal int AddValue(float value)
	{
		return default(int);
	}

	[Token(Token = "0x60022C3")]
	[Address(RVA = "0x3118B80", Offset = "0x3117180", VA = "0x183118B80")]
	internal int AddValue(Dimension value)
	{
		return default(int);
	}

	[Token(Token = "0x60022C4")]
	[Address(RVA = "0x3118A70", Offset = "0x3117070", VA = "0x183118A70")]
	internal int AddValue(Color value)
	{
		return default(int);
	}

	[Token(Token = "0x60022C5")]
	[Address(RVA = "0x3118B20", Offset = "0x3117120", VA = "0x183118B20")]
	internal int AddValue(ScalableImage value)
	{
		return default(int);
	}

	[Token(Token = "0x60022C6")]
	[Address(RVA = "0x3118AD0", Offset = "0x31170D0", VA = "0x183118AD0")]
	internal int AddValue(string value)
	{
		return default(int);
	}

	[Token(Token = "0x60022C7")]
	[Address(RVA = "0x3118930", Offset = "0x3116F30", VA = "0x183118930")]
	internal int AddValue(Object value)
	{
		return default(int);
	}

	[Token(Token = "0x60022C8")]
	[Address(RVA = "0x3118980", Offset = "0x3116F80", VA = "0x183118980")]
	internal int AddValue(Enum value)
	{
		return default(int);
	}

	[Token(Token = "0x60022C9")]
	[Address(RVA = "0x3119330", Offset = "0x3117930", VA = "0x183119330")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal StyleValueKeyword ReadKeyword(StyleValueHandle handle)
	{
		return default(StyleValueKeyword);
	}

	[Token(Token = "0x60022CA")]
	[Address(RVA = "0x311A480", Offset = "0x3118A80", VA = "0x18311A480")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool TryReadKeyword(StyleValueHandle handle, out StyleValueKeyword value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022CB")]
	[Address(RVA = "0x3119160", Offset = "0x3117760", VA = "0x183119160")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal float ReadFloat(StyleValueHandle handle)
	{
		return default(float);
	}

	[Token(Token = "0x60022CC")]
	[Address(RVA = "0x311A380", Offset = "0x3118980", VA = "0x18311A380")]
	internal bool TryReadFloat(StyleValueHandle handle, out float value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022CD")]
	[Address(RVA = "0x3119040", Offset = "0x3117640", VA = "0x183119040")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal Dimension ReadDimension(StyleValueHandle handle)
	{
		return default(Dimension);
	}

	[Token(Token = "0x60022CE")]
	[Address(RVA = "0x311A220", Offset = "0x3118820", VA = "0x18311A220")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool TryReadDimension(StyleValueHandle handle, out Dimension value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022CF")]
	[Address(RVA = "0x3118F10", Offset = "0x3117510", VA = "0x183118F10")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal Color ReadColor(StyleValueHandle handle)
	{
		return default(Color);
	}

	[Token(Token = "0x60022D0")]
	[Address(RVA = "0x311A0F0", Offset = "0x31186F0", VA = "0x18311A0F0")]
	internal bool TryReadColor(StyleValueHandle handle, out Color value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022D1")]
	[Address(RVA = "0x3119530", Offset = "0x3117B30", VA = "0x183119530")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal string ReadString(StyleValueHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60022D2")]
	[Address(RVA = "0x311A700", Offset = "0x3118D00", VA = "0x18311A700")]
	internal bool TryReadString(StyleValueHandle handle, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022D3")]
	[Address(RVA = "0x3119100", Offset = "0x3117700", VA = "0x183119100")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal string ReadEnum(StyleValueHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60022D4")]
	[Address(RVA = "0x311A310", Offset = "0x3118910", VA = "0x18311A310")]
	internal bool TryReadEnum(StyleValueHandle handle, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022D5")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal TEnum ReadEnum<TEnum>(StyleValueHandle handle) where TEnum : struct, Enum
	{
		return (TEnum)null;
	}

	[Token(Token = "0x60022D6")]
	internal bool TryReadEnum<TEnum>(StyleValueHandle handle, out TEnum value) where TEnum : struct, Enum
	{
		return default(bool);
	}

	[Token(Token = "0x60022D7")]
	[Address(RVA = "0x3119670", Offset = "0x3117C70", VA = "0x183119670")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal string ReadVariable(StyleValueHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60022D8")]
	[Address(RVA = "0x311A890", Offset = "0x3118E90", VA = "0x18311A890")]
	internal bool TryReadVariable(StyleValueHandle handle, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022D9")]
	[Address(RVA = "0x3119450", Offset = "0x3117A50", VA = "0x183119450")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal string ReadResourcePath(StyleValueHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60022DA")]
	[Address(RVA = "0x311A620", Offset = "0x3118C20", VA = "0x18311A620")]
	internal bool TryReadResourcePath(StyleValueHandle handle, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022DB")]
	[Address(RVA = "0x3118EB0", Offset = "0x31174B0", VA = "0x183118EB0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal Object ReadAssetReference(StyleValueHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60022DC")]
	[Address(RVA = "0x31193F0", Offset = "0x31179F0", VA = "0x1831193F0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal string ReadMissingAssetReferenceUrl(StyleValueHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60022DD")]
	[Address(RVA = "0x311A5B0", Offset = "0x3118BB0", VA = "0x18311A5B0")]
	internal bool TryReadMissingAssetReferenceUrl(StyleValueHandle handle, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022DE")]
	[Address(RVA = "0x311A080", Offset = "0x3118680", VA = "0x18311A080")]
	internal bool TryReadAssetReference(StyleValueHandle handle, out Object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022DF")]
	[Address(RVA = "0x3119330", Offset = "0x3117930", VA = "0x183119330")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal StyleValueFunction ReadFunction(StyleValueHandle handle)
	{
		return default(StyleValueFunction);
	}

	[Token(Token = "0x60022E0")]
	[Address(RVA = "0x311A450", Offset = "0x3118A50", VA = "0x18311A450")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool TryReadFunction(StyleValueHandle handle, out StyleValueFunction value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022E1")]
	[Address(RVA = "0x3119200", Offset = "0x3117800", VA = "0x183119200")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal string ReadFunctionName(StyleValueHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60022E2")]
	[Address(RVA = "0x31194B0", Offset = "0x3117AB0", VA = "0x1831194B0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal ScalableImage ReadScalableImage(StyleValueHandle handle)
	{
		return default(ScalableImage);
	}

	[Token(Token = "0x60022E3")]
	[Address(RVA = "0x311A690", Offset = "0x3118C90", VA = "0x18311A690")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool TryReadScalableImage(StyleValueHandle handle, out ScalableImage value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022E4")]
	[Address(RVA = "0x3119590", Offset = "0x3117B90", VA = "0x183119590")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal StylePropertyName ReadStylePropertyName(StyleValueHandle handle)
	{
		return default(StylePropertyName);
	}

	[Token(Token = "0x60022E5")]
	[Address(RVA = "0x311A770", Offset = "0x3118D70", VA = "0x18311A770")]
	internal bool TryReadStylePropertyName(StyleValueHandle handle, out StylePropertyName value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022E6")]
	[Address(RVA = "0x3119340", Offset = "0x3117940", VA = "0x183119340")]
	internal Length ReadLength(StyleValueHandle handle)
	{
		return default(Length);
	}

	[Token(Token = "0x60022E7")]
	[Address(RVA = "0x311A4B0", Offset = "0x3118AB0", VA = "0x18311A4B0")]
	internal bool TryReadLength(StyleValueHandle handle, out Length value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022E8")]
	[Address(RVA = "0x3118E00", Offset = "0x3117400", VA = "0x183118E00")]
	internal Angle ReadAngle(StyleValueHandle handle)
	{
		return default(Angle);
	}

	[Token(Token = "0x60022E9")]
	[Address(RVA = "0x3119F90", Offset = "0x3118590", VA = "0x183119F90")]
	internal bool TryReadAngle(StyleValueHandle handle, out Angle value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022EA")]
	[Address(RVA = "0x3119620", Offset = "0x3117C20", VA = "0x183119620")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal TimeValue ReadTimeValue(StyleValueHandle handle)
	{
		return default(TimeValue);
	}

	[Token(Token = "0x60022EB")]
	[Address(RVA = "0x311A830", Offset = "0x3118E30", VA = "0x18311A830")]
	internal bool TryReadTimeValue(StyleValueHandle handle, out TimeValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022EC")]
	[Address(RVA = "0x311AE40", Offset = "0x3119440", VA = "0x18311AE40")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteKeyword(ref StyleValueHandle handle, StyleValueKeyword value)
	{
	}

	[Token(Token = "0x60022ED")]
	[Address(RVA = "0x311AD30", Offset = "0x3119330", VA = "0x18311AD30")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteFloat(ref StyleValueHandle handle, float value)
	{
	}

	[Token(Token = "0x60022EE")]
	[Address(RVA = "0x311ABC0", Offset = "0x31191C0", VA = "0x18311ABC0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteDimension(ref StyleValueHandle handle, Dimension dimension)
	{
	}

	[Token(Token = "0x60022EF")]
	[Address(RVA = "0x311AAC0", Offset = "0x31190C0", VA = "0x18311AAC0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteColor(ref StyleValueHandle handle, Color color)
	{
	}

	[Token(Token = "0x60022F0")]
	[Address(RVA = "0x311B1C0", Offset = "0x31197C0", VA = "0x18311B1C0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteString(ref StyleValueHandle handle, string value)
	{
	}

	[Token(Token = "0x60022F1")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteEnum<TEnum>(ref StyleValueHandle handle, TEnum value) where TEnum : Enum
	{
	}

	[Token(Token = "0x60022F2")]
	[Address(RVA = "0x311AC70", Offset = "0x3119270", VA = "0x18311AC70")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteEnumAsString(ref StyleValueHandle handle, string valueStr)
	{
	}

	[Token(Token = "0x60022F3")]
	[Address(RVA = "0x311B3F0", Offset = "0x31199F0", VA = "0x18311B3F0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteVariable(ref StyleValueHandle handle, string variableName)
	{
	}

	[Token(Token = "0x60022F4")]
	[Address(RVA = "0x311B020", Offset = "0x3119620", VA = "0x18311B020")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteResourcePath(ref StyleValueHandle handle, string resourcePath)
	{
	}

	[Token(Token = "0x60022F5")]
	[Address(RVA = "0x311A9E0", Offset = "0x3118FE0", VA = "0x18311A9E0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteAssetReference(ref StyleValueHandle handle, Object value)
	{
	}

	[Token(Token = "0x60022F6")]
	[Address(RVA = "0x311AF60", Offset = "0x3119560", VA = "0x18311AF60")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteMissingAssetReferenceUrl(ref StyleValueHandle handle, string assetReference)
	{
	}

	[Token(Token = "0x60022F7")]
	[Address(RVA = "0x311ADF0", Offset = "0x31193F0", VA = "0x18311ADF0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteFunction(ref StyleValueHandle handle, StyleValueFunction function)
	{
	}

	[Token(Token = "0x60022F8")]
	[Address(RVA = "0x311B0E0", Offset = "0x31196E0", VA = "0x18311B0E0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteScalableImage(ref StyleValueHandle handle, ScalableImage scalableImage)
	{
	}

	[Token(Token = "0x60022F9")]
	[Address(RVA = "0x311B280", Offset = "0x3119880", VA = "0x18311B280")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteStylePropertyName(ref StyleValueHandle handle, StylePropertyName propertyName)
	{
	}

	[Token(Token = "0x60022FA")]
	[Address(RVA = "0x311AB80", Offset = "0x3119180", VA = "0x18311AB80")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteCommaSeparator(ref StyleValueHandle handle)
	{
	}

	[Token(Token = "0x60022FB")]
	[Address(RVA = "0x311AE90", Offset = "0x3119490", VA = "0x18311AE90")]
	internal void WriteLength(ref StyleValueHandle handle, Length value)
	{
	}

	[Token(Token = "0x60022FC")]
	[Address(RVA = "0x311A900", Offset = "0x3118F00", VA = "0x18311A900")]
	internal void WriteAngle(ref StyleValueHandle handle, Angle value)
	{
	}

	[Token(Token = "0x60022FD")]
	[Address(RVA = "0x311B370", Offset = "0x3119970", VA = "0x18311B370")]
	internal void WriteTimeValue(ref StyleValueHandle handle, TimeValue value)
	{
	}

	[Token(Token = "0x60022FE")]
	[Address(RVA = "0x3118D70", Offset = "0x3117370", VA = "0x183118D70")]
	private void MarkAsChanged()
	{
	}

	[Token(Token = "0x60022FF")]
	[Address(RVA = "0x311B4B0", Offset = "0x3119AB0", VA = "0x18311B4B0")]
	public StyleSheet()
	{
	}
}
