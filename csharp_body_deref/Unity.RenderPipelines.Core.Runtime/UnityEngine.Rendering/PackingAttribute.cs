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

[Token(Token = "0x2000173")]
[AttributeUsage(AttributeTargets.Field, AllowMultiple = true)]
public class PackingAttribute : Attribute
{
	[Token(Token = "0x4000672")]
	[FieldOffset(Offset = "0x10")]
	public string[] displayNames;

	[Token(Token = "0x4000673")]
	[FieldOffset(Offset = "0x18")]
	public float[] range;

	[Token(Token = "0x4000674")]
	[FieldOffset(Offset = "0x20")]
	public FieldPacking packingScheme;

	[Token(Token = "0x4000675")]
	[FieldOffset(Offset = "0x24")]
	public int offsetInSource;

	[Token(Token = "0x4000676")]
	[FieldOffset(Offset = "0x28")]
	public int sizeInBits;

	[Token(Token = "0x4000677")]
	[FieldOffset(Offset = "0x2C")]
	public bool isDirection;

	[Token(Token = "0x4000678")]
	[FieldOffset(Offset = "0x2D")]
	public bool sRGBDisplay;

	[Token(Token = "0x4000679")]
	[FieldOffset(Offset = "0x2E")]
	public bool checkIsNormalized;

	[Token(Token = "0x400067A")]
	[FieldOffset(Offset = "0x30")]
	public string preprocessor;

	[Token(Token = "0x6000ACC")]
	[Address(RVA = "0x4BDEC50", Offset = "0x4BDEC50", VA = "0x4BDEC50")]
	public PackingAttribute(string[] displayNames, FieldPacking packingScheme = FieldPacking.NoPacking, int bitSize = 32, int offsetInSource = 0, float minValue = 0f, float maxValue = 1f, bool isDirection = false, bool sRGBDisplay = false, bool checkIsNormalized = false, string preprocessor = "")
	{
	}

	[Token(Token = "0x6000ACD")]
	[Address(RVA = "0x4BDED60", Offset = "0x4BDED60", VA = "0x4BDED60")]
	public PackingAttribute(string displayName = "", FieldPacking packingScheme = FieldPacking.NoPacking, int bitSize = 0, int offsetInSource = 0, float minValue = 0f, float maxValue = 1f, bool isDirection = false, bool sRGBDisplay = false, bool checkIsNormalized = false, string preprocessor = "")
	{
	}
}
