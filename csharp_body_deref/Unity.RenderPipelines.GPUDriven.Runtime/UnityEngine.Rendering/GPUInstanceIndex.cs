// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUInstanceIndex
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000073")]
internal struct GPUInstanceIndex : IEquatable<GPUInstanceIndex>, IComparable<GPUInstanceIndex>
{
	[Token(Token = "0x400020A")]
	[FieldOffset(Offset = "0x0")]
	public static readonly GPUInstanceIndex Invalid;

	[Token(Token = "0x17000036")]
	public int index
	{
		[Token(Token = "0x60001FA")]
		[Address(RVA = "0x65D3790", Offset = "0x65D2790", VA = "0x65D3790")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x65D37A0", Offset = "0x65D27A0", VA = "0x65D37A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public bool valid
	{
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x65D37B0", Offset = "0x65D27B0", VA = "0x65D37B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x65D3810", Offset = "0x65D2810", VA = "0x65D3810", Slot = "4")]
	public bool Equals(GPUInstanceIndex other)
	{
		return default(bool);
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x65D3860", Offset = "0x65D2860", VA = "0x65D3860", Slot = "5")]
	public int CompareTo(GPUInstanceIndex other)
	{
		return default(int);
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x65D38C0", Offset = "0x65D28C0", VA = "0x65D38C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
