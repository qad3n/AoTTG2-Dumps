// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GUILayoutEntry
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;
using UnityEngine.Bindings;

namespace UnityEngine;

[Token(Token = "0x2000024")]
[UnityEngine.Bindings.VisibleToOtherModules(new string[] { "UnityEngine.UIElementsModule" })]
internal class GUILayoutEntry
{
	[Token(Token = "0x40000D3")]
	[FieldOffset(Offset = "0x10")]
	public float minWidth;

	[Token(Token = "0x40000D4")]
	[FieldOffset(Offset = "0x14")]
	public float maxWidth;

	[Token(Token = "0x40000D5")]
	[FieldOffset(Offset = "0x18")]
	public float minHeight;

	[Token(Token = "0x40000D6")]
	[FieldOffset(Offset = "0x1C")]
	public float maxHeight;

	[Token(Token = "0x40000D7")]
	[FieldOffset(Offset = "0x20")]
	public Rect rect;

	[Token(Token = "0x40000D8")]
	[FieldOffset(Offset = "0x30")]
	public int stretchWidth;

	[Token(Token = "0x40000D9")]
	[FieldOffset(Offset = "0x34")]
	public int stretchHeight;

	[Token(Token = "0x40000DA")]
	[FieldOffset(Offset = "0x38")]
	public bool consideredForMargin;

	[Token(Token = "0x40000DB")]
	[FieldOffset(Offset = "0x40")]
	private GUIStyle m_Style;

	[Token(Token = "0x40000DC")]
	[FieldOffset(Offset = "0x0")]
	internal static Rect kDummyRect;

	[Token(Token = "0x40000DD")]
	[FieldOffset(Offset = "0x10")]
	protected static int indent;

	[Token(Token = "0x17000085")]
	public GUIStyle style
	{
		[Token(Token = "0x6000264")]
		[Address(RVA = "0x699E8E0", Offset = "0x699D8E0", VA = "0x699E8E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000265")]
		[Address(RVA = "0x698E210", Offset = "0x698D210", VA = "0x698E210")]
		set
		{
		}
	}

	[Token(Token = "0x17000086")]
	public virtual int marginLeft
	{
		[Token(Token = "0x6000266")]
		[Address(RVA = "0x699E8F0", Offset = "0x699D8F0", VA = "0x699E8F0", Slot = "4")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000087")]
	public virtual int marginRight
	{
		[Token(Token = "0x6000267")]
		[Address(RVA = "0x699E920", Offset = "0x699D920", VA = "0x699E920", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000088")]
	public virtual int marginTop
	{
		[Token(Token = "0x6000268")]
		[Address(RVA = "0x699E950", Offset = "0x699D950", VA = "0x699E950", Slot = "6")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000089")]
	public virtual int marginBottom
	{
		[Token(Token = "0x6000269")]
		[Address(RVA = "0x699E980", Offset = "0x699D980", VA = "0x699E980", Slot = "7")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008A")]
	public int marginHorizontal
	{
		[Token(Token = "0x600026A")]
		[Address(RVA = "0x699E9B0", Offset = "0x699D9B0", VA = "0x699E9B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700008B")]
	public int marginVertical
	{
		[Token(Token = "0x600026B")]
		[Address(RVA = "0x699E9F0", Offset = "0x699D9F0", VA = "0x699E9F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600026C")]
	[Address(RVA = "0x699EA30", Offset = "0x699DA30", VA = "0x699EA30")]
	public GUILayoutEntry(float _minWidth, float _maxWidth, float _minHeight, float _maxHeight, GUIStyle _style)
	{
	}

	[Token(Token = "0x600026D")]
	[Address(RVA = "0x698FED0", Offset = "0x698EED0", VA = "0x698FED0")]
	public GUILayoutEntry(float _minWidth, float _maxWidth, float _minHeight, float _maxHeight, GUIStyle _style, GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x600026E")]
	[Address(RVA = "0x699EB40", Offset = "0x699DB40", VA = "0x699EB40", Slot = "8")]
	public virtual void CalcWidth()
	{
	}

	[Token(Token = "0x600026F")]
	[Address(RVA = "0x699EB50", Offset = "0x699DB50", VA = "0x699EB50", Slot = "9")]
	public virtual void CalcHeight()
	{
	}

	[Token(Token = "0x6000270")]
	[Address(RVA = "0x699EB60", Offset = "0x699DB60", VA = "0x699EB60", Slot = "10")]
	public virtual void SetHorizontal(float x, float width)
	{
	}

	[Token(Token = "0x6000271")]
	[Address(RVA = "0x699EBE0", Offset = "0x699DBE0", VA = "0x699EBE0", Slot = "11")]
	public virtual void SetVertical(float y, float height)
	{
	}

	[Token(Token = "0x6000272")]
	[Address(RVA = "0x699EC60", Offset = "0x699DC60", VA = "0x699EC60", Slot = "12")]
	protected virtual void ApplyStyleSettings(GUIStyle style)
	{
	}

	[Token(Token = "0x6000273")]
	[Address(RVA = "0x699EFA0", Offset = "0x699DFA0", VA = "0x699EFA0", Slot = "13")]
	public virtual void ApplyOptions(GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x6000274")]
	[Address(RVA = "0x699F260", Offset = "0x699E260", VA = "0x699F260", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
