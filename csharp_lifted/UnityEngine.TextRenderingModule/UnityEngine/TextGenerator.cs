// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextGenerator
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
		[Address(RVA = "0x6A5A860", Offset = "0x6A59860", VA = "0x6A5A860")]
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
		[Address(RVA = "0x6A58CF0", Offset = "0x6A57CF0", VA = "0x6A58CF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000002")]
	public IList<UIVertex> verts
	{
		[Token(Token = "0x6000014")]
		[Address(RVA = "0x6A5A180", Offset = "0x6A59180", VA = "0x6A5A180")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000003")]
	public IList<UICharInfo> characters
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x6A5A200", Offset = "0x6A59200", VA = "0x6A5A200")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000004")]
	public IList<UILineInfo> lines
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x6A5A280", Offset = "0x6A59280", VA = "0x6A5A280")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000005")]
	public Rect rectExtents
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x6A59710", Offset = "0x6A58710", VA = "0x6A59710")]
		get
		{
			return default(Rect);
		}
	}

	[Token(Token = "0x17000006")]
	public int characterCount
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x6A58D50", Offset = "0x6A57D50", VA = "0x6A58D50")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000007")]
	public int lineCount
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x6A5A370", Offset = "0x6A59370", VA = "0x6A5A370")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000004")]
	[Address(RVA = "0x6A589B0", Offset = "0x6A579B0", VA = "0x6A589B0")]
	public TextGenerator()
	{
	}

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x6A589C0", Offset = "0x6A579C0", VA = "0x6A589C0")]
	public TextGenerator(int initialCapacity)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x6A58B60", Offset = "0x6A57B60", VA = "0x6A58B60", Slot = "1")]
	~TextGenerator()
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x6A58C70", Offset = "0x6A57C70", VA = "0x6A58C70", Slot = "4")]
	private void System_002EIDisposable_002EDispose()
	{
	}

	[Token(Token = "0x6000009")]
	[Address(RVA = "0x6A58DB0", Offset = "0x6A57DB0", VA = "0x6A58DB0")]
	private TextGenerationSettings ValidatedSettings(TextGenerationSettings settings)
	{
		return default(TextGenerationSettings);
	}

	[Token(Token = "0x600000A")]
	[Address(RVA = "0x6A59190", Offset = "0x6A58190", VA = "0x6A59190")]
	public void Invalidate()
	{
	}

	[Token(Token = "0x600000B")]
	[Address(RVA = "0x6A591A0", Offset = "0x6A581A0", VA = "0x6A591A0")]
	public void GetCharacters(List<UICharInfo> characters)
	{
	}

	[Token(Token = "0x600000C")]
	[Address(RVA = "0x6A59260", Offset = "0x6A58260", VA = "0x6A59260")]
	public void GetLines(List<UILineInfo> lines)
	{
	}

	[Token(Token = "0x600000D")]
	[Address(RVA = "0x6A59320", Offset = "0x6A58320", VA = "0x6A59320")]
	public void GetVertices(List<UIVertex> vertices)
	{
	}

	[Token(Token = "0x600000E")]
	[Address(RVA = "0x6A593E0", Offset = "0x6A583E0", VA = "0x6A593E0")]
	public float GetPreferredWidth(string str, TextGenerationSettings settings)
	{
		return default(float);
	}

	[Token(Token = "0x600000F")]
	[Address(RVA = "0x6A59780", Offset = "0x6A58780", VA = "0x6A59780")]
	public float GetPreferredHeight(string str, TextGenerationSettings settings)
	{
		return default(float);
	}

	[Token(Token = "0x6000010")]
	[Address(RVA = "0x6A59980", Offset = "0x6A58980", VA = "0x6A59980")]
	public bool PopulateWithErrors(string str, TextGenerationSettings settings, GameObject context)
	{
		return default(bool);
	}

	[Token(Token = "0x6000011")]
	[Address(RVA = "0x6A595E0", Offset = "0x6A585E0", VA = "0x6A595E0")]
	public bool Populate(string str, TextGenerationSettings settings)
	{
		return default(bool);
	}

	[Token(Token = "0x6000012")]
	[Address(RVA = "0x6A59C50", Offset = "0x6A58C50", VA = "0x6A59C50")]
	private TextGenerationError PopulateWithError(string str, TextGenerationSettings settings)
	{
		return default(TextGenerationError);
	}

	[Token(Token = "0x6000013")]
	[Address(RVA = "0x6A59D20", Offset = "0x6A58D20", VA = "0x6A59D20")]
	private TextGenerationError PopulateAlways(string str, TextGenerationSettings settings)
	{
		return default(TextGenerationError);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001A")]
	[Address(RVA = "0x6A58B30", Offset = "0x6A57B30", VA = "0x6A58B30")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern IntPtr Internal_Create();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600001B")]
	[Address(RVA = "0x6A58CC0", Offset = "0x6A57CC0", VA = "0x6A58CC0")]
	[UnityEngine.Bindings.NativeMethod(IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr ptr);

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x6A5A400", Offset = "0x6A59400", VA = "0x6A5A400")]
	internal bool Populate_Internal(string str, Font font, Color color, int fontSize, float scaleFactor, float lineSpacing, FontStyle style, bool richText, bool resizeTextForBestFit, int resizeTextMinSize, int resizeTextMaxSize, int verticalOverFlow, int horizontalOverflow, bool updateBounds, TextAnchor anchor, float extentsX, float extentsY, float pivotX, float pivotY, bool generateOutOfBounds, bool alignByGeometry, out uint error)
	{
		return default(bool);
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x6A5A010", Offset = "0x6A59010", VA = "0x6A5A010")]
	internal bool Populate_Internal(string str, Font font, Color color, int fontSize, float scaleFactor, float lineSpacing, FontStyle style, bool richText, bool resizeTextForBestFit, int resizeTextMinSize, int resizeTextMaxSize, VerticalWrapMode verticalOverFlow, HorizontalWrapMode horizontalOverflow, bool updateBounds, TextAnchor anchor, Vector2 extents, Vector2 pivot, bool generateOutOfBounds, bool alignByGeometry, out TextGenerationError error)
	{
		return default(bool);
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x6A59380", Offset = "0x6A58380", VA = "0x6A59380")]
	[UnityEngine.Bindings.NativeThrows]
	private void GetVerticesInternal(object vertices)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x6A59200", Offset = "0x6A58200", VA = "0x6A59200")]
	[UnityEngine.Bindings.NativeThrows]
	private void GetCharactersInternal(object characters)
	{
	}

	[Token(Token = "0x6000020")]
	[Address(RVA = "0x6A592C0", Offset = "0x6A582C0", VA = "0x6A592C0")]
	[UnityEngine.Bindings.NativeThrows]
	private void GetLinesInternal(object lines)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000021")]
	[Address(RVA = "0x6A5A300", Offset = "0x6A59300", VA = "0x6A5A300")]
	private static extern void get_rectExtents_Injected(IntPtr _unity_self, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000022")]
	[Address(RVA = "0x6A5A340", Offset = "0x6A59340", VA = "0x6A5A340")]
	private static extern int get_characterCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000023")]
	[Address(RVA = "0x6A5A3D0", Offset = "0x6A593D0", VA = "0x6A5A3D0")]
	private static extern int get_lineCount_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000024")]
	[Address(RVA = "0x6A5A6F0", Offset = "0x6A596F0", VA = "0x6A5A6F0")]
	private static extern bool Populate_Internal_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper str, IntPtr font, [In] ref Color color, int fontSize, float scaleFactor, float lineSpacing, FontStyle style, bool richText, bool resizeTextForBestFit, int resizeTextMinSize, int resizeTextMaxSize, int verticalOverFlow, int horizontalOverflow, bool updateBounds, TextAnchor anchor, float extentsX, float extentsY, float pivotX, float pivotY, bool generateOutOfBounds, bool alignByGeometry, out uint error);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000025")]
	[Address(RVA = "0x6A5A7A0", Offset = "0x6A597A0", VA = "0x6A5A7A0")]
	private static extern void GetVerticesInternal_Injected(IntPtr _unity_self, object vertices);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000026")]
	[Address(RVA = "0x6A5A7E0", Offset = "0x6A597E0", VA = "0x6A5A7E0")]
	private static extern void GetCharactersInternal_Injected(IntPtr _unity_self, object characters);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000027")]
	[Address(RVA = "0x6A5A820", Offset = "0x6A59820", VA = "0x6A5A820")]
	private static extern void GetLinesInternal_Injected(IntPtr _unity_self, object lines);
}
