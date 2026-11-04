// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.FontEngine
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.TextCore.LowLevel;

[Token(Token = "0x200000D")]
[UnityEngine.Bindings.NativeHeader("Modules/TextCoreFontEngine/Native/FontEngine.h")]
public sealed class FontEngine
{
	[Token(Token = "0x4000071")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Glyph[] s_Glyphs;

	[Token(Token = "0x4000072")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static uint[] s_GlyphIndexes_MarshallingArray_A;

	[Token(Token = "0x4000073")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static GlyphMarshallingStruct[] s_GlyphMarshallingStruct_IN;

	[Token(Token = "0x4000074")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static GlyphMarshallingStruct[] s_GlyphMarshallingStruct_OUT;

	[Token(Token = "0x4000075")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static GlyphRect[] s_FreeGlyphRects;

	[Token(Token = "0x4000076")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static GlyphRect[] s_UsedGlyphRects;

	[Token(Token = "0x4000077")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static LigatureSubstitutionRecord[] s_LigatureSubstitutionRecords_MarshallingArray;

	[Token(Token = "0x4000078")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static GlyphPairAdjustmentRecord[] s_PairAdjustmentRecords_MarshallingArray;

	[Token(Token = "0x4000079")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private static MarkToBaseAdjustmentRecord[] s_MarkToBaseAdjustmentRecords_MarshallingArray;

	[Token(Token = "0x400007A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private static MarkToMarkAdjustmentRecord[] s_MarkToMarkAdjustmentRecords_MarshallingArray;

	[Token(Token = "0x400007B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private static Dictionary<uint, Glyph> s_GlyphLookupDictionary;

	[Token(Token = "0x600003A")]
	[Address(RVA = "0x2FFFB60", Offset = "0x2FFE160", VA = "0x182FFFB60")]
	public static FontEngineError LoadFontFace(string filePath)
	{
		return default(FontEngineError);
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x2FFF030", Offset = "0x2FFD630", VA = "0x182FFF030")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::LoadFontFace", IsFreeFunction = true)]
	private static int LoadFontFace_Internal(string filePath)
	{
		return default(int);
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x2FFFA70", Offset = "0x2FFE070", VA = "0x182FFFA70")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static FontEngineError LoadFontFace(string filePath, float pointSize, int faceIndex, out FontFaceHandle faceHandle)
	{
		return default(FontEngineError);
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x2FFF230", Offset = "0x2FFD830", VA = "0x182FFF230")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::LoadFontFace", IsFreeFunction = true)]
	private static int LoadFontFace_With_Size_And_FaceIndex_FontFaceHandle_Internal(string filePath, int pointSize, int faceIndex, out FontFaceHandle faceHandle)
	{
		return default(int);
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x2FFF820", Offset = "0x2FFDE20", VA = "0x182FFF820")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static FontEngineError LoadFontFace(Font font, float pointSize, int faceIndex, out FontFaceHandle faceHandle)
	{
		return default(FontEngineError);
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x2FFF450", Offset = "0x2FFDA50", VA = "0x182FFF450")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::LoadFontFace", IsFreeFunction = true)]
	private static int LoadFontFace_With_Size_and_FaceIndex_FromFont_FontFaceHandle_Internal(Font font, int pointSize, int faceIndex, out FontFaceHandle faceHandle)
	{
		return default(int);
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x2FFF980", Offset = "0x2FFDF80", VA = "0x182FFF980")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static FontEngineError LoadFontFace(string familyName, string styleName, float pointSize, out FontFaceHandle faceHandle)
	{
		return default(FontEngineError);
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x2FFF550", Offset = "0x2FFDB50", VA = "0x182FFF550")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::LoadFontFace", IsFreeFunction = true)]
	private static int LoadFontFace_With_Size_by_FamilyName_and_StyleName_FontFaceHandle_Internal(string familyName, string styleName, int pointSize, out FontFaceHandle faceHandle)
	{
		return default(int);
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x3002250", Offset = "0x3000850", VA = "0x183002250")]
	public static FontEngineError UnloadFontFace()
	{
		return default(FontEngineError);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000043")]
	[Address(RVA = "0x3002220", Offset = "0x3000820", VA = "0x183002220")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::UnloadFontFace", IsFreeFunction = true)]
	private static extern int UnloadFontFace_Internal();

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x2FFEF80", Offset = "0x2FFD580", VA = "0x182FFEF80")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static bool IsColorFontFace(FontFaceHandle faceHandle)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x2FFEF40", Offset = "0x2FFD540", VA = "0x182FFEF40")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::IsColorFontFace", IsFreeFunction = true)]
	private static extern bool IsColorFontFace_FontFaceHandle_Internal(ref FontFaceHandle faceHandle);

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x30021B0", Offset = "0x30007B0", VA = "0x1830021B0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static bool TryGetSystemFontReference(string familyName, string styleName, out FontReference fontRef)
	{
		return default(bool);
	}

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x3001F00", Offset = "0x3000500", VA = "0x183001F00")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::TryGetSystemFontReference", IsThreadSafe = true, IsFreeFunction = true)]
	private static bool TryGetSystemFontReference_Internal(string familyName, string styleName, out FontReference fontRef)
	{
		return default(bool);
	}

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x2FFD8B0", Offset = "0x2FFBEB0", VA = "0x182FFD8B0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static FaceInfo GetFaceInfo(FontFaceHandle faceHandle)
	{
		return default(FaceInfo);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000049")]
	[Address(RVA = "0x2FFD860", Offset = "0x2FFBE60", VA = "0x182FFD860")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetFaceInfo", IsThreadSafe = true, IsFreeFunction = true)]
	private static extern int GetFaceInfo_FontFaceHandle_Internal(ref FontFaceHandle faceHandle, ref FaceInfo faceInfo);

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x2FFD9D0", Offset = "0x2FFBFD0", VA = "0x182FFD9D0")]
	public static string[] GetFontFaces()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x2FFD9A0", Offset = "0x2FFBFA0", VA = "0x182FFD9A0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetFontFaces", IsThreadSafe = true, IsFreeFunction = true)]
	private static extern string[] GetFontFaces_Internal();

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x2FFEE10", Offset = "0x2FFD410", VA = "0x182FFEE10")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static uint GetVariantGlyphIndex(FontFaceHandle faceHandle, uint unicode, uint variantSelectorUnicode)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x2FFEDC0", Offset = "0x2FFD3C0", VA = "0x182FFEDC0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetVariantGlyphIndex", IsThreadSafe = true, IsFreeFunction = true)]
	private static extern uint GetVariantGlyphIndex_FontFaceHandle_Internal(ref FontFaceHandle faceHandle, uint unicode, uint variantSelectorUnicode);

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x2FFDA80", Offset = "0x2FFC080", VA = "0x182FFDA80")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static uint GetGlyphIndex(FontFaceHandle faceHandle, uint unicode)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004F")]
	[Address(RVA = "0x2FFDA40", Offset = "0x2FFC040", VA = "0x182FFDA40")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetGlyphIndex", IsThreadSafe = true, IsFreeFunction = true)]
	private static extern uint GetGlyphIndex_FontFaceHandle_Internal(ref FontFaceHandle faceHandle, uint unicode);

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x3001D20", Offset = "0x3000320", VA = "0x183001D20")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static bool TryGetGlyphWithUnicodeValue(FontFaceHandle faceHandle, uint unicode, GlyphLoadFlags flags, out Glyph glyph)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000051")]
	[Address(RVA = "0x3001CD0", Offset = "0x30002D0", VA = "0x183001CD0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::TryGetGlyphWithUnicodeValue", IsThreadSafe = true, IsFreeFunction = true)]
	private static extern bool TryGetGlyphWithUnicodeValue_FontFaceHandle_Internal(ref FontFaceHandle faceHandle, uint unicode, GlyphLoadFlags loadFlags, ref GlyphMarshallingStruct glyphStruct);

	[Token(Token = "0x6000052")]
	[Address(RVA = "0x3001B50", Offset = "0x3000150", VA = "0x183001B50")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static bool TryGetGlyphWithIndexValue(FontFaceHandle faceHandle, uint glyphIndex, GlyphLoadFlags flags, out Glyph glyph)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000053")]
	[Address(RVA = "0x3001B00", Offset = "0x3000100", VA = "0x183001B00")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::TryGetGlyphWithIndexValue", IsThreadSafe = true, IsFreeFunction = true)]
	private static extern bool TryGetGlyphWithIndexValue_FontFaceHandle_Internal(ref FontFaceHandle faceHandle, uint glyphIndex, GlyphLoadFlags loadFlags, ref GlyphMarshallingStruct glyphStruct);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000054")]
	[Address(RVA = "0x3000360", Offset = "0x2FFE960", VA = "0x183000360")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::SetTextureUploadMode", IsThreadSafe = true, IsFreeFunction = true)]
	internal static extern void SetTextureUploadMode(bool shouldUploadImmediately);

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x3000670", Offset = "0x2FFEC70", VA = "0x183000670")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static bool TryAddGlyphToTexture(FontFaceHandle faceHandle, uint glyphIndex, int padding, GlyphPackingMode packingMode, List<GlyphRect> freeGlyphRects, List<GlyphRect> usedGlyphRects, GlyphRenderMode renderMode, Texture2D texture, out Glyph glyph)
	{
		return default(bool);
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x30003F0", Offset = "0x2FFE9F0", VA = "0x1830003F0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::TryAddGlyphToTexture", IsThreadSafe = true, IsFreeFunction = true)]
	private static bool TryAddGlyphToTexture_FontFaceHandle_Internal(ref FontFaceHandle faceHandle, uint glyphIndex, int padding, GlyphPackingMode packingMode, [Out] GlyphRect[] freeGlyphRects, ref int freeGlyphRectCount, [Out] GlyphRect[] usedGlyphRects, ref int usedGlyphRectCount, GlyphRenderMode renderMode, Texture2D texture, out GlyphMarshallingStruct glyph)
	{
		return default(bool);
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x3001070", Offset = "0x2FFF670", VA = "0x183001070")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static bool TryAddGlyphsToTexture(FontFaceHandle faceHandle, List<uint> glyphIndexes, int padding, GlyphPackingMode packingMode, List<GlyphRect> freeGlyphRects, List<GlyphRect> usedGlyphRects, GlyphRenderMode renderMode, Texture2D texture, out Glyph[] glyphs)
	{
		return default(bool);
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x3000CD0", Offset = "0x2FFF2D0", VA = "0x183000CD0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::TryAddGlyphsToTexture", IsThreadSafe = true, IsFreeFunction = true)]
	private static bool TryAddGlyphsToTexture_FontFaceHandle_Internal(ref FontFaceHandle faceHandle, uint[] glyphIndex, int padding, GlyphPackingMode packingMode, [Out] GlyphRect[] freeGlyphRects, ref int freeGlyphRectCount, [Out] GlyphRect[] usedGlyphRects, ref int usedGlyphRectCount, GlyphRenderMode renderMode, Texture2D texture, [Out] GlyphMarshallingStruct[] glyphs, ref int glyphCount)
	{
		return default(bool);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x2FFD370", Offset = "0x2FFB970", VA = "0x182FFD370")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static LigatureSubstitutionRecord[] GetAllLigatureSubstitutionRecords(FontFaceHandle faceHandle)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005A")]
	[Address(RVA = "0x2FFD330", Offset = "0x2FFB930", VA = "0x182FFD330")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetAllLigatureSubstitutionRecords", IsFreeFunction = true)]
	private static extern LigatureSubstitutionRecord[] GetAllLigatureSubstitutionRecords_FontFaceHandle_Internal(ref FontFaceHandle faceHandle);

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x2FFDD70", Offset = "0x2FFC370", VA = "0x182FFDD70")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static LigatureSubstitutionRecord[] GetLigatureSubstitutionRecords(FontFaceHandle faceHandle, uint glyphIndex)
	{
		return null;
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x2FFE090", Offset = "0x2FFC690", VA = "0x182FFE090")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static LigatureSubstitutionRecord[] GetLigatureSubstitutionRecords(FontFaceHandle faceHandle, List<uint> glyphIndexes)
	{
		return null;
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x2FFDE80", Offset = "0x2FFC480", VA = "0x182FFDE80")]
	private static LigatureSubstitutionRecord[] GetLigatureSubstitutionRecords(FontFaceHandle faceHandle, uint[] glyphIndexes)
	{
		return null;
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x2FFFC10", Offset = "0x2FFE210", VA = "0x182FFFC10")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::PopulateLigatureSubstitutionRecordMarshallingArray", IsFreeFunction = true)]
	private static int PopulateLigatureSubstitutionRecordMarshallingArray_FontFaceHandle(ref FontFaceHandle faceHandle, uint[] glyphIndexes, out int recordCount)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005F")]
	[Address(RVA = "0x2FFDD30", Offset = "0x2FFC330", VA = "0x182FFDD30")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetLigatureSubstitutionRecordsFromMarshallingArray", IsFreeFunction = true)]
	private static extern int GetLigatureSubstitutionRecordsFromMarshallingArray([Out] LigatureSubstitutionRecord[] ligatureSubstitutionRecords);

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x2FFDB00", Offset = "0x2FFC100", VA = "0x182FFDB00")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static GlyphPairAdjustmentRecord[] GetGlyphPairAdjustmentTable(FontFaceHandle faceHandle, uint[] glyphIndexes)
	{
		return null;
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x3000190", Offset = "0x2FFE790", VA = "0x183000190")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::PopulatePairAdjustmentRecordMarshallingArrayFromKernTable", IsFreeFunction = true)]
	private static int PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_FontFaceHandle(ref FontFaceHandle faceHandle, uint[] glyphIndexes, out int recordCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x2FFD810", Offset = "0x2FFBE10", VA = "0x182FFD810")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static GlyphPairAdjustmentRecord[] GetAllPairAdjustmentRecords(FontFaceHandle faceHandle)
	{
		return null;
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x2FFD730", Offset = "0x2FFBD30", VA = "0x182FFD730")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetAllPairAdjustmentRecords", IsFreeFunction = true)]
	private static GlyphPairAdjustmentRecord[] GetAllPairAdjustmentRecords_FontFaceHandle_Internal(ref FontFaceHandle faceHandle)
	{
		return null;
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x2FFED20", Offset = "0x2FFD320", VA = "0x182FFED20")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static GlyphPairAdjustmentRecord[] GetPairAdjustmentRecords(FontFaceHandle faceHandle, List<uint> glyphIndexes)
	{
		return null;
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x2FFEAF0", Offset = "0x2FFD0F0", VA = "0x182FFEAF0")]
	private static GlyphPairAdjustmentRecord[] GetPairAdjustmentRecords(FontFaceHandle faceHandle, uint[] glyphIndexes)
	{
		return null;
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x3000030", Offset = "0x2FFE630", VA = "0x183000030")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::PopulatePairAdjustmentRecordMarshallingArray", IsFreeFunction = true)]
	private static int PopulatePairAdjustmentRecordMarshallingArray_FontFaceHandle(ref FontFaceHandle faceHandle, uint[] glyphIndexes, out int recordCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x2FFEA30", Offset = "0x2FFD030", VA = "0x182FFEA30")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetGlyphPairAdjustmentRecordsFromMarshallingArray", IsFreeFunction = true)]
	private static int GetPairAdjustmentRecordsFromMarshallingArray(Span<GlyphPairAdjustmentRecord> glyphPairAdjustmentRecords)
	{
		return default(int);
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x2FFD510", Offset = "0x2FFBB10", VA = "0x182FFD510")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static MarkToBaseAdjustmentRecord[] GetAllMarkToBaseAdjustmentRecords(FontFaceHandle faceHandle)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x2FFD430", Offset = "0x2FFBA30", VA = "0x182FFD430")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetAllMarkToBaseAdjustmentRecords", IsFreeFunction = true)]
	private static MarkToBaseAdjustmentRecord[] GetAllMarkToBaseAdjustmentRecords_FontFaceHandle_Internal(ref FontFaceHandle faceHandle)
	{
		return null;
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x2FFE230", Offset = "0x2FFC830", VA = "0x182FFE230")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static MarkToBaseAdjustmentRecord[] GetMarkToBaseAdjustmentRecords(FontFaceHandle faceHandle, List<uint> glyphIndexes)
	{
		return null;
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x2FFE2D0", Offset = "0x2FFC8D0", VA = "0x182FFE2D0")]
	private static MarkToBaseAdjustmentRecord[] GetMarkToBaseAdjustmentRecords(FontFaceHandle faceHandle, uint[] glyphIndexes)
	{
		return null;
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x2FFFD70", Offset = "0x2FFE370", VA = "0x182FFFD70")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::PopulateMarkToBaseAdjustmentRecordMarshallingArray", IsFreeFunction = true)]
	private static int PopulateMarkToBaseAdjustmentRecordMarshallingArray_FontFaceHandle(ref FontFaceHandle faceHandle, uint[] glyphIndexes, out int recordCount)
	{
		return default(int);
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x2FFE170", Offset = "0x2FFC770", VA = "0x182FFE170")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetMarkToBaseAdjustmentRecordsFromMarshallingArray", IsFreeFunction = true)]
	private static int GetMarkToBaseAdjustmentRecordsFromMarshallingArray(Span<MarkToBaseAdjustmentRecord> adjustmentRecords)
	{
		return default(int);
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x2FFD690", Offset = "0x2FFBC90", VA = "0x182FFD690")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static MarkToMarkAdjustmentRecord[] GetAllMarkToMarkAdjustmentRecords(FontFaceHandle faceHandle)
	{
		return null;
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x2FFD5B0", Offset = "0x2FFBBB0", VA = "0x182FFD5B0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetAllMarkToMarkAdjustmentRecords", IsFreeFunction = true)]
	private static MarkToMarkAdjustmentRecord[] GetAllMarkToMarkAdjustmentRecords_FontFaceHandle_Internal(ref FontFaceHandle faceHandle)
	{
		return null;
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x2FFE690", Offset = "0x2FFCC90", VA = "0x182FFE690")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static MarkToMarkAdjustmentRecord[] GetMarkToMarkAdjustmentRecords(FontFaceHandle faceHandle, List<uint> glyphIndexes)
	{
		return null;
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x2FFE730", Offset = "0x2FFCD30", VA = "0x182FFE730")]
	private static MarkToMarkAdjustmentRecord[] GetMarkToMarkAdjustmentRecords(FontFaceHandle faceHandle, uint[] glyphIndexes)
	{
		return null;
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x2FFFED0", Offset = "0x2FFE4D0", VA = "0x182FFFED0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::PopulateMarkToMarkAdjustmentRecordMarshallingArray", IsFreeFunction = true)]
	private static int PopulateMarkToMarkAdjustmentRecordMarshallingArray_FontFaceHandle(ref FontFaceHandle faceHandle, uint[] glyphIndexes, out int recordCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x2FFE5D0", Offset = "0x2FFCBD0", VA = "0x182FFE5D0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetMarkToMarkAdjustmentRecordsFromMarshallingArray", IsFreeFunction = true)]
	private static int GetMarkToMarkAdjustmentRecordsFromMarshallingArray(Span<MarkToMarkAdjustmentRecord> adjustmentRecords)
	{
		return default(int);
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x2FFEEA0", Offset = "0x2FFD4A0", VA = "0x182FFEEA0")]
	private static void GlyphIndexToMarshallingArray(uint glyphIndex, ref uint[] dstArray)
	{
	}

	[Token(Token = "0x6000075")]
	private static void GenericListToMarshallingArray<T>(ref List<T> srcList, ref T[] dstArray)
	{
	}

	[Token(Token = "0x6000076")]
	private static void SetMarshallingArraySize<T>(ref T[] marshallingArray, int recordCount)
	{
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x30002D0", Offset = "0x2FFE8D0", VA = "0x1830002D0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::ResetAtlasTexture", IsFreeFunction = true)]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static void ResetAtlasTexture(Texture2D texture)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000079")]
	[Address(RVA = "0x2FFEFF0", Offset = "0x2FFD5F0", VA = "0x182FFEFF0")]
	private static extern int LoadFontFace_Internal_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper filePath);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007A")]
	[Address(RVA = "0x2FFF1E0", Offset = "0x2FFD7E0", VA = "0x182FFF1E0")]
	private static extern int LoadFontFace_With_Size_And_FaceIndex_FontFaceHandle_Internal_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper filePath, int pointSize, int faceIndex, out FontFaceHandle faceHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007B")]
	[Address(RVA = "0x2FFF400", Offset = "0x2FFDA00", VA = "0x182FFF400")]
	private static extern int LoadFontFace_With_Size_and_FaceIndex_FromFont_FontFaceHandle_Internal_Injected(IntPtr font, int pointSize, int faceIndex, out FontFaceHandle faceHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007C")]
	[Address(RVA = "0x2FFF500", Offset = "0x2FFDB00", VA = "0x182FFF500")]
	private static extern int LoadFontFace_With_Size_by_FamilyName_and_StyleName_FontFaceHandle_Internal_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper familyName, ref UnityEngine.Bindings.ManagedSpanWrapper styleName, int pointSize, out FontFaceHandle faceHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007D")]
	[Address(RVA = "0x3001EA0", Offset = "0x30004A0", VA = "0x183001EA0")]
	private static extern bool TryGetSystemFontReference_Internal_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper familyName, ref UnityEngine.Bindings.ManagedSpanWrapper styleName, out FontReference fontRef);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007E")]
	[Address(RVA = "0x30003A0", Offset = "0x2FFE9A0", VA = "0x1830003A0")]
	private static extern bool TryAddGlyphToTexture_FontFaceHandle_Internal_Injected(ref FontFaceHandle faceHandle, uint glyphIndex, int padding, GlyphPackingMode packingMode, out UnityEngine.Bindings.BlittableArrayWrapper freeGlyphRects, ref int freeGlyphRectCount, out UnityEngine.Bindings.BlittableArrayWrapper usedGlyphRects, ref int usedGlyphRectCount, GlyphRenderMode renderMode, IntPtr texture, out GlyphMarshallingStruct glyph);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007F")]
	[Address(RVA = "0x3000C80", Offset = "0x2FFF280", VA = "0x183000C80")]
	private static extern bool TryAddGlyphsToTexture_FontFaceHandle_Internal_Injected(ref FontFaceHandle faceHandle, ref UnityEngine.Bindings.ManagedSpanWrapper glyphIndex, int padding, GlyphPackingMode packingMode, out UnityEngine.Bindings.BlittableArrayWrapper freeGlyphRects, ref int freeGlyphRectCount, out UnityEngine.Bindings.BlittableArrayWrapper usedGlyphRects, ref int usedGlyphRectCount, GlyphRenderMode renderMode, IntPtr texture, out UnityEngine.Bindings.BlittableArrayWrapper glyphs, ref int glyphCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000080")]
	[Address(RVA = "0x2FFFBB0", Offset = "0x2FFE1B0", VA = "0x182FFFBB0")]
	private static extern int PopulateLigatureSubstitutionRecordMarshallingArray_FontFaceHandle_Injected(ref FontFaceHandle faceHandle, ref UnityEngine.Bindings.ManagedSpanWrapper glyphIndexes, out int recordCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000081")]
	[Address(RVA = "0x3000130", Offset = "0x2FFE730", VA = "0x183000130")]
	private static extern int PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_FontFaceHandle_Injected(ref FontFaceHandle faceHandle, ref UnityEngine.Bindings.ManagedSpanWrapper glyphIndexes, out int recordCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000082")]
	[Address(RVA = "0x2FFD6E0", Offset = "0x2FFBCE0", VA = "0x182FFD6E0")]
	private static extern void GetAllPairAdjustmentRecords_FontFaceHandle_Internal_Injected(ref FontFaceHandle faceHandle, out UnityEngine.Bindings.BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000083")]
	[Address(RVA = "0x2FFFFD0", Offset = "0x2FFE5D0", VA = "0x182FFFFD0")]
	private static extern int PopulatePairAdjustmentRecordMarshallingArray_FontFaceHandle_Injected(ref FontFaceHandle faceHandle, ref UnityEngine.Bindings.ManagedSpanWrapper glyphIndexes, out int recordCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000084")]
	[Address(RVA = "0x2FFE9F0", Offset = "0x2FFCFF0", VA = "0x182FFE9F0")]
	private static extern int GetPairAdjustmentRecordsFromMarshallingArray_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper glyphPairAdjustmentRecords);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000085")]
	[Address(RVA = "0x2FFD3E0", Offset = "0x2FFB9E0", VA = "0x182FFD3E0")]
	private static extern void GetAllMarkToBaseAdjustmentRecords_FontFaceHandle_Internal_Injected(ref FontFaceHandle faceHandle, out UnityEngine.Bindings.BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000086")]
	[Address(RVA = "0x2FFFD10", Offset = "0x2FFE310", VA = "0x182FFFD10")]
	private static extern int PopulateMarkToBaseAdjustmentRecordMarshallingArray_FontFaceHandle_Injected(ref FontFaceHandle faceHandle, ref UnityEngine.Bindings.ManagedSpanWrapper glyphIndexes, out int recordCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000087")]
	[Address(RVA = "0x2FFE130", Offset = "0x2FFC730", VA = "0x182FFE130")]
	private static extern int GetMarkToBaseAdjustmentRecordsFromMarshallingArray_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper adjustmentRecords);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000088")]
	[Address(RVA = "0x2FFD560", Offset = "0x2FFBB60", VA = "0x182FFD560")]
	private static extern void GetAllMarkToMarkAdjustmentRecords_FontFaceHandle_Internal_Injected(ref FontFaceHandle faceHandle, out UnityEngine.Bindings.BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000089")]
	[Address(RVA = "0x2FFFE70", Offset = "0x2FFE470", VA = "0x182FFFE70")]
	private static extern int PopulateMarkToMarkAdjustmentRecordMarshallingArray_FontFaceHandle_Injected(ref FontFaceHandle faceHandle, ref UnityEngine.Bindings.ManagedSpanWrapper glyphIndexes, out int recordCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008A")]
	[Address(RVA = "0x2FFE590", Offset = "0x2FFCB90", VA = "0x182FFE590")]
	private static extern int GetMarkToMarkAdjustmentRecordsFromMarshallingArray_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper adjustmentRecords);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008B")]
	[Address(RVA = "0x3000290", Offset = "0x2FFE890", VA = "0x183000290")]
	private static extern void ResetAtlasTexture_Injected(IntPtr texture);
}
