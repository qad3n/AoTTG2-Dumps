using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x20002B2")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct VertexAttributeDescriptor : IEquatable<VertexAttributeDescriptor>
{
	[Token(Token = "0x17000262")]
	public VertexAttribute attribute
	{
		[Token(Token = "0x6000E1E")]
		[Address(RVA = "0x4AF0D90", Offset = "0x4AF0D90", VA = "0x4AF0D90")]
		[CompilerGenerated]
		readonly get
		{
			return default(VertexAttribute);
		}
		[Token(Token = "0x6000E1F")]
		[Address(RVA = "0x4AF0DA0", Offset = "0x4AF0DA0", VA = "0x4AF0DA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000263")]
	public VertexAttributeFormat format
	{
		[Token(Token = "0x6000E20")]
		[Address(RVA = "0x4AF0DB0", Offset = "0x4AF0DB0", VA = "0x4AF0DB0")]
		[CompilerGenerated]
		readonly get
		{
			return default(VertexAttributeFormat);
		}
		[Token(Token = "0x6000E21")]
		[Address(RVA = "0x4AF0DC0", Offset = "0x4AF0DC0", VA = "0x4AF0DC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000264")]
	public int dimension
	{
		[Token(Token = "0x6000E22")]
		[Address(RVA = "0x4AF0DD0", Offset = "0x4AF0DD0", VA = "0x4AF0DD0")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000E23")]
		[Address(RVA = "0x4AF0DE0", Offset = "0x4AF0DE0", VA = "0x4AF0DE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000265")]
	public int stream
	{
		[Token(Token = "0x6000E24")]
		[Address(RVA = "0x4AF0DF0", Offset = "0x4AF0DF0", VA = "0x4AF0DF0")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000E25")]
		[Address(RVA = "0x4AF0E00", Offset = "0x4AF0E00", VA = "0x4AF0E00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000E26")]
	[Address(RVA = "0x4AF0E10", Offset = "0x4AF0E10", VA = "0x4AF0E10")]
	public VertexAttributeDescriptor(VertexAttribute attribute = VertexAttribute.Position, VertexAttributeFormat format = VertexAttributeFormat.Float32, int dimension = 3, int stream = 0)
	{
	}

	[Token(Token = "0x6000E27")]
	[Address(RVA = "0x4AF0E20", Offset = "0x4AF0E20", VA = "0x4AF0E20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000E28")]
	[Address(RVA = "0x4AF1030", Offset = "0x4AF1030", VA = "0x4AF1030", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000E29")]
	[Address(RVA = "0x4AF1060", Offset = "0x4AF1060", VA = "0x4AF1060", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000E2A")]
	[Address(RVA = "0x4AF10E0", Offset = "0x4AF10E0", VA = "0x4AF10E0", Slot = "4")]
	public bool Equals(VertexAttributeDescriptor other)
	{
		return default(bool);
	}
}
