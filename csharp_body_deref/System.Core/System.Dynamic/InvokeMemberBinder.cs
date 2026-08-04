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

[Token(Token = "0x2000279")]
public abstract class InvokeMemberBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x17000285")]
	public string Name
	{
		[Token(Token = "0x6000C71")]
		[Address(RVA = "0x4510CD0", Offset = "0x4510CD0", VA = "0x4510CD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000286")]
	public bool IgnoreCase
	{
		[Token(Token = "0x6000C72")]
		[Address(RVA = "0x4510CE0", Offset = "0x4510CE0", VA = "0x4510CE0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x4510CF0", Offset = "0x4510CF0", VA = "0x4510CF0", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000C74")]
	[Address(RVA = "0x450F3B0", Offset = "0x450F3B0", VA = "0x450F3B0")]
	public DynamicMetaObject FallbackInvokeMember(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000C75")]
	public abstract DynamicMetaObject FallbackInvokeMember(DynamicMetaObject target, DynamicMetaObject[] args, DynamicMetaObject errorSuggestion);

	[Token(Token = "0x6000C76")]
	public abstract DynamicMetaObject FallbackInvoke(DynamicMetaObject target, DynamicMetaObject[] args, DynamicMetaObject errorSuggestion);
}
