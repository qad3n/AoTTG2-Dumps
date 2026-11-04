// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GUIStyle
// Update status: CHANGED in this game update
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
[UnityEngine.Bindings.NativeHeader("IMGUIScriptingClasses.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class GUIStyle
{
	[Token(Token = "0x200001C")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x600020C")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
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
		[Address(RVA = "0x2F95440", Offset = "0x2F93A40", VA = "0x182F95440")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000173")]
		[Address(RVA = "0x2F96AB0", Offset = "0x2F950B0", VA = "0x182F96AB0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005B")]
	[UnityEngine.Bindings.NativeProperty("Font", false, UnityEngine.Bindings.TargetType.Function)]
	public Font font
	{
		[Token(Token = "0x6000174")]
		[Address(RVA = "0x2F946D0", Offset = "0x2F92CD0", VA = "0x182F946D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000175")]
		[Address(RVA = "0x2F96240", Offset = "0x2F94840", VA = "0x182F96240")]
		set
		{
		}
	}

	[Token(Token = "0x1700005C")]
	[UnityEngine.Bindings.NativeProperty("m_ImagePosition", false, UnityEngine.Bindings.TargetType.Field)]
	public ImagePosition imagePosition
	{
		[Token(Token = "0x6000176")]
		[Address(RVA = "0x2F94880", Offset = "0x2F92E80", VA = "0x182F94880")]
		get
		{
			return default(ImagePosition);
		}
		[Token(Token = "0x6000177")]
		[Address(RVA = "0x2F96400", Offset = "0x2F94A00", VA = "0x182F96400")]
		set
		{
		}
	}

	[Token(Token = "0x1700005D")]
	[UnityEngine.Bindings.NativeProperty("m_Alignment", false, UnityEngine.Bindings.TargetType.Field)]
	public TextAnchor alignment
	{
		[Token(Token = "0x6000178")]
		[Address(RVA = "0x2F93F50", Offset = "0x2F92550", VA = "0x182F93F50")]
		get
		{
			return default(TextAnchor);
		}
		[Token(Token = "0x6000179")]
		[Address(RVA = "0x2F95A80", Offset = "0x2F94080", VA = "0x182F95A80")]
		set
		{
		}
	}

	[Token(Token = "0x1700005E")]
	[UnityEngine.Bindings.NativeProperty("m_WordWrap", false, UnityEngine.Bindings.TargetType.Field)]
	public bool wordWrap
	{
		[Token(Token = "0x600017A")]
		[Address(RVA = "0x2F95810", Offset = "0x2F93E10", VA = "0x182F95810")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600017B")]
		[Address(RVA = "0x2F96FA0", Offset = "0x2F955A0", VA = "0x182F96FA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700005F")]
	[UnityEngine.Bindings.NativeProperty("m_Clipping", false, UnityEngine.Bindings.TargetType.Field)]
	public TextClipping clipping
	{
		[Token(Token = "0x600017C")]
		[Address(RVA = "0x2F94110", Offset = "0x2F92710", VA = "0x182F94110")]
		get
		{
			return default(TextClipping);
		}
		[Token(Token = "0x600017D")]
		[Address(RVA = "0x2F95C10", Offset = "0x2F94210", VA = "0x182F95C10")]
		set
		{
		}
	}

	[Token(Token = "0x17000060")]
	[UnityEngine.Bindings.NativeProperty("m_ContentOffset", false, UnityEngine.Bindings.TargetType.Field)]
	public Vector2 contentOffset
	{
		[Token(Token = "0x600017E")]
		[Address(RVA = "0x2F941F0", Offset = "0x2F927F0", VA = "0x182F941F0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600017F")]
		[Address(RVA = "0x2F95D00", Offset = "0x2F94300", VA = "0x182F95D00")]
		set
		{
		}
	}

	[Token(Token = "0x17000061")]
	[UnityEngine.Bindings.NativeProperty("m_FixedWidth", false, UnityEngine.Bindings.TargetType.Field)]
	public float fixedWidth
	{
		[Token(Token = "0x6000180")]
		[Address(RVA = "0x2F943A0", Offset = "0x2F929A0", VA = "0x182F943A0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000181")]
		[Address(RVA = "0x2F95EE0", Offset = "0x2F944E0", VA = "0x182F95EE0")]
		set
		{
		}
	}

	[Token(Token = "0x17000062")]
	[UnityEngine.Bindings.NativeProperty("m_FixedHeight", false, UnityEngine.Bindings.TargetType.Field)]
	public float fixedHeight
	{
		[Token(Token = "0x6000182")]
		[Address(RVA = "0x2F942D0", Offset = "0x2F928D0", VA = "0x182F942D0")]
		get
		{
			return default(float);
		}
		[Token(Token = "0x6000183")]
		[Address(RVA = "0x2F95DF0", Offset = "0x2F943F0", VA = "0x182F95DF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000063")]
	[UnityEngine.Bindings.NativeProperty("m_StretchWidth", false, UnityEngine.Bindings.TargetType.Field)]
	public bool stretchWidth
	{
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x2F95740", Offset = "0x2F93D40", VA = "0x182F95740")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000185")]
		[Address(RVA = "0x2F96EB0", Offset = "0x2F954B0", VA = "0x182F96EB0")]
		set
		{
		}
	}

	[Token(Token = "0x17000064")]
	[UnityEngine.Bindings.NativeProperty("m_StretchHeight", false, UnityEngine.Bindings.TargetType.Field)]
	public bool stretchHeight
	{
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x2F95670", Offset = "0x2F93C70", VA = "0x182F95670")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000187")]
		[Address(RVA = "0x2F96DC0", Offset = "0x2F953C0", VA = "0x182F96DC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000065")]
	[UnityEngine.Bindings.NativeProperty("m_FontSize", false, UnityEngine.Bindings.TargetType.Field)]
	public int fontSize
	{
		[Token(Token = "0x6000188")]
		[Address(RVA = "0x2F94530", Offset = "0x2F92B30", VA = "0x182F94530")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000189")]
		[Address(RVA = "0x2F96070", Offset = "0x2F94670", VA = "0x182F96070")]
		set
		{
		}
	}

	[Token(Token = "0x17000066")]
	[UnityEngine.Bindings.NativeProperty("m_FontStyle", false, UnityEngine.Bindings.TargetType.Field)]
	public FontStyle fontStyle
	{
		[Token(Token = "0x600018A")]
		[Address(RVA = "0x2F94600", Offset = "0x2F92C00", VA = "0x182F94600")]
		get
		{
			return default(FontStyle);
		}
		[Token(Token = "0x600018B")]
		[Address(RVA = "0x2F96150", Offset = "0x2F94750", VA = "0x182F96150")]
		set
		{
		}
	}

	[Token(Token = "0x17000067")]
	[UnityEngine.Bindings.NativeProperty("m_RichText", false, UnityEngine.Bindings.TargetType.Field)]
	public bool richText
	{
		[Token(Token = "0x600018C")]
		[Address(RVA = "0x2F955A0", Offset = "0x2F93BA0", VA = "0x182F955A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600018D")]
		[Address(RVA = "0x2F96CD0", Offset = "0x2F952D0", VA = "0x182F96CD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000068")]
	[UnityEngine.Bindings.NativeProperty("m_ClipOffset", false, UnityEngine.Bindings.TargetType.Field)]
	internal Vector2 Internal_clipOffset
	{
		[Token(Token = "0x600018E")]
		[Address(RVA = "0x2F93DB0", Offset = "0x2F923B0", VA = "0x182F93DB0")]
		get
		{
			return default(Vector2);
		}
		[Token(Token = "0x600018F")]
		[Address(RVA = "0x2F958F0", Offset = "0x2F93EF0", VA = "0x182F958F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000069")]
	public string name
	{
		[Token(Token = "0x60001A9")]
		[Address(RVA = "0x2F94D50", Offset = "0x2F93350", VA = "0x182F94D50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AA")]
		[Address(RVA = "0x2F96550", Offset = "0x2F94B50", VA = "0x182F96550")]
		set
		{
		}
	}

	[Token(Token = "0x1700006A")]
	public GUIStyleState normal
	{
		[Token(Token = "0x60001AB")]
		[Address(RVA = "0x2F94E50", Offset = "0x2F93450", VA = "0x182F94E50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AC")]
		[Address(RVA = "0x2F96590", Offset = "0x2F94B90", VA = "0x182F96590")]
		set
		{
		}
	}

	[Token(Token = "0x1700006B")]
	public GUIStyleState hover
	{
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x2F94780", Offset = "0x2F92D80", VA = "0x182F94780")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001AE")]
		[Address(RVA = "0x2F96310", Offset = "0x2F94910", VA = "0x182F96310")]
		set
		{
		}
	}

	[Token(Token = "0x1700006C")]
	public GUIStyleState active
	{
		[Token(Token = "0x60001AF")]
		[Address(RVA = "0x2F93E50", Offset = "0x2F92450", VA = "0x182F93E50")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B0")]
		[Address(RVA = "0x2F95990", Offset = "0x2F93F90", VA = "0x182F95990")]
		set
		{
		}
	}

	[Token(Token = "0x1700006D")]
	public GUIStyleState onNormal
	{
		[Token(Token = "0x60001B1")]
		[Address(RVA = "0x2F95150", Offset = "0x2F93750", VA = "0x182F95150")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B2")]
		[Address(RVA = "0x2F96850", Offset = "0x2F94E50", VA = "0x182F96850")]
		set
		{
		}
	}

	[Token(Token = "0x1700006E")]
	public GUIStyleState onHover
	{
		[Token(Token = "0x60001B3")]
		[Address(RVA = "0x2F95090", Offset = "0x2F93690", VA = "0x182F95090")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B4")]
		[Address(RVA = "0x2F967A0", Offset = "0x2F94DA0", VA = "0x182F967A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public GUIStyleState onActive
	{
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x2F94F10", Offset = "0x2F93510", VA = "0x182F94F10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x2F96640", Offset = "0x2F94C40", VA = "0x182F96640")]
		set
		{
		}
	}

	[Token(Token = "0x17000070")]
	public GUIStyleState focused
	{
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x2F94430", Offset = "0x2F92A30", VA = "0x182F94430")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x2F95F80", Offset = "0x2F94580", VA = "0x182F95F80")]
		set
		{
		}
	}

	[Token(Token = "0x17000071")]
	public GUIStyleState onFocused
	{
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x2F94FD0", Offset = "0x2F935D0", VA = "0x182F94FD0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BA")]
		[Address(RVA = "0x2F966F0", Offset = "0x2F94CF0", VA = "0x182F966F0")]
		set
		{
		}
	}

	[Token(Token = "0x17000072")]
	public RectOffset border
	{
		[Token(Token = "0x60001BB")]
		[Address(RVA = "0x2F93FE0", Offset = "0x2F925E0", VA = "0x182F93FE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BC")]
		[Address(RVA = "0x2F95B20", Offset = "0x2F94120", VA = "0x182F95B20")]
		set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public RectOffset margin
	{
		[Token(Token = "0x60001BD")]
		[Address(RVA = "0x2F94C60", Offset = "0x2F93260", VA = "0x182F94C60")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001BE")]
		[Address(RVA = "0x2F964A0", Offset = "0x2F94AA0", VA = "0x182F964A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000074")]
	public RectOffset padding
	{
		[Token(Token = "0x60001BF")]
		[Address(RVA = "0x2F95300", Offset = "0x2F93900", VA = "0x182F95300")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C0")]
		[Address(RVA = "0x2F969B0", Offset = "0x2F94FB0", VA = "0x182F969B0")]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public RectOffset overflow
	{
		[Token(Token = "0x60001C1")]
		[Address(RVA = "0x2F95210", Offset = "0x2F93810", VA = "0x182F95210")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001C2")]
		[Address(RVA = "0x2F96900", Offset = "0x2F94F00", VA = "0x182F96900")]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public float lineHeight
	{
		[Token(Token = "0x60001C3")]
		[Address(RVA = "0x2F94AA0", Offset = "0x2F930A0", VA = "0x182F94AA0")]
		get
		{
			return default(float);
		}
	}

	[Token(Token = "0x17000077")]
	public static GUIStyle none
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x2F94D90", Offset = "0x2F93390", VA = "0x182F94D90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000078")]
	public bool isHeightDependantOnWidth
	{
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x2F94910", Offset = "0x2F92F10", VA = "0x182F94910")]
		get
		{
			return default(bool);
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000190")]
	[Address(RVA = "0x2F92F30", Offset = "0x2F91530", VA = "0x182F92F30")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_Create", IsThreadSafe = true)]
	private static extern IntPtr Internal_Create([UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] GUIStyle self);

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x2F92EB0", Offset = "0x2F914B0", VA = "0x182F92EB0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_Copy", IsThreadSafe = true)]
	private static IntPtr Internal_Copy([UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] GUIStyle self, GUIStyle other)
	{
		return default(IntPtr);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000192")]
	[Address(RVA = "0x2F92FB0", Offset = "0x2F915B0", VA = "0x182F92FB0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_Destroy", IsThreadSafe = true)]
	private static extern void Internal_Destroy(IntPtr self);

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x2F92AE0", Offset = "0x2F910E0", VA = "0x182F92AE0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::GetStyleStatePtr", IsThreadSafe = true, HasExplicitThis = true)]
	private IntPtr GetStyleStatePtr(int idx)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x2F90310", Offset = "0x2F8E910", VA = "0x182F90310")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::AssignStyleState", HasExplicitThis = true)]
	private void AssignStyleState(int idx, IntPtr srcStyleState)
	{
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x2F92A00", Offset = "0x2F91000", VA = "0x182F92A00")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::GetRectOffsetPtr", HasExplicitThis = true)]
	private IntPtr GetRectOffsetPtr(int idx)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x2F90210", Offset = "0x2F8E810", VA = "0x182F90210")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::AssignRectOffset", HasExplicitThis = true)]
	private void AssignRectOffset(int idx, IntPtr srcRectOffset)
	{
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x2F93450", Offset = "0x2F91A50", VA = "0x182F93450")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_Draw", HasExplicitThis = true)]
	private void Internal_Draw(Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
	{
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x2F93050", Offset = "0x2F91650", VA = "0x182F93050")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_Draw2", HasExplicitThis = true)]
	private void Internal_Draw2(Rect position, GUIContent content, int controlID, bool on)
	{
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x2F93160", Offset = "0x2F91760", VA = "0x182F93160")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_DrawCursor", HasExplicitThis = true)]
	private void Internal_DrawCursor(Rect position, GUIContent content, Vector2 pos, Color cursorColor)
	{
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x2F932B0", Offset = "0x2F918B0", VA = "0x182F932B0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_DrawWithTextSelection", HasExplicitThis = true)]
	private void Internal_DrawWithTextSelection(Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus, bool drawSelectionAsComposition, Vector2 cursorFirstPosition, Vector2 cursorLastPosition, Color cursorColor, Color selectionColor)
	{
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x2F90640", Offset = "0x2F8EC40", VA = "0x182F90640")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_CalcSize", HasExplicitThis = true)]
	internal Vector2 Internal_CalcSize(GUIContent content)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x2F92D40", Offset = "0x2F91340", VA = "0x182F92D40")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_CalcSizeWithConstraints", HasExplicitThis = true)]
	internal Vector2 Internal_CalcSizeWithConstraints(GUIContent content, Vector2 maxSize)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x2F903C0", Offset = "0x2F8E9C0", VA = "0x182F903C0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_CalcHeight", HasExplicitThis = true)]
	private float Internal_CalcHeight(GUIContent content, float width)
	{
		return default(float);
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x2F92C40", Offset = "0x2F91240", VA = "0x182F92C40")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_CalcMinMaxWidth", HasExplicitThis = true)]
	private Vector2 Internal_CalcMinMaxWidth(GUIContent content)
	{
		return default(Vector2);
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x2F935A0", Offset = "0x2F91BA0", VA = "0x182F935A0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_GetTextRectOffset", HasExplicitThis = true)]
	internal Vector2 Internal_GetTextRectOffset(Rect screenRect, GUIContent content, Vector2 textSize)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x2F93970", Offset = "0x2F91F70", VA = "0x182F93970")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::SetMouseTooltip")]
	internal static void SetMouseTooltip(string tooltip, Rect screenRect)
	{
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x2F936A0", Offset = "0x2F91CA0", VA = "0x182F936A0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::IsTooltipActive")]
	internal static bool IsTooltipActive(string tooltip)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x2F93520", Offset = "0x2F91B20", VA = "0x182F93520")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_GetCursorFlashOffset")]
	private static extern float Internal_GetCursorFlashOffset();

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x2F93890", Offset = "0x2F91E90", VA = "0x182F93890")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle::SetDefaultFont")]
	internal static void SetDefaultFont(Font font)
	{
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x2F921F0", Offset = "0x2F907F0", VA = "0x182F921F0")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle::GetDefaultFont")]
	internal static Font GetDefaultFont()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x2F92F70", Offset = "0x2F91570", VA = "0x182F92F70")]
	[UnityEngine.Bindings.FreeFunction(Name = "GUIStyle_Bindings::Internal_DestroyTextGenerator")]
	internal static extern void Internal_DestroyTextGenerator(int meshInfoId);

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x2F93CE0", Offset = "0x2F922E0", VA = "0x182F93CE0")]
	public GUIStyle()
	{
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x2F93BD0", Offset = "0x2F921D0", VA = "0x182F93BD0")]
	public GUIStyle(GUIStyle other)
	{
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x2F91B40", Offset = "0x2F90140", VA = "0x182F91B40", Slot = "1")]
	~GUIStyle()
	{
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x2F91610", Offset = "0x2F8FC10", VA = "0x182F91610")]
	public void Draw(Rect position, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
	{
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x2F91520", Offset = "0x2F8FB20", VA = "0x182F91520")]
	public void Draw(Rect position, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
	{
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x2F91730", Offset = "0x2F8FD30", VA = "0x182F91730")]
	public void Draw(Rect position, GUIContent content, int controlID)
	{
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x2F91370", Offset = "0x2F8F970", VA = "0x182F91370")]
	public void Draw(Rect position, GUIContent content, int controlID, bool on)
	{
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x2F91880", Offset = "0x2F8FE80", VA = "0x182F91880")]
	public void Draw(Rect position, GUIContent content, int controlID, bool on, bool hover)
	{
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x2F913B0", Offset = "0x2F8F9B0", VA = "0x182F913B0")]
	private void Draw(Rect position, GUIContent content, int controlId, bool isHover, bool isActive, bool on, bool hasKeyboardFocus)
	{
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x2F906F0", Offset = "0x2F8ECF0", VA = "0x182F906F0")]
	public void DrawCursor(Rect position, GUIContent content, int controlID, int character)
	{
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x2F90A30", Offset = "0x2F8F030", VA = "0x182F90A30")]
	internal void DrawWithTextSelection(Rect position, GUIContent content, bool isActive, bool hasKeyboardFocus, int firstSelectedCharacter, int lastSelectedCharacter, bool drawSelectionAsComposition, Color selectionColor)
	{
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x2F91160", Offset = "0x2F8F760", VA = "0x182F91160")]
	internal void DrawWithTextSelection(Rect position, GUIContent content, int controlID, int firstSelectedCharacter, int lastSelectedCharacter, bool drawSelectionAsComposition)
	{
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x2F90F50", Offset = "0x2F8F550", VA = "0x182F90F50")]
	public void DrawWithTextSelection(Rect position, GUIContent content, int controlID, int firstSelectedCharacter, int lastSelectedCharacter)
	{
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x2F91C00", Offset = "0x2F90200", VA = "0x182F91C00")]
	public Vector2 GetCursorPixelPosition(Rect position, GUIContent content, int cursorStringIndex)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x2F90640", Offset = "0x2F8EC40", VA = "0x182F90640")]
	public Vector2 CalcSize(GUIContent content)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x2F90540", Offset = "0x2F8EB40", VA = "0x182F90540")]
	internal Vector2 CalcSizeWithConstraints(GUIContent content, Vector2 constraints)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x2F903C0", Offset = "0x2F8E9C0", VA = "0x182F903C0")]
	public float CalcHeight(GUIContent content, float width)
	{
		return default(float);
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x2F928D0", Offset = "0x2F90ED0", VA = "0x182F928D0")]
	internal Vector2 GetPreferredSize(string content, Rect rect)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x2F90470", Offset = "0x2F8EA70", VA = "0x182F90470")]
	public void CalcMinMaxWidth(GUIContent content, out float minWidth, out float maxWidth)
	{
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x2F93B20", Offset = "0x2F92120", VA = "0x182F93B20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x2F923C0", Offset = "0x2F909C0", VA = "0x182F923C0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void GetMeshInfo(GUIStyle style, Color color, string content, Rect rect, ref UnityEngine.TextCore.Text.MeshInfoBindings[] meshInfos, ref Vector2 dimensions, ref int generationId)
	{
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x2F92270", Offset = "0x2F90870", VA = "0x182F92270")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void GetDimensions(GUIStyle style, Color color, string content, Rect rect, ref Vector2 dimensions)
	{
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x2F92390", Offset = "0x2F90990", VA = "0x182F92390")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void GetLineHeight(GUIStyle style, ref float lineHeight)
	{
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x2F91A70", Offset = "0x2F90070", VA = "0x182F91A70")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void EmptyManagedCache()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x2F953F0", Offset = "0x2F939F0", VA = "0x182F953F0")]
	private static extern void get_rawName_Injected(IntPtr _unity_self, out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x2F96A60", Offset = "0x2F95060", VA = "0x182F96A60")]
	private static extern void set_rawName_Injected(IntPtr _unity_self, ref UnityEngine.Bindings.ManagedSpanWrapper value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x2F94690", Offset = "0x2F92C90", VA = "0x182F94690")]
	private static extern IntPtr get_font_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x2F961F0", Offset = "0x2F947F0", VA = "0x182F961F0")]
	private static extern void set_font_Injected(IntPtr _unity_self, IntPtr value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x2F94840", Offset = "0x2F92E40", VA = "0x182F94840")]
	private static extern ImagePosition get_imagePosition_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x2F963C0", Offset = "0x2F949C0", VA = "0x182F963C0")]
	private static extern void set_imagePosition_Injected(IntPtr _unity_self, ImagePosition value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x2F93F10", Offset = "0x2F92510", VA = "0x182F93F10")]
	private static extern TextAnchor get_alignment_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x2F95A40", Offset = "0x2F94040", VA = "0x182F95A40")]
	private static extern void set_alignment_Injected(IntPtr _unity_self, TextAnchor value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x2F957D0", Offset = "0x2F93DD0", VA = "0x182F957D0")]
	private static extern bool get_wordWrap_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x2F96F50", Offset = "0x2F95550", VA = "0x182F96F50")]
	private static extern void set_wordWrap_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x2F940D0", Offset = "0x2F926D0", VA = "0x182F940D0")]
	private static extern TextClipping get_clipping_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x2F95BD0", Offset = "0x2F941D0", VA = "0x182F95BD0")]
	private static extern void set_clipping_Injected(IntPtr _unity_self, TextClipping value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x2F941A0", Offset = "0x2F927A0", VA = "0x182F941A0")]
	private static extern void get_contentOffset_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x2F95CB0", Offset = "0x2F942B0", VA = "0x182F95CB0")]
	private static extern void set_contentOffset_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x2F94360", Offset = "0x2F92960", VA = "0x182F94360")]
	private static extern float get_fixedWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x2F95E90", Offset = "0x2F94490", VA = "0x182F95E90")]
	private static extern void set_fixedWidth_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001EC")]
	[Address(RVA = "0x2F94290", Offset = "0x2F92890", VA = "0x182F94290")]
	private static extern float get_fixedHeight_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x2F95DA0", Offset = "0x2F943A0", VA = "0x182F95DA0")]
	private static extern void set_fixedHeight_Injected(IntPtr _unity_self, float value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001EE")]
	[Address(RVA = "0x2F95700", Offset = "0x2F93D00", VA = "0x182F95700")]
	private static extern bool get_stretchWidth_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001EF")]
	[Address(RVA = "0x2F96E60", Offset = "0x2F95460", VA = "0x182F96E60")]
	private static extern void set_stretchWidth_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x2F95630", Offset = "0x2F93C30", VA = "0x182F95630")]
	private static extern bool get_stretchHeight_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x2F96D70", Offset = "0x2F95370", VA = "0x182F96D70")]
	private static extern void set_stretchHeight_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x2F944F0", Offset = "0x2F92AF0", VA = "0x182F944F0")]
	private static extern int get_fontSize_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x2F96030", Offset = "0x2F94630", VA = "0x182F96030")]
	private static extern void set_fontSize_Injected(IntPtr _unity_self, int value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F4")]
	[Address(RVA = "0x2F945C0", Offset = "0x2F92BC0", VA = "0x182F945C0")]
	private static extern FontStyle get_fontStyle_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x2F96110", Offset = "0x2F94710", VA = "0x182F96110")]
	private static extern void set_fontStyle_Injected(IntPtr _unity_self, FontStyle value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x2F95560", Offset = "0x2F93B60", VA = "0x182F95560")]
	private static extern bool get_richText_Injected(IntPtr _unity_self);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x2F96C80", Offset = "0x2F95280", VA = "0x182F96C80")]
	private static extern void set_richText_Injected(IntPtr _unity_self, bool value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x2F93D60", Offset = "0x2F92360", VA = "0x182F93D60")]
	private static extern void get_Internal_clipOffset_Injected(IntPtr _unity_self, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x2F958A0", Offset = "0x2F93EA0", VA = "0x182F958A0")]
	private static extern void set_Internal_clipOffset_Injected(IntPtr _unity_self, [In] ref Vector2 value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x2F92E60", Offset = "0x2F91460", VA = "0x182F92E60")]
	private static extern IntPtr Internal_Copy_Injected(GUIStyle self, IntPtr other);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x2F92AA0", Offset = "0x2F910A0", VA = "0x182F92AA0")]
	private static extern IntPtr GetStyleStatePtr_Injected(IntPtr _unity_self, int idx);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x2F902C0", Offset = "0x2F8E8C0", VA = "0x182F902C0")]
	private static extern void AssignStyleState_Injected(IntPtr _unity_self, int idx, IntPtr srcStyleState);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x2F929C0", Offset = "0x2F90FC0", VA = "0x182F929C0")]
	private static extern IntPtr GetRectOffsetPtr_Injected(IntPtr _unity_self, int idx);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x2F901C0", Offset = "0x2F8E7C0", VA = "0x182F901C0")]
	private static extern void AssignRectOffset_Injected(IntPtr _unity_self, int idx, IntPtr srcRectOffset);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x2F933D0", Offset = "0x2F919D0", VA = "0x182F933D0")]
	private static extern void Internal_Draw_Injected(IntPtr _unity_self, [In] ref Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000200")]
	[Address(RVA = "0x2F92FF0", Offset = "0x2F915F0", VA = "0x182F92FF0")]
	private static extern void Internal_Draw2_Injected(IntPtr _unity_self, [In] ref Rect position, GUIContent content, int controlID, bool on);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000201")]
	[Address(RVA = "0x2F93110", Offset = "0x2F91710", VA = "0x182F93110")]
	private static extern void Internal_DrawCursor_Injected(IntPtr _unity_self, [In] ref Rect position, GUIContent content, [In] ref Vector2 pos, [In] ref Color cursorColor);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000202")]
	[Address(RVA = "0x2F93220", Offset = "0x2F91820", VA = "0x182F93220")]
	private static extern void Internal_DrawWithTextSelection_Injected(IntPtr _unity_self, [In] ref Rect screenRect, GUIContent content, bool isHover, bool isActive, bool on, bool hasKeyboardFocus, bool drawSelectionAsComposition, [In] ref Vector2 cursorFirstPosition, [In] ref Vector2 cursorLastPosition, [In] ref Color cursorColor, [In] ref Color selectionColor);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000203")]
	[Address(RVA = "0x2F92E00", Offset = "0x2F91400", VA = "0x182F92E00")]
	private static extern void Internal_CalcSize_Injected(IntPtr _unity_self, GUIContent content, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000204")]
	[Address(RVA = "0x2F92CF0", Offset = "0x2F912F0", VA = "0x182F92CF0")]
	private static extern void Internal_CalcSizeWithConstraints_Injected(IntPtr _unity_self, GUIContent content, [In] ref Vector2 maxSize, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000205")]
	[Address(RVA = "0x2F92B80", Offset = "0x2F91180", VA = "0x182F92B80")]
	private static extern float Internal_CalcHeight_Injected(IntPtr _unity_self, GUIContent content, float width);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000206")]
	[Address(RVA = "0x2F92BE0", Offset = "0x2F911E0", VA = "0x182F92BE0")]
	private static extern void Internal_CalcMinMaxWidth_Injected(IntPtr _unity_self, GUIContent content, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000207")]
	[Address(RVA = "0x2F93550", Offset = "0x2F91B50", VA = "0x182F93550")]
	private static extern void Internal_GetTextRectOffset_Injected(IntPtr _unity_self, [In] ref Rect screenRect, GUIContent content, [In] ref Vector2 textSize, out Vector2 ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000208")]
	[Address(RVA = "0x2F93920", Offset = "0x2F91F20", VA = "0x182F93920")]
	private static extern void SetMouseTooltip_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper tooltip, [In] ref Rect screenRect);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000209")]
	[Address(RVA = "0x2F93660", Offset = "0x2F91C60", VA = "0x182F93660")]
	private static extern bool IsTooltipActive_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper tooltip);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600020A")]
	[Address(RVA = "0x2F93850", Offset = "0x2F91E50", VA = "0x182F93850")]
	private static extern void SetDefaultFont_Injected(IntPtr font);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600020B")]
	[Address(RVA = "0x2F921C0", Offset = "0x2F907C0", VA = "0x182F921C0")]
	private static extern IntPtr GetDefaultFont_Injected();
}
