// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.TextCore.Text.TextHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4EE1360", Offset = "0x4EE1360", VA = "0x4EE1360")]
		[CompilerGenerated]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x4EE1370", Offset = "0x4EE1370", VA = "0x4EE1370")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700003B")]
	internal static TextInfo textInfoCommon
	{
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x4EE1380", Offset = "0x4EE1380", VA = "0x4EE1380")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003C")]
	internal TextInfo textInfo
	{
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x4EE13F0", Offset = "0x4EE13F0", VA = "0x4EE13F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700003D")]
	public bool IsPlaceholder
	{
		[Token(Token = "0x600017A")]
		[Address(RVA = "0x4EE6910", Offset = "0x4EE6910", VA = "0x4EE6910")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600015E")]
	[Address(RVA = "0x4EE12C0", Offset = "0x4EE12C0", VA = "0x4EE12C0")]
	public TextHandle()
	{
	}

	[Token(Token = "0x600015F")]
	[Address(RVA = "0x4EE12D0", Offset = "0x4EE12D0", VA = "0x4EE12D0", Slot = "1")]
	~TextHandle()
	{
	}

	[Token(Token = "0x6000164")]
	[Address(RVA = "0x4EE14A0", Offset = "0x4EE14A0", VA = "0x4EE14A0", Slot = "4")]
	public virtual void AddTextInfoToCache()
	{
	}

	[Token(Token = "0x6000165")]
	[Address(RVA = "0x4EE2160", Offset = "0x4EE2160", VA = "0x4EE2160", Slot = "5")]
	public virtual void RemoveTextInfoFromCache()
	{
	}

	[Token(Token = "0x6000166")]
	[Address(RVA = "0x4EE1770", Offset = "0x4EE1770", VA = "0x4EE1770")]
	private void RefreshCaching()
	{
	}

	[Token(Token = "0x6000167")]
	[Address(RVA = "0x4EE1910", Offset = "0x4EE1910", VA = "0x4EE1910")]
	private void RecycleTextInfoFromCache()
	{
	}

	[Token(Token = "0x6000168")]
	[Address(RVA = "0x4EE1F10", Offset = "0x4EE1F10", VA = "0x4EE1F10")]
	public void SetDirty()
	{
	}

	[Token(Token = "0x6000169")]
	[Address(RVA = "0x4EE2430", Offset = "0x4EE2430", VA = "0x4EE2430")]
	public bool IsDirty(TextGenerationSettings settings)
	{
		return default(bool);
	}

	[Token(Token = "0x600016A")]
	[Address(RVA = "0x4EE2470", Offset = "0x4EE2470", VA = "0x4EE2470")]
	public Vector2 GetCursorPositionFromStringIndexUsingCharacterHeight(int index, bool inverseYAxis = true)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600016B")]
	[Address(RVA = "0x4EE2A20", Offset = "0x4EE2A20", VA = "0x4EE2A20")]
	public Vector2 GetCursorPositionFromStringIndexUsingLineHeight(int index, bool useXAdvance = false, bool inverseYAxis = true)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600016C")]
	[Address(RVA = "0x4EE3100", Offset = "0x4EE3100", VA = "0x4EE3100")]
	public int GetCursorIndexFromPosition(Vector2 position, bool inverseYAxis = true)
	{
		return default(int);
	}

	[Token(Token = "0x600016D")]
	[Address(RVA = "0x4EE4190", Offset = "0x4EE4190", VA = "0x4EE4190")]
	public int LineDownCharacterPosition(int originalPos)
	{
		return default(int);
	}

	[Token(Token = "0x600016E")]
	[Address(RVA = "0x4EE48E0", Offset = "0x4EE48E0", VA = "0x4EE48E0")]
	public int LineUpCharacterPosition(int originalPos)
	{
		return default(int);
	}

	[Token(Token = "0x600016F")]
	[Address(RVA = "0x4EE3380", Offset = "0x4EE3380", VA = "0x4EE3380")]
	public int FindNearestLine(Vector2 position)
	{
		return default(int);
	}

	[Token(Token = "0x6000170")]
	[Address(RVA = "0x4EE3640", Offset = "0x4EE3640", VA = "0x4EE3640")]
	public int FindNearestCharacterOnLine(Vector2 position, int line, bool visibleOnly)
	{
		return default(int);
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x4EE50F0", Offset = "0x4EE50F0", VA = "0x4EE50F0")]
	public int FindIntersectingLink(Vector3 position, bool inverseYAxis = true)
	{
		return default(int);
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x4EE5A90", Offset = "0x4EE5A90", VA = "0x4EE5A90")]
	public int GetCorrespondingStringIndex(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x4EE5CA0", Offset = "0x4EE5CA0", VA = "0x4EE5CA0")]
	public LineInfo GetLineInfoFromCharacterIndex(int index)
	{
		return default(LineInfo);
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x4EE4F20", Offset = "0x4EE4F20", VA = "0x4EE4F20")]
	private static bool PointIntersectRectangle(Vector3 m, Vector3 a, Vector3 b, Vector3 c, Vector3 d)
	{
		return default(bool);
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x4EE4FF0", Offset = "0x4EE4FF0", VA = "0x4EE4FF0")]
	private static float DistanceToLine(Vector3 a, Vector3 b, Vector3 point)
	{
		return default(float);
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x4EE5E00", Offset = "0x4EE5E00", VA = "0x4EE5E00")]
	public int GetLineNumber(int index)
	{
		return default(int);
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x4EE60C0", Offset = "0x4EE60C0", VA = "0x4EE60C0")]
	public float GetLineHeight(int lineNumber)
	{
		return default(float);
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x4EE6380", Offset = "0x4EE6380", VA = "0x4EE6380")]
	public float GetLineHeightFromCharacterIndex(int index)
	{
		return default(float);
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x4EE6640", Offset = "0x4EE6640", VA = "0x4EE6640")]
	public float GetCharacterHeightFromIndex(int index)
	{
		return default(float);
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x4EE6920", Offset = "0x4EE6920", VA = "0x4EE6920")]
	public bool IsElided()
	{
		return default(bool);
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x4EE6B10", Offset = "0x4EE6B10", VA = "0x4EE6B10")]
	public string Substring(int startIndex, int length)
	{
		return null;
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x4EE6EA0", Offset = "0x4EE6EA0", VA = "0x4EE6EA0")]
	public int IndexOf(char value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x4EE71D0", Offset = "0x4EE71D0", VA = "0x4EE71D0")]
	public int LastIndexOf(char value, int startIndex)
	{
		return default(int);
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x4EE7400", Offset = "0x4EE7400", VA = "0x4EE7400")]
	protected void UpdatePreferredValues(TextGenerationSettings tgs)
	{
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x4EE1F20", Offset = "0x4EE1F20", VA = "0x4EE1F20")]
	protected TextInfo Update(TextGenerationSettings tgs)
	{
		return null;
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x4EE7670", Offset = "0x4EE7670", VA = "0x4EE7670")]
	internal void UpdatePreferredSize(TextGenerationSettings generationSettings)
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x4EE74C0", Offset = "0x4EE74C0", VA = "0x4EE74C0")]
	internal static float GetLineHeightDefault(TextGenerationSettings settings)
	{
		return default(float);
	}
}
