// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.SetMemberBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x200027B")]
public abstract class SetMemberBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x17000287")]
	public sealed override Type ReturnType
	{
		[Token(Token = "0x6000C7A")]
		[Address(RVA = "0x1C79630", Offset = "0x1C77C30", VA = "0x181C79630", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000288")]
	public string Name
	{
		[Token(Token = "0x6000C7B")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000289")]
	public bool IgnoreCase
	{
		[Token(Token = "0x6000C7C")]
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700028A")]
	internal sealed override bool IsStandardBinder
	{
		[Token(Token = "0x6000C7E")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C79")]
	[Address(RVA = "0x2489370", Offset = "0x2487970", VA = "0x182489370")]
	protected SetMemberBinder(string name, bool ignoreCase)
	{
	}

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x24891E0", Offset = "0x24877E0", VA = "0x1824891E0", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000C7F")]
	[Address(RVA = "0x2466850", Offset = "0x2464E50", VA = "0x182466850")]
	public DynamicMetaObject FallbackSetMember(DynamicMetaObject target, DynamicMetaObject value)
	{
		return null;
	}

	[Token(Token = "0x6000C80")]
	public abstract DynamicMetaObject FallbackSetMember(DynamicMetaObject target, DynamicMetaObject value, DynamicMetaObject errorSuggestion);
}
