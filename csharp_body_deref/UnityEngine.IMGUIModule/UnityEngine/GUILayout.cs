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
		[Address(RVA = "0x698DF90", Offset = "0x698CF90", VA = "0x698DF90")]
		internal LayoutedWindow(GUI.WindowFunction f, Rect screenRect, GUIContent content, GUILayoutOption[] options, GUIStyle style)
		{
		}

		[Token(Token = "0x60000FC")]
		[Address(RVA = "0x698E040", Offset = "0x698D040", VA = "0x698E040")]
		public void DoWindow(int windowID)
		{
		}
	}

	[Token(Token = "0x60000E7")]
	[Address(RVA = "0x698B840", Offset = "0x698A840", VA = "0x698B840")]
	public static void Label(string text, params GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000E8")]
	[Address(RVA = "0x698B980", Offset = "0x698A980", VA = "0x698B980")]
	private static void DoLabel(GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000E9")]
	[Address(RVA = "0x698BBA0", Offset = "0x698ABA0", VA = "0x698BBA0")]
	public static void Box(string text, params GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000EA")]
	[Address(RVA = "0x698BCE0", Offset = "0x698ACE0", VA = "0x698BCE0")]
	private static void DoBox(GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000EB")]
	[Address(RVA = "0x698BE00", Offset = "0x698AE00", VA = "0x698BE00")]
	public static bool Button(string text, params GUILayoutOption[] options)
	{
		return default(bool);
	}

	[Token(Token = "0x60000EC")]
	[Address(RVA = "0x698BF40", Offset = "0x698AF40", VA = "0x698BF40")]
	private static bool DoButton(GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
		return default(bool);
	}

	[Token(Token = "0x60000ED")]
	[Address(RVA = "0x698C060", Offset = "0x698B060", VA = "0x698C060")]
	public static bool Toggle(bool value, string text, params GUILayoutOption[] options)
	{
		return default(bool);
	}

	[Token(Token = "0x60000EE")]
	[Address(RVA = "0x698C1D0", Offset = "0x698B1D0", VA = "0x698C1D0")]
	private static bool DoToggle(bool value, GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
		return default(bool);
	}

	[Token(Token = "0x60000EF")]
	[Address(RVA = "0x698C300", Offset = "0x698B300", VA = "0x698C300")]
	public static float HorizontalSlider(float value, float leftValue, float rightValue, params GUILayoutOption[] options)
	{
		return default(float);
	}

	[Token(Token = "0x60000F0")]
	[Address(RVA = "0x698C530", Offset = "0x698B530", VA = "0x698C530")]
	private static float DoHorizontalSlider(float value, float leftValue, float rightValue, GUIStyle slider, GUIStyle thumb, GUILayoutOption[] options)
	{
		return default(float);
	}

	[Token(Token = "0x60000F1")]
	[Address(RVA = "0x698C710", Offset = "0x698B710", VA = "0x698C710")]
	public static void BeginHorizontal(params GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000F2")]
	[Address(RVA = "0x698C7A0", Offset = "0x698B7A0", VA = "0x698C7A0")]
	public static void BeginHorizontal(GUIContent content, GUIStyle style, params GUILayoutOption[] options)
	{
	}

	[Token(Token = "0x60000F3")]
	[Address(RVA = "0x698CD70", Offset = "0x698BD70", VA = "0x698CD70")]
	public static void EndHorizontal()
	{
	}

	[Token(Token = "0x60000F4")]
	[Address(RVA = "0x698D110", Offset = "0x698C110", VA = "0x698D110")]
	public static void BeginArea(Rect screenRect)
	{
	}

	[Token(Token = "0x60000F5")]
	[Address(RVA = "0x698D1B0", Offset = "0x698C1B0", VA = "0x698D1B0")]
	public static void BeginArea(Rect screenRect, GUIContent content, GUIStyle style)
	{
	}

	[Token(Token = "0x60000F6")]
	[Address(RVA = "0x698D880", Offset = "0x698C880", VA = "0x698D880")]
	public static void EndArea()
	{
	}

	[Token(Token = "0x60000F7")]
	[Address(RVA = "0x698DC50", Offset = "0x698CC50", VA = "0x698DC50")]
	public static Rect Window(int id, Rect screenRect, GUI.WindowFunction func, string text, params GUILayoutOption[] options)
	{
		return default(Rect);
	}

	[Token(Token = "0x60000F8")]
	[Address(RVA = "0x698DDE0", Offset = "0x698CDE0", VA = "0x698DDE0")]
	private static Rect DoWindow(int id, Rect screenRect, GUI.WindowFunction func, GUIContent content, GUIStyle style, GUILayoutOption[] options)
	{
		return default(Rect);
	}

	[Token(Token = "0x60000F9")]
	[Address(RVA = "0x6989FA0", Offset = "0x6988FA0", VA = "0x6989FA0")]
	public static GUILayoutOption Width(float width)
	{
		return null;
	}

	[Token(Token = "0x60000FA")]
	[Address(RVA = "0x698A030", Offset = "0x6989030", VA = "0x698A030")]
	public static GUILayoutOption Height(float height)
	{
		return null;
	}
}
