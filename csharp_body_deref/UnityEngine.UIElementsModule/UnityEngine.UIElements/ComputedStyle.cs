// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ComputedStyle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x50537A0", Offset = "0x50537A0", VA = "0x50537A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700031A")]
	public bool hasTransition
	{
		[Token(Token = "0x6000FFB")]
		[Address(RVA = "0x50537E0", Offset = "0x50537E0", VA = "0x50537E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700031B")]
	public Align alignContent
	{
		[Token(Token = "0x6001008")]
		[Address(RVA = "0x5056650", Offset = "0x5056650", VA = "0x5056650")]
		get
		{
			return default(Align);
		}
	}

	[Token(Token = "0x1700031C")]
	public Align alignItems
	{
		[Token(Token = "0x6001009")]
		[Address(RVA = "0x5056690", Offset = "0x5056690", VA = "0x5056690")]
		get
		{
			return default(Align);
		}
	}

	[Token(Token = "0x1700031D")]
	public Align alignSelf
	{
		[Token(Token = "0x600100A")]
		[Address(RVA = "0x50566D0", Offset = "0x50566D0", VA = "0x50566D0")]
		get
		{
			return default(Align);
		}
	}

	[Token(Token = "0x1700031E")]
	public Color backgroundColor
	{
		[Token(Token = "0x600100B")]
		[Address(RVA = "0x5056710", Offset = "0x5056710", VA = "0x5056710")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700031F")]
	public Background backgroundImage
	{
		[Token(Token = "0x600100C")]
		[Address(RVA = "0x5056760", Offset = "0x5056760", VA = "0x5056760")]
		get
		{
			return default(Background);
		}
	}

	[Token(Token = "0x17000320")]
	public BackgroundPosition backgroundPositionX
	{
		[Token(Token = "0x600100D")]
		[Address(RVA = "0x50567C0", Offset = "0x50567C0", VA = "0x50567C0")]
		get
		{
			return default(BackgroundPosition);
		}
	}

	[Token(Token = "0x17000321")]
	public BackgroundPosition backgroundPositionY
	{
		[Token(Token = "0x600100E")]
		[Address(RVA = "0x5056810", Offset = "0x5056810", VA = "0x5056810")]
		get
		{
			return default(BackgroundPosition);
		}
	}

	[Token(Token = "0x17000322")]
	public BackgroundRepeat backgroundRepeat
	{
		[Token(Token = "0x600100F")]
		[Address(RVA = "0x5056860", Offset = "0x5056860", VA = "0x5056860")]
		get
		{
			return default(BackgroundRepeat);
		}
	}

	[Token(Token = "0x17000323")]
	public BackgroundSize backgroundSize
	{
		[Token(Token = "0x6001010")]
		[Address(RVA = "0x50568A0", Offset = "0x50568A0", VA = "0x50568A0")]
		get
		{
			return default(BackgroundSize);
		}
	}

	[Token(Token = "0x17000324")]
	public Color borderBottomColor
	{
		[Token(Token = "0x6001011")]
		[Address(RVA = "0x5056900", Offset = "0x5056900", VA = "0x5056900")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000325")]
	public Length borderBottomLeftRadius
	{
		[Token(Token = "0x6001012")]
		[Address(RVA = "0x5056950", Offset = "0x5056950", VA = "0x5056950")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000326")]
	public Length borderBottomRightRadius
	{
		[Token(Token = "0x6001013")]
		[Address(RVA = "0x5056990", Offset = "0x5056990", VA = "0x5056990")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000327")]
	public float borderBottomWidth
	{
		[Token(Token = "0x6001014")]
		[Address(RVA = "0x50569D0", Offset = "0x50569D0", VA = "0x50569D0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000328")]
	public Color borderLeftColor
	{
		[Token(Token = "0x6001015")]
		[Address(RVA = "0x5056A10", Offset = "0x5056A10", VA = "0x5056A10")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000329")]
	public float borderLeftWidth
	{
		[Token(Token = "0x6001016")]
		[Address(RVA = "0x5056A60", Offset = "0x5056A60", VA = "0x5056A60")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700032A")]
	public Color borderRightColor
	{
		[Token(Token = "0x6001017")]
		[Address(RVA = "0x5056AA0", Offset = "0x5056AA0", VA = "0x5056AA0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700032B")]
	public float borderRightWidth
	{
		[Token(Token = "0x6001018")]
		[Address(RVA = "0x5056AF0", Offset = "0x5056AF0", VA = "0x5056AF0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700032C")]
	public Color borderTopColor
	{
		[Token(Token = "0x6001019")]
		[Address(RVA = "0x5056B30", Offset = "0x5056B30", VA = "0x5056B30")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700032D")]
	public Length borderTopLeftRadius
	{
		[Token(Token = "0x600101A")]
		[Address(RVA = "0x5056B80", Offset = "0x5056B80", VA = "0x5056B80")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700032E")]
	public Length borderTopRightRadius
	{
		[Token(Token = "0x600101B")]
		[Address(RVA = "0x5056BC0", Offset = "0x5056BC0", VA = "0x5056BC0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700032F")]
	public float borderTopWidth
	{
		[Token(Token = "0x600101C")]
		[Address(RVA = "0x5056C00", Offset = "0x5056C00", VA = "0x5056C00")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000330")]
	public Length bottom
	{
		[Token(Token = "0x600101D")]
		[Address(RVA = "0x5056C40", Offset = "0x5056C40", VA = "0x5056C40")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000331")]
	public Color color
	{
		[Token(Token = "0x600101E")]
		[Address(RVA = "0x5056C80", Offset = "0x5056C80", VA = "0x5056C80")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000332")]
	public Cursor cursor
	{
		[Token(Token = "0x600101F")]
		[Address(RVA = "0x5056CC0", Offset = "0x5056CC0", VA = "0x5056CC0")]
		get
		{
			return default(Cursor);
		}
	}

	[Token(Token = "0x17000333")]
	public DisplayStyle display
	{
		[Token(Token = "0x6001020")]
		[Address(RVA = "0x5056D20", Offset = "0x5056D20", VA = "0x5056D20")]
		get
		{
			return default(DisplayStyle);
		}
	}

	[Token(Token = "0x17000334")]
	public Length flexBasis
	{
		[Token(Token = "0x6001021")]
		[Address(RVA = "0x5056D60", Offset = "0x5056D60", VA = "0x5056D60")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000335")]
	public FlexDirection flexDirection
	{
		[Token(Token = "0x6001022")]
		[Address(RVA = "0x5056DA0", Offset = "0x5056DA0", VA = "0x5056DA0")]
		get
		{
			return default(FlexDirection);
		}
	}

	[Token(Token = "0x17000336")]
	public float flexGrow
	{
		[Token(Token = "0x6001023")]
		[Address(RVA = "0x5056DE0", Offset = "0x5056DE0", VA = "0x5056DE0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000337")]
	public float flexShrink
	{
		[Token(Token = "0x6001024")]
		[Address(RVA = "0x5056E20", Offset = "0x5056E20", VA = "0x5056E20")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000338")]
	public Wrap flexWrap
	{
		[Token(Token = "0x6001025")]
		[Address(RVA = "0x5056E60", Offset = "0x5056E60", VA = "0x5056E60")]
		get
		{
			return default(Wrap);
		}
	}

	[Token(Token = "0x17000339")]
	public Length fontSize
	{
		[Token(Token = "0x6001026")]
		[Address(RVA = "0x5053920", Offset = "0x5053920", VA = "0x5053920")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700033A")]
	public Length height
	{
		[Token(Token = "0x6001027")]
		[Address(RVA = "0x5056EA0", Offset = "0x5056EA0", VA = "0x5056EA0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700033B")]
	public Justify justifyContent
	{
		[Token(Token = "0x6001028")]
		[Address(RVA = "0x5056EE0", Offset = "0x5056EE0", VA = "0x5056EE0")]
		get
		{
			return default(Justify);
		}
	}

	[Token(Token = "0x1700033C")]
	public Length left
	{
		[Token(Token = "0x6001029")]
		[Address(RVA = "0x5056F20", Offset = "0x5056F20", VA = "0x5056F20")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700033D")]
	public Length letterSpacing
	{
		[Token(Token = "0x600102A")]
		[Address(RVA = "0x5056F60", Offset = "0x5056F60", VA = "0x5056F60")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700033E")]
	public Length marginBottom
	{
		[Token(Token = "0x600102B")]
		[Address(RVA = "0x5056FA0", Offset = "0x5056FA0", VA = "0x5056FA0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700033F")]
	public Length marginLeft
	{
		[Token(Token = "0x600102C")]
		[Address(RVA = "0x5056FE0", Offset = "0x5056FE0", VA = "0x5056FE0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000340")]
	public Length marginRight
	{
		[Token(Token = "0x600102D")]
		[Address(RVA = "0x5057020", Offset = "0x5057020", VA = "0x5057020")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000341")]
	public Length marginTop
	{
		[Token(Token = "0x600102E")]
		[Address(RVA = "0x5057060", Offset = "0x5057060", VA = "0x5057060")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000342")]
	public Length maxHeight
	{
		[Token(Token = "0x600102F")]
		[Address(RVA = "0x50570A0", Offset = "0x50570A0", VA = "0x50570A0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000343")]
	public Length maxWidth
	{
		[Token(Token = "0x6001030")]
		[Address(RVA = "0x50570E0", Offset = "0x50570E0", VA = "0x50570E0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000344")]
	public Length minHeight
	{
		[Token(Token = "0x6001031")]
		[Address(RVA = "0x5057120", Offset = "0x5057120", VA = "0x5057120")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000345")]
	public Length minWidth
	{
		[Token(Token = "0x6001032")]
		[Address(RVA = "0x5057160", Offset = "0x5057160", VA = "0x5057160")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000346")]
	public float opacity
	{
		[Token(Token = "0x6001033")]
		[Address(RVA = "0x50571A0", Offset = "0x50571A0", VA = "0x50571A0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000347")]
	public OverflowInternal overflow
	{
		[Token(Token = "0x6001034")]
		[Address(RVA = "0x50571E0", Offset = "0x50571E0", VA = "0x50571E0")]
		get
		{
			return default(OverflowInternal);
		}
	}

	[Token(Token = "0x17000348")]
	public Length paddingBottom
	{
		[Token(Token = "0x6001035")]
		[Address(RVA = "0x5057220", Offset = "0x5057220", VA = "0x5057220")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000349")]
	public Length paddingLeft
	{
		[Token(Token = "0x6001036")]
		[Address(RVA = "0x5057260", Offset = "0x5057260", VA = "0x5057260")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700034A")]
	public Length paddingRight
	{
		[Token(Token = "0x6001037")]
		[Address(RVA = "0x50572A0", Offset = "0x50572A0", VA = "0x50572A0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700034B")]
	public Length paddingTop
	{
		[Token(Token = "0x6001038")]
		[Address(RVA = "0x50572E0", Offset = "0x50572E0", VA = "0x50572E0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700034C")]
	public Position position
	{
		[Token(Token = "0x6001039")]
		[Address(RVA = "0x5057320", Offset = "0x5057320", VA = "0x5057320")]
		get
		{
			return default(Position);
		}
	}

	[Token(Token = "0x1700034D")]
	public Length right
	{
		[Token(Token = "0x600103A")]
		[Address(RVA = "0x5057360", Offset = "0x5057360", VA = "0x5057360")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700034E")]
	public Rotate rotate
	{
		[Token(Token = "0x600103B")]
		[Address(RVA = "0x50573A0", Offset = "0x50573A0", VA = "0x50573A0")]
		get
		{
			return default(Rotate);
		}
	}

	[Token(Token = "0x1700034F")]
	public Scale scale
	{
		[Token(Token = "0x600103C")]
		[Address(RVA = "0x5057400", Offset = "0x5057400", VA = "0x5057400")]
		get
		{
			return default(Scale);
		}
	}

	[Token(Token = "0x17000350")]
	public TextOverflow textOverflow
	{
		[Token(Token = "0x600103D")]
		[Address(RVA = "0x5057450", Offset = "0x5057450", VA = "0x5057450")]
		get
		{
			return default(TextOverflow);
		}
	}

	[Token(Token = "0x17000351")]
	public TextShadow textShadow
	{
		[Token(Token = "0x600103E")]
		[Address(RVA = "0x5057490", Offset = "0x5057490", VA = "0x5057490")]
		get
		{
			return default(TextShadow);
		}
	}

	[Token(Token = "0x17000352")]
	public Length top
	{
		[Token(Token = "0x600103F")]
		[Address(RVA = "0x50574F0", Offset = "0x50574F0", VA = "0x50574F0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000353")]
	public TransformOrigin transformOrigin
	{
		[Token(Token = "0x6001040")]
		[Address(RVA = "0x5057530", Offset = "0x5057530", VA = "0x5057530")]
		get
		{
			return default(TransformOrigin);
		}
	}

	[Token(Token = "0x17000354")]
	public List<TimeValue> transitionDelay
	{
		[Token(Token = "0x6001041")]
		[Address(RVA = "0x5057590", Offset = "0x5057590", VA = "0x5057590")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000355")]
	public List<TimeValue> transitionDuration
	{
		[Token(Token = "0x6001042")]
		[Address(RVA = "0x50575D0", Offset = "0x50575D0", VA = "0x50575D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000356")]
	public List<StylePropertyName> transitionProperty
	{
		[Token(Token = "0x6001043")]
		[Address(RVA = "0x5057610", Offset = "0x5057610", VA = "0x5057610")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000357")]
	public List<EasingFunction> transitionTimingFunction
	{
		[Token(Token = "0x6001044")]
		[Address(RVA = "0x5057650", Offset = "0x5057650", VA = "0x5057650")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000358")]
	public Translate translate
	{
		[Token(Token = "0x6001045")]
		[Address(RVA = "0x5057690", Offset = "0x5057690", VA = "0x5057690")]
		get
		{
			return default(Translate);
		}
	}

	[Token(Token = "0x17000359")]
	public Color unityBackgroundImageTintColor
	{
		[Token(Token = "0x6001046")]
		[Address(RVA = "0x50576F0", Offset = "0x50576F0", VA = "0x50576F0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700035A")]
	public Font unityFont
	{
		[Token(Token = "0x6001047")]
		[Address(RVA = "0x5057740", Offset = "0x5057740", VA = "0x5057740")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700035B")]
	public FontDefinition unityFontDefinition
	{
		[Token(Token = "0x6001048")]
		[Address(RVA = "0x5057780", Offset = "0x5057780", VA = "0x5057780")]
		get
		{
			return default(FontDefinition);
		}
	}

	[Token(Token = "0x1700035C")]
	public FontStyle unityFontStyleAndWeight
	{
		[Token(Token = "0x6001049")]
		[Address(RVA = "0x50577C0", Offset = "0x50577C0", VA = "0x50577C0")]
		get
		{
			return default(FontStyle);
		}
	}

	[Token(Token = "0x1700035D")]
	public OverflowClipBox unityOverflowClipBox
	{
		[Token(Token = "0x600104A")]
		[Address(RVA = "0x5057800", Offset = "0x5057800", VA = "0x5057800")]
		get
		{
			return default(OverflowClipBox);
		}
	}

	[Token(Token = "0x1700035E")]
	public Length unityParagraphSpacing
	{
		[Token(Token = "0x600104B")]
		[Address(RVA = "0x5057840", Offset = "0x5057840", VA = "0x5057840")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700035F")]
	public int unitySliceBottom
	{
		[Token(Token = "0x600104C")]
		[Address(RVA = "0x5057880", Offset = "0x5057880", VA = "0x5057880")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000360")]
	public int unitySliceLeft
	{
		[Token(Token = "0x600104D")]
		[Address(RVA = "0x50578C0", Offset = "0x50578C0", VA = "0x50578C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000361")]
	public int unitySliceRight
	{
		[Token(Token = "0x600104E")]
		[Address(RVA = "0x5057900", Offset = "0x5057900", VA = "0x5057900")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000362")]
	public float unitySliceScale
	{
		[Token(Token = "0x600104F")]
		[Address(RVA = "0x5057940", Offset = "0x5057940", VA = "0x5057940")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000363")]
	public int unitySliceTop
	{
		[Token(Token = "0x6001050")]
		[Address(RVA = "0x5057980", Offset = "0x5057980", VA = "0x5057980")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000364")]
	public TextAnchor unityTextAlign
	{
		[Token(Token = "0x6001051")]
		[Address(RVA = "0x50579C0", Offset = "0x50579C0", VA = "0x50579C0")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000365")]
	public Color unityTextOutlineColor
	{
		[Token(Token = "0x6001052")]
		[Address(RVA = "0x5057A00", Offset = "0x5057A00", VA = "0x5057A00")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000366")]
	public float unityTextOutlineWidth
	{
		[Token(Token = "0x6001053")]
		[Address(RVA = "0x5057A40", Offset = "0x5057A40", VA = "0x5057A40")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000367")]
	public TextOverflowPosition unityTextOverflowPosition
	{
		[Token(Token = "0x6001054")]
		[Address(RVA = "0x5057A80", Offset = "0x5057A80", VA = "0x5057A80")]
		get
		{
			return default(TextOverflowPosition);
		}
	}

	[Token(Token = "0x17000368")]
	public Visibility visibility
	{
		[Token(Token = "0x6001055")]
		[Address(RVA = "0x5057AC0", Offset = "0x5057AC0", VA = "0x5057AC0")]
		get
		{
			return default(Visibility);
		}
	}

	[Token(Token = "0x17000369")]
	public WhiteSpace whiteSpace
	{
		[Token(Token = "0x6001056")]
		[Address(RVA = "0x5057B00", Offset = "0x5057B00", VA = "0x5057B00")]
		get
		{
			return default(WhiteSpace);
		}
	}

	[Token(Token = "0x1700036A")]
	public Length width
	{
		[Token(Token = "0x6001057")]
		[Address(RVA = "0x5057B40", Offset = "0x5057B40", VA = "0x5057B40")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700036B")]
	public Length wordSpacing
	{
		[Token(Token = "0x6001058")]
		[Address(RVA = "0x5057B80", Offset = "0x5057B80", VA = "0x5057B80")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x6000FFC")]
	[Address(RVA = "0x5053800", Offset = "0x5053800", VA = "0x5053800")]
	public void FinalizeApply(ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x6000FFD")]
	[Address(RVA = "0x5053960", Offset = "0x5053960", VA = "0x5053960")]
	private bool ApplyGlobalKeyword(StylePropertyReader reader, ref ComputedStyle parentStyle)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FFE")]
	[Address(RVA = "0x5053AB0", Offset = "0x5053AB0", VA = "0x5053AB0")]
	private bool ApplyGlobalKeyword(StylePropertyId id, StyleKeyword keyword, ref ComputedStyle parentStyle)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FFF")]
	[Address(RVA = "0x5055780", Offset = "0x5055780", VA = "0x5055780")]
	private void RemoveCustomStyleProperty(StylePropertyReader reader)
	{
	}

	[Token(Token = "0x6001000")]
	[Address(RVA = "0x5055820", Offset = "0x5055820", VA = "0x5055820")]
	private void ApplyCustomStyleProperty(StylePropertyReader reader)
	{
	}

	[Token(Token = "0x6001001")]
	[Address(RVA = "0x5055910", Offset = "0x5055910", VA = "0x5055910")]
	private void ApplyAllPropertyInitial()
	{
	}

	[Token(Token = "0x6001002")]
	[Address(RVA = "0x5055A90", Offset = "0x5055A90", VA = "0x5055A90")]
	private void ResetComputedTransitions()
	{
	}

	[Token(Token = "0x6001003")]
	[Address(RVA = "0x5055AB0", Offset = "0x5055AB0", VA = "0x5055AB0")]
	public static bool StartAnimationInlineTextShadow(VisualElement element, ref ComputedStyle computedStyle, StyleTextShadow textShadow, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001004")]
	[Address(RVA = "0x5055D10", Offset = "0x5055D10", VA = "0x5055D10")]
	public static bool StartAnimationInlineRotate(VisualElement element, ref ComputedStyle computedStyle, StyleRotate rotate, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001005")]
	[Address(RVA = "0x5055F90", Offset = "0x5055F90", VA = "0x5055F90")]
	public static bool StartAnimationInlineTranslate(VisualElement element, ref ComputedStyle computedStyle, StyleTranslate translate, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001006")]
	[Address(RVA = "0x5056210", Offset = "0x5056210", VA = "0x5056210")]
	public static bool StartAnimationInlineScale(VisualElement element, ref ComputedStyle computedStyle, StyleScale scale, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001007")]
	[Address(RVA = "0x50563D0", Offset = "0x50563D0", VA = "0x50563D0")]
	public static bool StartAnimationInlineTransformOrigin(VisualElement element, ref ComputedStyle computedStyle, StyleTransformOrigin transformOrigin, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001059")]
	[Address(RVA = "0x5057BC0", Offset = "0x5057BC0", VA = "0x5057BC0")]
	public static ComputedStyle Create(ref ComputedStyle parentStyle)
	{
		return default(ComputedStyle);
	}

	[Token(Token = "0x600105A")]
	[Address(RVA = "0x5057DC0", Offset = "0x5057DC0", VA = "0x5057DC0")]
	public static ComputedStyle CreateInitial()
	{
		return default(ComputedStyle);
	}

	[Token(Token = "0x600105B")]
	[Address(RVA = "0x5057F50", Offset = "0x5057F50", VA = "0x5057F50")]
	public ComputedStyle Acquire()
	{
		return default(ComputedStyle);
	}

	[Token(Token = "0x600105C")]
	[Address(RVA = "0x5058060", Offset = "0x5058060", VA = "0x5058060")]
	public void Release()
	{
	}

	[Token(Token = "0x600105D")]
	[Address(RVA = "0x5055960", Offset = "0x5055960", VA = "0x5055960")]
	public void CopyFrom(ref ComputedStyle other)
	{
	}

	[Token(Token = "0x600105E")]
	[Address(RVA = "0x5058140", Offset = "0x5058140", VA = "0x5058140")]
	public void ApplyProperties(StylePropertyReader reader, ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x600105F")]
	[Address(RVA = "0x5059440", Offset = "0x5059440", VA = "0x5059440")]
	public void ApplyStyleValue(StyleValue sv, ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x6001060")]
	[Address(RVA = "0x505A180", Offset = "0x505A180", VA = "0x505A180")]
	public void ApplyStyleValueManaged(StyleValueManaged sv, ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x6001061")]
	[Address(RVA = "0x505A5B0", Offset = "0x505A5B0", VA = "0x505A5B0")]
	public void ApplyStyleCursor(Cursor cursor)
	{
	}

	[Token(Token = "0x6001062")]
	[Address(RVA = "0x505A610", Offset = "0x505A610", VA = "0x505A610")]
	public void ApplyStyleTextShadow(TextShadow st)
	{
	}

	[Token(Token = "0x6001063")]
	[Address(RVA = "0x505A670", Offset = "0x505A670", VA = "0x505A670")]
	public void ApplyFromComputedStyle(StylePropertyId id, ref ComputedStyle other)
	{
	}

	[Token(Token = "0x6001064")]
	[Address(RVA = "0x505BB80", Offset = "0x505BB80", VA = "0x505BB80")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Length newValue)
	{
	}

	[Token(Token = "0x6001065")]
	[Address(RVA = "0x505C410", Offset = "0x505C410", VA = "0x505C410")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, float newValue)
	{
	}

	[Token(Token = "0x6001066")]
	[Address(RVA = "0x505C7E0", Offset = "0x505C7E0", VA = "0x505C7E0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, int newValue)
	{
	}

	[Token(Token = "0x6001067")]
	[Address(RVA = "0x505CFD0", Offset = "0x505CFD0", VA = "0x505CFD0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, BackgroundPosition newValue)
	{
	}

	[Token(Token = "0x6001068")]
	[Address(RVA = "0x505D1B0", Offset = "0x505D1B0", VA = "0x505D1B0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, BackgroundRepeat newValue)
	{
	}

	[Token(Token = "0x6001069")]
	[Address(RVA = "0x505D310", Offset = "0x505D310", VA = "0x505D310")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, BackgroundSize newValue)
	{
	}

	[Token(Token = "0x600106A")]
	[Address(RVA = "0x505D440", Offset = "0x505D440", VA = "0x505D440")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Color newValue)
	{
	}

	[Token(Token = "0x600106B")]
	[Address(RVA = "0x505D740", Offset = "0x505D740", VA = "0x505D740")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Background newValue)
	{
	}

	[Token(Token = "0x600106C")]
	[Address(RVA = "0x505D8F0", Offset = "0x505D8F0", VA = "0x505D8F0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Font newValue)
	{
	}

	[Token(Token = "0x600106D")]
	[Address(RVA = "0x505DA80", Offset = "0x505DA80", VA = "0x505DA80")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, FontDefinition newValue)
	{
	}

	[Token(Token = "0x600106E")]
	[Address(RVA = "0x505DC00", Offset = "0x505DC00", VA = "0x505DC00")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, TextShadow newValue)
	{
	}

	[Token(Token = "0x600106F")]
	[Address(RVA = "0x505DD30", Offset = "0x505DD30", VA = "0x505DD30")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Translate newValue)
	{
	}

	[Token(Token = "0x6001070")]
	[Address(RVA = "0x505DE60", Offset = "0x505DE60", VA = "0x505DE60")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, TransformOrigin newValue)
	{
	}

	[Token(Token = "0x6001071")]
	[Address(RVA = "0x505DF90", Offset = "0x505DF90", VA = "0x505DF90")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Rotate newValue)
	{
	}

	[Token(Token = "0x6001072")]
	[Address(RVA = "0x505E0C0", Offset = "0x505E0C0", VA = "0x505E0C0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Scale newValue)
	{
	}

	[Token(Token = "0x6001073")]
	[Address(RVA = "0x505E1F0", Offset = "0x505E1F0", VA = "0x505E1F0")]
	public static bool StartAnimation(VisualElement element, StylePropertyId id, ref ComputedStyle oldStyle, ref ComputedStyle newStyle, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001074")]
	[Address(RVA = "0x50640E0", Offset = "0x50640E0", VA = "0x50640E0")]
	public static bool StartAnimationAllProperty(VisualElement element, ref ComputedStyle oldStyle, ref ComputedStyle newStyle, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001075")]
	[Address(RVA = "0x5069010", Offset = "0x5069010", VA = "0x5069010")]
	public static bool StartAnimationInline(VisualElement element, StylePropertyId id, ref ComputedStyle computedStyle, StyleValue sv, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001076")]
	[Address(RVA = "0x506D950", Offset = "0x506D950", VA = "0x506D950")]
	public void ApplyStyleTransformOrigin(TransformOrigin st)
	{
	}

	[Token(Token = "0x6001077")]
	[Address(RVA = "0x506D9B0", Offset = "0x506D9B0", VA = "0x506D9B0")]
	public void ApplyStyleTranslate(Translate translateValue)
	{
	}

	[Token(Token = "0x6001078")]
	[Address(RVA = "0x506DA10", Offset = "0x506DA10", VA = "0x506DA10")]
	public void ApplyStyleRotate(Rotate rotateValue)
	{
	}

	[Token(Token = "0x6001079")]
	[Address(RVA = "0x506DA70", Offset = "0x506DA70", VA = "0x506DA70")]
	public void ApplyStyleScale(Scale scaleValue)
	{
	}

	[Token(Token = "0x600107A")]
	[Address(RVA = "0x506DAD0", Offset = "0x506DAD0", VA = "0x506DAD0")]
	public void ApplyStyleBackgroundSize(BackgroundSize backgroundSizeValue)
	{
	}

	[Token(Token = "0x600107B")]
	[Address(RVA = "0x5053A00", Offset = "0x5053A00", VA = "0x5053A00")]
	public void ApplyInitialValue(StylePropertyReader reader)
	{
	}

	[Token(Token = "0x600107C")]
	[Address(RVA = "0x5053AD0", Offset = "0x5053AD0", VA = "0x5053AD0")]
	public void ApplyInitialValue(StylePropertyId id)
	{
	}

	[Token(Token = "0x600107D")]
	[Address(RVA = "0x5053A80", Offset = "0x5053A80", VA = "0x5053A80")]
	public void ApplyUnsetValue(StylePropertyReader reader, ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x600107E")]
	[Address(RVA = "0x506DB30", Offset = "0x506DB30", VA = "0x506DB30")]
	public void ApplyUnsetValue(StylePropertyId id, ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x600107F")]
	[Address(RVA = "0x506E020", Offset = "0x506E020", VA = "0x506E020")]
	public static VersionChangeType CompareChanges(ref ComputedStyle x, ref ComputedStyle y)
	{
		return default(VersionChangeType);
	}
}
