// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GUI
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
		[Address(RVA = "0x2FA40B0", Offset = "0x2FA26B0", VA = "0x182FA40B0")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600005A")]
		[Address(RVA = "0x2FA46C0", Offset = "0x2FA2CC0", VA = "0x182FA46C0")]
		set
		{
		}
	}

	[Token(Token = "0x17000022")]
	public static Color backgroundColor
	{
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x2FA3E70", Offset = "0x2FA2470", VA = "0x182FA3E70")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600005C")]
		[Address(RVA = "0x2FA45D0", Offset = "0x2FA2BD0", VA = "0x182FA45D0")]
		set
		{
		}
	}

	[Token(Token = "0x17000023")]
	public static Color contentColor
	{
		[Token(Token = "0x600005D")]
		[Address(RVA = "0x2FA4160", Offset = "0x2FA2760", VA = "0x182FA4160")]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600005E")]
		[Address(RVA = "0x2FA4770", Offset = "0x2FA2D70", VA = "0x182FA4770")]
		set
		{
		}
	}

	[Token(Token = "0x17000024")]
	public static extern bool changed
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x600005F")]
		[Address(RVA = "0x2FA4040", Offset = "0x2FA2640", VA = "0x182FA4040")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000060")]
		[Address(RVA = "0x2FA4640", Offset = "0x2FA2C40", VA = "0x182FA4640")]
		set;
	}

	[Token(Token = "0x17000025")]
	public static extern bool enabled
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000061")]
		[Address(RVA = "0x2FA41D0", Offset = "0x2FA27D0", VA = "0x182FA41D0")]
		get;
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000062")]
		[Address(RVA = "0x2FA4820", Offset = "0x2FA2E20", VA = "0x182FA4820")]
		set;
	}

	[Token(Token = "0x17000026")]
	public static extern int depth
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000063")]
		[Address(RVA = "0x2FA47E0", Offset = "0x2FA2DE0", VA = "0x182FA47E0")]
		set;
	}

	[Token(Token = "0x17000027")]
	internal static extern bool usePageScrollbars
	{
		[MethodImpl((MethodImplOptions)4096)]
		[Token(Token = "0x6000064")]
		[Address(RVA = "0x2FA4560", Offset = "0x2FA2B60", VA = "0x182FA4560")]
		get;
	}

	[Token(Token = "0x17000028")]
	internal static Material blendMaterial
	{
		[Token(Token = "0x6000065")]
		[Address(RVA = "0x2FA3F10", Offset = "0x2FA2510", VA = "0x182FA3F10")]
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
		[Address(RVA = "0x2FA3FC0", Offset = "0x2FA25C0", VA = "0x182FA3FC0")]
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
		[Address(RVA = "0x2FA4310", Offset = "0x2FA2910", VA = "0x182FA4310")]
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
		[Address(RVA = "0x2FA43C0", Offset = "0x2FA29C0", VA = "0x182FA43C0")]
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
		[Address(RVA = "0x2FA4440", Offset = "0x2FA2A40", VA = "0x182FA4440")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000074")]
		[Address(RVA = "0x2FA4920", Offset = "0x2FA2F20", VA = "0x182FA4920")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002D")]
	internal static DateTime nextScrollStepTime
	{
		[Token(Token = "0x6000075")]
		[Address(RVA = "0x2FA4290", Offset = "0x2FA2890", VA = "0x182FA4290")]
		[CompilerGenerated]
		get
		{
			return default(DateTime);
		}
		[Token(Token = "0x6000076")]
		[Address(RVA = "0x2FA48C0", Offset = "0x2FA2EC0", VA = "0x182FA48C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700002E")]
	public static GUISkin skin
	{
		[Token(Token = "0x6000078")]
		[Address(RVA = "0x2FA44E0", Offset = "0x2FA2AE0", VA = "0x182FA44E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000077")]
		[Address(RVA = "0x2FA4980", Offset = "0x2FA2F80", VA = "0x182FA4980")]
		set
		{
		}
	}

	[Token(Token = "0x1700002F")]
	public static Matrix4x4 matrix
	{
		[Token(Token = "0x600007A")]
		[Address(RVA = "0x2FA4200", Offset = "0x2FA2800", VA = "0x182FA4200")]
		get
		{
			return default(Matrix4x4);
		}
		[Token(Token = "0x600007B")]
		[Address(RVA = "0x2FA4860", Offset = "0x2FA2E60", VA = "0x182FA4860")]
		set
		{
		}
	}

	[Token(Token = "0x17000030")]
	internal static GenericStack scrollViewStates
	{
		[Token(Token = "0x60000A5")]
		[Address(RVA = "0x2FA4490", Offset = "0x2FA2A90", VA = "0x182FA4490")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000069")]
	[Address(RVA = "0x2FA02F0", Offset = "0x2F9E8F0", VA = "0x182FA02F0")]
	internal static extern void GrabMouseControl(int id);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006A")]
	[Address(RVA = "0x2FA1550", Offset = "0x2F9FB50", VA = "0x182FA1550")]
	internal static extern bool HasMouseControl(int id);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006B")]
	[Address(RVA = "0x2FA1E10", Offset = "0x2FA0410", VA = "0x182FA1E10")]
	internal static extern void ReleaseMouseControl();

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x2FA2CF0", Offset = "0x2FA12F0", VA = "0x182FA2CF0")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().SetNameOfNextControl")]
	public static void SetNextControlName(string name)
	{
	}

	[Token(Token = "0x600006D")]
	[Address(RVA = "0x2FA0210", Offset = "0x2F9E810", VA = "0x182FA0210")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().GetNameOfFocusedControl")]
	public static string GetNameOfFocusedControl()
	{
		return null;
	}

	[Token(Token = "0x600006E")]
	[Address(RVA = "0x2FA0030", Offset = "0x2F9E630", VA = "0x182FA0030")]
	[UnityEngine.Bindings.FreeFunction("GetGUIState().FocusKeyboardControl")]
	public static void FocusControl(string name)
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600006F")]
	[Address(RVA = "0x2FA18B0", Offset = "0x2F9FEB0", VA = "0x182FA18B0")]
	internal static extern void InternalRepaintEditorWindow();

	[Token(Token = "0x6000070")]
	[Address(RVA = "0x2FA1940", Offset = "0x2F9FF40", VA = "0x182FA1940")]
	private static Rect Internal_DoWindow(int id, int instanceID, Rect clientRect, WindowFunction func, GUIContent title, [UnityEngine.Bindings.UnityMarshalAs(UnityEngine.Bindings.NativeType.ScriptingObjectPtr)] GUIStyle style, object skin, bool forceRectOnLayout)
	{
		return default(Rect);
	}

	[Token(Token = "0x6000071")]
	[Address(RVA = "0x2F9D960", Offset = "0x2F9BF60", VA = "0x182F9D960")]
	public static void DragWindow(Rect position)
	{
	}

	[Token(Token = "0x6000072")]
	[Address(RVA = "0x2FA3B30", Offset = "0x2FA2130", VA = "0x182FA3B30")]
	static GUI()
	{
	}

	[Token(Token = "0x6000079")]
	[Address(RVA = "0x2F9CEB0", Offset = "0x2F9B4B0", VA = "0x182F9CEB0")]
	internal static void DoSetSkin(GUISkin newSkin)
	{
	}

	[Token(Token = "0x600007C")]
	[Address(RVA = "0x2FA1B00", Offset = "0x2FA0100", VA = "0x182FA1B00")]
	public static void Label(Rect position, string text)
	{
	}

	[Token(Token = "0x600007D")]
	[Address(RVA = "0x2FA1A00", Offset = "0x2FA0000", VA = "0x182FA1A00")]
	public static void Label(Rect position, string text, GUIStyle style)
	{
	}

	[Token(Token = "0x600007E")]
	[Address(RVA = "0x2FA1C20", Offset = "0x2FA0220", VA = "0x182FA1C20")]
	public static void Label(Rect position, GUIContent content, GUIStyle style)
	{
	}

	[Token(Token = "0x600007F")]
	[Address(RVA = "0x2F9EC50", Offset = "0x2F9D250", VA = "0x182F9EC50")]
	public static void DrawTexture(Rect position, Texture image)
	{
	}

	[Token(Token = "0x6000080")]
	[Address(RVA = "0x2F9EB90", Offset = "0x2F9D190", VA = "0x182F9EB90")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode)
	{
	}

	[Token(Token = "0x6000081")]
	[Address(RVA = "0x2F9D9D0", Offset = "0x2F9BFD0", VA = "0x182F9D9D0")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend)
	{
	}

	[Token(Token = "0x6000082")]
	[Address(RVA = "0x2F9E660", Offset = "0x2F9CC60", VA = "0x182F9E660")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect)
	{
	}

	[Token(Token = "0x6000083")]
	[Address(RVA = "0x2F9E940", Offset = "0x2F9CF40", VA = "0x182F9E940")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect, Color color, float borderWidth, float borderRadius)
	{
	}

	[Token(Token = "0x6000084")]
	[Address(RVA = "0x2F9DA50", Offset = "0x2F9C050", VA = "0x182F9DA50")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect, Color color, Vector4 borderWidths, float borderRadius)
	{
	}

	[Token(Token = "0x6000085")]
	[Address(RVA = "0x2F9E500", Offset = "0x2F9CB00", VA = "0x182F9E500")]
	public static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect, Color color, Vector4 borderWidths, Vector4 borderRadiuses)
	{
	}

	[Token(Token = "0x6000086")]
	[Address(RVA = "0x2F9E3C0", Offset = "0x2F9C9C0", VA = "0x182F9E3C0")]
	internal static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect, Color color, Vector4 borderWidths, Vector4 borderRadiuses, bool drawSmoothCorners)
	{
	}

	[Token(Token = "0x6000087")]
	[Address(RVA = "0x2F9DC30", Offset = "0x2F9C230", VA = "0x182F9DC30")]
	internal static void DrawTexture(Rect position, Texture image, ScaleMode scaleMode, bool alphaBlend, float imageAspect, Color leftColor, Color topColor, Color rightColor, Color bottomColor, Vector4 borderWidths, Vector4 borderRadiuses, bool drawSmoothCorners)
	{
	}

	[Token(Token = "0x6000088")]
	[Address(RVA = "0x2F9B940", Offset = "0x2F99F40", VA = "0x182F9B940")]
	internal static bool CalculateScaledTextureRects(Rect position, ScaleMode scaleMode, float imageAspect, ref Rect outScreenRect, ref Rect outSourceRect)
	{
		return default(bool);
	}

	[Token(Token = "0x6000089")]
	[Address(RVA = "0x2F9B490", Offset = "0x2F99A90", VA = "0x182F9B490")]
	public static void Box(Rect position, string text)
	{
	}

	[Token(Token = "0x600008A")]
	[Address(RVA = "0x2F9B280", Offset = "0x2F99880", VA = "0x182F9B280")]
	public static void Box(Rect position, GUIContent content, GUIStyle style)
	{
	}

	[Token(Token = "0x600008B")]
	[Address(RVA = "0x2F9B550", Offset = "0x2F99B50", VA = "0x182F9B550")]
	public static bool Button(Rect position, string text)
	{
		return default(bool);
	}

	[Token(Token = "0x600008C")]
	[Address(RVA = "0x2F9B610", Offset = "0x2F99C10", VA = "0x182F9B610")]
	public static bool Button(Rect position, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x600008D")]
	[Address(RVA = "0x2F9B6D0", Offset = "0x2F99CD0", VA = "0x182F9B6D0")]
	internal static bool Button(Rect position, int id, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x600008E")]
	[Address(RVA = "0x2F9C950", Offset = "0x2F9AF50", VA = "0x182F9C950")]
	private static bool DoRepeatButton(Rect position, GUIContent content, GUIStyle style, FocusType focusType)
	{
		return default(bool);
	}

	[Token(Token = "0x600008F")]
	[Address(RVA = "0x2FA3230", Offset = "0x2FA1830", VA = "0x182FA3230")]
	public static string TextField(Rect position, string text)
	{
		return null;
	}

	[Token(Token = "0x6000090")]
	[Address(RVA = "0x2FA1CC0", Offset = "0x2FA02C0", VA = "0x182FA1CC0")]
	internal static string PasswordFieldGetStrToShow(string password, char maskChar)
	{
		return null;
	}

	[Token(Token = "0x6000091")]
	[Address(RVA = "0x2FA3090", Offset = "0x2FA1690", VA = "0x182FA3090")]
	public static string TextArea(Rect position, string text, GUIStyle style)
	{
		return null;
	}

	[Token(Token = "0x6000092")]
	[Address(RVA = "0x2F9D120", Offset = "0x2F9B720", VA = "0x182F9D120")]
	internal static void DoTextField(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style)
	{
	}

	[Token(Token = "0x6000093")]
	[Address(RVA = "0x2F9D520", Offset = "0x2F9BB20", VA = "0x182F9D520")]
	internal static void DoTextField(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, string secureText)
	{
	}

	[Token(Token = "0x6000094")]
	[Address(RVA = "0x2F9D1F0", Offset = "0x2F9B7F0", VA = "0x182F9D1F0")]
	internal static void DoTextField(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, string secureText, char maskChar)
	{
	}

	[Token(Token = "0x6000095")]
	[Address(RVA = "0x2FA0E10", Offset = "0x2F9F410", VA = "0x182FA0E10")]
	private static void HandleTextFieldEventForTouchscreen(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, string secureText, char maskChar, TextEditor editor)
	{
	}

	[Token(Token = "0x6000096")]
	[Address(RVA = "0x2FA0330", Offset = "0x2F9E930", VA = "0x182FA0330")]
	private static void HandleTextFieldEventForDesktop(Rect position, int id, GUIContent content, bool multiline, int maxLength, GUIStyle style, TextEditor editor)
	{
	}

	[Token(Token = "0x6000097")]
	[Address(RVA = "0x2FA33F0", Offset = "0x2FA19F0", VA = "0x182FA33F0")]
	public static bool Toggle(Rect position, bool value, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000098")]
	[Address(RVA = "0x2F9C060", Offset = "0x2F9A660", VA = "0x182F9C060")]
	internal static bool DoControl(Rect position, int id, bool on, bool hover, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x6000099")]
	[Address(RVA = "0x2F9C4F0", Offset = "0x2F9AAF0", VA = "0x182F9C4F0")]
	private static void DoLabel(Rect position, GUIContent content, GUIStyle style)
	{
	}

	[Token(Token = "0x600009A")]
	[Address(RVA = "0x2F9D5C0", Offset = "0x2F9BBC0", VA = "0x182F9D5C0")]
	internal static bool DoToggle(Rect position, int id, bool value, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x600009B")]
	[Address(RVA = "0x2F9BEF0", Offset = "0x2F9A4F0", VA = "0x182F9BEF0")]
	internal static bool DoButton(Rect position, int id, GUIContent content, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x600009C")]
	[Address(RVA = "0x2FA17E0", Offset = "0x2F9FDE0", VA = "0x182FA17E0")]
	public static float HorizontalSlider(Rect position, float value, float leftValue, float rightValue, GUIStyle slider, GUIStyle thumb)
	{
		return default(float);
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x2FA2E90", Offset = "0x2FA1490", VA = "0x182FA2E90")]
	public static float Slider(Rect position, float value, float size, float start, float end, GUIStyle slider, GUIStyle thumb, bool horiz, int id, [Optional] GUIStyle thumbExtent)
	{
		return default(float);
	}

	[Token(Token = "0x600009E")]
	[Address(RVA = "0x2FA1590", Offset = "0x2F9FB90", VA = "0x182FA1590")]
	public static float HorizontalScrollbar(Rect position, float value, float size, float leftValue, float rightValue, GUIStyle style)
	{
		return default(float);
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x2FA1E40", Offset = "0x2FA0440", VA = "0x182FA1E40")]
	internal static bool ScrollerRepeatButton(int scrollerID, Rect rect, GUIStyle style)
	{
		return default(bool);
	}

	[Token(Token = "0x60000A0")]
	[Address(RVA = "0x2FA3740", Offset = "0x2FA1D40", VA = "0x182FA3740")]
	public static float VerticalScrollbar(Rect position, float value, float size, float topValue, float bottomValue, GUIStyle style)
	{
		return default(float);
	}

	[Token(Token = "0x60000A1")]
	[Address(RVA = "0x2FA2180", Offset = "0x2FA0780", VA = "0x182FA2180")]
	internal static float Scroller(Rect position, float value, float size, float leftValue, float rightValue, GUIStyle slider, GUIStyle thumb, GUIStyle leftButton, GUIStyle rightButton, bool horiz)
	{
		return default(float);
	}

	[Token(Token = "0x60000A2")]
	[Address(RVA = "0x2F9A280", Offset = "0x2F98880", VA = "0x182F9A280")]
	public static void BeginGroup(Rect position, GUIContent content, GUIStyle style)
	{
	}

	[Token(Token = "0x60000A3")]
	[Address(RVA = "0x2F99E30", Offset = "0x2F98430", VA = "0x182F99E30")]
	internal static void BeginGroup(Rect position, GUIContent content, GUIStyle style, Vector2 scrollOffset)
	{
	}

	[Token(Token = "0x60000A4")]
	[Address(RVA = "0x2F9ED30", Offset = "0x2F9D330", VA = "0x182F9ED30")]
	public static void EndGroup()
	{
	}

	[Token(Token = "0x60000A6")]
	[Address(RVA = "0x2F9B170", Offset = "0x2F99770", VA = "0x182F9B170")]
	public static Vector2 BeginScrollView(Rect position, Vector2 scrollPosition, Rect viewRect)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000A7")]
	[Address(RVA = "0x2F9A340", Offset = "0x2F98940", VA = "0x182F9A340")]
	internal static Vector2 BeginScrollView(Rect position, Vector2 scrollPosition, Rect viewRect, bool alwaysShowHorizontal, bool alwaysShowVertical, GUIStyle horizontalScrollbar, GUIStyle verticalScrollbar, GUIStyle background)
	{
		return default(Vector2);
	}

	[Token(Token = "0x60000A8")]
	[Address(RVA = "0x2F9EDA0", Offset = "0x2F9D3A0", VA = "0x182F9EDA0")]
	public static void EndScrollView()
	{
	}

	[Token(Token = "0x60000A9")]
	[Address(RVA = "0x2F9EDF0", Offset = "0x2F9D3F0", VA = "0x182F9EDF0")]
	public static void EndScrollView(bool handleScrollWheel)
	{
	}

	[Token(Token = "0x60000AA")]
	[Address(RVA = "0x2FA3990", Offset = "0x2FA1F90", VA = "0x182FA3990")]
	public static Rect Window(int id, Rect clientRect, WindowFunction func, GUIContent title, GUIStyle style)
	{
		return default(Rect);
	}

	[Token(Token = "0x60000AB")]
	[Address(RVA = "0x2F9D730", Offset = "0x2F9BD30", VA = "0x182F9D730")]
	private static Rect DoWindow(int id, Rect clientRect, WindowFunction func, GUIContent title, GUIStyle style, GUISkin skin, bool forceRectOnLayout)
	{
		return default(Rect);
	}

	[Token(Token = "0x60000AC")]
	[Address(RVA = "0x2F9BB10", Offset = "0x2F9A110", VA = "0x182F9BB10")]
	[UnityEngine.Scripting.RequiredByNativeCode]
	internal static void CallWindowDelegate(WindowFunction func, int id, int instanceID, GUISkin _skin, int forceRect, float width, float height, GUIStyle style)
	{
	}

	[Token(Token = "0x60000AD")]
	[Address(RVA = "0x2F9D8C0", Offset = "0x2F9BEC0", VA = "0x182F9D8C0")]
	public static void DragWindow()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AE")]
	[Address(RVA = "0x2FA4070", Offset = "0x2FA2670", VA = "0x182FA4070")]
	private static extern void get_color_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000AF")]
	[Address(RVA = "0x2FA4680", Offset = "0x2FA2C80", VA = "0x182FA4680")]
	private static extern void set_color_Injected([In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B0")]
	[Address(RVA = "0x2FA3E30", Offset = "0x2FA2430", VA = "0x182FA3E30")]
	private static extern void get_backgroundColor_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B1")]
	[Address(RVA = "0x2FA4590", Offset = "0x2FA2B90", VA = "0x182FA4590")]
	private static extern void set_backgroundColor_Injected([In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B2")]
	[Address(RVA = "0x2FA4120", Offset = "0x2FA2720", VA = "0x182FA4120")]
	private static extern void get_contentColor_Injected(out Color ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x2FA4730", Offset = "0x2FA2D30", VA = "0x182FA4730")]
	private static extern void set_contentColor_Injected([In] ref Color value);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x2FA3EE0", Offset = "0x2FA24E0", VA = "0x182FA3EE0")]
	private static extern IntPtr get_blendMaterial_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x2FA3F90", Offset = "0x2FA2590", VA = "0x182FA3F90")]
	private static extern IntPtr get_blitMaterial_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x2FA42E0", Offset = "0x2FA28E0", VA = "0x182FA42E0")]
	private static extern IntPtr get_roundedRectMaterial_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x2FA4390", Offset = "0x2FA2990", VA = "0x182FA4390")]
	private static extern IntPtr get_roundedRectWithColorPerBorderMaterial_Injected();

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x2FA2CB0", Offset = "0x2FA12B0", VA = "0x182FA2CB0")]
	private static extern void SetNextControlName_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x2FA01D0", Offset = "0x2F9E7D0", VA = "0x182FA01D0")]
	private static extern void GetNameOfFocusedControl_Injected(out UnityEngine.Bindings.ManagedSpanWrapper ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x2F9FFF0", Offset = "0x2F9E5F0", VA = "0x182F9FFF0")]
	private static extern void FocusControl_Injected(ref UnityEngine.Bindings.ManagedSpanWrapper name);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x2FA18E0", Offset = "0x2F9FEE0", VA = "0x182FA18E0")]
	private static extern void Internal_DoWindow_Injected(int id, int instanceID, [In] ref Rect clientRect, WindowFunction func, GUIContent title, GUIStyle style, object skin, bool forceRectOnLayout, out Rect ret);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x2F9D880", Offset = "0x2F9BE80", VA = "0x182F9D880")]
	private static extern void DragWindow_Injected([In] ref Rect position);
}
