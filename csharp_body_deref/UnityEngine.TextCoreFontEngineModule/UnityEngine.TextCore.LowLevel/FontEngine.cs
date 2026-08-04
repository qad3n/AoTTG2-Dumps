// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.LowLevel.FontEngine
// Update status: unchanged since the previous dump
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
	[Address(RVA = "0x4EA3930", Offset = "0x4EA3930", VA = "0x4EA3930")]
	public static FontEngineError InitializeFontEngine()
	{
		return default(FontEngineError);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4EA39B0", Offset = "0x4EA39B0", VA = "0x4EA39B0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::InitFontEngine", IsFreeFunction = true)]
	private static extern int InitializeFontEngine_Internal();

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4EA39E0", Offset = "0x4EA39E0", VA = "0x4EA39E0")]
	public static FontEngineError LoadFontFace(string filePath, int pointSize, int faceIndex)
	{
		return default(FontEngineError);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4EA3A70", Offset = "0x4EA3A70", VA = "0x4EA3A70")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::LoadFontFace", IsFreeFunction = true)]
	private static extern int LoadFontFace_With_Size_And_FaceIndex_Internal(string filePath, int pointSize, int faceIndex);

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4EA3AB0", Offset = "0x4EA3AB0", VA = "0x4EA3AB0")]
	public static FontEngineError LoadFontFace(Font font, int pointSize)
	{
		return default(FontEngineError);
	}

	[Token(Token = "0x600004C")]
	[Address(RVA = "0x4EA3B00", Offset = "0x4EA3B00", VA = "0x4EA3B00")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::LoadFontFace", IsFreeFunction = true)]
	private static int LoadFontFace_With_Size_FromFont_Internal(Font font, int pointSize)
	{
		return default(int);
	}

	[Token(Token = "0x600004D")]
	[Address(RVA = "0x4EA3C30", Offset = "0x4EA3C30", VA = "0x4EA3C30")]
	public static FontEngineError LoadFontFace(Font font, int pointSize, int faceIndex)
	{
		return default(FontEngineError);
	}

	[Token(Token = "0x600004E")]
	[Address(RVA = "0x4EA3C80", Offset = "0x4EA3C80", VA = "0x4EA3C80")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::LoadFontFace", IsFreeFunction = true)]
	private static int LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal(Font font, int pointSize, int faceIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600004F")]
	[Address(RVA = "0x4EA3DC0", Offset = "0x4EA3DC0", VA = "0x4EA3DC0")]
	public static FontEngineError LoadFontFace(string familyName, string styleName, int pointSize)
	{
		return default(FontEngineError);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000050")]
	[Address(RVA = "0x4EA3E50", Offset = "0x4EA3E50", VA = "0x4EA3E50")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::LoadFontFace", IsFreeFunction = true)]
	private static extern int LoadFontFace_With_Size_by_FamilyName_and_StyleName_Internal(string familyName, string styleName, int pointSize);

	[Token(Token = "0x6000051")]
	[Address(RVA = "0x4EA3E90", Offset = "0x4EA3E90", VA = "0x4EA3E90")]
	internal static bool TryGetSystemFontReference(string familyName, string styleName, out FontReference fontRef)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000052")]
	[Address(RVA = "0x4EA3F30", Offset = "0x4EA3F30", VA = "0x4EA3F30")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::TryGetSystemFontReference", IsThreadSafe = true, IsFreeFunction = true)]
	private static extern bool TryGetSystemFontReference_Internal(string familyName, string styleName, out FontReference fontRef);

	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4EA3F70", Offset = "0x4EA3F70", VA = "0x4EA3F70")]
	public static FaceInfo GetFaceInfo()
	{
		return default(FaceInfo);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000054")]
	[Address(RVA = "0x4EA4040", Offset = "0x4EA4040", VA = "0x4EA4040")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetFaceInfo", IsThreadSafe = true, IsFreeFunction = true)]
	private static extern int GetFaceInfo_Internal(ref FaceInfo faceInfo);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4EA4070", Offset = "0x4EA4070", VA = "0x4EA4070")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::GetGlyphIndex", IsThreadSafe = true, IsFreeFunction = true)]
	internal static extern uint GetGlyphIndex(uint unicode);

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x4EA40A0", Offset = "0x4EA40A0", VA = "0x4EA40A0")]
	public static bool TryGetGlyphWithUnicodeValue(uint unicode, GlyphLoadFlags flags, out Glyph glyph)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x4EA4260", Offset = "0x4EA4260", VA = "0x4EA4260")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::TryGetGlyphWithUnicodeValue", IsThreadSafe = true, IsFreeFunction = true)]
	private static extern bool TryGetGlyphWithUnicodeValue_Internal(uint unicode, GlyphLoadFlags loadFlags, ref GlyphMarshallingStruct glyphStruct);

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4EA42A0", Offset = "0x4EA42A0", VA = "0x4EA42A0")]
	public static bool TryGetGlyphWithIndexValue(uint glyphIndex, GlyphLoadFlags flags, out Glyph glyph)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4EA4460", Offset = "0x4EA4460", VA = "0x4EA4460")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::TryGetGlyphWithIndexValue", IsThreadSafe = true, IsFreeFunction = true)]
	private static extern bool TryGetGlyphWithIndexValue_Internal(uint glyphIndex, GlyphLoadFlags loadFlags, ref GlyphMarshallingStruct glyphStruct);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600005A")]
	[Address(RVA = "0x4EA44A0", Offset = "0x4EA44A0", VA = "0x4EA44A0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::SetTextureUploadMode", IsThreadSafe = true, IsFreeFunction = true)]
	internal static extern void SetTextureUploadMode(bool shouldUploadImmediately);

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x4EA44D0", Offset = "0x4EA44D0", VA = "0x4EA44D0")]
	internal static bool TryAddGlyphToTexture(uint glyphIndex, int padding, GlyphPackingMode packingMode, List<GlyphRect> freeGlyphRects, List<GlyphRect> usedGlyphRects, GlyphRenderMode renderMode, Texture2D texture, out Glyph glyph)
	{
		return default(bool);
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x4EA4B30", Offset = "0x4EA4B30", VA = "0x4EA4B30")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::TryAddGlyphToTexture", IsThreadSafe = true, IsFreeFunction = true)]
	private static bool TryAddGlyphToTexture_Internal(uint glyphIndex, int padding, GlyphPackingMode packingMode, [Out] GlyphRect[] freeGlyphRects, ref int freeGlyphRectCount, [Out] GlyphRect[] usedGlyphRects, ref int usedGlyphRectCount, GlyphRenderMode renderMode, Texture2D texture, out GlyphMarshallingStruct glyph)
	{
		return default(bool);
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x4EA4D90", Offset = "0x4EA4D90", VA = "0x4EA4D90")]
	internal static bool TryAddGlyphsToTexture(List<uint> glyphIndexes, int padding, GlyphPackingMode packingMode, List<GlyphRect> freeGlyphRects, List<GlyphRect> usedGlyphRects, GlyphRenderMode renderMode, Texture2D texture, out Glyph[] glyphs)
	{
		return default(bool);
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x4EA58D0", Offset = "0x4EA58D0", VA = "0x4EA58D0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::TryAddGlyphsToTexture", IsThreadSafe = true, IsFreeFunction = true)]
	private static bool TryAddGlyphsToTexture_Internal(uint[] glyphIndex, int padding, GlyphPackingMode packingMode, [Out] GlyphRect[] freeGlyphRects, ref int freeGlyphRectCount, [Out] GlyphRect[] usedGlyphRects, ref int usedGlyphRectCount, GlyphRenderMode renderMode, Texture2D texture, [Out] GlyphMarshallingStruct[] glyphs, ref int glyphCount)
	{
		return default(bool);
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x4EA5C30", Offset = "0x4EA5C30", VA = "0x4EA5C30")]
	internal static GlyphPairAdjustmentRecord[] GetGlyphPairAdjustmentTable(uint[] glyphIndexes)
	{
		return null;
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4EA5F30", Offset = "0x4EA5F30", VA = "0x4EA5F30")]
	internal static GlyphPairAdjustmentRecord[] GetGlyphPairAdjustmentRecords(List<uint> glyphIndexes, out int recordCount)
	{
		return null;
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4EA5D40", Offset = "0x4EA5D40", VA = "0x4EA5D40")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::PopulatePairAdjustmentRecordMarshallingArrayFromKernTable", IsFreeFunction = true)]
	private static int PopulatePairAdjustmentRecordMarshallingArray_from_KernTable(uint[] glyphIndexes, out int recordCount)
	{
		return default(int);
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4EA5E40", Offset = "0x4EA5E40", VA = "0x4EA5E40")]
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
	[Address(RVA = "0x4EA60E0", Offset = "0x4EA60E0", VA = "0x4EA60E0")]
	[UnityEngine.Bindings.NativeMethod(Name = "TextCore::FontEngine::ResetAtlasTexture", IsFreeFunction = true)]
	internal static void ResetAtlasTexture(Texture2D texture)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000067")]
	[Address(RVA = "0x4EA3BF0", Offset = "0x4EA3BF0", VA = "0x4EA3BF0")]
	private static extern int LoadFontFace_With_Size_FromFont_Internal_Injected(IntPtr font, int pointSize);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4EA3D80", Offset = "0x4EA3D80", VA = "0x4EA3D80")]
	private static extern int LoadFontFace_With_Size_and_FaceIndex_FromFont_Internal_Injected(IntPtr font, int pointSize, int faceIndex);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000069")]
	[Address(RVA = "0x4EA4D30", Offset = "0x4EA4D30", VA = "0x4EA4D30")]
	private static extern bool TryAddGlyphToTexture_Internal_Injected(uint glyphIndex, int padding, GlyphPackingMode packingMode, out UnityEngine.Bindings.ManagedSpanWrapper freeGlyphRects, ref int freeGlyphRectCount, out UnityEngine.Bindings.ManagedSpanWrapper usedGlyphRects, ref int usedGlyphRectCount, GlyphRenderMode renderMode, IntPtr texture, out GlyphMarshallingStruct glyph);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006A")]
	[Address(RVA = "0x4EA5BD0", Offset = "0x4EA5BD0", VA = "0x4EA5BD0")]
	private static extern bool TryAddGlyphsToTexture_Internal_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper glyphIndex, int padding, GlyphPackingMode packingMode, out UnityEngine.Bindings.ManagedSpanWrapper freeGlyphRects, ref int freeGlyphRectCount, out UnityEngine.Bindings.ManagedSpanWrapper usedGlyphRects, ref int usedGlyphRectCount, GlyphRenderMode renderMode, IntPtr texture, out UnityEngine.Bindings.ManagedSpanWrapper glyphs, ref int glyphCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006B")]
	[Address(RVA = "0x4EA6070", Offset = "0x4EA6070", VA = "0x4EA6070")]
	private static extern int PopulatePairAdjustmentRecordMarshallingArray_from_KernTable_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper glyphIndexes, out int recordCount);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006C")]
	[Address(RVA = "0x4EA60B0", Offset = "0x4EA60B0", VA = "0x4EA60B0")]
	private static extern int GetPairAdjustmentRecordsFromMarshallingArray_Injected(out UnityEngine.Bindings.ManagedSpanWrapper glyphPairAdjustmentRecords);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4EA61C0", Offset = "0x4EA61C0", VA = "0x4EA61C0")]
	private static extern void ResetAtlasTexture_Injected(IntPtr texture);
}
