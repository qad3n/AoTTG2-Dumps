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
	[Address(RVA = "0x69F7DE0", Offset = "0x69F6DE0", VA = "0x69F7DE0")]
	public static FontEngineError LoadFontFace(string filePath)
	{
		return default(FontEngineError);
	}

	[Token(Token = "0x600003B")]
	[Address(RVA = "0x69F7E40", Offset = "0x69F6E40", VA = "0x69F7E40")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::LoadFontFace", IsFreeFunction = true)]
	private static int LoadFontFace_Internal(string filePath)
	{
		return default(int);
	}

	[Token(Token = "0x600003C")]
	[Address(RVA = "0x69F8000", Offset = "0x69F7000", VA = "0x69F8000")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static FontEngineError LoadFontFace(string filePath, float pointSize, int faceIndex, out FontFaceHandle faceHandle)
	{
		return default(FontEngineError);
	}

	[Token(Token = "0x600003D")]
	[Address(RVA = "0x69F8120", Offset = "0x69F7120", VA = "0x69F8120")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::LoadFontFace", IsFreeFunction = true)]
	private static int LoadFontFace_With_Size_And_FaceIndex_FontFaceHandle_Internal(string filePath, int pointSize, int faceIndex, out FontFaceHandle faceHandle)
	{
		return default(int);
	}

	[Token(Token = "0x600003E")]
	[Address(RVA = "0x69F8320", Offset = "0x69F7320", VA = "0x69F8320")]
	public static FontEngineError LoadFontFace(Font font)
	{
		return default(FontEngineError);
	}

	[Token(Token = "0x600003F")]
	[Address(RVA = "0x69F8460", Offset = "0x69F7460", VA = "0x69F8460")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::LoadFontFace", IsFreeFunction = true)]
	private static int LoadFontFace_FromFont_Internal(Font font)
	{
		return default(int);
	}

	[Token(Token = "0x6000040")]
	[Address(RVA = "0x69F8560", Offset = "0x69F7560", VA = "0x69F8560")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static FontEngineError LoadFontFace(Font font, float pointSize, int faceIndex, out FontFaceHandle faceHandle)
	{
		return default(FontEngineError);
	}

	[Token(Token = "0x6000041")]
	[Address(RVA = "0x69F8760", Offset = "0x69F7760", VA = "0x69F8760")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::LoadFontFace", IsFreeFunction = true)]
	private static int LoadFontFace_With_Size_and_FaceIndex_FromFont_FontFaceHandle_Internal(Font font, int pointSize, int faceIndex, out FontFaceHandle faceHandle)
	{
		return default(int);
	}

	[Token(Token = "0x6000042")]
	[Address(RVA = "0x69F88A0", Offset = "0x69F78A0", VA = "0x69F88A0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static FontEngineError LoadFontFace(string familyName, string styleName, float pointSize, out FontFaceHandle faceHandle)
	{
		return default(FontEngineError);
	}

	[Token(Token = "0x6000043")]
	[Address(RVA = "0x69F89C0", Offset = "0x69F79C0", VA = "0x69F89C0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::LoadFontFace", IsFreeFunction = true)]
	private static int LoadFontFace_With_Size_by_FamilyName_and_StyleName_FontFaceHandle_Internal(string familyName, string styleName, int pointSize, out FontFaceHandle faceHandle)
	{
		return default(int);
	}

	[Token(Token = "0x6000044")]
	[Address(RVA = "0x69F8C90", Offset = "0x69F7C90", VA = "0x69F8C90")]
	public static FontEngineError UnloadFontFace()
	{
		return default(FontEngineError);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000045")]
	[Address(RVA = "0x69F8D10", Offset = "0x69F7D10", VA = "0x69F8D10")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::UnloadFontFace", IsFreeFunction = true)]
	private static extern int UnloadFontFace_Internal();

	[Token(Token = "0x6000046")]
	[Address(RVA = "0x69F8D40", Offset = "0x69F7D40", VA = "0x69F8D40")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static bool IsColorFontFace(FontFaceHandle faceHandle)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000047")]
	[Address(RVA = "0x69F8DE0", Offset = "0x69F7DE0", VA = "0x69F8DE0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::IsColorFontFace", IsFreeFunction = true)]
	private static extern bool IsColorFontFace_FontFaceHandle_Internal(ref FontFaceHandle faceHandle);

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x69F8E10", Offset = "0x69F7E10", VA = "0x69F8E10")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static bool TryGetSystemFontReference(string familyName, string styleName, out FontReference fontRef)
	{
		return default(bool);
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x69F8E70", Offset = "0x69F7E70", VA = "0x69F8E70")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::TryGetSystemFontReference", IsThreadSafe = true, IsFreeFunction = true)]
	private static bool TryGetSystemFontReference_Internal(string familyName, string styleName, out FontReference fontRef)
	{
		return default(bool);
	}

	[Token(Token = "0x600004A")]
	[Address(RVA = "0x69F9130", Offset = "0x69F8130", VA = "0x69F9130")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static FaceInfo GetFaceInfo(FontFaceHandle faceHandle)
	{
		return default(FaceInfo);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004B")]
	[Address(RVA = "0x69F9210", Offset = "0x69F8210", VA = "0x69F9210")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetFaceInfo", IsThreadSafe = true, IsFreeFunction = true)]
	private static extern int GetFaceInfo_FontFaceHandle_Internal(ref FontFaceHandle faceHandle, ref FaceInfo faceInfo);

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x69F9250", Offset = "0x69F8250", VA = "0x69F9250")]
	public static string[] GetFontFaces()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004D")]
	[Address(RVA = "0x69F92F0", Offset = "0x69F82F0", VA = "0x69F92F0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetFontFaces", IsThreadSafe = true, IsFreeFunction = true)]
	private static extern string[] GetFontFaces_Internal();

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x69F9320", Offset = "0x69F8320", VA = "0x69F9320")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static uint GetVariantGlyphIndex(FontFaceHandle faceHandle, uint unicode, uint variantSelectorUnicode)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004F")]
	[Address(RVA = "0x69F93C0", Offset = "0x69F83C0", VA = "0x69F93C0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetVariantGlyphIndex", IsThreadSafe = true, IsFreeFunction = true)]
	private static extern uint GetVariantGlyphIndex_FontFaceHandle_Internal(ref FontFaceHandle faceHandle, uint unicode, uint variantSelectorUnicode);

	[Token(Token = "0x6000050")]
	[Address(RVA = "0x69F9400", Offset = "0x69F8400", VA = "0x69F9400")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static uint GetGlyphIndex(FontFaceHandle faceHandle, uint unicode)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000051")]
	[Address(RVA = "0x69F94A0", Offset = "0x69F84A0", VA = "0x69F94A0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetGlyphIndex", IsThreadSafe = true, IsFreeFunction = true)]
	private static extern uint GetGlyphIndex_FontFaceHandle_Internal(ref FontFaceHandle faceHandle, uint unicode);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000052")]
	[Address(RVA = "0x69F94E0", Offset = "0x69F84E0", VA = "0x69F94E0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::TryGetGlyphIndex", IsThreadSafe = true, IsFreeFunction = true)]
	public static extern bool TryGetGlyphIndex(uint unicode, out uint glyphIndex);

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x69F9520", Offset = "0x69F8520", VA = "0x69F9520")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static bool TryGetGlyphWithUnicodeValue(FontFaceHandle faceHandle, uint unicode, GlyphLoadFlags flags, out Glyph glyph)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000054")]
	[Address(RVA = "0x69F96E0", Offset = "0x69F86E0", VA = "0x69F96E0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::TryGetGlyphWithUnicodeValue", IsThreadSafe = true, IsFreeFunction = true)]
	private static extern bool TryGetGlyphWithUnicodeValue_FontFaceHandle_Internal(ref FontFaceHandle faceHandle, uint unicode, GlyphLoadFlags loadFlags, ref GlyphMarshallingStruct glyphStruct);

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x69F9730", Offset = "0x69F8730", VA = "0x69F9730")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static bool TryGetGlyphWithIndexValue(FontFaceHandle faceHandle, uint glyphIndex, GlyphLoadFlags flags, out Glyph glyph)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000056")]
	[Address(RVA = "0x69F98F0", Offset = "0x69F88F0", VA = "0x69F98F0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::TryGetGlyphWithIndexValue", IsThreadSafe = true, IsFreeFunction = true)]
	private static extern bool TryGetGlyphWithIndexValue_FontFaceHandle_Internal(ref FontFaceHandle faceHandle, uint glyphIndex, GlyphLoadFlags loadFlags, ref GlyphMarshallingStruct glyphStruct);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x69F9940", Offset = "0x69F8940", VA = "0x69F9940")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::SetTextureUploadMode", IsThreadSafe = true, IsFreeFunction = true)]
	internal static extern void SetTextureUploadMode(bool shouldUploadImmediately);

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x69F9970", Offset = "0x69F8970", VA = "0x69F9970")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static bool TryAddGlyphToTexture(FontFaceHandle faceHandle, uint glyphIndex, int padding, GlyphPackingMode packingMode, List<GlyphRect> freeGlyphRects, List<GlyphRect> usedGlyphRects, GlyphRenderMode renderMode, Texture2D texture, out Glyph glyph)
	{
		return default(bool);
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x69F9FA0", Offset = "0x69F8FA0", VA = "0x69F9FA0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::TryAddGlyphToTexture", IsThreadSafe = true, IsFreeFunction = true)]
	private static bool TryAddGlyphToTexture_FontFaceHandle_Internal(ref FontFaceHandle faceHandle, uint glyphIndex, int padding, GlyphPackingMode packingMode, [Out] GlyphRect[] freeGlyphRects, ref int freeGlyphRectCount, [Out] GlyphRect[] usedGlyphRects, ref int usedGlyphRectCount, GlyphRenderMode renderMode, Texture2D texture, out GlyphMarshallingStruct glyph)
	{
		return default(bool);
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x69FA270", Offset = "0x69F9270", VA = "0x69FA270")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static bool TryAddGlyphsToTexture(FontFaceHandle faceHandle, List<uint> glyphIndexes, int padding, GlyphPackingMode packingMode, List<GlyphRect> freeGlyphRects, List<GlyphRect> usedGlyphRects, GlyphRenderMode renderMode, Texture2D texture, out Glyph[] glyphs)
	{
		return default(bool);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x69FADA0", Offset = "0x69F9DA0", VA = "0x69FADA0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::TryAddGlyphsToTexture", IsThreadSafe = true, IsFreeFunction = true)]
	private static bool TryAddGlyphsToTexture_FontFaceHandle_Internal(ref FontFaceHandle faceHandle, uint[] glyphIndex, int padding, GlyphPackingMode packingMode, [Out] GlyphRect[] freeGlyphRects, ref int freeGlyphRectCount, [Out] GlyphRect[] usedGlyphRects, ref int usedGlyphRectCount, GlyphRenderMode renderMode, Texture2D texture, [Out] GlyphMarshallingStruct[] glyphs, ref int glyphCount)
	{
		return default(bool);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x69FB190", Offset = "0x69FA190", VA = "0x69FB190")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static LigatureSubstitutionRecord[] GetAllLigatureSubstitutionRecords(FontFaceHandle faceHandle)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005D")]
	[Address(RVA = "0x69FB230", Offset = "0x69FA230", VA = "0x69FB230")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetAllLigatureSubstitutionRecords", IsFreeFunction = true)]
	private static extern LigatureSubstitutionRecord[] GetAllLigatureSubstitutionRecords_FontFaceHandle_Internal(ref FontFaceHandle faceHandle);

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x69FB260", Offset = "0x69FA260", VA = "0x69FB260")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static LigatureSubstitutionRecord[] GetLigatureSubstitutionRecords(FontFaceHandle faceHandle, uint glyphIndex)
	{
		return null;
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x69FB4B0", Offset = "0x69FA4B0", VA = "0x69FB4B0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static LigatureSubstitutionRecord[] GetLigatureSubstitutionRecords(FontFaceHandle faceHandle, List<uint> glyphIndexes)
	{
		return null;
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x69FB370", Offset = "0x69FA370", VA = "0x69FB370")]
	private static LigatureSubstitutionRecord[] GetLigatureSubstitutionRecords(FontFaceHandle faceHandle, uint[] glyphIndexes)
	{
		return null;
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x69FB550", Offset = "0x69FA550", VA = "0x69FB550")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::PopulateLigatureSubstitutionRecordMarshallingArray", IsFreeFunction = true)]
	private static int PopulateLigatureSubstitutionRecordMarshallingArray_FontFaceHandle(ref FontFaceHandle faceHandle, uint[] glyphIndexes, out int recordCount)
	{
		return default(int);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000062")]
	[Address(RVA = "0x69FB660", Offset = "0x69FA660", VA = "0x69FB660")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetLigatureSubstitutionRecordsFromMarshallingArray", IsFreeFunction = true)]
	private static extern int GetLigatureSubstitutionRecordsFromMarshallingArray([Out] LigatureSubstitutionRecord[] ligatureSubstitutionRecords);

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x69FB6D0", Offset = "0x69FA6D0", VA = "0x69FB6D0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static GlyphPairAdjustmentRecord[] GetGlyphPairAdjustmentTable(FontFaceHandle faceHandle, uint[] glyphIndexes)
	{
		return null;
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x69FB810", Offset = "0x69FA810", VA = "0x69FB810")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::PopulatePairAdjustmentRecordMarshallingArrayFromKernTable", IsFreeFunction = true)]
	private static int PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_FontFaceHandle(ref FontFaceHandle faceHandle, uint[] glyphIndexes, out int recordCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x69FBA40", Offset = "0x69FAA40", VA = "0x69FBA40")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static GlyphPairAdjustmentRecord[] GetAllPairAdjustmentRecords(FontFaceHandle faceHandle)
	{
		return null;
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x69FBAC0", Offset = "0x69FAAC0", VA = "0x69FBAC0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetAllPairAdjustmentRecords", IsFreeFunction = true)]
	private static GlyphPairAdjustmentRecord[] GetAllPairAdjustmentRecords_FontFaceHandle_Internal(ref FontFaceHandle faceHandle)
	{
		return null;
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x69FBC20", Offset = "0x69FAC20", VA = "0x69FBC20")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static GlyphPairAdjustmentRecord[] GetPairAdjustmentRecords(FontFaceHandle faceHandle, List<uint> glyphIndexes)
	{
		return null;
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x69FBCC0", Offset = "0x69FACC0", VA = "0x69FBCC0")]
	private static GlyphPairAdjustmentRecord[] GetPairAdjustmentRecords(FontFaceHandle faceHandle, uint[] glyphIndexes)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x69FBE00", Offset = "0x69FAE00", VA = "0x69FBE00")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::PopulatePairAdjustmentRecordMarshallingArray", IsFreeFunction = true)]
	private static int PopulatePairAdjustmentRecordMarshallingArray_FontFaceHandle(ref FontFaceHandle faceHandle, uint[] glyphIndexes, out int recordCount)
	{
		return default(int);
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x69FB920", Offset = "0x69FA920", VA = "0x69FB920")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetGlyphPairAdjustmentRecordsFromMarshallingArray", IsFreeFunction = true)]
	private static int GetPairAdjustmentRecordsFromMarshallingArray(Span<GlyphPairAdjustmentRecord> glyphPairAdjustmentRecords)
	{
		return default(int);
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x69FBF80", Offset = "0x69FAF80", VA = "0x69FBF80")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static MarkToBaseAdjustmentRecord[] GetAllMarkToBaseAdjustmentRecords(FontFaceHandle faceHandle)
	{
		return null;
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x69FC000", Offset = "0x69FB000", VA = "0x69FC000")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetAllMarkToBaseAdjustmentRecords", IsFreeFunction = true)]
	private static MarkToBaseAdjustmentRecord[] GetAllMarkToBaseAdjustmentRecords_FontFaceHandle_Internal(ref FontFaceHandle faceHandle)
	{
		return null;
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x69FC160", Offset = "0x69FB160", VA = "0x69FC160")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static MarkToBaseAdjustmentRecord[] GetMarkToBaseAdjustmentRecords(FontFaceHandle faceHandle, List<uint> glyphIndexes)
	{
		return null;
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x69FC200", Offset = "0x69FB200", VA = "0x69FC200")]
	private static MarkToBaseAdjustmentRecord[] GetMarkToBaseAdjustmentRecords(FontFaceHandle faceHandle, uint[] glyphIndexes)
	{
		return null;
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x69FC340", Offset = "0x69FB340", VA = "0x69FC340")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::PopulateMarkToBaseAdjustmentRecordMarshallingArray", IsFreeFunction = true)]
	private static int PopulateMarkToBaseAdjustmentRecordMarshallingArray_FontFaceHandle(ref FontFaceHandle faceHandle, uint[] glyphIndexes, out int recordCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x69FC450", Offset = "0x69FB450", VA = "0x69FC450")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetMarkToBaseAdjustmentRecordsFromMarshallingArray", IsFreeFunction = true)]
	private static int GetMarkToBaseAdjustmentRecordsFromMarshallingArray(Span<MarkToBaseAdjustmentRecord> adjustmentRecords)
	{
		return default(int);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x69FC5A0", Offset = "0x69FB5A0", VA = "0x69FC5A0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static MarkToMarkAdjustmentRecord[] GetAllMarkToMarkAdjustmentRecords(FontFaceHandle faceHandle)
	{
		return null;
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x69FC620", Offset = "0x69FB620", VA = "0x69FC620")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetAllMarkToMarkAdjustmentRecords", IsFreeFunction = true)]
	private static MarkToMarkAdjustmentRecord[] GetAllMarkToMarkAdjustmentRecords_FontFaceHandle_Internal(ref FontFaceHandle faceHandle)
	{
		return null;
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x69FC780", Offset = "0x69FB780", VA = "0x69FC780")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static MarkToMarkAdjustmentRecord[] GetMarkToMarkAdjustmentRecords(FontFaceHandle faceHandle, List<uint> glyphIndexes)
	{
		return null;
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x69FC820", Offset = "0x69FB820", VA = "0x69FC820")]
	private static MarkToMarkAdjustmentRecord[] GetMarkToMarkAdjustmentRecords(FontFaceHandle faceHandle, uint[] glyphIndexes)
	{
		return null;
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x69FC960", Offset = "0x69FB960", VA = "0x69FC960")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::PopulateMarkToMarkAdjustmentRecordMarshallingArray", IsFreeFunction = true)]
	private static int PopulateMarkToMarkAdjustmentRecordMarshallingArray_FontFaceHandle(ref FontFaceHandle faceHandle, uint[] glyphIndexes, out int recordCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x69FCA70", Offset = "0x69FBA70", VA = "0x69FCA70")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetMarkToMarkAdjustmentRecordsFromMarshallingArray", IsFreeFunction = true)]
	private static int GetMarkToMarkAdjustmentRecordsFromMarshallingArray(Span<MarkToMarkAdjustmentRecord> adjustmentRecords)
	{
		return default(int);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x69FB2E0", Offset = "0x69FA2E0", VA = "0x69FB2E0")]
	private static void GlyphIndexToMarshallingArray(uint glyphIndex, ref uint[] dstArray)
	{
	}

	[Token(Token = "0x6000078")]
	private static void GenericListToMarshallingArray<T>(ref List<T> srcList, ref T[] dstArray)
	{
	}

	[Token(Token = "0x6000079")]
	private static void SetMarshallingArraySize<T>(ref T[] marshallingArray, int recordCount)
	{
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x69FCBC0", Offset = "0x69FBBC0", VA = "0x69FCBC0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::ResetAtlasTexture", IsFreeFunction = true)]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.TextCoreTextEngineModule" })]
	internal static void ResetAtlasTexture(Texture2D texture)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007C")]
	[Address(RVA = "0x69F7FD0", Offset = "0x69F6FD0", VA = "0x69F7FD0")]
	private static extern int LoadFontFace_Internal_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper filePath);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007D")]
	[Address(RVA = "0x69F82D0", Offset = "0x69F72D0", VA = "0x69F82D0")]
	private static extern int LoadFontFace_With_Size_And_FaceIndex_FontFaceHandle_Internal_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper filePath, int pointSize, int faceIndex, out FontFaceHandle faceHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007E")]
	[Address(RVA = "0x69F8530", Offset = "0x69F7530", VA = "0x69F8530")]
	private static extern int LoadFontFace_FromFont_Internal_Injected(IntPtr font);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600007F")]
	[Address(RVA = "0x69F8850", Offset = "0x69F7850", VA = "0x69F8850")]
	private static extern int LoadFontFace_With_Size_and_FaceIndex_FromFont_FontFaceHandle_Internal_Injected(IntPtr font, int pointSize, int faceIndex, out FontFaceHandle faceHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000080")]
	[Address(RVA = "0x69F8C40", Offset = "0x69F7C40", VA = "0x69F8C40")]
	private static extern int LoadFontFace_With_Size_by_FamilyName_and_StyleName_FontFaceHandle_Internal_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper familyName, ref UnityEngine.Bindings.ManagedSpanWrapper styleName, int pointSize, out FontFaceHandle faceHandle);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000081")]
	[Address(RVA = "0x69F90F0", Offset = "0x69F80F0", VA = "0x69F90F0")]
	private static extern bool TryGetSystemFontReference_Internal_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper familyName, ref UnityEngine.Bindings.ManagedSpanWrapper styleName, out FontReference fontRef);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000082")]
	[Address(RVA = "0x69FA210", Offset = "0x69F9210", VA = "0x69FA210")]
	private static extern bool TryAddGlyphToTexture_FontFaceHandle_Internal_Injected(ref FontFaceHandle faceHandle, uint glyphIndex, int padding, GlyphPackingMode packingMode, out UnityEngine.Bindings.BlittableArrayWrapper freeGlyphRects, ref int freeGlyphRectCount, out UnityEngine.Bindings.BlittableArrayWrapper usedGlyphRects, ref int usedGlyphRectCount, GlyphRenderMode renderMode, IntPtr texture, out GlyphMarshallingStruct glyph);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000083")]
	[Address(RVA = "0x69FB130", Offset = "0x69FA130", VA = "0x69FB130")]
	private static extern bool TryAddGlyphsToTexture_FontFaceHandle_Internal_Injected(ref FontFaceHandle faceHandle, ref UnityEngine.Bindings.ManagedSpanWrapper glyphIndex, int padding, GlyphPackingMode packingMode, out UnityEngine.Bindings.BlittableArrayWrapper freeGlyphRects, ref int freeGlyphRectCount, out UnityEngine.Bindings.BlittableArrayWrapper usedGlyphRects, ref int usedGlyphRectCount, GlyphRenderMode renderMode, IntPtr texture, out UnityEngine.Bindings.BlittableArrayWrapper glyphs, ref int glyphCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000084")]
	[Address(RVA = "0x69FB690", Offset = "0x69FA690", VA = "0x69FB690")]
	private static extern int PopulateLigatureSubstitutionRecordMarshallingArray_FontFaceHandle_Injected(ref FontFaceHandle faceHandle, ref UnityEngine.Bindings.ManagedSpanWrapper glyphIndexes, out int recordCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000085")]
	[Address(RVA = "0x69FBA00", Offset = "0x69FAA00", VA = "0x69FBA00")]
	private static extern int PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_FontFaceHandle_Injected(ref FontFaceHandle faceHandle, ref UnityEngine.Bindings.ManagedSpanWrapper glyphIndexes, out int recordCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000086")]
	[Address(RVA = "0x69FBBE0", Offset = "0x69FABE0", VA = "0x69FBBE0")]
	private static extern void GetAllPairAdjustmentRecords_FontFaceHandle_Internal_Injected(ref FontFaceHandle faceHandle, out UnityEngine.Bindings.BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000087")]
	[Address(RVA = "0x69FBF10", Offset = "0x69FAF10", VA = "0x69FBF10")]
	private static extern int PopulatePairAdjustmentRecordMarshallingArray_FontFaceHandle_Injected(ref FontFaceHandle faceHandle, ref UnityEngine.Bindings.ManagedSpanWrapper glyphIndexes, out int recordCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000088")]
	[Address(RVA = "0x69FBF50", Offset = "0x69FAF50", VA = "0x69FBF50")]
	private static extern int GetPairAdjustmentRecordsFromMarshallingArray_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper glyphPairAdjustmentRecords);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000089")]
	[Address(RVA = "0x69FC120", Offset = "0x69FB120", VA = "0x69FC120")]
	private static extern void GetAllMarkToBaseAdjustmentRecords_FontFaceHandle_Internal_Injected(ref FontFaceHandle faceHandle, out UnityEngine.Bindings.BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008A")]
	[Address(RVA = "0x69FC530", Offset = "0x69FB530", VA = "0x69FC530")]
	private static extern int PopulateMarkToBaseAdjustmentRecordMarshallingArray_FontFaceHandle_Injected(ref FontFaceHandle faceHandle, ref UnityEngine.Bindings.ManagedSpanWrapper glyphIndexes, out int recordCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008B")]
	[Address(RVA = "0x69FC570", Offset = "0x69FB570", VA = "0x69FC570")]
	private static extern int GetMarkToBaseAdjustmentRecordsFromMarshallingArray_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper adjustmentRecords);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008C")]
	[Address(RVA = "0x69FC740", Offset = "0x69FB740", VA = "0x69FC740")]
	private static extern void GetAllMarkToMarkAdjustmentRecords_FontFaceHandle_Internal_Injected(ref FontFaceHandle faceHandle, out UnityEngine.Bindings.BlittableArrayWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008D")]
	[Address(RVA = "0x69FCB50", Offset = "0x69FBB50", VA = "0x69FCB50")]
	private static extern int PopulateMarkToMarkAdjustmentRecordMarshallingArray_FontFaceHandle_Injected(ref FontFaceHandle faceHandle, ref UnityEngine.Bindings.ManagedSpanWrapper glyphIndexes, out int recordCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008E")]
	[Address(RVA = "0x69FCB90", Offset = "0x69FBB90", VA = "0x69FCB90")]
	private static extern int GetMarkToMarkAdjustmentRecordsFromMarshallingArray_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper adjustmentRecords);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600008F")]
	[Address(RVA = "0x69FCC90", Offset = "0x69FBC90", VA = "0x69FCC90")]
	private static extern void ResetAtlasTexture_Injected(IntPtr texture);
}
