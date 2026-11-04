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
	[Token(Token = "0x170002F7")]
	public VertexAttribute attribute
	{
		[Token(Token = "0x6001296")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		[CompilerGenerated]
		readonly get
		{
			return default(VertexAttribute);
		}
		[Token(Token = "0x6001297")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002F8")]
	public VertexAttributeFormat format
	{
		[Token(Token = "0x6001298")]
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
		[CompilerGenerated]
		readonly get
		{
			return default(VertexAttributeFormat);
		}
		[Token(Token = "0x6001299")]
		[Address(RVA = "0x57AF00", Offset = "0x579500", VA = "0x18057AF00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002F9")]
	public int dimension
	{
		[Token(Token = "0x600129A")]
		[Address(RVA = "0x57AEE0", Offset = "0x5794E0", VA = "0x18057AEE0")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x600129B")]
		[Address(RVA = "0x57AF20", Offset = "0x579520", VA = "0x18057AF20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170002FA")]
	public int stream
	{
		[Token(Token = "0x600129C")]
		[Address(RVA = "0x57AEF0", Offset = "0x5794F0", VA = "0x18057AEF0")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x600129D")]
		[Address(RVA = "0x57AF30", Offset = "0x579530", VA = "0x18057AF30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600129E")]
	[Address(RVA = "0x1055D90", Offset = "0x1054390", VA = "0x181055D90")]
	public VertexAttributeDescriptor(VertexAttribute attribute = VertexAttribute.Position, VertexAttributeFormat format = VertexAttributeFormat.Float32, int dimension = 3, int stream = 0)
	{
	}

	[Token(Token = "0x600129F")]
	[Address(RVA = "0x2F5ED80", Offset = "0x2F5D380", VA = "0x182F5ED80", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60012A0")]
	[Address(RVA = "0x2F5ED50", Offset = "0x2F5D350", VA = "0x182F5ED50", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60012A1")]
	[Address(RVA = "0x2F5ECA0", Offset = "0x2F5D2A0", VA = "0x182F5ECA0", Slot = "0")]
	public override bool Equals(object other)
	{
		return default(bool);
	}

	[Token(Token = "0x60012A2")]
	[Address(RVA = "0x2ED0450", Offset = "0x2ECEA50", VA = "0x182ED0450", Slot = "4")]
	public bool Equals(VertexAttributeDescriptor other)
	{
		return default(bool);
	}
}
