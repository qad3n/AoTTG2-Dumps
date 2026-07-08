using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using UnityEngine.Scripting;

namespace Unity.Properties;

[Token(Token = "0x2000002")]
[AttributeUsage(AttributeTargets.Property | AttributeTargets.Field)]
public class CreatePropertyAttribute : RequiredMemberAttribute
{
	[Token(Token = "0x17000001")]
	public bool ReadOnly
	{
		[Token(Token = "0x6000001")]
		[Address(RVA = "0x4B5BEC0", Offset = "0x4B5BEC0", VA = "0x4B5BEC0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000002")]
		[Address(RVA = "0x4B5BED0", Offset = "0x4B5BED0", VA = "0x4B5BED0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x6000003")]
	[Address(RVA = "0x4B5BEE0", Offset = "0x4B5BEE0", VA = "0x4B5BEE0")]
	public CreatePropertyAttribute()
	{
	}
}
