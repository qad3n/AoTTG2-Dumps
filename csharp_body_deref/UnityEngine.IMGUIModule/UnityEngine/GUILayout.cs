// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GUILayout
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x4E51150", Offset = "0x4E51150", VA = "0x4E51150")]
		internal LayoutedWindow(GUI.WindowFunction f, Rect screenRect, GUIContent content, GUILayoutOption[] options, GUIStyle style)
		{
		}

		[Token(Token = "0x60000DE")]
		[Address(RVA = "0x4E51200", Offset = "0x4E51200", VA = "0x4E51200")]
		public void DoWindow(int windowID)
		{
		}
	}

	[Token(Token = "0x60000C9")]
	[Address(RVA = "0x4E4EDB0", Offset = "0x4E4EDB0", VA = "0x4E4EDB0")]
	public static void Label(string text, params GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000CA")]
	[Address(RVA = "0x4E4EEB0", Offset = "0x4E4EEB0", VA = "0x4E4EEB0")]
	private static void DoLabel(GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000CB")]
	[Address(RVA = "0x4E4F090", Offset = "0x4E4F090", VA = "0x4E4F090")]
	public static void Box(string text, params GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000CC")]
	[Address(RVA = "0x4E4F190", Offset = "0x4E4F190", VA = "0x4E4F190")]
	private static void DoBox(GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000CD")]
	[Address(RVA = "0x4E4F2B0", Offset = "0x4E4F2B0", VA = "0x4E4F2B0")]
	public static bool Button(string text, params GUILayoutOption[] options)
	{
		return default(bool);
	}

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x4E4F3B0", Offset = "0x4E4F3B0", VA = "0x4E4F3B0")]
	private static bool DoButton(GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
		return default(bool);
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x4E4F4D0", Offset = "0x4E4F4D0", VA = "0x4E4F4D0")]
	public static bool Toggle(bool value, string text, params GUILayoutOption[] options)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x4E4F5F0", Offset = "0x4E4F5F0", VA = "0x4E4F5F0")]
	private static bool DoToggle(bool value, GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
		return default(bool);
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x4E4F720", Offset = "0x4E4F720", VA = "0x4E4F720")]
	public static float HorizontalSlider(float value, float leftValue, float rightValue, params GUILayoutOption[] options)
	{
		return default(float);
	}

	[Token(Token = "0x60000D2")]
	[Address(RVA = "0x4E4F8F0", Offset = "0x4E4F8F0", VA = "0x4E4F8F0")]
	private static float DoHorizontalSlider(float value, float leftValue, float rightValue, GUIStyle slider, GUIStyle thumb, GUILayoutOption[] options)
	{
		return default(float);
	}

	[Token(Token = "0x60000D3")]
	[Address(RVA = "0x4E4FAD0", Offset = "0x4E4FAD0", VA = "0x4E4FAD0")]
	public static void BeginHorizontal(params GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000D4")]
	[Address(RVA = "0x4E4FB60", Offset = "0x4E4FB60", VA = "0x4E4FB60")]
	public static void BeginHorizontal(GUIContent content, GUIStyle style, params GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000D5")]
	[Address(RVA = "0x4E50100", Offset = "0x4E50100", VA = "0x4E50100")]
	public static void EndHorizontal()
	{
	}

	[Token(Token = "0x60000D6")]
	[Address(RVA = "0x4E50490", Offset = "0x4E50490", VA = "0x4E50490")]
	public static void BeginArea(Rect screenRect)
	{
	}

	[Token(Token = "0x60000D7")]
	[Address(RVA = "0x4E50520", Offset = "0x4E50520", VA = "0x4E50520")]
	public static void BeginArea(Rect screenRect, GUIContent content, GUIStyle style)
	{
	}

	[Token(Token = "0x60000D8")]
	[Address(RVA = "0x4E50B20", Offset = "0x4E50B20", VA = "0x4E50B20")]
	public static void EndArea()
	{
	}

	[Token(Token = "0x60000D9")]
	[Address(RVA = "0x4E50E60", Offset = "0x4E50E60", VA = "0x4E50E60")]
	public static Rect Window(int id, Rect screenRect, GUI.WindowFunction func, string text, params GUILayoutOption[] options)
	{
		return default(Rect);
	}

	[Token(Token = "0x60000DA")]
	[Address(RVA = "0x4E50FA0", Offset = "0x4E50FA0", VA = "0x4E50FA0")]
	private static Rect DoWindow(int id, Rect screenRect, GUI.WindowFunction func, GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
		return default(Rect);
	}

	[Token(Token = "0x60000DB")]
	[Address(RVA = "0x4E4D640", Offset = "0x4E4D640", VA = "0x4E4D640")]
	public static GUILayoutOption Width(float width)
	{
		return null;
	}

	[Token(Token = "0x60000DC")]
	[Address(RVA = "0x4E4D6D0", Offset = "0x4E4D6D0", VA = "0x4E4D6D0")]
	public static GUILayoutOption Height(float height)
	{
		return null;
	}
}
