// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Label
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20000F9")]
public class Label : TextElement
{
	[Token(Token = "0x20000FA")]
	[Obsolete("UxmlFactory is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlFactory : UxmlFactory<Label, UxmlTraits>
	{
		[Token(Token = "0x600072F")]
		[Address(RVA = "0x6C0DA20", Offset = "0x6C0CA20", VA = "0x6C0DA20")]
		public UxmlFactory()
		{
		}
	}

	[Token(Token = "0x20000FB")]
	[Obsolete("UxmlTraits is deprecated and will be removed. Use UxmlElementAttribute instead.", false)]
	public new class UxmlTraits : TextElement.UxmlTraits
	{
		[Token(Token = "0x6000730")]
		[Address(RVA = "0x6C0DA60", Offset = "0x6C0CA60", VA = "0x6C0DA60")]
		public UxmlTraits()
		{
		}
	}

	[Token(Token = "0x4000444")]
	[FieldOffset(Offset = "0x0")]
	public new static readonly string ussClassName;

	[Token(Token = "0x600072C")]
	[Address(RVA = "0x6C0D8F0", Offset = "0x6C0C8F0", VA = "0x6C0D8F0")]
	public Label()
	{
	}

	[Token(Token = "0x600072D")]
	[Address(RVA = "0x6C0D910", Offset = "0x6C0C910", VA = "0x6C0D910")]
	public Label(string text)
	{
	}
}
