// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.RichTextTagParser
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Concurrent;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Text;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.TextCore.Text;

namespace UnityEngine.TextCore;

[Token(Token = "0x200000E")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal static class RichTextTagParser
{
	[Token(Token = "0x200000F")]
	public enum TagType
	{
		[Token(Token = "0x400005F")]
		Hyperlink,
		[Token(Token = "0x4000060")]
		Align,
		[Token(Token = "0x4000061")]
		AllCaps,
		[Token(Token = "0x4000062")]
		Alpha,
		[Token(Token = "0x4000063")]
		Bold,
		[Token(Token = "0x4000064")]
		Br,
		[Token(Token = "0x4000065")]
		Color,
		[Token(Token = "0x4000066")]
		CSpace,
		[Token(Token = "0x4000067")]
		Font,
		[Token(Token = "0x4000068")]
		FontWeight,
		[Token(Token = "0x4000069")]
		Gradient,
		[Token(Token = "0x400006A")]
		Italic,
		[Token(Token = "0x400006B")]
		Indent,
		[Token(Token = "0x400006C")]
		LineHeight,
		[Token(Token = "0x400006D")]
		LineIndent,
		[Token(Token = "0x400006E")]
		Link,
		[Token(Token = "0x400006F")]
		Lowercase,
		[Token(Token = "0x4000070")]
		Margin,
		[Token(Token = "0x4000071")]
		MarginLeft,
		[Token(Token = "0x4000072")]
		MarginRight,
		[Token(Token = "0x4000073")]
		Mark,
		[Token(Token = "0x4000074")]
		Mspace,
		[Token(Token = "0x4000075")]
		NoBr,
		[Token(Token = "0x4000076")]
		NoParse,
		[Token(Token = "0x4000077")]
		Strikethrough,
		[Token(Token = "0x4000078")]
		Size,
		[Token(Token = "0x4000079")]
		SmallCaps,
		[Token(Token = "0x400007A")]
		Space,
		[Token(Token = "0x400007B")]
		Sprite,
		[Token(Token = "0x400007C")]
		Style,
		[Token(Token = "0x400007D")]
		Subscript,
		[Token(Token = "0x400007E")]
		Superscript,
		[Token(Token = "0x400007F")]
		Underline,
		[Token(Token = "0x4000080")]
		Uppercase,
		[Token(Token = "0x4000081")]
		VOffset,
		[Token(Token = "0x4000082")]
		Width,
		[Token(Token = "0x4000083")]
		Rotate,
		[Token(Token = "0x4000084")]
		Pos,
		[Token(Token = "0x4000085")]
		Material,
		[Token(Token = "0x4000086")]
		Page,
		[Token(Token = "0x4000087")]
		Action,
		[Token(Token = "0x4000088")]
		Cr,
		[Token(Token = "0x4000089")]
		Zwsp,
		[Token(Token = "0x400008A")]
		Zwj,
		[Token(Token = "0x400008B")]
		Nbsp,
		[Token(Token = "0x400008C")]
		Shy,
		[Token(Token = "0x400008D")]
		Unknown
	}

	[Token(Token = "0x2000010")]
	public enum ValueID
	{
		[Token(Token = "0x400008F")]
		Color,
		[Token(Token = "0x4000090")]
		Padding,
		[Token(Token = "0x4000091")]
		AssetID,
		[Token(Token = "0x4000092")]
		GlyphMetrics,
		[Token(Token = "0x4000093")]
		Scale,
		[Token(Token = "0x4000094")]
		Tint,
		[Token(Token = "0x4000095")]
		SpriteColor,
		[Token(Token = "0x4000096")]
		Gradient
	}

	[Token(Token = "0x2000011")]
	internal class TagTypeInfo : IEquatable<TagTypeInfo>
	{
		[Token(Token = "0x4000097")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public TagType TagType;

		[Token(Token = "0x4000098")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public string name;

		[Token(Token = "0x4000099")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public TagValueType valueType;

		[Token(Token = "0x400009A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		public TagUnitType unitType;

		[Token(Token = "0x17000003")]
		[CompilerGenerated]
		protected virtual Type EqualityContract
		{
			[Token(Token = "0x600002C")]
			[Address(RVA = "0x3021420", Offset = "0x301FA20", VA = "0x183021420", Slot = "5")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600002D")]
		[Address(RVA = "0x30213D0", Offset = "0x301F9D0", VA = "0x1830213D0")]
		internal TagTypeInfo(TagType tagType, string name, TagValueType valueType = TagValueType.None, TagUnitType unitType = TagUnitType.Unknown)
		{
		}

		[Token(Token = "0x600002E")]
		[Address(RVA = "0x30212E0", Offset = "0x301F8E0", VA = "0x1830212E0", Slot = "3")]
		[CompilerGenerated]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x600002F")]
		[Address(RVA = "0x3021140", Offset = "0x301F740", VA = "0x183021140", Slot = "6")]
		[CompilerGenerated]
		protected virtual bool PrintMembers(StringBuilder builder)
		{
			return default(bool);
		}

		[Token(Token = "0x6000030")]
		[Address(RVA = "0x3020FA0", Offset = "0x301F5A0", VA = "0x183020FA0", Slot = "2")]
		[CompilerGenerated]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000031")]
		[Address(RVA = "0x3020D30", Offset = "0x301F330", VA = "0x183020D30", Slot = "0")]
		[CompilerGenerated]
		public override bool Equals(object? obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000032")]
		[Address(RVA = "0x3020DC0", Offset = "0x301F3C0", VA = "0x183020DC0", Slot = "7")]
		[CompilerGenerated]
		public virtual bool Equals(TagTypeInfo? other)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000012")]
	internal enum TagValueType
	{
		[Token(Token = "0x400009C")]
		None,
		[Token(Token = "0x400009D")]
		NumericalValue,
		[Token(Token = "0x400009E")]
		StringValue,
		[Token(Token = "0x400009F")]
		ColorValue,
		[Token(Token = "0x40000A0")]
		Vector4Value,
		[Token(Token = "0x40000A1")]
		GlyphMetricsValue,
		[Token(Token = "0x40000A2")]
		BoolValue
	}

	[Token(Token = "0x2000013")]
	internal enum TagUnitType
	{
		[Token(Token = "0x40000A4")]
		Unknown,
		[Token(Token = "0x40000A5")]
		Pixels,
		[Token(Token = "0x40000A6")]
		FontUnits,
		[Token(Token = "0x40000A7")]
		Percentage
	}

	[Token(Token = "0x2000014")]
	internal class TagValue : IEquatable<TagValue>
	{
		[Token(Token = "0x40000A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		internal TagValueType type;

		[Token(Token = "0x40000A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
		internal TagUnitType unit;

		[Token(Token = "0x40000AA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private string? m_stringValue;

		[Token(Token = "0x40000AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private float m_numericalValue;

		[Token(Token = "0x40000AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
		private Color m_colorValue;

		[Token(Token = "0x40000AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x34")]
		private Vector4 m_vector4Value;

		[Token(Token = "0x40000AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x44")]
		private GlyphMetrics m_glyphMetricsValue;

		[Token(Token = "0x40000AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private bool m_boolValue;

		[Token(Token = "0x40000B0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
		private ValueID? m_ID;

		[Token(Token = "0x17000004")]
		[CompilerGenerated]
		protected virtual Type EqualityContract
		{
			[Token(Token = "0x6000033")]
			[Address(RVA = "0x3021FA0", Offset = "0x30205A0", VA = "0x183021FA0", Slot = "5")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000005")]
		internal string? StringValue
		{
			[Token(Token = "0x600003A")]
			[Address(RVA = "0x30220F0", Offset = "0x30206F0", VA = "0x1830220F0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000006")]
		internal float NumericalValue
		{
			[Token(Token = "0x600003B")]
			[Address(RVA = "0x3022080", Offset = "0x3020680", VA = "0x183022080")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x17000007")]
		internal Color ColorValue
		{
			[Token(Token = "0x600003C")]
			[Address(RVA = "0x3021F20", Offset = "0x3020520", VA = "0x183021F20")]
			get
			{
				return default(Color);
			}
		}

		[Token(Token = "0x17000008")]
		internal Vector4 Vector4Value
		{
			[Token(Token = "0x600003D")]
			[Address(RVA = "0x3022160", Offset = "0x3020760", VA = "0x183022160")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x17000009")]
		internal GlyphMetrics GlyphMetricsValue
		{
			[Token(Token = "0x600003E")]
			[Address(RVA = "0x3021FF0", Offset = "0x30205F0", VA = "0x183021FF0")]
			get
			{
				return default(GlyphMetrics);
			}
		}

		[Token(Token = "0x1700000A")]
		internal bool BoolValue
		{
			[Token(Token = "0x600003F")]
			[Address(RVA = "0x3021EB0", Offset = "0x30204B0", VA = "0x183021EB0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700000B")]
		internal ValueID? ID
		{
			[Token(Token = "0x6000040")]
			[Address(RVA = "0x3022070", Offset = "0x3020670", VA = "0x183022070")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000034")]
		[Address(RVA = "0x3021CE0", Offset = "0x30202E0", VA = "0x183021CE0")]
		internal TagValue(float value, [Optional][DefaultParameterValue(0)] TagUnitType tagUnitType, [Optional] ValueID? id)
		{
		}

		[Token(Token = "0x6000035")]
		[Address(RVA = "0x3021D30", Offset = "0x3020330", VA = "0x183021D30")]
		internal TagValue(Color value, [Optional] ValueID? id)
		{
		}

		[Token(Token = "0x6000036")]
		[Address(RVA = "0x3021E60", Offset = "0x3020460", VA = "0x183021E60")]
		internal TagValue(string value, [Optional] ValueID? id)
		{
		}

		[Token(Token = "0x6000037")]
		[Address(RVA = "0x3021E10", Offset = "0x3020410", VA = "0x183021E10")]
		internal TagValue(Vector4 value, [Optional] ValueID? id)
		{
		}

		[Token(Token = "0x6000038")]
		[Address(RVA = "0x3021D80", Offset = "0x3020380", VA = "0x183021D80")]
		internal TagValue(GlyphMetrics value, [Optional] ValueID? id)
		{
		}

		[Token(Token = "0x6000039")]
		[Address(RVA = "0x3021DD0", Offset = "0x30203D0", VA = "0x183021DD0")]
		internal TagValue(bool value, [Optional] ValueID? id)
		{
		}

		[Token(Token = "0x6000041")]
		[Address(RVA = "0x3021BF0", Offset = "0x30201F0", VA = "0x183021BF0", Slot = "3")]
		[CompilerGenerated]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x6000042")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "6")]
		[CompilerGenerated]
		protected virtual bool PrintMembers(StringBuilder builder)
		{
			return default(bool);
		}

		[Token(Token = "0x6000043")]
		[Address(RVA = "0x30221E0", Offset = "0x30207E0", VA = "0x1830221E0")]
		[CompilerGenerated]
		public static bool operator ==(TagValue? left, TagValue? right)
		{
			return default(bool);
		}

		[Token(Token = "0x6000044")]
		[Address(RVA = "0x3021890", Offset = "0x301FE90", VA = "0x183021890", Slot = "2")]
		[CompilerGenerated]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000045")]
		[Address(RVA = "0x3021800", Offset = "0x301FE00", VA = "0x183021800", Slot = "0")]
		[CompilerGenerated]
		public override bool Equals(object? obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000046")]
		[Address(RVA = "0x3021470", Offset = "0x301FA70", VA = "0x183021470", Slot = "7")]
		[CompilerGenerated]
		public virtual bool Equals(TagValue? other)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x2000015")]
	internal struct Tag
	{
		[Token(Token = "0x40000B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public TagType tagType;

		[Token(Token = "0x40000B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		public bool isClosing;

		[Token(Token = "0x40000B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public int start;

		[Token(Token = "0x40000B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		public int end;

		[Token(Token = "0x40000B5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public TagValue? value;

		[Token(Token = "0x40000B6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public TagValue? value2;

		[Token(Token = "0x40000B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		public TagValue? value3;

		[Token(Token = "0x40000B8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public TagValue? value4;

		[Token(Token = "0x40000B9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		public TagValue? value5;

		[Token(Token = "0x40000BA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
		public sbyte nestingLevel;
	}

	[Token(Token = "0x2000016")]
	public struct Segment
	{
		[Token(Token = "0x40000BB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public List<Tag>? tags;

		[Token(Token = "0x40000BC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public int start;

		[Token(Token = "0x40000BD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		public int end;
	}

	[Token(Token = "0x2000017")]
	internal class ParseError : IEquatable<ParseError>
	{
		[Token(Token = "0x40000BE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		public readonly int position;

		[Token(Token = "0x40000BF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		public readonly string message;

		[Token(Token = "0x1700000C")]
		[CompilerGenerated]
		protected virtual Type EqualityContract
		{
			[Token(Token = "0x6000047")]
			[Address(RVA = "0x30169D0", Offset = "0x3014FD0", VA = "0x1830169D0", Slot = "5")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000048")]
		[Address(RVA = "0x1CF8770", Offset = "0x1CF6D70", VA = "0x181CF8770")]
		internal ParseError(string message, int position)
		{
		}

		[Token(Token = "0x6000049")]
		[Address(RVA = "0x30168E0", Offset = "0x3014EE0", VA = "0x1830168E0", Slot = "3")]
		[CompilerGenerated]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x600004A")]
		[Address(RVA = "0x3016830", Offset = "0x3014E30", VA = "0x183016830", Slot = "6")]
		[CompilerGenerated]
		protected virtual bool PrintMembers(StringBuilder builder)
		{
			return default(bool);
		}

		[Token(Token = "0x600004B")]
		[Address(RVA = "0x3016720", Offset = "0x3014D20", VA = "0x183016720", Slot = "2")]
		[CompilerGenerated]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x600004C")]
		[Address(RVA = "0x3016540", Offset = "0x3014B40", VA = "0x183016540", Slot = "0")]
		[CompilerGenerated]
		public override bool Equals(object? obj)
		{
			return default(bool);
		}

		[Token(Token = "0x600004D")]
		[Address(RVA = "0x30165D0", Offset = "0x3014BD0", VA = "0x1830165D0", Slot = "7")]
		[CompilerGenerated]
		public virtual bool Equals(ParseError? other)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4000055")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly Color32 k_HighlightColor;

	[Token(Token = "0x4000056")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	internal static readonly char k_PrivateArea;

	[Token(Token = "0x4000057")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	internal static Color s_AtgHyperlinkColor;

	[Token(Token = "0x4000058")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static readonly Dictionary<string, IntPtr> s_FontAssetCache;

	[Token(Token = "0x4000059")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	internal static readonly Dictionary<string, SpriteAsset> s_SpriteAssetCache;

	[Token(Token = "0x400005A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	internal static readonly Dictionary<string, IntPtr> s_GradientAssetCache;

	[Token(Token = "0x400005B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static readonly ConcurrentDictionary<TagType, byte> s_LoggedUnsupportedTagWarnings;

	[Token(Token = "0x400005C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	internal static readonly TagTypeInfo[] TagsInfo;

	[Token(Token = "0x400005D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "UnityEngine.IMGUIModule" })]
	private static readonly List<string> s_EmptyTagNameList;

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x3020C10", Offset = "0x301F210", VA = "0x183020C10")]
	private static bool tagMatch(ReadOnlySpan<char> tagCandidate, string tagName)
	{
		return default(bool);
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x301E880", Offset = "0x301CE80", VA = "0x18301E880")]
	private static bool SpanToEnum(ReadOnlySpan<char> tagCandidate, out TagType tagType, out string? error, out ReadOnlySpan<char> attribute)
	{
		return default(bool);
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x301C110", Offset = "0x301A710", VA = "0x18301C110")]
	private static TagValue ParseColorAttribute(ReadOnlySpan<char> attributeSection)
	{
		return null;
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x301BF60", Offset = "0x301A560", VA = "0x18301BF60")]
	private static TagValue ParseAlphaAttribute(ReadOnlySpan<char> attributeSection)
	{
		return null;
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x301BDA0", Offset = "0x301A3A0", VA = "0x18301BDA0")]
	private static int HexCharToInt(char hex)
	{
		return default(int);
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x301C330", Offset = "0x301A930", VA = "0x18301C330")]
	private static TagValue ParsePaddingAttribute(ReadOnlySpan<char> value)
	{
		return null;
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x301C220", Offset = "0x301A820", VA = "0x18301C220")]
	private static TagValue ParseHref(ReadOnlySpan<char> attributeSection)
	{
		return null;
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x301EC10", Offset = "0x301D210", VA = "0x18301EC10")]
	private static bool TryGetSimpleHref(ReadOnlySpan<char> attributeSection, out string hrefValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x301C610", Offset = "0x301AC10", VA = "0x18301C610")]
	private static bool ParseSpriteAttributes(ReadOnlySpan<char> attributeSection, TextSettings textSettings, out char unicode, out TagValue? spriteAssetValue, out TagValue? glyphMetricsValue, out TagValue? tintValue, out TagValue? scaleValue, out TagValue? colorValue, out string? spriteAssetNameOut)
	{
		return default(bool);
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x301E060", Offset = "0x301C660", VA = "0x18301E060")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void PreloadFontAssetsFromTags(string text, TextSettings textSettings)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x301E5E0", Offset = "0x301CBE0", VA = "0x18301E5E0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void PreloadSpriteAssetsFromTags(string text, TextSettings textSettings)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x301E320", Offset = "0x301C920", VA = "0x18301E320")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void PreloadGradientAssetsFromTags(string text, TextSettings textSettings)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x3018EF0", Offset = "0x30174F0", VA = "0x183018EF0")]
	internal static List<Tag> FindTags(ref string inputStr, TextSettings textSettings, [Optional][DefaultParameterValue(false)] bool preprocessingOnly, [Optional] List<ParseError>? errors)
	{
		return null;
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x301B250", Offset = "0x3019850", VA = "0x18301B250")]
	private static ReadOnlySpan<char> GetAttributeSpan(ReadOnlySpan<char> attributeSection)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x301D360", Offset = "0x301B960", VA = "0x18301D360")]
	private static TagUnitType ParseTagUnitType(ref ReadOnlySpan<char> attributeSection)
	{
		return default(TagUnitType);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x301D610", Offset = "0x301BC10", VA = "0x18301D610")]
	internal static List<Tag> PickResultingTags(List<Tag> allTags, string input, int atPosition, [Optional] List<Tag>? applicableTags)
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x301AFE0", Offset = "0x30195E0", VA = "0x18301AFE0")]
	internal static Segment[] GenerateSegments(string input, List<Tag> tags)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x3016C70", Offset = "0x3015270", VA = "0x183016C70")]
	internal static void ApplyStateToSegment(string input, List<Tag> tags, Segment[] segments)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x3016A20", Offset = "0x3015020", VA = "0x183016A20")]
	private static int AddLink(TagType type, string value, List<(int, TagType, string)> links)
	{
		return default(int);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x3017920", Offset = "0x3015F20", VA = "0x183017920")]
	private static TextSpan CreateTextSpan(Segment segment, ref NativeTextGenerationSettings tgs, List<(int, TagType, string)> links, Color hyperlinkColor, float pixelsPerPoint)
	{
		return default(TextSpan);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x30174C0", Offset = "0x3015AC0", VA = "0x1830174C0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void CreateTextGenerationSettingsArray(ref NativeTextGenerationSettings tgs, List<(int, TagType, string)> links, Color hyperlinkColor, float pixelsPerPoint, TextSettings textSettings)
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x301BDE0", Offset = "0x301A3E0", VA = "0x18301BDE0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static bool MayNeedParsing(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x3016D60", Offset = "0x3015360", VA = "0x183016D60")]
	private static bool ContainsFontTag(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x30171A0", Offset = "0x30157A0", VA = "0x1830171A0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static bool ContainsSpriteTag(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x3017330", Offset = "0x3015930", VA = "0x183017330")]
	internal static bool ContainsStyleTags(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x3016EF0", Offset = "0x30154F0", VA = "0x183016EF0")]
	internal static bool ContainsGradientTag(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x3017080", Offset = "0x3015680", VA = "0x183017080")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static bool ContainsNobrTags(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x301B3F0", Offset = "0x30199F0", VA = "0x18301B3F0")]
	internal static bool HasFontTags(string text, TextSettings textSettings, out List<string> fontAssetNames)
	{
		return default(bool);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x301BA60", Offset = "0x301A060", VA = "0x18301BA60")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "UnityEngine.IMGUIModule" })]
	internal static bool HasSpriteTags(string text, TextSettings textSettings, out List<string> spriteAssetNames)
	{
		return default(bool);
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x301B730", Offset = "0x3019D30", VA = "0x18301B730")]
	internal static bool HasGradientTags(string text, TextSettings textSettings, out List<string> gradientAssetNames)
	{
		return default(bool);
	}
}
