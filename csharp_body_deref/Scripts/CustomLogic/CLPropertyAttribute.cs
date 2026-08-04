// ==================== AoTTG2 cross-reference ====================
// Type: CustomLogic.CLPropertyAttribute
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/CustomLogic/CLPropertyAttribute.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace CustomLogic;

[Token(Token = "0x20002A2")]
[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field)]
internal class CLPropertyAttribute : CLBaseAttribute
{
	[Token(Token = "0x170001DE")]
	public bool ReadOnly
	{
		[Token(Token = "0x6000F9C")]
		[Address(RVA = "0x3FB9330", Offset = "0x3FB9330", VA = "0x3FB9330")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000F9D")]
		[Address(RVA = "0x3FB9340", Offset = "0x3FB9340", VA = "0x3FB9340")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001DF")]
	public string[] TypeArguments
	{
		[Token(Token = "0x6000F9E")]
		[Address(RVA = "0x3FB9350", Offset = "0x3FB9350", VA = "0x3FB9350")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000F9F")]
		[Address(RVA = "0x3FB9360", Offset = "0x3FB9360", VA = "0x3FB9360")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170001E0")]
	public Type[] Enum
	{
		[Token(Token = "0x6000FA0")]
		[Address(RVA = "0x3FB9370", Offset = "0x3FB9370", VA = "0x3FB9370")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000FA1")]
		[Address(RVA = "0x3FB9380", Offset = "0x3FB9380", VA = "0x3FB9380")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000FA2")]
	[Address(RVA = "0x3FB9390", Offset = "0x3FB9390", VA = "0x3FB9390")]
	public CLPropertyAttribute(bool readOnly = false)
	{
	}
}
