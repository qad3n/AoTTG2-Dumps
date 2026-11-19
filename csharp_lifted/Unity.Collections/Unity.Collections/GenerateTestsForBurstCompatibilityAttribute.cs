// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.GenerateTestsForBurstCompatibilityAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.Collections;

[Token(Token = "0x200007D")]
[AttributeUsage(AttributeTargets.Class | AttributeTargets.Struct | AttributeTargets.Constructor | AttributeTargets.Method | AttributeTargets.Property, AllowMultiple = true)]
public class GenerateTestsForBurstCompatibilityAttribute : Attribute
{
	[Token(Token = "0x200007E")]
	public enum BurstCompatibleCompileTarget
	{
		[Token(Token = "0x40003A1")]
		Player,
		[Token(Token = "0x40003A2")]
		Editor,
		[Token(Token = "0x40003A3")]
		PlayerAndEditor
	}

	[Token(Token = "0x400039E")]
	[FieldOffset(Offset = "0x18")]
	public string RequiredUnityDefine;

	[Token(Token = "0x400039F")]
	[FieldOffset(Offset = "0x20")]
	public BurstCompatibleCompileTarget CompileTarget;

	[Token(Token = "0x170000A8")]
	public Type[] GenericTypeArguments
	{
		[Token(Token = "0x60006D6")]
		[Address(RVA = "0x637C8D0", Offset = "0x637B8D0", VA = "0x637C8D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60006D7")]
		[Address(RVA = "0x637C8E0", Offset = "0x637B8E0", VA = "0x637C8E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60006D8")]
	[Address(RVA = "0x637C8F0", Offset = "0x637B8F0", VA = "0x637C8F0")]
	public GenerateTestsForBurstCompatibilityAttribute()
	{
	}
}
