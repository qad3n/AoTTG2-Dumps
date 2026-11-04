// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Rendering.GenerateHLSL
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000187")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum)]
public class GenerateHLSL : Attribute
{
	[Token(Token = "0x40007A5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public PackingRules packingRules;

	[Token(Token = "0x40007A6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	public bool containsPackedFields;

	[Token(Token = "0x40007A7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x15")]
	public bool needAccessors;

	[Token(Token = "0x40007A8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x16")]
	public bool needSetters;

	[Token(Token = "0x40007A9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x17")]
	public bool needParamDebug;

	[Token(Token = "0x40007AA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public int paramDefinesStart;

	[Token(Token = "0x40007AB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	public bool omitStructDeclaration;

	[Token(Token = "0x40007AC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D")]
	public bool generateCBuffer;

	[Token(Token = "0x40007AD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public int constantRegister;

	[Token(Token = "0x40007AE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public string sourcePath;

	[Token(Token = "0x6000BAC")]
	[Address(RVA = "0x2B40AB0", Offset = "0x2B3F0B0", VA = "0x182B40AB0")]
	public GenerateHLSL([Optional][DefaultParameterValue(0)] PackingRules rules, [Optional][DefaultParameterValue(true)] bool needAccessors, [Optional][DefaultParameterValue(false)] bool needSetters, [Optional][DefaultParameterValue(false)] bool needParamDebug, [Optional][DefaultParameterValue(1)] int paramDefinesStart, [Optional][DefaultParameterValue(false)] bool omitStructDeclaration, [Optional][DefaultParameterValue(false)] bool containsPackedFields, [Optional][DefaultParameterValue(false)] bool generateCBuffer, [Optional][DefaultParameterValue(-1)] int constantRegister, [Optional][CallerFilePath] string sourcePath)
	{
	}
}
