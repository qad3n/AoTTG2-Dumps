using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;
using UnityEngine.TextCore.Text;

namespace UnityEngine;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000019")]
[UnityEngine.Bindings.NativeHeader("IMGUIScriptingClasses.h")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUIStyle.bindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class GUIStyle
{
	[NonSerialized]
	[Token(Token = "0x40000A1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[NonSerialized]
	[Token(Token = "0x40000A2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private GUIStyleState m_Normal;

	[NonSerialized]
	[Token(Token = "0x40000A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private GUIStyleState m_Hover;

	[NonSerialized]
	[Token(Token = "0x40000A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GUIStyleState m_Active;

	[NonSerialized]
	[Token(Token = "0x40000A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private GUIStyleState m_Focused;

	[NonSerialized]
	[Token(Token = "0x40000A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private GUIStyleState m_OnNormal;

	[NonSerialized]
	[Token(Token = "0x40000A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private GUIStyleState m_OnHover;

	[NonSerialized]
	[Token(Token = "0x40000A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private GUIStyleState m_OnActive;

	[NonSerialized]
	[Token(Token = "0x40000A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private GUIStyleState m_OnFocused;

	[NonSerialized]
	[Token(Token = "0x40000AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private RectOffset m_Border;

	[NonSerialized]
	[Token(Token = "0x40000AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private RectOffset m_Padding;

	[NonSerialized]
	[Token(Token = "0x40000AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private RectOffset m_Margin;

	[NonSerialized]
	[Token(Token = "0x40000AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private RectOffset m_Overflow;

	[NonSerialized]
	[Token(Token = "0x40000AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private string m_Name;

	[Token(Token = "0x40000AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static bool showKeyboardFocus;

	[Token(Token = "0x40000B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static GUIStyle s_None;

	[Token(Token = "0x17000057")]
	[UnityEngine.Bindings.NativeProperty("Name", false, UnityEngine.Bindings.TargetType.Function)]
	internal extern string rawName
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600014F")]
		[Address(RVA = "0x4B2F610", Offset = "0x4B2F610", VA = "0x4B2F610")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000150")]
		[Address(RVA = "0x4B2F640", Offset = "0x4B2F640", VA = "0x4B2F640")]
		set;
	}

	[Token(Token = "0x17000058")]
	[UnityEngine.Bindings.NativeProperty("Font", false, UnityEngine.Bindings.TargetType.Function)]
	public Font font
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000151")]
		[Address(RVA = "0x4B1F500", Offset = "0x4B1F500", VA = "0x4B1F500")]
		get;
		[Token(Token = "0x6000152")]
		[Address(RVA = "0x4B2F680", Offset = "0x4B2F680", VA = "0x4B2F680")]
		set
		{
		}
	}

	[Token(Token = "0x17000059")]
	[UnityEngine.Bindings.NativeProperty("m_ImagePosition", false, UnityEngine.Bindings.TargetType.Field)]
	public extern ImagePosition imagePosition
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000153")]
		[Address(RVA = "0x4B2F7B0", Offset = "0x4B2F7B0", VA = "0x4B2F7B0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000154")]
		[Address(RVA = "0x4B2F7E0", Offset = "0x4B2F7E0", VA = "0x4B2F7E0")]
		set;
	}

	[Token(Token = "0x1700005A")]
	[UnityEngine.Bindings.NativeProperty("m_Alignment", false, UnityEngine.Bindings.TargetType.Field)]
	public extern TextAnchor alignment
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000155")]
		[Address(RVA = "0x4B2F820", Offset = "0x4B2F820", VA = "0x4B2F820")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000156")]
		[Address(RVA = "0x4B2F850", Offset = "0x4B2F850", VA = "0x4B2F850")]
		set;
	}

	[Token(Token = "0x1700005B")]
	[UnityEngine.Bindings.NativeProperty("m_WordWrap", false, UnityEngine.Bindings.TargetType.Field)]
	public extern bool wordWrap
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000157")]
		[Address(RVA = "0x4B2F890", Offset = "0x4B2F890", VA = "0x4B2F890")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000158")]
		[Address(RVA = "0x4B2F8C0", Offset = "0x4B2F8C0", VA = "0x4B2F8C0")]
		set;
	}

	[Token(Token = "0x1700005C")]
	[UnityEngine.Bindings.NativeProperty("m_Clipping", false, UnityEngine.Bindings.TargetType.Field)]
	public extern TextClipping clipping
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000159")]
		[Address(RVA = "0x4B2F900", Offset = "0x4B2F900", VA = "0x4B2F900")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600015A")]
		[Address(RVA = "0x4B2F930", Offset = "0x4B2F930", VA = "0x4B2F930")]
		set;
	}

	[Token(Token = "0x1700005D")]
	[UnityEngine.Bindings.NativeProperty("m_ContentOffset", false, UnityEngine.Bindings.TargetType.Field)]
	public Vector2 contentOffset
	{
		[Token(Token = "0x600015B")]
		[Address(RVA = "0x4B2F970", Offset = "0x4B2F970", VA = "0x4B2F970")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x4B2FA40", Offset = "0x4B2FA40", VA = "0x4B2FA40")]
		set
		{
		}
	}

	[Token(Token = "0x1700005E")]
	[UnityEngine.Bindings.NativeProperty("m_FixedWidth", false, UnityEngine.Bindings.TargetType.Field)]
	public extern float fixedWidth
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600015D")]
		[Address(RVA = "0x4B21A30", Offset = "0x4B21A30", VA = "0x4B21A30")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x4B2FB20", Offset = "0x4B2FB20", VA = "0x4B2FB20")]
		set;
	}

	[Token(Token = "0x1700005F")]
	[UnityEngine.Bindings.NativeProperty("m_FixedHeight", false, UnityEngine.Bindings.TargetType.Field)]
	public extern float fixedHeight
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x4B21A60", Offset = "0x4B21A60", VA = "0x4B21A60")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000160")]
		[Address(RVA = "0x4B2FB70", Offset = "0x4B2FB70", VA = "0x4B2FB70")]
		set;
	}

	[Token(Token = "0x17000060")]
	[UnityEngine.Bindings.NativeProperty("m_StretchWidth", false, UnityEngine.Bindings.TargetType.Field)]
	public extern bool stretchWidth
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x4B2FBC0", Offset = "0x4B2FBC0", VA = "0x4B2FBC0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x4B2FBF0", Offset = "0x4B2FBF0", VA = "0x4B2FBF0")]
		set;
	}

	[Token(Token = "0x17000061")]
	[UnityEngine.Bindings.NativeProperty("m_StretchHeight", false, UnityEngine.Bindings.TargetType.Field)]
	public extern bool stretchHeight
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x4B2FC30", Offset = "0x4B2FC30", VA = "0x4B2FC30")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000164")]
		[Address(RVA = "0x4B2ED20", Offset = "0x4B2ED20", VA = "0x4B2ED20")]
		set;
	}

	[Token(Token = "0x17000062")]
	[UnityEngine.Bindings.NativeProperty("m_FontSize", false, UnityEngine.Bindings.TargetType.Field)]
	public extern int fontSize
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000165")]
		[Address(RVA = "0x4B2FC60", Offset = "0x4B2FC60", VA = "0x4B2FC60")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000166")]
		[Address(RVA = "0x4B2FC90", Offset = "0x4B2FC90", VA = "0x4B2FC90")]
		set;
	}

	[Token(Token = "0x17000063")]
	[UnityEngine.Bindings.NativeProperty("m_FontStyle", false, UnityEngine.Bindings.TargetType.Field)]
	public extern FontStyle fontStyle
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000167")]
		[Address(RVA = "0x4B2FCD0", Offset = "0x4B2FCD0", VA = "0x4B2FCD0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000168")]
		[Address(RVA = "0x4B2FD00", Offset = "0x4B2FD00", VA = "0x4B2FD00")]
		set;
	}

	[Token(Token = "0x17000064")]
	[UnityEngine.Bindings.NativeProperty("m_RichText", false, UnityEngine.Bindings.TargetType.Field)]
	public extern bool richText
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000169")]
		[Address(RVA = "0x4B2FD40", Offset = "0x4B2FD40", VA = "0x4B2FD40")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600016A")]
		[Address(RVA = "0x4B2FD70", Offset = "0x4B2FD70", VA = "0x4B2FD70")]
		set;
	}

	[Token(Token = "0x17000065")]
	[UnityEngine.Bindings.NativeProperty("m_ClipOffset", false, UnityEngine.Bindings.TargetType.Field)]
	internal Vector2 Internal_clipOffset
	{
		[Token(Token = "0x600016B")]
		[Address(RVA = "0x4B2FDB0", Offset = "0x4B2FDB0", VA = "0x4B2FDB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000066")]
	public string name
	{
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x4B20860", Offset = "0x4B20860", VA = "0x4B20860")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x4B2CBB0", Offset = "0x4B2CBB0", VA = "0x4B2CBB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000067")]
	public GUIStyleState normal
	{
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x4B2ED60", Offset = "0x4B2ED60", VA = "0x4B2ED60")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000187")]
		[Address(RVA = "0x4B30BC0", Offset = "0x4B30BC0", VA = "0x4B30BC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000068")]
	public GUIStyleState hover
	{
		[Token(Token = "0x6000188")]
		[Address(RVA = "0x4B30C10", Offset = "0x4B30C10", VA = "0x4B30C10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000189")]
		[Address(RVA = "0x4B30CD0", Offset = "0x4B30CD0", VA = "0x4B30CD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000069")]
	public GUIStyleState active
	{
		[Token(Token = "0x600018A")]
		[Address(RVA = "0x4B30D20", Offset = "0x4B30D20", VA = "0x4B30D20")]
		get
		{
			return null;
		}
		[Token(Token = "0x600018B")]
		[Address(RVA = "0x4B30DE0", Offset = "0x4B30DE0", VA = "0x4B30DE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public GUIStyleState onNormal
	{
		[Token(Token = "0x600018C")]
		[Address(RVA = "0x4B30E30", Offset = "0x4B30E30", VA = "0x4B30E30")]
		get
		{
			return null;
		}
		[Token(Token = "0x600018D")]
		[Address(RVA = "0x4B30EF0", Offset = "0x4B30EF0", VA = "0x4B30EF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006B")]
	public GUIStyleState onHover
	{
		[Token(Token = "0x600018E")]
		[Address(RVA = "0x4B30F40", Offset = "0x4B30F40", VA = "0x4B30F40")]
		get
		{
			return null;
		}
		[Token(Token = "0x600018F")]
		[Address(RVA = "0x4B31000", Offset = "0x4B31000", VA = "0x4B31000")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public GUIStyleState onActive
	{
		[Token(Token = "0x6000190")]
		[Address(RVA = "0x4B31050", Offset = "0x4B31050", VA = "0x4B31050")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000191")]
		[Address(RVA = "0x4B31110", Offset = "0x4B31110", VA = "0x4B31110")]
		set
		{
		}
	}

	[Token(Token = "0x1700006D")]
	public GUIStyleState focused
	{
		[Token(Token = "0x6000192")]
		[Address(RVA = "0x4B31160", Offset = "0x4B31160", VA = "0x4B31160")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000193")]
		[Address(RVA = "0x4B31220", Offset = "0x4B31220", VA = "0x4B31220")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public GUIStyleState onFocused
	{
		[Token(Token = "0x6000194")]
		[Address(RVA = "0x4B31270", Offset = "0x4B31270", VA = "0x4B31270")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000195")]
		[Address(RVA = "0x4B31330", Offset = "0x4B31330", VA = "0x4B31330")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public RectOffset border
	{
		[Token(Token = "0x6000196")]
		[Address(RVA = "0x4B31380", Offset = "0x4B31380", VA = "0x4B31380")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000197")]
		[Address(RVA = "0x4B31420", Offset = "0x4B31420", VA = "0x4B31420")]
		set
		{
		}
	}

	[Token(Token = "0x17000070")]
	public RectOffset margin
	{
		[Token(Token = "0x6000198")]
		[Address(RVA = "0x4B23D60", Offset = "0x4B23D60", VA = "0x4B23D60")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000199")]
		[Address(RVA = "0x4B31470", Offset = "0x4B31470", VA = "0x4B31470")]
		set
		{
		}
	}

	[Token(Token = "0x17000071")]
	public RectOffset padding
	{
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x4B314C0", Offset = "0x4B314C0", VA = "0x4B314C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x4B31570", Offset = "0x4B31570", VA = "0x4B31570")]
		set
		{
		}
	}

	[Token(Token = "0x17000072")]
	public RectOffset overflow
	{
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x4B315C0", Offset = "0x4B315C0", VA = "0x4B315C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x4B31670", Offset = "0x4B31670", VA = "0x4B31670")]
		set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public float lineHeight
	{
		[Token(Token = "0x600019E")]
		[Address(RVA = "0x4B316C0", Offset = "0x4B316C0", VA = "0x4B316C0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000074")]
	public static GUIStyle none
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x4B21EC0", Offset = "0x4B21EC0", VA = "0x4B21EC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000075")]
	public bool isHeightDependantOnWidth
	{
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x4B2AFF0", Offset = "0x4B2AFF0", VA = "0x4B2AFF0")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016C")]
	[Address(RVA = "0x4B2FE90", Offset = "0x4B2FE90", VA = "0x4B2FE90")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_Create", IsThreadSafe = true)]
	private static extern IntPtr Internal_Create(GUIStyle self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016D")]
	[Address(RVA = "0x4B2FEC0", Offset = "0x4B2FEC0", VA = "0x4B2FEC0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_Copy", IsThreadSafe = true)]
	private static extern IntPtr Internal_Copy(GUIStyle self, GUIStyle other);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016E")]
	[Address(RVA = "0x4B2FF00", Offset = "0x4B2FF00", VA = "0x4B2FF00")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_Destroy", IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016F")]
	[Address(RVA = "0x4B2FF30", Offset = "0x4B2FF30", VA = "0x4B2FF30")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::GetStyleStatePtr", IsThreadSafe = true, HasExplicitThis = true)]
	private extern IntPtr GetStyleStatePtr(int idx);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000170")]
	[Address(RVA = "0x4B2FF70", Offset = "0x4B2FF70", VA = "0x4B2FF70")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::AssignStyleState", HasExplicitThis = true)]
	private extern void AssignStyleState(int idx, IntPtr srcStyleState);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000171")]
	[Address(RVA = "0x4B2FFB0", Offset = "0x4B2FFB0", VA = "0x4B2FFB0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::GetRectOffsetPtr", HasExplicitThis = true)]
	private extern IntPtr GetRectOffsetPtr(int idx);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000172")]
	[Address(RVA = "0x4B2FFF0", Offset = "0x4B2FFF0", VA = "0x4B2FFF0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::AssignRectOffset", HasExplicitThis = true)]
	private extern void AssignRectOffset(int idx, IntPtr srcRectOffset);

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x4B30030", Offset = "0x4B30030", VA = "0x4B30030")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_Draw", HasExplicitThis = true)]
	private void Internal_Draw(Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
	{
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x4B30160", Offset = "0x4B30160", VA = "0x4B30160")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_Draw2", HasExplicitThis = true)]
	private void Internal_Draw2(Rect position, GUIContent content, int controlID, bool on)
	{
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x4B30260", Offset = "0x4B30260", VA = "0x4B30260")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_DrawCursor", HasExplicitThis = true)]
	private void Internal_DrawCursor(Rect position, GUIContent content, Vector2 pos, Color cursorColor)
	{
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x4B30380", Offset = "0x4B30380", VA = "0x4B30380")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_DrawWithTextSelection", HasExplicitThis = true)]
	private void Internal_DrawWithTextSelection(Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus, bool drawSelectionAsComposition, Vector2 cursorFirstPosition, Vector2 cursorLastPosition, Color cursorColor, Color selectionColor)
	{
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x4B30520", Offset = "0x4B30520", VA = "0x4B30520")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_CalcSize", HasExplicitThis = true)]
	internal Vector2 Internal_CalcSize(GUIContent content)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x4B305F0", Offset = "0x4B305F0", VA = "0x4B305F0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_CalcSizeWithConstraints", HasExplicitThis = true)]
	internal Vector2 Internal_CalcSizeWithConstraints(GUIContent content, Vector2 maxSize)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000179")]
	[Address(RVA = "0x4B306E0", Offset = "0x4B306E0", VA = "0x4B306E0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_CalcHeight", HasExplicitThis = true)]
	private extern float Internal_CalcHeight(GUIContent content, float width);

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x4B30730", Offset = "0x4B30730", VA = "0x4B30730")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_CalcMinMaxWidth", HasExplicitThis = true)]
	private Vector2 Internal_CalcMinMaxWidth(GUIContent content)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x4B30800", Offset = "0x4B30800", VA = "0x4B30800")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_GetTextRectOffset", HasExplicitThis = true)]
	internal Vector2 Internal_GetTextRectOffset(Rect screenRect, GUIContent content, Vector2 textSize)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x4B201B0", Offset = "0x4B201B0", VA = "0x4B201B0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::SetMouseTooltip")]
	internal static void SetMouseTooltip(string tooltip, Rect screenRect)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600017D")]
	[Address(RVA = "0x4B20180", Offset = "0x4B20180", VA = "0x4B20180")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::IsTooltipActive")]
	internal static extern bool IsTooltipActive(string tooltip);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600017E")]
	[Address(RVA = "0x4B30950", Offset = "0x4B30950", VA = "0x4B30950")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_GetCursorFlashOffset")]
	private static extern float Internal_GetCursorFlashOffset();

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x4B2BA80", Offset = "0x4B2BA80", VA = "0x4B2BA80")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle::SetDefaultFont")]
	internal static void SetDefaultFont(Font font)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000180")]
	[Address(RVA = "0x4B309B0", Offset = "0x4B309B0", VA = "0x4B309B0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_DestroyTextGenerator")]
	internal static extern void Internal_DestroyTextGenerator(int meshInfoId);

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x4B2CB30", Offset = "0x4B2CB30", VA = "0x4B2CB30")]
	public GUIStyle()
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x4B309E0", Offset = "0x4B309E0", VA = "0x4B309E0")]
	public GUIStyle(GUIStyle other)
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x4B30AD0", Offset = "0x4B30AD0", VA = "0x4B30AD0", Slot = "1")]
	~GUIStyle()
	{
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x4B23E10", Offset = "0x4B23E10", VA = "0x4B23E10")]
	public void Draw(Rect position, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
	{
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x4B20060", Offset = "0x4B20060", VA = "0x4B20060")]
	public void Draw(Rect position, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
	{
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x4B22010", Offset = "0x4B22010", VA = "0x4B22010")]
	public void Draw(Rect position, GUIContent content, int controlID)
	{
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x4B1F4B0", Offset = "0x4B1F4B0", VA = "0x4B1F4B0")]
	public void Draw(Rect position, GUIContent content, int controlID, bool on)
	{
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x4B1CB20", Offset = "0x4B1CB20", VA = "0x4B1CB20")]
	public void Draw(Rect position, GUIContent content, int controlID, bool on, bool hover)
	{
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x4B31890", Offset = "0x4B31890", VA = "0x4B31890")]
	private void Draw(Rect position, GUIContent content, int controlId, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
	{
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x4B31AC0", Offset = "0x4B31AC0", VA = "0x4B31AC0")]
	public void DrawCursor(Rect position, GUIContent content, int controlID, int character)
	{
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x4B32270", Offset = "0x4B32270", VA = "0x4B32270")]
	internal void DrawWithTextSelection(Rect position, GUIContent content, bool isActive, bool hasKeyboardFocus, int firstSelectedCharacter, int lastSelectedCharacter, bool drawSelectionAsComposition, Color selectionColor)
	{
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x4B327F0", Offset = "0x4B327F0", VA = "0x4B327F0")]
	internal void DrawWithTextSelection(Rect position, GUIContent content, int controlID, int firstSelectedCharacter, int lastSelectedCharacter, bool drawSelectionAsComposition)
	{
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x4B329E0", Offset = "0x4B329E0", VA = "0x4B329E0")]
	public void DrawWithTextSelection(Rect position, GUIContent content, int controlID, int firstSelectedCharacter, int lastSelectedCharacter)
	{
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x4B31EB0", Offset = "0x4B31EB0", VA = "0x4B31EB0")]
	public Vector2 GetCursorPixelPosition(Rect position, GUIContent content, int cursorStringIndex)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x4B32B20", Offset = "0x4B32B20", VA = "0x4B32B20")]
	public Vector2 CalcSize(GUIContent content)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x4B2B090", Offset = "0x4B2B090", VA = "0x4B2B090")]
	internal Vector2 CalcSizeWithConstraints(GUIContent content, Vector2 constraints)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x4B32BB0", Offset = "0x4B32BB0", VA = "0x4B32BB0")]
	public float CalcHeight(GUIContent content, float width)
	{
		return default(float);
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x4B32C00", Offset = "0x4B32C00", VA = "0x4B32C00")]
	internal Vector2 GetPreferredSize(string content, Rect rect)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x4B32D80", Offset = "0x4B32D80", VA = "0x4B32D80")]
	public void CalcMinMaxWidth(GUIContent content, out float minWidth, out float maxWidth)
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x4B32E30", Offset = "0x4B32E30", VA = "0x4B32E30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x4B32F30", Offset = "0x4B32F30", VA = "0x4B32F30")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void GetMeshInfo(GUIStyle style, Color color, string content, Rect rect, ref UnityEngine.TextCore.Text.MeshInfoBindings[] meshInfos, ref Vector2 dimensions, ref int generationId)
	{
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x4B33300", Offset = "0x4B33300", VA = "0x4B33300")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void GetDimensions(GUIStyle style, Color color, string content, Rect rect, ref Vector2 dimensions)
	{
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x4B33320", Offset = "0x4B33320", VA = "0x4B33320")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void GetLineHeight(GUIStyle style, ref float lineHeight)
	{
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x4B33340", Offset = "0x4B33340", VA = "0x4B33340")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void EmptyManagedCache()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x4B2F770", Offset = "0x4B2F770", VA = "0x4B2F770")]
	private static extern void set_font_Injected(GUIStyle _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x4B2FA00", Offset = "0x4B2FA00", VA = "0x4B2FA00")]
	private static extern void get_contentOffset_Injected(GUIStyle _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x4B2FAE0", Offset = "0x4B2FAE0", VA = "0x4B2FAE0")]
	private static extern void set_contentOffset_Injected(GUIStyle _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x4B2FE50", Offset = "0x4B2FE50", VA = "0x4B2FE50")]
	private static extern void set_Internal_clipOffset_Injected(GUIStyle _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x4B30100", Offset = "0x4B30100", VA = "0x4B30100")]
	private static extern void Internal_Draw_Injected(GUIStyle _unity_self, [In] ref Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x4B30210", Offset = "0x4B30210", VA = "0x4B30210")]
	private static extern void Internal_Draw2_Injected(GUIStyle _unity_self, [In] ref Rect position, GUIContent content, int controlID, bool on);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x4B30320", Offset = "0x4B30320", VA = "0x4B30320")]
	private static extern void Internal_DrawCursor_Injected(GUIStyle _unity_self, [In] ref Rect position, GUIContent content, [In] ref Vector2 pos, [In] ref Color cursorColor);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x4B304C0", Offset = "0x4B304C0", VA = "0x4B304C0")]
	private static extern void Internal_DrawWithTextSelection_Injected(GUIStyle _unity_self, [In] ref Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus, bool drawSelectionAsComposition, [In] ref Vector2 cursorFirstPosition, [In] ref Vector2 cursorLastPosition, [In] ref Color cursorColor, [In] ref Color selectionColor);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x4B305B0", Offset = "0x4B305B0", VA = "0x4B305B0")]
	private static extern void Internal_CalcSize_Injected(GUIStyle _unity_self, GUIContent content, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x4B30690", Offset = "0x4B30690", VA = "0x4B30690")]
	private static extern void Internal_CalcSizeWithConstraints_Injected(GUIStyle _unity_self, GUIContent content, [In] ref Vector2 maxSize, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x4B307C0", Offset = "0x4B307C0", VA = "0x4B307C0")]
	private static extern void Internal_CalcMinMaxWidth_Injected(GUIStyle _unity_self, GUIContent content, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x4B308B0", Offset = "0x4B308B0", VA = "0x4B308B0")]
	private static extern void Internal_GetTextRectOffset_Injected(GUIStyle _unity_self, [In] ref Rect screenRect, GUIContent content, [In] ref Vector2 textSize, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x4B30910", Offset = "0x4B30910", VA = "0x4B30910")]
	private static extern void SetMouseTooltip_Injected(string tooltip, [In] ref Rect screenRect);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x4B30980", Offset = "0x4B30980", VA = "0x4B30980")]
	private static extern void SetDefaultFont_Injected(IntPtr font);
}
