// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextGenerator
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
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000005")]
[UnityEngine.Scripting.UsedByNativeCode]
[UnityEngine.Bindings.NativeHeader("Modules/TextRendering/TextGenerator.h")]
public sealed class TextGenerator : IDisposable
{
	[Token(Token = "0x2000006")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000028")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(TextGenerator textGenerator)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x400001D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x400001E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private string m_LastString;

	[Token(Token = "0x400001F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private TextGenerationSettings m_LastSettings;

	[Token(Token = "0x4000020")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private bool m_HasGenerated;

	[Token(Token = "0x4000021")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x84")]
	private TextGenerationError m_LastValid;

	[Token(Token = "0x4000022")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private readonly List<UIVertex> m_Verts;

	[Token(Token = "0x4000023")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private readonly List<UICharInfo> m_Characters;

	[Token(Token = "0x4000024")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private readonly List<UILineInfo> m_Lines;

	[Token(Token = "0x4000025")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	private bool m_CachedVerts;

	[Token(Token = "0x4000026")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA1")]
	private bool m_CachedCharacters;

	[Token(Token = "0x4000027")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA2")]
	private bool m_CachedLines;

	[Token(Token = "0x17000001")]
	public int characterCountVisible
	{
		[Token(Token = "0x6000008")]
		[Address(RVA = "0x305F140", Offset = "0x305D740", VA = "0x18305F140")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000002")]
	public IList<UIVertex> verts
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x305F4C0", Offset = "0x305DAC0", VA = "0x18305F4C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public IList<UICharInfo> characters
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x305F240", Offset = "0x305D840", VA = "0x18305F240")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	public IList<UILineInfo> lines
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x305F370", Offset = "0x305D970", VA = "0x18305F370")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000005")]
	public Rect rectExtents
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x305F450", Offset = "0x305DA50", VA = "0x18305F450")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000006")]
	public int characterCount
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x305F1E0", Offset = "0x305D7E0", VA = "0x18305F1E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000007")]
	public int lineCount
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x305F310", Offset = "0x305D910", VA = "0x18305F310")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x305EFF0", Offset = "0x305D5F0", VA = "0x18305EFF0")]
	public TextGenerator()
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x305EE90", Offset = "0x305D490", VA = "0x18305EE90")]
	public TextGenerator(int initialCapacity)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x305D5A0", Offset = "0x305BBA0", VA = "0x18305D5A0", Slot = "1")]
	~TextGenerator()
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x305EAD0", Offset = "0x305D0D0", VA = "0x18305EAD0", Slot = "4")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x305EB20", Offset = "0x305D120", VA = "0x18305EB20")]
	private TextGenerationSettings ValidatedSettings(TextGenerationSettings settings)
	{
		return default(TextGenerationSettings);
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x305DB30", Offset = "0x305C130", VA = "0x18305DB30")]
	public void Invalidate()
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x305D6D0", Offset = "0x305BCD0", VA = "0x18305D6D0")]
	public void GetCharacters(List<UICharInfo> characters)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x305D780", Offset = "0x305BD80", VA = "0x18305D780")]
	public void GetLines(List<UILineInfo> lines)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x305DA60", Offset = "0x305C060", VA = "0x18305DA60")]
	public void GetVertices(List<UIVertex> vertices)
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x305D8F0", Offset = "0x305BEF0", VA = "0x18305D8F0")]
	public float GetPreferredWidth(string str, TextGenerationSettings settings)
	{
		return default(float);
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x305D7E0", Offset = "0x305BDE0", VA = "0x18305D7E0")]
	public float GetPreferredHeight(string str, TextGenerationSettings settings)
	{
		return default(float);
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x305E290", Offset = "0x305C890", VA = "0x18305E290")]
	public bool PopulateWithErrors(string str, TextGenerationSettings settings, GameObject context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x305EA70", Offset = "0x305D070", VA = "0x18305EA70")]
	public bool Populate(string str, TextGenerationSettings settings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x305DEA0", Offset = "0x305C4A0", VA = "0x18305DEA0")]
	private TextGenerationError PopulateWithError(string str, TextGenerationSettings settings)
	{
		return default(TextGenerationError);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x305DB40", Offset = "0x305C140", VA = "0x18305DB40")]
	private TextGenerationError PopulateAlways(string str, TextGenerationSettings settings)
	{
		return default(TextGenerationError);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x305DAC0", Offset = "0x305C0C0", VA = "0x18305DAC0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern IntPtr Internal_Create();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001B")]
	[Address(RVA = "0x305DAF0", Offset = "0x305C0F0", VA = "0x18305DAF0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr ptr);

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x305E720", Offset = "0x305CD20", VA = "0x18305E720")]
	internal bool Populate_Internal(string str, Font font, Color color, int fontSize, float scaleFactor, float lineSpacing, FontStyle style, bool richText, bool resizeTextForBestFit, int resizeTextMinSize, int resizeTextMaxSize, int verticalOverFlow, int horizontalOverflow, bool updateBounds, TextAnchor anchor, float extentsX, float extentsY, float pivotX, float pivotY, bool generateOutOfBounds, bool alignByGeometry, out uint error)
	{
		return default(bool);
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x305E540", Offset = "0x305CB40", VA = "0x18305E540")]
	internal bool Populate_Internal(string str, Font font, Color color, int fontSize, float scaleFactor, float lineSpacing, FontStyle style, bool richText, bool resizeTextForBestFit, int resizeTextMinSize, int resizeTextMaxSize, VerticalWrapMode verticalOverFlow, HorizontalWrapMode horizontalOverflow, bool updateBounds, TextAnchor anchor, Vector2 extents, Vector2 pivot, bool generateOutOfBounds, bool alignByGeometry, out TextGenerationError error)
	{
		return default(bool);
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x305DA60", Offset = "0x305C060", VA = "0x18305DA60")]
	[UnityEngine.Bindings.NativeThrows]
	private void GetVerticesInternal(object vertices)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x305D6D0", Offset = "0x305BCD0", VA = "0x18305D6D0")]
	[UnityEngine.Bindings.NativeThrows]
	private void GetCharactersInternal(object characters)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x305D780", Offset = "0x305BD80", VA = "0x18305D780")]
	[UnityEngine.Bindings.NativeThrows]
	private void GetLinesInternal(object lines)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x305F400", Offset = "0x305DA00", VA = "0x18305F400")]
	private static extern void get_rectExtents_Injected(IntPtr _unity_self, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x305F1A0", Offset = "0x305D7A0", VA = "0x18305F1A0")]
	private static extern int get_characterCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x305F2D0", Offset = "0x305D8D0", VA = "0x18305F2D0")]
	private static extern int get_lineCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x305E4A0", Offset = "0x305CAA0", VA = "0x18305E4A0")]
	private static extern bool Populate_Internal_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper str, IntPtr font, [In] ref Color color, int fontSize, float scaleFactor, float lineSpacing, FontStyle style, bool richText, bool resizeTextForBestFit, int resizeTextMinSize, int resizeTextMaxSize, int verticalOverFlow, int horizontalOverflow, bool updateBounds, TextAnchor anchor, float extentsX, float extentsY, float pivotX, float pivotY, bool generateOutOfBounds, bool alignByGeometry, out uint error);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x305DA10", Offset = "0x305C010", VA = "0x18305DA10")]
	private static extern void GetVerticesInternal_Injected(IntPtr _unity_self, object vertices);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x305D680", Offset = "0x305BC80", VA = "0x18305D680")]
	private static extern void GetCharactersInternal_Injected(IntPtr _unity_self, object characters);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x305D730", Offset = "0x305BD30", VA = "0x18305D730")]
	private static extern void GetLinesInternal_Injected(IntPtr _unity_self, object lines);
}
