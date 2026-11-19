// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Button
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200009C")]
public class Button : TextElement
{
	[Token(Token = "0x200009D")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<Button, UxmlTraits>
	{
		[Token(Token = "0x6000517")]
		[Address(RVA = "0x6BD5620", Offset = "0x6BD4620", VA = "0x6BD5620")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x200009E")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : TextElement.UxmlTraits
	{
		[Token(Token = "0x40002E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xD0")]
		private readonly UxmlImageAttributeDescription m_IconImage;

		[Token(Token = "0x6000518")]
		[Address(RVA = "0x6BD5660", Offset = "0x6BD4660", VA = "0x6BD5660")]
		public UxmlTraits()
		{
		}

		[Token(Token = "0x6000519")]
		[Address(RVA = "0x6BD5710", Offset = "0x6BD4710", VA = "0x6BD5710", Slot = "4")]
		public override void Init(VisualElement ve, IUxmlAttributes bag, CreationContext cc)
		{
		}
	}

	[Token(Token = "0x40002DE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	internal static readonly BindingId iconImageProperty;

	[Token(Token = "0x40002DF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40002E0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	public static readonly string iconUssClassName;

	[Token(Token = "0x40002E1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	public static readonly string iconOnlyUssClassName;

	[Token(Token = "0x40002E2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	public static readonly string imageUSSClassName;

	[Token(Token = "0x40002E3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3D0")]
	private Clickable m_Clickable;

	[Token(Token = "0x40002E4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3D8")]
	private TextElement m_TextElement;

	[Token(Token = "0x40002E5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3E0")]
	private Image m_ImageElement;

	[Token(Token = "0x40002E6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x3E8")]
	private Background m_IconImage;

	[Token(Token = "0x40002E7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x408")]
	private string m_Text;

	[Token(Token = "0x40002E8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB8")]
	private static readonly string NonEmptyString;

	[Token(Token = "0x170000E9")]
	public Clickable clickable
	{
		[Token(Token = "0x6000509")]
		[Address(RVA = "0x6BD43D0", Offset = "0x6BD33D0", VA = "0x6BD43D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x600050A")]
		[Address(RVA = "0x6BD43E0", Offset = "0x6BD33E0", VA = "0x6BD43E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000EA")]
	[CreateProperty]
	public Background iconImage
	{
		[Token(Token = "0x600050B")]
		[Address(RVA = "0x6BD4450", Offset = "0x6BD3450", VA = "0x6BD4450")]
		get
		{
			return default(Background);
		}
		[Token(Token = "0x600050C")]
		[Address(RVA = "0x6BD4470", Offset = "0x6BD3470", VA = "0x6BD4470")]
		set
		{
		}
	}

	[Token(Token = "0x170000EB")]
	public override string text
	{
		[Token(Token = "0x600050D")]
		[Address(RVA = "0x6BD4D60", Offset = "0x6BD3D60", VA = "0x6BD4D60", Slot = "211")]
		get
		{
			return null;
		}
		[Token(Token = "0x600050E")]
		[Address(RVA = "0x6BD4D90", Offset = "0x6BD3D90", VA = "0x6BD4D90", Slot = "212")]
		set
		{
		}
	}

	[Token(Token = "0x600050F")]
	[Address(RVA = "0x6BD4F30", Offset = "0x6BD3F30", VA = "0x6BD4F30")]
	public Button()
	{
	}

	[Token(Token = "0x6000510")]
	[Address(RVA = "0x6BD4F70", Offset = "0x6BD3F70", VA = "0x6BD4F70")]
	public Button(Background iconImage, [Optional] Action clickEvent)
	{
	}

	[Token(Token = "0x6000511")]
	[Address(RVA = "0x6BD4F90", Offset = "0x6BD3F90", VA = "0x6BD4F90")]
	public Button(Action clickEvent)
	{
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x6BD5160", Offset = "0x6BD4160", VA = "0x6BD5160")]
	private void OnNavigationSubmit(NavigationSubmitEvent evt)
	{
	}

	[Token(Token = "0x6000513")]
	[Address(RVA = "0x6BD51A0", Offset = "0x6BD41A0", VA = "0x6BD51A0", Slot = "137")]
	protected internal override Vector2 DoMeasure(float desiredWidth, MeasureMode widthMode, float desiredHeight, MeasureMode heightMode)
	{
		return default(Vector2);
	}

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x6BD4950", Offset = "0x6BD3950", VA = "0x6BD4950")]
	private void UpdateButtonHierarchy()
	{
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x6BD4840", Offset = "0x6BD3840", VA = "0x6BD4840")]
	private void ResetButtonHierarchy()
	{
	}
}
