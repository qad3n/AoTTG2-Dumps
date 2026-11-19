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
		[Address(RVA = "0x67A3220", Offset = "0x67A2220", VA = "0x67A3220")]
		[CompilerGenerated]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x600040E")]
		[Address(RVA = "0x67A3230", Offset = "0x67A2230", VA = "0x67A3230")]
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
		[Address(RVA = "0x67A3240", Offset = "0x67A2240", VA = "0x67A3240")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000410")]
		[Address(RVA = "0x67A3250", Offset = "0x67A2250", VA = "0x67A3250")]
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
		[Address(RVA = "0x67A3260", Offset = "0x67A2260", VA = "0x67A3260")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000412")]
		[Address(RVA = "0x67A3270", Offset = "0x67A2270", VA = "0x67A3270")]
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
		[Address(RVA = "0x67A3280", Offset = "0x67A2280", VA = "0x67A3280")]
		[CompilerGenerated]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x6000414")]
		[Address(RVA = "0x67A3290", Offset = "0x67A2290", VA = "0x67A3290")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x67A3180", Offset = "0x67A2180", VA = "0x67A3180")]
	public GraphGroup()
	{
	}
}
