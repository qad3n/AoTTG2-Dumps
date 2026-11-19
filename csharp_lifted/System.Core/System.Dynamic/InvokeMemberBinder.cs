// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.InvokeMemberBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x200027A")]
public abstract class InvokeMemberBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x17000287")]
	public string Name
	{
		[Token(Token = "0x6000C7B")]
		[Address(RVA = "0x5E258F0", Offset = "0x5E248F0", VA = "0x5E258F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000288")]
	public bool IgnoreCase
	{
		[Token(Token = "0x6000C7C")]
		[Address(RVA = "0x5E25900", Offset = "0x5E24900", VA = "0x5E25900")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C7D")]
	[Address(RVA = "0x5E25910", Offset = "0x5E24910", VA = "0x5E25910", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000C7E")]
	[Address(RVA = "0x5E24000", Offset = "0x5E23000", VA = "0x5E24000")]
	public DynamicMetaObject FallbackInvokeMember(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000C7F")]
	public abstract DynamicMetaObject FallbackInvokeMember(DynamicMetaObject target, DynamicMetaObject[] args, DynamicMetaObject errorSuggestion);

	[Token(Token = "0x6000C80")]
	public abstract DynamicMetaObject FallbackInvoke(DynamicMetaObject target, DynamicMetaObject[] args, DynamicMetaObject errorSuggestion);
}
