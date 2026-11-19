// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.StyleSheets.StylePropertyReader
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6BEF460", Offset = "0x6BEE460", VA = "0x6BEF460")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002D4D")]
		[Address(RVA = "0x6BEF470", Offset = "0x6BEE470", VA = "0x6BEF470")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000B6A")]
	public StyleProperty property
	{
		[Token(Token = "0x6002D4E")]
		[Address(RVA = "0x6BEF480", Offset = "0x6BEE480", VA = "0x6BEF480")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6002D4F")]
		[Address(RVA = "0x6BEF490", Offset = "0x6BEE490", VA = "0x6BEF490")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000B6B")]
	public StylePropertyId propertyId
	{
		[Token(Token = "0x6002D50")]
		[Address(RVA = "0x6BEF4A0", Offset = "0x6BEE4A0", VA = "0x6BEF4A0")]
		[CompilerGenerated]
		get
		{
			return default(StylePropertyId);
		}
		[Token(Token = "0x6002D51")]
		[Address(RVA = "0x6BEF4B0", Offset = "0x6BEE4B0", VA = "0x6BEF4B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000B6C")]
	public int valueCount
	{
		[Token(Token = "0x6002D52")]
		[Address(RVA = "0x6BEF4C0", Offset = "0x6BEE4C0", VA = "0x6BEF4C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6002D53")]
		[Address(RVA = "0x6BEF4D0", Offset = "0x6BEE4D0", VA = "0x6BEF4D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000B6D")]
	public float dpiScaling
	{
		[Token(Token = "0x6002D54")]
		[Address(RVA = "0x6BEF4E0", Offset = "0x6BEE4E0", VA = "0x6BEF4E0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6002D55")]
		[Address(RVA = "0x6BEF4F0", Offset = "0x6BEE4F0", VA = "0x6BEF4F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6002D56")]
	[Address(RVA = "0x6BEF500", Offset = "0x6BEE500", VA = "0x6BEF500")]
	public void SetContext(StyleSheet sheet, StyleComplexSelector selector, StyleVariableContext varContext, float dpiScaling = 1f)
	{
	}

	[Token(Token = "0x6002D57")]
	[Address(RVA = "0x6BEFAA0", Offset = "0x6BEEAA0", VA = "0x6BEFAA0")]
	public void SetInlineContext(StyleSheet sheet, StyleProperty[] properties, float dpiScaling = 1f)
	{
	}

	[Token(Token = "0x6002D58")]
	[Address(RVA = "0x6BEFAF0", Offset = "0x6BEEAF0", VA = "0x6BEFAF0")]
	public StylePropertyId MoveNextProperty()
	{
		return default(StylePropertyId);
	}

	[Token(Token = "0x6002D59")]
	[Address(RVA = "0x6BEFBD0", Offset = "0x6BEEBD0", VA = "0x6BEFBD0")]
	public StylePropertyValue GetValue(int index)
	{
		return default(StylePropertyValue);
	}

	[Token(Token = "0x6002D5A")]
	[Address(RVA = "0x6BEFC20", Offset = "0x6BEEC20", VA = "0x6BEFC20")]
	public StyleValueType GetValueType(int index)
	{
		return default(StyleValueType);
	}

	[Token(Token = "0x6002D5B")]
	[Address(RVA = "0x6BEFC90", Offset = "0x6BEEC90", VA = "0x6BEFC90")]
	public bool IsValueType(int index, StyleValueType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D5C")]
	[Address(RVA = "0x6BEFD10", Offset = "0x6BEED10", VA = "0x6BEFD10")]
	public bool IsKeyword(int index, StyleValueKeyword keyword)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D5D")]
	[Address(RVA = "0x6BEFD90", Offset = "0x6BEED90", VA = "0x6BEFD90")]
	public string ReadAsString(int index)
	{
		return null;
	}

	[Token(Token = "0x6002D5E")]
	[Address(RVA = "0x6BF00D0", Offset = "0x6BEF0D0", VA = "0x6BF00D0")]
	public Length ReadLength(int index)
	{
		return default(Length);
	}

	[Token(Token = "0x6002D5F")]
	[Address(RVA = "0x6BF01C0", Offset = "0x6BEF1C0", VA = "0x6BF01C0")]
	public TimeValue ReadTimeValue(int index)
	{
		return default(TimeValue);
	}

	[Token(Token = "0x6002D60")]
	[Address(RVA = "0x6BF0250", Offset = "0x6BEF250", VA = "0x6BF0250")]
	public Translate ReadTranslate(int index)
	{
		return default(Translate);
	}

	[Token(Token = "0x6002D61")]
	[Address(RVA = "0x6BF0640", Offset = "0x6BEF640", VA = "0x6BF0640")]
	public TransformOrigin ReadTransformOrigin(int index)
	{
		return default(TransformOrigin);
	}

	[Token(Token = "0x6002D62")]
	[Address(RVA = "0x6BF0950", Offset = "0x6BEF950", VA = "0x6BF0950")]
	public Rotate ReadRotate(int index)
	{
		return default(Rotate);
	}

	[Token(Token = "0x6002D63")]
	[Address(RVA = "0x6BF0D00", Offset = "0x6BEFD00", VA = "0x6BF0D00")]
	public Scale ReadScale(int index)
	{
		return default(Scale);
	}

	[Token(Token = "0x6002D64")]
	[Address(RVA = "0x6BF1020", Offset = "0x6BF0020", VA = "0x6BF1020")]
	public float ReadFloat(int index)
	{
		return default(float);
	}

	[Token(Token = "0x6002D65")]
	[Address(RVA = "0x6BF1090", Offset = "0x6BF0090", VA = "0x6BF1090")]
	public int ReadInt(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6002D66")]
	[Address(RVA = "0x6BF1100", Offset = "0x6BF0100", VA = "0x6BF1100")]
	public Color ReadColor(int index)
	{
		return default(Color);
	}

	[Token(Token = "0x6002D67")]
	[Address(RVA = "0x6BF1170", Offset = "0x6BF0170", VA = "0x6BF1170")]
	public int ReadEnum(StyleEnumType enumType, int index)
	{
		return default(int);
	}

	[Token(Token = "0x6002D68")]
	[Address(RVA = "0x6BF1260", Offset = "0x6BF0260", VA = "0x6BF1260")]
	public Object ReadAsset(int index)
	{
		return null;
	}

	[Token(Token = "0x6002D69")]
	[Address(RVA = "0x6BF13C0", Offset = "0x6BF03C0", VA = "0x6BF13C0")]
	public FontDefinition ReadFontDefinition(int index)
	{
		return default(FontDefinition);
	}

	[Token(Token = "0x6002D6A")]
	[Address(RVA = "0x6BF1930", Offset = "0x6BF0930", VA = "0x6BF1930")]
	public Font ReadFont(int index)
	{
		return null;
	}

	[Token(Token = "0x6002D6B")]
	[Address(RVA = "0x6BF1C80", Offset = "0x6BF0C80", VA = "0x6BF1C80")]
	public MaterialDefinition ReadMaterialDefinition(int index)
	{
		return default(MaterialDefinition);
	}

	[Token(Token = "0x6002D6C")]
	[Address(RVA = "0x6BF1CD0", Offset = "0x6BF0CD0", VA = "0x6BF1CD0")]
	public Background ReadBackground(int index)
	{
		return default(Background);
	}

	[Token(Token = "0x6002D6D")]
	[Address(RVA = "0x6BF2BF0", Offset = "0x6BF1BF0", VA = "0x6BF2BF0")]
	public Cursor ReadCursor(int index)
	{
		return default(Cursor);
	}

	[Token(Token = "0x6002D6E")]
	[Address(RVA = "0x6BF2F20", Offset = "0x6BF1F20", VA = "0x6BF2F20")]
	public TextShadow ReadTextShadow(int index)
	{
		return default(TextShadow);
	}

	[Token(Token = "0x6002D6F")]
	[Address(RVA = "0x6BF3500", Offset = "0x6BF2500", VA = "0x6BF3500")]
	public TextAutoSize ReadTextAutoSize(int index)
	{
		return default(TextAutoSize);
	}

	[Token(Token = "0x6002D70")]
	[Address(RVA = "0x6BF37A0", Offset = "0x6BF27A0", VA = "0x6BF37A0")]
	public BackgroundPosition ReadBackgroundPositionX(int index)
	{
		return default(BackgroundPosition);
	}

	[Token(Token = "0x6002D71")]
	[Address(RVA = "0x6BF3860", Offset = "0x6BF2860", VA = "0x6BF3860")]
	public BackgroundPosition ReadBackgroundPositionY(int index)
	{
		return default(BackgroundPosition);
	}

	[Token(Token = "0x6002D72")]
	[Address(RVA = "0x6BF37B0", Offset = "0x6BF27B0", VA = "0x6BF37B0")]
	private BackgroundPosition ReadBackgroundPosition(int index, BackgroundPositionKeyword keyword)
	{
		return default(BackgroundPosition);
	}

	[Token(Token = "0x6002D73")]
	[Address(RVA = "0x6BF3A70", Offset = "0x6BF2A70", VA = "0x6BF3A70")]
	public BackgroundRepeat ReadBackgroundRepeat(int index)
	{
		return default(BackgroundRepeat);
	}

	[Token(Token = "0x6002D74")]
	[Address(RVA = "0x6BF3C60", Offset = "0x6BF2C60", VA = "0x6BF3C60")]
	public BackgroundSize ReadBackgroundSize(int index)
	{
		return default(BackgroundSize);
	}

	[Token(Token = "0x6002D75")]
	[Address(RVA = "0x6BF3FE0", Offset = "0x6BF2FE0", VA = "0x6BF3FE0")]
	public void ReadListEasingFunction(List<EasingFunction> list, int index)
	{
	}

	[Token(Token = "0x6002D76")]
	[Address(RVA = "0x6BF4270", Offset = "0x6BF3270", VA = "0x6BF4270")]
	public void ReadListTimeValue(List<TimeValue> list, int index)
	{
	}

	[Token(Token = "0x6002D77")]
	[Address(RVA = "0x6BF4430", Offset = "0x6BF3430", VA = "0x6BF4430")]
	public void ReadListFilterFunction(List<FilterFunction> list, int index)
	{
	}

	[Token(Token = "0x6002D78")]
	[Address(RVA = "0x6BF4B80", Offset = "0x6BF3B80", VA = "0x6BF4B80")]
	public void ReadListStylePropertyName(List<StylePropertyName> list, int index)
	{
	}

	[Token(Token = "0x6002D79")]
	[Address(RVA = "0x6BF4DC0", Offset = "0x6BF3DC0", VA = "0x6BF4DC0")]
	public StyleRatio ReadRatio(int index)
	{
		return default(StyleRatio);
	}

	[Token(Token = "0x6002D7A")]
	[Address(RVA = "0x6BEF580", Offset = "0x6BEE580", VA = "0x6BEF580")]
	private void LoadProperties()
	{
	}

	[Token(Token = "0x6002D7B")]
	[Address(RVA = "0x6BEFB20", Offset = "0x6BEEB20", VA = "0x6BEFB20")]
	private void SetCurrentProperty()
	{
	}

	[Token(Token = "0x6002D7C")]
	[Address(RVA = "0x6BF0780", Offset = "0x6BEF780", VA = "0x6BF0780")]
	public static TransformOrigin ReadTransformOrigin(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue zVvalue)
	{
		return default(TransformOrigin);
	}

	[Token(Token = "0x6002D7D")]
	[Address(RVA = "0x6BF5120", Offset = "0x6BF4120", VA = "0x6BF5120")]
	private static Length ReadTransformOriginEnum(StylePropertyValue value, out bool isVertical, out bool isHorizontal)
	{
		return default(Length);
	}

	[Token(Token = "0x6002D7E")]
	[Address(RVA = "0x6BF0390", Offset = "0x6BEF390", VA = "0x6BF0390")]
	public static Translate ReadTranslate(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue val3)
	{
		return default(Translate);
	}

	[Token(Token = "0x6002D7F")]
	[Address(RVA = "0x6BF0E10", Offset = "0x6BEFE10", VA = "0x6BF0E10")]
	public static Scale ReadScale(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue val3)
	{
		return default(Scale);
	}

	[Token(Token = "0x6002D80")]
	[Address(RVA = "0x6BF0B20", Offset = "0x6BEFB20", VA = "0x6BF0B20")]
	public static Rotate ReadRotate(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue val3, StylePropertyValue val4)
	{
		return default(Rotate);
	}

	[Token(Token = "0x6002D81")]
	[Address(RVA = "0x6BF53D0", Offset = "0x6BF43D0", VA = "0x6BF53D0")]
	private static bool TryReadEnum(StyleEnumType enumType, StylePropertyValue value, out int intValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D82")]
	[Address(RVA = "0x6BF5260", Offset = "0x6BF4260", VA = "0x6BF5260")]
	private static int ReadEnum(StyleEnumType enumType, StylePropertyValue value)
	{
		return default(int);
	}

	[Token(Token = "0x6002D83")]
	[Address(RVA = "0x6BF5320", Offset = "0x6BF4320", VA = "0x6BF5320")]
	public static Angle ReadAngle(StylePropertyValue value)
	{
		return default(Angle);
	}

	[Token(Token = "0x6002D84")]
	[Address(RVA = "0x6BF3870", Offset = "0x6BF2870", VA = "0x6BF3870")]
	public static BackgroundPosition ReadBackgroundPosition(int valCount, StylePropertyValue val1, StylePropertyValue val2, BackgroundPositionKeyword keyword)
	{
		return default(BackgroundPosition);
	}

	[Token(Token = "0x6002D85")]
	[Address(RVA = "0x6BF3BB0", Offset = "0x6BF2BB0", VA = "0x6BF3BB0")]
	public static BackgroundRepeat ReadBackgroundRepeat(int valCount, StylePropertyValue val1, StylePropertyValue val2)
	{
		return default(BackgroundRepeat);
	}

	[Token(Token = "0x6002D86")]
	[Address(RVA = "0x6BF3D40", Offset = "0x6BF2D40", VA = "0x6BF3D40")]
	public static BackgroundSize ReadBackgroundSize(int valCount, StylePropertyValue val1, StylePropertyValue val2)
	{
		return default(BackgroundSize);
	}

	[Token(Token = "0x6002D87")]
	[Address(RVA = "0x6BF30F0", Offset = "0x6BF20F0", VA = "0x6BF30F0")]
	public static TextShadow ReadTextShadow(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue val3, StylePropertyValue val4)
	{
		return default(TextShadow);
	}

	[Token(Token = "0x6002D88")]
	[Address(RVA = "0x6BF3640", Offset = "0x6BF2640", VA = "0x6BF3640")]
	public static TextAutoSize ReadTextAutoSize(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue val3)
	{
		return default(TextAutoSize);
	}

	[Token(Token = "0x6002D89")]
	[Address(RVA = "0x6BF2D40", Offset = "0x6BF1D40", VA = "0x6BF2D40")]
	internal static Cursor ReadCursor(int valueCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue val3, float dpiScaling = 1f)
	{
		return default(Cursor);
	}

	[Token(Token = "0x6002D8A")]
	[Address(RVA = "0x6BF1F70", Offset = "0x6BF0F70", VA = "0x6BF1F70")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
	internal static bool TryGetImageSourceFromValue(StylePropertyValue propertyValue, float dpiScaling, out ImageSource source)
	{
		return default(bool);
	}

	[Token(Token = "0x6002D8B")]
	[Address(RVA = "0x6BF5480", Offset = "0x6BF4480", VA = "0x6BF5480")]
	public StylePropertyReader()
	{
	}
}
