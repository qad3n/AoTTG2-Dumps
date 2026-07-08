using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200000E")]
public class GUILayout
{
	[Token(Token = "0x200000F")]
	private sealed class LayoutedWindow
	{
		[Token(Token = "0x400005D")]
		[FieldOffset(Offset = "0x10")]
		private readonly GUI.WindowFunction m_Func;

		[Token(Token = "0x400005E")]
		[FieldOffset(Offset = "0x18")]
		private readonly Rect m_ScreenRect;

		[Token(Token = "0x400005F")]
		[FieldOffset(Offset = "0x28")]
		private readonly GUILayoutOption[] m_Options;

		[Token(Token = "0x4000060")]
		[FieldOffset(Offset = "0x30")]
		private readonly GUIStyle m_Style;

		[Token(Token = "0x60000DD")]
		[Address(RVA = "0x4B29590", Offset = "0x4B29590", VA = "0x4B29590")]
		internal LayoutedWindow(GUI.WindowFunction f, Rect screenRect, GUIContent content, GUILayoutOption[] options, GUIStyle style)
		{
		}

		[Token(Token = "0x60000DE")]
		[Address(RVA = "0x4B29640", Offset = "0x4B29640", VA = "0x4B29640")]
		public void DoWindow(int windowID)
		{
		}
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x4B271F0", Offset = "0x4B271F0", VA = "0x4B271F0")]
	public static void Label(string text, params GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x4B272F0", Offset = "0x4B272F0", VA = "0x4B272F0")]
	private static void DoLabel(GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x4B274D0", Offset = "0x4B274D0", VA = "0x4B274D0")]
	public static void Box(string text, params GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x4B275D0", Offset = "0x4B275D0", VA = "0x4B275D0")]
	private static void DoBox(GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x4B276F0", Offset = "0x4B276F0", VA = "0x4B276F0")]
	public static bool Button(string text, params GUILayoutOption[] options)
	{
		return default(bool);
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x4B277F0", Offset = "0x4B277F0", VA = "0x4B277F0")]
	private static bool DoButton(GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
		return default(bool);
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x4B27910", Offset = "0x4B27910", VA = "0x4B27910")]
	public static bool Toggle(bool value, string text, params GUILayoutOption[] options)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x4B27A30", Offset = "0x4B27A30", VA = "0x4B27A30")]
	private static bool DoToggle(bool value, GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x4B27B60", Offset = "0x4B27B60", VA = "0x4B27B60")]
	public static float HorizontalSlider(float value, float leftValue, float rightValue, params GUILayoutOption[] options)
	{
		return default(float);
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x4B27D30", Offset = "0x4B27D30", VA = "0x4B27D30")]
	private static float DoHorizontalSlider(float value, float leftValue, float rightValue, GUIStyle slider, GUIStyle thumb, GUILayoutOption[] options)
	{
		return default(float);
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x4B27F10", Offset = "0x4B27F10", VA = "0x4B27F10")]
	public static void BeginHorizontal(params GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x4B27FA0", Offset = "0x4B27FA0", VA = "0x4B27FA0")]
	public static void BeginHorizontal(GUIContent content, GUIStyle style, params GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x4B28540", Offset = "0x4B28540", VA = "0x4B28540")]
	public static void EndHorizontal()
	{
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x4B288D0", Offset = "0x4B288D0", VA = "0x4B288D0")]
	public static void BeginArea(Rect screenRect)
	{
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x4B28960", Offset = "0x4B28960", VA = "0x4B28960")]
	public static void BeginArea(Rect screenRect, GUIContent content, GUIStyle style)
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x4B28F60", Offset = "0x4B28F60", VA = "0x4B28F60")]
	public static void EndArea()
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x4B292A0", Offset = "0x4B292A0", VA = "0x4B292A0")]
	public static Rect Window(int id, Rect screenRect, GUI.WindowFunction func, string text, params GUILayoutOption[] options)
	{
		return default(Rect);
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x4B293E0", Offset = "0x4B293E0", VA = "0x4B293E0")]
	private static Rect DoWindow(int id, Rect screenRect, GUI.WindowFunction func, GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
		return default(Rect);
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x4B25A80", Offset = "0x4B25A80", VA = "0x4B25A80")]
	public static GUILayoutOption Width(float width)
	{
		return null;
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x4B25B10", Offset = "0x4B25B10", VA = "0x4B25B10")]
	public static GUILayoutOption Height(float height)
	{
		return null;
	}
}
