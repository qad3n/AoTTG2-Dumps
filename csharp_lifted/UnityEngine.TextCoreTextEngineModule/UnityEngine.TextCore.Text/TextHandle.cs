// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x200005E")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule", "UnityEditor.QuickSearchModule" })]
[DebuggerDisplay("{settings.text}")]
internal class TextHandle
{
	[Token(Token = "0x200005F")]
	[Flags]
	private protected enum TextHandleFlags
	{
		[Token(Token = "0x40003AB")]
		IsCachedPermanentTextCore = 2,
		[Token(Token = "0x40003AC")]
		IsCachedPermanentATG = 4
	}

	[Token(Token = "0x4000398")]
	[FieldOffset(Offset = "0x0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static TextHandleTemporaryCache s_TemporaryCache;

	[Token(Token = "0x4000399")]
	[FieldOffset(Offset = "0x8")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static TextHandlePermanentCache s_PermanentCache;

	[Token(Token = "0x400039A")]
	[FieldOffset(Offset = "0x10")]
	private static TextGenerationSettings[] s_Settings;

	[Token(Token = "0x400039B")]
	[FieldOffset(Offset = "0x18")]
	private static TextGenerator[] s_Generators;

	[Token(Token = "0x400039C")]
	[FieldOffset(Offset = "0x20")]
	private static TextInfo[] s_TextInfosCommon;

	[Token(Token = "0x400039D")]
	[FieldOffset(Offset = "0x10")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal NativeTextGenerationSettings nativeSettings;

	[Token(Token = "0x400039E")]
	[FieldOffset(Offset = "0x80")]
	protected Vector2 pixelPreferedSize;

	[Token(Token = "0x400039F")]
	[FieldOffset(Offset = "0x88")]
	private Rect m_ScreenRect;

	[Token(Token = "0x40003A0")]
	[FieldOffset(Offset = "0x98")]
	private float m_LineHeightDefault;

	[Token(Token = "0x40003A1")]
	[FieldOffset(Offset = "0x9C")]
	private bool m_IsPlaceholder;

	[Token(Token = "0x40003A2")]
	[FieldOffset(Offset = "0x9D")]
	protected bool m_IsElided;

	[Token(Token = "0x40003A3")]
	[FieldOffset(Offset = "0xA0")]
	private int m_CreateGenerationIteration;

	[Token(Token = "0x40003A4")]
	[FieldOffset(Offset = "0xA8")]
	private IntPtr m_TextGenerationInfo;

	[Token(Token = "0x40003A7")]
	[FieldOffset(Offset = "0xBC")]
	private protected TextHandleFlags m_TextHandleFlags;

	[Token(Token = "0x40003A8")]
	[FieldOffset(Offset = "0xC0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal int m_PreviousGenerationSettingsHash;

	[Token(Token = "0x40003A9")]
	[FieldOffset(Offset = "0xC4")]
	protected bool isDirty;

	[Token(Token = "0x17000078")]
	internal static TextGenerationSettings[] settingsArray
	{
		[Token(Token = "0x60002BE")]
		[Address(RVA = "0x6A4F390", Offset = "0x6A4E390", VA = "0x6A4F390")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000079")]
	internal static TextGenerator[] generators
	{
		[Token(Token = "0x60002BF")]
		[Address(RVA = "0x6A4F590", Offset = "0x6A4E590", VA = "0x6A4F590")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007A")]
	internal static TextInfo[] textInfosCommon
	{
		[Token(Token = "0x60002C0")]
		[Address(RVA = "0x6A4F790", Offset = "0x6A4E790", VA = "0x6A4F790")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007B")]
	internal static TextInfo textInfoCommon
	{
		[Token(Token = "0x60002C2")]
		[Address(RVA = "0x6A4F990", Offset = "0x6A4E990", VA = "0x6A4F990")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007C")]
	private static TextGenerator generator
	{
		[Token(Token = "0x60002C3")]
		[Address(RVA = "0x6A4FA00", Offset = "0x6A4EA00", VA = "0x6A4FA00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007D")]
	internal static TextGenerationSettings settings
	{
		[Token(Token = "0x60002C4")]
		[Address(RVA = "0x6A4FA70", Offset = "0x6A4EA70", VA = "0x6A4FA70")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007E")]
	internal Vector2 preferredSize
	{
		[Token(Token = "0x60002C5")]
		[Address(RVA = "0x6A4FAE0", Offset = "0x6A4EAE0", VA = "0x6A4FAE0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
		get
		{
			return default(Vector2);
		}
	}

	[Token(Token = "0x1700007F")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal IntPtr textGenerationInfo
	{
		[Token(Token = "0x60002CA")]
		[Address(RVA = "0x6A4FBC0", Offset = "0x6A4EBC0", VA = "0x6A4FBC0")]
		get
		{
			return default(IntPtr);
		}
		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x6A4FDF0", Offset = "0x6A4EDF0", VA = "0x6A4FDF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000080")]
	internal LinkedListNode<TextCacheEntry> TextInfoNode
	{
		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x6A4FEC0", Offset = "0x6A4EEC0", VA = "0x6A4FEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002CD")]
		[Address(RVA = "0x6A4FED0", Offset = "0x6A4EED0", VA = "0x6A4FED0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000081")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	protected internal bool IsCachedPermanent
	{
		[Token(Token = "0x60002CE")]
		[Address(RVA = "0x6A4FEF0", Offset = "0x6A4EEF0", VA = "0x6A4FEF0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000082")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal bool IsCachedPermanentATG
	{
		[Token(Token = "0x60002CF")]
		[Address(RVA = "0x6A4FD60", Offset = "0x6A4ED60", VA = "0x6A4FD60")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002D0")]
		[Address(RVA = "0x6A4FF00", Offset = "0x6A4EF00", VA = "0x6A4FF00")]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal bool IsCachedPermanentTextCore
	{
		[Token(Token = "0x60002D1")]
		[Address(RVA = "0x6A4FF20", Offset = "0x6A4EF20", VA = "0x6A4FF20")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002D2")]
		[Address(RVA = "0x6A500F0", Offset = "0x6A4F0F0", VA = "0x6A500F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000084")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal bool IsCachedTemporary
	{
		[Token(Token = "0x60002D3")]
		[Address(RVA = "0x6A50110", Offset = "0x6A4F110", VA = "0x6A50110")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002D4")]
		[Address(RVA = "0x6A50120", Offset = "0x6A4F120", VA = "0x6A50120")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000085")]
	internal bool useAdvancedText
	{
		[Token(Token = "0x60002D5")]
		[Address(RVA = "0x6A50130", Offset = "0x6A4F130", VA = "0x6A50130")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000086")]
	internal int characterCount
	{
		[Token(Token = "0x60002D6")]
		[Address(RVA = "0x6A50150", Offset = "0x6A4F150", VA = "0x6A50150")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000087")]
	internal TextInfo textInfo
	{
		[Token(Token = "0x60002DE")]
		[Address(RVA = "0x6A501C0", Offset = "0x6A4F1C0", VA = "0x6A501C0")]
		[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000088")]
	public virtual bool IsPlaceholder
	{
		[Token(Token = "0x60002E1")]
		[Address(RVA = "0x6A50710", Offset = "0x6A4F710", VA = "0x6A50710", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x6A4ED00", Offset = "0x6A4DD00", VA = "0x6A4ED00", Slot = "1")]
	~TextHandle()
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x6A4EF70", Offset = "0x6A4DF70", VA = "0x6A4EF70")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal static void InitThreadArrays()
	{
	}

	[Token(Token = "0x60002C1")]
	private static void InitArray<T>(ref T[] array, Func<T> createInstance)
	{
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x6A4FB50", Offset = "0x6A4EB50", VA = "0x6A4FB50")]
	protected float PixelsToPoints(float pixel)
	{
		return default(float);
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x6A4FB80", Offset = "0x6A4EB80", VA = "0x6A4FB80")]
	protected Vector2 PointsToPixels(Vector2 point)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x6A4FB20", Offset = "0x6A4EB20", VA = "0x6A4FB20")]
	protected Vector2 PixelsToPoints(Vector2 pixel)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x6A4FBB0", Offset = "0x6A4EBB0", VA = "0x6A4FBB0", Slot = "4")]
	protected virtual float GetPixelsPerPoint()
	{
		return default(float);
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x6A502F0", Offset = "0x6A4F2F0", VA = "0x6A502F0", Slot = "5")]
	public virtual void AddToPermanentCacheAndGenerateMesh()
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x6A503C0", Offset = "0x6A4F3C0", VA = "0x6A503C0")]
	public void AddTextInfoToTemporaryCache(int hashCode)
	{
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x6A4EE40", Offset = "0x6A4DE40", VA = "0x6A4EE40")]
	public void RemoveFromTemporaryCache()
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x6A4EED0", Offset = "0x6A4DED0", VA = "0x6A4EED0")]
	public void RemoveFromPermanentCache()
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x6A50440", Offset = "0x6A4F440", VA = "0x6A50440")]
	public void RemoveFromPermanentCacheTextCore()
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x6A504D0", Offset = "0x6A4F4D0", VA = "0x6A504D0", Slot = "6")]
	public virtual void RemoveFromPermanentCacheATG()
	{
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x6A50650", Offset = "0x6A4F650", VA = "0x6A50650")]
	public static void UpdateCurrentFrame()
	{
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x6A506D0", Offset = "0x6A4F6D0", VA = "0x6A506D0", Slot = "7")]
	public virtual void SetDirty()
	{
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x6A506E0", Offset = "0x6A4F6E0", VA = "0x6A506E0")]
	public bool IsDirty(int hashCode)
	{
		return default(bool);
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x6A50720", Offset = "0x6A4F720", VA = "0x6A50720")]
	protected void UpdatePreferredValues(TextGenerationSettings tgs)
	{
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x6A50890", Offset = "0x6A4F890", VA = "0x6A50890")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal TextInfo Update()
	{
		return null;
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x6A509D0", Offset = "0x6A4F9D0", VA = "0x6A509D0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal TextInfo UpdateWithHash(int hashCode)
	{
		return null;
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x6A51050", Offset = "0x6A50050", VA = "0x6A51050")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal bool PrepareFontAsset()
	{
		return default(bool);
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x6A51390", Offset = "0x6A50390", VA = "0x6A51390")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule" })]
	internal void UpdatePreferredSize()
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x6A51680", Offset = "0x6A50680", VA = "0x6A51680")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static float ConvertPixelUnitsToTextCoreRelativeUnits(float fontSize, FontAsset fontAsset)
	{
		return default(float);
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x6A50E90", Offset = "0x6A4FE90", VA = "0x6A50E90")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule" })]
	internal static float GetLineHeightDefault(TextGenerationSettings settings)
	{
		return default(float);
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x6A51750", Offset = "0x6A50750", VA = "0x6A51750", Slot = "9")]
	public virtual Vector2 GetCursorPositionFromStringIndexUsingCharacterHeight(int index, bool inverseYAxis = true)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x6A51850", Offset = "0x6A50850", VA = "0x6A51850")]
	public Vector2 GetCursorPositionFromStringIndexUsingLineHeight(int index, bool useXAdvance = false, bool inverseYAxis = true)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x6A51950", Offset = "0x6A50950", VA = "0x6A51950")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal Rect[] GetHighlightRectangles(int cursorIndex, int selectIndex)
	{
		return null;
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x6A51B00", Offset = "0x6A50B00", VA = "0x6A51B00")]
	public int GetCursorIndexFromPosition(Vector2 position, bool inverseYAxis = true)
	{
		return default(int);
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x6A51BD0", Offset = "0x6A50BD0", VA = "0x6A51BD0")]
	public int LineDownCharacterPosition(int originalLogicalPos)
	{
		return default(int);
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x6A51C50", Offset = "0x6A50C50", VA = "0x6A51C50")]
	public int LineUpCharacterPosition(int originalLogicalPos)
	{
		return default(int);
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x6A51CD0", Offset = "0x6A50CD0", VA = "0x6A51CD0")]
	public int FindIntersectingLink(Vector3 position, bool inverseYAxis = true)
	{
		return default(int);
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x6A51DB0", Offset = "0x6A50DB0", VA = "0x6A51DB0")]
	public int GetCorrespondingStringIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x6A51E00", Offset = "0x6A50E00", VA = "0x6A51E00")]
	public LineInfo GetLineInfoFromCharacterIndex(int index)
	{
		return default(LineInfo);
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x6A51F20", Offset = "0x6A50F20", VA = "0x6A51F20")]
	public int GetLineNumber(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x6A51FA0", Offset = "0x6A50FA0", VA = "0x6A51FA0")]
	public float GetLineHeight(int lineNumber)
	{
		return default(float);
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x6A52040", Offset = "0x6A51040", VA = "0x6A52040")]
	public float GetLineHeightFromCharacterIndex(int index)
	{
		return default(float);
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x6A520E0", Offset = "0x6A510E0", VA = "0x6A520E0")]
	public float GetCharacterHeightFromIndex(int index)
	{
		return default(float);
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x6A52180", Offset = "0x6A51180", VA = "0x6A52180")]
	public string Substring(int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x6A521E0", Offset = "0x6A511E0", VA = "0x6A521E0")]
	public int PreviousCodePointIndex(int currentIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x6A52290", Offset = "0x6A51290", VA = "0x6A52290")]
	public int NextCodePointIndex(int currentIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x6A52340", Offset = "0x6A51340", VA = "0x6A52340")]
	public int GetStartOfNextWord(int currentIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x6A523F0", Offset = "0x6A513F0", VA = "0x6A523F0")]
	public int GetEndOfPreviousWord(int currentIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x6A524A0", Offset = "0x6A514A0", VA = "0x6A524A0")]
	public int GetFirstCharacterIndexOnLine(int currentIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x6A52520", Offset = "0x6A51520", VA = "0x6A52520")]
	public int GetLastCharacterIndexOnLine(int currentIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x6A525A0", Offset = "0x6A515A0", VA = "0x6A525A0")]
	public int IndexOf(char value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x6A52650", Offset = "0x6A51650", VA = "0x6A52650")]
	public int LastIndexOf(char value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x6A52700", Offset = "0x6A51700", VA = "0x6A52700")]
	public void SelectCurrentWord(int index, ref int cursorIndex, ref int selectIndex)
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x6A527D0", Offset = "0x6A517D0", VA = "0x6A527D0")]
	public void SelectCurrentParagraph(ref int cursorIndex, ref int selectIndex)
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x6A52890", Offset = "0x6A51890", VA = "0x6A52890")]
	public void SelectToPreviousParagraph(ref int cursorIndex)
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x6A52950", Offset = "0x6A51950", VA = "0x6A52950")]
	public void SelectToNextParagraph(ref int cursorIndex)
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x6A52A10", Offset = "0x6A51A10", VA = "0x6A52A10")]
	public void SelectToStartOfParagraph(ref int cursorIndex)
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x6A52AD0", Offset = "0x6A51AD0", VA = "0x6A52AD0")]
	public void SelectToEndOfParagraph(ref int cursorIndex)
	{
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x6A52B90", Offset = "0x6A51B90", VA = "0x6A52B90", Slot = "10")]
	internal virtual bool IsAdvancedTextEnabledForElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x6A52BA0", Offset = "0x6A51BA0", VA = "0x6A52BA0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule" })]
	internal bool IsMainDirectionRTL()
	{
		return default(bool);
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x6A52C50", Offset = "0x6A51C50", VA = "0x6A52C50")]
	public TextHandle()
	{
	}
}
