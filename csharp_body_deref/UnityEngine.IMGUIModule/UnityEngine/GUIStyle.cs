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
[Token(Token = "0x200001B")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUIStyle.bindings.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("IMGUIScriptingClasses.h")]
public sealed class GUIStyle
{
	[Token(Token = "0x200001C")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x600020C")]
		[Address(RVA = "0x699AF20", Offset = "0x6999F20", VA = "0x699AF20")]
		public static IntPtr ConvertToNative(GUIStyle guiStyle)
		{
			return default(IntPtr);
		}
	}

	[NonSerialized]
	[Token(Token = "0x40000A3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[NonSerialized]
	[Token(Token = "0x40000A4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private GUIStyleState m_Normal;

	[NonSerialized]
	[Token(Token = "0x40000A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private GUIStyleState m_Hover;

	[NonSerialized]
	[Token(Token = "0x40000A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private GUIStyleState m_Active;

	[NonSerialized]
	[Token(Token = "0x40000A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private GUIStyleState m_Focused;

	[NonSerialized]
	[Token(Token = "0x40000A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private GUIStyleState m_OnNormal;

	[NonSerialized]
	[Token(Token = "0x40000A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private GUIStyleState m_OnHover;

	[NonSerialized]
	[Token(Token = "0x40000AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private GUIStyleState m_OnActive;

	[NonSerialized]
	[Token(Token = "0x40000AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private GUIStyleState m_OnFocused;

	[NonSerialized]
	[Token(Token = "0x40000AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private RectOffset m_Border;

	[NonSerialized]
	[Token(Token = "0x40000AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private RectOffset m_Padding;

	[NonSerialized]
	[Token(Token = "0x40000AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private RectOffset m_Margin;

	[NonSerialized]
	[Token(Token = "0x40000AF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private RectOffset m_Overflow;

	[NonSerialized]
	[Token(Token = "0x40000B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private string m_Name;

	[Token(Token = "0x40000B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static bool showKeyboardFocus;

	[Token(Token = "0x40000B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static GUIStyle s_None;

	[Token(Token = "0x1700005A")]
	[UnityEngine.Bindings.NativeProperty("Name", false, UnityEngine.Bindings.TargetType.Function)]
	internal string rawName
	{
		[Token(Token = "0x6000172")]
		[Address(RVA = "0x6994510", Offset = "0x6993510", VA = "0x6994510")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000173")]
		[Address(RVA = "0x6994670", Offset = "0x6993670", VA = "0x6994670")]
		set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	[UnityEngine.Bindings.NativeProperty("Font", false, UnityEngine.Bindings.TargetType.Function)]
	public Font font
	{
		[Token(Token = "0x6000174")]
		[Address(RVA = "0x6982C00", Offset = "0x6981C00", VA = "0x6982C00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000175")]
		[Address(RVA = "0x69948A0", Offset = "0x69938A0", VA = "0x69948A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	[UnityEngine.Bindings.NativeProperty("m_ImagePosition", false, UnityEngine.Bindings.TargetType.Field)]
	public ImagePosition imagePosition
	{
		[Token(Token = "0x6000176")]
		[Address(RVA = "0x69949D0", Offset = "0x69939D0", VA = "0x69949D0")]
		get
		{
			return default(ImagePosition);
		}
		[Token(Token = "0x6000177")]
		[Address(RVA = "0x6994AB0", Offset = "0x6993AB0", VA = "0x6994AB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005D")]
	[UnityEngine.Bindings.NativeProperty("m_Alignment", false, UnityEngine.Bindings.TargetType.Field)]
	public TextAnchor alignment
	{
		[Token(Token = "0x6000178")]
		[Address(RVA = "0x6994BA0", Offset = "0x6993BA0", VA = "0x6994BA0")]
		get
		{
			return default(TextAnchor);
		}
		[Token(Token = "0x6000179")]
		[Address(RVA = "0x6994C80", Offset = "0x6993C80", VA = "0x6994C80")]
		set
		{
		}
	}

	[Token(Token = "0x1700005E")]
	[UnityEngine.Bindings.NativeProperty("m_WordWrap", false, UnityEngine.Bindings.TargetType.Field)]
	public bool wordWrap
	{
		[Token(Token = "0x600017A")]
		[Address(RVA = "0x6994D70", Offset = "0x6993D70", VA = "0x6994D70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600017B")]
		[Address(RVA = "0x6994E50", Offset = "0x6993E50", VA = "0x6994E50")]
		set
		{
		}
	}

	[Token(Token = "0x1700005F")]
	[UnityEngine.Bindings.NativeProperty("m_Clipping", false, UnityEngine.Bindings.TargetType.Field)]
	public TextClipping clipping
	{
		[Token(Token = "0x600017C")]
		[Address(RVA = "0x6994F40", Offset = "0x6993F40", VA = "0x6994F40")]
		get
		{
			return default(TextClipping);
		}
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x6995020", Offset = "0x6994020", VA = "0x6995020")]
		set
		{
		}
	}

	[Token(Token = "0x17000060")]
	[UnityEngine.Bindings.NativeProperty("m_ContentOffset", false, UnityEngine.Bindings.TargetType.Field)]
	public Vector2 contentOffset
	{
		[Token(Token = "0x600017E")]
		[Address(RVA = "0x6995110", Offset = "0x6994110", VA = "0x6995110")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x6995210", Offset = "0x6994210", VA = "0x6995210")]
		set
		{
		}
	}

	[Token(Token = "0x17000061")]
	[UnityEngine.Bindings.NativeProperty("m_FixedWidth", false, UnityEngine.Bindings.TargetType.Field)]
	public float fixedWidth
	{
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x6985A70", Offset = "0x6984A70", VA = "0x6985A70")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x6995330", Offset = "0x6994330", VA = "0x6995330")]
		set
		{
		}
	}

	[Token(Token = "0x17000062")]
	[UnityEngine.Bindings.NativeProperty("m_FixedHeight", false, UnityEngine.Bindings.TargetType.Field)]
	public float fixedHeight
	{
		[Token(Token = "0x6000182")]
		[Address(RVA = "0x6985B20", Offset = "0x6984B20", VA = "0x6985B20")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000183")]
		[Address(RVA = "0x6995460", Offset = "0x6994460", VA = "0x6995460")]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	[UnityEngine.Bindings.NativeProperty("m_StretchWidth", false, UnityEngine.Bindings.TargetType.Field)]
	public bool stretchWidth
	{
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x6995560", Offset = "0x6994560", VA = "0x6995560")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x6995640", Offset = "0x6994640", VA = "0x6995640")]
		set
		{
		}
	}

	[Token(Token = "0x17000064")]
	[UnityEngine.Bindings.NativeProperty("m_StretchHeight", false, UnityEngine.Bindings.TargetType.Field)]
	public bool stretchHeight
	{
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x6995730", Offset = "0x6994730", VA = "0x6995730")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000187")]
		[Address(RVA = "0x69939B0", Offset = "0x69929B0", VA = "0x69939B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000065")]
	[UnityEngine.Bindings.NativeProperty("m_FontSize", false, UnityEngine.Bindings.TargetType.Field)]
	public int fontSize
	{
		[Token(Token = "0x6000188")]
		[Address(RVA = "0x6995850", Offset = "0x6994850", VA = "0x6995850")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000189")]
		[Address(RVA = "0x6995930", Offset = "0x6994930", VA = "0x6995930")]
		set
		{
		}
	}

	[Token(Token = "0x17000066")]
	[UnityEngine.Bindings.NativeProperty("m_FontStyle", false, UnityEngine.Bindings.TargetType.Field)]
	public FontStyle fontStyle
	{
		[Token(Token = "0x600018A")]
		[Address(RVA = "0x6995A20", Offset = "0x6994A20", VA = "0x6995A20")]
		get
		{
			return default(FontStyle);
		}
		[Token(Token = "0x600018B")]
		[Address(RVA = "0x6995B00", Offset = "0x6994B00", VA = "0x6995B00")]
		set
		{
		}
	}

	[Token(Token = "0x17000067")]
	[UnityEngine.Bindings.NativeProperty("m_RichText", false, UnityEngine.Bindings.TargetType.Field)]
	public bool richText
	{
		[Token(Token = "0x600018C")]
		[Address(RVA = "0x6995BF0", Offset = "0x6994BF0", VA = "0x6995BF0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600018D")]
		[Address(RVA = "0x6995CD0", Offset = "0x6994CD0", VA = "0x6995CD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000068")]
	[UnityEngine.Bindings.NativeProperty("m_ClipOffset", false, UnityEngine.Bindings.TargetType.Field)]
	internal Vector2 Internal_clipOffset
	{
		[Token(Token = "0x600018E")]
		[Address(RVA = "0x6995DC0", Offset = "0x6994DC0", VA = "0x6995DC0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600018F")]
		[Address(RVA = "0x6995EC0", Offset = "0x6994EC0", VA = "0x6995EC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000069")]
	public string name
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x6984260", Offset = "0x6983260", VA = "0x6984260")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x6991A30", Offset = "0x6990A30", VA = "0x6991A30")]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public GUIStyleState normal
	{
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x6993A60", Offset = "0x6992A60", VA = "0x6993A60")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x6997400", Offset = "0x6996400", VA = "0x6997400")]
		set
		{
		}
	}

	[Token(Token = "0x1700006B")]
	public GUIStyleState hover
	{
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x69974C0", Offset = "0x69964C0", VA = "0x69974C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AE")]
		[Address(RVA = "0x6997610", Offset = "0x6996610", VA = "0x6997610")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public GUIStyleState active
	{
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x69976D0", Offset = "0x69966D0", VA = "0x69976D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x6997820", Offset = "0x6996820", VA = "0x6997820")]
		set
		{
		}
	}

	[Token(Token = "0x1700006D")]
	public GUIStyleState onNormal
	{
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x69978E0", Offset = "0x69968E0", VA = "0x69978E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x6997A30", Offset = "0x6996A30", VA = "0x6997A30")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public GUIStyleState onHover
	{
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x6997AF0", Offset = "0x6996AF0", VA = "0x6997AF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x6997C40", Offset = "0x6996C40", VA = "0x6997C40")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public GUIStyleState onActive
	{
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x6997D00", Offset = "0x6996D00", VA = "0x6997D00")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x6997E50", Offset = "0x6996E50", VA = "0x6997E50")]
		set
		{
		}
	}

	[Token(Token = "0x17000070")]
	public GUIStyleState focused
	{
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x6997F10", Offset = "0x6996F10", VA = "0x6997F10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x6998060", Offset = "0x6997060", VA = "0x6998060")]
		set
		{
		}
	}

	[Token(Token = "0x17000071")]
	public GUIStyleState onFocused
	{
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x6998120", Offset = "0x6997120", VA = "0x6998120")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BA")]
		[Address(RVA = "0x6998270", Offset = "0x6997270", VA = "0x6998270")]
		set
		{
		}
	}

	[Token(Token = "0x17000072")]
	public RectOffset border
	{
		[Token(Token = "0x60001BB")]
		[Address(RVA = "0x6998330", Offset = "0x6997330", VA = "0x6998330")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BC")]
		[Address(RVA = "0x6998470", Offset = "0x6997470", VA = "0x6998470")]
		set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public RectOffset margin
	{
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0x6987E10", Offset = "0x6986E10", VA = "0x6987E10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x6998530", Offset = "0x6997530", VA = "0x6998530")]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	public RectOffset padding
	{
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x69985F0", Offset = "0x69975F0", VA = "0x69985F0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x6998740", Offset = "0x6997740", VA = "0x6998740")]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public RectOffset overflow
	{
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x6998800", Offset = "0x6997800", VA = "0x6998800")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x6998950", Offset = "0x6997950", VA = "0x6998950")]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public float lineHeight
	{
		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x6998A10", Offset = "0x6997A10", VA = "0x6998A10")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000077")]
	public static GUIStyle none
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x6986080", Offset = "0x6985080", VA = "0x6986080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000078")]
	public bool isHeightDependantOnWidth
	{
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x698FC10", Offset = "0x698EC10", VA = "0x698FC10")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000190")]
	[Address(RVA = "0x6995FB0", Offset = "0x6994FB0", VA = "0x6995FB0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_Create", IsThreadSafe = true)]
	private static extern IntPtr Internal_Create([UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] GUIStyle self);

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x6995FE0", Offset = "0x6994FE0", VA = "0x6995FE0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_Copy", IsThreadSafe = true)]
	private static IntPtr Internal_Copy([UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] GUIStyle self, GUIStyle other)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000192")]
	[Address(RVA = "0x69960C0", Offset = "0x69950C0", VA = "0x69960C0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_Destroy", IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr self);

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x69960F0", Offset = "0x69950F0", VA = "0x69960F0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::GetStyleStatePtr", IsThreadSafe = true, HasExplicitThis = true)]
	private IntPtr GetStyleStatePtr(int idx)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x69961E0", Offset = "0x69951E0", VA = "0x69961E0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::AssignStyleState", HasExplicitThis = true)]
	private void AssignStyleState(int idx, IntPtr srcStyleState)
	{
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x69962E0", Offset = "0x69952E0", VA = "0x69962E0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::GetRectOffsetPtr", HasExplicitThis = true)]
	private IntPtr GetRectOffsetPtr(int idx)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x69963D0", Offset = "0x69953D0", VA = "0x69963D0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::AssignRectOffset", HasExplicitThis = true)]
	private void AssignRectOffset(int idx, IntPtr srcRectOffset)
	{
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x69964D0", Offset = "0x69954D0", VA = "0x69964D0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_Draw", HasExplicitThis = true)]
	private void Internal_Draw(Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
	{
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x6996620", Offset = "0x6995620", VA = "0x6996620")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_Draw2", HasExplicitThis = true)]
	private void Internal_Draw2(Rect position, GUIContent content, int controlID, bool on)
	{
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x6996750", Offset = "0x6995750", VA = "0x6996750")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_DrawCursor", HasExplicitThis = true)]
	private void Internal_DrawCursor(Rect position, GUIContent content, Vector2 pos, Color cursorColor)
	{
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x6996890", Offset = "0x6995890", VA = "0x6996890")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_DrawWithTextSelection", HasExplicitThis = true)]
	private void Internal_DrawWithTextSelection(Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus, bool drawSelectionAsComposition, Vector2 cursorFirstPosition, Vector2 cursorLastPosition, Color cursorColor, Color selectionColor)
	{
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x6996A40", Offset = "0x6995A40", VA = "0x6996A40")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_CalcSize", HasExplicitThis = true)]
	internal Vector2 Internal_CalcSize(GUIContent content)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x6996B50", Offset = "0x6995B50", VA = "0x6996B50")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_CalcSizeWithConstraints", HasExplicitThis = true)]
	internal Vector2 Internal_CalcSizeWithConstraints(GUIContent content, Vector2 maxSize)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x6996C70", Offset = "0x6995C70", VA = "0x6996C70")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_CalcHeight", HasExplicitThis = true)]
	private float Internal_CalcHeight(GUIContent content, float width)
	{
		return default(float);
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x6996D90", Offset = "0x6995D90", VA = "0x6996D90")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_CalcMinMaxWidth", HasExplicitThis = true)]
	private Vector2 Internal_CalcMinMaxWidth(GUIContent content)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x6996EA0", Offset = "0x6995EA0", VA = "0x6996EA0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_GetTextRectOffset", HasExplicitThis = true)]
	internal Vector2 Internal_GetTextRectOffset(Rect screenRect, GUIContent content, Vector2 textSize)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x6983A70", Offset = "0x6982A70", VA = "0x6983A70")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::SetMouseTooltip")]
	internal static void SetMouseTooltip(string tooltip, Rect screenRect)
	{
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x69838E0", Offset = "0x69828E0", VA = "0x69838E0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::IsTooltipActive")]
	internal static bool IsTooltipActive(string tooltip)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x6997050", Offset = "0x6996050", VA = "0x6997050")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_GetCursorFlashOffset")]
	private static extern float Internal_GetCursorFlashOffset();

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x6990930", Offset = "0x698F930", VA = "0x6990930")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle::SetDefaultFont")]
	internal static void SetDefaultFont(Font font)
	{
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x69970B0", Offset = "0x69960B0", VA = "0x69970B0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle::GetDefaultFont")]
	internal static Font GetDefaultFont()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x6997180", Offset = "0x6996180", VA = "0x6997180")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_DestroyTextGenerator")]
	internal static extern void Internal_DestroyTextGenerator(int meshInfoId);

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x69919B0", Offset = "0x69909B0", VA = "0x69919B0")]
	public GUIStyle()
	{
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x69971B0", Offset = "0x69961B0", VA = "0x69971B0")]
	public GUIStyle(GUIStyle other)
	{
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x6997310", Offset = "0x6996310", VA = "0x6997310", Slot = "1")]
	~GUIStyle()
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x6987F60", Offset = "0x6986F60", VA = "0x6987F60")]
	public void Draw(Rect position, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
	{
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x69837A0", Offset = "0x69827A0", VA = "0x69837A0")]
	public void Draw(Rect position, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
	{
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x69861B0", Offset = "0x69851B0", VA = "0x69861B0")]
	public void Draw(Rect position, GUIContent content, int controlID)
	{
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x6982BB0", Offset = "0x6981BB0", VA = "0x6982BB0")]
	public void Draw(Rect position, GUIContent content, int controlID, bool on)
	{
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x697F240", Offset = "0x697E240", VA = "0x697F240")]
	public void Draw(Rect position, GUIContent content, int controlID, bool on, bool hover)
	{
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x6998CC0", Offset = "0x6997CC0", VA = "0x6998CC0")]
	private void Draw(Rect position, GUIContent content, int controlId, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
	{
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x6999040", Offset = "0x6998040", VA = "0x6999040")]
	public void DrawCursor(Rect position, GUIContent content, int controlID, int character)
	{
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x6999A90", Offset = "0x6998A90", VA = "0x6999A90")]
	internal void DrawWithTextSelection(Rect position, GUIContent content, bool isActive, bool hasKeyboardFocus, int firstSelectedCharacter, int lastSelectedCharacter, bool drawSelectionAsComposition, Color selectionColor)
	{
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x699A010", Offset = "0x6999010", VA = "0x699A010")]
	internal void DrawWithTextSelection(Rect position, GUIContent content, int controlID, int firstSelectedCharacter, int lastSelectedCharacter, bool drawSelectionAsComposition)
	{
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x699A340", Offset = "0x6999340", VA = "0x699A340")]
	public void DrawWithTextSelection(Rect position, GUIContent content, int controlID, int firstSelectedCharacter, int lastSelectedCharacter)
	{
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x6999440", Offset = "0x6998440", VA = "0x6999440")]
	public Vector2 GetCursorPixelPosition(Rect position, GUIContent content, int cursorStringIndex)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x699A460", Offset = "0x6999460", VA = "0x699A460")]
	public Vector2 CalcSize(GUIContent content)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x698FE60", Offset = "0x698EE60", VA = "0x698FE60")]
	internal Vector2 CalcSizeWithConstraints(GUIContent content, Vector2 constraints)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x699A530", Offset = "0x6999530", VA = "0x699A530")]
	public float CalcHeight(GUIContent content, float width)
	{
		return default(float);
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x699A600", Offset = "0x6999600", VA = "0x699A600")]
	internal Vector2 GetPreferredSize(string content, Rect rect)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x699A6C0", Offset = "0x69996C0", VA = "0x699A6C0")]
	public void CalcMinMaxWidth(GUIContent content, out float minWidth, out float maxWidth)
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x699A7B0", Offset = "0x69997B0", VA = "0x699A7B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x699A820", Offset = "0x6999820", VA = "0x699A820")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void GetMeshInfo(GUIStyle style, Color color, string content, Rect rect, ref UnityEngine.TextCore.Text.MeshInfoBindings[] meshInfos, ref Vector2 dimensions, ref int generationId)
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x699ACD0", Offset = "0x6999CD0", VA = "0x699ACD0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void GetDimensions(GUIStyle style, Color color, string content, Rect rect, ref Vector2 dimensions)
	{
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x699ADA0", Offset = "0x6999DA0", VA = "0x699ADA0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void GetLineHeight(GUIStyle style, ref float lineHeight)
	{
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x699ADC0", Offset = "0x6999DC0", VA = "0x699ADC0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void EmptyManagedCache()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x6994630", Offset = "0x6993630", VA = "0x6994630")]
	private static extern void get_rawName_Injected(IntPtr _unity_self, out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x6994830", Offset = "0x6993830", VA = "0x6994830")]
	private static extern void set_rawName_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x6994870", Offset = "0x6993870", VA = "0x6994870")]
	private static extern IntPtr get_font_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x6994990", Offset = "0x6993990", VA = "0x6994990")]
	private static extern void set_font_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x6994A80", Offset = "0x6993A80", VA = "0x6994A80")]
	private static extern ImagePosition get_imagePosition_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x6994B60", Offset = "0x6993B60", VA = "0x6994B60")]
	private static extern void set_imagePosition_Injected(IntPtr _unity_self, ImagePosition value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x6994C50", Offset = "0x6993C50", VA = "0x6994C50")]
	private static extern TextAnchor get_alignment_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x6994D30", Offset = "0x6993D30", VA = "0x6994D30")]
	private static extern void set_alignment_Injected(IntPtr _unity_self, TextAnchor value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x6994E20", Offset = "0x6993E20", VA = "0x6994E20")]
	private static extern bool get_wordWrap_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x6994F00", Offset = "0x6993F00", VA = "0x6994F00")]
	private static extern void set_wordWrap_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x6994FF0", Offset = "0x6993FF0", VA = "0x6994FF0")]
	private static extern TextClipping get_clipping_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x69950D0", Offset = "0x69940D0", VA = "0x69950D0")]
	private static extern void set_clipping_Injected(IntPtr _unity_self, TextClipping value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x69951D0", Offset = "0x69941D0", VA = "0x69951D0")]
	private static extern void get_contentOffset_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x69952C0", Offset = "0x69942C0", VA = "0x69952C0")]
	private static extern void set_contentOffset_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x6995300", Offset = "0x6994300", VA = "0x6995300")]
	private static extern float get_fixedWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x69953E0", Offset = "0x69943E0", VA = "0x69953E0")]
	private static extern void set_fixedWidth_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x6995430", Offset = "0x6994430", VA = "0x6995430")]
	private static extern float get_fixedHeight_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x6995510", Offset = "0x6994510", VA = "0x6995510")]
	private static extern void set_fixedHeight_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x6995610", Offset = "0x6994610", VA = "0x6995610")]
	private static extern bool get_stretchWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x69956F0", Offset = "0x69946F0", VA = "0x69956F0")]
	private static extern void set_stretchWidth_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x69957E0", Offset = "0x69947E0", VA = "0x69957E0")]
	private static extern bool get_stretchHeight_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x6995810", Offset = "0x6994810", VA = "0x6995810")]
	private static extern void set_stretchHeight_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x6995900", Offset = "0x6994900", VA = "0x6995900")]
	private static extern int get_fontSize_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x69959E0", Offset = "0x69949E0", VA = "0x69959E0")]
	private static extern void set_fontSize_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x6995AD0", Offset = "0x6994AD0", VA = "0x6995AD0")]
	private static extern FontStyle get_fontStyle_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x6995BB0", Offset = "0x6994BB0", VA = "0x6995BB0")]
	private static extern void set_fontStyle_Injected(IntPtr _unity_self, FontStyle value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x6995CA0", Offset = "0x6994CA0", VA = "0x6995CA0")]
	private static extern bool get_richText_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x6995D80", Offset = "0x6994D80", VA = "0x6995D80")]
	private static extern void set_richText_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x6995E80", Offset = "0x6994E80", VA = "0x6995E80")]
	private static extern void get_Internal_clipOffset_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x6995F70", Offset = "0x6994F70", VA = "0x6995F70")]
	private static extern void set_Internal_clipOffset_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x6996080", Offset = "0x6995080", VA = "0x6996080")]
	private static extern IntPtr Internal_Copy_Injected(GUIStyle self, IntPtr other);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x69961A0", Offset = "0x69951A0", VA = "0x69961A0")]
	private static extern IntPtr GetStyleStatePtr_Injected(IntPtr _unity_self, int idx);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x69962A0", Offset = "0x69952A0", VA = "0x69962A0")]
	private static extern void AssignStyleState_Injected(IntPtr _unity_self, int idx, IntPtr srcStyleState);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x6996390", Offset = "0x6995390", VA = "0x6996390")]
	private static extern IntPtr GetRectOffsetPtr_Injected(IntPtr _unity_self, int idx);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x6996490", Offset = "0x6995490", VA = "0x6996490")]
	private static extern void AssignRectOffset_Injected(IntPtr _unity_self, int idx, IntPtr srcRectOffset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x69965C0", Offset = "0x69955C0", VA = "0x69965C0")]
	private static extern void Internal_Draw_Injected(IntPtr _unity_self, [In] ref Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000200")]
	[Address(RVA = "0x6996700", Offset = "0x6995700", VA = "0x6996700")]
	private static extern void Internal_Draw2_Injected(IntPtr _unity_self, [In] ref Rect position, GUIContent content, int controlID, bool on);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000201")]
	[Address(RVA = "0x6996830", Offset = "0x6995830", VA = "0x6996830")]
	private static extern void Internal_DrawCursor_Injected(IntPtr _unity_self, [In] ref Rect position, GUIContent content, [In] ref Vector2 pos, [In] ref Color cursorColor);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000202")]
	[Address(RVA = "0x69969E0", Offset = "0x69959E0", VA = "0x69969E0")]
	private static extern void Internal_DrawWithTextSelection_Injected(IntPtr _unity_self, [In] ref Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus, bool drawSelectionAsComposition, [In] ref Vector2 cursorFirstPosition, [In] ref Vector2 cursorLastPosition, [In] ref Color cursorColor, [In] ref Color selectionColor);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000203")]
	[Address(RVA = "0x6996B10", Offset = "0x6995B10", VA = "0x6996B10")]
	private static extern void Internal_CalcSize_Injected(IntPtr _unity_self, GUIContent content, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000204")]
	[Address(RVA = "0x6996C20", Offset = "0x6995C20", VA = "0x6996C20")]
	private static extern void Internal_CalcSizeWithConstraints_Injected(IntPtr _unity_self, GUIContent content, [In] ref Vector2 maxSize, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000205")]
	[Address(RVA = "0x6996D40", Offset = "0x6995D40", VA = "0x6996D40")]
	private static extern float Internal_CalcHeight_Injected(IntPtr _unity_self, GUIContent content, float width);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000206")]
	[Address(RVA = "0x6996E60", Offset = "0x6995E60", VA = "0x6996E60")]
	private static extern void Internal_CalcMinMaxWidth_Injected(IntPtr _unity_self, GUIContent content, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000207")]
	[Address(RVA = "0x6996F80", Offset = "0x6995F80", VA = "0x6996F80")]
	private static extern void Internal_GetTextRectOffset_Injected(IntPtr _unity_self, [In] ref Rect screenRect, GUIContent content, [In] ref Vector2 textSize, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000208")]
	[Address(RVA = "0x6996FE0", Offset = "0x6995FE0", VA = "0x6996FE0")]
	private static extern void SetMouseTooltip_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper tooltip, [In] ref Rect screenRect);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000209")]
	[Address(RVA = "0x6997020", Offset = "0x6996020", VA = "0x6997020")]
	private static extern bool IsTooltipActive_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper tooltip);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600020A")]
	[Address(RVA = "0x6997080", Offset = "0x6996080", VA = "0x6997080")]
	private static extern void SetDefaultFont_Injected(IntPtr font);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600020B")]
	[Address(RVA = "0x6997150", Offset = "0x6996150", VA = "0x6997150")]
	private static extern IntPtr GetDefaultFont_Injected();
}
