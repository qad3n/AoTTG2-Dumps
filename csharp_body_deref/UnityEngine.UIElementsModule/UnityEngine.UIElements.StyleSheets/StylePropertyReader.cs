// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.StylePropertyReader
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x2000631")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal class StylePropertyReader
{
	[Token(Token = "0x2000632")]
	internal delegate int GetCursorIdFunction(StyleSheet sheet, StyleValueHandle handle);

	[Token(Token = "0x40017B1")]
	[FieldOffset(Offset = "0x0")]
	internal static GetCursorIdFunction getCursorIdFunc;

	[Token(Token = "0x40017B2")]
	[FieldOffset(Offset = "0x10")]
	private List<StylePropertyValue> m_Values;

	[Token(Token = "0x40017B3")]
	[FieldOffset(Offset = "0x18")]
	private List<int> m_ValueCount;

	[Token(Token = "0x40017B4")]
	[FieldOffset(Offset = "0x20")]
	private StyleVariableResolver m_Resolver;

	[Token(Token = "0x40017B5")]
	[FieldOffset(Offset = "0x28")]
	private StyleSheet m_Sheet;

	[Token(Token = "0x40017B6")]
	[FieldOffset(Offset = "0x30")]
	private StyleProperty[] m_Properties;

	[Token(Token = "0x40017B8")]
	[FieldOffset(Offset = "0x3C")]
	private int m_CurrentPropertyIndex;

	[Token(Token = "0x17000B69")]
	private int m_CurrentValueIndex
	{
		[Token(Token = "0x6002D4C")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002D4D")]
		[Address(RVA = "0x1A40490", Offset = "0x1A3EA90", VA = "0x181A40490")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000B6A")]
	public StyleProperty property
	{
		[Token(Token = "0x6002D4E")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002D4F")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000B6B")]
	public StylePropertyId propertyId
	{
		[Token(Token = "0x6002D50")]
		[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0")]
		[CompilerGenerated]
		get
		{
			return default(StylePropertyId);
		}
		[Token(Token = "0x6002D51")]
		[Address(RVA = "0xB3E0D0", Offset = "0xB3C6D0", VA = "0x180B3E0D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000B6C")]
	public int valueCount
	{
		[Token(Token = "0x6002D52")]
		[Address(RVA = "0x58A610", Offset = "0x588C10", VA = "0x18058A610")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002D53")]
		[Address(RVA = "0x58A9A0", Offset = "0x588FA0", VA = "0x18058A9A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000B6D")]
	public float dpiScaling
	{
		[Token(Token = "0x6002D54")]
		[Address(RVA = "0xDA5AC0", Offset = "0xDA40C0", VA = "0x180DA5AC0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002D55")]
		[Address(RVA = "0x2E909C0", Offset = "0x2E8EFC0", VA = "0x182E909C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002D56")]
	[Address(RVA = "0x31F2AB0", Offset = "0x31F10B0", VA = "0x1831F2AB0")]
	public void SetContext(StyleSheet sheet, StyleComplexSelector selector, StyleVariableContext varContext, float dpiScaling = 1f)
	{
	}

	[Token(Token = "0x6002D57")]
	[Address(RVA = "0x31F2C00", Offset = "0x31F1200", VA = "0x1831F2C00")]
	public void SetInlineContext(StyleSheet sheet, StyleProperty[] properties, float dpiScaling = 1f)
	{
	}

	[Token(Token = "0x6002D58")]
	[Address(RVA = "0x31EDEA0", Offset = "0x31EC4A0", VA = "0x1831EDEA0")]
	public StylePropertyId MoveNextProperty()
	{
		return default(StylePropertyId);
	}

	[Token(Token = "0x6002D59")]
	[Address(RVA = "0x31ED920", Offset = "0x31EBF20", VA = "0x1831ED920")]
	public StylePropertyValue GetValue(int index)
	{
		return default(StylePropertyValue);
	}

	[Token(Token = "0x6002D5A")]
	[Address(RVA = "0x31ED8A0", Offset = "0x31EBEA0", VA = "0x1831ED8A0")]
	public StyleValueType GetValueType(int index)
	{
		return default(StyleValueType);
	}

	[Token(Token = "0x6002D5B")]
	[Address(RVA = "0x31EDA50", Offset = "0x31EC050", VA = "0x1831EDA50")]
	public bool IsValueType(int index, StyleValueType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D5C")]
	[Address(RVA = "0x31ED9A0", Offset = "0x31EBFA0", VA = "0x1831ED9A0")]
	public bool IsKeyword(int index, StyleValueKeyword keyword)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D5D")]
	[Address(RVA = "0x31EE000", Offset = "0x31EC600", VA = "0x1831EE000")]
	public string ReadAsString(int index)
	{
		return null;
	}

	[Token(Token = "0x6002D5E")]
	[Address(RVA = "0x31EFD60", Offset = "0x31EE360", VA = "0x1831EFD60")]
	public Length ReadLength(int index)
	{
		return default(Length);
	}

	[Token(Token = "0x6002D5F")]
	[Address(RVA = "0x31F2080", Offset = "0x31F0680", VA = "0x1831F2080")]
	public TimeValue ReadTimeValue(int index)
	{
		return default(TimeValue);
	}

	[Token(Token = "0x6002D60")]
	[Address(RVA = "0x31F2680", Offset = "0x31F0C80", VA = "0x1831F2680")]
	public Translate ReadTranslate(int index)
	{
		return default(Translate);
	}

	[Token(Token = "0x6002D61")]
	[Address(RVA = "0x31F2280", Offset = "0x31F0880", VA = "0x1831F2280")]
	public TransformOrigin ReadTransformOrigin(int index)
	{
		return default(TransformOrigin);
	}

	[Token(Token = "0x6002D62")]
	[Address(RVA = "0x31F1370", Offset = "0x31EF970", VA = "0x1831F1370")]
	public Rotate ReadRotate(int index)
	{
		return default(Rotate);
	}

	[Token(Token = "0x6002D63")]
	[Address(RVA = "0x31F1730", Offset = "0x31EFD30", VA = "0x1831F1730")]
	public Scale ReadScale(int index)
	{
		return default(Scale);
	}

	[Token(Token = "0x6002D64")]
	[Address(RVA = "0x31EF3E0", Offset = "0x31ED9E0", VA = "0x1831EF3E0")]
	public float ReadFloat(int index)
	{
		return default(float);
	}

	[Token(Token = "0x6002D65")]
	[Address(RVA = "0x31EFCE0", Offset = "0x31EE2E0", VA = "0x1831EFCE0")]
	public int ReadInt(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6002D66")]
	[Address(RVA = "0x31EEE40", Offset = "0x31ED440", VA = "0x1831EEE40")]
	public Color ReadColor(int index)
	{
		return default(Color);
	}

	[Token(Token = "0x6002D67")]
	[Address(RVA = "0x31EF2E0", Offset = "0x31ED8E0", VA = "0x1831EF2E0")]
	public int ReadEnum(StyleEnumType enumType, int index)
	{
		return default(int);
	}

	[Token(Token = "0x6002D68")]
	[Address(RVA = "0x31EE070", Offset = "0x31EC670", VA = "0x1831EE070")]
	public Object ReadAsset(int index)
	{
		return null;
	}

	[Token(Token = "0x6002D69")]
	[Address(RVA = "0x31EF460", Offset = "0x31EDA60", VA = "0x1831EF460")]
	public FontDefinition ReadFontDefinition(int index)
	{
		return default(FontDefinition);
	}

	[Token(Token = "0x6002D6A")]
	[Address(RVA = "0x31EF9B0", Offset = "0x31EDFB0", VA = "0x1831EF9B0")]
	public Font ReadFont(int index)
	{
		return null;
	}

	[Token(Token = "0x6002D6B")]
	[Address(RVA = "0x31F0E30", Offset = "0x31EF430", VA = "0x1831F0E30")]
	public MaterialDefinition ReadMaterialDefinition(int index)
	{
		return default(MaterialDefinition);
	}

	[Token(Token = "0x6002D6C")]
	[Address(RVA = "0x31EEBE0", Offset = "0x31ED1E0", VA = "0x1831EEBE0")]
	public Background ReadBackground(int index)
	{
		return default(Background);
	}

	[Token(Token = "0x6002D6D")]
	[Address(RVA = "0x31EEEE0", Offset = "0x31ED4E0", VA = "0x1831EEEE0")]
	public Cursor ReadCursor(int index)
	{
		return default(Cursor);
	}

	[Token(Token = "0x6002D6E")]
	[Address(RVA = "0x31F1ED0", Offset = "0x31F04D0", VA = "0x1831F1ED0")]
	public TextShadow ReadTextShadow(int index)
	{
		return default(TextShadow);
	}

	[Token(Token = "0x6002D6F")]
	[Address(RVA = "0x31F1A10", Offset = "0x31F0010", VA = "0x1831F1A10")]
	public TextAutoSize ReadTextAutoSize(int index)
	{
		return default(TextAutoSize);
	}

	[Token(Token = "0x6002D70")]
	[Address(RVA = "0x31EE1D0", Offset = "0x31EC7D0", VA = "0x1831EE1D0")]
	public BackgroundPosition ReadBackgroundPositionX(int index)
	{
		return default(BackgroundPosition);
	}

	[Token(Token = "0x6002D71")]
	[Address(RVA = "0x31EE210", Offset = "0x31EC810", VA = "0x1831EE210")]
	public BackgroundPosition ReadBackgroundPositionY(int index)
	{
		return default(BackgroundPosition);
	}

	[Token(Token = "0x6002D72")]
	[Address(RVA = "0x31EE250", Offset = "0x31EC850", VA = "0x1831EE250")]
	private BackgroundPosition ReadBackgroundPosition(int index, BackgroundPositionKeyword keyword)
	{
		return default(BackgroundPosition);
	}

	[Token(Token = "0x6002D73")]
	[Address(RVA = "0x31EE530", Offset = "0x31ECB30", VA = "0x1831EE530")]
	public BackgroundRepeat ReadBackgroundRepeat(int index)
	{
		return default(BackgroundRepeat);
	}

	[Token(Token = "0x6002D74")]
	[Address(RVA = "0x31EE890", Offset = "0x31ECE90", VA = "0x1831EE890")]
	public BackgroundSize ReadBackgroundSize(int index)
	{
		return default(BackgroundSize);
	}

	[Token(Token = "0x6002D75")]
	[Address(RVA = "0x31EFE70", Offset = "0x31EE470", VA = "0x1831EFE70")]
	public void ReadListEasingFunction(List<EasingFunction> list, int index)
	{
	}

	[Token(Token = "0x6002D76")]
	[Address(RVA = "0x31F0C80", Offset = "0x31EF280", VA = "0x1831F0C80")]
	public void ReadListTimeValue(List<TimeValue> list, int index)
	{
	}

	[Token(Token = "0x6002D77")]
	[Address(RVA = "0x31F0140", Offset = "0x31EE740", VA = "0x1831F0140")]
	public void ReadListFilterFunction(List<FilterFunction> list, int index)
	{
	}

	[Token(Token = "0x6002D78")]
	[Address(RVA = "0x31F0A50", Offset = "0x31EF050", VA = "0x1831F0A50")]
	public void ReadListStylePropertyName(List<StylePropertyName> list, int index)
	{
	}

	[Token(Token = "0x6002D79")]
	[Address(RVA = "0x31F0E90", Offset = "0x31EF490", VA = "0x1831F0E90")]
	public StyleRatio ReadRatio(int index)
	{
		return default(StyleRatio);
	}

	[Token(Token = "0x6002D7A")]
	[Address(RVA = "0x31EDAE0", Offset = "0x31EC0E0", VA = "0x1831EDAE0")]
	private void LoadProperties()
	{
	}

	[Token(Token = "0x6002D7B")]
	[Address(RVA = "0x31F2B40", Offset = "0x31F1140", VA = "0x1831F2B40")]
	private void SetCurrentProperty()
	{
	}

	[Token(Token = "0x6002D7C")]
	[Address(RVA = "0x31F23E0", Offset = "0x31F09E0", VA = "0x1831F23E0")]
	public static TransformOrigin ReadTransformOrigin(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue zVvalue)
	{
		return default(TransformOrigin);
	}

	[Token(Token = "0x6002D7D")]
	[Address(RVA = "0x31F2130", Offset = "0x31F0730", VA = "0x1831F2130")]
	private static Length ReadTransformOriginEnum(StylePropertyValue value, out bool isVertical, out bool isHorizontal)
	{
		return default(Length);
	}

	[Token(Token = "0x6002D7E")]
	[Address(RVA = "0x31F27E0", Offset = "0x31F0DE0", VA = "0x1831F27E0")]
	public static Translate ReadTranslate(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue val3)
	{
		return default(Translate);
	}

	[Token(Token = "0x6002D7F")]
	[Address(RVA = "0x31F1530", Offset = "0x31EFB30", VA = "0x1831F1530")]
	public static Scale ReadScale(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue val3)
	{
		return default(Scale);
	}

	[Token(Token = "0x6002D80")]
	[Address(RVA = "0x31F1160", Offset = "0x31EF760", VA = "0x1831F1160")]
	public static Rotate ReadRotate(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue val3, StylePropertyValue val4)
	{
		return default(Rotate);
	}

	[Token(Token = "0x6002D81")]
	[Address(RVA = "0x31F3830", Offset = "0x31F1E30", VA = "0x1831F3830")]
	private static bool TryReadEnum(StyleEnumType enumType, StylePropertyValue value, out int intValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D82")]
	[Address(RVA = "0x31EF220", Offset = "0x31ED820", VA = "0x1831EF220")]
	private static int ReadEnum(StyleEnumType enumType, StylePropertyValue value)
	{
		return default(int);
	}

	[Token(Token = "0x6002D83")]
	[Address(RVA = "0x31EDED0", Offset = "0x31EC4D0", VA = "0x1831EDED0")]
	public static Angle ReadAngle(StylePropertyValue value)
	{
		return default(Angle);
	}

	[Token(Token = "0x6002D84")]
	[Address(RVA = "0x31EE340", Offset = "0x31EC940", VA = "0x1831EE340")]
	public static BackgroundPosition ReadBackgroundPosition(int valCount, StylePropertyValue val1, StylePropertyValue val2, BackgroundPositionKeyword keyword)
	{
		return default(BackgroundPosition);
	}

	[Token(Token = "0x6002D85")]
	[Address(RVA = "0x31EE710", Offset = "0x31ECD10", VA = "0x1831EE710")]
	public static BackgroundRepeat ReadBackgroundRepeat(int valCount, StylePropertyValue val1, StylePropertyValue val2)
	{
		return default(BackgroundRepeat);
	}

	[Token(Token = "0x6002D86")]
	[Address(RVA = "0x31EE980", Offset = "0x31ECF80", VA = "0x1831EE980")]
	public static BackgroundSize ReadBackgroundSize(int valCount, StylePropertyValue val1, StylePropertyValue val2)
	{
		return default(BackgroundSize);
	}

	[Token(Token = "0x6002D87")]
	[Address(RVA = "0x31F1B70", Offset = "0x31F0170", VA = "0x1831F1B70")]
	public static TextShadow ReadTextShadow(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue val3, StylePropertyValue val4)
	{
		return default(TextShadow);
	}

	[Token(Token = "0x6002D88")]
	[Address(RVA = "0x31F1880", Offset = "0x31EFE80", VA = "0x1831F1880")]
	public static TextAutoSize ReadTextAutoSize(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue val3)
	{
		return default(TextAutoSize);
	}

	[Token(Token = "0x6002D89")]
	[Address(RVA = "0x31EF050", Offset = "0x31ED650", VA = "0x1831EF050")]
	internal static Cursor ReadCursor(int valueCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue val3, float dpiScaling = 1f)
	{
		return default(Cursor);
	}

	[Token(Token = "0x6002D8A")]
	[Address(RVA = "0x31F2C60", Offset = "0x31F1260", VA = "0x1831F2C60")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal static bool TryGetImageSourceFromValue(StylePropertyValue propertyValue, float dpiScaling, out ImageSource source)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D8B")]
	[Address(RVA = "0x31F38F0", Offset = "0x31F1EF0", VA = "0x1831F38F0")]
	public StylePropertyReader()
	{
	}
}
