// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.SharedInstanceHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000072")]
internal struct SharedInstanceHandle : IEquatable<SharedInstanceHandle>, IComparable<SharedInstanceHandle>
{
	[Token(Token = "0x4000208")]
	[FieldOffset(Offset = "0x0")]
	public static readonly SharedInstanceHandle Invalid;

	[Token(Token = "0x17000034")]
	public int index
	{
		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x65D35C0", Offset = "0x65D25C0", VA = "0x65D35C0")]
		[CompilerGenerated]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x65D35D0", Offset = "0x65D25D0", VA = "0x65D35D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public bool valid
	{
		[Token(Token = "0x60001F5")]
		[Address(RVA = "0x65D35E0", Offset = "0x65D25E0", VA = "0x65D35E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001F6")]
	[Address(RVA = "0x65D3640", Offset = "0x65D2640", VA = "0x65D3640", Slot = "4")]
	public bool Equals(SharedInstanceHandle other)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x65D3690", Offset = "0x65D2690", VA = "0x65D3690", Slot = "5")]
	public int CompareTo(SharedInstanceHandle other)
	{
		return default(int);
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x65D36F0", Offset = "0x65D26F0", VA = "0x65D36F0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
