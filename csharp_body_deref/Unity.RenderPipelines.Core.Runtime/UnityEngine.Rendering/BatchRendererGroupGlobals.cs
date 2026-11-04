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
[Token(Token = "0x20001AE")]
[Obsolete("BatchRendererGroupGlobals and associated cbuffer are now set automatically by Unity. Setting it manually is no longer necessary or supported. #from(2023.1)")]
public struct BatchRendererGroupGlobals : IEquatable<BatchRendererGroupGlobals>
{
	[Token(Token = "0x400085E")]
	public const string kGlobalsPropertyName = "unity_DOTSInstanceGlobalValues";

	[Token(Token = "0x400085F")]
	[FieldOffset(Offset = "0x0")]
	public static readonly int kGlobalsPropertyId;

	[Token(Token = "0x4000860")]
	[FieldOffset(Offset = "0x0")]
	public Vector4 ProbesOcclusion;

	[Token(Token = "0x4000861")]
	[FieldOffset(Offset = "0x10")]
	public Vector4 SpecCube0_HDR;

	[Token(Token = "0x4000862")]
	[FieldOffset(Offset = "0x20")]
	public Vector4 SpecCube1_HDR;

	[Token(Token = "0x4000863")]
	[FieldOffset(Offset = "0x30")]
	public SHCoefficients SHCoefficients;

	[Token(Token = "0x1700019B")]
	public static BatchRendererGroupGlobals Default
	{
		[Token(Token = "0x6000CC8")]
		[Address(RVA = "0x2B35AB0", Offset = "0x2B340B0", VA = "0x182B35AB0")]
		get
		{
			return default(BatchRendererGroupGlobals);
		}
	}

	[Token(Token = "0x6000CC9")]
	[Address(RVA = "0x2B35650", Offset = "0x2B33C50", VA = "0x182B35650", Slot = "4")]
	public bool Equals(BatchRendererGroupGlobals other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CCA")]
	[Address(RVA = "0x2B35450", Offset = "0x2B33A50", VA = "0x182B35450", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CCB")]
	[Address(RVA = "0x2B358D0", Offset = "0x2B33ED0", VA = "0x182B358D0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000CCC")]
	[Address(RVA = "0x2B35C70", Offset = "0x2B34270", VA = "0x182B35C70")]
	public static bool operator ==(BatchRendererGroupGlobals left, BatchRendererGroupGlobals right)
	{
		return default(bool);
	}

	[Token(Token = "0x6000CCD")]
	[Address(RVA = "0x2B35D50", Offset = "0x2B34350", VA = "0x182B35D50")]
	public static bool operator !=(BatchRendererGroupGlobals left, BatchRendererGroupGlobals right)
	{
		return default(bool);
	}
}
