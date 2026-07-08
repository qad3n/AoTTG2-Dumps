using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.TextCore.LowLevel;

[Token(Token = "0x200000C")]
[UnityEngine.Bindings.NativeHeader("Modules/TextCoreFontEngine/Native/FontEngine.h")]
public sealed class FontEngine
{
	[Token(Token = "0x400005F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static Glyph[] s_Glyphs;

	[Token(Token = "0x4000060")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static uint[] s_GlyphIndexes_MarshallingArray_A;

	[Token(Token = "0x4000061")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static GlyphMarshallingStruct[] s_GlyphMarshallingStruct_IN;

	[Token(Token = "0x4000062")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static GlyphMarshallingStruct[] s_GlyphMarshallingStruct_OUT;

	[Token(Token = "0x4000063")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static GlyphRect[] s_FreeGlyphRects;

	[Token(Token = "0x4000064")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private static GlyphRect[] s_UsedGlyphRects;

	[Token(Token = "0x4000065")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private static GlyphPairAdjustmentRecord[] s_PairAdjustmentRecords_MarshallingArray;

	[Token(Token = "0x4000066")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static Dictionary<uint, Glyph> s_GlyphLookupDictionary;

	[Token(Token = "0x6000047")]
	[Address(RVA = "0x4B7C000", Offset = "0x4B7C000", VA = "0x4B7C000")]
	public static FontEngineError InitializeFontEngine()
	{
		return default(FontEngineError);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4B7C080", Offset = "0x4B7C080", VA = "0x4B7C080")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::InitFontEngine", IsFreeFunction = true)]
	private static extern int InitializeFontEngine_Internal();

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4B7C0B0", Offset = "0x4B7C0B0", VA = "0x4B7C0B0")]
	public static FontEngineError LoadFontFace(string filePath, int pointSize, int faceIndex)
	{
		return default(FontEngineError);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4B7C140", Offset = "0x4B7C140", VA = "0x4B7C140")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::LoadFontFace", IsFreeFunction = true)]
	private static extern int LoadFontFace_With_Size_And_FaceIndex_Internal(string filePath, int pointSize, int faceIndex);

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4B7C180", Offset = "0x4B7C180", VA = "0x4B7C180")]
	public static FontEngineError LoadFontFace(Font font, int pointSize)
	{
		return default(FontEngineError);
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4B7C1D0", Offset = "0x4B7C1D0", VA = "0x4B7C1D0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::LoadFontFace", IsFreeFunction = true)]
	private static int LoadFontFace_With_Size_FromFont_Internal(Font font, int pointSize)
	{
		return default(int);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4B7C300", Offset = "0x4B7C300", VA = "0x4B7C300")]
	public static FontEngineError LoadFontFace(Font font, int pointSize, int faceIndex)
	{
		return default(FontEngineError);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4B7C350", Offset = "0x4B7C350", VA = "0x4B7C350")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::LoadFontFace", IsFreeFunction = true)]
	private static int LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal(Font font, int pointSize, int faceIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4B7C490", Offset = "0x4B7C490", VA = "0x4B7C490")]
	public static FontEngineError LoadFontFace(string familyName, string styleName, int pointSize)
	{
		return default(FontEngineError);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4B7C520", Offset = "0x4B7C520", VA = "0x4B7C520")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::LoadFontFace", IsFreeFunction = true)]
	private static extern int LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal(string familyName, string styleName, int pointSize);

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4B7C560", Offset = "0x4B7C560", VA = "0x4B7C560")]
	internal static bool TryGetSystemFontReference(string familyName, string styleName, out FontReference fontRef)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4B7C600", Offset = "0x4B7C600", VA = "0x4B7C600")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::TryGetSystemFontReference", IsThreadSafe = true, IsFreeFunction = true)]
	private static extern bool TryGetSystemFontReference_Internal(string familyName, string styleName, out FontReference fontRef);

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4B7C640", Offset = "0x4B7C640", VA = "0x4B7C640")]
	public static FaceInfo GetFaceInfo()
	{
		return default(FaceInfo);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000054")]
	[Address(RVA = "0x4B7C710", Offset = "0x4B7C710", VA = "0x4B7C710")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetFaceInfo", IsThreadSafe = true, IsFreeFunction = true)]
	private static extern int GetFaceInfo_Internal(ref FaceInfo faceInfo);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4B7C740", Offset = "0x4B7C740", VA = "0x4B7C740")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetGlyphIndex", IsThreadSafe = true, IsFreeFunction = true)]
	internal static extern uint GetGlyphIndex(uint unicode);

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x4B7C770", Offset = "0x4B7C770", VA = "0x4B7C770")]
	public static bool TryGetGlyphWithUnicodeValue(uint unicode, GlyphLoadFlags flags, out Glyph glyph)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x4B7C930", Offset = "0x4B7C930", VA = "0x4B7C930")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::TryGetGlyphWithUnicodeValue", IsThreadSafe = true, IsFreeFunction = true)]
	private static extern bool TryGetGlyphWithUnicodeValue_Internal(uint unicode, GlyphLoadFlags loadFlags, ref GlyphMarshallingStruct glyphStruct);

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4B7C970", Offset = "0x4B7C970", VA = "0x4B7C970")]
	public static bool TryGetGlyphWithIndexValue(uint glyphIndex, GlyphLoadFlags flags, out Glyph glyph)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4B7CB30", Offset = "0x4B7CB30", VA = "0x4B7CB30")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::TryGetGlyphWithIndexValue", IsThreadSafe = true, IsFreeFunction = true)]
	private static extern bool TryGetGlyphWithIndexValue_Internal(uint glyphIndex, GlyphLoadFlags loadFlags, ref GlyphMarshallingStruct glyphStruct);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005A")]
	[Address(RVA = "0x4B7CB70", Offset = "0x4B7CB70", VA = "0x4B7CB70")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::SetTextureUploadMode", IsThreadSafe = true, IsFreeFunction = true)]
	internal static extern void SetTextureUploadMode(bool shouldUploadImmediately);

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x4B7CBA0", Offset = "0x4B7CBA0", VA = "0x4B7CBA0")]
	internal static bool TryAddGlyphToTexture(uint glyphIndex, int padding, GlyphPackingMode packingMode, List<GlyphRect> freeGlyphRects, List<GlyphRect> usedGlyphRects, GlyphRenderMode renderMode, Texture2D texture, out Glyph glyph)
	{
		return default(bool);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x4B7D200", Offset = "0x4B7D200", VA = "0x4B7D200")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::TryAddGlyphToTexture", IsThreadSafe = true, IsFreeFunction = true)]
	private static bool TryAddGlyphToTexture_Internal(uint glyphIndex, int padding, GlyphPackingMode packingMode, [Out] GlyphRect[] freeGlyphRects, ref int freeGlyphRectCount, [Out] GlyphRect[] usedGlyphRects, ref int usedGlyphRectCount, GlyphRenderMode renderMode, Texture2D texture, out GlyphMarshallingStruct glyph)
	{
		return default(bool);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x4B7D460", Offset = "0x4B7D460", VA = "0x4B7D460")]
	internal static bool TryAddGlyphsToTexture(List<uint> glyphIndexes, int padding, GlyphPackingMode packingMode, List<GlyphRect> freeGlyphRects, List<GlyphRect> usedGlyphRects, GlyphRenderMode renderMode, Texture2D texture, out Glyph[] glyphs)
	{
		return default(bool);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x4B7DFA0", Offset = "0x4B7DFA0", VA = "0x4B7DFA0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::TryAddGlyphsToTexture", IsThreadSafe = true, IsFreeFunction = true)]
	private static bool TryAddGlyphsToTexture_Internal(uint[] glyphIndex, int padding, GlyphPackingMode packingMode, [Out] GlyphRect[] freeGlyphRects, ref int freeGlyphRectCount, [Out] GlyphRect[] usedGlyphRects, ref int usedGlyphRectCount, GlyphRenderMode renderMode, Texture2D texture, [Out] GlyphMarshallingStruct[] glyphs, ref int glyphCount)
	{
		return default(bool);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x4B7E300", Offset = "0x4B7E300", VA = "0x4B7E300")]
	internal static GlyphPairAdjustmentRecord[] GetGlyphPairAdjustmentTable(uint[] glyphIndexes)
	{
		return null;
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4B7E600", Offset = "0x4B7E600", VA = "0x4B7E600")]
	internal static GlyphPairAdjustmentRecord[] GetGlyphPairAdjustmentRecords(List<uint> glyphIndexes, out int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4B7E410", Offset = "0x4B7E410", VA = "0x4B7E410")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::PopulatePairAdjustmentRecordMarshallingArrayFromKernTable", IsFreeFunction = true)]
	private static int PopulatePairAdjustmentRecordMarshallingArray_from_KernTable(uint[] glyphIndexes, out int recordCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4B7E510", Offset = "0x4B7E510", VA = "0x4B7E510")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetGlyphPairAdjustmentRecordsFromMarshallingArray", IsFreeFunction = true)]
	private static int GetPairAdjustmentRecordsFromMarshallingArray([Out] GlyphPairAdjustmentRecord[] glyphPairAdjustmentRecords)
	{
		return default(int);
	}

	[Token(Token = "0x6000063")]
	private static void GenericListToMarshallingArray<T>(ref List<T> srcList, ref T[] dstArray)
	{
	}

	[Token(Token = "0x6000064")]
	private static void SetMarshallingArraySize<T>(ref T[] marshallingArray, int recordCount)
	{
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x4B7E7B0", Offset = "0x4B7E7B0", VA = "0x4B7E7B0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::ResetAtlasTexture", IsFreeFunction = true)]
	internal static void ResetAtlasTexture(Texture2D texture)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000067")]
	[Address(RVA = "0x4B7C2C0", Offset = "0x4B7C2C0", VA = "0x4B7C2C0")]
	private static extern int LoadFontFace_With_Size_FromFont_Internal_Injected(IntPtr font, int pointSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4B7C450", Offset = "0x4B7C450", VA = "0x4B7C450")]
	private static extern int LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal_Injected(IntPtr font, int pointSize, int faceIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000069")]
	[Address(RVA = "0x4B7D400", Offset = "0x4B7D400", VA = "0x4B7D400")]
	private static extern bool TryAddGlyphToTexture_Internal_Injected(uint glyphIndex, int padding, GlyphPackingMode packingMode, out UnityEngine.Bindings.ManagedSpanWrapper freeGlyphRects, ref int freeGlyphRectCount, out UnityEngine.Bindings.ManagedSpanWrapper usedGlyphRects, ref int usedGlyphRectCount, GlyphRenderMode renderMode, IntPtr texture, out GlyphMarshallingStruct glyph);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006A")]
	[Address(RVA = "0x4B7E2A0", Offset = "0x4B7E2A0", VA = "0x4B7E2A0")]
	private static extern bool TryAddGlyphsToTexture_Internal_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper glyphIndex, int padding, GlyphPackingMode packingMode, out UnityEngine.Bindings.ManagedSpanWrapper freeGlyphRects, ref int freeGlyphRectCount, out UnityEngine.Bindings.ManagedSpanWrapper usedGlyphRects, ref int usedGlyphRectCount, GlyphRenderMode renderMode, IntPtr texture, out UnityEngine.Bindings.ManagedSpanWrapper glyphs, ref int glyphCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006B")]
	[Address(RVA = "0x4B7E740", Offset = "0x4B7E740", VA = "0x4B7E740")]
	private static extern int PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper glyphIndexes, out int recordCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006C")]
	[Address(RVA = "0x4B7E780", Offset = "0x4B7E780", VA = "0x4B7E780")]
	private static extern int GetPairAdjustmentRecordsFromMarshallingArray_Injected(out UnityEngine.Bindings.ManagedSpanWrapper glyphPairAdjustmentRecords);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4B7E890", Offset = "0x4B7E890", VA = "0x4B7E890")]
	private static extern void ResetAtlasTexture_Injected(IntPtr texture);
}
