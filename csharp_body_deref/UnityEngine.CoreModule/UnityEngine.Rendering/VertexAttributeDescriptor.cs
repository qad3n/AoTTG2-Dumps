// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.VertexAttributeDescriptor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000331")]
[UnityEngine.Scripting.UsedByNativeCode]
public struct VertexAttributeDescriptor : IEquatable<VertexAttributeDescriptor>
{
	[Token(Token = "0x170002FC")]
	public VertexAttribute attribute
	{
		[Token(Token = "0x60012AA")]
		[Address(RVA = "0x693D410", Offset = "0x693C410", VA = "0x693D410")]
		[CompilerGenerated]
		readonly get
		{
			return default(VertexAttribute);
		}
		[Token(Token = "0x60012AB")]
		[Address(RVA = "0x693D420", Offset = "0x693C420", VA = "0x693D420")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002FD")]
	public VertexAttributeFormat format
	{
		[Token(Token = "0x60012AC")]
		[Address(RVA = "0x693D430", Offset = "0x693C430", VA = "0x693D430")]
		[CompilerGenerated]
		readonly get
		{
			return default(VertexAttributeFormat);
		}
		[Token(Token = "0x60012AD")]
		[Address(RVA = "0x693D440", Offset = "0x693C440", VA = "0x693D440")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002FE")]
	public int dimension
	{
		[Token(Token = "0x60012AE")]
		[Address(RVA = "0x693D450", Offset = "0x693C450", VA = "0x693D450")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60012AF")]
		[Address(RVA = "0x693D460", Offset = "0x693C460", VA = "0x693D460")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002FF")]
	public int stream
	{
		[Token(Token = "0x60012B0")]
		[Address(RVA = "0x693D470", Offset = "0x693C470", VA = "0x693D470")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60012B1")]
		[Address(RVA = "0x693D480", Offset = "0x693C480", VA = "0x693D480")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60012B2")]
	[Address(RVA = "0x693D490", Offset = "0x693C490", VA = "0x693D490")]
	public VertexAttributeDescriptor(VertexAttribute attribute = VertexAttribute.Position, VertexAttributeFormat format = VertexAttributeFormat.Float32, int dimension = 3, int stream = 0)
	{
	}

	[Token(Token = "0x60012B3")]
	[Address(RVA = "0x693D4A0", Offset = "0x693C4A0", VA = "0x693D4A0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60012B4")]
	[Address(RVA = "0x693D6B0", Offset = "0x693C6B0", VA = "0x693D6B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60012B5")]
	[Address(RVA = "0x693D6E0", Offset = "0x693C6E0", VA = "0x693D6E0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60012B6")]
	[Address(RVA = "0x693D760", Offset = "0x693C760", VA = "0x693D760", Slot = "4")]
	public bool Equals(VertexAttributeDescriptor other)
	{
		return default(bool);
	}
}
