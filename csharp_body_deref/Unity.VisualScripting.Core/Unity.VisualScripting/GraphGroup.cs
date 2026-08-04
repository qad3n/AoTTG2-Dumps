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
	[Token(Token = "0x4000120")]
	[FieldOffset(Offset = "0x0")]
	[DoNotSerialize]
	public static readonly Color defaultColor;

	[Token(Token = "0x170000F6")]
	[Serialize]
	public Rect position
	{
		[Token(Token = "0x6000403")]
		[Address(RVA = "0x4CB45B0", Offset = "0x4CB45B0", VA = "0x4CB45B0")]
		[CompilerGenerated]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000404")]
		[Address(RVA = "0x4CB45C0", Offset = "0x4CB45C0", VA = "0x4CB45C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000F7")]
	[Serialize]
	public string label
	{
		[Token(Token = "0x6000405")]
		[Address(RVA = "0x4CB45D0", Offset = "0x4CB45D0", VA = "0x4CB45D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000406")]
		[Address(RVA = "0x4CB45E0", Offset = "0x4CB45E0", VA = "0x4CB45E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000F8")]
	[Serialize]
	[InspectorTextArea(minLines = 1f, maxLines = 10f)]
	public string comment
	{
		[Token(Token = "0x6000407")]
		[Address(RVA = "0x4CB45F0", Offset = "0x4CB45F0", VA = "0x4CB45F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000408")]
		[Address(RVA = "0x4CB4600", Offset = "0x4CB4600", VA = "0x4CB4600")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000F9")]
	[Serialize]
	[Inspectable]
	public Color color
	{
		[Token(Token = "0x6000409")]
		[Address(RVA = "0x4CB4610", Offset = "0x4CB4610", VA = "0x4CB4610")]
		[CompilerGenerated]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600040A")]
		[Address(RVA = "0x4CB4620", Offset = "0x4CB4620", VA = "0x4CB4620")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x4CB4510", Offset = "0x4CB4510", VA = "0x4CB4510")]
	public GraphGroup()
	{
	}
}
