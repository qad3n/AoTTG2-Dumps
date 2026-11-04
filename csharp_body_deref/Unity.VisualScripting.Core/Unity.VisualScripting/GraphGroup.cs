// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.GraphGroup
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine;

namespace Unity.VisualScripting;

[Token(Token = "0x200008D")]
[SerializationVersion("A", new Type[] { })]
public sealed class GraphGroup : GraphElement<IGraph>
{
	[Token(Token = "0x400011E")]
	[FieldOffset(Offset = "0x0")]
	[DoNotSerialize]
	public static readonly Color defaultColor;

	[Token(Token = "0x170000F9")]
	[Serialize]
	public Rect position
	{
		[Token(Token = "0x600040D")]
		[Address(RVA = "0x181CEB0", Offset = "0x181B4B0", VA = "0x18181CEB0")]
		[CompilerGenerated]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x600040E")]
		[Address(RVA = "0x1B040F0", Offset = "0x1B026F0", VA = "0x181B040F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000FA")]
	[Serialize]
	public string label
	{
		[Token(Token = "0x600040F")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000410")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000FB")]
	[Serialize]
	[InspectorTextArea(minLines = 1f, maxLines = 10f)]
	public string comment
	{
		[Token(Token = "0x6000411")]
		[Address(RVA = "0x5853C0", Offset = "0x5839C0", VA = "0x1805853C0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000412")]
		[Address(RVA = "0xE8F700", Offset = "0xE8DD00", VA = "0x180E8F700")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000FC")]
	[Serialize]
	[Inspectable]
	public Color color
	{
		[Token(Token = "0x6000413")]
		[Address(RVA = "0x1C5E410", Offset = "0x1C5CA10", VA = "0x181C5E410")]
		[CompilerGenerated]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000414")]
		[Address(RVA = "0x1C5E490", Offset = "0x1C5CA90", VA = "0x181C5E490")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x2DA8570", Offset = "0x2DA6B70", VA = "0x182DA8570")]
	public GraphGroup()
	{
	}
}
