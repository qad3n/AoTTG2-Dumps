// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GUI
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
using UnityEngineInternal;

namespace UnityEngine;

[Token(Token = "0x2000007")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUISkin.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUI.bindings.h")]
public class GUI
{
	[Token(Token = "0x2000008")]
	public delegate void WindowFunction(int id);

	[Token(Token = "0x400003B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int s_ScrollControlId;

	[Token(Token = "0x400003C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private static int s_HotTextField;

	[Token(Token = "0x400003D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly int s_BoxHash;

	[Token(Token = "0x400003E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	private static readonly int s_ButonHash;

	[Token(Token = "0x400003F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly int s_RepeatButtonHash;

	[Token(Token = "0x4000040")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private static readonly int s_ToggleHash;

	[Token(Token = "0x4000041")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly int s_ButtonGridHash;

	[Token(Token = "0x4000042")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private static readonly int s_SliderHash;

	[Token(Token = "0x4000043")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly int s_BeginGroupHash;

	[Token(Token = "0x4000044")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private static readonly int s_ScrollviewHash;

	[Token(Token = "0x4000047")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static GUISkin s_Skin;

	[Token(Token = "0x4000048")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal static Rect s_ToolTipRect;

	[Token(Token = "0x1700001E")]
	public static Color color
	{
		[Token(Token = "0x6000043")]
		[Address(RVA = "0x4E411E0", Offset = "0x4E411E0", VA = "0x4E411E0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x4E412A0", Offset = "0x4E412A0", VA = "0x4E412A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public static Color backgroundColor
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x4E41370", Offset = "0x4E41370", VA = "0x4E41370")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x4E41430", Offset = "0x4E41430", VA = "0x4E41430")]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public static Color contentColor
	{
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x4E41500", Offset = "0x4E41500", VA = "0x4E41500")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x4E415C0", Offset = "0x4E415C0", VA = "0x4E415C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public static extern bool changed
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x4E41690", Offset = "0x4E41690", VA = "0x4E41690")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x4E416C0", Offset = "0x4E416C0", VA = "0x4E416C0")]
		set;
	}

	[Token(Token = "0x17000022")]
	public static extern bool enabled
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x4E416F0", Offset = "0x4E416F0", VA = "0x4E416F0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x4E41720", Offset = "0x4E41720", VA = "0x4E41720")]
		set;
	}

	[Token(Token = "0x17000023")]
	public static extern int depth
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x4E41750", Offset = "0x4E41750", VA = "0x4E41750")]
		set;
	}

	[Token(Token = "0x17000024")]
	internal static extern bool usePageScrollbars
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x4E41780", Offset = "0x4E41780", VA = "0x4E41780")]
		get;
	}

	[Token(Token = "0x17000025")]
	internal static extern Material blendMaterial
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x4E417B0", Offset = "0x4E417B0", VA = "0x4E417B0")]
		[UnityEngine.Bindings.FreeFunction("GetGUIBlendMaterial")]
		get;
	}

	[Token(Token = "0x17000026")]
	internal static extern Material blitMaterial
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x4E417E0", Offset = "0x4E417E0", VA = "0x4E417E0")]
		[UnityEngine.Bindings.FreeFunction("GetGUIBlitMaterial")]
		get;
	}

	[Token(Token = "0x17000027")]
	internal static extern Material roundedRectMaterial
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x4E41810", Offset = "0x4E41810", VA = "0x4E41810")]
		[UnityEngine.Bindings.FreeFunction("GetGUIRoundedRectMaterial")]
		get;
	}

	[Token(Token = "0x17000028")]
	internal static extern Material roundedRectWithColorPerBorderMaterial
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x4E41840", Offset = "0x4E41840", VA = "0x4E41840")]
		[UnityEngine.Bindings.FreeFunction("GetGUIRoundedRectWithColorPerBorderMaterial")]
		get;
	}

	[Token(Token = "0x17000029")]
	internal static int scrollTroughSide
	{
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x4E41ED0", Offset = "0x4E41ED0", VA = "0x4E41ED0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x4E41F40", Offset = "0x4E41F40", VA = "0x4E41F40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	internal static DateTime nextScrollStepTime
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x4E41F90", Offset = "0x4E41F90", VA = "0x4E41F90")]
		[CompilerGenerated]
		get
		{
			return default(DateTime);
		}
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x4E42000", Offset = "0x4E42000", VA = "0x4E42000")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public static GUISkin skin
	{
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x4E42270", Offset = "0x4E42270", VA = "0x4E42270")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x4E42060", Offset = "0x4E42060", VA = "0x4E42060")]
		set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	public static Matrix4x4 matrix
	{
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x4E42410", Offset = "0x4E42410", VA = "0x4E42410")]
		get
		{
			return default(Matrix4x4);
		}
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x4E42520", Offset = "0x4E42520", VA = "0x4E42520")]
		set
		{
		}
	}

	[Token(Token = "0x1700002D")]
	internal static GenericStack scrollViewStates
	{
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x4E49CD0", Offset = "0x4E49CD0", VA = "0x4E49CD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4E41870", Offset = "0x4E41870", VA = "0x4E41870")]
	internal static extern void GrabMouseControl(int id);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000054")]
	[Address(RVA = "0x4E418A0", Offset = "0x4E418A0", VA = "0x4E418A0")]
	internal static extern bool HasMouseControl(int id);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4E418D0", Offset = "0x4E418D0", VA = "0x4E418D0")]
	internal static extern void ReleaseMouseControl();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000056")]
	[Address(RVA = "0x4E41900", Offset = "0x4E41900", VA = "0x4E41900")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().SetNameOfNextControl")]
	public static extern void SetNextControlName(string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x4E41930", Offset = "0x4E41930", VA = "0x4E41930")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().GetNameOfFocusedControl")]
	public static extern string GetNameOfFocusedControl();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4E41960", Offset = "0x4E41960", VA = "0x4E41960")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().FocusKeyboardControl")]
	public static extern void FocusControl(string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4E41990", Offset = "0x4E41990", VA = "0x4E41990")]
	internal static extern void InternalRepaintEditorWindow();

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x4E419C0", Offset = "0x4E419C0", VA = "0x4E419C0")]
	private static Rect Internal_DoWindow(int id, int instanceID, Rect clientRect, WindowFunction func, GUIContent title, GUIStyle style, object skin, bool forceRectOnLayout)
	{
		return default(Rect);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x4E41B10", Offset = "0x4E41B10", VA = "0x4E41B10")]
	public static void DragWindow(Rect position)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x4E41BE0", Offset = "0x4E41BE0", VA = "0x4E41BE0")]
	static GUI()
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x4E42130", Offset = "0x4E42130", VA = "0x4E42130")]
	internal static void DoSetSkin(GUISkin newSkin)
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x4E425D0", Offset = "0x4E425D0", VA = "0x4E425D0")]
	public static void Label(Rect position, string text)
	{
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x4E42890", Offset = "0x4E42890", VA = "0x4E42890")]
	public static void Label(Rect position, string text, GUIStyle style)
	{
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4E42820", Offset = "0x4E42820", VA = "0x4E42820")]
	public static void Label(Rect position, GUIContent content, GUIStyle style)
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x4E42EE0", Offset = "0x4E42EE0", VA = "0x4E42EE0")]
	public static void DrawTexture(Rect position, Texture image)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x4E43010", Offset = "0x4E43010", VA = "0x4E43010")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x4E430E0", Offset = "0x4E430E0", VA = "0x4E430E0")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend)
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x4E43160", Offset = "0x4E43160", VA = "0x4E43160")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect)
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4E432A0", Offset = "0x4E432A0", VA = "0x4E432A0")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect, Color color, float borderWidth, float borderRadius)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x4E434C0", Offset = "0x4E434C0", VA = "0x4E434C0")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect, Color color, Vector4 borderWidths, float borderRadius)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x4E43600", Offset = "0x4E43600", VA = "0x4E43600")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect, Color color, Vector4 borderWidths, Vector4 borderRadiuses)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x4E437B0", Offset = "0x4E437B0", VA = "0x4E437B0")]
	internal static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect, Color color, Vector4 borderWidths, Vector4 borderRadiuses, bool drawSmoothCorners)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x4E43950", Offset = "0x4E43950", VA = "0x4E43950")]
	internal static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect, Color leftColor, Color topColor, Color rightColor, Color bottomColor, Vector4 borderWidths, Vector4 borderRadiuses, bool drawSmoothCorners)
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x4E44200", Offset = "0x4E44200", VA = "0x4E44200")]
	internal static bool CalculateScaledTextureRects(Rect position, ScaleMode scaleMode, float imageAspect, ref Rect outScreenRect, ref Rect outSourceRect)
	{
		return default(bool);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x4E44340", Offset = "0x4E44340", VA = "0x4E44340")]
	public static void Box(Rect position, string text)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x4E44400", Offset = "0x4E44400", VA = "0x4E44400")]
	public static void Box(Rect position, GUIContent content, GUIStyle style)
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x4E44810", Offset = "0x4E44810", VA = "0x4E44810")]
	public static bool Button(Rect position, string text)
	{
		return default(bool);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x4E448D0", Offset = "0x4E448D0", VA = "0x4E448D0")]
	public static bool Button(Rect position, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4E44AA0", Offset = "0x4E44AA0", VA = "0x4E44AA0")]
	internal static bool Button(Rect position, int id, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4E44D80", Offset = "0x4E44D80", VA = "0x4E44D80")]
	private static bool DoRepeatButton(Rect position, GUIContent content, GUIStyle style, FocusType focusType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x4E452D0", Offset = "0x4E452D0", VA = "0x4E452D0")]
	public static string TextField(Rect position, string text)
	{
		return null;
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x4E456D0", Offset = "0x4E456D0", VA = "0x4E456D0")]
	internal static string PasswordFieldGetStrToShow(string password, char maskChar)
	{
		return null;
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x4E45820", Offset = "0x4E45820", VA = "0x4E45820")]
	public static string TextArea(Rect position, string text, GUIStyle style)
	{
		return null;
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x4E455C0", Offset = "0x4E455C0", VA = "0x4E455C0")]
	internal static void DoTextField(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x4E45A10", Offset = "0x4E45A10", VA = "0x4E45A10")]
	internal static void DoTextField(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, string secureText)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x4E45AC0", Offset = "0x4E45AC0", VA = "0x4E45AC0")]
	internal static void DoTextField(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, string secureText, char maskChar)
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x4E45EB0", Offset = "0x4E45EB0", VA = "0x4E45EB0")]
	private static void HandleTextFieldEventForTouchscreen(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, string secureText, char maskChar, TextEditor editor)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x4E46450", Offset = "0x4E46450", VA = "0x4E46450")]
	private static void HandleTextFieldEventForDesktop(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, TextEditor editor)
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x4E47160", Offset = "0x4E47160", VA = "0x4E47160")]
	public static bool Toggle(Rect position, bool value, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x4E474D0", Offset = "0x4E474D0", VA = "0x4E474D0")]
	internal static bool DoControl(Rect position, int id, bool on, bool hover, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x4E42980", Offset = "0x4E42980", VA = "0x4E42980")]
	private static void DoLabel(Rect position, GUIContent content, GUIStyle style)
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x4E47380", Offset = "0x4E47380", VA = "0x4E47380")]
	internal static bool DoToggle(Rect position, int id, bool value, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x4E44C40", Offset = "0x4E44C40", VA = "0x4E44C40")]
	internal static bool DoButton(Rect position, int id, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x4E47E10", Offset = "0x4E47E10", VA = "0x4E47E10")]
	public static float HorizontalSlider(Rect position, float value, float leftValue, float rightValue, GUIStyle slider, GUIStyle thumb)
	{
		return default(float);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x4E47EF0", Offset = "0x4E47EF0", VA = "0x4E47EF0")]
	public static float Slider(Rect position, float value, float size, float start, float end, GUIStyle slider, GUIStyle thumb, bool horiz, int id, [Optional] GUIStyle thumbExtent)
	{
		return default(float);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x4E480F0", Offset = "0x4E480F0", VA = "0x4E480F0")]
	public static float HorizontalScrollbar(Rect position, float value, float size, float leftValue, float rightValue, GUIStyle style)
	{
		return default(float);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4E48F70", Offset = "0x4E48F70", VA = "0x4E48F70")]
	internal static bool ScrollerRepeatButton(int scrollerID, Rect rect, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x4E492C0", Offset = "0x4E492C0", VA = "0x4E492C0")]
	public static float VerticalScrollbar(Rect position, float value, float size, float topValue, float bottomValue, GUIStyle style)
	{
		return default(float);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x4E48760", Offset = "0x4E48760", VA = "0x4E48760")]
	internal static float Scroller(Rect position, float value, float size, float leftValue, float rightValue, GUIStyle slider, GUIStyle thumb, GUIStyle leftButton, GUIStyle rightButton, bool horiz)
	{
		return default(float);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x4E49650", Offset = "0x4E49650", VA = "0x4E49650")]
	public static void BeginGroup(Rect position, GUIContent content, GUIStyle style)
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x4E496F0", Offset = "0x4E496F0", VA = "0x4E496F0")]
	internal static void BeginGroup(Rect position, GUIContent content, GUIStyle style, Vector2 scrollOffset)
	{
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x4E49C70", Offset = "0x4E49C70", VA = "0x4E49C70")]
	public static void EndGroup()
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x4E49D40", Offset = "0x4E49D40", VA = "0x4E49D40")]
	public static Vector2 BeginScrollView(Rect position, Vector2 scrollPosition, Rect viewRect)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x4E49FC0", Offset = "0x4E49FC0", VA = "0x4E49FC0")]
	internal static Vector2 BeginScrollView(Rect position, Vector2 scrollPosition, Rect viewRect, bool alwaysShowHorizontal, bool alwaysShowVertical, GUIStyle horizontalScrollbar, GUIStyle verticalScrollbar, GUIStyle background)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x4E4BB10", Offset = "0x4E4BB10", VA = "0x4E4BB10")]
	public static void EndScrollView()
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x4E4BB70", Offset = "0x4E4BB70", VA = "0x4E4BB70")]
	public static void EndScrollView(bool handleScrollWheel)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x4E4CC70", Offset = "0x4E4CC70", VA = "0x4E4CC70")]
	public static Rect Window(int id, Rect clientRect, WindowFunction func, GUIContent title, GUIStyle style)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x4E4CD60", Offset = "0x4E4CD60", VA = "0x4E4CD60")]
	private static Rect DoWindow(int id, Rect clientRect, WindowFunction func, GUIContent title, GUIStyle style, GUISkin skin, bool forceRectOnLayout)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x4E4CEF0", Offset = "0x4E4CEF0", VA = "0x4E4CEF0")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void CallWindowDelegate(WindowFunction func, int id, int instanceID, GUISkin _skin, int forceRect, float width, float height, GUIStyle style)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x4E4DD10", Offset = "0x4E4DD10", VA = "0x4E4DD10")]
	public static void DragWindow()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000098")]
	[Address(RVA = "0x4E41270", Offset = "0x4E41270", VA = "0x4E41270")]
	private static extern void get_color_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000099")]
	[Address(RVA = "0x4E41340", Offset = "0x4E41340", VA = "0x4E41340")]
	private static extern void set_color_Injected([In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009A")]
	[Address(RVA = "0x4E41400", Offset = "0x4E41400", VA = "0x4E41400")]
	private static extern void get_backgroundColor_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009B")]
	[Address(RVA = "0x4E414D0", Offset = "0x4E414D0", VA = "0x4E414D0")]
	private static extern void set_backgroundColor_Injected([In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009C")]
	[Address(RVA = "0x4E41590", Offset = "0x4E41590", VA = "0x4E41590")]
	private static extern void get_contentColor_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009D")]
	[Address(RVA = "0x4E41660", Offset = "0x4E41660", VA = "0x4E41660")]
	private static extern void set_contentColor_Injected([In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009E")]
	[Address(RVA = "0x4E41AB0", Offset = "0x4E41AB0", VA = "0x4E41AB0")]
	private static extern void Internal_DoWindow_Injected(int id, int instanceID, [In] ref Rect clientRect, WindowFunction func, GUIContent title, GUIStyle style, object skin, bool forceRectOnLayout, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009F")]
	[Address(RVA = "0x4E41BB0", Offset = "0x4E41BB0", VA = "0x4E41BB0")]
	private static extern void DragWindow_Injected([In] ref Rect position);
}
