// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GPUInstanceIndex
// Update status: NEW in this game update
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
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60001FB")]
		[Address(RVA = "0x57AF10", Offset = "0x579510", VA = "0x18057AF10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public bool valid
	{
		[Token(Token = "0x60001FC")]
		[Address(RVA = "0x2BDCF10", Offset = "0x2BDB510", VA = "0x182BDCF10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x2BDCE30", Offset = "0x2BDB430", VA = "0x182BDCE30", Slot = "4")]
	public bool Equals(GPUInstanceIndex other)
	{
		return default(bool);
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x2BDCDC0", Offset = "0x2BDB3C0", VA = "0x182BDCDC0", Slot = "5")]
	public int CompareTo(GPUInstanceIndex other)
	{
		return default(int);
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x2BDCE80", Offset = "0x2BDB480", VA = "0x182BDCE80", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
