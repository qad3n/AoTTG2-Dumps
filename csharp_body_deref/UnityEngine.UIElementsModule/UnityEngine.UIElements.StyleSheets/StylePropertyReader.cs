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
		[Address(RVA = "0x4FC6F70", Offset = "0x4FC6F70", VA = "0x4FC6F70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001FEB")]
		[Address(RVA = "0x4FC6F80", Offset = "0x4FC6F80", VA = "0x4FC6F80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700084E")]
	public StylePropertyId propertyId
	{
		[Token(Token = "0x6001FEC")]
		[Address(RVA = "0x4FC6F90", Offset = "0x4FC6F90", VA = "0x4FC6F90")]
		[CompilerGenerated]
		get
		{
			return default(StylePropertyId);
		}
		[Token(Token = "0x6001FED")]
		[Address(RVA = "0x4FC6FA0", Offset = "0x4FC6FA0", VA = "0x4FC6FA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700084F")]
	public int valueCount
	{
		[Token(Token = "0x6001FEE")]
		[Address(RVA = "0x4FC6FB0", Offset = "0x4FC6FB0", VA = "0x4FC6FB0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6001FEF")]
		[Address(RVA = "0x4FC6FC0", Offset = "0x4FC6FC0", VA = "0x4FC6FC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000850")]
	public float dpiScaling
	{
		[Token(Token = "0x6001FF0")]
		[Address(RVA = "0x4FC6FD0", Offset = "0x4FC6FD0", VA = "0x4FC6FD0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6001FF1")]
		[Address(RVA = "0x4FC6FE0", Offset = "0x4FC6FE0", VA = "0x4FC6FE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6001FF2")]
	[Address(RVA = "0x4FC6FF0", Offset = "0x4FC6FF0", VA = "0x4FC6FF0")]
	public void SetContext(StyleSheet sheet, StyleComplexSelector selector, StyleVariableContext varContext, float dpiScaling = 1f)
	{
	}

	[Token(Token = "0x6001FF3")]
	[Address(RVA = "0x4FC77E0", Offset = "0x4FC77E0", VA = "0x4FC77E0")]
	public void SetInlineContext(StyleSheet sheet, StyleProperty[] properties, StylePropertyId[] propertyIds, float dpiScaling = 1f)
	{
	}

	[Token(Token = "0x6001FF4")]
	[Address(RVA = "0x4FC7850", Offset = "0x4FC7850", VA = "0x4FC7850")]
	public StylePropertyId MoveNextProperty()
	{
		return default(StylePropertyId);
	}

	[Token(Token = "0x6001FF5")]
	[Address(RVA = "0x4FC7940", Offset = "0x4FC7940", VA = "0x4FC7940")]
	public StylePropertyValue GetValue(int index)
	{
		return default(StylePropertyValue);
	}

	[Token(Token = "0x6001FF6")]
	[Address(RVA = "0x4FC7990", Offset = "0x4FC7990", VA = "0x4FC7990")]
	public StyleValueType GetValueType(int index)
	{
		return default(StyleValueType);
	}

	[Token(Token = "0x6001FF7")]
	[Address(RVA = "0x4FC7A00", Offset = "0x4FC7A00", VA = "0x4FC7A00")]
	public bool IsValueType(int index, StyleValueType type)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FF8")]
	[Address(RVA = "0x4FC7A80", Offset = "0x4FC7A80", VA = "0x4FC7A80")]
	public bool IsKeyword(int index, StyleValueKeyword keyword)
	{
		return default(bool);
	}

	[Token(Token = "0x6001FF9")]
	[Address(RVA = "0x4FC7B00", Offset = "0x4FC7B00", VA = "0x4FC7B00")]
	public string ReadAsString(int index)
	{
		return null;
	}

	[Token(Token = "0x6001FFA")]
	[Address(RVA = "0x4FC7E80", Offset = "0x4FC7E80", VA = "0x4FC7E80")]
	public Length ReadLength(int index)
	{
		return default(Length);
	}

	[Token(Token = "0x6001FFB")]
	[Address(RVA = "0x4FC7F80", Offset = "0x4FC7F80", VA = "0x4FC7F80")]
	public TimeValue ReadTimeValue(int index)
	{
		return default(TimeValue);
	}

	[Token(Token = "0x6001FFC")]
	[Address(RVA = "0x4FC8010", Offset = "0x4FC8010", VA = "0x4FC8010")]
	public Translate ReadTranslate(int index)
	{
		return default(Translate);
	}

	[Token(Token = "0x6001FFD")]
	[Address(RVA = "0x4FC8420", Offset = "0x4FC8420", VA = "0x4FC8420")]
	public TransformOrigin ReadTransformOrigin(int index)
	{
		return default(TransformOrigin);
	}

	[Token(Token = "0x6001FFE")]
	[Address(RVA = "0x4FC8740", Offset = "0x4FC8740", VA = "0x4FC8740")]
	public Rotate ReadRotate(int index)
	{
		return default(Rotate);
	}

	[Token(Token = "0x6001FFF")]
	[Address(RVA = "0x4FC8980", Offset = "0x4FC8980", VA = "0x4FC8980")]
	public Scale ReadScale(int index)
	{
		return default(Scale);
	}

	[Token(Token = "0x6002000")]
	[Address(RVA = "0x4FC8CA0", Offset = "0x4FC8CA0", VA = "0x4FC8CA0")]
	public float ReadFloat(int index)
	{
		return default(float);
	}

	[Token(Token = "0x6002001")]
	[Address(RVA = "0x4FC8D10", Offset = "0x4FC8D10", VA = "0x4FC8D10")]
	public int ReadInt(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6002002")]
	[Address(RVA = "0x4FC8D80", Offset = "0x4FC8D80", VA = "0x4FC8D80")]
	public Color ReadColor(int index)
	{
		return default(Color);
	}

	[Token(Token = "0x6002003")]
	[Address(RVA = "0x4FC8F60", Offset = "0x4FC8F60", VA = "0x4FC8F60")]
	public int ReadEnum(StyleEnumType enumType, int index)
	{
		return default(int);
	}

	[Token(Token = "0x6002004")]
	[Address(RVA = "0x4FC9050", Offset = "0x4FC9050", VA = "0x4FC9050")]
	public FontDefinition ReadFontDefinition(int index)
	{
		return default(FontDefinition);
	}

	[Token(Token = "0x6002005")]
	[Address(RVA = "0x4FC95D0", Offset = "0x4FC95D0", VA = "0x4FC95D0")]
	public Font ReadFont(int index)
	{
		return null;
	}

	[Token(Token = "0x6002006")]
	[Address(RVA = "0x4FC98F0", Offset = "0x4FC98F0", VA = "0x4FC98F0")]
	public Background ReadBackground(int index)
	{
		return default(Background);
	}

	[Token(Token = "0x6002007")]
	[Address(RVA = "0x4FCA340", Offset = "0x4FCA340", VA = "0x4FCA340")]
	public Cursor ReadCursor(int index)
	{
		return default(Cursor);
	}

	[Token(Token = "0x6002008")]
	[Address(RVA = "0x4FCA730", Offset = "0x4FCA730", VA = "0x4FCA730")]
	public TextShadow ReadTextShadow(int index)
	{
		return default(TextShadow);
	}

	[Token(Token = "0x6002009")]
	[Address(RVA = "0x4FCAC20", Offset = "0x4FCAC20", VA = "0x4FCAC20")]
	public BackgroundPosition ReadBackgroundPositionX(int index)
	{
		return default(BackgroundPosition);
	}

	[Token(Token = "0x600200A")]
	[Address(RVA = "0x4FCACE0", Offset = "0x4FCACE0", VA = "0x4FCACE0")]
	public BackgroundPosition ReadBackgroundPositionY(int index)
	{
		return default(BackgroundPosition);
	}

	[Token(Token = "0x600200B")]
	[Address(RVA = "0x4FCAC30", Offset = "0x4FCAC30", VA = "0x4FCAC30")]
	private BackgroundPosition ReadBackgroundPosition(int index, BackgroundPositionKeyword keyword)
	{
		return default(BackgroundPosition);
	}

	[Token(Token = "0x600200C")]
	[Address(RVA = "0x4FCAEF0", Offset = "0x4FCAEF0", VA = "0x4FCAEF0")]
	public BackgroundRepeat ReadBackgroundRepeat(int index)
	{
		return default(BackgroundRepeat);
	}

	[Token(Token = "0x600200D")]
	[Address(RVA = "0x4FCB0E0", Offset = "0x4FCB0E0", VA = "0x4FCB0E0")]
	public BackgroundSize ReadBackgroundSize(int index)
	{
		return default(BackgroundSize);
	}

	[Token(Token = "0x600200E")]
	[Address(RVA = "0x4FCB430", Offset = "0x4FCB430", VA = "0x4FCB430")]
	public void ReadListEasingFunction(List<EasingFunction> list, int index)
	{
	}

	[Token(Token = "0x600200F")]
	[Address(RVA = "0x4FCB620", Offset = "0x4FCB620", VA = "0x4FCB620")]
	public void ReadListTimeValue(List<TimeValue> list, int index)
	{
	}

	[Token(Token = "0x6002010")]
	[Address(RVA = "0x4FCB7F0", Offset = "0x4FCB7F0", VA = "0x4FCB7F0")]
	public void ReadListStylePropertyName(List<StylePropertyName> list, int index)
	{
	}

	[Token(Token = "0x6002011")]
	[Address(RVA = "0x4FC72B0", Offset = "0x4FC72B0", VA = "0x4FC72B0")]
	private void LoadProperties()
	{
	}

	[Token(Token = "0x6002012")]
	[Address(RVA = "0x4FC7870", Offset = "0x4FC7870", VA = "0x4FC7870")]
	private void SetCurrentProperty()
	{
	}

	[Token(Token = "0x6002013")]
	[Address(RVA = "0x4FC8560", Offset = "0x4FC8560", VA = "0x4FC8560")]
	public static TransformOrigin ReadTransformOrigin(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue zVvalue)
	{
		return default(TransformOrigin);
	}

	[Token(Token = "0x6002014")]
	[Address(RVA = "0x4FCB9E0", Offset = "0x4FCB9E0", VA = "0x4FCB9E0")]
	private static Length ReadTransformOriginEnum(StylePropertyValue value, out bool isVertical, out bool isHorizontal)
	{
		return default(Length);
	}

	[Token(Token = "0x6002015")]
	[Address(RVA = "0x4FC8160", Offset = "0x4FC8160", VA = "0x4FC8160")]
	public static Translate ReadTranslate(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue val3)
	{
		return default(Translate);
	}

	[Token(Token = "0x6002016")]
	[Address(RVA = "0x4FC8A90", Offset = "0x4FC8A90", VA = "0x4FC8A90")]
	public static Scale ReadScale(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue val3)
	{
		return default(Scale);
	}

	[Token(Token = "0x6002017")]
	[Address(RVA = "0x4FC8870", Offset = "0x4FC8870", VA = "0x4FC8870")]
	public static Rotate ReadRotate(int valCount, StylePropertyValue val1, StylePropertyValue val2, StylePropertyValue val3, StylePropertyValue val4)
	{
		return default(Rotate);
	}

	[Token(Token = "0x6002018")]
	[Address(RVA = "0x4FCBC40", Offset = "0x4FCBC40", VA = "0x4FCBC40")]
	private static bool TryReadEnum(StyleEnumType enumType, StylePropertyValue value, out int intValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6002019")]
	[Address(RVA = "0x4FCBB20", Offset = "0x4FCBB20", VA = "0x4FCBB20")]
	private static int ReadEnum(StyleEnumType enumType, StylePropertyValue value)
	{
		return default(int);
	}

	[Token(Token = "0x600201A")]
	[Address(RVA = "0x4FCBBD0", Offset = "0x4FCBBD0", VA = "0x4FCBBD0")]
	public static Angle ReadAngle(StylePropertyValue value)
	{
		return default(Angle);
	}

	[Token(Token = "0x600201B")]
	[Address(RVA = "0x4FCACF0", Offset = "0x4FCACF0", VA = "0x4FCACF0")]
	public static BackgroundPosition ReadBackgroundPosition(int valCount, StylePropertyValue val1, StylePropertyValue val2, BackgroundPositionKeyword keyword)
	{
		return default(BackgroundPosition);
	}

	[Token(Token = "0x600201C")]
	[Address(RVA = "0x4FCB030", Offset = "0x4FCB030", VA = "0x4FCB030")]
	public static BackgroundRepeat ReadBackgroundRepeat(int valCount, StylePropertyValue val1, StylePropertyValue val2)
	{
		return default(BackgroundRepeat);
	}

	[Token(Token = "0x600201D")]
	[Address(RVA = "0x4FCB1C0", Offset = "0x4FCB1C0", VA = "0x4FCB1C0")]
	public static BackgroundSize ReadBackgroundSize(int valCount, StylePropertyValue val1, StylePropertyValue val2)
	{
		return default(BackgroundSize);
	}

	[Token(Token = "0x600201E")]
	[Address(RVA = "0x4FC9B50", Offset = "0x4FC9B50", VA = "0x4FC9B50")]
	internal static bool TryGetImageSourceFromValue(StylePropertyValue propertyValue, float dpiScaling, out ImageSource source)
	{
		return default(bool);
	}

	[Token(Token = "0x600201F")]
	[Address(RVA = "0x4FCBCE0", Offset = "0x4FCBCE0", VA = "0x4FCBCE0")]
	public StylePropertyReader()
	{
	}
}
