// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextHandle
// Update status: CHANGED in this game update
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
		[Address(RVA = "0x3051D60", Offset = "0x3050360", VA = "0x183051D60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000079")]
	internal static TextGenerator[] generators
	{
		[Token(Token = "0x60002BF")]
		[Address(RVA = "0x3051B40", Offset = "0x3050140", VA = "0x183051B40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007A")]
	internal static TextInfo[] textInfosCommon
	{
		[Token(Token = "0x60002C0")]
		[Address(RVA = "0x30524F0", Offset = "0x3050AF0", VA = "0x1830524F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007B")]
	internal static TextInfo textInfoCommon
	{
		[Token(Token = "0x60002C2")]
		[Address(RVA = "0x3052220", Offset = "0x3050820", VA = "0x183052220")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007C")]
	private static TextGenerator generator
	{
		[Token(Token = "0x60002C3")]
		[Address(RVA = "0x3051930", Offset = "0x304FF30", VA = "0x183051930")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007D")]
	internal static TextGenerationSettings settings
	{
		[Token(Token = "0x60002C4")]
		[Address(RVA = "0x3051F30", Offset = "0x3050530", VA = "0x183051F30")]
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
		[Address(RVA = "0x3051D10", Offset = "0x3050310", VA = "0x183051D10")]
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
		[Address(RVA = "0x3052140", Offset = "0x3050740", VA = "0x183052140")]
		get
		{
			return default(IntPtr);
		}
		[Token(Token = "0x60002CB")]
		[Address(RVA = "0x3052710", Offset = "0x3050D10", VA = "0x183052710")]
		set
		{
		}
	}

	[Token(Token = "0x17000080")]
	internal LinkedListNode<TextCacheEntry> TextInfoNode
	{
		[Token(Token = "0x60002CC")]
		[Address(RVA = "0x1537220", Offset = "0x1535820", VA = "0x181537220")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60002CD")]
		[Address(RVA = "0x1537500", Offset = "0x1535B00", VA = "0x181537500")]
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
		[Address(RVA = "0x30518A0", Offset = "0x304FEA0", VA = "0x1830518A0")]
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
		[Address(RVA = "0x3051630", Offset = "0x304FC30", VA = "0x183051630")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002D0")]
		[Address(RVA = "0x30526C0", Offset = "0x3050CC0", VA = "0x1830526C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal bool IsCachedPermanentTextCore
	{
		[Token(Token = "0x60002D1")]
		[Address(RVA = "0x30516C0", Offset = "0x304FCC0", VA = "0x1830516C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002D2")]
		[Address(RVA = "0x30526E0", Offset = "0x3050CE0", VA = "0x1830526E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000084")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal bool IsCachedTemporary
	{
		[Token(Token = "0x60002D3")]
		[Address(RVA = "0x30518B0", Offset = "0x304FEB0", VA = "0x1830518B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60002D4")]
		[Address(RVA = "0x3052700", Offset = "0x3050D00", VA = "0x183052700")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000085")]
	internal bool useAdvancedText
	{
		[Token(Token = "0x60002D5")]
		[Address(RVA = "0x209B220", Offset = "0x2099820", VA = "0x18209B220")]
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
		[Address(RVA = "0x30518C0", Offset = "0x304FEC0", VA = "0x1830518C0")]
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
		[Address(RVA = "0x3052430", Offset = "0x3050A30", VA = "0x183052430")]
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
		[Address(RVA = "0x2602BF0", Offset = "0x26011F0", VA = "0x182602BF0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x304E950", Offset = "0x304CF50", VA = "0x18304E950", Slot = "1")]
	~TextHandle()
	{
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x304FA70", Offset = "0x304E070", VA = "0x18304FA70")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal static void InitThreadArrays()
	{
	}

	[Token(Token = "0x60002C1")]
	private static void InitArray<T>(ref T[] array, Func<T> createInstance)
	{
	}

	[Token(Token = "0x60002C6")]
	[Address(RVA = "0x3050240", Offset = "0x304E840", VA = "0x183050240")]
	protected float PixelsToPoints(float pixel)
	{
		return default(float);
	}

	[Token(Token = "0x60002C7")]
	[Address(RVA = "0x3050270", Offset = "0x304E870", VA = "0x183050270")]
	protected Vector2 PointsToPixels(Vector2 point)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60002C8")]
	[Address(RVA = "0x30501F0", Offset = "0x304E7F0", VA = "0x1830501F0")]
	protected Vector2 PixelsToPoints(Vector2 pixel)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60002C9")]
	[Address(RVA = "0x20CF430", Offset = "0x20CDA30", VA = "0x1820CF430", Slot = "4")]
	protected virtual float GetPixelsPerPoint()
	{
		return default(float);
	}

	[Token(Token = "0x60002D7")]
	[Address(RVA = "0x304E7A0", Offset = "0x304CDA0", VA = "0x18304E7A0", Slot = "5")]
	public virtual void AddToPermanentCacheAndGenerateMesh()
	{
	}

	[Token(Token = "0x60002D8")]
	[Address(RVA = "0x304E710", Offset = "0x304CD10", VA = "0x18304E710")]
	public void AddTextInfoToTemporaryCache(int hashCode)
	{
	}

	[Token(Token = "0x60002D9")]
	[Address(RVA = "0x30506A0", Offset = "0x304ECA0", VA = "0x1830506A0")]
	public void RemoveFromTemporaryCache()
	{
	}

	[Token(Token = "0x60002DA")]
	[Address(RVA = "0x3050620", Offset = "0x304EC20", VA = "0x183050620")]
	public void RemoveFromPermanentCache()
	{
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x30505B0", Offset = "0x304EBB0", VA = "0x1830505B0")]
	public void RemoveFromPermanentCacheTextCore()
	{
	}

	[Token(Token = "0x60002DC")]
	[Address(RVA = "0x30504C0", Offset = "0x304EAC0", VA = "0x1830504C0", Slot = "6")]
	public virtual void RemoveFromPermanentCacheATG()
	{
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x3050C60", Offset = "0x304F260", VA = "0x183050C60")]
	public static void UpdateCurrentFrame()
	{
	}

	[Token(Token = "0x60002DF")]
	[Address(RVA = "0x3050BC0", Offset = "0x304F1C0", VA = "0x183050BC0", Slot = "7")]
	public virtual void SetDirty()
	{
	}

	[Token(Token = "0x60002E0")]
	[Address(RVA = "0x304FE60", Offset = "0x304E460", VA = "0x18304FE60")]
	public bool IsDirty(int hashCode)
	{
		return default(bool);
	}

	[Token(Token = "0x60002E2")]
	[Address(RVA = "0x3050FD0", Offset = "0x304F5D0", VA = "0x183050FD0")]
	protected void UpdatePreferredValues(TextGenerationSettings tgs)
	{
	}

	[Token(Token = "0x60002E3")]
	[Address(RVA = "0x3051410", Offset = "0x304FA10", VA = "0x183051410")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal TextInfo Update()
	{
		return null;
	}

	[Token(Token = "0x60002E4")]
	[Address(RVA = "0x3051070", Offset = "0x304F670", VA = "0x183051070")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal TextInfo UpdateWithHash(int hashCode)
	{
		return null;
	}

	[Token(Token = "0x60002E5")]
	[Address(RVA = "0x30502C0", Offset = "0x304E8C0", VA = "0x1830502C0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal bool PrepareFontAsset()
	{
		return default(bool);
	}

	[Token(Token = "0x60002E6")]
	[Address(RVA = "0x3050CC0", Offset = "0x304F2C0", VA = "0x183050CC0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule" })]
	internal void UpdatePreferredSize()
	{
	}

	[Token(Token = "0x60002E7")]
	[Address(RVA = "0x304E870", Offset = "0x304CE70", VA = "0x18304E870")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
	internal static float ConvertPixelUnitsToTextCoreRelativeUnits(float fontSize, FontAsset fontAsset)
	{
		return default(float);
	}

	[Token(Token = "0x60002E8")]
	[Address(RVA = "0x304F3E0", Offset = "0x304D9E0", VA = "0x18304F3E0")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule" })]
	internal static float GetLineHeightDefault(TextGenerationSettings settings)
	{
		return default(float);
	}

	[Token(Token = "0x60002E9")]
	[Address(RVA = "0x304EDC0", Offset = "0x304D3C0", VA = "0x18304EDC0", Slot = "9")]
	public virtual Vector2 GetCursorPositionFromStringIndexUsingCharacterHeight(int index, bool inverseYAxis = true)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60002EA")]
	[Address(RVA = "0x304EEF0", Offset = "0x304D4F0", VA = "0x18304EEF0")]
	public Vector2 GetCursorPositionFromStringIndexUsingLineHeight(int index, bool useXAdvance = false, bool inverseYAxis = true)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60002EB")]
	[Address(RVA = "0x304F180", Offset = "0x304D780", VA = "0x18304F180")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule", "UnityEngine.UIElementsModule" })]
	internal Rect[] GetHighlightRectangles(int cursorIndex, int selectIndex)
	{
		return null;
	}

	[Token(Token = "0x60002EC")]
	[Address(RVA = "0x304ECC0", Offset = "0x304D2C0", VA = "0x18304ECC0")]
	public int GetCursorIndexFromPosition(Vector2 position, bool inverseYAxis = true)
	{
		return default(int);
	}

	[Token(Token = "0x60002ED")]
	[Address(RVA = "0x3050010", Offset = "0x304E610", VA = "0x183050010")]
	public int LineDownCharacterPosition(int originalLogicalPos)
	{
		return default(int);
	}

	[Token(Token = "0x60002EE")]
	[Address(RVA = "0x30500A0", Offset = "0x304E6A0", VA = "0x1830500A0")]
	public int LineUpCharacterPosition(int originalLogicalPos)
	{
		return default(int);
	}

	[Token(Token = "0x60002EF")]
	[Address(RVA = "0x304EA80", Offset = "0x304D080", VA = "0x18304EA80")]
	public int FindIntersectingLink(Vector3 position, bool inverseYAxis = true)
	{
		return default(int);
	}

	[Token(Token = "0x60002F0")]
	[Address(RVA = "0x304EC60", Offset = "0x304D260", VA = "0x18304EC60")]
	public int GetCorrespondingStringIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60002F1")]
	[Address(RVA = "0x304F720", Offset = "0x304DD20", VA = "0x18304F720")]
	public LineInfo GetLineInfoFromCharacterIndex(int index)
	{
		return default(LineInfo);
	}

	[Token(Token = "0x60002F2")]
	[Address(RVA = "0x304F850", Offset = "0x304DE50", VA = "0x18304F850")]
	public int GetLineNumber(int index)
	{
		return default(int);
	}

	[Token(Token = "0x60002F3")]
	[Address(RVA = "0x304F660", Offset = "0x304DC60", VA = "0x18304F660")]
	public float GetLineHeight(int lineNumber)
	{
		return default(float);
	}

	[Token(Token = "0x60002F4")]
	[Address(RVA = "0x304F5A0", Offset = "0x304DBA0", VA = "0x18304F5A0")]
	public float GetLineHeightFromCharacterIndex(int index)
	{
		return default(float);
	}

	[Token(Token = "0x60002F5")]
	[Address(RVA = "0x304EBA0", Offset = "0x304D1A0", VA = "0x18304EBA0")]
	public float GetCharacterHeightFromIndex(int index)
	{
		return default(float);
	}

	[Token(Token = "0x60002F6")]
	[Address(RVA = "0x3050BD0", Offset = "0x304F1D0", VA = "0x183050BD0")]
	public string Substring(int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x60002F7")]
	[Address(RVA = "0x3050400", Offset = "0x304EA00", VA = "0x183050400")]
	public int PreviousCodePointIndex(int currentIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002F8")]
	[Address(RVA = "0x3050130", Offset = "0x304E730", VA = "0x183050130")]
	public int NextCodePointIndex(int currentIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002F9")]
	[Address(RVA = "0x304F8E0", Offset = "0x304DEE0", VA = "0x18304F8E0")]
	public int GetStartOfNextWord(int currentIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002FA")]
	[Address(RVA = "0x304F020", Offset = "0x304D620", VA = "0x18304F020")]
	public int GetEndOfPreviousWord(int currentIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002FB")]
	[Address(RVA = "0x304F0E0", Offset = "0x304D6E0", VA = "0x18304F0E0")]
	public int GetFirstCharacterIndexOnLine(int currentIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002FC")]
	[Address(RVA = "0x304F340", Offset = "0x304D940", VA = "0x18304F340")]
	public int GetLastCharacterIndexOnLine(int currentIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002FD")]
	[Address(RVA = "0x304F9A0", Offset = "0x304DFA0", VA = "0x18304F9A0")]
	public int IndexOf(char value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x304FF40", Offset = "0x304E540", VA = "0x18304FF40")]
	public int LastIndexOf(char value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x30507F0", Offset = "0x304EDF0", VA = "0x1830507F0")]
	public void SelectCurrentWord(int index, ref int cursorIndex, ref int selectIndex)
	{
	}

	[Token(Token = "0x6000300")]
	[Address(RVA = "0x3050710", Offset = "0x304ED10", VA = "0x183050710")]
	public void SelectCurrentParagraph(ref int cursorIndex, ref int selectIndex)
	{
	}

	[Token(Token = "0x6000301")]
	[Address(RVA = "0x3050A40", Offset = "0x304F040", VA = "0x183050A40")]
	public void SelectToPreviousParagraph(ref int cursorIndex)
	{
	}

	[Token(Token = "0x6000302")]
	[Address(RVA = "0x3050980", Offset = "0x304EF80", VA = "0x183050980")]
	public void SelectToNextParagraph(ref int cursorIndex)
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x3050B00", Offset = "0x304F100", VA = "0x183050B00")]
	public void SelectToStartOfParagraph(ref int cursorIndex)
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x30508C0", Offset = "0x304EEC0", VA = "0x1830508C0")]
	public void SelectToEndOfParagraph(ref int cursorIndex)
	{
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x795DE0", Offset = "0x7943E0", VA = "0x180795DE0", Slot = "10")]
	internal virtual bool IsAdvancedTextEnabledForElement()
	{
		return default(bool);
	}

	[Token(Token = "0x6000306")]
	[Address(RVA = "0x304FE90", Offset = "0x304E490", VA = "0x18304FE90")]
	[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.IMGUIModule" })]
	internal bool IsMainDirectionRTL()
	{
		return default(bool);
	}

	[Token(Token = "0x6000307")]
	[Address(RVA = "0x30515B0", Offset = "0x304FBB0", VA = "0x1830515B0")]
	public TextHandle()
	{
	}
}
