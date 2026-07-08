using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.TextCore.Text;

[Token(Token = "0x2000033")]
internal class TextHandle
{
	[Token(Token = "0x4000261")]
	[FieldOffset(Offset = "0x0")]
	internal static TextGenerationSettings s_Settings;

	[Token(Token = "0x4000263")]
	[FieldOffset(Offset = "0x18")]
	private Rect screenRect;

	[Token(Token = "0x4000264")]
	[FieldOffset(Offset = "0x28")]
	private float lineHeightDefault;

	[Token(Token = "0x4000265")]
	[FieldOffset(Offset = "0x2C")]
	private bool isPlaceholder;

	[Token(Token = "0x4000266")]
	[FieldOffset(Offset = "0x2D")]
	private bool m_IsCached;

	[Token(Token = "0x4000267")]
	[FieldOffset(Offset = "0x30")]
	private LinkedListNode<TextInfo> m_TextInfoNode;

	[Token(Token = "0x4000268")]
	[FieldOffset(Offset = "0x8")]
	private static LinkedList<TextInfo> s_TextInfoPool;

	[Token(Token = "0x4000269")]
	[FieldOffset(Offset = "0x10")]
	private static TextInfo s_TextInfoCommon;

	[Token(Token = "0x400026A")]
	[FieldOffset(Offset = "0x18")]
	private static double s_MinTimeInCache;

	[Token(Token = "0x400026B")]
	[FieldOffset(Offset = "0x38")]
	internal int m_PreviousGenerationSettingsHash;

	[Token(Token = "0x400026C")]
	[FieldOffset(Offset = "0x3C")]
	private bool isDirty;

	[Token(Token = "0x1700003A")]
	internal Vector2 preferredSize
	{
		[Token(Token = "0x6000160")]
		[Address(RVA = "0x4BB9A30", Offset = "0x4BB9A30", VA = "0x4BB9A30")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x4BB9A40", Offset = "0x4BB9A40", VA = "0x4BB9A40")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	internal static TextInfo textInfoCommon
	{
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x4BB9A50", Offset = "0x4BB9A50", VA = "0x4BB9A50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003C")]
	internal TextInfo textInfo
	{
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x4BB9AC0", Offset = "0x4BB9AC0", VA = "0x4BB9AC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003D")]
	public bool IsPlaceholder
	{
		[Token(Token = "0x600017A")]
		[Address(RVA = "0x4BBEFE0", Offset = "0x4BBEFE0", VA = "0x4BBEFE0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x4BB9990", Offset = "0x4BB9990", VA = "0x4BB9990")]
	public TextHandle()
	{
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x4BB99A0", Offset = "0x4BB99A0", VA = "0x4BB99A0", Slot = "1")]
	~TextHandle()
	{
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x4BB9B70", Offset = "0x4BB9B70", VA = "0x4BB9B70", Slot = "4")]
	public virtual void AddTextInfoToCache()
	{
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x4BBA830", Offset = "0x4BBA830", VA = "0x4BBA830", Slot = "5")]
	public virtual void RemoveTextInfoFromCache()
	{
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x4BB9E40", Offset = "0x4BB9E40", VA = "0x4BB9E40")]
	private void RefreshCaching()
	{
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x4BB9FE0", Offset = "0x4BB9FE0", VA = "0x4BB9FE0")]
	private void RecycleTextInfoFromCache()
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x4BBA5E0", Offset = "0x4BBA5E0", VA = "0x4BBA5E0")]
	public void SetDirty()
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x4BBAB00", Offset = "0x4BBAB00", VA = "0x4BBAB00")]
	public bool IsDirty(TextGenerationSettings settings)
	{
		return default(bool);
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x4BBAB40", Offset = "0x4BBAB40", VA = "0x4BBAB40")]
	public Vector2 GetCursorPositionFromStringIndexUsingCharacterHeight(int index, bool inverseYAxis = true)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x4BBB0F0", Offset = "0x4BBB0F0", VA = "0x4BBB0F0")]
	public Vector2 GetCursorPositionFromStringIndexUsingLineHeight(int index, bool useXAdvance = false, bool inverseYAxis = true)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x4BBB7D0", Offset = "0x4BBB7D0", VA = "0x4BBB7D0")]
	public int GetCursorIndexFromPosition(Vector2 position, bool inverseYAxis = true)
	{
		return default(int);
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x4BBC860", Offset = "0x4BBC860", VA = "0x4BBC860")]
	public int LineDownCharacterPosition(int originalPos)
	{
		return default(int);
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x4BBCFB0", Offset = "0x4BBCFB0", VA = "0x4BBCFB0")]
	public int LineUpCharacterPosition(int originalPos)
	{
		return default(int);
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x4BBBA50", Offset = "0x4BBBA50", VA = "0x4BBBA50")]
	public int FindNearestLine(Vector2 position)
	{
		return default(int);
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x4BBBD10", Offset = "0x4BBBD10", VA = "0x4BBBD10")]
	public int FindNearestCharacterOnLine(Vector2 position, int line, bool visibleOnly)
	{
		return default(int);
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x4BBD7C0", Offset = "0x4BBD7C0", VA = "0x4BBD7C0")]
	public int FindIntersectingLink(Vector3 position, bool inverseYAxis = true)
	{
		return default(int);
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x4BBE160", Offset = "0x4BBE160", VA = "0x4BBE160")]
	public int GetCorrespondingStringIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x4BBE370", Offset = "0x4BBE370", VA = "0x4BBE370")]
	public LineInfo GetLineInfoFromCharacterIndex(int index)
	{
		return default(LineInfo);
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x4BBD5F0", Offset = "0x4BBD5F0", VA = "0x4BBD5F0")]
	private static bool PointIntersectRectangle(Vector3 m, Vector3 a, Vector3 b, Vector3 c, Vector3 d)
	{
		return default(bool);
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x4BBD6C0", Offset = "0x4BBD6C0", VA = "0x4BBD6C0")]
	private static float DistanceToLine(Vector3 a, Vector3 b, Vector3 point)
	{
		return default(float);
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x4BBE4D0", Offset = "0x4BBE4D0", VA = "0x4BBE4D0")]
	public int GetLineNumber(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x4BBE790", Offset = "0x4BBE790", VA = "0x4BBE790")]
	public float GetLineHeight(int lineNumber)
	{
		return default(float);
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x4BBEA50", Offset = "0x4BBEA50", VA = "0x4BBEA50")]
	public float GetLineHeightFromCharacterIndex(int index)
	{
		return default(float);
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x4BBED10", Offset = "0x4BBED10", VA = "0x4BBED10")]
	public float GetCharacterHeightFromIndex(int index)
	{
		return default(float);
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x4BBEFF0", Offset = "0x4BBEFF0", VA = "0x4BBEFF0")]
	public bool IsElided()
	{
		return default(bool);
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x4BBF1E0", Offset = "0x4BBF1E0", VA = "0x4BBF1E0")]
	public string Substring(int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x4BBF570", Offset = "0x4BBF570", VA = "0x4BBF570")]
	public int IndexOf(char value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x4BBF8A0", Offset = "0x4BBF8A0", VA = "0x4BBF8A0")]
	public int LastIndexOf(char value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x4BBFAD0", Offset = "0x4BBFAD0", VA = "0x4BBFAD0")]
	protected void UpdatePreferredValues(TextGenerationSettings tgs)
	{
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x4BBA5F0", Offset = "0x4BBA5F0", VA = "0x4BBA5F0")]
	protected TextInfo Update(TextGenerationSettings tgs)
	{
		return null;
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x4BBFD40", Offset = "0x4BBFD40", VA = "0x4BBFD40")]
	internal void UpdatePreferredSize(TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x4BBFB90", Offset = "0x4BBFB90", VA = "0x4BBFB90")]
	internal static float GetLineHeightDefault(TextGenerationSettings settings)
	{
		return default(float);
	}
}
