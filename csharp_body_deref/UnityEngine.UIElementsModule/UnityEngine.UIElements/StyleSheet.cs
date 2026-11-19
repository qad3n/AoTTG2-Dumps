// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheet
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
		[Address(RVA = "0x6B22020", Offset = "0x6B21020", VA = "0x6B22020")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60022A5")]
		[Address(RVA = "0x6B22030", Offset = "0x6B21030", VA = "0x6B22030")]
		internal set
		{
		}
	}

	[Token(Token = "0x1700092F")]
	public bool importedWithWarnings
	{
		[Token(Token = "0x60022A6")]
		[Address(RVA = "0x6B22040", Offset = "0x6B21040", VA = "0x6B22040")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60022A7")]
		[Address(RVA = "0x6B22050", Offset = "0x6B21050", VA = "0x6B22050")]
		internal set
		{
		}
	}

	[Token(Token = "0x17000930")]
	internal StyleRule[] rules
	{
		[Token(Token = "0x60022A8")]
		[Address(RVA = "0x6B22060", Offset = "0x6B21060", VA = "0x6B22060")]
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
		[Address(RVA = "0x6B22070", Offset = "0x6B21070", VA = "0x6B22070")]
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
		[Address(RVA = "0x6B22080", Offset = "0x6B21080", VA = "0x6B22080")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60022AB")]
		[Address(RVA = "0x6B22090", Offset = "0x6B21090", VA = "0x6B22090")]
		set
		{
		}
	}

	[Token(Token = "0x17000933")]
	internal Dictionary<string, StyleComplexSelector>[] tables
	{
		[Token(Token = "0x60022AC")]
		[Address(RVA = "0x6B220A0", Offset = "0x6B210A0", VA = "0x6B220A0")]
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
		[Address(RVA = "0x6B223B0", Offset = "0x6B213B0", VA = "0x6B223B0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60022AE")]
		[Address(RVA = "0x6B223C0", Offset = "0x6B213C0", VA = "0x6B223C0")]
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
	[Address(RVA = "0x6B22500", Offset = "0x6B21500", VA = "0x6B22500", Slot = "4")]
	internal virtual void OnEnable()
	{
	}

	[Token(Token = "0x60022B2")]
	[Address(RVA = "0x6B22AC0", Offset = "0x6B21AC0", VA = "0x6B22AC0")]
	internal void FlattenImportedStyleSheetsRecursive()
	{
	}

	[Token(Token = "0x60022B3")]
	[Address(RVA = "0x6B22B40", Offset = "0x6B21B40", VA = "0x6B22B40")]
	private void FlattenImportedStyleSheetsRecursive(StyleSheet sheet)
	{
	}

	[Token(Token = "0x60022B4")]
	[Address(RVA = "0x6B22C90", Offset = "0x6B21C90", VA = "0x6B22C90")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal StyleRule AddRule()
	{
		return null;
	}

	[Token(Token = "0x60022B5")]
	[Address(RVA = "0x6B22CA0", Offset = "0x6B21CA0", VA = "0x6B22CA0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal StyleRule AddRuleAtIndex(int index)
	{
		return null;
	}

	[Token(Token = "0x60022B6")]
	[Address(RVA = "0x6B22E40", Offset = "0x6B21E40", VA = "0x6B22E40")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal StyleRule AddRule(string selector)
	{
		return null;
	}

	[Token(Token = "0x60022B7")]
	[Address(RVA = "0x6B22CB0", Offset = "0x6B21CB0", VA = "0x6B22CB0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal StyleRule AddRuleAtIndex(int index, string selector)
	{
		return null;
	}

	[Token(Token = "0x60022B8")]
	[Address(RVA = "0x6B22E50", Offset = "0x6B21E50", VA = "0x6B22E50")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool RemoveRule(StyleRule rule)
	{
		return default(bool);
	}

	[Token(Token = "0x60022B9")]
	[Address(RVA = "0x6B22EF0", Offset = "0x6B21EF0", VA = "0x6B22EF0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void RemoveRule(int ruleIndex)
	{
	}

	[Token(Token = "0x60022BA")]
	[Address(RVA = "0x6B23040", Offset = "0x6B22040", VA = "0x6B23040")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void SetRules(StyleRule[] newRules)
	{
	}

	[Token(Token = "0x60022BB")]
	[Address(RVA = "0x6B21A60", Offset = "0x6B20A60", VA = "0x6B21A60")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void RequestRebuild(RebuildOptions options = RebuildOptions.None)
	{
	}

	[Token(Token = "0x60022BC")]
	[Address(RVA = "0x6B230E0", Offset = "0x6B220E0", VA = "0x6B230E0")]
	internal void RebuildIfNecessary()
	{
	}

	[Token(Token = "0x60022BD")]
	[Address(RVA = "0x6B22510", Offset = "0x6B21510", VA = "0x6B22510")]
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
	[Address(RVA = "0x6B230F0", Offset = "0x6B220F0", VA = "0x6B230F0")]
	internal int AddValue(StyleValueKeyword keyword)
	{
		return default(int);
	}

	[Token(Token = "0x60022C1")]
	[Address(RVA = "0x6B23170", Offset = "0x6B22170", VA = "0x6B23170")]
	internal int AddValue(StyleValueFunction function)
	{
		return default(int);
	}

	[Token(Token = "0x60022C2")]
	[Address(RVA = "0x6B231F0", Offset = "0x6B221F0", VA = "0x6B231F0")]
	internal int AddValue(float value)
	{
		return default(int);
	}

	[Token(Token = "0x60022C3")]
	[Address(RVA = "0x6B23240", Offset = "0x6B22240", VA = "0x6B23240")]
	internal int AddValue(Dimension value)
	{
		return default(int);
	}

	[Token(Token = "0x60022C4")]
	[Address(RVA = "0x6B23290", Offset = "0x6B22290", VA = "0x6B23290")]
	internal int AddValue(Color value)
	{
		return default(int);
	}

	[Token(Token = "0x60022C5")]
	[Address(RVA = "0x6B232F0", Offset = "0x6B222F0", VA = "0x6B232F0")]
	internal int AddValue(ScalableImage value)
	{
		return default(int);
	}

	[Token(Token = "0x60022C6")]
	[Address(RVA = "0x6B23340", Offset = "0x6B22340", VA = "0x6B23340")]
	internal int AddValue(string value)
	{
		return default(int);
	}

	[Token(Token = "0x60022C7")]
	[Address(RVA = "0x6B23390", Offset = "0x6B22390", VA = "0x6B23390")]
	internal int AddValue(Object value)
	{
		return default(int);
	}

	[Token(Token = "0x60022C8")]
	[Address(RVA = "0x6B233E0", Offset = "0x6B223E0", VA = "0x6B233E0")]
	internal int AddValue(Enum value)
	{
		return default(int);
	}

	[Token(Token = "0x60022C9")]
	[Address(RVA = "0x6B23460", Offset = "0x6B22460", VA = "0x6B23460")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal StyleValueKeyword ReadKeyword(StyleValueHandle handle)
	{
		return default(StyleValueKeyword);
	}

	[Token(Token = "0x60022CA")]
	[Address(RVA = "0x6B23470", Offset = "0x6B22470", VA = "0x6B23470")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool TryReadKeyword(StyleValueHandle handle, out StyleValueKeyword value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022CB")]
	[Address(RVA = "0x6B23490", Offset = "0x6B22490", VA = "0x6B23490")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal float ReadFloat(StyleValueHandle handle)
	{
		return default(float);
	}

	[Token(Token = "0x60022CC")]
	[Address(RVA = "0x6B21450", Offset = "0x6B20450", VA = "0x6B21450")]
	internal bool TryReadFloat(StyleValueHandle handle, out float value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022CD")]
	[Address(RVA = "0x6B23530", Offset = "0x6B22530", VA = "0x6B23530")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal Dimension ReadDimension(StyleValueHandle handle)
	{
		return default(Dimension);
	}

	[Token(Token = "0x60022CE")]
	[Address(RVA = "0x6B235E0", Offset = "0x6B225E0", VA = "0x6B235E0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool TryReadDimension(StyleValueHandle handle, out Dimension value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022CF")]
	[Address(RVA = "0x6B236B0", Offset = "0x6B226B0", VA = "0x6B236B0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal Color ReadColor(StyleValueHandle handle)
	{
		return default(Color);
	}

	[Token(Token = "0x60022D0")]
	[Address(RVA = "0x6B21550", Offset = "0x6B20550", VA = "0x6B21550")]
	internal bool TryReadColor(StyleValueHandle handle, out Color value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022D1")]
	[Address(RVA = "0x6B23810", Offset = "0x6B22810", VA = "0x6B23810")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal string ReadString(StyleValueHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60022D2")]
	[Address(RVA = "0x6B21500", Offset = "0x6B20500", VA = "0x6B21500")]
	internal bool TryReadString(StyleValueHandle handle, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022D3")]
	[Address(RVA = "0x6B237C0", Offset = "0x6B227C0", VA = "0x6B237C0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal string ReadEnum(StyleValueHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60022D4")]
	[Address(RVA = "0x6B23860", Offset = "0x6B22860", VA = "0x6B23860")]
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
	[Address(RVA = "0x6B238B0", Offset = "0x6B228B0", VA = "0x6B238B0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal string ReadVariable(StyleValueHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60022D8")]
	[Address(RVA = "0x6B23900", Offset = "0x6B22900", VA = "0x6B23900")]
	internal bool TryReadVariable(StyleValueHandle handle, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022D9")]
	[Address(RVA = "0x6B23950", Offset = "0x6B22950", VA = "0x6B23950")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal string ReadResourcePath(StyleValueHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60022DA")]
	[Address(RVA = "0x6B21400", Offset = "0x6B20400", VA = "0x6B21400")]
	internal bool TryReadResourcePath(StyleValueHandle handle, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022DB")]
	[Address(RVA = "0x6B239A0", Offset = "0x6B229A0", VA = "0x6B239A0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal Object ReadAssetReference(StyleValueHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60022DC")]
	[Address(RVA = "0x6B239F0", Offset = "0x6B229F0", VA = "0x6B239F0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal string ReadMissingAssetReferenceUrl(StyleValueHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60022DD")]
	[Address(RVA = "0x6B23A40", Offset = "0x6B22A40", VA = "0x6B23A40")]
	internal bool TryReadMissingAssetReferenceUrl(StyleValueHandle handle, out string value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022DE")]
	[Address(RVA = "0x6B213B0", Offset = "0x6B203B0", VA = "0x6B213B0")]
	internal bool TryReadAssetReference(StyleValueHandle handle, out Object value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022DF")]
	[Address(RVA = "0x6B23A90", Offset = "0x6B22A90", VA = "0x6B23A90")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal StyleValueFunction ReadFunction(StyleValueHandle handle)
	{
		return default(StyleValueFunction);
	}

	[Token(Token = "0x60022E0")]
	[Address(RVA = "0x6B23AA0", Offset = "0x6B22AA0", VA = "0x6B23AA0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool TryReadFunction(StyleValueHandle handle, out StyleValueFunction value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022E1")]
	[Address(RVA = "0x6B23AC0", Offset = "0x6B22AC0", VA = "0x6B23AC0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal string ReadFunctionName(StyleValueHandle handle)
	{
		return null;
	}

	[Token(Token = "0x60022E2")]
	[Address(RVA = "0x6B23C80", Offset = "0x6B22C80", VA = "0x6B23C80")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal ScalableImage ReadScalableImage(StyleValueHandle handle)
	{
		return default(ScalableImage);
	}

	[Token(Token = "0x60022E3")]
	[Address(RVA = "0x6B23CD0", Offset = "0x6B22CD0", VA = "0x6B23CD0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal bool TryReadScalableImage(StyleValueHandle handle, out ScalableImage value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022E4")]
	[Address(RVA = "0x6B23D20", Offset = "0x6B22D20", VA = "0x6B23D20")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal StylePropertyName ReadStylePropertyName(StyleValueHandle handle)
	{
		return default(StylePropertyName);
	}

	[Token(Token = "0x60022E5")]
	[Address(RVA = "0x6B23D90", Offset = "0x6B22D90", VA = "0x6B23D90")]
	internal bool TryReadStylePropertyName(StyleValueHandle handle, out StylePropertyName value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022E6")]
	[Address(RVA = "0x6B23E40", Offset = "0x6B22E40", VA = "0x6B23E40")]
	internal Length ReadLength(StyleValueHandle handle)
	{
		return default(Length);
	}

	[Token(Token = "0x60022E7")]
	[Address(RVA = "0x6B23ED0", Offset = "0x6B22ED0", VA = "0x6B23ED0")]
	internal bool TryReadLength(StyleValueHandle handle, out Length value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022E8")]
	[Address(RVA = "0x6B23F70", Offset = "0x6B22F70", VA = "0x6B23F70")]
	internal Angle ReadAngle(StyleValueHandle handle)
	{
		return default(Angle);
	}

	[Token(Token = "0x60022E9")]
	[Address(RVA = "0x6B24020", Offset = "0x6B23020", VA = "0x6B24020")]
	internal bool TryReadAngle(StyleValueHandle handle, out Angle value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022EA")]
	[Address(RVA = "0x6B240E0", Offset = "0x6B230E0", VA = "0x6B240E0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal TimeValue ReadTimeValue(StyleValueHandle handle)
	{
		return default(TimeValue);
	}

	[Token(Token = "0x60022EB")]
	[Address(RVA = "0x6B24120", Offset = "0x6B23120", VA = "0x6B24120")]
	internal bool TryReadTimeValue(StyleValueHandle handle, out TimeValue value)
	{
		return default(bool);
	}

	[Token(Token = "0x60022EC")]
	[Address(RVA = "0x6B24180", Offset = "0x6B23180", VA = "0x6B24180")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteKeyword(ref StyleValueHandle handle, StyleValueKeyword value)
	{
	}

	[Token(Token = "0x60022ED")]
	[Address(RVA = "0x6B24220", Offset = "0x6B23220", VA = "0x6B24220")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteFloat(ref StyleValueHandle handle, float value)
	{
	}

	[Token(Token = "0x60022EE")]
	[Address(RVA = "0x6B24340", Offset = "0x6B23340", VA = "0x6B24340")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteDimension(ref StyleValueHandle handle, Dimension dimension)
	{
	}

	[Token(Token = "0x60022EF")]
	[Address(RVA = "0x6B24450", Offset = "0x6B23450", VA = "0x6B24450")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteColor(ref StyleValueHandle handle, Color color)
	{
	}

	[Token(Token = "0x60022F0")]
	[Address(RVA = "0x6B24580", Offset = "0x6B23580", VA = "0x6B24580")]
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
	[Address(RVA = "0x6B246A0", Offset = "0x6B236A0", VA = "0x6B246A0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteEnumAsString(ref StyleValueHandle handle, string valueStr)
	{
	}

	[Token(Token = "0x60022F3")]
	[Address(RVA = "0x6B247C0", Offset = "0x6B237C0", VA = "0x6B247C0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteVariable(ref StyleValueHandle handle, string variableName)
	{
	}

	[Token(Token = "0x60022F4")]
	[Address(RVA = "0x6B248E0", Offset = "0x6B238E0", VA = "0x6B248E0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteResourcePath(ref StyleValueHandle handle, string resourcePath)
	{
	}

	[Token(Token = "0x60022F5")]
	[Address(RVA = "0x6B24A00", Offset = "0x6B23A00", VA = "0x6B24A00")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteAssetReference(ref StyleValueHandle handle, Object value)
	{
	}

	[Token(Token = "0x60022F6")]
	[Address(RVA = "0x6B24B50", Offset = "0x6B23B50", VA = "0x6B24B50")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteMissingAssetReferenceUrl(ref StyleValueHandle handle, string assetReference)
	{
	}

	[Token(Token = "0x60022F7")]
	[Address(RVA = "0x6B24C70", Offset = "0x6B23C70", VA = "0x6B24C70")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteFunction(ref StyleValueHandle handle, StyleValueFunction function)
	{
	}

	[Token(Token = "0x60022F8")]
	[Address(RVA = "0x6B24D10", Offset = "0x6B23D10", VA = "0x6B24D10")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteScalableImage(ref StyleValueHandle handle, ScalableImage scalableImage)
	{
	}

	[Token(Token = "0x60022F9")]
	[Address(RVA = "0x6B24E40", Offset = "0x6B23E40", VA = "0x6B24E40")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteStylePropertyName(ref StyleValueHandle handle, StylePropertyName propertyName)
	{
	}

	[Token(Token = "0x60022FA")]
	[Address(RVA = "0x6B24F90", Offset = "0x6B23F90", VA = "0x6B24F90")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal void WriteCommaSeparator(ref StyleValueHandle handle)
	{
	}

	[Token(Token = "0x60022FB")]
	[Address(RVA = "0x6B25020", Offset = "0x6B24020", VA = "0x6B25020")]
	internal void WriteLength(ref StyleValueHandle handle, Length value)
	{
	}

	[Token(Token = "0x60022FC")]
	[Address(RVA = "0x6B25150", Offset = "0x6B24150", VA = "0x6B25150")]
	internal void WriteAngle(ref StyleValueHandle handle, Angle value)
	{
	}

	[Token(Token = "0x60022FD")]
	[Address(RVA = "0x6B25280", Offset = "0x6B24280", VA = "0x6B25280")]
	internal void WriteTimeValue(ref StyleValueHandle handle, TimeValue value)
	{
	}

	[Token(Token = "0x60022FE")]
	[Address(RVA = "0x6B23060", Offset = "0x6B22060", VA = "0x6B23060")]
	private void MarkAsChanged()
	{
	}

	[Token(Token = "0x60022FF")]
	[Address(RVA = "0x6B252E0", Offset = "0x6B242E0", VA = "0x6B252E0")]
	public StyleSheet()
	{
	}
}
