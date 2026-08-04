// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GUIStyle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4E571D0", Offset = "0x4E571D0", VA = "0x4E571D0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000150")]
		[Address(RVA = "0x4E57200", Offset = "0x4E57200", VA = "0x4E57200")]
		set;
	}

	[Token(Token = "0x17000058")]
	[UnityEngine.Bindings.NativeProperty("Font", false, UnityEngine.Bindings.TargetType.Function)]
	public Font font
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000151")]
		[Address(RVA = "0x4E470C0", Offset = "0x4E470C0", VA = "0x4E470C0")]
		get;
		[Token(Token = "0x6000152")]
		[Address(RVA = "0x4E57240", Offset = "0x4E57240", VA = "0x4E57240")]
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
		[Address(RVA = "0x4E57370", Offset = "0x4E57370", VA = "0x4E57370")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000154")]
		[Address(RVA = "0x4E573A0", Offset = "0x4E573A0", VA = "0x4E573A0")]
		set;
	}

	[Token(Token = "0x1700005A")]
	[UnityEngine.Bindings.NativeProperty("m_Alignment", false, UnityEngine.Bindings.TargetType.Field)]
	public extern TextAnchor alignment
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000155")]
		[Address(RVA = "0x4E573E0", Offset = "0x4E573E0", VA = "0x4E573E0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000156")]
		[Address(RVA = "0x4E57410", Offset = "0x4E57410", VA = "0x4E57410")]
		set;
	}

	[Token(Token = "0x1700005B")]
	[UnityEngine.Bindings.NativeProperty("m_WordWrap", false, UnityEngine.Bindings.TargetType.Field)]
	public extern bool wordWrap
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000157")]
		[Address(RVA = "0x4E57450", Offset = "0x4E57450", VA = "0x4E57450")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000158")]
		[Address(RVA = "0x4E57480", Offset = "0x4E57480", VA = "0x4E57480")]
		set;
	}

	[Token(Token = "0x1700005C")]
	[UnityEngine.Bindings.NativeProperty("m_Clipping", false, UnityEngine.Bindings.TargetType.Field)]
	public extern TextClipping clipping
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000159")]
		[Address(RVA = "0x4E574C0", Offset = "0x4E574C0", VA = "0x4E574C0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600015A")]
		[Address(RVA = "0x4E574F0", Offset = "0x4E574F0", VA = "0x4E574F0")]
		set;
	}

	[Token(Token = "0x1700005D")]
	[UnityEngine.Bindings.NativeProperty("m_ContentOffset", false, UnityEngine.Bindings.TargetType.Field)]
	public Vector2 contentOffset
	{
		[Token(Token = "0x600015B")]
		[Address(RVA = "0x4E57530", Offset = "0x4E57530", VA = "0x4E57530")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600015C")]
		[Address(RVA = "0x4E57600", Offset = "0x4E57600", VA = "0x4E57600")]
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
		[Address(RVA = "0x4E495F0", Offset = "0x4E495F0", VA = "0x4E495F0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600015E")]
		[Address(RVA = "0x4E576E0", Offset = "0x4E576E0", VA = "0x4E576E0")]
		set;
	}

	[Token(Token = "0x1700005F")]
	[UnityEngine.Bindings.NativeProperty("m_FixedHeight", false, UnityEngine.Bindings.TargetType.Field)]
	public extern float fixedHeight
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600015F")]
		[Address(RVA = "0x4E49620", Offset = "0x4E49620", VA = "0x4E49620")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000160")]
		[Address(RVA = "0x4E57730", Offset = "0x4E57730", VA = "0x4E57730")]
		set;
	}

	[Token(Token = "0x17000060")]
	[UnityEngine.Bindings.NativeProperty("m_StretchWidth", false, UnityEngine.Bindings.TargetType.Field)]
	public extern bool stretchWidth
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000161")]
		[Address(RVA = "0x4E57780", Offset = "0x4E57780", VA = "0x4E57780")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000162")]
		[Address(RVA = "0x4E577B0", Offset = "0x4E577B0", VA = "0x4E577B0")]
		set;
	}

	[Token(Token = "0x17000061")]
	[UnityEngine.Bindings.NativeProperty("m_StretchHeight", false, UnityEngine.Bindings.TargetType.Field)]
	public extern bool stretchHeight
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000163")]
		[Address(RVA = "0x4E577F0", Offset = "0x4E577F0", VA = "0x4E577F0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000164")]
		[Address(RVA = "0x4E568E0", Offset = "0x4E568E0", VA = "0x4E568E0")]
		set;
	}

	[Token(Token = "0x17000062")]
	[UnityEngine.Bindings.NativeProperty("m_FontSize", false, UnityEngine.Bindings.TargetType.Field)]
	public extern int fontSize
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000165")]
		[Address(RVA = "0x4E57820", Offset = "0x4E57820", VA = "0x4E57820")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000166")]
		[Address(RVA = "0x4E57850", Offset = "0x4E57850", VA = "0x4E57850")]
		set;
	}

	[Token(Token = "0x17000063")]
	[UnityEngine.Bindings.NativeProperty("m_FontStyle", false, UnityEngine.Bindings.TargetType.Field)]
	public extern FontStyle fontStyle
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000167")]
		[Address(RVA = "0x4E57890", Offset = "0x4E57890", VA = "0x4E57890")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000168")]
		[Address(RVA = "0x4E578C0", Offset = "0x4E578C0", VA = "0x4E578C0")]
		set;
	}

	[Token(Token = "0x17000064")]
	[UnityEngine.Bindings.NativeProperty("m_RichText", false, UnityEngine.Bindings.TargetType.Field)]
	public extern bool richText
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000169")]
		[Address(RVA = "0x4E57900", Offset = "0x4E57900", VA = "0x4E57900")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600016A")]
		[Address(RVA = "0x4E57930", Offset = "0x4E57930", VA = "0x4E57930")]
		set;
	}

	[Token(Token = "0x17000065")]
	[UnityEngine.Bindings.NativeProperty("m_ClipOffset", false, UnityEngine.Bindings.TargetType.Field)]
	internal Vector2 Internal_clipOffset
	{
		[Token(Token = "0x600016B")]
		[Address(RVA = "0x4E57970", Offset = "0x4E57970", VA = "0x4E57970")]
		set
		{
		}
	}

	[Token(Token = "0x17000066")]
	public string name
	{
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x4E48420", Offset = "0x4E48420", VA = "0x4E48420")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x4E54770", Offset = "0x4E54770", VA = "0x4E54770")]
		set
		{
		}
	}

	[Token(Token = "0x17000067")]
	public GUIStyleState normal
	{
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x4E56920", Offset = "0x4E56920", VA = "0x4E56920")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000187")]
		[Address(RVA = "0x4E58780", Offset = "0x4E58780", VA = "0x4E58780")]
		set
		{
		}
	}

	[Token(Token = "0x17000068")]
	public GUIStyleState hover
	{
		[Token(Token = "0x6000188")]
		[Address(RVA = "0x4E587D0", Offset = "0x4E587D0", VA = "0x4E587D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000189")]
		[Address(RVA = "0x4E58890", Offset = "0x4E58890", VA = "0x4E58890")]
		set
		{
		}
	}

	[Token(Token = "0x17000069")]
	public GUIStyleState active
	{
		[Token(Token = "0x600018A")]
		[Address(RVA = "0x4E588E0", Offset = "0x4E588E0", VA = "0x4E588E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600018B")]
		[Address(RVA = "0x4E589A0", Offset = "0x4E589A0", VA = "0x4E589A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public GUIStyleState onNormal
	{
		[Token(Token = "0x600018C")]
		[Address(RVA = "0x4E589F0", Offset = "0x4E589F0", VA = "0x4E589F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600018D")]
		[Address(RVA = "0x4E58AB0", Offset = "0x4E58AB0", VA = "0x4E58AB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006B")]
	public GUIStyleState onHover
	{
		[Token(Token = "0x600018E")]
		[Address(RVA = "0x4E58B00", Offset = "0x4E58B00", VA = "0x4E58B00")]
		get
		{
			return null;
		}
		[Token(Token = "0x600018F")]
		[Address(RVA = "0x4E58BC0", Offset = "0x4E58BC0", VA = "0x4E58BC0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public GUIStyleState onActive
	{
		[Token(Token = "0x6000190")]
		[Address(RVA = "0x4E58C10", Offset = "0x4E58C10", VA = "0x4E58C10")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000191")]
		[Address(RVA = "0x4E58CD0", Offset = "0x4E58CD0", VA = "0x4E58CD0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006D")]
	public GUIStyleState focused
	{
		[Token(Token = "0x6000192")]
		[Address(RVA = "0x4E58D20", Offset = "0x4E58D20", VA = "0x4E58D20")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000193")]
		[Address(RVA = "0x4E58DE0", Offset = "0x4E58DE0", VA = "0x4E58DE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public GUIStyleState onFocused
	{
		[Token(Token = "0x6000194")]
		[Address(RVA = "0x4E58E30", Offset = "0x4E58E30", VA = "0x4E58E30")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000195")]
		[Address(RVA = "0x4E58EF0", Offset = "0x4E58EF0", VA = "0x4E58EF0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public RectOffset border
	{
		[Token(Token = "0x6000196")]
		[Address(RVA = "0x4E58F40", Offset = "0x4E58F40", VA = "0x4E58F40")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000197")]
		[Address(RVA = "0x4E58FE0", Offset = "0x4E58FE0", VA = "0x4E58FE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000070")]
	public RectOffset margin
	{
		[Token(Token = "0x6000198")]
		[Address(RVA = "0x4E4B920", Offset = "0x4E4B920", VA = "0x4E4B920")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000199")]
		[Address(RVA = "0x4E59030", Offset = "0x4E59030", VA = "0x4E59030")]
		set
		{
		}
	}

	[Token(Token = "0x17000071")]
	public RectOffset padding
	{
		[Token(Token = "0x600019A")]
		[Address(RVA = "0x4E59080", Offset = "0x4E59080", VA = "0x4E59080")]
		get
		{
			return null;
		}
		[Token(Token = "0x600019B")]
		[Address(RVA = "0x4E59130", Offset = "0x4E59130", VA = "0x4E59130")]
		set
		{
		}
	}

	[Token(Token = "0x17000072")]
	public RectOffset overflow
	{
		[Token(Token = "0x600019C")]
		[Address(RVA = "0x4E59180", Offset = "0x4E59180", VA = "0x4E59180")]
		get
		{
			return null;
		}
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x4E59230", Offset = "0x4E59230", VA = "0x4E59230")]
		set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public float lineHeight
	{
		[Token(Token = "0x600019E")]
		[Address(RVA = "0x4E59280", Offset = "0x4E59280", VA = "0x4E59280")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000074")]
	public static GUIStyle none
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x4E49A80", Offset = "0x4E49A80", VA = "0x4E49A80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000075")]
	public bool isHeightDependantOnWidth
	{
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x4E52BB0", Offset = "0x4E52BB0", VA = "0x4E52BB0")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016C")]
	[Address(RVA = "0x4E57A50", Offset = "0x4E57A50", VA = "0x4E57A50")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_Create", IsThreadSafe = true)]
	private static extern IntPtr Internal_Create(GUIStyle self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016D")]
	[Address(RVA = "0x4E57A80", Offset = "0x4E57A80", VA = "0x4E57A80")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_Copy", IsThreadSafe = true)]
	private static extern IntPtr Internal_Copy(GUIStyle self, GUIStyle other);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016E")]
	[Address(RVA = "0x4E57AC0", Offset = "0x4E57AC0", VA = "0x4E57AC0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_Destroy", IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600016F")]
	[Address(RVA = "0x4E57AF0", Offset = "0x4E57AF0", VA = "0x4E57AF0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::GetStyleStatePtr", IsThreadSafe = true, HasExplicitThis = true)]
	private extern IntPtr GetStyleStatePtr(int idx);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000170")]
	[Address(RVA = "0x4E57B30", Offset = "0x4E57B30", VA = "0x4E57B30")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::AssignStyleState", HasExplicitThis = true)]
	private extern void AssignStyleState(int idx, IntPtr srcStyleState);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000171")]
	[Address(RVA = "0x4E57B70", Offset = "0x4E57B70", VA = "0x4E57B70")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::GetRectOffsetPtr", HasExplicitThis = true)]
	private extern IntPtr GetRectOffsetPtr(int idx);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000172")]
	[Address(RVA = "0x4E57BB0", Offset = "0x4E57BB0", VA = "0x4E57BB0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::AssignRectOffset", HasExplicitThis = true)]
	private extern void AssignRectOffset(int idx, IntPtr srcRectOffset);

	[Token(Token = "0x6000173")]
	[Address(RVA = "0x4E57BF0", Offset = "0x4E57BF0", VA = "0x4E57BF0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_Draw", HasExplicitThis = true)]
	private void Internal_Draw(Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
	{
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x4E57D20", Offset = "0x4E57D20", VA = "0x4E57D20")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_Draw2", HasExplicitThis = true)]
	private void Internal_Draw2(Rect position, GUIContent content, int controlID, bool on)
	{
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x4E57E20", Offset = "0x4E57E20", VA = "0x4E57E20")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_DrawCursor", HasExplicitThis = true)]
	private void Internal_DrawCursor(Rect position, GUIContent content, Vector2 pos, Color cursorColor)
	{
	}

	[Token(Token = "0x6000176")]
	[Address(RVA = "0x4E57F40", Offset = "0x4E57F40", VA = "0x4E57F40")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_DrawWithTextSelection", HasExplicitThis = true)]
	private void Internal_DrawWithTextSelection(Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus, bool drawSelectionAsComposition, Vector2 cursorFirstPosition, Vector2 cursorLastPosition, Color cursorColor, Color selectionColor)
	{
	}

	[Token(Token = "0x6000177")]
	[Address(RVA = "0x4E580E0", Offset = "0x4E580E0", VA = "0x4E580E0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_CalcSize", HasExplicitThis = true)]
	internal Vector2 Internal_CalcSize(GUIContent content)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000178")]
	[Address(RVA = "0x4E581B0", Offset = "0x4E581B0", VA = "0x4E581B0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_CalcSizeWithConstraints", HasExplicitThis = true)]
	internal Vector2 Internal_CalcSizeWithConstraints(GUIContent content, Vector2 maxSize)
	{
		return default(Vector2);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000179")]
	[Address(RVA = "0x4E582A0", Offset = "0x4E582A0", VA = "0x4E582A0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_CalcHeight", HasExplicitThis = true)]
	private extern float Internal_CalcHeight(GUIContent content, float width);

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x4E582F0", Offset = "0x4E582F0", VA = "0x4E582F0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_CalcMinMaxWidth", HasExplicitThis = true)]
	private Vector2 Internal_CalcMinMaxWidth(GUIContent content)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x4E583C0", Offset = "0x4E583C0", VA = "0x4E583C0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_GetTextRectOffset", HasExplicitThis = true)]
	internal Vector2 Internal_GetTextRectOffset(Rect screenRect, GUIContent content, Vector2 textSize)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x4E47D70", Offset = "0x4E47D70", VA = "0x4E47D70")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::SetMouseTooltip")]
	internal static void SetMouseTooltip(string tooltip, Rect screenRect)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600017D")]
	[Address(RVA = "0x4E47D40", Offset = "0x4E47D40", VA = "0x4E47D40")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::IsTooltipActive")]
	internal static extern bool IsTooltipActive(string tooltip);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600017E")]
	[Address(RVA = "0x4E58510", Offset = "0x4E58510", VA = "0x4E58510")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_GetCursorFlashOffset")]
	private static extern float Internal_GetCursorFlashOffset();

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x4E53640", Offset = "0x4E53640", VA = "0x4E53640")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle::SetDefaultFont")]
	internal static void SetDefaultFont(Font font)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000180")]
	[Address(RVA = "0x4E58570", Offset = "0x4E58570", VA = "0x4E58570")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_DestroyTextGenerator")]
	internal static extern void Internal_DestroyTextGenerator(int meshInfoId);

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x4E546F0", Offset = "0x4E546F0", VA = "0x4E546F0")]
	public GUIStyle()
	{
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x4E585A0", Offset = "0x4E585A0", VA = "0x4E585A0")]
	public GUIStyle(GUIStyle other)
	{
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x4E58690", Offset = "0x4E58690", VA = "0x4E58690", Slot = "1")]
	~GUIStyle()
	{
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x4E4B9D0", Offset = "0x4E4B9D0", VA = "0x4E4B9D0")]
	public void Draw(Rect position, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
	{
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x4E47C20", Offset = "0x4E47C20", VA = "0x4E47C20")]
	public void Draw(Rect position, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
	{
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x4E49BD0", Offset = "0x4E49BD0", VA = "0x4E49BD0")]
	public void Draw(Rect position, GUIContent content, int controlID)
	{
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x4E47070", Offset = "0x4E47070", VA = "0x4E47070")]
	public void Draw(Rect position, GUIContent content, int controlID, bool on)
	{
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x4E446E0", Offset = "0x4E446E0", VA = "0x4E446E0")]
	public void Draw(Rect position, GUIContent content, int controlID, bool on, bool hover)
	{
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x4E59450", Offset = "0x4E59450", VA = "0x4E59450")]
	private void Draw(Rect position, GUIContent content, int controlId, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
	{
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x4E59680", Offset = "0x4E59680", VA = "0x4E59680")]
	public void DrawCursor(Rect position, GUIContent content, int controlID, int character)
	{
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x4E59E30", Offset = "0x4E59E30", VA = "0x4E59E30")]
	internal void DrawWithTextSelection(Rect position, GUIContent content, bool isActive, bool hasKeyboardFocus, int firstSelectedCharacter, int lastSelectedCharacter, bool drawSelectionAsComposition, Color selectionColor)
	{
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x4E5A3B0", Offset = "0x4E5A3B0", VA = "0x4E5A3B0")]
	internal void DrawWithTextSelection(Rect position, GUIContent content, int controlID, int firstSelectedCharacter, int lastSelectedCharacter, bool drawSelectionAsComposition)
	{
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x4E5A5A0", Offset = "0x4E5A5A0", VA = "0x4E5A5A0")]
	public void DrawWithTextSelection(Rect position, GUIContent content, int controlID, int firstSelectedCharacter, int lastSelectedCharacter)
	{
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x4E59A70", Offset = "0x4E59A70", VA = "0x4E59A70")]
	public Vector2 GetCursorPixelPosition(Rect position, GUIContent content, int cursorStringIndex)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x4E5A6E0", Offset = "0x4E5A6E0", VA = "0x4E5A6E0")]
	public Vector2 CalcSize(GUIContent content)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x4E52C50", Offset = "0x4E52C50", VA = "0x4E52C50")]
	internal Vector2 CalcSizeWithConstraints(GUIContent content, Vector2 constraints)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001AD")]
	[Address(RVA = "0x4E5A770", Offset = "0x4E5A770", VA = "0x4E5A770")]
	public float CalcHeight(GUIContent content, float width)
	{
		return default(float);
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x4E5A7C0", Offset = "0x4E5A7C0", VA = "0x4E5A7C0")]
	internal Vector2 GetPreferredSize(string content, Rect rect)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x4E5A940", Offset = "0x4E5A940", VA = "0x4E5A940")]
	public void CalcMinMaxWidth(GUIContent content, out float minWidth, out float maxWidth)
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x4E5A9F0", Offset = "0x4E5A9F0", VA = "0x4E5A9F0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x4E5AAF0", Offset = "0x4E5AAF0", VA = "0x4E5AAF0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void GetMeshInfo(GUIStyle style, Color color, string content, Rect rect, ref UnityEngine.TextCore.Text.MeshInfoBindings[] meshInfos, ref Vector2 dimensions, ref int generationId)
	{
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x4E5AEC0", Offset = "0x4E5AEC0", VA = "0x4E5AEC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void GetDimensions(GUIStyle style, Color color, string content, Rect rect, ref Vector2 dimensions)
	{
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x4E5AEE0", Offset = "0x4E5AEE0", VA = "0x4E5AEE0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void GetLineHeight(GUIStyle style, ref float lineHeight)
	{
	}

	[Token(Token = "0x60001B5")]
	[Address(RVA = "0x4E5AF00", Offset = "0x4E5AF00", VA = "0x4E5AF00")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void EmptyManagedCache()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001B7")]
	[Address(RVA = "0x4E57330", Offset = "0x4E57330", VA = "0x4E57330")]
	private static extern void set_font_Injected(GUIStyle _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001B8")]
	[Address(RVA = "0x4E575C0", Offset = "0x4E575C0", VA = "0x4E575C0")]
	private static extern void get_contentOffset_Injected(GUIStyle _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001B9")]
	[Address(RVA = "0x4E576A0", Offset = "0x4E576A0", VA = "0x4E576A0")]
	private static extern void set_contentOffset_Injected(GUIStyle _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x4E57A10", Offset = "0x4E57A10", VA = "0x4E57A10")]
	private static extern void set_Internal_clipOffset_Injected(GUIStyle _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x4E57CC0", Offset = "0x4E57CC0", VA = "0x4E57CC0")]
	private static extern void Internal_Draw_Injected(GUIStyle _unity_self, [In] ref Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x4E57DD0", Offset = "0x4E57DD0", VA = "0x4E57DD0")]
	private static extern void Internal_Draw2_Injected(GUIStyle _unity_self, [In] ref Rect position, GUIContent content, int controlID, bool on);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x4E57EE0", Offset = "0x4E57EE0", VA = "0x4E57EE0")]
	private static extern void Internal_DrawCursor_Injected(GUIStyle _unity_self, [In] ref Rect position, GUIContent content, [In] ref Vector2 pos, [In] ref Color cursorColor);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x4E58080", Offset = "0x4E58080", VA = "0x4E58080")]
	private static extern void Internal_DrawWithTextSelection_Injected(GUIStyle _unity_self, [In] ref Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus, bool drawSelectionAsComposition, [In] ref Vector2 cursorFirstPosition, [In] ref Vector2 cursorLastPosition, [In] ref Color cursorColor, [In] ref Color selectionColor);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x4E58170", Offset = "0x4E58170", VA = "0x4E58170")]
	private static extern void Internal_CalcSize_Injected(GUIStyle _unity_self, GUIContent content, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x4E58250", Offset = "0x4E58250", VA = "0x4E58250")]
	private static extern void Internal_CalcSizeWithConstraints_Injected(GUIStyle _unity_self, GUIContent content, [In] ref Vector2 maxSize, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x4E58380", Offset = "0x4E58380", VA = "0x4E58380")]
	private static extern void Internal_CalcMinMaxWidth_Injected(GUIStyle _unity_self, GUIContent content, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x4E58470", Offset = "0x4E58470", VA = "0x4E58470")]
	private static extern void Internal_GetTextRectOffset_Injected(GUIStyle _unity_self, [In] ref Rect screenRect, GUIContent content, [In] ref Vector2 textSize, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x4E584D0", Offset = "0x4E584D0", VA = "0x4E584D0")]
	private static extern void SetMouseTooltip_Injected(string tooltip, [In] ref Rect screenRect);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x4E58540", Offset = "0x4E58540", VA = "0x4E58540")]
	private static extern void SetDefaultFont_Injected(IntPtr font);
}
