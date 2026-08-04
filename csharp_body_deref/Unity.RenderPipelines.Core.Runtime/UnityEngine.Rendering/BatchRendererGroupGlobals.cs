// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.BatchRendererGroupGlobals
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Serializable]
[Token(Token = "0x2000197")]
[Obsolete("BatchRendererGroupGlobals and associated cbuffer are now set automatically by Unity. Setting it manually is no longer necessary or supported.")]
public struct BatchRendererGroupGlobals : IEquatable<BatchRendererGroupGlobals>
{
	[Token(Token = "0x4000716")]
	public const string kGlobalsPropertyName = "unity_DOTSInstanceGlobalValues";

	[Token(Token = "0x4000717")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int kGlobalsPropertyId;

	[Token(Token = "0x4000718")]
	[FieldOffset(Offset = "0x0")]
	public Vector4 ProbesOcclusion;

	[Token(Token = "0x4000719")]
	[FieldOffset(Offset = "0x10")]
	public Vector4 SpecCube0_HDR;

	[Token(Token = "0x400071A")]
	[FieldOffset(Offset = "0x20")]
	public Vector4 SpecCube1_HDR;

	[Token(Token = "0x400071B")]
	[FieldOffset(Offset = "0x30")]
	public SHCoefficients SHCoefficients;

	[Token(Token = "0x17000150")]
	public static BatchRendererGroupGlobals Default
	{
		[Token(Token = "0x6000BAF")]
		[Address(RVA = "0x4BEF5D0", Offset = "0x4BEF5D0", VA = "0x4BEF5D0")]
		get
		{
			return default(BatchRendererGroupGlobals);
		}
	}

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x4BEF820", Offset = "0x4BEF820", VA = "0x4BEF820", Slot = "4")]
	public bool Equals(BatchRendererGroupGlobals other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x4BEFA80", Offset = "0x4BEFA80", VA = "0x4BEFA80", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x4BEFDF0", Offset = "0x4BEFDF0", VA = "0x4BEFDF0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x4BEFFB0", Offset = "0x4BEFFB0", VA = "0x4BEFFB0")]
	public static bool operator ==(BatchRendererGroupGlobals left, BatchRendererGroupGlobals right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x4BF0310", Offset = "0x4BF0310", VA = "0x4BF0310")]
	public static bool operator !=(BatchRendererGroupGlobals left, BatchRendererGroupGlobals right)
	{
		return default(bool);
	}
}
