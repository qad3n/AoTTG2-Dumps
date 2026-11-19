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
		[Address(RVA = "0x6C95FF0", Offset = "0x6C94FF0", VA = "0x6C95FF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000418")]
	public bool hasTransition
	{
		[Token(Token = "0x600140C")]
		[Address(RVA = "0x6C96030", Offset = "0x6C95030", VA = "0x6C96030")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000419")]
	public Align alignContent
	{
		[Token(Token = "0x600141C")]
		[Address(RVA = "0x6C99260", Offset = "0x6C98260", VA = "0x6C99260")]
		get
		{
			return default(Align);
		}
	}

	[Token(Token = "0x1700041A")]
	public Align alignItems
	{
		[Token(Token = "0x600141D")]
		[Address(RVA = "0x6C992A0", Offset = "0x6C982A0", VA = "0x6C992A0")]
		get
		{
			return default(Align);
		}
	}

	[Token(Token = "0x1700041B")]
	public Align alignSelf
	{
		[Token(Token = "0x600141E")]
		[Address(RVA = "0x6C992E0", Offset = "0x6C982E0", VA = "0x6C992E0")]
		get
		{
			return default(Align);
		}
	}

	[Token(Token = "0x1700041C")]
	public Ratio aspectRatio
	{
		[Token(Token = "0x600141F")]
		[Address(RVA = "0x6C99320", Offset = "0x6C98320", VA = "0x6C99320")]
		get
		{
			return default(Ratio);
		}
	}

	[Token(Token = "0x1700041D")]
	public Color backgroundColor
	{
		[Token(Token = "0x6001420")]
		[Address(RVA = "0x6C99360", Offset = "0x6C98360", VA = "0x6C99360")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700041E")]
	public Background backgroundImage
	{
		[Token(Token = "0x6001421")]
		[Address(RVA = "0x6C993B0", Offset = "0x6C983B0", VA = "0x6C993B0")]
		get
		{
			return default(Background);
		}
	}

	[Token(Token = "0x1700041F")]
	public BackgroundPosition backgroundPositionX
	{
		[Token(Token = "0x6001422")]
		[Address(RVA = "0x6C99410", Offset = "0x6C98410", VA = "0x6C99410")]
		get
		{
			return default(BackgroundPosition);
		}
	}

	[Token(Token = "0x17000420")]
	public BackgroundPosition backgroundPositionY
	{
		[Token(Token = "0x6001423")]
		[Address(RVA = "0x6C99460", Offset = "0x6C98460", VA = "0x6C99460")]
		get
		{
			return default(BackgroundPosition);
		}
	}

	[Token(Token = "0x17000421")]
	public BackgroundRepeat backgroundRepeat
	{
		[Token(Token = "0x6001424")]
		[Address(RVA = "0x6C994B0", Offset = "0x6C984B0", VA = "0x6C994B0")]
		get
		{
			return default(BackgroundRepeat);
		}
	}

	[Token(Token = "0x17000422")]
	public BackgroundSize backgroundSize
	{
		[Token(Token = "0x6001425")]
		[Address(RVA = "0x6C994F0", Offset = "0x6C984F0", VA = "0x6C994F0")]
		get
		{
			return default(BackgroundSize);
		}
	}

	[Token(Token = "0x17000423")]
	public Color borderBottomColor
	{
		[Token(Token = "0x6001426")]
		[Address(RVA = "0x6C99550", Offset = "0x6C98550", VA = "0x6C99550")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000424")]
	public Length borderBottomLeftRadius
	{
		[Token(Token = "0x6001427")]
		[Address(RVA = "0x6C995A0", Offset = "0x6C985A0", VA = "0x6C995A0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000425")]
	public Length borderBottomRightRadius
	{
		[Token(Token = "0x6001428")]
		[Address(RVA = "0x6C995E0", Offset = "0x6C985E0", VA = "0x6C995E0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000426")]
	public float borderBottomWidth
	{
		[Token(Token = "0x6001429")]
		[Address(RVA = "0x6C99620", Offset = "0x6C98620", VA = "0x6C99620")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000427")]
	public Color borderLeftColor
	{
		[Token(Token = "0x600142A")]
		[Address(RVA = "0x6C99660", Offset = "0x6C98660", VA = "0x6C99660")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000428")]
	public float borderLeftWidth
	{
		[Token(Token = "0x600142B")]
		[Address(RVA = "0x6C996B0", Offset = "0x6C986B0", VA = "0x6C996B0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000429")]
	public Color borderRightColor
	{
		[Token(Token = "0x600142C")]
		[Address(RVA = "0x6C996F0", Offset = "0x6C986F0", VA = "0x6C996F0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700042A")]
	public float borderRightWidth
	{
		[Token(Token = "0x600142D")]
		[Address(RVA = "0x6C99740", Offset = "0x6C98740", VA = "0x6C99740")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700042B")]
	public Color borderTopColor
	{
		[Token(Token = "0x600142E")]
		[Address(RVA = "0x6C99780", Offset = "0x6C98780", VA = "0x6C99780")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700042C")]
	public Length borderTopLeftRadius
	{
		[Token(Token = "0x600142F")]
		[Address(RVA = "0x6C997D0", Offset = "0x6C987D0", VA = "0x6C997D0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700042D")]
	public Length borderTopRightRadius
	{
		[Token(Token = "0x6001430")]
		[Address(RVA = "0x6C99810", Offset = "0x6C98810", VA = "0x6C99810")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700042E")]
	public float borderTopWidth
	{
		[Token(Token = "0x6001431")]
		[Address(RVA = "0x6C99850", Offset = "0x6C98850", VA = "0x6C99850")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700042F")]
	public Length bottom
	{
		[Token(Token = "0x6001432")]
		[Address(RVA = "0x6C99890", Offset = "0x6C98890", VA = "0x6C99890")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000430")]
	public Color color
	{
		[Token(Token = "0x6001433")]
		[Address(RVA = "0x6C998D0", Offset = "0x6C988D0", VA = "0x6C998D0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x17000431")]
	public Cursor cursor
	{
		[Token(Token = "0x6001434")]
		[Address(RVA = "0x6C99910", Offset = "0x6C98910", VA = "0x6C99910")]
		get
		{
			return default(Cursor);
		}
	}

	[Token(Token = "0x17000432")]
	public DisplayStyle display
	{
		[Token(Token = "0x6001435")]
		[Address(RVA = "0x6C99970", Offset = "0x6C98970", VA = "0x6C99970")]
		get
		{
			return default(DisplayStyle);
		}
	}

	[Token(Token = "0x17000433")]
	public List<FilterFunction> filter
	{
		[Token(Token = "0x6001436")]
		[Address(RVA = "0x6C999B0", Offset = "0x6C989B0", VA = "0x6C999B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000434")]
	public Length flexBasis
	{
		[Token(Token = "0x6001437")]
		[Address(RVA = "0x6C999F0", Offset = "0x6C989F0", VA = "0x6C999F0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000435")]
	public FlexDirection flexDirection
	{
		[Token(Token = "0x6001438")]
		[Address(RVA = "0x6C99A30", Offset = "0x6C98A30", VA = "0x6C99A30")]
		get
		{
			return default(FlexDirection);
		}
	}

	[Token(Token = "0x17000436")]
	public float flexGrow
	{
		[Token(Token = "0x6001439")]
		[Address(RVA = "0x6C99A70", Offset = "0x6C98A70", VA = "0x6C99A70")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000437")]
	public float flexShrink
	{
		[Token(Token = "0x600143A")]
		[Address(RVA = "0x6C99AB0", Offset = "0x6C98AB0", VA = "0x6C99AB0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000438")]
	public Wrap flexWrap
	{
		[Token(Token = "0x600143B")]
		[Address(RVA = "0x6C99AF0", Offset = "0x6C98AF0", VA = "0x6C99AF0")]
		get
		{
			return default(Wrap);
		}
	}

	[Token(Token = "0x17000439")]
	public Length fontSize
	{
		[Token(Token = "0x600143C")]
		[Address(RVA = "0x6C96170", Offset = "0x6C95170", VA = "0x6C96170")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700043A")]
	public Length height
	{
		[Token(Token = "0x600143D")]
		[Address(RVA = "0x6C99B30", Offset = "0x6C98B30", VA = "0x6C99B30")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700043B")]
	public Justify justifyContent
	{
		[Token(Token = "0x600143E")]
		[Address(RVA = "0x6C99B70", Offset = "0x6C98B70", VA = "0x6C99B70")]
		get
		{
			return default(Justify);
		}
	}

	[Token(Token = "0x1700043C")]
	public Length left
	{
		[Token(Token = "0x600143F")]
		[Address(RVA = "0x6C99BB0", Offset = "0x6C98BB0", VA = "0x6C99BB0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700043D")]
	public Length letterSpacing
	{
		[Token(Token = "0x6001440")]
		[Address(RVA = "0x6C99BF0", Offset = "0x6C98BF0", VA = "0x6C99BF0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700043E")]
	public Length marginBottom
	{
		[Token(Token = "0x6001441")]
		[Address(RVA = "0x6C99C30", Offset = "0x6C98C30", VA = "0x6C99C30")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700043F")]
	public Length marginLeft
	{
		[Token(Token = "0x6001442")]
		[Address(RVA = "0x6C99C70", Offset = "0x6C98C70", VA = "0x6C99C70")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000440")]
	public Length marginRight
	{
		[Token(Token = "0x6001443")]
		[Address(RVA = "0x6C99CB0", Offset = "0x6C98CB0", VA = "0x6C99CB0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000441")]
	public Length marginTop
	{
		[Token(Token = "0x6001444")]
		[Address(RVA = "0x6C99CF0", Offset = "0x6C98CF0", VA = "0x6C99CF0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000442")]
	public Length maxHeight
	{
		[Token(Token = "0x6001445")]
		[Address(RVA = "0x6C99D30", Offset = "0x6C98D30", VA = "0x6C99D30")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000443")]
	public Length maxWidth
	{
		[Token(Token = "0x6001446")]
		[Address(RVA = "0x6C99D70", Offset = "0x6C98D70", VA = "0x6C99D70")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000444")]
	public Length minHeight
	{
		[Token(Token = "0x6001447")]
		[Address(RVA = "0x6C99DB0", Offset = "0x6C98DB0", VA = "0x6C99DB0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000445")]
	public Length minWidth
	{
		[Token(Token = "0x6001448")]
		[Address(RVA = "0x6C99DF0", Offset = "0x6C98DF0", VA = "0x6C99DF0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000446")]
	public float opacity
	{
		[Token(Token = "0x6001449")]
		[Address(RVA = "0x6C99E30", Offset = "0x6C98E30", VA = "0x6C99E30")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000447")]
	public OverflowInternal overflow
	{
		[Token(Token = "0x600144A")]
		[Address(RVA = "0x6C99E70", Offset = "0x6C98E70", VA = "0x6C99E70")]
		get
		{
			return default(OverflowInternal);
		}
	}

	[Token(Token = "0x17000448")]
	public Length paddingBottom
	{
		[Token(Token = "0x600144B")]
		[Address(RVA = "0x6C99EB0", Offset = "0x6C98EB0", VA = "0x6C99EB0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000449")]
	public Length paddingLeft
	{
		[Token(Token = "0x600144C")]
		[Address(RVA = "0x6C99EF0", Offset = "0x6C98EF0", VA = "0x6C99EF0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700044A")]
	public Length paddingRight
	{
		[Token(Token = "0x600144D")]
		[Address(RVA = "0x6C99F30", Offset = "0x6C98F30", VA = "0x6C99F30")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700044B")]
	public Length paddingTop
	{
		[Token(Token = "0x600144E")]
		[Address(RVA = "0x6C99F70", Offset = "0x6C98F70", VA = "0x6C99F70")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700044C")]
	public Position position
	{
		[Token(Token = "0x600144F")]
		[Address(RVA = "0x6C99FB0", Offset = "0x6C98FB0", VA = "0x6C99FB0")]
		get
		{
			return default(Position);
		}
	}

	[Token(Token = "0x1700044D")]
	public Length right
	{
		[Token(Token = "0x6001450")]
		[Address(RVA = "0x6C99FF0", Offset = "0x6C98FF0", VA = "0x6C99FF0")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x1700044E")]
	public Rotate rotate
	{
		[Token(Token = "0x6001451")]
		[Address(RVA = "0x6C9A030", Offset = "0x6C99030", VA = "0x6C9A030")]
		get
		{
			return default(Rotate);
		}
	}

	[Token(Token = "0x1700044F")]
	public Scale scale
	{
		[Token(Token = "0x6001452")]
		[Address(RVA = "0x6C9A090", Offset = "0x6C99090", VA = "0x6C9A090")]
		get
		{
			return default(Scale);
		}
	}

	[Token(Token = "0x17000450")]
	public TextOverflow textOverflow
	{
		[Token(Token = "0x6001453")]
		[Address(RVA = "0x6C9A0E0", Offset = "0x6C990E0", VA = "0x6C9A0E0")]
		get
		{
			return default(TextOverflow);
		}
	}

	[Token(Token = "0x17000451")]
	public TextShadow textShadow
	{
		[Token(Token = "0x6001454")]
		[Address(RVA = "0x6C9A120", Offset = "0x6C99120", VA = "0x6C9A120")]
		get
		{
			return default(TextShadow);
		}
	}

	[Token(Token = "0x17000452")]
	public Length top
	{
		[Token(Token = "0x6001455")]
		[Address(RVA = "0x6C9A180", Offset = "0x6C99180", VA = "0x6C9A180")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000453")]
	public TransformOrigin transformOrigin
	{
		[Token(Token = "0x6001456")]
		[Address(RVA = "0x6C9A1C0", Offset = "0x6C991C0", VA = "0x6C9A1C0")]
		get
		{
			return default(TransformOrigin);
		}
	}

	[Token(Token = "0x17000454")]
	public List<TimeValue> transitionDelay
	{
		[Token(Token = "0x6001457")]
		[Address(RVA = "0x6C9A220", Offset = "0x6C99220", VA = "0x6C9A220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000455")]
	public List<TimeValue> transitionDuration
	{
		[Token(Token = "0x6001458")]
		[Address(RVA = "0x6C9A260", Offset = "0x6C99260", VA = "0x6C9A260")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000456")]
	public List<StylePropertyName> transitionProperty
	{
		[Token(Token = "0x6001459")]
		[Address(RVA = "0x6C9A2A0", Offset = "0x6C992A0", VA = "0x6C9A2A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000457")]
	public List<EasingFunction> transitionTimingFunction
	{
		[Token(Token = "0x600145A")]
		[Address(RVA = "0x6C9A2E0", Offset = "0x6C992E0", VA = "0x6C9A2E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000458")]
	public Translate translate
	{
		[Token(Token = "0x600145B")]
		[Address(RVA = "0x6C9A320", Offset = "0x6C99320", VA = "0x6C9A320")]
		get
		{
			return default(Translate);
		}
	}

	[Token(Token = "0x17000459")]
	public Color unityBackgroundImageTintColor
	{
		[Token(Token = "0x600145C")]
		[Address(RVA = "0x6C9A380", Offset = "0x6C99380", VA = "0x6C9A380")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700045A")]
	public EditorTextRenderingMode unityEditorTextRenderingMode
	{
		[Token(Token = "0x600145D")]
		[Address(RVA = "0x6C9A3D0", Offset = "0x6C993D0", VA = "0x6C9A3D0")]
		get
		{
			return default(EditorTextRenderingMode);
		}
	}

	[Token(Token = "0x1700045B")]
	public Font unityFont
	{
		[Token(Token = "0x600145E")]
		[Address(RVA = "0x6C9A410", Offset = "0x6C99410", VA = "0x6C9A410")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700045C")]
	public FontDefinition unityFontDefinition
	{
		[Token(Token = "0x600145F")]
		[Address(RVA = "0x6C9A450", Offset = "0x6C99450", VA = "0x6C9A450")]
		get
		{
			return default(FontDefinition);
		}
	}

	[Token(Token = "0x1700045D")]
	public FontStyle unityFontStyleAndWeight
	{
		[Token(Token = "0x6001460")]
		[Address(RVA = "0x6C9A490", Offset = "0x6C99490", VA = "0x6C9A490")]
		get
		{
			return default(FontStyle);
		}
	}

	[Token(Token = "0x1700045E")]
	public MaterialDefinition unityMaterial
	{
		[Token(Token = "0x6001461")]
		[Address(RVA = "0x6C9A4D0", Offset = "0x6C994D0", VA = "0x6C9A4D0")]
		get
		{
			return default(MaterialDefinition);
		}
	}

	[Token(Token = "0x1700045F")]
	public OverflowClipBox unityOverflowClipBox
	{
		[Token(Token = "0x6001462")]
		[Address(RVA = "0x6C9A510", Offset = "0x6C99510", VA = "0x6C9A510")]
		get
		{
			return default(OverflowClipBox);
		}
	}

	[Token(Token = "0x17000460")]
	public Length unityParagraphSpacing
	{
		[Token(Token = "0x6001463")]
		[Address(RVA = "0x6C9A550", Offset = "0x6C99550", VA = "0x6C9A550")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000461")]
	public int unitySliceBottom
	{
		[Token(Token = "0x6001464")]
		[Address(RVA = "0x6C9A590", Offset = "0x6C99590", VA = "0x6C9A590")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000462")]
	public int unitySliceLeft
	{
		[Token(Token = "0x6001465")]
		[Address(RVA = "0x6C9A5D0", Offset = "0x6C995D0", VA = "0x6C9A5D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000463")]
	public int unitySliceRight
	{
		[Token(Token = "0x6001466")]
		[Address(RVA = "0x6C9A610", Offset = "0x6C99610", VA = "0x6C9A610")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000464")]
	public float unitySliceScale
	{
		[Token(Token = "0x6001467")]
		[Address(RVA = "0x6C9A650", Offset = "0x6C99650", VA = "0x6C9A650")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000465")]
	public int unitySliceTop
	{
		[Token(Token = "0x6001468")]
		[Address(RVA = "0x6C9A690", Offset = "0x6C99690", VA = "0x6C9A690")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000466")]
	public SliceType unitySliceType
	{
		[Token(Token = "0x6001469")]
		[Address(RVA = "0x6C9A6D0", Offset = "0x6C996D0", VA = "0x6C9A6D0")]
		get
		{
			return default(SliceType);
		}
	}

	[Token(Token = "0x17000467")]
	public TextAnchor unityTextAlign
	{
		[Token(Token = "0x600146A")]
		[Address(RVA = "0x6C9A710", Offset = "0x6C99710", VA = "0x6C9A710")]
		get
		{
			return default(TextAnchor);
		}
	}

	[Token(Token = "0x17000468")]
	public TextAutoSize unityTextAutoSize
	{
		[Token(Token = "0x600146B")]
		[Address(RVA = "0x6C9A750", Offset = "0x6C99750", VA = "0x6C9A750")]
		get
		{
			return default(TextAutoSize);
		}
	}

	[Token(Token = "0x17000469")]
	public TextGeneratorType unityTextGenerator
	{
		[Token(Token = "0x600146C")]
		[Address(RVA = "0x6C9A7B0", Offset = "0x6C997B0", VA = "0x6C9A7B0")]
		get
		{
			return default(TextGeneratorType);
		}
	}

	[Token(Token = "0x1700046A")]
	public Color unityTextOutlineColor
	{
		[Token(Token = "0x600146D")]
		[Address(RVA = "0x6C9A7F0", Offset = "0x6C997F0", VA = "0x6C9A7F0")]
		get
		{
			return default(Color);
		}
	}

	[Token(Token = "0x1700046B")]
	public float unityTextOutlineWidth
	{
		[Token(Token = "0x600146E")]
		[Address(RVA = "0x6C9A840", Offset = "0x6C99840", VA = "0x6C9A840")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x1700046C")]
	public TextOverflowPosition unityTextOverflowPosition
	{
		[Token(Token = "0x600146F")]
		[Address(RVA = "0x6C9A880", Offset = "0x6C99880", VA = "0x6C9A880")]
		get
		{
			return default(TextOverflowPosition);
		}
	}

	[Token(Token = "0x1700046D")]
	public Visibility visibility
	{
		[Token(Token = "0x6001470")]
		[Address(RVA = "0x6C9A8C0", Offset = "0x6C998C0", VA = "0x6C9A8C0")]
		get
		{
			return default(Visibility);
		}
	}

	[Token(Token = "0x1700046E")]
	public WhiteSpace whiteSpace
	{
		[Token(Token = "0x6001471")]
		[Address(RVA = "0x6C9A900", Offset = "0x6C99900", VA = "0x6C9A900")]
		get
		{
			return default(WhiteSpace);
		}
	}

	[Token(Token = "0x1700046F")]
	public Length width
	{
		[Token(Token = "0x6001472")]
		[Address(RVA = "0x6C9A940", Offset = "0x6C99940", VA = "0x6C9A940")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x17000470")]
	public Length wordSpacing
	{
		[Token(Token = "0x6001473")]
		[Address(RVA = "0x6C9A980", Offset = "0x6C99980", VA = "0x6C9A980")]
		get
		{
			return default(Length);
		}
	}

	[Token(Token = "0x600140D")]
	[Address(RVA = "0x6C96050", Offset = "0x6C95050", VA = "0x6C96050")]
	public void FinalizeApply(ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x600140E")]
	[Address(RVA = "0x6C961B0", Offset = "0x6C951B0", VA = "0x6C961B0")]
	private bool ApplyGlobalKeyword(StylePropertyReader reader, ref ComputedStyle parentStyle)
	{
		return default(bool);
	}

	[Token(Token = "0x600140F")]
	[Address(RVA = "0x6C962F0", Offset = "0x6C952F0", VA = "0x6C962F0")]
	private bool ApplyGlobalKeyword(StylePropertyId id, StyleKeyword keyword, ref ComputedStyle parentStyle)
	{
		return default(bool);
	}

	[Token(Token = "0x6001410")]
	[Address(RVA = "0x6C98190", Offset = "0x6C97190", VA = "0x6C98190")]
	private void RemoveCustomStyleProperty(StylePropertyReader reader)
	{
	}

	[Token(Token = "0x6001411")]
	[Address(RVA = "0x6C98230", Offset = "0x6C97230", VA = "0x6C98230")]
	private void ApplyCustomStyleProperty(StylePropertyReader reader)
	{
	}

	[Token(Token = "0x6001412")]
	private static bool AreListPropertiesEqual<T>(List<T> a, List<T> b)
	{
		return default(bool);
	}

	[Token(Token = "0x6001413")]
	[Address(RVA = "0x6C98320", Offset = "0x6C97320", VA = "0x6C98320")]
	private void ApplyAllPropertyInitial()
	{
	}

	[Token(Token = "0x6001414")]
	[Address(RVA = "0x6C984A0", Offset = "0x6C974A0", VA = "0x6C984A0")]
	private void ResetComputedTransitions()
	{
	}

	[Token(Token = "0x6001415")]
	[Address(RVA = "0x6C984C0", Offset = "0x6C974C0", VA = "0x6C984C0")]
	public static bool StartAnimationInlineTextShadow(VisualElement element, ref ComputedStyle computedStyle, StyleTextShadow textShadow, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001416")]
	[Address(RVA = "0x6C986B0", Offset = "0x6C976B0", VA = "0x6C986B0")]
	public static bool StartAnimationInlineRotate(VisualElement element, ref ComputedStyle computedStyle, StyleRotate rotate, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001417")]
	[Address(RVA = "0x6C988E0", Offset = "0x6C978E0", VA = "0x6C988E0")]
	public static bool StartAnimationInlineTranslate(VisualElement element, ref ComputedStyle computedStyle, StyleTranslate translate, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001418")]
	[Address(RVA = "0x6C98B00", Offset = "0x6C97B00", VA = "0x6C98B00")]
	public static bool StartAnimationInlineScale(VisualElement element, ref ComputedStyle computedStyle, StyleScale scale, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001419")]
	[Address(RVA = "0x6C98CB0", Offset = "0x6C97CB0", VA = "0x6C98CB0")]
	public static bool StartAnimationInlineTransformOrigin(VisualElement element, ref ComputedStyle computedStyle, StyleTransformOrigin transformOrigin, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600141A")]
	[Address(RVA = "0x6C98ED0", Offset = "0x6C97ED0", VA = "0x6C98ED0")]
	public static bool StartAnimationInlineBackgroundSize(VisualElement element, ref ComputedStyle computedStyle, StyleBackgroundSize backgroundSize, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x600141B")]
	[Address(RVA = "0x6C990C0", Offset = "0x6C980C0", VA = "0x6C990C0")]
	public static bool StartAnimationInlineFilter(VisualElement element, ref ComputedStyle computedStyle, StyleList<FilterFunction> filter, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001474")]
	[Address(RVA = "0x6C9A9C0", Offset = "0x6C999C0", VA = "0x6C9A9C0")]
	public static ComputedStyle Create(ref ComputedStyle parentStyle)
	{
		return default(ComputedStyle);
	}

	[Token(Token = "0x6001475")]
	[Address(RVA = "0x6C9ABB0", Offset = "0x6C99BB0", VA = "0x6C9ABB0")]
	public static ComputedStyle CreateInitial()
	{
		return default(ComputedStyle);
	}

	[Token(Token = "0x6001476")]
	[Address(RVA = "0x6C9AD40", Offset = "0x6C99D40", VA = "0x6C9AD40")]
	public ComputedStyle Acquire()
	{
		return default(ComputedStyle);
	}

	[Token(Token = "0x6001477")]
	[Address(RVA = "0x6C9AE50", Offset = "0x6C99E50", VA = "0x6C9AE50")]
	public void Release()
	{
	}

	[Token(Token = "0x6001478")]
	[Address(RVA = "0x6C98370", Offset = "0x6C97370", VA = "0x6C98370")]
	public void CopyFrom(ref ComputedStyle other)
	{
	}

	[Token(Token = "0x6001479")]
	[Address(RVA = "0x6C9AF30", Offset = "0x6C99F30", VA = "0x6C9AF30")]
	public void ApplyProperties(StylePropertyReader reader, ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x600147A")]
	[Address(RVA = "0x6C9C320", Offset = "0x6C9B320", VA = "0x6C9C320")]
	public void ApplyStyleValue(StyleValue sv, ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x600147B")]
	[Address(RVA = "0x6C9D0C0", Offset = "0x6C9C0C0", VA = "0x6C9D0C0")]
	public void ApplyStyleValueManaged(StyleValueManaged sv, ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x600147C")]
	[Address(RVA = "0x6C9D5F0", Offset = "0x6C9C5F0", VA = "0x6C9D5F0")]
	public void ApplyStyleCursor(Cursor cursor)
	{
	}

	[Token(Token = "0x600147D")]
	[Address(RVA = "0x6C9D650", Offset = "0x6C9C650", VA = "0x6C9D650")]
	public void ApplyStyleTextShadow(TextShadow st)
	{
	}

	[Token(Token = "0x600147E")]
	[Address(RVA = "0x6C9D6B0", Offset = "0x6C9C6B0", VA = "0x6C9D6B0")]
	public void ApplyStyleTextAutoSize(TextAutoSize st)
	{
	}

	[Token(Token = "0x600147F")]
	[Address(RVA = "0x6C9D710", Offset = "0x6C9C710", VA = "0x6C9D710")]
	public void ApplyFromComputedStyle(StylePropertyId id, ref ComputedStyle other)
	{
	}

	[Token(Token = "0x6001480")]
	[Address(RVA = "0x6C9EE10", Offset = "0x6C9DE10", VA = "0x6C9EE10")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Length newValue)
	{
	}

	[Token(Token = "0x6001481")]
	[Address(RVA = "0x6C9F650", Offset = "0x6C9E650", VA = "0x6C9F650")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, float newValue)
	{
	}

	[Token(Token = "0x6001482")]
	[Address(RVA = "0x6C9FA10", Offset = "0x6C9EA10", VA = "0x6C9FA10")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, int newValue)
	{
	}

	[Token(Token = "0x6001483")]
	[Address(RVA = "0x6CA0180", Offset = "0x6C9F180", VA = "0x6CA0180")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, BackgroundPosition newValue)
	{
	}

	[Token(Token = "0x6001484")]
	[Address(RVA = "0x6CA0350", Offset = "0x6C9F350", VA = "0x6CA0350")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, BackgroundRepeat newValue)
	{
	}

	[Token(Token = "0x6001485")]
	[Address(RVA = "0x6CA04B0", Offset = "0x6C9F4B0", VA = "0x6CA04B0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, BackgroundSize newValue)
	{
	}

	[Token(Token = "0x6001486")]
	[Address(RVA = "0x6CA05E0", Offset = "0x6C9F5E0", VA = "0x6CA05E0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Color newValue)
	{
	}

	[Token(Token = "0x6001487")]
	[Address(RVA = "0x6CA0890", Offset = "0x6C9F890", VA = "0x6CA0890")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Background newValue)
	{
	}

	[Token(Token = "0x6001488")]
	[Address(RVA = "0x6CA0A40", Offset = "0x6C9FA40", VA = "0x6CA0A40")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, List<FilterFunction> newValue)
	{
	}

	[Token(Token = "0x6001489")]
	[Address(RVA = "0x6CA0B80", Offset = "0x6C9FB80", VA = "0x6CA0B80")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Font newValue)
	{
	}

	[Token(Token = "0x600148A")]
	[Address(RVA = "0x6CA0D10", Offset = "0x6C9FD10", VA = "0x6CA0D10")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, FontDefinition newValue)
	{
	}

	[Token(Token = "0x600148B")]
	[Address(RVA = "0x6CA0E90", Offset = "0x6C9FE90", VA = "0x6CA0E90")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, TextShadow newValue)
	{
	}

	[Token(Token = "0x600148C")]
	[Address(RVA = "0x6CA0FC0", Offset = "0x6C9FFC0", VA = "0x6CA0FC0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Translate newValue)
	{
	}

	[Token(Token = "0x600148D")]
	[Address(RVA = "0x6CA10F0", Offset = "0x6CA00F0", VA = "0x6CA10F0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, TransformOrigin newValue)
	{
	}

	[Token(Token = "0x600148E")]
	[Address(RVA = "0x6CA1220", Offset = "0x6CA0220", VA = "0x6CA1220")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Rotate newValue)
	{
	}

	[Token(Token = "0x600148F")]
	[Address(RVA = "0x6CA1350", Offset = "0x6CA0350", VA = "0x6CA1350")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Scale newValue)
	{
	}

	[Token(Token = "0x6001490")]
	[Address(RVA = "0x6CA1480", Offset = "0x6CA0480", VA = "0x6CA1480")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, MaterialDefinition newValue)
	{
	}

	[Token(Token = "0x6001491")]
	[Address(RVA = "0x6CA15C0", Offset = "0x6CA05C0", VA = "0x6CA15C0")]
	public void ApplyPropertyAnimation(VisualElement ve, StylePropertyId id, Ratio newValue)
	{
	}

	[Token(Token = "0x6001492")]
	[Address(RVA = "0x6CA1710", Offset = "0x6CA0710", VA = "0x6CA1710")]
	public static bool StartAnimation(VisualElement element, StylePropertyId id, ref ComputedStyle oldStyle, ref ComputedStyle newStyle, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001493")]
	[Address(RVA = "0x6CA6240", Offset = "0x6CA5240", VA = "0x6CA6240")]
	public static bool StartAnimationAllProperty(VisualElement element, ref ComputedStyle oldStyle, ref ComputedStyle newStyle, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001494")]
	[Address(RVA = "0x6CAB320", Offset = "0x6CAA320", VA = "0x6CAB320")]
	public static bool StartAnimationInline(VisualElement element, StylePropertyId id, ref ComputedStyle computedStyle, StyleValue sv, int durationMs, int delayMs, Func<float, float> easingCurve)
	{
		return default(bool);
	}

	[Token(Token = "0x6001495")]
	[Address(RVA = "0x6CAEA20", Offset = "0x6CADA20", VA = "0x6CAEA20")]
	public void ApplyStyleTransformOrigin(TransformOrigin st)
	{
	}

	[Token(Token = "0x6001496")]
	[Address(RVA = "0x6CAEA80", Offset = "0x6CADA80", VA = "0x6CAEA80")]
	public void ApplyStyleTranslate(Translate translateValue)
	{
	}

	[Token(Token = "0x6001497")]
	[Address(RVA = "0x6CAEAE0", Offset = "0x6CADAE0", VA = "0x6CAEAE0")]
	public void ApplyStyleRotate(Rotate rotateValue)
	{
	}

	[Token(Token = "0x6001498")]
	[Address(RVA = "0x6CAEB40", Offset = "0x6CADB40", VA = "0x6CAEB40")]
	public void ApplyStyleScale(Scale scaleValue)
	{
	}

	[Token(Token = "0x6001499")]
	[Address(RVA = "0x6CAEBA0", Offset = "0x6CADBA0", VA = "0x6CAEBA0")]
	public void ApplyStyleBackgroundSize(BackgroundSize backgroundSizeValue)
	{
	}

	[Token(Token = "0x600149A")]
	[Address(RVA = "0x6CAEC00", Offset = "0x6CADC00", VA = "0x6CAEC00")]
	public void ApplyStyleFilter(List<FilterFunction> st)
	{
	}

	[Token(Token = "0x600149B")]
	[Address(RVA = "0x6C96240", Offset = "0x6C95240", VA = "0x6C96240")]
	public void ApplyInitialValue(StylePropertyReader reader)
	{
	}

	[Token(Token = "0x600149C")]
	[Address(RVA = "0x6C96310", Offset = "0x6C95310", VA = "0x6C96310")]
	public void ApplyInitialValue(StylePropertyId id)
	{
	}

	[Token(Token = "0x600149D")]
	[Address(RVA = "0x6C962C0", Offset = "0x6C952C0", VA = "0x6C962C0")]
	public void ApplyUnsetValue(StylePropertyReader reader, ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x600149E")]
	[Address(RVA = "0x6CAEC60", Offset = "0x6CADC60", VA = "0x6CAEC60")]
	public void ApplyUnsetValue(StylePropertyId id, ref ComputedStyle parentStyle)
	{
	}

	[Token(Token = "0x600149F")]
	[Address(RVA = "0x6CAF2C0", Offset = "0x6CAE2C0", VA = "0x6CAF2C0")]
	public static VersionChangeType CompareChanges(ref ComputedStyle x, ref ComputedStyle y)
	{
		return default(VersionChangeType);
	}
}
