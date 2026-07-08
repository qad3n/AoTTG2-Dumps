using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.Rendering;

[Token(Token = "0x2000170")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Enum)]
public class GenerateHLSL : Attribute
{
	[Token(Token = "0x4000660")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	public PackingRules packingRules;

	[Token(Token = "0x4000661")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x14")]
	public bool containsPackedFields;

	[Token(Token = "0x4000662")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x15")]
	public bool needAccessors;

	[Token(Token = "0x4000663")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x16")]
	public bool needSetters;

	[Token(Token = "0x4000664")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x17")]
	public bool needParamDebug;

	[Token(Token = "0x4000665")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	public int paramDefinesStart;

	[Token(Token = "0x4000666")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1C")]
	public bool omitStructDeclaration;

	[Token(Token = "0x4000667")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x1D")]
	public bool generateCBuffer;

	[Token(Token = "0x4000668")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	public int constantRegister;

	[Token(Token = "0x4000669")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	public string sourcePath;

	[Token(Token = "0x6000AC8")]
	[Address(RVA = "0x48B99C0", Offset = "0x48B99C0", VA = "0x48B99C0")]
	public GenerateHLSL([Optional][DefaultParameterValue(0)] PackingRules rules, [Optional][DefaultParameterValue(true)] bool needAccessors, [Optional][DefaultParameterValue(false)] bool needSetters, [Optional][DefaultParameterValue(false)] bool needParamDebug, [Optional][DefaultParameterValue(1)] int paramDefinesStart, [Optional][DefaultParameterValue(false)] bool omitStructDeclaration, [Optional][DefaultParameterValue(false)] bool containsPackedFields, [Optional][DefaultParameterValue(false)] bool generateCBuffer, [Optional][DefaultParameterValue(-1)] int constantRegister, [Optional][CallerFilePath] string sourcePath)
	{
	}
}
