// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Bindings.NativeMethodAttribute
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.Bindings;

[Token(Token = "0x200000C")]
[AttributeUsage(AttributeTargets.Method | AttributeTargets.Property)]
[VisibleToOtherModules]
internal class NativeMethodAttribute : Attribute
{
	[Token(Token = "0x17000008")]
	public string Name
	{
		[Token(Token = "0x6000015")]
		[Address(RVA = "0x69F1530", Offset = "0x69F0530", VA = "0x69F1530", Slot = "7")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public bool IsThreadSafe
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x69F1540", Offset = "0x69F0540", VA = "0x69F1540", Slot = "8")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public bool IsFreeFunction
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x69F1550", Offset = "0x69F0550", VA = "0x69F1550", Slot = "9")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public bool ThrowsException
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x69F1560", Offset = "0x69F0560", VA = "0x69F1560", Slot = "10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public bool HasExplicitThis
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x69F1570", Offset = "0x69F0570", VA = "0x69F1570", Slot = "11")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x69F1580", Offset = "0x69F0580", VA = "0x69F1580")]
	public NativeMethodAttribute()
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x69F1590", Offset = "0x69F0590", VA = "0x69F1590")]
	public NativeMethodAttribute(string name)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x69F1690", Offset = "0x69F0690", VA = "0x69F1690")]
	public NativeMethodAttribute(string name, bool isFreeFunction)
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x69F16B0", Offset = "0x69F06B0", VA = "0x69F16B0")]
	public NativeMethodAttribute(string name, bool isFreeFunction, bool isThreadSafe)
	{
	}
}
