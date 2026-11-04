// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.PackingAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x200018A")]
[AttributeUsage(AttributeTargets.Field, AllowMultiple = true)]
public class PackingAttribute : Attribute
{
	[Token(Token = "0x40007B7")]
	[FieldOffset(Offset = "0x10")]
	public string[] displayNames;

	[Token(Token = "0x40007B8")]
	[FieldOffset(Offset = "0x18")]
	public float[] range;

	[Token(Token = "0x40007B9")]
	[FieldOffset(Offset = "0x20")]
	public FieldPacking packingScheme;

	[Token(Token = "0x40007BA")]
	[FieldOffset(Offset = "0x24")]
	public int offsetInSource;

	[Token(Token = "0x40007BB")]
	[FieldOffset(Offset = "0x28")]
	public int sizeInBits;

	[Token(Token = "0x40007BC")]
	[FieldOffset(Offset = "0x2C")]
	public bool isDirection;

	[Token(Token = "0x40007BD")]
	[FieldOffset(Offset = "0x2D")]
	public bool sRGBDisplay;

	[Token(Token = "0x40007BE")]
	[FieldOffset(Offset = "0x2E")]
	public bool checkIsNormalized;

	[Token(Token = "0x40007BF")]
	[FieldOffset(Offset = "0x30")]
	public string preprocessor;

	[Token(Token = "0x6000BB0")]
	[Address(RVA = "0x2B41590", Offset = "0x2B3FB90", VA = "0x182B41590")]
	public PackingAttribute(string[] displayNames, FieldPacking packingScheme = FieldPacking.NoPacking, int bitSize = 32, int offsetInSource = 0, float minValue = 0f, float maxValue = 1f, bool isDirection = false, bool sRGBDisplay = false, bool checkIsNormalized = false, string preprocessor = "")
	{
	}

	[Token(Token = "0x6000BB1")]
	[Address(RVA = "0x2B41680", Offset = "0x2B3FC80", VA = "0x182B41680")]
	public PackingAttribute(string displayName = "", FieldPacking packingScheme = FieldPacking.NoPacking, int bitSize = 0, int offsetInSource = 0, float minValue = 0f, float maxValue = 1f, bool isDirection = false, bool sRGBDisplay = false, bool checkIsNormalized = false, string preprocessor = "")
	{
	}
}
