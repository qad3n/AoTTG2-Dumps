// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Button
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000060")]
public class Button : TextElement
{
	[Token(Token = "0x2000061")]
	public new class UxmlFactory : UxmlFactory<Button, UxmlTraits>
	{
		[Token(Token = "0x6000348")]
		[Address(RVA = "0x4F317D0", Offset = "0x4F317D0", VA = "0x4F317D0")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x2000062")]
	public new class UxmlTraits : TextElement.UxmlTraits
	{
		[Token(Token = "0x6000349")]
		[Address(RVA = "0x4F31810", Offset = "0x4F31810", VA = "0x4F31810")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x40001BC")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x40001BD")]
	[FieldOffset(Offset = "0x4D8")]
	private Clickable m_Clickable;

	[Token(Token = "0x40001BE")]
	[FieldOffset(Offset = "0x8")]
	private static readonly string NonEmptyString;

	[Token(Token = "0x17000087")]
	public Clickable clickable
	{
		[Token(Token = "0x6000341")]
		[Address(RVA = "0x4F31430", Offset = "0x4F31430", VA = "0x4F31430")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000342")]
		[Address(RVA = "0x4F31440", Offset = "0x4F31440", VA = "0x4F31440")]
		set
		{
		}
	}

	[Token(Token = "0x6000343")]
	[Address(RVA = "0x4F314B0", Offset = "0x4F314B0", VA = "0x4F314B0")]
	public Button()
	{
	}

	[Token(Token = "0x6000344")]
	[Address(RVA = "0x4F314C0", Offset = "0x4F314C0", VA = "0x4F314C0")]
	public Button(Action clickEvent)
	{
	}

	[Token(Token = "0x6000345")]
	[Address(RVA = "0x4F31650", Offset = "0x4F31650", VA = "0x4F31650")]
	private void OnNavigationSubmit(NavigationSubmitEvent evt)
	{
	}

	[Token(Token = "0x6000346")]
	[Address(RVA = "0x4F31690", Offset = "0x4F31690", VA = "0x4F31690", Slot = "96")]
	protected internal override Vector2 DoMeasure(float desiredWidth, MeasureMode widthMode, float desiredHeight, MeasureMode heightMode)
	{
		return default(Vector2);
	}
}
