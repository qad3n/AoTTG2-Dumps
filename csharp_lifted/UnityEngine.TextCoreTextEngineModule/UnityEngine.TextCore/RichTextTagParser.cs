// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.RichTextTagParser
// Update status: unchanged since the previous dump
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
			[Address(RVA = "0x6A0AB20", Offset = "0x6A09B20", VA = "0x6A0AB20", Slot = "5")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600002D")]
		[Address(RVA = "0x6A0AAD0", Offset = "0x6A09AD0", VA = "0x6A0AAD0")]
		internal TagTypeInfo(TagType tagType, string name, TagValueType valueType = TagValueType.None, TagUnitType unitType = TagUnitType.Unknown)
		{
		}

		[Token(Token = "0x600002E")]
		[Address(RVA = "0x6A0AB80", Offset = "0x6A09B80", VA = "0x6A0AB80", Slot = "3")]
		[CompilerGenerated]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x600002F")]
		[Address(RVA = "0x6A0AC60", Offset = "0x6A09C60", VA = "0x6A0AC60", Slot = "6")]
		[CompilerGenerated]
		protected virtual bool PrintMembers(StringBuilder builder)
		{
			return default(bool);
		}

		[Token(Token = "0x6000030")]
		[Address(RVA = "0x6A0AE00", Offset = "0x6A09E00", VA = "0x6A0AE00", Slot = "2")]
		[CompilerGenerated]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000031")]
		[Address(RVA = "0x6A0AF90", Offset = "0x6A09F90", VA = "0x6A0AF90", Slot = "0")]
		[CompilerGenerated]
		public override bool Equals(object? obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000032")]
		[Address(RVA = "0x6A0B010", Offset = "0x6A0A010", VA = "0x6A0B010", Slot = "7")]
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
			[Address(RVA = "0x6A0B1D0", Offset = "0x6A0A1D0", VA = "0x6A0B1D0", Slot = "5")]
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
			[Address(RVA = "0x6A085E0", Offset = "0x6A075E0", VA = "0x6A085E0")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x17000006")]
		internal float NumericalValue
		{
			[Token(Token = "0x600003B")]
			[Address(RVA = "0x6A08510", Offset = "0x6A07510", VA = "0x6A08510")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x17000007")]
		internal Color ColorValue
		{
			[Token(Token = "0x600003C")]
			[Address(RVA = "0x6A084B0", Offset = "0x6A074B0", VA = "0x6A084B0")]
			get
			{
				return default(Color);
			}
		}

		[Token(Token = "0x17000008")]
		internal Vector4 Vector4Value
		{
			[Token(Token = "0x600003D")]
			[Address(RVA = "0x6A08580", Offset = "0x6A07580", VA = "0x6A08580")]
			get
			{
				return default(Vector4);
			}
		}

		[Token(Token = "0x17000009")]
		internal GlyphMetrics GlyphMetricsValue
		{
			[Token(Token = "0x600003E")]
			[Address(RVA = "0x6A08640", Offset = "0x6A07640", VA = "0x6A08640")]
			get
			{
				return default(GlyphMetrics);
			}
		}

		[Token(Token = "0x1700000A")]
		internal bool BoolValue
		{
			[Token(Token = "0x600003F")]
			[Address(RVA = "0x6A086A0", Offset = "0x6A076A0", VA = "0x6A086A0")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700000B")]
		internal ValueID? ID
		{
			[Token(Token = "0x6000040")]
			[Address(RVA = "0x6A08570", Offset = "0x6A07570", VA = "0x6A08570")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000034")]
		[Address(RVA = "0x69FFA80", Offset = "0x69FEA80", VA = "0x69FFA80")]
		internal TagValue(float value, [Optional][DefaultParameterValue(0)] TagUnitType tagUnitType, [Optional] ValueID? id)
		{
		}

		[Token(Token = "0x6000035")]
		[Address(RVA = "0x69FF880", Offset = "0x69FE880", VA = "0x69FF880")]
		internal TagValue(Color value, [Optional] ValueID? id)
		{
		}

		[Token(Token = "0x6000036")]
		[Address(RVA = "0x6A001A0", Offset = "0x69FF1A0", VA = "0x6A001A0")]
		internal TagValue(string value, [Optional] ValueID? id)
		{
		}

		[Token(Token = "0x6000037")]
		[Address(RVA = "0x69FFD70", Offset = "0x69FED70", VA = "0x69FFD70")]
		internal TagValue(Vector4 value, [Optional] ValueID? id)
		{
		}

		[Token(Token = "0x6000038")]
		[Address(RVA = "0x6A00FB0", Offset = "0x69FFFB0", VA = "0x6A00FB0")]
		internal TagValue(GlyphMetrics value, [Optional] ValueID? id)
		{
		}

		[Token(Token = "0x6000039")]
		[Address(RVA = "0x6A00F80", Offset = "0x69FFF80", VA = "0x6A00F80")]
		internal TagValue(bool value, [Optional] ValueID? id)
		{
		}

		[Token(Token = "0x6000041")]
		[Address(RVA = "0x6A0B230", Offset = "0x6A0A230", VA = "0x6A0B230", Slot = "3")]
		[CompilerGenerated]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x6000042")]
		[Address(RVA = "0x6A0B310", Offset = "0x6A0A310", VA = "0x6A0B310", Slot = "6")]
		[CompilerGenerated]
		protected virtual bool PrintMembers(StringBuilder builder)
		{
			return default(bool);
		}

		[Token(Token = "0x6000043")]
		[Address(RVA = "0x6A05660", Offset = "0x6A04660", VA = "0x6A05660")]
		[CompilerGenerated]
		public static bool operator ==(TagValue? left, TagValue? right)
		{
			return default(bool);
		}

		[Token(Token = "0x6000044")]
		[Address(RVA = "0x6A0B320", Offset = "0x6A0A320", VA = "0x6A0B320", Slot = "2")]
		[CompilerGenerated]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x6000045")]
		[Address(RVA = "0x6A0B670", Offset = "0x6A0A670", VA = "0x6A0B670", Slot = "0")]
		[CompilerGenerated]
		public override bool Equals(object? obj)
		{
			return default(bool);
		}

		[Token(Token = "0x6000046")]
		[Address(RVA = "0x6A0B6F0", Offset = "0x6A0A6F0", VA = "0x6A0B6F0", Slot = "7")]
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
			[Address(RVA = "0x6A0BA80", Offset = "0x6A0AA80", VA = "0x6A0BA80", Slot = "5")]
			[CompilerGenerated]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000048")]
		[Address(RVA = "0x6A05630", Offset = "0x6A04630", VA = "0x6A05630")]
		internal ParseError(string message, int position)
		{
		}

		[Token(Token = "0x6000049")]
		[Address(RVA = "0x6A0BAE0", Offset = "0x6A0AAE0", VA = "0x6A0BAE0", Slot = "3")]
		[CompilerGenerated]
		public override string ToString()
		{
			return null;
		}

		[Token(Token = "0x600004A")]
		[Address(RVA = "0x6A0BBC0", Offset = "0x6A0ABC0", VA = "0x6A0BBC0", Slot = "6")]
		[CompilerGenerated]
		protected virtual bool PrintMembers(StringBuilder builder)
		{
			return default(bool);
		}

		[Token(Token = "0x600004B")]
		[Address(RVA = "0x6A0BC60", Offset = "0x6A0AC60", VA = "0x6A0BC60", Slot = "2")]
		[CompilerGenerated]
		public override int GetHashCode()
		{
			return default(int);
		}

		[Token(Token = "0x600004C")]
		[Address(RVA = "0x6A0BD60", Offset = "0x6A0AD60", VA = "0x6A0BD60", Slot = "0")]
		[CompilerGenerated]
		public override bool Equals(object? obj)
		{
			return default(bool);
		}

		[Token(Token = "0x600004D")]
		[Address(RVA = "0x6A0BDE0", Offset = "0x6A0ADE0", VA = "0x6A0BDE0", Slot = "7")]
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
	[Address(RVA = "0x69FF300", Offset = "0x69FE300", VA = "0x69FF300")]
	private static bool tagMatch(ReadOnlySpan<char> tagCandidate, string tagName)
	{
		return default(bool);
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x69FF410", Offset = "0x69FE410", VA = "0x69FF410")]
	private static bool SpanToEnum(ReadOnlySpan<char> tagCandidate, out TagType tagType, out string? error, out ReadOnlySpan<char> attribute)
	{
		return default(bool);
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x69FF6B0", Offset = "0x69FE6B0", VA = "0x69FF6B0")]
	private static TagValue ParseColorAttribute(ReadOnlySpan<char> attributeSection)
	{
		return null;
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x69FF8C0", Offset = "0x69FE8C0", VA = "0x69FF8C0")]
	private static TagValue ParseAlphaAttribute(ReadOnlySpan<char> attributeSection)
	{
		return null;
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x69FFA40", Offset = "0x69FEA40", VA = "0x69FFA40")]
	private static int HexCharToInt(char hex)
	{
		return default(int);
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x69FFAC0", Offset = "0x69FEAC0", VA = "0x69FFAC0")]
	private static TagValue ParsePaddingAttribute(ReadOnlySpan<char> value)
	{
		return null;
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x69FFDB0", Offset = "0x69FEDB0", VA = "0x69FFDB0")]
	private static TagValue ParseHref(ReadOnlySpan<char> attributeSection)
	{
		return null;
	}

	[Token(Token = "0x6000014")]
	[Address(RVA = "0x69FFEB0", Offset = "0x69FEEB0", VA = "0x69FFEB0")]
	private static bool TryGetSimpleHref(ReadOnlySpan<char> attributeSection, out string hrefValue)
	{
		return default(bool);
	}

	[Token(Token = "0x6000015")]
	[Address(RVA = "0x6A001E0", Offset = "0x69FF1E0", VA = "0x6A001E0")]
	private static bool ParseSpriteAttributes(ReadOnlySpan<char> attributeSection, TextSettings textSettings, out char unicode, out TagValue? spriteAssetValue, out TagValue? glyphMetricsValue, out TagValue? tintValue, out TagValue? scaleValue, out TagValue? colorValue, out string? spriteAssetNameOut)
	{
		return default(bool);
	}

	[Token(Token = "0x6000016")]
	[Address(RVA = "0x6A00FF0", Offset = "0x69FFFF0", VA = "0x6A00FF0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void PreloadFontAssetsFromTags(string text, TextSettings textSettings)
	{
	}

	[Token(Token = "0x6000017")]
	[Address(RVA = "0x6A01AF0", Offset = "0x6A00AF0", VA = "0x6A01AF0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void PreloadSpriteAssetsFromTags(string text, TextSettings textSettings)
	{
	}

	[Token(Token = "0x6000018")]
	[Address(RVA = "0x6A02250", Offset = "0x6A01250", VA = "0x6A02250")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void PreloadGradientAssetsFromTags(string text, TextSettings textSettings)
	{
	}

	[Token(Token = "0x6000019")]
	[Address(RVA = "0x6A029A0", Offset = "0x6A019A0", VA = "0x6A029A0")]
	internal static List<Tag> FindTags(ref string inputStr, TextSettings textSettings, [Optional][DefaultParameterValue(false)] bool preprocessingOnly, [Optional] List<ParseError>? errors)
	{
		return null;
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x69FF7A0", Offset = "0x69FE7A0", VA = "0x69FF7A0")]
	private static ReadOnlySpan<char> GetAttributeSpan(ReadOnlySpan<char> attributeSection)
	{
		return default(ReadOnlySpan<char>);
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x6A05690", Offset = "0x6A04690", VA = "0x6A05690")]
	private static TagUnitType ParseTagUnitType(ref ReadOnlySpan<char> attributeSection)
	{
		return default(TagUnitType);
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x6A058F0", Offset = "0x6A048F0", VA = "0x6A058F0")]
	internal static List<Tag> PickResultingTags(List<Tag> allTags, string input, int atPosition, [Optional] List<Tag>? applicableTags)
	{
		return null;
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x6A06520", Offset = "0x6A05520", VA = "0x6A06520")]
	internal static Segment[] GenerateSegments(string input, List<Tag> tags)
	{
		return null;
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x6A067C0", Offset = "0x6A057C0", VA = "0x6A067C0")]
	internal static void ApplyStateToSegment(string input, List<Tag> tags, Segment[] segments)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x6A06890", Offset = "0x6A05890", VA = "0x6A06890")]
	private static int AddLink(TagType type, string value, List<(int, TagType, string)> links)
	{
		return default(int);
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x6A06AD0", Offset = "0x6A05AD0", VA = "0x6A06AD0")]
	private static TextSpan CreateTextSpan(Segment segment, ref NativeTextGenerationSettings tgs, List<(int, TagType, string)> links, Color hyperlinkColor, float pixelsPerPoint)
	{
		return default(TextSpan);
	}

	[Token(Token = "0x6000021")]
	[Address(RVA = "0x6A08700", Offset = "0x6A07700", VA = "0x6A08700")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static void CreateTextGenerationSettingsArray(ref NativeTextGenerationSettings tgs, List<(int, TagType, string)> links, Color hyperlinkColor, float pixelsPerPoint, TextSettings textSettings)
	{
	}

	[Token(Token = "0x6000022")]
	[Address(RVA = "0x6A08A30", Offset = "0x6A07A30", VA = "0x6A08A30")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static bool MayNeedParsing(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x6000023")]
	[Address(RVA = "0x6A08B50", Offset = "0x6A07B50", VA = "0x6A08B50")]
	private static bool ContainsFontTag(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x6000024")]
	[Address(RVA = "0x6A08C80", Offset = "0x6A07C80", VA = "0x6A08C80")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static bool ContainsSpriteTag(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x6000025")]
	[Address(RVA = "0x6A08DB0", Offset = "0x6A07DB0", VA = "0x6A08DB0")]
	internal static bool ContainsStyleTags(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x6000026")]
	[Address(RVA = "0x6A08EE0", Offset = "0x6A07EE0", VA = "0x6A08EE0")]
	internal static bool ContainsGradientTag(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x6000027")]
	[Address(RVA = "0x6A09010", Offset = "0x6A08010", VA = "0x6A09010")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static bool ContainsNobrTags(string text)
	{
		return default(bool);
	}

	[Token(Token = "0x6000028")]
	[Address(RVA = "0x6A01360", Offset = "0x6A00360", VA = "0x6A01360")]
	internal static bool HasFontTags(string text, TextSettings textSettings, out List<string> fontAssetNames)
	{
		return default(bool);
	}

	[Token(Token = "0x6000029")]
	[Address(RVA = "0x6A01E70", Offset = "0x6A00E70", VA = "0x6A01E70")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule", "UnityEngine.IMGUIModule" })]
	internal static bool HasSpriteTags(string text, TextSettings textSettings, out List<string> spriteAssetNames)
	{
		return default(bool);
	}

	[Token(Token = "0x600002A")]
	[Address(RVA = "0x6A025C0", Offset = "0x6A015C0", VA = "0x6A025C0")]
	internal static bool HasGradientTags(string text, TextSettings textSettings, out List<string> gradientAssetNames)
	{
		return default(bool);
	}
}
