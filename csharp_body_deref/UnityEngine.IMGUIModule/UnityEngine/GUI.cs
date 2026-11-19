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

[Token(Token = "0x2000008")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUI.bindings.h")]
[UnityEngine.Bindings.NativeHeader("Modules/IMGUI/GUISkin.bindings.h")]
public class GUI
{
	[Token(Token = "0x2000009")]
	public delegate void WindowFunction(int id);

	[Token(Token = "0x400003D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static int s_ScrollControlId;

	[Token(Token = "0x400003E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
	private static int s_HotTextField;

	[Token(Token = "0x400003F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	private static readonly int s_BoxHash;

	[Token(Token = "0x4000040")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
	private static readonly int s_ButonHash;

	[Token(Token = "0x4000041")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private static readonly int s_RepeatButtonHash;

	[Token(Token = "0x4000042")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	private static readonly int s_ToggleHash;

	[Token(Token = "0x4000043")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private static readonly int s_ButtonGridHash;

	[Token(Token = "0x4000044")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	private static readonly int s_SliderHash;

	[Token(Token = "0x4000045")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private static readonly int s_BeginGroupHash;

	[Token(Token = "0x4000046")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x24")]
	private static readonly int s_ScrollviewHash;

	[Token(Token = "0x4000049")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private static GUISkin s_Skin;

	[Token(Token = "0x400004A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	internal static Rect s_ToolTipRect;

	[Token(Token = "0x17000021")]
	public static Color color
	{
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x697B100", Offset = "0x697A100", VA = "0x697B100")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x697B1C0", Offset = "0x697A1C0", VA = "0x697B1C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public static Color backgroundColor
	{
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x697B290", Offset = "0x697A290", VA = "0x697B290")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x697B350", Offset = "0x697A350", VA = "0x697B350")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public static Color contentColor
	{
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x697B420", Offset = "0x697A420", VA = "0x697B420")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x697B4E0", Offset = "0x697A4E0", VA = "0x697B4E0")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public static extern bool changed
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x697B5B0", Offset = "0x697A5B0", VA = "0x697B5B0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x697B5E0", Offset = "0x697A5E0", VA = "0x697B5E0")]
		set;
	}

	[Token(Token = "0x17000025")]
	public static extern bool enabled
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x697B610", Offset = "0x697A610", VA = "0x697B610")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x697B640", Offset = "0x697A640", VA = "0x697B640")]
		set;
	}

	[Token(Token = "0x17000026")]
	public static extern int depth
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x697B670", Offset = "0x697A670", VA = "0x697B670")]
		set;
	}

	[Token(Token = "0x17000027")]
	internal static extern bool usePageScrollbars
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x697B6A0", Offset = "0x697A6A0", VA = "0x697B6A0")]
		get;
	}

	[Token(Token = "0x17000028")]
	internal static Material blendMaterial
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x697B6D0", Offset = "0x697A6D0", VA = "0x697B6D0")]
		[UnityEngine.Bindings.FreeFunction("GetGUIBlendMaterial")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000029")]
	internal static Material blitMaterial
	{
		[Token(Token = "0x6000066")]
		[Address(RVA = "0x697B7A0", Offset = "0x697A7A0", VA = "0x697B7A0")]
		[UnityEngine.Bindings.FreeFunction("GetGUIBlitMaterial")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002A")]
	internal static Material roundedRectMaterial
	{
		[Token(Token = "0x6000067")]
		[Address(RVA = "0x697B870", Offset = "0x697A870", VA = "0x697B870")]
		[UnityEngine.Bindings.FreeFunction("GetGUIRoundedRectMaterial")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002B")]
	internal static Material roundedRectWithColorPerBorderMaterial
	{
		[Token(Token = "0x6000068")]
		[Address(RVA = "0x697B940", Offset = "0x697A940", VA = "0x697B940")]
		[UnityEngine.Bindings.FreeFunction("GetGUIRoundedRectWithColorPerBorderMaterial")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002C")]
	internal static int scrollTroughSide
	{
		[Token(Token = "0x6000073")]
		[Address(RVA = "0x697C490", Offset = "0x697B490", VA = "0x697C490")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x697C500", Offset = "0x697B500", VA = "0x697C500")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002D")]
	internal static DateTime nextScrollStepTime
	{
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x697C550", Offset = "0x697B550", VA = "0x697C550")]
		[CompilerGenerated]
		get
		{
			return default(DateTime);
		}
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x697C5C0", Offset = "0x697B5C0", VA = "0x697C5C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002E")]
	public static GUISkin skin
	{
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x697C920", Offset = "0x697B920", VA = "0x697C920")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x697C620", Offset = "0x697B620", VA = "0x697C620")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public static Matrix4x4 matrix
	{
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x697CBC0", Offset = "0x697BBC0", VA = "0x697CBC0")]
		get
		{
			return default(Matrix4x4);
		}
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x697CCC0", Offset = "0x697BCC0", VA = "0x697CCC0")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	internal static GenericStack scrollViewStates
	{
		[Token(Token = "0x60000A5")]
		[Address(RVA = "0x6986310", Offset = "0x6985310", VA = "0x6986310")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000069")]
	[Address(RVA = "0x697BA10", Offset = "0x697AA10", VA = "0x697BA10")]
	internal static extern void GrabMouseControl(int id);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006A")]
	[Address(RVA = "0x697BA40", Offset = "0x697AA40", VA = "0x697BA40")]
	internal static extern bool HasMouseControl(int id);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006B")]
	[Address(RVA = "0x697BA70", Offset = "0x697AA70", VA = "0x697BA70")]
	internal static extern void ReleaseMouseControl();

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x697BAA0", Offset = "0x697AAA0", VA = "0x697BAA0")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().SetNameOfNextControl")]
	public static void SetNextControlName(string name)
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x697BC60", Offset = "0x697AC60", VA = "0x697BC60")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().GetNameOfFocusedControl")]
	public static string GetNameOfFocusedControl()
	{
		return null;
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x697BD90", Offset = "0x697AD90", VA = "0x697BD90")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().FocusKeyboardControl")]
	public static void FocusControl(string name)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006F")]
	[Address(RVA = "0x697BF50", Offset = "0x697AF50", VA = "0x697BF50")]
	internal static extern void InternalRepaintEditorWindow();

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x697BF80", Offset = "0x697AF80", VA = "0x697BF80")]
	private static Rect Internal_DoWindow(int id, int instanceID, Rect clientRect, WindowFunction func, GUIContent title, [UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] GUIStyle style, object skin, bool forceRectOnLayout)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x697C0D0", Offset = "0x697B0D0", VA = "0x697C0D0")]
	public static void DragWindow(Rect position)
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x697C1A0", Offset = "0x697B1A0", VA = "0x697C1A0")]
	static GUI()
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x697C770", Offset = "0x697B770", VA = "0x697C770")]
	internal static void DoSetSkin(GUISkin newSkin)
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x697CD70", Offset = "0x697BD70", VA = "0x697CD70")]
	public static void Label(Rect position, string text)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x697D0A0", Offset = "0x697C0A0", VA = "0x697D0A0")]
	public static void Label(Rect position, string text, GUIStyle style)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x697D010", Offset = "0x697C010", VA = "0x697D010")]
	public static void Label(Rect position, GUIContent content, GUIStyle style)
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x697D810", Offset = "0x697C810", VA = "0x697D810")]
	public static void DrawTexture(Rect position, Texture image)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x697D940", Offset = "0x697C940", VA = "0x697D940")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode)
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x697DA10", Offset = "0x697CA10", VA = "0x697DA10")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend)
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x697DAA0", Offset = "0x697CAA0", VA = "0x697DAA0")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x697DBE0", Offset = "0x697CBE0", VA = "0x697DBE0")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect, Color color, float borderWidth, float borderRadius)
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x697DDC0", Offset = "0x697CDC0", VA = "0x697DDC0")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect, Color color, Vector4 borderWidths, float borderRadius)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x697DF00", Offset = "0x697CF00", VA = "0x697DF00")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect, Color color, Vector4 borderWidths, Vector4 borderRadiuses)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x697E0B0", Offset = "0x697D0B0", VA = "0x697E0B0")]
	internal static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect, Color color, Vector4 borderWidths, Vector4 borderRadiuses, bool drawSmoothCorners)
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x697E240", Offset = "0x697D240", VA = "0x697E240")]
	internal static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect, Color leftColor, Color topColor, Color rightColor, Color bottomColor, Vector4 borderWidths, Vector4 borderRadiuses, bool drawSmoothCorners)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x697EB60", Offset = "0x697DB60", VA = "0x697EB60")]
	internal static bool CalculateScaledTextureRects(Rect position, ScaleMode scaleMode, float imageAspect, ref Rect outScreenRect, ref Rect outSourceRect)
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x697EDA0", Offset = "0x697DDA0", VA = "0x697EDA0")]
	public static void Box(Rect position, string text)
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x697EE60", Offset = "0x697DE60", VA = "0x697EE60")]
	public static void Box(Rect position, GUIContent content, GUIStyle style)
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x697F3A0", Offset = "0x697E3A0", VA = "0x697F3A0")]
	public static bool Button(Rect position, string text)
	{
		return default(bool);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x697F460", Offset = "0x697E460", VA = "0x697F460")]
	public static bool Button(Rect position, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x697F680", Offset = "0x697E680", VA = "0x697F680")]
	internal static bool Button(Rect position, int id, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x697F930", Offset = "0x697E930", VA = "0x697F930")]
	private static bool DoRepeatButton(Rect position, GUIContent content, GUIStyle style, FocusType focusType)
	{
		return default(bool);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x6980410", Offset = "0x697F410", VA = "0x6980410")]
	public static string TextField(Rect position, string text)
	{
		return null;
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x6980850", Offset = "0x697F850", VA = "0x6980850")]
	internal static string PasswordFieldGetStrToShow(string password, char maskChar)
	{
		return null;
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x69809D0", Offset = "0x697F9D0", VA = "0x69809D0")]
	public static string TextArea(Rect position, string text, GUIStyle style)
	{
		return null;
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x6980740", Offset = "0x697F740", VA = "0x6980740")]
	internal static void DoTextField(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style)
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x6980BF0", Offset = "0x697FBF0", VA = "0x6980BF0")]
	internal static void DoTextField(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, string secureText)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x6980CA0", Offset = "0x697FCA0", VA = "0x6980CA0")]
	internal static void DoTextField(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, string secureText, char maskChar)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x6981100", Offset = "0x6980100", VA = "0x6981100")]
	private static void HandleTextFieldEventForTouchscreen(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, string secureText, char maskChar, TextEditor editor)
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x6981930", Offset = "0x6980930", VA = "0x6981930")]
	private static void HandleTextFieldEventForDesktop(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, TextEditor editor)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x6982E10", Offset = "0x6981E10", VA = "0x6982E10")]
	public static bool Toggle(Rect position, bool value, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x69830F0", Offset = "0x69820F0", VA = "0x69830F0")]
	internal static bool DoControl(Rect position, int id, bool on, bool hover, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x697D1C0", Offset = "0x697C1C0", VA = "0x697D1C0")]
	private static void DoLabel(Rect position, GUIContent content, GUIStyle style)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x6982ED0", Offset = "0x6981ED0", VA = "0x6982ED0")]
	internal static bool DoToggle(Rect position, int id, bool value, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x697F720", Offset = "0x697E720", VA = "0x697F720")]
	internal static bool DoButton(Rect position, int id, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x6983C00", Offset = "0x6982C00", VA = "0x6983C00")]
	public static float HorizontalSlider(Rect position, float value, float leftValue, float rightValue, GUIStyle slider, GUIStyle thumb)
	{
		return default(float);
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x6983CE0", Offset = "0x6982CE0", VA = "0x6983CE0")]
	public static float Slider(Rect position, float value, float size, float start, float end, GUIStyle slider, GUIStyle thumb, bool horiz, int id, [Optional] GUIStyle thumbExtent)
	{
		return default(float);
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x6983E90", Offset = "0x6982E90", VA = "0x6983E90")]
	public static float HorizontalScrollbar(Rect position, float value, float size, float leftValue, float rightValue, GUIStyle style)
	{
		return default(float);
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x6985350", Offset = "0x6984350", VA = "0x6985350")]
	internal static bool ScrollerRepeatButton(int scrollerID, Rect rect, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x69856B0", Offset = "0x69846B0", VA = "0x69856B0")]
	public static float VerticalScrollbar(Rect position, float value, float size, float topValue, float bottomValue, GUIStyle style)
	{
		return default(float);
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x69845B0", Offset = "0x69835B0", VA = "0x69845B0")]
	internal static float Scroller(Rect position, float value, float size, float leftValue, float rightValue, GUIStyle slider, GUIStyle thumb, GUIStyle leftButton, GUIStyle rightButton, bool horiz)
	{
		return default(float);
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x6985BD0", Offset = "0x6984BD0", VA = "0x6985BD0")]
	public static void BeginGroup(Rect position, GUIContent content, GUIStyle style)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x6985C70", Offset = "0x6984C70", VA = "0x6985C70")]
	internal static void BeginGroup(Rect position, GUIContent content, GUIStyle style, Vector2 scrollOffset)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x6986250", Offset = "0x6985250", VA = "0x6986250")]
	public static void EndGroup()
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x6986380", Offset = "0x6985380", VA = "0x6986380")]
	public static Vector2 BeginScrollView(Rect position, Vector2 scrollPosition, Rect viewRect)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x6986670", Offset = "0x6985670", VA = "0x6986670")]
	internal static Vector2 BeginScrollView(Rect position, Vector2 scrollPosition, Rect viewRect, bool alwaysShowHorizontal, bool alwaysShowVertical, GUIStyle horizontalScrollbar, GUIStyle verticalScrollbar, GUIStyle background)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x69880C0", Offset = "0x69870C0", VA = "0x69880C0")]
	public static void EndScrollView()
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x6988120", Offset = "0x6987120", VA = "0x6988120")]
	public static void EndScrollView(bool handleScrollWheel)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x69894E0", Offset = "0x69884E0", VA = "0x69894E0")]
	public static Rect Window(int id, Rect clientRect, WindowFunction func, GUIContent title, GUIStyle style)
	{
		return default(Rect);
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x6989630", Offset = "0x6988630", VA = "0x6989630")]
	private static Rect DoWindow(int id, Rect clientRect, WindowFunction func, GUIContent title, GUIStyle style, GUISkin skin, bool forceRectOnLayout)
	{
		return default(Rect);
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x6989790", Offset = "0x6988790", VA = "0x6989790")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void CallWindowDelegate(WindowFunction func, int id, int instanceID, GUISkin _skin, int forceRect, float width, float height, GUIStyle style)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x698A720", Offset = "0x6989720", VA = "0x698A720")]
	public static void DragWindow()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x697B190", Offset = "0x697A190", VA = "0x697B190")]
	private static extern void get_color_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x697B260", Offset = "0x697A260", VA = "0x697B260")]
	private static extern void set_color_Injected([In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x697B320", Offset = "0x697A320", VA = "0x697B320")]
	private static extern void get_backgroundColor_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x697B3F0", Offset = "0x697A3F0", VA = "0x697B3F0")]
	private static extern void set_backgroundColor_Injected([In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x697B4B0", Offset = "0x697A4B0", VA = "0x697B4B0")]
	private static extern void get_contentColor_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x697B580", Offset = "0x697A580", VA = "0x697B580")]
	private static extern void set_contentColor_Injected([In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x697B770", Offset = "0x697A770", VA = "0x697B770")]
	private static extern IntPtr get_blendMaterial_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x697B840", Offset = "0x697A840", VA = "0x697B840")]
	private static extern IntPtr get_blitMaterial_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x697B910", Offset = "0x697A910", VA = "0x697B910")]
	private static extern IntPtr get_roundedRectMaterial_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x697B9E0", Offset = "0x697A9E0", VA = "0x697B9E0")]
	private static extern IntPtr get_roundedRectWithColorPerBorderMaterial_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x697BC30", Offset = "0x697AC30", VA = "0x697BC30")]
	private static extern void SetNextControlName_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x697BD60", Offset = "0x697AD60", VA = "0x697BD60")]
	private static extern void GetNameOfFocusedControl_Injected(out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x697BF20", Offset = "0x697AF20", VA = "0x697BF20")]
	private static extern void FocusControl_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x697C070", Offset = "0x697B070", VA = "0x697C070")]
	private static extern void Internal_DoWindow_Injected(int id, int instanceID, [In] ref Rect clientRect, WindowFunction func, GUIContent title, GUIStyle style, object skin, bool forceRectOnLayout, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x697C170", Offset = "0x697B170", VA = "0x697C170")]
	private static extern void DragWindow_Injected([In] ref Rect position);
}
