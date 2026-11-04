// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GUILayout
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200000F")]
public class GUILayout
{
	[Token(Token = "0x2000010")]
	private sealed class LayoutedWindow
	{
		[Token(Token = "0x400005F")]
		[FieldOffset(Offset = "0x10")]
		private readonly GUI.WindowFunction m_Func;

		[Token(Token = "0x4000060")]
		[FieldOffset(Offset = "0x18")]
		private readonly Rect m_ScreenRect;

		[Token(Token = "0x4000061")]
		[FieldOffset(Offset = "0x28")]
		private readonly GUILayoutOption[] m_Options;

		[Token(Token = "0x4000062")]
		[FieldOffset(Offset = "0x30")]
		private readonly GUIStyle m_Style;

		[Token(Token = "0x60000FB")]
		[Address(RVA = "0x2FA64D0", Offset = "0x2FA4AD0", VA = "0x182FA64D0")]
		internal LayoutedWindow(GUI.WindowFunction f, Rect screenRect, GUIContent content, GUILayoutOption[] options, GUIStyle style)
		{
		}

		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x2FA6350", Offset = "0x2FA4950", VA = "0x182FA6350")]
		public void DoWindow(int windowID)
		{
		}
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x2F8CB70", Offset = "0x2F8B170", VA = "0x182F8CB70")]
	public static void Label(string text, params GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x2F8C1A0", Offset = "0x2F8A7A0", VA = "0x182F8C1A0")]
	private static void DoLabel(GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x2F8BB20", Offset = "0x2F8A120", VA = "0x182F8BB20")]
	public static void Box(string text, params GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x2F8BE00", Offset = "0x2F8A400", VA = "0x182F8BE00")]
	private static void DoBox(GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x2F8BC90", Offset = "0x2F8A290", VA = "0x182F8BC90")]
	public static bool Button(string text, params GUILayoutOption[] options)
	{
		return default(bool);
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x2F8BEF0", Offset = "0x2F8A4F0", VA = "0x182F8BEF0")]
	private static bool DoButton(GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
		return default(bool);
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x2F8CD30", Offset = "0x2F8B330", VA = "0x182F8CD30")]
	public static bool Toggle(bool value, string text, params GUILayoutOption[] options)
	{
		return default(bool);
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x2F8C2F0", Offset = "0x2F8A8F0", VA = "0x182F8C2F0")]
	private static bool DoToggle(bool value, GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
		return default(bool);
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x2F8C920", Offset = "0x2F8AF20", VA = "0x182F8C920")]
	public static float HorizontalSlider(float value, float leftValue, float rightValue, params GUILayoutOption[] options)
	{
		return default(float);
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x2F8BFE0", Offset = "0x2F8A5E0", VA = "0x182F8BFE0")]
	private static float DoHorizontalSlider(float value, float leftValue, float rightValue, GUIStyle slider, GUIStyle thumb, GUILayoutOption[] options)
	{
		return default(float);
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x2F8B7D0", Offset = "0x2F89DD0", VA = "0x182F8B7D0")]
	public static void BeginHorizontal(params GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x2F8B9B0", Offset = "0x2F89FB0", VA = "0x182F8B9B0")]
	public static void BeginHorizontal(GUIContent content, GUIStyle style, params GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x2F8C850", Offset = "0x2F8AE50", VA = "0x182F8C850")]
	public static void EndHorizontal()
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x2F8B490", Offset = "0x2F89A90", VA = "0x182F8B490")]
	public static void BeginArea(Rect screenRect)
	{
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x2F8B540", Offset = "0x2F89B40", VA = "0x182F8B540")]
	public static void BeginArea(Rect screenRect, GUIContent content, GUIStyle style)
	{
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x2F8C6E0", Offset = "0x2F8ACE0", VA = "0x182F8C6E0")]
	public static void EndArea()
	{
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x2F8CF30", Offset = "0x2F8B530", VA = "0x182F8CF30")]
	public static Rect Window(int id, Rect screenRect, GUI.WindowFunction func, string text, params GUILayoutOption[] options)
	{
		return default(Rect);
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x2F8C3E0", Offset = "0x2F8A9E0", VA = "0x182F8C3E0")]
	private static Rect DoWindow(int id, Rect screenRect, GUI.WindowFunction func, GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
		return default(Rect);
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x2F8CEA0", Offset = "0x2F8B4A0", VA = "0x182F8CEA0")]
	public static GUILayoutOption Width(float width)
	{
		return null;
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x2F8C890", Offset = "0x2F8AE90", VA = "0x182F8C890")]
	public static GUILayoutOption Height(float height)
	{
		return null;
	}
}
