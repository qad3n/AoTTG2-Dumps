// ==================== AoTTG2 cross-reference ====================
// Type: System.Dynamic.GetMemberBinder
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000277")]
public abstract class GetMemberBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x17000283")]
	public sealed override Type ReturnType
	{
		[Token(Token = "0x6000C70")]
		[Address(RVA = "0x5E256A0", Offset = "0x5E246A0", VA = "0x5E256A0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000284")]
	public string Name
	{
		[Token(Token = "0x6000C71")]
		[Address(RVA = "0x5E256D0", Offset = "0x5E246D0", VA = "0x5E256D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000285")]
	public bool IgnoreCase
	{
		[Token(Token = "0x6000C72")]
		[Address(RVA = "0x5E256E0", Offset = "0x5E246E0", VA = "0x5E256E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000286")]
	internal sealed override bool IsStandardBinder
	{
		[Token(Token = "0x6000C76")]
		[Address(RVA = "0x5E257F0", Offset = "0x5E247F0", VA = "0x5E257F0", Slot = "8")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000C6F")]
	[Address(RVA = "0x5E25600", Offset = "0x5E24600", VA = "0x5E25600")]
	protected GetMemberBinder(string name, bool ignoreCase)
	{
	}

	[Token(Token = "0x6000C73")]
	[Address(RVA = "0x5E23E50", Offset = "0x5E22E50", VA = "0x5E23E50")]
	public DynamicMetaObject FallbackGetMember(DynamicMetaObject target)
	{
		return null;
	}

	[Token(Token = "0x6000C74")]
	public abstract DynamicMetaObject FallbackGetMember(DynamicMetaObject target, DynamicMetaObject errorSuggestion);

	[Token(Token = "0x6000C75")]
	[Address(RVA = "0x5E256F0", Offset = "0x5E246F0", VA = "0x5E256F0", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}
}
