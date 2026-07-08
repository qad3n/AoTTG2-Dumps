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
		[Address(RVA = "0x4B19620", Offset = "0x4B19620", VA = "0x4B19620")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000044")]
		[Address(RVA = "0x4B196E0", Offset = "0x4B196E0", VA = "0x4B196E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700001F")]
	public static Color backgroundColor
	{
		[Token(Token = "0x6000045")]
		[Address(RVA = "0x4B197B0", Offset = "0x4B197B0", VA = "0x4B197B0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000046")]
		[Address(RVA = "0x4B19870", Offset = "0x4B19870", VA = "0x4B19870")]
		set
		{
		}
	}

	[Token(Token = "0x17000020")]
	public static Color contentColor
	{
		[Token(Token = "0x6000047")]
		[Address(RVA = "0x4B19940", Offset = "0x4B19940", VA = "0x4B19940")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000048")]
		[Address(RVA = "0x4B19A00", Offset = "0x4B19A00", VA = "0x4B19A00")]
		set
		{
		}
	}

	[Token(Token = "0x17000021")]
	public static extern bool changed
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000049")]
		[Address(RVA = "0x4B19AD0", Offset = "0x4B19AD0", VA = "0x4B19AD0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004A")]
		[Address(RVA = "0x4B19B00", Offset = "0x4B19B00", VA = "0x4B19B00")]
		set;
	}

	[Token(Token = "0x17000022")]
	public static extern bool enabled
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004B")]
		[Address(RVA = "0x4B19B30", Offset = "0x4B19B30", VA = "0x4B19B30")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004C")]
		[Address(RVA = "0x4B19B60", Offset = "0x4B19B60", VA = "0x4B19B60")]
		set;
	}

	[Token(Token = "0x17000023")]
	public static extern int depth
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004D")]
		[Address(RVA = "0x4B19B90", Offset = "0x4B19B90", VA = "0x4B19B90")]
		set;
	}

	[Token(Token = "0x17000024")]
	internal static extern bool usePageScrollbars
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004E")]
		[Address(RVA = "0x4B19BC0", Offset = "0x4B19BC0", VA = "0x4B19BC0")]
		get;
	}

	[Token(Token = "0x17000025")]
	internal static extern Material blendMaterial
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600004F")]
		[Address(RVA = "0x4B19BF0", Offset = "0x4B19BF0", VA = "0x4B19BF0")]
		[UnityEngine.Bindings.FreeFunction("GetGUIBlendMaterial")]
		get;
	}

	[Token(Token = "0x17000026")]
	internal static extern Material blitMaterial
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000050")]
		[Address(RVA = "0x4B19C20", Offset = "0x4B19C20", VA = "0x4B19C20")]
		[UnityEngine.Bindings.FreeFunction("GetGUIBlitMaterial")]
		get;
	}

	[Token(Token = "0x17000027")]
	internal static extern Material roundedRectMaterial
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000051")]
		[Address(RVA = "0x4B19C50", Offset = "0x4B19C50", VA = "0x4B19C50")]
		[UnityEngine.Bindings.FreeFunction("GetGUIRoundedRectMaterial")]
		get;
	}

	[Token(Token = "0x17000028")]
	internal static extern Material roundedRectWithColorPerBorderMaterial
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000052")]
		[Address(RVA = "0x4B19C80", Offset = "0x4B19C80", VA = "0x4B19C80")]
		[UnityEngine.Bindings.FreeFunction("GetGUIRoundedRectWithColorPerBorderMaterial")]
		get;
	}

	[Token(Token = "0x17000029")]
	internal static int scrollTroughSide
	{
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x4B1A310", Offset = "0x4B1A310", VA = "0x4B1A310")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x4B1A380", Offset = "0x4B1A380", VA = "0x4B1A380")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002A")]
	internal static DateTime nextScrollStepTime
	{
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x4B1A3D0", Offset = "0x4B1A3D0", VA = "0x4B1A3D0")]
		[CompilerGenerated]
		get
		{
			return default(DateTime);
		}
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x4B1A440", Offset = "0x4B1A440", VA = "0x4B1A440")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002B")]
	public static GUISkin skin
	{
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x4B1A6B0", Offset = "0x4B1A6B0", VA = "0x4B1A6B0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x4B1A4A0", Offset = "0x4B1A4A0", VA = "0x4B1A4A0")]
		set
		{
		}
	}

	[Token(Token = "0x1700002C")]
	public static Matrix4x4 matrix
	{
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x4B1A850", Offset = "0x4B1A850", VA = "0x4B1A850")]
		get
		{
			return default(Matrix4x4);
		}
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x4B1A960", Offset = "0x4B1A960", VA = "0x4B1A960")]
		set
		{
		}
	}

	[Token(Token = "0x1700002D")]
	internal static GenericStack scrollViewStates
	{
		[Token(Token = "0x600008F")]
		[Address(RVA = "0x4B22110", Offset = "0x4B22110", VA = "0x4B22110")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000053")]
	[Address(RVA = "0x4B19CB0", Offset = "0x4B19CB0", VA = "0x4B19CB0")]
	internal static extern void GrabMouseControl(int id);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000054")]
	[Address(RVA = "0x4B19CE0", Offset = "0x4B19CE0", VA = "0x4B19CE0")]
	internal static extern bool HasMouseControl(int id);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000055")]
	[Address(RVA = "0x4B19D10", Offset = "0x4B19D10", VA = "0x4B19D10")]
	internal static extern void ReleaseMouseControl();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000056")]
	[Address(RVA = "0x4B19D40", Offset = "0x4B19D40", VA = "0x4B19D40")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().SetNameOfNextControl")]
	public static extern void SetNextControlName(string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000057")]
	[Address(RVA = "0x4B19D70", Offset = "0x4B19D70", VA = "0x4B19D70")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().GetNameOfFocusedControl")]
	public static extern string GetNameOfFocusedControl();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000058")]
	[Address(RVA = "0x4B19DA0", Offset = "0x4B19DA0", VA = "0x4B19DA0")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().FocusKeyboardControl")]
	public static extern void FocusControl(string name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000059")]
	[Address(RVA = "0x4B19DD0", Offset = "0x4B19DD0", VA = "0x4B19DD0")]
	internal static extern void InternalRepaintEditorWindow();

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x4B19E00", Offset = "0x4B19E00", VA = "0x4B19E00")]
	private static Rect Internal_DoWindow(int id, int instanceID, Rect clientRect, WindowFunction func, GUIContent title, GUIStyle style, object skin, bool forceRectOnLayout)
	{
		return default(Rect);
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x4B19F50", Offset = "0x4B19F50", VA = "0x4B19F50")]
	public static void DragWindow(Rect position)
	{
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x4B1A020", Offset = "0x4B1A020", VA = "0x4B1A020")]
	static GUI()
	{
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x4B1A570", Offset = "0x4B1A570", VA = "0x4B1A570")]
	internal static void DoSetSkin(GUISkin newSkin)
	{
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x4B1AA10", Offset = "0x4B1AA10", VA = "0x4B1AA10")]
	public static void Label(Rect position, string text)
	{
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x4B1ACD0", Offset = "0x4B1ACD0", VA = "0x4B1ACD0")]
	public static void Label(Rect position, string text, GUIStyle style)
	{
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4B1AC60", Offset = "0x4B1AC60", VA = "0x4B1AC60")]
	public static void Label(Rect position, GUIContent content, GUIStyle style)
	{
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x4B1B320", Offset = "0x4B1B320", VA = "0x4B1B320")]
	public static void DrawTexture(Rect position, Texture image)
	{
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x4B1B450", Offset = "0x4B1B450", VA = "0x4B1B450")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode)
	{
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x4B1B520", Offset = "0x4B1B520", VA = "0x4B1B520")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend)
	{
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x4B1B5A0", Offset = "0x4B1B5A0", VA = "0x4B1B5A0")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect)
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x4B1B6E0", Offset = "0x4B1B6E0", VA = "0x4B1B6E0")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect, Color color, float borderWidth, float borderRadius)
	{
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x4B1B900", Offset = "0x4B1B900", VA = "0x4B1B900")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect, Color color, Vector4 borderWidths, float borderRadius)
	{
	}

	[Token(Token = "0x600006F")]
	[Address(RVA = "0x4B1BA40", Offset = "0x4B1BA40", VA = "0x4B1BA40")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect, Color color, Vector4 borderWidths, Vector4 borderRadiuses)
	{
	}

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x4B1BBF0", Offset = "0x4B1BBF0", VA = "0x4B1BBF0")]
	internal static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect, Color color, Vector4 borderWidths, Vector4 borderRadiuses, bool drawSmoothCorners)
	{
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x4B1BD90", Offset = "0x4B1BD90", VA = "0x4B1BD90")]
	internal static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect, Color leftColor, Color topColor, Color rightColor, Color bottomColor, Vector4 borderWidths, Vector4 borderRadiuses, bool drawSmoothCorners)
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x4B1C640", Offset = "0x4B1C640", VA = "0x4B1C640")]
	internal static bool CalculateScaledTextureRects(Rect position, ScaleMode scaleMode, float imageAspect, ref Rect outScreenRect, ref Rect outSourceRect)
	{
		return default(bool);
	}

	[Token(Token = "0x6000073")]
	[Address(RVA = "0x4B1C780", Offset = "0x4B1C780", VA = "0x4B1C780")]
	public static void Box(Rect position, string text)
	{
	}

	[Token(Token = "0x6000074")]
	[Address(RVA = "0x4B1C840", Offset = "0x4B1C840", VA = "0x4B1C840")]
	public static void Box(Rect position, GUIContent content, GUIStyle style)
	{
	}

	[Token(Token = "0x6000075")]
	[Address(RVA = "0x4B1CC50", Offset = "0x4B1CC50", VA = "0x4B1CC50")]
	public static bool Button(Rect position, string text)
	{
		return default(bool);
	}

	[Token(Token = "0x6000076")]
	[Address(RVA = "0x4B1CD10", Offset = "0x4B1CD10", VA = "0x4B1CD10")]
	public static bool Button(Rect position, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000077")]
	[Address(RVA = "0x4B1CEE0", Offset = "0x4B1CEE0", VA = "0x4B1CEE0")]
	internal static bool Button(Rect position, int id, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000078")]
	[Address(RVA = "0x4B1D1C0", Offset = "0x4B1D1C0", VA = "0x4B1D1C0")]
	private static bool DoRepeatButton(Rect position, GUIContent content, GUIStyle style, FocusType focusType)
	{
		return default(bool);
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x4B1D710", Offset = "0x4B1D710", VA = "0x4B1D710")]
	public static string TextField(Rect position, string text)
	{
		return null;
	}

	[Token(Token = "0x600007A")]
	[Address(RVA = "0x4B1DB10", Offset = "0x4B1DB10", VA = "0x4B1DB10")]
	internal static string PasswordFieldGetStrToShow(string password, char maskChar)
	{
		return null;
	}

	[Token(Token = "0x600007B")]
	[Address(RVA = "0x4B1DC60", Offset = "0x4B1DC60", VA = "0x4B1DC60")]
	public static string TextArea(Rect position, string text, GUIStyle style)
	{
		return null;
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x4B1DA00", Offset = "0x4B1DA00", VA = "0x4B1DA00")]
	internal static void DoTextField(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x4B1DE50", Offset = "0x4B1DE50", VA = "0x4B1DE50")]
	internal static void DoTextField(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, string secureText)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x4B1DF00", Offset = "0x4B1DF00", VA = "0x4B1DF00")]
	internal static void DoTextField(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, string secureText, char maskChar)
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x4B1E2F0", Offset = "0x4B1E2F0", VA = "0x4B1E2F0")]
	private static void HandleTextFieldEventForTouchscreen(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, string secureText, char maskChar, TextEditor editor)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x4B1E890", Offset = "0x4B1E890", VA = "0x4B1E890")]
	private static void HandleTextFieldEventForDesktop(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, TextEditor editor)
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x4B1F5A0", Offset = "0x4B1F5A0", VA = "0x4B1F5A0")]
	public static bool Toggle(Rect position, bool value, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x4B1F910", Offset = "0x4B1F910", VA = "0x4B1F910")]
	internal static bool DoControl(Rect position, int id, bool on, bool hover, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x4B1ADC0", Offset = "0x4B1ADC0", VA = "0x4B1ADC0")]
	private static void DoLabel(Rect position, GUIContent content, GUIStyle style)
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x4B1F7C0", Offset = "0x4B1F7C0", VA = "0x4B1F7C0")]
	internal static bool DoToggle(Rect position, int id, bool value, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x4B1D080", Offset = "0x4B1D080", VA = "0x4B1D080")]
	internal static bool DoButton(Rect position, int id, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x4B20250", Offset = "0x4B20250", VA = "0x4B20250")]
	public static float HorizontalSlider(Rect position, float value, float leftValue, float rightValue, GUIStyle slider, GUIStyle thumb)
	{
		return default(float);
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x4B20330", Offset = "0x4B20330", VA = "0x4B20330")]
	public static float Slider(Rect position, float value, float size, float start, float end, GUIStyle slider, GUIStyle thumb, bool horiz, int id, [Optional] GUIStyle thumbExtent)
	{
		return default(float);
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x4B20530", Offset = "0x4B20530", VA = "0x4B20530")]
	public static float HorizontalScrollbar(Rect position, float value, float size, float leftValue, float rightValue, GUIStyle style)
	{
		return default(float);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x4B213B0", Offset = "0x4B213B0", VA = "0x4B213B0")]
	internal static bool ScrollerRepeatButton(int scrollerID, Rect rect, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x4B21700", Offset = "0x4B21700", VA = "0x4B21700")]
	public static float VerticalScrollbar(Rect position, float value, float size, float topValue, float bottomValue, GUIStyle style)
	{
		return default(float);
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x4B20BA0", Offset = "0x4B20BA0", VA = "0x4B20BA0")]
	internal static float Scroller(Rect position, float value, float size, float leftValue, float rightValue, GUIStyle slider, GUIStyle thumb, GUIStyle leftButton, GUIStyle rightButton, bool horiz)
	{
		return default(float);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x4B21A90", Offset = "0x4B21A90", VA = "0x4B21A90")]
	public static void BeginGroup(Rect position, GUIContent content, GUIStyle style)
	{
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x4B21B30", Offset = "0x4B21B30", VA = "0x4B21B30")]
	internal static void BeginGroup(Rect position, GUIContent content, GUIStyle style, Vector2 scrollOffset)
	{
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x4B220B0", Offset = "0x4B220B0", VA = "0x4B220B0")]
	public static void EndGroup()
	{
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x4B22180", Offset = "0x4B22180", VA = "0x4B22180")]
	public static Vector2 BeginScrollView(Rect position, Vector2 scrollPosition, Rect viewRect)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x4B22400", Offset = "0x4B22400", VA = "0x4B22400")]
	internal static Vector2 BeginScrollView(Rect position, Vector2 scrollPosition, Rect viewRect, bool alwaysShowHorizontal, bool alwaysShowVertical, GUIStyle horizontalScrollbar, GUIStyle verticalScrollbar, GUIStyle background)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x4B23F50", Offset = "0x4B23F50", VA = "0x4B23F50")]
	public static void EndScrollView()
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x4B23FB0", Offset = "0x4B23FB0", VA = "0x4B23FB0")]
	public static void EndScrollView(bool handleScrollWheel)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x4B250B0", Offset = "0x4B250B0", VA = "0x4B250B0")]
	public static Rect Window(int id, Rect clientRect, WindowFunction func, GUIContent title, GUIStyle style)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x4B251A0", Offset = "0x4B251A0", VA = "0x4B251A0")]
	private static Rect DoWindow(int id, Rect clientRect, WindowFunction func, GUIContent title, GUIStyle style, GUISkin skin, bool forceRectOnLayout)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x4B25330", Offset = "0x4B25330", VA = "0x4B25330")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void CallWindowDelegate(WindowFunction func, int id, int instanceID, GUISkin _skin, int forceRect, float width, float height, GUIStyle style)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x4B26150", Offset = "0x4B26150", VA = "0x4B26150")]
	public static void DragWindow()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000098")]
	[Address(RVA = "0x4B196B0", Offset = "0x4B196B0", VA = "0x4B196B0")]
	private static extern void get_color_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000099")]
	[Address(RVA = "0x4B19780", Offset = "0x4B19780", VA = "0x4B19780")]
	private static extern void set_color_Injected([In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009A")]
	[Address(RVA = "0x4B19840", Offset = "0x4B19840", VA = "0x4B19840")]
	private static extern void get_backgroundColor_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009B")]
	[Address(RVA = "0x4B19910", Offset = "0x4B19910", VA = "0x4B19910")]
	private static extern void set_backgroundColor_Injected([In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009C")]
	[Address(RVA = "0x4B199D0", Offset = "0x4B199D0", VA = "0x4B199D0")]
	private static extern void get_contentColor_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009D")]
	[Address(RVA = "0x4B19AA0", Offset = "0x4B19AA0", VA = "0x4B19AA0")]
	private static extern void set_contentColor_Injected([In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009E")]
	[Address(RVA = "0x4B19EF0", Offset = "0x4B19EF0", VA = "0x4B19EF0")]
	private static extern void Internal_DoWindow_Injected(int id, int instanceID, [In] ref Rect clientRect, WindowFunction func, GUIContent title, GUIStyle style, object skin, bool forceRectOnLayout, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600009F")]
	[Address(RVA = "0x4B19FF0", Offset = "0x4B19FF0", VA = "0x4B19FF0")]
	private static extern void DragWindow_Injected([In] ref Rect position);
}
