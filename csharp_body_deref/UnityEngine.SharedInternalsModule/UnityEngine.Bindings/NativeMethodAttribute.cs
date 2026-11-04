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
		[Address(RVA = "0xB8AC00", Offset = "0xB89200", VA = "0x180B8AC00", Slot = "7")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000009")]
	public bool IsThreadSafe
	{
		[Token(Token = "0x6000016")]
		[Address(RVA = "0x111C9F0", Offset = "0x111AFF0", VA = "0x18111C9F0", Slot = "8")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000A")]
	public bool IsFreeFunction
	{
		[Token(Token = "0x6000017")]
		[Address(RVA = "0x18C3360", Offset = "0x18C1960", VA = "0x1818C3360", Slot = "9")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000B")]
	public bool ThrowsException
	{
		[Token(Token = "0x6000018")]
		[Address(RVA = "0x1CB9D80", Offset = "0x1CB8380", VA = "0x181CB9D80", Slot = "10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700000C")]
	public bool HasExplicitThis
	{
		[Token(Token = "0x6000019")]
		[Address(RVA = "0x2DD7CD0", Offset = "0x2DD62D0", VA = "0x182DD7CD0", Slot = "11")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x600001A")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	public NativeMethodAttribute()
	{
	}

	[Token(Token = "0x600001B")]
	[Address(RVA = "0x2FF6FE0", Offset = "0x2FF55E0", VA = "0x182FF6FE0")]
	public NativeMethodAttribute(string name)
	{
	}

	[Token(Token = "0x600001C")]
	[Address(RVA = "0x2FF70F0", Offset = "0x2FF56F0", VA = "0x182FF70F0")]
	public NativeMethodAttribute(string name, bool isFreeFunction)
	{
	}

	[Token(Token = "0x600001D")]
	[Address(RVA = "0x2FF6FA0", Offset = "0x2FF55A0", VA = "0x182FF6FA0")]
	public NativeMethodAttribute(string name, bool isFreeFunction, bool isThreadSafe)
	{
	}
}
