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
		[Address(RVA = "0x4BC50B0", Offset = "0x4BC50B0", VA = "0x4BC50B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000002")]
	public IList<UIVertex> verts
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x4BC61B0", Offset = "0x4BC61B0", VA = "0x4BC61B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public IList<UICharInfo> characters
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x4BC6210", Offset = "0x4BC6210", VA = "0x4BC6210")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	public IList<UILineInfo> lines
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x4BC6270", Offset = "0x4BC6270", VA = "0x4BC6270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000005")]
	public Rect rectExtents
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x4BC5810", Offset = "0x4BC5810", VA = "0x4BC5810")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000006")]
	public extern int characterCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x4BC50E0", Offset = "0x4BC50E0", VA = "0x4BC50E0")]
		get;
	}

	[Token(Token = "0x17000007")]
	public extern int lineCount
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x4BC6310", Offset = "0x4BC6310", VA = "0x4BC6310")]
		get;
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x4BC4D80", Offset = "0x4BC4D80", VA = "0x4BC4D80")]
	public TextGenerator()
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x4BC4D90", Offset = "0x4BC4D90", VA = "0x4BC4D90")]
	public TextGenerator(int initialCapacity)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x4BC4F30", Offset = "0x4BC4F30", VA = "0x4BC4F30", Slot = "1")]
	~TextGenerator()
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x4BC5030", Offset = "0x4BC5030", VA = "0x4BC5030", Slot = "4")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x4BC5110", Offset = "0x4BC5110", VA = "0x4BC5110")]
	private TextGenerationSettings ValidatedSettings(TextGenerationSettings settings)
	{
		return default(TextGenerationSettings);
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x4BC5560", Offset = "0x4BC5560", VA = "0x4BC5560")]
	public void Invalidate()
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x4BC5570", Offset = "0x4BC5570", VA = "0x4BC5570")]
	public void GetCharacters(List<UICharInfo> characters)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x4BC55F0", Offset = "0x4BC55F0", VA = "0x4BC55F0")]
	public void GetLines(List<UILineInfo> lines)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x4BC5670", Offset = "0x4BC5670", VA = "0x4BC5670")]
	public void GetVertices(List<UIVertex> vertices)
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x4BC56F0", Offset = "0x4BC56F0", VA = "0x4BC56F0")]
	public float GetPreferredWidth(string str, TextGenerationSettings settings)
	{
		return default(float);
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x4BC5860", Offset = "0x4BC5860", VA = "0x4BC5860")]
	public float GetPreferredHeight(string str, TextGenerationSettings settings)
	{
		return default(float);
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x4BC5910", Offset = "0x4BC5910", VA = "0x4BC5910")]
	public bool PopulateWithErrors(string str, TextGenerationSettings settings, GameObject context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x4BC57B0", Offset = "0x4BC57B0", VA = "0x4BC57B0")]
	public bool Populate(string str, TextGenerationSettings settings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x4BC5B20", Offset = "0x4BC5B20", VA = "0x4BC5B20")]
	private TextGenerationError PopulateWithError(string str, TextGenerationSettings settings)
	{
		return default(TextGenerationError);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x4BC5DA0", Offset = "0x4BC5DA0", VA = "0x4BC5DA0")]
	private TextGenerationError PopulateAlways(string str, TextGenerationSettings settings)
	{
		return default(TextGenerationError);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x4BC4F00", Offset = "0x4BC4F00", VA = "0x4BC4F00")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern IntPtr Internal_Create();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001B")]
	[Address(RVA = "0x4BC5080", Offset = "0x4BC5080", VA = "0x4BC5080")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr ptr);

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4BC6340", Offset = "0x4BC6340", VA = "0x4BC6340")]
	internal bool Populate_Internal(string str, Font font, Color color, int fontSize, float scaleFactor, float lineSpacing, FontStyle style, bool richText, bool resizeTextForBestFit, int resizeTextMinSize, int resizeTextMaxSize, int verticalOverFlow, int horizontalOverflow, bool updateBounds, TextAnchor anchor, float extentsX, float extentsY, float pivotX, float pivotY, bool generateOutOfBounds, bool alignByGeometry, out uint error)
	{
		return default(bool);
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4BC5F70", Offset = "0x4BC5F70", VA = "0x4BC5F70")]
	internal bool Populate_Internal(string str, Font font, Color color, int fontSize, float scaleFactor, float lineSpacing, FontStyle style, bool richText, bool resizeTextForBestFit, int resizeTextMinSize, int resizeTextMaxSize, VerticalWrapMode verticalOverFlow, HorizontalWrapMode horizontalOverflow, bool updateBounds, TextAnchor anchor, Vector2 extents, Vector2 pivot, bool generateOutOfBounds, bool alignByGeometry, out TextGenerationError error)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4BC56B0", Offset = "0x4BC56B0", VA = "0x4BC56B0")]
	[UnityEngine.Bindings.NativeThrows]
	private extern void GetVerticesInternal(object vertices);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4BC55B0", Offset = "0x4BC55B0", VA = "0x4BC55B0")]
	[UnityEngine.Bindings.NativeThrows]
	private extern void GetCharactersInternal(object characters);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000020")]
	[Address(RVA = "0x4BC5630", Offset = "0x4BC5630", VA = "0x4BC5630")]
	[UnityEngine.Bindings.NativeThrows]
	private extern void GetLinesInternal(object lines);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x4BC62D0", Offset = "0x4BC62D0", VA = "0x4BC62D0")]
	private static extern void get_rectExtents_Injected(TextGenerator _unity_self, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x4BC64F0", Offset = "0x4BC64F0", VA = "0x4BC64F0")]
	private static extern bool Populate_Internal_Injected(TextGenerator _unity_self, string str, IntPtr font, [In] ref Color color, int fontSize, float scaleFactor, float lineSpacing, FontStyle style, bool richText, bool resizeTextForBestFit, int resizeTextMinSize, int resizeTextMaxSize, int verticalOverFlow, int horizontalOverflow, bool updateBounds, TextAnchor anchor, float extentsX, float extentsY, float pivotX, float pivotY, bool generateOutOfBounds, bool alignByGeometry, out uint error);
}
