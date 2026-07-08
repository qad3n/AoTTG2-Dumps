using System;
using System.Collections.Generic;
using Il2CppDummyDll;
using UnityEngine.UIElements.StyleSheets;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000271")]
internal struct ComputedStyle
{
	[Token(Token = "0x4000901")]
	[FieldOffset(Offset = "0x0")]
	public StyleDataRef<InheritedData> inheritedData;

	[Token(Token = "0x4000902")]
	[FieldOffset(Offset = "0x8")]
	public StyleDataRef<LayoutData> layoutData;

	[Token(Token = "0x4000903")]
	[FieldOffset(Offset = "0x10")]
	public StyleDataRef<RareData> rareData;

	[Token(Token = "0x4000904")]
	[FieldOffset(Offset = "0x18")]
	public StyleDataRef<TransformData> transformData;

	[Token(Token = "0x4000905")]
	[FieldOffset(Offset = "0x20")]
	public StyleDataRef<TransitionData> transitionData;

	[Token(Token = "0x4000906")]
	[FieldOffset(Offset = "0x28")]
	public StyleDataRef<VisualData> visualData;

	[Token(Token = "0x4000907")]
	[FieldOffset(Offset = "0x30")]
	public Dictionary<string, StylePropertyValue> customProperties;

	[Token(Token = "0x4000908")]
	[FieldOffset(Offset = "0x38")]
	public long matchingRulesHash;

	[Token(Token = "0x4000909")]
	[FieldOffset(Offset = "0x40")]
	public float dpiScaling;

	[Token(Token = "0x400090A")]
	[FieldOffset(Offset = "0x48")]
	public ComputedTransitionProperty[] computedTransitions;

	[Token(Token = "0x17000319")]
	public int customPropertiesCount
	{
		[Token(Token = "0x6000FFA")]
		[Address(RVA = "0x4D2BE70", Offset = "0x4D2BE70", VA = "0x4D2BE70")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700031A")]
	public bool hasTransition
	{
		[Token(Token = "0x6000FFB")]
		[Address(RVA = "0x4D2BEB0", Offset = "0x4D2BEB0", VA = "0x4D2BEB0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700031B")]
	public Align alignContent
	{
		[Token(Token = "0x6001008")]
		[Address(RVA = "0x4D2ED20", Offset = "0x4D2ED20", VA = "0x4D2ED20")]
		get
		{
			return default(Align);
		}
	}

	[Token(Token = "0x1700031C")]
	public Align alignItems
	{
		[Token(Token = "0x6001009")]
		[Address(RVA = "0x4D2ED60", Offset = "0x4D2ED60", VA = "0x4D2ED60")]
		get
		{
			return default(Align);
		}
	}

	[Token(Token = "0x1700031D")]
	public Align alignSelf
	{
		[Token(Token = "0x600100A")]
		[Address(RVA = "0x4D2EDA0", Offset = "0x4D2EDA0", VA = "0x4D2EDA0")]
		get
		{
			return default(Align);
		}
	}

	[Token(Token = "0x1700031E")]
	public Color backgroundColor
	{
		[Token(Token = "0x600100B")]
		[Address(RVA = "0x4D2EDE0", Offset = "0x4D2EDE0", VA = "0x4D2EDE0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700031F")]
	public Background backgroundImage
	{
		[Token(Token = "0x600100C")]
		[Address(RVA = "0x4D2EE30", Offset = "0x4D2EE30", VA = "0x4D2EE30")]
		get
		{
			return default(Background);
		}
	}

	[Token(Token = "0x17000320")]
	public BackgroundPosition backgroundPositionX
	{
		[Token(Token = "0x600100D")]
		[Address(RVA = "0x4D2EE90", Offset = "0x4D2EE90", VA = "0x4D2EE90")]
		get
		{
			return default(BackgroundPosition);
		}
	}

	[Token(Token = "0x17000321")]
	public BackgroundPosition backgroundPositionY
	{
		[Token(Token = "0x600100E")]
		[Address(RVA = "0x4D2EEE0", Offset = "0x4D2EEE0", VA = "0x4D2EEE0")]
		get
		{
			return default(BackgroundPosition);
		}
	}

	[Token(Token = "0x17000322")]
	public BackgroundRepeat backgroundRepeat
	{
		[Token(Token = "0x600100F")]
		[Address(RVA = "0x4D2EF30", Offset = "0x4D2EF30", VA = "0x4D2EF30")]
		get
		{
			return default(BackgroundRepeat);
		}
	}

	[Token(Token = "0x17000323")]
	public BackgroundSize backgroundSize
	{
		[Token(Token = "0x6001010")]
		[Address(RVA = "0x4D2EF70", Offset = "0x4D2EF70", VA = "0x4D2EF70")]
		get
		{
			return default(BackgroundSize);
		}
	}

	[Token(Token = "0x17000324")]
	public Color borderBottomColor
	{
		[Token(Token = "0x6001011")]
		[Address(RVA = "0x4D2EFD0", Offset = "0x4D2EFD0", VA = "0x4D2EFD0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000325")]
	public Length borderBottomLeftRadius
	{
		[Token(Token = "0x6001012")]
		[Address(RVA = "0x4D2F020", Offset = "0x4D2F020", VA = "0x4D2F020")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000326")]
	public Length borderBottomRightRadius
	{
		[Token(Token = "0x6001013")]
		[Address(RVA = "0x4D2F060", Offset = "0x4D2F060", VA = "0x4D2F060")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000327")]
	public float borderBottomWidth
	{
		[Token(Token = "0x6001014")]
		[Address(RVA = "0x4D2F0A0", Offset = "0x4D2F0A0", VA = "0x4D2F0A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000328")]
	public Color borderLeftColor
	{
		[Token(Token = "0x6001015")]
		[Address(RVA = "0x4D2F0E0", Offset = "0x4D2F0E0", VA = "0x4D2F0E0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000329")]
	public float borderLeftWidth
	{
		[Token(Token = "0x6001016")]
		[Address(RVA = "0x4D2F130", Offset = "0x4D2F130", VA = "0x4D2F130")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700032A")]
	public Color borderRightColor
	{
		[Token(Token = "0x6001017")]
		[Address(RVA = "0x4D2F170", Offset = "0x4D2F170", VA = "0x4D2F170")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700032B")]
	public float borderRightWidth
	{
		[Token(Token = "0x6001018")]
		[Address(RVA = "0x4D2F1C0", Offset = "0x4D2F1C0", VA = "0x4D2F1C0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700032C")]
	public Color borderTopColor
	{
		[Token(Token = "0x6001019")]
		[Address(RVA = "0x4D2F200", Offset = "0x4D2F200", VA = "0x4D2F200")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700032D")]
	public Length borderTopLeftRadius
	{
		[Token(Token = "0x600101A")]
		[Address(RVA = "0x4D2F250", Offset = "0x4D2F250", VA = "0x4D2F250")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700032E")]
	public Length borderTopRightRadius
	{
		[Token(Token = "0x600101B")]
		[Address(RVA = "0x4D2F290", Offset = "0x4D2F290", VA = "0x4D2F290")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700032F")]
	public float borderTopWidth
	{
		[Token(Token = "0x600101C")]
		[Address(RVA = "0x4D2F2D0", Offset = "0x4D2F2D0", VA = "0x4D2F2D0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000330")]
	public Length bottom
	{
		[Token(Token = "0x600101D")]
		[Address(RVA = "0x4D2F310", Offset = "0x4D2F310", VA = "0x4D2F310")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000331")]
	public Color color
	{
		[Token(Token = "0x600101E")]
		[Address(RVA = "0x4D2F350", Offset = "0x4D2F350", VA = "0x4D2F350")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000332")]
	public Cursor cursor
	{
		[Token(Token = "0x600101F")]
		[Address(RVA = "0x4D2F390", Offset = "0x4D2F390", VA = "0x4D2F390")]
		get
		{
			return default(Cursor);
		}
	}

	[Token(Token = "0x17000333")]
	public DisplayStyle display
	{
		[Token(Token = "0x6001020")]
		[Address(RVA = "0x4D2F3F0", Offset = "0x4D2F3F0", VA = "0x4D2F3F0")]
		get
		{
			return default(DisplayStyle);
		}
	}

	[Token(Token = "0x17000334")]
	public Length flexBasis
	{
		[Token(Token = "0x6001021")]
		[Address(RVA = "0x4D2F430", Offset = "0x4D2F430", VA = "0x4D2F430")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000335")]
	public FlexDirection flexDirection
	{
		[Token(Token = "0x6001022")]
		[Address(RVA = "0x4D2F470", Offset = "0x4D2F470", VA = "0x4D2F470")]
		get
		{
			return default(FlexDirection);
		}
	}

	[Token(Token = "0x17000336")]
	public float flexGrow
	{
		[Token(Token = "0x6001023")]
		[Address(RVA = "0x4D2F4B0", Offset = "0x4D2F4B0", VA = "0x4D2F4B0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000337")]
	public float flexShrink
	{
		[Token(Token = "0x6001024")]
		[Address(RVA = "0x4D2F4F0", Offset = "0x4D2F4F0", VA = "0x4D2F4F0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000338")]
	public Wrap flexWrap
	{
		[Token(Token = "0x6001025")]
		[Address(RVA = "0x4D2F530", Offset = "0x4D2F530", VA = "0x4D2F530")]
		get
		{
			return default(Wrap);
		}
	}

	[Token(Token = "0x17000339")]
	public Length fontSize
	{
		[Token(Token = "0x6001026")]
		[Address(RVA = "0x4D2BFF0", Offset = "0x4D2BFF0", VA = "0x4D2BFF0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700033A")]
	public Length height
	{
		[Token(Token = "0x6001027")]
		[Address(RVA = "0x4D2F570", Offset = "0x4D2F570", VA = "0x4D2F570")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700033B")]
	public Justify justifyContent
	{
		[Token(Token = "0x6001028")]
		[Address(RVA = "0x4D2F5B0", Offset = "0x4D2F5B0", VA = "0x4D2F5B0")]
		get
		{
			return default(Justify);
		}
	}

	[Token(Token = "0x1700033C")]
	public Length left
	{
		[Token(Token = "0x6001029")]
		[Address(RVA = "0x4D2F5F0", Offset = "0x4D2F5F0", VA = "0x4D2F5F0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700033D")]
	public Length letterSpacing
	{
		[Token(Token = "0x600102A")]
		[Address(RVA = "0x4D2F630", Offset = "0x4D2F630", VA = "0x4D2F630")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700033E")]
	public Length marginBottom
	{
		[Token(Token = "0x600102B")]
		[Address(RVA = "0x4D2F670", Offset = "0x4D2F670", VA = "0x4D2F670")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700033F")]
	public Length marginLeft
	{
		[Token(Token = "0x600102C")]
		[Address(RVA = "0x4D2F6B0", Offset = "0x4D2F6B0", VA = "0x4D2F6B0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000340")]
	public Length marginRight
	{
		[Token(Token = "0x600102D")]
		[Address(RVA = "0x4D2F6F0", Offset = "0x4D2F6F0", VA = "0x4D2F6F0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000341")]
	public Length marginTop
	{
		[Token(Token = "0x600102E")]
		[Address(RVA = "0x4D2F730", Offset = "0x4D2F730", VA = "0x4D2F730")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000342")]
	public Length maxHeight
	{
		[Token(Token = "0x600102F")]
		[Address(RVA = "0x4D2F770", Offset = "0x4D2F770", VA = "0x4D2F770")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000343")]
	public Length maxWidth
	{
		[Token(Token = "0x6001030")]
		[Address(RVA = "0x4D2F7B0", Offset = "0x4D2F7B0", VA = "0x4D2F7B0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000344")]
	public Length minHeight
	{
		[Token(Token = "0x6001031")]
		[Address(RVA = "0x4D2F7F0", Offset = "0x4D2F7F0", VA = "0x4D2F7F0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000345")]
	public Length minWidth
	{
		[Token(Token = "0x6001032")]
		[Address(RVA = "0x4D2F830", Offset = "0x4D2F830", VA = "0x4D2F830")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000346")]
	public float opacity
	{
		[Token(Token = "0x6001033")]
		[Address(RVA = "0x4D2F870", Offset = "0x4D2F870", VA = "0x4D2F870")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000347")]
	public OverflowInternal overflow
	{
		[Token(Token = "0x6001034")]
		[Address(RVA = "0x4D2F8B0", Offset = "0x4D2F8B0", VA = "0x4D2F8B0")]
		get
		{
			return default(OverflowInternal);
		}
	}

	[Token(Token = "0x17000348")]
	public Length paddingBottom
	{
		[Token(Token = "0x6001035")]
		[Address(RVA = "0x4D2F8F0", Offset = "0x4D2F8F0", VA = "0x4D2F8F0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000349")]
	public Length paddingLeft
	{
		[Token(Token = "0x6001036")]
		[Address(RVA = "0x4D2F930", Offset = "0x4D2F930", VA = "0x4D2F930")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700034A")]
	public Length paddingRight
	{
		[Token(Token = "0x6001037")]
		[Address(RVA = "0x4D2F970", Offset = "0x4D2F970", VA = "0x4D2F970")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700034B")]
	public Length paddingTop
	{
		[Token(Token = "0x6001038")]
		[Address(RVA = "0x4D2F9B0", Offset = "0x4D2F9B0", VA = "0x4D2F9B0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700034C")]
	public Position position
	{
		[Token(Token = "0x6001039")]
		[Address(RVA = "0x4D2F9F0", Offset = "0x4D2F9F0", VA = "0x4D2F9F0")]
		get
		{
			return default(Position);
		}
	}

	[Token(Token = "0x1700034D")]
	public Length right
	{
		[Token(Token = "0x600103A")]
		[Address(RVA = "0x4D2FA30", Offset = "0x4D2FA30", VA = "0x4D2FA30")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700034E")]
	public Rotate rotate
	{
		[Token(Token = "0x600103B")]
		[Address(RVA = "0x4D2FA70", Offset = "0x4D2FA70", VA = "0x4D2FA70")]
		get
		{
			return default(Rotate);
		}
	}

	[Token(Token = "0x1700034F")]
	public Scale scale
	{
		[Token(Token = "0x600103C")]
		[Address(RVA = "0x4D2FAD0", Offset = "0x4D2FAD0", VA = "0x4D2FAD0")]
		get
		{
			return default(Scale);
		}
	}

	[Token(Token = "0x17000350")]
	public TextOverflow textOverflow
	{
		[Token(Token = "0x600103D")]
		[Address(RVA = "0x4D2FB20", Offset = "0x4D2FB20", VA = "0x4D2FB20")]
		get
		{
			return default(TextOverflow);
		}
	}

	[Token(Token = "0x17000351")]
	public TextShadow textShadow
	{
		[Token(Token = "0x600103E")]
		[Address(RVA = "0x4D2FB60", Offset = "0x4D2FB60", VA = "0x4D2FB60")]
		get
		{
			return default(TextShadow);
		}
	}

	[Token(Token = "0x17000352")]
	public Length top
	{
		[Token(Token = "0x600103F")]
		[Address(RVA = "0x4D2FBC0", Offset = "0x4D2FBC0", VA = "0x4D2FBC0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000353")]
	public TransformOrigin transformOrigin
	{
		[Token(Token = "0x6001040")]
		[Address(RVA = "0x4D2FC00", Offset = "0x4D2FC00", VA = "0x4D2FC00")]
		get
		{
			return default(TransformOrigin);
		}
	}

	[Token(Token = "0x17000354")]
	public List<TimeValue> transitionDelay
	{
		[Token(Token = "0x6001041")]
		[Address(RVA = "0x4D2FC60", Offset = "0x4D2FC60", VA = "0x4D2FC60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000355")]
	public List<TimeValue> transitionDuration
	{
		[Token(Token = "0x6001042")]
		[Address(RVA = "0x4D2FCA0", Offset = "0x4D2FCA0", VA = "0x4D2FCA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000356")]
	public List<StylePropertyName> transitionProperty
	{
		[Token(Token = "0x6001043")]
		[Address(RVA = "0x4D2FCE0", Offset = "0x4D2FCE0", VA = "0x4D2FCE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000357")]
	public List<EasingFunction> transitionTimingFunction
	{
		[Token(Token = "0x6001044")]
		[Address(RVA = "0x4D2FD20", Offset = "0x4D2FD20", VA = "0x4D2FD20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000358")]
	public Translate translate
	{
		[Token(Token = "0x6001045")]
		[Address(RVA = "0x4D2FD60", Offset = "0x4D2FD60", VA = "0x4D2FD60")]
		get
		{
			return default(Translate);
		}
	}

	[Token(Token = "0x17000359")]
	public Color unityBackgroundImageTintColor
	{
		[Token(Token = "0x6001046")]
		[Address(RVA = "0x4D2FDC0", Offset = "0x4D2FDC0", VA = "0x4D2FDC0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700035A")]
	public Font unityFont
	{
		[Token(Token = "0x6001047")]
		[Address(RVA = "0x4D2FE10", Offset = "0x4D2FE10", VA = "0x4D2FE10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700035B")]
	public FontDefinition unityFontDefinition
	{
		[Token(Token = "0x6001048")]
		[Address(RVA = "0x4D2FE50", Offset = "0x4D2FE50", VA = "0x4D2FE50")]
		get
		{
			return default(FontDefinition);
		}
	}

	[Token(Token = "0x1700035C")]
	public FontStyle unityFontStyleAndWeight
	{
		[Token(Token = "0x6001049")]
		[Address(RVA = "0x4D2FE90", Offset = "0x4D2FE90", VA = "0x4D2FE90")]
		get
		{
			return default(FontStyle);
		}
	}

	[Token(Token = "0x1700035D")]
	public OverflowClipBox unityOverflowClipBox
	{
		[Token(Token = "0x600104A")]
		[Address(RVA = "0x4D2FED0", Offset = "0x4D2FED0", VA = "0x4D2FED0")]
		get
		{
			return default(OverflowClipBox);
		}
	}

	[Token(Token = "0x1700035E")]
	public Length unityParagraphSpacing
	{
		[Token(Token = "0x600104B")]
		[Address(RVA = "0x4D2FF10", Offset = "0x4D2FF10", VA = "0x4D2FF10")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700035F")]
	public int unitySliceBottom
	{
		[Token(Token = "0x600104C")]
		[Address(RVA = "0x4D2FF50", Offset = "0x4D2FF50", VA = "0x4D2FF50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000360")]
	public int unitySliceLeft
	{
		[Token(Token = "0x600104D")]
		[Address(RVA = "0x4D2FF90", Offset = "0x4D2FF90", VA = "0x4D2FF90")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000361")]
	public int unitySliceRight
	{
		[Token(Token = "0x600104E")]
		[Address(RVA = "0x4D2FFD0", Offset = "0x4D2FFD0", VA = "0x4D2FFD0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000362")]
	public float unitySliceScale
	{
		[Token(Token = "0x600104F")]
		[Address(RVA = "0x4D30010", Offset = "0x4D30010", VA = "0x4D30010")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000363")]
	public int unitySliceTop
	{
		[Token(Token = "0x6001050")]
		[Address(RVA = "0x4D30050", Offset = "0x4D30050", VA = "0x4D30050")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000364")]
	public TextAnchor unityTextAlign
	{
		[Token(Token = "0x6001051")]
		[Address(RVA = "0x4D30090", Offset = "0x4D30090", VA = "0x4D30090")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000365")]
	public Color unityTextOutlineColor
	{
		[Token(Token = "0x6001052")]
		[Address(RVA = "0x4D300D0", Offset = "0x4D300D0", VA = "0x4D300D0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000366")]
	public float unityTextOutlineWidth
	{
		[Token(Token = "0x6001053")]
		[Address(RVA = "0x4D30110", Offset = "0x4D30110", VA = "0x4D30110")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000367")]
	public TextOverflowPosition unityTextOverflowPosition
	{
		[Token(Token = "0x6001054")]
		[Address(RVA = "0x4D30150", Offset = "0x4D30150", VA = "0x4D30150")]
		get
		{
			return default(TextOverflowPosition);
		}
	}

	[Token(Token = "0x17000368")]
	public Visibility visibility
	{
		[Token(Token = "0x6001055")]
		[Address(RVA = "0x4D30190", Offset = "0x4D30190", VA = "0x4D30190")]
		get
		{
			return default(Visibility);
		}
	}

	[Token(Token = "0x17000369")]
	public WhiteSpace whiteSpace
	{
		[Token(Token = "0x6001056")]
		[Address(RVA = "0x4D301D0", Offset = "0x4D301D0", VA = "0x4D301D0")]
		get
		{
			return default(WhiteSpace);
		}
	}

	[Token(Token = "0x1700036A")]
	public Length width
	{
		[Token(Token = "0x6001057")]
		[Address(RVA = "0x4D30210", Offset = "0x4D30210", VA = "0x4D30210")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700036B")]
	public Length wordSpacing
	{
		[Token(Token = "0x6001058")]
		[Address(RVA = "0x4D30250", Offset = "0x4D30250", VA = "0x4D30250")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x6000FFC")]
	[Address(RVA = "0x4D2BED0", Offset = "0x4D2BED0", VA = "0x4D2BED0")]
	public void FinalizeApply(ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x6000FFD")]
	[Address(RVA = "0x4D2C030", Offset = "0x4D2C030", VA = "0x4D2C030")]
	private bool ApplyGlobalKeyword(StylePropertyReader reader, ref ComputedStyle parentStyle)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FFE")]
	[Address(RVA = "0x4D2C180", Offset = "0x4D2C180", VA = "0x4D2C180")]
	private bool ApplyGlobalKeyword(StylePropertyId id, StyleKeyword keyword, ref ComputedStyle parentStyle)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FFF")]
	[Address(RVA = "0x4D2DE50", Offset = "0x4D2DE50", VA = "0x4D2DE50")]
	private void RemoveCustomStyleProperty(StylePropertyReader reader)
	{
	}

	[Token(Token = "0x6001000")]
	[Address(RVA = "0x4D2DEF0", Offset = "0x4D2DEF0", VA = "0x4D2DEF0")]
	private void ApplyCustomStyleProperty(StylePropertyReader reader)
	{
	}

	[Token(Token = "0x6001001")]
	[Address(RVA = "0x4D2DFE0", Offset = "0x4D2DFE0", VA = "0x4D2DFE0")]
	private void ApplyAllPropertyInitial()
	{
	}

	[Token(Token = "0x6001002")]
	[Address(RVA = "0x4D2E160", Offset = "0x4D2E160", VA = "0x4D2E160")]
	private void ResetComputedTransitions()
	{
	}

	[Token(Token = "0x6001003")]
	[Address(RVA = "0x4D2E180", Offset = "0x4D2E180", VA = "0x4D2E180")]
	public static bool StartAnimationInlineTextShadow(VisualElement element, ref ComputedStyle computedStyle, StyleTextShadow textShadow, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001004")]
	[Address(RVA = "0x4D2E3E0", Offset = "0x4D2E3E0", VA = "0x4D2E3E0")]
	public static bool StartAnimationInlineRotate(VisualElement element, ref ComputedStyle computedStyle, StyleRotate rotate, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001005")]
	[Address(RVA = "0x4D2E660", Offset = "0x4D2E660", VA = "0x4D2E660")]
	public static bool StartAnimationInlineTranslate(VisualElement element, ref ComputedStyle computedStyle, StyleTranslate translate, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001006")]
	[Address(RVA = "0x4D2E8E0", Offset = "0x4D2E8E0", VA = "0x4D2E8E0")]
	public static bool StartAnimationInlineScale(VisualElement element, ref ComputedStyle computedStyle, StyleScale scale, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001007")]
	[Address(RVA = "0x4D2EAA0", Offset = "0x4D2EAA0", VA = "0x4D2EAA0")]
	public static bool StartAnimationInlineTransformOrigin(VisualElement element, ref ComputedStyle computedStyle, StyleTransformOrigin transformOrigin, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001059")]
	[Address(RVA = "0x4D30290", Offset = "0x4D30290", VA = "0x4D30290")]
	public static ComputedStyle Create(ref ComputedStyle parentStyle)
	{
		return default(ComputedStyle);
	}

	[Token(Token = "0x600105A")]
	[Address(RVA = "0x4D30490", Offset = "0x4D30490", VA = "0x4D30490")]
	public static ComputedStyle CreateInitial()
	{
		return default(ComputedStyle);
	}

	[Token(Token = "0x600105B")]
	[Address(RVA = "0x4D30620", Offset = "0x4D30620", VA = "0x4D30620")]
	public ComputedStyle Acquire()
	{
		return default(ComputedStyle);
	}

	[Token(Token = "0x600105C")]
	[Address(RVA = "0x4D30730", Offset = "0x4D30730", VA = "0x4D30730")]
	public void Release()
	{
	}

	[Token(Token = "0x600105D")]
	[Address(RVA = "0x4D2E030", Offset = "0x4D2E030", VA = "0x4D2E030")]
	public void CopyFrom(ref ComputedStyle other)
	{
	}

	[Token(Token = "0x600105E")]
	[Address(RVA = "0x4D30810", Offset = "0x4D30810", VA = "0x4D30810")]
	public void ApplyProperties(StylePropertyReader reader, ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x600105F")]
	[Address(RVA = "0x4D31B10", Offset = "0x4D31B10", VA = "0x4D31B10")]
	public void ApplyStyleValue(StyleValue sv, ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x6001060")]
	[Address(RVA = "0x4D32850", Offset = "0x4D32850", VA = "0x4D32850")]
	public void ApplyStyleValueManaged(StyleValueManaged sv, ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x6001061")]
	[Address(RVA = "0x4D32C80", Offset = "0x4D32C80", VA = "0x4D32C80")]
	public void ApplyStyleCursor(Cursor cursor)
	{
	}

	[Token(Token = "0x6001062")]
	[Address(RVA = "0x4D32CE0", Offset = "0x4D32CE0", VA = "0x4D32CE0")]
	public void ApplyStyleTextShadow(TextShadow st)
	{
	}

	[Token(Token = "0x6001063")]
	[Address(RVA = "0x4D32D40", Offset = "0x4D32D40", VA = "0x4D32D40")]
	public void ApplyFromComputedStyle(StylePropertyId id, ref ComputedStyle other)
	{
	}

	[Token(Token = "0x6001064")]
	[Address(RVA = "0x4D34250", Offset = "0x4D34250", VA = "0x4D34250")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Length newValue)
	{
	}

	[Token(Token = "0x6001065")]
	[Address(RVA = "0x4D34AE0", Offset = "0x4D34AE0", VA = "0x4D34AE0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, float newValue)
	{
	}

	[Token(Token = "0x6001066")]
	[Address(RVA = "0x4D34EB0", Offset = "0x4D34EB0", VA = "0x4D34EB0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, int newValue)
	{
	}

	[Token(Token = "0x6001067")]
	[Address(RVA = "0x4D356A0", Offset = "0x4D356A0", VA = "0x4D356A0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, BackgroundPosition newValue)
	{
	}

	[Token(Token = "0x6001068")]
	[Address(RVA = "0x4D35880", Offset = "0x4D35880", VA = "0x4D35880")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, BackgroundRepeat newValue)
	{
	}

	[Token(Token = "0x6001069")]
	[Address(RVA = "0x4D359E0", Offset = "0x4D359E0", VA = "0x4D359E0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, BackgroundSize newValue)
	{
	}

	[Token(Token = "0x600106A")]
	[Address(RVA = "0x4D35B10", Offset = "0x4D35B10", VA = "0x4D35B10")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Color newValue)
	{
	}

	[Token(Token = "0x600106B")]
	[Address(RVA = "0x4D35E10", Offset = "0x4D35E10", VA = "0x4D35E10")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Background newValue)
	{
	}

	[Token(Token = "0x600106C")]
	[Address(RVA = "0x4D35FC0", Offset = "0x4D35FC0", VA = "0x4D35FC0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Font newValue)
	{
	}

	[Token(Token = "0x600106D")]
	[Address(RVA = "0x4D36150", Offset = "0x4D36150", VA = "0x4D36150")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, FontDefinition newValue)
	{
	}

	[Token(Token = "0x600106E")]
	[Address(RVA = "0x4D362D0", Offset = "0x4D362D0", VA = "0x4D362D0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, TextShadow newValue)
	{
	}

	[Token(Token = "0x600106F")]
	[Address(RVA = "0x4D36400", Offset = "0x4D36400", VA = "0x4D36400")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Translate newValue)
	{
	}

	[Token(Token = "0x6001070")]
	[Address(RVA = "0x4D36530", Offset = "0x4D36530", VA = "0x4D36530")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, TransformOrigin newValue)
	{
	}

	[Token(Token = "0x6001071")]
	[Address(RVA = "0x4D36660", Offset = "0x4D36660", VA = "0x4D36660")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Rotate newValue)
	{
	}

	[Token(Token = "0x6001072")]
	[Address(RVA = "0x4D36790", Offset = "0x4D36790", VA = "0x4D36790")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Scale newValue)
	{
	}

	[Token(Token = "0x6001073")]
	[Address(RVA = "0x4D368C0", Offset = "0x4D368C0", VA = "0x4D368C0")]
	public static bool StartAnimation(VisualElement element, StylePropertyId id, ref ComputedStyle oldStyle, ref ComputedStyle newStyle, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001074")]
	[Address(RVA = "0x4D3C7B0", Offset = "0x4D3C7B0", VA = "0x4D3C7B0")]
	public static bool StartAnimationAllProperty(VisualElement element, ref ComputedStyle oldStyle, ref ComputedStyle newStyle, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001075")]
	[Address(RVA = "0x4D416E0", Offset = "0x4D416E0", VA = "0x4D416E0")]
	public static bool StartAnimationInline(VisualElement element, StylePropertyId id, ref ComputedStyle computedStyle, StyleValue sv, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001076")]
	[Address(RVA = "0x4D46020", Offset = "0x4D46020", VA = "0x4D46020")]
	public void ApplyStyleTransformOrigin(TransformOrigin st)
	{
	}

	[Token(Token = "0x6001077")]
	[Address(RVA = "0x4D46080", Offset = "0x4D46080", VA = "0x4D46080")]
	public void ApplyStyleTranslate(Translate translateValue)
	{
	}

	[Token(Token = "0x6001078")]
	[Address(RVA = "0x4D460E0", Offset = "0x4D460E0", VA = "0x4D460E0")]
	public void ApplyStyleRotate(Rotate rotateValue)
	{
	}

	[Token(Token = "0x6001079")]
	[Address(RVA = "0x4D46140", Offset = "0x4D46140", VA = "0x4D46140")]
	public void ApplyStyleScale(Scale scaleValue)
	{
	}

	[Token(Token = "0x600107A")]
	[Address(RVA = "0x4D461A0", Offset = "0x4D461A0", VA = "0x4D461A0")]
	public void ApplyStyleBackgroundSize(BackgroundSize backgroundSizeValue)
	{
	}

	[Token(Token = "0x600107B")]
	[Address(RVA = "0x4D2C0D0", Offset = "0x4D2C0D0", VA = "0x4D2C0D0")]
	public void ApplyInitialValue(StylePropertyReader reader)
	{
	}

	[Token(Token = "0x600107C")]
	[Address(RVA = "0x4D2C1A0", Offset = "0x4D2C1A0", VA = "0x4D2C1A0")]
	public void ApplyInitialValue(StylePropertyId id)
	{
	}

	[Token(Token = "0x600107D")]
	[Address(RVA = "0x4D2C150", Offset = "0x4D2C150", VA = "0x4D2C150")]
	public void ApplyUnsetValue(StylePropertyReader reader, ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x600107E")]
	[Address(RVA = "0x4D46200", Offset = "0x4D46200", VA = "0x4D46200")]
	public void ApplyUnsetValue(StylePropertyId id, ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x600107F")]
	[Address(RVA = "0x4D466F0", Offset = "0x4D466F0", VA = "0x4D466F0")]
	public static VersionChangeType CompareChanges(ref ComputedStyle x, ref ComputedStyle y)
	{
		return default(VersionChangeType);
	}
}
