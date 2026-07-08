using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.StyleSheets;

[Token(Token = "0x2000539")]
internal class StylePropertyReader
{
	[Token(Token = "0x200053A")]
	internal delegate int GetCursorIdFunction(StyleSheet sheet, StyleValueHandle handle);

	[Token(Token = "0x4001206")]
	[FieldOffset(Offset = "0x0")]
	internal static GetCursorIdFunction getCursorIdFunc;

	[Token(Token = "0x4001207")]
	[FieldOffset(Offset = "0x10")]
	private List<StylePropertyValue> m_Values;

	[Token(Token = "0x4001208")]
	[FieldOffset(Offset = "0x18")]
	private List<int> m_ValueCount;

	[Token(Token = "0x4001209")]
	[FieldOffset(Offset = "0x20")]
	private StyleVariableResolver m_Resolver;

	[Token(Token = "0x400120A")]
	[FieldOffset(Offset = "0x28")]
	private StyleSheet m_Sheet;

	[Token(Token = "0x400120B")]
	[FieldOffset(Offset = "0x30")]
	private StyleProperty[] m_Properties;

	[Token(Token = "0x400120C")]
	[FieldOffset(Offset = "0x38")]
	private StylePropertyId[] m_PropertyIds;

	[Token(Token = "0x400120D")]
	[FieldOffset(Offset = "0x40")]
	private int m_CurrentValueIndex;

	[Token(Token = "0x400120E")]
	[FieldOffset(Offset = "0x44")]
	private int m_CurrentPropertyIndex;

	[Token(Token = "0x1700084D")]
	public StyleProperty property
	{
		[Token(Token = "0x6001FEA")]
		[Address(RVA = "0x4C9F640", Offset = "0x4C9F640", VA = "0x4C9F640")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001FEB")]
		[Address(RVA = "0x4C9F650", Offset = "0x4C9F650", VA = "0x4C9F650")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700084E")]
	public StylePropertyId propertyId
	{
		[Token(Token = "0x6001FEC")]
		[Address(RVA = "0x4C9F660", Offset = "0x4C9F660", VA = "0x4C9F660")]
		[CompilerGenerated]
		get
		{
			return default(StylePropertyId);
		}
		[Token(Token = "0x6001FED")]
		[Address(RVA = "0x4C9F670", Offset = "0x4C9F670", VA = "0x4C9F670")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700084F")]
	public int valueCount
	{
		[Token(Token = "0x6001FEE")]
		[Address(RVA = "0x4C9F680", Offset = "0x4C9F680", VA = "0x4C9F680")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001FEF")]
		[Address(RVA = "0x4C9F690", Offset = "0x4C9F690", VA = "0x4C9F690")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000850")]
	public float dpiScaling
	{
		[Token(Token = "0x6001FF0")]
		[Address(RVA = "0x4C9F6A0", Offset = "0x4C9F6A0", VA = "0x4C9F6A0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001FF1")]
		[Address(RVA = "0x4C9F6B0", Offset = "0x4C9F6B0", VA = "0x4C9F6B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001FF2")]
	[Address(RVA = "0x4C9F6C0", Offset = "0x4C9F6C0", VA = "0x4C9F6C0")]
	public void SetContext(StyleSheet sheet, StyleComplexSelector selector, StyleVariableContext varContext, float dpiScaling = 1f)
	{
	}

	[Token(Token = "0x6001FF3")]
	[Address(RVA = "0x4C9FEB0", Offset = "0x4C9FEB0", VA = "0x4C9FEB0")]
	public void SetInlineContext(StyleSheet sheet, StyleProperty[] properties, StylePropertyId[] propertyIds, float dpiScaling = 1f)
	{
	}

	[Token(Token = "0x6001FF4")]
	[Address(RVA = "0x4C9FF20", Offset = "0x4C9FF20", VA = "0x4C9FF20")]
	public StylePropertyId MoveNextProperty()
	{
		return default(StylePropertyId);
	}

	[Token(Token = "0x6001FF5")]
	[Address(RVA = "0x4CA0010", Offset = "0x4CA0010", VA = "0x4CA0010")]
	public StylePropertyValue GetValue(int index)
	{
		return default(StylePropertyValue);
	}

	[Token(Token = "0x6001FF6")]
	[Address(RVA = "0x4CA0060", Offset = "0x4CA0060", VA = "0x4CA0060")]
	public StyleValueType GetValueType(int index)
	{
		return default(StyleValueType);
	}

	[Token(Token = "0x6001FF7")]
	[Address(RVA = "0x4CA00D0", Offset = "0x4CA00D0", VA = "0x4CA00D0")]
	public bool IsValueType(int index, StyleValueType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FF8")]
	[Address(RVA = "0x4CA0150", Offset = "0x4CA0150", VA = "0x4CA0150")]
	public bool IsKeyword(int index, StyleValueKeyword keyword)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FF9")]
	[Address(RVA = "0x4CA01D0", Offset = "0x4CA01D0", VA = "0x4CA01D0")]
	public string ReadAsString(int index)
	{
		return null;
	}

	[Token(Token = "0x6001FFA")]
	[Address(RVA = "0x4CA0550", Offset = "0x4CA0550", VA = "0x4CA0550")]
	public Length ReadLength(int index)
	{
		return default(Length);
	}

	[Token(Token = "0x6001FFB")]
	[Address(RVA = "0x4CA0650", Offset = "0x4CA0650", VA = "0x4CA0650")]
	public TimeValue ReadTimeValue(int index)
	{
		return default(TimeValue);
	}

	[Token(Token = "0x6001FFC")]
	[Address(RVA = "0x4CA06E0", Offset = "0x4CA06E0", VA = "0x4CA06E0")]
	public Translate ReadTranslate(int index)
	{
		return default(Translate);
	}

	[Token(Token = "0x6001FFD")]
	[Address(RVA = "0x4CA0AF0", Offset = "0x4CA0AF0", VA = "0x4CA0AF0")]
	public TransformOrigin ReadTransformOrigin(int index)
	{
		return default(TransformOrigin);
	}

	[Token(Token = "0x6001FFE")]
	[Address(RVA = "0x4CA0E10", Offset = "0x4CA0E10", VA = "0x4CA0E10")]
	public Rotate ReadRotate(int index)
	{
		return default(Rotate);
	}

	[Token(Token = "0x6001FFF")]
	[Address(RVA = "0x4CA1050", Offset = "0x4CA1050", VA = "0x4CA1050")]
	public Scale ReadScale(int index)
	{
		return default(Scale);
	}

	[Token(Token = "0x6002000")]
	[Address(RVA = "0x4CA1370", Offset = "0x4CA1370", VA = "0x4CA1370")]
	public float ReadFloat(int index)
	{
		return default(float);
	}

	[Token(Token = "0x6002001")]
	[Address(RVA = "0x4CA13E0", Offset = "0x4CA13E0", VA = "0x4CA13E0")]
	public int ReadInt(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6002002")]
	[Address(RVA = "0x4CA1450", Offset = "0x4CA1450", VA = "0x4CA1450")]
	public Color ReadColor(int index)
	{
		return default(Color);
	}

	[Token(Token = "0x6002003")]
	[Address(RVA = "0x4CA1630", Offset = "0x4CA1630", VA = "0x4CA1630")]
	public int ReadEnum(StyleEnumType enumType, int index)
	{
		return default(int);
	}

	[Token(Token = "0x6002004")]
	[Address(RVA = "0x4CA1720", Offset = "0x4CA1720", VA = "0x4CA1720")]
	public FontDefinition ReadFontDefinition(int index)
	{
		return default(FontDefinition);
	}

	[Token(Token = "0x6002005")]
	[Address(RVA = "0x4CA1CA0", Offset = "0x4CA1CA0", VA = "0x4CA1CA0")]
	public Font ReadFont(int index)
	{
		return null;
	}

	[Token(Token = "0x6002006")]
	[Address(RVA = "0x4CA1FC0", Offset = "0x4CA1FC0", VA = "0x4CA1FC0")]
	public Background ReadBackground(int index)
	{
		return default(Background);
	}

	[Token(Token = "0x6002007")]
	[Address(RVA = "0x4CA2A10", Offset = "0x4CA2A10", VA = "0x4CA2A10")]
	public Cursor ReadCursor(int index)
	{
		return default(Cursor);
	}

	[Token(Token = "0x6002008")]
	[Address(RVA = "0x4CA2E00", Offset = "0x4CA2E00", VA = "0x4CA2E00")]
	public TextShadow ReadTextShadow(int index)
	{
		return default(TextShadow);
	}

	[Token(Token = "0x6002009")]
	[Address(RVA = "0x4CA32F0", Offset = "0x4CA32F0", VA = "0x4CA32F0")]
	public BackgroundPosition ReadBackgroundPositionX(int index)
	{
		return default(BackgroundPosition);
	}

	[Token(Token = "0x600200A")]
	[Address(RVA = "0x4CA33B0", Offset = "0x4CA33B0", VA = "0x4CA33B0")]
	public BackgroundPosition ReadBackgroundPositionY(int index)
	{
		return default(BackgroundPosition);
	}

	[Token(Token = "0x600200B")]
	[Address(RVA = "0x4CA3300", Offset = "0x4CA3300", VA = "0x4CA3300")]
	private BackgroundPosition ReadBackgroundPosition(int index, BackgroundPositionKeyword keyword)
	{
		return default(BackgroundPosition);
	}

	[Token(Token = "0x600200C")]
	[Address(RVA = "0x4CA35C0", Offset = "0x4CA35C0", VA = "0x4CA35C0")]
	public BackgroundRepeat ReadBackgroundRepeat(int index)
	{
		return default(BackgroundRepeat);
	}

	[Token(Token = "0x600200D")]
	[Address(RVA = "0x4CA37B0", Offset = "0x4CA37B0", VA = "0x4CA37B0")]
	public BackgroundSize ReadBackgroundSize(int index)
	{
		return default(BackgroundSize);
	}

	[Token(Token = "0x600200E")]
	[Address(RVA = "0x4CA3B00", Offset = "0x4CA3B00", VA = "0x4CA3B00")]
	public void ReadListEasingFunction(List<EasingFunction> list, int index)
	{
	}

	[Token(Token = "0x600200F")]
	[Address(RVA = "0x4CA3CF0", Offset = "0x4CA3CF0", VA = "0x4CA3CF0")]
	public void ReadListTimeValue(List<TimeValue> list, int index)
	{
	}

	[Token(Token = "0x6002010")]
	[Address(RVA = "0x4CA3EC0", Offset = "0x4CA3EC0", VA = "0x4CA3EC0")]
	public void ReadListStylePropertyName(List<StylePropertyName> list, int index)
	{
	}

	[Token(Token = "0x6002011")]
	[Address(RVA = "0x4C9F980", Offset = "0x4C9F980", VA = "0x4C9F980")]
	private void LoadProperties()
	{
	}

	[Token(Token = "0x6002012")]
	[Address(RVA = "0x4C9FF40", Offset = "0x4C9FF40", VA = "0x4C9FF40")]
	private void SetCurrentProperty()
	{
	}

	[Token(Token = "0x6002013")]
	[Address(RVA = "0x4CA0C30", Offset = "0x4CA0C30", VA = "0x4CA0C30")]
	public static TransformOrigin ReadTransformOrigin(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue zVvalue)
	{
		return default(TransformOrigin);
	}

	[Token(Token = "0x6002014")]
	[Address(RVA = "0x4CA40B0", Offset = "0x4CA40B0", VA = "0x4CA40B0")]
	private static Length ReadTransformOriginEnum(StylePropertyValue value, out bool isVertical, out bool isHorizontal)
	{
		return default(Length);
	}

	[Token(Token = "0x6002015")]
	[Address(RVA = "0x4CA0830", Offset = "0x4CA0830", VA = "0x4CA0830")]
	public static Translate ReadTranslate(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue val3)
	{
		return default(Translate);
	}

	[Token(Token = "0x6002016")]
	[Address(RVA = "0x4CA1160", Offset = "0x4CA1160", VA = "0x4CA1160")]
	public static Scale ReadScale(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue val3)
	{
		return default(Scale);
	}

	[Token(Token = "0x6002017")]
	[Address(RVA = "0x4CA0F40", Offset = "0x4CA0F40", VA = "0x4CA0F40")]
	public static Rotate ReadRotate(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue val3, StylePropertyValue val4)
	{
		return default(Rotate);
	}

	[Token(Token = "0x6002018")]
	[Address(RVA = "0x4CA4310", Offset = "0x4CA4310", VA = "0x4CA4310")]
	private static bool TryReadEnum(StyleEnumType enumType, StylePropertyValue value, out int intValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6002019")]
	[Address(RVA = "0x4CA41F0", Offset = "0x4CA41F0", VA = "0x4CA41F0")]
	private static int ReadEnum(StyleEnumType enumType, StylePropertyValue value)
	{
		return default(int);
	}

	[Token(Token = "0x600201A")]
	[Address(RVA = "0x4CA42A0", Offset = "0x4CA42A0", VA = "0x4CA42A0")]
	public static Angle ReadAngle(StylePropertyValue value)
	{
		return default(Angle);
	}

	[Token(Token = "0x600201B")]
	[Address(RVA = "0x4CA33C0", Offset = "0x4CA33C0", VA = "0x4CA33C0")]
	public static BackgroundPosition ReadBackgroundPosition(int valCount, StylePropertyValue val1, StylePropertyValue val2, BackgroundPositionKeyword keyword)
	{
		return default(BackgroundPosition);
	}

	[Token(Token = "0x600201C")]
	[Address(RVA = "0x4CA3700", Offset = "0x4CA3700", VA = "0x4CA3700")]
	public static BackgroundRepeat ReadBackgroundRepeat(int valCount, StylePropertyValue val1, StylePropertyValue val2)
	{
		return default(BackgroundRepeat);
	}

	[Token(Token = "0x600201D")]
	[Address(RVA = "0x4CA3890", Offset = "0x4CA3890", VA = "0x4CA3890")]
	public static BackgroundSize ReadBackgroundSize(int valCount, StylePropertyValue val1, StylePropertyValue val2)
	{
		return default(BackgroundSize);
	}

	[Token(Token = "0x600201E")]
	[Address(RVA = "0x4CA2220", Offset = "0x4CA2220", VA = "0x4CA2220")]
	internal static bool TryGetImageSourceFromValue(StylePropertyValue propertyValue, float dpiScaling, out ImageSource source)
	{
		return default(bool);
	}

	[Token(Token = "0x600201F")]
	[Address(RVA = "0x4CA43B0", Offset = "0x4CA43B0", VA = "0x4CA43B0")]
	public StylePropertyReader()
	{
	}
}
