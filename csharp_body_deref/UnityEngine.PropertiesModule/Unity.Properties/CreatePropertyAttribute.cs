// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Properties.CreatePropertyAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace Unity.Properties;

[Token(Token = "0x200000A")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field)]
public class CreatePropertyAttribute : RequiredMemberAttribute
{
	[Token(Token = "0x17000002")]
	public bool ReadOnly
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x2FEAB40", Offset = "0x2FE9140", VA = "0x182FEAB40")]
	public CreatePropertyAttribute()
	{
	}
}
