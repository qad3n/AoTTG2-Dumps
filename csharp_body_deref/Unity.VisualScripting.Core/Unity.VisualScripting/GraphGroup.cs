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
		[Address(RVA = "0x498F9E0", Offset = "0x498F9E0", VA = "0x498F9E0")]
		[CompilerGenerated]
		get
		{
			return default(Rect);
		}
		[Token(Token = "0x6000404")]
		[Address(RVA = "0x498F9F0", Offset = "0x498F9F0", VA = "0x498F9F0")]
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
		[Address(RVA = "0x498FA00", Offset = "0x498FA00", VA = "0x498FA00")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000406")]
		[Address(RVA = "0x498FA10", Offset = "0x498FA10", VA = "0x498FA10")]
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
		[Address(RVA = "0x498FA20", Offset = "0x498FA20", VA = "0x498FA20")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000408")]
		[Address(RVA = "0x498FA30", Offset = "0x498FA30", VA = "0x498FA30")]
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
		[Address(RVA = "0x498FA40", Offset = "0x498FA40", VA = "0x498FA40")]
		[CompilerGenerated]
		get
		{
			return default(Color);
		}
		[Token(Token = "0x600040A")]
		[Address(RVA = "0x498FA50", Offset = "0x498FA50", VA = "0x498FA50")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x498F940", Offset = "0x498F940", VA = "0x498F940")]
	public GraphGroup()
	{
	}
}
