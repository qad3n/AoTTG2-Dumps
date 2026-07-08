using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x200000D")]
[VisibleToOtherModules]
[AttributeUsage(AttributeTargets.Method | AttributeTargets.Property)]
internal class NativeMethodAttribute : Attribute
{
	[Token(Token = "0x17000009")]
	public string Name
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x4B76560", Offset = "0x4B76560", VA = "0x4B76560", Slot = "7")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public bool IsThreadSafe
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x4B76570", Offset = "0x4B76570", VA = "0x4B76570", Slot = "8")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public bool IsFreeFunction
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x4B76580", Offset = "0x4B76580", VA = "0x4B76580", Slot = "9")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public bool ThrowsException
	{
		[Token(Token = "0x600001A")]
		[Address(RVA = "0x4B76590", Offset = "0x4B76590", VA = "0x4B76590", Slot = "10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000D")]
	public bool HasExplicitThis
	{
		[Token(Token = "0x600001B")]
		[Address(RVA = "0x4B765A0", Offset = "0x4B765A0", VA = "0x4B765A0", Slot = "11")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x4B765B0", Offset = "0x4B765B0", VA = "0x4B765B0")]
	public NativeMethodAttribute()
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x4B765C0", Offset = "0x4B765C0", VA = "0x4B765C0")]
	public NativeMethodAttribute(string name)
	{
	}

	[Token(Token = "0x600001E")]
	[Address(RVA = "0x4B766C0", Offset = "0x4B766C0", VA = "0x4B766C0")]
	public NativeMethodAttribute(string name, bool isFreeFunction)
	{
	}

	[Token(Token = "0x600001F")]
	[Address(RVA = "0x4B766E0", Offset = "0x4B766E0", VA = "0x4B766E0")]
	public NativeMethodAttribute(string name, bool isFreeFunction, bool isThreadSafe)
	{
	}
}
