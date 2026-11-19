// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UI.DefaultControls
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UI;

[Token(Token = "0x200000F")]
public static class DefaultControls
{
	[Token(Token = "0x2000010")]
	public interface IFactoryControls
	{
		[Token(Token = "0x600006C")]
		GameObject CreateGameObject(string name, params Type[] components);
	}

	[Token(Token = "0x2000011")]
	private class DefaultRuntimeFactory : IFactoryControls
	{
		[Token(Token = "0x4000036")]
		[FieldOffset(Offset = "0x0")]
		public static IFactoryControls Default;

		[Token(Token = "0x600006D")]
		[Address(RVA = "0x6A65EF0", Offset = "0x6A64EF0", VA = "0x6A65EF0", Slot = "4")]
		public GameObject CreateGameObject(string name, params Type[] components)
		{
			return null;
		}

		[Token(Token = "0x600006E")]
		[Address(RVA = "0x6A65F50", Offset = "0x6A64F50", VA = "0x6A65F50")]
		public DefaultRuntimeFactory()
		{
		}
	}

	[Token(Token = "0x2000012")]
	public struct Resources
	{
		[Token(Token = "0x4000037")]
		[FieldOffset(Offset = "0x0")]
		public Sprite standard;

		[Token(Token = "0x4000038")]
		[FieldOffset(Offset = "0x8")]
		public Sprite background;

		[Token(Token = "0x4000039")]
		[FieldOffset(Offset = "0x10")]
		public Sprite inputField;

		[Token(Token = "0x400003A")]
		[FieldOffset(Offset = "0x18")]
		public Sprite knob;

		[Token(Token = "0x400003B")]
		[FieldOffset(Offset = "0x20")]
		public Sprite checkmark;

		[Token(Token = "0x400003C")]
		[FieldOffset(Offset = "0x28")]
		public Sprite dropdown;

		[Token(Token = "0x400003D")]
		[FieldOffset(Offset = "0x30")]
		public Sprite mask;
	}

	[Token(Token = "0x400002C")]
	[FieldOffset(Offset = "0x0")]
	private static IFactoryControls m_CurrentFactory;

	[Token(Token = "0x400002D")]
	private const float kWidth = 160f;

	[Token(Token = "0x400002E")]
	private const float kThickHeight = 30f;

	[Token(Token = "0x400002F")]
	private const float kThinHeight = 20f;

	[Token(Token = "0x4000030")]
	[FieldOffset(Offset = "0x8")]
	private static Vector2 s_ThickElementSize;

	[Token(Token = "0x4000031")]
	[FieldOffset(Offset = "0x10")]
	private static Vector2 s_ThinElementSize;

	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x18")]
	private static Vector2 s_ImageElementSize;

	[Token(Token = "0x4000033")]
	[FieldOffset(Offset = "0x20")]
	private static Color s_DefaultSelectableColor;

	[Token(Token = "0x4000034")]
	[FieldOffset(Offset = "0x30")]
	private static Color s_PanelColor;

	[Token(Token = "0x4000035")]
	[FieldOffset(Offset = "0x40")]
	private static Color s_TextColor;

	[Token(Token = "0x17000015")]
	public static IFactoryControls factory
	{
		[Token(Token = "0x6000059")]
		[Address(RVA = "0x6A60A20", Offset = "0x6A5FA20", VA = "0x6A60A20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x6A60A90", Offset = "0x6A5FA90", VA = "0x6A60A90")]
	private static GameObject CreateUIElementRoot(string name, Vector2 size, params Type[] components)
	{
		return null;
	}

	[Token(Token = "0x600005B")]
	[Address(RVA = "0x6A60C40", Offset = "0x6A5FC40", VA = "0x6A60C40")]
	private static GameObject CreateUIObject(string name, GameObject parent, params Type[] components)
	{
		return null;
	}

	[Token(Token = "0x600005C")]
	[Address(RVA = "0x6A60E90", Offset = "0x6A5FE90", VA = "0x6A60E90")]
	private static void SetDefaultTextValues(Text lbl)
	{
	}

	[Token(Token = "0x600005D")]
	[Address(RVA = "0x6A60F90", Offset = "0x6A5FF90", VA = "0x6A60F90")]
	private static void SetDefaultColorTransitionValues(Selectable slider)
	{
	}

	[Token(Token = "0x600005E")]
	[Address(RVA = "0x6A60DC0", Offset = "0x6A5FDC0", VA = "0x6A60DC0")]
	private static void SetParentAndAlign(GameObject child, GameObject parent)
	{
	}

	[Token(Token = "0x600005F")]
	[Address(RVA = "0x6A60FE0", Offset = "0x6A5FFE0", VA = "0x6A60FE0")]
	private static void SetLayerRecursively(GameObject go, int layer)
	{
	}

	[Token(Token = "0x6000060")]
	[Address(RVA = "0x6A610B0", Offset = "0x6A600B0", VA = "0x6A610B0")]
	public static GameObject CreatePanel(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000061")]
	[Address(RVA = "0x6A618B0", Offset = "0x6A608B0", VA = "0x6A618B0")]
	public static GameObject CreateButton(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000062")]
	[Address(RVA = "0x6A61D50", Offset = "0x6A60D50", VA = "0x6A61D50")]
	public static GameObject CreateText(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000063")]
	[Address(RVA = "0x6A61EF0", Offset = "0x6A60EF0", VA = "0x6A61EF0")]
	public static GameObject CreateImage(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000064")]
	[Address(RVA = "0x6A62020", Offset = "0x6A61020", VA = "0x6A62020")]
	public static GameObject CreateRawImage(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000065")]
	[Address(RVA = "0x6A62150", Offset = "0x6A61150", VA = "0x6A62150")]
	public static GameObject CreateSlider(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000066")]
	[Address(RVA = "0x6A62970", Offset = "0x6A61970", VA = "0x6A62970")]
	public static GameObject CreateScrollbar(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000067")]
	[Address(RVA = "0x6A62F00", Offset = "0x6A61F00", VA = "0x6A62F00")]
	public static GameObject CreateToggle(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000068")]
	[Address(RVA = "0x6A63540", Offset = "0x6A62540", VA = "0x6A63540")]
	public static GameObject CreateInputField(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x6000069")]
	[Address(RVA = "0x6A63C20", Offset = "0x6A62C20", VA = "0x6A63C20")]
	public static GameObject CreateDropdown(Resources resources)
	{
		return null;
	}

	[Token(Token = "0x600006A")]
	[Address(RVA = "0x6A65410", Offset = "0x6A64410", VA = "0x6A65410")]
	public static GameObject CreateScrollView(Resources resources)
	{
		return null;
	}
}
