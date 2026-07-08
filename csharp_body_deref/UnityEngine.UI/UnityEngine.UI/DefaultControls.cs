using System;
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x2000011")]
public static class DefaultControls
{
	[Token(Token = "0x2000012")]
	public interface IFactoryControls
	{
		[Token(Token = "0x600006E")]
		GameObject CreateGameObject(string name, params Type[] components);
	}

	[Token(Token = "0x2000013")]
	private class DefaultRuntimeFactory : IFactoryControls
	{
		[Token(Token = "0x400003B")]
		[FieldOffset(Offset = "0x0")]
		public static IFactoryControls Default;

		[Token(Token = "0x600006F")]
		[Address(RVA = "0x4BD1170", Offset = "0x4BD1170", VA = "0x4BD1170", Slot = "4")]
		public GameObject CreateGameObject(string name, params Type[] components)
		{
			return null;
		}

		[Token(Token = "0x6000070")]
		[Address(RVA = "0x4BD11D0", Offset = "0x4BD11D0", VA = "0x4BD11D0")]
		public DefaultRuntimeFactory()
		{
		}
	}

	[Token(Token = "0x2000014")]
	public struct Resources
	{
		[Token(Token = "0x400003C")]
		[FieldOffset(Offset = "0x0")]
		public Sprite standard;

		[Token(Token = "0x400003D")]
		[FieldOffset(Offset = "0x8")]
		public Sprite background;

		[Token(Token = "0x400003E")]
		[FieldOffset(Offset = "0x10")]
		public Sprite inputField;

		[Token(Token = "0x400003F")]
		[FieldOffset(Offset = "0x18")]
		public Sprite knob;

		[Token(Token = "0x4000040")]
		[FieldOffset(Offset = "0x20")]
		public Sprite checkmark;

		[Token(Token = "0x4000041")]
		[FieldOffset(Offset = "0x28")]
		public Sprite dropdown;

		[Token(Token = "0x4000042")]
		[FieldOffset(Offset = "0x30")]
		public Sprite mask;
	}

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x0")]
	private static IFactoryControls m_CurrentFactory;

	[Token(Token = "0x4000032")]
	private const float kWidth = 160f;

	[Token(Token = "0x4000033")]
	private const float kThickHeight = 30f;

	[Token(Token = "0x4000034")]
	private const float kThinHeight = 20f;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x8")]
	private static Vector2 s_ThickElementSize;

	[Token(Token = "0x4000036")]
	[FieldOffset(Offset = "0x10")]
	private static Vector2 s_ThinElementSize;

	[Token(Token = "0x4000037")]
	[FieldOffset(Offset = "0x18")]
	private static Vector2 s_ImageElementSize;

	[Token(Token = "0x4000038")]
	[FieldOffset(Offset = "0x20")]
	private static Color s_DefaultSelectableColor;

	[Token(Token = "0x4000039")]
	[FieldOffset(Offset = "0x30")]
	private static Color s_PanelColor;

	[Token(Token = "0x400003A")]
	[FieldOffset(Offset = "0x40")]
	private static Color s_TextColor;

	[Token(Token = "0x17000015")]
	public static IFactoryControls factory
	{
		[Token(Token = "0x600005B")]
		[Address(RVA = "0x4BCBD90", Offset = "0x4BCBD90", VA = "0x4BCBD90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x4BCBE00", Offset = "0x4BCBE00", VA = "0x4BCBE00")]
	private static GameObject CreateUIElementRoot(string name, Vector2 size, params Type[] components)
	{
		return null;
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x4BCBFB0", Offset = "0x4BCBFB0", VA = "0x4BCBFB0")]
	private static GameObject CreateUIObject(string name, GameObject parent, params Type[] components)
	{
		return null;
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x4BCC200", Offset = "0x4BCC200", VA = "0x4BCC200")]
	private static void SetDefaultTextValues(Text lbl)
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x4BCC300", Offset = "0x4BCC300", VA = "0x4BCC300")]
	private static void SetDefaultColorTransitionValues(Selectable slider)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x4BCC130", Offset = "0x4BCC130", VA = "0x4BCC130")]
	private static void SetParentAndAlign(GameObject child, GameObject parent)
	{
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x4BCC350", Offset = "0x4BCC350", VA = "0x4BCC350")]
	private static void SetLayerRecursively(GameObject go, int layer)
	{
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x4BCC420", Offset = "0x4BCC420", VA = "0x4BCC420")]
	public static GameObject CreatePanel(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x4BCCB10", Offset = "0x4BCCB10", VA = "0x4BCCB10")]
	public static GameObject CreateButton(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x4BCCFB0", Offset = "0x4BCCFB0", VA = "0x4BCCFB0")]
	public static GameObject CreateText(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x4BCD150", Offset = "0x4BCD150", VA = "0x4BCD150")]
	public static GameObject CreateImage(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x4BCD280", Offset = "0x4BCD280", VA = "0x4BCD280")]
	public static GameObject CreateRawImage(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x4BCD3B0", Offset = "0x4BCD3B0", VA = "0x4BCD3B0")]
	public static GameObject CreateSlider(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x4BCDBD0", Offset = "0x4BCDBD0", VA = "0x4BCDBD0")]
	public static GameObject CreateScrollbar(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x4BCE160", Offset = "0x4BCE160", VA = "0x4BCE160")]
	public static GameObject CreateToggle(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x4BCE7A0", Offset = "0x4BCE7A0", VA = "0x4BCE7A0")]
	public static GameObject CreateInputField(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x600006B")]
	[Address(RVA = "0x4BCEE80", Offset = "0x4BCEE80", VA = "0x4BCEE80")]
	public static GameObject CreateDropdown(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x600006C")]
	[Address(RVA = "0x4BD0690", Offset = "0x4BD0690", VA = "0x4BD0690")]
	public static GameObject CreateScrollView(Resources resources)
	{
		return null;
	}
}
