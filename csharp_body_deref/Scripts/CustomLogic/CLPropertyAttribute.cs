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

[Token(Token = "0x20003ED")]
[Conditional("UNITY_EDITOR")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field)]
internal class CLPropertyAttribute : CLBaseAttribute
{
	[Token(Token = "0x17000293")]
	public bool ReadOnly
	{
		[Token(Token = "0x600181E")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600181F")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000294")]
	public string[] TypeArguments
	{
		[Token(Token = "0x6001820")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001821")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000295")]
	public Type[] Enum
	{
		[Token(Token = "0x6001822")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6001823")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6001824")]
	[Address(RVA = "0x1ECD8F0", Offset = "0x1ECBEF0", VA = "0x181ECD8F0")]
	public CLPropertyAttribute(bool readOnly = false)
	{
	}
}
