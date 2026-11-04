// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.NativeTextGenerationSettings
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;
using UnityEngine.TextCore.Text;

namespace UnityEngine.TextCore;

[Token(Token = "0x2000005")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
[UnityEngine.Scripting.UsedByNativeCode("TextGenerationSettings")]
[UnityEngine.Bindings.NativeHeader("Modules/TextCoreTextEngine/Native/TextGenerationSettings.h")]
internal struct NativeTextGenerationSettings
{
	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x0")]
	public IntPtr fontAsset;

	[Token(Token = "0x4000004")]
	[FieldOffset(Offset = "0x8")]
	public IntPtr textSettings;

	[Token(Token = "0x4000005")]
	[FieldOffset(Offset = "0x10")]
	public string text;

	[Token(Token = "0x4000006")]
	[FieldOffset(Offset = "0x18")]
	public int screenWidth;

	[Token(Token = "0x4000007")]
	[FieldOffset(Offset = "0x1C")]
	public int screenHeight;

	[Token(Token = "0x4000008")]
	[FieldOffset(Offset = "0x20")]
	public bool wordWrapEnabled;

	[Token(Token = "0x4000009")]
	[FieldOffset(Offset = "0x24")]
	public TextOverflow overflow;

	[Token(Token = "0x400000A")]
	[FieldOffset(Offset = "0x28")]
	public LanguageDirection languageDirection;

	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x2C")]
	public int vertexPadding;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x30")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal HorizontalAlignment horizontalAlignment;

	[Token(Token = "0x400000D")]
	[FieldOffset(Offset = "0x34")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal VerticalAlignment verticalAlignment;

	[Token(Token = "0x400000E")]
	[FieldOffset(Offset = "0x38")]
	public int fontSize;

	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x3C")]
	public bool bestFit;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x40")]
	public int maxFontSize;

	[Token(Token = "0x4000011")]
	[FieldOffset(Offset = "0x44")]
	public int minFontSize;

	[Token(Token = "0x4000012")]
	[FieldOffset(Offset = "0x48")]
	public FontStyles fontStyle;

	[Token(Token = "0x4000013")]
	[FieldOffset(Offset = "0x4C")]
	public TextFontWeight fontWeight;

	[Token(Token = "0x4000014")]
	[FieldOffset(Offset = "0x50")]
	public TextSpan[] textSpans;

	[Token(Token = "0x4000015")]
	[FieldOffset(Offset = "0x58")]
	public Color32 color;

	[Token(Token = "0x4000016")]
	[FieldOffset(Offset = "0x5C")]
	public bool disableAdvancedFontFeatures;

	[Token(Token = "0x4000017")]
	[FieldOffset(Offset = "0x60")]
	public int characterSpacing;

	[Token(Token = "0x4000018")]
	[FieldOffset(Offset = "0x64")]
	public int wordSpacing;

	[Token(Token = "0x4000019")]
	[FieldOffset(Offset = "0x68")]
	public int paragraphSpacing;

	[Token(Token = "0x400001A")]
	[FieldOffset(Offset = "0x6C")]
	public PreProcessFlags preProcessFlags;

	[Token(Token = "0x17000001")]
	public bool hasLink
	{
		[Token(Token = "0x6000005")]
		[Address(RVA = "0x3016310", Offset = "0x3014910", VA = "0x183016310")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000002")]
	public static NativeTextGenerationSettings Default
	{
		[Token(Token = "0x6000007")]
		[Address(RVA = "0x30162B0", Offset = "0x30148B0", VA = "0x1830162B0")]
		get
		{
			return default(NativeTextGenerationSettings);
		}
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x3015670", Offset = "0x3013C70", VA = "0x183015670")]
	public readonly TextSpan CreateTextSpan()
	{
		return default(TextSpan);
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x3015800", Offset = "0x3013E00", VA = "0x183015800", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
