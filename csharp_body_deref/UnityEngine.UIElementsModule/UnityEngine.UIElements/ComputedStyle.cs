// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.ComputedStyle
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

[Token(Token = "0x20002F5")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEditor.UIBuilderModule" })]
internal struct ComputedStyle
{
	[Token(Token = "0x4000B72")]
	[FieldOffset(Offset = "0x0")]
	public StyleDataRef<InheritedData> inheritedData;

	[Token(Token = "0x4000B73")]
	[FieldOffset(Offset = "0x8")]
	public StyleDataRef<LayoutData> layoutData;

	[Token(Token = "0x4000B74")]
	[FieldOffset(Offset = "0x10")]
	public StyleDataRef<RareData> rareData;

	[Token(Token = "0x4000B75")]
	[FieldOffset(Offset = "0x18")]
	public StyleDataRef<TransformData> transformData;

	[Token(Token = "0x4000B76")]
	[FieldOffset(Offset = "0x20")]
	public StyleDataRef<TransitionData> transitionData;

	[Token(Token = "0x4000B77")]
	[FieldOffset(Offset = "0x28")]
	public StyleDataRef<VisualData> visualData;

	[Token(Token = "0x4000B78")]
	[FieldOffset(Offset = "0x30")]
	public Dictionary<string, StylePropertyValue> customProperties;

	[Token(Token = "0x4000B79")]
	[FieldOffset(Offset = "0x38")]
	public long matchingRulesHash;

	[Token(Token = "0x4000B7A")]
	[FieldOffset(Offset = "0x40")]
	public float dpiScaling;

	[Token(Token = "0x4000B7B")]
	[FieldOffset(Offset = "0x48")]
	public ComputedTransitionProperty[] computedTransitions;

	[Token(Token = "0x17000417")]
	public int customPropertiesCount
	{
		[Token(Token = "0x600140B")]
		[Address(RVA = "0x32A4360", Offset = "0x32A2960", VA = "0x1832A4360")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000418")]
	public bool hasTransition
	{
		[Token(Token = "0x600140C")]
		[Address(RVA = "0x32A45C0", Offset = "0x32A2BC0", VA = "0x1832A45C0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000419")]
	public Align alignContent
	{
		[Token(Token = "0x600141C")]
		[Address(RVA = "0x32A3BC0", Offset = "0x32A21C0", VA = "0x1832A3BC0")]
		get
		{
			return default(Align);
		}
	}

	[Token(Token = "0x1700041A")]
	public Align alignItems
	{
		[Token(Token = "0x600141D")]
		[Address(RVA = "0x32A3C00", Offset = "0x32A2200", VA = "0x1832A3C00")]
		get
		{
			return default(Align);
		}
	}

	[Token(Token = "0x1700041B")]
	public Align alignSelf
	{
		[Token(Token = "0x600141E")]
		[Address(RVA = "0x32A3C40", Offset = "0x32A2240", VA = "0x1832A3C40")]
		get
		{
			return default(Align);
		}
	}

	[Token(Token = "0x1700041C")]
	public Ratio aspectRatio
	{
		[Token(Token = "0x600141F")]
		[Address(RVA = "0x32A3C80", Offset = "0x32A2280", VA = "0x1832A3C80")]
		get
		{
			return default(Ratio);
		}
	}

	[Token(Token = "0x1700041D")]
	public Color backgroundColor
	{
		[Token(Token = "0x6001420")]
		[Address(RVA = "0x32A3CC0", Offset = "0x32A22C0", VA = "0x1832A3CC0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700041E")]
	public Background backgroundImage
	{
		[Token(Token = "0x6001421")]
		[Address(RVA = "0x32A3D10", Offset = "0x32A2310", VA = "0x1832A3D10")]
		get
		{
			return default(Background);
		}
	}

	[Token(Token = "0x1700041F")]
	public BackgroundPosition backgroundPositionX
	{
		[Token(Token = "0x6001422")]
		[Address(RVA = "0x32A3D70", Offset = "0x32A2370", VA = "0x1832A3D70")]
		get
		{
			return default(BackgroundPosition);
		}
	}

	[Token(Token = "0x17000420")]
	public BackgroundPosition backgroundPositionY
	{
		[Token(Token = "0x6001423")]
		[Address(RVA = "0x32A3DD0", Offset = "0x32A23D0", VA = "0x1832A3DD0")]
		get
		{
			return default(BackgroundPosition);
		}
	}

	[Token(Token = "0x17000421")]
	public BackgroundRepeat backgroundRepeat
	{
		[Token(Token = "0x6001424")]
		[Address(RVA = "0x32A3E30", Offset = "0x32A2430", VA = "0x1832A3E30")]
		get
		{
			return default(BackgroundRepeat);
		}
	}

	[Token(Token = "0x17000422")]
	public BackgroundSize backgroundSize
	{
		[Token(Token = "0x6001425")]
		[Address(RVA = "0x32A3E70", Offset = "0x32A2470", VA = "0x1832A3E70")]
		get
		{
			return default(BackgroundSize);
		}
	}

	[Token(Token = "0x17000423")]
	public Color borderBottomColor
	{
		[Token(Token = "0x6001426")]
		[Address(RVA = "0x32A3ED0", Offset = "0x32A24D0", VA = "0x1832A3ED0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000424")]
	public Length borderBottomLeftRadius
	{
		[Token(Token = "0x6001427")]
		[Address(RVA = "0x32A3F30", Offset = "0x32A2530", VA = "0x1832A3F30")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000425")]
	public Length borderBottomRightRadius
	{
		[Token(Token = "0x6001428")]
		[Address(RVA = "0x32A3F70", Offset = "0x32A2570", VA = "0x1832A3F70")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000426")]
	public float borderBottomWidth
	{
		[Token(Token = "0x6001429")]
		[Address(RVA = "0x32A3FB0", Offset = "0x32A25B0", VA = "0x1832A3FB0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000427")]
	public Color borderLeftColor
	{
		[Token(Token = "0x600142A")]
		[Address(RVA = "0x32A3FF0", Offset = "0x32A25F0", VA = "0x1832A3FF0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000428")]
	public float borderLeftWidth
	{
		[Token(Token = "0x600142B")]
		[Address(RVA = "0x32A4050", Offset = "0x32A2650", VA = "0x1832A4050")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000429")]
	public Color borderRightColor
	{
		[Token(Token = "0x600142C")]
		[Address(RVA = "0x32A4090", Offset = "0x32A2690", VA = "0x1832A4090")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700042A")]
	public float borderRightWidth
	{
		[Token(Token = "0x600142D")]
		[Address(RVA = "0x32A40F0", Offset = "0x32A26F0", VA = "0x1832A40F0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700042B")]
	public Color borderTopColor
	{
		[Token(Token = "0x600142E")]
		[Address(RVA = "0x32A4130", Offset = "0x32A2730", VA = "0x1832A4130")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700042C")]
	public Length borderTopLeftRadius
	{
		[Token(Token = "0x600142F")]
		[Address(RVA = "0x32A4190", Offset = "0x32A2790", VA = "0x1832A4190")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700042D")]
	public Length borderTopRightRadius
	{
		[Token(Token = "0x6001430")]
		[Address(RVA = "0x32A41E0", Offset = "0x32A27E0", VA = "0x1832A41E0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700042E")]
	public float borderTopWidth
	{
		[Token(Token = "0x6001431")]
		[Address(RVA = "0x32A4230", Offset = "0x32A2830", VA = "0x1832A4230")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700042F")]
	public Length bottom
	{
		[Token(Token = "0x6001432")]
		[Address(RVA = "0x32A4270", Offset = "0x32A2870", VA = "0x1832A4270")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000430")]
	public Color color
	{
		[Token(Token = "0x6001433")]
		[Address(RVA = "0x32A42B0", Offset = "0x32A28B0", VA = "0x1832A42B0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000431")]
	public Cursor cursor
	{
		[Token(Token = "0x6001434")]
		[Address(RVA = "0x32A4300", Offset = "0x32A2900", VA = "0x1832A4300")]
		get
		{
			return default(Cursor);
		}
	}

	[Token(Token = "0x17000432")]
	public DisplayStyle display
	{
		[Token(Token = "0x6001435")]
		[Address(RVA = "0x32A43B0", Offset = "0x32A29B0", VA = "0x1832A43B0")]
		get
		{
			return default(DisplayStyle);
		}
	}

	[Token(Token = "0x17000433")]
	public List<FilterFunction> filter
	{
		[Token(Token = "0x6001436")]
		[Address(RVA = "0x32A43F0", Offset = "0x32A29F0", VA = "0x1832A43F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000434")]
	public Length flexBasis
	{
		[Token(Token = "0x6001437")]
		[Address(RVA = "0x32A4440", Offset = "0x32A2A40", VA = "0x1832A4440")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000435")]
	public FlexDirection flexDirection
	{
		[Token(Token = "0x6001438")]
		[Address(RVA = "0x32A4480", Offset = "0x32A2A80", VA = "0x1832A4480")]
		get
		{
			return default(FlexDirection);
		}
	}

	[Token(Token = "0x17000436")]
	public float flexGrow
	{
		[Token(Token = "0x6001439")]
		[Address(RVA = "0x32A44C0", Offset = "0x32A2AC0", VA = "0x1832A44C0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000437")]
	public float flexShrink
	{
		[Token(Token = "0x600143A")]
		[Address(RVA = "0x32A4500", Offset = "0x32A2B00", VA = "0x1832A4500")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000438")]
	public Wrap flexWrap
	{
		[Token(Token = "0x600143B")]
		[Address(RVA = "0x32A4540", Offset = "0x32A2B40", VA = "0x1832A4540")]
		get
		{
			return default(Wrap);
		}
	}

	[Token(Token = "0x17000439")]
	public Length fontSize
	{
		[Token(Token = "0x600143C")]
		[Address(RVA = "0x32A4580", Offset = "0x32A2B80", VA = "0x1832A4580")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700043A")]
	public Length height
	{
		[Token(Token = "0x600143D")]
		[Address(RVA = "0x32A45E0", Offset = "0x32A2BE0", VA = "0x1832A45E0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700043B")]
	public Justify justifyContent
	{
		[Token(Token = "0x600143E")]
		[Address(RVA = "0x32A4620", Offset = "0x32A2C20", VA = "0x1832A4620")]
		get
		{
			return default(Justify);
		}
	}

	[Token(Token = "0x1700043C")]
	public Length left
	{
		[Token(Token = "0x600143F")]
		[Address(RVA = "0x32A4660", Offset = "0x32A2C60", VA = "0x1832A4660")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700043D")]
	public Length letterSpacing
	{
		[Token(Token = "0x6001440")]
		[Address(RVA = "0x32A46A0", Offset = "0x32A2CA0", VA = "0x1832A46A0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700043E")]
	public Length marginBottom
	{
		[Token(Token = "0x6001441")]
		[Address(RVA = "0x32A46E0", Offset = "0x32A2CE0", VA = "0x1832A46E0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700043F")]
	public Length marginLeft
	{
		[Token(Token = "0x6001442")]
		[Address(RVA = "0x32A4720", Offset = "0x32A2D20", VA = "0x1832A4720")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000440")]
	public Length marginRight
	{
		[Token(Token = "0x6001443")]
		[Address(RVA = "0x32A4760", Offset = "0x32A2D60", VA = "0x1832A4760")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000441")]
	public Length marginTop
	{
		[Token(Token = "0x6001444")]
		[Address(RVA = "0x32A47A0", Offset = "0x32A2DA0", VA = "0x1832A47A0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000442")]
	public Length maxHeight
	{
		[Token(Token = "0x6001445")]
		[Address(RVA = "0x32A47E0", Offset = "0x32A2DE0", VA = "0x1832A47E0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000443")]
	public Length maxWidth
	{
		[Token(Token = "0x6001446")]
		[Address(RVA = "0x32A4820", Offset = "0x32A2E20", VA = "0x1832A4820")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000444")]
	public Length minHeight
	{
		[Token(Token = "0x6001447")]
		[Address(RVA = "0x32A4870", Offset = "0x32A2E70", VA = "0x1832A4870")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000445")]
	public Length minWidth
	{
		[Token(Token = "0x6001448")]
		[Address(RVA = "0x32A48C0", Offset = "0x32A2EC0", VA = "0x1832A48C0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000446")]
	public float opacity
	{
		[Token(Token = "0x6001449")]
		[Address(RVA = "0x32A4910", Offset = "0x32A2F10", VA = "0x1832A4910")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000447")]
	public OverflowInternal overflow
	{
		[Token(Token = "0x600144A")]
		[Address(RVA = "0x32A4960", Offset = "0x32A2F60", VA = "0x1832A4960")]
		get
		{
			return default(OverflowInternal);
		}
	}

	[Token(Token = "0x17000448")]
	public Length paddingBottom
	{
		[Token(Token = "0x600144B")]
		[Address(RVA = "0x32A49B0", Offset = "0x32A2FB0", VA = "0x1832A49B0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000449")]
	public Length paddingLeft
	{
		[Token(Token = "0x600144C")]
		[Address(RVA = "0x32A4A00", Offset = "0x32A3000", VA = "0x1832A4A00")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700044A")]
	public Length paddingRight
	{
		[Token(Token = "0x600144D")]
		[Address(RVA = "0x32A4A50", Offset = "0x32A3050", VA = "0x1832A4A50")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700044B")]
	public Length paddingTop
	{
		[Token(Token = "0x600144E")]
		[Address(RVA = "0x32A4AA0", Offset = "0x32A30A0", VA = "0x1832A4AA0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700044C")]
	public Position position
	{
		[Token(Token = "0x600144F")]
		[Address(RVA = "0x32A4AF0", Offset = "0x32A30F0", VA = "0x1832A4AF0")]
		get
		{
			return default(Position);
		}
	}

	[Token(Token = "0x1700044D")]
	public Length right
	{
		[Token(Token = "0x6001450")]
		[Address(RVA = "0x32A4B40", Offset = "0x32A3140", VA = "0x1832A4B40")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700044E")]
	public Rotate rotate
	{
		[Token(Token = "0x6001451")]
		[Address(RVA = "0x32A4B90", Offset = "0x32A3190", VA = "0x1832A4B90")]
		get
		{
			return default(Rotate);
		}
	}

	[Token(Token = "0x1700044F")]
	public Scale scale
	{
		[Token(Token = "0x6001452")]
		[Address(RVA = "0x32A4BF0", Offset = "0x32A31F0", VA = "0x1832A4BF0")]
		get
		{
			return default(Scale);
		}
	}

	[Token(Token = "0x17000450")]
	public TextOverflow textOverflow
	{
		[Token(Token = "0x6001453")]
		[Address(RVA = "0x32A4C50", Offset = "0x32A3250", VA = "0x1832A4C50")]
		get
		{
			return default(TextOverflow);
		}
	}

	[Token(Token = "0x17000451")]
	public TextShadow textShadow
	{
		[Token(Token = "0x6001454")]
		[Address(RVA = "0x32A4C90", Offset = "0x32A3290", VA = "0x1832A4C90")]
		get
		{
			return default(TextShadow);
		}
	}

	[Token(Token = "0x17000452")]
	public Length top
	{
		[Token(Token = "0x6001455")]
		[Address(RVA = "0x32A4CF0", Offset = "0x32A32F0", VA = "0x1832A4CF0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000453")]
	public TransformOrigin transformOrigin
	{
		[Token(Token = "0x6001456")]
		[Address(RVA = "0x32A4D40", Offset = "0x32A3340", VA = "0x1832A4D40")]
		get
		{
			return default(TransformOrigin);
		}
	}

	[Token(Token = "0x17000454")]
	public List<TimeValue> transitionDelay
	{
		[Token(Token = "0x6001457")]
		[Address(RVA = "0x32A4DA0", Offset = "0x32A33A0", VA = "0x1832A4DA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000455")]
	public List<TimeValue> transitionDuration
	{
		[Token(Token = "0x6001458")]
		[Address(RVA = "0x32A4DE0", Offset = "0x32A33E0", VA = "0x1832A4DE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000456")]
	public List<StylePropertyName> transitionProperty
	{
		[Token(Token = "0x6001459")]
		[Address(RVA = "0x32A4E20", Offset = "0x32A3420", VA = "0x1832A4E20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000457")]
	public List<EasingFunction> transitionTimingFunction
	{
		[Token(Token = "0x600145A")]
		[Address(RVA = "0x32A4E60", Offset = "0x32A3460", VA = "0x1832A4E60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000458")]
	public Translate translate
	{
		[Token(Token = "0x600145B")]
		[Address(RVA = "0x32A4EA0", Offset = "0x32A34A0", VA = "0x1832A4EA0")]
		get
		{
			return default(Translate);
		}
	}

	[Token(Token = "0x17000459")]
	public Color unityBackgroundImageTintColor
	{
		[Token(Token = "0x600145C")]
		[Address(RVA = "0x32A4F00", Offset = "0x32A3500", VA = "0x1832A4F00")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700045A")]
	public EditorTextRenderingMode unityEditorTextRenderingMode
	{
		[Token(Token = "0x600145D")]
		[Address(RVA = "0x32A4F60", Offset = "0x32A3560", VA = "0x1832A4F60")]
		get
		{
			return default(EditorTextRenderingMode);
		}
	}

	[Token(Token = "0x1700045B")]
	public Font unityFont
	{
		[Token(Token = "0x600145E")]
		[Address(RVA = "0x32A5030", Offset = "0x32A3630", VA = "0x1832A5030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700045C")]
	public FontDefinition unityFontDefinition
	{
		[Token(Token = "0x600145F")]
		[Address(RVA = "0x32A4FA0", Offset = "0x32A35A0", VA = "0x1832A4FA0")]
		get
		{
			return default(FontDefinition);
		}
	}

	[Token(Token = "0x1700045D")]
	public FontStyle unityFontStyleAndWeight
	{
		[Token(Token = "0x6001460")]
		[Address(RVA = "0x32A4FF0", Offset = "0x32A35F0", VA = "0x1832A4FF0")]
		get
		{
			return default(FontStyle);
		}
	}

	[Token(Token = "0x1700045E")]
	public MaterialDefinition unityMaterial
	{
		[Token(Token = "0x6001461")]
		[Address(RVA = "0x32A5070", Offset = "0x32A3670", VA = "0x1832A5070")]
		get
		{
			return default(MaterialDefinition);
		}
	}

	[Token(Token = "0x1700045F")]
	public OverflowClipBox unityOverflowClipBox
	{
		[Token(Token = "0x6001462")]
		[Address(RVA = "0x32A50C0", Offset = "0x32A36C0", VA = "0x1832A50C0")]
		get
		{
			return default(OverflowClipBox);
		}
	}

	[Token(Token = "0x17000460")]
	public Length unityParagraphSpacing
	{
		[Token(Token = "0x6001463")]
		[Address(RVA = "0x32A5100", Offset = "0x32A3700", VA = "0x1832A5100")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000461")]
	public int unitySliceBottom
	{
		[Token(Token = "0x6001464")]
		[Address(RVA = "0x32A5140", Offset = "0x32A3740", VA = "0x1832A5140")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000462")]
	public int unitySliceLeft
	{
		[Token(Token = "0x6001465")]
		[Address(RVA = "0x32A5180", Offset = "0x32A3780", VA = "0x1832A5180")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000463")]
	public int unitySliceRight
	{
		[Token(Token = "0x6001466")]
		[Address(RVA = "0x32A51C0", Offset = "0x32A37C0", VA = "0x1832A51C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000464")]
	public float unitySliceScale
	{
		[Token(Token = "0x6001467")]
		[Address(RVA = "0x32A5200", Offset = "0x32A3800", VA = "0x1832A5200")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000465")]
	public int unitySliceTop
	{
		[Token(Token = "0x6001468")]
		[Address(RVA = "0x32A5240", Offset = "0x32A3840", VA = "0x1832A5240")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000466")]
	public SliceType unitySliceType
	{
		[Token(Token = "0x6001469")]
		[Address(RVA = "0x32A5280", Offset = "0x32A3880", VA = "0x1832A5280")]
		get
		{
			return default(SliceType);
		}
	}

	[Token(Token = "0x17000467")]
	public TextAnchor unityTextAlign
	{
		[Token(Token = "0x600146A")]
		[Address(RVA = "0x32A52C0", Offset = "0x32A38C0", VA = "0x1832A52C0")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000468")]
	public TextAutoSize unityTextAutoSize
	{
		[Token(Token = "0x600146B")]
		[Address(RVA = "0x32A5300", Offset = "0x32A3900", VA = "0x1832A5300")]
		get
		{
			return default(TextAutoSize);
		}
	}

	[Token(Token = "0x17000469")]
	public TextGeneratorType unityTextGenerator
	{
		[Token(Token = "0x600146C")]
		[Address(RVA = "0x32A5360", Offset = "0x32A3960", VA = "0x1832A5360")]
		get
		{
			return default(TextGeneratorType);
		}
	}

	[Token(Token = "0x1700046A")]
	public Color unityTextOutlineColor
	{
		[Token(Token = "0x600146D")]
		[Address(RVA = "0x32A53A0", Offset = "0x32A39A0", VA = "0x1832A53A0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700046B")]
	public float unityTextOutlineWidth
	{
		[Token(Token = "0x600146E")]
		[Address(RVA = "0x32A5400", Offset = "0x32A3A00", VA = "0x1832A5400")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700046C")]
	public TextOverflowPosition unityTextOverflowPosition
	{
		[Token(Token = "0x600146F")]
		[Address(RVA = "0x32A5450", Offset = "0x32A3A50", VA = "0x1832A5450")]
		get
		{
			return default(TextOverflowPosition);
		}
	}

	[Token(Token = "0x1700046D")]
	public Visibility visibility
	{
		[Token(Token = "0x6001470")]
		[Address(RVA = "0x32A5490", Offset = "0x32A3A90", VA = "0x1832A5490")]
		get
		{
			return default(Visibility);
		}
	}

	[Token(Token = "0x1700046E")]
	public WhiteSpace whiteSpace
	{
		[Token(Token = "0x6001471")]
		[Address(RVA = "0x32A54D0", Offset = "0x32A3AD0", VA = "0x1832A54D0")]
		get
		{
			return default(WhiteSpace);
		}
	}

	[Token(Token = "0x1700046F")]
	public Length width
	{
		[Token(Token = "0x6001472")]
		[Address(RVA = "0x32A5510", Offset = "0x32A3B10", VA = "0x1832A5510")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000470")]
	public Length wordSpacing
	{
		[Token(Token = "0x6001473")]
		[Address(RVA = "0x32A5560", Offset = "0x32A3B60", VA = "0x1832A5560")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x600140D")]
	[Address(RVA = "0x3298EF0", Offset = "0x32974F0", VA = "0x183298EF0")]
	public void FinalizeApply(ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x600140E")]
	[Address(RVA = "0x328E620", Offset = "0x328CC20", VA = "0x18328E620")]
	private bool ApplyGlobalKeyword(StylePropertyReader reader, ref ComputedStyle parentStyle)
	{
		return default(bool);
	}

	[Token(Token = "0x600140F")]
	[Address(RVA = "0x328E6E0", Offset = "0x328CCE0", VA = "0x18328E6E0")]
	private bool ApplyGlobalKeyword(StylePropertyId id, StyleKeyword keyword, ref ComputedStyle parentStyle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001410")]
	[Address(RVA = "0x32990F0", Offset = "0x32976F0", VA = "0x1832990F0")]
	private void RemoveCustomStyleProperty(StylePropertyReader reader)
	{
	}

	[Token(Token = "0x6001411")]
	[Address(RVA = "0x328CBF0", Offset = "0x328B1F0", VA = "0x18328CBF0")]
	private void ApplyCustomStyleProperty(StylePropertyReader reader)
	{
	}

	[Token(Token = "0x6001412")]
	private static bool AreListPropertiesEqual<T>(List<T> a, List<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6001413")]
	[Address(RVA = "0x328CB90", Offset = "0x328B190", VA = "0x18328CB90")]
	private void ApplyAllPropertyInitial()
	{
	}

	[Token(Token = "0x6001414")]
	[Address(RVA = "0x3299190", Offset = "0x3297790", VA = "0x183299190")]
	private void ResetComputedTransitions()
	{
	}

	[Token(Token = "0x6001415")]
	[Address(RVA = "0x329C9C0", Offset = "0x329AFC0", VA = "0x18329C9C0")]
	public static bool StartAnimationInlineTextShadow(VisualElement element, ref ComputedStyle computedStyle, StyleTextShadow textShadow, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001416")]
	[Address(RVA = "0x329C5B0", Offset = "0x329ABB0", VA = "0x18329C5B0")]
	public static bool StartAnimationInlineRotate(VisualElement element, ref ComputedStyle computedStyle, StyleRotate rotate, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001417")]
	[Address(RVA = "0x329CDC0", Offset = "0x329B3C0", VA = "0x18329CDC0")]
	public static bool StartAnimationInlineTranslate(VisualElement element, ref ComputedStyle computedStyle, StyleTranslate translate, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001418")]
	[Address(RVA = "0x329C7E0", Offset = "0x329ADE0", VA = "0x18329C7E0")]
	public static bool StartAnimationInlineScale(VisualElement element, ref ComputedStyle computedStyle, StyleScale scale, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001419")]
	[Address(RVA = "0x329CBB0", Offset = "0x329B1B0", VA = "0x18329CBB0")]
	public static bool StartAnimationInlineTransformOrigin(VisualElement element, ref ComputedStyle computedStyle, StyleTransformOrigin transformOrigin, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600141A")]
	[Address(RVA = "0x329C2A0", Offset = "0x329A8A0", VA = "0x18329C2A0")]
	public static bool StartAnimationInlineBackgroundSize(VisualElement element, ref ComputedStyle computedStyle, StyleBackgroundSize backgroundSize, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600141B")]
	[Address(RVA = "0x329C480", Offset = "0x329AA80", VA = "0x18329C480")]
	public static bool StartAnimationInlineFilter(VisualElement element, ref ComputedStyle computedStyle, StyleList<FilterFunction> filter, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001474")]
	[Address(RVA = "0x3298D10", Offset = "0x3297310", VA = "0x183298D10")]
	public static ComputedStyle Create(ref ComputedStyle parentStyle)
	{
		return default(ComputedStyle);
	}

	[Token(Token = "0x6001475")]
	[Address(RVA = "0x3298B80", Offset = "0x3297180", VA = "0x183298B80")]
	public static ComputedStyle CreateInitial()
	{
		return default(ComputedStyle);
	}

	[Token(Token = "0x6001476")]
	[Address(RVA = "0x328CA70", Offset = "0x328B070", VA = "0x18328CA70")]
	public ComputedStyle Acquire()
	{
		return default(ComputedStyle);
	}

	[Token(Token = "0x6001477")]
	[Address(RVA = "0x3299020", Offset = "0x3297620", VA = "0x183299020")]
	public void Release()
	{
	}

	[Token(Token = "0x6001478")]
	[Address(RVA = "0x3298A60", Offset = "0x3297060", VA = "0x183298A60")]
	public void CopyFrom(ref ComputedStyle other)
	{
	}

	[Token(Token = "0x6001479")]
	[Address(RVA = "0x3290B20", Offset = "0x328F120", VA = "0x183290B20")]
	public void ApplyProperties(StylePropertyReader reader, ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x600147A")]
	[Address(RVA = "0x3295820", Offset = "0x3293E20", VA = "0x183295820")]
	public void ApplyStyleValue(StyleValue sv, ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x600147B")]
	[Address(RVA = "0x3295190", Offset = "0x3293790", VA = "0x183295190")]
	public void ApplyStyleValueManaged(StyleValueManaged sv, ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x600147C")]
	[Address(RVA = "0x3294EA0", Offset = "0x32934A0", VA = "0x183294EA0")]
	public void ApplyStyleCursor(Cursor cursor)
	{
	}

	[Token(Token = "0x600147D")]
	[Address(RVA = "0x3295070", Offset = "0x3293670", VA = "0x183295070")]
	public void ApplyStyleTextShadow(TextShadow st)
	{
	}

	[Token(Token = "0x600147E")]
	[Address(RVA = "0x3295010", Offset = "0x3293610", VA = "0x183295010")]
	public void ApplyStyleTextAutoSize(TextAutoSize st)
	{
	}

	[Token(Token = "0x600147F")]
	[Address(RVA = "0x328CCF0", Offset = "0x328B2F0", VA = "0x18328CCF0")]
	public void ApplyFromComputedStyle(StylePropertyId id, ref ComputedStyle other)
	{
	}

	[Token(Token = "0x6001480")]
	[Address(RVA = "0x3292F30", Offset = "0x3291530", VA = "0x183292F30")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Length newValue)
	{
	}

	[Token(Token = "0x6001481")]
	[Address(RVA = "0x3292930", Offset = "0x3290F30", VA = "0x183292930")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, float newValue)
	{
	}

	[Token(Token = "0x6001482")]
	[Address(RVA = "0x3293940", Offset = "0x3291F40", VA = "0x183293940")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, int newValue)
	{
	}

	[Token(Token = "0x6001483")]
	[Address(RVA = "0x32946E0", Offset = "0x3292CE0", VA = "0x1832946E0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, BackgroundPosition newValue)
	{
	}

	[Token(Token = "0x6001484")]
	[Address(RVA = "0x32942B0", Offset = "0x32928B0", VA = "0x1832942B0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, BackgroundRepeat newValue)
	{
	}

	[Token(Token = "0x6001485")]
	[Address(RVA = "0x3292E00", Offset = "0x3291400", VA = "0x183292E00")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, BackgroundSize newValue)
	{
	}

	[Token(Token = "0x6001486")]
	[Address(RVA = "0x3294BA0", Offset = "0x32931A0", VA = "0x183294BA0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Color newValue)
	{
	}

	[Token(Token = "0x6001487")]
	[Address(RVA = "0x3294540", Offset = "0x3292B40", VA = "0x183294540")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Background newValue)
	{
	}

	[Token(Token = "0x6001488")]
	[Address(RVA = "0x32927F0", Offset = "0x3290DF0", VA = "0x1832927F0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, List<FilterFunction> newValue)
	{
	}

	[Token(Token = "0x6001489")]
	[Address(RVA = "0x32937B0", Offset = "0x3291DB0", VA = "0x1832937B0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Font newValue)
	{
	}

	[Token(Token = "0x600148A")]
	[Address(RVA = "0x32948F0", Offset = "0x3292EF0", VA = "0x1832948F0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, FontDefinition newValue)
	{
	}

	[Token(Token = "0x600148B")]
	[Address(RVA = "0x3294A70", Offset = "0x3293070", VA = "0x183294A70")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, TextShadow newValue)
	{
	}

	[Token(Token = "0x600148C")]
	[Address(RVA = "0x3294040", Offset = "0x3292640", VA = "0x183294040")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Translate newValue)
	{
	}

	[Token(Token = "0x600148D")]
	[Address(RVA = "0x3294410", Offset = "0x3292A10", VA = "0x183294410")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, TransformOrigin newValue)
	{
	}

	[Token(Token = "0x600148E")]
	[Address(RVA = "0x32926C0", Offset = "0x3290CC0", VA = "0x1832926C0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Rotate newValue)
	{
	}

	[Token(Token = "0x600148F")]
	[Address(RVA = "0x3294180", Offset = "0x3292780", VA = "0x183294180")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Scale newValue)
	{
	}

	[Token(Token = "0x6001490")]
	[Address(RVA = "0x3292CC0", Offset = "0x32912C0", VA = "0x183292CC0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, MaterialDefinition newValue)
	{
	}

	[Token(Token = "0x6001491")]
	[Address(RVA = "0x3292550", Offset = "0x3290B50", VA = "0x183292550")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Ratio newValue)
	{
	}

	[Token(Token = "0x6001492")]
	[Address(RVA = "0x32A0030", Offset = "0x329E630", VA = "0x1832A0030")]
	public static bool StartAnimation(VisualElement element, StylePropertyId id, ref ComputedStyle oldStyle, ref ComputedStyle newStyle, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001493")]
	[Address(RVA = "0x32991B0", Offset = "0x32977B0", VA = "0x1832991B0")]
	public static bool StartAnimationAllProperty(VisualElement element, ref ComputedStyle oldStyle, ref ComputedStyle newStyle, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001494")]
	[Address(RVA = "0x329CFF0", Offset = "0x329B5F0", VA = "0x18329CFF0")]
	public static bool StartAnimationInline(VisualElement element, StylePropertyId id, ref ComputedStyle computedStyle, StyleValue sv, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001495")]
	[Address(RVA = "0x32950D0", Offset = "0x32936D0", VA = "0x1832950D0")]
	public void ApplyStyleTransformOrigin(TransformOrigin st)
	{
	}

	[Token(Token = "0x6001496")]
	[Address(RVA = "0x3295130", Offset = "0x3293730", VA = "0x183295130")]
	public void ApplyStyleTranslate(Translate translateValue)
	{
	}

	[Token(Token = "0x6001497")]
	[Address(RVA = "0x3294F60", Offset = "0x3293560", VA = "0x183294F60")]
	public void ApplyStyleRotate(Rotate rotateValue)
	{
	}

	[Token(Token = "0x6001498")]
	[Address(RVA = "0x3294FC0", Offset = "0x32935C0", VA = "0x183294FC0")]
	public void ApplyStyleScale(Scale scaleValue)
	{
	}

	[Token(Token = "0x6001499")]
	[Address(RVA = "0x3294E40", Offset = "0x3293440", VA = "0x183294E40")]
	public void ApplyStyleBackgroundSize(BackgroundSize backgroundSizeValue)
	{
	}

	[Token(Token = "0x600149A")]
	[Address(RVA = "0x3294F00", Offset = "0x3293500", VA = "0x183294F00")]
	public void ApplyStyleFilter(List<FilterFunction> st)
	{
	}

	[Token(Token = "0x600149B")]
	[Address(RVA = "0x328E700", Offset = "0x328CD00", VA = "0x18328E700")]
	public void ApplyInitialValue(StylePropertyReader reader)
	{
	}

	[Token(Token = "0x600149C")]
	[Address(RVA = "0x328E820", Offset = "0x328CE20", VA = "0x18328E820")]
	public void ApplyInitialValue(StylePropertyId id)
	{
	}

	[Token(Token = "0x600149D")]
	[Address(RVA = "0x3296680", Offset = "0x3294C80", VA = "0x183296680")]
	public void ApplyUnsetValue(StylePropertyReader reader, ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x600149E")]
	[Address(RVA = "0x3296740", Offset = "0x3294D40", VA = "0x183296740")]
	public void ApplyUnsetValue(StylePropertyId id, ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x600149F")]
	[Address(RVA = "0x3296CA0", Offset = "0x32952A0", VA = "0x183296CA0")]
	public static VersionChangeType CompareChanges(ref ComputedStyle x, ref ComputedStyle y)
	{
		return default(VersionChangeType);
	}
}
